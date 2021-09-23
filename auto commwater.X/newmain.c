/*
 * File:   newmain.c
 * Author: aslam
 *
 * Created on July 31, 2021, 12:54 PM
 * first 4 byte tank address 
 * second 4 byte 3 sensor data with 1 free bit
 */



#include <xc.h>

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

byte inByte = 0, data =0;         // incoming serial byte,converted data address
unsigned long previousMillis = 0;        // will store last time LED was updated
unsigned long previousMillis1 = 0;
const long interval = 1000;           // interval at which to blink (milliseconds)
const long interval1 = 100;
int M0 = 0,M1 = 0,M2 = 0,M3 = 0, M4 =0;  //,motor status and serial
int T0, T2, T3, T4, contact,order;
const int threashold = 215;                 //voltage threashold 

LiquidCrystal_I2C lcd(0x27,16,2);  

byte MotorOff[8] = {
0b00011,
0b11011,
0b11011,
0b00010,
0b01000,
0b00010,
0b11011,
0b11011
};
byte MotorOn[8] = {
0b11100,
0b00100,
0b00100,
0b11101,
0b10111,
0b11101,
0b00100,
0b00100
};

void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600,SERIAL_8E1);
  pinMode(10, OUTPUT);   // output pin and necessory states
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(13,LOW);  //for recieving
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.clear();
  lcd.home();
  lcd.createChar(0, MotorOff);
  lcd.createChar(1, MotorOn);
  lcd.setCursor(4, 0);
 /* lcd.print("4");
  lcd.setCursor(3, 0);
  lcd.print("3");
  lcd.setCursor(2, 0);
  lcd.print("2");
  lcd.setCursor(1, 0);
  lcd.print("1");
  lcd.setCursor(0, 0);
  lcd.print("0");
  lcd.setCursor(3, 0);
  lcd.print("Volt= ");*/
}





void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
  
if(contact == 0){
  if(order == 0){
    establishContact('a');  // sending  a key to getrespond
  }
  else {
    establishContact('b');  // sending  a key to getrespond
  }
}


if(contact == 1){
  if(order == 0){
    data = getdat();      //recieving data
    
    M0 = B10000000;             //clearing all bits
    M0 |= (data & B00000111);
    M0 |= accr(4, 14);          //setting voltage and ltank 
    M0 = mntr(10, M0);
    
    data = data >> 3;
    
    M1 = B00000000;          //clearing all bits
    M1 |= (data & B00000111);
    M1 |= accr(5, 15);          //setting voltage and ltank
    M1 = mntr(9, M1); 
    
    data = data >> 3;
    
    M2 = B00000000;          //clearing all bits
    M2 |= (data & B000011);
  }
  else {
    data = getdat();      //recieving data
    M2 |= ((data & B01000000) >> 6);  //7th bit to 2nd possition
    M2 |= ((data & B00100000) >> 4);  //7th bit to 2nd possition
    M2 |= ((data & B00000010) << 1);  //7th bit to 2nd possition
    M2 |= accr(6, 16);          //setting voltage and ltank
    M2 |= mntr(8, M2);
    
    //data = data >> 1;
    
    M3 = B00000000;          //clearing all bits
    M3 |= (data & B00000111);
    M3 |= (1<<3) | (1<<4);
    M3 |= mntr(7, M3);
    
    data = data >> 2;
    
    M4 = B00000000;          //clearing all bits
    M4 |= (data & B00000111);
    M4 |= (1<<3) | (1<<4);
    M4 |= mntr(6, M4);
}
}


