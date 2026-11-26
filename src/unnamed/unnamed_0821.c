#include "protos.h"

void f_00821544(void) /* sub_821544 */
{
    FN_ENTER(0x00821544);
    /* 00821544: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00821549: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 0082154e: mov edx, 1 */ r_edx = 0x1u;
    /* 00821553: mov dword ptr [0xa165f0], edx */ W32((u32)(0xa165f0u), r_edx);
    /* 00821559: mov dword ptr [0xaca4e4], edx */ W32((u32)(0xaca4e4u), r_edx);
    /* 0082155f: ret  */ FN_RET(0x00821544); r_esp += 4; return;
}

void f_00821560(void) /* sub_821560 */
{
    FN_ENTER(0x00821560);
    /* 00821560: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00821565: mov dword ptr [0xa165f0], 3 */ W32((u32)(0xa165f0u), 0x3u);
    /* 0082156f: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 00821574: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 0082157e: ret  */ FN_RET(0x00821560); r_esp += 4; return;
}

void f_00821580(void) /* sub_821580 */
{
    FN_ENTER(0x00821580);
    /* 00821580: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 00821585: mov dword ptr [0xa165f0], 4 */ W32((u32)(0xa165f0u), 0x4u);
    /* 0082158f: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 00821594: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 0082159e: ret  */ FN_RET(0x00821580); r_esp += 4; return;
}

void f_008215a0(void) /* sub_8215A0 */
{
    FN_ENTER(0x008215a0);
    /* 008215a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008215a1: mov ebp, esp */ r_ebp = r_esp;
    /* 008215a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008215a6: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008215a9: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008215ac: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008215af: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 008215b0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008215b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008215b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008215b6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008215b8: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x8215beu); call_ind(t); }
    /* 008215be: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 008215bf: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 008215c0: jmp 0x8247e1 */ goto L_008247e1;
L_008247e1:; BB(0x008247e1);
    /* 008247e1: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 008247e2: mov eax, dword ptr [0xa165f0] */ r_eax = R32((u32)(0xa165f0u));
    /* 008247e7: mov dword ptr [0xa165f0], 6 */ W32((u32)(0xa165f0u), 0x6u);
    /* 008247f1: mov dword ptr [0xa165f8], eax */ W32((u32)(0xa165f8u), r_eax);
    /* 008247f6: mov dword ptr [0xaca4e4], 1 */ W32((u32)(0xaca4e4u), 0x1u);
    /* 00824800: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00824801: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00824803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00824805: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00824807: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00824809: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x82480fu); call_ind(t); }
    /* 0082480f: jmp 0x82482f */ goto L_0082482f;
L_0082482f:; BB(0x0082482f);
    /* 0082482f: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00824830: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00824833: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00824836: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00824839: mov esp, ebp */ r_esp = r_ebp;
    /* 0082483b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082483c: ret  */ FN_RET(0x008215a0); r_esp += 4; return;
}

