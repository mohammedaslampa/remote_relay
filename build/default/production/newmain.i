# 1 "newmain.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "newmain.c" 2








# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 1 3
# 18 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 3
extern const char __xc8_OPTIM_SPEED;

extern double __fpnormalize(double);



# 1 "D:\\mplab\\pic\\include\\c90\\xc8debug.h" 1 3
# 13 "D:\\mplab\\pic\\include\\c90\\xc8debug.h" 3
#pragma intrinsic(__builtin_software_breakpoint)
extern void __builtin_software_breakpoint(void);
# 24 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 2 3
# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\builtins.h" 1 3



# 1 "D:\\mplab\\pic\\include\\c90\\stdint.h" 1 3
# 13 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef signed char int8_t;






typedef signed int int16_t;







typedef __int24 int24_t;







typedef signed long int int32_t;
# 52 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint8_t;





typedef unsigned int uint16_t;






typedef __uint24 uint24_t;






typedef unsigned long int uint32_t;
# 88 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_least8_t;







typedef signed int int_least16_t;
# 109 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_least24_t;
# 118 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef signed long int int_least32_t;
# 136 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint_least8_t;






typedef unsigned int uint_least16_t;
# 154 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_least24_t;







typedef unsigned long int uint_least32_t;
# 181 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_fast8_t;






typedef signed int int_fast16_t;
# 200 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_fast24_t;







typedef signed long int int_fast32_t;
# 224 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
# 240 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_fast24_t;






typedef unsigned long int uint_fast32_t;
# 268 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef int32_t intmax_t;
# 282 "D:\\mplab\\pic\\include\\c90\\stdint.h" 3
typedef uint32_t uintmax_t;






typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 5 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\builtins.h" 2 3


#pragma intrinsic(__nop)
extern void __nop(void);


#pragma intrinsic(_delay)
extern __attribute__((nonreentrant)) void _delay(uint32_t);
#pragma intrinsic(_delaywdt)
extern __attribute__((nonreentrant)) void _delaywdt(uint32_t);
# 25 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 2 3



# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 1 3




# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\htc.h" 1 3



# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 1 3
# 5 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\htc.h" 2 3
# 6 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 2 3







# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic_chip_select.h" 1 3
# 44 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic_chip_select.h" 3
# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 1 3
# 45 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\__at.h" 1 3
# 46 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 2 3







extern volatile unsigned char INDF __attribute__((address(0x000)));

__asm("INDF equ 00h");


typedef union {
    struct {
        unsigned INDF :8;
    };
} INDFbits_t;
extern volatile INDFbits_t INDFbits __attribute__((address(0x000)));
# 73 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char TMR0 __attribute__((address(0x001)));

__asm("TMR0 equ 01h");


typedef union {
    struct {
        unsigned TMR0 :8;
    };
} TMR0bits_t;
extern volatile TMR0bits_t TMR0bits __attribute__((address(0x001)));
# 93 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char PCL __attribute__((address(0x002)));

__asm("PCL equ 02h");


typedef union {
    struct {
        unsigned PCL :8;
    };
} PCLbits_t;
extern volatile PCLbits_t PCLbits __attribute__((address(0x002)));
# 113 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char STATUS __attribute__((address(0x003)));

__asm("STATUS equ 03h");


