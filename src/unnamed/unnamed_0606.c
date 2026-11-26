#include "protos.h"

void f_00606054(void) /* sub_606054 */
{
    FN_ENTER(0x00606054);
    /* 00606054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606055: mov ebp, esp */ r_ebp = r_esp;
    /* 00606057: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606059: push 0x8deef8 */ { u32 v = 0x8deef8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060605e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00606064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606065: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060606c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060606f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00606072: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00606075: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00606078: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060607b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060607e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606081: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00606084: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00606087: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60608cu); f_00609010();
    /* 0060608c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606093: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606096: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606099: mov dword ptr [ecx], 0xb1dc00 */ W32((u32)(r_ecx), 0xb1dc00u);
    /* 0060609f: mov eax, dword ptr [0x9c3e84] */ r_eax = R32((u32)(0x9c3e84u));
    /* 006060a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006060a5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006060a8: call dword ptr [0xb1dd4c] */ { u32 t = R32((u32)(0xb1dd4cu)); r_esp -= 4; W32(r_esp, 0x6060aeu); call_ind(t); }
    /* 006060ae: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060b1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006060b4: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006060b7: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006060ba: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006060c0: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006060c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060c9: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006060cf: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 006060d5: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 006060db: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006060e1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006060e7: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006060ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060f0: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006060f6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060f9: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006060ff: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00606102: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00606108: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060610b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00606111: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00606114: mov eax, dword ptr [0xa8e4b0] */ r_eax = R32((u32)(0xa8e4b0u));
    /* 00606119: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060611b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060611e: mov eax, dword ptr [0xa8e4ac] */ r_eax = R32((u32)(0xa8e4acu));
    /* 00606123: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00606126: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60612bu); f_00606bc8();
    /* 0060612b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060612e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606131: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00606134: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606137: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060613a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00606141: mov esp, ebp */ r_esp = r_ebp;
    /* 00606143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606144: ret 8 */ FN_RET(0x00606054); r_esp += 12; return;
}

void f_00606060(void)
{
    FN_ENTER(0x00606060);
    /* 00606060: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00606062: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00606064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606065: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060606c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060606f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00606072: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00606075: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00606078: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060607b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060607e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606081: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00606084: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00606087: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60608cu); f_00609010();
    /* 0060608c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606093: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606096: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606099: mov dword ptr [ecx], 0xb1dc00 */ W32((u32)(r_ecx), 0xb1dc00u);
    /* 0060609f: mov eax, dword ptr [0x9c3e84] */ r_eax = R32((u32)(0x9c3e84u));
    /* 006060a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006060a5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006060a8: call dword ptr [0xb1dd4c] */ { u32 t = R32((u32)(0xb1dd4cu)); r_esp -= 4; W32(r_esp, 0x6060aeu); call_ind(t); }
    /* 006060ae: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060b1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006060b4: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006060b7: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006060ba: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006060c0: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006060c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060c9: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006060cf: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 006060d5: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 006060db: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006060e1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006060e7: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006060ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060f0: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006060f6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006060f9: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006060ff: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00606102: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00606108: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060610b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00606111: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00606114: mov eax, dword ptr [0xa8e4b0] */ r_eax = R32((u32)(0xa8e4b0u));
    /* 00606119: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060611b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060611e: mov eax, dword ptr [0xa8e4ac] */ r_eax = R32((u32)(0xa8e4acu));
    /* 00606123: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00606126: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60612bu); f_00606bc8();
    /* 0060612b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060612e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606131: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00606134: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606137: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060613a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00606141: mov esp, ebp */ r_esp = r_ebp;
    /* 00606143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606144: ret 8 */ FN_RET(0x00606060); r_esp += 12; return;
}

void f_00606148(void) /* sub_606148 */
{
    FN_ENTER(0x00606148);
    /* 00606148: push 0x92ed94 */ { u32 v = 0x92ed94u; r_esp -= 4; W32(r_esp, v); }
    /* 0060614d: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x606152u); f_005b938c();
    /* 00606152: push 0x92eda8 */ { u32 v = 0x92eda8u; r_esp -= 4; W32(r_esp, v); }
    /* 00606157: mov dword ptr [0xa8e4b0], eax */ W32((u32)(0xa8e4b0u), r_eax);
    /* 0060615c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x606161u); f_008009dc();
    /* 00606161: mov dword ptr [0xa8e4ac], eax */ W32((u32)(0xa8e4acu), r_eax);
    /* 00606166: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00606169: ret  */ FN_RET(0x00606148); r_esp += 4; return;
}

void f_0060616c(void) /* sub_60616C */
{
    FN_ENTER(0x0060616c);
    /* 0060616c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060616d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060616f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606171: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x606176u); f_00606190();
    /* 00606176: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060617a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060617c: jne 0x606182 */ if (!fZ) goto L_00606182;
L_0060617e:; BB(0x0060617e);
    /* 0060617e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060617f: ret 4 */ FN_RET(0x0060616c); r_esp += 8; return;
L_00606182:; BB(0x00606182);
    /* 00606182: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00606183: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x606188u); f_005c2f74();
    /* 00606188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00606189: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060618a: ret 4 */ FN_RET(0x0060616c); r_esp += 8; return;
}

void f_00606190(void) /* sub_606190 */
{
    FN_ENTER(0x00606190);
    /* 00606190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606191: mov ebp, esp */ r_ebp = r_esp;
    /* 00606193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606195: push 0x8def14 */ { u32 v = 0x8def14u; r_esp -= 4; W32(r_esp, v); }
    /* 0060619a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006061a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006061a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006061a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006061ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006061ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006061b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006061b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006061b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006061ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006061c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006061c4: mov dword ptr [ecx], 0xb1de00 */ W32((u32)(r_ecx), 0xb1de00u);
    /* 006061ca: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6061cfu); f_007b9c8c();
    /* 006061cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006061d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006061d9: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x6061deu); f_0078638c();
    /* 006061de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006061e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006061e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006061ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006061eb: ret  */ FN_RET(0x00606190); r_esp += 4; return;
}

void f_006061ec(void) /* sub_6061EC */
{
    FN_ENTER(0x006061ec);
    /* 006061ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006061ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006061ef: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 006061f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006061f8: jne 0x606239 */ if (!fZ) goto L_00606239;
L_006061fa:; BB(0x006061fa);
    /* 006061fa: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 006061fd: cmp eax, dword ptr [ebx + 0x38c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606203: je 0x60621f */ if (fZ) goto L_0060621f;
L_00606205:; BB(0x00606205);
    /* 00606205: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606207: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00606209: mov eax, 2 */ r_eax = 0x2u;
    /* 0060620e: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00606215: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606217: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x60621du); call_ind(t); }
    /* 0060621d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060621e: ret  */ FN_RET(0x006061ec); r_esp += 4; return;
L_0060621f:; BB(0x0060621f);
    /* 0060621f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606221: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00606223: mov eax, 1 */ r_eax = 0x1u;
    /* 00606228: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0060622f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606231: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x606237u); call_ind(t); }
    /* 00606237: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00606238: ret  */ FN_RET(0x006061ec); r_esp += 4; return;
L_00606239:; BB(0x00606239);
    /* 00606239: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060623c: jne 0x60627b */ if (!fZ) goto L_0060627b;
L_0060623e:; BB(0x0060623e);
    /* 0060623e: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00606241: mov edx, dword ptr [ebx + 0x38c] */ r_edx = R32((u32)(r_ebx+0x38cu));
    /* 00606247: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606249: je 0x606263 */ if (fZ) goto L_00606263;
L_0060624b:; BB(0x0060624b);
    /* 0060624b: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00606251: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606254: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606255: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606256: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x60625bu); f_007a8c74();
    /* 0060625b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060625e: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00606261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00606262: ret  */ FN_RET(0x006061ec); r_esp += 4; return;
L_00606263:; BB(0x00606263);
    /* 00606263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606265: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00606267: mov eax, 1 */ r_eax = 0x1u;
    /* 0060626c: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00606273: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606275: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x60627bu); call_ind(t); }
L_0060627b:; BB(0x0060627b);
    /* 0060627b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060627c: ret  */ FN_RET(0x006061ec); r_esp += 4; return;
}

