ENTRY(reset)

MEMORY
{
    Mem (rwx): ORIGIN = 0x00000000 , LENGTH = 64M
}

SECTIONS
{
   . = 0x10000; 
   .Startup . :
   {
       startup.o(.text)
   }> Mem
   .Text :
   {
       *(.text)
   }> Mem
   .Data :
   {
       *(.data)
   }> Mem
   .Bss :
   {
       *(.bss) *(COMMON)
   }> Mem
   . = . + 0x1000;
   stack_pointer = .;
}