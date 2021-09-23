/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF1503
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set relay1 aliases
#define relay1_TRIS                 TRISAbits.TRISA0
#define relay1_LAT                  LATAbits.LATA0
#define relay1_PORT                 PORTAbits.RA0
#define relay1_WPU                  WPUAbits.WPUA0
#define relay1_ANS                  ANSELAbits.ANSA0
#define relay1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define relay1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define relay1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define relay1_GetValue()           PORTAbits.RA0
#define relay1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define relay1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define relay1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define relay1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define relay1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define relay1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set relay2 aliases
#define relay2_TRIS                 TRISAbits.TRISA1
#define relay2_LAT                  LATAbits.LATA1
#define relay2_PORT                 PORTAbits.RA1
#define relay2_WPU                  WPUAbits.WPUA1
#define relay2_ANS                  ANSELAbits.ANSA1
#define relay2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define relay2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define relay2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define relay2_GetValue()           PORTAbits.RA1
#define relay2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define relay2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define relay2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define relay2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define relay2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define relay2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set relay4 aliases
#define relay4_TRIS                 TRISAbits.TRISA3
#define relay4_PORT                 PORTAbits.RA3
#define relay4_WPU                  WPUAbits.WPUA3
#define relay4_GetValue()           PORTAbits.RA3
#define relay4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define relay4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define relay4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define relay4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)

// get/set allON_OFF aliases
#define allON_OFF_TRIS                 TRISAbits.TRISA4
#define allON_OFF_LAT                  LATAbits.LATA4
#define allON_OFF_PORT                 PORTAbits.RA4
#define allON_OFF_WPU                  WPUAbits.WPUA4
#define allON_OFF_ANS                  ANSELAbits.ANSA4
#define allON_OFF_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define allON_OFF_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define allON_OFF_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define allON_OFF_GetValue()           PORTAbits.RA4
#define allON_OFF_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define allON_OFF_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define allON_OFF_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define allON_OFF_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define allON_OFF_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define allON_OFF_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set MEM_store aliases
#define MEM_store_TRIS                 TRISAbits.TRISA5
#define MEM_store_LAT                  LATAbits.LATA5
#define MEM_store_PORT                 PORTAbits.RA5
#define MEM_store_WPU                  WPUAbits.WPUA5
#define MEM_store_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define MEM_store_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define MEM_store_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define MEM_store_GetValue()           PORTAbits.RA5
#define MEM_store_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define MEM_store_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define MEM_store_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define MEM_store_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set IR_LED aliases
#define IR_LED_TRIS                 TRISCbits.TRISC3
#define IR_LED_LAT                  LATCbits.LATC3
#define IR_LED_PORT                 PORTCbits.RC3
#define IR_LED_ANS                  ANSELCbits.ANSC3
#define IR_LED_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IR_LED_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IR_LED_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IR_LED_GetValue()           PORTCbits.RC3
#define IR_LED_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IR_LED_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IR_LED_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IR_LED_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set stat_LED aliases
#define stat_LED_TRIS                 TRISCbits.TRISC4
#define stat_LED_LAT                  LATCbits.LATC4
#define stat_LED_PORT                 PORTCbits.RC4
#define stat_LED_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define stat_LED_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define stat_LED_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define stat_LED_GetValue()           PORTCbits.RC4
#define stat_LED_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define stat_LED_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF1 pin functionality
 * @Example
    IOCAF1_ISR();
 */
void IOCAF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_InterruptHandler);

*/
extern void (*IOCAF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);

*/
void IOCAF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF3 pin functionality
 * @Example
    IOCAF3_ISR();
 */
void IOCAF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_InterruptHandler);

*/
extern void (*IOCAF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);

*/
void IOCAF3_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    IOCAF5_ISR();
 */
void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
void IOCAF5_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/