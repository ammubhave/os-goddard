ISO := os-goddard.iso
OUTPUT := kernel.sys

SOURCES_INIT := src/init/boot.o src/init/main.o 

#src/init/descriptor_tables.o src/init/gdt.o \
				#src/init/interrupt.o  src/init/isr.o
SOURCES_LIB := src/lib/io.o src/lib/iostream.o
#src/lib/stdlib.o src/lib/string.o
SOURCES_DRIVERS := src/drivers/console.o

CPPFLAGS=-ffreestanding -m64 -mcmodel=kernel -mno-red-zone -nostdlib -fno-builtin -fno-stack-protector -std=c++11 -ggdb -O2 -Wall -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-main -I src/lib/include -I src/drivers/include -I src/include 
LDFLAGS=-Tsrc/link.ld
ASFLAGS=-felf64

all: $(ISO)
	
$(ISO): $(OUTPUT)
	cp $(OUTPUT) iso/boot
	#mkisofs -R -b boot/grub/stage2_eltorito -no-emul-boot -boot-load-size 4 -boot-info-table -o os-goddard.iso iso
	#sudo losetup /dev/loop0 floppy.img
	#sudo mount /dev/loop0 /mnt
	#sudo cp $(OUTPUT) /mnt/kernel
	#sudo umount /dev/loop0
	#sudo losetup -d /dev/loop0
	grub-mkrescue -o $(ISO) iso
    

#;cp $(OUTPUT) iso/boot 
#	grub-mkrescue -o $(ISO) iso
		 
$(OUTPUT): $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS) link

clean:
	@rm -f $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS) $(OUTPUT)

link:
	ld -nodefaultlibs $(LDFLAGS) -o $(OUTPUT) $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS)

.s.o:
	nasm $(ASFLAGS) $<
