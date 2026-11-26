#include "protos.h"

void f_0075b238(void) /* sub_75B238 */
{
    FN_ENTER(0x0075b238);
    /* 0075b238: mov dword ptr [0xa9ad0c], 0x3f800000 */ W32((u32)(0xa9ad0cu), 0x3f800000u);
    /* 0075b242: mov dword ptr [0xa9ad10], 0x41000000 */ W32((u32)(0xa9ad10u), 0x41000000u);
    /* 0075b24c: mov dword ptr [0xa9ad14], 0x3fc00000 */ W32((u32)(0xa9ad14u), 0x3fc00000u);
    /* 0075b256: ret  */ FN_RET(0x0075b238); r_esp += 4; return;
}

void f_0075b258(void) /* sub_75B258 */
{
    FN_ENTER(0x0075b258);
    /* 0075b258: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b259: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075b25b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b25d: call 0x75b27c */ r_esp -= 4; W32(r_esp, 0x75b262u); f_0075b27c();
    /* 0075b262: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075b266: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b268: jne 0x75b26e */ if (!fZ) goto L_0075b26e;
L_0075b26a:; BB(0x0075b26a);
    /* 0075b26a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075b26b: ret 4 */ FN_RET(0x0075b258); r_esp += 8; return;
L_0075b26e:; BB(0x0075b26e);
    /* 0075b26e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b26f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75b274u); f_005c2f74();
    /* 0075b274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075b275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075b276: ret 4 */ FN_RET(0x0075b258); r_esp += 8; return;
}

