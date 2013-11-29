#include <stdint.h>
#include <console.h>
#include <iostream.h>
#include <stdlib.h>

void KConsoleOut::put(char c)
{
    console_putchar(c);
}
void KConsoleOut::putint(long n)
{
    //*this << itoa(n);
}

KConsoleOut& KConsoleOut::operator<<(char c)
{
    this->put(c);
    return *this;
}

KConsoleOut& KConsoleOut::operator<<(char* s)
{
    while(*s)
        *this << *(s++);
    return *this;
}