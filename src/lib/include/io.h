#ifndef __IO_H
#define __IO_H

#include <cstdint>

void outb(uint16_t port, uint8_t value);
uint8_t inb(uint16_t port);
uint16_t inw(uint16_t port);

#endif
