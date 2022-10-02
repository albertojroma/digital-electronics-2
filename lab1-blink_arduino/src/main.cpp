/***********************************************************************
 * 
 * Blink a LED in Arduino-style and use function from the delay library.
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2022 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/


/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected
#define UNIT_DELAY  500 // time in milisenconds
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops
#include <string.h>


// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
// -----
String palabra = "PARIS";


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/

void dit(){
  digitalWrite(LED_GREEN, HIGH);
  _delay_ms(UNIT_DELAY);
  digitalWrite(LED_GREEN, LOW);
}

void dah(){
  digitalWrite(LED_GREEN, HIGH);
  _delay_ms(UNIT_DELAY*3);
  digitalWrite(LED_GREEN, LOW);
}

void P(){
  dit();
  _delay_ms(UNIT_DELAY);
  dah();
  _delay_ms(UNIT_DELAY);
  dah();
  _delay_ms(UNIT_DELAY);
  dit();
}

void A(){
  dit();
  _delay_ms(UNIT_DELAY);
  dah();
}

void R(){
  dit();
  _delay_ms(UNIT_DELAY);
  dah();
  _delay_ms(UNIT_DELAY);
  dit();
}

void I(){
  dit();
  _delay_ms(UNIT_DELAY);
  dit();
}

void S(){
  dit();
  _delay_ms(UNIT_DELAY);
  dit();
  _delay_ms(UNIT_DELAY);
  dit();
}

void letter2morse(char letter){
  switch (letter){
    case 'P':
      P();
      break;
    case 'A':
      A();
      break;
    case 'R':
      R();
      break;
    case 'I':
      I();
      break;
    case 'S':
      S();
      break;
    default:
    break;
  }     
}

void word2morse(){
  for (int i=0; i< palabra.length(); i++){
    char letter = palabra.charAt(i);
    letter2morse(letter);
    if (i==palabra.length()-1){
      _delay_ms(UNIT_DELAY*7);
    } else _delay_ms(UNIT_DELAY*3);
  }
}

int main(void){
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);
    // Infinite loop
    while (1) word2morse();
    return 0;
}