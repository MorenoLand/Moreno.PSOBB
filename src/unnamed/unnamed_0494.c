#include "protos.h"

void f_00494120(void) /* sub_494120 */
{
    FN_ENTER(0x00494120);
    /* 00494120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00494121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00494122: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00494123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494124: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494127: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00494129: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x49412eu); f_00578b38();
    /* 0049412e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x494133u); f_0082d7b0();
    /* 00494133: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00494136: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00494139: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0049413c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049413f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00494142: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00494146: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0049414a: fadd dword ptr [ebx + 0x4f0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4f0u));
    /* 00494150: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00494154: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00494158: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49415du); f_0082d838();
    /* 0049415d: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00494160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494162: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x494167u); f_0082d8bc();
    /* 00494167: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0049416a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049416c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x494171u); f_0082e9e4();
    /* 00494171: push dword ptr [ebx + 0x4e0] */ { u32 v = R32((u32)(r_ebx+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494177: push dword ptr [ebx + 0x4dc] */ { u32 v = R32((u32)(r_ebx+0x4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049417d: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x494182u); f_0048e148();
    /* 00494182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494185: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x49418au); f_0082fa9c();
    /* 0049418a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049418c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049418e: mov ebp, eax */ r_ebp = r_eax;
    /* 00494190: mov esi, edx */ r_esi = r_edx;
    /* 00494192: mov edi, ebx */ r_edi = r_ebx;
L_00494194:; BB(0x00494194);
    /* 00494194: mov ebx, dword ptr [esi*4 + 0x9a7058] */ r_ebx = R32((u32)(r_esi*4+0x9a7058u));
    /* 0049419b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049419c: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941a2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4941a7u); f_005b8624();
    /* 004941a7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004941ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004941ac: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941b2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4941b7u); f_005b8610();
    /* 004941b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004941bb: mov ebx, dword ptr [edi + esi*4 + 0x658] */ r_ebx = R32((u32)(r_edi+r_esi*4+0x658u));
    /* 004941c2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004941c4: je 0x494238 */ if (fZ) goto L_00494238;
L_004941c6:; BB(0x004941c6);
    /* 004941c6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004941ca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4941cfu); f_00829cc8();
    /* 004941cf: fld dword ptr [ebp + edi + 0x458] */ FPUSH(R_F32((u32)(r_ebp+r_edi+0x458u)));
    /* 004941d6: fcomp dword ptr [0x902bb8] */ fx_compare(ST(0), R_F32((u32)(0x902bb8u))); FPOP();
    /* 004941dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004941de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004941df: je 0x494263 */ if (fZ) goto L_00494263;
L_004941e5:; BB(0x004941e5);
    /* 004941e5: mov eax, dword ptr [ebp + edi + 0x460] */ r_eax = R32((u32)(r_ebp+r_edi+0x460u));
    /* 004941ec: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004941f0: mov eax, dword ptr [ebp + edi + 0x464] */ r_eax = R32((u32)(r_ebp+r_edi+0x464u));
    /* 004941f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004941f9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004941fd: mov eax, dword ptr [ebp + edi + 0x44c] */ r_eax = R32((u32)(r_ebp+r_edi+0x44cu));
    /* 00494204: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00494208: mov eax, dword ptr [ebp + edi + 0x450] */ r_eax = R32((u32)(r_ebp+r_edi+0x450u));
    /* 0049420f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494213: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x494218u); f_00588428();
    /* 00494218: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049421c: push dword ptr [ebp + edi + 0x458] */ { u32 v = R32((u32)(r_ebp+r_edi+0x458u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494224: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00494228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494229: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x49422eu); f_008302c4();
    /* 0049422e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494231: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494233: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x494238u); f_00452050();
L_00494238:; BB(0x00494238);
    /* 00494238: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049423b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049423e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494241: jl 0x494194 */ if ((fS!=fO)) goto L_00494194;
L_00494247:; BB(0x00494247);
    /* 00494247: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x49424cu); f_0082faac();
    /* 0049424c: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x494251u); f_0048e364();
    /* 00494251: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x494256u); f_0082da80();
    /* 00494256: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x49425bu); f_0082dab0();
    /* 0049425b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049425e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049425f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494262: ret  */ FN_RET(0x00494120); r_esp += 4; return;
L_00494263:; BB(0x00494263);
    /* 00494263: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494265: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x49426au); f_00588428();
    /* 0049426a: push dword ptr [ebp + edi + 0x450] */ { u32 v = R32((u32)(r_ebp+r_edi+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494271: push dword ptr [ebp + edi + 0x44c] */ { u32 v = R32((u32)(r_ebp+r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00494278: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0049427c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049427d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x494282u); f_0083046c();
    /* 00494282: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494285: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494287: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x49428cu); f_00452050();
    /* 0049428c: jmp 0x494238 */ goto L_00494238;
}

void f_0049414b(void)
{
    FN_ENTER(0x0049414b);
    /* 0049414b: xor eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049414e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494150: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00494154: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00494158: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49415du); f_0082d838();
    /* 0049415d: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00494160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494162: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x494167u); f_0082d8bc();
    /* 00494167: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0049416a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049416c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x494171u); f_0082e9e4();
    /* 00494171: push dword ptr [ebx + 0x4e0] */ { u32 v = R32((u32)(r_ebx+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494177: push dword ptr [ebx + 0x4dc] */ { u32 v = R32((u32)(r_ebx+0x4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049417d: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x494182u); f_0048e148();
    /* 00494182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494185: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x49418au); f_0082fa9c();
    /* 0049418a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049418c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049418e: mov ebp, eax */ r_ebp = r_eax;
    /* 00494190: mov esi, edx */ r_esi = r_edx;
    /* 00494192: mov edi, ebx */ r_edi = r_ebx;
L_00494194:; BB(0x00494194);
    /* 00494194: mov ebx, dword ptr [esi*4 + 0x9a7058] */ r_ebx = R32((u32)(r_esi*4+0x9a7058u));
    /* 0049419b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049419c: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941a2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4941a7u); f_005b8624();
    /* 004941a7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004941ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004941ac: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941b2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4941b7u); f_005b8610();
    /* 004941b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004941bb: mov ebx, dword ptr [edi + esi*4 + 0x658] */ r_ebx = R32((u32)(r_edi+r_esi*4+0x658u));
    /* 004941c2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004941c4: je 0x494238 */ if (fZ) goto L_00494238;
L_004941c6:; BB(0x004941c6);
    /* 004941c6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004941ca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4941cfu); f_00829cc8();
    /* 004941cf: fld dword ptr [ebp + edi + 0x458] */ FPUSH(R_F32((u32)(r_ebp+r_edi+0x458u)));
    /* 004941d6: fcomp dword ptr [0x902bb8] */ fx_compare(ST(0), R_F32((u32)(0x902bb8u))); FPOP();
    /* 004941dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004941de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004941df: je 0x494263 */ if (fZ) goto L_00494263;
L_004941e5:; BB(0x004941e5);
    /* 004941e5: mov eax, dword ptr [ebp + edi + 0x460] */ r_eax = R32((u32)(r_ebp+r_edi+0x460u));
    /* 004941ec: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004941f0: mov eax, dword ptr [ebp + edi + 0x464] */ r_eax = R32((u32)(r_ebp+r_edi+0x464u));
    /* 004941f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004941f9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004941fd: mov eax, dword ptr [ebp + edi + 0x44c] */ r_eax = R32((u32)(r_ebp+r_edi+0x44cu));
    /* 00494204: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00494208: mov eax, dword ptr [ebp + edi + 0x450] */ r_eax = R32((u32)(r_ebp+r_edi+0x450u));
    /* 0049420f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494213: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x494218u); f_00588428();
    /* 00494218: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049421c: push dword ptr [ebp + edi + 0x458] */ { u32 v = R32((u32)(r_ebp+r_edi+0x458u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494224: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00494228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494229: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x49422eu); f_008302c4();
    /* 0049422e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494231: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494233: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x494238u); f_00452050();
L_00494238:; BB(0x00494238);
    /* 00494238: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049423b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049423e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494241: jl 0x494194 */ if ((fS!=fO)) goto L_00494194;
L_00494247:; BB(0x00494247);
    /* 00494247: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x49424cu); f_0082faac();
    /* 0049424c: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x494251u); f_0048e364();
    /* 00494251: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x494256u); f_0082da80();
    /* 00494256: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x49425bu); f_0082dab0();
    /* 0049425b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049425e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049425f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494262: ret  */ FN_RET(0x0049414b); r_esp += 4; return;
L_00494263:; BB(0x00494263);
    /* 00494263: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494265: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x49426au); f_00588428();
    /* 0049426a: push dword ptr [ebp + edi + 0x450] */ { u32 v = R32((u32)(r_ebp+r_edi+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494271: push dword ptr [ebp + edi + 0x44c] */ { u32 v = R32((u32)(r_ebp+r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00494278: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0049427c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049427d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x494282u); f_0083046c();
    /* 00494282: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494285: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494287: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x49428cu); f_00452050();
    /* 0049428c: jmp 0x494238 */ goto L_00494238;
}

void f_00494154(void)
{
    FN_ENTER(0x00494154);
    /* 00494154: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00494158: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49415du); f_0082d838();
    /* 0049415d: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00494160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494162: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x494167u); f_0082d8bc();
    /* 00494167: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0049416a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049416c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x494171u); f_0082e9e4();
    /* 00494171: push dword ptr [ebx + 0x4e0] */ { u32 v = R32((u32)(r_ebx+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494177: push dword ptr [ebx + 0x4dc] */ { u32 v = R32((u32)(r_ebx+0x4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049417d: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x494182u); f_0048e148();
    /* 00494182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494185: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x49418au); f_0082fa9c();
    /* 0049418a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049418c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049418e: mov ebp, eax */ r_ebp = r_eax;
    /* 00494190: mov esi, edx */ r_esi = r_edx;
    /* 00494192: mov edi, ebx */ r_edi = r_ebx;
L_00494194:; BB(0x00494194);
    /* 00494194: mov ebx, dword ptr [esi*4 + 0x9a7058] */ r_ebx = R32((u32)(r_esi*4+0x9a7058u));
    /* 0049419b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049419c: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941a2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4941a7u); f_005b8624();
    /* 004941a7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004941ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004941ac: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 004941b2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4941b7u); f_005b8610();
    /* 004941b7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004941bb: mov ebx, dword ptr [edi + esi*4 + 0x658] */ r_ebx = R32((u32)(r_edi+r_esi*4+0x658u));
    /* 004941c2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004941c4: je 0x494238 */ if (fZ) goto L_00494238;
L_004941c6:; BB(0x004941c6);
    /* 004941c6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 004941ca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4941cfu); f_00829cc8();
    /* 004941cf: fld dword ptr [ebp + edi + 0x458] */ FPUSH(R_F32((u32)(r_ebp+r_edi+0x458u)));
    /* 004941d6: fcomp dword ptr [0x902bb8] */ fx_compare(ST(0), R_F32((u32)(0x902bb8u))); FPOP();
    /* 004941dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004941de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004941df: je 0x494263 */ if (fZ) goto L_00494263;
L_004941e5:; BB(0x004941e5);
    /* 004941e5: mov eax, dword ptr [ebp + edi + 0x460] */ r_eax = R32((u32)(r_ebp+r_edi+0x460u));
    /* 004941ec: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004941f0: mov eax, dword ptr [ebp + edi + 0x464] */ r_eax = R32((u32)(r_ebp+r_edi+0x464u));
    /* 004941f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004941f9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004941fd: mov eax, dword ptr [ebp + edi + 0x44c] */ r_eax = R32((u32)(r_ebp+r_edi+0x44cu));
    /* 00494204: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00494208: mov eax, dword ptr [ebp + edi + 0x450] */ r_eax = R32((u32)(r_ebp+r_edi+0x450u));
    /* 0049420f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494213: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x494218u); f_00588428();
    /* 00494218: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049421c: push dword ptr [ebp + edi + 0x458] */ { u32 v = R32((u32)(r_ebp+r_edi+0x458u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494224: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00494228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494229: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x49422eu); f_008302c4();
    /* 0049422e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494231: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494233: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x494238u); f_00452050();
L_00494238:; BB(0x00494238);
    /* 00494238: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049423b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049423e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494241: jl 0x494194 */ if ((fS!=fO)) goto L_00494194;
L_00494247:; BB(0x00494247);
    /* 00494247: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x49424cu); f_0082faac();
    /* 0049424c: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x494251u); f_0048e364();
    /* 00494251: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x494256u); f_0082da80();
    /* 00494256: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x49425bu); f_0082dab0();
    /* 0049425b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049425e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049425f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494262: ret  */ FN_RET(0x00494154); r_esp += 4; return;
L_00494263:; BB(0x00494263);
    /* 00494263: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494265: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x49426au); f_00588428();
    /* 0049426a: push dword ptr [ebp + edi + 0x450] */ { u32 v = R32((u32)(r_ebp+r_edi+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494271: push dword ptr [ebp + edi + 0x44c] */ { u32 v = R32((u32)(r_ebp+r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00494278: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0049427c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049427d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x494282u); f_0083046c();
    /* 00494282: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494285: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494287: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x49428cu); f_00452050();
    /* 0049428c: jmp 0x494238 */ goto L_00494238;
}

void f_0049424e(void)
{
    FN_ENTER(0x0049424e);
    /* 0049424e: mov eax, dword ptr [0x2ae8ffff] */ r_eax = R32((u32)(0x2ae8ffffu));
    /* 00494253: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 00494254: cmp dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;   }
    /* 00494256: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x49425bu); f_0082dab0();
    /* 0049425b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049425e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049425f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494262: ret  */ FN_RET(0x0049424e); r_esp += 4; return;
}

void f_0049424f(void)
{
    FN_ENTER(0x0049424f);
}

void f_00494290(void) /* sub_494290 */
{
    FN_ENTER(0x00494290);
    /* 00494290: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00494291: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494294: mov esi, ecx */ r_esi = r_ecx;
    /* 00494296: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 0049429c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049429e: jne 0x4942ad */ if (!fZ) goto L_004942ad;
L_004942a0:; BB(0x004942a0);
    /* 004942a0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004942a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004942a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004942a6: call 0x49448c */ r_esp -= 4; W32(r_esp, 0x4942abu); f_0049448c();
    /* 004942ab: jmp 0x4942b8 */ goto L_004942b8;
L_004942ad:; BB(0x004942ad);
    /* 004942ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004942b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004942b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004942b3: call 0x494318 */ r_esp -= 4; W32(r_esp, 0x4942b8u); f_00494318();
L_004942b8:; BB(0x004942b8);
    /* 004942b8: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 004942be: mov dword ptr [esi + 0x440], 1 */ W32((u32)(r_esi+0x440u), 0x1u);
    /* 004942c8: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 004942ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004942d0: jne 0x494310 */ if (!fZ) goto L_00494310;
L_004942d2:; BB(0x004942d2);
    /* 004942d2: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 004942d7: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004942db: mov ecx, esi */ r_ecx = r_esi;
    /* 004942dd: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 004942e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004942e3: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x4942e8u); f_00494a78();
    /* 004942e8: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 004942ec: mov byte ptr [esp + 8], 2 */ W8((u32)(r_esp+0x8u), 0x2u);
    /* 004942f1: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 004942f6: movzx ecx, byte ptr [esp + 2] */ r_ecx = (u32)R8((u32)(r_esp+0x2u));
    /* 004942fb: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 004942ff: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494303: mov byte ptr [esp + 0xb], cl */ W8((u32)(r_esp+0xbu), (u8)r_ecx);
    /* 00494307: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0049430b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494310u); f_008003e0();
L_00494310:; BB(0x00494310);
    /* 00494310: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494313: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494314: ret  */ FN_RET(0x00494290); r_esp += 4; return;
}

void f_00494318(void) /* sub_494318 */
{
    FN_ENTER(0x00494318);
    /* 00494318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00494319: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049431a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049431b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049431c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049431f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00494321: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494323: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00494327: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00494328: call 0x49448c */ r_esp -= 4; W32(r_esp, 0x49432du); f_0049448c();
    /* 0049432d: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00494330: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00494333: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00494337: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49433cu); f_008587a5();
    /* 0049433c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049433f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00494342: fdiv dword ptr [0x902bac] */ ST(0) = ST(0) / R_F32((u32)(0x902bacu));
    /* 00494348: fmul dword ptr [0x902bb0] */ ST(0) = ST(0) * R_F32((u32)(0x902bb0u));
    /* 0049434e: fadd dword ptr [0x902bb4] */ ST(0) = ST(0) + R_F32((u32)(0x902bb4u));
    /* 00494354: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00494358: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0049435d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494362: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00494366: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0049436a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049436e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00494372: movsx ebx, byte ptr [esp + 0x18] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x18u));
    /* 00494377: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49437cu); f_008587a5();
    /* 0049437c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494380: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494384: fdiv dword ptr [0x902bac] */ ST(0) = ST(0) / R_F32((u32)(0x902bacu));
    /* 0049438a: fcomp dword ptr [0x902ba8] */ fx_compare(ST(0), R_F32((u32)(0x902ba8u))); FPOP();
    /* 00494390: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494392: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494393: jae 0x49439a */ if (!fC) goto L_0049439a;
L_00494395:; BB(0x00494395);
    /* 00494395: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00494397: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
L_0049439a:; BB(0x0049439a);
    /* 0049439a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0049439e: movsx edx, byte ptr [esi + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1u));
    /* 004943a2: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004943a4: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 004943a6: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004943a9: je 0x494470 */ if (fZ) goto L_00494470;
L_004943af:; BB(0x004943af);
    /* 004943af: mov byte ptr [esi + 1], 0x1c */ W8((u32)(r_esi+0x1u), 0x1cu);
    /* 004943b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004943b5: call 0x49457c */ r_esp -= 4; W32(r_esp, 0x4943bau); f_0049457c();
    /* 004943ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004943bc: je 0x494426 */ if (fZ) goto L_00494426;
L_004943be:; BB(0x004943be);
    /* 004943be: movzx eax, byte ptr [0xa472c0] */ r_eax = (u32)R8((u32)(0xa472c0u));
    /* 004943c5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004943c7: jne 0x4943dd */ if (!fZ) goto L_004943dd;
L_004943c9:; BB(0x004943c9);
    /* 004943c9: mov dword ptr [0xa472c4], 0x3e99999a */ W32((u32)(0xa472c4u), 0x3e99999au);
    /* 004943d3: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004943d8: mov byte ptr [0xa472c0], al */ W8((u32)(0xa472c0u), (u8)r_eax);
L_004943dd:; BB(0x004943dd);
    /* 004943dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4943e2u); f_008587a5();
    /* 004943e2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004943e6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004943ea: fdiv dword ptr [0x902bac] */ ST(0) = ST(0) / R_F32((u32)(0x902bacu));
    /* 004943f0: fcom dword ptr [0x902580] */ fx_compare(ST(0), R_F32((u32)(0x902580u))); 
    /* 004943f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004943f8: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004943fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004943fe: jae 0x494409 */ if (!fC) goto L_00494409;
L_00494400:; BB(0x00494400);
    /* 00494400: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00494402: mov edx, 0xfffffffe */ r_edx = 0xfffffffeu;
    /* 00494407: jmp 0x494419 */ goto L_00494419;
L_00494409:; BB(0x00494409);
    /* 00494409: fcomp dword ptr [0xa472c4] */ fx_compare(ST(0), R_F32((u32)(0xa472c4u))); FPOP();
    /* 0049440f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494411: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494412: jae 0x494419 */ if (!fC) goto L_00494419;
L_00494414:; BB(0x00494414);
    /* 00494414: mov edx, 0xa */ r_edx = 0xau;
L_00494419:; BB(0x00494419);
    /* 00494419: mov byte ptr [esi + 2], dl */ W8((u32)(r_esi+0x2u), (u8)r_edx);
    /* 0049441c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049441f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494421: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494422: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494423: ret 4 */ FN_RET(0x00494318); r_esp += 8; return;
L_00494426:; BB(0x00494426);
    /* 00494426: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494428: call 0x4945b4 */ r_esp -= 4; W32(r_esp, 0x49442du); f_004945b4();
    /* 0049442d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049442f: je 0x494438 */ if (fZ) goto L_00494438;
L_00494431:; BB(0x00494431);
    /* 00494431: mov ebp, 0x902584 */ r_ebp = 0x902584u;
    /* 00494436: jmp 0x49443d */ goto L_0049443d;
L_00494438:; BB(0x00494438);
    /* 00494438: mov ebp, 0x902588 */ r_ebp = 0x902588u;
L_0049443d:; BB(0x0049443d);
    /* 0049443d: movsx ebx, byte ptr [ebp] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 00494441: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494446u); f_008587a5();
    /* 00494446: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049444a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0049444e: fdiv dword ptr [0x902bac] */ ST(0) = ST(0) / R_F32((u32)(0x902bacu));
    /* 00494454: fcomp dword ptr [0x902ba8] */ fx_compare(ST(0), R_F32((u32)(0x902ba8u))); FPOP();
    /* 0049445a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049445c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049445d: jae 0x494463 */ if (!fC) goto L_00494463;
L_0049445f:; BB(0x0049445f);
    /* 0049445f: movsx ebx, byte ptr [ebp + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
L_00494463:; BB(0x00494463);
    /* 00494463: mov byte ptr [esi + 2], bl */ W8((u32)(r_esi+0x2u), (u8)r_ebx);
    /* 00494466: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049446a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049446b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049446c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049446d: ret 4 */ FN_RET(0x00494318); r_esp += 8; return;
L_00494470:; BB(0x00494470);
    /* 00494470: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494472: call 0x494520 */ r_esp -= 4; W32(r_esp, 0x494477u); f_00494520();
    /* 00494477: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494479: jne 0x4943af */ if (!fZ) goto L_004943af;
L_0049447f:; BB(0x0049447f);
    /* 0049447f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494482: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494484: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494485: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494486: ret 4 */ FN_RET(0x00494318); r_esp += 8; return;
}

void f_0049448c(void) /* sub_49448C */
{
    FN_ENTER(0x0049448c);
    /* 0049448c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049448d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049448e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494491: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00494495: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00494498: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049449b: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0049449e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4944a3u); f_008587a5();
    /* 004944a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004944a6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004944a9: fdiv dword ptr [0x902b98] */ ST(0) = ST(0) / R_F32((u32)(0x902b98u));
    /* 004944af: fadd dword ptr [0x902b9c] */ ST(0) = ST(0) + R_F32((u32)(0x902b9cu));
    /* 004944b5: fmul dword ptr [0x902ba0] */ ST(0) = ST(0) * R_F32((u32)(0x902ba0u));
    /* 004944bb: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004944bf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004944c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004944c5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004944c9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004944ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004944d3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004944d7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004944db: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004944df: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004944e3: mov ebx, 0x12 */ r_ebx = 0x12u;
    /* 004944e8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004944ec: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 004944ee: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4944f3u); f_008587a5();
    /* 004944f3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004944f7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004944fb: fdiv dword ptr [0x902b98] */ ST(0) = ST(0) / R_F32((u32)(0x902b98u));
    /* 00494501: fcomp dword ptr [0x90258c] */ fx_compare(ST(0), R_F32((u32)(0x90258cu))); FPOP();
    /* 00494507: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494509: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049450a: jae 0x494511 */ if (!fC) goto L_00494511;
L_0049450c:; BB(0x0049450c);
    /* 0049450c: mov ebx, 0x1c */ r_ebx = 0x1cu;
L_00494511:; BB(0x00494511);
    /* 00494511: mov byte ptr [esi + 2], 0xa */ W8((u32)(r_esi+0x2u), 0xau);
    /* 00494515: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 00494518: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049451b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049451c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049451d: ret 4 */ FN_RET(0x0049448c); r_esp += 8; return;
}

void f_00494520(void) /* sub_494520 */
{
    FN_ENTER(0x00494520);
    /* 00494520: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494523: movzx eax, byte ptr [0xa472c8] */ r_eax = (u32)R8((u32)(0xa472c8u));
    /* 0049452a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049452c: jne 0x494542 */ if (!fZ) goto L_00494542;
L_0049452e:; BB(0x0049452e);
    /* 0049452e: mov dword ptr [0xa472cc], 0x43660000 */ W32((u32)(0xa472ccu), 0x43660000u);
    /* 00494538: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049453d: mov byte ptr [0xa472c8], al */ W8((u32)(0xa472c8u), (u8)r_eax);
L_00494542:; BB(0x00494542);
    /* 00494542: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00494545: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00494548: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00494550: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00494553: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00494557: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049455a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49455fu); f_0083173c();
    /* 0049455f: fcomp dword ptr [0xa472cc] */ fx_compare(ST(0), R_F32((u32)(0xa472ccu))); FPOP();
    /* 00494565: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494567: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494568: jae 0x494573 */ if (!fC) goto L_00494573;
L_0049456a:; BB(0x0049456a);
    /* 0049456a: mov eax, 1 */ r_eax = 0x1u;
    /* 0049456f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494572: ret  */ FN_RET(0x00494520); r_esp += 4; return;
L_00494573:; BB(0x00494573);
    /* 00494573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00494575: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494578: ret  */ FN_RET(0x00494520); r_esp += 4; return;
}

void f_0049457c(void) /* sub_49457C */
{
    FN_ENTER(0x0049457c);
    /* 0049457c: movzx eax, byte ptr [0xa472d0] */ r_eax = (u32)R8((u32)(0xa472d0u));
    /* 00494583: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00494585: jne 0x49459b */ if (!fZ) goto L_0049459b;
L_00494587:; BB(0x00494587);
    /* 00494587: mov dword ptr [0xa472d4], 0x430c0000 */ W32((u32)(0xa472d4u), 0x430c0000u);
    /* 00494591: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00494596: mov byte ptr [0xa472d0], al */ W8((u32)(0xa472d0u), (u8)r_eax);
L_0049459b:; BB(0x0049459b);
    /* 0049459b: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0049459e: fcomp dword ptr [0xa472d4] */ fx_compare(ST(0), R_F32((u32)(0xa472d4u))); FPOP();
    /* 004945a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004945a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004945a7: jbe 0x4945af */ if ((fC||fZ)) goto L_004945af;
L_004945a9:; BB(0x004945a9);
    /* 004945a9: mov eax, 1 */ r_eax = 0x1u;
    /* 004945ae: ret  */ FN_RET(0x0049457c); r_esp += 4; return;
L_004945af:; BB(0x004945af);
    /* 004945af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004945b1: ret  */ FN_RET(0x0049457c); r_esp += 4; return;
}

void f_004945b4(void) /* sub_4945B4 */
{
    FN_ENTER(0x004945b4);
    /* 004945b4: movzx eax, byte ptr [0xa472d8] */ r_eax = (u32)R8((u32)(0xa472d8u));
    /* 004945bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 004945bd: jne 0x4945d3 */ if (!fZ) goto L_004945d3;
L_004945bf:; BB(0x004945bf);
    /* 004945bf: mov dword ptr [0xa472dc], 0x42200000 */ W32((u32)(0xa472dcu), 0x42200000u);
    /* 004945c9: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 004945ce: mov byte ptr [0xa472d8], al */ W8((u32)(0xa472d8u), (u8)r_eax);
L_004945d3:; BB(0x004945d3);
    /* 004945d3: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004945d6: fcomp dword ptr [0xa472dc] */ fx_compare(ST(0), R_F32((u32)(0xa472dcu))); FPOP();
    /* 004945dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004945de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004945df: jae 0x4945e7 */ if (!fC) goto L_004945e7;
L_004945e1:; BB(0x004945e1);
    /* 004945e1: mov eax, 1 */ r_eax = 0x1u;
    /* 004945e6: ret  */ FN_RET(0x004945b4); r_esp += 4; return;
L_004945e7:; BB(0x004945e7);
    /* 004945e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004945e9: ret  */ FN_RET(0x004945b4); r_esp += 4; return;
}

void f_004945ec(void) /* sub_4945EC */
{
    FN_ENTER(0x004945ec);
    /* 004945ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004945ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004945ee: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004945f1: mov esi, ecx */ r_esi = r_ecx;
    /* 004945f3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004945f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004945f7: mov ecx, esi */ r_ecx = r_esi;
    /* 004945f9: call 0x49448c */ r_esp -= 4; W32(r_esp, 0x4945feu); f_0049448c();
    /* 004945fe: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00494601: fcomp dword ptr [0x902590] */ fx_compare(ST(0), R_F32((u32)(0x902590u))); FPOP();
    /* 00494607: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494609: mov dword ptr [esi + 0x440], 1 */ W32((u32)(r_esi+0x440u), 0x1u);
    /* 00494613: mov ebx, 0x21 */ r_ebx = 0x21u;
    /* 00494618: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494619: jae 0x494620 */ if (!fC) goto L_00494620;
L_0049461b:; BB(0x0049461b);
    /* 0049461b: mov ebx, 0x26 */ r_ebx = 0x26u;
L_00494620:; BB(0x00494620);
    /* 00494620: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 00494626: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0049462c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049462e: jne 0x494672 */ if (!fZ) goto L_00494672;
L_00494630:; BB(0x00494630);
    /* 00494630: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494635: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494639: mov ecx, esi */ r_ecx = r_esi;
    /* 0049463b: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494640: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494646: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x49464bu); f_00494a78();
    /* 0049464b: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 0049464f: mov byte ptr [esp + 8], bl */ W8((u32)(r_esp+0x8u), (u8)r_ebx);
    /* 00494653: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494658: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 0049465d: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494661: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494665: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494669: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0049466d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494672u); f_008003e0();
L_00494672:; BB(0x00494672);
    /* 00494672: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494675: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494676: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494677: ret  */ FN_RET(0x004945ec); r_esp += 4; return;
}

void f_00494678(void) /* sub_494678 */
{
    FN_ENTER(0x00494678);
    /* 00494678: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00494679: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049467a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049467b: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049467e: mov esi, ecx */ r_esi = r_ecx;
    /* 00494680: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 00494686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494688: jne 0x4947cf */ if (!fZ) goto L_004947cf;
L_0049468e:; BB(0x0049468e);
    /* 0049468e: mov ecx, esi */ r_ecx = r_esi;
    /* 00494690: call 0x494520 */ r_esp -= 4; W32(r_esp, 0x494695u); f_00494520();
    /* 00494695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494697: je 0x4946e9 */ if (fZ) goto L_004946e9;
L_00494699:; BB(0x00494699);
    /* 00494699: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49469eu); f_008587a5();
    /* 0049469e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004946a2: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004946a6: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 004946ac: fmul dword ptr [0x902b70] */ ST(0) = ST(0) * R_F32((u32)(0x902b70u));
    /* 004946b2: mov ecx, esi */ r_ecx = r_esi;
    /* 004946b4: fadd dword ptr [0x902b68] */ ST(0) = ST(0) + R_F32((u32)(0x902b68u));
    /* 004946ba: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004946be: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004946c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004946c8: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004946cc: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004946d0: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004946d4: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004946d8: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004946dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004946dd: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x4946e2u); f_00494ae0();
    /* 004946e2: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004946e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004946e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004946e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004946e8: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_004946e9:; BB(0x004946e9);
    /* 004946e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004946eb:; BB(0x004946eb);
    /* 004946eb: mov edx, dword ptr [esi + eax*4 + 0x380] */ r_edx = R32((u32)(r_esi+r_eax*4+0x380u));
    /* 004946f2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004946f5: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004946f8: je 0x494a56 */ if (fZ) goto L_00494a56;
L_004946fe:; BB(0x004946fe);
    /* 004946fe: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494701: je 0x494a4c */ if (fZ) goto L_00494a4c;
L_00494707:; BB(0x00494707);
    /* 00494707: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049470a: jl 0x4946eb */ if ((fS!=fO)) goto L_004946eb;
L_0049470c:; BB(0x0049470c);
    /* 0049470c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494711u); f_008587a5();
    /* 00494711: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00494715: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 00494719: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 0049471f: fcomp dword ptr [0x902b6c] */ fx_compare(ST(0), R_F32((u32)(0x902b6cu))); FPOP();
    /* 00494725: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494727: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494728: jae 0x494731 */ if (!fC) goto L_00494731;
L_0049472a:; BB(0x0049472a);
    /* 0049472a: mov eax, 3 */ r_eax = 0x3u;
    /* 0049472f: jmp 0x494736 */ goto L_00494736;
L_00494731:; BB(0x00494731);
    /* 00494731: mov eax, 5 */ r_eax = 0x5u;
L_00494736:; BB(0x00494736);
    /* 00494736: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494739: jne 0x494776 */ if (!fZ) goto L_00494776;
L_0049473b:; BB(0x0049473b);
    /* 0049473b: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 00494741: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494747: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494749: jne 0x49476f */ if (!fZ) goto L_0049476f;
L_0049474b:; BB(0x0049474b);
    /* 0049474b: mov byte ptr [esp + 0x40], 0xa4 */ W8((u32)(r_esp+0x40u), 0xa4u);
    /* 00494750: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00494754: mov ecx, esi */ r_ecx = r_esi;
    /* 00494756: mov byte ptr [esp + 0x41], 5 */ W8((u32)(r_esp+0x41u), 0x5u);
    /* 0049475b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049475c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494761u); f_00494a78();
    /* 00494761: mov byte ptr [esp + 0x44], 3 */ W8((u32)(r_esp+0x44u), 0x3u);
    /* 00494766: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0049476a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x49476fu); f_008003e0();
L_0049476f:; BB(0x0049476f);
    /* 0049476f: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494772: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494773: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494774: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494775: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_00494776:; BB(0x00494776);
    /* 00494776: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494779: jne 0x494a45 */ if (!fZ) goto L_00494a45;
L_0049477f:; BB(0x0049477f);
    /* 0049477f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494784u); f_008587a5();
    /* 00494784: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00494788: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 0049478c: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 00494792: fmul dword ptr [0x902b70] */ ST(0) = ST(0) * R_F32((u32)(0x902b70u));
    /* 00494798: mov ecx, esi */ r_ecx = r_esi;
    /* 0049479a: fadd dword ptr [0x902b68] */ ST(0) = ST(0) + R_F32((u32)(0x902b68u));
    /* 004947a0: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004947a4: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004947a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004947ae: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004947b2: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004947b6: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004947ba: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004947be: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004947c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004947c3: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x4947c8u); f_00494ae0();
    /* 004947c8: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004947cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004947cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004947cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004947ce: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_004947cf:; BB(0x004947cf);
    /* 004947cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004947d2: jne 0x494a45 */ if (!fZ) goto L_00494a45;
L_004947d8:; BB(0x004947d8);
    /* 004947d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004947db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004947dc: mov ecx, esi */ r_ecx = r_esi;
    /* 004947de: call 0x494318 */ r_esp -= 4; W32(r_esp, 0x4947e3u); f_00494318();
    /* 004947e3: mov ecx, esi */ r_ecx = r_esi;
    /* 004947e5: call 0x4945b4 */ r_esp -= 4; W32(r_esp, 0x4947eau); f_004945b4();
    /* 004947ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004947ec: je 0x49489e */ if (fZ) goto L_0049489e;
L_004947f2:; BB(0x004947f2);
    /* 004947f2: mov ebx, 0x15 */ r_ebx = 0x15u;
    /* 004947f7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004947f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004947fb:; BB(0x004947fb);
    /* 004947fb: mov edx, dword ptr [esi + eax*4 + 0x380] */ r_edx = R32((u32)(r_esi+r_eax*4+0x380u));
    /* 00494802: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494805: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494808: jne 0x49480d */ if (!fZ) goto L_0049480d;
L_0049480a:; BB(0x0049480a);
    /* 0049480a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0049480d:; BB(0x0049480d);
    /* 0049480d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494810: jl 0x4947fb */ if ((fS!=fO)) goto L_004947fb;
L_00494812:; BB(0x00494812);
    /* 00494812: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494814: je 0x49483e */ if (fZ) goto L_0049483e;
L_00494816:; BB(0x00494816);
    /* 00494816: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49481bu); f_008587a5();
    /* 0049481b: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0049481f: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 00494823: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 00494829: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0049482d: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 00494831: fdivr dword ptr [0x902594] */ ST(0) = R_F32((u32)(0x902594u)) / ST(0);
    /* 00494837: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494839: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049483b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049483c: jbe 0x494845 */ if ((fC||fZ)) goto L_00494845;
L_0049483e:; BB(0x0049483e);
    /* 0049483e: mov byte ptr [esp + 2], 0xfe */ W8((u32)(r_esp+0x2u), 0xfeu);
    /* 00494843: jmp 0x49484a */ goto L_0049484a;
L_00494845:; BB(0x00494845);
    /* 00494845: mov ebx, 2 */ r_ebx = 0x2u;
L_0049484a:; BB(0x0049484a);
    /* 0049484a: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 00494850: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494856: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494858: jne 0x494897 */ if (!fZ) goto L_00494897;
L_0049485a:; BB(0x0049485a);
    /* 0049485a: mov byte ptr [esp + 0x2c], 0xa4 */ W8((u32)(r_esp+0x2cu), 0xa4u);
    /* 0049485f: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00494863: mov ecx, esi */ r_ecx = r_esi;
    /* 00494865: mov byte ptr [esp + 0x2d], 5 */ W8((u32)(r_esp+0x2du), 0x5u);
    /* 0049486a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049486b: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494870u); f_00494a78();
    /* 00494870: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494874: mov byte ptr [esp + 0x30], bl */ W8((u32)(r_esp+0x30u), (u8)r_ebx);
    /* 00494878: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 0049487d: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494882: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 00494886: mov byte ptr [esp + 0x32], dl */ W8((u32)(r_esp+0x32u), (u8)r_edx);
    /* 0049488a: mov byte ptr [esp + 0x33], bl */ W8((u32)(r_esp+0x33u), (u8)r_ebx);
    /* 0049488e: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00494892: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494897u); f_008003e0();
L_00494897:; BB(0x00494897);
    /* 00494897: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049489a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049489b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049489c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049489d: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_0049489e:; BB(0x0049489e);
    /* 0049489e: mov ecx, esi */ r_ecx = r_esi;
    /* 004948a0: call 0x49457c */ r_esp -= 4; W32(r_esp, 0x4948a5u); f_0049457c();
    /* 004948a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004948a7: je 0x4948fe */ if (fZ) goto L_004948fe;
L_004948a9:; BB(0x004948a9);
    /* 004948a9: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 004948af: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 004948b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004948b7: jne 0x4948f7 */ if (!fZ) goto L_004948f7;
L_004948b9:; BB(0x004948b9);
    /* 004948b9: mov byte ptr [esp + 0x18], 0xa4 */ W8((u32)(r_esp+0x18u), 0xa4u);
    /* 004948be: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004948c2: mov ecx, esi */ r_ecx = r_esi;
    /* 004948c4: mov byte ptr [esp + 0x19], 5 */ W8((u32)(r_esp+0x19u), 0x5u);
    /* 004948c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004948ca: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x4948cfu); f_00494a78();
    /* 004948cf: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 004948d3: mov byte ptr [esp + 0x1c], 4 */ W8((u32)(r_esp+0x1cu), 0x4u);
    /* 004948d8: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 004948dd: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 004948e2: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 004948e6: mov byte ptr [esp + 0x1e], dl */ W8((u32)(r_esp+0x1eu), (u8)r_edx);
    /* 004948ea: mov byte ptr [esp + 0x1f], bl */ W8((u32)(r_esp+0x1fu), (u8)r_ebx);
    /* 004948ee: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004948f2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4948f7u); f_008003e0();
L_004948f7:; BB(0x004948f7);
    /* 004948f7: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004948fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004948fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004948fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004948fd: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_004948fe:; BB(0x004948fe);
    /* 004948fe: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494903u); f_008587a5();
    /* 00494903: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00494907: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 0049490b: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 00494911: fmul dword ptr [0x902b84] */ ST(0) = ST(0) * R_F32((u32)(0x902b84u));
    /* 00494917: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 0049491b: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 00494920: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494925: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00494929: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0049492d: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00494931: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00494935: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00494939: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049493c: jl 0x494940 */ if ((fS!=fO)) goto L_00494940;
L_0049493e:; BB(0x0049493e);
    /* 0049493e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00494940:; BB(0x00494940);
    /* 00494940: mov ebx, dword ptr [eax*4 + 0x902598] */ r_ebx = R32((u32)(r_eax*4+0x902598u));
    /* 00494947: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049494a: je 0x494a60 */ if (fZ) goto L_00494a60;
L_00494950:; BB(0x00494950);
    /* 00494950: cmp ebx, 0x16 */ {  u32 a = r_ebx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494953: je 0x4949f3 */ if (fZ) goto L_004949f3;
L_00494959:; BB(0x00494959);
    /* 00494959: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049495c: jne 0x4949a6 */ if (!fZ) goto L_004949a6;
L_0049495e:; BB(0x0049495e);
    /* 0049495e: mov byte ptr [esp + 2], 0xa */ W8((u32)(r_esp+0x2u), 0xau);
    /* 00494963: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494968u); f_008587a5();
    /* 00494968: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0049496c: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 00494970: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 00494976: fmul dword ptr [0x902b70] */ ST(0) = ST(0) * R_F32((u32)(0x902b70u));
    /* 0049497c: fadd dword ptr [0x902b74] */ ST(0) = ST(0) + R_F32((u32)(0x902b74u));
    /* 00494982: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 00494986: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 0049498b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494990: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00494994: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 00494998: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0049499c: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004949a0: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 004949a4: jmp 0x4949f8 */ goto L_004949f8;
L_004949a6:; BB(0x004949a6);
    /* 004949a6: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004949a9: jne 0x4949f8 */ if (!fZ) goto L_004949f8;
L_004949ab:; BB(0x004949ab);
    /* 004949ab: mov byte ptr [esp + 2], 0xa */ W8((u32)(r_esp+0x2u), 0xau);
    /* 004949b0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4949b5u); f_008587a5();
    /* 004949b5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004949b9: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 004949bd: fdiv dword ptr [0x902b80] */ ST(0) = ST(0) / R_F32((u32)(0x902b80u));
    /* 004949c3: fmul dword ptr [0x902b78] */ ST(0) = ST(0) * R_F32((u32)(0x902b78u));
    /* 004949c9: fadd dword ptr [0x902b7c] */ ST(0) = ST(0) + R_F32((u32)(0x902b7cu));
    /* 004949cf: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004949d3: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004949d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004949dd: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004949e1: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004949e5: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004949e9: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004949ed: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 004949f1: jmp 0x4949f8 */ goto L_004949f8;
L_004949f3:; BB(0x004949f3);
    /* 004949f3: mov byte ptr [esp + 2], 0xa */ W8((u32)(r_esp+0x2u), 0xau);
L_004949f8:; BB(0x004949f8);
    /* 004949f8: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 004949fe: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494a04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494a06: jne 0x494a45 */ if (!fZ) goto L_00494a45;
L_00494a08:; BB(0x00494a08);
    /* 00494a08: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494a0d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494a11: mov ecx, esi */ r_ecx = r_esi;
    /* 00494a13: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494a19: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494a1eu); f_00494a78();
    /* 00494a1e: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494a22: mov byte ptr [esp + 8], bl */ W8((u32)(r_esp+0x8u), (u8)r_ebx);
    /* 00494a26: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494a2b: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494a30: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494a34: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494a38: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494a3c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494a40: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494a45u); f_008003e0();
L_00494a45:; BB(0x00494a45);
    /* 00494a45: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494a48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494a49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494a4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494a4b: ret  */ FN_RET(0x00494678); r_esp += 4; return;
L_00494a4c:; BB(0x00494a4c);
    /* 00494a4c: mov eax, 3 */ r_eax = 0x3u;
    /* 00494a51: jmp 0x494736 */ goto L_00494736;
L_00494a56:; BB(0x00494a56);
    /* 00494a56: mov eax, 5 */ r_eax = 0x5u;
    /* 00494a5b: jmp 0x494736 */ goto L_00494736;
L_00494a60:; BB(0x00494a60);
    /* 00494a60: movsx eax, byte ptr [esp + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x2u));
    /* 00494a65: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494a68: je 0x494a71 */ if (fZ) goto L_00494a71;
L_00494a6a:; BB(0x00494a6a);
    /* 00494a6a: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494a6f: jmp 0x4949f8 */ goto L_004949f8;
L_00494a71:; BB(0x00494a71);
    /* 00494a71: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00494a76: jmp 0x4949f8 */ goto L_004949f8;
}

void f_0049485a(void)
{
    FN_ENTER(0x0049485a);
    /* 0049485a: mov byte ptr [esp + 0x2c], 0xa4 */ W8((u32)(r_esp+0x2cu), 0xa4u);
    /* 0049485f: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00494863: mov ecx, esi */ r_ecx = r_esi;
    /* 00494865: mov byte ptr [esp + 0x2d], 5 */ W8((u32)(r_esp+0x2du), 0x5u);
    /* 0049486a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049486b: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494870u); f_00494a78();
    /* 00494870: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494874: mov byte ptr [esp + 0x30], bl */ W8((u32)(r_esp+0x30u), (u8)r_ebx);
    /* 00494878: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 0049487d: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494882: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 00494886: mov byte ptr [esp + 0x32], dl */ W8((u32)(r_esp+0x32u), (u8)r_edx);
    /* 0049488a: mov byte ptr [esp + 0x33], bl */ W8((u32)(r_esp+0x33u), (u8)r_ebx);
    /* 0049488e: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00494892: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494897u); f_008003e0();
    /* 00494897: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049489a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049489b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049489c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049489d: ret  */ FN_RET(0x0049485a); r_esp += 4; return;
}

void f_00494a78(void) /* sub_494A78 */
{
    FN_ENTER(0x00494a78);
    /* 00494a78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494a79: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494a7c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00494a80: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00494a84: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 00494a88: mov edx, dword ptr [ecx + 0x440] */ r_edx = R32((u32)(r_ecx+0x440u));
    /* 00494a8e: mov byte ptr [ebx + 8], dl */ W8((u32)(r_ebx+0x8u), (u8)r_edx);
    /* 00494a91: mov eax, dword ptr [ecx + 0x41c] */ r_eax = R32((u32)(r_ecx+0x41cu));
    /* 00494a97: mov byte ptr [ebx + 9], al */ W8((u32)(r_ebx+0x9u), (u8)r_eax);
    /* 00494a9a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494a9fu); f_008587a5();
    /* 00494a9f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00494aa2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00494aa5: fdiv dword ptr [0x902b60] */ ST(0) = ST(0) / R_F32((u32)(0x902b60u));
    /* 00494aab: fmul dword ptr [0x902b64] */ ST(0) = ST(0) * R_F32((u32)(0x902b64u));
    /* 00494ab1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00494ab5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00494aba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494abf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00494ac3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00494ac7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00494acb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00494acf: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00494ad3: mov byte ptr [ebx + 0xa], al */ W8((u32)(r_ebx+0xau), (u8)r_eax);
    /* 00494ad6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494ad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494ada: ret 4 */ FN_RET(0x00494a78); r_esp += 8; return;
}

void f_00494ae0(void) /* sub_494AE0 */
{
    FN_ENTER(0x00494ae0);
    /* 00494ae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494ae1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494ae4: mov eax, dword ptr [ecx + 0x400] */ r_eax = R32((u32)(r_ecx+0x400u));
    /* 00494aea: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494af0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00494af4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494af6: jne 0x494b16 */ if (!fZ) goto L_00494b16;
L_00494af8:; BB(0x00494af8);
    /* 00494af8: mov byte ptr [esp], 0xa4 */ W8((u32)(r_esp), 0xa4u);
    /* 00494afc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00494aff: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00494b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494b05: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494b0au); f_00494a78();
    /* 00494b0a: mov byte ptr [esp + 4], bl */ W8((u32)(r_esp+0x4u), (u8)r_ebx);
    /* 00494b0e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00494b11: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494b16u); f_008003e0();
L_00494b16:; BB(0x00494b16);
    /* 00494b16: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494b19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494b1a: ret 4 */ FN_RET(0x00494ae0); r_esp += 8; return;
}

void f_00494b20(void) /* sub_494B20 */
{
    FN_ENTER(0x00494b20);
    /* 00494b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00494b21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b22: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494b25: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00494b27: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00494b2a: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00494b2d: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 00494b30: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494b35u); f_008587a5();
    /* 00494b35: fld dword ptr [0x902b50] */ FPUSH(R_F32((u32)(0x902b50u)));
    /* 00494b3b: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 00494b41: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00494b45: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494b49: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00494b4d: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494b53: fadd dword ptr [0x902b58] */ ST(0) = ST(0) + R_F32((u32)(0x902b58u));
    /* 00494b59: fmul dword ptr [0x902b5c] */ ST(0) = ST(0) * R_F32((u32)(0x902b5cu));
    /* 00494b5f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00494b63: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494b67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00494b69: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00494b6d: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00494b72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494b77: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00494b7b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00494b7f: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00494b83: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00494b87: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00494b8b: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 00494b8e: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00494b94: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494b99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00494b9d: jle 0x494bb5 */ if ((fZ||fS!=fO)) goto L_00494bb5;
L_00494b9f:; BB(0x00494b9f);
    /* 00494b9f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494ba3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494ba7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494bab: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494baf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00494bb1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00494bb5:; BB(0x00494bb5);
    /* 00494bb5: mov ebx, 0x14 */ r_ebx = 0x14u;
    /* 00494bba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494bbfu); f_008587a5();
    /* 00494bbf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00494bc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494bc7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494bcb: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494bd1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494bd6: jae 0x494bdd */ if (!fC) goto L_00494bdd;
L_00494bd8:; BB(0x00494bd8);
    /* 00494bd8: mov ebx, 0xfffffffb */ r_ebx = 0xfffffffbu;
L_00494bdd:; BB(0x00494bdd);
    /* 00494bdd: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 00494be3: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
    /* 00494bed: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494bf5: jne 0x494c39 */ if (!fZ) goto L_00494c39;
L_00494bf7:; BB(0x00494bf7);
    /* 00494bf7: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 00494bfb: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494c02: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494c07: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c0c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494c11u); f_00494a78();
    /* 00494c11: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494c15: mov byte ptr [esp + 8], 0x18 */ W8((u32)(r_esp+0x8u), 0x18u);
    /* 00494c1a: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494c1f: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494c24: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494c28: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494c2c: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494c30: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494c34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494c39u); f_008003e0();
L_00494c39:; BB(0x00494c39);
    /* 00494c39: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494c3e: ret  */ FN_RET(0x00494b20); r_esp += 4; return;
}

void f_00494b41(void)
{
    FN_ENTER(0x00494b41);
    /* 00494b41: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00494b45: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494b49: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00494b4d: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494b53: fadd dword ptr [0x902b58] */ ST(0) = ST(0) + R_F32((u32)(0x902b58u));
    /* 00494b59: fmul dword ptr [0x902b5c] */ ST(0) = ST(0) * R_F32((u32)(0x902b5cu));
    /* 00494b5f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00494b63: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494b67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00494b69: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00494b6d: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00494b72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494b77: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00494b7b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00494b7f: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00494b83: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00494b87: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00494b8b: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 00494b8e: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00494b94: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494b99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00494b9d: jle 0x494bb5 */ if ((fZ||fS!=fO)) goto L_00494bb5;
L_00494b9f:; BB(0x00494b9f);
    /* 00494b9f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494ba3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494ba7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494bab: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494baf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00494bb1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00494bb5:; BB(0x00494bb5);
    /* 00494bb5: mov ebx, 0x14 */ r_ebx = 0x14u;
    /* 00494bba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494bbfu); f_008587a5();
    /* 00494bbf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00494bc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494bc7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494bcb: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494bd1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494bd6: jae 0x494bdd */ if (!fC) goto L_00494bdd;
L_00494bd8:; BB(0x00494bd8);
    /* 00494bd8: mov ebx, 0xfffffffb */ r_ebx = 0xfffffffbu;
L_00494bdd:; BB(0x00494bdd);
    /* 00494bdd: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 00494be3: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
    /* 00494bed: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494bf5: jne 0x494c39 */ if (!fZ) goto L_00494c39;
L_00494bf7:; BB(0x00494bf7);
    /* 00494bf7: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 00494bfb: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494c02: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494c07: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c0c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494c11u); f_00494a78();
    /* 00494c11: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494c15: mov byte ptr [esp + 8], 0x18 */ W8((u32)(r_esp+0x8u), 0x18u);
    /* 00494c1a: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494c1f: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494c24: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494c28: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494c2c: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494c30: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494c34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494c39u); f_008003e0();
L_00494c39:; BB(0x00494c39);
    /* 00494c39: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494c3e: ret  */ FN_RET(0x00494b41); r_esp += 4; return;
}

void f_00494b45(void)
{
    FN_ENTER(0x00494b45);
    /* 00494b45: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00494b49: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00494b4d: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494b53: fadd dword ptr [0x902b58] */ ST(0) = ST(0) + R_F32((u32)(0x902b58u));
    /* 00494b59: fmul dword ptr [0x902b5c] */ ST(0) = ST(0) * R_F32((u32)(0x902b5cu));
    /* 00494b5f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00494b63: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494b67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00494b69: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00494b6d: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00494b72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494b77: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00494b7b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00494b7f: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00494b83: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00494b87: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00494b8b: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 00494b8e: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00494b94: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494b99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00494b9d: jle 0x494bb5 */ if ((fZ||fS!=fO)) goto L_00494bb5;
L_00494b9f:; BB(0x00494b9f);
    /* 00494b9f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494ba3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494ba7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494bab: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494baf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00494bb1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00494bb5:; BB(0x00494bb5);
    /* 00494bb5: mov ebx, 0x14 */ r_ebx = 0x14u;
    /* 00494bba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494bbfu); f_008587a5();
    /* 00494bbf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00494bc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494bc7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494bcb: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494bd1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494bd6: jae 0x494bdd */ if (!fC) goto L_00494bdd;
L_00494bd8:; BB(0x00494bd8);
    /* 00494bd8: mov ebx, 0xfffffffb */ r_ebx = 0xfffffffbu;
L_00494bdd:; BB(0x00494bdd);
    /* 00494bdd: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 00494be3: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
    /* 00494bed: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494bf5: jne 0x494c39 */ if (!fZ) goto L_00494c39;
L_00494bf7:; BB(0x00494bf7);
    /* 00494bf7: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 00494bfb: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494c02: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494c07: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c0c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494c11u); f_00494a78();
    /* 00494c11: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494c15: mov byte ptr [esp + 8], 0x18 */ W8((u32)(r_esp+0x8u), 0x18u);
    /* 00494c1a: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494c1f: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494c24: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494c28: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494c2c: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494c30: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494c34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494c39u); f_008003e0();
L_00494c39:; BB(0x00494c39);
    /* 00494c39: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494c3e: ret  */ FN_RET(0x00494b45); r_esp += 4; return;
}

void f_00494b55(void)
{
    FN_ENTER(0x00494b55);
    /* 00494b55: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00494b56: sub edx, dword ptr [eax + 0x5c0dd800] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x5c0dd800u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00494b5c: sub edx, dword ptr [eax + 0x245c8900] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x245c8900u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00494b62: and bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00494b64: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494b65: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00494b67: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00494b69: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00494b6d: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00494b72: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494b77: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00494b7b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00494b7f: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00494b83: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00494b87: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00494b8b: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 00494b8e: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00494b94: mov byte ptr [esp + 1], 0x1c */ W8((u32)(r_esp+0x1u), 0x1cu);
    /* 00494b99: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00494b9d: jle 0x494bb5 */ if ((fZ||fS!=fO)) goto L_00494bb5;
L_00494b9f:; BB(0x00494b9f);
    /* 00494b9f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494ba3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494ba7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494bab: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494baf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00494bb1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00494bb5:; BB(0x00494bb5);
    /* 00494bb5: mov ebx, 0x14 */ r_ebx = 0x14u;
    /* 00494bba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494bbfu); f_008587a5();
    /* 00494bbf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00494bc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494bc7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494bcb: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494bd1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494bd6: jae 0x494bdd */ if (!fC) goto L_00494bdd;
L_00494bd8:; BB(0x00494bd8);
    /* 00494bd8: mov ebx, 0xfffffffb */ r_ebx = 0xfffffffbu;
L_00494bdd:; BB(0x00494bdd);
    /* 00494bdd: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 00494be3: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
    /* 00494bed: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494bf5: jne 0x494c39 */ if (!fZ) goto L_00494c39;
L_00494bf7:; BB(0x00494bf7);
    /* 00494bf7: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 00494bfb: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494c02: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494c07: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c0c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494c11u); f_00494a78();
    /* 00494c11: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494c15: mov byte ptr [esp + 8], 0x18 */ W8((u32)(r_esp+0x8u), 0x18u);
    /* 00494c1a: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494c1f: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494c24: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494c28: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494c2c: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494c30: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494c34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494c39u); f_008003e0();
L_00494c39:; BB(0x00494c39);
    /* 00494c39: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494c3e: ret  */ FN_RET(0x00494b55); r_esp += 4; return;
}

void f_00494ba0(void)
{
    FN_ENTER(0x00494ba0);
    /* 00494ba0: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494ba1: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00494ba3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494ba7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494bab: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494baf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00494bb1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00494bb5: mov ebx, 0x14 */ r_ebx = 0x14u;
    /* 00494bba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x494bbfu); f_008587a5();
    /* 00494bbf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00494bc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00494bc7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00494bcb: fdiv dword ptr [0x902b54] */ ST(0) = ST(0) / R_F32((u32)(0x902b54u));
    /* 00494bd1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494bd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494bd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494bd6: jae 0x494bdd */ if (!fC) goto L_00494bdd;
L_00494bd8:; BB(0x00494bd8);
    /* 00494bd8: mov ebx, 0xfffffffb */ r_ebx = 0xfffffffbu;
L_00494bdd:; BB(0x00494bdd);
    /* 00494bdd: mov eax, dword ptr [ebp + 0x400] */ r_eax = R32((u32)(r_ebp+0x400u));
    /* 00494be3: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
    /* 00494bed: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00494bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494bf5: jne 0x494c39 */ if (!fZ) goto L_00494c39;
L_00494bf7:; BB(0x00494bf7);
    /* 00494bf7: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 00494bfb: mov byte ptr [esp + 4], 0xa4 */ W8((u32)(r_esp+0x4u), 0xa4u);
    /* 00494c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494c02: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00494c07: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00494c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c0c: call 0x494a78 */ r_esp -= 4; W32(r_esp, 0x494c11u); f_00494a78();
    /* 00494c11: movzx eax, byte ptr [esp] */ r_eax = (u32)R8((u32)(r_esp));
    /* 00494c15: mov byte ptr [esp + 8], 0x18 */ W8((u32)(r_esp+0x8u), 0x18u);
    /* 00494c1a: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 00494c1f: movzx ebx, byte ptr [esp + 2] */ r_ebx = (u32)R8((u32)(r_esp+0x2u));
    /* 00494c24: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 00494c28: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 00494c2c: mov byte ptr [esp + 0xb], bl */ W8((u32)(r_esp+0xbu), (u8)r_ebx);
    /* 00494c30: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00494c34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x494c39u); f_008003e0();
L_00494c39:; BB(0x00494c39);
    /* 00494c39: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494c3e: ret  */ FN_RET(0x00494ba0); r_esp += 4; return;
}

void f_00494c40(void) /* sub_494C40 */
{
    FN_ENTER(0x00494c40);
    /* 00494c40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00494c41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00494c42: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494c45: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00494c47: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00494c4b: mov edx, dword ptr [ebp + 0x3f8] */ r_edx = R32((u32)(r_ebp+0x3f8u));
    /* 00494c51: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00494c57: mov dword ptr [ebp + 0x3fc], edx */ W32((u32)(r_ebp+0x3fcu), r_edx);
    /* 00494c5d: mov edx, dword ptr [ebp + 0x3f4] */ r_edx = R32((u32)(r_ebp+0x3f4u));
    /* 00494c63: mov dword ptr [ebp + 0x3f8], edx */ W32((u32)(r_ebp+0x3f8u), r_edx);
    /* 00494c69: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 00494c6f: mov dword ptr [ebp + 0x3f4], edx */ W32((u32)(r_ebp+0x3f4u), r_edx);
    /* 00494c75: mov edx, dword ptr [ebp + 0x3ec] */ r_edx = R32((u32)(r_ebp+0x3ecu));
    /* 00494c7b: mov dword ptr [ebp + 0x3f0], edx */ W32((u32)(r_ebp+0x3f0u), r_edx);
    /* 00494c81: mov edx, dword ptr [ebp + 0x3e8] */ r_edx = R32((u32)(r_ebp+0x3e8u));
    /* 00494c87: mov dword ptr [ebp + 0x3ec], edx */ W32((u32)(r_ebp+0x3ecu), r_edx);
    /* 00494c8d: mov edx, dword ptr [ebp + 0x3e4] */ r_edx = R32((u32)(r_ebp+0x3e4u));
    /* 00494c93: mov dword ptr [ebp + 0x3e8], edx */ W32((u32)(r_ebp+0x3e8u), r_edx);
    /* 00494c99: mov edx, dword ptr [ebp + 0x3e0] */ r_edx = R32((u32)(r_ebp+0x3e0u));
    /* 00494c9f: mov dword ptr [ebp + 0x3e4], edx */ W32((u32)(r_ebp+0x3e4u), r_edx);
    /* 00494ca5: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 00494cab: mov dword ptr [ebp + 0x3e0], edx */ W32((u32)(r_ebp+0x3e0u), r_edx);
    /* 00494cb1: mov edx, dword ptr [ebp + 0x3d8] */ r_edx = R32((u32)(r_ebp+0x3d8u));
    /* 00494cb7: mov dword ptr [ebp + 0x3dc], edx */ W32((u32)(r_ebp+0x3dcu), r_edx);
    /* 00494cbd: mov edx, dword ptr [ebp + 0x3d4] */ r_edx = R32((u32)(r_ebp+0x3d4u));
    /* 00494cc3: mov dword ptr [ebp + 0x3d8], edx */ W32((u32)(r_ebp+0x3d8u), r_edx);
    /* 00494cc9: mov edx, dword ptr [ebp + 0x3d0] */ r_edx = R32((u32)(r_ebp+0x3d0u));
    /* 00494ccf: mov dword ptr [ebp + 0x3d4], edx */ W32((u32)(r_ebp+0x3d4u), r_edx);
    /* 00494cd5: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 00494cdb: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 00494ce1: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 00494ce7: mov dword ptr [ebp + 0x3cc], edx */ W32((u32)(r_ebp+0x3ccu), r_edx);
    /* 00494ced: mov edx, dword ptr [ebp + 0x3c4] */ r_edx = R32((u32)(r_ebp+0x3c4u));
    /* 00494cf3: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 00494cf9: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 00494cff: mov dword ptr [ebp + 0x3c4], edx */ W32((u32)(r_ebp+0x3c4u), r_edx);
    /* 00494d05: mov edx, dword ptr [ebp + 0x3bc] */ r_edx = R32((u32)(r_ebp+0x3bcu));
    /* 00494d0b: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
    /* 00494d11: mov edx, dword ptr [ebp + 0x3b8] */ r_edx = R32((u32)(r_ebp+0x3b8u));
    /* 00494d17: mov dword ptr [ebp + 0x3bc], edx */ W32((u32)(r_ebp+0x3bcu), r_edx);
    /* 00494d1d: mov edx, dword ptr [ebp + 0x3b4] */ r_edx = R32((u32)(r_ebp+0x3b4u));
    /* 00494d23: mov dword ptr [ebp + 0x3b8], edx */ W32((u32)(r_ebp+0x3b8u), r_edx);
    /* 00494d29: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 00494d2f: mov dword ptr [ebp + 0x3b4], edx */ W32((u32)(r_ebp+0x3b4u), r_edx);
    /* 00494d35: mov edx, dword ptr [ebp + 0x3ac] */ r_edx = R32((u32)(r_ebp+0x3acu));
    /* 00494d3b: mov dword ptr [ebp + 0x3b0], edx */ W32((u32)(r_ebp+0x3b0u), r_edx);
    /* 00494d41: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 00494d47: mov dword ptr [ebp + 0x3ac], edx */ W32((u32)(r_ebp+0x3acu), r_edx);
    /* 00494d4d: mov edx, dword ptr [ebp + 0x3a4] */ r_edx = R32((u32)(r_ebp+0x3a4u));
    /* 00494d53: mov dword ptr [ebp + 0x3a8], edx */ W32((u32)(r_ebp+0x3a8u), r_edx);
    /* 00494d59: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00494d5f: mov dword ptr [ebp + 0x3a4], edx */ W32((u32)(r_ebp+0x3a4u), r_edx);
    /* 00494d65: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 00494d6b: mov dword ptr [ebp + 0x3a0], edx */ W32((u32)(r_ebp+0x3a0u), r_edx);
    /* 00494d71: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00494d77: mov dword ptr [ebp + 0x39c], edx */ W32((u32)(r_ebp+0x39cu), r_edx);
    /* 00494d7d: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00494d83: mov dword ptr [ebp + 0x398], edx */ W32((u32)(r_ebp+0x398u), r_edx);
    /* 00494d89: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 00494d8f: mov dword ptr [ebp + 0x394], edx */ W32((u32)(r_ebp+0x394u), r_edx);
    /* 00494d95: mov edx, dword ptr [ebp + 0x38c] */ r_edx = R32((u32)(r_ebp+0x38cu));
    /* 00494d9b: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 00494da1: mov edx, dword ptr [ebp + 0x388] */ r_edx = R32((u32)(r_ebp+0x388u));
    /* 00494da7: mov dword ptr [ebp + 0x38c], edx */ W32((u32)(r_ebp+0x38cu), r_edx);
    /* 00494dad: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00494db3: mov dword ptr [ebp + 0x388], edx */ W32((u32)(r_ebp+0x388u), r_edx);
    /* 00494db9: mov edx, dword ptr [ebp + 0x380] */ r_edx = R32((u32)(r_ebp+0x380u));
    /* 00494dbf: mov dword ptr [ebp + 0x384], edx */ W32((u32)(r_ebp+0x384u), r_edx);
    /* 00494dc5: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
    /* 00494dcb: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494dce: je 0x494dfa */ if (fZ) goto L_00494dfa;
L_00494dd0:; BB(0x00494dd0);
    /* 00494dd0: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494dd3: jne 0x494de5 */ if (!fZ) goto L_00494de5;
L_00494dd5:; BB(0x00494dd5);
    /* 00494dd5: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494ddc: add dword ptr [ebp + 0x4c8], 1 */ { u32 ad = (u32)(r_ebp+0x4c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494de3: jmp 0x494e01 */ goto L_00494e01;
L_00494de5:; BB(0x00494de5);
    /* 00494de5: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494de8: jne 0x494e01 */ if (!fZ) goto L_00494e01;
L_00494dea:; BB(0x00494dea);
    /* 00494dea: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494df1: add dword ptr [ebp + 0x4cc], 1 */ { u32 ad = (u32)(r_ebp+0x4ccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494df8: jmp 0x494e01 */ goto L_00494e01;
L_00494dfa:; BB(0x00494dfa);
    /* 00494dfa: add dword ptr [ebp + 0x4c0], 1 */ { u32 ad = (u32)(r_ebp+0x4c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00494e01:; BB(0x00494e01);
    /* 00494e01: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00494e04: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494e06: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00494e08: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00494e0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e0f: mov eax, dword ptr [eax + 0x9a70a4] */ r_eax = R32((u32)(r_eax+0x9a70a4u));
    /* 00494e15: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494e18: je 0x494e95 */ if (fZ) goto L_00494e95;
L_00494e1a:; BB(0x00494e1a);
    /* 00494e1a: cmp eax, dword ptr [ebp + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494e20: je 0x494e95 */ if (fZ) goto L_00494e95;
L_00494e22:; BB(0x00494e22);
    /* 00494e22: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00494e25: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00494e29: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00494e2d: mov dword ptr [ebp + 0x444], eax */ W32((u32)(r_ebp+0x444u), r_eax);
    /* 00494e33: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e3b: mov edi, dword ptr [eax + 0x9a6dc0] */ r_edi = R32((u32)(r_eax+0x9a6dc0u));
    /* 00494e41: mov dword ptr [ebp + 0x448], edi */ W32((u32)(r_ebp+0x448u), r_edi);
    /* 00494e47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494e49: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 00494e4f: mov esi, eax */ r_esi = r_eax;
    /* 00494e51: mov ebx, ecx */ r_ebx = r_ecx;
L_00494e53:; BB(0x00494e53);
    /* 00494e53: push dword ptr [esi + ebx*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494e5a: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 00494e60: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x494e65u); f_005b8638();
    /* 00494e65: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00494e68: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00494e6b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00494e6d: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00494e70: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00494e73: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00494e76: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 00494e7d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00494e7f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00494e82: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00494e85: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494e88: jl 0x494e53 */ if ((fS!=fO)) goto L_00494e53;
L_00494e8a:; BB(0x00494e8a);
    /* 00494e8a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00494e8d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00494e91: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00494e95:; BB(0x00494e95);
    /* 00494e95: mov eax, dword ptr [edx*8 + 0x9a70a8] */ r_eax = R32((u32)(r_edx*8+0x9a70a8u));
    /* 00494e9c: mov dword ptr [ebp + 0x420], eax */ W32((u32)(r_ebp+0x420u), r_eax);
    /* 00494ea2: mov eax, dword ptr [edx*8 + 0x9a70ac] */ r_eax = R32((u32)(r_edx*8+0x9a70acu));
    /* 00494ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494eab: je 0x494eb1 */ if (fZ) goto L_00494eb1;
L_00494ead:; BB(0x00494ead);
    /* 00494ead: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494eaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x494eb1u); call_ind(t); }
L_00494eb1:; BB(0x00494eb1);
    /* 00494eb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494eb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494eb6: ret 4 */ FN_RET(0x00494c40); r_esp += 8; return;
}

void f_00494d4f(void)
{
    FN_ENTER(0x00494d4f);
    /* 00494d4f: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00494d50: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494d52: add byte ptr [ecx + 0x3a895], cl */ { u32 ad = (u32)(r_ecx+0x3a895u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d58: add byte ptr [ebx + 0x3a095], cl */ { u32 ad = (u32)(r_ebx+0x3a095u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d5e: add byte ptr [ecx + 0x3a495], cl */ { u32 ad = (u32)(r_ecx+0x3a495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d64: add byte ptr [ebx + 0x39c95], cl */ { u32 ad = (u32)(r_ebx+0x39c95u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d6a: add byte ptr [ecx + 0x3a095], cl */ { u32 ad = (u32)(r_ecx+0x3a095u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d70: add byte ptr [ebx + 0x39895], cl */ { u32 ad = (u32)(r_ebx+0x39895u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d76: add byte ptr [ecx + 0x39c95], cl */ { u32 ad = (u32)(r_ecx+0x39c95u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d7c: add byte ptr [ebx + 0x39495], cl */ { u32 ad = (u32)(r_ebx+0x39495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d82: add byte ptr [ecx + 0x39895], cl */ { u32 ad = (u32)(r_ecx+0x39895u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d88: add byte ptr [ebx + 0x39095], cl */ { u32 ad = (u32)(r_ebx+0x39095u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d8e: add byte ptr [ecx + 0x39495], cl */ { u32 ad = (u32)(r_ecx+0x39495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d94: add byte ptr [ebx + 0x38c95], cl */ { u32 ad = (u32)(r_ebx+0x38c95u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494d9a: add byte ptr [ecx + 0x39095], cl */ { u32 ad = (u32)(r_ecx+0x39095u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494da0: add byte ptr [ebx + 0x38895], cl */ { u32 ad = (u32)(r_ebx+0x38895u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494da6: add byte ptr [ecx + 0x38c95], cl */ { u32 ad = (u32)(r_ecx+0x38c95u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494dac: add byte ptr [ebx + 0x38495], cl */ { u32 ad = (u32)(r_ebx+0x38495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494db2: add byte ptr [ecx + 0x38895], cl */ { u32 ad = (u32)(r_ecx+0x38895u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494db8: add byte ptr [ebx + 0x38095], cl */ { u32 ad = (u32)(r_ebx+0x38095u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494dbe: add byte ptr [ecx + 0x38495], cl */ { u32 ad = (u32)(r_ecx+0x38495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494dc4: add byte ptr [ecx + 0x38085], cl */ { u32 ad = (u32)(r_ecx+0x38085u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494dca: add byte ptr [ebx + 0x2a7418f8], al */ { u32 ad = (u32)(r_ebx+0x2a7418f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494dd0: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494dd3: jne 0x494de5 */ if (!fZ) goto L_00494de5;
L_00494dd5:; BB(0x00494dd5);
    /* 00494dd5: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494ddc: add dword ptr [ebp + 0x4c8], 1 */ { u32 ad = (u32)(r_ebp+0x4c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494de3: jmp 0x494e01 */ goto L_00494e01;
L_00494de5:; BB(0x00494de5);
    /* 00494de5: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494de8: jne 0x494e01 */ if (!fZ) goto L_00494e01;
L_00494dea:; BB(0x00494dea);
    /* 00494dea: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494df1: add dword ptr [ebp + 0x4cc], 1 */ { u32 ad = (u32)(r_ebp+0x4ccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00494df8: jmp 0x494e01 */ goto L_00494e01;
L_00494e01:; BB(0x00494e01);
    /* 00494e01: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00494e04: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00494e06: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00494e08: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00494e0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e0f: mov eax, dword ptr [eax + 0x9a70a4] */ r_eax = R32((u32)(r_eax+0x9a70a4u));
    /* 00494e15: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494e18: je 0x494e95 */ if (fZ) goto L_00494e95;
L_00494e1a:; BB(0x00494e1a);
    /* 00494e1a: cmp eax, dword ptr [ebp + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494e20: je 0x494e95 */ if (fZ) goto L_00494e95;
L_00494e22:; BB(0x00494e22);
    /* 00494e22: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00494e25: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00494e29: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00494e2d: mov dword ptr [ebp + 0x444], eax */ W32((u32)(r_ebp+0x444u), r_eax);
    /* 00494e33: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494e3b: mov edi, dword ptr [eax + 0x9a6dc0] */ r_edi = R32((u32)(r_eax+0x9a6dc0u));
    /* 00494e41: mov dword ptr [ebp + 0x448], edi */ W32((u32)(r_ebp+0x448u), r_edi);
    /* 00494e47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494e49: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 00494e4f: mov esi, eax */ r_esi = r_eax;
    /* 00494e51: mov ebx, ecx */ r_ebx = r_ecx;
L_00494e53:; BB(0x00494e53);
    /* 00494e53: push dword ptr [esi + ebx*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494e5a: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 00494e60: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x494e65u); f_005b8638();
    /* 00494e65: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00494e68: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00494e6b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00494e6d: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00494e70: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00494e73: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00494e76: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 00494e7d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00494e7f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00494e82: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00494e85: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494e88: jl 0x494e53 */ if ((fS!=fO)) goto L_00494e53;
L_00494e8a:; BB(0x00494e8a);
    /* 00494e8a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00494e8d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00494e91: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00494e95:; BB(0x00494e95);
    /* 00494e95: mov eax, dword ptr [edx*8 + 0x9a70a8] */ r_eax = R32((u32)(r_edx*8+0x9a70a8u));
    /* 00494e9c: mov dword ptr [ebp + 0x420], eax */ W32((u32)(r_ebp+0x420u), r_eax);
    /* 00494ea2: mov eax, dword ptr [edx*8 + 0x9a70ac] */ r_eax = R32((u32)(r_edx*8+0x9a70acu));
    /* 00494ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494eab: je 0x494eb1 */ if (fZ) goto L_00494eb1;
L_00494ead:; BB(0x00494ead);
    /* 00494ead: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494eaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x494eb1u); call_ind(t); }
L_00494eb1:; BB(0x00494eb1);
    /* 00494eb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494eb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494eb6: ret 4 */ FN_RET(0x00494d4f); r_esp += 8; return;
}

void f_00494e45(void)
{
    FN_ENTER(0x00494e45);
    /* 00494e45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00494e47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494e49: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 00494e4f: mov esi, eax */ r_esi = r_eax;
    /* 00494e51: mov ebx, ecx */ r_ebx = r_ecx;
L_00494e53:; BB(0x00494e53);
    /* 00494e53: push dword ptr [esi + ebx*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494e5a: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 00494e60: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x494e65u); f_005b8638();
    /* 00494e65: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00494e68: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00494e6b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00494e6d: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00494e70: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00494e73: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00494e76: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 00494e7d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00494e7f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00494e82: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00494e85: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494e88: jl 0x494e53 */ if ((fS!=fO)) goto L_00494e53;
L_00494e8a:; BB(0x00494e8a);
    /* 00494e8a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00494e8d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00494e91: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00494e95: mov eax, dword ptr [edx*8 + 0x9a70a8] */ r_eax = R32((u32)(r_edx*8+0x9a70a8u));
    /* 00494e9c: mov dword ptr [ebp + 0x420], eax */ W32((u32)(r_ebp+0x420u), r_eax);
    /* 00494ea2: mov eax, dword ptr [edx*8 + 0x9a70ac] */ r_eax = R32((u32)(r_edx*8+0x9a70acu));
    /* 00494ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494eab: je 0x494eb1 */ if (fZ) goto L_00494eb1;
L_00494ead:; BB(0x00494ead);
    /* 00494ead: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00494eaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x494eb1u); call_ind(t); }
L_00494eb1:; BB(0x00494eb1);
    /* 00494eb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494eb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00494eb6: ret 4 */ FN_RET(0x00494e45); r_esp += 8; return;
}

void f_00494ebc(void) /* sub_494EBC */
{
    FN_ENTER(0x00494ebc);
    /* 00494ebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494ebd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494ec0: mov edx, ecx */ r_edx = r_ecx;
    /* 00494ec2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00494ec6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494ec9: je 0x494ed3 */ if (fZ) goto L_00494ed3;
L_00494ecb:; BB(0x00494ecb);
    /* 00494ecb: cmp eax, dword ptr [edx + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494ed1: jne 0x494eda */ if (!fZ) goto L_00494eda;
L_00494ed3:; BB(0x00494ed3);
    /* 00494ed3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494ed6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494ed7: ret 4 */ FN_RET(0x00494ebc); r_esp += 8; return;
L_00494eda:; BB(0x00494eda);
    /* 00494eda: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00494ede: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00494ee2: mov edi, edx */ r_edi = r_edx;
    /* 00494ee4: mov dword ptr [edx + 0x444], eax */ W32((u32)(r_edx+0x444u), r_eax);
    /* 00494eea: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00494eed: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00494ef0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494ef2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494ef4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494ef6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494ef8: mov esi, eax */ r_esi = r_eax;
    /* 00494efa: mov ebx, dword ptr [eax + 0x9a6dc0] */ r_ebx = R32((u32)(r_eax+0x9a6dc0u));
    /* 00494f00: mov dword ptr [edx + 0x448], ebx */ W32((u32)(r_edx+0x448u), r_ebx);
    /* 00494f06: lea ebx, [edx + 0x44c] */ r_ebx = (u32)(r_edx+0x44cu);
    /* 00494f0c: mov ebp, ecx */ r_ebp = r_ecx;
L_00494f0e:; BB(0x00494f0e);
    /* 00494f0e: push dword ptr [esi + ebp*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebp*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00494f15: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 00494f1b: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x494f20u); f_005b8638();
    /* 00494f20: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00494f23: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 00494f26: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00494f28: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00494f2b: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00494f2e: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00494f31: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 00494f38: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00494f3a: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00494f3d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00494f40: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494f43: jl 0x494f0e */ if ((fS!=fO)) goto L_00494f0e;
L_00494f45:; BB(0x00494f45);
    /* 00494f45: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00494f49: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00494f4d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00494f50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494f53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494f54: ret 4 */ FN_RET(0x00494ebc); r_esp += 8; return;
}

void f_00494f58(void) /* sub_494F58 */
{
    FN_ENTER(0x00494f58);
    /* 00494f58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00494f59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00494f5a: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494f60: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00494f62: fld dword ptr [ebx + 0x46c] */ FPUSH(R_F32((u32)(r_ebx+0x46cu)));
    /* 00494f68: mov esi, dword ptr [ebx + 0x468] */ r_esi = R32((u32)(r_ebx+0x468u));
    /* 00494f6e: mov ecx, dword ptr [ebx + 0x404] */ r_ecx = R32((u32)(r_ebx+0x404u));
    /* 00494f74: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00494f7b: push dword ptr [0x9a6e9c] */ { u32 v = R32((u32)(0x9a6e9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00494f81: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x494f86u); f_005b8638();
    /* 00494f86: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494f88: je 0x494f93 */ if (fZ) goto L_00494f93;
L_00494f8a:; BB(0x00494f8a);
    /* 00494f8a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494f90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00494f91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494f92: ret  */ FN_RET(0x00494f58); r_esp += 4; return;
L_00494f93:; BB(0x00494f93);
    /* 00494f93: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 00494f9a: fcomp dword ptr [0x90262c] */ fx_compare(ST(0), R_F32((u32)(0x90262cu))); FPOP();
    /* 00494fa0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494fa2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494fa3: jb 0x494f8a */ if (fC) goto L_00494f8a;
L_00494fa5:; BB(0x00494fa5);
    /* 00494fa5: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 00494fac: fcomp dword ptr [0x902628] */ fx_compare(ST(0), R_F32((u32)(0x902628u))); FPOP();
    /* 00494fb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494fb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494fb5: ja 0x494f8a */ if ((!fC&&!fZ)) goto L_00494f8a;
L_00494fb7:; BB(0x00494fb7);
    /* 00494fb7: fld dword ptr [0x902b18] */ FPUSH(R_F32((u32)(0x902b18u)));
    /* 00494fbd: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 00494fc4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00494fc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494fc8: fld dword ptr [ebx + 0x470] */ FPUSH(R_F32((u32)(r_ebx+0x470u)));
    /* 00494fce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00494fd0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494fd1: jb 0x494ffb */ if (fC) goto L_00494ffb;
L_00494fd3:; BB(0x00494fd3);
    /* 00494fd3: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 00494fda: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00494fdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00494fde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00494fdf: jae 0x494ffd */ if (!fC) goto L_00494ffd;
L_00494fe1:; BB(0x00494fe1);
    /* 00494fe1: lea edx, [ebx + 0x5ec] */ r_edx = (u32)(r_ebx+0x5ecu);
    /* 00494fe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00494fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494fea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494feb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494fec: push 0x3bd */ { u32 v = 0x3bdu; r_esp -= 4; W32(r_esp, v); }
    /* 00494ff1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x494ff6u); f_00814298();
    /* 00494ff6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494ff9: jmp 0x494ffd */ goto L_00494ffd;
L_00494ffb:; BB(0x00494ffb);
    /* 00494ffb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00494ffd:; BB(0x00494ffd);
    /* 00494ffd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00494fff: call 0x49536c */ r_esp -= 4; W32(r_esp, 0x495004u); f_0049536c();
    /* 00495004: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00495009: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0049500b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049500d: jle 0x49519c */ if ((fZ||fS!=fO)) goto L_0049519c;
L_00495013:; BB(0x00495013);
    /* 00495013: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 0049501a: mov dword ptr [esp + 0xac], ebp */ W32((u32)(r_esp+0xacu), r_ebp);
    /* 00495021: mov ebp, eax */ r_ebp = r_eax;
L_00495023:; BB(0x00495023);
    /* 00495023: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0049502a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049502b: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x495030u); f_0048e100();
    /* 00495030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00495031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495033: je 0x495183 */ if (fZ) goto L_00495183;
L_00495039:; BB(0x00495039);
    /* 00495039: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0049503c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00495044: lea edx, [ebx + 0x5e0] */ r_edx = (u32)(r_ebx+0x5e0u);
    /* 0049504a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049504d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00495051: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00495054: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00495058: mov eax, dword ptr [ebx + 0x5ec] */ r_eax = R32((u32)(r_ebx+0x5ecu));
    /* 0049505e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00495062: mov eax, dword ptr [ebx + 0x5f0] */ r_eax = R32((u32)(r_ebx+0x5f0u));
    /* 00495068: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049506c: mov eax, dword ptr [ebx + 0x5f4] */ r_eax = R32((u32)(r_ebx+0x5f4u));
    /* 00495072: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00495076: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49507bu); f_0082f9c4();
    /* 0049507b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049507e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00495082: mov edx, dword ptr [ebx + 0x5e0] */ r_edx = R32((u32)(r_ebx+0x5e0u));
    /* 00495088: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0049508c: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00495094: mov edx, dword ptr [ebx + 0x5e8] */ r_edx = R32((u32)(r_ebx+0x5e8u));
    /* 0049509a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049509e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004950a2: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 004950aa: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004950ae: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004950b2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004950b6: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004950ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004950bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004950bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004950bd: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x4950c2u); f_0083a0dc();
    /* 004950c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004950c5: fcomp dword ptr [0x902b04] */ fx_compare(ST(0), R_F32((u32)(0x902b04u))); FPOP();
    /* 004950cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004950cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004950ce: ja 0x495183 */ if ((!fC&&!fZ)) goto L_00495183;
L_004950d4:; BB(0x004950d4);
    /* 004950d4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004950d8: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004950dc: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004950e0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004950e4: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004950e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004950ea: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004950ee: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004950f2: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004950f6: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004950fa: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004950fe: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495102: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00495106: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49510bu); f_0082f9c4();
    /* 0049510b: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0049510f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00495113: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495118u); f_0082f9c4();
    /* 00495118: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00495120: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495124: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00495128: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00495130: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x495135u); f_0082f9e0();
    /* 00495135: fcomp dword ptr [0x902b14] */ fx_compare(ST(0), R_F32((u32)(0x902b14u))); FPOP();
    /* 0049513b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049513d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049513e: ja 0x495183 */ if ((!fC&&!fZ)) goto L_00495183;
L_00495140:; BB(0x00495140);
    /* 00495140: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00495145: push dword ptr [ebx + 0x484] */ { u32 v = R32((u32)(r_ebx+0x484u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049514b: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x495150u); f_0048e9d4();
    /* 00495150: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495153: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0049515a: fild dword ptr [esp + 0x80] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x80u)));
    /* 00495161: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00495163: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00495167: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00495169: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0049516e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00495172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495174: mov ecx, edi */ r_ecx = r_edi;
    /* 00495176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495177: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049517b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049517d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049517e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x495181u); call_ind(t); }
    /* 00495181: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00495183:; BB(0x00495183);
    /* 00495183: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495186: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495188: jl 0x495023 */ if ((fS!=fO)) goto L_00495023;
L_0049518e:; BB(0x0049518e);
    /* 0049518e: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
    /* 00495195: mov ebp, dword ptr [esp + 0xac] */ r_ebp = R32((u32)(r_esp+0xacu));
L_0049519c:; BB(0x0049519c);
    /* 0049519c: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 004951a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004951a4: jne 0x49535a */ if (!fZ) goto L_0049535a;
L_004951aa:; BB(0x004951aa);
    /* 004951aa: mov eax, dword ptr [ebx + 0x5ec] */ r_eax = R32((u32)(r_ebx+0x5ecu));
    /* 004951b0: mov edx, dword ptr [ebx + 0x5f4] */ r_edx = R32((u32)(r_ebx+0x5f4u));
    /* 004951b6: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004951be: lea esi, [ebx + 0x574] */ r_esi = (u32)(r_ebx+0x574u);
    /* 004951c4: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004951c8: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004951cc: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 004951d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004951d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004951d2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4951d7u); f_00836208();
    /* 004951d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004951da: fld dword ptr [0x902624] */ FPUSH(R_F32((u32)(0x902624u)));
    /* 004951e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004951e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004951e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004951e5: ja 0x495363 */ if ((!fC&&!fZ)) goto L_00495363;
L_004951eb:; BB(0x004951eb);
    /* 004951eb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004951ed: fld dword ptr [0x902b0c] */ FPUSH(R_F32((u32)(0x902b0cu)));
    /* 004951f3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004951f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004951f7: fnstcw word ptr [esp + 0x88] */ W16((u32)(r_esp+0x88u), fcw);
    /* 004951fe: movzx eax, word ptr [esp + 0x88] */ r_eax = (u32)R16((u32)(r_esp+0x88u));
    /* 00495206: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049520b: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 00495212: fldcw word ptr [esp + 0x90] */ fcw = R16((u32)(r_esp+0x90u));
    /* 00495219: fistp dword ptr [esp + 0x98] */ W32((u32)(r_esp+0x98u), (u32)fx_int32(ST(0))); FPOP();
    /* 00495220: fldcw word ptr [esp + 0x88] */ fcw = R16((u32)(r_esp+0x88u));
    /* 00495227: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0049522b: mov esi, dword ptr [esp + 0x98] */ r_esi = R32((u32)(r_esp+0x98u));
    /* 00495232: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00495236: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0049523a: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0049523e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495241: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00495245: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00495249: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 0049524d: mov eax, 4 */ r_eax = 0x4u;
    /* 00495252: jle 0x495256 */ if ((fZ||fS!=fO)) goto L_00495256;
L_00495254:; BB(0x00495254);
    /* 00495254: mov esi, eax */ r_esi = r_eax;
L_00495256:; BB(0x00495256);
    /* 00495256: mov eax, dword ptr [ebx + 0x574] */ r_eax = R32((u32)(r_ebx+0x574u));
    /* 0049525c: mov dword ptr [esp + 0xa0], esi */ W32((u32)(r_esp+0xa0u), r_esi);
    /* 00495263: fild dword ptr [esp + 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xa0u)));
    /* 0049526a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049526c: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00495273: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00495277: mov eax, dword ptr [ebx + 0x578] */ r_eax = R32((u32)(r_ebx+0x578u));
    /* 0049527d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00495281: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495285: mov eax, dword ptr [ebx + 0x57c] */ r_eax = R32((u32)(r_ebx+0x57cu));
    /* 0049528b: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0049528f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495294u); f_0082f9c4();
    /* 00495294: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00495298: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 0049529f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004952a1: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 004952a5: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004952a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004952ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004952ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004952b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952b3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004952b7: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004952bb: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004952bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004952c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004952c3: jle 0x495310 */ if ((fZ||fS!=fO)) goto L_00495310;
L_004952c5:; BB(0x004952c5);
    /* 004952c5: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 004952cc: mov edi, esi */ r_edi = r_esi;
    /* 004952ce: mov esi, eax */ r_esi = r_eax;
L_004952d0:; BB(0x004952d0);
    /* 004952d0: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 004952d4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952d6: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004952db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952dc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952e1u); f_0050b7a4();
    /* 004952e1: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952e5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952e7: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004952ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952ed: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952f2u); f_0050b7a4();
    /* 004952f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004952f5: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004952f9: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952fd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495302u); f_0082ebac();
    /* 00495302: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495305: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495307: jl 0x4952d0 */ if ((fS!=fO)) goto L_004952d0;
L_00495309:; BB(0x00495309);
    /* 00495309: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
L_00495310:; BB(0x00495310);
    /* 00495310: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00495314: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00495318: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0049531c: mov dword ptr [ebx + 0x574], eax */ W32((u32)(r_ebx+0x574u), r_eax);
    /* 00495322: mov dword ptr [ebx + 0x578], edx */ W32((u32)(r_ebx+0x578u), r_edx);
    /* 00495328: mov dword ptr [ebx + 0x57c], esi */ W32((u32)(r_ebx+0x57cu), r_esi);
L_0049532e:; BB(0x0049532e);
    /* 0049532e: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495337: push 0x3be */ { u32 v = 0x3beu; r_esp -= 4; W32(r_esp, v); }
    /* 0049533c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x495341u); f_00814298();
    /* 00495341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049535a:; BB(0x0049535a);
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00494f58); r_esp += 4; return;
L_00495363:; BB(0x00495363);
    /* 00495363: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00495365: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495367: jmp 0x49532e */ goto L_0049532e;
}

