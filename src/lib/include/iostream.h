#ifndef __IOSTREAM_H
#define __IOSTREAM_H

class KConsoleOut
{
public:
    KConsoleOut& operator<<(char);
    KConsoleOut& operator<<(char*);
    
    void put(char);
    void putint(long);
};

static KConsoleOut kout;

#endif
