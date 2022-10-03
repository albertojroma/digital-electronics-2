# digital-electronics-2

# Lab 1: ALBERTO JESUS RODRIGUEZ MACHADO

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
int main(void)
{
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);

    int time = 500;

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code

        // WRITE YOUR CODE HERE
        digitalWrite(LED_GREEN, HIGH); //turn on the LED
        _delay_ms(time);               //defines the time where the LED is on or off
                                       //it depends from the previous statement
        digitalWrite(LED_GREEN, LOW);  //turn down the LED
        _delay_ms(time);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time*3);             //here it's times 3 because we are representing a "dah"
        digitalWrite(LED_GREEN, LOW);
        _delay_ms(time*3);             //unit times 3 is the time to "Inter-character space"
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![Scheme](https://user-images.githubusercontent.com/114478211/193480491-47acdf20-2a6e-418d-9fcf-03130e7117bc.jpg)
