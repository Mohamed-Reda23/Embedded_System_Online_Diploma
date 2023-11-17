#@copyright : Mohamed
CC=arm-none-eabi-
CCFLAGS= -mcpu=cortex-m3 -gdwarf-2
INC=-I .
LIB=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
ASMS=$(wildcard *.s)
ASOBJ=$(ASMS:.s=.o)
Project_NAME=PD

all_hex: $(Project_NAME).hex
	@echo "==========Build is done=========="

all_bin: $(Project_NAME).bin
	@echo "==========Build is done=========="

%.o: %.s
	$(CC)as.exe $(CCFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INC) $(CCFLAGS) $< -o $@

$(Project_NAME).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T Linker_Script.ld $(ASOBJ) $(OBJ) -o $@ -Map=$(Project_NAME).map

$(Project_NAME).bin: $(Project_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

$(Project_NAME).hex: $(Project_NAME).elf
	$(CC)objcopy.exe -O ihex $< $@

clean_all:
	rm *.o *.elf *.bin *.map *.hex

clean:
	rm *.elf *.bin *.map *.hex
