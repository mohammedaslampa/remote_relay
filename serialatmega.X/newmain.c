/*
 * File:   newmain.c
 * Author: aslam
 *
 * Created on July 2, 2021, 10:14 PM
 */

#define F_CPU 16000000UL
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>

// +-----------------------------------------------------------------------+ //
// | ATmega328p Baudrate values for UBRRn for external crystal 11.0592MHz  | //
// +-----------------------------------------------------------------------+ //

#define BAUD_RATE_9600_BPS  103  // 9600bps
#define BAUD_RATE_19200_BPS  51 // 19.2k bps  
#define BAUD_RATE_76800_BPS   12 // 76.8k bps
#define BAUD_RATE_115200_BPS  8 // 115.2k bps

// +-----------------------------------------------------------------------+ //

void main(void) {
   int i = 0;
	unsigned int ubrr = BAUD_RATE_115200_BPS;
	unsigned char data[] = "TANK1 TANK2 TANK3 ";
	unsigned char tank0[2] = { 111, 131 };
    unsigned char tank1[2] = { 131, 131 };
    unsigned char tank2[2] = { 151, 131 };
    unsigned char call0 = 0;
    unsigned char call1= 0;
    unsigned char call2= 0;
	
	/* Set Baudrate  */
	UBRR0H = (ubrr>>8); // Shift the 16bit value ubrr 8 times to the right and transfer the upper 8 bits to UBBR0H register.
	UBRR0L = (ubrr);    // Copy the 16 bit value ubrr to the 8 bit UBBR0L register,Upper 8 bits are truncated while lower 8 bits are copied
	
	

	UCSR0C = 0x06;                    /* Set frame format: 8data, 1stop bit  */
	UCSR0B = (1<<TXEN0) | (1<<RXEN0); /* Enable  transmitter                 */
	
	while(1) /* Loop the messsage continously */
	{ 
			while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer       */
			
											 /* When UDRE0 = 0,data transmisson ongoing.                         */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 0} = 1 ,While(1) loop stays there */
											 
											 /* When UDRE0 = 1,data transmisson completed.                       */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 1} = 0 ,While(0) loop fails       */
											 
			UDR0 = tank0[0];					 /* Put data into buffer, sends the data */                            /* increment counter                    */
		
		_delay_ms(100);
		
        while ( !(UCSR0A & (1<<RXC0)) ); /* Wait for data to be received */
        call0 = UDR0;
        data[5] = call0;
        tank0[1] = call0 ;
        switch(call0) // using the switch() statement to  control the LED and Buzzer		
		{
			case 'A' : 	DDRB  |= (1<<PB5); // Blinks LED
						PORTB |= (1<<PB5);
						break;
				
            case 'B' : 	DDRB  |= (1<<PB5); // Blinks LED
						PORTB &= ~(1<<PB5);
						break;			
						
			default  :
						break;
		}
        
        _delay_ms(100);
        
			while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer       */
			
											 /* When UDRE0 = 0,data transmisson ongoing.                         */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 0} = 1 ,While(1) loop stays there */
											 
											 /* When UDRE0 = 1,data transmisson completed.                       */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 1} = 0 ,While(0) loop fails       */
											 
			UDR0 = tank1[0];					 /* Put data into buffer, sends the data */

         _delay_ms(100);
         
         while ( !(UCSR0A & (1<<RXC0)) ); /* Wait for data to be received */
        call1 = UDR0;
        data[11] = call1;
        tank1[1] = call1 ;
        
        switch (call1) // using the switch() statement to  control the LED and Buzzer		
		{
			case 'A' : 	DDRB  |= (1<<PB4); // Blinks LED
						PORTB |= (1<<PB4);
						break;
				
            case 'B' : 	DDRB  |= (1<<PB4); // Blinks LED
						PORTB &= ~(1<<PB4);
						break;			
						
			default  :
						break;
		}
        _delay_ms(100);
        
    		while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer       */
			
											 /* When UDRE0 = 0,data transmisson ongoing.                         */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 0} = 1 ,While(1) loop stays there */
											 
											 /* When UDRE0 = 1,data transmisson completed.                       */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 1} = 0 ,While(0) loop fails       */
											 
			UDR0 = tank2[0];					 /* Put data into buffer, sends the data */                            /* increment counter                    */
		
		_delay_ms(100);
		
        while ( !(UCSR0A & (1<<RXC0)) ); /* Wait for data to be received */
        call2 = UDR0;
        data[17] = call2;
        tank2[1] = call2 ;
        switch(call2) // using the switch() statement to  control the LED and Buzzer		
		{
			case 'A' : 	DDRB  |= (1<<PB3); // Blinks LED
						PORTB |= (1<<PB3);
						break;
				
            case 'B' : 	DDRB  |= (1<<PB3); // Blinks LED
						PORTB &= ~(1<<PB3);
						break;			
						
			default  :
						break;
		}
        
        i = 0;
		while(data[i] != 0) /* print the String  "Hello from ATmega328p" */
		{
			while (!( UCSR0A & (1<<UDRE0))); /* Wait for empty transmit buffer       */
			
											 /* When UDRE0 = 0,data transmisson ongoing.                         */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 0} = 1 ,While(1) loop stays there */
											 
											 /* When UDRE0 = 1,data transmisson completed.                       */
											 /* So NOT{[UCSR0A & (1<<UDRE0)] = 1} = 0 ,While(0) loop fails       */
											 
			UDR0 = data[i];					 /* Put data into buffer, sends the data */
			i++;                             /* increment counter                    */
		}
		
		
		/* Sending '\n'  '\r' Character pair helps to format the output properly on console putty Screen */
		/*************************************************************************************************/
		/* Send "\n" Character */
		 while (!( UCSR0A & (1<<UDRE0)));   /* Wait for empty transmit buffer       */
		 UDR0 = '\n';					    /* Put data into buffer, sends the data */
		
		/* Send "\r" Character */
		 while (!( UCSR0A & (1<<UDRE0)));   /* Wait for empty transmit buffer       */
		 UDR0 = '\r';					    /* Put data into buffer, sends the data */
		/*------------------------------------------------------------------------------------------------*/
		
		_delay_ms(100);
		
	}	
}