if(contact == 2){
  if(order == 0){
    if ( verify('A')){                //itss verified
      order = 1;
  }
  }
  if(order == 1){
    if ( verify('B')){                //itss verified
      order = 0;
  }
  }
}
   lcd.setCursor(0, 0);
   lcd.print(M0,BIN);
   lcd.setCursor(9, 0);
   lcd.print(M1,BIN);
   lcd.setCursor(0, 1);
   lcd.print(M2,BIN);
   lcd.setCursor(9, 1);
   lcd.print(M3,BIN);
   //lcd.setCursor(0, 12);
   //lcd.print(M4);
}

 /* unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
      M0 &= ~((1<<3) | (1<<4));
      M0 |= accr(4, 14);          //setting voltage and ltank
      M0 = mntr(10, M0);
      M1 &= ~((1<<3) | (1<<4));
      M1 |= accr(5, 15);          //setting voltage and ltank
      M1 = mntr(9, M1);
      M2 &= ~((1<<3) | (1<<4));
      M2 |= accr(6, 16);          //setting voltage and ltank
      M2 = mntr(8, M2);
  }*/

  /* if((M0 & (1 << 5)) == B00100000){
   lcd.setCursor(0, 1);
   lcd.write(byte(1));
    }
    else{
  lcd.setCursor(0, 1);
  lcd.write(byte(0));
    }
   if((M1 & (1 << 5)) == B00100000){
   lcd.setCursor(1, 1);
   lcd.write(byte(1));
    }
    else{
  lcd.setCursor(1, 1);
  lcd.write(byte(0));
    }
   if((M2 & (1 << 5)) == B00100000){
   lcd.setCursor(2, 1);
   lcd.write(byte(1));
    }
    else{
  lcd.setCursor(2, 1);
  lcd.write(byte(0));
    }
   if((M3 & (1 << 5)) == B00100000){
   lcd.setCursor(3, 1);
   lcd.write(byte(1));
    }
    else{
  lcd.setCursor(3, 1);
  lcd.write(byte(0));
    }
       if((M4 & (1 << 5)) == B00100000){
   lcd.setCursor(4, 1);
   lcd.write(byte(1));
    }
    else{
  lcd.setCursor(4, 1);
  lcd.write(byte(0));
    }*/
}

int mntr(int t , int d){

  if (( d & ((1 << 0)|(1 << 3)|(1 << 4))) == B00011001){           //x01 == error
  //  Serial.println("on");   // send a capital A
    digitalWrite(t, LOW);
    d |= (1 << 5);
  }
 
  if ((d & B00000010) == B00000010){           //010 = error (100 = eror if motor on )
  //  Serial.println("off");   // send a capital A
    digitalWrite(t, HIGH);
    d &= ~(1 << 5);
  }
  
  if ((d & ((1 << 3)|(1 << 4))) != B00011000){           //010 = error (100 = eror if motor on )
   // Serial.println("off1");   // send a capital A
    digitalWrite(t, HIGH);
    d &= ~(1 << 5);
  }
  
  return d;
}

int accr (int lt, int lv){
   int flag = B00000000;
   int T1 = digitalRead(lt);
   int vlt = analogRead(lv);
   if( T1 == 0){
    flag |= (1 << 3);
   // lcd.setCursor(15, 0);
  //  lcd.print("1");
   }
   else{
    flag &= ~(1 << 3);
   // lcd.setCursor(15, 0);
   // lcd.print("0");
   }
 //  lcd.setCursor(9, 0);
  // lcd.print(vlt);
   if(vlt > threashold){
  // lcd.setCursor(14, 0);
  // lcd.print("1");
   flag |= (1 << 4);
                       }
   else{
   //lcd.setCursor(14, 0);
   //lcd.print("0");
   flag &= ~(1 << 4);
       }
       
       return flag;
  }

void establishContact(char dt) {
    digitalWrite(13,HIGH);  //for transmission
    Serial.print(dt);   // send a capital A
    delay(1);
    digitalWrite(13,LOW);  //for recieving
    contact = 1;
}

int getdat (){
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();
    contact = 2;
    return inByte;
}
}
bool verify(char q){
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();
    contact = 0;
    if (inByte == q){
      return 1;
    }
    else{
      return 0;
    }
}
}