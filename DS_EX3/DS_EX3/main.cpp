/*
 * DS_EX3.cpp
 *
 * Created: 27/05/2019 10:53:46
 * Author : ulysse
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

ISR(TIMER1_OVF_vect) {
	PORTD ^= 0x40;
	TCNT1=0x24F8;
}

int main(void)
{
	DDRD = DDRD | 0X40; // PORTD pin PD6 -> output
	
	// enable timer overflow interrupt for both Timer1
	TIMSK1 |= (1<<TOIE1);
    // set timer1 counter initial value to 9464
    TCNT1=0x24F8;
    // start timer1 with 64 prescaler
    TCCR1B = (1<<CS11) | (1<<CS10);
    // enable interrupts
    sei();
    while (1) 
    {
    }
}

