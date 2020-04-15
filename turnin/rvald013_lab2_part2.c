/*	Author: Ryan Valdeavilla 
 *  Partner(s) Name: 
 *	Lab Section:026
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */

	DDRA = 0x00;	DDRC = 0xFF;
	PORTA = 0xFF;	PORTC = 0x00;
	unsigned char cntavail;
	unsigned char tmpA1;
    /* Insert your solution below */
    while (1) {
	cntavail = 0;
	tmpA1 = PINA & 0x0F;
	for(unsigned i = 0; i < 3; ++i){
		if((tmpA1 >> i) & 0x01){
			cntavail = cntavail+1;
		}
	}
	PORTC = cntavail;
		
    }
    return 1;
}
