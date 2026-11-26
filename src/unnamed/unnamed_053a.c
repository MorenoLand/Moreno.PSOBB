#include "protos.h"

void f_0053a054(void) /* sub_53A054 */
{
    FN_ENTER(0x0053a054);
    /* 0053a054: mov dword ptr [0x9bcbcc], 0x40400000 */ W32((u32)(0x9bcbccu), 0x40400000u);
    /* 0053a05e: mov dword ptr [0x9bcbf8], 0x40400000 */ W32((u32)(0x9bcbf8u), 0x40400000u);
    /* 0053a068: ret  */ FN_RET(0x0053a054); r_esp += 4; return;
}

void f_0053a06c(void) /* sub_53A06C */
{
    FN_ENTER(0x0053a06c);
    /* 0053a06c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a06d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053a06e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053a070: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 0053a076: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0053a079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053a07b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053a07d: jle 0x53a095 */ if ((fZ||fS!=fO)) goto L_0053a095;
L_0053a07f:; BB(0x0053a07f);
    /* 0053a07f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0053a082:; BB(0x0053a082);
    /* 0053a082: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0053a084: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0053a087: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 0053a08a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a08d: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a090: jl 0x53a082 */ if ((fS!=fO)) goto L_0053a082;
L_0053a092:; BB(0x0053a092);
    /* 0053a092: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0053a095:; BB(0x0053a095);
    /* 0053a095: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0053a09c: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 0053a0a2: lea ecx, [ebp + 0xf8] */ r_ecx = (u32)(r_ebp+0xf8u);
    /* 0053a0a8: mov dword ptr [ebp + 0xf4], 0x3f800000 */ W32((u32)(r_ebp+0xf4u), 0x3f800000u);
    /* 0053a0b2: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x53a0b5u); call_ind(t); }
    /* 0053a0b5: mov dword ptr [ebp + 0x118], 0 */ W32((u32)(r_ebp+0x118u), 0x0u);
    /* 0053a0bf: mov dword ptr [ebp + 0x114], 0 */ W32((u32)(r_ebp+0x114u), 0x0u);
    /* 0053a0c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053a0ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a0cb: ret  */ FN_RET(0x0053a06c); r_esp += 4; return;
}

void f_0053a0cc(void) /* sub_53A0CC */
{
    FN_ENTER(0x0053a0cc);
    /* 0053a0cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a0cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0d1: push 0x8d51cc */ { u32 v = 0x8d51ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053a0dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053a0e4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a0e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053a0ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0053a0ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053a0f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053a0f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053a0f5: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 0053a0ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053a102: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 0053a108: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 0053a112: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053a115: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0053a11b: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 0053a125: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a127: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 0053a12d: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 0053a137: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 0053a13d: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 0053a147: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53a14cu); f_008581c5();
    /* 0053a14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053a14d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053a150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a152: je 0x53a1cb */ if (fZ) goto L_0053a1cb;
L_0053a154:; BB(0x0053a154);
    /* 0053a154: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0053a15b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a162: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a165: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a167: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x53a16cu); f_00521a4c();
    /* 0053a16c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a16f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0053a176:; BB(0x0053a176);
    /* 0053a176: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a179: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0053a17f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053a186: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a188: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0053a18e: lea ecx, [eax + 0xf8] */ r_ecx = (u32)(r_eax+0xf8u);
    /* 0053a194: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x53a197u); call_ind(t); }
    /* 0053a197: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a19a: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 0053a1a4: mov dword ptr [ecx + 0xe8], 0 */ W32((u32)(r_ecx+0xe8u), 0x0u);
    /* 0053a1ae: mov dword ptr [ecx + 0xec], 0x3f800000 */ W32((u32)(r_ecx+0xecu), 0x3f800000u);
    /* 0053a1b8: call 0x53a06c */ r_esp -= 4; W32(r_esp, 0x53a1bdu); f_0053a06c();
    /* 0053a1bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a1c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053a1c7: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a1c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a1ca: ret  */ FN_RET(0x0053a0cc); r_esp += 4; return;
L_0053a1cb:; BB(0x0053a1cb);
    /* 0053a1cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053a1cd: jmp 0x53a176 */ goto L_0053a176;
}

void f_0053a1d0(void) /* sub_53A1D0 */
{
    FN_ENTER(0x0053a1d0);
    /* 0053a1d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053a1d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053a1d5: call 0x53a1f4 */ r_esp -= 4; W32(r_esp, 0x53a1dau); f_0053a1f4();
    /* 0053a1da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a1de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053a1e0: jne 0x53a1e6 */ if (!fZ) goto L_0053a1e6;
L_0053a1e2:; BB(0x0053a1e2);
    /* 0053a1e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053a1e3: ret 4 */ FN_RET(0x0053a1d0); r_esp += 8; return;
L_0053a1e6:; BB(0x0053a1e6);
    /* 0053a1e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53a1ecu); f_005c2f74();
    /* 0053a1ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053a1ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053a1ee: ret 4 */ FN_RET(0x0053a1d0); r_esp += 8; return;
}

