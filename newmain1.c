/*
 * File:   newmain.c
 * Author: aslam
 *
 * Created on May 24, 2021, 4:10 PM
 */


#include <xc.h>

void main(void) {
    #define _XTAL_FREQ 4000000
// CONFIG
#pragma config OSC = IntRC      // Oscillator Selection bits (internal RC oscillator)
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection off)
#pragma config MCLRE = OFF      // GP3/MCLR Pin Function Select bit (GP3/MCLR pin function is digital input, MCLR internally tied to VDD)
    
    TRISGPIO = 0b00001000;
    int flg  = 0b00000000;
    OPTION   = 0b11000111;
    while(1){
            GPIObits.GP0 = 1;
            GPIObits.GP1 = 1;
            GPIObits.GP2 = 1;
            GPIObits.GP4 = 1;
            GPIObits.GP5 = 1;
            __delay_ms(100);
            GPIObits.GP0 = 0;
            GPIObits.GP1 = 0;
            GPIObits.GP2 = 0;
            GPIObits.GP4 = 0;
            GPIObits.GP5 = 0;
            __delay_ms(200);
        
    }
}
