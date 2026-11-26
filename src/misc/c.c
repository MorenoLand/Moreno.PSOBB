#include "protos.h"

void f_0085a063(void) /* __c_exit */
{
    FN_ENTER(0x0085a063);
    /* 0085a063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a067: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a069: call 0x859f6f */ r_esp -= 4; W32(r_esp, 0x85a06eu); f_00859f6f();
    /* 0085a06e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a071: ret  */ FN_RET(0x0085a063); r_esp += 4; return;
}

