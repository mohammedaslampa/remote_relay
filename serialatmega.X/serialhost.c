/* 
 * File:   serialhost.c
 * Author: aslam
 *
 * Created on July 3, 2021, 10:47 AM
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
	
	
	
	/* Set Baudrate  */
	UBRR0H = (ubrr>>8); // Shift the 16bit value ubrr 8 times to the right and transfer the upper 8 bits to UBBR0H register.
	UBRR0L = (ubrr);    // Copy the 16 bit value ubrr to the 8 bit UBBR0L register,Upper 8 bits are truncated while lower 8 bits are copied
	
	

	UCSR0C = 0x06;                    /* Set frame format: 8data, 1stop bit  */
	UCSR0B = (1<<TXEN0) | (1<<RXEN0); /* Enable  transmitter                 */
    
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

