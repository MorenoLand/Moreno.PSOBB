#include "protos.h"

void f_00795808(void) /* sub_795808 */
{
    FN_ENTER(0x00795808);
    /* 00795808: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00795809: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079580c: mov esi, ecx */ r_esi = r_ecx;
    /* 0079580e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795810: mov edx, 0xa9d460 */ r_edx = 0xa9d460u;
    /* 00795815: push 0xa9d46c */ { u32 v = 0xa9d46cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079581a: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x79581fu); f_0082eab8();
    /* 0079581f: mov eax, dword ptr [0xa9d46c] */ r_eax = R32((u32)(0xa9d46cu));
    /* 00795824: mov edx, dword ptr [0xa9d470] */ r_edx = R32((u32)(0xa9d470u));
    /* 0079582a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0079582d: mov eax, dword ptr [0xa9d474] */ r_eax = R32((u32)(0xa9d474u));
    /* 00795832: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00795836: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0079583a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0079583d: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x795842u); f_0083173c();
    /* 00795842: fcomp dword ptr [0x97c8f4] */ fx_compare(ST(0), R_F32((u32)(0x97c8f4u))); FPOP();
    /* 00795848: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0079584a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0079584b: je 0x795892 */ if (fZ) goto L_00795892;
L_0079584d:; BB(0x0079584d);
    /* 0079584d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00795850: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x795855u); f_0082df08();
    /* 00795855: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00795857: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0079585a: mov dword ptr [0xa9d46c], eax */ W32((u32)(0xa9d46cu), r_eax);
    /* 0079585f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00795863: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795865: mov edx, 1 */ r_edx = 0x1u;
    /* 0079586a: mov dword ptr [0xa9d470], eax */ W32((u32)(0xa9d470u), r_eax);
    /* 0079586f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00795873: mov dword ptr [0xa9d474], eax */ W32((u32)(0xa9d474u), r_eax);
    /* 00795878: call 0x843a24 */ r_esp -= 4; W32(r_esp, 0x79587du); f_00843a24();
    /* 0079587d: mov ecx, esi */ r_ecx = r_esi;
    /* 0079587f: call 0x795898 */ r_esp -= 4; W32(r_esp, 0x795884u); f_00795898();
    /* 00795884: mov ecx, esi */ r_ecx = r_esi;
    /* 00795886: call 0x793ef0 */ r_esp -= 4; W32(r_esp, 0x79588bu); f_00793ef0();
    /* 0079588b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079588d: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x795892u); f_00843af8();
L_00795892:; BB(0x00795892);
    /* 00795892: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00795895: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00795896: ret  */ FN_RET(0x00795808); r_esp += 4; return;
}

