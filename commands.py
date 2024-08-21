import subprocess
import os
import time

# Define the parameters for each instruction set type
parameters = {
    "C": ["cadd-01","caddi-01","caddi16sp-01","caddi4spn-01","caddiw-01","caddw-01","cand-01","candi-01","cbeqz-01","cbnez-01","cj-01","cjalr-01","cjr-01","cld-01","cldsp-01","cli-01","clui-01","clw-01","clwsp-01","cmv-01","cnop-01","cor-01","csd-01","csdsp-01","cslli-01","csrai-01","csrli-01","csub-01","csubw-01","csw-01","cswsp-01","cxor-01","misalign1-cjalr-01","misalign1-cjr-01"],  # Add more C-type parameters as needed
    "I": ["add-01","addi-01","addiw-01","addw-01","and-01","andi-01","auipc-01","beq-01","bge-01","bgeu-01","blt-01","bltu-01","bne-01","fence-01","jal-01","jalr-01","lb-align-01","lbu-align-01","ld-align-01","lh-align-01","lhu-align-01","lui-01","lw-align-01","lwu-align-01","misalign1-jalr-01","or-01","ori-01","sb-align-01","sd-align-01","sh-align-01","sll-01","slli-01","slliw-01","sllw-01","slt-01","slti-01","sltiu-01","sltu-01","sra-01","srai-01","sraiw-01","sraw-01","srl-01","srli-01","srliw-01","srlw-01","sub-01","subw-01","sw-align-01","xor-01","xori-01"],   # Add more I-type parameters as needed
    "M": ["div-01","divu-01","divuw-01","divw-01","mul-01","mulh-01","mulhsu-01","mulhu-01","mulw-01","rem-01","remu-01","remuw-01","remw-01"],
    "privilege": ["misalign-beq-01","misalign-bge-01","misalign-bgeu-01","misalign-blt-01","misalign-bltu-01","misalign-bne-01","misalign-jal-01","misalign2-jalr-01"]    # Add more privilege-type parameters as needed
}

# Define the base directories corresponding to different instruction sets
base_directories = {
    "C": "/home/owais/nucleusrv/riscof_work/rv64i_m/C/src",
    "I": "/home/owais/nucleusrv/riscof_work/rv64i_m/I/src",
    "M": "/home/owais/nucleusrv/riscof_work/rv64i_m/M/src",
    "privilege": "/home/owais/nucleusrv/riscof_work/rv64i_m/privilege/src"
}

# Define the march parameters corresponding to each instruction set
march_options = {
    "C": "-march=rv64ic",
    "I": "-march=rv64i",
    "M": "-march=rv64im",
    "privilege": "-march=rv64i_zicsr"
}

# Define specific commands for each instruction set type
commands_templates = {
    "C": [
        "riscv64-unknown-elf-gcc {march} -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T /home/owais/nucleusrv/nucleusrv/env/link.ld -I /home/owais/nucleusrv/nucleusrv/env/ -I /home/owais/nucleusrv/riscv-arch-test/riscv-test-suite/env {src_path}/{param}.S -o my.elf -DTEST_CASE_1=True -DXLEN=64 -mabi=lp64",
        "bash /home/owais/nucleusrv/simcmd.sh {working_directory}"
    ],
    "I": [
        "riscv64-unknown-elf-gcc {march} -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T /home/owais/nucleusrv/nucleusrv/env/link.ld -I /home/owais/nucleusrv/nucleusrv/env/ -I /home/owais/nucleusrv/riscv-arch-test/riscv-test-suite/env {src_path}/{param}.S -o my.elf -DTEST_CASE_1=True -DXLEN=64 -mabi=lp64",
        "bash /home/owais/nucleusrv/simcmd.sh {working_directory}"
    ],
    "M": [
        "riscv64-unknown-elf-gcc {march} -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T /home/owais/nucleusrv/nucleusrv/env/link.ld -I /home/owais/nucleusrv/nucleusrv/env/ -I /home/owais/nucleusrv/riscv-arch-test/riscv-test-suite/env {src_path}/{param}.S -o my.elf -DTEST_CASE_1=True -DXLEN=64 -mabi=lp64",
        "bash /home/owais/nucleusrv/simcmd.sh {working_directory}"
    ],
    "privilege": [
        "riscv64-unknown-elf-gcc {march} -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T /home/owais/nucleusrv/nucleusrv/env/link.ld -I /home/owais/nucleusrv/nucleusrv/env/ -I /home/owais/nucleusrv/riscv-arch-test/riscv-test-suite/env {src_path}/{param}.S -o my.elf -DTEST_CASE_1=True -DXLEN=64 -mabi=lp64",
        "bash /home/owais/nucleusrv/simcmd.sh {working_directory}"
    ]
}

# Iterate over each instruction set type
for key, base_directory in base_directories.items():
    # Get the specific parameters and commands for this type
    type_parameters = parameters[key]
    commands_template = commands_templates[key]
    
    # Iterate over each parameter
    for param in type_parameters:
        # Construct the working directory and source path
        working_directory = f"{base_directory}/{param}.S/dut"
        src_path = f"/home/owais/nucleusrv/riscv-arch-test/riscv-test-suite/rv64i_m/{key}/src"
        
        print(f"Changing to directory: {working_directory}")
        os.chdir(working_directory)
        
        # Get the correct march option based on the type
        march = march_options[key]
        
        # Run each command in the current working directory
        for command_template in commands_template:
            command = command_template.format(
                march=march, 
                src_path=src_path, 
                param=param, 
                working_directory=working_directory
            )
            print(f"Running command: {command}")
            process = subprocess.run(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            print(process.stdout.decode())
            
            if process.returncode != 0:
                print(f"Error: Command failed with return code {process.returncode}")
                print(process.stderr.decode())
                break
            
            # Apply a 2-second delay after each command
            time.sleep(2)