void f_0075b27c(void) /* sub_75B27C */
{
    FN_ENTER(0x0075b27c);
    /* 0075b27c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075b27d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075b27f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075b281: push 0x8f330c */ { u32 v = 0x8f330cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075b286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075b28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b28d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075b294: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075b297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075b29a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075b29d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075b2a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075b2a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075b2a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075b2a9: mov dword ptr [ecx], 0xb42b40 */ W32((u32)(r_ecx), 0xb42b40u);
    /* 0075b2af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075b2b6: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x75b2bbu); f_00710c28();
    /* 0075b2bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075b2be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075b2c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0075b2c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075b2c8: ret  */ FN_RET(0x0075b27c); r_esp += 4; return;
}

void f_0075b2cc(void) /* sub_75B2CC */
{
    FN_ENTER(0x0075b2cc);
    /* 0075b2cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b2cd: mov esi, ecx */ r_esi = r_ecx;
    /* 0075b2cf: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 0075b2d4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75b2d9u); f_0073ec50();
    /* 0075b2d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075b2da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b2db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075b2dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0075b2df: push 0x9f56c4 */ { u32 v = 0x9f56c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075b2e4: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x75b2e9u); f_00710d30();
    /* 0075b2e9: mov dword ptr [esi], 0xb42b40 */ W32((u32)(r_esi), 0xb42b40u);
    /* 0075b2ef: mov eax, dword ptr [0x9f56c0] */ r_eax = R32((u32)(0x9f56c0u));
    /* 0075b2f4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0075b2f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b2f9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075b2fd: mov byte ptr [esi + 0x60], dl */ W8((u32)(r_esi+0x60u), (u8)r_edx);
    /* 0075b300: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0075b303: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0075b307: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 0075b30a: mov dword ptr [esi + 0x6c], edx */ W32((u32)(r_esi+0x6cu), r_edx);
    /* 0075b30d: mov dword ptr [esi + 0x70], edx */ W32((u32)(r_esi+0x70u), r_edx);
    /* 0075b310: mov eax, esi */ r_eax = r_esi;
    /* 0075b312: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075b313: ret 8 */ FN_RET(0x0075b2cc); r_esp += 12; return;
}

void f_0075b318(void) /* sub_75B318 */
{
    FN_ENTER(0x0075b318);
    /* 0075b318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b319: mov edi, ecx */ r_edi = r_ecx;
    /* 0075b31b: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b31d: call 0x75b334 */ r_esp -= 4; W32(r_esp, 0x75b322u); f_0075b334();
    /* 0075b322: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b324: call 0x75b380 */ r_esp -= 4; W32(r_esp, 0x75b329u); f_0075b380();
    /* 0075b329: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b32b: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x75b330u); f_00710db4();
    /* 0075b330: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b331: ret  */ FN_RET(0x0075b318); r_esp += 4; return;
}

void f_0075b334(void) /* sub_75B334 */
{
    FN_ENTER(0x0075b334);
    /* 0075b334: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b335: mov edi, ecx */ r_edi = r_ecx;
    /* 0075b337: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0075b33b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b33d: jne 0x75b341 */ if (!fZ) goto L_0075b341;
L_0075b33f:; BB(0x0075b33f);
    /* 0075b33f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b340: ret  */ FN_RET(0x0075b334); r_esp += 4; return;
L_0075b341:; BB(0x0075b341);
    /* 0075b341: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75b346u); f_00694c6c();
    /* 0075b346: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075b34c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075b34f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b351: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b353: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b355: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075b35c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75b361u); f_007c1160();
    /* 0075b361: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b363: je 0x75b376 */ if (fZ) goto L_0075b376;
L_0075b365:; BB(0x0075b365);
    /* 0075b365: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 0075b368: add byte ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075b36b: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0075b36e: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0075b371: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075b374: jge 0x75b378 */ if ((fS==fO)) goto L_0075b378;
L_0075b376:; BB(0x0075b376);
    /* 0075b376: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b377: ret  */ FN_RET(0x0075b334); r_esp += 4; return;
L_0075b378:; BB(0x0075b378);
    /* 0075b378: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075b37b: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0075b37d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b37e: ret  */ FN_RET(0x0075b334); r_esp += 4; return;
}

void f_0075b380(void) /* sub_75B380 */
{
    FN_ENTER(0x0075b380);
    /* 0075b380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075b381: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075b383: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 0075b387: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b389: jne 0x75b38d */ if (!fZ) goto L_0075b38d;
L_0075b38b:; BB(0x0075b38b);
    /* 0075b38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075b38c: ret  */ FN_RET(0x0075b380); r_esp += 4; return;
L_0075b38d:; BB(0x0075b38d);
    /* 0075b38d: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75b392u); f_00694c6c();
    /* 0075b392: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075b398: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075b39b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b39d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b39f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b3a1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075b3a8: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75b3adu); f_007c1160();
    /* 0075b3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075b3af: je 0x75b3c8 */ if (fZ) goto L_0075b3c8;
L_0075b3b1:; BB(0x0075b3b1);
    /* 0075b3b1: mov edx, dword ptr [ebp + 0x6c] */ r_edx = R32((u32)(r_ebp+0x6cu));
    /* 0075b3b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0075b3b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075b3b8: je 0x75b3c2 */ if (fZ) goto L_0075b3c2;
L_0075b3ba:; BB(0x0075b3ba);
    /* 0075b3ba: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0075b3c0: jmp 0x75b3c8 */ goto L_0075b3c8;
L_0075b3c2:; BB(0x0075b3c2);
    /* 0075b3c2: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
L_0075b3c8:; BB(0x0075b3c8);
    /* 0075b3c8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75b3cdu); f_00694c6c();
    /* 0075b3cd: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075b3d3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075b3d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b3d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b3da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075b3dc: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075b3e3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75b3e8u); f_007c1160();
    /* 0075b3e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b3ea: je 0x75b403 */ if (fZ) goto L_0075b403;
L_0075b3ec:; BB(0x0075b3ec);
    /* 0075b3ec: mov edx, dword ptr [ebp + 0x70] */ r_edx = R32((u32)(r_ebp+0x70u));
    /* 0075b3ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0075b3f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075b3f3: je 0x75b3fd */ if (fZ) goto L_0075b3fd;
L_0075b3f5:; BB(0x0075b3f5);
    /* 0075b3f5: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0075b3fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075b3fc: ret  */ FN_RET(0x0075b380); r_esp += 4; return;
L_0075b3fd:; BB(0x0075b3fd);
    /* 0075b3fd: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
L_0075b403:; BB(0x0075b403);
    /* 0075b403: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075b404: ret  */ FN_RET(0x0075b380); r_esp += 4; return;
}

void f_0075b408(void) /* sub_75B408 */
{
    FN_ENTER(0x0075b408);
    /* 0075b408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b409: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b40a: mov edi, ecx */ r_edi = r_ecx;
    /* 0075b40c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b40e: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x75b413u); f_00712644();
    /* 0075b413: mov ebx, eax */ r_ebx = r_eax;
    /* 0075b415: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b416: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b418: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x75b41du); f_00710f80();
    /* 0075b41d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b41e: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b420: call 0x75b428 */ r_esp -= 4; W32(r_esp, 0x75b425u); f_0075b428();
    /* 0075b425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075b426: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b427: ret  */ FN_RET(0x0075b408); r_esp += 4; return;
}

void f_0075b428(void) /* sub_75B428 */
{
    FN_ENTER(0x0075b428);
    /* 0075b428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b429: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b42a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b42b: sub esp, 0x2b4 */ {  u32 a = r_esp; u32 b = 0x2b4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075b431: mov esi, ecx */ r_esi = r_ecx;
    /* 0075b433: mov ebx, dword ptr [esp + 0x2c4] */ r_ebx = R32((u32)(r_esp+0x2c4u));
    /* 0075b43a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0075b43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075b43f: jl 0x75c576 */ if ((fS!=fO)) goto L_0075c576;
L_0075b445:; BB(0x0075b445);
    /* 0075b445: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075b44a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x75b44fu); f_0082bb30();
    /* 0075b44f: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0075b455: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x75b45au); f_00829cc8();
    /* 0075b45a: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0075b45f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0075b464: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x75b469u); f_0082bb60();
    /* 0075b469: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b46f: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b472: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b478: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b47c: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b481: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b486u); f_0082b438();
    /* 0075b486: fld dword ptr [0x974888] */ FPUSH(R_F32((u32)(0x974888u)));
    /* 0075b48c: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b492: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b498: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0075b49c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b49f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b4a1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0075b4a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b4a7: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0075b4ab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b4ad: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b4b0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b4b2: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0075b4b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b4b8: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0075b4bc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b4be: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0075b4c2: mov dword ptr [esp + 0x24], 0x3f580000 */ W32((u32)(r_esp+0x24u), 0x3f580000u);
    /* 0075b4ca: mov dword ptr [esp + 0x28], 0x3e580000 */ W32((u32)(r_esp+0x28u), 0x3e580000u);
    /* 0075b4d2: mov dword ptr [esp + 0x2c], 0x3f740000 */ W32((u32)(r_esp+0x2cu), 0x3f740000u);
    /* 0075b4da: mov dword ptr [esp + 0x30], 0x3e8c0000 */ W32((u32)(r_esp+0x30u), 0x3e8c0000u);
    /* 0075b4e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b4e3: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b4e8u); f_0071bbb4();
    /* 0075b4e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b4e9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b4ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b4f0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0075b4f4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b4f9u); f_0082b440();
    /* 0075b4f9: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b4ff: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b502: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b508: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b50c: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b511: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b516u); f_0082b438();
    /* 0075b516: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b51c: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b522: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0075b526: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b529: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0075b52d: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 0075b531: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0075b534: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b536: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0075b53a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0075b53c: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0075b540: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b542: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0075b546: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b548: mov dword ptr [esp + 0x44], 0x3f580000 */ W32((u32)(r_esp+0x44u), 0x3f580000u);
    /* 0075b550: mov dword ptr [esp + 0x48], 0x3e8c0000 */ W32((u32)(r_esp+0x48u), 0x3e8c0000u);
    /* 0075b558: mov dword ptr [esp + 0x4c], 0x3f740000 */ W32((u32)(r_esp+0x4cu), 0x3f740000u);
    /* 0075b560: mov dword ptr [esp + 0x50], 0x3eac0000 */ W32((u32)(r_esp+0x50u), 0x3eac0000u);
    /* 0075b568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b569: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b56eu); f_0071bbb4();
    /* 0075b56e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b56f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b573: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b576: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0075b57a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b57fu); f_0082b440();
    /* 0075b57f: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075b583: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075b585: je 0x75b62f */ if (fZ) goto L_0075b62f;
L_0075b58b:; BB(0x0075b58b);
    /* 0075b58b: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b591: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b594: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b59a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b59e: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b5a3: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b5a8u); f_0082b438();
    /* 0075b5a8: fld dword ptr [0x974868] */ FPUSH(R_F32((u32)(0x974868u)));
    /* 0075b5ae: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b5b4: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b5ba: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 0075b5be: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b5c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b5c3: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0075b5c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b5c9: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 0075b5cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b5cf: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b5d2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b5d4: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0075b5d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b5da: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 0075b5de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b5e0: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0075b5e7: mov dword ptr [esp + 0x84], 0x3f580000 */ W32((u32)(r_esp+0x84u), 0x3f580000u);
    /* 0075b5f2: mov dword ptr [esp + 0x88], 0x3eac0000 */ W32((u32)(r_esp+0x88u), 0x3eac0000u);
    /* 0075b5fd: mov dword ptr [esp + 0x8c], 0x3f740000 */ W32((u32)(r_esp+0x8cu), 0x3f740000u);
    /* 0075b608: mov dword ptr [esp + 0x90], 0x3ecc0000 */ W32((u32)(r_esp+0x90u), 0x3ecc0000u);
    /* 0075b613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b614: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b619u); f_0071bbb4();
    /* 0075b619: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b61a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b61e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b621: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0075b625: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b62au); f_0082b440();
    /* 0075b62a: jmp 0x75b6bf */ goto L_0075b6bf;
L_0075b62f:; BB(0x0075b62f);
    /* 0075b62f: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b635: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b638: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b63e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b642: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075b647: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b64cu); f_0082b438();
    /* 0075b64c: fld dword ptr [0x974868] */ FPUSH(R_F32((u32)(0x974868u)));
    /* 0075b652: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b658: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b65e: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0075b662: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b665: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b667: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0075b66b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b66d: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 0075b671: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b673: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b676: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b678: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0075b67c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b67e: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 0075b682: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b684: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0075b688: mov dword ptr [esp + 0x64], 0x3f580000 */ W32((u32)(r_esp+0x64u), 0x3f580000u);
    /* 0075b690: mov dword ptr [esp + 0x68], 0x3eac0000 */ W32((u32)(r_esp+0x68u), 0x3eac0000u);
    /* 0075b698: mov dword ptr [esp + 0x6c], 0x3f740000 */ W32((u32)(r_esp+0x6cu), 0x3f740000u);
    /* 0075b6a0: mov dword ptr [esp + 0x70], 0x3ecc0000 */ W32((u32)(r_esp+0x70u), 0x3ecc0000u);
    /* 0075b6a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b6a9: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b6aeu); f_0071bbb4();
    /* 0075b6ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b6af: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b6b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b6b6: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0075b6ba: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b6bfu); f_0082b440();
L_0075b6bf:; BB(0x0075b6bf);
    /* 0075b6bf: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075b6c3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075b6c5: je 0x75b781 */ if (fZ) goto L_0075b781;
L_0075b6cb:; BB(0x0075b6cb);
    /* 0075b6cb: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b6d1: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b6d4: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b6da: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b6de: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b6e3: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b6e8u); f_0082b438();
    /* 0075b6e8: fld dword ptr [0x974860] */ FPUSH(R_F32((u32)(0x974860u)));
    /* 0075b6ee: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b6f4: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b6fa: lea edx, [esp + 0xb4] */ r_edx = (u32)(r_esp+0xb4u);
    /* 0075b701: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b704: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b706: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 0075b70d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b70f: fadd dword ptr [esp + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xb4u));
    /* 0075b716: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b718: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b71b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b71d: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0075b724: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b726: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 0075b72d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b72f: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 0075b736: mov dword ptr [esp + 0xc4], 0x3f580000 */ W32((u32)(r_esp+0xc4u), 0x3f580000u);
    /* 0075b741: mov dword ptr [esp + 0xc8], 0x3ecc0000 */ W32((u32)(r_esp+0xc8u), 0x3ecc0000u);
    /* 0075b74c: mov dword ptr [esp + 0xcc], 0x3f740000 */ W32((u32)(r_esp+0xccu), 0x3f740000u);
    /* 0075b757: mov dword ptr [esp + 0xd0], 0x3eec0000 */ W32((u32)(r_esp+0xd0u), 0x3eec0000u);
    /* 0075b762: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b763: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b768u); f_0071bbb4();
    /* 0075b768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b769: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b76d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b770: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 0075b777: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b77cu); f_0082b440();
    /* 0075b77c: jmp 0x75b832 */ goto L_0075b832;
L_0075b781:; BB(0x0075b781);
    /* 0075b781: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b787: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b78a: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b790: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b794: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075b799: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b79eu); f_0082b438();
    /* 0075b79e: fld dword ptr [0x974860] */ FPUSH(R_F32((u32)(0x974860u)));
    /* 0075b7a4: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b7aa: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b7b0: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0075b7b7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b7ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b7bc: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0075b7c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b7c5: fadd dword ptr [esp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x94u));
    /* 0075b7cc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b7ce: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b7d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b7d3: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 0075b7da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b7dc: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 0075b7e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b7e5: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 0075b7ec: mov dword ptr [esp + 0xa4], 0x3f580000 */ W32((u32)(r_esp+0xa4u), 0x3f580000u);
    /* 0075b7f7: mov dword ptr [esp + 0xa8], 0x3ecc0000 */ W32((u32)(r_esp+0xa8u), 0x3ecc0000u);
    /* 0075b802: mov dword ptr [esp + 0xac], 0x3f740000 */ W32((u32)(r_esp+0xacu), 0x3f740000u);
    /* 0075b80d: mov dword ptr [esp + 0xb0], 0x3eec0000 */ W32((u32)(r_esp+0xb0u), 0x3eec0000u);
    /* 0075b818: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b819: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b81eu); f_0071bbb4();
    /* 0075b81e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b81f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b823: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b826: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 0075b82d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b832u); f_0082b440();
L_0075b832:; BB(0x0075b832);
    /* 0075b832: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075b836: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075b838: je 0x75b9a5 */ if (fZ) goto L_0075b9a5;
L_0075b83e:; BB(0x0075b83e);
    /* 0075b83e: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b844: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b847: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b84d: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b851: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b856: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b85bu); f_0082b438();
    /* 0075b85b: fld dword ptr [0x974858] */ FPUSH(R_F32((u32)(0x974858u)));
    /* 0075b861: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b867: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b86d: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 0075b874: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b877: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b879: mov dword ptr [esp + 0x114], eax */ W32((u32)(r_esp+0x114u), r_eax);
    /* 0075b880: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b882: fadd dword ptr [esp + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x114u));
    /* 0075b889: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b88b: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b88e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b890: fstp dword ptr [esp + 0x11c] */ W_F32((u32)(r_esp+0x11cu), ST(0)); FPOP();
    /* 0075b897: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b899: fst dword ptr [esp + 0x118] */ W_F32((u32)(r_esp+0x118u), ST(0));
    /* 0075b8a0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b8a2: fstp dword ptr [esp + 0x120] */ W_F32((u32)(r_esp+0x120u), ST(0)); FPOP();
    /* 0075b8a9: mov dword ptr [esp + 0x124], 0x3f390000 */ W32((u32)(r_esp+0x124u), 0x3f390000u);
    /* 0075b8b4: mov dword ptr [esp + 0x128], 0x3ecc0000 */ W32((u32)(r_esp+0x128u), 0x3ecc0000u);
    /* 0075b8bf: mov dword ptr [esp + 0x12c], 0x3f550000 */ W32((u32)(r_esp+0x12cu), 0x3f550000u);
    /* 0075b8ca: mov dword ptr [esp + 0x130], 0x3eec0000 */ W32((u32)(r_esp+0x130u), 0x3eec0000u);
    /* 0075b8d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b8d6: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b8dbu); f_0071bbb4();
    /* 0075b8db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b8dc: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b8e0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b8e3: lea ecx, [esp + 0x118] */ r_ecx = (u32)(r_esp+0x118u);
    /* 0075b8ea: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b8efu); f_0082b440();
    /* 0075b8ef: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b8f5: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b8f8: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b8fe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b902: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075b907: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b90cu); f_0082b438();
    /* 0075b90c: fld dword ptr [0x97484c] */ FPUSH(R_F32((u32)(0x97484cu)));
    /* 0075b912: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b918: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b91e: lea edx, [esp + 0x134] */ r_edx = (u32)(r_esp+0x134u);
    /* 0075b925: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b928: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b92a: mov dword ptr [esp + 0x134], eax */ W32((u32)(r_esp+0x134u), r_eax);
    /* 0075b931: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b933: fadd dword ptr [esp + 0x134] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x134u));
    /* 0075b93a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b93c: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b93f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b941: fstp dword ptr [esp + 0x13c] */ W_F32((u32)(r_esp+0x13cu), ST(0)); FPOP();
    /* 0075b948: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b94a: fst dword ptr [esp + 0x138] */ W_F32((u32)(r_esp+0x138u), ST(0));
    /* 0075b951: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b953: fstp dword ptr [esp + 0x140] */ W_F32((u32)(r_esp+0x140u), ST(0)); FPOP();
    /* 0075b95a: mov dword ptr [esp + 0x144], 0x3f390000 */ W32((u32)(r_esp+0x144u), 0x3f390000u);
    /* 0075b965: mov dword ptr [esp + 0x148], 0x3eec0000 */ W32((u32)(r_esp+0x148u), 0x3eec0000u);
    /* 0075b970: mov dword ptr [esp + 0x14c], 0x3f550000 */ W32((u32)(r_esp+0x14cu), 0x3f550000u);
    /* 0075b97b: mov dword ptr [esp + 0x150], 0x3f060000 */ W32((u32)(r_esp+0x150u), 0x3f060000u);
    /* 0075b986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075b987: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b98cu); f_0071bbb4();
    /* 0075b98c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b98d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075b991: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b994: lea ecx, [esp + 0x138] */ r_ecx = (u32)(r_esp+0x138u);
    /* 0075b99b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b9a0u); f_0082b440();
    /* 0075b9a0: jmp 0x75bb07 */ goto L_0075bb07;
L_0075b9a5:; BB(0x0075b9a5);
    /* 0075b9a5: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075b9ab: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075b9ae: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075b9b4: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075b9b8: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075b9bd: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75b9c2u); f_0082b438();
    /* 0075b9c2: fld dword ptr [0x974858] */ FPUSH(R_F32((u32)(0x974858u)));
    /* 0075b9c8: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075b9ce: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075b9d4: lea edx, [esp + 0xd4] */ r_edx = (u32)(r_esp+0xd4u);
    /* 0075b9db: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075b9de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075b9e0: mov dword ptr [esp + 0xd4], eax */ W32((u32)(r_esp+0xd4u), r_eax);
    /* 0075b9e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b9e9: fadd dword ptr [esp + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xd4u));
    /* 0075b9f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b9f2: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075b9f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b9f7: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 0075b9fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ba00: fst dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0));
    /* 0075ba07: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075ba09: fstp dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0)); FPOP();
    /* 0075ba10: mov dword ptr [esp + 0xe4], 0x3f390000 */ W32((u32)(r_esp+0xe4u), 0x3f390000u);
    /* 0075ba1b: mov dword ptr [esp + 0xe8], 0x3ecc0000 */ W32((u32)(r_esp+0xe8u), 0x3ecc0000u);
    /* 0075ba26: mov dword ptr [esp + 0xec], 0x3f550000 */ W32((u32)(r_esp+0xecu), 0x3f550000u);
    /* 0075ba31: mov dword ptr [esp + 0xf0], 0x3eec0000 */ W32((u32)(r_esp+0xf0u), 0x3eec0000u);
    /* 0075ba3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ba3d: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75ba42u); f_0071bbb4();
    /* 0075ba42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ba43: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075ba47: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075ba4a: lea ecx, [esp + 0xd8] */ r_ecx = (u32)(r_esp+0xd8u);
    /* 0075ba51: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75ba56u); f_0082b440();
    /* 0075ba56: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075ba5c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075ba5f: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075ba65: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075ba69: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075ba6e: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75ba73u); f_0082b438();
    /* 0075ba73: fld dword ptr [0x97484c] */ FPUSH(R_F32((u32)(0x97484cu)));
    /* 0075ba79: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075ba7f: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075ba85: lea edx, [esp + 0xf4] */ r_edx = (u32)(r_esp+0xf4u);
    /* 0075ba8c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0075ba8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075ba91: mov dword ptr [esp + 0xf4], eax */ W32((u32)(r_esp+0xf4u), r_eax);
    /* 0075ba98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ba9a: fadd dword ptr [esp + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xf4u));
    /* 0075baa1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075baa3: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075baa6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075baa8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 0075baaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bab1: fst dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0));
    /* 0075bab8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075baba: fstp dword ptr [esp + 0x100] */ W_F32((u32)(r_esp+0x100u), ST(0)); FPOP();
    /* 0075bac1: mov dword ptr [esp + 0x104], 0x3f390000 */ W32((u32)(r_esp+0x104u), 0x3f390000u);
    /* 0075bacc: mov dword ptr [esp + 0x108], 0x3eec0000 */ W32((u32)(r_esp+0x108u), 0x3eec0000u);
    /* 0075bad7: mov dword ptr [esp + 0x10c], 0x3f550000 */ W32((u32)(r_esp+0x10cu), 0x3f550000u);
    /* 0075bae2: mov dword ptr [esp + 0x110], 0x3f060000 */ W32((u32)(r_esp+0x110u), 0x3f060000u);
    /* 0075baed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075baee: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75baf3u); f_0071bbb4();
    /* 0075baf3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075baf4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075baf8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075bafb: lea ecx, [esp + 0xf8] */ r_ecx = (u32)(r_esp+0xf8u);
    /* 0075bb02: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75bb07u); f_0082b440();
L_0075bb07:; BB(0x0075bb07);
    /* 0075bb07: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075bb0d: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075bb10: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075bb16: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075bb1a: mov dword ptr [esp + 0x164], 0x3f700000 */ W32((u32)(r_esp+0x164u), 0x3f700000u);
    /* 0075bb25: mov dword ptr [esp + 0x168], 0x3e1c0000 */ W32((u32)(r_esp+0x168u), 0x3e1c0000u);
    /* 0075bb30: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0075bb32: mov dword ptr [esp + 0x16c], 0x3f7e0000 */ W32((u32)(r_esp+0x16cu), 0x3f7e0000u);
    /* 0075bb3d: mov dword ptr [esp + 0x170], 0x3e540000 */ W32((u32)(r_esp+0x170u), 0x3e540000u);
L_0075bb48:; BB(0x0075bb48);
    /* 0075bb48: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075bb4c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075bb4e: je 0x75bb59 */ if (fZ) goto L_0075bb59;
L_0075bb50:; BB(0x0075bb50);
    /* 0075bb50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bb51: call 0x7147e8 */ r_esp -= 4; W32(r_esp, 0x75bb56u); f_007147e8();
    /* 0075bb56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075bb57: jmp 0x75bb60 */ goto L_0075bb60;
L_0075bb59:; BB(0x0075bb59);
    /* 0075bb59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bb5a: call 0x7147f4 */ r_esp -= 4; W32(r_esp, 0x75bb5fu); f_007147f4();
    /* 0075bb5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075bb60:; BB(0x0075bb60);
    /* 0075bb60: mov ecx, eax */ r_ecx = r_eax;
    /* 0075bb62: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bb67u); f_0082b438();
    /* 0075bb67: fld dword ptr [0x974834] */ FPUSH(R_F32((u32)(0x974834u)));
    /* 0075bb6d: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075bb70: fld dword ptr [0x97482c] */ FPUSH(R_F32((u32)(0x97482cu)));
    /* 0075bb76: fld dword ptr [0x974828] */ FPUSH(R_F32((u32)(0x974828u)));
    /* 0075bb7c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0075bb7f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0075bb82: fmul dword ptr [0x974830] */ ST(0) = ST(0) * R_F32((u32)(0x974830u));
    /* 0075bb88: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0075bb8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075bb8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bb8e: fst dword ptr [esp + 0x154] */ W_F32((u32)(r_esp+0x154u), ST(0));
    /* 0075bb95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bb97: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075bb9a: fst dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0));
    /* 0075bba1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bba3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075bba5: fstp dword ptr [esp + 0x15c] */ W_F32((u32)(r_esp+0x15cu), ST(0)); FPOP();
    /* 0075bbac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075bbae: fstp dword ptr [esp + 0x160] */ W_F32((u32)(r_esp+0x160u), ST(0)); FPOP();
    /* 0075bbb5: lea eax, [esp + 0x154] */ r_eax = (u32)(r_esp+0x154u);
    /* 0075bbbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075bbbd: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75bbc2u); f_0071bbb4();
    /* 0075bbc2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bbc3: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075bbc7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075bbca: lea ecx, [esp + 0x158] */ r_ecx = (u32)(r_esp+0x158u);
    /* 0075bbd1: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75bbd6u); f_0082b440();
    /* 0075bbd6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075bbd9: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075bbdc: jl 0x75bb48 */ if ((fS!=fO)) goto L_0075bb48;
L_0075bbe2:; BB(0x0075bbe2);
    /* 0075bbe2: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075bbe6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075bbe8: je 0x75bbf6 */ if (fZ) goto L_0075bbf6;
L_0075bbea:; BB(0x0075bbea);
    /* 0075bbea: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075bbef: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bbf4u); f_0082b438();
    /* 0075bbf4: jmp 0x75bc00 */ goto L_0075bc00;
L_0075bbf6:; BB(0x0075bbf6);
    /* 0075bbf6: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075bbfb: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bc00u); f_0082b438();
L_0075bc00:; BB(0x0075bc00);
    /* 0075bc00: fld dword ptr [0x97482c] */ FPUSH(R_F32((u32)(0x97482cu)));
    /* 0075bc06: fld dword ptr [0x974828] */ FPUSH(R_F32((u32)(0x974828u)));
    /* 0075bc0c: lea edi, [esp + 0x154] */ r_edi = (u32)(r_esp+0x154u);
    /* 0075bc13: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 0075bc16: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0075bc19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075bc1b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0075bc1f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0075bc23: fmul dword ptr [0x974830] */ ST(0) = ST(0) * R_F32((u32)(0x974830u));
    /* 0075bc29: fadd dword ptr [0x974834] */ ST(0) = ST(0) + R_F32((u32)(0x974834u));
    /* 0075bc2f: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075bc32: fst dword ptr [esp + 0x154] */ W_F32((u32)(r_esp+0x154u), ST(0));
    /* 0075bc39: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0075bc3b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bc3d: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075bc40: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bc42: fstp dword ptr [esp + 0x15c] */ W_F32((u32)(r_esp+0x15cu), ST(0)); FPOP();
    /* 0075bc49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bc4b: fst dword ptr [esp + 0x158] */ W_F32((u32)(r_esp+0x158u), ST(0));
    /* 0075bc52: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075bc54: fstp dword ptr [esp + 0x160] */ W_F32((u32)(r_esp+0x160u), ST(0)); FPOP();
    /* 0075bc5b: mov dword ptr [esp + 0x164], 0x3f5f0000 */ W32((u32)(r_esp+0x164u), 0x3f5f0000u);
    /* 0075bc66: mov dword ptr [esp + 0x168], 0x3e1c0000 */ W32((u32)(r_esp+0x168u), 0x3e1c0000u);
    /* 0075bc71: mov dword ptr [esp + 0x16c], 0x3f6d0000 */ W32((u32)(r_esp+0x16cu), 0x3f6d0000u);
    /* 0075bc7c: mov dword ptr [esp + 0x170], 0x3e540000 */ W32((u32)(r_esp+0x170u), 0x3e540000u);
    /* 0075bc87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bc88: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75bc8du); f_0071bbb4();
    /* 0075bc8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bc8e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075bc92: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075bc95: lea ecx, [esp + 0x158] */ r_ecx = (u32)(r_esp+0x158u);
    /* 0075bc9c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75bca1u); f_0082b440();
    /* 0075bca1: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75bca6u); f_004ac444();
    /* 0075bca6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075bcab: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x75bcb0u); f_0082bb30();
    /* 0075bcb0: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0075bcb6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x75bcbbu); f_00829cc8();
    /* 0075bcbb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075bcc0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0075bcc5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x75bccau); f_0082bb60();
    /* 0075bcca: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075bcd0: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075bcd3: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075bcd9: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075bcdd: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075bce2: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bce7u); f_0082b438();
    /* 0075bce7: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075bced: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075bcf0: fld dword ptr [0x974888] */ FPUSH(R_F32((u32)(0x974888u)));
    /* 0075bcf6: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075bcfc: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075bd02: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075bd08: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075bd0e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075bd10: fst dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0));
    /* 0075bd17: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075bd19: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075bd1c: fst dword ptr [esp + 0x178] */ W_F32((u32)(r_esp+0x178u), ST(0));
    /* 0075bd23: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075bd25: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075bd27: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075bd29: fstp dword ptr [esp + 0x17c] */ W_F32((u32)(r_esp+0x17cu), ST(0)); FPOP();
    /* 0075bd30: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075bd32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bd34: fstp dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0)); FPOP();
    /* 0075bd3b: fld dword ptr [0x9747d0] */ FPUSH(R_F32((u32)(0x9747d0u)));
    /* 0075bd41: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075bd43: lea eax, [esp + 0x174] */ r_eax = (u32)(r_esp+0x174u);
    /* 0075bd4a: fstp dword ptr [esp + 0x184] */ W_F32((u32)(r_esp+0x184u), ST(0)); FPOP();
    /* 0075bd51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075bd53: fld dword ptr [0x9747d4] */ FPUSH(R_F32((u32)(0x9747d4u)));
    /* 0075bd59: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075bd5b: fstp dword ptr [esp + 0x188] */ W_F32((u32)(r_esp+0x188u), ST(0)); FPOP();
    /* 0075bd62: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bd64: fadd dword ptr [0x9747d0] */ ST(0) = ST(0) + R_F32((u32)(0x9747d0u));
    /* 0075bd6a: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075bd6c: fstp dword ptr [esp + 0x18c] */ W_F32((u32)(r_esp+0x18cu), ST(0)); FPOP();
    /* 0075bd73: fld dword ptr [0x9747d4] */ FPUSH(R_F32((u32)(0x9747d4u)));
    /* 0075bd79: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075bd7b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075bd7d: fstp dword ptr [esp + 0x190] */ W_F32((u32)(r_esp+0x190u), ST(0)); FPOP();
    /* 0075bd84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075bd85: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75bd8au); f_0071bbb4();
    /* 0075bd8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bd8b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075bd8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075bd92: lea ecx, [esp + 0x178] */ r_ecx = (u32)(r_esp+0x178u);
    /* 0075bd99: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75bd9eu); f_0082b440();
    /* 0075bd9e: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075bda4: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075bda7: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075bdad: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075bdb1: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075bdb6: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bdbbu); f_0082b438();
    /* 0075bdbb: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075bdc1: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075bdc4: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075bdca: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075bdd0: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075bdd6: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075bddc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075bdde: fst dword ptr [esp + 0x194] */ W_F32((u32)(r_esp+0x194u), ST(0));
    /* 0075bde5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075bde7: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0075bdea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bdec: fstp dword ptr [esp + 0x19c] */ W_F32((u32)(r_esp+0x19cu), ST(0)); FPOP();
    /* 0075bdf3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bdf5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075bdf7: fst dword ptr [esp + 0x198] */ W_F32((u32)(r_esp+0x198u), ST(0));
    /* 0075bdfe: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075be00: fstp dword ptr [esp + 0x1a0] */ W_F32((u32)(r_esp+0x1a0u), ST(0)); FPOP();
    /* 0075be07: fld dword ptr [0x9747a0] */ FPUSH(R_F32((u32)(0x9747a0u)));
    /* 0075be0d: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075be0f: lea eax, [esp + 0x194] */ r_eax = (u32)(r_esp+0x194u);
    /* 0075be16: fstp dword ptr [esp + 0x1a4] */ W_F32((u32)(r_esp+0x1a4u), ST(0)); FPOP();
    /* 0075be1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075be1f: fld dword ptr [0x9747a4] */ FPUSH(R_F32((u32)(0x9747a4u)));
    /* 0075be25: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075be27: fstp dword ptr [esp + 0x1a8] */ W_F32((u32)(r_esp+0x1a8u), ST(0)); FPOP();
    /* 0075be2e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075be30: fadd dword ptr [0x9747a0] */ ST(0) = ST(0) + R_F32((u32)(0x9747a0u));
    /* 0075be36: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075be38: fstp dword ptr [esp + 0x1ac] */ W_F32((u32)(r_esp+0x1acu), ST(0)); FPOP();
    /* 0075be3f: fld dword ptr [0x9747a4] */ FPUSH(R_F32((u32)(0x9747a4u)));
    /* 0075be45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075be47: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0075be49: fstp dword ptr [esp + 0x1b0] */ W_F32((u32)(r_esp+0x1b0u), ST(0)); FPOP();
    /* 0075be50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075be51: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75be56u); f_0071bbb4();
    /* 0075be56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075be57: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075be5b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075be5e: lea ecx, [esp + 0x198] */ r_ecx = (u32)(r_esp+0x198u);
    /* 0075be65: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75be6au); f_0082b440();
    /* 0075be6a: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075be6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075be70: je 0x75bf69 */ if (fZ) goto L_0075bf69;
L_0075be76:; BB(0x0075be76);
    /* 0075be76: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 0075be79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075be7b: mov edi, 2 */ r_edi = 0x2u;
    /* 0075be80: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075be83: jne 0x75be8a */ if (!fZ) goto L_0075be8a;
L_0075be85:; BB(0x0075be85);
    /* 0075be85: mov edi, 6 */ r_edi = 0x6u;
L_0075be8a:; BB(0x0075be8a);
    /* 0075be8a: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075be90: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075be93: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075be99: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075be9d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075be9f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075bea4: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bea9u); f_0082b438();
    /* 0075bea9: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075beaf: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075beb2: fld dword ptr [0x974868] */ FPUSH(R_F32((u32)(0x974868u)));
    /* 0075beb8: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075bebe: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075bec4: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075beca: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075bed0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075bed2: fst dword ptr [esp + 0x1d4] */ W_F32((u32)(r_esp+0x1d4u), ST(0));
    /* 0075bed9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075bedb: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075bede: fst dword ptr [esp + 0x1d8] */ W_F32((u32)(r_esp+0x1d8u), ST(0));
    /* 0075bee5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075bee7: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075bee9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075beeb: fstp dword ptr [esp + 0x1dc] */ W_F32((u32)(r_esp+0x1dcu), ST(0)); FPOP();
    /* 0075bef2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075bef4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bef6: fstp dword ptr [esp + 0x1e0] */ W_F32((u32)(r_esp+0x1e0u), ST(0)); FPOP();
    /* 0075befd: fld dword ptr [edi*4 + 0x974728] */ FPUSH(R_F32((u32)(r_edi*4+0x974728u)));
    /* 0075bf04: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075bf06: lea eax, [esp + 0x1d4] */ r_eax = (u32)(r_esp+0x1d4u);
    /* 0075bf0d: fstp dword ptr [esp + 0x1e4] */ W_F32((u32)(r_esp+0x1e4u), ST(0)); FPOP();
    /* 0075bf14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075bf16: fld dword ptr [edi*4 + 0x97472c] */ FPUSH(R_F32((u32)(r_edi*4+0x97472cu)));
    /* 0075bf1d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075bf1f: fstp dword ptr [esp + 0x1e8] */ W_F32((u32)(r_esp+0x1e8u), ST(0)); FPOP();
    /* 0075bf26: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075bf28: fadd dword ptr [edi*4 + 0x974728] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x974728u));
    /* 0075bf2f: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075bf31: fstp dword ptr [esp + 0x1ec] */ W_F32((u32)(r_esp+0x1ecu), ST(0)); FPOP();
    /* 0075bf38: fld dword ptr [edi*4 + 0x97472c] */ FPUSH(R_F32((u32)(r_edi*4+0x97472cu)));
    /* 0075bf3f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075bf41: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075bf43: fstp dword ptr [esp + 0x1f0] */ W_F32((u32)(r_esp+0x1f0u), ST(0)); FPOP();
    /* 0075bf4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075bf4b: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75bf50u); f_0071bbb4();
    /* 0075bf50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075bf51: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075bf55: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075bf58: lea ecx, [esp + 0x1d8] */ r_ecx = (u32)(r_esp+0x1d8u);
    /* 0075bf5f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75bf64u); f_0082b440();
    /* 0075bf64: jmp 0x75c057 */ goto L_0075c057;
L_0075bf69:; BB(0x0075bf69);
    /* 0075bf69: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 0075bf6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075bf6e: mov edi, 2 */ r_edi = 0x2u;
    /* 0075bf73: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075bf76: jne 0x75bf7d */ if (!fZ) goto L_0075bf7d;
L_0075bf78:; BB(0x0075bf78);
    /* 0075bf78: mov edi, 6 */ r_edi = 0x6u;
L_0075bf7d:; BB(0x0075bf7d);
    /* 0075bf7d: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075bf83: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075bf86: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075bf8c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075bf90: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075bf92: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075bf97: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75bf9cu); f_0082b438();
    /* 0075bf9c: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075bfa2: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075bfa5: fld dword ptr [0x974868] */ FPUSH(R_F32((u32)(0x974868u)));
    /* 0075bfab: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075bfb1: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075bfb7: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075bfbd: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075bfc3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075bfc5: fst dword ptr [esp + 0x1b4] */ W_F32((u32)(r_esp+0x1b4u), ST(0));
    /* 0075bfcc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075bfce: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075bfd1: fst dword ptr [esp + 0x1b8] */ W_F32((u32)(r_esp+0x1b8u), ST(0));
    /* 0075bfd8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075bfda: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075bfdc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075bfde: fstp dword ptr [esp + 0x1bc] */ W_F32((u32)(r_esp+0x1bcu), ST(0)); FPOP();
    /* 0075bfe5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075bfe7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075bfe9: fstp dword ptr [esp + 0x1c0] */ W_F32((u32)(r_esp+0x1c0u), ST(0)); FPOP();
    /* 0075bff0: fld dword ptr [edi*4 + 0x974760] */ FPUSH(R_F32((u32)(r_edi*4+0x974760u)));
    /* 0075bff7: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075bff9: lea eax, [esp + 0x1b4] */ r_eax = (u32)(r_esp+0x1b4u);
    /* 0075c000: fstp dword ptr [esp + 0x1c4] */ W_F32((u32)(r_esp+0x1c4u), ST(0)); FPOP();
    /* 0075c007: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c009: fld dword ptr [edi*4 + 0x974764] */ FPUSH(R_F32((u32)(r_edi*4+0x974764u)));
    /* 0075c010: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c012: fstp dword ptr [esp + 0x1c8] */ W_F32((u32)(r_esp+0x1c8u), ST(0)); FPOP();
    /* 0075c019: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c01b: fadd dword ptr [edi*4 + 0x974760] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x974760u));
    /* 0075c022: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c024: fstp dword ptr [esp + 0x1cc] */ W_F32((u32)(r_esp+0x1ccu), ST(0)); FPOP();
    /* 0075c02b: fld dword ptr [edi*4 + 0x974764] */ FPUSH(R_F32((u32)(r_edi*4+0x974764u)));
    /* 0075c032: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c034: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c036: fstp dword ptr [esp + 0x1d0] */ W_F32((u32)(r_esp+0x1d0u), ST(0)); FPOP();
    /* 0075c03d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c03e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c043u); f_0071bbb4();
    /* 0075c043: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c044: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c048: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c04b: lea ecx, [esp + 0x1b8] */ r_ecx = (u32)(r_esp+0x1b8u);
    /* 0075c052: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c057u); f_0082b440();
L_0075c057:; BB(0x0075c057);
    /* 0075c057: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075c05b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075c05d: je 0x75c13c */ if (fZ) goto L_0075c13c;
L_0075c063:; BB(0x0075c063);
    /* 0075c063: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c069: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c06c: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c072: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c076: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075c07b: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c080u); f_0082b438();
    /* 0075c080: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c086: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c089: fld dword ptr [0x974860] */ FPUSH(R_F32((u32)(0x974860u)));
    /* 0075c08f: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c095: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c09b: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c0a1: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c0a7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c0a9: fst dword ptr [esp + 0x214] */ W_F32((u32)(r_esp+0x214u), ST(0));
    /* 0075c0b0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c0b2: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c0b5: fst dword ptr [esp + 0x218] */ W_F32((u32)(r_esp+0x218u), ST(0));
    /* 0075c0bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c0be: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c0c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c0c2: fstp dword ptr [esp + 0x21c] */ W_F32((u32)(r_esp+0x21cu), ST(0)); FPOP();
    /* 0075c0c9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c0cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c0cd: fstp dword ptr [esp + 0x220] */ W_F32((u32)(r_esp+0x220u), ST(0)); FPOP();
    /* 0075c0d4: fld dword ptr [0x9746d0] */ FPUSH(R_F32((u32)(0x9746d0u)));
    /* 0075c0da: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c0dc: lea eax, [esp + 0x214] */ r_eax = (u32)(r_esp+0x214u);
    /* 0075c0e3: fstp dword ptr [esp + 0x224] */ W_F32((u32)(r_esp+0x224u), ST(0)); FPOP();
    /* 0075c0ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c0ec: fld dword ptr [0x9746d4] */ FPUSH(R_F32((u32)(0x9746d4u)));
    /* 0075c0f2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c0f4: fstp dword ptr [esp + 0x228] */ W_F32((u32)(r_esp+0x228u), ST(0)); FPOP();
    /* 0075c0fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c0fd: fadd dword ptr [0x9746d0] */ ST(0) = ST(0) + R_F32((u32)(0x9746d0u));
    /* 0075c103: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c105: fstp dword ptr [esp + 0x22c] */ W_F32((u32)(r_esp+0x22cu), ST(0)); FPOP();
    /* 0075c10c: fld dword ptr [0x9746d4] */ FPUSH(R_F32((u32)(0x9746d4u)));
    /* 0075c112: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c114: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c116: fstp dword ptr [esp + 0x230] */ W_F32((u32)(r_esp+0x230u), ST(0)); FPOP();
    /* 0075c11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c11e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c123u); f_0071bbb4();
    /* 0075c123: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c124: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c128: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c12b: lea ecx, [esp + 0x218] */ r_ecx = (u32)(r_esp+0x218u);
    /* 0075c132: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c137u); f_0082b440();
    /* 0075c137: jmp 0x75c210 */ goto L_0075c210;
L_0075c13c:; BB(0x0075c13c);
    /* 0075c13c: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c142: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c145: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c14b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c14f: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075c154: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c159u); f_0082b438();
    /* 0075c159: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c15f: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c162: fld dword ptr [0x974860] */ FPUSH(R_F32((u32)(0x974860u)));
    /* 0075c168: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c16e: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c174: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c17a: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c180: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c182: fst dword ptr [esp + 0x1f4] */ W_F32((u32)(r_esp+0x1f4u), ST(0));
    /* 0075c189: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c18b: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c18e: fst dword ptr [esp + 0x1f8] */ W_F32((u32)(r_esp+0x1f8u), ST(0));
    /* 0075c195: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c197: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c199: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c19b: fstp dword ptr [esp + 0x1fc] */ W_F32((u32)(r_esp+0x1fcu), ST(0)); FPOP();
    /* 0075c1a2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c1a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c1a6: fstp dword ptr [esp + 0x200] */ W_F32((u32)(r_esp+0x200u), ST(0)); FPOP();
    /* 0075c1ad: fld dword ptr [0x974708] */ FPUSH(R_F32((u32)(0x974708u)));
    /* 0075c1b3: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c1b5: lea eax, [esp + 0x1f4] */ r_eax = (u32)(r_esp+0x1f4u);
    /* 0075c1bc: fstp dword ptr [esp + 0x204] */ W_F32((u32)(r_esp+0x204u), ST(0)); FPOP();
    /* 0075c1c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c1c5: fld dword ptr [0x97470c] */ FPUSH(R_F32((u32)(0x97470cu)));
    /* 0075c1cb: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c1cd: fstp dword ptr [esp + 0x208] */ W_F32((u32)(r_esp+0x208u), ST(0)); FPOP();
    /* 0075c1d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c1d6: fadd dword ptr [0x974708] */ ST(0) = ST(0) + R_F32((u32)(0x974708u));
    /* 0075c1dc: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c1de: fstp dword ptr [esp + 0x20c] */ W_F32((u32)(r_esp+0x20cu), ST(0)); FPOP();
    /* 0075c1e5: fld dword ptr [0x97470c] */ FPUSH(R_F32((u32)(0x97470cu)));
    /* 0075c1eb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c1ed: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c1ef: fstp dword ptr [esp + 0x210] */ W_F32((u32)(r_esp+0x210u), ST(0)); FPOP();
    /* 0075c1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c1f7: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c1fcu); f_0071bbb4();
    /* 0075c1fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c1fd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c201: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c204: lea ecx, [esp + 0x1f8] */ r_ecx = (u32)(r_esp+0x1f8u);
    /* 0075c20b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c210u); f_0082b440();
L_0075c210:; BB(0x0075c210);
    /* 0075c210: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 0075c214: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075c216: je 0x75c3c9 */ if (fZ) goto L_0075c3c9;
L_0075c21c:; BB(0x0075c21c);
    /* 0075c21c: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c222: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c225: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c22b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c22f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075c234: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c239u); f_0082b438();
    /* 0075c239: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c23f: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c242: fld dword ptr [0x974858] */ FPUSH(R_F32((u32)(0x974858u)));
    /* 0075c248: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c24e: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c254: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c25a: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c260: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c262: fst dword ptr [esp + 0x274] */ W_F32((u32)(r_esp+0x274u), ST(0));
    /* 0075c269: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c26b: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c26e: fst dword ptr [esp + 0x278] */ W_F32((u32)(r_esp+0x278u), ST(0));
    /* 0075c275: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c277: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c279: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c27b: fstp dword ptr [esp + 0x27c] */ W_F32((u32)(r_esp+0x27cu), ST(0)); FPOP();
    /* 0075c282: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c284: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c286: fstp dword ptr [esp + 0x280] */ W_F32((u32)(r_esp+0x280u), ST(0)); FPOP();
    /* 0075c28d: fld dword ptr [0x974630] */ FPUSH(R_F32((u32)(0x974630u)));
    /* 0075c293: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c295: lea eax, [esp + 0x274] */ r_eax = (u32)(r_esp+0x274u);
    /* 0075c29c: fstp dword ptr [esp + 0x284] */ W_F32((u32)(r_esp+0x284u), ST(0)); FPOP();
    /* 0075c2a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c2a5: fld dword ptr [0x974634] */ FPUSH(R_F32((u32)(0x974634u)));
    /* 0075c2ab: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c2ad: fstp dword ptr [esp + 0x288] */ W_F32((u32)(r_esp+0x288u), ST(0)); FPOP();
    /* 0075c2b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c2b6: fadd dword ptr [0x974630] */ ST(0) = ST(0) + R_F32((u32)(0x974630u));
    /* 0075c2bc: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c2be: fstp dword ptr [esp + 0x28c] */ W_F32((u32)(r_esp+0x28cu), ST(0)); FPOP();
    /* 0075c2c5: fld dword ptr [0x974634] */ FPUSH(R_F32((u32)(0x974634u)));
    /* 0075c2cb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c2cd: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c2cf: fstp dword ptr [esp + 0x290] */ W_F32((u32)(r_esp+0x290u), ST(0)); FPOP();
    /* 0075c2d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c2d7: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c2dcu); f_0071bbb4();
    /* 0075c2dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c2dd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c2e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c2e4: lea ecx, [esp + 0x278] */ r_ecx = (u32)(r_esp+0x278u);
    /* 0075c2eb: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c2f0u); f_0082b440();
    /* 0075c2f0: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c2f6: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c2f9: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c2ff: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c303: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0075c308: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c30du); f_0082b438();
    /* 0075c30d: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c313: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c316: fld dword ptr [0x97484c] */ FPUSH(R_F32((u32)(0x97484cu)));
    /* 0075c31c: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c322: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c328: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c32e: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c334: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c336: fst dword ptr [esp + 0x294] */ W_F32((u32)(r_esp+0x294u), ST(0));
    /* 0075c33d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c33f: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c342: fst dword ptr [esp + 0x298] */ W_F32((u32)(r_esp+0x298u), ST(0));
    /* 0075c349: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c34b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c34d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c34f: fstp dword ptr [esp + 0x29c] */ W_F32((u32)(r_esp+0x29cu), ST(0)); FPOP();
    /* 0075c356: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c358: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c35a: fstp dword ptr [esp + 0x2a0] */ W_F32((u32)(r_esp+0x2a0u), ST(0)); FPOP();
    /* 0075c361: fld dword ptr [0x974600] */ FPUSH(R_F32((u32)(0x974600u)));
    /* 0075c367: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c369: lea eax, [esp + 0x294] */ r_eax = (u32)(r_esp+0x294u);
    /* 0075c370: fstp dword ptr [esp + 0x2a4] */ W_F32((u32)(r_esp+0x2a4u), ST(0)); FPOP();
    /* 0075c377: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c379: fld dword ptr [0x974604] */ FPUSH(R_F32((u32)(0x974604u)));
    /* 0075c37f: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c381: fstp dword ptr [esp + 0x2a8] */ W_F32((u32)(r_esp+0x2a8u), ST(0)); FPOP();
    /* 0075c388: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c38a: fadd dword ptr [0x974600] */ ST(0) = ST(0) + R_F32((u32)(0x974600u));
    /* 0075c390: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c392: fstp dword ptr [esp + 0x2ac] */ W_F32((u32)(r_esp+0x2acu), ST(0)); FPOP();
    /* 0075c399: fld dword ptr [0x974604] */ FPUSH(R_F32((u32)(0x974604u)));
    /* 0075c39f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c3a1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c3a3: fstp dword ptr [esp + 0x2b0] */ W_F32((u32)(r_esp+0x2b0u), ST(0)); FPOP();
    /* 0075c3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c3ab: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c3b0u); f_0071bbb4();
    /* 0075c3b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c3b1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c3b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c3b8: lea ecx, [esp + 0x298] */ r_ecx = (u32)(r_esp+0x298u);
    /* 0075c3bf: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c3c4u); f_0082b440();
    /* 0075c3c4: jmp 0x75c571 */ goto L_0075c571;
L_0075c3c9:; BB(0x0075c3c9);
    /* 0075c3c9: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c3cf: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c3d2: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c3d8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c3dc: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075c3e1: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c3e6u); f_0082b438();
    /* 0075c3e6: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c3ec: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c3ef: fld dword ptr [0x974858] */ FPUSH(R_F32((u32)(0x974858u)));
    /* 0075c3f5: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c3fb: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c401: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c407: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c40d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c40f: fst dword ptr [esp + 0x234] */ W_F32((u32)(r_esp+0x234u), ST(0));
    /* 0075c416: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c418: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c41b: fst dword ptr [esp + 0x238] */ W_F32((u32)(r_esp+0x238u), ST(0));
    /* 0075c422: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c424: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c426: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c428: fstp dword ptr [esp + 0x23c] */ W_F32((u32)(r_esp+0x23cu), ST(0)); FPOP();
    /* 0075c42f: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c431: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c433: fstp dword ptr [esp + 0x240] */ W_F32((u32)(r_esp+0x240u), ST(0)); FPOP();
    /* 0075c43a: fld dword ptr [0x9746a0] */ FPUSH(R_F32((u32)(0x9746a0u)));
    /* 0075c440: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c442: lea eax, [esp + 0x234] */ r_eax = (u32)(r_esp+0x234u);
    /* 0075c449: fstp dword ptr [esp + 0x244] */ W_F32((u32)(r_esp+0x244u), ST(0)); FPOP();
    /* 0075c450: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c452: fld dword ptr [0x9746a4] */ FPUSH(R_F32((u32)(0x9746a4u)));
    /* 0075c458: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c45a: fstp dword ptr [esp + 0x248] */ W_F32((u32)(r_esp+0x248u), ST(0)); FPOP();
    /* 0075c461: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c463: fadd dword ptr [0x9746a0] */ ST(0) = ST(0) + R_F32((u32)(0x9746a0u));
    /* 0075c469: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c46b: fstp dword ptr [esp + 0x24c] */ W_F32((u32)(r_esp+0x24cu), ST(0)); FPOP();
    /* 0075c472: fld dword ptr [0x9746a4] */ FPUSH(R_F32((u32)(0x9746a4u)));
    /* 0075c478: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c47a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c47c: fstp dword ptr [esp + 0x250] */ W_F32((u32)(r_esp+0x250u), ST(0)); FPOP();
    /* 0075c483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c484: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c489u); f_0071bbb4();
    /* 0075c489: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c48a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c48e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c491: lea ecx, [esp + 0x238] */ r_ecx = (u32)(r_esp+0x238u);
    /* 0075c498: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c49du); f_0082b440();
    /* 0075c49d: fld dword ptr [0x97488c] */ FPUSH(R_F32((u32)(0x97488cu)));
    /* 0075c4a3: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0075c4a6: fdivr dword ptr [0x974890] */ ST(0) = R_F32((u32)(0x974890u)) / ST(0);
    /* 0075c4ac: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075c4b0: mov ecx, 0xff808080 */ r_ecx = 0xff808080u;
    /* 0075c4b5: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x75c4bau); f_0082b438();
    /* 0075c4ba: fld dword ptr [0x974884] */ FPUSH(R_F32((u32)(0x974884u)));
    /* 0075c4c0: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0075c4c3: fld dword ptr [0x97484c] */ FPUSH(R_F32((u32)(0x97484cu)));
    /* 0075c4c9: fld dword ptr [0x97481c] */ FPUSH(R_F32((u32)(0x97481cu)));
    /* 0075c4cf: fld dword ptr [0x974880] */ FPUSH(R_F32((u32)(0x974880u)));
    /* 0075c4d5: fld dword ptr [0x974818] */ FPUSH(R_F32((u32)(0x974818u)));
    /* 0075c4db: fld dword ptr [0x974814] */ FPUSH(R_F32((u32)(0x974814u)));
    /* 0075c4e1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0075c4e3: fst dword ptr [esp + 0x254] */ W_F32((u32)(r_esp+0x254u), ST(0));
    /* 0075c4ea: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0075c4ec: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0075c4ef: fst dword ptr [esp + 0x258] */ W_F32((u32)(r_esp+0x258u), ST(0));
    /* 0075c4f6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c4f8: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0075c4fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075c4fc: fstp dword ptr [esp + 0x25c] */ W_F32((u32)(r_esp+0x25cu), ST(0)); FPOP();
    /* 0075c503: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0075c505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075c507: fstp dword ptr [esp + 0x260] */ W_F32((u32)(r_esp+0x260u), ST(0)); FPOP();
    /* 0075c50e: fld dword ptr [0x974670] */ FPUSH(R_F32((u32)(0x974670u)));
    /* 0075c514: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c516: lea eax, [esp + 0x254] */ r_eax = (u32)(r_esp+0x254u);
    /* 0075c51d: fstp dword ptr [esp + 0x264] */ W_F32((u32)(r_esp+0x264u), ST(0)); FPOP();
    /* 0075c524: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075c526: fld dword ptr [0x974674] */ FPUSH(R_F32((u32)(0x974674u)));
    /* 0075c52c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0075c52e: fstp dword ptr [esp + 0x268] */ W_F32((u32)(r_esp+0x268u), ST(0)); FPOP();
    /* 0075c535: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075c537: fadd dword ptr [0x974670] */ ST(0) = ST(0) + R_F32((u32)(0x974670u));
    /* 0075c53d: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0075c53f: fstp dword ptr [esp + 0x26c] */ W_F32((u32)(r_esp+0x26cu), ST(0)); FPOP();
    /* 0075c546: fld dword ptr [0x974674] */ FPUSH(R_F32((u32)(0x974674u)));
    /* 0075c54c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075c54e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0075c550: fstp dword ptr [esp + 0x270] */ W_F32((u32)(r_esp+0x270u), ST(0)); FPOP();
    /* 0075c557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075c558: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75c55du); f_0071bbb4();
    /* 0075c55d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075c55e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0075c562: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075c565: lea ecx, [esp + 0x258] */ r_ecx = (u32)(r_esp+0x258u);
    /* 0075c56c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75c571u); f_0082b440();
L_0075c571:; BB(0x0075c571);
    /* 0075c571: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75c576u); f_004ac444();
L_0075c576:; BB(0x0075c576);
    /* 0075c576: add esp, 0x2b4 */ {  u32 a = r_esp; u32 b = 0x2b4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075c57c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075c57d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075c57e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075c57f: ret 4 */ FN_RET(0x0075b428); r_esp += 8; return;
}

