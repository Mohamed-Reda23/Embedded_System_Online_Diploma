#@copyright : Mohamed
CC=arm-none-eabi-
CCFLAGS=-g -mcpu=arm926ej-s 
INC=-I .
LIB=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
ASMS=$(wildcard *.s)
ASOBJ=$(ASMS:.s=.o)
Project_NAME=Uart

all: $(Project_NAME).bin
	@echo "==========Build is done=========="

%.o: %.s
	$(CC)as.exe $(CCFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INC) $(CCFLAGS) $< -o $@

$(Project_NAME).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(ASOBJ) $(OBJ) -o $@

$(Project_NAME).bin: $(Project_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
