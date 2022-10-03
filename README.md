# digital-electronics-2

# Lab 1: ALBERTO JESUS RODRIGUEZ MACHADO

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
int main(void)
{
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code

        // WRITE YOUR CODE HERE
        digitalWrite(LED_GREEN, HIGH); //turn on the LED
        _delay_ms(UNIT_DELAY);         //defines the time where the LED is on or off
                                       //it depends from the previous statement
        digitalWrite(LED_GREEN, LOW);  //turn down the LED
        _delay_ms(UNIT_DELAY);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(UNIT_DELAY*3);       //here it's times 3 because we are representing a "dah"
        digitalWrite(LED_GREEN, LOW);
        _delay_ms(UNIT_DELAY*3);       //unit times 3 is the time to "Inter-character space"
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![Scheme](https://user-images.githubusercontent.com/114478211/193480491-47acdf20-2a6e-418d-9fcf-03130e7117bc.jpg)

3. Modify the code from lab1-blink_arduino example and build an application that will repeatedly displayed the string PARIS on a LED in the Morse code. Choose the durations of the "dot" and "comma" so that they are visible during the simulation and/or implementation.

```c
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
```
  
