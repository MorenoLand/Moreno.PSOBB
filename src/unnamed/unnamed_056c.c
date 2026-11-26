#include "protos.h"

void f_0056c22c(void) /* sub_56C22C */
{
    FN_ENTER(0x0056c22c);
    /* 0056c22c: mov edx, dword ptr [ecx + 0x31c] */ r_edx = R32((u32)(r_ecx+0x31cu));
    /* 0056c232: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056c235: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0056c23b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0056c23e: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 0056c244: ret  */ FN_RET(0x0056c22c); r_esp += 4; return;
}

void f_0056c248(void) /* sub_56C248 */
{
    FN_ENTER(0x0056c248);
    /* 0056c248: mov eax, dword ptr [0xa73db0] */ r_eax = R32((u32)(0xa73db0u));
    /* 0056c24d: ret  */ FN_RET(0x0056c248); r_esp += 4; return;
}

void f_0056c250(void) /* sub_56C250 */
{
    FN_ENTER(0x0056c250);
    /* 0056c250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c251: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056c253: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c255: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x56c25au); f_0068d5a8();
    /* 0056c25a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c25b: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056c25f: je 0x56c265 */ if (fZ) goto L_0056c265;
L_0056c261:; BB(0x0056c261);
    /* 0056c261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c262: ret 4 */ FN_RET(0x0056c250); r_esp += 8; return;
L_0056c265:; BB(0x0056c265);
    /* 0056c265: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 0056c26b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c26d: jle 0x56c273 */ if ((fZ||fS!=fO)) goto L_0056c273;
L_0056c26f:; BB(0x0056c26f);
    /* 0056c26f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c270: ret 4 */ FN_RET(0x0056c250); r_esp += 8; return;
L_0056c273:; BB(0x0056c273);
    /* 0056c273: mov dword ptr [ebx + 0x3fc], 0x1e */ W32((u32)(r_ebx+0x3fcu), 0x1eu);
    /* 0056c27d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c27f: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x56c284u); f_004d4288();
    /* 0056c284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c285: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c286: ret 4 */ FN_RET(0x0056c250); r_esp += 8; return;
}

void f_0056c28c(void) /* sub_56C28C */
{
    FN_ENTER(0x0056c28c);
    /* 0056c28c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c28d: mov esi, ecx */ r_esi = r_ecx;
    /* 0056c28f: mov ecx, esi */ r_ecx = r_esi;
    /* 0056c291: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x56c296u); f_00777d10();
    /* 0056c296: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c298: je 0x56c2a8 */ if (fZ) goto L_0056c2a8;
L_0056c29a:; BB(0x0056c29a);
    /* 0056c29a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056c29c: call 0x57fa30 */ r_esp -= 4; W32(r_esp, 0x56c2a1u); f_0057fa30();
    /* 0056c2a1: mov eax, 1 */ r_eax = 0x1u;
    /* 0056c2a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056c2a7: ret  */ FN_RET(0x0056c28c); r_esp += 4; return;
L_0056c2a8:; BB(0x0056c2a8);
    /* 0056c2a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c2aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056c2ab: ret  */ FN_RET(0x0056c28c); r_esp += 4; return;
}

