#include "protos.h"

void f_0066e0dc(void) /* sub_66E0DC */
{
    FN_ENTER(0x0066e0dc);
    /* 0066e0dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0dd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066e0df: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0066e0e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e0e7: jne 0x66e0eb */ if (!fZ) goto L_0066e0eb;
L_0066e0e9:; BB(0x0066e0e9);
    /* 0066e0e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e0ea: ret  */ FN_RET(0x0066e0dc); r_esp += 4; return;
L_0066e0eb:; BB(0x0066e0eb);
    /* 0066e0eb: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066e0f2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0066e0f5: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0fa: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66e0fdu); call_ind(t); }
    /* 0066e0fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e0ff: jne 0x66e103 */ if (!fZ) goto L_0066e103;
L_0066e101:; BB(0x0066e101);
    /* 0066e101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e102: ret  */ FN_RET(0x0066e0dc); r_esp += 4; return;
L_0066e103:; BB(0x0066e103);
    /* 0066e103: mov ecx, dword ptr [0xa8fd6c] */ r_ecx = R32((u32)(0xa8fd6cu));
    /* 0066e109: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66e10eu); f_00829cc8();
    /* 0066e10e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66e113u); f_0082d7b0();
    /* 0066e113: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0066e116: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66e11bu); f_0082d838();
    /* 0066e11b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0066e11e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e120: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66e125u); f_0082d8bc();
    /* 0066e125: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66e12au); f_0082dbac();
    /* 0066e12a: mov eax, dword ptr [0xa8fd68] */ r_eax = R32((u32)(0xa8fd68u));
    /* 0066e12f: push dword ptr [ebp + 0xcc] */ { u32 v = R32((u32)(r_ebp+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e135: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0066e13b: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0066e141: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0066e144: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066e147: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x66e14cu); f_0083bd00();
    /* 0066e14c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66e151u); f_0082dab0();
    /* 0066e151: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66e156u); f_0082da80();
    /* 0066e156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e157: ret  */ FN_RET(0x0066e0dc); r_esp += 4; return;
}

void f_0066e158(void) /* sub_66E158 */
{
    FN_ENTER(0x0066e158);
    /* 0066e158: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066e159: mov edi, ecx */ r_edi = r_ecx;
    /* 0066e15b: mov ecx, edi */ r_ecx = r_edi;
    /* 0066e15d: call 0x669bd8 */ r_esp -= 4; W32(r_esp, 0x66e162u); f_00669bd8();
    /* 0066e162: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 0066e168: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e16a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066e16c: mov edx, 1 */ r_edx = 0x1u;
    /* 0066e171: jg 0x66e175 */ if ((!fZ&&fS==fO)) goto L_0066e175;
L_0066e173:; BB(0x0066e173);
    /* 0066e173: mov ecx, eax */ r_ecx = r_eax;
L_0066e175:; BB(0x0066e175);
    /* 0066e175: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e178: jl 0x66e17c */ if ((fS!=fO)) goto L_0066e17c;
L_0066e17a:; BB(0x0066e17a);
    /* 0066e17a: mov ecx, edx */ r_ecx = r_edx;
L_0066e17c:; BB(0x0066e17c);
    /* 0066e17c: mov dword ptr [edi + 0x88], ecx */ W32((u32)(r_edi+0x88u), r_ecx);
    /* 0066e182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e184: jne 0x66e192 */ if (!fZ) goto L_0066e192;
L_0066e186:; BB(0x0066e186);
    /* 0066e186: mov dword ptr [edi + 0xd0], 1 */ W32((u32)(r_edi+0xd0u), 0x1u);
    /* 0066e190: jmp 0x66e1ad */ goto L_0066e1ad;
L_0066e192:; BB(0x0066e192);
    /* 0066e192: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e195: jne 0x66e1a3 */ if (!fZ) goto L_0066e1a3;
L_0066e197:; BB(0x0066e197);
    /* 0066e197: mov dword ptr [edi + 0xd0], 0 */ W32((u32)(r_edi+0xd0u), 0x0u);
    /* 0066e1a1: jmp 0x66e1ad */ goto L_0066e1ad;
L_0066e1a3:; BB(0x0066e1a3);
    /* 0066e1a3: mov dword ptr [edi + 0xd0], 1 */ W32((u32)(r_edi+0xd0u), 0x1u);
L_0066e1ad:; BB(0x0066e1ad);
    /* 0066e1ad: push 0x939ef0 */ { u32 v = 0x939ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1b2: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1b7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66e1bcu); f_0061cdb0();
    /* 0066e1bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066e1bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066e1c0: ret  */ FN_RET(0x0066e158); r_esp += 4; return;
}

void f_0066e1c4(void) /* sub_66E1C4 */
{
    FN_ENTER(0x0066e1c4);
    /* 0066e1c4: mov ecx, dword ptr [0xa8fd68] */ r_ecx = R32((u32)(0xa8fd68u));
    /* 0066e1ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e1cc: je 0x66e1d5 */ if (fZ) goto L_0066e1d5;
L_0066e1ce:; BB(0x0066e1ce);
    /* 0066e1ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1d0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x66e1d5u); f_004066a8();
L_0066e1d5:; BB(0x0066e1d5);
    /* 0066e1d5: mov dword ptr [0xa8fd68], 0 */ W32((u32)(0xa8fd68u), 0x0u);
    /* 0066e1df: ret  */ FN_RET(0x0066e1c4); r_esp += 4; return;
}

void f_0066e1e0(void) /* sub_66E1E0 */
{
    FN_ENTER(0x0066e1e0);
    /* 0066e1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066e1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1e5: push 0x8e8eb4 */ { u32 v = 0x8e8eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066e1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e1f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066e1f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066e1fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066e1fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066e201: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066e204: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066e207: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e20c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066e213: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66e218u); f_008581c5();
    /* 0066e218: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e219: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066e21c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e21e: je 0x66e26e */ if (fZ) goto L_0066e26e;
L_0066e220:; BB(0x0066e220);
    /* 0066e220: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066e227: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066e22e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066e231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e235: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e236: push 0x9c967c */ { u32 v = 0x9c967cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e23b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e23d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66e242u); f_005b7a84();
    /* 0066e242: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066e245: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066e24c:; BB(0x0066e24c);
    /* 0066e24c: mov dword ptr [0xa8fd68], eax */ W32((u32)(0xa8fd68u), r_eax);
    /* 0066e251: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0066e257: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0066e25a: mov dword ptr [0xa8fd6c], edx */ W32((u32)(0xa8fd6cu), r_edx);
    /* 0066e260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066e263: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066e26a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066e26c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e26d: ret  */ FN_RET(0x0066e1e0); r_esp += 4; return;
L_0066e26e:; BB(0x0066e26e);
    /* 0066e26e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e270: jmp 0x66e24c */ goto L_0066e24c;
}

void f_0066e274(void) /* sub_66E274 */
{
    FN_ENTER(0x0066e274);
    /* 0066e274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e275: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066e277: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066e279: call 0x66e298 */ r_esp -= 4; W32(r_esp, 0x66e27eu); f_0066e298();
    /* 0066e27e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066e282: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e284: jne 0x66e28a */ if (!fZ) goto L_0066e28a;
L_0066e286:; BB(0x0066e286);
    /* 0066e286: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066e287: ret 4 */ FN_RET(0x0066e274); r_esp += 8; return;
L_0066e28a:; BB(0x0066e28a);
    /* 0066e28a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e28b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66e290u); f_005c2f74();
    /* 0066e290: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066e292: ret 4 */ FN_RET(0x0066e274); r_esp += 8; return;
}

void f_0066e298(void) /* sub_66E298 */
{
    FN_ENTER(0x0066e298);
    /* 0066e298: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e299: mov ebp, esp */ r_ebp = r_esp;
    /* 0066e29b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e29d: push 0x8e8ed0 */ { u32 v = 0x8e8ed0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066e2a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066e2b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066e2b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066e2b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066e2b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066e2bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066e2bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066e2c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066e2c5: mov dword ptr [ecx], 0xb35888 */ W32((u32)(r_ecx), 0xb35888u);
    /* 0066e2cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e2d2: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x66e2d7u); f_007b4aec();
    /* 0066e2d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066e2da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066e2e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0066e2e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e2e4: ret  */ FN_RET(0x0066e298); r_esp += 4; return;
}

void f_0066e2e8(void) /* sub_66E2E8 */
{
    FN_ENTER(0x0066e2e8);
    /* 0066e2e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e2e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066e2eb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e2ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066e2f1: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x66e2f6u); f_007b4b48();
    /* 0066e2f6: mov dword ptr [ebp], 0xb35888 */ W32((u32)(r_ebp), 0xb35888u);
    /* 0066e2fd: mov eax, ebp */ r_eax = r_ebp;
    /* 0066e2ff: mov dword ptr [ebp + 0xac], 0x43c80000 */ W32((u32)(r_ebp+0xacu), 0x43c80000u);
    /* 0066e309: mov dword ptr [ebp + 0xb0], 0x41200000 */ W32((u32)(r_ebp+0xb0u), 0x41200000u);
    /* 0066e313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e314: ret 4 */ FN_RET(0x0066e2e8); r_esp += 8; return;
}

void f_0066e318(void) /* sub_66E318 */
{
    FN_ENTER(0x0066e318);
    /* 0066e318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e319: mov ebp, esp */ r_ebp = r_esp;
    /* 0066e31b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e31d: push 0x8e8eec */ { u32 v = 0x8e8eecu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066e328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066e330: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066e333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066e336: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066e339: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066e33c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066e33f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066e342: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066e345: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066e34c: mov eax, ecx */ r_eax = r_ecx;
    /* 0066e34e: mov dword ptr [eax], 0xb35940 */ W32((u32)(r_eax), 0xb35940u);
    /* 0066e354: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066e356:; BB(0x0066e356);
    /* 0066e356: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e359: mov ecx, dword ptr [eax + esi*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 0066e360: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0066e363: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e365: je 0x66e37a */ if (fZ) goto L_0066e37a;
L_0066e367:; BB(0x0066e367);
    /* 0066e367: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66e36cu); f_007127b0();
    /* 0066e36c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e36f: mov dword ptr [eax + ebx*2 + 0x90], 0 */ W32((u32)(r_eax+r_ebx*2+0x90u), 0x0u);
L_0066e37a:; BB(0x0066e37a);
    /* 0066e37a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066e37d: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e380: jl 0x66e356 */ if ((fS!=fO)) goto L_0066e356;
L_0066e382:; BB(0x0066e382);
    /* 0066e382: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e389: mov ecx, eax */ r_ecx = r_eax;
    /* 0066e38b: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x66e390u); f_007ba1f0();
    /* 0066e390: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066e393: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e395: jne 0x66e3b0 */ if (!fZ) goto L_0066e3b0;
L_0066e397:; BB(0x0066e397);
    /* 0066e397: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066e39a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e39d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066e3a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066e3a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066e3aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0066e3ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e3ad: ret 4 */ FN_RET(0x0066e318); r_esp += 8; return;
L_0066e3b0:; BB(0x0066e3b0);
    /* 0066e3b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e3b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3b4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66e3b9u); f_005c2f74();
    /* 0066e3b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e3ba: jmp 0x66e397 */ goto L_0066e397;
}

void f_0066e3bc(void) /* sub_66E3BC */
{
    FN_ENTER(0x0066e3bc);
    /* 0066e3bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0066e3bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3c1: push 0x8e8f14 */ { u32 v = 0x8e8f14u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066e3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066e3d4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066e3d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066e3da: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0066e3dd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0066e3e0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0066e3e3: movzx eax, word ptr [ecx + 0xa8] */ r_eax = (u32)R16((u32)(r_ecx+0xa8u));
    /* 0066e3ea: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066e3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e3ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e3f3u); f_0068d5a8();
    /* 0066e3f3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066e3f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e3f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e3fb: je 0x66e4ef */ if (fZ) goto L_0066e4ef;
L_0066e401:; BB(0x0066e401);
    /* 0066e401: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e404: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e40b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e40c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e411u); f_0068d5a8();
    /* 0066e411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e412: movsx eax, word ptr [eax + 0x906] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x906u));
    /* 0066e419: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066e41c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0066e41e:; BB(0x0066e41e);
    /* 0066e41e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e421: mov edx, dword ptr [eax + edi*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_edi*4+0x90u));
    /* 0066e428: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0066e42b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e42d: je 0x66e4a9 */ if (fZ) goto L_0066e4a9;
L_0066e42f:; BB(0x0066e42f);
    /* 0066e42f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066e434: jle 0x66e4a9 */ if ((fZ||fS!=fO)) goto L_0066e4a9;
L_0066e436:; BB(0x0066e436);
    /* 0066e436: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e439: cmp eax, dword ptr [edx + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e43f: je 0x66e466 */ if (fZ) goto L_0066e466;
L_0066e441:; BB(0x0066e441);
    /* 0066e441: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0066e443:; BB(0x0066e443);
    /* 0066e443: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e446: mov ecx, dword ptr [eax + ebx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x90u));
    /* 0066e44d: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x66e452u); f_00736578();
    /* 0066e452: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066e455: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e458: jl 0x66e443 */ if ((fS!=fO)) goto L_0066e443;
L_0066e45a:; BB(0x0066e45a);
    /* 0066e45a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e45d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e460: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
L_0066e466:; BB(0x0066e466);
    /* 0066e466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e467: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x66e46cu); f_0080c2dc();
    /* 0066e46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e46d: call 0x79313c */ r_esp -= 4; W32(r_esp, 0x66e472u); f_0079313c();
    /* 0066e472: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e475: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e477: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e479: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e47c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e47f: mov ecx, dword ptr [eax + esi*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_esi*2+0x90u));
    /* 0066e486: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x66e48bu); f_00735db8();
    /* 0066e48b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e48e: mov ecx, dword ptr [eax + esi*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_esi*2+0x90u));
    /* 0066e495: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66e49au); f_0073608c();
    /* 0066e49a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e49d: mov ecx, dword ptr [eax + esi*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_esi*2+0x90u));
    /* 0066e4a4: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66e4a9u); f_00736458();
L_0066e4a9:; BB(0x0066e4a9);
    /* 0066e4a9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066e4ac: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e4af: jl 0x66e41e */ if ((fS!=fO)) goto L_0066e41e;
L_0066e4b5:; BB(0x0066e4b5);
    /* 0066e4b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e4b8: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e4bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e4c0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e4c5u); f_0068d5a8();
    /* 0066e4c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e4c6: movsx eax, word ptr [eax + 0x906] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x906u));
    /* 0066e4cd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066e4d0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066e4d2:; BB(0x0066e4d2);
    /* 0066e4d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e4d5: mov edx, dword ptr [eax + esi*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 0066e4dc: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0066e4df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e4e1: je 0x66e8cf */ if (fZ) goto L_0066e8cf;
L_0066e4e7:; BB(0x0066e4e7);
    /* 0066e4e7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066e4ea: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e4ed: jl 0x66e4d2 */ if ((fS!=fO)) goto L_0066e4d2;
L_0066e4ef:; BB(0x0066e4ef);
    /* 0066e4ef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066e4f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e4f4: je 0x66ea26 */ if (fZ) goto L_0066ea26;
L_0066e4fa:; BB(0x0066e4fa);
    /* 0066e4fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e4fd: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e504: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066e50a: je 0x66e8b8 */ if (fZ) goto L_0066e8b8;
L_0066e510:; BB(0x0066e510);
    /* 0066e510: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066e513: add ecx, 0x904 */ {  u32 a = r_ecx; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e519: call 0x6e839c */ r_esp -= 4; W32(r_esp, 0x66e51eu); f_006e839c();
    /* 0066e51e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e520: je 0x66e7ea */ if (fZ) goto L_0066e7ea;
L_0066e526:; BB(0x0066e526);
    /* 0066e526: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e529: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0066e52f: mov eax, 1 */ r_eax = 0x1u;
    /* 0066e534: mov word ptr [edx + 0xae], ax */ W16((u32)(r_edx+0xaeu), (u16)r_eax);
    /* 0066e53b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e53d: je 0x66e554 */ if (fZ) goto L_0066e554;
L_0066e53f:; BB(0x0066e53f);
    /* 0066e53f: mov eax, edx */ r_eax = r_edx;
    /* 0066e541: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0066e547: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e549: je 0x66e996 */ if (fZ) goto L_0066e996;
L_0066e54f:; BB(0x0066e54f);
    /* 0066e54f: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0066e552: jmp 0x66e559 */ goto L_0066e559;
L_0066e554:; BB(0x0066e554);
    /* 0066e554: mov eax, edx */ r_eax = r_edx;
    /* 0066e556: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
L_0066e559:; BB(0x0066e559);
    /* 0066e559: mov edx, eax */ r_edx = r_eax;
    /* 0066e55b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e55d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e55e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e55f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e561: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e566: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x66e56bu); f_008144b0();
    /* 0066e56b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e56e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e571: movsx eax, word ptr [eax + 0xb0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb0u));
    /* 0066e578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e57a: je 0x66e6ff */ if (fZ) goto L_0066e6ff;
L_0066e580:; BB(0x0066e580);
    /* 0066e580: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e583: jne 0x66e5b3 */ if (!fZ) goto L_0066e5b3;
L_0066e585:; BB(0x0066e585);
    /* 0066e585: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e588: movsx ecx, word ptr [edx + 0xac] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xacu));
    /* 0066e58f: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0066e592: mov word ptr [edx + 0xac], ax */ W16((u32)(r_edx+0xacu), (u16)r_eax);
    /* 0066e599: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066e59c: jle 0x66e8b8 */ if ((fZ||fS!=fO)) goto L_0066e8b8;
L_0066e5a2:; BB(0x0066e5a2);
    /* 0066e5a2: mov eax, 2 */ r_eax = 0x2u;
    /* 0066e5a7: mov word ptr [edx + 0xb0], ax */ W16((u32)(r_edx+0xb0u), (u16)r_eax);
    /* 0066e5ae: jmp 0x66e8b8 */ goto L_0066e8b8;
L_0066e5b3:; BB(0x0066e5b3);
    /* 0066e5b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066e5b6: jne 0x66e8b8 */ if (!fZ) goto L_0066e8b8;
L_0066e5bc:; BB(0x0066e5bc);
    /* 0066e5bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e5bf: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e5c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e5c7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e5ccu); f_0068d5a8();
    /* 0066e5cc: mov edi, eax */ r_edi = r_eax;
    /* 0066e5ce: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e5d4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e5d9u); f_0068d5a8();
    /* 0066e5d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066e5dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e5df: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e5e1: je 0x66e6ea */ if (fZ) goto L_0066e6ea;
L_0066e5e7:; BB(0x0066e5e7);
    /* 0066e5e7: mov edx, eax */ r_edx = r_eax;
    /* 0066e5e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e5eb: je 0x66e6ea */ if (fZ) goto L_0066e6ea;
L_0066e5f1:; BB(0x0066e5f1);
    /* 0066e5f1: movsx edx, word ptr [edi + 0x906] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x906u));
    /* 0066e5f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e5f9: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x66e5feu); f_0080c2a4();
    /* 0066e5fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e600: movsx edx, word ptr [edi + 0x906] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x906u));
    /* 0066e607: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e608: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 0066e60d: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x66e612u); f_00815590();
    /* 0066e612: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x66e617u); f_007a6114();
    /* 0066e617: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066e619:; BB(0x0066e619);
    /* 0066e619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066e61a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e61fu); f_0068d5a8();
    /* 0066e61f: mov ebx, eax */ r_ebx = r_eax;
    /* 0066e621: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e624: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e626: je 0x66e66d */ if (fZ) goto L_0066e66d;
L_0066e628:; BB(0x0066e628);
    /* 0066e628: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0066e62f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e632: jne 0x66e63b */ if (!fZ) goto L_0066e63b;
L_0066e634:; BB(0x0066e634);
    /* 0066e634: mov edx, 1 */ r_edx = 0x1u;
    /* 0066e639: jmp 0x66e63d */ goto L_0066e63d;
L_0066e63b:; BB(0x0066e63b);
    /* 0066e63b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0066e63d:; BB(0x0066e63d);
    /* 0066e63d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e63f: je 0x66e66d */ if (fZ) goto L_0066e66d;
L_0066e641:; BB(0x0066e641);
    /* 0066e641: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e644: movzx edx, word ptr [edx + 0xa8] */ r_edx = (u32)R16((u32)(r_edx+0xa8u));
    /* 0066e64b: mov dword ptr [ebx + 0x91c], edx */ W32((u32)(r_ebx+0x91cu), r_edx);
    /* 0066e651: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066e653: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e659: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x66e65eu); f_00692398();
    /* 0066e65e: movsx edx, word ptr [edi + 0x908] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x908u));
    /* 0066e665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e666: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066e668: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x66e66du); f_007ba924();
L_0066e66d:; BB(0x0066e66d);
    /* 0066e66d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066e670: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e673: jl 0x66e619 */ if ((fS!=fO)) goto L_0066e619;
L_0066e675:; BB(0x0066e675);
    /* 0066e675: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e678: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e67a: je 0x66e6be */ if (fZ) goto L_0066e6be;
L_0066e67c:; BB(0x0066e67c);
    /* 0066e67c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e67f: mov ecx, edx */ r_ecx = r_edx;
    /* 0066e681: movzx edx, word ptr [ebx + 0xa8] */ r_edx = (u32)R16((u32)(r_ebx+0xa8u));
    /* 0066e688: mov dword ptr [ecx + 0x91c], edx */ W32((u32)(r_ecx+0x91cu), r_edx);
    /* 0066e68e: movzx esi, word ptr [ebx + 0xa8] */ r_esi = (u32)R16((u32)(r_ebx+0xa8u));
    /* 0066e695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066e696: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e69bu); f_0068d5a8();
    /* 0066e69b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e69c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e69e: je 0x66e6b0 */ if (fZ) goto L_0066e6b0;
L_0066e6a0:; BB(0x0066e6a0);
    /* 0066e6a0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e6a3: movsx eax, word ptr [edi + 0x908] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x908u));
    /* 0066e6aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e6ab: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x66e6b0u); f_007ba924();
L_0066e6b0:; BB(0x0066e6b0);
    /* 0066e6b0: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e6b6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e6b9: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x66e6beu); f_00692398();
L_0066e6be:; BB(0x0066e6be);
    /* 0066e6be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e6c1: movzx eax, word ptr [eax + 0xa8] */ r_eax = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e6c8: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e6ce: jne 0x66e6ea */ if (!fZ) goto L_0066e6ea;
L_0066e6d0:; BB(0x0066e6d0);
    /* 0066e6d0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e6d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e6d4: add ecx, 0x904 */ {  u32 a = r_ecx; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066e6da: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0066e6dd: call 0x6e8388 */ r_esp -= 4; W32(r_esp, 0x66e6e2u); f_006e8388();
    /* 0066e6e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e6e5: call 0x6e90b8 */ r_esp -= 4; W32(r_esp, 0x66e6eau); f_006e90b8();
L_0066e6ea:; BB(0x0066e6ea);
    /* 0066e6ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e6ed: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066e6f1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e6f6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066e6fa: jmp 0x66e8b8 */ goto L_0066e8b8;
L_0066e6ff:; BB(0x0066e6ff);
    /* 0066e6ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e702: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e707: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0066e70e: call 0x66ead8 */ r_esp -= 4; W32(r_esp, 0x66e713u); f_0066ead8();
    /* 0066e713: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e715: je 0x66e8b8 */ if (fZ) goto L_0066e8b8;
L_0066e71b:; BB(0x0066e71b);
    /* 0066e71b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e721: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e726u); f_0068d5a8();
    /* 0066e726: mov esi, eax */ r_esi = r_eax;
    /* 0066e728: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e72b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e72d: je 0x66e8b8 */ if (fZ) goto L_0066e8b8;
L_0066e733:; BB(0x0066e733);
    /* 0066e733: mov ecx, esi */ r_ecx = r_esi;
    /* 0066e735: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66e73au); f_00689410();
    /* 0066e73a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e73c: jne 0x66e8b8 */ if (!fZ) goto L_0066e8b8;
L_0066e742:; BB(0x0066e742);
    /* 0066e742: mov ecx, esi */ r_ecx = r_esi;
    /* 0066e744: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x66e749u); f_00694780();
    /* 0066e749: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e74f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0066e752: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e754: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e756: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066e758: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0066e75f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x66e764u); f_007c1160();
    /* 0066e764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e766: je 0x66e8b8 */ if (fZ) goto L_0066e8b8;
L_0066e76c:; BB(0x0066e76c);
    /* 0066e76c: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66e771u); f_007a61a4();
    /* 0066e771: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e774: je 0x66ea14 */ if (fZ) goto L_0066ea14;
L_0066e77a:; BB(0x0066e77a);
    /* 0066e77a: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e77f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e782: mov eax, 1 */ r_eax = 0x1u;
    /* 0066e787: mov word ptr [edx + 0xb0], ax */ W16((u32)(r_edx+0xb0u), (u16)r_eax);
    /* 0066e78e: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0066e791: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e793: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x66e798u); f_006ea73c();
    /* 0066e798: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0066e79b: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7a1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x66e7a6u); f_0050b510();
    /* 0066e7a6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e7ac: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66e7b1u); f_0068d5a8();
    /* 0066e7b1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e7b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e7b6: je 0x66e7d3 */ if (fZ) goto L_0066e7d3;
L_0066e7b8:; BB(0x0066e7b8);
    /* 0066e7b8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0066e7bc: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x66e7c1u); f_006854a8();
    /* 0066e7c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7c6: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e7cb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66e7d0u); f_00814298();
    /* 0066e7d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066e7d3:; BB(0x0066e7d3);
    /* 0066e7d3: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x66e7d8u); f_00717f74();
    /* 0066e7d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e7db: mov dword ptr [eax + 0xb8], 1 */ W32((u32)(r_eax+0xb8u), 0x1u);
    /* 0066e7e5: jmp 0x66e8b8 */ goto L_0066e8b8;
L_0066e7ea:; BB(0x0066e7ea);
    /* 0066e7ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066e7ec:; BB(0x0066e7ec);
    /* 0066e7ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e7ef: mov edx, dword ptr [eax + esi*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 0066e7f6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0066e7f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e7fb: je 0x66e846 */ if (fZ) goto L_0066e846;
L_0066e7fd:; BB(0x0066e7fd);
    /* 0066e7fd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066e801: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066e803: jne 0x66e825 */ if (!fZ) goto L_0066e825;
L_0066e805:; BB(0x0066e805);
    /* 0066e805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e80a: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e80f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66e814u); f_00814298();
    /* 0066e814: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e817: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e81a: mov edx, dword ptr [eax + ebx*2 + 0x90] */ r_edx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066e821: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
L_0066e825:; BB(0x0066e825);
    /* 0066e825: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066e82a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066e82e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e831: mov ecx, dword ptr [eax + ebx*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066e838: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066e83c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066e842: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_0066e846:; BB(0x0066e846);
    /* 0066e846: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066e849: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e84c: jl 0x66e7ec */ if ((fS!=fO)) goto L_0066e7ec;
L_0066e84e:; BB(0x0066e84e);
    /* 0066e84e: mov edx, eax */ r_edx = r_eax;
    /* 0066e850: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0066e856: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e858: mov word ptr [edx + 0xae], ax */ W16((u32)(r_edx+0xaeu), (u16)r_eax);
    /* 0066e85f: mov word ptr [edx + 0xb0], ax */ W16((u32)(r_edx+0xb0u), (u16)r_eax);
    /* 0066e866: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e868: je 0x66e87b */ if (fZ) goto L_0066e87b;
L_0066e86a:; BB(0x0066e86a);
    /* 0066e86a: mov eax, edx */ r_eax = r_edx;
    /* 0066e86c: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0066e876: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x66e87bu); f_00717f38();
L_0066e87b:; BB(0x0066e87b);
    /* 0066e87b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e87e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e880: mov word ptr [edx + 0xac], ax */ W16((u32)(r_edx+0xacu), (u16)r_eax);
    /* 0066e887: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0066e88d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e88f: je 0x66e8ab */ if (fZ) goto L_0066e8ab;
L_0066e891:; BB(0x0066e891);
    /* 0066e891: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066e895: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066e89a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066e89e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e8a1: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
L_0066e8ab:; BB(0x0066e8ab);
    /* 0066e8ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e8ae: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
L_0066e8b8:; BB(0x0066e8b8);
    /* 0066e8b8: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066e8bb: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066e8be: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066e8c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066e8c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066e8cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0066e8cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066e8ce: ret  */ FN_RET(0x0066e3bc); r_esp += 4; return;
L_0066e8cf:; BB(0x0066e8cf);
    /* 0066e8cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e8d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066e8d4: jle 0x66e4e7 */ if ((fZ||fS!=fO)) goto L_0066e4e7;
L_0066e8da:; BB(0x0066e8da);
    /* 0066e8da: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e8dc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66e8e1u); f_0073ec50();
    /* 0066e8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e8e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e8e4: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x66e8e9u); f_00735708();
    /* 0066e8e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e8ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e8ef: mov dword ptr [edx + ebx*2 + 0x90], eax */ W32((u32)(r_edx+r_ebx*2+0x90u), r_eax);
    /* 0066e8f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e8f8: je 0x66e4e7 */ if (fZ) goto L_0066e4e7;
L_0066e8fe:; BB(0x0066e8fe);
    /* 0066e8fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e901: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e905: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 0066e90b: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x66e910u); f_0080c2dc();
    /* 0066e910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e911: call 0x79313c */ r_esp -= 4; W32(r_esp, 0x66e916u); f_0079313c();
    /* 0066e916: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e919: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e91b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e91d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e91f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e920: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e923: mov ecx, dword ptr [eax + ebx*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066e92a: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x66e92fu); f_00735db8();
    /* 0066e92f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e932: mov edx, dword ptr [edi + ebx*2 + 0x90] */ r_edx = R32((u32)(r_edi+r_ebx*2+0x90u));
    /* 0066e939: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066e940: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066e945: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066e94c: mov ecx, dword ptr [edi + ebx*2 + 0x90] */ r_ecx = R32((u32)(r_edi+r_ebx*2+0x90u));
    /* 0066e953: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66e958u); f_0073608c();
    /* 0066e958: mov eax, edi */ r_eax = r_edi;
    /* 0066e95a: mov ecx, dword ptr [eax + ebx*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066e961: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66e966u); f_00736458();
    /* 0066e966: mov ecx, edi */ r_ecx = r_edi;
    /* 0066e968: mov edx, dword ptr [ecx + ebx*2 + 0x90] */ r_edx = R32((u32)(r_ecx+r_ebx*2+0x90u));
    /* 0066e96f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066e973: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066e978: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066e97c: mov edi, dword ptr [ecx + ebx*2 + 0x90] */ r_edi = R32((u32)(r_ecx+r_ebx*2+0x90u));
    /* 0066e983: movzx ebx, word ptr [edi + 8] */ r_ebx = (u32)R16((u32)(r_edi+0x8u));
    /* 0066e987: or ebx, 0xffff0010 */ {  u32 a = r_ebx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0066e98d: mov word ptr [edi + 8], bx */ W16((u32)(r_edi+0x8u), (u16)r_ebx);
    /* 0066e991: jmp 0x66e4e7 */ goto L_0066e4e7;
L_0066e996:; BB(0x0066e996);
    /* 0066e996: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0066e99d: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e99f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66e9a4u); f_005caba4();
    /* 0066e9a4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066e9a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e9aa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066e9ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e9af: je 0x66ea07 */ if (fZ) goto L_0066ea07;
L_0066e9b1:; BB(0x0066e9b1);
    /* 0066e9b1: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0066e9b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066e9bf: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066e9c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e9c8: movzx edx, word ptr [eax + 0xa8] */ r_edx = (u32)R16((u32)(r_eax+0xa8u));
    /* 0066e9cf: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0066e9d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e9d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e9d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e9d7: call 0x6e915c */ r_esp -= 4; W32(r_esp, 0x66e9dcu); f_006e915c();
    /* 0066e9dc: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0066e9e3:; BB(0x0066e9e3);
    /* 0066e9e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066e9e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066e9e9: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 0066e9ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066e9f6: mov eax, edx */ r_eax = r_edx;
    /* 0066e9f8: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0066ea02: jmp 0x66e559 */ goto L_0066e559;
L_0066ea07:; BB(0x0066ea07);
    /* 0066ea07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ea0c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066ea0f: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0066ea12: jmp 0x66e9e3 */ goto L_0066e9e3;
L_0066ea14:; BB(0x0066ea14);
    /* 0066ea14: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0066ea19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ea1b: je 0x66e77a */ if (fZ) goto L_0066e77a;
L_0066ea21:; BB(0x0066ea21);
    /* 0066ea21: jmp 0x66e8b8 */ goto L_0066e8b8;
L_0066ea26:; BB(0x0066ea26);
    /* 0066ea26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea29: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0066ea2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea31: je 0x66ea4d */ if (fZ) goto L_0066ea4d;
L_0066ea33:; BB(0x0066ea33);
    /* 0066ea33: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066ea37: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ea3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066ea40: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea43: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
L_0066ea4d:; BB(0x0066ea4d);
    /* 0066ea4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea50: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 0066ea5a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066ea5c:; BB(0x0066ea5c);
    /* 0066ea5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea5f: mov edx, dword ptr [eax + esi*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 0066ea66: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0066ea69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea6b: je 0x66eab6 */ if (fZ) goto L_0066eab6;
L_0066ea6d:; BB(0x0066ea6d);
    /* 0066ea6d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066ea71: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066ea73: jne 0x66ea95 */ if (!fZ) goto L_0066ea95;
L_0066ea75:; BB(0x0066ea75);
    /* 0066ea75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ea77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea7a: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea7f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66ea84u); f_00814298();
    /* 0066ea84: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ea87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ea8a: mov edx, dword ptr [eax + ebx*2 + 0x90] */ r_edx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066ea91: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
L_0066ea95:; BB(0x0066ea95);
    /* 0066ea95: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ea9a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066ea9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066eaa1: mov ecx, dword ptr [eax + ebx*2 + 0x90] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x90u));
    /* 0066eaa8: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066eaac: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066eab2: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_0066eab6:; BB(0x0066eab6);
    /* 0066eab6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066eab9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066eabc: jl 0x66ea5c */ if ((fS!=fO)) goto L_0066ea5c;
L_0066eabe:; BB(0x0066eabe);
    /* 0066eabe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066eac1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066eac4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066eac7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066eaca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066ead1: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ead3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ead4: ret  */ FN_RET(0x0066e3bc); r_esp += 4; return;
}

void f_0066ead8(void) /* sub_66EAD8 */
{
    FN_ENTER(0x0066ead8);
    /* 0066ead8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ead9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eada: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066eadb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066eadd: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0066eae1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066eae4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066eaea: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66eaefu); f_0068d5a8();
    /* 0066eaef: mov esi, eax */ r_esi = r_eax;
    /* 0066eaf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066eaf4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066eaf6: je 0x66eb44 */ if (fZ) goto L_0066eb44;
L_0066eaf8:; BB(0x0066eaf8);
    /* 0066eaf8: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0066eafb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066eafe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eaff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb00: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x66eb05u); f_007a9180();
    /* 0066eb05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066eb08: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0066eb0b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066eb0d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066eb0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066eb11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066eb12: jbe 0x66eb44 */ if ((fC||fZ)) goto L_0066eb44;
L_0066eb14:; BB(0x0066eb14);
    /* 0066eb14: mov ecx, esi */ r_ecx = r_esi;
    /* 0066eb16: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66eb1bu); f_00689410();
    /* 0066eb1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066eb1d: jne 0x66eb2d */ if (!fZ) goto L_0066eb2d;
L_0066eb1f:; BB(0x0066eb1f);
    /* 0066eb1f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0066eb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066eb26: call 0x66ebdc */ r_esp -= 4; W32(r_esp, 0x66eb2bu); f_0066ebdc();
    /* 0066eb2b: jmp 0x66eb39 */ goto L_0066eb39;
L_0066eb2d:; BB(0x0066eb2d);
    /* 0066eb2d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0066eb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066eb34: call 0x66eba0 */ r_esp -= 4; W32(r_esp, 0x66eb39u); f_0066eba0();
L_0066eb39:; BB(0x0066eb39);
    /* 0066eb39: mov eax, 1 */ r_eax = 0x1u;
    /* 0066eb3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066eb3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066eb40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066eb41: ret 4 */ FN_RET(0x0066ead8); r_esp += 8; return;
L_0066eb44:; BB(0x0066eb44);
    /* 0066eb44: lea esi, [ebx + 0x90] */ r_esi = (u32)(r_ebx+0x90u);
    /* 0066eb4a: add ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0066eb50:; BB(0x0066eb50);
    /* 0066eb50: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066eb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066eb54: je 0x66eb90 */ if (fZ) goto L_0066eb90;
L_0066eb56:; BB(0x0066eb56);
    /* 0066eb56: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066eb5a: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066eb5d: jne 0x66eb77 */ if (!fZ) goto L_0066eb77;
L_0066eb5f:; BB(0x0066eb5f);
    /* 0066eb5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066eb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb64: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb69: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66eb6eu); f_00814298();
    /* 0066eb6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066eb71: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066eb73: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
L_0066eb77:; BB(0x0066eb77);
    /* 0066eb77: or edx, 0xffff0004 */ {  u32 a = r_edx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066eb7d: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0066eb81: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0066eb83: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066eb87: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066eb8c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0066eb90:; BB(0x0066eb90);
    /* 0066eb90: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066eb93: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0066eb95: ja 0x66eb50 */ if ((!fC&&!fZ)) goto L_0066eb50;
L_0066eb97:; BB(0x0066eb97);
    /* 0066eb97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066eb99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066eb9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066eb9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066eb9c: ret 4 */ FN_RET(0x0066ead8); r_esp += 8; return;
}

void f_0066eba0(void) /* sub_66EBA0 */
{
    FN_ENTER(0x0066eba0);
    /* 0066eba0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0066eba5: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0066ebac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ebae: je 0x66ebd7 */ if (fZ) goto L_0066ebd7;
L_0066ebb0:; BB(0x0066ebb0);
    /* 0066ebb0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066ebb4: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ebb9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066ebbd: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0066ebc2: mov eax, dword ptr [ecx + edx*4 + 0x90] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x90u));
    /* 0066ebc9: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066ebcd: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ebd3: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
L_0066ebd7:; BB(0x0066ebd7);
    /* 0066ebd7: ret 4 */ FN_RET(0x0066eba0); r_esp += 8; return;
}

void f_0066ebdc(void) /* sub_66EBDC */
{
    FN_ENTER(0x0066ebdc);
    /* 0066ebdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ebdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ebde: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066ebe0: movzx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+0xcu));
    /* 0066ebe5: mov eax, dword ptr [ebp + ebx*4 + 0x90] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x90u));
    /* 0066ebec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ebee: je 0x66ec17 */ if (fZ) goto L_0066ec17;
L_0066ebf0:; BB(0x0066ebf0);
    /* 0066ebf0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066ebf4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066ebf7: jne 0x66ec1c */ if (!fZ) goto L_0066ec1c;
L_0066ebf9:; BB(0x0066ebf9);
    /* 0066ebf9: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066ebff: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0066ec03: mov edx, dword ptr [ebp + ebx*4 + 0x90] */ r_edx = R32((u32)(r_ebp+r_ebx*4+0x90u));
    /* 0066ec0a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066ec0e: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ec13: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0066ec17:; BB(0x0066ec17);
    /* 0066ec17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ec18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ec19: ret 4 */ FN_RET(0x0066ebdc); r_esp += 8; return;
L_0066ec1c:; BB(0x0066ec1c);
    /* 0066ec1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ec1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec21: push 0x572 */ { u32 v = 0x572u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec26: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66ec2bu); f_00814298();
    /* 0066ec2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ec2e: mov eax, dword ptr [ebp + ebx*4 + 0x90] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x90u));
    /* 0066ec35: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066ec39: jmp 0x66ebf9 */ goto L_0066ebf9;
}

void f_0066ec3c(void)
{
    FN_ENTER(0x0066ec3c);
    /* 0066ec3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ec3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec41: push 0x8e8f4a */ { u32 v = 0x8e8f4au; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ec4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066ec54: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ec57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066ec5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066ec5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066ec60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066ec63: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec68: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0066ec6f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66ec74u); f_005caba4();
    /* 0066ec74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066ec77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ec7a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066ec7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ec7f: je 0x66ed58 */ if (fZ) goto L_0066ed58;
L_0066ec85:; BB(0x0066ec85);
    /* 0066ec85: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0066ec8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ec93: mov ecx, eax */ r_ecx = r_eax;
    /* 0066ec95: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0066ec9a: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0066ec9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec9e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066eca1: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x66eca6u); f_007ba278();
    /* 0066eca6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066ecad: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066ecb0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ecb3: mov dword ptr [ecx], 0xb35940 */ W32((u32)(r_ecx), 0xb35940u);
    /* 0066ecb9: mov eax, dword ptr [0x9c9690] */ r_eax = R32((u32)(0x9c9690u));
    /* 0066ecbe: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0066ecc1: call dword ptr [0xb35954] */ { u32 t = R32((u32)(0xb35954u)); r_esp -= 4; W32(r_esp, 0x66ecc7u); call_ind(t); }
    /* 0066ecc7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ecca: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0066eccf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ecd1: mov word ptr [ecx + 0xb0], ax */ W16((u32)(r_ecx+0xb0u), (u16)r_eax);
    /* 0066ecd8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0066ecdf: mov word ptr [ecx + 0xaa], dx */ W16((u32)(r_ecx+0xaau), (u16)r_edx);
    /* 0066ece6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066ece9: jle 0x66ecfb */ if ((fZ||fS!=fO)) goto L_0066ecfb;
L_0066eceb:; BB(0x0066eceb);
    /* 0066eceb: mov edx, ecx */ r_edx = r_ecx;
    /* 0066eced: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0066ecf2: mov word ptr [edx + 0xa8], ax */ W16((u32)(r_edx+0xa8u), (u16)r_eax);
    /* 0066ecf9: jmp 0x66ed04 */ goto L_0066ed04;
L_0066ecfb:; BB(0x0066ecfb);
    /* 0066ecfb: mov edx, ecx */ r_edx = r_ecx;
    /* 0066ecfd: mov word ptr [edx + 0xa8], ax */ W16((u32)(r_edx+0xa8u), (u16)r_eax);
L_0066ed04:; BB(0x0066ed04);
    /* 0066ed04: mov eax, edx */ r_eax = r_edx;
    /* 0066ed06: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 0066ed10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ed12: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 0066ed18: mov dword ptr [eax + 0xa0], 0xffffffff */ W32((u32)(r_eax+0xa0u), 0xffffffffu);
    /* 0066ed22: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 0066ed28: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 0066ed2e: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 0066ed34: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0066ed37: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 0066ed3d: mov word ptr [eax + 0xac], dx */ W16((u32)(r_eax+0xacu), (u16)r_edx);
    /* 0066ed44: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
L_0066ed4a:; BB(0x0066ed4a);
    /* 0066ed4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ed4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066ed54: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ed56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ed57: ret  */ FN_RET(0x0066ec3c); r_esp += 4; return;
L_0066ed58:; BB(0x0066ed58);
    /* 0066ed58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ed5a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066ed5d: jmp 0x66ed4a */ goto L_0066ed4a;
}

void f_0066ed60(void) /* sub_66ED60 */
{
    FN_ENTER(0x0066ed60);
    /* 0066ed60: mov dword ptr [0xa8fd74], 0x3f800000 */ W32((u32)(0xa8fd74u), 0x3f800000u);
    /* 0066ed6a: mov dword ptr [0xa8fd78], 0x41000000 */ W32((u32)(0xa8fd78u), 0x41000000u);
    /* 0066ed74: mov dword ptr [0xa8fd7c], 0x3fc00000 */ W32((u32)(0xa8fd7cu), 0x3fc00000u);
    /* 0066ed7e: ret  */ FN_RET(0x0066ed60); r_esp += 4; return;
}

void f_0066ed80(void) /* sub_66ED80 */
{
    FN_ENTER(0x0066ed80);
    /* 0066ed80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066ed83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ed85: call 0x66eda4 */ r_esp -= 4; W32(r_esp, 0x66ed8au); f_0066eda4();
    /* 0066ed8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066ed8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ed90: jne 0x66ed96 */ if (!fZ) goto L_0066ed96;
L_0066ed92:; BB(0x0066ed92);
    /* 0066ed92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ed93: ret 4 */ FN_RET(0x0066ed80); r_esp += 8; return;
L_0066ed96:; BB(0x0066ed96);
    /* 0066ed96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66ed9cu); f_005c2f74();
    /* 0066ed9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ed9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ed9e: ret 4 */ FN_RET(0x0066ed80); r_esp += 8; return;
}

void f_0066eda4(void) /* sub_66EDA4 */
{
    FN_ENTER(0x0066eda4);
    /* 0066eda4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066eda5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066eda7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066eda9: push 0x8e8f64 */ { u32 v = 0x8e8f64u; r_esp -= 4; W32(r_esp, v); }
    /* 0066edae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066edb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066edb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066edbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066edbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066edc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066edc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066edc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066edcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066edce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066edd1: mov dword ptr [ecx], 0xb35998 */ W32((u32)(r_ecx), 0xb35998u);
    /* 0066edd7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066edde: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x66ede3u); f_008171e8();
    /* 0066ede3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ede6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066eded: mov esp, ebp */ r_esp = r_ebp;
    /* 0066edef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066edf0: ret  */ FN_RET(0x0066eda4); r_esp += 4; return;
}

void f_0066edf4(void) /* sub_66EDF4 */
{
    FN_ENTER(0x0066edf4);
    /* 0066edf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066edf5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066edf7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066edfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066edfd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66ee02u); f_008193cc();
    /* 0066ee02: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0066ee06: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0066ee0b: mov dword ptr [ebp], 0xb35998 */ W32((u32)(r_ebp), 0xb35998u);
    /* 0066ee12: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0066ee15: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 0066ee19: mov eax, ebp */ r_eax = r_ebp;
    /* 0066ee1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ee1c: ret 0xc */ FN_RET(0x0066edf4); r_esp += 16; return;
}

void f_0066ee20(void) /* sub_66EE20 */
{
    FN_ENTER(0x0066ee20);
    /* 0066ee20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee22: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ee25: mov esi, ecx */ r_esi = r_ecx;
    /* 0066ee27: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 0066ee2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee2c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66ee31u); f_0068d5a8();
    /* 0066ee31: mov ecx, eax */ r_ecx = r_eax;
    /* 0066ee33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ee36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ee38: je 0x66ee69 */ if (fZ) goto L_0066ee69;
L_0066ee3a:; BB(0x0066ee3a);
    /* 0066ee3a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0066ee3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ee3f: mov dword ptr [esp], 0x15 */ W32((u32)(r_esp), 0x15u);
    /* 0066ee46: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0066ee4b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0066ee4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee54: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee57: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x66ee5au); call_ind(t); }
    /* 0066ee5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066ee5c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0066ee60: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ee65: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0066ee69:; BB(0x0066ee69);
    /* 0066ee69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066ee6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066ee6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066ee6e: ret  */ FN_RET(0x0066ee20); r_esp += 4; return;
}

void f_0066ee70(void) /* sub_66EE70 */
{
    FN_ENTER(0x0066ee70);
    /* 0066ee70: mov dword ptr [0xa8fd84], 0x3f800000 */ W32((u32)(0xa8fd84u), 0x3f800000u);
    /* 0066ee7a: mov dword ptr [0xa8fd88], 0x41000000 */ W32((u32)(0xa8fd88u), 0x41000000u);
    /* 0066ee84: mov dword ptr [0xa8fd8c], 0x3fc00000 */ W32((u32)(0xa8fd8cu), 0x3fc00000u);
    /* 0066ee8e: ret  */ FN_RET(0x0066ee70); r_esp += 4; return;
}

void f_0066ee90(void) /* sub_66EE90 */
{
    FN_ENTER(0x0066ee90);
    /* 0066ee90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066ee93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ee95: call 0x66eeb4 */ r_esp -= 4; W32(r_esp, 0x66ee9au); f_0066eeb4();
    /* 0066ee9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066ee9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066eea0: jne 0x66eea6 */ if (!fZ) goto L_0066eea6;
L_0066eea2:; BB(0x0066eea2);
    /* 0066eea2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066eea3: ret 4 */ FN_RET(0x0066ee90); r_esp += 8; return;
L_0066eea6:; BB(0x0066eea6);
    /* 0066eea6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eea7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66eeacu); f_005c2f74();
    /* 0066eeac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066eead: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066eeae: ret 4 */ FN_RET(0x0066ee90); r_esp += 8; return;
}

void f_0066eeb4(void) /* sub_66EEB4 */
{
    FN_ENTER(0x0066eeb4);
    /* 0066eeb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066eeb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066eeb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066eeb9: push 0x8e8f80 */ { u32 v = 0x8e8f80u; r_esp -= 4; W32(r_esp, v); }
    /* 0066eebe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066eec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066eecc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066eecf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066eed2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066eed5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066eed8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066eedb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066eede: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066eee1: mov dword ptr [ecx], 0xb35a20 */ W32((u32)(r_ecx), 0xb35a20u);
    /* 0066eee7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066eeee: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x66eef3u); f_007ba1f0();
    /* 0066eef3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066eef6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066eefd: mov esp, ebp */ r_esp = r_ebp;
    /* 0066eeff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ef00: ret  */ FN_RET(0x0066eeb4); r_esp += 4; return;
}

void f_0066ef04(void) /* sub_66EF04 */
{
    FN_ENTER(0x0066ef04);
    /* 0066ef04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ef05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ef06: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ef09: mov edi, ecx */ r_edi = r_ecx;
    /* 0066ef0b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x66ef10u); f_004f7c84();
    /* 0066ef10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ef12: je 0x66f03b */ if (fZ) goto L_0066f03b;
L_0066ef18:; BB(0x0066ef18);
    /* 0066ef18: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0066ef1b: fmul dword ptr [0x939f74] */ ST(0) = ST(0) * R_F32((u32)(0x939f74u));
    /* 0066ef21: fmul dword ptr [0x939f70] */ ST(0) = ST(0) * R_F32((u32)(0x939f70u));
    /* 0066ef27: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ef2b: mov dword ptr [esp + 0xc], 0x3f000000 */ W32((u32)(r_esp+0xcu), 0x3f000000u);
    /* 0066ef33: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0066ef36: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0066ef3e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0066ef41: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 0066ef49: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0066ef4d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066ef51: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0066ef59: mov dword ptr [esp + 0x1c], 0x3f000000 */ W32((u32)(r_esp+0x1cu), 0x3f000000u);
    /* 0066ef61: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0066ef69: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 0066ef71: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 0066ef79: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66ef7eu); f_0061cdb0();
    /* 0066ef7e: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0066ef81: fmul dword ptr [0x939f74] */ ST(0) = ST(0) * R_F32((u32)(0x939f74u));
    /* 0066ef87: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ef8b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0066ef8e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0066ef92: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066ef96: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66ef9bu); f_0061cdb0();
    /* 0066ef9b: fld dword ptr [0x939f74] */ FPUSH(R_F32((u32)(0x939f74u)));
    /* 0066efa1: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0066efa5: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0066efab: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066efad: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0066efb0: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 0066efb6: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 0066efbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066efbe: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0066efc0: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0066efc3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0066efc5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0066efc7: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0066efca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066efcc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0066efd0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066efd2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0066efd6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0066efda: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 0066efdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066efe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066efe1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066efe2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066efe3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66efe8u); f_0061cdb0();
    /* 0066efe8: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0066efec: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0066eff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eff1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066eff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eff7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66effcu); f_0061cdb0();
    /* 0066effc: push 0x939f78 */ { u32 v = 0x939f78u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f001: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f003: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f005: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f006: call 0x4fbf14 */ r_esp -= 4; W32(r_esp, 0x66f00bu); f_004fbf14();
    /* 0066f00b: push 0x939f84 */ { u32 v = 0x939f84u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f010: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0066f012: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f015: call 0x4fbf14 */ r_esp -= 4; W32(r_esp, 0x66f01au); f_004fbf14();
    /* 0066f01a: push 0x939f90 */ { u32 v = 0x939f90u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f01f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f021: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f023: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f024: call 0x4fbf14 */ r_esp -= 4; W32(r_esp, 0x66f029u); f_004fbf14();
    /* 0066f029: push 0x939f9c */ { u32 v = 0x939f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f02e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f030: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f032: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f033: call 0x4fbf14 */ r_esp -= 4; W32(r_esp, 0x66f038u); f_004fbf14();
    /* 0066f038: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066f03b:; BB(0x0066f03b);
    /* 0066f03b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f03e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f03f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f040: ret  */ FN_RET(0x0066ef04); r_esp += 4; return;
}

