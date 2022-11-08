| **Function name** | **Function parameters** | **Description** | **Example** |
|:-:|:--|:--|:--|
| void `twi_init` | None | Initialize TWI unit, enable internal pull-up resistors, and set SCL frequency | `twi_init();` |
| uint8_t `twi_start` | uint8_t `address` Slave address <br /> uint8_t `mode` TWI_READ or TWI_WRITE | Start communication on I2C/TWI bus and send address byte | `twi_start(addr, TWI_READ);` |
| void `twi_write` | uint8_t `data` Byte to be transmitted | Send one data byte to I2C/TWI Slave device | `twi_write(data);` |
| uint8_t `twi_read_ack` | None | Read one byte from the I2C/TWI Slave device and acknowledge it with ACK, i.e. communication will continue | `twi_read_ack();` |
| uint8_t `twi_read_nack` | None | Read one byte from the I2C/TWI Slave device and acknowledge it with NACK, i.e. communication will not continue | `twi_read_nack();` |
| void `twi_stop` | None | Generates stop condition on I2C/TWI bus | twi_stop(); |
