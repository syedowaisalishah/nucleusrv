#!/bin/bash

cd ../../../../../..
riscv64-unknown-elf-objcopy -O binary -j .text.init $1/my.elf $1/DUT-nucleusrv.text.bin
hexdump -v -e '"%08x\n"' $1/DUT-nucleusrv.text.bin > $1/DUT-nucleusrv.program.hex
riscv64-unknown-elf-objcopy -O binary -j .data $1/my.elf $1/DUT-nucleusrv.data.bin
hexdump -v -e '"%016x\n"' $1/DUT-nucleusrv.data.bin > $1/DUT-nucleusrv.data.hex
python3 script.py $1/DUT-nucleusrv.data.hex 
make sim-compliance IMEM=$1/DUT-nucleusrv.program.hex DMEM1=$1/data1.hex DMEM2=$1/data2.hex PTH=$1
grep '^[a-f0-9]\+$' $1/trace.log > $1/DUT-nucleusrv.signature
echo "6f5ca309e7d4b281" | cat - $1/DUT-nucleusrv.signature > temp && mv temp $1/DUT-nucleusrv.signature

# cd ../../../../../..
# riscv64-unknown-elf-objcopy -O binary -j .text.init $1/my.elf $1/DUT-nucleusrv.text.bin
# riscv64-unknown-elf-objcopy -O binary -j .data $1/my.elf $1/DUT-nucleusrv.data.bin
# hexdump -v -e '"%08x\n"' $1/DUT-nucleusrv.text.bin > $1/DUT-nucleusrv.program.hex
# hexdump -v -e '"%016x\n"' $1/DUT-nucleusrv.data.bin > $1/DUT-nucleusrv.data.hex
# make sim-compliance IMEM=$1/DUT-nucleusrv.program.hex DMEM=$1/DUT-nucleusrv.data.hex PTH=$1 
# grep '^[a-f0-9]\+$' $1/trace.log > $1/DUT-nucleusrv.signature
# echo "6f5ca309e7d4b281" | cat - $1/DUT-nucleusrv.signature > temp && mv temp $1/DUT-nucleusrv.signature



# cd ../../../../../..
# riscv64-unknown-elf-objcopy -O binary -j .text.init $1/my.elf $1/DUT-nucleusrv.text.bin
# riscv64-unknown-elf-objcopy -O binary -j .data $1/my.elf $1/DUT-nucleusrv.data.bin
# hexdump -v -e '"%08x\n"' $1/DUT-nucleusrv.text.bin > $1/DUT-nucleusrv.program.hex
# hexdump -v -e '"%08x\n"' $1/DUT-nucleusrv.text.bin > $1/DUT-nucleusrv.data.hex
# sbt "testOnly nucleusrv.components.TopTest -- -DprogramFile=$1/DUT-nucleusrv.program.hex -DwriteVcd=1 -DdataFile=$1/DUT-nucleusrv.data.hex" 2> $1/DUT-nucleusrv.stdout
# grep '^[a-f0-9]\+$' $1/DUT-nucleusrv.stdout > $1/DUT-nucleusrv.signature
