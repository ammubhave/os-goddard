#ifndef __DESCRIPTOR_TABLES_H
#define __DESCRIPTOR_TABLES_H

#include <stdint.h>

namespace descriptor_tables
{
    struct gdt_entry_struct
    {
       uint16 limit_low;           // The lower 16 bits of the limit.
       uint16 base_low;            // The lower 16 bits of the base.
       uint8  base_middle;         // The next 8 bits of the base.
       uint8  access;              // Access flags, determine what ring this segment can be used in.
       uint8  granularity;
       uint8  base_high;           // The last 8 bits of the base.
    } __attribute__((packed));
    typedef struct gdt_entry_struct gdt_entry_t;
    
    struct gdt_ptr_struct
    {
       uint16 limit;               // The upper 16 bits of all selector limits.
       uint32 base;                // The address of the first gdt_entry_t struct.
    }
     __attribute__((packed));
    typedef struct gdt_ptr_struct gdt_ptr_t;
    
    // A struct describing an interrupt gate.
    struct idt_entry_struct
    {
        u16int base_lo;             // The lower 16 bits of the address to jump to when this interrupt fires.
        u16int sel;                 // Kernel segment selector.
        u8int  always0;             // This must always be zero.
        u8int  flags;               // More flags. See documentation.
        u16int base_hi;             // The upper 16 bits of the address to jump to.
    } __attribute__((packed));
    
    typedef struct idt_entry_struct idt_entry_t;
    
    // A struct describing a pointer to an array of interrupt handlers.
    // This is in a format suitable for giving to 'lidt'.
    struct idt_ptr_struct
    {
        u16int limit;
        u32int base;                // The address of the first element in our idt_entry_t array.
    } __attribute__((packed));
    
    typedef struct idt_ptr_struct idt_ptr_t;

    void init_descriptor_tables();
}


// These extern directives let us access the addresses of our ASM ISR handlers.
extern "C" void isr0 ();
extern "C" void isr1 ();
extern "C" void isr2 ();
extern "C" void isr3 ();
extern "C" void isr4 ();
extern "C" void isr5 ();
extern "C" void isr6 ();
extern "C" void isr7 ();
extern "C" void isr8 ();
extern "C" void isr9 ();
extern "C" void isr10();
extern "C" void isr11();
extern "C" void isr12();
extern "C" void isr13();
extern "C" void isr14();
extern "C" void isr15();
extern "C" void isr16();
extern "C" void isr17();
extern "C" void isr18();
extern "C" void isr19();
extern "C" void isr20();
extern "C" void isr21();
extern "C" void isr22();
extern "C" void isr23();
extern "C" void isr24();
extern "C" void isr25();
extern "C" void isr26();
extern "C" void isr27();
extern "C" void isr28();
extern "C" void isr29();
extern "C" void isr30();
extern "C" void isr31();


#endif