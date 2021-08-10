/*
 * app.c
 *
 *      Author: Bishoy Nabil
 */

#include "app.h"

uint8_t data[20];

void System_Init()
{
	UART_init();
}

void System_Update()
{
	//Receive byte from terminal
	UART_receiveString(data);
	//Sends Byte back to Terminal
	UART_sendString(data);
}
