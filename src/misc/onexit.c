#include "protos.h"

void f_00858fbd(void) /* __onexit_lk */
{
    FN_ENTER(0x00858fbd);
    /* 00858fbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858fbe: push dword ptr [0xaf1bd0] */ { u32 v = R32((u32)(0xaf1bd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858fc4: call 0x861119 */ r_esp -= 4; W32(r_esp, 0x858fc9u); f_00861119();
    /* 00858fc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858fca: mov ecx, dword ptr [0xaf1bcc] */ r_ecx = R32((u32)(0xaf1bccu));
    /* 00858fd0: mov esi, eax */ r_esi = r_eax;
    /* 00858fd2: mov eax, dword ptr [0xaf1bd0] */ r_eax = R32((u32)(0xaf1bd0u));
    /* 00858fd7: mov edx, ecx */ r_edx = r_ecx;
    /* 00858fd9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00858fdb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00858fde: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00858fe0: jae 0x859030 */ if (!fC) goto L_00859030;
L_00858fe2:; BB(0x00858fe2);
    /* 00858fe2: mov ecx, 0x800 */ r_ecx = 0x800u;
    /* 00858fe7: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00858fe9: jae 0x858fed */ if (!fC) goto L_00858fed;
L_00858feb:; BB(0x00858feb);
    /* 00858feb: mov ecx, esi */ r_ecx = r_esi;
L_00858fed:; BB(0x00858fed);
    /* 00858fed: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858fef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858ff1: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x858ff6u); f_00860f6c();
    /* 00858ff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858ff8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858ff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858ffa: jne 0x859013 */ if (!fZ) goto L_00859013;
L_00858ffc:; BB(0x00858ffc);
    /* 00858ffc: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858fff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859000: push dword ptr [0xaf1bd0] */ { u32 v = R32((u32)(0xaf1bd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859006: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x85900bu); f_00860f6c();
    /* 0085900b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085900d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085900e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085900f: jne 0x859013 */ if (!fZ) goto L_00859013;
L_00859011:; BB(0x00859011);
    /* 00859011: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859012: ret  */ FN_RET(0x00858fbd); r_esp += 4; return;
L_00859013:; BB(0x00859013);
    /* 00859013: mov ecx, dword ptr [0xaf1bcc] */ r_ecx = R32((u32)(0xaf1bccu));
    /* 00859019: sub ecx, dword ptr [0xaf1bd0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaf1bd0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085901f: mov dword ptr [0xaf1bd0], eax */ W32((u32)(0xaf1bd0u), r_eax);
    /* 00859024: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00859027: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 0085902a: mov dword ptr [0xaf1bcc], ecx */ W32((u32)(0xaf1bccu), r_ecx);
L_00859030:; BB(0x00859030);
    /* 00859030: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 00859032: add dword ptr [0xaf1bcc], 4 */ { u32 ad = (u32)(0xaf1bccu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00859039: mov eax, edi */ r_eax = r_edi;
    /* 0085903b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085903c: ret  */ FN_RET(0x00858fbd); r_esp += 4; return;
}

