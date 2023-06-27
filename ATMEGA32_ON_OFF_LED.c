/*
 * GccApplication1.c
 *
 * Created: 6/26/2023 6:40:53 PM
 * Author : Farahat
 */ 

// define PORT A 
#define  PORTA   (*(volatile unsigned char *)0x3B) // define PORT 
#define  DDRA    (*(volatile unsigned char *)0x3A) // define data direction register 
#define  PINA    (*(volatile unsigned char *)0x39) // define PIN for port a 

// define PORT B 
#define  PORTB   (*(volatile unsigned char *)0x38) // define PORT
#define  DDRB    (*(volatile unsigned char *)0x37) // define data direction register
#define  PINB    (*(volatile unsigned char *)0x36) // define PIN for port a

//define PORT C


#define  PORTC   (*(volatile unsigned char *)0x35) // define PORT
#define  DDRC    (*(volatile unsigned char *)0x34) // define data direction register
#define  PINC    (*(volatile unsigned char *)0x33) // define PIN for port a

// define PORT D 
#define  PORTD   (*(volatile unsigned char *)0x32) // define PORT
#define  DDRD    (*(volatile unsigned char *)0x31) // define data direction register
#define  PIND    (*(volatile unsigned char *)0x30) // define PIN for port a


#define READ_BIT(reg,bit)   ((reg>>bit)&1)
#include <avr/io.h>
#define  F_CPU 8000000
#include <util/delay.h>
#define SET_BIT(reg,bit)		(reg = reg|(1<<bit))
#define CLR_BIT(reg,bit)		(reg&=(~(1<<bit)))
#define TOG_BIT(reg,bit)		(reg^=(1<<bit))
#define READ_BIT(reg,bit)       ((reg>>bit)&1)
//#define WRITE_BIT(reg,bit,val)  

#define OUTPUT 0X00
#define INPUT 0XFF

void set_bit(unsigned char *reg, unsigned char bit){
	*reg = *reg|(1<<bit);	
}


int main(void)
{
	// set data direction for register
	
	DDRB = 0;	// register B 
	DDRA = 0xFF;  // register A
	PORTB = 0X06;   // set the button port as a pull up resistor !
	
	
    while (1) 
    {
		if(!READ_BIT(PINB,1))
		{
			SET_BIT(PORTA,1);
			CLR_BIT(PORTA,2);
		}
		if(!READ_BIT(PINB,2))
		{
			SET_BIT(PORTA,2);
			CLR_BIT(PORTA,1);
		}

	}

}