void f_00795898(void) /* sub_795898 */
{
    FN_ENTER(0x00795898);
    /* 00795898: push dword ptr [0xa9d474] */ { u32 v = R32((u32)(0xa9d474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079589e: push dword ptr [0xa9d470] */ { u32 v = R32((u32)(0xa9d470u)); r_esp -= 4; W32(r_esp, v); }
    /* 007958a4: push dword ptr [0xa9d46c] */ { u32 v = R32((u32)(0xa9d46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007958aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007958ac: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x7958b1u); f_00843a68();
    /* 007958b1: ret  */ FN_RET(0x00795898); r_esp += 4; return;
}

void f_007958b4(void) /* sub_7958B4 */
{
    FN_ENTER(0x007958b4);
    /* 007958b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007958b8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007958bb: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007958be: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007958c1: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 007958c4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007958c7: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 007958ca: ret 4 */ FN_RET(0x007958b4); r_esp += 8; return;
}

void f_007958d0(void) /* sub_7958D0 */
{
    FN_ENTER(0x007958d0);
    /* 007958d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007958d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007958d6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007958d9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007958dc: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 007958df: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007958e2: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 007958e5: ret 4 */ FN_RET(0x007958d0); r_esp += 8; return;
}

void f_007958e8(void) /* sub_7958E8 */
{
    FN_ENTER(0x007958e8);
    /* 007958e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007958ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007958ee: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 007958f1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 007958f4: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 007958f7: ret 4 */ FN_RET(0x007958e8); r_esp += 8; return;
}

void f_007958fc(void) /* sub_7958FC */
{
    FN_ENTER(0x007958fc);
    /* 007958fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007958fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007958fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007958ff: mov esi, 0xa9d4a8 */ r_esi = 0xa9d4a8u;
    /* 00795904: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00795906:; BB(0x00795906);
    /* 00795906: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00795908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079590a: je 0x79591d */ if (fZ) goto L_0079591d;
L_0079590c:; BB(0x0079590c);
    /* 0079590c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079590f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00795912: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00795915: jl 0x795906 */ if ((fS!=fO)) goto L_00795906;
L_00795917:; BB(0x00795917);
    /* 00795917: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00795919: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079591a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079591b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079591c: ret  */ FN_RET(0x007958fc); r_esp += 4; return;
L_0079591d:; BB(0x0079591d);
    /* 0079591d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079591f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x795924u); f_008581c5();
    /* 00795924: mov edi, eax */ r_edi = r_eax;
    /* 00795926: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00795929: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079592b: je 0x795944 */ if (fZ) goto L_00795944;
L_0079592d:; BB(0x0079592d);
    /* 0079592d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079592e: mov ecx, edi */ r_ecx = r_edi;
    /* 00795930: call 0x795948 */ r_esp -= 4; W32(r_esp, 0x795935u); f_00795948();
L_00795935:; BB(0x00795935);
    /* 00795935: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00795937: add dword ptr [0xa9d4b4], 1 */ { u32 ad = (u32)(0xa9d4b4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079593e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00795940: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00795941: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00795942: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00795943: ret  */ FN_RET(0x007958fc); r_esp += 4; return;
L_00795944:; BB(0x00795944);
    /* 00795944: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00795946: jmp 0x795935 */ goto L_00795935;
}

void f_00795948(void) /* sub_795948 */
{
    FN_ENTER(0x00795948);
    /* 00795948: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0079594c: mov eax, dword ptr [edx*4 + 0x9ff4c4] */ r_eax = R32((u32)(r_edx*4+0x9ff4c4u));
    /* 00795953: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00795955: mov eax, ecx */ r_eax = r_ecx;
    /* 00795957: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0079595e: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00795965: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0079596c: mov dword ptr [ecx + 0x14], 0x40a00000 */ W32((u32)(r_ecx+0x14u), 0x40a00000u);
    /* 00795973: mov dword ptr [ecx + 0x18], 0x41f00000 */ W32((u32)(r_ecx+0x18u), 0x41f00000u);
    /* 0079597a: mov dword ptr [ecx + 0x20], 0x3f800000 */ W32((u32)(r_ecx+0x20u), 0x3f800000u);
    /* 00795981: mov dword ptr [ecx + 0x24], 0x3f800000 */ W32((u32)(r_ecx+0x24u), 0x3f800000u);
    /* 00795988: mov dword ptr [ecx + 0x28], 0x3f800000 */ W32((u32)(r_ecx+0x28u), 0x3f800000u);
    /* 0079598f: ret 4 */ FN_RET(0x00795948); r_esp += 8; return;
}

void f_00795994(void) /* sub_795994 */
{
    FN_ENTER(0x00795994);
    /* 00795994: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00795998: mov edx, 0xa9d4a8 */ r_edx = 0xa9d4a8u;
    /* 0079599d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079599f:; BB(0x0079599f);
    /* 0079599f: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007959a1: je 0x7959b6 */ if (fZ) goto L_007959b6;
L_007959a3:; BB(0x007959a3);
    /* 007959a3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007959a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007959a9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007959ac: jl 0x79599f */ if ((fS!=fO)) goto L_0079599f;
L_007959ae:; BB(0x007959ae);
    /* 007959ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007959af: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7959b4u); f_00857e98();
    /* 007959b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007959b5: ret  */ FN_RET(0x00795994); r_esp += 4; return;
L_007959b6:; BB(0x007959b6);
    /* 007959b6: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007959bc: add dword ptr [0xa9d4b4], -1 */ { u32 ad = (u32)(0xa9d4b4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007959c3: jmp 0x7959ae */ goto L_007959ae;
}

void f_007959c8(void) /* sub_7959C8 */
{
    FN_ENTER(0x007959c8);
    /* 007959c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007959c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007959cb: mov dword ptr [0xa9cee0], 0 */ W32((u32)(0xa9cee0u), 0x0u);
    /* 007959d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007959d7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007959dc: mov dword ptr [0xa9cee4], 0 */ W32((u32)(0xa9cee4u), 0x0u);
    /* 007959e6: mov dword ptr [0xa9cf08], eax */ W32((u32)(0xa9cf08u), r_eax);
    /* 007959eb: mov dword ptr [0xa9cee8], 0 */ W32((u32)(0xa9cee8u), 0x0u);
    /* 007959f5: mov dword ptr [0xa9ceec], 0 */ W32((u32)(0xa9ceecu), 0x0u);
    /* 007959ff: mov dword ptr [0xa9cf04], edx */ W32((u32)(0xa9cf04u), r_edx);
    /* 00795a05: mov dword ptr [0xa9cf34], eax */ W32((u32)(0xa9cf34u), r_eax);
    /* 00795a0a: mov dword ptr [0xa9cef0], 0 */ W32((u32)(0xa9cef0u), 0x0u);
    /* 00795a14: mov dword ptr [0xa9cef4], 0 */ W32((u32)(0xa9cef4u), 0x0u);
    /* 00795a1e: mov dword ptr [0xa9cf30], edx */ W32((u32)(0xa9cf30u), r_edx);
    /* 00795a24: mov dword ptr [0xa9cf60], eax */ W32((u32)(0xa9cf60u), r_eax);
    /* 00795a29: mov dword ptr [0xa9cef8], 0 */ W32((u32)(0xa9cef8u), 0x0u);
    /* 00795a33: mov dword ptr [0xa9cf00], 0 */ W32((u32)(0xa9cf00u), 0x0u);
    /* 00795a3d: mov dword ptr [0xa9cf5c], edx */ W32((u32)(0xa9cf5cu), r_edx);
    /* 00795a43: mov dword ptr [0xa9cf8c], eax */ W32((u32)(0xa9cf8cu), r_eax);
    /* 00795a48: mov dword ptr [0xa9cefc], 0 */ W32((u32)(0xa9cefcu), 0x0u);
    /* 00795a52: mov dword ptr [0xa9cf0c], 0 */ W32((u32)(0xa9cf0cu), 0x0u);
    /* 00795a5c: mov dword ptr [0xa9cf10], 0 */ W32((u32)(0xa9cf10u), 0x0u);
    /* 00795a66: mov dword ptr [0xa9cf14], 0 */ W32((u32)(0xa9cf14u), 0x0u);
    /* 00795a70: mov dword ptr [0xa9cf18], 0 */ W32((u32)(0xa9cf18u), 0x0u);
    /* 00795a7a: mov dword ptr [0xa9cf1c], 0 */ W32((u32)(0xa9cf1cu), 0x0u);
    /* 00795a84: mov dword ptr [0xa9cf20], 0 */ W32((u32)(0xa9cf20u), 0x0u);
    /* 00795a8e: mov dword ptr [0xa9cf24], 0 */ W32((u32)(0xa9cf24u), 0x0u);
    /* 00795a98: mov dword ptr [0xa9cf2c], 0 */ W32((u32)(0xa9cf2cu), 0x0u);
    /* 00795aa2: mov dword ptr [0xa9cf28], 0 */ W32((u32)(0xa9cf28u), 0x0u);
    /* 00795aac: mov dword ptr [0xa9cf38], 0 */ W32((u32)(0xa9cf38u), 0x0u);
    /* 00795ab6: mov dword ptr [0xa9cf3c], 0 */ W32((u32)(0xa9cf3cu), 0x0u);
    /* 00795ac0: mov dword ptr [0xa9cf40], 0 */ W32((u32)(0xa9cf40u), 0x0u);
    /* 00795aca: mov dword ptr [0xa9cf44], 0 */ W32((u32)(0xa9cf44u), 0x0u);
    /* 00795ad4: mov dword ptr [0xa9cf48], 0 */ W32((u32)(0xa9cf48u), 0x0u);
    /* 00795ade: mov dword ptr [0xa9cf4c], 0 */ W32((u32)(0xa9cf4cu), 0x0u);
    /* 00795ae8: mov dword ptr [0xa9cf50], 0 */ W32((u32)(0xa9cf50u), 0x0u);
    /* 00795af2: mov dword ptr [0xa9cf58], 0 */ W32((u32)(0xa9cf58u), 0x0u);
    /* 00795afc: mov dword ptr [0xa9cf54], 0 */ W32((u32)(0xa9cf54u), 0x0u);
    /* 00795b06: mov dword ptr [0xa9cf88], edx */ W32((u32)(0xa9cf88u), r_edx);
    /* 00795b0c: mov dword ptr [0xa9cfb8], eax */ W32((u32)(0xa9cfb8u), r_eax);
    /* 00795b11: mov dword ptr [0xa9cfb4], edx */ W32((u32)(0xa9cfb4u), r_edx);
    /* 00795b17: mov dword ptr [0xa9cfe4], eax */ W32((u32)(0xa9cfe4u), r_eax);
    /* 00795b1c: mov dword ptr [0xa9cfe0], edx */ W32((u32)(0xa9cfe0u), r_edx);
    /* 00795b22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795b24: mov dword ptr [0xa9cf64], ecx */ W32((u32)(0xa9cf64u), r_ecx);
    /* 00795b2a: mov dword ptr [0xa9d010], eax */ W32((u32)(0xa9d010u), r_eax);
    /* 00795b2f: mov dword ptr [0xa9d00c], edx */ W32((u32)(0xa9d00cu), r_edx);
    /* 00795b35: mov dword ptr [0xa9d03c], eax */ W32((u32)(0xa9d03cu), r_eax);
    /* 00795b3a: mov dword ptr [0xa9d038], edx */ W32((u32)(0xa9d038u), r_edx);
    /* 00795b40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795b42: mov dword ptr [0xa9cf68], ecx */ W32((u32)(0xa9cf68u), r_ecx);
    /* 00795b48: mov dword ptr [0xa9d068], eax */ W32((u32)(0xa9d068u), r_eax);
    /* 00795b4d: mov dword ptr [0xa9d064], edx */ W32((u32)(0xa9d064u), r_edx);
    /* 00795b53: mov dword ptr [0xa9d094], eax */ W32((u32)(0xa9d094u), r_eax);
    /* 00795b58: mov dword ptr [0xa9d090], edx */ W32((u32)(0xa9d090u), r_edx);
    /* 00795b5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795b60: mov dword ptr [0xa9cf6c], ecx */ W32((u32)(0xa9cf6cu), r_ecx);
    /* 00795b66: mov dword ptr [0xa9d0c0], eax */ W32((u32)(0xa9d0c0u), r_eax);
    /* 00795b6b: mov dword ptr [0xa9d0bc], edx */ W32((u32)(0xa9d0bcu), r_edx);
    /* 00795b71: mov dword ptr [0xa9d0ec], eax */ W32((u32)(0xa9d0ecu), r_eax);
    /* 00795b76: mov dword ptr [0xa9d0e8], edx */ W32((u32)(0xa9d0e8u), r_edx);
    /* 00795b7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795b7e: mov dword ptr [0xa9cf70], ecx */ W32((u32)(0xa9cf70u), r_ecx);
    /* 00795b84: mov dword ptr [0xa9d118], eax */ W32((u32)(0xa9d118u), r_eax);
    /* 00795b89: mov dword ptr [0xa9d114], edx */ W32((u32)(0xa9d114u), r_edx);
    /* 00795b8f: mov dword ptr [0xa9d144], eax */ W32((u32)(0xa9d144u), r_eax);
    /* 00795b94: mov dword ptr [0xa9d140], edx */ W32((u32)(0xa9d140u), r_edx);
    /* 00795b9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795b9c: mov dword ptr [0xa9cf74], ecx */ W32((u32)(0xa9cf74u), r_ecx);
    /* 00795ba2: mov dword ptr [0xa9d170], eax */ W32((u32)(0xa9d170u), r_eax);
    /* 00795ba7: mov dword ptr [0xa9d16c], edx */ W32((u32)(0xa9d16cu), r_edx);
    /* 00795bad: mov dword ptr [0xa9d19c], eax */ W32((u32)(0xa9d19cu), r_eax);
    /* 00795bb2: mov dword ptr [0xa9d198], edx */ W32((u32)(0xa9d198u), r_edx);
    /* 00795bb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795bba: mov dword ptr [0xa9cf78], ecx */ W32((u32)(0xa9cf78u), r_ecx);
    /* 00795bc0: mov dword ptr [0xa9d1c8], eax */ W32((u32)(0xa9d1c8u), r_eax);
    /* 00795bc5: mov dword ptr [0xa9d1c4], edx */ W32((u32)(0xa9d1c4u), r_edx);
    /* 00795bcb: mov dword ptr [0xa9d1f4], eax */ W32((u32)(0xa9d1f4u), r_eax);
    /* 00795bd0: mov dword ptr [0xa9d1f0], edx */ W32((u32)(0xa9d1f0u), r_edx);
    /* 00795bd6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795bd8: mov dword ptr [0xa9cf7c], ecx */ W32((u32)(0xa9cf7cu), r_ecx);
    /* 00795bde: mov dword ptr [0xa9d220], eax */ W32((u32)(0xa9d220u), r_eax);
    /* 00795be3: mov dword ptr [0xa9d21c], edx */ W32((u32)(0xa9d21cu), r_edx);
    /* 00795be9: mov dword ptr [0xa9d24c], eax */ W32((u32)(0xa9d24cu), r_eax);
    /* 00795bee: mov dword ptr [0xa9d248], edx */ W32((u32)(0xa9d248u), r_edx);
    /* 00795bf4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795bf6: mov dword ptr [0xa9cf84], ecx */ W32((u32)(0xa9cf84u), r_ecx);
    /* 00795bfc: mov dword ptr [0xa9d278], eax */ W32((u32)(0xa9d278u), r_eax);
    /* 00795c01: mov dword ptr [0xa9d274], edx */ W32((u32)(0xa9d274u), r_edx);
    /* 00795c07: mov dword ptr [0xa9d2a4], eax */ W32((u32)(0xa9d2a4u), r_eax);
    /* 00795c0c: mov dword ptr [0xa9d2a0], edx */ W32((u32)(0xa9d2a0u), r_edx);
    /* 00795c12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795c14: mov dword ptr [0xa9cf80], ecx */ W32((u32)(0xa9cf80u), r_ecx);
    /* 00795c1a: mov dword ptr [0xa9d2d0], eax */ W32((u32)(0xa9d2d0u), r_eax);
    /* 00795c1f: mov dword ptr [0xa9d2cc], edx */ W32((u32)(0xa9d2ccu), r_edx);
    /* 00795c25: mov dword ptr [0xa9d2fc], eax */ W32((u32)(0xa9d2fcu), r_eax);
    /* 00795c2a: mov dword ptr [0xa9d2f8], edx */ W32((u32)(0xa9d2f8u), r_edx);
    /* 00795c30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795c32: mov dword ptr [0xa9cf90], ecx */ W32((u32)(0xa9cf90u), r_ecx);
    /* 00795c38: mov dword ptr [0xa9d328], eax */ W32((u32)(0xa9d328u), r_eax);
    /* 00795c3d: mov dword ptr [0xa9d324], edx */ W32((u32)(0xa9d324u), r_edx);
    /* 00795c43: mov dword ptr [0xa9d354], eax */ W32((u32)(0xa9d354u), r_eax);
    /* 00795c48: mov dword ptr [0xa9d350], edx */ W32((u32)(0xa9d350u), r_edx);
    /* 00795c4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795c50: mov dword ptr [0xa9cf94], ecx */ W32((u32)(0xa9cf94u), r_ecx);
    /* 00795c56: mov dword ptr [0xa9d380], eax */ W32((u32)(0xa9d380u), r_eax);
    /* 00795c5b: mov dword ptr [0xa9d37c], edx */ W32((u32)(0xa9d37cu), r_edx);
    /* 00795c61: mov dword ptr [0xa9d3ac], eax */ W32((u32)(0xa9d3acu), r_eax);
    /* 00795c66: mov dword ptr [0xa9d3a8], edx */ W32((u32)(0xa9d3a8u), r_edx);
    /* 00795c6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795c6e: mov dword ptr [0xa9cf98], ecx */ W32((u32)(0xa9cf98u), r_ecx);
    /* 00795c74: mov dword ptr [0xa9d3d8], eax */ W32((u32)(0xa9d3d8u), r_eax);
    /* 00795c79: mov dword ptr [0xa9d3d4], edx */ W32((u32)(0xa9d3d4u), r_edx);
    /* 00795c7f: mov dword ptr [0xa9d404], eax */ W32((u32)(0xa9d404u), r_eax);
    /* 00795c84: mov dword ptr [0xa9d400], edx */ W32((u32)(0xa9d400u), r_edx);
    /* 00795c8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795c8c: mov dword ptr [0xa9cf9c], ecx */ W32((u32)(0xa9cf9cu), r_ecx);
    /* 00795c92: mov dword ptr [0xa9d430], eax */ W32((u32)(0xa9d430u), r_eax);
    /* 00795c97: mov dword ptr [0xa9d42c], edx */ W32((u32)(0xa9d42cu), r_edx);
    /* 00795c9d: mov dword ptr [0xa9d45c], eax */ W32((u32)(0xa9d45cu), r_eax);
    /* 00795ca2: mov dword ptr [0xa9d458], edx */ W32((u32)(0xa9d458u), r_edx);
    /* 00795ca8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795caa: mov dword ptr [0xa9cfa0], ecx */ W32((u32)(0xa9cfa0u), r_ecx);
    /* 00795cb0: mov dword ptr [0xa9d4e0], edx */ W32((u32)(0xa9d4e0u), r_edx);
    /* 00795cb6: mov dword ptr [0xa9cda8], eax */ W32((u32)(0xa9cda8u), r_eax);
    /* 00795cbb: mov dword ptr [0xa9cda4], edx */ W32((u32)(0xa9cda4u), r_edx);
    /* 00795cc1: mov dword ptr [0xa9cdd4], eax */ W32((u32)(0xa9cdd4u), r_eax);
    /* 00795cc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795cc8: mov dword ptr [0xa9cfa4], ecx */ W32((u32)(0xa9cfa4u), r_ecx);
    /* 00795cce: mov dword ptr [0xa9cdd0], edx */ W32((u32)(0xa9cdd0u), r_edx);
    /* 00795cd4: mov dword ptr [0xa9ce00], eax */ W32((u32)(0xa9ce00u), r_eax);
    /* 00795cd9: mov dword ptr [0xa9cdfc], edx */ W32((u32)(0xa9cdfcu), r_edx);
    /* 00795cdf: mov dword ptr [0xa9ce2c], eax */ W32((u32)(0xa9ce2cu), r_eax);
    /* 00795ce4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ce6: mov dword ptr [0xa9cfa8], ecx */ W32((u32)(0xa9cfa8u), r_ecx);
    /* 00795cec: mov dword ptr [0xa9ce28], edx */ W32((u32)(0xa9ce28u), r_edx);
    /* 00795cf2: mov dword ptr [0xa9ce58], eax */ W32((u32)(0xa9ce58u), r_eax);
    /* 00795cf7: mov dword ptr [0xa9ce54], edx */ W32((u32)(0xa9ce54u), r_edx);
    /* 00795cfd: mov dword ptr [0xa9ce84], eax */ W32((u32)(0xa9ce84u), r_eax);
    /* 00795d02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d04: mov dword ptr [0xa9cfb0], ecx */ W32((u32)(0xa9cfb0u), r_ecx);
    /* 00795d0a: mov dword ptr [0xa9ce80], edx */ W32((u32)(0xa9ce80u), r_edx);
    /* 00795d10: mov dword ptr [0xa9ceb0], eax */ W32((u32)(0xa9ceb0u), r_eax);
    /* 00795d15: mov dword ptr [0xa9ceac], edx */ W32((u32)(0xa9ceacu), r_edx);
    /* 00795d1b: mov dword ptr [0xa9cedc], eax */ W32((u32)(0xa9cedcu), r_eax);
    /* 00795d20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d22: mov dword ptr [0xa9cfac], ecx */ W32((u32)(0xa9cfacu), r_ecx);
    /* 00795d28: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d2a: mov dword ptr [0xa9cfbc], ecx */ W32((u32)(0xa9cfbcu), r_ecx);
    /* 00795d30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d32: mov dword ptr [0xa9cfc0], ecx */ W32((u32)(0xa9cfc0u), r_ecx);
    /* 00795d38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d3a: mov dword ptr [0xa9cfc4], ecx */ W32((u32)(0xa9cfc4u), r_ecx);
    /* 00795d40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d42: mov dword ptr [0xa9cfc8], ecx */ W32((u32)(0xa9cfc8u), r_ecx);
    /* 00795d48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d4a: mov dword ptr [0xa9cfcc], ecx */ W32((u32)(0xa9cfccu), r_ecx);
    /* 00795d50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d52: mov dword ptr [0xa9cfd0], ecx */ W32((u32)(0xa9cfd0u), r_ecx);
    /* 00795d58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d5a: mov dword ptr [0xa9cfd4], ecx */ W32((u32)(0xa9cfd4u), r_ecx);
    /* 00795d60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d62: mov dword ptr [0xa9cfdc], ecx */ W32((u32)(0xa9cfdcu), r_ecx);
    /* 00795d68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d6a: mov dword ptr [0xa9cfd8], ecx */ W32((u32)(0xa9cfd8u), r_ecx);
    /* 00795d70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d72: mov dword ptr [0xa9cfe8], ecx */ W32((u32)(0xa9cfe8u), r_ecx);
    /* 00795d78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d7a: mov dword ptr [0xa9cfec], ecx */ W32((u32)(0xa9cfecu), r_ecx);
    /* 00795d80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d82: mov dword ptr [0xa9cff0], ecx */ W32((u32)(0xa9cff0u), r_ecx);
    /* 00795d88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d8a: mov dword ptr [0xa9cff4], ecx */ W32((u32)(0xa9cff4u), r_ecx);
    /* 00795d90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d92: mov dword ptr [0xa9cff8], ecx */ W32((u32)(0xa9cff8u), r_ecx);
    /* 00795d98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795d9a: mov dword ptr [0xa9cffc], ecx */ W32((u32)(0xa9cffcu), r_ecx);
    /* 00795da0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795da2: mov dword ptr [0xa9d000], ecx */ W32((u32)(0xa9d000u), r_ecx);
    /* 00795da8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795daa: mov dword ptr [0xa9d008], ecx */ W32((u32)(0xa9d008u), r_ecx);
    /* 00795db0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795db2: mov dword ptr [0xa9d004], ecx */ W32((u32)(0xa9d004u), r_ecx);
    /* 00795db8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dba: mov dword ptr [0xa9d014], ecx */ W32((u32)(0xa9d014u), r_ecx);
    /* 00795dc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dc2: mov dword ptr [0xa9d018], ecx */ W32((u32)(0xa9d018u), r_ecx);
    /* 00795dc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dca: mov dword ptr [0xa9d01c], ecx */ W32((u32)(0xa9d01cu), r_ecx);
    /* 00795dd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dd2: mov dword ptr [0xa9d020], ecx */ W32((u32)(0xa9d020u), r_ecx);
    /* 00795dd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dda: mov dword ptr [0xa9d024], ecx */ W32((u32)(0xa9d024u), r_ecx);
    /* 00795de0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795de2: mov dword ptr [0xa9d028], ecx */ W32((u32)(0xa9d028u), r_ecx);
    /* 00795de8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dea: mov dword ptr [0xa9d02c], ecx */ W32((u32)(0xa9d02cu), r_ecx);
    /* 00795df0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795df2: mov dword ptr [0xa9d034], ecx */ W32((u32)(0xa9d034u), r_ecx);
    /* 00795df8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795dfa: mov dword ptr [0xa9d030], ecx */ W32((u32)(0xa9d030u), r_ecx);
    /* 00795e00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e02: mov dword ptr [0xa9d040], ecx */ W32((u32)(0xa9d040u), r_ecx);
    /* 00795e08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e0a: mov dword ptr [0xa9d044], ecx */ W32((u32)(0xa9d044u), r_ecx);
    /* 00795e10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e12: mov dword ptr [0xa9d048], ecx */ W32((u32)(0xa9d048u), r_ecx);
    /* 00795e18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e1a: mov dword ptr [0xa9d04c], ecx */ W32((u32)(0xa9d04cu), r_ecx);
    /* 00795e20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e22: mov dword ptr [0xa9d050], ecx */ W32((u32)(0xa9d050u), r_ecx);
    /* 00795e28: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e2a: mov dword ptr [0xa9d054], ecx */ W32((u32)(0xa9d054u), r_ecx);
    /* 00795e30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e32: mov dword ptr [0xa9d058], ecx */ W32((u32)(0xa9d058u), r_ecx);
    /* 00795e38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e3a: mov dword ptr [0xa9d060], ecx */ W32((u32)(0xa9d060u), r_ecx);
    /* 00795e40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e42: mov dword ptr [0xa9d05c], ecx */ W32((u32)(0xa9d05cu), r_ecx);
    /* 00795e48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e4a: mov dword ptr [0xa9d06c], ecx */ W32((u32)(0xa9d06cu), r_ecx);
    /* 00795e50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e52: mov dword ptr [0xa9d070], ecx */ W32((u32)(0xa9d070u), r_ecx);
    /* 00795e58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e5a: mov dword ptr [0xa9d074], ecx */ W32((u32)(0xa9d074u), r_ecx);
    /* 00795e60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e62: mov dword ptr [0xa9d078], ecx */ W32((u32)(0xa9d078u), r_ecx);
    /* 00795e68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e6a: mov dword ptr [0xa9d07c], ecx */ W32((u32)(0xa9d07cu), r_ecx);
    /* 00795e70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e72: mov dword ptr [0xa9d080], ecx */ W32((u32)(0xa9d080u), r_ecx);
    /* 00795e78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e7a: mov dword ptr [0xa9d084], ecx */ W32((u32)(0xa9d084u), r_ecx);
    /* 00795e80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e82: mov dword ptr [0xa9d08c], ecx */ W32((u32)(0xa9d08cu), r_ecx);
    /* 00795e88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e8a: mov dword ptr [0xa9d088], ecx */ W32((u32)(0xa9d088u), r_ecx);
    /* 00795e90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e92: mov dword ptr [0xa9d098], ecx */ W32((u32)(0xa9d098u), r_ecx);
    /* 00795e98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795e9a: mov dword ptr [0xa9d09c], ecx */ W32((u32)(0xa9d09cu), r_ecx);
    /* 00795ea0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ea2: mov dword ptr [0xa9d0a0], ecx */ W32((u32)(0xa9d0a0u), r_ecx);
    /* 00795ea8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eaa: mov dword ptr [0xa9d0a4], ecx */ W32((u32)(0xa9d0a4u), r_ecx);
    /* 00795eb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eb2: mov dword ptr [0xa9d0a8], ecx */ W32((u32)(0xa9d0a8u), r_ecx);
    /* 00795eb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eba: mov dword ptr [0xa9d0ac], ecx */ W32((u32)(0xa9d0acu), r_ecx);
    /* 00795ec0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ec2: mov dword ptr [0xa9d0b0], ecx */ W32((u32)(0xa9d0b0u), r_ecx);
    /* 00795ec8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eca: mov dword ptr [0xa9d0b8], ecx */ W32((u32)(0xa9d0b8u), r_ecx);
    /* 00795ed0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ed2: mov dword ptr [0xa9d0b4], ecx */ W32((u32)(0xa9d0b4u), r_ecx);
    /* 00795ed8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eda: mov dword ptr [0xa9d0c4], ecx */ W32((u32)(0xa9d0c4u), r_ecx);
    /* 00795ee0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ee2: mov dword ptr [0xa9d0c8], ecx */ W32((u32)(0xa9d0c8u), r_ecx);
    /* 00795ee8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795eea: mov dword ptr [0xa9d0cc], ecx */ W32((u32)(0xa9d0ccu), r_ecx);
    /* 00795ef0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ef2: mov dword ptr [0xa9d0d0], ecx */ W32((u32)(0xa9d0d0u), r_ecx);
    /* 00795ef8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795efa: mov dword ptr [0xa9d0d4], ecx */ W32((u32)(0xa9d0d4u), r_ecx);
    /* 00795f00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f02: mov dword ptr [0xa9d0d8], ecx */ W32((u32)(0xa9d0d8u), r_ecx);
    /* 00795f08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f0a: mov dword ptr [0xa9d0dc], ecx */ W32((u32)(0xa9d0dcu), r_ecx);
    /* 00795f10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f12: mov dword ptr [0xa9d0e4], ecx */ W32((u32)(0xa9d0e4u), r_ecx);
    /* 00795f18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f1a: mov dword ptr [0xa9d0e0], ecx */ W32((u32)(0xa9d0e0u), r_ecx);
    /* 00795f20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f22: mov dword ptr [0xa9d0f0], ecx */ W32((u32)(0xa9d0f0u), r_ecx);
    /* 00795f28: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f2a: mov dword ptr [0xa9d0f4], ecx */ W32((u32)(0xa9d0f4u), r_ecx);
    /* 00795f30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f32: mov dword ptr [0xa9d0f8], ecx */ W32((u32)(0xa9d0f8u), r_ecx);
    /* 00795f38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f3a: mov dword ptr [0xa9d0fc], ecx */ W32((u32)(0xa9d0fcu), r_ecx);
    /* 00795f40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f42: mov dword ptr [0xa9d100], ecx */ W32((u32)(0xa9d100u), r_ecx);
    /* 00795f48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f4a: mov dword ptr [0xa9d104], ecx */ W32((u32)(0xa9d104u), r_ecx);
    /* 00795f50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f52: mov dword ptr [0xa9d108], ecx */ W32((u32)(0xa9d108u), r_ecx);
    /* 00795f58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f5a: mov dword ptr [0xa9d110], ecx */ W32((u32)(0xa9d110u), r_ecx);
    /* 00795f60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f62: mov dword ptr [0xa9d10c], ecx */ W32((u32)(0xa9d10cu), r_ecx);
    /* 00795f68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f6a: mov dword ptr [0xa9d11c], ecx */ W32((u32)(0xa9d11cu), r_ecx);
    /* 00795f70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f72: mov dword ptr [0xa9d120], ecx */ W32((u32)(0xa9d120u), r_ecx);
    /* 00795f78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f7a: mov dword ptr [0xa9d124], ecx */ W32((u32)(0xa9d124u), r_ecx);
    /* 00795f80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f82: mov dword ptr [0xa9d128], ecx */ W32((u32)(0xa9d128u), r_ecx);
    /* 00795f88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f8a: mov dword ptr [0xa9d12c], ecx */ W32((u32)(0xa9d12cu), r_ecx);
    /* 00795f90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f92: mov dword ptr [0xa9d130], ecx */ W32((u32)(0xa9d130u), r_ecx);
    /* 00795f98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795f9a: mov dword ptr [0xa9d134], ecx */ W32((u32)(0xa9d134u), r_ecx);
    /* 00795fa0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fa2: mov dword ptr [0xa9d13c], ecx */ W32((u32)(0xa9d13cu), r_ecx);
    /* 00795fa8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795faa: mov dword ptr [0xa9d138], ecx */ W32((u32)(0xa9d138u), r_ecx);
    /* 00795fb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fb2: mov dword ptr [0xa9d148], ecx */ W32((u32)(0xa9d148u), r_ecx);
    /* 00795fb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fba: mov dword ptr [0xa9d14c], ecx */ W32((u32)(0xa9d14cu), r_ecx);
    /* 00795fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fc2: mov dword ptr [0xa9d150], ecx */ W32((u32)(0xa9d150u), r_ecx);
    /* 00795fc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fca: mov dword ptr [0xa9d154], ecx */ W32((u32)(0xa9d154u), r_ecx);
    /* 00795fd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fd2: mov dword ptr [0xa9d158], ecx */ W32((u32)(0xa9d158u), r_ecx);
    /* 00795fd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fda: mov dword ptr [0xa9d15c], ecx */ W32((u32)(0xa9d15cu), r_ecx);
    /* 00795fe0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fe2: mov dword ptr [0xa9d160], ecx */ W32((u32)(0xa9d160u), r_ecx);
    /* 00795fe8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795fea: mov dword ptr [0xa9d168], ecx */ W32((u32)(0xa9d168u), r_ecx);
    /* 00795ff0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ff2: mov dword ptr [0xa9d164], ecx */ W32((u32)(0xa9d164u), r_ecx);
    /* 00795ff8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795ffa: mov dword ptr [0xa9d174], ecx */ W32((u32)(0xa9d174u), r_ecx);
    /* 00796000: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796002: mov dword ptr [0xa9d178], ecx */ W32((u32)(0xa9d178u), r_ecx);
    /* 00796008: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079600a: mov dword ptr [0xa9d17c], ecx */ W32((u32)(0xa9d17cu), r_ecx);
    /* 00796010: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796012: mov dword ptr [0xa9d180], ecx */ W32((u32)(0xa9d180u), r_ecx);
    /* 00796018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079601a: mov dword ptr [0xa9d184], ecx */ W32((u32)(0xa9d184u), r_ecx);
    /* 00796020: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796022: mov dword ptr [0xa9d188], ecx */ W32((u32)(0xa9d188u), r_ecx);
    /* 00796028: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079602a: mov dword ptr [0xa9d18c], ecx */ W32((u32)(0xa9d18cu), r_ecx);
    /* 00796030: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796032: mov dword ptr [0xa9d194], ecx */ W32((u32)(0xa9d194u), r_ecx);
    /* 00796038: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079603a: mov dword ptr [0xa9d190], ecx */ W32((u32)(0xa9d190u), r_ecx);
    /* 00796040: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796042: mov dword ptr [0xa9d1a0], ecx */ W32((u32)(0xa9d1a0u), r_ecx);
    /* 00796048: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079604a: mov dword ptr [0xa9d1a4], ecx */ W32((u32)(0xa9d1a4u), r_ecx);
    /* 00796050: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796052: mov dword ptr [0xa9d1a8], ecx */ W32((u32)(0xa9d1a8u), r_ecx);
    /* 00796058: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079605a: mov dword ptr [0xa9d1ac], ecx */ W32((u32)(0xa9d1acu), r_ecx);
    /* 00796060: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796062: mov dword ptr [0xa9d1b0], ecx */ W32((u32)(0xa9d1b0u), r_ecx);
    /* 00796068: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079606a: mov dword ptr [0xa9d1b4], ecx */ W32((u32)(0xa9d1b4u), r_ecx);
    /* 00796070: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796072: mov dword ptr [0xa9d1b8], ecx */ W32((u32)(0xa9d1b8u), r_ecx);
    /* 00796078: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079607a: mov dword ptr [0xa9d1c0], ecx */ W32((u32)(0xa9d1c0u), r_ecx);
    /* 00796080: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796082: mov dword ptr [0xa9d1bc], ecx */ W32((u32)(0xa9d1bcu), r_ecx);
    /* 00796088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079608a: mov dword ptr [0xa9d1cc], ecx */ W32((u32)(0xa9d1ccu), r_ecx);
    /* 00796090: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796092: mov dword ptr [0xa9d1d0], ecx */ W32((u32)(0xa9d1d0u), r_ecx);
    /* 00796098: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079609a: mov dword ptr [0xa9d1d4], ecx */ W32((u32)(0xa9d1d4u), r_ecx);
    /* 007960a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960a2: mov dword ptr [0xa9d1d8], ecx */ W32((u32)(0xa9d1d8u), r_ecx);
    /* 007960a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960aa: mov dword ptr [0xa9d1dc], ecx */ W32((u32)(0xa9d1dcu), r_ecx);
    /* 007960b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960b2: mov dword ptr [0xa9d1e0], ecx */ W32((u32)(0xa9d1e0u), r_ecx);
    /* 007960b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960ba: mov dword ptr [0xa9d1e4], ecx */ W32((u32)(0xa9d1e4u), r_ecx);
    /* 007960c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960c2: mov dword ptr [0xa9d1ec], ecx */ W32((u32)(0xa9d1ecu), r_ecx);
    /* 007960c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960ca: mov dword ptr [0xa9d1e8], ecx */ W32((u32)(0xa9d1e8u), r_ecx);
    /* 007960d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960d2: mov dword ptr [0xa9d1f8], ecx */ W32((u32)(0xa9d1f8u), r_ecx);
    /* 007960d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960da: mov dword ptr [0xa9d1fc], ecx */ W32((u32)(0xa9d1fcu), r_ecx);
    /* 007960e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960e2: mov dword ptr [0xa9d200], ecx */ W32((u32)(0xa9d200u), r_ecx);
    /* 007960e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960ea: mov dword ptr [0xa9d204], ecx */ W32((u32)(0xa9d204u), r_ecx);
    /* 007960f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960f2: mov dword ptr [0xa9d208], ecx */ W32((u32)(0xa9d208u), r_ecx);
    /* 007960f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007960fa: mov dword ptr [0xa9d20c], ecx */ W32((u32)(0xa9d20cu), r_ecx);
    /* 00796100: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796102: mov dword ptr [0xa9d210], ecx */ W32((u32)(0xa9d210u), r_ecx);
    /* 00796108: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079610a: mov dword ptr [0xa9d218], ecx */ W32((u32)(0xa9d218u), r_ecx);
    /* 00796110: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796112: mov dword ptr [0xa9d214], ecx */ W32((u32)(0xa9d214u), r_ecx);
    /* 00796118: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079611a: mov dword ptr [0xa9d224], ecx */ W32((u32)(0xa9d224u), r_ecx);
    /* 00796120: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796122: mov dword ptr [0xa9d228], ecx */ W32((u32)(0xa9d228u), r_ecx);
    /* 00796128: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079612a: mov dword ptr [0xa9d22c], ecx */ W32((u32)(0xa9d22cu), r_ecx);
    /* 00796130: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796132: mov dword ptr [0xa9d230], ecx */ W32((u32)(0xa9d230u), r_ecx);
    /* 00796138: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079613a: mov dword ptr [0xa9d234], ecx */ W32((u32)(0xa9d234u), r_ecx);
    /* 00796140: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796142: mov dword ptr [0xa9d238], ecx */ W32((u32)(0xa9d238u), r_ecx);
    /* 00796148: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079614a: mov dword ptr [0xa9d23c], ecx */ W32((u32)(0xa9d23cu), r_ecx);
    /* 00796150: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796152: mov dword ptr [0xa9d244], ecx */ W32((u32)(0xa9d244u), r_ecx);
    /* 00796158: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079615a: mov dword ptr [0xa9d240], ecx */ W32((u32)(0xa9d240u), r_ecx);
    /* 00796160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796162: mov dword ptr [0xa9d250], ecx */ W32((u32)(0xa9d250u), r_ecx);
    /* 00796168: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079616a: mov dword ptr [0xa9d254], ecx */ W32((u32)(0xa9d254u), r_ecx);
    /* 00796170: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796172: mov dword ptr [0xa9d258], ecx */ W32((u32)(0xa9d258u), r_ecx);
    /* 00796178: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079617a: mov dword ptr [0xa9d25c], ecx */ W32((u32)(0xa9d25cu), r_ecx);
    /* 00796180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796182: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00796188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079618a: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 00796190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796192: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00796198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079619a: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 007961a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961a2: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007961a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961aa: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007961b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961b2: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007961b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ba: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007961c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961c2: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007961c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ca: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007961d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961d2: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007961d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961da: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007961e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961e2: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007961e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ea: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007961f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961f2: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007961f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961fa: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 00796200: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796202: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00796208: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079620a: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 00796210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796212: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00796218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079621a: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 00796220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796222: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00796228: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079622a: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 00796230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796232: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00796238: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079623a: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 00796240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796242: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00796248: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079624a: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 00796250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796252: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00796258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079625a: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 00796260: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796262: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00796268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079626a: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 00796270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796272: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00796278: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079627a: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 00796280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796282: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00796288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079628a: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 00796290: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796292: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00796298: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079629a: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 007962a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962a2: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007962a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962aa: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007962b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962b2: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007962b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ba: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007962c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962c2: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007962c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ca: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007962d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962d2: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007962d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962da: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007962e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962e2: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007962e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ea: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007962f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962f2: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007962f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962fa: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 00796300: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796302: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00796308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079630a: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 00796310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796312: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00796318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079631a: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 00796320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796322: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00796328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079632a: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 00796330: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796332: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00796338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079633a: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 00796340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796342: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00796348: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079634a: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 00796350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796352: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00796358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079635a: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 00796360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796362: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00796368: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079636a: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 00796370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796372: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x007959c8); r_esp += 4; return;
}

