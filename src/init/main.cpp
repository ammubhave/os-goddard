//#include <stdint.h>
#include <io.h>
#include <iostream.h>
//#include <stdlib.h>
//#include <descriptor_tables.h>

void main(void *mboot_ptr)
{
	//descriptor_tables::init_descriptor_tables();
	//asm volatile ("sti");
	
	kout << "Hello!\n";
	//
	//asm volatile ("int $0x3");
	//asm volatile ("int $0x4");
	//kout << "$";
	
	
	asm volatile("mov $0xDEADBEEFDEADBABA, %rdx");
	asm volatile("hlt");
	//return sizeof(intmax_t);	
}

extern "C" void __cxa_pure_virtual()
{
    // Do nothing or print an error message.
}