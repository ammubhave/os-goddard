#include <stdint.h>
#include <console.h>
#include <iostream.h>

KConsoleOut& KConsoleOut::operator<<(char c)
{
    console_putchar(c);
    return *this;
}

KConsoleOut& KConsoleOut::operator<<(char* s)
{
    while(*s)
        *this << *(s++);
    return *this;
}