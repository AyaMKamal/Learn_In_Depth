#include "uart.h"

unsigned char buffer [100] = "learn-in-depth:<AYA>";

void main(void)

{
	uart_Send_string(buffer);

}