#ifndef __IOSTREAM_H
#define __IOSTREAM_H

class KConsoleOut
{
public:
    KConsoleOut& operator<<(char);
    KConsoleOut& operator<<(char*);
};

static KConsoleOut kout;

#endif