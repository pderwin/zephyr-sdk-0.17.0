/*
 *uncomment this if you want the linker to output srecords.
OUTPUT_FORMAT(srec)
 *
 */
ENTRY(start)
OUTPUT_ARCH(sparc)
SEARCH_DIR(.)
STARTUP(cygmon-crt0.o)
GROUP(cygmon-salib.o -lc -lgcc -lc)

/*
 * The memory map looks like this:
 * +--------------------+ <- low memory
 * | .text              |
 * |        _stext      |
 * |        _etext      |
 * |        ctor list   | the ctor and dtor lists are for
 * |        dtor list   | C++ support
 * |        _end_text   |
 * +--------------------+
 * | .data              | initialized data goes here
 * |        _sdata      |
 * |        _edata      |
 * +--------------------+
 * | .bss               |
 * |        __bss_start | start of bss, cleared by crt0
 * |        _end        | start of heap, used by sbrk()
 * +--------------------+
 * |    heap space      |
 * |        _ENDHEAP    |
 * |    stack space     | 
 * |        __stack     | top of stack
 * +--------------------+ <- high memory
 */

_STACK_SIZE = (16 * 1024);
_RAM_SIZE = 1M;
_RAM_START = 0x4000;
_RAM_END = _RAM_START + _RAM_SIZE;

/*
 * Setup the standard memory map. The stack grows down towards low memory. 
 */
MEMORY
{
  ram     : ORIGIN = 0x4000, LENGTH = 1M
}

__stack = (_RAM_START + _RAM_SIZE - 4 * 16) - _STACK_SIZE;

/*
 * All the symbols that might be accessed from C code need to be
 * listed twice, once with an additional underscore. aout format needs
 * and extra underscore, whereas coff & elf doesn't. This is to work
 * with both.
 */
/*
 * Initalize some symbols to be zero so we can reference them in the
 * crt0 without core dumping. These functions are all optional, but
 * we do this so we can have our crt0 always use them if they exist. 
 * This is so BSPs work better when using the crt0 installed with gcc.
 * We have to initalize them twice, so we cover a.out (which prepends
 * an underscore) and coff object file formats.
 */
PROVIDE (hardware_init_hook = 0);
PROVIDE (_hardware_init_hook = 0);
PROVIDE (software_init_hook = 0);
PROVIDE (_software_init_hook = 0);
SECTIONS
{
  .text : {
    stext = .;
    _stext = .;
    CREATE_OBJECT_SYMBOLS
    *(.text)
     __CTOR_LIST__ = .;
    LONG((__CTOR_END__ - __CTOR_LIST__) / 4 - 2)
    KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*crtend.o(.ctors))
    LONG(0)
    __CTOR_END__ = .;
    __DTOR_LIST__ = .;
    LONG((__DTOR_END__ - __DTOR_LIST__) / 4 - 2)
    KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*crtend.o(.dtors))
     LONG(0)
    __DTOR_END__ = .;
    *(.init)
    *(.lit)
    *(.rodata)
    *(.rodata.*)
    *(.shdata)
    *(.eh_frame)
    *(.gnu.linkonce.t*)
    *(.gnu.linkonce.r*)
    *(.gcc_except_table)
    *(.fini)
    _etext  =  .;
  }  > ram
  .shbss SIZEOF(.text) + ADDR(.text) :	{
    *(.shbss)
  } 
  .talias : { }  > ram
  .data  : {
    sdata  =  .;
    _sdata  =  .;
    *(.data)
    *(.gnu.linkonce.d*)
    edata  =  .;
    _edata  =  .;
  } > ram
  .bss SIZEOF(.data) + ADDR(.data) : {
   sbss = . ;
   _sbss = . ;
   __bss_start = ALIGN(0x8);
   __bss_start = ALIGN(0x8);
   *(.bss)
   *(COMMON)
     end = ALIGN(0x8);
     _end = ALIGN(0x8);
     __end = ALIGN(0x8);
     ebss = .;
     _ebss = .;
  }
  .mstack  : { }  > ram
  .rstack  : { }  > ram
  .stab  0 (NOLOAD) : {
    [ .stab ]
  }
  .stabstr  0 (NOLOAD) :
  {
    [ .stabstr ]
  }
/* DWARF debug sections.
   Symbols in the DWARF debugging sections are relative to the beginning
   of the section so we begin them at 0.  */
/* DWARF 1 */
  .debug    0 (NOLOAD) :
  {
    [ .debug ]
  }
  .line	    0 (NOLOAD) :
  {
    [ .line ]
  }
/* GNU DWARF 1 extensions */
  .debug_srcinfo 0 (NOLOAD) :
  {
    [ .debug_srcinfo ]
  }
  .debug_sfnames  0 (NOLOAD) :
  {
    [ .debug_sfnames ]
  }
/* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 (NOLOAD) :
  {
    [ .debug_aranges ]
  }
  .debug_pubnames 0 (NOLOAD) :
  {
    [ .debug_pubnames ]
  }
/* DWARF 2 */
  .debug_info     0 (NOLOAD) :
  {
    [ .debug_info ]
  }
  .debug_abbrev   0 (NOLOAD) :
  {
    [ .debug_abbrev ]
  }
  .debug_line     0 (NOLOAD) :
  {
    [ .debug_line ]
  }
  .debug_frame    0 (NOLOAD) :
  {
    [ .debug_frame ]
  }
  .debug_str      0 (NOLOAD) :
  {
    [ .debug_str ]
  }
  .debug_loc      0 (NOLOAD) :
  {
    [ .debug_loc ]
  }
  .debug_macinfo  0 (NOLOAD) :
  {
    [ .debug_macinfo ]
  }
}
