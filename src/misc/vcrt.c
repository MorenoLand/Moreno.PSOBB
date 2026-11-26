#include "protos.h"

void f_00707664(void) /* ___vcrt_initialize_telemetry_provider */
{
    FN_ENTER(0x00707664);
    /* 00707664: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00707666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707669: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0070766e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x707673u); f_00814298();
    /* 00707673: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707676: ret  */ FN_RET(0x00707664); r_esp += 4; return;
}

void f_00707678(void) /* ___vcrt_initialize_telemetry_provider_0 */
{
    FN_ENTER(0x00707678);
    /* 00707678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070767a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070767b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070767c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070767d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00707682: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x707687u); f_00814298();
    /* 00707687: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070768a: ret  */ FN_RET(0x00707678); r_esp += 4; return;
}

void f_0070768c(void) /* ___vcrt_initialize_telemetry_provider_1 */
{
    FN_ENTER(0x0070768c);
    /* 0070768c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070768e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070768f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707691: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00707696: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x70769bu); f_00814298();
    /* 0070769b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070769e: ret  */ FN_RET(0x0070768c); r_esp += 4; return;
}

