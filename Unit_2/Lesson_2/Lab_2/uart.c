#include"uart.h"

/* UART0DR REGISTER */
#define UART0      ((unsigned int*)0x101F1000)
#define UART0DR   *((volatile unsigned int*const)(UART0+0x0))


void Uart_Send_String(unsigned char*Px)
{
    while(*Px!='\0')
    {
        UART0DR=(unsigned int)*Px;
        Px++;
    }
}

