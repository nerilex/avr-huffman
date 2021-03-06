/* config.h */
/*
    This file is part of the AVR-Crypto-Lib.
    Copyright (C) 2008  Daniel Otte (daniel.otte@rub.de)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __CONFIG_H__
#define __CONFIG_H__
#include <avr/io.h>
// #define F_CPU 20000000
 #define F_CPU 16000000         /* Oszillator-Frequenz in Hz */
// #define F_CPU 14745600



#define DEBUG uart

/* uart.[ch] defines */
#define UART_INTERRUPT 1
#define UART_BAUD_RATE 38400
#define UART_RXBUFSIZE 64
#define UART_TXBUFSIZE 64
#define UART_LINE_BUFFER_SIZE 40
#define UART_XON_XOFF
#define UART_XON_XOFF_THRESHOLD_1 (UART_RXBUFSIZE - 24)
#define UART_XON_XOFF_THRESHOLD_2 (UART_RXBUFSIZE - 60)

#undef UART_LEDS
/*
#define UART_HWFLOWCONTROL
#define UART_RTS_PORT PORTA
#define UART_RTS_DDR DDRA
#define UART_CTS_PIN PINA
#define UART_CTS_DDR DDRA
#define UART_RTS_BIT 0
#define UART_CTS_BIT 1
*/
//#define TWISTER_MUL_TABLE
#define CLI_AUTO_HELP 

#endif

