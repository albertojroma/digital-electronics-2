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

   ![your f![tempFileForShare_20221003-001109](https://user-images.githubusercontent.com/114478211/193480424-b101f2f9-e84f-4372-8f7f-cc6283c3364d.jpg)
igure]()
  
