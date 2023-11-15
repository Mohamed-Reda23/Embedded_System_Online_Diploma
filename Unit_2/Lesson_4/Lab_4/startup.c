#include"STD_TYPES.h"

void Reset_Handler();
extern int main(void);
void Default_Handler()
{
    Reset_Handler();
}
extern unsigned int _S_data;
extern unsigned int _E_text;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void NMI_Handler()__attribute__ ((weak, alias ("Default_Handler")));;
void H_fault_Handler()__attribute__ ((weak, alias ("Default_Handler")));;


static unsigned long stack_top[256];

void (*const g_p_fnvector[])()__attribute__((section(".vectors")))=
{
    (void (*)()) ((unsigned long)stack_top + sizeof(stack_top)),
    &Reset_Handler,
    &NMI_Handler,
    &H_fault_Handler
};



void Reset_Handler()
{
    // copy .data section from flash to s-ram //
    unsigned int data_size= (unsigned char *)&_E_data - (unsigned char *)&_S_data ;
    unsigned char *p_src=(unsigned char*)&_E_text;
    unsigned char *p_dst=(unsigned char*)&_S_data;
    for(unsigned int i=0;i<data_size;i++)
    {
        *((unsigned char*)p_dst++) = *((unsigned char*)p_src++);
    }

    // create .bss section in s-ram //
    unsigned int bss_size= (unsigned char *)&_E_bss - (unsigned char *)&_S_bss ;
    p_dst=(unsigned char*)&_S_bss;
    for(unsigned int j=0;j<bss_size;j++)
    {
       *((unsigned char*)p_dst++) = (unsigned char)0;
    }
    // jump to main to start the application //
    main();
}