void f_0056c2e0(void)
{
    FN_ENTER(0x0056c2e0);
    /* 0056c2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c2e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c2e5: push 0x8d6a9a */ { u32 v = 0x8d6a9au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c2ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c2f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056c2f8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c2fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056c2fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056c301: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056c304: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056c307: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x56c30cu); f_00482a20();
    /* 0056c30c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0056c30f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c311: jne 0x56c36a */ if (!fZ) goto L_0056c36a;
L_0056c313:; BB(0x0056c313);
    /* 0056c313: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056c31a: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c31f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56c324u); f_008581c5();
    /* 0056c324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c325: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056c328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c32a: je 0x56c4c3 */ if (fZ) goto L_0056c4c3;
L_0056c330:; BB(0x0056c330);
    /* 0056c330: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0056c337: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056c33e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056c341: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c346: push 0x9be6d0 */ { u32 v = 0x9be6d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c34b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c34d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x56c352u); f_005b7a84();
    /* 0056c352: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056c355: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056c35c: mov dword ptr [0xa73db0], eax */ W32((u32)(0xa73db0u), r_eax);
    /* 0056c361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c368: jmp 0x56c3bf */ goto L_0056c3bf;
L_0056c36a:; BB(0x0056c36a);
    /* 0056c36a: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0056c371: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c376: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56c37bu); f_008581c5();
    /* 0056c37b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c37c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056c37f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c381: je 0x56c4d1 */ if (fZ) goto L_0056c4d1;
L_0056c387:; BB(0x0056c387);
    /* 0056c387: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0056c38e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056c395: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056c398: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c39a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c39b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c39d: push 0x9be688 */ { u32 v = 0x9be688u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3a4: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x56c3a9u); f_005b7a84();
    /* 0056c3a9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056c3ac: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0056c3b3:; BB(0x0056c3b3);
    /* 0056c3b3: mov dword ptr [0xa73db0], eax */ W32((u32)(0xa73db0u), r_eax);
    /* 0056c3b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0056c3bf:; BB(0x0056c3bf);
    /* 0056c3bf: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3c1: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56c3c6u); f_0077a684();
    /* 0056c3c6: mov dword ptr [0xa73da8], eax */ W32((u32)(0xa73da8u), r_eax);
    /* 0056c3cb: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3cd: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56c3d2u); f_0077a698();
    /* 0056c3d2: mov dword ptr [0xa73da4], eax */ W32((u32)(0xa73da4u), r_eax);
    /* 0056c3d7: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3d9: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x56c3deu); f_0077a6b4();
    /* 0056c3de: mov dword ptr [0xa73da0], eax */ W32((u32)(0xa73da0u), r_eax);
    /* 0056c3e3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3e5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x56c3eau); f_0077a6cc();
    /* 0056c3ea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056c3f1: mov dword ptr [0xa73d9c], eax */ W32((u32)(0xa73d9cu), r_eax);
    /* 0056c3f6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56c3fdu); f_008581c5();
    /* 0056c3fd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c400: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056c403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c405: je 0x56c4ca */ if (fZ) goto L_0056c4ca;
L_0056c40b:; BB(0x0056c40b);
    /* 0056c40b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056c412: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056c419: mov eax, dword ptr [0xa73db0] */ r_eax = R32((u32)(0xa73db0u));
    /* 0056c41e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056c421: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056c427: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c42a: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x56c42fu); f_00511b74();
    /* 0056c42f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056c432: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0056c439:; BB(0x0056c439);
    /* 0056c439: mov dword ptr [0xa73dac], eax */ W32((u32)(0xa73dacu), r_eax);
    /* 0056c43e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c445: call 0x56d4ec */ r_esp -= 4; W32(r_esp, 0x56c44au); f_0056d4ec();
    /* 0056c44a: call 0x56c8a4 */ r_esp -= 4; W32(r_esp, 0x56c44fu); f_0056c8a4();
    /* 0056c44f: mov eax, dword ptr [0x926214] */ r_eax = R32((u32)(0x926214u));
    /* 0056c454: movzx edx, word ptr [0x926218] */ r_edx = (u32)R16((u32)(0x926218u));
    /* 0056c45b: movzx ecx, word ptr [0x92621a] */ r_ecx = (u32)R16((u32)(0x92621au));
    /* 0056c462: movzx ebx, word ptr [0x92621c] */ r_ebx = (u32)R16((u32)(0x92621cu));
    /* 0056c469: mov edi, dword ptr [0xa73db0] */ r_edi = R32((u32)(0xa73db0u));
    /* 0056c46f: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0056c475: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056c478: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0056c47c: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0056c482: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0056c486: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0056c48a: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0056c48d: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0056c490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c491: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c496: push dword ptr [0x9be56c] */ { u32 v = R32((u32)(0x9be56cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c49c: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c49f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c4a2: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4a4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56c4a9u); f_00608470();
    /* 0056c4a9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056c4ac: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056c4af: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056c4b2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056c4b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c4b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c4bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c4c2: ret  */ FN_RET(0x0056c2e0); r_esp += 4; return;
L_0056c4c3:; BB(0x0056c4c3);
    /* 0056c4c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c4c5: jmp 0x56c35c */ f_0056c35c(); return;
L_0056c4ca:; BB(0x0056c4ca);
    /* 0056c4ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c4cc: jmp 0x56c439 */ goto L_0056c439;
L_0056c4d1:; BB(0x0056c4d1);
    /* 0056c4d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c4d3: jmp 0x56c3b3 */ goto L_0056c3b3;
}

void f_0056c4d8(void) /* sub_56C4D8 */
{
    FN_ENTER(0x0056c4d8);
    /* 0056c4d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056c4db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056c4dd: call 0x56c4fc */ r_esp -= 4; W32(r_esp, 0x56c4e2u); f_0056c4fc();
    /* 0056c4e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056c4e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c4e8: jne 0x56c4ee */ if (!fZ) goto L_0056c4ee;
L_0056c4ea:; BB(0x0056c4ea);
    /* 0056c4ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c4eb: ret 4 */ FN_RET(0x0056c4d8); r_esp += 8; return;
L_0056c4ee:; BB(0x0056c4ee);
    /* 0056c4ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x56c4f4u); f_005c2f74();
    /* 0056c4f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c4f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c4f6: ret 4 */ FN_RET(0x0056c4d8); r_esp += 8; return;
}

void f_0056c4fc(void) /* sub_56C4FC */
{
    FN_ENTER(0x0056c4fc);
    /* 0056c4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c4ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c501: push 0x8d6ab4 */ { u32 v = 0x8d6ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c50d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056c514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056c51a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056c51d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056c520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056c523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056c526: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056c52d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c530: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 0056c536: mov dword ptr [eax], 0xb05bf8 */ W32((u32)(r_eax), 0xb05bf8u);
    /* 0056c53c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c53e: je 0x56c548 */ if (fZ) goto L_0056c548;
L_0056c540:; BB(0x0056c540);
    /* 0056c540: call 0x56bd90 */ r_esp -= 4; W32(r_esp, 0x56c545u); f_0056bd90();
    /* 0056c545: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0056c548:; BB(0x0056c548);
    /* 0056c548: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c54f: mov ecx, eax */ r_ecx = r_eax;
    /* 0056c551: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x56c556u); f_007a9f38();
    /* 0056c556: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c559: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c560: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c562: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c563: ret  */ FN_RET(0x0056c4fc); r_esp += 4; return;
}

void f_0056c564(void) /* sub_56C564 */
{
    FN_ENTER(0x0056c564);
    /* 0056c564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c565: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c569: push 0x8d6adc */ { u32 v = 0x8d6adcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c56e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056c57c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c57f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056c582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056c585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056c588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056c58b: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c590: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0056c597: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56c59cu); f_005caba4();
    /* 0056c59c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c59d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056c5a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c5a2: je 0x56c5d8 */ if (fZ) goto L_0056c5d8;
L_0056c5a4:; BB(0x0056c5a4);
    /* 0056c5a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0056c5ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056c5b2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c5b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c5bb: call 0x56c5dc */ r_esp -= 4; W32(r_esp, 0x56c5c0u); f_0056c5dc();
    /* 0056c5c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c5c3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056c5ca:; BB(0x0056c5ca);
    /* 0056c5ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c5cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c5d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c5d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c5d7: ret  */ FN_RET(0x0056c564); r_esp += 4; return;
L_0056c5d8:; BB(0x0056c5d8);
    /* 0056c5d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c5da: jmp 0x56c5ca */ goto L_0056c5ca;
}

void f_0056c5dc(void) /* sub_56C5DC */
{
    FN_ENTER(0x0056c5dc);
    /* 0056c5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c5df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5e1: push 0x8d6af8 */ { u32 v = 0x8d6af8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c5ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c5ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056c5f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c5f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056c5fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0056c5fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0056c600: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0056c603: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056c606: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c609: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0056c60c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056c60f: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x56c614u); f_007a9e5c();
    /* 0056c614: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056c61b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c61e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056c621: mov dword ptr [ebx], 0xb05bf8 */ W32((u32)(r_ebx), 0xb05bf8u);
    /* 0056c627: mov eax, dword ptr [0x9be700] */ r_eax = R32((u32)(0x9be700u));
    /* 0056c62c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0056c62f: mov dword ptr [ebx + 0xfc], ecx */ W32((u32)(r_ebx+0xfcu), r_ecx);
    /* 0056c635: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0056c639: mov word ptr [ebx + 0x100], dx */ W16((u32)(r_ebx+0x100u), (u16)r_edx);
    /* 0056c640: call 0x56bd34 */ r_esp -= 4; W32(r_esp, 0x56c645u); f_0056bd34();
    /* 0056c645: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c648: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c64b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c64d: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0056c650: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0056c653: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0056c656: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0056c659: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0056c65c: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056c662: call 0x57c7b4 */ r_esp -= 4; W32(r_esp, 0x56c667u); f_0057c7b4();
    /* 0056c667: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c66a: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 0056c670: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0056c673: call 0x56bd48 */ r_esp -= 4; W32(r_esp, 0x56c678u); f_0056bd48();
    /* 0056c678: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c67b: mov ecx, dword ptr [edx + 0xfc] */ r_ecx = R32((u32)(r_edx+0xfcu));
    /* 0056c681: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 0056c687: call 0x56bd7c */ r_esp -= 4; W32(r_esp, 0x56c68cu); f_0056bd7c();
    /* 0056c68c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c68f: mov eax, dword ptr [0xa73db8] */ r_eax = R32((u32)(0xa73db8u));
    /* 0056c694: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056c696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c697: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 0056c69d: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 0056c6a3: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0056c6a6: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 0056c6a9: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 0056c6af: mov ebx, dword ptr [edi + 0x2c] */ r_ebx = R32((u32)(r_edi+0x2cu));
    /* 0056c6b2: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 0056c6b5: mov dword ptr [ecx + 0xd8], 0x9be704 */ W32((u32)(r_ecx+0xd8u), 0x9be704u);
    /* 0056c6bf: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0056c6c5: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0056c6cb: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0056c6d2: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x56c6d7u); f_007aa4c8();
    /* 0056c6d7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056c6da: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c6dd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056c6e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056c6e3: movzx edx, word ptr [eax + 0xb8] */ r_edx = (u32)R16((u32)(r_eax+0xb8u));
    /* 0056c6ea: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 0056c6f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c6f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c6fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c6fe: ret 8 */ FN_RET(0x0056c5dc); r_esp += 12; return;
}

void f_0056c704(void) /* sub_56C704 */
{
    FN_ENTER(0x0056c704);
    /* 0056c704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c705: mov edi, ecx */ r_edi = r_ecx;
    /* 0056c707: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056c70d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c70f: je 0x56c7f2 */ if (fZ) goto L_0056c7f2;
L_0056c715:; BB(0x0056c715);
    /* 0056c715: call 0x56bd34 */ r_esp -= 4; W32(r_esp, 0x56c71au); f_0056bd34();
    /* 0056c71a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056c71c: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056c722: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0056c725: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056c728: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0056c72b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0056c72e: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0056c731: call 0x57c7b4 */ r_esp -= 4; W32(r_esp, 0x56c736u); f_0057c7b4();
    /* 0056c736: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0056c739: mov ecx, edi */ r_ecx = r_edi;
    /* 0056c73b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56c740u); f_007aa094();
    /* 0056c740: mov edx, dword ptr [edi + 0x108] */ r_edx = R32((u32)(r_edi+0x108u));
    /* 0056c746: mov eax, dword ptr [edi + 0x104] */ r_eax = R32((u32)(r_edi+0x104u));
    /* 0056c74c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056c74f: mov dword ptr [edi + 0x108], edx */ W32((u32)(r_edi+0x108u), r_edx);
    /* 0056c755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c757: jne 0x56c796 */ if (!fZ) goto L_0056c796;
L_0056c759:; BB(0x0056c759);
    /* 0056c759: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0056c75f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c761: je 0x56c7d9 */ if (fZ) goto L_0056c7d9;
L_0056c763:; BB(0x0056c763);
    /* 0056c763: mov eax, 1 */ r_eax = 0x1u;
    /* 0056c768: mov dword ptr [edi + 0x104], eax */ W32((u32)(r_edi+0x104u), r_eax);
    /* 0056c76e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0056c775: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56c77au); f_00807ac0();
    /* 0056c77a: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c77d: je 0x56c7db */ if (fZ) goto L_0056c7db;
L_0056c77f:; BB(0x0056c77f);
    /* 0056c77f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056c782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c786: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c787: push 0x253 */ { u32 v = 0x253u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c78c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56c791u); f_00814298();
    /* 0056c791: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056c794: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c795: ret  */ FN_RET(0x0056c704); r_esp += 4; return;
L_0056c796:; BB(0x0056c796);
    /* 0056c796: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c799: jne 0x56c7b4 */ if (!fZ) goto L_0056c7b4;
L_0056c79b:; BB(0x0056c79b);
    /* 0056c79b: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0056c7a1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c7a3: je 0x56c7d9 */ if (fZ) goto L_0056c7d9;
L_0056c7a5:; BB(0x0056c7a5);
    /* 0056c7a5: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056c7a9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c7ae: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056c7b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c7b3: ret  */ FN_RET(0x0056c704); r_esp += 4; return;
L_0056c7b4:; BB(0x0056c7b4);
    /* 0056c7b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c7b6: jle 0x56c7c7 */ if ((fZ||fS!=fO)) goto L_0056c7c7;
L_0056c7b8:; BB(0x0056c7b8);
    /* 0056c7b8: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056c7be: call 0x56bd50 */ r_esp -= 4; W32(r_esp, 0x56c7c3u); f_0056bd50();
    /* 0056c7c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c7c5: je 0x56c7d9 */ if (fZ) goto L_0056c7d9;
L_0056c7c7:; BB(0x0056c7c7);
    /* 0056c7c7: mov eax, 2 */ r_eax = 0x2u;
    /* 0056c7cc: mov dword ptr [edi + 0x104], eax */ W32((u32)(r_edi+0x104u), r_eax);
    /* 0056c7d2: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0056c7d9:; BB(0x0056c7d9);
    /* 0056c7d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c7da: ret  */ FN_RET(0x0056c704); r_esp += 4; return;
L_0056c7db:; BB(0x0056c7db);
    /* 0056c7db: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056c7de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7e3: push 0x2a1 */ { u32 v = 0x2a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c7e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56c7edu); f_00814298();
    /* 0056c7ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056c7f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c7f1: ret  */ FN_RET(0x0056c704); r_esp += 4; return;
L_0056c7f2:; BB(0x0056c7f2);
    /* 0056c7f2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056c7f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c7fb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056c7ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c800: ret  */ FN_RET(0x0056c704); r_esp += 4; return;
}

void f_0056c804(void) /* sub_56C804 */
{
    FN_ENTER(0x0056c804);
    /* 0056c804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c805: mov edi, ecx */ r_edi = r_ecx;
    /* 0056c807: mov eax, dword ptr [0xa73db8] */ r_eax = R32((u32)(0xa73db8u));
    /* 0056c80c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c80e: je 0x56c895 */ if (fZ) goto L_0056c895;
L_0056c814:; BB(0x0056c814);
    /* 0056c814: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56c819u); f_00807ac0();
    /* 0056c819: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c81c: je 0x56c879 */ if (fZ) goto L_0056c879;
L_0056c81e:; BB(0x0056c81e);
    /* 0056c81e: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c823: mov ecx, edi */ r_ecx = r_edi;
    /* 0056c825: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056c827: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c82c: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c831: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x56c834u); call_ind(t); }
    /* 0056c834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c836: jne 0x56c83a */ if (!fZ) goto L_0056c83a;
L_0056c838:; BB(0x0056c838);
    /* 0056c838: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c839: ret  */ FN_RET(0x0056c804); r_esp += 4; return;
L_0056c83a:; BB(0x0056c83a);
    /* 0056c83a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056c83c: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x56c841u); f_008173d0();
    /* 0056c841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c843: je 0x56c847 */ if (fZ) goto L_0056c847;
L_0056c845:; BB(0x0056c845);
    /* 0056c845: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c846: ret  */ FN_RET(0x0056c804); r_esp += 4; return;
L_0056c847:; BB(0x0056c847);
    /* 0056c847: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x56c84cu); f_0082d7b0();
    /* 0056c84c: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0056c84f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x56c854u); f_0082d838();
    /* 0056c854: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0056c857: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056c859: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56c85eu); f_0082d8bc();
    /* 0056c85e: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0056c861: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x56c866u); f_00829cc8();
    /* 0056c866: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x56c86bu); f_0082dab0();
    /* 0056c86b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056c86d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x56c872u); f_007aa668();
    /* 0056c872: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56c877u); f_0082da80();
    /* 0056c877: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c878: ret  */ FN_RET(0x0056c804); r_esp += 4; return;
L_0056c879:; BB(0x0056c879);
    /* 0056c879: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c87e: mov ecx, edi */ r_ecx = r_edi;
    /* 0056c880: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056c882: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c887: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c88c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x56c88fu); call_ind(t); }
    /* 0056c88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c891: jne 0x56c83a */ if (!fZ) goto L_0056c83a;
L_0056c893:; BB(0x0056c893);
    /* 0056c893: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c894: ret  */ FN_RET(0x0056c804); r_esp += 4; return;
L_0056c895:; BB(0x0056c895);
    /* 0056c895: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056c899: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c89e: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056c8a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c8a3: ret  */ FN_RET(0x0056c804); r_esp += 4; return;
}

void f_0056c8a4(void) /* sub_56C8A4 */
{
    FN_ENTER(0x0056c8a4);
    /* 0056c8a4: call 0x56c248 */ r_esp -= 4; W32(r_esp, 0x56c8a9u); f_0056c248();
    /* 0056c8a9: mov dword ptr [0xa73db8], eax */ W32((u32)(0xa73db8u), r_eax);
    /* 0056c8ae: ret  */ FN_RET(0x0056c8a4); r_esp += 4; return;
}

void f_0056c8b0(void) /* sub_56C8B0 */
{
    FN_ENTER(0x0056c8b0);
    /* 0056c8b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056c8b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056c8b5: call 0x56c8d4 */ r_esp -= 4; W32(r_esp, 0x56c8bau); f_0056c8d4();
    /* 0056c8ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056c8be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056c8c0: jne 0x56c8c6 */ if (!fZ) goto L_0056c8c6;
L_0056c8c2:; BB(0x0056c8c2);
    /* 0056c8c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c8c3: ret 4 */ FN_RET(0x0056c8b0); r_esp += 8; return;
L_0056c8c6:; BB(0x0056c8c6);
    /* 0056c8c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x56c8ccu); f_005c2f74();
    /* 0056c8cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056c8cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c8ce: ret 4 */ FN_RET(0x0056c8b0); r_esp += 8; return;
}

void f_0056c8d4(void) /* sub_56C8D4 */
{
    FN_ENTER(0x0056c8d4);
    /* 0056c8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0056c8d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8d9: push 0x8d6b14 */ { u32 v = 0x8d6b14u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056c8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c8e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056c8ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c8ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056c8f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056c8f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056c8f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056c8fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056c8fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c901: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 0056c907: mov dword ptr [ecx], 0xb05c78 */ W32((u32)(r_ecx), 0xb05c78u);
    /* 0056c90d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c90f: je 0x56c92b */ if (fZ) goto L_0056c92b;
L_0056c911:; BB(0x0056c911);
    /* 0056c911: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c914: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0056c918: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056c91d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0056c921: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
L_0056c92b:; BB(0x0056c92b);
    /* 0056c92b: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 0056c931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c933: je 0x56c94f */ if (fZ) goto L_0056c94f;
L_0056c935:; BB(0x0056c935);
    /* 0056c935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c938: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0056c93c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056c941: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0056c945: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
L_0056c94f:; BB(0x0056c94f);
    /* 0056c94f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c956: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x56c95bu); f_007b4aec();
    /* 0056c95b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c95e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c965: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c967: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c968: ret  */ FN_RET(0x0056c8d4); r_esp += 4; return;
}

void f_0056c96c(void) /* sub_56C96C */
{
    FN_ENTER(0x0056c96c);
    /* 0056c96c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c96d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056c96e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056c96f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c970: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056c973: mov edi, ecx */ r_edi = r_ecx;
    /* 0056c975: movzx eax, word ptr [edi + 0x10a] */ r_eax = (u32)R16((u32)(r_edi+0x10au));
    /* 0056c97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c97d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56c982u); f_007b4d18();
    /* 0056c982: mov esi, eax */ r_esi = r_eax;
    /* 0056c984: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c987: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c989: je 0x56cc8c */ if (fZ) goto L_0056cc8c;
L_0056c98f:; BB(0x0056c98f);
    /* 0056c98f: movzx edx, word ptr [edi + 0x108] */ r_edx = (u32)R16((u32)(r_edi+0x108u));
    /* 0056c996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056c997: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x56c99cu); f_00578c74();
    /* 0056c99c: mov ebp, eax */ r_ebp = r_eax;
    /* 0056c99e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c9a1: mov edx, dword ptr [edi + 0x100] */ r_edx = R32((u32)(r_edi+0x100u));
    /* 0056c9a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c9a9: jne 0x56c9e8 */ if (!fZ) goto L_0056c9e8;
L_0056c9ab:; BB(0x0056c9ab);
    /* 0056c9ab: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 0056c9b1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056c9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056c9b6: jle 0x56cbe7 */ if ((fZ||fS!=fO)) goto L_0056cbe7;
L_0056c9bc:; BB(0x0056c9bc);
    /* 0056c9bc: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 0056c9c2: mov dword ptr [edi + 0xec], eax */ W32((u32)(r_edi+0xecu), r_eax);
    /* 0056c9c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c9ca: je 0x56c9d1 */ if (fZ) goto L_0056c9d1;
L_0056c9cc:; BB(0x0056c9cc);
    /* 0056c9cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x56c9d1u); f_00508f48();
L_0056c9d1:; BB(0x0056c9d1);
    /* 0056c9d1: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056c9d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c9d9: je 0x56c9e0 */ if (fZ) goto L_0056c9e0;
L_0056c9db:; BB(0x0056c9db);
    /* 0056c9db: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x56c9e0u); f_00508f48();
L_0056c9e0:; BB(0x0056c9e0);
    /* 0056c9e0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056c9e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056c9e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c9e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056c9e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056c9e7: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056c9e8:; BB(0x0056c9e8);
    /* 0056c9e8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c9eb: jne 0x56cb50 */ if (!fZ) goto L_0056cb50;
L_0056c9f1:; BB(0x0056c9f1);
    /* 0056c9f1: mov edx, dword ptr [edi + 0xec] */ r_edx = R32((u32)(r_edi+0xecu));
    /* 0056c9f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056c9fa: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 0056ca00: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ca03: jge 0x56cbd2 */ if ((fS==fO)) goto L_0056cbd2;
L_0056ca09:; BB(0x0056ca09);
    /* 0056ca09: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ca0b: je 0x56ca90 */ if (fZ) goto L_0056ca90;
L_0056ca11:; BB(0x0056ca11);
    /* 0056ca11: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0056ca15: mov ebx, dword ptr [ebp + 0x300] */ r_ebx = R32((u32)(r_ebp+0x300u));
    /* 0056ca1b: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0056ca21: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0056ca25: lea ebx, [edi + 0xac] */ r_ebx = (u32)(r_edi+0xacu);
    /* 0056ca2b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056ca2f: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0056ca35: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0056ca39: mov edx, ebx */ r_edx = r_ebx;
    /* 0056ca3b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56ca40u); f_0082f9c4();
    /* 0056ca40: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0056ca44: push dword ptr [edi + 0xf4] */ { u32 v = R32((u32)(r_edi+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056ca4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ca4b: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x56ca50u); f_0078ea90();
    /* 0056ca50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ca52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ca55: fld dword ptr [0xa73d8c] */ FPUSH(R_F32((u32)(0xa73d8cu)));
    /* 0056ca5b: fadd dword ptr [edi + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xf4u));
    /* 0056ca61: fstp dword ptr [edi + 0xf4] */ W_F32((u32)(r_edi+0xf4u), ST(0)); FPOP();
    /* 0056ca67: lea ecx, [edi + 0xc4] */ r_ecx = (u32)(r_edi+0xc4u);
    /* 0056ca6d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0056ca70: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0056ca74: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x56ca79u); f_0082ebac();
    /* 0056ca79: push dword ptr [0xa73d94] */ { u32 v = R32((u32)(0xa73d94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056ca7f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0056ca83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ca84: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x56ca89u); f_0078ea90();
    /* 0056ca89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ca8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ca8e: jmp 0x56ca9f */ goto L_0056ca9f;
L_0056ca90:; BB(0x0056ca90);
    /* 0056ca90: lea ebx, [edi + 0xac] */ r_ebx = (u32)(r_edi+0xacu);
    /* 0056ca96: lea eax, [edi + 0xc4] */ r_eax = (u32)(r_edi+0xc4u);
    /* 0056ca9c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_0056ca9f:; BB(0x0056ca9f);
    /* 0056ca9f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0056caa2: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0056caa8: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 0056caae: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0056cab4: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0056caba: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0056cac0: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0056cac6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056cac8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x56cacdu); f_0082ebac();
    /* 0056cacd: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 0056cad3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cad5: je 0x56cadd */ if (fZ) goto L_0056cadd;
L_0056cad7:; BB(0x0056cad7);
    /* 0056cad7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cad8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x56caddu); f_00508db8();
L_0056cadd:; BB(0x0056cadd);
    /* 0056cadd: mov ecx, dword ptr [edi + 0xfc] */ r_ecx = R32((u32)(r_edi+0xfcu));
    /* 0056cae3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cae5: je 0x56caed */ if (fZ) goto L_0056caed;
L_0056cae7:; BB(0x0056cae7);
    /* 0056cae7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cae8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x56caedu); f_00508db8();
L_0056caed:; BB(0x0056caed);
    /* 0056caed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056caef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056caf0: lea eax, [edi + 0xb8] */ r_eax = (u32)(r_edi+0xb8u);
    /* 0056caf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056caf7: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x56cafcu); f_0077fffc();
    /* 0056cafc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056caff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb01: je 0x56cb18 */ if (fZ) goto L_0056cb18;
L_0056cb03:; BB(0x0056cb03);
    /* 0056cb03: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056cb07: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056cb0c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056cb10: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cb13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cb14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cb15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cb16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cb17: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cb18:; BB(0x0056cb18);
    /* 0056cb18: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb1a: je 0x56cb50 */ if (fZ) goto L_0056cb50;
L_0056cb1c:; BB(0x0056cb1c);
    /* 0056cb1c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0056cb1f: test eax, 0x4000a00 */ {  u32 a = r_eax; u32 b = 0x4000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb24: je 0x56cb2e */ if (fZ) goto L_0056cb2e;
L_0056cb26:; BB(0x0056cb26);
    /* 0056cb26: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cb29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cb2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cb2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cb2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cb2d: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cb2e:; BB(0x0056cb2e);
    /* 0056cb2e: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0056cb34: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056cb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb39: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x56cb3eu); f_0078ea2c();
    /* 0056cb3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cb41: fld dword ptr [0xa73d94] */ FPUSH(R_F32((u32)(0xa73d94u)));
    /* 0056cb47: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056cb49: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0056cb4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056cb4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056cb4e: jae 0x56cb58 */ if (!fC) goto L_0056cb58;
L_0056cb50:; BB(0x0056cb50);
    /* 0056cb50: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cb53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cb54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cb55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cb56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cb57: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cb58:; BB(0x0056cb58);
    /* 0056cb58: fild dword ptr [0xa73d84] */ FPUSH((long double)(i32)R32((u32)(0xa73d84u)));
    /* 0056cb5e: mov ebx, dword ptr [0x926500] */ r_ebx = R32((u32)(0x926500u));
    /* 0056cb64: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056cb67: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0056cb6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056cb6d: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0056cb71: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0056cb76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb7a: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056cb7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb80: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x56cb83u); call_ind(t); }
    /* 0056cb83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056cb85: mov edx, dword ptr [edi + 0x104] */ r_edx = R32((u32)(r_edi+0x104u));
    /* 0056cb8b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cb8e: je 0x56cc45 */ if (fZ) goto L_0056cc45;
L_0056cb94:; BB(0x0056cb94);
    /* 0056cb94: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb99: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0056cb9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cb9e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56cba3u); f_0050b510();
    /* 0056cba3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cba6: movzx edx, word ptr [edi + 0x108] */ r_edx = (u32)R16((u32)(r_edi+0x108u));
    /* 0056cbad: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cbb3: jne 0x56cbbd */ if (!fZ) goto L_0056cbbd;
L_0056cbb5:; BB(0x0056cbb5);
    /* 0056cbb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056cbb6: mov ecx, esi */ r_ecx = r_esi;
    /* 0056cbb8: call 0x56c250 */ r_esp -= 4; W32(r_esp, 0x56cbbdu); f_0056c250();
L_0056cbbd:; BB(0x0056cbbd);
    /* 0056cbbd: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056cbc1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056cbc6: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056cbca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cbcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cbce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cbcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cbd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cbd1: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cbd2:; BB(0x0056cbd2);
    /* 0056cbd2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056cbd6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056cbdb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056cbdf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cbe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cbe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cbe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cbe5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cbe6: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cbe7:; BB(0x0056cbe7);
    /* 0056cbe7: mov ebx, dword ptr [edi + 0xf0] */ r_ebx = R32((u32)(r_edi+0xf0u));
    /* 0056cbed: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 0056cbf7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056cbf9: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 0056cbff: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0056cc02: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 0056cc08: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0056cc0b: mov dword ptr [edi + 0xb4], ebp */ W32((u32)(r_edi+0xb4u), r_ebp);
    /* 0056cc11: mov dword ptr [edi + 0x100], 1 */ W32((u32)(r_edi+0x100u), 0x1u);
    /* 0056cc1b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56cc20u); f_00807ac0();
    /* 0056cc20: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cc23: je 0x56cc6c */ if (fZ) goto L_0056cc6c;
L_0056cc25:; BB(0x0056cc25);
    /* 0056cc25: add edi, 0xac */ {  u32 a = r_edi; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056cc2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056cc2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc30: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56cc3au); f_00814298();
    /* 0056cc3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cc3d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cc40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cc41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cc42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cc43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cc44: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cc45:; BB(0x0056cc45);
    /* 0056cc45: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0056cc48: mov dword ptr [esp + 0x10], 0x12 */ W32((u32)(r_esp+0x10u), 0x12u);
    /* 0056cc50: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0056cc55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056cc57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc5b: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056cc5f: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc62: call dword ptr [ebx + 0x60] */ { u32 t = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, 0x56cc65u); call_ind(t); }
    /* 0056cc65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056cc67: jmp 0x56cb94 */ goto L_0056cb94;
L_0056cc6c:; BB(0x0056cc6c);
    /* 0056cc6c: add edi, 0xac */ {  u32 a = r_edi; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056cc72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056cc74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc77: push 0x29e */ { u32 v = 0x29eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cc7c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56cc81u); f_00814298();
    /* 0056cc81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cc84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cc87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cc88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cc89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cc8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cc8b: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
L_0056cc8c:; BB(0x0056cc8c);
    /* 0056cc8c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056cc90: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056cc95: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056cc99: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056cc9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cc9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cc9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056cc9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056cca0: ret  */ FN_RET(0x0056c96c); r_esp += 4; return;
}

void f_0056cca4(void) /* sub_56CCA4 */
{
    FN_ENTER(0x0056cca4);
    /* 0056cca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cca5: mov ebx, esp */ r_ebx = r_esp;
    /* 0056cca7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0056ccaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccac: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0056ccaf: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0056ccb3: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ccb5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccb7: push 0x8d6b32 */ { u32 v = 0x8d6b32u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccbc: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056ccc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ccc3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056ccca: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056cccd: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056ccd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056ccd3: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0056ccd6: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0056ccd9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0056ccdc: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056cce2: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 0056cce6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056cce9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0056ccec: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0056ccef: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0056ccf2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056ccf5: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0056ccf8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056ccfb: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0056ccfe: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0056cd01: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0056cd05: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0056cd08: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x56cd0du); f_007b4b48();
    /* 0056cd0d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056cd14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056cd17: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056cd1a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0056cd1d: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056cd20: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0056cd23: mov dword ptr [ecx], 0xb05c78 */ W32((u32)(r_ecx), 0xb05c78u);
    /* 0056cd29: mov word ptr [ecx + 0x108], ax */ W16((u32)(r_ecx+0x108u), (u16)r_eax);
    /* 0056cd30: mov word ptr [ecx + 0x10a], dx */ W16((u32)(r_ecx+0x10au), (u16)r_edx);
    /* 0056cd37: mov dword ptr [ecx + 0x104], esi */ W32((u32)(r_ecx+0x104u), r_esi);
    /* 0056cd3d: mov dword ptr [ecx + 0xe8], 0 */ W32((u32)(r_ecx+0xe8u), 0x0u);
    /* 0056cd47: mov dword ptr [ecx + 0xf0], edi */ W32((u32)(r_ecx+0xf0u), r_edi);
    /* 0056cd4d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056cd52: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56cd57u); f_0082d990();
    /* 0056cd57: mov eax, dword ptr [0xa73d94] */ r_eax = R32((u32)(0xa73d94u));
    /* 0056cd5c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056cd5f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056cd66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056cd68: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056cd6f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056cd72: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0056cd75: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56cd7au); f_0082d8bc();
    /* 0056cd7a: mov eax, esi */ r_eax = r_esi;
    /* 0056cd7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056cd7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056cd80: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x56cd85u); f_0082e9e4();
    /* 0056cd85: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056cd88: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 0056cd8b: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056cd90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cd91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056cd93: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x56cd98u); f_00830aa0();
    /* 0056cd98: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56cd9du); f_0082da80();
    /* 0056cd9d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056cda0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056cda3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056cda6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cda7: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 0056cdad: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56cdb2u); f_007b4d18();
    /* 0056cdb2: mov edi, eax */ r_edi = r_eax;
    /* 0056cdb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056cdb7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056cdba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0056cdc1: fld dword ptr [edi + 0x300] */ FPUSH(R_F32((u32)(r_edi+0x300u)));
    /* 0056cdc7: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0056cdc9: fld dword ptr [edi + 0x308] */ FPUSH(R_F32((u32)(r_edi+0x308u)));
    /* 0056cdcf: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0056cdd2: lea esi, [edi + 0x300] */ r_esi = (u32)(r_edi+0x300u);
    /* 0056cdd8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056cdda: fmul qword ptr [0x926520] */ ST(0) = ST(0) * R_F64((u32)(0x926520u));
    /* 0056cde0: fdiv qword ptr [0x926518] */ ST(0) = ST(0) / R_F64((u32)(0x926518u));
    /* 0056cde6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056cde9: fnstcw word ptr [ebp - 0x68] */ W16((u32)(r_ebp+0xffffff98u), fcw);
    /* 0056cdec: movzx eax, word ptr [ebp - 0x68] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff98u));
    /* 0056cdf0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056cdf5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0056cdf8: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0056cdfb: fistp dword ptr [ebp - 0x58] */ W32((u32)(r_ebp+0xffffffa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056cdfe: fldcw word ptr [ebp - 0x68] */ fcw = R16((u32)(r_ebp+0xffffff98u));
    /* 0056ce01: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0056ce04: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056ce0a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0056ce0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce0f: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x56ce14u); f_0078ea6c();
    /* 0056ce14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ce17: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056ce1a: fld dword ptr [edi + 0x304] */ FPUSH(R_F32((u32)(r_edi+0x304u)));
    /* 0056ce20: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0056ce23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056ce25: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056ce27: fmul qword ptr [0x926520] */ ST(0) = ST(0) * R_F64((u32)(0x926520u));
    /* 0056ce2d: fdiv qword ptr [0x926518] */ ST(0) = ST(0) / R_F64((u32)(0x926518u));
    /* 0056ce33: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056ce36: fnstcw word ptr [ebp - 0x68] */ W16((u32)(r_ebp+0xffffff98u), fcw);
    /* 0056ce39: movzx eax, word ptr [ebp - 0x68] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff98u));
    /* 0056ce3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056ce42: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0056ce45: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0056ce48: fistp dword ptr [ebp - 0x58] */ W32((u32)(r_ebp+0xffffffa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056ce4b: fldcw word ptr [ebp - 0x68] */ fcw = R16((u32)(r_ebp+0xffffff98u));
    /* 0056ce4e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0056ce51: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056ce53: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ce58: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056ce5b: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0056ce5e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce60: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce67: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x56ce6cu); f_00509dc4();
    /* 0056ce6c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ce6f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056ce72: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce74: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 0056ce7a: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0056ce7d: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce84: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x56ce89u); f_00509dc4();
    /* 0056ce89: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ce8c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056ce8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce90: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
    /* 0056ce96: mov eax, dword ptr [0xa73d90] */ r_eax = R32((u32)(0xa73d90u));
    /* 0056ce9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056ce9c: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 0056cea2: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x56cea7u); f_0078ea50();
    /* 0056cea7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0056ceaa: fcomp dword ptr [0x92653c] */ fx_compare(ST(0), R_F32((u32)(0x92653cu))); FPOP();
    /* 0056ceb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ceb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ceb3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ceb6: jae 0x56ceca */ if (!fC) goto L_0056ceca;
L_0056ceb8:; BB(0x0056ceb8);
    /* 0056ceb8: fld dword ptr [edx + 0xf4] */ FPUSH(R_F32((u32)(r_edx+0xf4u)));
    /* 0056cebe: fmul dword ptr [0x926538] */ ST(0) = ST(0) * R_F32((u32)(0x926538u));
    /* 0056cec4: fstp dword ptr [edx + 0xf4] */ W_F32((u32)(r_edx+0xf4u), ST(0)); FPOP();
L_0056ceca:; BB(0x0056ceca);
    /* 0056ceca: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0056cecd: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0056ced0: mov dword ptr [edx + 0x100], 0 */ W32((u32)(r_edx+0x100u), 0x0u);
    /* 0056ceda: mov eax, edx */ r_eax = r_edx;
    /* 0056cedc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056cedf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056cee6: mov esp, ebp */ r_esp = r_ebp;
    /* 0056cee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cee9: mov esp, ebx */ r_esp = r_ebx;
    /* 0056ceeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056ceec: ret 0x18 */ FN_RET(0x0056cca4); r_esp += 28; return;
}

void f_0056cf1c(void) /* sub_56CF1C */
{
    FN_ENTER(0x0056cf1c);
    /* 0056cf1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056cf1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056cf21: call 0x56cf40 */ r_esp -= 4; W32(r_esp, 0x56cf26u); f_0056cf40();
    /* 0056cf26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056cf2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056cf2c: jne 0x56cf32 */ if (!fZ) goto L_0056cf32;
L_0056cf2e:; BB(0x0056cf2e);
    /* 0056cf2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cf2f: ret 4 */ FN_RET(0x0056cf1c); r_esp += 8; return;
L_0056cf32:; BB(0x0056cf32);
    /* 0056cf32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x56cf38u); f_005c2f74();
    /* 0056cf38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056cf39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056cf3a: ret 4 */ FN_RET(0x0056cf1c); r_esp += 8; return;
}

void f_0056cf40(void) /* sub_56CF40 */
{
    FN_ENTER(0x0056cf40);
    /* 0056cf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf41: mov ebp, esp */ r_ebp = r_esp;
    /* 0056cf43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf45: push 0x8d6b4c */ { u32 v = 0x8d6b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056cf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056cf58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056cf5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056cf5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056cf61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056cf64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056cf67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056cf6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056cf6d: mov dword ptr [ecx], 0xb05d70 */ W32((u32)(r_ecx), 0xb05d70u);
    /* 0056cf73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056cf7a: call 0x7aca8c */ r_esp -= 4; W32(r_esp, 0x56cf7fu); f_007aca8c();
    /* 0056cf7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056cf82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056cf89: mov esp, ebp */ r_esp = r_ebp;
    /* 0056cf8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056cf8c: ret  */ FN_RET(0x0056cf40); r_esp += 4; return;
}

void f_0056cf90(void) /* sub_56CF90 */
{
    FN_ENTER(0x0056cf90);
    /* 0056cf90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf91: mov ebp, esp */ r_ebp = r_esp;
    /* 0056cf93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf95: push 0x8d6b74 */ { u32 v = 0x8d6b74u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cf9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056cfa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056cfa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056cfa8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056cfab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056cfae: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0056cfb1: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0056cfb4: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0056cfb7: lea eax, [ecx + 0x6c] */ r_eax = (u32)(r_ecx+0x6cu);
    /* 0056cfba: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056cfc1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056cfc4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056cfc7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cfc9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56cfceu); f_005caba4();
    /* 0056cfce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056cfcf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056cfd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056cfd4: je 0x56d003 */ if (fZ) goto L_0056d003;
L_0056cfd6:; BB(0x0056cfd6);
    /* 0056cfd6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0056cfdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056cfe4: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056cfea: mov ecx, eax */ r_ecx = r_eax;
    /* 0056cfec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056cfef: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056cff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056cff7: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x56cffcu); f_006ee0d0();
    /* 0056cffc: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0056d003:; BB(0x0056d003);
    /* 0056d003: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d00a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0056d00c:; BB(0x0056d00c);
    /* 0056d00c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d00d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x56d012u); f_0068d5a8();
    /* 0056d012: mov ebx, eax */ r_ebx = r_eax;
    /* 0056d014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d017: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d019: je 0x56d0b1 */ if (fZ) goto L_0056d0b1;
L_0056d01f:; BB(0x0056d01f);
    /* 0056d01f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056d022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d023: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0056d026: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d027: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x56d02cu); f_007a9180();
    /* 0056d02c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d02f: fcomp dword ptr [0xa73dd4] */ fx_compare(ST(0), R_F32((u32)(0xa73dd4u))); FPOP();
    /* 0056d035: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056d037: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056d038: ja 0x56d0b1 */ if ((!fC&&!fZ)) goto L_0056d0b1;
L_0056d03a:; BB(0x0056d03a);
    /* 0056d03a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d03d: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0056d043: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0056d045: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0056d048: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0056d04a: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0056d04d: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0056d050: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056d053: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0056d058: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d059: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d05a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0056d05d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d05e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056d061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d062: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d064: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056d069: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x56d06cu); call_ind(t); }
    /* 0056d06c: fcomp dword ptr [0x926574] */ fx_compare(ST(0), R_F32((u32)(0x926574u))); FPOP();
    /* 0056d072: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056d074: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056d075: jbe 0x56d083 */ if ((fC||fZ)) goto L_0056d083;
L_0056d077:; BB(0x0056d077);
    /* 0056d077: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0056d07a: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056d080: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_0056d083:; BB(0x0056d083);
    /* 0056d083: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d087: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d088: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d08d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d092u); f_00814298();
    /* 0056d092: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d095: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56d09au); f_00807ac0();
    /* 0056d09a: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d09d: je 0x56d0e4 */ if (fZ) goto L_0056d0e4;
L_0056d09f:; BB(0x0056d09f);
    /* 0056d09f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d0a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0a4: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d0aeu); f_00814298();
    /* 0056d0ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056d0b1:; BB(0x0056d0b1);
    /* 0056d0b1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056d0b4: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d0b7: jl 0x56d00c */ if ((fS!=fO)) goto L_0056d00c;
L_0056d0bd:; BB(0x0056d0bd);
    /* 0056d0bd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d0c0: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056d0c3: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056d0c6: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056d0c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0056d0cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d0d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0056d0d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d0d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d0e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d0e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d0e3: ret  */ FN_RET(0x0056cf90); r_esp += 4; return;
L_0056d0e4:; BB(0x0056d0e4);
    /* 0056d0e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d0e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0e9: push 0x29d */ { u32 v = 0x29du; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0ee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d0f3u); f_00814298();
    /* 0056d0f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d0f6: jmp 0x56d0b1 */ goto L_0056d0b1;
}