typedef union {
    struct {
        unsigned C :1;
        unsigned DC :1;
        unsigned Z :1;
        unsigned nPD :1;
        unsigned nTO :1;
        unsigned PA0 :1;
        unsigned :1;
        unsigned GPWUF :1;
    };
    struct {
        unsigned CARRY :1;
        unsigned :1;
        unsigned ZERO :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __attribute__((address(0x003)));
# 185 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char FSR __attribute__((address(0x004)));

__asm("FSR equ 04h");


typedef union {
    struct {
        unsigned FSR :8;
    };
} FSRbits_t;
extern volatile FSRbits_t FSRbits __attribute__((address(0x004)));
# 205 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char OSCCAL __attribute__((address(0x005)));

__asm("OSCCAL equ 05h");


typedef union {
    struct {
        unsigned :4;
        unsigned CAL :4;
    };
    struct {
        unsigned :4;
        unsigned CAL0 :1;
        unsigned CAL1 :1;
        unsigned CAL2 :1;
        unsigned CAL3 :1;
    };
} OSCCALbits_t;
extern volatile OSCCALbits_t OSCCALbits __attribute__((address(0x005)));
# 253 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile unsigned char GPIO __attribute__((address(0x006)));

__asm("GPIO equ 06h");


typedef union {
    struct {
        unsigned GP0 :1;
        unsigned GP1 :1;
        unsigned GP2 :1;
        unsigned GP3 :1;
        unsigned GP4 :1;
        unsigned GP5 :1;
    };
} GPIObits_t;
extern volatile GPIObits_t GPIObits __attribute__((address(0x006)));
# 303 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile __control unsigned char OPTION __attribute__((address(0x000)));



extern volatile __control unsigned char TRIS __attribute__((address(0x006)));



extern volatile __control unsigned char TRISGPIO __attribute__((address(0x006)));
# 334 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\proc\\pic12c508.h" 3
extern volatile __bit CAL0 __attribute__((address(0x2C)));


extern volatile __bit CAL1 __attribute__((address(0x2D)));


extern volatile __bit CAL2 __attribute__((address(0x2E)));


extern volatile __bit CAL3 __attribute__((address(0x2F)));


extern volatile __bit CARRY __attribute__((address(0x18)));


extern volatile __bit DC __attribute__((address(0x19)));


extern volatile __bit GP0 __attribute__((address(0x30)));


extern volatile __bit GP1 __attribute__((address(0x31)));


extern volatile __bit GP2 __attribute__((address(0x32)));


extern volatile __bit GP3 __attribute__((address(0x33)));


extern volatile __bit GP4 __attribute__((address(0x34)));


extern volatile __bit GP5 __attribute__((address(0x35)));


extern volatile __bit GPWUF __attribute__((address(0x1F)));


extern volatile __bit PA0 __attribute__((address(0x1D)));


extern volatile __bit ZERO __attribute__((address(0x1A)));


extern volatile __bit nPD __attribute__((address(0x1B)));


extern volatile __bit nTO __attribute__((address(0x1C)));
# 45 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic_chip_select.h" 2 3
# 14 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 2 3
# 76 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 3
__attribute__((__unsupported__("The " "FLASH_READ" " macro function is no longer supported. Please use the MPLAB X MCC."))) unsigned char __flash_read(unsigned short addr);

__attribute__((__unsupported__("The " "FLASH_WRITE" " macro function is no longer supported. Please use the MPLAB X MCC."))) void __flash_write(unsigned short addr, unsigned short data);

__attribute__((__unsupported__("The " "FLASH_ERASE" " macro function is no longer supported. Please use the MPLAB X MCC."))) void __flash_erase(unsigned short addr);



# 1 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\eeprom_routines.h" 1 3
# 84 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 2 3
# 127 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\pic.h" 3
extern __bank0 unsigned char __resetbits;
extern __bank0 __bit __powerdown;
extern __bank0 __bit __timeout;
# 29 "D:/mplab/packs/Microchip/PIC12-16Cxxx_DFP/1.3.51/xc8\\pic\\include\\xc.h" 2 3
# 9 "newmain.c" 2


void main(void) {


#pragma config OSC = IntRC
#pragma config WDT = OFF
#pragma config CP = OFF
#pragma config MCLRE = OFF

 TRISGPIO = 0b00001000;
    int flg = 0b00000000;
    OPTION = 0b11000111;
    while(1){
            GPIObits.GP0 == 1;
            GPIObits.GP1 == 1;
            GPIObits.GP2 == 1;
            GPIObits.GP4 == 1;
            GPIObits.GP5 == 1;
            _delay((unsigned long)((100)*(4000000/4000.0)));
            GPIObits.GP0 == 0;
            GPIObits.GP1 == 0;
            GPIObits.GP2 == 0;
            GPIObits.GP4 == 0;
            GPIObits.GP5 == 0;
            _delay((unsigned long)((200)*(4000000/4000.0)));

    }
}
