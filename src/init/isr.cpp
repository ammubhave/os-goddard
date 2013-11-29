
//
// isr.c -- High level interrupt service routines and interrupt request handlers.
//          Part of this code is modified from Bran's kernel development tutorials.
//          Rewritten for JamesM's kernel development tutorials.
//

#include "stdint.h"
#include "isr.h"
#include "iostream.h"

// This gets called from our ASM interrupt handler stub.
extern "C" void isr_handler(registers_t regs)
{
    kout << "recieved interrupt: ";
    kout.putint(regs.int_no);
    kout << '\n';
    
}