void f_0053a1f4(void) /* sub_53A1F4 */
{
    FN_ENTER(0x0053a1f4);
    /* 0053a1f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a1f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1f9: push 0x8d5230 */ { u32 v = 0x8d5230u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053a204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053a20c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a20f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053a212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053a215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053a218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053a21b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053a21e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053a225: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a228: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 0053a22e: mov dword ptr [eax], 0xb026e0 */ W32((u32)(r_eax), 0xb026e0u);
    /* 0053a234: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a236: je 0x53a252 */ if (fZ) goto L_0053a252;
L_0053a238:; BB(0x0053a238);
    /* 0053a238: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053a23c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053a241: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053a245: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a248: mov dword ptr [eax + 0x4cc], 0 */ W32((u32)(r_eax+0x4ccu), 0x0u);
L_0053a252:; BB(0x0053a252);
    /* 0053a252: mov edx, dword ptr [eax + 0x4ac] */ r_edx = R32((u32)(r_eax+0x4acu));
    /* 0053a258: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053a25c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053a261: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053a265: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a268: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 0053a26e: mov dword ptr [eax + 0x4ac], 0 */ W32((u32)(r_eax+0x4acu), 0x0u);
    /* 0053a278: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a27a: je 0x53a285 */ if (fZ) goto L_0053a285;
L_0053a27c:; BB(0x0053a27c);
    /* 0053a27c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a27e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053a280: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x53a282u); call_ind(t); }
    /* 0053a282: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0053a285:; BB(0x0053a285);
    /* 0053a285: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0053a28b: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
    /* 0053a295: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a297: je 0x53a2a3 */ if (fZ) goto L_0053a2a3;
L_0053a299:; BB(0x0053a299);
    /* 0053a299: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a29b: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x53a2a0u); f_00418aa8();
    /* 0053a2a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0053a2a3:; BB(0x0053a2a3);
    /* 0053a2a3: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 0053a2a9: mov dword ptr [eax + 0x4a4], 0 */ W32((u32)(r_eax+0x4a4u), 0x0u);
    /* 0053a2b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a2b5: je 0x53a2c0 */ if (fZ) goto L_0053a2c0;
L_0053a2b7:; BB(0x0053a2b7);
    /* 0053a2b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2b9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053a2bb: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x53a2bdu); call_ind(t); }
    /* 0053a2bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0053a2c0:; BB(0x0053a2c0);
    /* 0053a2c0: mov dword ptr [eax + 0x4a0], 0 */ W32((u32)(r_eax+0x4a0u), 0x0u);
    /* 0053a2ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a2cc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x53a2d1u); f_007b9c8c();
    /* 0053a2d1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0053a2d8: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a2e0: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a2e5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2e7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2ea: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x53a2efu); f_008586d6();
    /* 0053a2ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053a2f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a2f9: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a2ff: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x53a304u); f_005122a8();
    /* 0053a304: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a307: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x53a30cu); f_0051f4fc();
    /* 0053a30c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a30f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053a316: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a319: ret  */ FN_RET(0x0053a1f4); r_esp += 4; return;
}

void f_0053a31c(void) /* sub_53A31C */
{
    FN_ENTER(0x0053a31c);
    /* 0053a31c: mov eax, dword ptr [0xa7364c] */ r_eax = R32((u32)(0xa7364cu));
    /* 0053a321: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a324: je 0x53a364 */ if (fZ) goto L_0053a364;
L_0053a326:; BB(0x0053a326);
    /* 0053a326: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a329: je 0x53a33a */ if (fZ) goto L_0053a33a;
L_0053a32b:; BB(0x0053a32b);
    /* 0053a32b: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a32e: je 0x53a33a */ if (fZ) goto L_0053a33a;
L_0053a330:; BB(0x0053a330);
    /* 0053a330: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a333: je 0x53a33a */ if (fZ) goto L_0053a33a;
L_0053a335:; BB(0x0053a335);
    /* 0053a335: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a338: jne 0x53a35b */ if (!fZ) goto L_0053a35b;
L_0053a33a:; BB(0x0053a33a);
    /* 0053a33a: mov edx, dword ptr [0xa73644] */ r_edx = R32((u32)(0xa73644u));
    /* 0053a340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a341: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 0053a344: mov dword ptr [0xa73644], eax */ W32((u32)(0xa73644u), r_eax);
    /* 0053a349: push 0xa73604 */ { u32 v = 0xa73604u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a34e: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x53a353u); f_00520c5c();
    /* 0053a353: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a356: mov eax, dword ptr [0xa7364c] */ r_eax = R32((u32)(0xa7364cu));
L_0053a35b:; BB(0x0053a35b);
    /* 0053a35b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053a35e: mov dword ptr [0xa7364c], eax */ W32((u32)(0xa7364cu), r_eax);
    /* 0053a363: ret  */ FN_RET(0x0053a31c); r_esp += 4; return;
L_0053a364:; BB(0x0053a364);
    /* 0053a364: mov edx, dword ptr [0xa73648] */ r_edx = R32((u32)(0xa73648u));
    /* 0053a36a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a36c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x53a371u); f_0082e9e4();
    /* 0053a371: mov eax, dword ptr [0xa7364c] */ r_eax = R32((u32)(0xa7364cu));
    /* 0053a376: jmp 0x53a35b */ goto L_0053a35b;
}

void f_0053a378(void)
{
    FN_ENTER(0x0053a378);
    /* 0053a378: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x53a37du); f_0061cdb0();
    /* 0053a37d: mov ecx, dword ptr [0xa73640] */ r_ecx = R32((u32)(0xa73640u));
    /* 0053a383: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a385: je 0x53a39a */ if (fZ) goto L_0053a39a;
L_0053a387:; BB(0x0053a387);
    /* 0053a387: je 0x53a390 */ if (fZ) goto L_0053a390;
L_0053a389:; BB(0x0053a389);
    /* 0053a389: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a38b: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x53a390u); f_0044bbac();
L_0053a390:; BB(0x0053a390);
    /* 0053a390: mov dword ptr [0xa73640], 0 */ W32((u32)(0xa73640u), 0x0u);
L_0053a39a:; BB(0x0053a39a);
    /* 0053a39a: mov ecx, dword ptr [0xa7363c] */ r_ecx = R32((u32)(0xa7363cu));
    /* 0053a3a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a3a2: je 0x53a3b7 */ if (fZ) goto L_0053a3b7;
L_0053a3a4:; BB(0x0053a3a4);
    /* 0053a3a4: je 0x53a3ad */ if (fZ) goto L_0053a3ad;
L_0053a3a6:; BB(0x0053a3a6);
    /* 0053a3a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3a8: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x53a3adu); f_0045a950();
L_0053a3ad:; BB(0x0053a3ad);
    /* 0053a3ad: mov dword ptr [0xa7363c], 0 */ W32((u32)(0xa7363cu), 0x0u);
L_0053a3b7:; BB(0x0053a3b7);
    /* 0053a3b7: mov ecx, dword ptr [0xa73628] */ r_ecx = R32((u32)(0xa73628u));
    /* 0053a3bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053a3bf: je 0x53a3d4 */ if (fZ) goto L_0053a3d4;
L_0053a3c1:; BB(0x0053a3c1);
    /* 0053a3c1: je 0x53a3ca */ if (fZ) goto L_0053a3ca;
L_0053a3c3:; BB(0x0053a3c3);
    /* 0053a3c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3c5: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x53a3cau); f_004066a8();
L_0053a3ca:; BB(0x0053a3ca);
    /* 0053a3ca: mov dword ptr [0xa73628], 0 */ W32((u32)(0xa73628u), 0x0u);
L_0053a3d4:; BB(0x0053a3d4);
    /* 0053a3d4: ret  */ FN_RET(0x0053a378); r_esp += 4; return;
}

void f_0053a3d8(void)
{
    FN_ENTER(0x0053a3d8);
    /* 0053a3d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a3db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3dd: push 0x8d5258 */ { u32 v = 0x8d5258u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053a3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053a3f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a3f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053a3f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053a3f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053a3fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053a3ff: push 0x4d0 */ { u32 v = 0x4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a404: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0053a40b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53a410u); f_005caba4();
    /* 0053a410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053a411: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053a414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a416: je 0x53a44f */ if (fZ) goto L_0053a44f;
L_0053a418:; BB(0x0053a418);
    /* 0053a418: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0053a41f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a426: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a429: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a42f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a432: call 0x53a454 */ r_esp -= 4; W32(r_esp, 0x53a437u); f_0053a454();
    /* 0053a437: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a43a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053a441:; BB(0x0053a441);
    /* 0053a441: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a444: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053a44b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a44d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a44e: ret  */ FN_RET(0x0053a3d8); r_esp += 4; return;
L_0053a44f:; BB(0x0053a44f);
    /* 0053a44f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053a451: jmp 0x53a441 */ goto L_0053a441;
}

void f_0053a454(void) /* sub_53A454 */
{
    FN_ENTER(0x0053a454);
    /* 0053a454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a455: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a457: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a459: push 0x8d52a8 */ { u32 v = 0x8d52a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a45e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053a464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a465: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053a46c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a46f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053a472: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0053a475: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053a478: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053a47b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053a47e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a481: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053a484: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053a487: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x53a48cu); f_005216f4();
    /* 0053a48c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a493: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a496: mov dword ptr [ecx], 0xb026e0 */ W32((u32)(r_ecx), 0xb026e0u);
    /* 0053a49c: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a4a2: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x53a4a7u); f_005122f8();
    /* 0053a4a7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053a4ae: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4b3: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4b8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4bb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4bd: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a4c2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4c5: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x53a4cau); f_00858736();
    /* 0053a4ca: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053a4d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4d4: mov eax, dword ptr [0x9bcdb8] */ r_eax = R32((u32)(0x9bcdb8u));
    /* 0053a4d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a4dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4dd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0053a4e0: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x53a4e5u); f_0051f750();
    /* 0053a4e5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4e8: call 0x53cd38 */ r_esp -= 4; W32(r_esp, 0x53a4edu); f_0053cd38();
    /* 0053a4ed: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a4f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053a4fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a4fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a4fd: ret 8 */ FN_RET(0x0053a454); r_esp += 12; return;
}

void f_0053a460(void)
{
    FN_ENTER(0x0053a460);
    /* 0053a460: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053a462: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053a464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a465: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053a46c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a46f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053a472: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0053a475: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053a478: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053a47b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053a47e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a481: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053a484: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053a487: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x53a48cu); f_005216f4();
    /* 0053a48c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a493: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a496: mov dword ptr [ecx], 0xb026e0 */ W32((u32)(r_ecx), 0xb026e0u);
    /* 0053a49c: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a4a2: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x53a4a7u); f_005122f8();
    /* 0053a4a7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053a4ae: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4b3: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4b8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4bb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4bd: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a4c2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4c5: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x53a4cau); f_00858736();
    /* 0053a4ca: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053a4d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4d4: mov eax, dword ptr [0x9bcdb8] */ r_eax = R32((u32)(0x9bcdb8u));
    /* 0053a4d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a4dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4dd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0053a4e0: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x53a4e5u); f_0051f750();
    /* 0053a4e5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4e8: call 0x53cd38 */ r_esp -= 4; W32(r_esp, 0x53a4edu); f_0053cd38();
    /* 0053a4ed: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a4f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a4f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053a4fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a4fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a4fd: ret 8 */ FN_RET(0x0053a460); r_esp += 12; return;
}

void f_0053a500(void) /* sub_53A500 */
{
    FN_ENTER(0x0053a500);
    /* 0053a500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a501: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053a503: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x53a508u); f_004f7c84();
    /* 0053a508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a50a: je 0x53a519 */ if (fZ) goto L_0053a519;
L_0053a50c:; BB(0x0053a50c);
    /* 0053a50c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053a50f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a511: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x53a517u); call_ind(t); }
    /* 0053a517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a518: ret  */ FN_RET(0x0053a500); r_esp += 4; return;
L_0053a519:; BB(0x0053a519);
    /* 0053a519: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053a51c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a51e: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x53a524u); call_ind(t); }
    /* 0053a524: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a527: je 0x53a57d */ if (fZ) goto L_0053a57d;
L_0053a529:; BB(0x0053a529);
    /* 0053a529: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053a52c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a52e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x53a534u); call_ind(t); }
    /* 0053a534: mov eax, dword ptr [ebp + 0x4b0] */ r_eax = R32((u32)(r_ebp+0x4b0u));
    /* 0053a53a: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a53d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053a540: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 0053a546: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 0053a54c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a54f: jg 0x53a55d */ if ((!fZ&&fS==fO)) goto L_0053a55d;
L_0053a551:; BB(0x0053a551);
    /* 0053a551: mov dword ptr [ebp + 0x490], 1 */ W32((u32)(r_ebp+0x490u), 0x1u);
    /* 0053a55b: jmp 0x53a57d */ goto L_0053a57d;
L_0053a55d:; BB(0x0053a55d);
    /* 0053a55d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a560: jg 0x53a56e */ if ((!fZ&&fS==fO)) goto L_0053a56e;
L_0053a562:; BB(0x0053a562);
    /* 0053a562: mov dword ptr [ebp + 0x490], 5 */ W32((u32)(r_ebp+0x490u), 0x5u);
    /* 0053a56c: jmp 0x53a57d */ goto L_0053a57d;
L_0053a56e:; BB(0x0053a56e);
    /* 0053a56e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a571: jg 0x53a57d */ if ((!fZ&&fS==fO)) goto L_0053a57d;
L_0053a573:; BB(0x0053a573);
    /* 0053a573: mov dword ptr [ebp + 0x490], 6 */ W32((u32)(r_ebp+0x490u), 0x6u);
L_0053a57d:; BB(0x0053a57d);
    /* 0053a57d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a57f: call 0x53a598 */ r_esp -= 4; W32(r_esp, 0x53a584u); f_0053a598();
    /* 0053a584: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a586: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x53a58bu); f_006401f0();
    /* 0053a58b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053a58e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053a590: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x53a596u); call_ind(t); }
    /* 0053a596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a597: ret  */ FN_RET(0x0053a500); r_esp += 4; return;
}

void f_0053a598(void) /* sub_53A598 */
{
    FN_ENTER(0x0053a598);
    /* 0053a598: fld dword ptr [0x923284] */ FPUSH(R_F32((u32)(0x923284u)));
    /* 0053a59e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0053a5a1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0053a5a4: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0053a5a7: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0053a5ad: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0053a5b0: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0053a5b6: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0053a5bc: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0053a5bf: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0053a5c2: ret  */ FN_RET(0x0053a598); r_esp += 4; return;
}

void f_0053a5c4(void) /* sub_53A5C4 */
{
    FN_ENTER(0x0053a5c4);
    /* 0053a5c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a5cb: mov esi, ecx */ r_esi = r_ecx;
    /* 0053a5cd: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x53a5d2u); f_004f7c84();
    /* 0053a5d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a5d4: je 0x53a5e8 */ if (fZ) goto L_0053a5e8;
L_0053a5d6:; BB(0x0053a5d6);
    /* 0053a5d6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053a5d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a5da: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x53a5e0u); call_ind(t); }
    /* 0053a5e0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053a5e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053a5e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a5e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053a5e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053a5e7: ret  */ FN_RET(0x0053a5c4); r_esp += 4; return;
L_0053a5e8:; BB(0x0053a5e8);
    /* 0053a5e8: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0053a5ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053a5f0: jne 0x53a7f1 */ if (!fZ) goto L_0053a7f1;
L_0053a5f6:; BB(0x0053a5f6);
    /* 0053a5f6: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x53a5fbu); f_00694cc8();
    /* 0053a5fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a5fd: je 0x53a623 */ if (fZ) goto L_0053a623;
L_0053a5ff:; BB(0x0053a5ff);
    /* 0053a5ff: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a604: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a606: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053a608: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a60e: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053a614: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x53a617u); call_ind(t); }
    /* 0053a617: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053a61a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a61c: jne 0x53a644 */ if (!fZ) goto L_0053a644;
L_0053a61e:; BB(0x0053a61e);
    /* 0053a61e: jmp 0x53a7f1 */ goto L_0053a7f1;
L_0053a623:; BB(0x0053a623);
    /* 0053a623: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a628: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a62a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053a62c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a631: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x53a634u); call_ind(t); }
    /* 0053a634: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a636: je 0x53a7f1 */ if (fZ) goto L_0053a7f1;
L_0053a63c:; BB(0x0053a63c);
    /* 0053a63c: mov eax, 1 */ r_eax = 0x1u;
    /* 0053a641: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_0053a644:; BB(0x0053a644);
    /* 0053a644: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 0053a64c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0053a650: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a652: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0053a65a: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 0053a662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a665: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x53a66au); f_00520cf8();
    /* 0053a66a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a66c: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x53a671u); f_00520608();
    /* 0053a671: mov ebx, dword ptr [0xaf034c] */ r_ebx = R32((u32)(0xaf034cu));
    /* 0053a677: mov eax, dword ptr [esi + 0x488] */ r_eax = R32((u32)(r_esi+0x488u));
    /* 0053a67d: mov dword ptr [0xa7364c], 0 */ W32((u32)(0xa7364cu), 0x0u);
    /* 0053a687: lea edx, [esi + 0x458] */ r_edx = (u32)(r_esi+0x458u);
    /* 0053a68d: mov dword ptr [0xa73648], eax */ W32((u32)(0xa73648u), r_eax);
    /* 0053a692: mov dword ptr [0xa73644], edx */ W32((u32)(0xa73644u), r_edx);
    /* 0053a698: mov dword ptr [0xaab518], ebx */ W32((u32)(0xaab518u), r_ebx);
    /* 0053a69e: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x53a6a3u); f_00520d08();
    /* 0053a6a3: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x53a6a8u); f_00578b38();
    /* 0053a6a8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0053a6ad: lea ecx, [esi + 0x3e8] */ r_ecx = (u32)(r_esi+0x3e8u);
    /* 0053a6b3: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0053a6b7: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x53a6bcu); f_005771a4();
    /* 0053a6bc: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0053a6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a6c3: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0053a6c7: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x53a6ccu); f_0057725c();
    /* 0053a6cc: mov ebp, eax */ r_ebp = r_eax;
    /* 0053a6ce: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0053a6d4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053a6d7: jne 0x53a6f9 */ if (!fZ) goto L_0053a6f9;
L_0053a6d9:; BB(0x0053a6d9);
    /* 0053a6d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a6db: je 0x53a715 */ if (fZ) goto L_0053a715;
L_0053a6dd:; BB(0x0053a6dd);
    /* 0053a6dd: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0053a6e1: mov edx, dword ptr [esi + 0x3e8] */ r_edx = R32((u32)(r_esi+0x3e8u));
    /* 0053a6e7: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x53a6eau); call_ind(t); }
    /* 0053a6ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a6ec: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x53a6f1u); f_008173d0();
    /* 0053a6f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a6f3: je 0x53a715 */ if (fZ) goto L_0053a715;
L_0053a6f5:; BB(0x0053a6f5);
    /* 0053a6f5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0053a6f7: jmp 0x53a715 */ goto L_0053a715;
L_0053a6f9:; BB(0x0053a6f9);
    /* 0053a6f9: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 0053a6ff: lea ecx, [esi + 0x3cc] */ r_ecx = (u32)(r_esi+0x3ccu);
    /* 0053a705: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x53a708u); call_ind(t); }
    /* 0053a708: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a70a: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x53a70fu); f_008173d0();
    /* 0053a70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a711: je 0x53a715 */ if (fZ) goto L_0053a715;
L_0053a713:; BB(0x0053a713);
    /* 0053a713: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053a715:; BB(0x0053a715);
    /* 0053a715: mov ecx, dword ptr [0xa73640] */ r_ecx = R32((u32)(0xa73640u));
    /* 0053a71b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a71d: movsx edx, word ptr [esi + 0x4b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4b0u));
    /* 0053a724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a725: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x53a72au); f_0052ddac();
    /* 0053a72a: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 0053a72d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053a72f: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 0053a732: mov eax, dword ptr [esi + 0x490] */ r_eax = R32((u32)(r_esi+0x490u));
    /* 0053a738: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a73a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a73c: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0053a73f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a741: mov eax, dword ptr [ecx + edx + 8] */ r_eax = R32((u32)(r_ecx+r_edx+0x8u));
    /* 0053a745: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0053a748: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0053a74b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x53a750u); f_00829cc8();
    /* 0053a750: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a752: je 0x53a79e */ if (fZ) goto L_0053a79e;
L_0053a754:; BB(0x0053a754);
    /* 0053a754: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53a759u); f_0082d7b0();
    /* 0053a759: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0053a75c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53a761u); f_0082d838();
    /* 0053a761: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0053a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a766: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53a76bu); f_0082d8bc();
    /* 0053a76b: mov ecx, 0x53a31c */ r_ecx = 0x53a31cu;
    /* 0053a770: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53a775u); f_0082fac4();
    /* 0053a775: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x53a77au); f_0082fa9c();
    /* 0053a77a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0053a77d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a780: je 0x53a853 */ if (fZ) goto L_0053a853;
L_0053a786:; BB(0x0053a786);
    /* 0053a786: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a788: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x53a78du); f_007aa7b8();
L_0053a78d:; BB(0x0053a78d);
    /* 0053a78d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x53a792u); f_0082faac();
    /* 0053a792: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a794: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x53a799u); f_0082fac4();
    /* 0053a799: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53a79eu); f_0082da80();
L_0053a79e:; BB(0x0053a79e);
    /* 0053a79e: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0053a7a4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053a7a7: jne 0x53a7bc */ if (!fZ) goto L_0053a7bc;
L_0053a7a9:; BB(0x0053a7a9);
    /* 0053a7a9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a7ab: je 0x53a7cb */ if (fZ) goto L_0053a7cb;
L_0053a7ad:; BB(0x0053a7ad);
    /* 0053a7ad: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0053a7b1: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 0053a7b7: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x53a7bau); call_ind(t); }
    /* 0053a7ba: jmp 0x53a7cb */ goto L_0053a7cb;
L_0053a7bc:; BB(0x0053a7bc);
    /* 0053a7bc: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0053a7c2: lea ecx, [esi + 0x3cc] */ r_ecx = (u32)(r_esi+0x3ccu);
    /* 0053a7c8: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x53a7cbu); call_ind(t); }
L_0053a7cb:; BB(0x0053a7cb);
    /* 0053a7cb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x53a7d0u); f_0082dab0();
    /* 0053a7d0: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0053a7d5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0053a7da: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a7dc: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x53a7e1u); f_00520610();
    /* 0053a7e1: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0053a7e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a7e6: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 0053a7e9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053a7ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053a7ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a7ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053a7ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053a7f0: ret  */ FN_RET(0x0053a5c4); r_esp += 4; return;
L_0053a7f1:; BB(0x0053a7f1);
    /* 0053a7f1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0053a7f7: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0053a7fd: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 0053a803: mov dword ptr [esi + 0x458], eax */ W32((u32)(r_esi+0x458u), r_eax);
    /* 0053a809: mov dword ptr [esi + 0x45c], edx */ W32((u32)(r_esi+0x45cu), r_edx);
    /* 0053a80f: mov dword ptr [esi + 0x460], ebx */ W32((u32)(r_esi+0x460u), r_ebx);
    /* 0053a815: mov dword ptr [esi + 0x464], eax */ W32((u32)(r_esi+0x464u), r_eax);
    /* 0053a81b: mov dword ptr [esi + 0x468], edx */ W32((u32)(r_esi+0x468u), r_edx);
    /* 0053a821: mov dword ptr [esi + 0x46c], ebx */ W32((u32)(r_esi+0x46cu), r_ebx);
    /* 0053a827: mov dword ptr [esi + 0x470], eax */ W32((u32)(r_esi+0x470u), r_eax);
    /* 0053a82d: mov dword ptr [esi + 0x474], edx */ W32((u32)(r_esi+0x474u), r_edx);
    /* 0053a833: mov dword ptr [esi + 0x478], ebx */ W32((u32)(r_esi+0x478u), r_ebx);
    /* 0053a839: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
    /* 0053a83f: mov dword ptr [esi + 0x480], edx */ W32((u32)(r_esi+0x480u), r_edx);
    /* 0053a845: mov dword ptr [esi + 0x484], ebx */ W32((u32)(r_esi+0x484u), r_ebx);
    /* 0053a84b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053a84e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053a84f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a850: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053a851: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053a852: ret  */ FN_RET(0x0053a5c4); r_esp += 4; return;
L_0053a853:; BB(0x0053a853);
    /* 0053a853: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a855: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x53a85au); f_007aa668();
    /* 0053a85a: jmp 0x53a78d */ goto L_0053a78d;
}

void f_0053a860(void) /* sub_53A860 */
{
    FN_ENTER(0x0053a860);
    /* 0053a860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053a861: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a862: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a865: mov esi, ecx */ r_esi = r_ecx;
    /* 0053a867: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a869: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x53a86eu); f_0051f814();
    /* 0053a86e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a873: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a875: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053a877: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a87c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x53a87fu); call_ind(t); }
    /* 0053a87f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a881: je 0x53a992 */ if (fZ) goto L_0053a992;
L_0053a887:; BB(0x0053a887);
    /* 0053a887: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0053a88f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0053a893: mov ecx, esi */ r_ecx = r_esi;
    /* 0053a895: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0053a89d: mov dword ptr [esp + 0x14], 0x40400000 */ W32((u32)(r_esp+0x14u), 0x40400000u);
    /* 0053a8a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a8a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a8a8: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x53a8adu); f_00520cf8();
    /* 0053a8ad: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x53a8b2u); f_00578b38();
    /* 0053a8b2: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0053a8b5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x53a8bau); f_00829cc8();
    /* 0053a8ba: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53a8bfu); f_0082d7b0();
    /* 0053a8bf: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0053a8c2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53a8c7u); f_0082d838();
    /* 0053a8c7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0053a8ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a8cc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53a8d1u); f_0082d8bc();
    /* 0053a8d1: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0053a8d7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0053a8db: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0053a8e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053a8e5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0053a8e9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0053a8ed: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053a8f1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0053a8f5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0053a8f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0053a8fb: jl 0x53a909 */ if ((fS!=fO)) goto L_0053a909;
L_0053a8fd:; BB(0x0053a8fd);
    /* 0053a8fd: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a900: jl 0x53a90b */ if ((fS!=fO)) goto L_0053a90b;
L_0053a902:; BB(0x0053a902);
    /* 0053a902: mov eax, 0xa */ r_eax = 0xau;
    /* 0053a907: jmp 0x53a90b */ goto L_0053a90b;
L_0053a909:; BB(0x0053a909);
    /* 0053a909: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053a90b:; BB(0x0053a90b);
    /* 0053a90b: fld dword ptr [0x923270] */ FPUSH(R_F32((u32)(0x923270u)));
    /* 0053a911: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 0053a917: mov ebp, dword ptr [esi + 0xdc] */ r_ebp = R32((u32)(r_esi+0xdcu));
    /* 0053a91d: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 0053a923: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053a925: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0053a929: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a92b: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0053a92f: mov ebp, dword ptr [ebp + eax*8 + 4] */ r_ebp = R32((u32)(r_ebp+r_eax*8+0x4u));
    /* 0053a933: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0053a935: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053a937: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053a938: jbe 0x53a93e */ if ((fC||fZ)) goto L_0053a93e;
L_0053a93a:; BB(0x0053a93a);
    /* 0053a93a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053a93c: jmp 0x53a967 */ goto L_0053a967;
L_0053a93e:; BB(0x0053a93e);
    /* 0053a93e: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0053a941: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053a944: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0053a948: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0053a94c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0053a94f: fadd dword ptr [edx*4 + 0x923190] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x923190u));
    /* 0053a956: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053a958: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053a95a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053a95b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053a95d: jb 0x53a961 */ if (fC) goto L_0053a961;
L_0053a95f:; BB(0x0053a95f);
    /* 0053a95f: fst st(1) */ ST(1) = ST(0);
L_0053a961:; BB(0x0053a961);
    /* 0053a961: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053a963: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0053a967:; BB(0x0053a967);
    /* 0053a967: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x53a96cu); f_0082fa9c();
    /* 0053a96c: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0053a970: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0053a973: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053a977: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053a97a: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0053a97e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x53a983u); f_0083046c();
    /* 0053a983: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x53a988u); f_0082faac();
    /* 0053a988: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53a98du); f_0082da80();
    /* 0053a98d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x53a992u); f_0082dab0();
L_0053a992:; BB(0x0053a992);
    /* 0053a992: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053a995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053a997: ret  */ FN_RET(0x0053a860); r_esp += 4; return;
}

void f_0053a998(void) /* sub_53A998 */
{
    FN_ENTER(0x0053a998);
    /* 0053a998: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0053a99c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053a99f: ja 0x53aa30 */ if ((!fC&&!fZ)) goto L_0053aa30;
L_0053a9a5:; BB(0x0053a9a5);
    /* 0053a9a5: mov eax, dword ptr [eax*4 + 0x923108] */ r_eax = R32((u32)(r_eax*4+0x923108u));
    /* 0053a9ac: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a998); r_esp += 12; return;
}

void f_0053a9ae(void)
{
    FN_ENTER(0x0053a9ae);
    /* 0053a9ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9b3: call 0x53aa34 */ r_esp -= 4; W32(r_esp, 0x53a9b8u); f_0053aa34();
    /* 0053a9b8: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9ae); r_esp += 12; return;
}

void f_0053a9ba(void)
{
    FN_ENTER(0x0053a9ba);
    /* 0053a9ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9bf: call 0x53aaf8 */ r_esp -= 4; W32(r_esp, 0x53a9c4u); f_0053aaf8();
    /* 0053a9c4: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9ba); r_esp += 12; return;
}

void f_0053a9c6(void)
{
    FN_ENTER(0x0053a9c6);
    /* 0053a9c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9cb: call 0x53ac24 */ r_esp -= 4; W32(r_esp, 0x53a9d0u); f_0053ac24();
    /* 0053a9d0: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9c6); r_esp += 12; return;
}

void f_0053a9d2(void)
{
    FN_ENTER(0x0053a9d2);
    /* 0053a9d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9d7: call 0x53b520 */ r_esp -= 4; W32(r_esp, 0x53a9dcu); f_0053b520();
    /* 0053a9dc: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9d2); r_esp += 12; return;
}

void f_0053a9de(void)
{
    FN_ENTER(0x0053a9de);
    /* 0053a9de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9e3: call 0x53b64c */ r_esp -= 4; W32(r_esp, 0x53a9e8u); f_0053b64c();
    /* 0053a9e8: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9de); r_esp += 12; return;
}

void f_0053a9ea(void)
{
    FN_ENTER(0x0053a9ea);
    /* 0053a9ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9ef: call 0x53b9fc */ r_esp -= 4; W32(r_esp, 0x53a9f4u); f_0053b9fc();
    /* 0053a9f4: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9ea); r_esp += 12; return;
}

void f_0053a9f6(void)
{
    FN_ENTER(0x0053a9f6);
    /* 0053a9f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053a9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9fb: call 0x53c1c8 */ r_esp -= 4; W32(r_esp, 0x53aa00u); f_0053c1c8();
    /* 0053aa00: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053a9f6); r_esp += 12; return;
}

void f_0053aa02(void)
{
    FN_ENTER(0x0053aa02);
    /* 0053aa02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053aa06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa07: call 0x53c408 */ r_esp -= 4; W32(r_esp, 0x53aa0cu); f_0053c408();
    /* 0053aa0c: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053aa02); r_esp += 12; return;
}

void f_0053aa0e(void)
{
    FN_ENTER(0x0053aa0e);
    /* 0053aa0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053aa12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa13: call 0x53c538 */ r_esp -= 4; W32(r_esp, 0x53aa18u); f_0053c538();
    /* 0053aa18: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053aa0e); r_esp += 12; return;
}

void f_0053aa1a(void)
{
    FN_ENTER(0x0053aa1a);
    /* 0053aa1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053aa1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa1f: call 0x53c724 */ r_esp -= 4; W32(r_esp, 0x53aa24u); f_0053c724();
    /* 0053aa24: jmp 0x53aa30 */ goto L_0053aa30;
L_0053aa30:; BB(0x0053aa30);
    /* 0053aa30: ret 8 */ FN_RET(0x0053aa1a); r_esp += 12; return;
}

void f_0053aa26(void)
{
    FN_ENTER(0x0053aa26);
    /* 0053aa26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053aa2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa2b: call 0x53ccd8 */ r_esp -= 4; W32(r_esp, 0x53aa30u); f_0053ccd8();
    /* 0053aa30: ret 8 */ FN_RET(0x0053aa26); r_esp += 12; return;
}

void f_0053aa34(void) /* sub_53AA34 */
{
    FN_ENTER(0x0053aa34);
    /* 0053aa34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053aa37: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053aa3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aa3e: je 0x53aa86 */ if (fZ) goto L_0053aa86;
L_0053aa40:; BB(0x0053aa40);
    /* 0053aa40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053aa43: je 0x53aa82 */ if (fZ) goto L_0053aa82;
L_0053aa45:; BB(0x0053aa45);
    /* 0053aa45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053aa47: jne 0x53aa82 */ if (!fZ) goto L_0053aa82;
L_0053aa49:; BB(0x0053aa49);
    /* 0053aa49: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053aa4b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53aa50u); f_007aa094();
    /* 0053aa50: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0053aa56: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 0053aa5c: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x53aa5fu); call_ind(t); }
    /* 0053aa5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053aa61: je 0x53aa82 */ if (fZ) goto L_0053aa82;
L_0053aa63:; BB(0x0053aa63);
    /* 0053aa63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa65: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0053aa68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa69: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x53aa6eu); f_00578658();
    /* 0053aa6e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0053aa72: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053aa77: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053aa7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053aa7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053aa7f: ret 4 */ FN_RET(0x0053aa34); r_esp += 8; return;
L_0053aa82:; BB(0x0053aa82);
    /* 0053aa82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053aa83: ret 4 */ FN_RET(0x0053aa34); r_esp += 8; return;
L_0053aa86:; BB(0x0053aa86);
    /* 0053aa86: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0053aa8c: mov eax, 0xa */ r_eax = 0xau;
    /* 0053aa91: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053aa98: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053aa9a: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053aa9d: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053aaa0: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0053aaa6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053aaa8: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x53aaaeu); call_ind(t); }
    /* 0053aaae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053aab0: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x53aab5u); f_0051f894();
    /* 0053aab5: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0053aabb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aabc: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x53aac1u); f_005787fc();
    /* 0053aac1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053aac2: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 0053aac8: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x53aacdu); f_00512458();
    /* 0053aacd: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053aad2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053aad4: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53aad9u); f_007879b8();
    /* 0053aad9: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053aadc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053aade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053aadf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053aae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053aae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aae2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53aae7u); f_00814298();
    /* 0053aae7: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aaec: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x53aaf1u); f_00814680();
    /* 0053aaf1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053aaf4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053aaf5: ret 4 */ FN_RET(0x0053aa34); r_esp += 8; return;
}

void f_0053aaf8(void) /* sub_53AAF8 */
{
    FN_ENTER(0x0053aaf8);
    /* 0053aaf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053aaf9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053aafc: mov edi, ecx */ r_edi = r_ecx;
    /* 0053aafe: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0053ab02: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ab05: je 0x53abe4 */ if (fZ) goto L_0053abe4;
L_0053ab0b:; BB(0x0053ab0b);
    /* 0053ab0b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ab0e: je 0x53abbb */ if (fZ) goto L_0053abbb;
L_0053ab14:; BB(0x0053ab14);
    /* 0053ab14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ab16: jne 0x53aba1 */ if (!fZ) goto L_0053aba1;
L_0053ab1c:; BB(0x0053ab1c);
    /* 0053ab1c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ab1e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53ab23u); f_007aa094();
    /* 0053ab23: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 0053ab29: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 0053ab2f: add dword ptr [edi + 0x48c], -1 */ { u32 ad = (u32)(r_edi+0x48cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053ab36: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053ab39: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 0053ab3f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053ab43: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053ab47: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053ab4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab4b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x53ab50u); f_007828e4();
    /* 0053ab50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053ab51: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ab54: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0053ab58: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0053ab5c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053ab60: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ab62: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053ab65: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053ab69: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53ab6eu); f_005209d4();
    /* 0053ab6e: fld dword ptr [0x92326c] */ FPUSH(R_F32((u32)(0x92326cu)));
    /* 0053ab74: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0053ab7a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053ab7c: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0053ab82: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053ab84: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053ab86: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0053ab8c: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0053ab92: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ab94: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53ab9au); call_ind(t); }
    /* 0053ab9a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ab9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053ab9e: ret 4 */ FN_RET(0x0053aaf8); r_esp += 8; return;
L_0053aba1:; BB(0x0053aba1);
    /* 0053aba1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aba4: jne 0x53abdd */ if (!fZ) goto L_0053abdd;
L_0053aba6:; BB(0x0053aba6);
    /* 0053aba6: mov ecx, edi */ r_ecx = r_edi;
    /* 0053aba8: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x53abadu); f_0051f81c();
    /* 0053abad: mov ecx, edi */ r_ecx = r_edi;
    /* 0053abaf: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x53abb4u); f_00520be8();
    /* 0053abb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053abb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053abb8: ret 4 */ FN_RET(0x0053aaf8); r_esp += 8; return;
L_0053abbb:; BB(0x0053abbb);
    /* 0053abbb: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0053abc1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053abc3: je 0x53abdd */ if (fZ) goto L_0053abdd;
L_0053abc5:; BB(0x0053abc5);
    /* 0053abc5: mov ecx, edi */ r_ecx = r_edi;
    /* 0053abc7: call 0x53ac08 */ r_esp -= 4; W32(r_esp, 0x53abccu); f_0053ac08();
    /* 0053abcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053abce: jne 0x53abdd */ if (!fZ) goto L_0053abdd;
L_0053abd0:; BB(0x0053abd0);
    /* 0053abd0: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053abd6: mov ecx, edi */ r_ecx = r_edi;
    /* 0053abd8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53abddu); f_0051f62c();
L_0053abdd:; BB(0x0053abdd);
    /* 0053abdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053abe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053abe1: ret 4 */ FN_RET(0x0053aaf8); r_esp += 8; return;
L_0053abe4:; BB(0x0053abe4);
    /* 0053abe4: mov eax, 6 */ r_eax = 0x6u;
    /* 0053abe9: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053abf0: mov ecx, edi */ r_ecx = r_edi;
    /* 0053abf2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53abf7u); f_007aa094();
    /* 0053abf7: mov ecx, edi */ r_ecx = r_edi;
    /* 0053abf9: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x53abfeu); f_00520bdc();
    /* 0053abfe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ac01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053ac02: ret 4 */ FN_RET(0x0053aaf8); r_esp += 8; return;
}

void f_0053ac08(void) /* sub_53AC08 */
{
    FN_ENTER(0x0053ac08);
    /* 0053ac08: mov eax, dword ptr [ecx + 0x49c] */ r_eax = R32((u32)(r_ecx+0x49cu));
    /* 0053ac0e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ac11: jl 0x53ac20 */ if ((fS!=fO)) goto L_0053ac20;
L_0053ac13:; BB(0x0053ac13);
    /* 0053ac13: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac15: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53ac1au); f_0051f62c();
    /* 0053ac1a: mov eax, 1 */ r_eax = 0x1u;
    /* 0053ac1f: ret  */ FN_RET(0x0053ac08); r_esp += 4; return;
L_0053ac20:; BB(0x0053ac20);
    /* 0053ac20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053ac22: ret  */ FN_RET(0x0053ac08); r_esp += 4; return;
}

void f_0053ac24(void) /* sub_53AC24 */
{
    FN_ENTER(0x0053ac24);
    /* 0053ac24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac25: mov ebx, esp */ r_ebx = r_esp;
    /* 0053ac27: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0053ac2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac2c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0053ac2f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0053ac33: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ac35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac37: push 0x8d52f0 */ { u32 v = 0x8d52f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac3c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053ac42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac43: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053ac4a: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ac4d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053ac50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053ac53: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0053ac56: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0053ac59: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053ac5c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0053ac5f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac62: je 0x53b4aa */ if (fZ) goto L_0053b4aa;
L_0053ac68:; BB(0x0053ac68);
    /* 0053ac68: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac6b: je 0x53afb6 */ if (fZ) goto L_0053afb6;
L_0053ac71:; BB(0x0053ac71);
    /* 0053ac71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac73: jne 0x53af71 */ if (!fZ) goto L_0053af71;
L_0053ac79:; BB(0x0053ac79);
    /* 0053ac79: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53ac7eu); f_007aa094();
    /* 0053ac7e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ac81: mov eax, dword ptr [eax + 0x4b4] */ r_eax = R32((u32)(r_eax+0x4b4u));
    /* 0053ac87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac89: je 0x53b101 */ if (fZ) goto L_0053b101;
L_0053ac8f:; BB(0x0053ac8f);
    /* 0053ac8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac92: je 0x53aeca */ if (fZ) goto L_0053aeca;
L_0053ac98:; BB(0x0053ac98);
    /* 0053ac98: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ac9b: jne 0x53ae97 */ if (!fZ) goto L_0053ae97;
L_0053aca1:; BB(0x0053aca1);
    /* 0053aca1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053aca4: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0053acaa: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053acad: je 0x53acb6 */ if (fZ) goto L_0053acb6;
L_0053acaf:; BB(0x0053acaf);
    /* 0053acaf: mov eax, 1 */ r_eax = 0x1u;
    /* 0053acb4: jmp 0x53acb8 */ goto L_0053acb8;
L_0053acb6:; BB(0x0053acb6);
    /* 0053acb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053acb8:; BB(0x0053acb8);
    /* 0053acb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053acba: je 0x53ade8 */ if (fZ) goto L_0053ade8;
L_0053acc0:; BB(0x0053acc0);
    /* 0053acc0: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53acc5u); f_00520e6c();
    /* 0053acc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053acc7: je 0x53adb8 */ if (fZ) goto L_0053adb8;
L_0053accd:; BB(0x0053accd);
    /* 0053accd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053acd0: mov eax, dword ptr [eax + 0x4b8] */ r_eax = R32((u32)(r_eax+0x4b8u));
    /* 0053acd6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053acd9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053acdc: jl 0x53ad17 */ if ((fS!=fO)) goto L_0053ad17;
L_0053acde:; BB(0x0053acde);
    /* 0053acde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ace1: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 0053ace7: mov dword ptr [ecx + 0x4b4], 3 */ W32((u32)(r_ecx+0x4b4u), 0x3u);
    /* 0053acf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053acf3: mov dword ptr [ecx + 0x490], 1 */ W32((u32)(r_ecx+0x490u), 0x1u);
    /* 0053acfd: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 0053ad03: mov dword ptr [ecx + 0x49c], eax */ W32((u32)(r_ecx+0x49cu), r_eax);
    /* 0053ad09: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053ad0c: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 0053ad12: jmp 0x53ade8 */ goto L_0053ade8;
L_0053ad17:; BB(0x0053ad17);
    /* 0053ad17: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ad1a: fld dword ptr [0x923268] */ FPUSH(R_F32((u32)(0x923268u)));
    /* 0053ad20: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0053ad23: mov dword ptr [edi + 0x4b8], eax */ W32((u32)(r_edi+0x4b8u), r_eax);
    /* 0053ad29: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0053ad2f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0053ad34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053ad36: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053ad39: mov edi, 0 */ r_edi = 0x0u;
    /* 0053ad3e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0053ad41: jle 0x53aff2 */ if ((fZ||fS!=fO)) goto L_0053aff2;
L_0053ad47:; BB(0x0053ad47);
    /* 0053ad47: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0053ad4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad4f: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x53ad54u); f_00520f3c();
    /* 0053ad54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053ad55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ad57: je 0x53ada9 */ if (fZ) goto L_0053ada9;
L_0053ad59:; BB(0x0053ad59);
    /* 0053ad59: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ad5c: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 0053ad62: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053ad65: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0053ad68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad6a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x53ad6fu); f_007a9180();
    /* 0053ad6f: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0053ad72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ad75: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0053ad78: fcomp dword ptr [0xa73610] */ fx_compare(ST(0), R_F32((u32)(0xa73610u))); FPOP();
    /* 0053ad7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ad80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ad81: jae 0x53ada9 */ if (!fC) goto L_0053ada9;
L_0053ad83:; BB(0x0053ad83);
    /* 0053ad83: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0053ad86: fcomp dword ptr [ebp - 0x34] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffccu))); FPOP();
    /* 0053ad89: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ad8b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ad8c: jbe 0x53ada9 */ if ((fC||fZ)) goto L_0053ada9;
L_0053ad8e:; BB(0x0053ad8e);
    /* 0053ad8e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053ad91: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0053ad97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad99: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x53ad9eu); f_00780d3c();
    /* 0053ad9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ada1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ada3: je 0x53afe0 */ if (fZ) goto L_0053afe0;
L_0053ada9:; BB(0x0053ada9);
    /* 0053ada9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053adac: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053adaf: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053adb1: jl 0x53ad47 */ if ((fS!=fO)) goto L_0053ad47;
L_0053adb3:; BB(0x0053adb3);
    /* 0053adb3: jmp 0x53aff2 */ goto L_0053aff2;
L_0053adb8:; BB(0x0053adb8);
    /* 0053adb8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053adbb: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 0053adc1: mov dword ptr [edx + 0x4b4], 3 */ W32((u32)(r_edx+0x4b4u), 0x3u);
    /* 0053adcb: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053adce: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 0053add8: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0053adde: mov dword ptr [edx + 0x490], 1 */ W32((u32)(r_edx+0x490u), 0x1u);
L_0053ade8:; BB(0x0053ade8);
    /* 0053ade8: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aded: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053adf0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53adf5u); f_007aaa30();
    /* 0053adf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053adf7: je 0x53ae47 */ if (fZ) goto L_0053ae47;
L_0053adf9:; BB(0x0053adf9);
    /* 0053adf9: mov eax, dword ptr [0xa7362c] */ r_eax = R32((u32)(0xa7362cu));
    /* 0053adfe: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 0053ae01: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ae04: mov eax, dword ptr [edx + 0x4bc] */ r_eax = R32((u32)(r_edx+0x4bcu));
    /* 0053ae0a: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ae0f: jle 0x53ae15 */ if ((fZ||fS!=fO)) goto L_0053ae15;
L_0053ae11:; BB(0x0053ae11);
    /* 0053ae11: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0053ae13: jmp 0x53ae20 */ goto L_0053ae20;
L_0053ae15:; BB(0x0053ae15);
    /* 0053ae15: cmp eax, 0x46 */ {  u32 a = r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ae18: jle 0x53ae20 */ if ((fZ||fS!=fO)) goto L_0053ae20;
L_0053ae1a:; BB(0x0053ae1a);
    /* 0053ae1a: fmul dword ptr [0x923260] */ ST(0) = ST(0) * R_F32((u32)(0x923260u));
L_0053ae20:; BB(0x0053ae20);
    /* 0053ae20: mov esi, edx */ r_esi = r_edx;
    /* 0053ae22: mov edx, dword ptr [esi + 0x4c0] */ r_edx = R32((u32)(r_esi+0x4c0u));
    /* 0053ae28: mov ecx, dword ptr [esi + 0x4a8] */ r_ecx = R32((u32)(r_esi+0x4a8u));
    /* 0053ae2e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ae31: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053ae35: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053ae39: lea eax, [esi + 0x470] */ r_eax = (u32)(r_esi+0x470u);
    /* 0053ae3f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053ae42: call 0x53de7c */ r_esp -= 4; W32(r_esp, 0x53ae47u); f_0053de7c();
L_0053ae47:; BB(0x0053ae47);
    /* 0053ae47: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ae4a: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 0053ae50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ae52: je 0x53b088 */ if (fZ) goto L_0053b088;
L_0053ae58:; BB(0x0053ae58);
    /* 0053ae58: mov edx, eax */ r_edx = r_eax;
    /* 0053ae5a: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0053ae60: fcom dword ptr [0x923250] */ fx_compare(ST(0), R_F32((u32)(0x923250u))); 
    /* 0053ae66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ae68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ae69: jb 0x53ae76 */ if (fC) goto L_0053ae76;
L_0053ae6b:; BB(0x0053ae6b);
    /* 0053ae6b: fcom dword ptr [0x92324c] */ fx_compare(ST(0), R_F32((u32)(0x92324cu))); 
    /* 0053ae71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ae73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ae74: jbe 0x53ae82 */ if ((fC||fZ)) goto L_0053ae82;
L_0053ae76:; BB(0x0053ae76);
    /* 0053ae76: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053ae78: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53ae7du); f_00508f48();
    /* 0053ae7d: jmp 0x53af59 */ goto L_0053af59;
L_0053ae82:; BB(0x0053ae82);
    /* 0053ae82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053ae84: mov eax, edx */ r_eax = r_edx;
    /* 0053ae86: lea edx, [eax + 0x470] */ r_edx = (u32)(r_eax+0x470u);
    /* 0053ae8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae8d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53ae92u); f_00508db8();
    /* 0053ae92: jmp 0x53af59 */ goto L_0053af59;
L_0053ae97:; BB(0x0053ae97);
    /* 0053ae97: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ae9a: jne 0x53af59 */ if (!fZ) goto L_0053af59;
L_0053aea0:; BB(0x0053aea0);
    /* 0053aea0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053aea3: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 0053aea9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053aeac: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 0053aeb2: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053aeb5: jl 0x53af59 */ if ((fS!=fO)) goto L_0053af59;
L_0053aebb:; BB(0x0053aebb);
    /* 0053aebb: mov dword ptr [eax + 0x4b4], 4 */ W32((u32)(r_eax+0x4b4u), 0x4u);
    /* 0053aec5: jmp 0x53af59 */ goto L_0053af59;
L_0053aeca:; BB(0x0053aeca);
    /* 0053aeca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053aecd: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aed2: push dword ptr [eax + 0x4c0] */ { u32 v = R32((u32)(r_eax+0x4c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053aed8: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053aedb: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x53aee0u); f_007a8c74();
    /* 0053aee0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053aee3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053aee6: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0053aee9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0053aeec: cmp eax, dword ptr [edx + 0x4c0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aef2: jne 0x53af2a */ if (!fZ) goto L_0053af2a;
L_0053aef4:; BB(0x0053aef4);
    /* 0053aef4: mov ecx, edx */ r_ecx = r_edx;
    /* 0053aef6: mov dword ptr [ecx + 0x4b4], 2 */ W32((u32)(r_ecx+0x4b4u), 0x2u);
    /* 0053af00: mov eax, 5 */ r_eax = 0x5u;
    /* 0053af05: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053af0c: push 0x1d5 */ { u32 v = 0x1d5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af11: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53af16u); f_007879b8();
    /* 0053af16: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af19: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 0053af1c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053af1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053af1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053af20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053af21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053af22: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53af27u); f_00814298();
    /* 0053af27: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053af2a:; BB(0x0053af2a);
    /* 0053af2a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af2d: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 0053af33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053af35: je 0x53af51 */ if (fZ) goto L_0053af51;
L_0053af37:; BB(0x0053af37);
    /* 0053af37: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053af3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053af40: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053af44: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af47: mov dword ptr [edx + 0x4cc], 0 */ W32((u32)(r_edx+0x4ccu), 0x0u);
L_0053af51:; BB(0x0053af51);
    /* 0053af51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af54: call 0x53b4f8 */ r_esp -= 4; W32(r_esp, 0x53af59u); f_0053b4f8();
L_0053af59:; BB(0x0053af59);
    /* 0053af59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af5c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053af5e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x53af64u); call_ind(t); }
    /* 0053af64: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053af67: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053af69: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53af6fu); call_ind(t); }
    /* 0053af6f: jmp 0x53afc7 */ goto L_0053afc7;
L_0053af71:; BB(0x0053af71);
    /* 0053af71: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053af74: jne 0x53afc7 */ if (!fZ) goto L_0053afc7;
L_0053af76:; BB(0x0053af76);
    /* 0053af76: mov edx, ecx */ r_edx = r_ecx;
    /* 0053af78: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 0053af7e: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 0053af88: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053af8b: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0053af91: mov edx, dword ptr [edx + 0x4cc] */ r_edx = R32((u32)(r_edx+0x4ccu));
    /* 0053af97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053af99: je 0x53afc7 */ if (fZ) goto L_0053afc7;
L_0053af9b:; BB(0x0053af9b);
    /* 0053af9b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053af9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053afa4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053afa8: mov edx, ecx */ r_edx = r_ecx;
    /* 0053afaa: mov dword ptr [edx + 0x4cc], 0 */ W32((u32)(r_edx+0x4ccu), 0x0u);
    /* 0053afb4: jmp 0x53afc7 */ goto L_0053afc7;
L_0053afb6:; BB(0x0053afb6);
    /* 0053afb6: mov eax, ecx */ r_eax = r_ecx;
    /* 0053afb8: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 0053afbe: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053afc1: je 0x53b49e */ if (fZ) goto L_0053b49e;
L_0053afc7:; BB(0x0053afc7);
    /* 0053afc7: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053afca: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053afcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053afd0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053afd7: mov esp, ebp */ r_esp = r_ebp;
    /* 0053afd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053afda: mov esp, ebx */ r_esp = r_ebx;
    /* 0053afdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053afdd: ret 4 */ FN_RET(0x0053ac24); r_esp += 8; return;
L_0053afe0:; BB(0x0053afe0);
    /* 0053afe0: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0053afe3: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0053afe7: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0053afea: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053afed: jmp 0x53ada9 */ goto L_0053ada9;
L_0053aff2:; BB(0x0053aff2);
    /* 0053aff2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053aff5: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053affa: je 0x53b06e */ if (fZ) goto L_0053b06e;
L_0053affc:; BB(0x0053affc);
    /* 0053affc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053afff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b000: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x53b005u); f_00520fcc();
    /* 0053b005: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b008: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53b00du); f_005213d8();
    /* 0053b00d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b010: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53b015u); f_00521410();
    /* 0053b015: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b018: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0053b01e: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0053b024: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053b026: fmul qword ptr [0x923188] */ ST(0) = ST(0) * R_F64((u32)(0x923188u));
    /* 0053b02c: fdiv qword ptr [0x923180] */ ST(0) = ST(0) / R_F64((u32)(0x923180u));
    /* 0053b032: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b035: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 0053b038: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b03c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b041: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053b044: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0053b047: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053b04a: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b04d: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 0053b051: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 0053b057: mov edx, 1 */ r_edx = 0x1u;
    /* 0053b05c: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 0053b062: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0053b069: jmp 0x53ade8 */ goto L_0053ade8;
L_0053b06e:; BB(0x0053b06e);
    /* 0053b06e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b071: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x53b076u); f_00520f68();
    /* 0053b076: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b079: mov dword ptr [eax + 0x4b4], 4 */ W32((u32)(r_eax+0x4b4u), 0x4u);
    /* 0053b083: jmp 0x53ade8 */ goto L_0053ade8;
L_0053b088:; BB(0x0053b088);
    /* 0053b088: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b08d: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0053b090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b091: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53b096u); f_00509590();
    /* 0053b096: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b099: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b09c: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 0053b0a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b0a4: je 0x53af59 */ if (fZ) goto L_0053af59;
L_0053b0aa:; BB(0x0053b0aa);
    /* 0053b0aa: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 0053b0b4: mov eax, dword ptr [edx + 0x4c0] */ r_eax = R32((u32)(r_edx+0x4c0u));
    /* 0053b0ba: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b0bf: mov dword ptr [ebp - 0x80], 0xffffc000 */ W32((u32)(r_ebp+0xffffff80u), 0xffffc000u);
    /* 0053b0c6: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0053b0cc: mov ecx, dword ptr [edx + 0x4cc] */ r_ecx = R32((u32)(r_edx+0x4ccu));
    /* 0053b0d2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b0d4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x53b0d9u); f_00508efc();
    /* 0053b0d9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b0dc: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0053b0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b0e3: mov ecx, dword ptr [edx + 0x4cc] */ r_ecx = R32((u32)(r_edx+0x4ccu));
    /* 0053b0e9: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x53b0eeu); f_00508dd0();
    /* 0053b0ee: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b0f1: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 0053b0f7: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53b0fcu); f_00508f48();
    /* 0053b0fc: jmp 0x53af59 */ goto L_0053af59;
L_0053b101:; BB(0x0053b101);
    /* 0053b101: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b104: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0053b10a: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053b10d: je 0x53b116 */ if (fZ) goto L_0053b116;
L_0053b10f:; BB(0x0053b10f);
    /* 0053b10f: mov eax, 1 */ r_eax = 0x1u;
    /* 0053b114: jmp 0x53b118 */ goto L_0053b118;
L_0053b116:; BB(0x0053b116);
    /* 0053b116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053b118:; BB(0x0053b118);
    /* 0053b118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b11a: je 0x53b1b7 */ if (fZ) goto L_0053b1b7;
L_0053b120:; BB(0x0053b120);
    /* 0053b120: fld dword ptr [0x923268] */ FPUSH(R_F32((u32)(0x923268u)));
    /* 0053b126: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0053b12b: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0053b12e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053b130: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0053b135: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0053b138: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053b13b: mov edi, 0 */ r_edi = 0x0u;
    /* 0053b140: jle 0x53b32e */ if ((fZ||fS!=fO)) goto L_0053b32e;
L_0053b146:; BB(0x0053b146);
    /* 0053b146: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0053b14d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b14e: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x53b153u); f_00520f3c();
    /* 0053b153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b156: je 0x53b1a8 */ if (fZ) goto L_0053b1a8;
L_0053b158:; BB(0x0053b158);
    /* 0053b158: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b15b: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 0053b161: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053b164: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0053b167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b169: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x53b16eu); f_007a9180();
    /* 0053b16e: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0053b171: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b174: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0053b177: fcomp dword ptr [0xa73610] */ fx_compare(ST(0), R_F32((u32)(0xa73610u))); FPOP();
    /* 0053b17d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b17f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b180: jae 0x53b1a8 */ if (!fC) goto L_0053b1a8;
L_0053b182:; BB(0x0053b182);
    /* 0053b182: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0053b185: fcomp dword ptr [ebp - 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffd4u))); FPOP();
    /* 0053b188: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b18a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b18b: jbe 0x53b1a8 */ if ((fC||fZ)) goto L_0053b1a8;
L_0053b18d:; BB(0x0053b18d);
    /* 0053b18d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053b190: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0053b196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b198: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x53b19du); f_00780d3c();
    /* 0053b19d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b1a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b1a2: je 0x53b3f5 */ if (fZ) goto L_0053b3f5;
L_0053b1a8:; BB(0x0053b1a8);
    /* 0053b1a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053b1ab: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053b1ae: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b1b0: jl 0x53b146 */ if ((fS!=fO)) goto L_0053b146;
L_0053b1b2:; BB(0x0053b1b2);
    /* 0053b1b2: jmp 0x53b32e */ goto L_0053b32e;
L_0053b1b7:; BB(0x0053b1b7);
    /* 0053b1b7: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b1bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b1bf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53b1c4u); f_007aaa30();
    /* 0053b1c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b1c6: je 0x53b232 */ if (fZ) goto L_0053b232;
L_0053b1c8:; BB(0x0053b1c8);
    /* 0053b1c8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b1cb: fld dword ptr [0x92325c] */ FPUSH(R_F32((u32)(0x92325cu)));
    /* 0053b1d1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0053b1d4: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0053b1d7: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 0053b1da: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0053b1dd: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0053b1e4: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0053b1e7: fadd dword ptr [ebp - 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff88u));
    /* 0053b1ea: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 0053b1ed: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0053b1f0: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b1f5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53b1fau); f_005caba4();
    /* 0053b1fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b1fb: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0053b1fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b200: je 0x53b22b */ if (fZ) goto L_0053b22b;
L_0053b202:; BB(0x0053b202);
    /* 0053b202: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 0053b209: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053b210: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b215: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b218: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b21a: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0053b21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b21e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b21f: call 0x53d420 */ r_esp -= 4; W32(r_esp, 0x53b224u); f_0053d420();
    /* 0053b224: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0053b22b:; BB(0x0053b22b);
    /* 0053b22b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0053b232:; BB(0x0053b232);
    /* 0053b232: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b237: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b23a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53b23fu); f_007aaa30();
    /* 0053b23f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b241: jne 0x53b293 */ if (!fZ) goto L_0053b293;
L_0053b243:; BB(0x0053b243);
    /* 0053b243: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b246: mov ecx, dword ptr [eax + 0x4cc] */ r_ecx = R32((u32)(r_eax+0x4ccu));
    /* 0053b24c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b24e: je 0x53b3c4 */ if (fZ) goto L_0053b3c4;
L_0053b254:; BB(0x0053b254);
    /* 0053b254: mov edx, eax */ r_edx = r_eax;
    /* 0053b256: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0053b25c: fcom dword ptr [0x923248] */ fx_compare(ST(0), R_F32((u32)(0x923248u))); 
    /* 0053b262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b265: jb 0x53b272 */ if (fC) goto L_0053b272;
L_0053b267:; BB(0x0053b267);
    /* 0053b267: fcom dword ptr [0x923244] */ fx_compare(ST(0), R_F32((u32)(0x923244u))); 
    /* 0053b26d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b26f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b270: jbe 0x53b27e */ if ((fC||fZ)) goto L_0053b27e;
L_0053b272:; BB(0x0053b272);
    /* 0053b272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053b274: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53b279u); f_00508f48();
    /* 0053b279: jmp 0x53af59 */ goto L_0053af59;
L_0053b27e:; BB(0x0053b27e);
    /* 0053b27e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053b280: mov eax, edx */ r_eax = r_edx;
    /* 0053b282: lea edx, [eax + 0x47c] */ r_edx = (u32)(r_eax+0x47cu);
    /* 0053b288: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b289: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53b28eu); f_00508db8();
    /* 0053b28e: jmp 0x53af59 */ goto L_0053af59;
L_0053b293:; BB(0x0053b293);
    /* 0053b293: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0053b299: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053b29c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b29e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053b2a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053b2a2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053b2a5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053b2a8: jle 0x53b2ff */ if ((fZ||fS!=fO)) goto L_0053b2ff;
L_0053b2aa:; BB(0x0053b2aa);
    /* 0053b2aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053b2ad: mov edi, dword ptr [eax*4 + 0xaad720] */ r_edi = R32((u32)(r_eax*4+0xaad720u));
    /* 0053b2b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2b5: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x53b2bau); f_00520f3c();
    /* 0053b2ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b2bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b2bd: je 0x53b2ef */ if (fZ) goto L_0053b2ef;
L_0053b2bf:; BB(0x0053b2bf);
    /* 0053b2bf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b2c2: lea esi, [esi + 0x300] */ r_esi = (u32)(r_esi+0x300u);
    /* 0053b2c8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0053b2cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2cd: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x53b2d2u); f_007a9180();
    /* 0053b2d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053b2d4: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0053b2da: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053b2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2df: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x53b2e4u); f_00780d3c();
    /* 0053b2e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b2e9: je 0x53b407 */ if (fZ) goto L_0053b407;
L_0053b2ef:; BB(0x0053b2ef);
    /* 0053b2ef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053b2f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053b2f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b2f8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053b2fb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b2fd: jl 0x53b2aa */ if ((fS!=fO)) goto L_0053b2aa;
L_0053b2ff:; BB(0x0053b2ff);
    /* 0053b2ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053b302: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b305: push 0x1d6 */ { u32 v = 0x1d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b30a: mov dword ptr [ecx + 0x4bc], eax */ W32((u32)(r_ecx+0x4bcu), r_eax);
    /* 0053b310: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53b315u); f_007879b8();
    /* 0053b315: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b318: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 0053b31b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b31d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b31e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b31f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b321: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53b326u); f_00814298();
    /* 0053b326: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b329: jmp 0x53b243 */ goto L_0053b243;
L_0053b32e:; BB(0x0053b32e);
    /* 0053b32e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053b331: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b336: je 0x53b3aa */ if (fZ) goto L_0053b3aa;
L_0053b338:; BB(0x0053b338);
    /* 0053b338: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b33c: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x53b341u); f_00520fcc();
    /* 0053b341: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b344: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53b349u); f_005213d8();
    /* 0053b349: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b34c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53b351u); f_00521410();
    /* 0053b351: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b354: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0053b35a: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0053b360: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053b362: fmul qword ptr [0x923188] */ ST(0) = ST(0) * R_F64((u32)(0x923188u));
    /* 0053b368: fdiv qword ptr [0x923180] */ ST(0) = ST(0) / R_F64((u32)(0x923180u));
    /* 0053b36e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b371: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 0053b374: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b378: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b37d: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053b380: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0053b383: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053b386: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b389: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 0053b38d: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 0053b393: mov edx, 1 */ r_edx = 0x1u;
    /* 0053b398: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 0053b39e: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0053b3a5: jmp 0x53af59 */ goto L_0053af59;
L_0053b3aa:; BB(0x0053b3aa);
    /* 0053b3aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b3ad: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x53b3b2u); f_00520f68();
    /* 0053b3b2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b3b5: mov dword ptr [eax + 0x4b4], 4 */ W32((u32)(r_eax+0x4b4u), 0x4u);
    /* 0053b3bf: jmp 0x53af59 */ goto L_0053af59;
L_0053b3c4:; BB(0x0053b3c4);
    /* 0053b3c4: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3c9: lea edx, [eax + 0x47c] */ r_edx = (u32)(r_eax+0x47cu);
    /* 0053b3cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3d0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53b3d5u); f_00509590();
    /* 0053b3d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b3d8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b3db: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 0053b3e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b3e3: je 0x53af59 */ if (fZ) goto L_0053af59;
L_0053b3e9:; BB(0x0053b3e9);
    /* 0053b3e9: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b3eb: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53b3f0u); f_00508f48();
    /* 0053b3f0: jmp 0x53af59 */ goto L_0053af59;
L_0053b3f5:; BB(0x0053b3f5);
    /* 0053b3f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0053b3f8: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0053b3fc: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0053b3ff: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053b402: jmp 0x53b1a8 */ goto L_0053b1a8;
L_0053b407:; BB(0x0053b407);
    /* 0053b407: movsx eax, word ptr [edi + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x336u));
    /* 0053b40e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053b411: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0053b414: fmul dword ptr [0x92328c] */ ST(0) = ST(0) * R_F32((u32)(0x92328cu));
    /* 0053b41a: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 0053b41d: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b421: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053b426: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b42b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053b42e: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0053b431: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053b434: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0053b437: mov ecx, edi */ r_ecx = r_edi;
    /* 0053b439: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053b43c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0053b43f: movsx esi, dx */ r_esi = (u32)(i32)(i16)(u16)r_edx;
    /* 0053b442: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b443: call 0x770bf8 */ r_esp -= 4; W32(r_esp, 0x53b448u); f_00770bf8();
    /* 0053b448: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053b44b: add eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b44e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053b451: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0053b458: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b45a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53b45fu); f_005caba4();
    /* 0053b45f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b460: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0053b463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b465: je 0x53b492 */ if (fZ) goto L_0053b492;
L_0053b467:; BB(0x0053b467);
    /* 0053b467: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 0053b46e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053b475: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b478: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053b47b: lea edx, [edi + 0x47c] */ r_edx = (u32)(r_edi+0x47cu);
    /* 0053b481: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b482: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b484: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b485: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b486: call 0x53da98 */ r_esp -= 4; W32(r_esp, 0x53b48bu); f_0053da98();
    /* 0053b48b: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0053b492:; BB(0x0053b492);
    /* 0053b492: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053b499: jmp 0x53b2ef */ goto L_0053b2ef;
L_0053b49e:; BB(0x0053b49e);
    /* 0053b49e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4a0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53b4a5u); f_0051f62c();
    /* 0053b4a5: jmp 0x53afc7 */ goto L_0053afc7;
L_0053b4aa:; BB(0x0053b4aa);
    /* 0053b4aa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4ac: mov eax, 9 */ r_eax = 0x9u;
    /* 0053b4b1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053b4b8: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53b4bdu); f_0051f664();
    /* 0053b4bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b4c0: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0053b4c6: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053b4c9: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b4cc: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0053b4d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053b4d4: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 0053b4da: mov dword ptr [ecx + 0x4b8], edx */ W32((u32)(r_ecx+0x4b8u), r_edx);
    /* 0053b4e0: mov dword ptr [ecx + 0x4bc], edx */ W32((u32)(r_ecx+0x4bcu), r_edx);
    /* 0053b4e6: mov dword ptr [ecx + 0x4c0], edx */ W32((u32)(r_ecx+0x4c0u), r_edx);
    /* 0053b4ec: mov dword ptr [ecx + 0x4cc], edx */ W32((u32)(r_ecx+0x4ccu), r_edx);
    /* 0053b4f2: jmp 0x53afc7 */ goto L_0053afc7;
}

