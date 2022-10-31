# Lab 5: ALBERTO JESÚS RODRÍGUEZ MACHADO

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 99 | 63 |
   | Down   | 1.203&nbsp;V | 246 | 257 | 101 |
   | Left   | 1.969 V | 402 | 409 | 199 |
   | Select | 3.182 V | 651 | 640 | 280 |
   | none   | 5 V | 1023 | 1023 | 3ff |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

   ![Esquema medidor de temperatura](https://user-images.githubusercontent.com/114478211/199028879-8df5f24c-0f60-4c19-b153-48a6b7135a86.png)

3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![flowchart](https://user-images.githubusercontent.com/114478211/199093074-4e3694f5-2472-45e0-b1df-0542ba439255.jpg)

