/*
 * LEDELD.cpp
 *
 * Created: 2018-05-02 오후 12:02:53
 * Author : stc_164
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	
	DDRD=0XFF;
	PORTD=0XFF;
	int i=0;
    /* Replace with your application code */
    while (1) 
    {
		for(i;i<7;i++){
		PORTD&=~(1<<i);
		_delay_ms(200);
		printf("dddd");
	}

    }
}

