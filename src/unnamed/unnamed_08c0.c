#include "protos.h"

void f_008c0000(void)
{
    FN_ENTER(0x008c0000);
    /* 008c0000: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0001: clc  */ fC = 0;
    /* 008c0002: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0003: add byte ptr [ebx], bl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0006: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0008: or al, 0x5b */ {  u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c000a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0010: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0011: clc  */ fC = 0;
    /* 008c0012: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0013: add byte ptr [eax + eax], bl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0017: add byte ptr [esp + ebx*2], cl */ { u32 ad = (u32)(r_esp+r_ebx*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c001a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0020: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0021: clc  */ fC = 0;
    /* 008c0022: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0023: add byte ptr [ebp], bl */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0026: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0028: or al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c002a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0030: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0031: clc  */ fC = 0;
    /* 008c0032: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0033: add byte ptr [esi], bl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0036: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0038: or al, 0x5e */ {  u32 a = (u8)r_eax; u32 b = 0x5eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c003a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0040: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0041: clc  */ fC = 0;
    /* 008c0042: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0043: add byte ptr [edi], bl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0046: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0048: or al, 0x5f */ {  u32 a = (u8)r_eax; u32 b = 0x5fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c004a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0050: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0051: clc  */ fC = 0;
    /* 008c0052: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0053: add byte ptr [eax], ah */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0056: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0058: or al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c005a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0060: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0061: clc  */ fC = 0;
    /* 008c0062: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0063: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0066: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0068: or al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0070: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0071: clc  */ fC = 0;
    /* 008c0072: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0073: add byte ptr [edx], ah */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0078: or al, 0x62 */ {  u32 a = (u8)r_eax; u32 b = 0x62u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c007a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0080: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0081: clc  */ fC = 0;
    /* 008c0082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0083: add byte ptr [ebx], ah */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0086: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0088: or al, 0x63 */ {  u32 a = (u8)r_eax; u32 b = 0x63u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c008a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0090: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0091: clc  */ fC = 0;
    /* 008c0092: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0093: add byte ptr [eax + eax], ah */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0097: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c009a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00a1: clc  */ fC = 0;
    /* 008c00a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00a3: add byte ptr [ebp], ah */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a8: or al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00b1: clc  */ fC = 0;
    /* 008c00b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00b3: add byte ptr [esi], ah */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b8: or al, 0x66 */ {  u32 a = (u8)r_eax; u32 b = 0x66u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00c1: clc  */ fC = 0;
    /* 008c00c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00c3: add byte ptr [edi], ah */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c8: or al, 0x67 */ {  u32 a = (u8)r_eax; u32 b = 0x67u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00d1: clc  */ fC = 0;
    /* 008c00d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00d3: add byte ptr [eax], ch */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d8: or al, 0x68 */ {  u32 a = (u8)r_eax; u32 b = 0x68u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00e1: clc  */ fC = 0;
    /* 008c00e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00e3: add byte ptr [ecx], ch */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e8: or al, 0x69 */ {  u32 a = (u8)r_eax; u32 b = 0x69u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00f1: clc  */ fC = 0;
    /* 008c00f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00f3: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f8: or al, 0x6a */ {  u32 a = (u8)r_eax; u32 b = 0x6au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0100: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0101: clc  */ fC = 0;
    /* 008c0102: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0103: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0106: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0108: or al, 0x6b */ {  u32 a = (u8)r_eax; u32 b = 0x6bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c010a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0110: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0111: clc  */ fC = 0;
    /* 008c0112: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0113: add byte ptr [eax + eax], ch */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0117: add byte ptr [esp + ebp*2], cl */ { u32 ad = (u32)(r_esp+r_ebp*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c011a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0120: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0121: clc  */ fC = 0;
    /* 008c0122: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0123: add byte ptr [ebp], ch */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0126: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0128: or al, 0x6d */ {  u32 a = (u8)r_eax; u32 b = 0x6du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c012a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0130: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0131: clc  */ fC = 0;
    /* 008c0132: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0133: add byte ptr [esi], ch */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0136: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0138: or al, 0x6e */ {  u32 a = (u8)r_eax; u32 b = 0x6eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c013a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0140: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0141: clc  */ fC = 0;
    /* 008c0142: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0143: add byte ptr [edi], ch */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0146: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0148: or al, 0x6f */ {  u32 a = (u8)r_eax; u32 b = 0x6fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c014a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0150: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0151: clc  */ fC = 0;
    /* 008c0152: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0153: add byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0156: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0158: or al, 0x70 */ {  u32 a = (u8)r_eax; u32 b = 0x70u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c015a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0160: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0161: clc  */ fC = 0;
    /* 008c0162: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0163: add byte ptr [ecx], dh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0166: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0168: or al, 0x71 */ {  u32 a = (u8)r_eax; u32 b = 0x71u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c016a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0170: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0171: clc  */ fC = 0;
    /* 008c0172: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0173: add byte ptr [edx], dh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0176: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0178: or al, 0x72 */ {  u32 a = (u8)r_eax; u32 b = 0x72u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c017a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0180: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0181: clc  */ fC = 0;
    /* 008c0182: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0183: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0186: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0188: or al, 0x73 */ {  u32 a = (u8)r_eax; u32 b = 0x73u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c018a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0190: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0191: clc  */ fC = 0;
    /* 008c0192: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0193: add byte ptr [eax + eax], dh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0197: add byte ptr [esp + esi*2], cl */ { u32 ad = (u32)(r_esp+r_esi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c019a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01a1: clc  */ fC = 0;
    /* 008c01a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01a3: add byte ptr [ebp], dh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a8: or al, 0x75 */ {  u32 a = (u8)r_eax; u32 b = 0x75u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01b1: clc  */ fC = 0;
    /* 008c01b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01b3: add byte ptr [esi], dh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b8: or al, 0x76 */ {  u32 a = (u8)r_eax; u32 b = 0x76u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01c1: clc  */ fC = 0;
    /* 008c01c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01c3: add byte ptr [edi], dh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c8: or al, 0x77 */ {  u32 a = (u8)r_eax; u32 b = 0x77u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01d1: clc  */ fC = 0;
    /* 008c01d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01d3: add byte ptr [eax], bh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d8: or al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01e1: clc  */ fC = 0;
    /* 008c01e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01e3: add byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e8: or al, 0x79 */ {  u32 a = (u8)r_eax; u32 b = 0x79u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01f1: clc  */ fC = 0;
    /* 008c01f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01f3: add byte ptr [edx], bh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f8: or al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0200: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0201: clc  */ fC = 0;
    /* 008c0202: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0203: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0206: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0208: or al, 0x7b */ {  u32 a = (u8)r_eax; u32 b = 0x7bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c020a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0210: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0211: clc  */ fC = 0;
    /* 008c0212: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0213: add byte ptr [eax + eax], bh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0217: add byte ptr [esp + edi*2], cl */ { u32 ad = (u32)(r_esp+r_edi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c021a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0220: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0221: clc  */ fC = 0;
    /* 008c0222: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0223: add byte ptr [ebp], bh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0226: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0228: or al, 0x7d */ {  u32 a = (u8)r_eax; u32 b = 0x7du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c022a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0230: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0231: clc  */ fC = 0;
    /* 008c0232: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0233: add byte ptr [esi], bh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0236: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0238: or al, 0x7e */ {  u32 a = (u8)r_eax; u32 b = 0x7eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c023a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0240: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0241: clc  */ fC = 0;
    /* 008c0242: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0243: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0246: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0248: or al, 0x7f */ {  u32 a = (u8)r_eax; u32 b = 0x7fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c024a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0250: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0251: clc  */ fC = 0;
    /* 008c0252: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0253: add byte ptr [eax + 0xc000000], al */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0259: add byte ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0260: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0261: clc  */ fC = 0;
    /* 008c0262: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0263: add byte ptr [ecx + 0xc000000], al */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0269: add dword ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c026f: add byte ptr [eax + edi*8 + 0x820099], ch */ { u32 ad = (u32)(r_eax+r_edi*8+0x820099u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0276: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0278: or al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c027a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0280: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0281: clc  */ fC = 0;
    /* 008c0282: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0283: add byte ptr [ebx + 0xc000000], al */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0289: add dword ptr [eax], -0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffff80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c028c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c028e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0290: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0291: clc  */ fC = 0;
    /* 008c0292: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0293: add byte ptr [eax + eax - 0x7bf40000], al */ { u32 ad = (u32)(r_eax+r_eax+0x840c0000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c029a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02a1: clc  */ fC = 0;
    /* 008c02a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02a3: add byte ptr [ebp + 0xc000000], al */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a9: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c02ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02b1: clc  */ fC = 0;
    /* 008c02b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02b3: add byte ptr [esi + 0xc000000], al */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b9: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 008c02bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02c1: clc  */ fC = 0;
    /* 008c02c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02c3: add byte ptr [edi + 0xc000000], al */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c9: xchg dword ptr [eax], eax */ { u32 x = R32((u32)(r_eax)); u32 y = r_eax; W32((u32)(r_eax), y); r_eax = x; }
    /* 008c02cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02d1: clc  */ fC = 0;
    /* 008c02d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02d3: add byte ptr [eax + 0xc000000], cl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d9: mov byte ptr [eax], al */ W8((u32)(r_eax), (u8)r_eax);
    /* 008c02db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02e1: clc  */ fC = 0;
    /* 008c02e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02e3: add byte ptr [ecx + 0xc000000], cl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e9: mov dword ptr [eax], eax */ W32((u32)(r_eax), r_eax);
    /* 008c02eb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02f1: clc  */ fC = 0;
    /* 008c02f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02f3: add byte ptr [edx + 0xc000000], cl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f9: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c02fb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0300: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0301: clc  */ fC = 0;
    /* 008c0302: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0303: add byte ptr [ebx + 0xc000000], cl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0309: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008c030b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c030e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0310: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0311: clc  */ fC = 0;
    /* 008c0312: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0313: add byte ptr [eax + eax - 0x73f40000], cl */ { u32 ad = (u32)(r_eax+r_eax+0x8c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c031a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0320: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0321: clc  */ fC = 0;
    /* 008c0322: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0323: add byte ptr [ebp + 0xc000000], cl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0329: lea eax, [eax] */ r_eax = (u32)(r_eax);
    /* 008c032b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c032e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0330: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0331: clc  */ fC = 0;
    /* 008c0332: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0333: add byte ptr [esi + 0xc000000], cl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0339: mov es, word ptr [eax] */ UNSUP(0x008c0339, "mov es, word ptr [eax]");
    /* 008c033b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c033e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0340: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0341: clc  */ fC = 0;
    /* 008c0342: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0343: add byte ptr [edi + 0xc000000], cl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0349: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 008c034b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c034e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0350: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0351: clc  */ fC = 0;
    /* 008c0352: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0353: add byte ptr [eax + 0xc000000], dl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0359: nop  */ ;
    /* 008c035a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0360: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0361: clc  */ fC = 0;
    /* 008c0362: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0363: add byte ptr [ecx + 0xc000000], dl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0369: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 008c036a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0370: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0371: clc  */ fC = 0;
    /* 008c0372: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0373: add byte ptr [edx + 0xc000000], dl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0379: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 008c037a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0380: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0381: clc  */ fC = 0;
    /* 008c0382: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0383: add byte ptr [ebx + 0xc000000], dl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0389: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 008c038a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0390: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0391: clc  */ fC = 0;
    /* 008c0392: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0393: add byte ptr [eax + eax - 0x6bf40000], dl */ { u32 ad = (u32)(r_eax+r_eax+0x940c0000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c039a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03a1: clc  */ fC = 0;
    /* 008c03a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03a3: add byte ptr [ebp + 0xc000000], dl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a9: xchg ebp, eax */ { u32 x = r_ebp; u32 y = r_eax; r_ebp = y; r_eax = x; }
    /* 008c03aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03b1: clc  */ fC = 0;
    /* 008c03b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03b3: add byte ptr [esi + 0xc000000], dl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b9: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 008c03ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03c1: clc  */ fC = 0;
    /* 008c03c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03c3: add byte ptr [edi + 0xc000000], dl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c9: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 008c03ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03d1: clc  */ fC = 0;
    /* 008c03d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03d3: add byte ptr [eax + 0xc000000], bl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d9: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 008c03da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03e1: clc  */ fC = 0;
    /* 008c03e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03e3: add byte ptr [ecx + 0xc000000], bl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03f1: clc  */ fC = 0;
    /* 008c03f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03f3: add byte ptr [edx + 0xc000000], bl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f9: lcall 0, 0x8000 */ UNSUP(0x008c03f9, "lcall 0, 0x8000");
    /* 008c0400: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0401: clc  */ fC = 0;
    /* 008c0402: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0403: add byte ptr [ebx + 0xc000000], bl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0409: wait  */ ;
    /* 008c040a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0410: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0411: clc  */ fC = 0;
    /* 008c0412: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0413: add byte ptr [eax + eax - 0x63f40000], bl */ { u32 ad = (u32)(r_eax+r_eax+0x9c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c041a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0420: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0421: clc  */ fC = 0;
    /* 008c0422: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0423: add byte ptr [ebp + 0xc000000], bl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0429: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 008c042a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0430: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0431: clc  */ fC = 0;
    /* 008c0432: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0433: add byte ptr [esi + 0xc000000], bl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0439: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008c043a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0440: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0441: clc  */ fC = 0;
    /* 008c0442: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0443: add byte ptr [edi + 0xc000000], bl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = (r < a); }
    /* 008c0449: lahf  */ r_eax = (r_eax & 0xffff00ffu) | ((u32)((fS << 7) | (fZ << 6) | (fA << 4) | (fP << 2) | 2 | fC) << 8);
    /* 008c044a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0450: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0451: clc  */ fC = 0;
    /* 008c0452: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0453: add byte ptr [eax + 0xc000000], ah */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0459: mov al, byte ptr [0x8000] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8000u))) & 0xffu);
    /* 008c045e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0460: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0461: clc  */ fC = 0;
    /* 008c0462: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0463: add byte ptr [ecx + 0xc000000], ah */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0469: mov eax, dword ptr [0x8000] */ r_eax = R32((u32)(0x8000u));
    /* 008c046e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0470: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0471: clc  */ fC = 0;
    /* 008c0472: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0473: add byte ptr [edx + 0xc000000], ah */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0479: mov byte ptr [0x8000], al */ W8((u32)(0x8000u), (u8)r_eax);
    /* 008c047e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0480: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0481: clc  */ fC = 0;
    /* 008c0482: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0483: add byte ptr [ebx + 0xc000000], ah */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0489: mov dword ptr [0x8000], eax */ W32((u32)(0x8000u), r_eax);
    /* 008c048e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0490: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0491: clc  */ fC = 0;
    /* 008c0492: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0493: add byte ptr [eax + eax - 0x5bf40000], ah */ { u32 ad = (u32)(r_eax+r_eax+0xa40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c049a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04a1: clc  */ fC = 0;
    /* 008c04a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04a3: add byte ptr [ebp + 0xc000000], ah */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008c04aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04b1: clc  */ fC = 0;
    /* 008c04b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04b3: add byte ptr [esi + 0xc000000], ah */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04b9: cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;  }
    /* 008c04ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04c1: clc  */ fC = 0;
    /* 008c04c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04c3: add byte ptr [edi + 0xc000000], ah */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04c9: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 008c04ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04d1: clc  */ fC = 0;
    /* 008c04d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04d3: add byte ptr [eax + 0xc000000], ch */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d9: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 008c04db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04e1: clc  */ fC = 0;
    /* 008c04e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04e3: add byte ptr [ecx + 0xc000000], ch */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e9: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c04ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04f1: clc  */ fC = 0;
    /* 008c04f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04f3: add byte ptr [edx + 0xc000000], ch */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f9: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c04fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0500: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0501: clc  */ fC = 0;
    /* 008c0502: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0503: add byte ptr [ebx + 0xc000000], ch */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0509: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008c050a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0510: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0511: clc  */ fC = 0;
    /* 008c0512: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0513: add byte ptr [eax + eax - 0x53f40000], ch */ { u32 ad = (u32)(r_eax+r_eax+0xac0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c051a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0520: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0521: clc  */ fC = 0;
    /* 008c0522: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0523: add byte ptr [ebp + 0xc000000], ch */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0529: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 008c052a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0530: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0531: clc  */ fC = 0;
    /* 008c0532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0533: add byte ptr [esi + 0xc000000], ch */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0539: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 008c053a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0540: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0541: clc  */ fC = 0;
    /* 008c0542: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0543: add byte ptr [edi + 0xc000000], ch */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0549: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 008c054a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0550: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0551: clc  */ fC = 0;
    /* 008c0552: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0553: add byte ptr [eax + 0xc000000], dh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0559: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c055b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c055e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0560: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0561: clc  */ fC = 0;
    /* 008c0562: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0563: add byte ptr [ecx + 0xc000000], dh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0569: mov cl, 0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c056b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c056e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0570: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0571: clc  */ fC = 0;
    /* 008c0572: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0573: add byte ptr [edx + 0xc000000], dh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0579: mov dl, 0 */ r_edx = (r_edx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c057b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c057e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0580: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0581: clc  */ fC = 0;
    /* 008c0582: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0583: add byte ptr [ebx + 0xc000000], dh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0589: mov bl, 0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c058b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c058e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0590: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0591: clc  */ fC = 0;
    /* 008c0592: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0593: add byte ptr [eax + eax - 0x4bf40000], dh */ { u32 ad = (u32)(r_eax+r_eax+0xb40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c059a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05a1: clc  */ fC = 0;
    /* 008c05a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05a3: add byte ptr [ebp + 0xc000000], dh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a9: mov ch, 0 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05b1: clc  */ fC = 0;
    /* 008c05b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05b3: add byte ptr [esi + 0xc000000], dh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b9: mov dh, 0 */ r_edx = (r_edx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05c1: clc  */ fC = 0;
    /* 008c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05c3: add byte ptr [edi + 0xc000000], dh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c9: mov bh, 0 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05d1: clc  */ fC = 0;
    /* 008c05d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05d3: add byte ptr [eax + 0xc000000], bh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d9: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 008c05de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05e1: clc  */ fC = 0;
    /* 008c05e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05e3: add byte ptr [ecx + 0xc000000], bh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e9: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 008c05ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05f1: clc  */ fC = 0;
    /* 008c05f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05f3: add byte ptr [edx + 0xc000000], bh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f9: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 008c05fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0600: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0601: clc  */ fC = 0;
    /* 008c0602: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0603: add byte ptr [ebx + 0xc000000], bh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0609: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 008c060e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0610: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0611: clc  */ fC = 0;
    /* 008c0612: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0613: add byte ptr [eax + eax - 0x43f40000], bh */ { u32 ad = (u32)(r_eax+r_eax+0xbc0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c061a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0620: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0621: clc  */ fC = 0;
    /* 008c0622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0623: add byte ptr [ebp + 0xc000000], bh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0629: mov ebp, 0x8000 */ r_ebp = 0x8000u;
    /* 008c062e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0630: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0631: clc  */ fC = 0;
    /* 008c0632: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0633: add byte ptr [esi + 0xc000000], bh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0639: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 008c063e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0640: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0641: clc  */ fC = 0;
    /* 008c0642: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0643: add byte ptr [edi + 0xc000000], bh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0649: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 008c064e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0650: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0651: clc  */ fC = 0;
    /* 008c0652: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0653: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0655: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0657: add byte ptr [eax + eax*8], cl */ { u32 ad = (u32)(r_eax+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c065a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0660: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0661: clc  */ fC = 0;
    /* 008c0662: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0663: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0665: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0667: add byte ptr [ecx + eax*8], cl */ { u32 ad = (u32)(r_ecx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c066a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0670: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0671: clc  */ fC = 0;
    /* 008c0672: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0673: add dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0675: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0677: add byte ptr [edx + eax*8], cl */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c067a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0680: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0681: clc  */ fC = 0;
    /* 008c0682: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0683: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0685: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0687: add byte ptr [ebx + eax*8], cl */ { u32 ad = (u32)(r_ebx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c068a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0690: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0691: clc  */ fC = 0;
    /* 008c0692: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0693: add ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0695: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0697: add byte ptr [esp + eax*8], cl */ { u32 ad = (u32)(r_esp+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c069a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06a1: clc  */ fC = 0;
    /* 008c06a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06a3: add ch, al */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a7: add byte ptr [eax*8 + 0x8000], cl */ { u32 ad = (u32)(r_eax*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06b1: clc  */ fC = 0;
    /* 008c06b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06b3: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b7: add byte ptr [esi + eax*8], cl */ { u32 ad = (u32)(r_esi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06c1: clc  */ fC = 0;
    /* 008c06c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06c3: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c7: add byte ptr [edi + eax*8], cl */ { u32 ad = (u32)(r_edi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06d1: clc  */ fC = 0;
    /* 008c06d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06d3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d7: add byte ptr [eax + ecx*8], cl */ { u32 ad = (u32)(r_eax+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06e1: clc  */ fC = 0;
    /* 008c06e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06e3: add cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e7: add byte ptr [ecx + ecx*8], cl */ { u32 ad = (u32)(r_ecx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06f1: clc  */ fC = 0;
    /* 008c06f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06f3: add dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f7: add byte ptr [edx + ecx*8], cl */ { u32 ad = (u32)(r_edx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0700: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0701: clc  */ fC = 0;
    /* 008c0702: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0703: add bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0705: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0707: add byte ptr [ebx + ecx*8], cl */ { u32 ad = (u32)(r_ebx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c070a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0710: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0711: clc  */ fC = 0;
    /* 008c0712: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0713: add ah, cl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0715: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0717: add byte ptr [esp + ecx*8], cl */ { u32 ad = (u32)(r_esp+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c071a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0720: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0721: clc  */ fC = 0;
    /* 008c0722: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0723: add ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0725: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0727: add byte ptr [ecx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ecx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c072e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0730: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0731: clc  */ fC = 0;
    /* 008c0732: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0733: add dh, cl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0735: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0737: add byte ptr [esi + ecx*8], cl */ { u32 ad = (u32)(r_esi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c073a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0740: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0741: clc  */ fC = 0;
    /* 008c0742: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0743: add bh, cl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0745: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0747: add byte ptr [edi + ecx*8], cl */ { u32 ad = (u32)(r_edi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c074a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0750: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0751: clc  */ fC = 0;
    /* 008c0752: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0753: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0755: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0757: add byte ptr [eax + edx*8], cl */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c075a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0760: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0761: clc  */ fC = 0;
    /* 008c0762: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0763: add cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0765: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0767: add byte ptr [ecx + edx*8], cl */ { u32 ad = (u32)(r_ecx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c076a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0770: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0771: clc  */ fC = 0;
    /* 008c0772: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0773: add dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0775: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0777: add byte ptr [edx + edx*8], cl */ { u32 ad = (u32)(r_edx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c077a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0780: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0781: clc  */ fC = 0;
    /* 008c0782: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0783: add bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0785: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0787: add byte ptr [ebx + edx*8], cl */ { u32 ad = (u32)(r_ebx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c078a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0790: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0791: clc  */ fC = 0;
    /* 008c0792: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0793: add ah, dl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0795: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0797: add byte ptr [esp + edx*8], cl */ { u32 ad = (u32)(r_esp+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c079a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07a1: clc  */ fC = 0;
    /* 008c07a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07a3: add ch, dl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a7: add byte ptr [edx*8 + 0x8000], cl */ { u32 ad = (u32)(r_edx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07b1: clc  */ fC = 0;
    /* 008c07b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07b3: add dh, dl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b7: add byte ptr [esi + edx*8], cl */ { u32 ad = (u32)(r_esi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07c1: clc  */ fC = 0;
    /* 008c07c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07c3: add bh, dl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c7: add byte ptr [edi + edx*8], cl */ { u32 ad = (u32)(r_edi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07d1: clc  */ fC = 0;
    /* 008c07d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07d3: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d7: add byte ptr [eax + ebx*8], cl */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07e1: clc  */ fC = 0;
    /* 008c07e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07e3: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e7: add byte ptr [ecx + ebx*8], cl */ { u32 ad = (u32)(r_ecx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07f1: clc  */ fC = 0;
    /* 008c07f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07f3: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f7: add byte ptr [edx + ebx*8], cl */ { u32 ad = (u32)(r_edx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0800: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0801: clc  */ fC = 0;
    /* 008c0802: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0803: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0805: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0807: add byte ptr [ebx + ebx*8], cl */ { u32 ad = (u32)(r_ebx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c080a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0810: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0811: clc  */ fC = 0;
    /* 008c0812: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0813: add ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0815: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0817: add byte ptr [esp + ebx*8], cl */ { u32 ad = (u32)(r_esp+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c081a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0820: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0821: clc  */ fC = 0;
    /* 008c0822: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0823: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0825: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0827: add byte ptr [ebx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c082e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0830: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0831: clc  */ fC = 0;
    /* 008c0832: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0833: add dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0835: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0837: add byte ptr [esi + ebx*8], cl */ { u32 ad = (u32)(r_esi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c083a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0840: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0841: clc  */ fC = 0;
    /* 008c0842: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0843: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0845: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0847: add byte ptr [edi + ebx*8], cl */ { u32 ad = (u32)(r_edi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c084a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0850: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0851: clc  */ fC = 0;
    /* 008c0852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0853: add al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0855: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0857: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c085a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0860: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0861: clc  */ fC = 0;
    /* 008c0862: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0863: add cl, ah */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0865: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0867: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c086a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0870: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0871: clc  */ fC = 0;
    /* 008c0872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0873: add dl, ah */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0875: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0877: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c087a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0880: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0881: clc  */ fC = 0;
    /* 008c0882: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0883: add bl, ah */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0885: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0887: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c088a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0890: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0891: clc  */ fC = 0;
    /* 008c0892: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0893: add ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0895: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0897: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c089a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08a1: clc  */ fC = 0;
    /* 008c08a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08a3: add ch, ah */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a7: add byte ptr [0x8000], cl */ { u32 ad = (u32)(0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08b1: clc  */ fC = 0;
    /* 008c08b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08b3: add dh, ah */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b7: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08c1: clc  */ fC = 0;
    /* 008c08c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08c3: add bh, ah */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c7: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08d1: clc  */ fC = 0;
    /* 008c08d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08d3: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d7: add byte ptr [eax + ebp*8], cl */ { u32 ad = (u32)(r_eax+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08e1: clc  */ fC = 0;
    /* 008c08e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08e3: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e7: add byte ptr [ecx + ebp*8], cl */ { u32 ad = (u32)(r_ecx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08f1: clc  */ fC = 0;
    /* 008c08f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08f3: add dl, ch */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f7: add byte ptr [edx + ebp*8], cl */ { u32 ad = (u32)(r_edx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0900: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0901: clc  */ fC = 0;
    /* 008c0902: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0903: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0905: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0907: add byte ptr [ebx + ebp*8], cl */ { u32 ad = (u32)(r_ebx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c090a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0910: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0911: clc  */ fC = 0;
    /* 008c0912: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0913: add ah, ch */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0915: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0917: add byte ptr [esp + ebp*8], cl */ { u32 ad = (u32)(r_esp+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c091a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0920: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0921: clc  */ fC = 0;
    /* 008c0922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0923: add ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0925: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0927: add byte ptr [ebp*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebp*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c092e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0930: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0931: clc  */ fC = 0;
    /* 008c0932: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0933: add dh, ch */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0935: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0937: add byte ptr [esi + ebp*8], cl */ { u32 ad = (u32)(r_esi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c093a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0940: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0941: clc  */ fC = 0;
    /* 008c0942: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0943: add bh, ch */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0945: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0947: add byte ptr [edi + ebp*8], cl */ { u32 ad = (u32)(r_edi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c094a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0950: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0951: clc  */ fC = 0;
    /* 008c0952: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0953: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0955: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0957: add byte ptr [eax + esi*8], cl */ { u32 ad = (u32)(r_eax+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c095a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0960: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0961: clc  */ fC = 0;
    /* 008c0962: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0963: add cl, dh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0967: add byte ptr [ecx + esi*8], cl */ { u32 ad = (u32)(r_ecx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c096a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0970: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0971: clc  */ fC = 0;
    /* 008c0972: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0973: add dl, dh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0977: add byte ptr [edx + esi*8], cl */ { u32 ad = (u32)(r_edx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c097a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0980: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0981: clc  */ fC = 0;
    /* 008c0982: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0983: add bl, dh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0985: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0987: add byte ptr [ebx + esi*8], cl */ { u32 ad = (u32)(r_ebx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c098a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0990: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0991: clc  */ fC = 0;
    /* 008c0992: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0993: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0995: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0997: add byte ptr [esp + esi*8], cl */ { u32 ad = (u32)(r_esp+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c099a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09a1: clc  */ fC = 0;
    /* 008c09a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09a3: add ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a7: add byte ptr [esi*8 + 0x8000], cl */ { u32 ad = (u32)(r_esi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09b1: clc  */ fC = 0;
    /* 008c09b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09b3: add dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b7: add byte ptr [esi + esi*8], cl */ { u32 ad = (u32)(r_esi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09c1: clc  */ fC = 0;
    /* 008c09c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09c3: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c7: add byte ptr [edi + esi*8], cl */ { u32 ad = (u32)(r_edi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09d1: clc  */ fC = 0;
    /* 008c09d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09d3: add al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d7: add byte ptr [eax + edi*8], cl */ { u32 ad = (u32)(r_eax+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09e1: clc  */ fC = 0;
    /* 008c09e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09e3: add cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e7: add byte ptr [ecx + edi*8], cl */ { u32 ad = (u32)(r_ecx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09f1: clc  */ fC = 0;
    /* 008c09f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09f3: add dl, bh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f7: add byte ptr [edx + edi*8], cl */ { u32 ad = (u32)(r_edx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a01: clc  */ fC = 0;
    /* 008c0a02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a03: add bl, bh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a07: add byte ptr [ebx + edi*8], cl */ { u32 ad = (u32)(r_ebx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a11: clc  */ fC = 0;
    /* 008c0a12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a13: add ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a15: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a17: add byte ptr [esp + edi*8], cl */ { u32 ad = (u32)(r_esp+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a21: clc  */ fC = 0;
    /* 008c0a22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a23: add ch, bh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a27: add byte ptr [edi*8 + 0x8000], cl */ { u32 ad = (u32)(r_edi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a31: clc  */ fC = 0;
    /* 008c0a32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a33: add dh, bh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a37: add byte ptr [esi + edi*8], cl */ { u32 ad = (u32)(r_esi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a41: clc  */ fC = 0;
    /* 008c0a42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a43: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a47: add byte ptr [edi + edi*8], cl */ { u32 ad = (u32)(r_edi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008c0a50: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a57: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008c0a59, "falls out of decoded code");
}

void f_008c0062(void)
{
    FN_ENTER(0x008c0062);
    /* 008c0062: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0063: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0066: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0068: or al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0070: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0071: clc  */ fC = 0;
    /* 008c0072: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0073: add byte ptr [edx], ah */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0078: or al, 0x62 */ {  u32 a = (u8)r_eax; u32 b = 0x62u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c007a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0080: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0081: clc  */ fC = 0;
    /* 008c0082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0083: add byte ptr [ebx], ah */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0086: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0088: or al, 0x63 */ {  u32 a = (u8)r_eax; u32 b = 0x63u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c008a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0090: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0091: clc  */ fC = 0;
    /* 008c0092: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0093: add byte ptr [eax + eax], ah */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0097: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c009a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00a1: clc  */ fC = 0;
    /* 008c00a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00a3: add byte ptr [ebp], ah */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a8: or al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00b1: clc  */ fC = 0;
    /* 008c00b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00b3: add byte ptr [esi], ah */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b8: or al, 0x66 */ {  u32 a = (u8)r_eax; u32 b = 0x66u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00c1: clc  */ fC = 0;
    /* 008c00c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00c3: add byte ptr [edi], ah */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c8: or al, 0x67 */ {  u32 a = (u8)r_eax; u32 b = 0x67u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00d1: clc  */ fC = 0;
    /* 008c00d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00d3: add byte ptr [eax], ch */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d8: or al, 0x68 */ {  u32 a = (u8)r_eax; u32 b = 0x68u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00e1: clc  */ fC = 0;
    /* 008c00e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00e3: add byte ptr [ecx], ch */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e8: or al, 0x69 */ {  u32 a = (u8)r_eax; u32 b = 0x69u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00f1: clc  */ fC = 0;
    /* 008c00f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00f3: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f8: or al, 0x6a */ {  u32 a = (u8)r_eax; u32 b = 0x6au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0100: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0101: clc  */ fC = 0;
    /* 008c0102: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0103: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0106: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0108: or al, 0x6b */ {  u32 a = (u8)r_eax; u32 b = 0x6bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c010a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0110: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0111: clc  */ fC = 0;
    /* 008c0112: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0113: add byte ptr [eax + eax], ch */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0117: add byte ptr [esp + ebp*2], cl */ { u32 ad = (u32)(r_esp+r_ebp*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c011a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0120: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0121: clc  */ fC = 0;
    /* 008c0122: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0123: add byte ptr [ebp], ch */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0126: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0128: or al, 0x6d */ {  u32 a = (u8)r_eax; u32 b = 0x6du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c012a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0130: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0131: clc  */ fC = 0;
    /* 008c0132: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0133: add byte ptr [esi], ch */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0136: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0138: or al, 0x6e */ {  u32 a = (u8)r_eax; u32 b = 0x6eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c013a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0140: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0141: clc  */ fC = 0;
    /* 008c0142: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0143: add byte ptr [edi], ch */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0146: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0148: or al, 0x6f */ {  u32 a = (u8)r_eax; u32 b = 0x6fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c014a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0150: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0151: clc  */ fC = 0;
    /* 008c0152: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0153: add byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0156: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0158: or al, 0x70 */ {  u32 a = (u8)r_eax; u32 b = 0x70u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c015a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0160: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0161: clc  */ fC = 0;
    /* 008c0162: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0163: add byte ptr [ecx], dh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0166: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0168: or al, 0x71 */ {  u32 a = (u8)r_eax; u32 b = 0x71u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c016a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0170: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0171: clc  */ fC = 0;
    /* 008c0172: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0173: add byte ptr [edx], dh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0176: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0178: or al, 0x72 */ {  u32 a = (u8)r_eax; u32 b = 0x72u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c017a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0180: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0181: clc  */ fC = 0;
    /* 008c0182: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0183: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0186: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0188: or al, 0x73 */ {  u32 a = (u8)r_eax; u32 b = 0x73u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c018a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0190: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0191: clc  */ fC = 0;
    /* 008c0192: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0193: add byte ptr [eax + eax], dh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0197: add byte ptr [esp + esi*2], cl */ { u32 ad = (u32)(r_esp+r_esi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c019a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01a1: clc  */ fC = 0;
    /* 008c01a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01a3: add byte ptr [ebp], dh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a8: or al, 0x75 */ {  u32 a = (u8)r_eax; u32 b = 0x75u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01b1: clc  */ fC = 0;
    /* 008c01b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01b3: add byte ptr [esi], dh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b8: or al, 0x76 */ {  u32 a = (u8)r_eax; u32 b = 0x76u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01c1: clc  */ fC = 0;
    /* 008c01c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01c3: add byte ptr [edi], dh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c8: or al, 0x77 */ {  u32 a = (u8)r_eax; u32 b = 0x77u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01d1: clc  */ fC = 0;
    /* 008c01d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01d3: add byte ptr [eax], bh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d8: or al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01e1: clc  */ fC = 0;
    /* 008c01e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01e3: add byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e8: or al, 0x79 */ {  u32 a = (u8)r_eax; u32 b = 0x79u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01f1: clc  */ fC = 0;
    /* 008c01f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01f3: add byte ptr [edx], bh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f8: or al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0200: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0201: clc  */ fC = 0;
    /* 008c0202: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0203: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0206: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0208: or al, 0x7b */ {  u32 a = (u8)r_eax; u32 b = 0x7bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c020a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0210: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0211: clc  */ fC = 0;
    /* 008c0212: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0213: add byte ptr [eax + eax], bh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0217: add byte ptr [esp + edi*2], cl */ { u32 ad = (u32)(r_esp+r_edi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c021a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0220: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0221: clc  */ fC = 0;
    /* 008c0222: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0223: add byte ptr [ebp], bh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0226: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0228: or al, 0x7d */ {  u32 a = (u8)r_eax; u32 b = 0x7du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c022a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0230: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0231: clc  */ fC = 0;
    /* 008c0232: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0233: add byte ptr [esi], bh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0236: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0238: or al, 0x7e */ {  u32 a = (u8)r_eax; u32 b = 0x7eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c023a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0240: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0241: clc  */ fC = 0;
    /* 008c0242: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0243: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0246: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0248: or al, 0x7f */ {  u32 a = (u8)r_eax; u32 b = 0x7fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c024a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0250: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0251: clc  */ fC = 0;
    /* 008c0252: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0253: add byte ptr [eax + 0xc000000], al */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0259: add byte ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0260: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0261: clc  */ fC = 0;
    /* 008c0262: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0263: add byte ptr [ecx + 0xc000000], al */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0269: add dword ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c026f: add byte ptr [eax + edi*8 + 0x820099], ch */ { u32 ad = (u32)(r_eax+r_edi*8+0x820099u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0276: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0278: or al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c027a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0280: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0281: clc  */ fC = 0;
    /* 008c0282: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0283: add byte ptr [ebx + 0xc000000], al */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0289: add dword ptr [eax], -0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffff80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c028c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c028e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0290: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0291: clc  */ fC = 0;
    /* 008c0292: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0293: add byte ptr [eax + eax - 0x7bf40000], al */ { u32 ad = (u32)(r_eax+r_eax+0x840c0000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c029a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02a1: clc  */ fC = 0;
    /* 008c02a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02a3: add byte ptr [ebp + 0xc000000], al */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a9: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c02ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02b1: clc  */ fC = 0;
    /* 008c02b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02b3: add byte ptr [esi + 0xc000000], al */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b9: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 008c02bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02c1: clc  */ fC = 0;
    /* 008c02c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02c3: add byte ptr [edi + 0xc000000], al */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c9: xchg dword ptr [eax], eax */ { u32 x = R32((u32)(r_eax)); u32 y = r_eax; W32((u32)(r_eax), y); r_eax = x; }
    /* 008c02cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02d1: clc  */ fC = 0;
    /* 008c02d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02d3: add byte ptr [eax + 0xc000000], cl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d9: mov byte ptr [eax], al */ W8((u32)(r_eax), (u8)r_eax);
    /* 008c02db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02e1: clc  */ fC = 0;
    /* 008c02e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02e3: add byte ptr [ecx + 0xc000000], cl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e9: mov dword ptr [eax], eax */ W32((u32)(r_eax), r_eax);
    /* 008c02eb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02f1: clc  */ fC = 0;
    /* 008c02f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02f3: add byte ptr [edx + 0xc000000], cl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f9: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c02fb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0300: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0301: clc  */ fC = 0;
    /* 008c0302: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0303: add byte ptr [ebx + 0xc000000], cl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0309: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008c030b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c030e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0310: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0311: clc  */ fC = 0;
    /* 008c0312: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0313: add byte ptr [eax + eax - 0x73f40000], cl */ { u32 ad = (u32)(r_eax+r_eax+0x8c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c031a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0320: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0321: clc  */ fC = 0;
    /* 008c0322: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0323: add byte ptr [ebp + 0xc000000], cl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0329: lea eax, [eax] */ r_eax = (u32)(r_eax);
    /* 008c032b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c032e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0330: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0331: clc  */ fC = 0;
    /* 008c0332: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0333: add byte ptr [esi + 0xc000000], cl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0339: mov es, word ptr [eax] */ UNSUP(0x008c0339, "mov es, word ptr [eax]");
    /* 008c033b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c033e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0340: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0341: clc  */ fC = 0;
    /* 008c0342: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0343: add byte ptr [edi + 0xc000000], cl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0349: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 008c034b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c034e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0350: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0351: clc  */ fC = 0;
    /* 008c0352: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0353: add byte ptr [eax + 0xc000000], dl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0359: nop  */ ;
    /* 008c035a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0360: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0361: clc  */ fC = 0;
    /* 008c0362: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0363: add byte ptr [ecx + 0xc000000], dl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0369: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 008c036a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0370: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0371: clc  */ fC = 0;
    /* 008c0372: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0373: add byte ptr [edx + 0xc000000], dl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0379: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 008c037a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0380: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0381: clc  */ fC = 0;
    /* 008c0382: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0383: add byte ptr [ebx + 0xc000000], dl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0389: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 008c038a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0390: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0391: clc  */ fC = 0;
    /* 008c0392: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0393: add byte ptr [eax + eax - 0x6bf40000], dl */ { u32 ad = (u32)(r_eax+r_eax+0x940c0000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c039a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03a1: clc  */ fC = 0;
    /* 008c03a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03a3: add byte ptr [ebp + 0xc000000], dl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a9: xchg ebp, eax */ { u32 x = r_ebp; u32 y = r_eax; r_ebp = y; r_eax = x; }
    /* 008c03aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03b1: clc  */ fC = 0;
    /* 008c03b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03b3: add byte ptr [esi + 0xc000000], dl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b9: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 008c03ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03c1: clc  */ fC = 0;
    /* 008c03c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03c3: add byte ptr [edi + 0xc000000], dl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c9: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 008c03ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03d1: clc  */ fC = 0;
    /* 008c03d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03d3: add byte ptr [eax + 0xc000000], bl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d9: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 008c03da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03e1: clc  */ fC = 0;
    /* 008c03e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03e3: add byte ptr [ecx + 0xc000000], bl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03f1: clc  */ fC = 0;
    /* 008c03f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03f3: add byte ptr [edx + 0xc000000], bl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f9: lcall 0, 0x8000 */ UNSUP(0x008c03f9, "lcall 0, 0x8000");
    /* 008c0400: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0401: clc  */ fC = 0;
    /* 008c0402: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0403: add byte ptr [ebx + 0xc000000], bl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0409: wait  */ ;
    /* 008c040a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0410: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0411: clc  */ fC = 0;
    /* 008c0412: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0413: add byte ptr [eax + eax - 0x63f40000], bl */ { u32 ad = (u32)(r_eax+r_eax+0x9c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c041a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0420: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0421: clc  */ fC = 0;
    /* 008c0422: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0423: add byte ptr [ebp + 0xc000000], bl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0429: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 008c042a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0430: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0431: clc  */ fC = 0;
    /* 008c0432: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0433: add byte ptr [esi + 0xc000000], bl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0439: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008c043a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0440: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0441: clc  */ fC = 0;
    /* 008c0442: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0443: add byte ptr [edi + 0xc000000], bl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = (r < a); }
    /* 008c0449: lahf  */ r_eax = (r_eax & 0xffff00ffu) | ((u32)((fS << 7) | (fZ << 6) | (fA << 4) | (fP << 2) | 2 | fC) << 8);
    /* 008c044a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0450: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0451: clc  */ fC = 0;
    /* 008c0452: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0453: add byte ptr [eax + 0xc000000], ah */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0459: mov al, byte ptr [0x8000] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8000u))) & 0xffu);
    /* 008c045e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0460: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0461: clc  */ fC = 0;
    /* 008c0462: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0463: add byte ptr [ecx + 0xc000000], ah */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0469: mov eax, dword ptr [0x8000] */ r_eax = R32((u32)(0x8000u));
    /* 008c046e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0470: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0471: clc  */ fC = 0;
    /* 008c0472: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0473: add byte ptr [edx + 0xc000000], ah */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0479: mov byte ptr [0x8000], al */ W8((u32)(0x8000u), (u8)r_eax);
    /* 008c047e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0480: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0481: clc  */ fC = 0;
    /* 008c0482: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0483: add byte ptr [ebx + 0xc000000], ah */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0489: mov dword ptr [0x8000], eax */ W32((u32)(0x8000u), r_eax);
    /* 008c048e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0490: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0491: clc  */ fC = 0;
    /* 008c0492: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0493: add byte ptr [eax + eax - 0x5bf40000], ah */ { u32 ad = (u32)(r_eax+r_eax+0xa40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c049a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04a1: clc  */ fC = 0;
    /* 008c04a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04a3: add byte ptr [ebp + 0xc000000], ah */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008c04aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04b1: clc  */ fC = 0;
    /* 008c04b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04b3: add byte ptr [esi + 0xc000000], ah */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04b9: cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;  }
    /* 008c04ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04c1: clc  */ fC = 0;
    /* 008c04c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04c3: add byte ptr [edi + 0xc000000], ah */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04c9: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 008c04ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04d1: clc  */ fC = 0;
    /* 008c04d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04d3: add byte ptr [eax + 0xc000000], ch */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d9: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 008c04db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04e1: clc  */ fC = 0;
    /* 008c04e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04e3: add byte ptr [ecx + 0xc000000], ch */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e9: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c04ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04f1: clc  */ fC = 0;
    /* 008c04f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04f3: add byte ptr [edx + 0xc000000], ch */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f9: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c04fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0500: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0501: clc  */ fC = 0;
    /* 008c0502: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0503: add byte ptr [ebx + 0xc000000], ch */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0509: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008c050a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0510: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0511: clc  */ fC = 0;
    /* 008c0512: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0513: add byte ptr [eax + eax - 0x53f40000], ch */ { u32 ad = (u32)(r_eax+r_eax+0xac0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c051a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0520: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0521: clc  */ fC = 0;
    /* 008c0522: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0523: add byte ptr [ebp + 0xc000000], ch */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0529: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 008c052a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0530: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0531: clc  */ fC = 0;
    /* 008c0532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0533: add byte ptr [esi + 0xc000000], ch */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0539: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 008c053a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0540: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0541: clc  */ fC = 0;
    /* 008c0542: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0543: add byte ptr [edi + 0xc000000], ch */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0549: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 008c054a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0550: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0551: clc  */ fC = 0;
    /* 008c0552: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0553: add byte ptr [eax + 0xc000000], dh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0559: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c055b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c055e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0560: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0561: clc  */ fC = 0;
    /* 008c0562: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0563: add byte ptr [ecx + 0xc000000], dh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0569: mov cl, 0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c056b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c056e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0570: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0571: clc  */ fC = 0;
    /* 008c0572: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0573: add byte ptr [edx + 0xc000000], dh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0579: mov dl, 0 */ r_edx = (r_edx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c057b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c057e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0580: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0581: clc  */ fC = 0;
    /* 008c0582: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0583: add byte ptr [ebx + 0xc000000], dh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0589: mov bl, 0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c058b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c058e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0590: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0591: clc  */ fC = 0;
    /* 008c0592: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0593: add byte ptr [eax + eax - 0x4bf40000], dh */ { u32 ad = (u32)(r_eax+r_eax+0xb40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c059a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05a1: clc  */ fC = 0;
    /* 008c05a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05a3: add byte ptr [ebp + 0xc000000], dh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a9: mov ch, 0 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05b1: clc  */ fC = 0;
    /* 008c05b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05b3: add byte ptr [esi + 0xc000000], dh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b9: mov dh, 0 */ r_edx = (r_edx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05c1: clc  */ fC = 0;
    /* 008c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05c3: add byte ptr [edi + 0xc000000], dh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c9: mov bh, 0 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05d1: clc  */ fC = 0;
    /* 008c05d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05d3: add byte ptr [eax + 0xc000000], bh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d9: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 008c05de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05e1: clc  */ fC = 0;
    /* 008c05e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05e3: add byte ptr [ecx + 0xc000000], bh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e9: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 008c05ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05f1: clc  */ fC = 0;
    /* 008c05f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05f3: add byte ptr [edx + 0xc000000], bh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f9: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 008c05fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0600: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0601: clc  */ fC = 0;
    /* 008c0602: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0603: add byte ptr [ebx + 0xc000000], bh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0609: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 008c060e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0610: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0611: clc  */ fC = 0;
    /* 008c0612: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0613: add byte ptr [eax + eax - 0x43f40000], bh */ { u32 ad = (u32)(r_eax+r_eax+0xbc0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c061a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0620: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0621: clc  */ fC = 0;
    /* 008c0622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0623: add byte ptr [ebp + 0xc000000], bh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0629: mov ebp, 0x8000 */ r_ebp = 0x8000u;
    /* 008c062e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0630: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0631: clc  */ fC = 0;
    /* 008c0632: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0633: add byte ptr [esi + 0xc000000], bh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0639: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 008c063e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0640: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0641: clc  */ fC = 0;
    /* 008c0642: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0643: add byte ptr [edi + 0xc000000], bh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0649: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 008c064e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0650: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0651: clc  */ fC = 0;
    /* 008c0652: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0653: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0655: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0657: add byte ptr [eax + eax*8], cl */ { u32 ad = (u32)(r_eax+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c065a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0660: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0661: clc  */ fC = 0;
    /* 008c0662: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0663: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0665: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0667: add byte ptr [ecx + eax*8], cl */ { u32 ad = (u32)(r_ecx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c066a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0670: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0671: clc  */ fC = 0;
    /* 008c0672: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0673: add dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0675: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0677: add byte ptr [edx + eax*8], cl */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c067a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0680: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0681: clc  */ fC = 0;
    /* 008c0682: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0683: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0685: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0687: add byte ptr [ebx + eax*8], cl */ { u32 ad = (u32)(r_ebx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c068a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0690: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0691: clc  */ fC = 0;
    /* 008c0692: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0693: add ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0695: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0697: add byte ptr [esp + eax*8], cl */ { u32 ad = (u32)(r_esp+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c069a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06a1: clc  */ fC = 0;
    /* 008c06a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06a3: add ch, al */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a7: add byte ptr [eax*8 + 0x8000], cl */ { u32 ad = (u32)(r_eax*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06b1: clc  */ fC = 0;
    /* 008c06b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06b3: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b7: add byte ptr [esi + eax*8], cl */ { u32 ad = (u32)(r_esi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06c1: clc  */ fC = 0;
    /* 008c06c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06c3: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c7: add byte ptr [edi + eax*8], cl */ { u32 ad = (u32)(r_edi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06d1: clc  */ fC = 0;
    /* 008c06d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06d3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d7: add byte ptr [eax + ecx*8], cl */ { u32 ad = (u32)(r_eax+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06e1: clc  */ fC = 0;
    /* 008c06e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06e3: add cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e7: add byte ptr [ecx + ecx*8], cl */ { u32 ad = (u32)(r_ecx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06f1: clc  */ fC = 0;
    /* 008c06f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06f3: add dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f7: add byte ptr [edx + ecx*8], cl */ { u32 ad = (u32)(r_edx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0700: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0701: clc  */ fC = 0;
    /* 008c0702: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0703: add bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0705: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0707: add byte ptr [ebx + ecx*8], cl */ { u32 ad = (u32)(r_ebx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c070a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0710: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0711: clc  */ fC = 0;
    /* 008c0712: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0713: add ah, cl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0715: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0717: add byte ptr [esp + ecx*8], cl */ { u32 ad = (u32)(r_esp+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c071a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0720: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0721: clc  */ fC = 0;
    /* 008c0722: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0723: add ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0725: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0727: add byte ptr [ecx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ecx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c072e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0730: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0731: clc  */ fC = 0;
    /* 008c0732: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0733: add dh, cl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0735: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0737: add byte ptr [esi + ecx*8], cl */ { u32 ad = (u32)(r_esi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c073a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0740: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0741: clc  */ fC = 0;
    /* 008c0742: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0743: add bh, cl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0745: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0747: add byte ptr [edi + ecx*8], cl */ { u32 ad = (u32)(r_edi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c074a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0750: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0751: clc  */ fC = 0;
    /* 008c0752: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0753: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0755: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0757: add byte ptr [eax + edx*8], cl */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c075a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0760: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0761: clc  */ fC = 0;
    /* 008c0762: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0763: add cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0765: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0767: add byte ptr [ecx + edx*8], cl */ { u32 ad = (u32)(r_ecx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c076a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0770: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0771: clc  */ fC = 0;
    /* 008c0772: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0773: add dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0775: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0777: add byte ptr [edx + edx*8], cl */ { u32 ad = (u32)(r_edx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c077a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0780: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0781: clc  */ fC = 0;
    /* 008c0782: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0783: add bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0785: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0787: add byte ptr [ebx + edx*8], cl */ { u32 ad = (u32)(r_ebx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c078a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0790: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0791: clc  */ fC = 0;
    /* 008c0792: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0793: add ah, dl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0795: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0797: add byte ptr [esp + edx*8], cl */ { u32 ad = (u32)(r_esp+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c079a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07a1: clc  */ fC = 0;
    /* 008c07a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07a3: add ch, dl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a7: add byte ptr [edx*8 + 0x8000], cl */ { u32 ad = (u32)(r_edx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07b1: clc  */ fC = 0;
    /* 008c07b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07b3: add dh, dl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b7: add byte ptr [esi + edx*8], cl */ { u32 ad = (u32)(r_esi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07c1: clc  */ fC = 0;
    /* 008c07c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07c3: add bh, dl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c7: add byte ptr [edi + edx*8], cl */ { u32 ad = (u32)(r_edi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07d1: clc  */ fC = 0;
    /* 008c07d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07d3: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d7: add byte ptr [eax + ebx*8], cl */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07e1: clc  */ fC = 0;
    /* 008c07e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07e3: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e7: add byte ptr [ecx + ebx*8], cl */ { u32 ad = (u32)(r_ecx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07f1: clc  */ fC = 0;
    /* 008c07f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07f3: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f7: add byte ptr [edx + ebx*8], cl */ { u32 ad = (u32)(r_edx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0800: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0801: clc  */ fC = 0;
    /* 008c0802: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0803: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0805: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0807: add byte ptr [ebx + ebx*8], cl */ { u32 ad = (u32)(r_ebx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c080a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0810: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0811: clc  */ fC = 0;
    /* 008c0812: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0813: add ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0815: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0817: add byte ptr [esp + ebx*8], cl */ { u32 ad = (u32)(r_esp+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c081a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0820: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0821: clc  */ fC = 0;
    /* 008c0822: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0823: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0825: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0827: add byte ptr [ebx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c082e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0830: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0831: clc  */ fC = 0;
    /* 008c0832: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0833: add dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0835: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0837: add byte ptr [esi + ebx*8], cl */ { u32 ad = (u32)(r_esi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c083a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0840: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0841: clc  */ fC = 0;
    /* 008c0842: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0843: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0845: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0847: add byte ptr [edi + ebx*8], cl */ { u32 ad = (u32)(r_edi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c084a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0850: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0851: clc  */ fC = 0;
    /* 008c0852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0853: add al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0855: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0857: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c085a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0860: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0861: clc  */ fC = 0;
    /* 008c0862: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0863: add cl, ah */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0865: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0867: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c086a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0870: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0871: clc  */ fC = 0;
    /* 008c0872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0873: add dl, ah */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0875: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0877: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c087a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0880: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0881: clc  */ fC = 0;
    /* 008c0882: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0883: add bl, ah */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0885: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0887: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c088a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0890: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0891: clc  */ fC = 0;
    /* 008c0892: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0893: add ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0895: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0897: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c089a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08a1: clc  */ fC = 0;
    /* 008c08a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08a3: add ch, ah */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a7: add byte ptr [0x8000], cl */ { u32 ad = (u32)(0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08b1: clc  */ fC = 0;
    /* 008c08b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08b3: add dh, ah */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b7: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08c1: clc  */ fC = 0;
    /* 008c08c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08c3: add bh, ah */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c7: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08d1: clc  */ fC = 0;
    /* 008c08d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08d3: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d7: add byte ptr [eax + ebp*8], cl */ { u32 ad = (u32)(r_eax+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08e1: clc  */ fC = 0;
    /* 008c08e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08e3: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e7: add byte ptr [ecx + ebp*8], cl */ { u32 ad = (u32)(r_ecx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08f1: clc  */ fC = 0;
    /* 008c08f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08f3: add dl, ch */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f7: add byte ptr [edx + ebp*8], cl */ { u32 ad = (u32)(r_edx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0900: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0901: clc  */ fC = 0;
    /* 008c0902: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0903: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0905: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0907: add byte ptr [ebx + ebp*8], cl */ { u32 ad = (u32)(r_ebx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c090a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0910: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0911: clc  */ fC = 0;
    /* 008c0912: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0913: add ah, ch */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0915: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0917: add byte ptr [esp + ebp*8], cl */ { u32 ad = (u32)(r_esp+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c091a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0920: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0921: clc  */ fC = 0;
    /* 008c0922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0923: add ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0925: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0927: add byte ptr [ebp*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebp*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c092e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0930: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0931: clc  */ fC = 0;
    /* 008c0932: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0933: add dh, ch */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0935: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0937: add byte ptr [esi + ebp*8], cl */ { u32 ad = (u32)(r_esi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c093a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0940: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0941: clc  */ fC = 0;
    /* 008c0942: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0943: add bh, ch */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0945: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0947: add byte ptr [edi + ebp*8], cl */ { u32 ad = (u32)(r_edi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c094a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0950: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0951: clc  */ fC = 0;
    /* 008c0952: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0953: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0955: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0957: add byte ptr [eax + esi*8], cl */ { u32 ad = (u32)(r_eax+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c095a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0960: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0961: clc  */ fC = 0;
    /* 008c0962: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0963: add cl, dh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0967: add byte ptr [ecx + esi*8], cl */ { u32 ad = (u32)(r_ecx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c096a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0970: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0971: clc  */ fC = 0;
    /* 008c0972: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0973: add dl, dh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0977: add byte ptr [edx + esi*8], cl */ { u32 ad = (u32)(r_edx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c097a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0980: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0981: clc  */ fC = 0;
    /* 008c0982: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0983: add bl, dh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0985: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0987: add byte ptr [ebx + esi*8], cl */ { u32 ad = (u32)(r_ebx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c098a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0990: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0991: clc  */ fC = 0;
    /* 008c0992: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0993: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0995: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0997: add byte ptr [esp + esi*8], cl */ { u32 ad = (u32)(r_esp+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c099a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09a1: clc  */ fC = 0;
    /* 008c09a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09a3: add ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a7: add byte ptr [esi*8 + 0x8000], cl */ { u32 ad = (u32)(r_esi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09b1: clc  */ fC = 0;
    /* 008c09b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09b3: add dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b7: add byte ptr [esi + esi*8], cl */ { u32 ad = (u32)(r_esi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09c1: clc  */ fC = 0;
    /* 008c09c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09c3: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c7: add byte ptr [edi + esi*8], cl */ { u32 ad = (u32)(r_edi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09d1: clc  */ fC = 0;
    /* 008c09d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09d3: add al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d7: add byte ptr [eax + edi*8], cl */ { u32 ad = (u32)(r_eax+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09e1: clc  */ fC = 0;
    /* 008c09e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09e3: add cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e7: add byte ptr [ecx + edi*8], cl */ { u32 ad = (u32)(r_ecx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09f1: clc  */ fC = 0;
    /* 008c09f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09f3: add dl, bh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f7: add byte ptr [edx + edi*8], cl */ { u32 ad = (u32)(r_edx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a01: clc  */ fC = 0;
    /* 008c0a02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a03: add bl, bh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a07: add byte ptr [ebx + edi*8], cl */ { u32 ad = (u32)(r_ebx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a11: clc  */ fC = 0;
    /* 008c0a12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a13: add ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a15: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a17: add byte ptr [esp + edi*8], cl */ { u32 ad = (u32)(r_esp+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a21: clc  */ fC = 0;
    /* 008c0a22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a23: add ch, bh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a27: add byte ptr [edi*8 + 0x8000], cl */ { u32 ad = (u32)(r_edi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a31: clc  */ fC = 0;
    /* 008c0a32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a33: add dh, bh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a37: add byte ptr [esi + edi*8], cl */ { u32 ad = (u32)(r_esi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a41: clc  */ fC = 0;
    /* 008c0a42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a43: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a47: add byte ptr [edi + edi*8], cl */ { u32 ad = (u32)(r_edi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008c0a50: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a57: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008c0a59, "falls out of decoded code");
}

void f_008c006e(void)
{
    FN_ENTER(0x008c006e);
    /* 008c006e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0070: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0071: clc  */ fC = 0;
    /* 008c0072: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0073: add byte ptr [edx], ah */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0076: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0078: or al, 0x62 */ {  u32 a = (u8)r_eax; u32 b = 0x62u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c007a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0080: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0081: clc  */ fC = 0;
    /* 008c0082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0083: add byte ptr [ebx], ah */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0086: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0088: or al, 0x63 */ {  u32 a = (u8)r_eax; u32 b = 0x63u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c008a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0090: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0091: clc  */ fC = 0;
    /* 008c0092: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0093: add byte ptr [eax + eax], ah */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0097: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c009a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00a1: clc  */ fC = 0;
    /* 008c00a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00a3: add byte ptr [ebp], ah */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00a8: or al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00b1: clc  */ fC = 0;
    /* 008c00b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00b3: add byte ptr [esi], ah */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00b8: or al, 0x66 */ {  u32 a = (u8)r_eax; u32 b = 0x66u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00c1: clc  */ fC = 0;
    /* 008c00c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00c3: add byte ptr [edi], ah */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00c8: or al, 0x67 */ {  u32 a = (u8)r_eax; u32 b = 0x67u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00d1: clc  */ fC = 0;
    /* 008c00d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00d3: add byte ptr [eax], ch */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00d8: or al, 0x68 */ {  u32 a = (u8)r_eax; u32 b = 0x68u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00e1: clc  */ fC = 0;
    /* 008c00e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00e3: add byte ptr [ecx], ch */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00e8: or al, 0x69 */ {  u32 a = (u8)r_eax; u32 b = 0x69u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c00f1: clc  */ fC = 0;
    /* 008c00f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c00f3: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c00f8: or al, 0x6a */ {  u32 a = (u8)r_eax; u32 b = 0x6au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c00fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0100: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0101: clc  */ fC = 0;
    /* 008c0102: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0103: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0106: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0108: or al, 0x6b */ {  u32 a = (u8)r_eax; u32 b = 0x6bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c010a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0110: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0111: clc  */ fC = 0;
    /* 008c0112: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0113: add byte ptr [eax + eax], ch */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0117: add byte ptr [esp + ebp*2], cl */ { u32 ad = (u32)(r_esp+r_ebp*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c011a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0120: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0121: clc  */ fC = 0;
    /* 008c0122: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0123: add byte ptr [ebp], ch */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0126: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0128: or al, 0x6d */ {  u32 a = (u8)r_eax; u32 b = 0x6du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c012a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0130: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0131: clc  */ fC = 0;
    /* 008c0132: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0133: add byte ptr [esi], ch */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0136: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0138: or al, 0x6e */ {  u32 a = (u8)r_eax; u32 b = 0x6eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c013a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0140: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0141: clc  */ fC = 0;
    /* 008c0142: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0143: add byte ptr [edi], ch */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0146: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0148: or al, 0x6f */ {  u32 a = (u8)r_eax; u32 b = 0x6fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c014a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0150: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0151: clc  */ fC = 0;
    /* 008c0152: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0153: add byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0156: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0158: or al, 0x70 */ {  u32 a = (u8)r_eax; u32 b = 0x70u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c015a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0160: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0161: clc  */ fC = 0;
    /* 008c0162: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0163: add byte ptr [ecx], dh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0166: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0168: or al, 0x71 */ {  u32 a = (u8)r_eax; u32 b = 0x71u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c016a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0170: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0171: clc  */ fC = 0;
    /* 008c0172: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0173: add byte ptr [edx], dh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0176: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0178: or al, 0x72 */ {  u32 a = (u8)r_eax; u32 b = 0x72u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c017a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0180: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0181: clc  */ fC = 0;
    /* 008c0182: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0183: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0186: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0188: or al, 0x73 */ {  u32 a = (u8)r_eax; u32 b = 0x73u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c018a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0190: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0191: clc  */ fC = 0;
    /* 008c0192: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0193: add byte ptr [eax + eax], dh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0197: add byte ptr [esp + esi*2], cl */ { u32 ad = (u32)(r_esp+r_esi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c019a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01a1: clc  */ fC = 0;
    /* 008c01a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01a3: add byte ptr [ebp], dh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01a8: or al, 0x75 */ {  u32 a = (u8)r_eax; u32 b = 0x75u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01b1: clc  */ fC = 0;
    /* 008c01b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01b3: add byte ptr [esi], dh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01b8: or al, 0x76 */ {  u32 a = (u8)r_eax; u32 b = 0x76u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01c1: clc  */ fC = 0;
    /* 008c01c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01c3: add byte ptr [edi], dh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01c8: or al, 0x77 */ {  u32 a = (u8)r_eax; u32 b = 0x77u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01d1: clc  */ fC = 0;
    /* 008c01d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01d3: add byte ptr [eax], bh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01d8: or al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01e1: clc  */ fC = 0;
    /* 008c01e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01e3: add byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01e8: or al, 0x79 */ {  u32 a = (u8)r_eax; u32 b = 0x79u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c01f1: clc  */ fC = 0;
    /* 008c01f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c01f3: add byte ptr [edx], bh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c01f8: or al, 0x7a */ {  u32 a = (u8)r_eax; u32 b = 0x7au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c01fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0200: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0201: clc  */ fC = 0;
    /* 008c0202: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0203: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0206: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0208: or al, 0x7b */ {  u32 a = (u8)r_eax; u32 b = 0x7bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c020a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0210: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0211: clc  */ fC = 0;
    /* 008c0212: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0213: add byte ptr [eax + eax], bh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0217: add byte ptr [esp + edi*2], cl */ { u32 ad = (u32)(r_esp+r_edi*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c021a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0220: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0221: clc  */ fC = 0;
    /* 008c0222: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0223: add byte ptr [ebp], bh */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0226: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0228: or al, 0x7d */ {  u32 a = (u8)r_eax; u32 b = 0x7du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c022a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0230: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0231: clc  */ fC = 0;
    /* 008c0232: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0233: add byte ptr [esi], bh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0236: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0238: or al, 0x7e */ {  u32 a = (u8)r_eax; u32 b = 0x7eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c023a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0240: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0241: clc  */ fC = 0;
    /* 008c0242: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0243: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0246: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0248: or al, 0x7f */ {  u32 a = (u8)r_eax; u32 b = 0x7fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c024a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0250: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0251: clc  */ fC = 0;
    /* 008c0252: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0253: add byte ptr [eax + 0xc000000], al */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0259: add byte ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c025e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0260: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0261: clc  */ fC = 0;
    /* 008c0262: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0263: add byte ptr [ecx + 0xc000000], al */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0269: add dword ptr [eax], 0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c026f: add byte ptr [eax + edi*8 + 0x820099], ch */ { u32 ad = (u32)(r_eax+r_edi*8+0x820099u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0276: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0278: or al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c027a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0280: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0281: clc  */ fC = 0;
    /* 008c0282: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0283: add byte ptr [ebx + 0xc000000], al */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0289: add dword ptr [eax], -0x80 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffff80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c028c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c028e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0290: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0291: clc  */ fC = 0;
    /* 008c0292: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0293: add byte ptr [eax + eax - 0x7bf40000], al */ { u32 ad = (u32)(r_eax+r_eax+0x840c0000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c029a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02a1: clc  */ fC = 0;
    /* 008c02a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02a3: add byte ptr [ebp + 0xc000000], al */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02a9: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c02ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02b1: clc  */ fC = 0;
    /* 008c02b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02b3: add byte ptr [esi + 0xc000000], al */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02b9: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 008c02bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02c1: clc  */ fC = 0;
    /* 008c02c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02c3: add byte ptr [edi + 0xc000000], al */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02c9: xchg dword ptr [eax], eax */ { u32 x = R32((u32)(r_eax)); u32 y = r_eax; W32((u32)(r_eax), y); r_eax = x; }
    /* 008c02cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02d1: clc  */ fC = 0;
    /* 008c02d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02d3: add byte ptr [eax + 0xc000000], cl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02d9: mov byte ptr [eax], al */ W8((u32)(r_eax), (u8)r_eax);
    /* 008c02db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02e1: clc  */ fC = 0;
    /* 008c02e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02e3: add byte ptr [ecx + 0xc000000], cl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02e9: mov dword ptr [eax], eax */ W32((u32)(r_eax), r_eax);
    /* 008c02eb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c02f1: clc  */ fC = 0;
    /* 008c02f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c02f3: add byte ptr [edx + 0xc000000], cl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02f9: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c02fb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c02fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0300: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0301: clc  */ fC = 0;
    /* 008c0302: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0303: add byte ptr [ebx + 0xc000000], cl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0309: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008c030b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c030e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0310: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0311: clc  */ fC = 0;
    /* 008c0312: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0313: add byte ptr [eax + eax - 0x73f40000], cl */ { u32 ad = (u32)(r_eax+r_eax+0x8c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c031a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0320: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0321: clc  */ fC = 0;
    /* 008c0322: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0323: add byte ptr [ebp + 0xc000000], cl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0329: lea eax, [eax] */ r_eax = (u32)(r_eax);
    /* 008c032b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c032e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0330: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0331: clc  */ fC = 0;
    /* 008c0332: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0333: add byte ptr [esi + 0xc000000], cl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0339: mov es, word ptr [eax] */ UNSUP(0x008c0339, "mov es, word ptr [eax]");
    /* 008c033b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c033e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0340: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0341: clc  */ fC = 0;
    /* 008c0342: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0343: add byte ptr [edi + 0xc000000], cl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0349: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 008c034b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c034e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0350: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0351: clc  */ fC = 0;
    /* 008c0352: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0353: add byte ptr [eax + 0xc000000], dl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0359: nop  */ ;
    /* 008c035a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0360: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0361: clc  */ fC = 0;
    /* 008c0362: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0363: add byte ptr [ecx + 0xc000000], dl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0369: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    /* 008c036a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0370: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0371: clc  */ fC = 0;
    /* 008c0372: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0373: add byte ptr [edx + 0xc000000], dl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0379: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 008c037a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0380: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0381: clc  */ fC = 0;
    /* 008c0382: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0383: add byte ptr [ebx + 0xc000000], dl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0389: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 008c038a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0390: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0391: clc  */ fC = 0;
    /* 008c0392: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0393: add byte ptr [eax + eax - 0x6bf40000], dl */ { u32 ad = (u32)(r_eax+r_eax+0x940c0000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c039a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03a1: clc  */ fC = 0;
    /* 008c03a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03a3: add byte ptr [ebp + 0xc000000], dl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03a9: xchg ebp, eax */ { u32 x = r_ebp; u32 y = r_eax; r_ebp = y; r_eax = x; }
    /* 008c03aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03b1: clc  */ fC = 0;
    /* 008c03b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03b3: add byte ptr [esi + 0xc000000], dl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03b9: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 008c03ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03c1: clc  */ fC = 0;
    /* 008c03c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03c3: add byte ptr [edi + 0xc000000], dl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03c9: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 008c03ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03d1: clc  */ fC = 0;
    /* 008c03d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03d3: add byte ptr [eax + 0xc000000], bl */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03d9: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 008c03da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03e1: clc  */ fC = 0;
    /* 008c03e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03e3: add byte ptr [ecx + 0xc000000], bl */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c03f1: clc  */ fC = 0;
    /* 008c03f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c03f3: add byte ptr [edx + 0xc000000], bl */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c03f9: lcall 0, 0x8000 */ UNSUP(0x008c03f9, "lcall 0, 0x8000");
    /* 008c0400: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0401: clc  */ fC = 0;
    /* 008c0402: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0403: add byte ptr [ebx + 0xc000000], bl */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0409: wait  */ ;
    /* 008c040a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0410: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0411: clc  */ fC = 0;
    /* 008c0412: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0413: add byte ptr [eax + eax - 0x63f40000], bl */ { u32 ad = (u32)(r_eax+r_eax+0x9c0c0000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c041a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0420: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0421: clc  */ fC = 0;
    /* 008c0422: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0423: add byte ptr [ebp + 0xc000000], bl */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0429: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 008c042a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0430: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0431: clc  */ fC = 0;
    /* 008c0432: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0433: add byte ptr [esi + 0xc000000], bl */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0439: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008c043a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0440: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0441: clc  */ fC = 0;
    /* 008c0442: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0443: add byte ptr [edi + 0xc000000], bl */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = (r < a); }
    /* 008c0449: lahf  */ r_eax = (r_eax & 0xffff00ffu) | ((u32)((fS << 7) | (fZ << 6) | (fA << 4) | (fP << 2) | 2 | fC) << 8);
    /* 008c044a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0450: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0451: clc  */ fC = 0;
    /* 008c0452: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0453: add byte ptr [eax + 0xc000000], ah */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0459: mov al, byte ptr [0x8000] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8000u))) & 0xffu);
    /* 008c045e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0460: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0461: clc  */ fC = 0;
    /* 008c0462: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0463: add byte ptr [ecx + 0xc000000], ah */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0469: mov eax, dword ptr [0x8000] */ r_eax = R32((u32)(0x8000u));
    /* 008c046e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0470: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0471: clc  */ fC = 0;
    /* 008c0472: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0473: add byte ptr [edx + 0xc000000], ah */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0479: mov byte ptr [0x8000], al */ W8((u32)(0x8000u), (u8)r_eax);
    /* 008c047e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0480: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0481: clc  */ fC = 0;
    /* 008c0482: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0483: add byte ptr [ebx + 0xc000000], ah */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0489: mov dword ptr [0x8000], eax */ W32((u32)(0x8000u), r_eax);
    /* 008c048e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0490: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0491: clc  */ fC = 0;
    /* 008c0492: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0493: add byte ptr [eax + eax - 0x5bf40000], ah */ { u32 ad = (u32)(r_eax+r_eax+0xa40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c049a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04a1: clc  */ fC = 0;
    /* 008c04a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04a3: add byte ptr [ebp + 0xc000000], ah */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04a9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008c04aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04b1: clc  */ fC = 0;
    /* 008c04b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04b3: add byte ptr [esi + 0xc000000], ah */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04b9: cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;  }
    /* 008c04ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04c1: clc  */ fC = 0;
    /* 008c04c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04c3: add byte ptr [edi + 0xc000000], ah */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c04c9: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 008c04ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04d1: clc  */ fC = 0;
    /* 008c04d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04d3: add byte ptr [eax + 0xc000000], ch */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04d9: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 008c04db: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04e1: clc  */ fC = 0;
    /* 008c04e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04e3: add byte ptr [ecx + 0xc000000], ch */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04e9: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;   }
    /* 008c04ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c04f1: clc  */ fC = 0;
    /* 008c04f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c04f3: add byte ptr [edx + 0xc000000], ch */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c04f9: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c04fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0500: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0501: clc  */ fC = 0;
    /* 008c0502: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0503: add byte ptr [ebx + 0xc000000], ch */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0509: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008c050a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0510: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0511: clc  */ fC = 0;
    /* 008c0512: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0513: add byte ptr [eax + eax - 0x53f40000], ch */ { u32 ad = (u32)(r_eax+r_eax+0xac0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c051a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0520: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0521: clc  */ fC = 0;
    /* 008c0522: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0523: add byte ptr [ebp + 0xc000000], ch */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0529: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 008c052a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0530: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0531: clc  */ fC = 0;
    /* 008c0532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0533: add byte ptr [esi + 0xc000000], ch */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0539: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 008c053a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0540: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0541: clc  */ fC = 0;
    /* 008c0542: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0543: add byte ptr [edi + 0xc000000], ch */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0549: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 008c054a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0550: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0551: clc  */ fC = 0;
    /* 008c0552: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0553: add byte ptr [eax + 0xc000000], dh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0559: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c055b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c055e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0560: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0561: clc  */ fC = 0;
    /* 008c0562: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0563: add byte ptr [ecx + 0xc000000], dh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0569: mov cl, 0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c056b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c056e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0570: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0571: clc  */ fC = 0;
    /* 008c0572: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0573: add byte ptr [edx + 0xc000000], dh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0579: mov dl, 0 */ r_edx = (r_edx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c057b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c057e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0580: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0581: clc  */ fC = 0;
    /* 008c0582: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0583: add byte ptr [ebx + 0xc000000], dh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0589: mov bl, 0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c058b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c058e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0590: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0591: clc  */ fC = 0;
    /* 008c0592: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0593: add byte ptr [eax + eax - 0x4bf40000], dh */ { u32 ad = (u32)(r_eax+r_eax+0xb40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c059a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05a1: clc  */ fC = 0;
    /* 008c05a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05a3: add byte ptr [ebp + 0xc000000], dh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a9: mov ch, 0 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05b1: clc  */ fC = 0;
    /* 008c05b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05b3: add byte ptr [esi + 0xc000000], dh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b9: mov dh, 0 */ r_edx = (r_edx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05c1: clc  */ fC = 0;
    /* 008c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05c3: add byte ptr [edi + 0xc000000], dh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c9: mov bh, 0 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05d1: clc  */ fC = 0;
    /* 008c05d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05d3: add byte ptr [eax + 0xc000000], bh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d9: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 008c05de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05e1: clc  */ fC = 0;
    /* 008c05e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05e3: add byte ptr [ecx + 0xc000000], bh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e9: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 008c05ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05f1: clc  */ fC = 0;
    /* 008c05f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05f3: add byte ptr [edx + 0xc000000], bh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f9: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 008c05fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0600: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0601: clc  */ fC = 0;
    /* 008c0602: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0603: add byte ptr [ebx + 0xc000000], bh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0609: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 008c060e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0610: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0611: clc  */ fC = 0;
    /* 008c0612: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0613: add byte ptr [eax + eax - 0x43f40000], bh */ { u32 ad = (u32)(r_eax+r_eax+0xbc0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c061a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0620: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0621: clc  */ fC = 0;
    /* 008c0622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0623: add byte ptr [ebp + 0xc000000], bh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0629: mov ebp, 0x8000 */ r_ebp = 0x8000u;
    /* 008c062e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0630: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0631: clc  */ fC = 0;
    /* 008c0632: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0633: add byte ptr [esi + 0xc000000], bh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0639: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 008c063e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0640: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0641: clc  */ fC = 0;
    /* 008c0642: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0643: add byte ptr [edi + 0xc000000], bh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0649: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 008c064e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0650: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0651: clc  */ fC = 0;
    /* 008c0652: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0653: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0655: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0657: add byte ptr [eax + eax*8], cl */ { u32 ad = (u32)(r_eax+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c065a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0660: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0661: clc  */ fC = 0;
    /* 008c0662: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0663: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0665: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0667: add byte ptr [ecx + eax*8], cl */ { u32 ad = (u32)(r_ecx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c066a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0670: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0671: clc  */ fC = 0;
    /* 008c0672: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0673: add dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0675: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0677: add byte ptr [edx + eax*8], cl */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c067a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0680: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0681: clc  */ fC = 0;
    /* 008c0682: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0683: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0685: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0687: add byte ptr [ebx + eax*8], cl */ { u32 ad = (u32)(r_ebx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c068a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0690: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0691: clc  */ fC = 0;
    /* 008c0692: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0693: add ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0695: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0697: add byte ptr [esp + eax*8], cl */ { u32 ad = (u32)(r_esp+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c069a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06a1: clc  */ fC = 0;
    /* 008c06a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06a3: add ch, al */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a7: add byte ptr [eax*8 + 0x8000], cl */ { u32 ad = (u32)(r_eax*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06b1: clc  */ fC = 0;
    /* 008c06b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06b3: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b7: add byte ptr [esi + eax*8], cl */ { u32 ad = (u32)(r_esi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06c1: clc  */ fC = 0;
    /* 008c06c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06c3: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c7: add byte ptr [edi + eax*8], cl */ { u32 ad = (u32)(r_edi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06d1: clc  */ fC = 0;
    /* 008c06d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06d3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d7: add byte ptr [eax + ecx*8], cl */ { u32 ad = (u32)(r_eax+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06e1: clc  */ fC = 0;
    /* 008c06e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06e3: add cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e7: add byte ptr [ecx + ecx*8], cl */ { u32 ad = (u32)(r_ecx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06f1: clc  */ fC = 0;
    /* 008c06f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06f3: add dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f7: add byte ptr [edx + ecx*8], cl */ { u32 ad = (u32)(r_edx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0700: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0701: clc  */ fC = 0;
    /* 008c0702: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0703: add bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0705: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0707: add byte ptr [ebx + ecx*8], cl */ { u32 ad = (u32)(r_ebx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c070a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0710: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0711: clc  */ fC = 0;
    /* 008c0712: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0713: add ah, cl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0715: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0717: add byte ptr [esp + ecx*8], cl */ { u32 ad = (u32)(r_esp+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c071a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0720: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0721: clc  */ fC = 0;
    /* 008c0722: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0723: add ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0725: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0727: add byte ptr [ecx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ecx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c072e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0730: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0731: clc  */ fC = 0;
    /* 008c0732: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0733: add dh, cl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0735: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0737: add byte ptr [esi + ecx*8], cl */ { u32 ad = (u32)(r_esi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c073a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0740: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0741: clc  */ fC = 0;
    /* 008c0742: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0743: add bh, cl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0745: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0747: add byte ptr [edi + ecx*8], cl */ { u32 ad = (u32)(r_edi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c074a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0750: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0751: clc  */ fC = 0;
    /* 008c0752: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0753: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0755: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0757: add byte ptr [eax + edx*8], cl */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c075a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0760: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0761: clc  */ fC = 0;
    /* 008c0762: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0763: add cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0765: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0767: add byte ptr [ecx + edx*8], cl */ { u32 ad = (u32)(r_ecx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c076a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0770: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0771: clc  */ fC = 0;
    /* 008c0772: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0773: add dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0775: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0777: add byte ptr [edx + edx*8], cl */ { u32 ad = (u32)(r_edx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c077a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0780: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0781: clc  */ fC = 0;
    /* 008c0782: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0783: add bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0785: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0787: add byte ptr [ebx + edx*8], cl */ { u32 ad = (u32)(r_ebx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c078a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0790: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0791: clc  */ fC = 0;
    /* 008c0792: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0793: add ah, dl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0795: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0797: add byte ptr [esp + edx*8], cl */ { u32 ad = (u32)(r_esp+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c079a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07a1: clc  */ fC = 0;
    /* 008c07a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07a3: add ch, dl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a7: add byte ptr [edx*8 + 0x8000], cl */ { u32 ad = (u32)(r_edx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07b1: clc  */ fC = 0;
    /* 008c07b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07b3: add dh, dl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b7: add byte ptr [esi + edx*8], cl */ { u32 ad = (u32)(r_esi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07c1: clc  */ fC = 0;
    /* 008c07c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07c3: add bh, dl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c7: add byte ptr [edi + edx*8], cl */ { u32 ad = (u32)(r_edi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07d1: clc  */ fC = 0;
    /* 008c07d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07d3: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d7: add byte ptr [eax + ebx*8], cl */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07e1: clc  */ fC = 0;
    /* 008c07e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07e3: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e7: add byte ptr [ecx + ebx*8], cl */ { u32 ad = (u32)(r_ecx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07f1: clc  */ fC = 0;
    /* 008c07f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07f3: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f7: add byte ptr [edx + ebx*8], cl */ { u32 ad = (u32)(r_edx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0800: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0801: clc  */ fC = 0;
    /* 008c0802: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0803: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0805: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0807: add byte ptr [ebx + ebx*8], cl */ { u32 ad = (u32)(r_ebx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c080a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0810: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0811: clc  */ fC = 0;
    /* 008c0812: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0813: add ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0815: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0817: add byte ptr [esp + ebx*8], cl */ { u32 ad = (u32)(r_esp+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c081a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0820: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0821: clc  */ fC = 0;
    /* 008c0822: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0823: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0825: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0827: add byte ptr [ebx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c082e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0830: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0831: clc  */ fC = 0;
    /* 008c0832: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0833: add dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0835: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0837: add byte ptr [esi + ebx*8], cl */ { u32 ad = (u32)(r_esi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c083a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0840: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0841: clc  */ fC = 0;
    /* 008c0842: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0843: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0845: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0847: add byte ptr [edi + ebx*8], cl */ { u32 ad = (u32)(r_edi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c084a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0850: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0851: clc  */ fC = 0;
    /* 008c0852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0853: add al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0855: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0857: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c085a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0860: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0861: clc  */ fC = 0;
    /* 008c0862: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0863: add cl, ah */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0865: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0867: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c086a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0870: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0871: clc  */ fC = 0;
    /* 008c0872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0873: add dl, ah */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0875: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0877: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c087a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0880: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0881: clc  */ fC = 0;
    /* 008c0882: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0883: add bl, ah */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0885: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0887: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c088a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0890: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0891: clc  */ fC = 0;
    /* 008c0892: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0893: add ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0895: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0897: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c089a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08a1: clc  */ fC = 0;
    /* 008c08a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08a3: add ch, ah */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a7: add byte ptr [0x8000], cl */ { u32 ad = (u32)(0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08b1: clc  */ fC = 0;
    /* 008c08b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08b3: add dh, ah */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b7: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08c1: clc  */ fC = 0;
    /* 008c08c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08c3: add bh, ah */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c7: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08d1: clc  */ fC = 0;
    /* 008c08d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08d3: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d7: add byte ptr [eax + ebp*8], cl */ { u32 ad = (u32)(r_eax+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08e1: clc  */ fC = 0;
    /* 008c08e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08e3: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e7: add byte ptr [ecx + ebp*8], cl */ { u32 ad = (u32)(r_ecx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08f1: clc  */ fC = 0;
    /* 008c08f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08f3: add dl, ch */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f7: add byte ptr [edx + ebp*8], cl */ { u32 ad = (u32)(r_edx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0900: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0901: clc  */ fC = 0;
    /* 008c0902: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0903: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0905: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0907: add byte ptr [ebx + ebp*8], cl */ { u32 ad = (u32)(r_ebx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c090a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0910: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0911: clc  */ fC = 0;
    /* 008c0912: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0913: add ah, ch */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0915: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0917: add byte ptr [esp + ebp*8], cl */ { u32 ad = (u32)(r_esp+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c091a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0920: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0921: clc  */ fC = 0;
    /* 008c0922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0923: add ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0925: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0927: add byte ptr [ebp*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebp*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c092e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0930: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0931: clc  */ fC = 0;
    /* 008c0932: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0933: add dh, ch */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0935: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0937: add byte ptr [esi + ebp*8], cl */ { u32 ad = (u32)(r_esi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c093a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0940: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0941: clc  */ fC = 0;
    /* 008c0942: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0943: add bh, ch */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0945: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0947: add byte ptr [edi + ebp*8], cl */ { u32 ad = (u32)(r_edi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c094a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0950: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0951: clc  */ fC = 0;
    /* 008c0952: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0953: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0955: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0957: add byte ptr [eax + esi*8], cl */ { u32 ad = (u32)(r_eax+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c095a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0960: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0961: clc  */ fC = 0;
    /* 008c0962: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0963: add cl, dh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0967: add byte ptr [ecx + esi*8], cl */ { u32 ad = (u32)(r_ecx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c096a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0970: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0971: clc  */ fC = 0;
    /* 008c0972: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0973: add dl, dh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0977: add byte ptr [edx + esi*8], cl */ { u32 ad = (u32)(r_edx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c097a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0980: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0981: clc  */ fC = 0;
    /* 008c0982: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0983: add bl, dh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0985: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0987: add byte ptr [ebx + esi*8], cl */ { u32 ad = (u32)(r_ebx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c098a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0990: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0991: clc  */ fC = 0;
    /* 008c0992: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0993: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0995: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0997: add byte ptr [esp + esi*8], cl */ { u32 ad = (u32)(r_esp+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c099a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09a1: clc  */ fC = 0;
    /* 008c09a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09a3: add ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a7: add byte ptr [esi*8 + 0x8000], cl */ { u32 ad = (u32)(r_esi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09b1: clc  */ fC = 0;
    /* 008c09b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09b3: add dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b7: add byte ptr [esi + esi*8], cl */ { u32 ad = (u32)(r_esi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09c1: clc  */ fC = 0;
    /* 008c09c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09c3: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c7: add byte ptr [edi + esi*8], cl */ { u32 ad = (u32)(r_edi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09d1: clc  */ fC = 0;
    /* 008c09d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09d3: add al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d7: add byte ptr [eax + edi*8], cl */ { u32 ad = (u32)(r_eax+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09e1: clc  */ fC = 0;
    /* 008c09e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09e3: add cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e7: add byte ptr [ecx + edi*8], cl */ { u32 ad = (u32)(r_ecx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09f1: clc  */ fC = 0;
    /* 008c09f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09f3: add dl, bh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f7: add byte ptr [edx + edi*8], cl */ { u32 ad = (u32)(r_edx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a01: clc  */ fC = 0;
    /* 008c0a02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a03: add bl, bh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a07: add byte ptr [ebx + edi*8], cl */ { u32 ad = (u32)(r_ebx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a11: clc  */ fC = 0;
    /* 008c0a12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a13: add ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a15: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a17: add byte ptr [esp + edi*8], cl */ { u32 ad = (u32)(r_esp+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a21: clc  */ fC = 0;
    /* 008c0a22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a23: add ch, bh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a27: add byte ptr [edi*8 + 0x8000], cl */ { u32 ad = (u32)(r_edi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a31: clc  */ fC = 0;
    /* 008c0a32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a33: add dh, bh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a37: add byte ptr [esi + edi*8], cl */ { u32 ad = (u32)(r_esi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a41: clc  */ fC = 0;
    /* 008c0a42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a43: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a47: add byte ptr [edi + edi*8], cl */ { u32 ad = (u32)(r_edi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008c0a50: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a57: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008c0a59, "falls out of decoded code");
}

void f_008c0502(void)
{
    FN_ENTER(0x008c0502);
    /* 008c0502: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0503: add byte ptr [ebx + 0xc000000], ch */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0509: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008c050a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0510: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0511: clc  */ fC = 0;
    /* 008c0512: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0513: add byte ptr [eax + eax - 0x53f40000], ch */ { u32 ad = (u32)(r_eax+r_eax+0xac0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c051a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0520: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0521: clc  */ fC = 0;
    /* 008c0522: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0523: add byte ptr [ebp + 0xc000000], ch */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0529: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 008c052a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0530: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0531: clc  */ fC = 0;
    /* 008c0532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0533: add byte ptr [esi + 0xc000000], ch */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0539: scasb al, byte ptr es:[edi] */ { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1;  }
    /* 008c053a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0540: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0541: clc  */ fC = 0;
    /* 008c0542: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0543: add byte ptr [edi + 0xc000000], ch */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008c0549: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 008c054a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0550: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0551: clc  */ fC = 0;
    /* 008c0552: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0553: add byte ptr [eax + 0xc000000], dh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0559: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c055b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c055e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0560: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0561: clc  */ fC = 0;
    /* 008c0562: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0563: add byte ptr [ecx + 0xc000000], dh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0569: mov cl, 0 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c056b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c056e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0570: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0571: clc  */ fC = 0;
    /* 008c0572: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0573: add byte ptr [edx + 0xc000000], dh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0579: mov dl, 0 */ r_edx = (r_edx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c057b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c057e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0580: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0581: clc  */ fC = 0;
    /* 008c0582: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0583: add byte ptr [ebx + 0xc000000], dh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0589: mov bl, 0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 008c058b: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c058e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0590: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0591: clc  */ fC = 0;
    /* 008c0592: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0593: add byte ptr [eax + eax - 0x4bf40000], dh */ { u32 ad = (u32)(r_eax+r_eax+0xb40c0000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c059a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05a1: clc  */ fC = 0;
    /* 008c05a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05a3: add byte ptr [ebp + 0xc000000], dh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05a9: mov ch, 0 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05ab: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05b1: clc  */ fC = 0;
    /* 008c05b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05b3: add byte ptr [esi + 0xc000000], dh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05b9: mov dh, 0 */ r_edx = (r_edx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05bb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05c1: clc  */ fC = 0;
    /* 008c05c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05c3: add byte ptr [edi + 0xc000000], dh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05c9: mov bh, 0 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 008c05cb: add byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05ce: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05d1: clc  */ fC = 0;
    /* 008c05d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05d3: add byte ptr [eax + 0xc000000], bh */ { u32 ad = (u32)(r_eax+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05d9: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 008c05de: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05e1: clc  */ fC = 0;
    /* 008c05e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05e3: add byte ptr [ecx + 0xc000000], bh */ { u32 ad = (u32)(r_ecx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05e9: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 008c05ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c05f1: clc  */ fC = 0;
    /* 008c05f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c05f3: add byte ptr [edx + 0xc000000], bh */ { u32 ad = (u32)(r_edx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c05f9: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 008c05fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0600: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0601: clc  */ fC = 0;
    /* 008c0602: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0603: add byte ptr [ebx + 0xc000000], bh */ { u32 ad = (u32)(r_ebx+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0609: mov ebx, 0x8000 */ r_ebx = 0x8000u;
    /* 008c060e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0610: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0611: clc  */ fC = 0;
    /* 008c0612: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0613: add byte ptr [eax + eax - 0x43f40000], bh */ { u32 ad = (u32)(r_eax+r_eax+0xbc0c0000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c061a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0620: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0621: clc  */ fC = 0;
    /* 008c0622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0623: add byte ptr [ebp + 0xc000000], bh */ { u32 ad = (u32)(r_ebp+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0629: mov ebp, 0x8000 */ r_ebp = 0x8000u;
    /* 008c062e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0630: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0631: clc  */ fC = 0;
    /* 008c0632: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0633: add byte ptr [esi + 0xc000000], bh */ { u32 ad = (u32)(r_esi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0639: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 008c063e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0640: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0641: clc  */ fC = 0;
    /* 008c0642: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0643: add byte ptr [edi + 0xc000000], bh */ { u32 ad = (u32)(r_edi+0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0649: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 008c064e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0650: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0651: clc  */ fC = 0;
    /* 008c0652: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0653: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0655: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0657: add byte ptr [eax + eax*8], cl */ { u32 ad = (u32)(r_eax+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c065a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0660: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0661: clc  */ fC = 0;
    /* 008c0662: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0663: add cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0665: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0667: add byte ptr [ecx + eax*8], cl */ { u32 ad = (u32)(r_ecx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c066a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0670: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0671: clc  */ fC = 0;
    /* 008c0672: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0673: add dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0675: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0677: add byte ptr [edx + eax*8], cl */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c067a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0680: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0681: clc  */ fC = 0;
    /* 008c0682: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0683: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0685: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0687: add byte ptr [ebx + eax*8], cl */ { u32 ad = (u32)(r_ebx+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c068a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0690: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0691: clc  */ fC = 0;
    /* 008c0692: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0693: add ah, al */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0695: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0697: add byte ptr [esp + eax*8], cl */ { u32 ad = (u32)(r_esp+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c069a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06a1: clc  */ fC = 0;
    /* 008c06a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06a3: add ch, al */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06a7: add byte ptr [eax*8 + 0x8000], cl */ { u32 ad = (u32)(r_eax*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06b1: clc  */ fC = 0;
    /* 008c06b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06b3: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06b7: add byte ptr [esi + eax*8], cl */ { u32 ad = (u32)(r_esi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06c1: clc  */ fC = 0;
    /* 008c06c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06c3: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c06c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06c7: add byte ptr [edi + eax*8], cl */ { u32 ad = (u32)(r_edi+r_eax*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06d1: clc  */ fC = 0;
    /* 008c06d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06d3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06d7: add byte ptr [eax + ecx*8], cl */ { u32 ad = (u32)(r_eax+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06e1: clc  */ fC = 0;
    /* 008c06e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06e3: add cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06e7: add byte ptr [ecx + ecx*8], cl */ { u32 ad = (u32)(r_ecx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c06f1: clc  */ fC = 0;
    /* 008c06f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c06f3: add dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c06f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06f7: add byte ptr [edx + ecx*8], cl */ { u32 ad = (u32)(r_edx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c06fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0700: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0701: clc  */ fC = 0;
    /* 008c0702: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0703: add bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0705: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0707: add byte ptr [ebx + ecx*8], cl */ { u32 ad = (u32)(r_ebx+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c070a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0710: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0711: clc  */ fC = 0;
    /* 008c0712: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0713: add ah, cl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0715: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0717: add byte ptr [esp + ecx*8], cl */ { u32 ad = (u32)(r_esp+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c071a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0720: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0721: clc  */ fC = 0;
    /* 008c0722: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0723: add ch, cl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0725: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0727: add byte ptr [ecx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ecx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c072e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0730: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0731: clc  */ fC = 0;
    /* 008c0732: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0733: add dh, cl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0735: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0737: add byte ptr [esi + ecx*8], cl */ { u32 ad = (u32)(r_esi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c073a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0740: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0741: clc  */ fC = 0;
    /* 008c0742: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0743: add bh, cl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0745: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0747: add byte ptr [edi + ecx*8], cl */ { u32 ad = (u32)(r_edi+r_ecx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c074a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0750: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0751: clc  */ fC = 0;
    /* 008c0752: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0753: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0755: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0757: add byte ptr [eax + edx*8], cl */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c075a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0760: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0761: clc  */ fC = 0;
    /* 008c0762: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0763: add cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0765: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0767: add byte ptr [ecx + edx*8], cl */ { u32 ad = (u32)(r_ecx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c076a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0770: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0771: clc  */ fC = 0;
    /* 008c0772: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0773: add dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0775: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0777: add byte ptr [edx + edx*8], cl */ { u32 ad = (u32)(r_edx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c077a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0780: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0781: clc  */ fC = 0;
    /* 008c0782: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0783: add bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0785: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0787: add byte ptr [ebx + edx*8], cl */ { u32 ad = (u32)(r_ebx+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c078a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0790: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0791: clc  */ fC = 0;
    /* 008c0792: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0793: add ah, dl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0795: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0797: add byte ptr [esp + edx*8], cl */ { u32 ad = (u32)(r_esp+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c079a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07a1: clc  */ fC = 0;
    /* 008c07a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07a3: add ch, dl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07a7: add byte ptr [edx*8 + 0x8000], cl */ { u32 ad = (u32)(r_edx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07b1: clc  */ fC = 0;
    /* 008c07b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07b3: add dh, dl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07b7: add byte ptr [esi + edx*8], cl */ { u32 ad = (u32)(r_esi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07c1: clc  */ fC = 0;
    /* 008c07c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07c3: add bh, dl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c07c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07c7: add byte ptr [edi + edx*8], cl */ { u32 ad = (u32)(r_edi+r_edx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07d1: clc  */ fC = 0;
    /* 008c07d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07d3: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07d7: add byte ptr [eax + ebx*8], cl */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07e1: clc  */ fC = 0;
    /* 008c07e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07e3: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07e7: add byte ptr [ecx + ebx*8], cl */ { u32 ad = (u32)(r_ecx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c07f1: clc  */ fC = 0;
    /* 008c07f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c07f3: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c07f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07f7: add byte ptr [edx + ebx*8], cl */ { u32 ad = (u32)(r_edx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c07fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0800: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0801: clc  */ fC = 0;
    /* 008c0802: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0803: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0805: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0807: add byte ptr [ebx + ebx*8], cl */ { u32 ad = (u32)(r_ebx+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c080a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0810: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0811: clc  */ fC = 0;
    /* 008c0812: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0813: add ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0815: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0817: add byte ptr [esp + ebx*8], cl */ { u32 ad = (u32)(r_esp+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c081a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0820: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0821: clc  */ fC = 0;
    /* 008c0822: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0823: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0825: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0827: add byte ptr [ebx*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebx*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c082e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0830: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0831: clc  */ fC = 0;
    /* 008c0832: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0833: add dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0835: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0837: add byte ptr [esi + ebx*8], cl */ { u32 ad = (u32)(r_esi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c083a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0840: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0841: clc  */ fC = 0;
    /* 008c0842: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0843: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0845: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0847: add byte ptr [edi + ebx*8], cl */ { u32 ad = (u32)(r_edi+r_ebx*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c084a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0850: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0851: clc  */ fC = 0;
    /* 008c0852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0853: add al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0855: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0857: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c085a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0860: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0861: clc  */ fC = 0;
    /* 008c0862: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0863: add cl, ah */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0865: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0867: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c086a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0870: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0871: clc  */ fC = 0;
    /* 008c0872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0873: add dl, ah */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0875: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0877: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c087a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0880: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0881: clc  */ fC = 0;
    /* 008c0882: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0883: add bl, ah */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0885: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0887: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c088a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0890: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0891: clc  */ fC = 0;
    /* 008c0892: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0893: add ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0895: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0897: add byte ptr [esp], cl */ { u32 ad = (u32)(r_esp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c089a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08a1: clc  */ fC = 0;
    /* 008c08a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08a3: add ch, ah */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08a7: add byte ptr [0x8000], cl */ { u32 ad = (u32)(0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08b1: clc  */ fC = 0;
    /* 008c08b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08b3: add dh, ah */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08b7: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08c1: clc  */ fC = 0;
    /* 008c08c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08c3: add bh, ah */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c08c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08c7: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08d1: clc  */ fC = 0;
    /* 008c08d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08d3: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08d7: add byte ptr [eax + ebp*8], cl */ { u32 ad = (u32)(r_eax+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08e1: clc  */ fC = 0;
    /* 008c08e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08e3: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08e7: add byte ptr [ecx + ebp*8], cl */ { u32 ad = (u32)(r_ecx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c08f1: clc  */ fC = 0;
    /* 008c08f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c08f3: add dl, ch */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c08f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08f7: add byte ptr [edx + ebp*8], cl */ { u32 ad = (u32)(r_edx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c08fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0900: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0901: clc  */ fC = 0;
    /* 008c0902: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0903: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0905: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0907: add byte ptr [ebx + ebp*8], cl */ { u32 ad = (u32)(r_ebx+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c090a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0910: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0911: clc  */ fC = 0;
    /* 008c0912: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0913: add ah, ch */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0915: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0917: add byte ptr [esp + ebp*8], cl */ { u32 ad = (u32)(r_esp+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c091a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0920: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0921: clc  */ fC = 0;
    /* 008c0922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0923: add ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0925: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0927: add byte ptr [ebp*8 + 0x8000], cl */ { u32 ad = (u32)(r_ebp*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c092e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0930: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0931: clc  */ fC = 0;
    /* 008c0932: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0933: add dh, ch */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0935: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0937: add byte ptr [esi + ebp*8], cl */ { u32 ad = (u32)(r_esi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c093a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0940: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0941: clc  */ fC = 0;
    /* 008c0942: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0943: add bh, ch */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0945: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0947: add byte ptr [edi + ebp*8], cl */ { u32 ad = (u32)(r_edi+r_ebp*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c094a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0950: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0951: clc  */ fC = 0;
    /* 008c0952: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0953: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0955: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0957: add byte ptr [eax + esi*8], cl */ { u32 ad = (u32)(r_eax+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c095a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0960: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0961: clc  */ fC = 0;
    /* 008c0962: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0963: add cl, dh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0967: add byte ptr [ecx + esi*8], cl */ { u32 ad = (u32)(r_ecx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c096a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0970: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0971: clc  */ fC = 0;
    /* 008c0972: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0973: add dl, dh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0977: add byte ptr [edx + esi*8], cl */ { u32 ad = (u32)(r_edx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c097a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0980: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0981: clc  */ fC = 0;
    /* 008c0982: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0983: add bl, dh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0985: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0987: add byte ptr [ebx + esi*8], cl */ { u32 ad = (u32)(r_ebx+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c098a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0990: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0991: clc  */ fC = 0;
    /* 008c0992: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0993: add ah, dh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0995: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0997: add byte ptr [esp + esi*8], cl */ { u32 ad = (u32)(r_esp+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c099a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09a1: clc  */ fC = 0;
    /* 008c09a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09a3: add ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09a7: add byte ptr [esi*8 + 0x8000], cl */ { u32 ad = (u32)(r_esi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09b1: clc  */ fC = 0;
    /* 008c09b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09b3: add dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09b5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09b7: add byte ptr [esi + esi*8], cl */ { u32 ad = (u32)(r_esi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09c1: clc  */ fC = 0;
    /* 008c09c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09c3: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c09c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09c7: add byte ptr [edi + esi*8], cl */ { u32 ad = (u32)(r_edi+r_esi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09d1: clc  */ fC = 0;
    /* 008c09d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09d3: add al, bh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09d5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09d7: add byte ptr [eax + edi*8], cl */ { u32 ad = (u32)(r_eax+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09da: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09e1: clc  */ fC = 0;
    /* 008c09e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09e3: add cl, bh */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09e5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09e7: add byte ptr [ecx + edi*8], cl */ { u32 ad = (u32)(r_ecx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c09f1: clc  */ fC = 0;
    /* 008c09f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c09f3: add dl, bh */ {  u32 a = (u8)r_edx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c09f5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09f7: add byte ptr [edx + edi*8], cl */ { u32 ad = (u32)(r_edx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c09fa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a01: clc  */ fC = 0;
    /* 008c0a02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a03: add bl, bh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a07: add byte ptr [ebx + edi*8], cl */ { u32 ad = (u32)(r_ebx+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a11: clc  */ fC = 0;
    /* 008c0a12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a13: add ah, bh */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a15: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a17: add byte ptr [esp + edi*8], cl */ { u32 ad = (u32)(r_esp+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a21: clc  */ fC = 0;
    /* 008c0a22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a23: add ch, bh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a27: add byte ptr [edi*8 + 0x8000], cl */ { u32 ad = (u32)(r_edi*8+0x8000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a31: clc  */ fC = 0;
    /* 008c0a32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a33: add dh, bh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a37: add byte ptr [esi + edi*8], cl */ { u32 ad = (u32)(r_esi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008c0a41: clc  */ fC = 0;
    /* 008c0a42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a43: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 008c0a45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a47: add byte ptr [edi + edi*8], cl */ { u32 ad = (u32)(r_edi+r_edi*8);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008c0a50: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a57: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008c0a59, "falls out of decoded code");
}

void f_008c0a50(void)
{
    FN_ENTER(0x008c0a50);
    /* 008c0a50: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0a52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008c0a53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c0a57: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008c0a59, "falls out of decoded code");
}

void f_008c0bb0(void) /* sub_8C0BB0 */
{
    FN_ENTER(0x008c0bb0);
    /* 008c0bb0: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0bb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0bb8: jne 0x8c0bbd */ if (!fZ) goto L_008c0bbd;
L_008c0bba:; BB(0x008c0bba);
    /* 008c0bba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0bbc: ret  */ FN_RET(0x008c0bb0); r_esp += 4; return;
L_008c0bbd:; BB(0x008c0bbd);
    /* 008c0bbd: jmp 0x8c0f60 */ goto L_008c0f60;
L_008c0f60:; BB(0x008c0f60);
    /* 008c0f60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f61: mov esi, ecx */ r_esi = r_ecx;
    /* 008c0f63: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c0f66: jne 0x8c0f8b */ if (!fZ) goto L_008c0f8b;
L_008c0f68:; BB(0x008c0f68);
    /* 008c0f68: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008c0f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f6c: push 0xa37be0 */ { u32 v = 0xa37be0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f71: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c0f76u); f_008c94e0();
    /* 008c0f76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c0f79: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008c0f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f7e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c0f83u); f_008c3720();
    /* 008c0f83: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008c0f86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c0f89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0f8a: ret  */ FN_RET(0x008c0bb0); r_esp += 4; return;
L_008c0f8b:; BB(0x008c0f8b);
    /* 008c0f8b: push 0xa37bc4 */ { u32 v = 0xa37bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f90: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c0f95u); f_008c94e0();
    /* 008c0f95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c0f98: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 008c0f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f9d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c0fa2u); f_008c3720();
    /* 008c0fa2: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008c0fa5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c0fa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0fa9: ret  */ FN_RET(0x008c0bb0); r_esp += 4; return;
}

void f_008c0bd0(void) /* sub_8C0BD0 */
{
    FN_ENTER(0x008c0bd0);
    /* 008c0bd0: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0bd6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0bd8: je 0x8c0be4 */ if (fZ) goto L_008c0be4;
L_008c0bda:; BB(0x008c0bda);
    /* 008c0bda: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c0bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0bdf: call 0x8c38a0 */ r_esp -= 4; W32(r_esp, 0x8c0be4u); f_008c38a0();
L_008c0be4:; BB(0x008c0be4);
    /* 008c0be4: ret  */ FN_RET(0x008c0bd0); r_esp += 4; return;
}

void f_008c0bf0(void) /* sub_8C0BF0 */
{
    FN_ENTER(0x008c0bf0);
    /* 008c0bf0: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c0bf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0bf6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c0bf8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0bfa: je 0x8c0c00 */ if (fZ) goto L_008c0c00;
L_008c0bfc:; BB(0x008c0bfc);
    /* 008c0bfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0bfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c0bff: ret  */ FN_RET(0x008c0bf0); r_esp += 4; return;
L_008c0c00:; BB(0x008c0c00);
    /* 008c0c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c01: mov ebp, dword ptr [0x8f82a0] */ r_ebp = R32((u32)(0x8f82a0u));
    /* 008c0c07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c09: push 0x8c51d0 */ { u32 v = 0x8c51d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c0e: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c0c10u); call_ind(t); }
    /* 008c0c10: push 0x2ba8 */ { u32 v = 0x2ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c15: mov edi, eax */ r_edi = r_eax;
    /* 008c0c17: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8c0c1cu); f_008581c5();
    /* 008c0c1c: mov esi, eax */ r_esi = r_eax;
    /* 008c0c1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c0c21: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0c23: je 0x8c0ce4 */ if (fZ) goto L_008c0ce4;
L_008c0c29:; BB(0x008c0c29);
    /* 008c0c29: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008c0c2c: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008c0c2e: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 008c0c31: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008c0c34: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 008c0c37: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 008c0c3a: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 008c0c3d: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008c0c40: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008c0c43: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 008c0c46: mov byte ptr [esi + 0x20], bl */ W8((u32)(r_esi+0x20u), (u8)r_ebx);
    /* 008c0c49: mov byte ptr [esi + 0x21], bl */ W8((u32)(r_esi+0x21u), (u8)r_ebx);
    /* 008c0c4c: mov byte ptr [esi + 0x22], bl */ W8((u32)(r_esi+0x22u), (u8)r_ebx);
    /* 008c0c4f: mov byte ptr [esi + 0x23], bl */ W8((u32)(r_esi+0x23u), (u8)r_ebx);
    /* 008c0c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c53: mov dword ptr [esi + 0x24], 0xffffffff */ W32((u32)(r_esi+0x24u), 0xffffffffu);
    /* 008c0c5a: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x8c0c60u); call_ind(t); }
    /* 008c0c60: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c0c66: mov dword ptr [esi + 0x1464], ebx */ W32((u32)(r_esi+0x1464u), r_ebx);
    /* 008c0c6c: call 0x8c85d0 */ r_esp -= 4; W32(r_esp, 0x8c0c71u); f_008c85d0();
    /* 008c0c71: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c0c77: call 0x8c78e0 */ r_esp -= 4; W32(r_esp, 0x8c0c7cu); f_008c78e0();
    /* 008c0c7c: mov dword ptr [esi + 0x2b10], ebx */ W32((u32)(r_esi+0x2b10u), r_ebx);
    /* 008c0c82: mov dword ptr [esi + 0x2b34], ebx */ W32((u32)(r_esi+0x2b34u), r_ebx);
    /* 008c0c88: mov dword ptr [esi + 0x2b38], ebx */ W32((u32)(r_esi+0x2b38u), r_ebx);
    /* 008c0c8e: mov byte ptr [esi + 0x2b7c], bl */ W8((u32)(r_esi+0x2b7cu), (u8)r_ebx);
    /* 008c0c94: mov byte ptr [esi + 0x2b7d], bl */ W8((u32)(r_esi+0x2b7du), (u8)r_ebx);
    /* 008c0c9a: mov dword ptr [esi + 0x2b80], 0x3e8 */ W32((u32)(r_esi+0x2b80u), 0x3e8u);
    /* 008c0ca4: mov dword ptr [esi + 0x2b84], ebx */ W32((u32)(r_esi+0x2b84u), r_ebx);
    /* 008c0caa: mov dword ptr [esi + 0x2b88], ebx */ W32((u32)(r_esi+0x2b88u), r_ebx);
    /* 008c0cb0: mov dword ptr [esi + 0x2b8c], ebx */ W32((u32)(r_esi+0x2b8cu), r_ebx);
    /* 008c0cb6: mov byte ptr [esi + 0x2b90], bl */ W8((u32)(r_esi+0x2b90u), (u8)r_ebx);
    /* 008c0cbc: mov dword ptr [esi + 0x2b94], ebx */ W32((u32)(r_esi+0x2b94u), r_ebx);
    /* 008c0cc2: mov dword ptr [esi + 0x2b98], ebx */ W32((u32)(r_esi+0x2b98u), r_ebx);
    /* 008c0cc8: mov dword ptr [esi + 0x2b9c], ebx */ W32((u32)(r_esi+0x2b9cu), r_ebx);
    /* 008c0cce: mov dword ptr [esi + 0x2ba0], ebx */ W32((u32)(r_esi+0x2ba0u), r_ebx);
    /* 008c0cd4: mov byte ptr [esi + 0x2ba4], bl */ W8((u32)(r_esi+0x2ba4u), (u8)r_ebx);
    /* 008c0cda: mov byte ptr [esi + 0x2b3c], bl */ W8((u32)(r_esi+0x2b3cu), (u8)r_ebx);
    /* 008c0ce0: mov ecx, esi */ r_ecx = r_esi;
    /* 008c0ce2: jmp 0x8c0ce6 */ goto L_008c0ce6;
L_008c0ce4:; BB(0x008c0ce4);
    /* 008c0ce4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008c0ce6:; BB(0x008c0ce6);
    /* 008c0ce6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c0cea: mov dword ptr [0xaeaa28], ecx */ W32((u32)(0xaeaa28u), r_ecx);
    /* 008c0cf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0cf1: call 0x8c1440 */ r_esp -= 4; W32(r_esp, 0x8c0cf6u); f_008c1440();
    /* 008c0cf6: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0cfc: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008c0cff: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d05: cmp dword ptr [ecx + 0x10], 0x755 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x755u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d0c: je 0x8c0d13 */ if (fZ) goto L_008c0d13;
L_008c0d0e:; BB(0x008c0d0e);
    /* 008c0d0e: call 0x8c1120 */ r_esp -= 4; W32(r_esp, 0x8c0d13u); f_008c1120();
L_008c0d13:; BB(0x008c0d13);
    /* 008c0d13: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c0d19: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008c0d1c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d1e: je 0x8c0d27 */ if (fZ) goto L_008c0d27;
L_008c0d20:; BB(0x008c0d20);
    /* 008c0d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d21: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x8c0d27u); call_ind(t); }
L_008c0d27:; BB(0x008c0d27);
    /* 008c0d27: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c0d2c: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 008c0d2f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d31: je 0x8c0d3b */ if (fZ) goto L_008c0d3b;
L_008c0d33:; BB(0x008c0d33);
    /* 008c0d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d35: call dword ptr [0x8f81f4] */ { u32 t = R32((u32)(0x8f81f4u)); r_esp -= 4; W32(r_esp, 0x8c0d3bu); call_ind(t); }
L_008c0d3b:; BB(0x008c0d3b);
    /* 008c0d3b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c0d3d: je 0x8c0d42 */ if (fZ) goto L_008c0d42;
L_008c0d3f:; BB(0x008c0d3f);
    /* 008c0d3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d40: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c0d42u); call_ind(t); }
L_008c0d42:; BB(0x008c0d42);
    /* 008c0d42: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c0d49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c0d4b: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 008c0d4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c0d4f: ret  */ FN_RET(0x008c0bf0); r_esp += 4; return;
}

void f_008c0c02(void)
{
    FN_ENTER(0x008c0c02);
    /* 008c0c02: sub eax, 0x8f82a0 */ {  u32 a = r_eax; u32 b = 0x8f82a0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c0c07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c09: push 0x8c51d0 */ { u32 v = 0x8c51d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c0e: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c0c10u); call_ind(t); }
    /* 008c0c10: push 0x2ba8 */ { u32 v = 0x2ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c15: mov edi, eax */ r_edi = r_eax;
    /* 008c0c17: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8c0c1cu); f_008581c5();
    /* 008c0c1c: mov esi, eax */ r_esi = r_eax;
    /* 008c0c1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c0c21: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0c23: je 0x8c0ce4 */ if (fZ) goto L_008c0ce4;
L_008c0c29:; BB(0x008c0c29);
    /* 008c0c29: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008c0c2c: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008c0c2e: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 008c0c31: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008c0c34: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 008c0c37: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 008c0c3a: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 008c0c3d: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008c0c40: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008c0c43: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 008c0c46: mov byte ptr [esi + 0x20], bl */ W8((u32)(r_esi+0x20u), (u8)r_ebx);
    /* 008c0c49: mov byte ptr [esi + 0x21], bl */ W8((u32)(r_esi+0x21u), (u8)r_ebx);
    /* 008c0c4c: mov byte ptr [esi + 0x22], bl */ W8((u32)(r_esi+0x22u), (u8)r_ebx);
    /* 008c0c4f: mov byte ptr [esi + 0x23], bl */ W8((u32)(r_esi+0x23u), (u8)r_ebx);
    /* 008c0c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0c53: mov dword ptr [esi + 0x24], 0xffffffff */ W32((u32)(r_esi+0x24u), 0xffffffffu);
    /* 008c0c5a: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x8c0c60u); call_ind(t); }
    /* 008c0c60: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c0c66: mov dword ptr [esi + 0x1464], ebx */ W32((u32)(r_esi+0x1464u), r_ebx);
    /* 008c0c6c: call 0x8c85d0 */ r_esp -= 4; W32(r_esp, 0x8c0c71u); f_008c85d0();
    /* 008c0c71: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c0c77: call 0x8c78e0 */ r_esp -= 4; W32(r_esp, 0x8c0c7cu); f_008c78e0();
    /* 008c0c7c: mov dword ptr [esi + 0x2b10], ebx */ W32((u32)(r_esi+0x2b10u), r_ebx);
    /* 008c0c82: mov dword ptr [esi + 0x2b34], ebx */ W32((u32)(r_esi+0x2b34u), r_ebx);
    /* 008c0c88: mov dword ptr [esi + 0x2b38], ebx */ W32((u32)(r_esi+0x2b38u), r_ebx);
    /* 008c0c8e: mov byte ptr [esi + 0x2b7c], bl */ W8((u32)(r_esi+0x2b7cu), (u8)r_ebx);
    /* 008c0c94: mov byte ptr [esi + 0x2b7d], bl */ W8((u32)(r_esi+0x2b7du), (u8)r_ebx);
    /* 008c0c9a: mov dword ptr [esi + 0x2b80], 0x3e8 */ W32((u32)(r_esi+0x2b80u), 0x3e8u);
    /* 008c0ca4: mov dword ptr [esi + 0x2b84], ebx */ W32((u32)(r_esi+0x2b84u), r_ebx);
    /* 008c0caa: mov dword ptr [esi + 0x2b88], ebx */ W32((u32)(r_esi+0x2b88u), r_ebx);
    /* 008c0cb0: mov dword ptr [esi + 0x2b8c], ebx */ W32((u32)(r_esi+0x2b8cu), r_ebx);
    /* 008c0cb6: mov byte ptr [esi + 0x2b90], bl */ W8((u32)(r_esi+0x2b90u), (u8)r_ebx);
    /* 008c0cbc: mov dword ptr [esi + 0x2b94], ebx */ W32((u32)(r_esi+0x2b94u), r_ebx);
    /* 008c0cc2: mov dword ptr [esi + 0x2b98], ebx */ W32((u32)(r_esi+0x2b98u), r_ebx);
    /* 008c0cc8: mov dword ptr [esi + 0x2b9c], ebx */ W32((u32)(r_esi+0x2b9cu), r_ebx);
    /* 008c0cce: mov dword ptr [esi + 0x2ba0], ebx */ W32((u32)(r_esi+0x2ba0u), r_ebx);
    /* 008c0cd4: mov byte ptr [esi + 0x2ba4], bl */ W8((u32)(r_esi+0x2ba4u), (u8)r_ebx);
    /* 008c0cda: mov byte ptr [esi + 0x2b3c], bl */ W8((u32)(r_esi+0x2b3cu), (u8)r_ebx);
    /* 008c0ce0: mov ecx, esi */ r_ecx = r_esi;
    /* 008c0ce2: jmp 0x8c0ce6 */ goto L_008c0ce6;
L_008c0ce4:; BB(0x008c0ce4);
    /* 008c0ce4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008c0ce6:; BB(0x008c0ce6);
    /* 008c0ce6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c0cea: mov dword ptr [0xaeaa28], ecx */ W32((u32)(0xaeaa28u), r_ecx);
    /* 008c0cf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0cf1: call 0x8c1440 */ r_esp -= 4; W32(r_esp, 0x8c0cf6u); f_008c1440();
    /* 008c0cf6: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0cfc: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008c0cff: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d05: cmp dword ptr [ecx + 0x10], 0x755 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x755u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d0c: je 0x8c0d13 */ if (fZ) goto L_008c0d13;
L_008c0d0e:; BB(0x008c0d0e);
    /* 008c0d0e: call 0x8c1120 */ r_esp -= 4; W32(r_esp, 0x8c0d13u); f_008c1120();
L_008c0d13:; BB(0x008c0d13);
    /* 008c0d13: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c0d19: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008c0d1c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d1e: je 0x8c0d27 */ if (fZ) goto L_008c0d27;
L_008c0d20:; BB(0x008c0d20);
    /* 008c0d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d21: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x8c0d27u); call_ind(t); }
L_008c0d27:; BB(0x008c0d27);
    /* 008c0d27: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c0d2c: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 008c0d2f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d31: je 0x8c0d3b */ if (fZ) goto L_008c0d3b;
L_008c0d33:; BB(0x008c0d33);
    /* 008c0d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d35: call dword ptr [0x8f81f4] */ { u32 t = R32((u32)(0x8f81f4u)); r_esp -= 4; W32(r_esp, 0x8c0d3bu); call_ind(t); }
L_008c0d3b:; BB(0x008c0d3b);
    /* 008c0d3b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c0d3d: je 0x8c0d42 */ if (fZ) goto L_008c0d42;
L_008c0d3f:; BB(0x008c0d3f);
    /* 008c0d3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d40: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c0d42u); call_ind(t); }
L_008c0d42:; BB(0x008c0d42);
    /* 008c0d42: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c0d49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c0d4b: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 008c0d4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c0d4f: ret  */ FN_RET(0x008c0c02); r_esp += 4; return;
}

void f_008c0d50(void) /* sub_8C0D50 */
{
    FN_ENTER(0x008c0d50);
    /* 008c0d50: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d58: jne 0x8c0d5d */ if (!fZ) goto L_008c0d5d;
L_008c0d5a:; BB(0x008c0d5a);
    /* 008c0d5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0d5c: ret  */ FN_RET(0x008c0d50); r_esp += 4; return;
L_008c0d5d:; BB(0x008c0d5d);
    /* 008c0d5d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c0d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d62: call 0x8c3ab0 */ r_esp -= 4; W32(r_esp, 0x8c0d67u); f_008c3ab0();
    /* 008c0d67: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0d6c: ret  */ FN_RET(0x008c0d50); r_esp += 4; return;
}

void f_008c0d70(void) /* sub_8C0D70 */
{
    FN_ENTER(0x008c0d70);
    /* 008c0d70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d71: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d79: jne 0x8c0d7f */ if (!fZ) goto L_008c0d7f;
L_008c0d7b:; BB(0x008c0d7b);
    /* 008c0d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0d7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c0d7e: ret  */ FN_RET(0x008c0d70); r_esp += 4; return;
L_008c0d7f:; BB(0x008c0d7f);
    /* 008c0d7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d80: call 0x8c3b30 */ r_esp -= 4; W32(r_esp, 0x8c0d85u); f_008c3b30();
    /* 008c0d85: mov ecx, dword ptr [0xaeaa28] */ r_ecx = R32((u32)(0xaeaa28u));
    /* 008c0d8b: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 008c0d8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0d91: mov esi, ecx */ r_esi = r_ecx;
    /* 008c0d93: je 0x8c0da3 */ if (fZ) goto L_008c0da3;
L_008c0d95:; BB(0x008c0d95);
    /* 008c0d95: call 0x8c0dc0 */ r_esp -= 4; W32(r_esp, 0x8c0d9au); f_008c0dc0();
    /* 008c0d9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0d9b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8c0da0u); f_00857e98();
    /* 008c0da0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c0da3:; BB(0x008c0da3);
    /* 008c0da3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c0da7: mov dword ptr [0xaeaa28], 0 */ W32((u32)(0xaeaa28u), 0x0u);
    /* 008c0db1: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c0db6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c0db8: ret  */ FN_RET(0x008c0d70); r_esp += 4; return;
}

void f_008c0dc0(void) /* sub_8C0DC0 */
{
    FN_ENTER(0x008c0dc0);
    /* 008c0dc0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c0dc2: push 0x8cb9d4 */ { u32 v = 0x8cb9d4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0dc7: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008c0dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0dce: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008c0dd5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c0dd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0dd9: mov esi, ecx */ r_esi = r_ecx;
    /* 008c0ddb: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008c0ddf: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c0de5: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 008c0ded: call 0x8c7930 */ r_esp -= 4; W32(r_esp, 0x8c0df2u); f_008c7930();
    /* 008c0df2: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c0df8: mov byte ptr [esp + 0x14], 0 */ W8((u32)(r_esp+0x14u), 0x0u);
    /* 008c0dfd: call 0x8c8650 */ r_esp -= 4; W32(r_esp, 0x8c0e02u); f_008c8650();
    /* 008c0e02: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c0e05: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008c0e09: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c0e0b: mov dword ptr [esp + 0x14], 2 */ W32((u32)(r_esp+0x14u), 0x2u);
    /* 008c0e13: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0e16: je 0x8c0f39 */ if (fZ) goto L_008c0f39;
L_008c0e1c:; BB(0x008c0e1c);
    /* 008c0e1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e1e: lea edi, [esi + 0x101c] */ r_edi = (u32)(r_esi+0x101cu);
    /* 008c0e24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e25: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c0e2bu); call_ind(t); }
    /* 008c0e2b: mov eax, dword ptr [esi + 0x143c] */ r_eax = R32((u32)(r_esi+0x143cu));
    /* 008c0e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0e33: je 0x8c0e44 */ if (fZ) goto L_008c0e44;
L_008c0e35:; BB(0x008c0e35);
    /* 008c0e35: mov ecx, dword ptr [esi + 0x1440] */ r_ecx = R32((u32)(r_esi+0x1440u));
    /* 008c0e3b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c0e3d: mov eax, 0xa37ba0 */ r_eax = 0xa37ba0u;
    /* 008c0e42: ja 0x8c0e49 */ if ((!fC&&!fZ)) goto L_008c0e49;
L_008c0e44:; BB(0x008c0e44);
    /* 008c0e44: mov eax, 0x8f8814 */ r_eax = 0x8f8814u;
L_008c0e49:; BB(0x008c0e49);
    /* 008c0e49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c0e4c: mov ax, word ptr [esi + 0x102a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x102au))) & 0xffffu);
    /* 008c0e53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c0e55: mov cx, word ptr [esi + 0x1028] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1028u))) & 0xffffu);
    /* 008c0e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c0e5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c0e61: mov dx, word ptr [esi + 0x1026] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x1026u))) & 0xffffu);
    /* 008c0e68: mov ax, word ptr [esi + 0x1024] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x1024u))) & 0xffffu);
    /* 008c0e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c0e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e74: mov cx, word ptr [esi + 0x1022] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1022u))) & 0xffffu);
    /* 008c0e7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c0e7d: mov dx, word ptr [esi + 0x101e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x101eu))) & 0xffffu);
    /* 008c0e84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c0e86: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 008c0e89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e8c: push 0xa37b48 */ { u32 v = 0xa37b48u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e91: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 008c0e94: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c0e99u); f_008c9470();
    /* 008c0e99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c0e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0e9e: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c0ea3u); f_00858bf5();
    /* 008c0ea3: mov edi, ebx */ r_edi = r_ebx;
    /* 008c0ea5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c0ea8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c0eaa: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c0ead: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c0eaf: mov eax, dword ptr [esi + 0x1438] */ r_eax = R32((u32)(r_esi+0x1438u));
    /* 008c0eb5: not ecx */ r_ecx = ~r_ecx;
    /* 008c0eb7: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c0eb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0eba: mov edi, ecx */ r_edi = r_ecx;
    /* 008c0ebc: je 0x8c0eef */ if (fZ) goto L_008c0eef;
L_008c0ebe:; BB(0x008c0ebe);
    /* 008c0ebe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c0ec0: jle 0x8c0f01 */ if ((fZ||fS!=fO)) goto L_008c0f01;
L_008c0ec2:; BB(0x008c0ec2);
    /* 008c0ec2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ec3: mov ebp, 0xffffffe4 */ r_ebp = 0xffffffe4u;
    /* 008c0ec8: mov eax, ebx */ r_eax = r_ebx;
    /* 008c0eca: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_008c0ecc:; BB(0x008c0ecc);
    /* 008c0ecc: mov ecx, dword ptr [esi + 0x1438] */ r_ecx = R32((u32)(r_esi+0x1438u));
    /* 008c0ed2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c0ed5: mov dword ptr [esi + 0x1438], ecx */ W32((u32)(r_esi+0x1438u), r_ecx);
    /* 008c0edb: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c0edd: add cl, 0x43 */ {  u32 a = (u8)r_ecx; u32 b = 0x43u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0ee0: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c0ee2: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008c0ee4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c0ee5: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 008c0ee8: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c0eea: jl 0x8c0ecc */ if ((fS!=fO)) goto L_008c0ecc;
L_008c0eec:; BB(0x008c0eec);
    /* 008c0eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c0eed: jmp 0x8c0f01 */ goto L_008c0f01;
L_008c0eef:; BB(0x008c0eef);
    /* 008c0eef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ef0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ef1: lea eax, [esi + 0x1030] */ r_eax = (u32)(r_esi+0x1030u);
    /* 008c0ef7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ef9: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c0efeu); f_008c8e20();
    /* 008c0efe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c0f01:; BB(0x008c0f01);
    /* 008c0f01: cmp dword ptr [esi + 0x143c], 0x3e7 */ {  u32 a = R32((u32)(r_esi+0x143cu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0f0b: je 0x8c0f1f */ if (fZ) goto L_008c0f1f;
L_008c0f0d:; BB(0x008c0f0d);
    /* 008c0f0d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c0f0f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c0f13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f19: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c0f1fu); call_ind(t); }
L_008c0f1f:; BB(0x008c0f1f);
    /* 008c0f1f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c0f21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f22: call dword ptr [0x8f82d4] */ { u32 t = R32((u32)(0x8f82d4u)); r_esp -= 4; W32(r_esp, 0x8c0f28u); call_ind(t); }
    /* 008c0f28: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c0f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f2b: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c0f31u); call_ind(t); }
    /* 008c0f31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c0f32: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 008c0f38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008c0f39:; BB(0x008c0f39);
    /* 008c0f39: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c0f3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0f3d: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c0f43u); call_ind(t); }
    /* 008c0f43: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c0f47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c0f48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c0f4f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c0f52: ret  */ FN_RET(0x008c0dc0); r_esp += 4; return;
}

void f_008c0fb0(void) /* sub_8C0FB0 */
{
    FN_ENTER(0x008c0fb0);
    /* 008c0fb0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c0fb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fb4: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c0fb8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c0fbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fbf: mov dword ptr [esp + 0xc], 0xc */ W32((u32)(r_esp+0xcu), 0xcu);
    /* 008c0fc7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c0fcb: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 008c0fd3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c0fd5: call dword ptr [0x8f801c] */ { u32 t = R32((u32)(0x8f801cu)); r_esp -= 4; W32(r_esp, 0x8c0fdbu); call_ind(t); }
    /* 008c0fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0fdd: je 0x8c0ff6 */ if (fZ) goto L_008c0ff6;
L_008c0fdf:; BB(0x008c0fdf);
    /* 008c0fdf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fe1: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 008c0fe5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c0fe8: call dword ptr [0x8f8018] */ { u32 t = R32((u32)(0x8f8018u)); r_esp -= 4; W32(r_esp, 0x8c0feeu); call_ind(t); }
    /* 008c0fee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c0ff0: je 0x8c0ff6 */ if (fZ) goto L_008c0ff6;
L_008c0ff2:; BB(0x008c0ff2);
    /* 008c0ff2: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
L_008c0ff6:; BB(0x008c0ff6);
    /* 008c0ff6: push 0xa37bf8 */ { u32 v = 0xa37bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0ffb: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1000u); f_008c94e0();
    /* 008c1000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1004: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1006: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1007: call dword ptr [0x8f8178] */ { u32 t = R32((u32)(0x8f8178u)); r_esp -= 4; W32(r_esp, 0x8c100du); call_ind(t); }
    /* 008c100d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c100f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c1010: jne 0x8c101e */ if (!fZ) goto L_008c101e;
L_008c1012:; BB(0x008c1012);
    /* 008c1012: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c1018u); call_ind(t); }
    /* 008c1018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c101a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c101d: ret  */ FN_RET(0x008c0fb0); r_esp += 4; return;
L_008c101e:; BB(0x008c101e);
    /* 008c101e: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c1024u); call_ind(t); }
    /* 008c1024: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1026: cmp eax, 0xb7 */ {  u32 a = r_eax; u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c102b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008c102e: mov eax, ecx */ r_eax = r_ecx;
    /* 008c1030: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c1033: ret  */ FN_RET(0x008c0fb0); r_esp += 4; return;
}