void f_00606280(void) /* sub_606280 */
{
    FN_ENTER(0x00606280);
    /* 00606280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00606281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00606282: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606285: mov esi, ecx */ r_esi = r_ecx;
    /* 00606287: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0060628e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606290: je 0x606385 */ if (fZ) goto L_00606385;
L_00606296:; BB(0x00606296);
    /* 00606296: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606299: jne 0x60634f */ if (!fZ) goto L_0060634f;
L_0060629f:; BB(0x0060629f);
    /* 0060629f: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 006062a5: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006062a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006062aa: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x6062afu); f_00772358();
    /* 006062af: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006062b2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006062b4: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 006062ba: mov ecx, esi */ r_ecx = r_esi;
    /* 006062bc: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006062bf: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x6062c2u); call_ind(t); }
    /* 006062c2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006062c4: mov ecx, esi */ r_ecx = r_esi;
    /* 006062c6: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x6062c9u); call_ind(t); }
    /* 006062c9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006062ce: mov ecx, esi */ r_ecx = r_esi;
    /* 006062d0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x6062d5u); f_007aaa30();
    /* 006062d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006062d7: jne 0x6062e9 */ if (!fZ) goto L_006062e9;
L_006062d9:; BB(0x006062d9);
    /* 006062d9: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 006062de: mov ecx, esi */ r_ecx = r_esi;
    /* 006062e0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x6062e5u); f_007aaa30();
    /* 006062e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006062e7: je 0x6062f3 */ if (fZ) goto L_006062f3;
L_006062e9:; BB(0x006062e9);
    /* 006062e9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006062eb: mov ecx, esi */ r_ecx = r_esi;
    /* 006062ed: call dword ptr [eax + 0x170] */ { u32 t = R32((u32)(r_eax+0x170u)); r_esp -= 4; W32(r_esp, 0x6062f3u); call_ind(t); }
L_006062f3:; BB(0x006062f3);
    /* 006062f3: lea edx, [esi + 0x2a4] */ r_edx = (u32)(r_esi+0x2a4u);
    /* 006062f9: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 006062ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606301: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x606306u); f_007a9180();
    /* 00606306: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606309: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0060630f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00606312: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00606318: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0060631b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0060631d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0060631f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606321: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00606322: ja 0x606332 */ if ((!fC&&!fZ)) goto L_00606332;
L_00606324:; BB(0x00606324);
    /* 00606324: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00606327: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060632c: je 0x60647e */ if (fZ) goto L_0060647e;
L_00606332:; BB(0x00606332);
    /* 00606332: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606334: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00606336: mov eax, 3 */ r_eax = 0x3u;
    /* 0060633b: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00606342: mov ecx, esi */ r_ecx = r_esi;
    /* 00606344: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x60634au); call_ind(t); }
    /* 0060634a: jmp 0x60647e */ goto L_0060647e;
L_0060634f:; BB(0x0060634f);
    /* 0060634f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606352: jne 0x60647e */ if (!fZ) goto L_0060647e;
L_00606358:; BB(0x00606358);
    /* 00606358: mov eax, dword ptr [esi + 0x2b0] */ r_eax = R32((u32)(r_esi+0x2b0u));
    /* 0060635e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606361: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606364: jle 0x60637a */ if ((fZ||fS!=fO)) goto L_0060637a;
L_00606366:; BB(0x00606366);
    /* 00606366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00606368: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0060636f: mov dword ptr [esi + 0x2b0], eax */ W32((u32)(r_esi+0x2b0u), r_eax);
    /* 00606375: jmp 0x60647e */ goto L_0060647e;
L_0060637a:; BB(0x0060637a);
    /* 0060637a: mov dword ptr [esi + 0x2b0], eax */ W32((u32)(r_esi+0x2b0u), r_eax);
    /* 00606380: jmp 0x60647e */ goto L_0060647e;
L_00606385:; BB(0x00606385);
    /* 00606385: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0060638d: mov ecx, esi */ r_ecx = r_esi;
    /* 0060638f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00606396: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0060639e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x6063a3u); f_007751b0();
    /* 006063a3: fld dword ptr [0x92f144] */ FPUSH(R_F32((u32)(0x92f144u)));
    /* 006063a9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006063ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006063ad: fmul dword ptr [0x92f140] */ ST(0) = ST(0) * R_F32((u32)(0x92f140u));
    /* 006063b3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006063b5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006063ba: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006063be: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006063c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006063c8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006063cc: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006063d0: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006063d4: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006063d8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006063dc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6063e1u); f_0082d990();
    /* 006063e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006063e3: mov edx, edi */ r_edx = r_edi;
    /* 006063e5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6063eau); f_0082d8bc();
    /* 006063ea: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006063ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006063ee: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006063f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006063f4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6063f9u); f_0082eab8();
    /* 006063f9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6063feu); f_0082da80();
    /* 006063fe: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00606401: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00606405: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00606408: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0060640e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00606410: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00606412: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00606414: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00606417: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0060641b: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 0060641e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x606423u); f_0082ebac();
    /* 00606423: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00606426: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00606429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060642a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060642b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x606430u); f_007a9180();
    /* 00606430: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606433: fcomp dword ptr [0x92f13c] */ fx_compare(ST(0), R_F32((u32)(0x92f13cu))); FPOP();
    /* 00606439: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060643b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0060643c: jbe 0x60647e */ if ((fC||fZ)) goto L_0060647e;
L_0060643e:; BB(0x0060643e);
    /* 0060643e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606440: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00606444: mov ecx, esi */ r_ecx = r_esi;
    /* 00606446: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060644a: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060644e: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x606453u); f_00771c8c();
    /* 00606453: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00606455: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0060645f: mov eax, 1 */ r_eax = 0x1u;
    /* 00606464: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0060646b: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00606475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606476: mov ecx, esi */ r_ecx = r_esi;
    /* 00606478: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x60647eu); call_ind(t); }
L_0060647e:; BB(0x0060647e);
    /* 0060647e: mov ecx, esi */ r_ecx = r_esi;
    /* 00606480: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606485u); f_007b6880();
    /* 00606485: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00606488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00606489: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060648a: ret  */ FN_RET(0x00606280); r_esp += 4; return;
}

