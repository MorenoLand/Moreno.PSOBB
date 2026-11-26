#include "protos.h"

void f_0085bca0(void) /* ?TypeMatch@@YAHPBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_ThrowInfo@@@Z */
{
    FN_ENTER(0x0085bca0);
    /* 0085bca0: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0085bca3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bca5: je 0x85bceb */ if (fZ) goto L_0085bceb;
L_0085bca7:; BB(0x0085bca7);
    /* 0085bca7: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 0085bcaa: cmp byte ptr [edx], 0 */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085bcad: je 0x85bceb */ if (fZ) goto L_0085bceb;
L_0085bcaf:; BB(0x0085bcaf);
    /* 0085bcaf: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0085bcb2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bcb4: je 0x85bcc6 */ if (fZ) goto L_0085bcc6;
L_0085bcb6:; BB(0x0085bcb6);
    /* 0085bcb6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bcb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bcba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bcbb: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85bcc0u); f_00864570();
    /* 0085bcc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bcc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bcc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bcc4: jne 0x85bce8 */ if (!fZ) goto L_0085bce8;
L_0085bcc6:; BB(0x0085bcc6);
    /* 0085bcc6: test byte ptr [edi], 2 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bcc9: je 0x85bcd0 */ if (fZ) goto L_0085bcd0;
L_0085bccb:; BB(0x0085bccb);
    /* 0085bccb: test byte ptr [esi], 8 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bcce: je 0x85bce8 */ if (fZ) goto L_0085bce8;
L_0085bcd0:; BB(0x0085bcd0);
    /* 0085bcd0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085bcd4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085bcd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bcd8: je 0x85bcdf */ if (fZ) goto L_0085bcdf;
L_0085bcda:; BB(0x0085bcda);
    /* 0085bcda: test byte ptr [esi], 1 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bcdd: je 0x85bce8 */ if (fZ) goto L_0085bce8;
L_0085bcdf:; BB(0x0085bcdf);
    /* 0085bcdf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bce1: je 0x85bceb */ if (fZ) goto L_0085bceb;
L_0085bce3:; BB(0x0085bce3);
    /* 0085bce3: test byte ptr [esi], 2 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085bce6: jne 0x85bceb */ if (!fZ) goto L_0085bceb;
L_0085bce8:; BB(0x0085bce8);
    /* 0085bce8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bcea: ret  */ FN_RET(0x0085bca0); r_esp += 4; return;
L_0085bceb:; BB(0x0085bceb);
    /* 0085bceb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085bced: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085bcee: ret  */ FN_RET(0x0085bca0); r_esp += 4; return;
}

void f_0085bcef(void) /* ?FrameUnwindFilter@@YAHPAU_EXCEPTION_POINTERS@@@Z */
{
    FN_ENTER(0x0085bcef);
    /* 0085bcef: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085bcf1: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bcf7: je 0x85bcfc */ if (fZ) goto L_0085bcfc;
L_0085bcf9:; BB(0x0085bcf9);
    /* 0085bcf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bcfb: ret  */ FN_RET(0x0085bcef); r_esp += 4; return;
L_0085bcfc:; BB(0x0085bcfc);
    /* 0085bcfc: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bd01u); f_0085c583();
    /* 0085bd01: and dword ptr [eax + 0x84], 0 */ { u32 ad = (u32)(r_eax+0x84u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd08: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085be20(void) /* ?AdjustPointer@@YAPAXPAXABUPMD@@@Z */
{
    FN_ENTER(0x0085be20);
    /* 0085be20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085be21: mov esi, eax */ r_esi = r_eax;
    /* 0085be23: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085be25: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085be27: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085be2b: jl 0x85be3d */ if ((fS!=fO)) goto L_0085be3d;
L_0085be2d:; BB(0x0085be2d);
    /* 0085be2d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0085be30: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0085be33: mov esi, dword ptr [edx + esi] */ r_esi = R32((u32)(r_edx+r_esi));
    /* 0085be36: mov ecx, dword ptr [esi + ecx] */ r_ecx = R32((u32)(r_esi+r_ecx));
    /* 0085be39: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085be3b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085be3d:; BB(0x0085be3d);
    /* 0085be3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085be3e: ret  */ FN_RET(0x0085be20); r_esp += 4; return;
}

void f_0085be3f(void) /* ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z */
{
    FN_ENTER(0x0085be3f);
    /* 0085be3f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0085be41: push 0x9980c8 */ { u32 v = 0x9980c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085be46: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85be4bu); f_0085e5ac();
    /* 0085be4b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0085be4d: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085be50: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085be53: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0085be56: and dword ptr [ebp - 0x48], 0 */ { u32 ad = (u32)(r_ebp+0xffffffb8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085be5a: mov eax, dword ptr [edi - 4] */ r_eax = R32((u32)(r_edi+0xfffffffcu));
    /* 0085be5d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0085be60: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085be63: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0085be66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085be67: call 0x857ca7 */ r_esp -= 4; W32(r_esp, 0x85be6cu); f_00857ca7();
    /* 0085be6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085be6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085be6e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0085be71: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85be76u); f_0085c583();
    /* 0085be76: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 0085be79: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0085be7c: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85be81u); f_0085c583();
    /* 0085be81: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 0085be87: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0085be8a: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85be8fu); f_0085c583();
    /* 0085be8f: mov dword ptr [eax + 0x7c], esi */ W32((u32)(r_eax+0x7cu), r_esi);
    /* 0085be92: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85be97u); f_0085c583();
    /* 0085be97: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0085be9a: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0085bea0: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bea4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085beab: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085beae: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085beb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085beb2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085beb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085beb6: call 0x857d3c */ r_esp -= 4; W32(r_esp, 0x85bebbu); f_00857d3c();
    /* 0085bebb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085bebe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085bec1: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bec5: jmp 0x85bf79 */ goto L_0085bf79;
L_0085bf79:; BB(0x0085bf79);
    /* 0085bf79: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bf7d: call 0x85bf94 */ r_esp -= 4; W32(r_esp, 0x85bf82u); f_0085bf94();
    /* 0085bf82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0085bf85: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85bf8au); f_0085e5e7();
    /* 0085bf8a: ret  */ FN_RET(0x0085be3f); r_esp += 4; return;
}

