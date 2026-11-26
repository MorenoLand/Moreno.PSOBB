#include "protos.h"

void f_004ff9a8(void) /* nullsub_8 */
{
    FN_ENTER(0x004ff9a8);
    /* 004ff9a8: ret 0xc */ FN_RET(0x004ff9a8); r_esp += 16; return;
}

void f_00544553(void) /* nullsub_6 */
{
    FN_ENTER(0x00544553);
    /* 00544553: retf 0 */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00544556: add byte ptr [eax], 0x25 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x25u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x00544559, "falls out of decoded code");
}

void f_00618a44(void) /* nullsub_1 */
{
    FN_ENTER(0x00618a44);
    /* 00618a44: ret 8 */ FN_RET(0x00618a44); r_esp += 12; return;
}

void f_0061cdb0(void) /* nullsub_2 */
{
    FN_ENTER(0x0061cdb0);
    /* 0061cdb0: ret  */ FN_RET(0x0061cdb0); r_esp += 4; return;
}

void f_00646461(void) /* nullsub_7 */
{
    FN_ENTER(0x00646461);
    /* 00646461: ret  */ FN_RET(0x00646461); r_esp += 4; return;
}

void f_00779df0(void) /* nullsub_3 */
{
    FN_ENTER(0x00779df0);
    /* 00779df0: ret 4 */ FN_RET(0x00779df0); r_esp += 8; return;
}

void f_0084d183(void) /* nullsub_9 */
{
    FN_ENTER(0x0084d183);
    /* 0084d183: ret  */ FN_RET(0x0084d183); r_esp += 4; return;
}

void f_0084d1ab(void) /* nullsub_10 */
{
    FN_ENTER(0x0084d1ab);
    /* 0084d1ab: ret  */ FN_RET(0x0084d1ab); r_esp += 4; return;
}

void f_0084d1d3(void) /* nullsub_11 */
{
    FN_ENTER(0x0084d1d3);
    /* 0084d1d3: ret  */ FN_RET(0x0084d1d3); r_esp += 4; return;
}

void f_0084d1fb(void) /* nullsub_12 */
{
    FN_ENTER(0x0084d1fb);
    /* 0084d1fb: ret  */ FN_RET(0x0084d1fb); r_esp += 4; return;
}

void f_00857d95(void) /* nullsub_4 */
{
    FN_ENTER(0x00857d95);
    /* 00857d95: ret  */ FN_RET(0x00857d95); r_esp += 4; return;
}

void f_0085ad10(void) /* nullsub_13 */
{
    FN_ENTER(0x0085ad10);
    /* 0085ad10: ret  */ FN_RET(0x0085ad10); r_esp += 4; return;
}

void f_0086b323(void) /* nullsub_14 */
{
    FN_ENTER(0x0086b323);
    /* 0086b323: ret  */ FN_RET(0x0086b323); r_esp += 4; return;
}

void f_0086b5cb(void) /* nullsub_15 */
{
    FN_ENTER(0x0086b5cb);
    /* 0086b5cb: ret  */ FN_RET(0x0086b5cb); r_esp += 4; return;
}

void f_0086b6af(void) /* nullsub_16 */
{
    FN_ENTER(0x0086b6af);
    /* 0086b6af: ret  */ FN_RET(0x0086b6af); r_esp += 4; return;
}

void f_0086b78f(void) /* nullsub_17 */
{
    FN_ENTER(0x0086b78f);
    /* 0086b78f: ret  */ FN_RET(0x0086b78f); r_esp += 4; return;
}

void f_0088ac8f(void) /* nullsub_18 */
{
    FN_ENTER(0x0088ac8f);
    /* 0088ac8f: ret  */ FN_RET(0x0088ac8f); r_esp += 4; return;
}

void f_0088c527(void) /* nullsub_19 */
{
    FN_ENTER(0x0088c527);
    /* 0088c527: ret  */ FN_RET(0x0088c527); r_esp += 4; return;
}

void f_0088cd17(void) /* nullsub_20 */
{
    FN_ENTER(0x0088cd17);
    /* 0088cd17: ret  */ FN_RET(0x0088cd17); r_esp += 4; return;
}

void f_00899f7e(void) /* nullsub_21 */
{
    FN_ENTER(0x00899f7e);
    /* 00899f7e: ret 0xc */ FN_RET(0x00899f7e); r_esp += 16; return;
}

void f_008c0674(void) /* nullsub_22 */
{
    FN_ENTER(0x008c0674);
    /* 008c0674: ret 0 */ FN_RET(0x008c0674); r_esp += 4; return;
}

void f_008c0684(void) /* nullsub_23 */
{
    FN_ENTER(0x008c0684);
    /* 008c0684: ret  */ FN_RET(0x008c0684); r_esp += 4; return;
}

void f_008c06f4(void) /* nullsub_24 */
{
    FN_ENTER(0x008c06f4);
    /* 008c06f4: retf 0 */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
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

void f_008c0704(void) /* nullsub_25 */
{
    FN_ENTER(0x008c0704);
    /* 008c0704: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
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

void f_008c76b0(void) /* nullsub_5 */
{
    FN_ENTER(0x008c76b0);
    /* 008c76b0: ret  */ FN_RET(0x008c76b0); r_esp += 4; return;
}

void f_008c9b4f(void) /* nullsub_26 */
{
    FN_ENTER(0x008c9b4f);
    /* 008c9b4f: ret  */ FN_RET(0x008c9b4f); r_esp += 4; return;
}

void f_008c9b77(void) /* nullsub_27 */
{
    FN_ENTER(0x008c9b77);
    /* 008c9b77: ret  */ FN_RET(0x008c9b77); r_esp += 4; return;
}

void f_008c9b9f(void) /* nullsub_28 */
{
    FN_ENTER(0x008c9b9f);
    /* 008c9b9f: ret  */ FN_RET(0x008c9b9f); r_esp += 4; return;
}

void f_008c9bc7(void) /* nullsub_29 */
{
    FN_ENTER(0x008c9bc7);
    /* 008c9bc7: ret  */ FN_RET(0x008c9bc7); r_esp += 4; return;
}

void f_008c9bef(void) /* nullsub_30 */
{
    FN_ENTER(0x008c9bef);
    /* 008c9bef: ret  */ FN_RET(0x008c9bef); r_esp += 4; return;
}

void f_008cb168(void) /* nullsub_31 */
{
    FN_ENTER(0x008cb168);
    /* 008cb168: ret  */ FN_RET(0x008cb168); r_esp += 4; return;
}

