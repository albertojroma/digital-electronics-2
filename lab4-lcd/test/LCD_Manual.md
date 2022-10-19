| **Function name** | **Function parameters** | **Description** | **Example** |
|:-:|:--|:--|:--|
| `lcd_init` | `LCD_DISP_OFF` <br /> `LCD_DISP_ON` <br /> `LCD_DISP_ON_CURSOR` <br /> `LCD_DISP_ON_CURSOR_BLINK` |   Display off <br /> Display on, cursor off <br /> Display on, cursor on <br /> Display on, cursor on flashing | `lcd_init(LCD_DISP_OFF);` <br /> `lcd_init(LCD_DISP_ON);` <br /> `lcd_init(LCD_DISP_ON_CURSOR);` <br /> `lcd_init(LCD_DISP_ON_CURSOR_BLINK);` |
| `lcd_clrscr` | none | Clear display and set cursor to home position | `lcd_clrscr();` |
| `lcd_gotoxy` | `x` horizontal position <br />    (0: left most position) <br /> `y`	vertical position <br />    (0: first line) | Set cursor to specified position | `lcd_gotoxy(1,4);` |
| `lcd_putc` | `c` character to be displayed | Display character at current cursor position | `lcd_putc('a');` |
| `lcd_puts` | `s` string to be displayed | Display string without auto linefeed | `lcd_puts("Hello world!");` |
| `lcd_command` | `cmd`	instruction to send to LCD controller, see HD44780 data sheet | Send LCD controller instruction command | `lcd_command();` |
| `lcd_data` | `data`	byte to send to LCD controller, see HD44780 data sheet | Send data byte to LCD controller. <br /> Similar to lcd_putc(), but without interpreting LF | `lcd_data();` | 

                   
