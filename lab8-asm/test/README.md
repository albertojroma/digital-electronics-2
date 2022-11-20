# Lab 8: ALBERTO JESUS RODRIGUEZ MACHADO

### Instruction set

1. Complete the conversion table with selected instructions:

   | **Instruction** | **Binary opcode** | **Hex opcode** | **Compiler Hex opcode** |
   | :-- | :-: | :-- | :-: |
   | `add r24, r0` | 0000_1101_1000_0000 | 0d80 | 80 0d |
   | `com r26` | 1001_0101_1010_0000 | 95a0 | a0 95 |
   | `eor r26, r27` | 0010_0111_1010_1011 | 27ab | ab 27 |
   | `mul r22, r20` | 1001_1111_0110_0100 | 9f64 | 64 9f |
   | `ret` | 1001_0101_0000_1000 | 9508 | 08 95 |

### 4-bit LFSR

2. Complete table with 4-bit LFSR values for different Tap positions:

   | **Tap position** | **Generated values** | **Length** |
   | :-: | :-- | :-: |
   | 4, 3 | 1, 3, 7, 14, 13, 11, 6, 4, 8 | 9 |
   | 4, 2 | 1, 3, 6, 12, 8 | 5 |
   | 4, 1 | 1, 2, 5, 10, 4, 9, 3, 6, 13, 11, 7, 14, 12, 8 | 14 |
   
   Reasoning:
   ![Lab8_221116_140928 (1)](https://user-images.githubusercontent.com/114478211/202205990-091b36fd-7065-4316-b6ea-eeb9e49a2da2.jpg)

### Variable number of short pulses

3. Draw a flowchart of function `void burst_c(uint8_t number)` which generates a variable number of short pulses at output pin. Let the pulse width be the shortest one. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![Excercise 3](https://user-images.githubusercontent.com/114478211/202927764-ae0c2cb7-afe9-4d1c-a1bb-6ee14dab3648.jpg)



