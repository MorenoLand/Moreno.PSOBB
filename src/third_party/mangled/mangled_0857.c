#include "protos.h"

void f_008579ba(void) /* ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z */
{
    FN_ENTER(0x008579ba);
    /* 008579ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008579bb: mov ebp, esp */ r_ebp = r_esp;
    /* 008579bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008579be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008579bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008579c2: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008579c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008579c8: mov ebx, dword ptr fs:[0] */ r_ebx = R32((u32)(TEB));
    /* 008579cf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008579d1: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 008579d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008579da: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008579dd: mov esp, dword ptr [ebx - 4] */ r_esp = R32((u32)(r_ebx+0xfffffffcu));
    /* 008579e0: mov ebp, dword ptr [ebp - 4] */ r_ebp = R32((u32)(r_ebp+0xfffffffcu));
    /* 008579e3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_008579f1(void) /* ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z */
{
    FN_ENTER(0x008579f1);
    /* 008579f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008579f2: mov ebp, esp */ r_ebp = r_esp;
    /* 008579f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008579f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008579f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008579f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008579f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008579f9: mov esi, dword ptr fs:[0] */ r_esi = R32((u32)(TEB));
    /* 00857a00: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00857a03: mov dword ptr [ebp - 8], 0x857a1a */ W32((u32)(r_ebp+0xfffffff8u), 0x857a1au);
    /* 00857a0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857a0c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a0f: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a12: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a15: call 0x8c9b20 */ r_esp -= 4; W32(r_esp, 0x857a1au); f_008c9b20();
    /* 00857a1a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857a1d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00857a20: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857a23: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00857a26: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00857a29: mov edi, dword ptr fs:[0] */ r_edi = R32((u32)(TEB));
    /* 00857a30: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00857a33: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00857a35: mov dword ptr fs:[0], ebx */ W32((u32)(TEB), r_ebx);
    /* 00857a3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857a3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857a3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857a3f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857a40: ret 8 */ FN_RET(0x008579f1); r_esp += 12; return;
}

void f_00857a79(void) /* ?CatchGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUCatchGuardRN@@PAX2@Z */
{
    FN_ENTER(0x00857a79);
    /* 00857a79: cld  */ rt_df = 0;
    /* 00857a7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00857a7e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00857a81: cmp ecx, dword ptr [0xa23c64] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa23c64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857a87: je 0x857a95 */ if (fZ) goto L_00857a95;
L_00857a89:; BB(0x00857a89);
    /* 00857a89: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00857a8d: or dword ptr [eax + 4], 8 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00857a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00857a93: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00857a94: ret  */ FN_RET(0x00857a79); r_esp += 4; return;
L_00857a95:; BB(0x00857a95);
    /* 00857a95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857a97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857a98: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a9b: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857aa0: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857aa4: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857aa7: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857aab: call 0x85c4a8 */ r_esp -= 4; W32(r_esp, 0x857ab0u); f_0085c4a8();
    /* 00857ab0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00857ab3: ret  */ FN_RET(0x00857a79); r_esp += 4; return;
}

void f_00857ab4(void) /* ?_CallSETranslator@@YAHPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAX2PBU_s_FuncInfo@@H1@Z */
{
    FN_ENTER(0x00857ab4);
    /* 00857ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00857ab7: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00857aba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857abb: cmp dword ptr [ebp + 8], 0x123 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x123u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857ac2: jne 0x857ad6 */ if (!fZ) goto L_00857ad6;
L_00857ac4:; BB(0x00857ac4);
    /* 00857ac4: mov eax, 0x857b4f */ r_eax = 0x857b4fu;
    /* 00857ac9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00857acc: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00857ace: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00857ad0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00857ad1: jmp 0x857b78 */ goto L_00857b78;
L_00857ad6:; BB(0x00857ad6);
    /* 00857ad6: and dword ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857ada: mov dword ptr [ebp - 0x24], 0x857b7b */ W32((u32)(r_ebp+0xffffffdcu), 0x857b7bu);
    /* 00857ae1: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00857ae6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00857ae9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00857aec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00857aef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857af2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00857af5: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00857af8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00857afb: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00857afe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00857b01: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857b05: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857b09: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857b0d: mov dword ptr [ebp - 0xc], esp */ W32((u32)(r_ebp+0xfffffff4u), r_esp);
    /* 00857b10: mov dword ptr [ebp - 8], ebp */ W32((u32)(r_ebp+0xfffffff8u), r_ebp);
    /* 00857b13: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00857b19: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00857b1c: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00857b1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00857b25: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00857b2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857b2f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00857b32: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00857b35: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00857b38: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00857b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857b3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857b3f: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00857b41: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857b46u); f_0085c583();
    /* 00857b46: call dword ptr [eax + 0x74] */ { u32 t = R32((u32)(r_eax+0x74u)); r_esp -= 4; W32(r_esp, 0x857b49u); call_ind(t); }
    /* 00857b49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00857b4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00857b4b: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857b4f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857b53: je 0x857b6c */ if (fZ) goto L_00857b6c;
L_00857b55:; BB(0x00857b55);
    /* 00857b55: mov ebx, dword ptr fs:[0] */ r_ebx = R32((u32)(TEB));
    /* 00857b5c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00857b5e: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00857b61: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00857b63: mov dword ptr fs:[0], ebx */ W32((u32)(TEB), r_ebx);
    /* 00857b6a: jmp 0x857b75 */ goto L_00857b75;
L_00857b6c:; BB(0x00857b6c);
    /* 00857b6c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00857b6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
L_00857b75:; BB(0x00857b75);
    /* 00857b75: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00857b78:; BB(0x00857b78);
    /* 00857b78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857b79: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857b7a: ret  */ FN_RET(0x00857ab4); r_esp += 4; return;
}

void f_00857b7b(void) /* ?TranslatorGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUTranslatorGuardRN@@PAX2@Z */
{
    FN_ENTER(0x00857b7b);
    /* 00857b7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857b7c: mov ebp, esp */ r_ebp = r_esp;
    /* 00857b7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00857b7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857b80: cld  */ rt_df = 0;
    /* 00857b81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857b84: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00857b87: cmp eax, dword ptr [0xa23c64] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23c64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857b8d: je 0x857ba6 */ if (fZ) goto L_00857ba6;
L_00857b8f:; BB(0x00857b8f);
    /* 00857b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857b92: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00857b95: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00857b98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00857b9b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00857b9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00857ba0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00857ba1: jmp 0x857c2a */ goto L_00857c2a;
L_00857ba6:; BB(0x00857ba6);
    /* 00857ba6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857ba9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00857bac: and eax, 0x66 */ {  u32 a = r_eax; u32 b = 0x66u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00857baf: je 0x857bc0 */ if (fZ) goto L_00857bc0;
L_00857bb1:; BB(0x00857bb1);
    /* 00857bb1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bb4: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 00857bbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00857bbd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00857bbe: jmp 0x857c2a */ goto L_00857c2a;
L_00857bc0:; BB(0x00857bc0);
    /* 00857bc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00857bc2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bc5: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bc8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bcb: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bce: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bd1: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857bd6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bd9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bdc: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bdf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857be2: call 0x85c4a8 */ r_esp -= 4; W32(r_esp, 0x857be7u); f_0085c4a8();
    /* 00857be7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00857bea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857bed: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857bf1: jne 0x857bfe */ if (!fZ) goto L_00857bfe;
L_00857bf3:; BB(0x00857bf3);
    /* 00857bf3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bf6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857bf9: call 0x8579f1 */ r_esp -= 4; W32(r_esp, 0x857bfeu); f_008579f1();
L_00857bfe:; BB(0x00857bfe);
    /* 00857bfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c08: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00857c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857c0c: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 00857c11: call 0x857ab4 */ r_esp -= 4; W32(r_esp, 0x857c16u); f_00857ab4();
    /* 00857c16: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00857c19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00857c1c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00857c1f: mov esp, dword ptr [ebx + 0x1c] */ r_esp = R32((u32)(r_ebx+0x1cu));
    /* 00857c22: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 00857c25: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00857c2a:; BB(0x00857c2a);
    /* 00857c2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857c2b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857c2c: ret  */ FN_RET(0x00857b7b); r_esp += 4; return;
}

void f_00857c2d(void) /* ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z */
{
    FN_ENTER(0x00857c2d);
    /* 00857c2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857c2e: mov ebp, esp */ r_ebp = r_esp;
    /* 00857c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00857c31: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857c35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857c36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857c37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00857c38: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00857c3b: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00857c3e: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 00857c41: mov eax, esi */ r_eax = r_esi;
    /* 00857c43: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857c46: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00857c49: jl 0x857c83 */ if ((fS!=fO)) goto L_00857c83;
L_00857c4b:; BB(0x00857c4b);
    /* 00857c4b: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857c4e: jne 0x857c55 */ if (!fZ) goto L_00857c55;
L_00857c50:; BB(0x00857c50);
    /* 00857c50: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x857c55u); f_0085c88e();
L_00857c55:; BB(0x00857c55);
    /* 00857c55: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00857c58: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00857c59: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00857c5c: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00857c5f: cmp dword ptr [eax + 4], ecx */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857c62: jge 0x857c69 */ if ((fS==fO)) goto L_00857c69;
L_00857c64:; BB(0x00857c64);
    /* 00857c64: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857c67: jle 0x857c6e */ if ((fZ||fS!=fO)) goto L_00857c6e;
L_00857c69:; BB(0x00857c69);
    /* 00857c69: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857c6c: jne 0x857c7a */ if (!fZ) goto L_00857c7a;
L_00857c6e:; BB(0x00857c6e);
    /* 00857c6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857c71: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00857c74: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857c77: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00857c7a:; BB(0x00857c7a);
    /* 00857c7a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857c7e: jge 0x857c4b */ if ((fS==fO)) goto L_00857c4b;
L_00857c80:; BB(0x00857c80);
    /* 00857c80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00857c83:; BB(0x00857c83);
    /* 00857c83: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00857c86: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00857c87: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00857c89: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00857c8c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00857c8e: cmp eax, dword ptr [edi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00857c91: ja 0x857c97 */ if ((!fC&&!fZ)) goto L_00857c97;
L_00857c93:; BB(0x00857c93);
    /* 00857c93: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857c95: jbe 0x857c9c */ if ((fC||fZ)) goto L_00857c9c;
L_00857c97:; BB(0x00857c97);
    /* 00857c97: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x857c9cu); f_0085c88e();
L_00857c9c:; BB(0x00857c9c);
    /* 00857c9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857c9d: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00857ca0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857ca1: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00857ca4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857ca5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857ca6: ret  */ FN_RET(0x00857c2d); r_esp += 4; return;
}

void f_00857ca7(void) /* ?_CreateFrameInfo@@YAPAUFrameInfo@@PAU1@PAX@Z */
{
    FN_ENTER(0x00857ca7);
    /* 00857ca7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00857cab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857cac: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00857cb0: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00857cb2: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857cb7u); f_0085c583();
    /* 00857cb7: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 00857cbd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00857cc0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857cc5u); f_0085c583();
    /* 00857cc5: mov dword ptr [eax + 0x88], esi */ W32((u32)(r_eax+0x88u), r_esi);
    /* 00857ccb: mov eax, esi */ r_eax = r_esi;
    /* 00857ccd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857cce: ret  */ FN_RET(0x00857ca7); r_esp += 4; return;
}

void f_00857ccf(void) /* ?IsExceptionObjectToBeDestroyed@@YAHPAX@Z */
{
    FN_ENTER(0x00857ccf);
    /* 00857ccf: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857cd4u); f_0085c583();
    /* 00857cd4: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 00857cda: jmp 0x857ce7 */ goto L_00857ce7;
L_00857cdc:; BB(0x00857cdc);
    /* 00857cdc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00857cde: cmp ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857ce2: je 0x857ced */ if (fZ) goto L_00857ced;
L_00857ce4:; BB(0x00857ce4);
    /* 00857ce4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
L_00857ce7:; BB(0x00857ce7);
    /* 00857ce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00857ce9: jne 0x857cdc */ if (!fZ) goto L_00857cdc;
L_00857ceb:; BB(0x00857ceb);
    /* 00857ceb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00857cec: ret  */ FN_RET(0x00857ccf); r_esp += 4; return;
L_00857ced:; BB(0x00857ced);
    /* 00857ced: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857cef: ret  */ FN_RET(0x00857ccf); r_esp += 4; return;
}

void f_00857cf0(void) /* ?_FindAndUnlinkFrame@@YAXPAUFrameInfo@@@Z */
{
    FN_ENTER(0x00857cf0);
    /* 00857cf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857cf1: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857cf6u); f_0085c583();
    /* 00857cf6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00857cfa: cmp esi, dword ptr [eax + 0x88] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857d00: jne 0x857d12 */ if (!fZ) goto L_00857d12;
L_00857d02:; BB(0x00857d02);
    /* 00857d02: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857d07u); f_0085c583();
    /* 00857d07: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00857d0a: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00857d10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857d11: ret  */ FN_RET(0x00857cf0); r_esp += 4; return;
L_00857d12:; BB(0x00857d12);
    /* 00857d12: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857d17u); f_0085c583();
    /* 00857d17: mov eax, dword ptr [eax + 0x88] */ r_eax = R32((u32)(r_eax+0x88u));
    /* 00857d1d: jmp 0x857d28 */ goto L_00857d28;
L_00857d1f:; BB(0x00857d1f);
    /* 00857d1f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00857d22: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857d24: je 0x857d34 */ if (fZ) goto L_00857d34;
L_00857d26:; BB(0x00857d26);
    /* 00857d26: mov eax, ecx */ r_eax = r_ecx;
L_00857d28:; BB(0x00857d28);
    /* 00857d28: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857d2c: jne 0x857d1f */ if (!fZ) goto L_00857d1f;
L_00857d2e:; BB(0x00857d2e);
    /* 00857d2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857d2f: jmp 0x85c88e */ f_0085c88e(); return;
L_00857d34:; BB(0x00857d34);
    /* 00857d34: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00857d37: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00857d3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857d3b: ret  */ FN_RET(0x00857cf0); r_esp += 4; return;
}

void f_00857d3c(void) /* ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z */
{
    FN_ENTER(0x00857d3c);
    /* 00857d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857d3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00857d3f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00857d42: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00857d47: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00857d4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00857d4e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00857d51: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857d54: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00857d57: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00857d5a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00857d5b: mov dword ptr [ebp - 0x14], 0x857a79 */ W32((u32)(r_ebp+0xffffffecu), 0x857a79u);
    /* 00857d62: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00857d65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857d68: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00857d6e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00857d71: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00857d74: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00857d7a: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857d7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00857d7e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857d81: call 0x85c8c0 */ r_esp -= 4; W32(r_esp, 0x857d86u); f_0085c8c0();
    /* 00857d86: mov ecx, eax */ r_ecx = r_eax;
    /* 00857d88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00857d8b: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00857d91: mov eax, ecx */ r_eax = r_ecx;
    /* 00857d93: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857d94: ret  */ FN_RET(0x00857d3c); r_esp += 4; return;
}