void f_0060648c(void) /* sub_60648C */
{
    FN_ENTER(0x0060648c);
    /* 0060648c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060648d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060648f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606491: push 0x8def5c */ { u32 v = 0x8def5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00606496: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060649c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060649d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006064a4: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006064a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006064aa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006064ad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006064b0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006064b3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006064b6: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x6064bbu); f_00770738();
    /* 006064bb: mov esi, eax */ r_esi = r_eax;
    /* 006064bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006064c0: movzx ecx, word ptr [edx + 0x94] */ r_ecx = (u32)R16((u32)(r_edx+0x94u));
    /* 006064c7: cmp ecx, dword ptr [0xa9c4f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006064cd: je 0x6064e4 */ if (fZ) goto L_006064e4;
L_006064cf:; BB(0x006064cf);
    /* 006064cf: mov ecx, edx */ r_ecx = r_edx;
    /* 006064d1: mov ebx, 3 */ r_ebx = 0x3u;
    /* 006064d6: mov edx, 3 */ r_edx = 0x3u;
    /* 006064db: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 006064e2: jmp 0x6064f9 */ goto L_006064f9;
L_006064e4:; BB(0x006064e4);
    /* 006064e4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006064e6: je 0x6064cf */ if (fZ) goto L_006064cf;
L_006064e8:; BB(0x006064e8);
    /* 006064e8: mov ecx, dword ptr [edx + 0x3b0] */ r_ecx = R32((u32)(r_edx+0x3b0u));
    /* 006064ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006064f0: jle 0x6064cf */ if ((fZ||fS!=fO)) goto L_006064cf;
L_006064f2:; BB(0x006064f2);
    /* 006064f2: movsx ebx, word ptr [edx + 0x330] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x330u));
L_006064f9:; BB(0x006064f9);
    /* 006064f9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006064fb: je 0x6068b9 */ if (fZ) goto L_006068b9;
L_00606501:; BB(0x00606501);
    /* 00606501: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606504: je 0x60666e */ if (fZ) goto L_0060666e;
L_0060650a:; BB(0x0060650a);
    /* 0060650a: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060650d: jne 0x606627 */ if (!fZ) goto L_00606627;
L_00606513:; BB(0x00606513);
    /* 00606513: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606516: mov ecx, dword ptr [edx + 0x3b8] */ r_ecx = R32((u32)(r_edx+0x3b8u));
    /* 0060651c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060651e: je 0x60661a */ if (fZ) goto L_0060661a;
L_00606524:; BB(0x00606524);
    /* 00606524: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606529u); f_008173b4();
    /* 00606529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060652b: jne 0x606611 */ if (!fZ) goto L_00606611;
L_00606531:; BB(0x00606531);
    /* 00606531: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606534: mov dword ptr [ecx + 0x2b0], 0 */ W32((u32)(r_ecx+0x2b0u), 0x0u);
    /* 0060653e: mov edx, 3 */ r_edx = 0x3u;
    /* 00606543: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 0060654a: mov edx, dword ptr [ecx + 0x3b4] */ r_edx = R32((u32)(r_ecx+0x3b4u));
    /* 00606550: cmp edx, 0x3e9 */ {  u32 a = r_edx; u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606556: jge 0x60655f */ if ((fS==fO)) goto L_0060655f;
L_00606558:; BB(0x00606558);
    /* 00606558: call 0x4d7e4c */ r_esp -= 4; W32(r_esp, 0x60655du); f_004d7e4c();
    /* 0060655d: jmp 0x6065ac */ goto L_006065ac;
L_0060655f:; BB(0x0060655f);
    /* 0060655f: cmp edx, 0x3ea */ {  u32 a = r_edx; u32 b = 0x3eau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606565: jle 0x60657f */ if ((fZ||fS!=fO)) goto L_0060657f;
L_00606567:; BB(0x00606567);
    /* 00606567: cmp edx, 0x41a */ {  u32 a = r_edx; u32 b = 0x41au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060656d: jl 0x606558 */ if ((fS!=fO)) goto L_00606558;
L_0060656f:; BB(0x0060656f);
    /* 0060656f: cmp edx, 0x41b */ {  u32 a = r_edx; u32 b = 0x41bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606575: jle 0x60657f */ if ((fZ||fS!=fO)) goto L_0060657f;
L_00606577:; BB(0x00606577);
    /* 00606577: cmp edx, 0x41f */ {  u32 a = r_edx; u32 b = 0x41fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060657d: jne 0x606558 */ if (!fZ) goto L_00606558;
L_0060657f:; BB(0x0060657f);
    /* 0060657f: call 0x4d5f70 */ r_esp -= 4; W32(r_esp, 0x606584u); f_004d5f70();
    /* 00606584: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606587: mov ecx, dword ptr [edx + 0x3bc] */ r_ecx = R32((u32)(r_edx+0x3bcu));
    /* 0060658d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060658f: je 0x6065ac */ if (fZ) goto L_006065ac;
L_00606591:; BB(0x00606591);
    /* 00606591: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00606595: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0060659b: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0060659f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006065a2: mov dword ptr [ecx + 0x3bc], 0 */ W32((u32)(r_ecx+0x3bcu), 0x0u);
L_006065ac:; BB(0x006065ac);
    /* 006065ac: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006065ae: je 0x606889 */ if (fZ) goto L_00606889;
L_006065b4:; BB(0x006065b4);
    /* 006065b4: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 006065ba: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006065be: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006065c0: jne 0x606889 */ if (!fZ) goto L_00606889;
L_006065c6:; BB(0x006065c6);
    /* 006065c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006065c7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6065ccu); f_0068d5a8();
    /* 006065cc: mov ebx, eax */ r_ebx = r_eax;
    /* 006065ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006065d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006065d3: je 0x6065fb */ if (fZ) goto L_006065fb;
L_006065d5:; BB(0x006065d5);
    /* 006065d5: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006065db: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006065de: je 0x6065e7 */ if (fZ) goto L_006065e7;
L_006065e0:; BB(0x006065e0);
    /* 006065e0: mov edx, 1 */ r_edx = 0x1u;
    /* 006065e5: jmp 0x6065e9 */ goto L_006065e9;
L_006065e7:; BB(0x006065e7);
    /* 006065e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006065e9:; BB(0x006065e9);
    /* 006065e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006065eb: je 0x6065fb */ if (fZ) goto L_006065fb;
L_006065ed:; BB(0x006065ed);
    /* 006065ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006065ef: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6065f4u); f_00685514();
    /* 006065f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006065f6: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x6065fbu); f_00688d54();
L_006065fb:; BB(0x006065fb);
    /* 006065fb: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x606600u); f_00717d48();
    /* 00606600: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606606: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x60660bu); f_00718048();
    /* 0060660b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060660c: jmp 0x606889 */ goto L_00606889;
L_00606611:; BB(0x00606611);
    /* 00606611: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606614: mov ecx, dword ptr [edx + 0x3b8] */ r_ecx = R32((u32)(r_edx+0x3b8u));
L_0060661a:; BB(0x0060661a);
    /* 0060661a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060661c: je 0x606531 */ if (fZ) goto L_00606531;
L_00606622:; BB(0x00606622);
    /* 00606622: jmp 0x606889 */ goto L_00606889;
L_00606627:; BB(0x00606627);
    /* 00606627: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060662a: jne 0x606889 */ if (!fZ) goto L_00606889;
L_00606630:; BB(0x00606630);
    /* 00606630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606633: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00606638: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060663a: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00606641: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00606648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606649: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 00606650: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 00606657: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x60665cu); f_007706b0();
    /* 0060665c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060665f: mov dword ptr [eax + 0x3b8], 0 */ W32((u32)(r_eax+0x3b8u), 0x0u);
    /* 00606669: jmp 0x606889 */ goto L_00606889;
L_0060666e:; BB(0x0060666e);
    /* 0060666e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606671: mov eax, 2 */ r_eax = 0x2u;
    /* 00606676: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 0060667d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x606682u); f_006dc358();
    /* 00606682: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606684: jne 0x606763 */ if (!fZ) goto L_00606763;
L_0060668a:; BB(0x0060668a);
    /* 0060668a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060668d: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 00606693: lea eax, [edx - 0x3e9] */ r_eax = (u32)(r_edx+0xfffffc17u);
    /* 00606699: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060669c: ja 0x606753 */ if ((!fC&&!fZ)) goto L_00606753;
L_006066a2:; BB(0x006066a2);
    /* 006066a2: mov eax, dword ptr [eax*4 + 0x92ef60] */ r_eax = R32((u32)(r_eax*4+0x92ef60u));
    /* 006066a9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00606753:; BB(0x00606753);
    /* 00606753: call 0x4d83f4 */ r_esp -= 4; W32(r_esp, 0x606758u); f_004d83f4();
    /* 00606758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060675b: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 00606761: jmp 0x60676c */ goto L_0060676c;
L_00606763:; BB(0x00606763);
    /* 00606763: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606766: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x0060648c); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
L_006068b9:; BB(0x006068b9);
    /* 006068b9: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 006068bc: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 006068bf: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 006068c2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 006068c5: mov dword ptr [ebp - 0x78], ebx */ W32((u32)(r_ebp+0xffffff88u), r_ebx);
    /* 006068c8: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 006068cb: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 006068ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006068d1: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 006068d4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6068d9u); f_0082f9c4();
    /* 006068d9: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 006068dc: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 006068df: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006068e1: fmul qword ptr [0x92f0f8] */ ST(0) = ST(0) * R_F64((u32)(0x92f0f8u));
    /* 006068e7: fdiv qword ptr [0x92f0f0] */ ST(0) = ST(0) / R_F64((u32)(0x92f0f0u));
    /* 006068ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006068f0: mov edx, dword ptr [edx + 0x3b4] */ r_edx = R32((u32)(r_edx+0x3b4u));
    /* 006068f6: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 006068f9: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 006068fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606902: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00606905: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00606908: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0060690b: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0060690e: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00606911: lea ecx, [edx - 0x3e9] */ r_ecx = (u32)(r_edx+0xfffffc17u);
    /* 00606917: cmp ecx, 0x62 */ {  u32 a = r_ecx; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0060691a: ja 0x60698a */ if ((!fC&&!fZ)) goto L_0060698a;
L_0060691c:; BB(0x0060691c);
    /* 0060691c: mov edx, dword ptr [edx*4 + 0x92de1c] */ r_edx = R32((u32)(r_edx*4+0x92de1cu));
    /* 00606923: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0060698a:; BB(0x0060698a);
    /* 0060698a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060698d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060698e: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606991: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x606996u); f_007a9018();
    /* 00606996: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606999: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060699c: mov ecx, dword ptr [edx + 0x358] */ r_ecx = R32((u32)(r_edx+0x358u));
    /* 006069a2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006069a5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006069a7: jge 0x606a16 */ if ((fS==fO)) goto L_00606a16;
L_006069a9:; BB(0x006069a9);
    /* 006069a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006069ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006069ae: mov edx, 1 */ r_edx = 0x1u;
    /* 006069b3: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 006069ba: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 006069bd: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006069bf: call dword ptr [ebx + 0x168] */ { u32 t = R32((u32)(r_ebx+0x168u)); r_esp -= 4; W32(r_esp, 0x6069c5u); call_ind(t); }
    /* 006069c5: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 006069c9: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006069cc: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006069cf: mov word ptr [ebp - 0x52], di */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edi);
    /* 006069d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006069d5: mov byte ptr [ebp - 0x54], 0x3e */ W8((u32)(r_ebp+0xffffffacu), 0x3eu);
    /* 006069d9: mov word ptr [ebp - 0x50], dx */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_edx);
    /* 006069dd: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006069e0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006069e3: mov byte ptr [ebp - 0x53], 6 */ W8((u32)(r_ebp+0xffffffadu), 0x6u);
    /* 006069e7: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006069ec: mov word ptr [ebp - 0x4c], bx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_ebx);
    /* 006069f0: mov word ptr [ebp - 0x4a], bx */ W16((u32)(r_ebp+0xffffffb6u), (u16)r_ebx);
    /* 006069f4: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006069f7: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006069fa: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006069fd: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00606a00: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606a05: mov word ptr [ebp - 0x4e], ax */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_eax);
    /* 00606a09: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00606a0c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x606a11u); f_008003e0();
    /* 00606a11: jmp 0x606889 */ goto L_00606889;
L_00606a16:; BB(0x00606a16);
    /* 00606a16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a1b: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606a1e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x606a23u); f_007a8c74();
    /* 00606a23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606a26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606a29: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00606a2c: jmp 0x606889 */ goto L_00606889;
}

void f_006066ab(void)
{
    FN_ENTER(0x006066ab);
    /* 006066ab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006066ad: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6066b2u); f_004d5ff0();
    /* 006066b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006066b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006066b6: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 006066bc: call 0x4d5f58 */ r_esp -= 4; W32(r_esp, 0x6066c1u); f_004d5f58();
    /* 006066c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006066c4: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 006066ca: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x006066ab); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_006066cf(void)
{
    FN_ENTER(0x006066cf);
    /* 006066cf: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 006066d1: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6066d6u); f_004d5ff0();
    /* 006066d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006066d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006066da: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 006066e0: call 0x4d5f58 */ r_esp -= 4; W32(r_esp, 0x6066e5u); f_004d5f58();
    /* 006066e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006066e8: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 006066ee: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x006066cf); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_006066f0(void)
{
    FN_ENTER(0x006066f0);
    /* 006066f0: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006066f2: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6066f7u); f_004d5ff0();
    /* 006066f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006066f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006066fb: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 00606701: call 0x4d5f58 */ r_esp -= 4; W32(r_esp, 0x606706u); f_004d5f58();
    /* 00606706: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606709: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060670f: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x006066f0); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_00606711(void)
{
    FN_ENTER(0x00606711);
    /* 00606711: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00606713: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x606718u); f_004d5ff0();
    /* 00606718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00606719: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060671c: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 00606722: call 0x4d5f58 */ r_esp -= 4; W32(r_esp, 0x606727u); f_004d5f58();
    /* 00606727: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060672a: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 00606730: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x00606711); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_00606732(void)
{
    FN_ENTER(0x00606732);
    /* 00606732: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00606734: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x606739u); f_004d5ff0();
    /* 00606739: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060673a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060673d: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 00606743: call 0x4d5f58 */ r_esp -= 4; W32(r_esp, 0x606748u); f_004d5f58();
    /* 00606748: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060674b: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 00606751: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x00606732); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_00606753(void)
{
    FN_ENTER(0x00606753);
    /* 00606753: call 0x4d83f4 */ r_esp -= 4; W32(r_esp, 0x606758u); f_004d83f4();
    /* 00606758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060675b: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 00606761: jmp 0x60676c */ goto L_0060676c;
L_0060676c:; BB(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x00606753); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_0060676c(void)
{
    FN_ENTER(0x0060676c);
    /* 0060676c: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060676f: jl 0x606805 */ if ((fS!=fO)) goto L_00606805;
L_00606775:; BB(0x00606775);
    /* 00606775: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060677b: jge 0x606805 */ if ((fS==fO)) goto L_00606805;
L_00606781:; BB(0x00606781);
    /* 00606781: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00606787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606789: je 0x606805 */ if (fZ) goto L_00606805;
L_0060678b:; BB(0x0060678b);
    /* 0060678b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x606790u); f_008173b4();
    /* 00606790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606792: jne 0x60679f */ if (!fZ) goto L_0060679f;
L_00606794:; BB(0x00606794);
    /* 00606794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606797: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0060679d: jmp 0x606805 */ goto L_00606805;
L_0060679f:; BB(0x0060679f);
    /* 0060679f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006067a6: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006067ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6067b0u); f_005caba4();
    /* 006067b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006067b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006067b6: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006067b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006067bb: je 0x6068a8 */ if (fZ) goto L_006068a8;
L_006067c1:; BB(0x006067c1);
    /* 006067c1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006067c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006067cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006067d2: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067db: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006067e1: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6067e6u); f_006bc800();
    /* 006067e6: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006067ed:; BB(0x006067ed);
    /* 006067ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006067f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006067f3: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 006067f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606800: jmp 0x606889 */ goto L_00606889;
L_00606805:; BB(0x00606805);
    /* 00606805: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060680b: jl 0x606889 */ if ((fS!=fO)) goto L_00606889;
L_0060680d:; BB(0x0060680d);
    /* 0060680d: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 00606813: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606815: je 0x606889 */ if (fZ) goto L_00606889;
L_00606817:; BB(0x00606817);
    /* 00606817: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x60681cu); f_008173b4();
    /* 0060681c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060681e: je 0x606889 */ if (fZ) goto L_00606889;
L_00606820:; BB(0x00606820);
    /* 00606820: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0060682a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0060682f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x606834u); f_005caba4();
    /* 00606834: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060683a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00606840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606842: je 0x6068b2 */ if (fZ) goto L_006068b2;
L_00606844:; BB(0x00606844);
    /* 00606844: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 0060684e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606858: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060685e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606861: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606867: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x60686cu); f_006bc800();
    /* 0060686c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00606876:; BB(0x00606876);
    /* 00606876: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060687c: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x0060676c); r_esp += 4; return;
L_006068a8:; BB(0x006068a8);
    /* 006068a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068ad: jmp 0x6067ed */ goto L_006067ed;
L_006068b2:; BB(0x006068b2);
    /* 006068b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006068b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006068b7: jmp 0x606876 */ goto L_00606876;
}

void f_00606925(void)
{
    FN_ENTER(0x00606925);
    goto L_00606925;
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x00606925); r_esp += 4; return;
L_00606925:; BB(0x00606925);
    /* 00606925: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060692a: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0060692c: mov edx, 1 */ r_edx = 0x1u;
    /* 00606931: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00606938: call dword ptr [edi + 0x168] */ { u32 t = R32((u32)(r_edi+0x168u)); r_esp -= 4; W32(r_esp, 0x60693eu); call_ind(t); }
    /* 0060693e: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00606942: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00606945: mov byte ptr [ebp - 0x6c], 0x3e */ W8((u32)(r_ebp+0xffffff94u), 0x3eu);
    /* 00606949: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060694b: mov byte ptr [ebp - 0x6b], 6 */ W8((u32)(r_ebp+0xffffff95u), 0x6u);
    /* 0060694f: mov word ptr [ebp - 0x68], dx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_edx);
    /* 00606953: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00606956: mov word ptr [ebp - 0x6a], cx */ W16((u32)(r_ebp+0xffffff96u), (u16)r_ecx);
    /* 0060695a: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0060695d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00606960: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00606965: mov word ptr [ebp - 0x64], di */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edi);
    /* 00606969: mov word ptr [ebp - 0x62], di */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_edi);
    /* 0060696d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00606970: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00606973: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00606979: mov word ptr [ebp - 0x66], bx */ W16((u32)(r_ebp+0xffffff9au), (u16)r_ebx);
    /* 0060697d: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00606980: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x606985u); f_008003e0();
    /* 00606985: jmp 0x606889 */ goto L_00606889;
}

void f_0060698a(void)
{
    FN_ENTER(0x0060698a);
    goto L_0060698a;
L_00606889:; BB(0x00606889);
    /* 00606889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060688c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x606891u); f_007b6880();
    /* 00606891: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606894: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00606897: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060689a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060689d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006068a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006068a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006068a7: ret  */ FN_RET(0x0060698a); r_esp += 4; return;
L_0060698a:; BB(0x0060698a);
    /* 0060698a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060698d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060698e: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606991: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x606996u); f_007a9018();
    /* 00606996: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606999: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060699c: mov ecx, dword ptr [edx + 0x358] */ r_ecx = R32((u32)(r_edx+0x358u));
    /* 006069a2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006069a5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006069a7: jge 0x606a16 */ if ((fS==fO)) goto L_00606a16;
L_006069a9:; BB(0x006069a9);
    /* 006069a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006069ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006069ae: mov edx, 1 */ r_edx = 0x1u;
    /* 006069b3: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 006069ba: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 006069bd: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006069bf: call dword ptr [ebx + 0x168] */ { u32 t = R32((u32)(r_ebx+0x168u)); r_esp -= 4; W32(r_esp, 0x6069c5u); call_ind(t); }
    /* 006069c5: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 006069c9: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 006069cc: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006069cf: mov word ptr [ebp - 0x52], di */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edi);
    /* 006069d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006069d5: mov byte ptr [ebp - 0x54], 0x3e */ W8((u32)(r_ebp+0xffffffacu), 0x3eu);
    /* 006069d9: mov word ptr [ebp - 0x50], dx */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_edx);
    /* 006069dd: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006069e0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006069e3: mov byte ptr [ebp - 0x53], 6 */ W8((u32)(r_ebp+0xffffffadu), 0x6u);
    /* 006069e7: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006069ec: mov word ptr [ebp - 0x4c], bx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_ebx);
    /* 006069f0: mov word ptr [ebp - 0x4a], bx */ W16((u32)(r_ebp+0xffffffb6u), (u16)r_ebx);
    /* 006069f4: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006069f7: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006069fa: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006069fd: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00606a00: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606a05: mov word ptr [ebp - 0x4e], ax */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_eax);
    /* 00606a09: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00606a0c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x606a11u); f_008003e0();
    /* 00606a11: jmp 0x606889 */ goto L_00606889;
