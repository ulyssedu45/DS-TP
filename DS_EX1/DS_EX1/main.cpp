/*
 * DS_EX1.cpp
 *
 * Created: 27/05/2019 10:48:17
 * Author : ulysse
 */ 
//#define F_CPU 1000000UL  // 1 MHz
#define F_CPU 16000000UL  // 16 MHz
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
    DDRD = DDRD | 0X40; // PORTD pin PD6 -> output
    while (1) 
    {
		PORTD = PORTD | 0x40;	//mise à 1 logique de PD6
		_delay_ms(1000);	
		PORTD = PORTD & 0xBF;	//mise à 0 logique de PD6
		_delay_ms(1000);	
    }
}

