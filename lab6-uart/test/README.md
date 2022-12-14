# Lab 6: ALBERTO JESUS RODRIGUEZ MACHADO

### ASCII

1. Complete the table with selected ASCII codes.

   | **Char** | **Decimal** | **Hexadecimal** | **Binary** |
   | :-: | :-: | :-: | :-: |
   | `a` | 97 | 0x61 | `0b0110_0001` |
   | `b` | 98 | 0x62 | `0b0110_0010` |
   | `c` | 99 | 0x63 | `0b0110_0011` |
   | `0` | 48 | 0x30 | `0b0011_0000` |
   | `1` | 49 | 0x31 | `0b0011_0001` |
   | `2` | 50 | 0x32 | `0b0011_0010` |
   | `Esc` | 27 | 0x1B | `0b0001_1011` |
   | `Space` | 32 | 0x20 | `0b0010_0000` |
   | `Tab` | 9 | 9 | `0b0000_1001` |
   | `Backspace` | 8 | 8 | `0b0000_1000` |
   | `Enter` | 13 | 0x16 | `0b0000_1101` |

### UART communication

2. Draw timing diagram of the output from UART/USART when transmitting three character data `De2` in 4800 7O2 mode (7 data bits, odd parity, 2 stop bits, 4800&nbsp;Bd). The image can be drawn on a computer or by hand. Name all parts timing diagram.

   | **Char** | **Decimal** | **Hexadecimal** | **Binary** | **Parity bit** | **Code with parity bit** | **Reverse code** |
   | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
   | `D` | 68 | 0x44 | `0b0100_0100` | `1` | `0b0100_0100_1` | `0010_001_1` | 
   | `e` | 101 | 0x65 | `0b0110_0101` | `1` | `0b0110_0101_1` | `1010_011_1` |
   | `2` | 50 | 0x32 | `0b0011_0010` | `0` | `0b0011_0010_0` | `0100_110_0` |

   **Complete code communication:** `IDLE-+0+0010_001_1-11-+0+1010_011_1-11-+0+0100_110_0-11-IDLE`

   ![Lab6_timing_diagram](https://user-images.githubusercontent.com/114478211/199487602-d6b29400-1e73-4cab-a3b0-f4c6afec61f7.jpg)

3. Draw a flowchart for function `uint8_t get_parity(uint8_t data, uint8_t type)` which calculates a parity bit of input 8-bit `data` according to parameter `type`. The image can be drawn on a computer or by hand. Use clear descriptions of individual algorithm steps.

   ![get_parity flowchart](https://user-images.githubusercontent.com/114478211/200140777-74d82c68-acc9-4977-9425-a05dc9c4d1db.jpg)