L_00606a16:; BB(0x00606a16);
    /* 00606a16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a1b: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606a1e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x606a23u); f_007a8c74();
    /* 00606a23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606a26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606a29: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00606a2c: jmp 0x606889 */ goto L_00606889;
}

void f_00606a34(void) /* sub_606A34 */
{
    FN_ENTER(0x00606a34);
    /* 00606a34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606a37: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00606a3b: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00606a41: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606a43: jg 0x606a4d */ if ((!fZ&&fS==fO)) goto L_00606a4d;
L_00606a45:; BB(0x00606a45);
    /* 00606a45: mov dword ptr [ecx + 0x370], edx */ W32((u32)(r_ecx+0x370u), r_edx);
    /* 00606a4b: jmp 0x606a61 */ goto L_00606a61;
L_00606a4d:; BB(0x00606a4d);
    /* 00606a4d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00606a51: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606a53: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00606a57: jl 0x606a5b */ if ((fS!=fO)) goto L_00606a5b;
L_00606a59:; BB(0x00606a59);
    /* 00606a59: mov eax, edx */ r_eax = r_edx;
L_00606a5b:; BB(0x00606a5b);
    /* 00606a5b: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
L_00606a61:; BB(0x00606a61);
    /* 00606a61: fld dword ptr [0x92f134] */ FPUSH(R_F32((u32)(0x92f134u)));
    /* 00606a67: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 00606a6d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00606a6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606a71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00606a72: jb 0x606aa5 */ if (fC) goto L_00606aa5;
L_00606a74:; BB(0x00606a74);
    /* 00606a74: fld dword ptr [0x92f130] */ FPUSH(R_F32((u32)(0x92f130u)));
    /* 00606a7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00606a7c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606a7f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606a83: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606a88: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606a8c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606a90: fistp dword ptr [ecx + 0x3a8] */ W32((u32)(r_ecx+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606a96: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00606a99: mov dword ptr [ecx + 0x394], 1 */ W32((u32)(r_ecx+0x394u), 0x1u);
    /* 00606aa3: jmp 0x606ac2 */ goto L_00606ac2;
L_00606aa5:; BB(0x00606aa5);
    /* 00606aa5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606aa8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606aac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606ab1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606ab5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606ab9: fistp dword ptr [ecx + 0x3a8] */ W32((u32)(r_ecx+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606abf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_00606ac2:; BB(0x00606ac2);
    /* 00606ac2: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 00606ac8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00606aca: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00606acc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606ace: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00606acf: ja 0x606b02 */ if ((!fC&&!fZ)) goto L_00606b02;
L_00606ad1:; BB(0x00606ad1);
    /* 00606ad1: fld dword ptr [0x92f130] */ FPUSH(R_F32((u32)(0x92f130u)));
    /* 00606ad7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00606ad9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606adc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606ae0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606ae5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606ae9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606aed: fistp dword ptr [ecx + 0x3ac] */ W32((u32)(r_ecx+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00606af3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00606af6: mov dword ptr [ecx + 0x394], 1 */ W32((u32)(r_ecx+0x394u), 0x1u);
    /* 00606b00: jmp 0x606b1f */ goto L_00606b1f;
L_00606b02:; BB(0x00606b02);
    /* 00606b02: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606b05: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606b09: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606b0e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606b12: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606b16: fistp dword ptr [ecx + 0x3ac] */ W32((u32)(r_ecx+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00606b1c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_00606b1f:; BB(0x00606b1f);
    /* 00606b1f: fld dword ptr [ecx + 0x36c] */ FPUSH(R_F32((u32)(r_ecx+0x36cu)));
    /* 00606b25: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606b28: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606b2c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606b31: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606b35: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606b39: fistp dword ptr [ecx + 0x3b0] */ W32((u32)(r_ecx+0x3b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606b3f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00606b42: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 00606b48: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00606b4b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00606b4f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606b54: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00606b58: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00606b5c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606b60: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00606b63: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00606b67: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00606b6a: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 00606b70: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00606b76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00606b78: jle 0x606b8a */ if ((fZ||fS!=fO)) goto L_00606b8a;
L_00606b7a:; BB(0x00606b7a);
    /* 00606b7a: mov dword ptr [ecx + 0x3a0], 0x43c80000 */ W32((u32)(r_ecx+0x3a0u), 0x43c80000u);
    /* 00606b84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00606b87: ret 8 */ FN_RET(0x00606a34); r_esp += 12; return;
L_00606b8a:; BB(0x00606b8a);
    /* 00606b8a: mov dword ptr [ecx + 0x3a0], 0x437a0000 */ W32((u32)(r_ecx+0x3a0u), 0x437a0000u);
    /* 00606b94: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00606b97: ret 8 */ FN_RET(0x00606a34); r_esp += 12; return;
}

void f_00606b9c(void) /* sub_606B9C */
{
    FN_ENTER(0x00606b9c);
    /* 00606b9c: movzx eax, word ptr [ecx + 0x94] */ r_eax = (u32)R16((u32)(r_ecx+0x94u));
    /* 00606ba3: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00606ba8: je 0x606bc7 */ if (fZ) goto L_00606bc7;
L_00606baa:; BB(0x00606baa);
    /* 00606baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606bab: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x606bb0u); f_0068d5a8();
    /* 00606bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00606bb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606bb3: je 0x606bc7 */ if (fZ) goto L_00606bc7;
L_00606bb5:; BB(0x00606bb5);
    /* 00606bb5: push 0x92f160 */ { u32 v = 0x92f160u; r_esp -= 4; W32(r_esp, v); }
    /* 00606bba: push 0x1a0020 */ { u32 v = 0x1a0020u; r_esp -= 4; W32(r_esp, v); }
    /* 00606bbf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x606bc4u); f_0061cdb0();
    /* 00606bc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00606bc7:; BB(0x00606bc7);
    /* 00606bc7: ret  */ FN_RET(0x00606b9c); r_esp += 4; return;
}

void f_00606bc8(void) /* sub_606BC8 */
{
    FN_ENTER(0x00606bc8);
    /* 00606bc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00606bc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00606bcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606bcd: push 0x9c3e8c */ { u32 v = 0x9c3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00606bd2: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x606bd7u); f_00771160();
    /* 00606bd7: mov dword ptr [ebx + 0x358], 0x9c3eb0 */ W32((u32)(r_ebx+0x358u), 0x9c3eb0u);
    /* 00606be1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606be3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606be5: push 0x9c3ecc */ { u32 v = 0x9c3eccu; r_esp -= 4; W32(r_esp, v); }
    /* 00606bea: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x606befu); f_007b9a88();
    /* 00606bef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606bf1: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x606bf6u); f_007b4f54();
    /* 00606bf6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606bf8: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x606bfdu); f_0078730c();
    /* 00606bfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606bff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606c01: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00606c07: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00606c0d: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00606c10: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00606c16: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 00606c19: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 00606c1c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00606c1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606c20: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x606c26u); call_ind(t); }
    /* 00606c26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00606c27: ret  */ FN_RET(0x00606bc8); r_esp += 4; return;
}

void f_00606c28(void) /* sub_606C28 */
{
    FN_ENTER(0x00606c28);
    /* 00606c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00606c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606c2d: push 0x8def78 */ { u32 v = 0x8def78u; r_esp -= 4; W32(r_esp, v); }
    /* 00606c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00606c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00606c40: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00606c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00606c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00606c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00606c4f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606c52: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00606c55: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x606c5au); f_007865e8();
    /* 00606c5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606c61: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00606c64: mov dword ptr [edx], 0xb1de00 */ W32((u32)(r_edx), 0xb1de00u);
    /* 00606c6a: mov eax, dword ptr [0x9c3e88] */ r_eax = R32((u32)(0x9c3e88u));
    /* 00606c6f: mov dword ptr [edx + 0x390], 0 */ W32((u32)(r_edx+0x390u), 0x0u);
    /* 00606c79: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00606c7c: mov dword ptr [edx + 0x398], 1 */ W32((u32)(r_edx+0x398u), 0x1u);
    /* 00606c86: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x606c8bu); f_00807ac0();
    /* 00606c8b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00606c8e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606c91: jne 0x606c9f */ if (!fZ) goto L_00606c9f;
L_00606c93:; BB(0x00606c93);
    /* 00606c93: mov dword ptr [edx + 0x39c], 1 */ W32((u32)(r_edx+0x39cu), 0x1u);
    /* 00606c9d: jmp 0x606ca9 */ goto L_00606ca9;
L_00606c9f:; BB(0x00606c9f);
    /* 00606c9f: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
L_00606ca9:; BB(0x00606ca9);
    /* 00606ca9: fld dword ptr [0x92f124] */ FPUSH(R_F32((u32)(0x92f124u)));
    /* 00606caf: fld dword ptr [edx + 0x360] */ FPUSH(R_F32((u32)(r_edx+0x360u)));
    /* 00606cb5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00606cb7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606cb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00606cbb: mov word ptr [edx + 0x32e], cx */ W16((u32)(r_edx+0x32eu), (u16)r_ecx);
    /* 00606cc2: mov dword ptr [edx + 0x30], 0x44000000 */ W32((u32)(r_edx+0x30u), 0x44000000u);
    /* 00606cc9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00606ccb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00606ccc: jb 0x606cf8 */ if (fC) goto L_00606cf8;
L_00606cce:; BB(0x00606cce);
    /* 00606cce: fld dword ptr [0x92f120] */ FPUSH(R_F32((u32)(0x92f120u)));
    /* 00606cd4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00606cd6: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606cd9: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606cdd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606ce2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606ce5: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606ce8: fistp dword ptr [edx + 0x3a8] */ W32((u32)(r_edx+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606cee: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00606cf1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00606cf6: jmp 0x606d13 */ goto L_00606d13;
L_00606cf8:; BB(0x00606cf8);
    /* 00606cf8: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606cfb: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606cff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606d04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606d07: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606d0a: fistp dword ptr [edx + 0x3a8] */ W32((u32)(r_edx+0x3a8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606d10: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
L_00606d13:; BB(0x00606d13);
    /* 00606d13: fld dword ptr [edx + 0x364] */ FPUSH(R_F32((u32)(r_edx+0x364u)));
    /* 00606d19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00606d1b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00606d1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606d1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00606d20: ja 0x606d51 */ if ((!fC&&!fZ)) goto L_00606d51;
L_00606d22:; BB(0x00606d22);
    /* 00606d22: fld dword ptr [0x92f120] */ FPUSH(R_F32((u32)(0x92f120u)));
    /* 00606d28: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00606d2a: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606d2d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d31: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606d36: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606d39: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606d3c: fistp dword ptr [edx + 0x3ac] */ W32((u32)(r_edx+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00606d42: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d45: mov dword ptr [edx + 0x394], 1 */ W32((u32)(r_edx+0x394u), 0x1u);
    /* 00606d4f: jmp 0x606d72 */ goto L_00606d72;
L_00606d51:; BB(0x00606d51);
    /* 00606d51: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606d54: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d58: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606d5d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606d60: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606d63: fistp dword ptr [edx + 0x3ac] */ W32((u32)(r_edx+0x3acu), (u32)fx_int32(ST(0))); FPOP();
    /* 00606d69: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d6c: mov dword ptr [edx + 0x394], ecx */ W32((u32)(r_edx+0x394u), r_ecx);
L_00606d72:; BB(0x00606d72);
    /* 00606d72: fld dword ptr [edx + 0x36c] */ FPUSH(R_F32((u32)(r_edx+0x36cu)));
    /* 00606d78: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606d7b: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606d84: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606d87: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606d8a: fistp dword ptr [edx + 0x3b0] */ W32((u32)(r_edx+0x3b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606d90: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00606d93: fld dword ptr [edx + 0x368] */ FPUSH(R_F32((u32)(r_edx+0x368u)));
    /* 00606d99: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00606d9c: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00606da0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00606da5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00606da8: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00606dab: fistp dword ptr [edx + 0x3b4] */ W32((u32)(r_edx+0x3b4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00606db1: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00606db4: mov dword ptr [edx + 0x3a0], 0x43c80000 */ W32((u32)(r_edx+0x3a0u), 0x43c80000u);
    /* 00606dbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00606dc0: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 00606dc6: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 00606dcc: mov dword ptr [edx + 0x3a4], 0x41a00000 */ W32((u32)(r_edx+0x3a4u), 0x41a00000u);
    /* 00606dd6: mov dword ptr [edx + 0x98], 2 */ W32((u32)(r_edx+0x98u), 0x2u);
    /* 00606de0: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 00606de6: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00606de9: jne 0x606e06 */ if (!fZ) goto L_00606e06;
L_00606deb:; BB(0x00606deb);
    /* 00606deb: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00606dee: mov ebx, edx */ r_ebx = r_edx;
    /* 00606df0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606df2: je 0x606e06 */ if (fZ) goto L_00606e06;
L_00606df4:; BB(0x00606df4);
    /* 00606df4: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
L_00606df9:; BB(0x00606df9);
    /* 00606df9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606dfb: je 0x606e21 */ if (fZ) goto L_00606e21;
L_00606dfd:; BB(0x00606dfd);
    /* 00606dfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00606dff: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00606e02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606e04: jne 0x606df9 */ if (!fZ) goto L_00606df9;
L_00606e06:; BB(0x00606e06);
    /* 00606e06: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00606e09: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00606e0c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00606e0f: mov eax, edx */ r_eax = r_edx;
    /* 00606e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00606e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00606e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606e1e: ret 4 */ FN_RET(0x00606c28); r_esp += 8; return;
L_00606e21:; BB(0x00606e21);
    /* 00606e21: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606e27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00606e29: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x606e2eu); f_008172d4();
    /* 00606e2e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00606e31: jmp 0x606e06 */ goto L_00606e06;
}

void f_00606e34(void) /* sub_606E34 */
{
    FN_ENTER(0x00606e34);
    /* 00606e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606e35: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00606e37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e39: call 0x606f10 */ r_esp -= 4; W32(r_esp, 0x606e3eu); f_00606f10();
    /* 00606e3e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00606e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606e47: je 0x606eff */ if (fZ) goto L_00606eff;
L_00606e4d:; BB(0x00606e4d);
    /* 00606e4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606e50: je 0x606e76 */ if (fZ) goto L_00606e76;
L_00606e52:; BB(0x00606e52);
    /* 00606e52: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606e55: jne 0x606e64 */ if (!fZ) goto L_00606e64;
L_00606e57:; BB(0x00606e57);
    /* 00606e57: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00606e5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e5c: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x606e62u); call_ind(t); }
    /* 00606e62: jmp 0x606e81 */ goto L_00606e81;
L_00606e64:; BB(0x00606e64);
    /* 00606e64: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606e67: jne 0x606e81 */ if (!fZ) goto L_00606e81;
L_00606e69:; BB(0x00606e69);
    /* 00606e69: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00606e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e6e: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x606e74u); call_ind(t); }
    /* 00606e74: jmp 0x606e81 */ goto L_00606e81;
L_00606e76:; BB(0x00606e76);
    /* 00606e76: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00606e79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e7b: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x606e81u); call_ind(t); }
L_00606e81:; BB(0x00606e81);
    /* 00606e81: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e83: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x606e88u); f_007aa094();
    /* 00606e88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606e8a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x606e8fu); f_0078730c();
    /* 00606e8f: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00606e95: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00606e9b: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 00606e9e: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00606ea4: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00606ea7: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00606eaa: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 00606eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00606eb2: jle 0x606ec8 */ if ((fZ||fS!=fO)) goto L_00606ec8;
L_00606eb4:; BB(0x00606eb4);
    /* 00606eb4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x606eb9u); f_006dc358();
    /* 00606eb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606ebb: jne 0x606ec8 */ if (!fZ) goto L_00606ec8;
L_00606ebd:; BB(0x00606ebd);
    /* 00606ebd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606ebf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606ec0: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x606ec5u); f_006946a8();
    /* 00606ec5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00606ec8:; BB(0x00606ec8);
    /* 00606ec8: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00606ecb: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00606ed1: and eax, 0xffffe4c0 */ {  u32 a = r_eax; u32 b = 0xffffe4c0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00606ed6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00606ed9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606edb: je 0x606efd */ if (fZ) goto L_00606efd;
L_00606edd:; BB(0x00606edd);
    /* 00606edd: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x606ee2u); f_00807d60();
    /* 00606ee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606ee4: je 0x606efd */ if (fZ) goto L_00606efd;
L_00606ee6:; BB(0x00606ee6);
    /* 00606ee6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606ee8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00606eea: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00606eed: movzx ebp, word ptr [ebp + 0x60] */ r_ebp = (u32)R16((u32)(r_ebp+0x60u));
    /* 00606ef1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606ef2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606ef5: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x606efau); f_008056b0();
    /* 00606efa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00606efd:; BB(0x00606efd);
    /* 00606efd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606efe: ret  */ FN_RET(0x00606e34); r_esp += 4; return;
L_00606eff:; BB(0x00606eff);
    /* 00606eff: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00606f02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00606f04: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x606f0au); call_ind(t); }
    /* 00606f0a: jmp 0x606e81 */ goto L_00606e81;
}

void f_00606f10(void) /* sub_606F10 */
{
    FN_ENTER(0x00606f10);
    /* 00606f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00606f11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00606f12: mov edi, ecx */ r_edi = r_ecx;
    /* 00606f14: mov edx, dword ptr [edi + 0x3a8] */ r_edx = R32((u32)(r_edi+0x3a8u));
    /* 00606f1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00606f1c: jle 0x606fa2 */ if ((fZ||fS!=fO)) goto L_00606fa2;
L_00606f22:; BB(0x00606f22);
    /* 00606f22: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 00606f28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606f2a: jne 0x606f34 */ if (!fZ) goto L_00606f34;
L_00606f2c:; BB(0x00606f2c);
    /* 00606f2c: mov esi, dword ptr [0xa95aa8] */ r_esi = R32((u32)(0xa95aa8u));
    /* 00606f32: jmp 0x606f3a */ goto L_00606f3a;
L_00606f34:; BB(0x00606f34);
    /* 00606f34: mov esi, dword ptr [0xa95aa4] */ r_esi = R32((u32)(0xa95aa4u));
L_00606f3a:; BB(0x00606f3a);
    /* 00606f3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00606f3c: jle 0x606f75 */ if ((fZ||fS!=fO)) goto L_00606f75;
L_00606f3e:; BB(0x00606f3e);
    /* 00606f3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606f3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00606f40: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x606f45u); f_006bc260();
    /* 00606f45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606f48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606f4a: je 0x606f63 */ if (fZ) goto L_00606f63;
L_00606f4c:; BB(0x00606f4c);
    /* 00606f4c: mov eax, 1 */ r_eax = 0x1u;
    /* 00606f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606f52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606f54: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00606f5a: mov ecx, edi */ r_ecx = r_edi;
    /* 00606f5c: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x606f61u); f_007b52c4();
    /* 00606f61: jmp 0x606f75 */ goto L_00606f75;
L_00606f63:; BB(0x00606f63);
    /* 00606f63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606f65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00606f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606f68: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00606f6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00606f70: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x606f75u); f_007b52ec();
L_00606f75:; BB(0x00606f75);
    /* 00606f75: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 00606f7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606f7d: jle 0x606f9f */ if ((fZ||fS!=fO)) goto L_00606f9f;
L_00606f7f:; BB(0x00606f7f);
    /* 00606f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606f80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00606f81: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x606f86u); f_006bc260();
    /* 00606f86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606f8b: je 0x606f9f */ if (fZ) goto L_00606f9f;
L_00606f8d:; BB(0x00606f8d);
    /* 00606f8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00606f8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00606f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606f92: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00606f98: mov ecx, edi */ r_ecx = r_edi;
    /* 00606f9a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x606f9fu); f_007b52ec();
L_00606f9f:; BB(0x00606f9f);
    /* 00606f9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00606fa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00606fa1: ret  */ FN_RET(0x00606f10); r_esp += 4; return;
L_00606fa2:; BB(0x00606fa2);
    /* 00606fa2: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 00606fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00606faa: jg 0x606f22 */ if ((!fZ&&fS==fO)) goto L_00606f22;
L_00606fb0:; BB(0x00606fb0);
    /* 00606fb0: mov eax, 1 */ r_eax = 0x1u;
    /* 00606fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606fb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606fb8: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00606fbe: mov ecx, edi */ r_ecx = r_edi;
    /* 00606fc0: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x606fc5u); f_007b52c4();
    /* 00606fc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00606fc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00606fc7: ret  */ FN_RET(0x00606f10); r_esp += 4; return;
}

void f_00606fc8(void) /* sub_606FC8 */
{
    FN_ENTER(0x00606fc8);
    /* 00606fc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00606fc9: mov edi, ecx */ r_edi = r_ecx;
    /* 00606fcb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00606fcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00606fcf: push dword ptr [edi + 0x3a4] */ { u32 v = R32((u32)(r_edi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606fd5: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606fdb: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x606fdeu); call_ind(t); }
    /* 00606fde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606fe0: je 0x606fed */ if (fZ) goto L_00606fed;
L_00606fe2:; BB(0x00606fe2);
    /* 00606fe2: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00606fe8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00606feb: je 0x606fef */ if (fZ) goto L_00606fef;
L_00606fed:; BB(0x00606fed);
    /* 00606fed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00606fee: ret  */ FN_RET(0x00606fc8); r_esp += 4; return;
L_00606fef:; BB(0x00606fef);
    /* 00606fef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00606ff0: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x606ff5u); f_00794548();
    /* 00606ff5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00606ff6: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00606ffb: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00606ffe: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00607001: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00607006: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x60700bu); f_00829cc8();
    /* 0060700b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060700d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x607012u); f_0082d990();
    /* 00607012: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00607015: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00607017: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x60701cu); f_008316b4();
    /* 0060701c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0060701f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00607021: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x607026u); f_0082d8bc();
    /* 00607026: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x60702bu); f_0082fa9c();
    /* 0060702b: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 00607031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607033: je 0x607040 */ if (fZ) goto L_00607040;
L_00607035:; BB(0x00607035);
    /* 00607035: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00607038: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x60703du); f_0082e1e8();
    /* 0060703d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060703e: jmp 0x607047 */ goto L_00607047;
L_00607040:; BB(0x00607040);
    /* 00607040: mov ecx, edi */ r_ecx = r_edi;
    /* 00607042: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x607047u); f_007aa668();
L_00607047:; BB(0x00607047);
    /* 00607047: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x60704cu); f_0082faac();
    /* 0060704c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x607051u); f_0082da80();
    /* 00607051: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00607056: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00607059: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0060705e: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x607063u); f_00794750();
    /* 00607063: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607067: mov ecx, edi */ r_ecx = r_edi;
    /* 00607069: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x60706eu); f_00779d4c();
    /* 0060706e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060706f: ret  */ FN_RET(0x00606fc8); r_esp += 4; return;
}

