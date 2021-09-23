/*
 * File:   newmain.c
 * Author: aslam
 *
 * Created on April 29, 2021, 2:03 AM
 */


#include <xc.h>
#define _XTAL_FREQ 4000000
__CONFIG (WDTE_OFF  & _CP_OFF & _MCLRE_OFF & _IntRC_OSC );

void main(void) {
    TRISGPIO = 0b00000000;
    while(1){
        GPIObits.GP0 = 1;
        __delay_ms(500);
        GPIObits.GP0 = 0;
        __delay_ms(500);
    }
}
