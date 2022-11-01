| **Function name** | **Function parameters** | **Description** | **Example** |
|:-:|:--|:--|:--|
| `uart_init` | `UART_BAUD_SELECT(9600, F_CPU)` | Initialize UART to 8N1 and set baudrate to 9600 Bd | `uart_init(UART_BAUD_SELECT(9600, F_CPU));` |
| `uart_getc` | none | Get received byte from ringbuffer. <br /> Returns in the lower byte the received character and in the higher byte the last receive error. UART_NO_DATA is returned when no data is available. | `uart_getc();` |
| `uart_putc` |  |  |  |
| `uart_puts` |  |  |  |
<br />
