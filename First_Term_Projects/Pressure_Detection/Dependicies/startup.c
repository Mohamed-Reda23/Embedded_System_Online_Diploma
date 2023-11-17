#include"STD_TYPES.h"
extern int main();
extern unsigned int _S_data;
extern unsigned int _E_text;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int stack_pointer;
void Reset_Handler(void);

void Default_Handler(void)
{
    Reset_Handler();
}


void NMI_Handler(void)__attribute__ ((weak, alias ("Default_Handler")));;
void H_fault_Handler(void)__attribute__ ((weak, alias ("Default_Handler")));;
void MM_Fault_Handler(void)__attribute__ ((weak, alias ("Default_Handler")));;
void Bus_Fault_Handler(void)__attribute__ ((weak, alias ("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__ ((weak, alias ("Default_Handler")));;


uint32_T vectors[]__attribute__((section(".vectors")))={

(uint32_T)&stack_pointer,
(uint32_T)&Reset_Handler,
(uint32_T)&NMI_Handler,
(uint32_T)&H_fault_Handler,
(uint32_T)&MM_Fault_Handler,
(uint32_T)&Bus_Fault_Handler,
(uint32_T)&Usage_Fault_Handler,
};

void Reset_Handler(void)
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
    unsigned int bss_size= (unsigned int *)&_E_bss - (unsigned int *)&_S_bss ;
    p_dst=(unsigned char*)&_S_bss;
    for(unsigned int j=0;j<bss_size;j++)
    {
       *((unsigned char*)p_dst++) = (unsigned char)0;
    }
    // jump to main to start the application //
    main();
}
