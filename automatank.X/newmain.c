/*
 * File:   newmain.c
 * Author: aslam
 *
 * Created on May 24, 2021, 4:10 PM
 */

#include <xc.h>

void first_pulse(void);
void second_pulse(void);
void startmotor(void);
    int flg  = 0b00000000;              ///gpio 5 pump0n
    int flg1  = 0b00000110;              ///gpio 5 pump0n

void main(void) {
    #define _XTAL_FREQ 4000000
// CONFIG
#pragma config OSC = IntRC      // Oscillator Selection bits (internal RC oscillator)
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection off)
#pragma config MCLRE = OFF      // GP3/MCLR Pin Function Select bit (GP3/MCLR pin function is digital input, MCLR internally tied to VDD)
    
    TRISGPIO = 0b00111100;    ///pin 2345 as input 0,1 as outpuut
    OPTION   = 0b11000000;              ///gpio 4 tank upper
                                        ///gpio 3 tank lower         flg         8         |    7        |   6               |    54321
                                        ///gpio 2 pump water sens    flg |lower tank empty |motor on off | no water pumping  |   cycle monitor pump
    GPIObits.GP1 = 0;          ///motor off                                 1= no water       1=on             1=no pumping
    while(1){                           
        if(GPIObits.GP3 == 1 && GPIObits.GP2 == 0 && !(flg1 & 1<<4)){    //check upper and tank lower sens
        startmotor();
        }
        if(GPIObits.GP4 == 0){      //tank full motor off flag clear
            flg = flg & 0b10111111;
            GPIObits.GP1 = 0;
            __delay_ms(100);
        }
        
        if( (flg & 0b01000000) && (GPIObits.GP5 == 1) ){          //polling pump ok 
            flg = flg & 0b10111111;     //setting flag and motor off
            flg = flg | 0b00100000;
            GPIObits.GP1 = 0;
             __delay_ms(1000);
            startmotor();
        }
        
        
        if(GPIObits.GP2 == 1){          //polling tank lower empty 
            flg = flg | 0b10000000;     //setting flag and motor off
            flg = flg & 0b10111111;     //setting flag and motor off
            GPIObits.GP1 = 0;
        }
        else{
            flg = flg & 0b01111111;     //clearing flag
        }

        //////////////////////////////////tune
        if( flg1 & 0b00010000){
            for(int i=0;i<100;i++){
                second_pulse();
            }
            __delay_ms(100);
            for(int i=0;i<250;i++){
                first_pulse();
            }
}
        if( flg & 0b10000000){
            for(int i=0;i<100;i++){
                second_pulse();
            }
            __delay_ms(100);
            
}
}
}
void first_pulse(void) {//for generating 1 millisecond pulse for 0°
    
    for(int i=0;i<50;i++){

        if(35>i){
            GPIObits.GP0 =1;
        }
        else{
           GPIObits.GP0 =0;
        }
    }
    for(int i=50;i>=0;i--){
        if(35>i)
        {
            GPIObits.GP0 =1;
        }
        else
        {
            GPIObits.GP0 =0;
        }
    }
    }

 void second_pulse(void)  //for generating 1.5 millisecond pulse for 90° rotation
    {
    for(int i=0;i<50;i++)
    {
        if(20>i)
        {
            GPIObits.GP0 =1;
        }
        else
        {
           GPIObits.GP0 =0;
        } 
    }
    for(int i=50;i>=0;i--)
    {
        if(20>i)
        {
            GPIObits.GP0 =1;
        }
        else
        {
            GPIObits.GP0 =0;
        }
    }
    }
 void startmotor(void){
       //IF tank low 
            flg  = flg | 0b01000000;    //flag for motor on
            GPIObits.GP1 = 1;          ///motor on
            __delay_ms(35000);              //delay 3 sec
            if(GPIObits.GP5 == 1 ){          //check water coming
                flg = flg & 0b10111111;     //setting flag and motor off
                flg = flg | 0b00100000;     //setting flag and motor off
                    GPIObits.GP1 = 0;         //if not motor off
                    flg1  = flg1 <<1;  //flag no water com
                    __delay_ms(10000);
            }
            else{
                flg1  = 0b00000110;
                flg = flg & 0b11011111;     //setting flag
            }
    
 }