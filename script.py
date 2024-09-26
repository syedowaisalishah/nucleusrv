import os
import sys

def split_hex_file(input_file, msb_file, lsb_file):
    # Open the input and output files
    with open(input_file, 'r') as infile, \
         open(msb_file, 'w') as msb_outfile, \
         open(lsb_file, 'w') as lsb_outfile:
        
        # Read each line (each hex value) from the input file
        for line in infile:
            # Remove any leading/trailing whitespace and newline characters
            line = line.strip()
            
            # Ensure the line is not empty and has the correct length (16 hex chars)
            if len(line) != 16:
                continue  # Skip invalid lines
            
            # Split the line into MSB and LSB (8 hex chars each)
            msb = line[8:]  # Last 8 chars
            lsb = line[:8]  # First 8 chars
            
            # Write the MSB and LSB values into respective files
            msb_outfile.write(msb + '\n')
            lsb_outfile.write(lsb + '\n')

# Ensure correct number of arguments are passed
if len(sys.argv) != 2:
    print(f"Usage: python {sys.argv[0]} <input_file>")
    sys.exit(1)

# Get the input file path from command-line arguments
input_file = sys.argv[1]

# Extract the directory from the input file path
input_dir = os.path.dirname(input_file)

# Define output file paths in the same directory as the input file
msb_file = os.path.join(input_dir, 'data1.hex')  # Output file for MSB
lsb_file = os.path.join(input_dir, 'data2.hex')  # Output file for LSB

# Call the function to process the hex values
split_hex_file(input_file, msb_file, lsb_file)

print(f"MSB data written to {msb_file}")
print(f"LSB data written to {lsb_file}")
