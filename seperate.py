def separate_assembly_dump(input_file, hex_output_file, asm_output_file):
    with open(input_file, 'r') as file:
        lines = file.readlines()

    hex_lines = []
    asm_lines = []

    for line in lines:
        # Split each line into address, hex code, and assembly code
        parts = line.strip().split('\t')
        
        if len(parts) >= 3:
            hex_code = parts[1].strip()
            asm_code = parts[2].strip()
            hex_lines.append(hex_code + '\n')
            asm_lines.append(asm_code + '\n')

    # Write hex code to hex_output_file
    with open(hex_output_file, 'w') as hex_file:
        hex_file.writelines(hex_lines)

    # Write assembly code to asm_output_file
    with open(asm_output_file, 'w') as asm_file:
        asm_file.writelines(asm_lines)

if __name__ == "__main__":
    input_file = 'asm.txt'        # Input assembly dump file
    hex_output_file = 'hex_codes.txt'       # Output file for hex codes
    asm_output_file = 'assembly_codes.txt'  # Output file for assembly instructions

    separate_assembly_dump(input_file, hex_output_file, asm_output_file)
# cd $(NUCLEUSRV) && python3 script.py $(<).program.hex && sbt "testOnly nucleusrv.components.TopTest -- -DprogramFile1=programFile1.hex -DprogramFile2=programFile2.hex -DwriteVcd=1 -DdataFile=$(<).data.hex" \