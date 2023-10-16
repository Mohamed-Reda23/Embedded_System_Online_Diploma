#include"uart.h"


unsigned char buffer[100]="Learn-in-depth:Mohamed";

void main(void)
{
    Uart_Send_String(buffer);
}

