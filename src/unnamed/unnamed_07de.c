#include "protos.h"

void f_007de6bc(void)
{
    FN_ENTER(0x007de6bc);
    /* 007de6bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007de6bd: mov ebp, esp */ r_ebp = r_esp;
    /* 007de6bf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007de6c2: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 007de6c5: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 007de6c8: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 007de6cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007de6ce: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007de6cf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007de6d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007de6d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007de6d5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007de6d7: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7de6ddu); call_ind(t); }
    /* 007de6dd: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007de6de: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007de6df: jmp 0x7e1900 */ f_007e1900(); return;
}

