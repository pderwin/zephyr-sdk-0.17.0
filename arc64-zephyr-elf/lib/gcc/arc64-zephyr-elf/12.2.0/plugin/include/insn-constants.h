/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define F11_REGNUM 75
#define R13_REGNUM 13
#define R7_REGNUM 7
#define F1_REGNUM 65
#define F14_REGNUM 78
#define R16_REGNUM 16
#define F21_REGNUM 85
#define R23_REGNUM 23
#define F4_REGNUM 68
#define F17_REGNUM 81
#define R19_REGNUM 19
#define F24_REGNUM 88
#define R26_REGNUM 26
#define F31_REGNUM 95
#define R33_REGNUM 33
#define F27_REGNUM 91
#define CC_REGNUM 98
#define R0_REGNUM 0
#define R43_REGNUM 43
#define R3_REGNUM 3
#define R46_REGNUM 46
#define SP_REGNUM 28
#define R53_REGNUM 53
#define BLINK_REGNUM 31
#define R6_REGNUM 6
#define R49_REGNUM 49
#define R56_REGNUM 56
#define R63_REGNUM 63
#define R59_REGNUM 59
#define F30_REGNUM 94
#define R9_REGNUM 9
#define R8_REGNUM 8
#define F9_REGNUM 73
#define AP_REGNUM 96
#define R11_REGNUM 11
#define F12_REGNUM 76
#define R14_REGNUM 14
#define R21_REGNUM 21
#define F2_REGNUM 66
#define F15_REGNUM 79
#define R17_REGNUM 17
#define F22_REGNUM 86
#define R24_REGNUM 24
#define F5_REGNUM 69
#define F18_REGNUM 82
#define F25_REGNUM 89
#define R27_REGNUM 27
#define R34_REGNUM 34
#define R41_REGNUM 41
#define F28_REGNUM 92
#define F20_REGNUM 84
#define R37_REGNUM 37
#define R44_REGNUM 44
#define R51_REGNUM 51
#define R10_REGNUM 10
#define R4_REGNUM 4
#define R47_REGNUM 47
#define R54_REGNUM 54
#define R61_REGNUM 61
#define R20_REGNUM 20
#define R57_REGNUM 57
#define R30_REGNUM 30
#define R36_REGNUM 36
#define R2_REGNUM 2
#define R40_REGNUM 40
#define F7_REGNUM 71
#define R1_REGNUM 1
#define R50_REGNUM 50
#define SFP_REGNUM 97
#define R60_REGNUM 60
#define R12_REGNUM 12
#define F0_REGNUM 64
#define F13_REGNUM 77
#define R15_REGNUM 15
#define R22_REGNUM 22
#define F3_REGNUM 67
#define F16_REGNUM 80
#define R18_REGNUM 18
#define F23_REGNUM 87
#define R25_REGNUM 25
#define F6_REGNUM 70
#define R32_REGNUM 32
#define F19_REGNUM 83
#define F26_REGNUM 90
#define R35_REGNUM 35
#define R42_REGNUM 42
#define F29_REGNUM 93
#define R38_REGNUM 38
#define R45_REGNUM 45
#define R52_REGNUM 52
#define R5_REGNUM 5
#define R48_REGNUM 48
#define R55_REGNUM 55
#define R62_REGNUM 62
#define R39_REGNUM 39
#define R58_REGNUM 58
#define ILINK_REGNUM 29
#define F8_REGNUM 72
#define F10_REGNUM 74

enum unspec {
  ARC64_UNSPEC_PCREL = 0,
  ARC64_UNSPEC_GOT = 1,
  ARC64_UNSPEC_GOT32 = 2,
  ARC64_UNSPEC_TLS_GD = 3,
  ARC64_UNSPEC_TLS_IE = 4,
  ARC64_UNSPEC_TLS_OFF = 5,
  ARC64_VUNSPEC_BLOCKAGE = 6,
  ARC64_VUNSPEC_LR = 7,
  ARC64_VUNSPEC_SR = 8,
  ARC64_VUNSPEC_LRL = 9,
  ARC64_VUNSPEC_SRL = 10,
  ARC64_VUNSPEC_FLAG = 11,
  ARC64_VUNSPEC_BRK = 12,
  ARC64_VUNSPEC_NOP = 13,
  ARC64_VUNSPEC_TRAP_S = 14,
  ARC64_VUNSPEC_EX = 15,
  ARC64_VUNSPEC_CAS = 16,
  ARC64_VUNSPEC_SC = 17,
  ARC64_VUNSPEC_LL = 18,
  ARC64_VUNSPEC_SYNC = 19,
  ARC64_VUNSPEC_ATOOPS = 20,
  ARC64_VUNSPEC_RTIE = 21,
  ARC64_UNSPEC_MEMBAR = 22,
  ARC64_UNSPEC_FLS = 23,
  ARC64_UNSPEC_COPYSIGN = 24,
  ARC64_UNSPEC_XORSIGN = 25,
  ARC64_UNSPEC_ROUND = 26,
  ARC64_UNSPEC_BTRUNC = 27,
  ARC64_UNSPEC_CASESI = 28,
  ARC64_UNSPEC_VECINIT = 29,
  ARC64_UNSPEC_QMPYH = 30,
  ARC64_UNSPEC_QMACH = 31,
  ARC64_UNSPEC_DMPYWH = 32,
  ARC64_UNSPEC_DMPYWHU = 33,
  ARC64_UNSPEC_DMACWH = 34,
  ARC64_UNSPEC_DMACWHU = 35,
  ARC64_UNSPEC_VPACK4HL = 36,
  ARC64_UNSPEC_VPACK4HM = 37,
  ARC64_UNSPEC_VPACK2WL = 38,
  ARC64_UNSPEC_SWAPL = 39,
  ARC64_UNSPEC_SWAP = 40,
  ARC64_UNSPEC_VEC_SHR = 41,
  ARC64_UNSPEC_VEC_SHL = 42,
  ARC64_UNSPEC_HEXCH = 43,
  ARC64_UNSPEC_SEXCH = 44,
  ARC64_UNSPEC_DEXCH = 45,
  ARC64_UNSPEC_HUNPKL = 46,
  ARC64_UNSPEC_SUNPKL = 47,
  ARC64_UNSPEC_DUNPKL = 48,
  ARC64_UNSPEC_HUNPKM = 49,
  ARC64_UNSPEC_SUNPKM = 50,
  ARC64_UNSPEC_DUNPKM = 51,
  ARC64_UNSPEC_HPACKL = 52,
  ARC64_UNSPEC_SPACKL = 53,
  ARC64_UNSPEC_DPACKL = 54,
  ARC64_UNSPEC_HPACKM = 55,
  ARC64_UNSPEC_SPACKM = 56,
  ARC64_UNSPEC_DPACKM = 57,
  ARC64_UNSPEC_HBFLYL = 58,
  ARC64_UNSPEC_SBFLYL = 59,
  ARC64_UNSPEC_DBFLYL = 60,
  ARC64_UNSPEC_HBFLYM = 61,
  ARC64_UNSPEC_SBFLYM = 62,
  ARC64_UNSPEC_DBFLYM = 63,
  ARC64_UNSPEC_VFADDSUB = 64,
  ARC64_UNSPEC_VFSUBADD = 65,
  ARC64_UNSPEC_VADDSUB = 66,
  ARC64_UNSPEC_VSUBADD = 67
};
#define NUM_UNSPEC_VALUES 68
extern const char *const unspec_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
