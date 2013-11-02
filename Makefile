ISO := os.iso
OUTPUT := kernel.sys

SOURCES_INIT := src/init/boot.o src/init/main.o
SOURCES_LIB := src/lib/io.o src/lib/iostream.o src/lib/stdlib.o
SOURCES_DRIVERS := src/drivers/console.o

CPPFLAGS=-nostdlib -nostdinc -fno-builtin -m32 -fno-stack-protector -ggdb -O2 -Wall -Wextra  -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-main -I src/lib/include -I src/drivers/include
LDFLAGS=-Tsrc/link.ld -melf_i386
ASFLAGS=-felf

all: $(ISO)
	
$(ISO): $(OUTPUT)
	sudo losetup /dev/loop0 floppy.img
	sudo mount /dev/loop0 /mnt
	sudo cp $(OUTPUT) /mnt/kernel
	sudo umount /dev/loop0
	sudo losetup -d /dev/loop0

#;cp $(OUTPUT) iso/boot 
#	grub-mkrescue -o $(ISO) iso
		 
$(OUTPUT): $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS) link

clean:
	@rm -f $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS) $(OUTPUT)

link:
	ld -nodefaultlibs $(LDFLAGS) -o $(OUTPUT) $(SOURCES_INIT) $(SOURCES_LIB) $(SOURCES_DRIVERS)

.s.o:
	nasm $(ASFLAGS) $<
