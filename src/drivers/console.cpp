#include <stdint.h>
#include <io.h>
#include <console.h>

uint8_t back_color = 0, fore_color = 15;
uint16_t cursor_x = 0, cursor_y = 0;
uint16_t* video_memory = (uint16_t*)0xB8000;

static void console_scroll();
static void console_move_cursor();

void console_putchar(char c)
{
   uint8_t  attributeByte = (back_color << 4) | (fore_color & 0x0F);   
   uint16_t attribute = attributeByte << 8;
   uint16_t *location;

   if (c == 0x08 && cursor_x) // Backspace
   {
       cursor_x--;
   }
   
   else if (c == 0x09) // Tab
   {
       cursor_x = (cursor_x+8) & ~(8-1);
   }

   else if (c == '\r')
   {
       cursor_x = 0;
   }

   else if (c == '\n')
   {
       cursor_x = 0;
       cursor_y++;
   }
   
   else if(c >= ' ')
   {
       location = video_memory + (cursor_y*80 + cursor_x);
       *location = c | attribute;
       cursor_x++;
   }

   if (cursor_x >= 80)
   {
       cursor_x = 0;
       cursor_y ++;
   }

   console_scroll();
   console_move_cursor();
}

static void console_move_cursor()
{
   uint16_t cursorLocation = cursor_y * 80 + cursor_x;
   outb(0x3D4, 14);                  // Tell the VGA board we are setting the high cursor byte.
   outb(0x3D5, cursorLocation >> 8); // Send the high cursor byte.
   outb(0x3D4, 15);                  // Tell the VGA board we are setting the low cursor byte.
   outb(0x3D5, cursorLocation);      // Send the low cursor byte.
}

static void console_scroll()
{

   // Get a space character with the default colour attributes.
   uint8_t attributeByte = (back_color << 4) | (fore_color & 0x0F);
   uint16_t blank = 0x20 /* space */ | (attributeByte << 8);

   // Row 25 is the end, this means we need to scroll up
   if(cursor_y >= 25)
   {
       // Move the current text chunk that makes up the screen
       // back in the buffer by a line
       int i;
       for (i = 0*80; i < 24*80; i++)
       {
           video_memory[i] = video_memory[i+80];
       }

       // The last line should now be blank. Do this by writing
       // 80 spaces to it.
       for (i = 24*80; i < 25*80; i++)
       {
           video_memory[i] = blank;
       }
       // The cursor should now be on the last line.
       cursor_y = 24;
   }
}

void console_clear()
{   
   uint8_t attributeByte = (back_color << 4) | (fore_color & 0x0F);
   uint16_t blank = 0x20 /* space */ | (attributeByte << 8);

   int i;
   for (i = 0; i < 80*25; i++)
   {
       video_memory[i] = blank;
   }

   // Move the hardware cursor back to the start.
   cursor_x = 0;
   cursor_y = 0;
   console_move_cursor();
}