#include "protos.h"

void f_008bf000(void)
{
    FN_ENTER(0x008bf000);
    /* 008bf000: sbb al, 0xf9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bf002: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bf003: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bf005: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bf007: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x008bf009, "falls out of decoded code");
}

void f_008bfa50(void)
{
    FN_ENTER(0x008bfa50);
    /* 008bfa50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfa51: clc  */ fC = 0;
    /* 008bfa52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfa53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa57: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfa61: clc  */ fC = 0;
    /* 008bfa62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfa63: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa65: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa67: add byte ptr [ecx + eax], cl */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfa71: clc  */ fC = 0;
    /* 008bfa72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfa73: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa75: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa77: add byte ptr [edx + eax], cl */ { u32 ad = (u32)(r_edx+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfa81: clc  */ fC = 0;
    /* 008bfa82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfa83: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa85: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa87: add byte ptr [ebx + eax], cl */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfa91: clc  */ fC = 0;
    /* 008bfa92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfa93: add byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfa98: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfa9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaa0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfaa1: clc  */ fC = 0;
    /* 008bfaa2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfaa3: add byte ptr [0xc000000], al */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaa9: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bfaae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfab0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfab1: clc  */ fC = 0;
    /* 008bfab2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfab3: add byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfab5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfab7: add byte ptr [esi + eax], cl */ { u32 ad = (u32)(r_esi+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfac0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfac1: clc  */ fC = 0;
    /* 008bfac2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfac3: add byte ptr [edi], al */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfac5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfac7: add byte ptr [edi + eax], cl */ { u32 ad = (u32)(r_edi+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfad0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfad1: clc  */ fC = 0;
    /* 008bfad2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfad3: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfad5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfad7: add byte ptr [eax + ecx], cl */ { u32 ad = (u32)(r_eax+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfada: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfae0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfae1: clc  */ fC = 0;
    /* 008bfae2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfae3: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfae5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfae7: add byte ptr [ecx + ecx], cl */ { u32 ad = (u32)(r_ecx+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfaf1: clc  */ fC = 0;
    /* 008bfaf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfaf3: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfaf7: add byte ptr [edx + ecx], cl */ { u32 ad = (u32)(r_edx+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfafa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb01: clc  */ fC = 0;
    /* 008bfb02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb03: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb07: add byte ptr [ebx + ecx], cl */ { u32 ad = (u32)(r_ebx+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb11: clc  */ fC = 0;
    /* 008bfb12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb13: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb18: or al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfb1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb21: clc  */ fC = 0;
    /* 008bfb22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb23: add byte ptr [0xc000000], cl */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb29: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bfb2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb31: clc  */ fC = 0;
    /* 008bfb32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb33: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb37: add byte ptr [esi + ecx], cl */ { u32 ad = (u32)(r_esi+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb41: clc  */ fC = 0;
    /* 008bfb42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb43: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb47: add byte ptr [edi + ecx], cl */ { u32 ad = (u32)(r_edi+r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb51: clc  */ fC = 0;
    /* 008bfb52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb53: add byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb57: add byte ptr [eax + edx], cl */ { u32 ad = (u32)(r_eax+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb61: clc  */ fC = 0;
    /* 008bfb62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb63: add byte ptr [ecx], dl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb65: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb67: add byte ptr [ecx + edx], cl */ { u32 ad = (u32)(r_ecx+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb71: clc  */ fC = 0;
    /* 008bfb72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb73: add byte ptr [edx], dl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb75: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb77: add byte ptr [edx + edx], cl */ { u32 ad = (u32)(r_edx+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb81: clc  */ fC = 0;
    /* 008bfb82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb83: add byte ptr [ebx], dl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb85: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb87: add byte ptr [ebx + edx], cl */ { u32 ad = (u32)(r_ebx+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfb91: clc  */ fC = 0;
    /* 008bfb92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfb93: add byte ptr [eax + eax], dl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfb98: or al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfb9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfba0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfba1: clc  */ fC = 0;
    /* 008bfba2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfba3: add byte ptr [0xc000000], dl */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008bfba9: adc eax, 0x8000 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 008bfbae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfbb1: clc  */ fC = 0;
    /* 008bfbb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfbb3: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbb5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbb7: add byte ptr [esi + edx], cl */ { u32 ad = (u32)(r_esi+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfbc1: clc  */ fC = 0;
    /* 008bfbc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfbc3: add byte ptr [edi], dl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbc5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbc7: add byte ptr [edi + edx], cl */ { u32 ad = (u32)(r_edi+r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfbd1: clc  */ fC = 0;
    /* 008bfbd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfbd3: add byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbd5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbd7: add byte ptr [eax + ebx], cl */ { u32 ad = (u32)(r_eax+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbe0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfbe1: clc  */ fC = 0;
    /* 008bfbe2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfbe3: add byte ptr [ecx], bl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbe5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbe7: add byte ptr [ecx + ebx], cl */ { u32 ad = (u32)(r_ecx+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfbf1: clc  */ fC = 0;
    /* 008bfbf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfbf3: add byte ptr [edx], bl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbf7: add byte ptr [edx + ebx], cl */ { u32 ad = (u32)(r_edx+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfbfa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc01: clc  */ fC = 0;
    /* 008bfc02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc03: add byte ptr [ebx], bl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc07: add byte ptr [ebx + ebx], cl */ { u32 ad = (u32)(r_ebx+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc11: clc  */ fC = 0;
    /* 008bfc12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc13: add byte ptr [eax + eax], bl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc18: or al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfc1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc21: clc  */ fC = 0;
    /* 008bfc22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc23: add byte ptr [0xc000000], bl */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 008bfc29: sbb eax, 0x8000 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008bfc2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc31: clc  */ fC = 0;
    /* 008bfc32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc33: add byte ptr [esi], bl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc37: add byte ptr [esi + ebx], cl */ { u32 ad = (u32)(r_esi+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc41: clc  */ fC = 0;
    /* 008bfc42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc43: add byte ptr [edi], bl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc47: add byte ptr [edi + ebx], cl */ { u32 ad = (u32)(r_edi+r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc51: clc  */ fC = 0;
    /* 008bfc52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc53: add byte ptr [eax], ah */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc57: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc61: clc  */ fC = 0;
    /* 008bfc62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc63: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc65: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc67: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc71: clc  */ fC = 0;
    /* 008bfc72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc73: add byte ptr [edx], ah */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc75: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc77: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc81: clc  */ fC = 0;
    /* 008bfc82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc83: add byte ptr [ebx], ah */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc85: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc87: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfc91: clc  */ fC = 0;
    /* 008bfc92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfc93: add byte ptr [eax + eax], ah */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfc98: or al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfc9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfca0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfca1: clc  */ fC = 0;
    /* 008bfca2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfca3: add byte ptr [0xc000000], ah */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfca9: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bfcae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfcb1: clc  */ fC = 0;
    /* 008bfcb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfcb3: add byte ptr [esi], ah */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcb5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcb7: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfcc1: clc  */ fC = 0;
    /* 008bfcc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfcc3: add byte ptr [edi], ah */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcc5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcc7: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfcd1: clc  */ fC = 0;
    /* 008bfcd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfcd3: add byte ptr [eax], ch */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcd5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcd7: add byte ptr [eax + ebp], cl */ { u32 ad = (u32)(r_eax+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfce0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfce1: clc  */ fC = 0;
    /* 008bfce2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfce3: add byte ptr [ecx], ch */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfce5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfce7: add byte ptr [ecx + ebp], cl */ { u32 ad = (u32)(r_ecx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfcf1: clc  */ fC = 0;
    /* 008bfcf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfcf3: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf7: add byte ptr [edx + ebp], cl */ { u32 ad = (u32)(r_edx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcfa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd01: clc  */ fC = 0;
    /* 008bfd02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd03: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd07: add byte ptr [ebx + ebp], cl */ { u32 ad = (u32)(r_ebx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd11: clc  */ fC = 0;
    /* 008bfd12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd13: add byte ptr [eax + eax], ch */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd18: or al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfd1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd21: clc  */ fC = 0;
    /* 008bfd22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd23: add byte ptr [0xc000000], ch */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd29: sub eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bfd2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd31: clc  */ fC = 0;
    /* 008bfd32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd33: add byte ptr [esi], ch */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd37: add byte ptr [esi + ebp], cl */ { u32 ad = (u32)(r_esi+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd41: clc  */ fC = 0;
    /* 008bfd42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd43: add byte ptr [edi], ch */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd47: add byte ptr [edi + ebp], cl */ { u32 ad = (u32)(r_edi+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd51: clc  */ fC = 0;
    /* 008bfd52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd53: add byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd57: add byte ptr [eax + esi], cl */ { u32 ad = (u32)(r_eax+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd61: clc  */ fC = 0;
    /* 008bfd62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd63: add byte ptr [ecx], dh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd65: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd67: add byte ptr [ecx + esi], cl */ { u32 ad = (u32)(r_ecx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd71: clc  */ fC = 0;
    /* 008bfd72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd73: add byte ptr [edx], dh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd75: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd77: add byte ptr [edx + esi], cl */ { u32 ad = (u32)(r_edx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd81: clc  */ fC = 0;
    /* 008bfd82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd83: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd85: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd87: add byte ptr [ebx + esi], cl */ { u32 ad = (u32)(r_ebx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd91: clc  */ fC = 0;
    /* 008bfd92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd93: add byte ptr [eax + eax], dh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd98: or al, 0x34 */ {  u32 a = (u8)r_eax; u32 b = 0x34u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfd9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfda0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfda1: clc  */ fC = 0;
    /* 008bfda2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfda3: add byte ptr [0xc000000], dh */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfda9: xor eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bfdae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdb1: clc  */ fC = 0;
    /* 008bfdb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdb3: add byte ptr [esi], dh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb7: add byte ptr [esi + esi], cl */ { u32 ad = (u32)(r_esi+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdc1: clc  */ fC = 0;
    /* 008bfdc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdc3: add byte ptr [edi], dh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc7: add byte ptr [edi + esi], cl */ { u32 ad = (u32)(r_edi+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdd1: clc  */ fC = 0;
    /* 008bfdd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdd3: add byte ptr [eax], bh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd7: add byte ptr [eax + edi], cl */ { u32 ad = (u32)(r_eax+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfde1: clc  */ fC = 0;
    /* 008bfde2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfde3: add byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde7: add byte ptr [ecx + edi], cl */ { u32 ad = (u32)(r_ecx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdf1: clc  */ fC = 0;
    /* 008bfdf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdf3: add byte ptr [edx], bh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf7: add byte ptr [edx + edi], cl */ { u32 ad = (u32)(r_edx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdfa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe01: clc  */ fC = 0;
    /* 008bfe02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe03: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe07: add byte ptr [ebx + edi], cl */ { u32 ad = (u32)(r_ebx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe11: clc  */ fC = 0;
    /* 008bfe12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe13: add byte ptr [eax + eax], bh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe18: or al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe21: clc  */ fC = 0;
    /* 008bfe22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe23: add byte ptr [0xc000000], bh */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe29: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;   }
    /* 008bfe2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe31: clc  */ fC = 0;
    /* 008bfe32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe33: add byte ptr [esi], bh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe37: add byte ptr [esi + edi], cl */ { u32 ad = (u32)(r_esi+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe41: clc  */ fC = 0;
    /* 008bfe42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe43: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe47: add byte ptr [edi + edi], cl */ { u32 ad = (u32)(r_edi+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe51: clc  */ fC = 0;
    /* 008bfe52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe56: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe58: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe61: clc  */ fC = 0;
    /* 008bfe62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe63: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe66: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe68: or al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe71: clc  */ fC = 0;
    /* 008bfe72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe73: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe76: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe78: or al, 0x42 */ {  u32 a = (u8)r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe81: clc  */ fC = 0;
    /* 008bfe82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe83: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe86: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe88: or al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe91: clc  */ fC = 0;
    /* 008bfe92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe93: add byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe97: add byte ptr [esp + eax*2], cl */ { u32 ad = (u32)(r_esp+r_eax*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfea1: clc  */ fC = 0;
    /* 008bfea2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfea3: add byte ptr [ebp], al */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea8: or al, 0x45 */ {  u32 a = (u8)r_eax; u32 b = 0x45u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeaa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfeb1: clc  */ fC = 0;
    /* 008bfeb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfeb3: add byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb8: or al, 0x46 */ {  u32 a = (u8)r_eax; u32 b = 0x46u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfec1: clc  */ fC = 0;
    /* 008bfec2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfec3: add byte ptr [edi], al */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec8: or al, 0x47 */ {  u32 a = (u8)r_eax; u32 b = 0x47u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfed1: clc  */ fC = 0;
    /* 008bfed2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfed3: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed8: or al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfee1: clc  */ fC = 0;
    /* 008bfee2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfee3: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee8: or al, 0x49 */ {  u32 a = (u8)r_eax; u32 b = 0x49u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfef1: clc  */ fC = 0;
    /* 008bfef2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfef3: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef8: or al, 0x4a */ {  u32 a = (u8)r_eax; u32 b = 0x4au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfefa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff01: clc  */ fC = 0;
    /* 008bff02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff03: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff06: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff08: or al, 0x4b */ {  u32 a = (u8)r_eax; u32 b = 0x4bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff11: clc  */ fC = 0;
    /* 008bff12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff13: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff17: add byte ptr [esp + ecx*2], cl */ { u32 ad = (u32)(r_esp+r_ecx*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff21: clc  */ fC = 0;
    /* 008bff22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff23: add byte ptr [ebp], cl */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff26: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff28: or al, 0x4d */ {  u32 a = (u8)r_eax; u32 b = 0x4du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff2a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff31: clc  */ fC = 0;
    /* 008bff32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff33: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff36: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff38: or al, 0x4e */ {  u32 a = (u8)r_eax; u32 b = 0x4eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff41: clc  */ fC = 0;
    /* 008bff42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff43: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff46: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff48: or al, 0x4f */ {  u32 a = (u8)r_eax; u32 b = 0x4fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff51: clc  */ fC = 0;
    /* 008bff52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff53: add byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff56: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff58: or al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff61: clc  */ fC = 0;
    /* 008bff62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff63: add byte ptr [ecx], dl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff66: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff68: or al, 0x51 */ {  u32 a = (u8)r_eax; u32 b = 0x51u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff71: clc  */ fC = 0;
    /* 008bff72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff73: add byte ptr [edx], dl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff76: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff78: or al, 0x52 */ {  u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff81: clc  */ fC = 0;
    /* 008bff82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff83: add byte ptr [ebx], dl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff86: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff88: or al, 0x53 */ {  u32 a = (u8)r_eax; u32 b = 0x53u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff91: clc  */ fC = 0;
    /* 008bff92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff93: add byte ptr [eax + eax], dl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff97: add byte ptr [esp + edx*2], cl */ { u32 ad = (u32)(r_esp+r_edx*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffa1: clc  */ fC = 0;
    /* 008bffa2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffa3: add byte ptr [ebp], dl */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa8: or al, 0x55 */ {  u32 a = (u8)r_eax; u32 b = 0x55u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffaa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffb1: clc  */ fC = 0;
    /* 008bffb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffb3: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb8: or al, 0x56 */ {  u32 a = (u8)r_eax; u32 b = 0x56u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffc1: clc  */ fC = 0;
    /* 008bffc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffc3: add byte ptr [edi], dl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc8: or al, 0x57 */ {  u32 a = (u8)r_eax; u32 b = 0x57u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffd1: clc  */ fC = 0;
    /* 008bffd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffd3: add byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd8: or al, 0x58 */ {  u32 a = (u8)r_eax; u32 b = 0x58u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffe1: clc  */ fC = 0;
    /* 008bffe2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffe3: add byte ptr [ecx], bl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe8: or al, 0x59 */ {  u32 a = (u8)r_eax; u32 b = 0x59u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfff1: clc  */ fC = 0;
    /* 008bfff2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfff3: add byte ptr [edx], bl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff8: or al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfffa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
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

void f_008bfce0(void)
{
    FN_ENTER(0x008bfce0);
    /* 008bfce0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfce1: clc  */ fC = 0;
    /* 008bfce2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfce3: add byte ptr [ecx], ch */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfce5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfce7: add byte ptr [ecx + ebp], cl */ { u32 ad = (u32)(r_ecx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfcf1: clc  */ fC = 0;
    /* 008bfcf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfcf3: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcf7: add byte ptr [edx + ebp], cl */ { u32 ad = (u32)(r_edx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfcfa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd01: clc  */ fC = 0;
    /* 008bfd02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd03: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd07: add byte ptr [ebx + ebp], cl */ { u32 ad = (u32)(r_ebx+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd11: clc  */ fC = 0;
    /* 008bfd12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd13: add byte ptr [eax + eax], ch */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd18: or al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfd1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd21: clc  */ fC = 0;
    /* 008bfd22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd23: add byte ptr [0xc000000], ch */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd29: sub eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bfd2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd31: clc  */ fC = 0;
    /* 008bfd32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd33: add byte ptr [esi], ch */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd37: add byte ptr [esi + ebp], cl */ { u32 ad = (u32)(r_esi+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd41: clc  */ fC = 0;
    /* 008bfd42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd43: add byte ptr [edi], ch */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd47: add byte ptr [edi + ebp], cl */ { u32 ad = (u32)(r_edi+r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd51: clc  */ fC = 0;
    /* 008bfd52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd53: add byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd55: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd57: add byte ptr [eax + esi], cl */ { u32 ad = (u32)(r_eax+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd61: clc  */ fC = 0;
    /* 008bfd62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd63: add byte ptr [ecx], dh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd65: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd67: add byte ptr [ecx + esi], cl */ { u32 ad = (u32)(r_ecx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd71: clc  */ fC = 0;
    /* 008bfd72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd73: add byte ptr [edx], dh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd75: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd77: add byte ptr [edx + esi], cl */ { u32 ad = (u32)(r_edx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd81: clc  */ fC = 0;
    /* 008bfd82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd83: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd85: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd87: add byte ptr [ebx + esi], cl */ { u32 ad = (u32)(r_ebx+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfd91: clc  */ fC = 0;
    /* 008bfd92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfd93: add byte ptr [eax + eax], dh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfd98: or al, 0x34 */ {  u32 a = (u8)r_eax; u32 b = 0x34u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfd9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfda0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfda1: clc  */ fC = 0;
    /* 008bfda2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfda3: add byte ptr [0xc000000], dh */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfda9: xor eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bfdae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdb1: clc  */ fC = 0;
    /* 008bfdb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdb3: add byte ptr [esi], dh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdb7: add byte ptr [esi + esi], cl */ { u32 ad = (u32)(r_esi+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdc1: clc  */ fC = 0;
    /* 008bfdc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdc3: add byte ptr [edi], dh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdc7: add byte ptr [edi + esi], cl */ { u32 ad = (u32)(r_edi+r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdd1: clc  */ fC = 0;
    /* 008bfdd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdd3: add byte ptr [eax], bh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdd7: add byte ptr [eax + edi], cl */ { u32 ad = (u32)(r_eax+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfde1: clc  */ fC = 0;
    /* 008bfde2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfde3: add byte ptr [ecx], bh */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfde7: add byte ptr [ecx + edi], cl */ { u32 ad = (u32)(r_ecx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfdf1: clc  */ fC = 0;
    /* 008bfdf2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfdf3: add byte ptr [edx], bh */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdf7: add byte ptr [edx + edi], cl */ { u32 ad = (u32)(r_edx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfdfa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe01: clc  */ fC = 0;
    /* 008bfe02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe03: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe05: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe07: add byte ptr [ebx + edi], cl */ { u32 ad = (u32)(r_ebx+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe11: clc  */ fC = 0;
    /* 008bfe12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe13: add byte ptr [eax + eax], bh */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe16: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe18: or al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe21: clc  */ fC = 0;
    /* 008bfe22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe23: add byte ptr [0xc000000], bh */ { u32 ad = (u32)(0xc000000u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe29: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;   }
    /* 008bfe2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe31: clc  */ fC = 0;
    /* 008bfe32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe33: add byte ptr [esi], bh */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe35: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe37: add byte ptr [esi + edi], cl */ { u32 ad = (u32)(r_esi+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe41: clc  */ fC = 0;
    /* 008bfe42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe43: add byte ptr [edi], bh */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe47: add byte ptr [edi + edi], cl */ { u32 ad = (u32)(r_edi+r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe51: clc  */ fC = 0;
    /* 008bfe52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe56: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe58: or al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe61: clc  */ fC = 0;
    /* 008bfe62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe63: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe66: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe68: or al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe71: clc  */ fC = 0;
    /* 008bfe72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe73: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe76: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe78: or al, 0x42 */ {  u32 a = (u8)r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe81: clc  */ fC = 0;
    /* 008bfe82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe83: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe86: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe88: or al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfe8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfe91: clc  */ fC = 0;
    /* 008bfe92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfe93: add byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe97: add byte ptr [esp + eax*2], cl */ { u32 ad = (u32)(r_esp+r_eax*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfe9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfea1: clc  */ fC = 0;
    /* 008bfea2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfea3: add byte ptr [ebp], al */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfea8: or al, 0x45 */ {  u32 a = (u8)r_eax; u32 b = 0x45u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeaa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfeb1: clc  */ fC = 0;
    /* 008bfeb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfeb3: add byte ptr [esi], al */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfeb8: or al, 0x46 */ {  u32 a = (u8)r_eax; u32 b = 0x46u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfec1: clc  */ fC = 0;
    /* 008bfec2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfec3: add byte ptr [edi], al */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfec8: or al, 0x47 */ {  u32 a = (u8)r_eax; u32 b = 0x47u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfed1: clc  */ fC = 0;
    /* 008bfed2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfed3: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfed8: or al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfee1: clc  */ fC = 0;
    /* 008bfee2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfee3: add byte ptr [ecx], cl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfee8: or al, 0x49 */ {  u32 a = (u8)r_eax; u32 b = 0x49u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfeea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfef1: clc  */ fC = 0;
    /* 008bfef2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfef3: add byte ptr [edx], cl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfef8: or al, 0x4a */ {  u32 a = (u8)r_eax; u32 b = 0x4au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfefa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff00: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff01: clc  */ fC = 0;
    /* 008bff02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff03: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff06: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff08: or al, 0x4b */ {  u32 a = (u8)r_eax; u32 b = 0x4bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff0a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff10: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff11: clc  */ fC = 0;
    /* 008bff12: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff13: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff17: add byte ptr [esp + ecx*2], cl */ { u32 ad = (u32)(r_esp+r_ecx*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff1a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff20: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff21: clc  */ fC = 0;
    /* 008bff22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff23: add byte ptr [ebp], cl */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff26: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff28: or al, 0x4d */ {  u32 a = (u8)r_eax; u32 b = 0x4du; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff2a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff30: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff31: clc  */ fC = 0;
    /* 008bff32: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff33: add byte ptr [esi], cl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff36: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff38: or al, 0x4e */ {  u32 a = (u8)r_eax; u32 b = 0x4eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff40: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff41: clc  */ fC = 0;
    /* 008bff42: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff43: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff46: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff48: or al, 0x4f */ {  u32 a = (u8)r_eax; u32 b = 0x4fu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff4a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff51: clc  */ fC = 0;
    /* 008bff52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff53: add byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff56: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff58: or al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff5a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff60: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff61: clc  */ fC = 0;
    /* 008bff62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff63: add byte ptr [ecx], dl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff66: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff68: or al, 0x51 */ {  u32 a = (u8)r_eax; u32 b = 0x51u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff70: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff71: clc  */ fC = 0;
    /* 008bff72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff73: add byte ptr [edx], dl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff76: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff78: or al, 0x52 */ {  u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff7a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff80: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff81: clc  */ fC = 0;
    /* 008bff82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff83: add byte ptr [ebx], dl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff86: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff88: or al, 0x53 */ {  u32 a = (u8)r_eax; u32 b = 0x53u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bff8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff90: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bff91: clc  */ fC = 0;
    /* 008bff92: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bff93: add byte ptr [eax + eax], dl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff97: add byte ptr [esp + edx*2], cl */ { u32 ad = (u32)(r_esp+r_edx*2);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bff9a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffa1: clc  */ fC = 0;
    /* 008bffa2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffa3: add byte ptr [ebp], dl */ { u32 ad = (u32)(r_ebp);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffa8: or al, 0x55 */ {  u32 a = (u8)r_eax; u32 b = 0x55u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffaa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffb1: clc  */ fC = 0;
    /* 008bffb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffb3: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffb8: or al, 0x56 */ {  u32 a = (u8)r_eax; u32 b = 0x56u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffc1: clc  */ fC = 0;
    /* 008bffc2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffc3: add byte ptr [edi], dl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffc8: or al, 0x57 */ {  u32 a = (u8)r_eax; u32 b = 0x57u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffd1: clc  */ fC = 0;
    /* 008bffd2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffd3: add byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffd8: or al, 0x58 */ {  u32 a = (u8)r_eax; u32 b = 0x58u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffda: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bffe1: clc  */ fC = 0;
    /* 008bffe2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bffe3: add byte ptr [ecx], bl */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bffe8: or al, 0x59 */ {  u32 a = (u8)r_eax; u32 b = 0x59u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bffea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff0: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 008bfff1: clc  */ fC = 0;
    /* 008bfff2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008bfff3: add byte ptr [edx], bl */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008bfff8: or al, 0x5a */ {  u32 a = (u8)r_eax; u32 b = 0x5au; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bfffa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
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

