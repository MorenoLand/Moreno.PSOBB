#include "protos.h"

void f_0085bc4e(void) /* __unlock_file */
{
    FN_ENTER(0x0085bc4e);
    /* 0085bc4e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085bc52: mov ecx, 0xa239e0 */ r_ecx = 0xa239e0u;
    /* 0085bc57: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085bc59: jb 0x85bc72 */ if (fC) goto L_0085bc72;
L_0085bc5b:; BB(0x0085bc5b);
    /* 0085bc5b: cmp eax, 0xa23c40 */ {  u32 a = r_eax; u32 b = 0xa23c40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085bc60: ja 0x85bc72 */ if ((!fC&&!fZ)) goto L_0085bc72;
L_0085bc62:; BB(0x0085bc62);
    /* 0085bc62: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc64: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085bc67: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc6b: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85bc70u); f_0085e4c5();
    /* 0085bc70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bc71: ret  */ FN_RET(0x0085bc4e); r_esp += 4; return;
L_0085bc72:; BB(0x0085bc72);
    /* 0085bc72: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc76: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x85bc7cu); call_ind(t); }
    /* 0085bc7c: ret  */ FN_RET(0x0085bc4e); r_esp += 4; return;
}

void f_0085bc7d(void) /* __unlock_file2 */
{
    FN_ENTER(0x0085bc7d);
    /* 0085bc7d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085bc81: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bc84: jge 0x85bc91 */ if ((fS==fO)) goto L_0085bc91;
L_0085bc86:; BB(0x0085bc86);
    /* 0085bc86: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc8a: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85bc8fu); f_0085e4c5();
    /* 0085bc8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bc90: ret  */ FN_RET(0x0085bc7d); r_esp += 4; return;
L_0085bc91:; BB(0x0085bc91);
    /* 0085bc91: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085bc95: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc99: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x85bc9fu); call_ind(t); }
    /* 0085bc9f: ret  */ FN_RET(0x0085bc7d); r_esp += 4; return;
}

void f_00863bb1(void) /* __unlock_fhandle */
{
    FN_ENTER(0x00863bb1);
    /* 00863bb1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00863bb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00863bb7: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00863bba: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00863bbd: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00863bc4: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00863bc7: lea eax, [ecx + eax*4 + 0xc] */ r_eax = (u32)(r_ecx+r_eax*4+0xcu);
    /* 00863bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863bcc: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x863bd2u); call_ind(t); }
    /* 00863bd2: ret  */ FN_RET(0x00863bb1); r_esp += 4; return;
}

