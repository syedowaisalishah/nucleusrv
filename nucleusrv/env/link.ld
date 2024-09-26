OUTPUT_ARCH( "riscv" )
ENTRY(rvtest_entry_point)

MEMORY
{
	ICCM  : ORIGIN = 0x80000000, LENGTH = 2149580800
	DCCM  : ORIGIN = 0x80200000, LENGTH = 2149580800
}

SECTIONS
{
  .text : { *(.text) } > ICCM
  .text.init : { *(.text.init) } > ICCM
  .data :
    { *(.data) } > DCCM
  .data.string : { *(.data.string)} > DCCM
  .bss : { *(.bss) } > DCCM
}