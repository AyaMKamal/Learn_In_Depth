#include "uart.h"
#define UART0DR  *((volatile unsigned int* const)((unsigned int*)0x101f1000))


void uart_Send_string(unsigned char *P_tx_Str)
{
	while(*P_tx_Str != '\0')
	{
		UART0DR = (unsigned int )(*P_tx_Str);
		P_tx_Str ++; /*Next char*/
	
	}


}