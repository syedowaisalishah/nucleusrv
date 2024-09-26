ADDIW x1, x0, 5       # x1 = 0 + 5 (5 in 64-bit register)
ADDIW x2, x0, 10       # x2 = 0 + 10 (10 in 64-bit register)
ADDW x3, x1, x2        # x3 = x1 + x2 (64-bit addition, x3 = 15)

      # Store the full 64-bit value of x3 into memory at address in x4 (0x1000)
