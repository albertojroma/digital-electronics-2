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

// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
void space1(){
    _delay_ms(UNIT_DELAY);
}

void space3(){
    _delay_ms(UNIT_DELAY*3);
}

void wordSpace(){
    _delay_ms(UNIT_DELAY*7);
}

void dit(){
    digitalWrite(LED_GREEN, HIGH);
    space1();
    digitalWrite(LED_GREEN, LOW);
}

void dah(){
    digitalWrite(LED_GREEN, HIGH);
    space3();
    digitalWrite(LED_GREEN, LOW);
}

void p(){
    dit();
    space1();
    dah();
    space1();
    dah();
    space1();
    dit();
}

void a(){
    dit();
    space1();
    dah();
}

void r(){
    dit();
    space1();
    dah();
    space1();
    dit();
}

void i(){
    dit();
    space1();
    dit();
}

void s(){
    dit();
    space1();
    dit();
    space1();
    dit();
}

int main(void)
{
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);
    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code
        // WRITE YOUR CODE HERE
        p();
        space3();
        a();
        space3();
        r();
        space3();
        i();
        space3();
        s();
        wordSpace();
    }
    // Will never reach this
    return 0;
}