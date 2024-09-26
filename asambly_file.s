ADDI x1, x0, 511       # x1 = 0 + 5 (5 in 64-bit register)
ADDI x2, x0, 10       # x2 = 0 + 10 (10 in 64-bit register)
ADD x3, x1, x2        # x3 = x1 + x2 (64-bit addition, x3 = 15)

LUI x4, 0x1           # Load upper immediate with 0x1, x4 = 0x1 << 12 = 0x1000 (in 64-bit)
ADDI x4, x4, 0x000    # Add immediate 0 to x4 (x4 remains 0x1000)

SD x3, 0(x4)          # Store the full 64-bit value of x3 into memory at address in x4 (0x1000)
