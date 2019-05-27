/*
 * DS_EX2.cpp
 *
 * Created: 27/05/2019 10:32:59
 * Author : ulysse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB = DDRB & 0xFE; // PORTB pin PB0 -> input
	DDRD = DDRD | 0X40; // PORTD pin PD6 -> output
	
	PORTB = PORTB | 0x01;// PORTB pin PB0 -> mise à 5V (pullUp)
	
    while (1) 
    {
		if(PINB && 0x01 == 0x01){ //lecture PINB & mask sur PB0
			PORTD = PORTD | 0x40;	//mise à 1 logique de PD6
		}else{
			PORTD = PORTD & 0xBF;	//mise à 0 logique de PD6
		}
    }
}

