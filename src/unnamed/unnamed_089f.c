#include "protos.h"

void f_0089f22c(void) /* sub_89F22C */
{
    FN_ENTER(0x0089f22c);
    /* 0089f22c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f22d: lea ebp, [esp - 0x70] */ r_ebp = (u32)(r_esp+0xffffff90u);
    /* 0089f231: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f237: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f239: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089f23b: cmp dword ptr [ebp + 0x78], esi */ {  u32 a = R32((u32)(r_ebp+0x78u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f23e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f23f: mov edi, ecx */ r_edi = r_ecx;
    /* 0089f241: jne 0x89f24d */ if (!fZ) goto L_0089f24d;
L_0089f243:; BB(0x0089f243);
    /* 0089f243: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 0089f248: jmp 0x89f32f */ goto L_0089f32f;
L_0089f24d:; BB(0x0089f24d);
    /* 0089f24d: cmp dword ptr [ebp + 0x7c], esi */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f250: je 0x89f2c7 */ if (fZ) goto L_0089f2c7;
L_0089f252:; BB(0x0089f252);
    /* 0089f252: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0089f255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f256: mov dword ptr [ebp - 0x28], 0x94 */ W32((u32)(r_ebp+0xffffffd8u), 0x94u);
    /* 0089f25d: call dword ptr [0x8f820c] */ { u32 t = R32((u32)(0x8f820cu)); r_esp -= 4; W32(r_esp, 0x89f263u); call_ind(t); }
    /* 0089f263: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f267: je 0x89f2a7 */ if (fZ) goto L_0089f2a7;
L_0089f269:; BB(0x0089f269);
    /* 0089f269: mov ebx, dword ptr [0x8f81d8] */ r_ebx = R32((u32)(0x8f81d8u));
    /* 0089f26f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f270: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f272: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f275: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f27a: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x89f27cu); call_ind(t); }
    /* 0089f27c: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 0089f27f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089f282: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089f285: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x89f28au); f_00858020();
    /* 0089f28a: mov dword ptr [ebp + 0x7c], esp */ W32((u32)(r_ebp+0x7cu), r_esp);
    /* 0089f28d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f28e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f28f: push dword ptr [ebp + 0x6c] */ { u32 v = R32((u32)(r_ebp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f292: push dword ptr [ebp + 0x7c] */ { u32 v = R32((u32)(r_ebp+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f295: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f297: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f29a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f29b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f29c: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x89f29eu); call_ind(t); }
    /* 0089f29e: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 0089f2a1: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 0089f2a4: mov dword ptr [ebp + 0x7c], esi */ W32((u32)(r_ebp+0x7cu), r_esi);
L_0089f2a7:; BB(0x0089f2a7);
    /* 0089f2a7: cmp dword ptr [ebp + 0x7c], esi */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f2aa: je 0x89f2c7 */ if (fZ) goto L_0089f2c7;
L_0089f2ac:; BB(0x0089f2ac);
    /* 0089f2ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ad: push 0x10000000 */ { u32 v = 0x10000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2b2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2b7: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2bc: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f2bf: call dword ptr [0x8f82d0] */ { u32 t = R32((u32)(0x8f82d0u)); r_esp -= 4; W32(r_esp, 0x89f2c5u); call_ind(t); }
    /* 0089f2c5: jmp 0x89f2e0 */ goto L_0089f2e0;
L_0089f2c7:; BB(0x0089f2c7);
    /* 0089f2c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2c8: push 0x10000000 */ { u32 v = 0x10000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2cd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2d2: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2d7: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f2da: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x89f2e0u); call_ind(t); }
L_0089f2e0:; BB(0x0089f2e0);
    /* 0089f2e0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f2e3: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0089f2e5: je 0x89f320 */ if (fZ) goto L_0089f320;
L_0089f2e7:; BB(0x0089f2e7);
    /* 0089f2e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ee: call dword ptr [0x8f82f0] */ { u32 t = R32((u32)(0x8f82f0u)); r_esp -= 4; W32(r_esp, 0x89f2f4u); call_ind(t); }
    /* 0089f2f4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f2f7: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0089f2fa: je 0x89f320 */ if (fZ) goto L_0089f320;
L_0089f2fc:; BB(0x0089f2fc);
    /* 0089f2fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f2ff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f302: call dword ptr [0x8f82ec] */ { u32 t = R32((u32)(0x8f82ecu)); r_esp -= 4; W32(r_esp, 0x89f308u); call_ind(t); }
    /* 0089f308: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f30a: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0089f30d: je 0x89f320 */ if (fZ) goto L_0089f320;
L_0089f30f:; BB(0x0089f30f);
    /* 0089f30f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f310: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f312: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x89f318u); call_ind(t); }
    /* 0089f318: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f31b: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0089f31e: jne 0x89f32d */ if (!fZ) goto L_0089f32d;
L_0089f320:; BB(0x0089f320);
    /* 0089f320: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x89f326u); call_ind(t); }
    /* 0089f326: mov eax, 0x88760b59 */ r_eax = 0x88760b59u;
    /* 0089f32b: jmp 0x89f32f */ goto L_0089f32f;
L_0089f32d:; BB(0x0089f32d);
    /* 0089f32d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089f32f:; BB(0x0089f32f);
    /* 0089f32f: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 0089f332: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f333: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f335: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089f338: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f339: ret 8 */ FN_RET(0x0089f22c); r_esp += 12; return;
}

void f_0089f330(void)
{
    FN_ENTER(0x0089f330);
    /* 0089f330: int3  */ UNSUP(0x0089f330, "int3");
}

void f_0089f37d(void) /* sub_89F37D */
{
    FN_ENTER(0x0089f37d);
    goto L_0089f37d;
L_0089f33c:; BB(0x0089f33c);
    /* 0089f33c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f33d: mov esi, ecx */ r_esi = r_ecx;
    /* 0089f33f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0089f342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f344: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f345: je 0x89f356 */ if (fZ) goto L_0089f356;
L_0089f347:; BB(0x0089f347);
    /* 0089f347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f348: call dword ptr [0x8f82f4] */ { u32 t = R32((u32)(0x8f82f4u)); r_esp -= 4; W32(r_esp, 0x89f34eu); call_ind(t); }
    /* 0089f34e: and dword ptr [esi + 8], 0 */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f352: and dword ptr [esi + 0xc], 0 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089f356:; BB(0x0089f356);
    /* 0089f356: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089f359: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f35c: mov edi, dword ptr [0x8f8140] */ r_edi = R32((u32)(0x8f8140u));
    /* 0089f362: je 0x89f36b */ if (fZ) goto L_0089f36b;
L_0089f364:; BB(0x0089f364);
    /* 0089f364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f365: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x89f367u); call_ind(t); }
    /* 0089f367: or dword ptr [esi + 4], 0xffffffff */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0089f36b:; BB(0x0089f36b);
    /* 0089f36b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089f36d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f370: je 0x89f378 */ if (fZ) goto L_0089f378;
L_0089f372:; BB(0x0089f372);
    /* 0089f372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f373: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x89f375u); call_ind(t); }
    /* 0089f375: or dword ptr [esi], 0xffffffff */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0089f378:; BB(0x0089f378);
    /* 0089f378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f379: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f37b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f37c: ret  */ FN_RET(0x0089f37d); r_esp += 4; return;
L_0089f37d:; BB(0x0089f37d);
    /* 0089f37d: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f380: je 0x89f387 */ if (fZ) goto L_0089f387;
L_0089f382:; BB(0x0089f382);
    /* 0089f382: jmp 0x89f33c */ goto L_0089f33c;
L_0089f387:; BB(0x0089f387);
    /* 0089f387: ret  */ FN_RET(0x0089f37d); r_esp += 4; return;
}

void f_0089f388(void) /* sub_89F388 */
{
    FN_ENTER(0x0089f388);
    /* 0089f388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f389: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f38b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f38c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f38d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f391: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0089f394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f395: push 0x99bd88 */ { u32 v = 0x99bd88u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f39a: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f39f: call dword ptr [0x8f8014] */ { u32 t = R32((u32)(0x8f8014u)); r_esp -= 4; W32(r_esp, 0x89f3a5u); call_ind(t); }
    /* 0089f3a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f3a7: jne 0x89f3e0 */ if (!fZ) goto L_0089f3e0;
L_0089f3a9:; BB(0x0089f3a9);
    /* 0089f3a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3aa: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 0089f3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3ae: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f3b1: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0089f3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3b7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f3ba: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f3bd: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x89f3c3u); call_ind(t); }
    /* 0089f3c3: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f3c6: mov esi, eax */ r_esi = r_eax;
    /* 0089f3c8: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x89f3ceu); call_ind(t); }
    /* 0089f3ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f3d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f3d1: jne 0x89f3e0 */ if (!fZ) goto L_0089f3e0;
L_0089f3d3:; BB(0x0089f3d3);
    /* 0089f3d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089f3d6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f3d9: jne 0x89f3e0 */ if (!fZ) goto L_0089f3e0;
L_0089f3db:; BB(0x0089f3db);
    /* 0089f3db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0089f3dd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0089f3de: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f3df: ret  */ FN_RET(0x0089f388); r_esp += 4; return;
L_0089f3e0:; BB(0x0089f3e0);
    /* 0089f3e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f3e2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f3e3: ret  */ FN_RET(0x0089f388); r_esp += 4; return;
}

void f_0089f3e4(void) /* sub_89F3E4 */
{
    FN_ENTER(0x0089f3e4);
    /* 0089f3e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f3e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f3ea: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0089f3eb: mov eax, 1 */ r_eax = 0x1u;
    /* 0089f3f0: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0089f3f2: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f3f8: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0089f3f9: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0089f3fc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0089f400: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0089f404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f405: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f407: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f408: ret  */ FN_RET(0x0089f3e4); r_esp += 4; return;
}

void f_0089f409(void) /* sub_89F409 */
{
    FN_ENTER(0x0089f409);
    /* 0089f409: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f40a: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f40c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f40f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f410: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0089f413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f414: push 0x99bd88 */ { u32 v = 0x99bd88u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f419: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f41e: call dword ptr [0x8f8014] */ { u32 t = R32((u32)(0x8f8014u)); r_esp -= 4; W32(r_esp, 0x89f424u); call_ind(t); }
    /* 0089f424: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089f426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f428: jne 0x89f477 */ if (!fZ) goto L_0089f477;
L_0089f42a:; BB(0x0089f42a);
    /* 0089f42a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0089f42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f42e: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0089f431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f432: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0089f435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f436: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f437: push 0x99bda4 */ { u32 v = 0x99bda4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f43c: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f43f: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0089f446: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x89f44cu); call_ind(t); }
    /* 0089f44c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f44e: jne 0x89f46e */ if (!fZ) goto L_0089f46e;
L_0089f450:; BB(0x0089f450);
    /* 0089f450: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f454: jne 0x89f46e */ if (!fZ) goto L_0089f46e;
L_0089f456:; BB(0x0089f456);
    /* 0089f456: cmp dword ptr [ebp - 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f459: je 0x89f46e */ if (fZ) goto L_0089f46e;
L_0089f45b:; BB(0x0089f45b);
    /* 0089f45b: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f45e: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x89f464u); call_ind(t); }
    /* 0089f464: mov dword ptr [0xa347c8], edi */ W32((u32)(0xa347c8u), r_edi);
    /* 0089f46a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f46c: jmp 0x89f49f */ goto L_0089f49f;
L_0089f46e:; BB(0x0089f46e);
    /* 0089f46e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f471: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x89f477u); call_ind(t); }
L_0089f477:; BB(0x0089f477);
    /* 0089f477: cmp dword ptr [0xa347c8], edi */ {  u32 a = R32((u32)(0xa347c8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f47d: jge 0x89f49a */ if ((fS==fO)) goto L_0089f49a;
L_0089f47f:; BB(0x0089f47f);
    /* 0089f47f: mov dword ptr [0xa347c8], edi */ W32((u32)(0xa347c8u), r_edi);
    /* 0089f485: call 0x89f3e4 */ r_esp -= 4; W32(r_esp, 0x89f48au); f_0089f3e4();
    /* 0089f48a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f48c: je 0x89f49a */ if (fZ) goto L_0089f49a;
L_0089f48e:; BB(0x0089f48e);
    /* 0089f48e: emms  */ ; /* the MMX tag state is not modelled */
    /* 0089f490: mov dword ptr [0xa347c8], 1 */ W32((u32)(0xa347c8u), 0x1u);
L_0089f49a:; BB(0x0089f49a);
    /* 0089f49a: mov eax, dword ptr [0xa347c8] */ r_eax = R32((u32)(0xa347c8u));
L_0089f49f:; BB(0x0089f49f);
    /* 0089f49f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f4a0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f4a1: ret  */ FN_RET(0x0089f409); r_esp += 4; return;
}

void f_0089f4a2(void) /* sub_89F4A2 */
{
    FN_ENTER(0x0089f4a2);
    /* 0089f4a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4a3: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f4a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4a6: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4ad: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0089f4ae: mov eax, 0x80000000 */ r_eax = 0x80000000u;
    /* 0089f4b3: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0089f4b5: cmp eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f4ba: jb 0x89f4d1 */ if (fC) goto L_0089f4d1;
L_0089f4bc:; BB(0x0089f4bc);
    /* 0089f4bc: mov eax, 0x80000001 */ r_eax = 0x80000001u;
    /* 0089f4c1: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0089f4c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f4c5: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f4cb: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0089f4ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0089f4d1:; BB(0x0089f4d1);
    /* 0089f4d1: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0089f4d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089f4d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f4d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f4d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f4d8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f4d9: ret  */ FN_RET(0x0089f4a2); r_esp += 4; return;
}

void f_0089f4da(void) /* sub_89F4DA */
{
    FN_ENTER(0x0089f4da);
    /* 0089f4da: mov eax, 0x8cb909 */ r_eax = 0x8cb909u;
    /* 0089f4df: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89f4e4u); f_008cb064();
    /* 0089f4e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4e5: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f4e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f4eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0089f4ee: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f4f2: mov esi, 0x99bdb0 */ r_esi = 0x99bdb0u;
    /* 0089f4f7: lea edi, [ebp - 0x24] */ r_edi = (u32)(r_ebp+0xffffffdcu);
    /* 0089f4fa: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089f4fb: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089f4fc: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089f4fd: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 0089f4fe: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f502: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f504: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0089f506: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0089f509: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 0089f50c: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0089f50f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0089f512: jmp 0x89f520 */ goto L_0089f520;
L_0089f520:; BB(0x0089f520);
    /* 0089f520: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f524: jmp 0x89f52b */ goto L_0089f52b;
L_0089f52b:; BB(0x0089f52b);
    /* 0089f52b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f52f: jne 0x89f536 */ if (!fZ) goto L_0089f536;
L_0089f531:; BB(0x0089f531);
    /* 0089f531: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089f534: jmp 0x89f570 */ goto L_0089f570;
L_0089f536:; BB(0x0089f536);
    /* 0089f536: mov eax, 1 */ r_eax = 0x1u;
    /* 0089f53b: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0089f53d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0089f540: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0089f543: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089f546: and eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089f54b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f54d: je 0x89f558 */ if (fZ) goto L_0089f558;
L_0089f54f:; BB(0x0089f54f);
    /* 0089f54f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089f552: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089f555: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0089f558:; BB(0x0089f558);
    /* 0089f558: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089f55b: and eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089f560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f562: je 0x89f56d */ if (fZ) goto L_0089f56d;
L_0089f564:; BB(0x0089f564);
    /* 0089f564: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089f567: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f56a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0089f56d:; BB(0x0089f56d);
    /* 0089f56d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0089f570:; BB(0x0089f570);
    /* 0089f570: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089f573: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089f57a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f57b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f57c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f57d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f57e: ret  */ FN_RET(0x0089f4da); r_esp += 4; return;
}

void f_0089f514(void)
{
    FN_ENTER(0x0089f514);
    /* 0089f514: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089f517: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0089f51a: mov eax, 0x89f526 */ r_eax = 0x89f526u;
    /* 0089f51f: ret  */ FN_RET(0x0089f514); r_esp += 4; return;
}

void f_0089f57f(void) /* sub_89F57F */
{
    FN_ENTER(0x0089f57f);
    /* 0089f57f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f580: lea ebp, [esp - 0x74] */ r_ebp = (u32)(r_esp+0xffffff8cu);
    /* 0089f584: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f58a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f58b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f58c: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f58e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f58f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f591: lea edi, [ebp - 0x24] */ r_edi = (u32)(r_ebp+0xffffffdcu);
    /* 0089f594: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089f596: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0089f599: xor bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089f59b: and byte ptr [ebp + 0x73], bl */ { u32 ad = (u32)(r_ebp+0x73u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089f59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f59f: mov dword ptr [ebp - 0x24], 0x94 */ W32((u32)(r_ebp+0xffffffdcu), 0x94u);
    /* 0089f5a6: call dword ptr [0x8f820c] */ { u32 t = R32((u32)(0x8f820cu)); r_esp -= 4; W32(r_esp, 0x89f5acu); call_ind(t); }
    /* 0089f5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f5ae: jne 0x89f5b6 */ if (!fZ) goto L_0089f5b6;
L_0089f5b0:; BB(0x0089f5b0);
    /* 0089f5b0: inc bl */ { u32 x = (u8)r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089f5b2: mov byte ptr [ebp + 0x73], 1 */ W8((u32)(r_ebp+0x73u), 0x1u);
L_0089f5b6:; BB(0x0089f5b6);
    /* 0089f5b6: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f5ba: jne 0x89f5d8 */ if (!fZ) goto L_0089f5d8;
L_0089f5bc:; BB(0x0089f5bc);
    /* 0089f5bc: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089f5c0: ja 0x89f5e2 */ if ((!fC&&!fZ)) goto L_0089f5e2;
L_0089f5c2:; BB(0x0089f5c2);
    /* 0089f5c2: jne 0x89f5d2 */ if (!fZ) goto L_0089f5d2;
L_0089f5c4:; BB(0x0089f5c4);
    /* 0089f5c4: cmp dword ptr [ebp - 0x1c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089f5c8: jb 0x89f5d2 */ if (fC) goto L_0089f5d2;
L_0089f5ca:; BB(0x0089f5ca);
    /* 0089f5ca: cmp word ptr [ebp - 0x18], 0x55d */ {  u32 a = R16((u32)(r_ebp+0xffffffe8u)); u32 b = 0x55du; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0089f5d0: jae 0x89f5e2 */ if (!fC) goto L_0089f5e2;
L_0089f5d2:; BB(0x0089f5d2);
    /* 0089f5d2: mov byte ptr [ebp + 0x73], 1 */ W8((u32)(r_ebp+0x73u), 0x1u);
    /* 0089f5d6: jmp 0x89f5e2 */ goto L_0089f5e2;
L_0089f5d8:; BB(0x0089f5d8);
    /* 0089f5d8: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f5dc: jne 0x89f5f8 */ if (!fZ) goto L_0089f5f8;
L_0089f5de:; BB(0x0089f5de);
    /* 0089f5de: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089f5e0: je 0x89f613 */ if (fZ) goto L_0089f613;
L_0089f5e2:; BB(0x0089f5e2);
    /* 0089f5e2: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 0089f5e5: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f5e8: je 0x89f603 */ if (fZ) goto L_0089f603;
L_0089f5ea:; BB(0x0089f5ea);
    /* 0089f5ea: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f5eb: je 0x89f5fc */ if (fZ) goto L_0089f5fc;
L_0089f5ed:; BB(0x0089f5ed);
    /* 0089f5ed: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f5f0: jne 0x89f5f8 */ if (!fZ) goto L_0089f5f8;
L_0089f5f2:; BB(0x0089f5f2);
    /* 0089f5f2: cmp byte ptr [ebp + 0x73], 0 */ {  u32 a = R8((u32)(r_ebp+0x73u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f5f6: je 0x89f624 */ if (fZ) goto L_0089f624;
L_0089f5f8:; BB(0x0089f5f8);
    /* 0089f5f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f5fa: jmp 0x89f62c */ goto L_0089f62c;
L_0089f5fc:; BB(0x0089f5fc);
    /* 0089f5fc: call 0x89f4a2 */ r_esp -= 4; W32(r_esp, 0x89f601u); f_0089f4a2();
    /* 0089f601: jmp 0x89f62c */ goto L_0089f62c;
L_0089f603:; BB(0x0089f603);
    /* 0089f603: cmp byte ptr [ebp + 0x73], 0 */ {  u32 a = R8((u32)(r_ebp+0x73u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f607: jne 0x89f5f8 */ if (!fZ) goto L_0089f5f8;
L_0089f609:; BB(0x0089f609);
    /* 0089f609: call 0x89f4da */ r_esp -= 4; W32(r_esp, 0x89f60eu); f_0089f4da();
    /* 0089f60e: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089f611: jmp 0x89f62c */ goto L_0089f62c;
L_0089f613:; BB(0x0089f613);
    /* 0089f613: cmp dword ptr [ebp + 0x7c], 0xa */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f617: je 0x89f624 */ if (fZ) goto L_0089f624;
L_0089f619:; BB(0x0089f619);
    /* 0089f619: push dword ptr [ebp + 0x7c] */ { u32 v = R32((u32)(r_ebp+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f61c: call dword ptr [0x8f82f8] */ { u32 t = R32((u32)(0x8f82f8u)); r_esp -= 4; W32(r_esp, 0x89f622u); call_ind(t); }
    /* 0089f622: jmp 0x89f62c */ goto L_0089f62c;
L_0089f624:; BB(0x0089f624);
    /* 0089f624: call 0x89f4da */ r_esp -= 4; W32(r_esp, 0x89f629u); f_0089f4da();
    /* 0089f629: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0089f62c:; BB(0x0089f62c);
    /* 0089f62c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f62d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f62e: add ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089f631: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f632: ret  */ FN_RET(0x0089f57f); r_esp += 4; return;
}

void f_0089f633(void) /* sub_89F633 */
{
    FN_ENTER(0x0089f633);
    /* 0089f633: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f634: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f636: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f63a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f63b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f63c: jne 0x89f65c */ if (!fZ) goto L_0089f65c;
L_0089f63e:; BB(0x0089f63e);
    /* 0089f63e: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f640: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f641: mov esi, 0xa34070 */ r_esi = 0xa34070u;
    /* 0089f646: mov edi, 0xa33f88 */ r_edi = 0xa33f88u;
    /* 0089f64b: mov dword ptr [0xa347cc], 0xffff */ W32((u32)(0xa347ccu), 0xffffu);
    /* 0089f655: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089f657: jmp 0x89f705 */ goto L_0089f705;
L_0089f65c:; BB(0x0089f65c);
    /* 0089f65c: cmp dword ptr [0xa347cc], 0xffff */ {  u32 a = R32((u32)(0xa347ccu)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f666: jne 0x89f705 */ if (!fZ) goto L_0089f705;
L_0089f66c:; BB(0x0089f66c);
    /* 0089f66c: and dword ptr [0xa347cc], 0 */ { u32 ad = (u32)(0xa347ccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f673: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f674: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f676: mov ebx, 0xa33f88 */ r_ebx = 0xa33f88u;
    /* 0089f67b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f67c: mov esi, 0xa34070 */ r_esi = 0xa34070u;
    /* 0089f681: mov edi, ebx */ r_edi = r_ebx;
    /* 0089f683: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f684: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089f686: call 0x8a8917 */ r_esp -= 4; W32(r_esp, 0x89f68bu); f_008a8917();
    /* 0089f68b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f68d: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0089f690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f691: push 0x99bdc0 */ { u32 v = 0x99bdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f696: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f698: call 0x89f388 */ r_esp -= 4; W32(r_esp, 0x89f69du); f_0089f388();
    /* 0089f69d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089f6a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f6a2: jne 0x89f6a7 */ if (!fZ) goto L_0089f6a7;
L_0089f6a4:; BB(0x0089f6a4);
    /* 0089f6a4: and dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089f6a7:; BB(0x0089f6a7);
    /* 0089f6a7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089f6a9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089f6aa: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f6ad: je 0x89f704 */ if (fZ) goto L_0089f704;
L_0089f6af:; BB(0x0089f6af);
    /* 0089f6af: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6b1: call 0x89f57f */ r_esp -= 4; W32(r_esp, 0x89f6b6u); f_0089f57f();
    /* 0089f6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f6b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f6b9: je 0x89f6c9 */ if (fZ) goto L_0089f6c9;
L_0089f6bb:; BB(0x0089f6bb);
    /* 0089f6bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6bc: call 0x8a8295 */ r_esp -= 4; W32(r_esp, 0x89f6c1u); f_008a8295();
    /* 0089f6c1: mov dword ptr [0xa347cc], esi */ W32((u32)(0xa347ccu), r_esi);
    /* 0089f6c7: jmp 0x89f703 */ goto L_0089f703;
L_0089f6c9:; BB(0x0089f6c9);
    /* 0089f6c9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6cb: call 0x89f57f */ r_esp -= 4; W32(r_esp, 0x89f6d0u); f_0089f57f();
    /* 0089f6d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f6d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f6d3: je 0x89f6e7 */ if (fZ) goto L_0089f6e7;
L_0089f6d5:; BB(0x0089f6d5);
    /* 0089f6d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6d6: call 0x8a80b0 */ r_esp -= 4; W32(r_esp, 0x89f6dbu); f_008a80b0();
    /* 0089f6db: mov dword ptr [0xa347cc], 2 */ W32((u32)(0xa347ccu), 0x2u);
    /* 0089f6e5: jmp 0x89f703 */ goto L_0089f703;
L_0089f6e7:; BB(0x0089f6e7);
    /* 0089f6e7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6e9: call 0x89f57f */ r_esp -= 4; W32(r_esp, 0x89f6eeu); f_0089f57f();
    /* 0089f6ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f6f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f6f1: je 0x89f704 */ if (fZ) goto L_0089f704;
L_0089f6f3:; BB(0x0089f6f3);
    /* 0089f6f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f6f4: call 0x8a7fa0 */ r_esp -= 4; W32(r_esp, 0x89f6f9u); f_008a7fa0();
    /* 0089f6f9: mov dword ptr [0xa347cc], 3 */ W32((u32)(0xa347ccu), 0x3u);
L_0089f703:; BB(0x0089f703);
    /* 0089f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089f704:; BB(0x0089f704);
    /* 0089f704: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089f705:; BB(0x0089f705);
    /* 0089f705: mov eax, dword ptr [0xa347cc] */ r_eax = R32((u32)(0xa347ccu));
    /* 0089f70a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f70b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f70c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089f70d: ret 4 */ FN_RET(0x0089f633); r_esp += 8; return;
}

void f_0089f848(void) /* sub_89F848 */
{
    FN_ENTER(0x0089f848);
    /* 0089f848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f849: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f84b: sub esp, 0x200 */ {  u32 a = r_esp; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f851: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f852: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f853: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f854: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 0089f857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f858: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f85b: mov esi, 0x100 */ r_esi = 0x100u;
    /* 0089f860: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 0089f866: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f867: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f868: call 0x8cb22f */ r_esp -= 4; W32(r_esp, 0x89f86du); f_008cb22f();
    /* 0089f86d: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0089f870: and byte ptr [ebp - 0x101], 0 */ { u32 ad = (u32)(r_ebp+0xfffffeffu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089f877: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089f879: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089f87c: cmp dword ptr [ebx + 0x3d8], edx */ {  u32 a = R32((u32)(r_ebx+0x3d8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f882: je 0x89f912 */ if (fZ) goto L_0089f912;
L_0089f888:; BB(0x0089f888);
    /* 0089f888: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f88a: mov edi, 0x99be98 */ r_edi = 0x99be98u;
    /* 0089f88f: lea esi, [ebp - 0x200] */ r_esi = (u32)(r_ebp+0xfffffe00u);
    /* 0089f895: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f896: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f898: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089f89a: jne 0x89f90d */ if (!fZ) goto L_0089f90d;
L_0089f89c:; BB(0x0089f89c);
    /* 0089f89c: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0089f8a2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f8a4: jne 0x89f8ba */ if (!fZ) goto L_0089f8ba;
L_0089f8a6:; BB(0x0089f8a6);
    /* 0089f8a6: push dword ptr [ebx + 0x1d0] */ { u32 v = R32((u32)(r_ebx+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f8ac: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 0089f8b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8b3: push 0x99be64 */ { u32 v = 0x99be64u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8b8: jmp 0x89f8e8 */ goto L_0089f8e8;
L_0089f8ba:; BB(0x0089f8ba);
    /* 0089f8ba: cmp dword ptr [ebx + 0xa0], edx */ {  u32 a = R32((u32)(r_ebx+0xa0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f8c0: je 0x89f8fe */ if (fZ) goto L_0089f8fe;
L_0089f8c2:; BB(0x0089f8c2);
    /* 0089f8c2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8c4: mov edi, 0x99be60 */ r_edi = 0x99be60u;
    /* 0089f8c9: lea esi, [ebx + 0xc8] */ r_esi = (u32)(r_ebx+0xc8u);
    /* 0089f8cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f8d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f8d2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089f8d4: jne 0x89f8fe */ if (!fZ) goto L_0089f8fe;
L_0089f8d6:; BB(0x0089f8d6);
    /* 0089f8d6: push dword ptr [ebx + 0x1d0] */ { u32 v = R32((u32)(r_ebx+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089f8dc: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 0089f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8e3: push 0x99be20 */ { u32 v = 0x99be20u; r_esp -= 4; W32(r_esp, v); }
L_0089f8e8:; BB(0x0089f8e8);
    /* 0089f8e8: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0089f8ee: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8f4: call 0x8cb098 */ r_esp -= 4; W32(r_esp, 0x89f8f9u); f_008cb098();
    /* 0089f8f9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089f8fc: jmp 0x89f953 */ goto L_0089f953;
L_0089f8fe:; BB(0x0089f8fe);
    /* 0089f8fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f8ff: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 0089f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f906: push 0x99bdf0 */ { u32 v = 0x99bdf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f90b: jmp 0x89f8e8 */ goto L_0089f8e8;
L_0089f90d:; BB(0x0089f90d);
    /* 0089f90d: mov esi, 0x100 */ r_esi = 0x100u;
L_0089f912:; BB(0x0089f912);
    /* 0089f912: cmp dword ptr [ebx + 0x3e0], edx */ {  u32 a = R32((u32)(r_ebx+0x3e0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f918: je 0x89f922 */ if (fZ) goto L_0089f922;
L_0089f91a:; BB(0x0089f91a);
    /* 0089f91a: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 0089f920: jmp 0x89f928 */ goto L_0089f928;
L_0089f922:; BB(0x0089f922);
    /* 0089f922: mov eax, dword ptr [ebx + 0x1d0] */ r_eax = R32((u32)(r_ebx+0x1d0u));
L_0089f928:; BB(0x0089f928);
    /* 0089f928: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f92a: jne 0x89f92f */ if (!fZ) goto L_0089f92f;
L_0089f92c:; BB(0x0089f92c);
    /* 0089f92c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089f92e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089f92f:; BB(0x0089f92f);
    /* 0089f92f: lea ecx, [ebp - 0x200] */ r_ecx = (u32)(r_ebp+0xfffffe00u);
    /* 0089f935: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f937: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 0089f93d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f93e: push 0x99bdd0 */ { u32 v = 0x99bdd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f943: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0089f949: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f94a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f94b: call 0x8cb098 */ r_esp -= 4; W32(r_esp, 0x89f950u); f_008cb098();
    /* 0089f950: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0089f953:; BB(0x0089f953);
    /* 0089f953: and byte ptr [ebp - 1], 0 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089f957: lea eax, [ebp - 0x100] */ r_eax = (u32)(r_ebp+0xffffff00u);
    /* 0089f95d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089f95e: lea ecx, [ebx + 0x84] */ r_ecx = (u32)(r_ebx+0x84u);
    /* 0089f964: call 0x8a8a1b */ r_esp -= 4; W32(r_esp, 0x89f969u); f_008a8a1b();
    /* 0089f969: inc dword ptr [ebx + 0xa4] */ { u32 ad = (u32)(r_ebx+0xa4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0089f96f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f970: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f971: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
    /* 0089f97b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089f97c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f97d: ret  */ FN_RET(0x0089f848); r_esp += 4; return;
}

void f_0089f97e(void) /* sub_89F97E */
{
    FN_ENTER(0x0089f97e);
    /* 0089f97e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089f97f: mov ebp, esp */ r_ebp = r_esp;
    /* 0089f981: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089f984: mov eax, ecx */ r_eax = r_ecx;
    /* 0089f986: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089f988: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089f98b: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089f990: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f991: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089f994: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0089f997: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0089f99a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0089f99d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0089f9a0: mov esi, eax */ r_esi = r_eax;
    /* 0089f9a2: jmp 0x89f9aa */ goto L_0089f9aa;
L_0089f9a4:; BB(0x0089f9a4);
    /* 0089f9a4: cmp cl, 0x5f */ {  u32 a = (u8)r_ecx; u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9a7: je 0x89f9b0 */ if (fZ) goto L_0089f9b0;
L_0089f9a9:; BB(0x0089f9a9);
    /* 0089f9a9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089f9aa:; BB(0x0089f9aa);
    /* 0089f9aa: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089f9ac: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9ae: jne 0x89f9a4 */ if (!fZ) goto L_0089f9a4;
L_0089f9b0:; BB(0x0089f9b0);
    /* 0089f9b0: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9b3: mov edx, eax */ r_edx = r_eax;
    /* 0089f9b5: je 0x89f9e0 */ if (fZ) goto L_0089f9e0;
L_0089f9b7:; BB(0x0089f9b7);
    /* 0089f9b7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089f9b8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089f9bb: jmp 0x89f9c3 */ goto L_0089f9c3;
L_0089f9bd:; BB(0x0089f9bd);
    /* 0089f9bd: cmp cl, 0x5f */ {  u32 a = (u8)r_ecx; u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9c0: je 0x89f9c9 */ if (fZ) goto L_0089f9c9;
L_0089f9c2:; BB(0x0089f9c2);
    /* 0089f9c2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089f9c3:; BB(0x0089f9c3);
    /* 0089f9c3: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089f9c5: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9c7: jne 0x89f9bd */ if (!fZ) goto L_0089f9bd;
L_0089f9c9:; BB(0x0089f9c9);
    /* 0089f9c9: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089f9cf: je 0x89f9e0 */ if (fZ) goto L_0089f9e0;
L_0089f9d1:; BB(0x0089f9d1);
    /* 0089f9d1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089f9d2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089f9d5: jmp 0x89f9d8 */ goto L_0089f9d8;
L_0089f9d7:; BB(0x0089f9d7);
    /* 0089f9d7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089f9d8:; BB(0x0089f9d8);
    /* 0089f9d8: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089f9db: jne 0x89f9d7 */ if (!fZ) goto L_0089f9d7;
L_0089f9dd:; BB(0x0089f9dd);
    /* 0089f9dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0089f9e0:; BB(0x0089f9e0);
    /* 0089f9e0: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089f9e2: mov eax, edx */ r_eax = r_edx;
    /* 0089f9e4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f9e7: jbe 0x89f9f3 */ if ((fC||fZ)) goto L_0089f9f3;
L_0089f9e9:; BB(0x0089f9e9);
    /* 0089f9e9: mov eax, 0x109 */ r_eax = 0x109u;
    /* 0089f9ee: jmp 0x8a0092 */ goto L_008a0092;
L_0089f9f3:; BB(0x0089f9f3);
    /* 0089f9f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f9f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f9f5: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f9f7: mov edx, ecx */ r_edx = r_ecx;
    /* 0089f9f9: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089f9fc: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
    /* 0089f9ff: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089fa01: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fa03: mov ecx, edx */ r_ecx = r_edx;
    /* 0089fa05: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0089fa06: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089fa08: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089fa0a: and byte ptr [ebp + eax - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+r_eax+0xffffffd4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089fa0f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fa11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089fa12: mov edi, 0x99c03c */ r_edi = 0x99c03cu;
    /* 0089fa17: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa1e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa20: jne 0x89fa29 */ if (!fZ) goto L_0089fa29;
L_0089fa22:; BB(0x0089fa22);
    /* 0089fa22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089fa24: jmp 0x89fd73 */ goto L_0089fd73;
L_0089fa29:; BB(0x0089fa29);
    /* 0089fa29: mov edi, 0x99c038 */ r_edi = 0x99c038u;
    /* 0089fa2e: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa35: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa37: jne 0x89fa41 */ if (!fZ) goto L_0089fa41;
L_0089fa39:; BB(0x0089fa39);
    /* 0089fa39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089fa3b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089fa3c: jmp 0x89ff65 */ goto L_0089ff65;
L_0089fa41:; BB(0x0089fa41);
    /* 0089fa41: mov edi, 0x99c034 */ r_edi = 0x99c034u;
    /* 0089fa46: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa49: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa4d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa4f: jne 0x89fa58 */ if (!fZ) goto L_0089fa58;
L_0089fa51:; BB(0x0089fa51);
    /* 0089fa51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fa53: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fa58:; BB(0x0089fa58);
    /* 0089fa58: mov edi, 0x99c030 */ r_edi = 0x99c030u;
    /* 0089fa5d: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa64: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa66: je 0x89ff48 */ if (fZ) goto L_0089ff48;
L_0089fa6c:; BB(0x0089fa6c);
    /* 0089fa6c: mov edi, 0x99c02c */ r_edi = 0x99c02cu;
    /* 0089fa71: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa78: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa7a: jne 0x89fa83 */ if (!fZ) goto L_0089fa83;
L_0089fa7c:; BB(0x0089fa7c);
    /* 0089fa7c: mov edx, ebx */ r_edx = r_ebx;
    /* 0089fa7e: jmp 0x89fb17 */ goto L_0089fb17;
L_0089fa83:; BB(0x0089fa83);
    /* 0089fa83: mov edi, 0x99c028 */ r_edi = 0x99c028u;
    /* 0089fa88: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fa8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fa8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fa8f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fa91: jne 0x89fa9a */ if (!fZ) goto L_0089fa9a;
L_0089fa93:; BB(0x0089fa93);
    /* 0089fa93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fa95: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fa9a:; BB(0x0089fa9a);
    /* 0089fa9a: mov edi, 0x99c024 */ r_edi = 0x99c024u;
    /* 0089fa9f: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089faa2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089faa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089faa6: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089faa8: jne 0x89fab1 */ if (!fZ) goto L_0089fab1;
L_0089faaa:; BB(0x0089faaa);
    /* 0089faaa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089faac: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fab1:; BB(0x0089fab1);
    /* 0089fab1: mov edi, 0x99c020 */ r_edi = 0x99c020u;
    /* 0089fab6: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fab9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fabb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fabd: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fabf: jne 0x89fac8 */ if (!fZ) goto L_0089fac8;
L_0089fac1:; BB(0x0089fac1);
    /* 0089fac1: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fac3: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fac8:; BB(0x0089fac8);
    /* 0089fac8: mov edi, 0x99c01c */ r_edi = 0x99c01cu;
    /* 0089facd: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fad0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fad2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fad4: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fad6: jne 0x89fadf */ if (!fZ) goto L_0089fadf;
L_0089fad8:; BB(0x0089fad8);
    /* 0089fad8: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fada: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fadf:; BB(0x0089fadf);
    /* 0089fadf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089fae2: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 0089fae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089faea: je 0x89fdff */ if (fZ) goto L_0089fdff;
L_0089faf0:; BB(0x0089faf0);
    /* 0089faf0: mov edi, 0x99c018 */ r_edi = 0x99c018u;
    /* 0089faf5: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089faf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fafa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fafc: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fafe: jne 0x89fb04 */ if (!fZ) goto L_0089fb04;
L_0089fb00:; BB(0x0089fb00);
    /* 0089fb00: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fb02: jmp 0x89fb16 */ goto L_0089fb16;
L_0089fb04:; BB(0x0089fb04);
    /* 0089fb04: mov edi, 0x99c014 */ r_edi = 0x99c014u;
    /* 0089fb09: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fb0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fb0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fb10: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fb12: jne 0x89fb83 */ if (!fZ) goto L_0089fb83;
L_0089fb14:; BB(0x0089fb14);
    /* 0089fb14: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
L_0089fb16:; BB(0x0089fb16);
    /* 0089fb16: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0089fb17:; BB(0x0089fb17);
    /* 0089fb17: mov eax, 0x108 */ r_eax = 0x108u;
L_0089fb1c:; BB(0x0089fb1c);
    /* 0089fb1c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089fb20: je 0x8a0025 */ if (fZ) goto L_008a0025;
L_0089fb26:; BB(0x0089fb26);
    /* 0089fb26: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089fb29: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089fb30: je 0x89ff83 */ if (fZ) goto L_0089ff83;
L_0089fb36:; BB(0x0089fb36);
    /* 0089fb36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089fb39: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089fb3c: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0089fb3e: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089fb41: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0089fb44: ja 0x89ff83 */ if ((!fC&&!fZ)) goto L_0089ff83;
L_0089fb4a:; BB(0x0089fb4a);
    /* 0089fb4a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089fb4c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089fb4f: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fb52: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089fb54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fb56: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089fb59: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089fb5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fb5d: and byte ptr [ebp + ecx - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+r_ecx+0xffffffd4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089fb62: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fb64: mov edi, 0x99c010 */ r_edi = 0x99c010u;
    /* 0089fb69: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fb6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fb6d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fb6f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fb71: jne 0x89ff8d */ if (!fZ) goto L_0089ff8d;
L_0089fb77:; BB(0x0089fb77);
    /* 0089fb77: mov dword ptr [ebp - 4], 0x3000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x3000000u);
    /* 0089fb7e: jmp 0x8a0025 */ goto L_008a0025;
L_0089fb83:; BB(0x0089fb83);
    /* 0089fb83: mov edi, 0x99c00c */ r_edi = 0x99c00cu;
    /* 0089fb88: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fb8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fb8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fb8f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fb91: jne 0x89fb9a */ if (!fZ) goto L_0089fb9a;
L_0089fb93:; BB(0x0089fb93);
    /* 0089fb93: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fb95: jmp 0x89fb16 */ goto L_0089fb16;
L_0089fb9a:; BB(0x0089fb9a);
    /* 0089fb9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089fb9d: cmp dword ptr [ecx + 0xb4], 0xffff0104 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0xffff0104u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089fba7: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fbaa: jae 0x89fd60 */ if (!fC) goto L_0089fd60;
L_0089fbb0:; BB(0x0089fbb0);
    /* 0089fbb0: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbb2: mov edi, 0x99c000 */ r_edi = 0x99c000u;
    /* 0089fbb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fbb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fbba: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fbbc: jne 0x89fbc5 */ if (!fZ) goto L_0089fbc5;
L_0089fbbe:; BB(0x0089fbbe);
    /* 0089fbbe: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbc0: jmp 0x89fdbd */ goto L_0089fdbd;
L_0089fbc5:; BB(0x0089fbc5);
    /* 0089fbc5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbc7: mov edi, 0x99bff8 */ r_edi = 0x99bff8u;
    /* 0089fbcc: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fbcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fbd0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fbd2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fbd4: jne 0x89fbdd */ if (!fZ) goto L_0089fbdd;
L_0089fbd6:; BB(0x0089fbd6);
    /* 0089fbd6: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbd8: jmp 0x89fdbd */ goto L_0089fdbd;
L_0089fbdd:; BB(0x0089fbdd);
    /* 0089fbdd: mov edi, 0x99bff4 */ r_edi = 0x99bff4u;
    /* 0089fbe2: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fbe5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fbe7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fbe9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fbeb: jne 0x89fbf4 */ if (!fZ) goto L_0089fbf4;
L_0089fbed:; BB(0x0089fbed);
    /* 0089fbed: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbef: jmp 0x89fdbd */ goto L_0089fdbd;
L_0089fbf4:; BB(0x0089fbf4);
    /* 0089fbf4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fbf6: mov edi, 0x99bfec */ r_edi = 0x99bfecu;
    /* 0089fbfb: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fbfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fbff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc01: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc03: jne 0x89fc0c */ if (!fZ) goto L_0089fc0c;
L_0089fc05:; BB(0x0089fc05);
    /* 0089fc05: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc07: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc0c:; BB(0x0089fc0c);
    /* 0089fc0c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc0e: mov edi, 0x99bfe4 */ r_edi = 0x99bfe4u;
    /* 0089fc13: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc19: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc1b: jne 0x89fc24 */ if (!fZ) goto L_0089fc24;
L_0089fc1d:; BB(0x0089fc1d);
    /* 0089fc1d: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc1f: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc24:; BB(0x0089fc24);
    /* 0089fc24: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc26: mov edi, 0x99bfd8 */ r_edi = 0x99bfd8u;
    /* 0089fc2b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc31: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc33: jne 0x89fc3c */ if (!fZ) goto L_0089fc3c;
L_0089fc35:; BB(0x0089fc35);
    /* 0089fc35: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc37: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc3c:; BB(0x0089fc3c);
    /* 0089fc3c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc3e: mov edi, 0x99bfcc */ r_edi = 0x99bfccu;
    /* 0089fc43: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc49: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc4b: jne 0x89fc54 */ if (!fZ) goto L_0089fc54;
L_0089fc4d:; BB(0x0089fc4d);
    /* 0089fc4d: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc4f: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc54:; BB(0x0089fc54);
    /* 0089fc54: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc56: mov edi, 0x99bfc0 */ r_edi = 0x99bfc0u;
    /* 0089fc5b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc61: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc63: jne 0x89fc6c */ if (!fZ) goto L_0089fc6c;
L_0089fc65:; BB(0x0089fc65);
    /* 0089fc65: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc67: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc6c:; BB(0x0089fc6c);
    /* 0089fc6c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc6e: mov edi, 0x99bfb4 */ r_edi = 0x99bfb4u;
    /* 0089fc73: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc77: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc79: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc7b: jne 0x89fc84 */ if (!fZ) goto L_0089fc84;
L_0089fc7d:; BB(0x0089fc7d);
    /* 0089fc7d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc7f: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc84:; BB(0x0089fc84);
    /* 0089fc84: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc86: mov edi, 0x99bfa8 */ r_edi = 0x99bfa8u;
    /* 0089fc8b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fc8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fc8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fc91: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fc93: jne 0x89fc9c */ if (!fZ) goto L_0089fc9c;
L_0089fc95:; BB(0x0089fc95);
    /* 0089fc95: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc97: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fc9c:; BB(0x0089fc9c);
    /* 0089fc9c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fc9e: mov edi, 0x99bf9c */ r_edi = 0x99bf9cu;
    /* 0089fca3: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fca6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fca7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fca9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fcab: jne 0x89fcb4 */ if (!fZ) goto L_0089fcb4;
L_0089fcad:; BB(0x0089fcad);
    /* 0089fcad: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcaf: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fcb4:; BB(0x0089fcb4);
    /* 0089fcb4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcb6: mov edi, 0x99bf90 */ r_edi = 0x99bf90u;
    /* 0089fcbb: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fcbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fcbf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fcc1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fcc3: jne 0x89fccc */ if (!fZ) goto L_0089fccc;
L_0089fcc5:; BB(0x0089fcc5);
    /* 0089fcc5: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcc7: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fccc:; BB(0x0089fccc);
    /* 0089fccc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcce: mov edi, 0x99bf80 */ r_edi = 0x99bf80u;
    /* 0089fcd3: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fcd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fcd7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fcd9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fcdb: jne 0x89fce4 */ if (!fZ) goto L_0089fce4;
L_0089fcdd:; BB(0x0089fcdd);
    /* 0089fcdd: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcdf: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fce4:; BB(0x0089fce4);
    /* 0089fce4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fce6: mov edi, 0x99bf70 */ r_edi = 0x99bf70u;
    /* 0089fceb: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fcee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fcef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fcf1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fcf3: jne 0x89fcfc */ if (!fZ) goto L_0089fcfc;
L_0089fcf5:; BB(0x0089fcf5);
    /* 0089fcf5: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcf7: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fcfc:; BB(0x0089fcfc);
    /* 0089fcfc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fcfe: mov edi, 0x99bf68 */ r_edi = 0x99bf68u;
    /* 0089fd03: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd09: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd0b: jne 0x89fd14 */ if (!fZ) goto L_0089fd14;
L_0089fd0d:; BB(0x0089fd0d);
    /* 0089fd0d: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd0f: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fd14:; BB(0x0089fd14);
    /* 0089fd14: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd16: mov edi, 0x99bf5c */ r_edi = 0x99bf5cu;
    /* 0089fd1b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd21: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd23: jne 0x89fd2c */ if (!fZ) goto L_0089fd2c;
L_0089fd25:; BB(0x0089fd25);
    /* 0089fd25: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd27: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fd2c:; BB(0x0089fd2c);
    /* 0089fd2c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd2e: mov edi, 0x99bf54 */ r_edi = 0x99bf54u;
    /* 0089fd33: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd39: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd3b: jne 0x89fd44 */ if (!fZ) goto L_0089fd44;
L_0089fd3d:; BB(0x0089fd3d);
    /* 0089fd3d: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd3f: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fd44:; BB(0x0089fd44);
    /* 0089fd44: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd46: mov edi, 0x99bf48 */ r_edi = 0x99bf48u;
    /* 0089fd4b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd51: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd53: jne 0x89fdf7 */ if (!fZ) goto L_0089fdf7;
L_0089fd59:; BB(0x0089fd59);
    /* 0089fd59: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd5b: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fd60:; BB(0x0089fd60);
    /* 0089fd60: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd62: mov edi, 0x99bf40 */ r_edi = 0x99bf40u;
    /* 0089fd67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd68: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd6a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd6c: jne 0x89fd7d */ if (!fZ) goto L_0089fd7d;
L_0089fd6e:; BB(0x0089fd6e);
    /* 0089fd6e: mov edx, 0xfffd */ r_edx = 0xfffdu;
L_0089fd73:; BB(0x0089fd73);
    /* 0089fd73: mov eax, 0x104 */ r_eax = 0x104u;
    /* 0089fd78: jmp 0x89fb1c */ goto L_0089fb1c;
L_0089fd7d:; BB(0x0089fd7d);
    /* 0089fd7d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd7f: mov edi, 0x99bf38 */ r_edi = 0x99bf38u;
    /* 0089fd84: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fd88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fd8a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fd8c: jne 0x89fd95 */ if (!fZ) goto L_0089fd95;
L_0089fd8e:; BB(0x0089fd8e);
    /* 0089fd8e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd90: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fd95:; BB(0x0089fd95);
    /* 0089fd95: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fd97: mov edi, 0x99bff8 */ r_edi = 0x99bff8u;
    /* 0089fd9c: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fd9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fda0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fda2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fda4: je 0x89fbd6 */ if (fZ) goto L_0089fbd6;
L_0089fdaa:; BB(0x0089fdaa);
    /* 0089fdaa: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fdac: mov edi, 0x99bf2c */ r_edi = 0x99bf2cu;
    /* 0089fdb1: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fdb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fdb5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fdb7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fdb9: jne 0x89fdc8 */ if (!fZ) goto L_0089fdc8;
L_0089fdbb:; BB(0x0089fdbb);
    /* 0089fdbb: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
L_0089fdbd:; BB(0x0089fdbd);
    /* 0089fdbd: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0089fdbe: mov eax, 0x105 */ r_eax = 0x105u;
    /* 0089fdc3: jmp 0x89fb1c */ goto L_0089fb1c;
L_0089fdc8:; BB(0x0089fdc8);
    /* 0089fdc8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fdca: mov edi, 0x99bf24 */ r_edi = 0x99bf24u;
    /* 0089fdcf: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fdd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089fdd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fdd5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fdd7: jne 0x89fde0 */ if (!fZ) goto L_0089fde0;
L_0089fdd9:; BB(0x0089fdd9);
    /* 0089fdd9: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fddb: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fde0:; BB(0x0089fde0);
    /* 0089fde0: mov edi, 0x99bf20 */ r_edi = 0x99bf20u;
    /* 0089fde5: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fde8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fdea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fdec: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fdee: jne 0x89fdf7 */ if (!fZ) goto L_0089fdf7;
L_0089fdf0:; BB(0x0089fdf0);
    /* 0089fdf0: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fdf2: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fdf7:; BB(0x0089fdf7);
    /* 0089fdf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fdf9: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_0089fdff:; BB(0x0089fdff);
    /* 0089fdff: mov edi, 0x99bf1c */ r_edi = 0x99bf1cu;
    /* 0089fe04: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe0b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe0d: jne 0x89fe16 */ if (!fZ) goto L_0089fe16;
L_0089fe0f:; BB(0x0089fe0f);
    /* 0089fe0f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe11: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fe16:; BB(0x0089fe16);
    /* 0089fe16: mov edi, 0x99bf18 */ r_edi = 0x99bf18u;
    /* 0089fe1b: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe22: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe24: jne 0x89fe2d */ if (!fZ) goto L_0089fe2d;
L_0089fe26:; BB(0x0089fe26);
    /* 0089fe26: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe28: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fe2d:; BB(0x0089fe2d);
    /* 0089fe2d: mov edi, 0x99bf14 */ r_edi = 0x99bf14u;
    /* 0089fe32: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe39: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe3b: jne 0x89fe44 */ if (!fZ) goto L_0089fe44;
L_0089fe3d:; BB(0x0089fe3d);
    /* 0089fe3d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe3f: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fe44:; BB(0x0089fe44);
    /* 0089fe44: mov edi, 0x99bf10 */ r_edi = 0x99bf10u;
    /* 0089fe49: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe50: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe52: jne 0x89fe5b */ if (!fZ) goto L_0089fe5b;
L_0089fe54:; BB(0x0089fe54);
    /* 0089fe54: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe56: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fe5b:; BB(0x0089fe5b);
    /* 0089fe5b: mov edi, 0x99bf0c */ r_edi = 0x99bf0cu;
    /* 0089fe60: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe67: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe69: jne 0x89fe72 */ if (!fZ) goto L_0089fe72;
L_0089fe6b:; BB(0x0089fe6b);
    /* 0089fe6b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe6d: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fe72:; BB(0x0089fe72);
    /* 0089fe72: mov edi, 0x99bf08 */ r_edi = 0x99bf08u;
    /* 0089fe77: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe7e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe80: jne 0x89fe89 */ if (!fZ) goto L_0089fe89;
L_0089fe82:; BB(0x0089fe82);
    /* 0089fe82: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe84: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fe89:; BB(0x0089fe89);
    /* 0089fe89: mov edi, 0x99bf04 */ r_edi = 0x99bf04u;
    /* 0089fe8e: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fe91: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fe93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fe95: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fe97: jne 0x89fea0 */ if (!fZ) goto L_0089fea0;
L_0089fe99:; BB(0x0089fe99);
    /* 0089fe99: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0089fe9b: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fea0:; BB(0x0089fea0);
    /* 0089fea0: mov edi, 0x99bf00 */ r_edi = 0x99bf00u;
    /* 0089fea5: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fea8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089feaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089feac: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089feae: jne 0x89feb7 */ if (!fZ) goto L_0089feb7;
L_0089feb0:; BB(0x0089feb0);
    /* 0089feb0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0089feb2: jmp 0x89ff64 */ goto L_0089ff64;
L_0089feb7:; BB(0x0089feb7);
    /* 0089feb7: mov edi, 0x99befc */ r_edi = 0x99befcu;
    /* 0089febc: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089febf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fec1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fec3: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fec5: jne 0x89fece */ if (!fZ) goto L_0089fece;
L_0089fec7:; BB(0x0089fec7);
    /* 0089fec7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fec9: jmp 0x89ff64 */ goto L_0089ff64;
L_0089fece:; BB(0x0089fece);
    /* 0089fece: mov edi, 0x99bef8 */ r_edi = 0x99bef8u;
    /* 0089fed3: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089fed6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089fed8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089feda: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fedc: jne 0x89fee2 */ if (!fZ) goto L_0089fee2;
L_0089fede:; BB(0x0089fede);
    /* 0089fede: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fee0: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fee2:; BB(0x0089fee2);
    /* 0089fee2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fee4: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0089fee5: mov edi, 0x99bef0 */ r_edi = 0x99bef0u;
    /* 0089feea: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089feed: mov ecx, eax */ r_ecx = r_eax;
    /* 0089feef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089fef1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089fef3: jne 0x89fef9 */ if (!fZ) goto L_0089fef9;
L_0089fef5:; BB(0x0089fef5);
    /* 0089fef5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fef7: jmp 0x89ff47 */ goto L_0089ff47;
L_0089fef9:; BB(0x0089fef9);
    /* 0089fef9: mov edi, 0x99bee8 */ r_edi = 0x99bee8u;
    /* 0089fefe: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff01: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff03: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff05: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff07: jne 0x89ff0d */ if (!fZ) goto L_0089ff0d;
L_0089ff09:; BB(0x0089ff09);
    /* 0089ff09: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ff0b: jmp 0x89ff47 */ goto L_0089ff47;
L_0089ff0d:; BB(0x0089ff0d);
    /* 0089ff0d: mov edi, 0x99bee0 */ r_edi = 0x99bee0u;
    /* 0089ff12: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff15: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff19: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff1b: jne 0x89ff21 */ if (!fZ) goto L_0089ff21;
L_0089ff1d:; BB(0x0089ff1d);
    /* 0089ff1d: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ff1f: jmp 0x89ff47 */ goto L_0089ff47;
L_0089ff21:; BB(0x0089ff21);
    /* 0089ff21: mov edi, 0x99bed8 */ r_edi = 0x99bed8u;
    /* 0089ff26: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff29: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff2d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff2f: jne 0x89ff35 */ if (!fZ) goto L_0089ff35;
L_0089ff31:; BB(0x0089ff31);
    /* 0089ff31: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ff33: jmp 0x89ff47 */ goto L_0089ff47;
L_0089ff35:; BB(0x0089ff35);
    /* 0089ff35: mov edi, 0x99bed0 */ r_edi = 0x99bed0u;
    /* 0089ff3a: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff3d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff41: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff43: jne 0x89ff52 */ if (!fZ) goto L_0089ff52;
L_0089ff45:; BB(0x0089ff45);
    /* 0089ff45: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
L_0089ff47:; BB(0x0089ff47);
    /* 0089ff47: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0089ff48:; BB(0x0089ff48);
    /* 0089ff48: mov eax, 0x107 */ r_eax = 0x107u;
    /* 0089ff4d: jmp 0x89fb1c */ goto L_0089fb1c;
L_0089ff52:; BB(0x0089ff52);
    /* 0089ff52: mov edi, 0x99bec8 */ r_edi = 0x99bec8u;
    /* 0089ff57: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff5a: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff5e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff60: jne 0x89ff6f */ if (!fZ) goto L_0089ff6f;
L_0089ff62:; BB(0x0089ff62);
    /* 0089ff62: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
L_0089ff64:; BB(0x0089ff64);
    /* 0089ff64: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_0089ff65:; BB(0x0089ff65);
    /* 0089ff65: mov eax, 0x106 */ r_eax = 0x106u;
    /* 0089ff6a: jmp 0x89fb1c */ goto L_0089fb1c;
L_0089ff6f:; BB(0x0089ff6f);
    /* 0089ff6f: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ff71: mov edi, 0x99bec0 */ r_edi = 0x99bec0u;
    /* 0089ff76: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff7b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff7d: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_0089ff7f:; BB(0x0089ff7f);
    /* 0089ff7f: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ff81: jmp 0x89ff64 */ goto L_0089ff64;
L_0089ff83:; BB(0x0089ff83);
    /* 0089ff83: mov eax, 0x109 */ r_eax = 0x109u;
    /* 0089ff88: jmp 0x8a0090 */ goto L_008a0090;
L_0089ff8d:; BB(0x0089ff8d);
    /* 0089ff8d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ff8f: mov edi, 0x99bebc */ r_edi = 0x99bebcu;
    /* 0089ff94: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ff97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ff98: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ff9a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ff9c: jne 0x89ffa7 */ if (!fZ) goto L_0089ffa7;
L_0089ff9e:; BB(0x0089ff9e);
    /* 0089ff9e: mov dword ptr [ebp - 4], 0x2000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x2000000u);
    /* 0089ffa5: jmp 0x8a0025 */ goto L_008a0025;
L_0089ffa7:; BB(0x0089ffa7);
    /* 0089ffa7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ffa9: mov edi, 0x99beb8 */ r_edi = 0x99beb8u;
    /* 0089ffae: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ffb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ffb2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ffb4: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ffb6: jne 0x89ffc1 */ if (!fZ) goto L_0089ffc1;
L_0089ffb8:; BB(0x0089ffb8);
    /* 0089ffb8: mov dword ptr [ebp - 4], 0x1000000 */ W32((u32)(r_ebp+0xfffffffcu), 0x1000000u);
    /* 0089ffbf: jmp 0x8a0025 */ goto L_008a0025;
L_0089ffc1:; BB(0x0089ffc1);
    /* 0089ffc1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ffc3: mov edi, 0x99beb4 */ r_edi = 0x99beb4u;
    /* 0089ffc8: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ffcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ffcc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ffce: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ffd0: jne 0x89ffdb */ if (!fZ) goto L_0089ffdb;
L_0089ffd2:; BB(0x0089ffd2);
    /* 0089ffd2: mov dword ptr [ebp - 4], 0xf000000 */ W32((u32)(r_ebp+0xfffffffcu), 0xf000000u);
    /* 0089ffd9: jmp 0x8a0025 */ goto L_008a0025;
L_0089ffdb:; BB(0x0089ffdb);
    /* 0089ffdb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ffdd: mov edi, 0x99beb0 */ r_edi = 0x99beb0u;
    /* 0089ffe2: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ffe5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ffe6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089ffe8: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0089ffea: jne 0x89fff5 */ if (!fZ) goto L_0089fff5;
L_0089ffec:; BB(0x0089ffec);
    /* 0089ffec: mov dword ptr [ebp - 4], 0xe000000 */ W32((u32)(r_ebp+0xfffffffcu), 0xe000000u);
    /* 0089fff3: jmp 0x8a0025 */ goto L_008a0025;
L_0089fff5:; BB(0x0089fff5);
    /* 0089fff5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089fff7: mov edi, 0x99beac */ r_edi = 0x99beacu;
    /* 0089fffc: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0089ffff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0000: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0002: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0004: jne 0x8a000f */ if (!fZ) goto L_008a000f;
L_008a0006:; BB(0x008a0006);
    /* 008a0006: mov dword ptr [ebp - 4], 0xd000000 */ W32((u32)(r_ebp+0xfffffffcu), 0xd000000u);
    /* 008a000d: jmp 0x8a0025 */ goto L_008a0025;
L_008a000f:; BB(0x008a000f);
    /* 008a000f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0013: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_008a0019:; BB(0x008a0019);
    /* 008a0019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a001c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a001f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008a0022: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_008a0025:; BB(0x008a0025);
    /* 008a0025: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a0028: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a002a: je 0x8a007e */ if (fZ) goto L_008a007e;
L_008a002c:; BB(0x008a002c);
    /* 008a002c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a002f: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0036: je 0x89ff83 */ if (fZ) goto L_0089ff83;
L_008a003c:; BB(0x008a003c);
    /* 008a003c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a003f: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a0041: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a0044: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008a0047: ja 0x89ff83 */ if ((!fC&&!fZ)) goto L_0089ff83;
L_008a004d:; BB(0x008a004d);
    /* 008a004d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a004f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a0052: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
    /* 008a0055: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a0057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0059: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a005c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008a005e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a0060: and byte ptr [ebp + ecx - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+r_ecx+0xffffffd4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a0065: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a0067: mov edi, 0x99bea8 */ r_edi = 0x99bea8u;
    /* 008a006c: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 008a006f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a0070: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a0072: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a0074: jne 0x89ff83 */ if (!fZ) goto L_0089ff83;
L_008a007a:; BB(0x008a007a);
    /* 008a007a: or byte ptr [ebp - 2], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffffeu);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a007e:; BB(0x008a007e);
    /* 008a007e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a0081: mov dword ptr [ecx + 0x1c8], edx */ W32((u32)(r_ecx+0x1c8u), r_edx);
    /* 008a0087: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a008a: mov dword ptr [ecx + 0x1cc], edx */ W32((u32)(r_ecx+0x1ccu), r_edx);
L_008a0090:; BB(0x008a0090);
    /* 008a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a0091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a0092:; BB(0x008a0092);
    /* 008a0092: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a0093: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a0094: ret  */ FN_RET(0x0089f97e); r_esp += 4; return;
}

