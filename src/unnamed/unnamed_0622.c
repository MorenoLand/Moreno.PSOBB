#include "protos.h"

void f_006220fc(void) /* sub_6220FC */
{
    FN_ENTER(0x006220fc);
    /* 006220fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006220fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006220ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622101: push 0x8e23d6 */ { u32 v = 0x8e23d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00622106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062210c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062210d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622114: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062211a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062211d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622123: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x622128u); f_00807ac0();
    /* 00622128: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062212b: jne 0x6221a8 */ if (!fZ) goto L_006221a8;
L_0062212d:; BB(0x0062212d);
    /* 0062212d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00622134: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00622139: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62213eu); f_008581c5();
    /* 0062213e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062213f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00622142: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622144: je 0x6222b8 */ if (fZ) goto L_006222b8;
L_0062214a:; BB(0x0062214a);
    /* 0062214a: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00622151: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00622158: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062215b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062215d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062215e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062215f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622160: push 0x9c5494 */ { u32 v = 0x9c5494u; r_esp -= 4; W32(r_esp, v); }
    /* 00622165: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00622167: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62216cu); f_005b7a84();
    /* 0062216c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062216f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00622176:; BB(0x00622176);
    /* 00622176: mov dword ptr [0xa8ec8c], eax */ W32((u32)(0xa8ec8cu), r_eax);
    /* 0062217b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622182: push 0x9313a0 */ { u32 v = 0x9313a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622187: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62218cu); f_008009dc();
    /* 0062218c: push 0x9313c0 */ { u32 v = 0x9313c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622191: mov dword ptr [0xa8ec88], eax */ W32((u32)(0xa8ec88u), r_eax);
    /* 00622196: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62219bu); f_008009dc();
    /* 0062219b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062219e: mov dword ptr [0xa8ec84], eax */ W32((u32)(0xa8ec84u), r_eax);
    /* 006221a3: jmp 0x62229b */ goto L_0062229b;
L_006221a8:; BB(0x006221a8);
    /* 006221a8: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006221ab: jne 0x622225 */ if (!fZ) goto L_00622225;
L_006221ad:; BB(0x006221ad);
    /* 006221ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006221b4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006221b9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6221beu); f_008581c5();
    /* 006221be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006221bf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006221c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006221c4: je 0x6222bf */ if (fZ) goto L_006222bf;
L_006221ca:; BB(0x006221ca);
    /* 006221ca: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006221d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006221d8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006221db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006221dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006221de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006221df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006221e0: push 0x9c5494 */ { u32 v = 0x9c5494u; r_esp -= 4; W32(r_esp, v); }
    /* 006221e5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006221e7: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6221ecu); f_005b7a84();
    /* 006221ec: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006221ef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006221f6:; BB(0x006221f6);
    /* 006221f6: mov dword ptr [0xa8ec8c], eax */ W32((u32)(0xa8ec8cu), r_eax);
    /* 006221fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622202: push 0x9313d8 */ { u32 v = 0x9313d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00622207: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62220cu); f_008009dc();
    /* 0062220c: push 0x9313f8 */ { u32 v = 0x9313f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00622211: mov dword ptr [0xa8ec88], eax */ W32((u32)(0xa8ec88u), r_eax);
    /* 00622216: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62221bu); f_008009dc();
    /* 0062221b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062221e: mov dword ptr [0xa8ec84], eax */ W32((u32)(0xa8ec84u), r_eax);
    /* 00622223: jmp 0x62229b */ goto L_0062229b;
L_00622225:; BB(0x00622225);
    /* 00622225: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062222c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00622231: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x622236u); f_008581c5();
    /* 00622236: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622237: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062223a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062223c: je 0x6222c6 */ if (fZ) goto L_006222c6;
L_00622242:; BB(0x00622242);
    /* 00622242: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00622249: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622250: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00622253: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622258: push 0x9c5494 */ { u32 v = 0x9c5494u; r_esp -= 4; W32(r_esp, v); }
    /* 0062225d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062225f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x622264u); f_005b7a84();
    /* 00622264: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00622267: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062226e:; BB(0x0062226e);
    /* 0062226e: mov dword ptr [0xa8ec8c], eax */ W32((u32)(0xa8ec8cu), r_eax);
    /* 00622273: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062227a: push 0x9313a0 */ { u32 v = 0x9313a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062227f: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x622284u); f_008009dc();
    /* 00622284: push 0x9313c0 */ { u32 v = 0x9313c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622289: mov dword ptr [0xa8ec88], eax */ W32((u32)(0xa8ec88u), r_eax);
    /* 0062228e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x622293u); f_008009dc();
    /* 00622293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622296: mov dword ptr [0xa8ec84], eax */ W32((u32)(0xa8ec84u), r_eax);
L_0062229b:; BB(0x0062229b);
    /* 0062229b: mov ecx, dword ptr [0xa8ec8c] */ r_ecx = R32((u32)(0xa8ec8cu));
    /* 006222a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006222a3: je 0x6222aa */ if (fZ) goto L_006222aa;
L_006222a5:; BB(0x006222a5);
    /* 006222a5: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x6222aau); f_005b90d0();
L_006222aa:; BB(0x006222aa);
    /* 006222aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006222ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006222b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006222b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006222b7: ret  */ FN_RET(0x006220fc); r_esp += 4; return;
L_006222b8:; BB(0x006222b8);
    /* 006222b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006222ba: jmp 0x622176 */ goto L_00622176;
L_006222bf:; BB(0x006222bf);
    /* 006222bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006222c1: jmp 0x6221f6 */ goto L_006221f6;
L_006222c6:; BB(0x006222c6);
    /* 006222c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006222c8: jmp 0x62226e */ goto L_0062226e;
}

void f_006222cc(void) /* sub_6222CC */
{
    FN_ENTER(0x006222cc);
    /* 006222cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006222cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006222cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006222d1: call 0x6222f0 */ r_esp -= 4; W32(r_esp, 0x6222d6u); f_006222f0();
    /* 006222d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006222da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006222dc: jne 0x6222e2 */ if (!fZ) goto L_006222e2;
L_006222de:; BB(0x006222de);
    /* 006222de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006222df: ret 4 */ FN_RET(0x006222cc); r_esp += 8; return;
L_006222e2:; BB(0x006222e2);
    /* 006222e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006222e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6222e8u); f_005c2f74();
    /* 006222e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006222e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006222ea: ret 4 */ FN_RET(0x006222cc); r_esp += 8; return;
}

void f_006222f0(void) /* sub_6222F0 */
{
    FN_ENTER(0x006222f0);
    /* 006222f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006222f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006222f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006222f5: push 0x8e23f0 */ { u32 v = 0x8e23f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006222fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622308: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062230b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062230e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622311: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622314: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622317: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062231a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622321: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622324: mov dword ptr [eax], 0xb27fc0 */ W32((u32)(r_eax), 0xb27fc0u);
    /* 0062232a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062232b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x622330u); f_007b4e84();
    /* 00622330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622331: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622334: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x622339u); f_007b9c8c();
    /* 00622339: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622340: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622343: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x622348u); f_006131f4();
    /* 00622348: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062234b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622352: mov esp, ebp */ r_esp = r_ebp;
    /* 00622354: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622355: ret  */ FN_RET(0x006222f0); r_esp += 4; return;
}

void f_00622358(void) /* sub_622358 */
{
    FN_ENTER(0x00622358);
    /* 00622358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00622359: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062235a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062235c: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622362: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622368: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0062236a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062236c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62236fu); call_ind(t); }
    /* 0062236f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622371: je 0x62249f */ if (fZ) goto L_0062249f;
L_00622377:; BB(0x00622377);
    /* 00622377: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062237d: test al, 0xe */ {  u32 a = (u8)r_eax; u32 b = 0xeu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062237f: je 0x62249f */ if (fZ) goto L_0062249f;
L_00622385:; BB(0x00622385);
    /* 00622385: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62238au); f_0082d7b0();
    /* 0062238a: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0062238d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622392u); f_0082d838();
    /* 00622392: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00622395: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622397: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62239cu); f_0082d8bc();
    /* 0062239c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0062239f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6223a4u); f_00829cc8();
    /* 006223a4: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006223aa: push dword ptr [ebx + 0xd0] */ { u32 v = R32((u32)(r_ebx+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006223b0: push dword ptr [ebx + 0xbc] */ { u32 v = R32((u32)(r_ebx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006223b6: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006223b9: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x6223beu); f_008304e0();
    /* 006223be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006223c1: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 006223c7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6223ccu); f_00829cc8();
    /* 006223cc: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006223d1: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006223d6: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006223d9: lea edx, [ebx + 0xdc] */ r_edx = (u32)(r_ebx+0xdcu);
    /* 006223df: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006223e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006223e5: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6223eau); f_0082d710();
    /* 006223ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006223eb: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6223f0u); f_0082dbac();
    /* 006223f0: mov edi, dword ptr [ebx + 0xd4] */ r_edi = R32((u32)(r_ebx+0xd4u));
    /* 006223f6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6223fbu); f_0082d7b0();
    /* 006223fb: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 006223fe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622403u); f_0082d838();
    /* 00622403: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00622406: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062240c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062240e: je 0x622431 */ if (fZ) goto L_00622431;
L_00622410:; BB(0x00622410);
    /* 00622410: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622415u); f_0082d7b0();
    /* 00622415: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00622418: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62241du); f_0082d838();
    /* 0062241d: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622420: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x622425u); f_0082e6b0();
    /* 00622425: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622426: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62242bu); f_0082da80();
    /* 0062242b: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
L_00622431:; BB(0x00622431);
    /* 00622431: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00622434: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00622436: je 0x622459 */ if (fZ) goto L_00622459;
L_00622438:; BB(0x00622438);
    /* 00622438: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62243du); f_0082d7b0();
    /* 0062243d: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00622440: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622445u); f_0082d838();
    /* 00622445: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622448: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x62244du); f_0082e6b0();
    /* 0062244d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062244e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622453u); f_0082da80();
    /* 00622453: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
L_00622459:; BB(0x00622459);
    /* 00622459: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 0062245c: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062245e: je 0x62247b */ if (fZ) goto L_0062247b;
L_00622460:; BB(0x00622460);
    /* 00622460: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622465u); f_0082d7b0();
    /* 00622465: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00622468: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62246du); f_0082d838();
    /* 0062246d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622470: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x622475u); f_0082e6b0();
    /* 00622475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622476: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62247bu); f_0082da80();
L_0062247b:; BB(0x0062247b);
    /* 0062247b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622480u); f_0082da80();
    /* 00622480: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x622485u); f_0082dab0();
    /* 00622485: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062248a: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62248fu); f_0082d710();
    /* 0062248f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622490: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00622495: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062249a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62249fu); f_0082da80();
L_0062249f:; BB(0x0062249f);
    /* 0062249f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006224a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006224a1: ret  */ FN_RET(0x00622358); r_esp += 4; return;
}

void f_006224a4(void) /* sub_6224A4 */
{
    FN_ENTER(0x006224a4);
    /* 006224a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006224a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006224a7: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 006224ad: test al, 0xe */ {  u32 a = (u8)r_eax; u32 b = 0xeu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006224af: je 0x6225a7 */ if (fZ) goto L_006225a7;
L_006224b5:; BB(0x006224b5);
    /* 006224b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006224b7: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x6224bcu); f_0061347c();
    /* 006224bc: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 006224c2: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006224c5: je 0x6224fb */ if (fZ) goto L_006224fb;
L_006224c7:; BB(0x006224c7);
    /* 006224c7: fld dword ptr [0x93152c] */ FPUSH(R_F32((u32)(0x93152cu)));
    /* 006224cd: fadd dword ptr [ebx + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xdcu));
    /* 006224d3: fcom dword ptr [0x931530] */ fx_compare(ST(0), R_F32((u32)(0x931530u))); 
    /* 006224d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006224db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006224dc: jb 0x6224f3 */ if (fC) goto L_006224f3;
L_006224de:; BB(0x006224de);
    /* 006224de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006224e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006224e2: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
    /* 006224e8: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006224eb: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 006224f1: jmp 0x622530 */ goto L_00622530;
L_006224f3:; BB(0x006224f3);
    /* 006224f3: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 006224f9: jmp 0x622530 */ goto L_00622530;
L_006224fb:; BB(0x006224fb);
    /* 006224fb: fld dword ptr [ebx + 0xdc] */ FPUSH(R_F32((u32)(r_ebx+0xdcu)));
    /* 00622501: fsub dword ptr [0x93152c] */ ST(0) = ST(0) - R_F32((u32)(0x93152cu));
    /* 00622507: fcom dword ptr [0x931534] */ fx_compare(ST(0), R_F32((u32)(0x931534u))); 
    /* 0062250d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062250f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00622510: ja 0x62252a */ if ((!fC&&!fZ)) goto L_0062252a;
L_00622512:; BB(0x00622512);
    /* 00622512: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00622514: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00622519: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
    /* 0062251f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00622522: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 00622528: jmp 0x622530 */ goto L_00622530;
L_0062252a:; BB(0x0062252a);
    /* 0062252a: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
L_00622530:; BB(0x00622530);
    /* 00622530: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00622532: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x622537u); f_006bb254();
    /* 00622537: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062253a: je 0x62254b */ if (fZ) goto L_0062254b;
L_0062253c:; BB(0x0062253c);
    /* 0062253c: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00622542: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00622545: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
L_0062254b:; BB(0x0062254b);
    /* 0062254b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0062254d: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x622552u); f_006bb254();
    /* 00622552: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622553: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622555: je 0x622566 */ if (fZ) goto L_00622566;
L_00622557:; BB(0x00622557);
    /* 00622557: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062255d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00622560: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
L_00622566:; BB(0x00622566);
    /* 00622566: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00622568: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x62256du); f_006bb254();
    /* 0062256d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062256e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622570: je 0x622581 */ if (fZ) goto L_00622581;
L_00622572:; BB(0x00622572);
    /* 00622572: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00622578: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062257b: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
L_00622581:; BB(0x00622581);
    /* 00622581: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00622583: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x622588u); f_006bb254();
    /* 00622588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062258b: je 0x6225a7 */ if (fZ) goto L_006225a7;
L_0062258d:; BB(0x0062258d);
    /* 0062258d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062258f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622591: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00622597: and eax, 0xfffffff1 */ {  u32 a = r_eax; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062259a: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 006225a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006225a2: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x6225a7u); f_007b52ec();
L_006225a7:; BB(0x006225a7);
    /* 006225a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006225a8: ret  */ FN_RET(0x006224a4); r_esp += 4; return;
}

void f_006225ac(void) /* sub_6225AC */
{
    FN_ENTER(0x006225ac);
    /* 006225ac: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 006225b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006225b4: je 0x6225c9 */ if (fZ) goto L_006225c9;
L_006225b6:; BB(0x006225b6);
    /* 006225b6: je 0x6225bf */ if (fZ) goto L_006225bf;
L_006225b8:; BB(0x006225b8);
    /* 006225b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006225ba: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6225bfu); f_004066a8();
L_006225bf:; BB(0x006225bf);
    /* 006225bf: mov dword ptr [0xa8eca4], 0 */ W32((u32)(0xa8eca4u), 0x0u);
L_006225c9:; BB(0x006225c9);
    /* 006225c9: ret  */ FN_RET(0x006225ac); r_esp += 4; return;
}

void f_006225cc(void)
{
    FN_ENTER(0x006225cc);
    /* 006225cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006225cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006225cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006225d1: push 0x8e2418 */ { u32 v = 0x8e2418u; r_esp -= 4; W32(r_esp, v); }
    /* 006225d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006225dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006225dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006225e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006225e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006225ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006225ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006225f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006225f3: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 006225f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006225ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x622604u); f_005caba4();
    /* 00622604: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622605: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00622608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062260a: je 0x622643 */ if (fZ) goto L_00622643;
L_0062260c:; BB(0x0062260c);
    /* 0062260c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00622613: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062261a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062261d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622623: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622626: call 0x622648 */ r_esp -= 4; W32(r_esp, 0x62262bu); f_00622648();
    /* 0062262b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062262e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00622635:; BB(0x00622635);
    /* 00622635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622638: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062263f: mov esp, ebp */ r_esp = r_ebp;
    /* 00622641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622642: ret  */ FN_RET(0x006225cc); r_esp += 4; return;
L_00622643:; BB(0x00622643);
    /* 00622643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622645: jmp 0x622635 */ goto L_00622635;
}

void f_00622648(void) /* sub_622648 */
{
    FN_ENTER(0x00622648);
    /* 00622648: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622649: mov ebp, esp */ r_ebp = r_esp;
    /* 0062264b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062264d: push 0x8e2434 */ { u32 v = 0x8e2434u; r_esp -= 4; W32(r_esp, v); }
    /* 00622652: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622659: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622660: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622663: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622666: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00622669: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062266c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062266f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00622672: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622675: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00622678: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062267b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x622680u); f_006132e4();
    /* 00622680: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622687: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062268a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062268d: mov dword ptr [ecx], 0xb27fc0 */ W32((u32)(r_ecx), 0xb27fc0u);
    /* 00622693: mov eax, dword ptr [0x9c5570] */ r_eax = R32((u32)(0x9c5570u));
    /* 00622698: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622699: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062269c: call dword ptr [0xb27fd4] */ { u32 t = R32((u32)(0xb27fd4u)); r_esp -= 4; W32(r_esp, 0x6226a2u); call_ind(t); }
    /* 006226a2: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 006226a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006226aa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6226afu); f_005b8610();
    /* 006226af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006226b2: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 006226b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006226ba: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006226bd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6226c2u); f_005b8624();
    /* 006226c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006226c5: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 006226cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006226cd: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006226d0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6226d5u); f_005b8638();
    /* 006226d5: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006226d8: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 006226de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006226e0: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 006226e6: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006226e9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006226ec: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006226ef: fadd dword ptr [edx*4 + 0x931510] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931510u));
    /* 006226f6: fadd dword ptr [0x931528] */ ST(0) = ST(0) + R_F32((u32)(0x931528u));
    /* 006226fc: mov dword ptr [ebx + 0xb8], 0x3f800000 */ W32((u32)(r_ebx+0xb8u), 0x3f800000u);
    /* 00622706: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 0062270c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x622711u); f_005b8638();
    /* 00622711: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622714: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 0062271a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062271c: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00622722: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x622727u); f_005b8610();
    /* 00622727: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062272a: mov ecx, dword ptr [0xa8eca4] */ r_ecx = R32((u32)(0xa8eca4u));
    /* 00622730: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622732: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 00622738: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62273du); f_005b8624();
    /* 0062273d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622742: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00622748: push 0x9c5574 */ { u32 v = 0x9c5574u; r_esp -= 4; W32(r_esp, v); }
    /* 0062274d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x622752u); f_007b9a88();
    /* 00622752: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00622755: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62275au); f_007b999c();
    /* 0062275a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062275b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062275e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x622763u); f_007b4f54();
    /* 00622763: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622766: mov dword ptr [eax + 0xc0], 0x44480000 */ W32((u32)(r_eax+0xc0u), 0x44480000u);
    /* 00622770: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00622772: mov dword ptr [eax + 0xc4], 0x43480000 */ W32((u32)(r_eax+0xc4u), 0x43480000u);
    /* 0062277c: mov dword ptr [eax + 0xcc], 0xe */ W32((u32)(r_eax+0xccu), 0xeu);
    /* 00622786: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 00622790: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0062279a: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 006227a4: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 006227ae: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6227b3u); f_006bb254();
    /* 006227b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006227b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006227b6: je 0x6227ca */ if (fZ) goto L_006227ca;
L_006227b8:; BB(0x006227b8);
    /* 006227b8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006227bb: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006227c1: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006227c4: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
L_006227ca:; BB(0x006227ca);
    /* 006227ca: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006227cc: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6227d1u); f_006bb254();
    /* 006227d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006227d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006227d4: je 0x6227e8 */ if (fZ) goto L_006227e8;
L_006227d6:; BB(0x006227d6);
    /* 006227d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006227d9: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006227df: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006227e2: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
L_006227e8:; BB(0x006227e8);
    /* 006227e8: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006227ea: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6227efu); f_006bb254();
    /* 006227ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006227f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006227f2: je 0x622806 */ if (fZ) goto L_00622806;
L_006227f4:; BB(0x006227f4);
    /* 006227f4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006227f7: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006227fd: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00622800: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
L_00622806:; BB(0x00622806);
    /* 00622806: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00622808: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x62280du); f_006bb254();
    /* 0062280d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062280e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622810: je 0x62282d */ if (fZ) goto L_0062282d;
L_00622812:; BB(0x00622812);
    /* 00622812: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622815: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622817: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622819: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 0062281f: and eax, 0xfffffff1 */ {  u32 a = r_eax; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00622822: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 00622828: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x62282du); f_007b52ec();
L_0062282d:; BB(0x0062282d);
    /* 0062282d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622830: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622833: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622836: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062283d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062283f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622840: ret 8 */ FN_RET(0x00622648); r_esp += 12; return;
}

void f_00622844(void) /* sub_622844 */
{
    FN_ENTER(0x00622844);
    /* 00622844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622845: mov ebp, esp */ r_ebp = r_esp;
    /* 00622847: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622849: push 0x8e245c */ { u32 v = 0x8e245cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062284e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622855: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062285c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062285f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622862: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622865: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622868: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062286b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00622870: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00622877: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62287cu); f_008581c5();
    /* 0062287c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062287d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00622880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622882: je 0x6228c3 */ if (fZ) goto L_006228c3;
L_00622884:; BB(0x00622884);
    /* 00622884: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062288b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622892: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062289a: push 0x9c5560 */ { u32 v = 0x9c5560u; r_esp -= 4; W32(r_esp, v); }
    /* 0062289f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006228a1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6228a6u); f_005b7a84();
    /* 006228a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006228a9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006228b0:; BB(0x006228b0);
    /* 006228b0: mov dword ptr [0xa8eca4], eax */ W32((u32)(0xa8eca4u), r_eax);
    /* 006228b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006228b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006228bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006228c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006228c2: ret  */ FN_RET(0x00622844); r_esp += 4; return;
L_006228c3:; BB(0x006228c3);
    /* 006228c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006228c5: jmp 0x6228b0 */ goto L_006228b0;
}

void f_006228c8(void) /* sub_6228C8 */
{
    FN_ENTER(0x006228c8);
    /* 006228c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006228c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006228cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006228cd: call 0x6228ec */ r_esp -= 4; W32(r_esp, 0x6228d2u); f_006228ec();
    /* 006228d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006228d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006228d8: jne 0x6228de */ if (!fZ) goto L_006228de;
L_006228da:; BB(0x006228da);
    /* 006228da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006228db: ret 4 */ FN_RET(0x006228c8); r_esp += 8; return;
L_006228de:; BB(0x006228de);
    /* 006228de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006228df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6228e4u); f_005c2f74();
    /* 006228e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006228e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006228e6: ret 4 */ FN_RET(0x006228c8); r_esp += 8; return;
}

void f_006228ec(void) /* sub_6228EC */
{
    FN_ENTER(0x006228ec);
    /* 006228ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006228ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006228ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006228f1: push 0x8e2478 */ { u32 v = 0x8e2478u; r_esp -= 4; W32(r_esp, v); }
    /* 006228f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006228fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006228fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622904: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062290a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062290d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622913: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00622916: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062291d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622920: mov dword ptr [eax], 0xb280a0 */ W32((u32)(r_eax), 0xb280a0u);
    /* 00622926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622927: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x62292cu); f_007b4e84();
    /* 0062292c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062292d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622930: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x622935u); f_007b9c8c();
    /* 00622935: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062293c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062293f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x622944u); f_00619b10();
    /* 00622944: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622947: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062294e: mov esp, ebp */ r_esp = r_ebp;
    /* 00622950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622951: ret  */ FN_RET(0x006228ec); r_esp += 4; return;
}

void f_00622954(void) /* sub_622954 */
{
    FN_ENTER(0x00622954);
    /* 00622954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00622955: mov edi, ecx */ r_edi = r_ecx;
    /* 00622957: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0062295d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062295f: jne 0x622963 */ if (!fZ) goto L_00622963;
L_00622961:; BB(0x00622961);
    /* 00622961: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00622962: ret  */ FN_RET(0x00622954); r_esp += 4; return;
L_00622963:; BB(0x00622963);
    /* 00622963: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 00622968: mov ecx, edi */ r_ecx = r_edi;
    /* 0062296a: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x62296fu); f_006134c8();
    /* 0062296f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622971: je 0x622961 */ if (fZ) goto L_00622961;
L_00622973:; BB(0x00622973);
    /* 00622973: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 0062297d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062297f: mov ecx, edi */ r_ecx = r_edi;
    /* 00622981: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622983: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x622988u); f_007b52c4();
    /* 00622988: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062298b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062298d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062298e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062298f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00622990: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 00622995: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62299au); f_00814298();
    /* 0062299a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062299d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062299e: ret  */ FN_RET(0x00622954); r_esp += 4; return;
}

void f_006229a0(void) /* sub_6229A0 */
{
    FN_ENTER(0x006229a0);
    /* 006229a0: fld dword ptr [ecx + 0xd4] */ FPUSH(R_F32((u32)(r_ecx+0xd4u)));
    /* 006229a6: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 006229ac: fcom dword ptr [0x9315cc] */ fx_compare(ST(0), R_F32((u32)(0x9315ccu))); 
    /* 006229b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006229b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006229b5: jb 0x6229cf */ if (fC) goto L_006229cf;
L_006229b7:; BB(0x006229b7);
    /* 006229b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006229b9: mov dword ptr [ecx + 0xac], 2 */ W32((u32)(r_ecx+0xacu), 0x2u);
    /* 006229c3: mov eax, 0x41980000 */ r_eax = 0x41980000u;
    /* 006229c8: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 006229ce: ret  */ FN_RET(0x006229a0); r_esp += 4; return;
L_006229cf:; BB(0x006229cf);
    /* 006229cf: fstp dword ptr [ecx + 0xd4] */ W_F32((u32)(r_ecx+0xd4u), ST(0)); FPOP();
    /* 006229d5: ret  */ FN_RET(0x006229a0); r_esp += 4; return;
}

void f_006229d8(void) /* sub_6229D8 */
{
    FN_ENTER(0x006229d8);
    /* 006229d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006229d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006229db: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 006229e1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006229e3: jne 0x622a11 */ if (!fZ) goto L_00622a11;
L_006229e5:; BB(0x006229e5);
    /* 006229e5: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 006229ef: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006229f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006229f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006229f5: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x6229fau); f_007b52ec();
    /* 006229fa: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006229fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006229ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622a01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622a02: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a07: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x622a0cu); f_00814298();
    /* 00622a0c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00622a0f:; BB(0x00622a0f);
    /* 00622a0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622a10: ret  */ FN_RET(0x006229d8); r_esp += 4; return;
L_00622a11:; BB(0x00622a11);
    /* 00622a11: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00622a18: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x622a1du); f_006134c8();
    /* 00622a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622a1f: jne 0x622a0f */ if (!fZ) goto L_00622a0f;
L_00622a21:; BB(0x00622a21);
    /* 00622a21: jmp 0x6229e5 */ goto L_006229e5;
}

void f_00622a24(void) /* sub_622A24 */
{
    FN_ENTER(0x00622a24);
    /* 00622a24: fld dword ptr [ecx + 0xd4] */ FPUSH(R_F32((u32)(r_ecx+0xd4u)));
    /* 00622a2a: fsub dword ptr [ecx + 0xb8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xb8u));
    /* 00622a30: fcom dword ptr [0x9315c4] */ fx_compare(ST(0), R_F32((u32)(0x9315c4u))); 
    /* 00622a36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00622a38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00622a39: ja 0x622a50 */ if ((!fC&&!fZ)) goto L_00622a50;
L_00622a3b:; BB(0x00622a3b);
    /* 00622a3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00622a3d: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00622a47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622a49: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00622a4f: ret  */ FN_RET(0x00622a24); r_esp += 4; return;
L_00622a50:; BB(0x00622a50);
    /* 00622a50: fstp dword ptr [ecx + 0xd4] */ W_F32((u32)(r_ecx+0xd4u), ST(0)); FPOP();
    /* 00622a56: ret  */ FN_RET(0x00622a24); r_esp += 4; return;
}

void f_00622a58(void) /* sub_622A58 */
{
    FN_ENTER(0x00622a58);
    /* 00622a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622a59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00622a5a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00622a5c: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622a62: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622a68: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00622a6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00622a6c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x622a6fu); call_ind(t); }
    /* 00622a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622a71: je 0x622c48 */ if (fZ) goto L_00622c48;
L_00622a77:; BB(0x00622a77);
    /* 00622a77: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00622a7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00622a7e: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x622a83u); f_00613244();
    /* 00622a83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622a85: jne 0x622a95 */ if (!fZ) goto L_00622a95;
L_00622a87:; BB(0x00622a87);
    /* 00622a87: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00622a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622a8f: jne 0x622a95 */ if (!fZ) goto L_00622a95;
L_00622a91:; BB(0x00622a91);
    /* 00622a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622a93: jmp 0x622a9a */ goto L_00622a9a;
L_00622a95:; BB(0x00622a95);
    /* 00622a95: mov eax, 1 */ r_eax = 0x1u;
L_00622a9a:; BB(0x00622a9a);
    /* 00622a9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622a9c: je 0x622c48 */ if (fZ) goto L_00622c48;
L_00622aa2:; BB(0x00622aa2);
    /* 00622aa2: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x622aa7u); f_00835068();
    /* 00622aa7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622aacu); f_0082d7b0();
    /* 00622aac: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00622aaf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622ab4u); f_0082d838();
    /* 00622ab4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00622ab7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622ab9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x622abeu); f_0082d8bc();
    /* 00622abe: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00622ac4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00622ac6: je 0x622acf */ if (fZ) goto L_00622acf;
L_00622ac8:; BB(0x00622ac8);
    /* 00622ac8: mov edx, 1 */ r_edx = 0x1u;
    /* 00622acd: jmp 0x622ad1 */ goto L_00622ad1;
L_00622acf:; BB(0x00622acf);
    /* 00622acf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00622ad1:; BB(0x00622ad1);
    /* 00622ad1: mov eax, dword ptr [0xa8ecac] */ r_eax = R32((u32)(0xa8ecacu));
    /* 00622ad6: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00622ad9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x622adeu); f_00829cc8();
    /* 00622ade: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00622ae1: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622ae4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622ae9u); f_0082d838();
    /* 00622ae9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622aeeu); f_0082d7b0();
    /* 00622aee: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00622af4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622af7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00622aff: fchs  */ ST(0) = -ST(0);
    /* 00622b01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00622b04: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00622b0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b0e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622b13u); f_00830b74();
    /* 00622b13: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622b16: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622b1bu); f_00835120();
    /* 00622b1b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622b20u); f_0082da80();
    /* 00622b20: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 00622b23: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622b28u); f_0082d7b0();
    /* 00622b28: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622b2b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622b30u); f_0082d838();
    /* 00622b30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b36: push dword ptr [ebx + 0xd4] */ { u32 v = R32((u32)(r_ebx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622b3c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622b41u); f_00830b74();
    /* 00622b41: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622b44: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622b49u); f_00835120();
    /* 00622b49: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622b4eu); f_0082da80();
    /* 00622b4e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x622b53u); f_0082dbac();
    /* 00622b53: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 00622b56: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622b5bu); f_0082d7b0();
    /* 00622b5b: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622b5e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622b63u); f_0082d838();
    /* 00622b63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b69: push dword ptr [ebx + 0xd4] */ { u32 v = R32((u32)(r_ebx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622b6f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622b74u); f_00830b74();
    /* 00622b74: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622b77: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622b7cu); f_00835120();
    /* 00622b7c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622b81u); f_0082da80();
    /* 00622b81: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00622b84: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622b89u); f_0082d7b0();
    /* 00622b89: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622b8c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622b91u); f_0082d838();
    /* 00622b91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b97: push dword ptr [ebx + 0xd4] */ { u32 v = R32((u32)(r_ebx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622b9d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622ba2u); f_00830b74();
    /* 00622ba2: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622ba5: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622baau); f_00835120();
    /* 00622baa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622bafu); f_0082da80();
    /* 00622baf: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00622bb2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00622bb5: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 00622bb8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622bbdu); f_0082d7b0();
    /* 00622bbd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622bc0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622bc5u); f_0082d838();
    /* 00622bc5: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00622bcb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622bce: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00622bd6: fchs  */ ST(0) = -ST(0);
    /* 00622bd8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00622bdb: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00622be3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622be5: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622beau); f_00830b74();
    /* 00622bea: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622bed: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622bf2u); f_00835120();
    /* 00622bf2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622bf7u); f_0082da80();
    /* 00622bf7: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00622bfa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622bffu); f_0082d7b0();
    /* 00622bff: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622c02: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622c07u); f_0082d838();
    /* 00622c07: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00622c0d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c10: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00622c18: fchs  */ ST(0) = -ST(0);
    /* 00622c1a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00622c1d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00622c25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622c27: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622c2cu); f_00830b74();
    /* 00622c2c: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622c2f: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622c34u); f_00835120();
    /* 00622c34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622c39u); f_0082da80();
    /* 00622c39: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x622c3eu); f_0082dab0();
    /* 00622c3e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622c43u); f_0082da80();
    /* 00622c43: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x622c48u); f_00835078();
L_00622c48:; BB(0x00622c48);
    /* 00622c48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622c49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622c4a: ret  */ FN_RET(0x00622a58); r_esp += 4; return;
}

void f_00622b61(void)
{
    FN_ENTER(0x00622b61);
    /* 00622b61: and byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00622b63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b69: push dword ptr [ebx + 0xd4] */ { u32 v = R32((u32)(r_ebx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622b6f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622b74u); f_00830b74();
    /* 00622b74: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622b77: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622b7cu); f_00835120();
    /* 00622b7c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622b81u); f_0082da80();
    /* 00622b81: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00622b84: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622b89u); f_0082d7b0();
    /* 00622b89: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622b8c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622b91u); f_0082d838();
    /* 00622b91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622b95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b97: push dword ptr [ebx + 0xd4] */ { u32 v = R32((u32)(r_ebx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622b9d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622ba2u); f_00830b74();
    /* 00622ba2: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622ba5: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622baau); f_00835120();
    /* 00622baa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622bafu); f_0082da80();
    /* 00622baf: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00622bb2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00622bb5: mov ebp, dword ptr [edx + 0x30] */ r_ebp = R32((u32)(r_edx+0x30u));
    /* 00622bb8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622bbdu); f_0082d7b0();
    /* 00622bbd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622bc0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622bc5u); f_0082d838();
    /* 00622bc5: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00622bcb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622bce: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00622bd6: fchs  */ ST(0) = -ST(0);
    /* 00622bd8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00622bdb: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00622be3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622be5: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622beau); f_00830b74();
    /* 00622bea: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622bed: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622bf2u); f_00835120();
    /* 00622bf2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622bf7u); f_0082da80();
    /* 00622bf7: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00622bfa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x622bffu); f_0082d7b0();
    /* 00622bff: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00622c02: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x622c07u); f_0082d838();
    /* 00622c07: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 00622c0d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c10: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00622c18: fchs  */ ST(0) = -ST(0);
    /* 00622c1a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00622c1d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00622c25: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622c27: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x622c2cu); f_00830b74();
    /* 00622c2c: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00622c2f: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x622c34u); f_00835120();
    /* 00622c34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622c39u); f_0082da80();
    /* 00622c39: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x622c3eu); f_0082dab0();
    /* 00622c3e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x622c43u); f_0082da80();
    /* 00622c43: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x622c48u); f_00835078();
    /* 00622c48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622c49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622c4a: ret  */ FN_RET(0x00622b61); r_esp += 4; return;
}

void f_00622c4c(void) /* sub_622C4C */
{
    FN_ENTER(0x00622c4c);
    /* 00622c4c: mov eax, dword ptr [0xa8ecac] */ r_eax = R32((u32)(0xa8ecacu));
    /* 00622c51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622c53: je 0x622c77 */ if (fZ) goto L_00622c77;
L_00622c55:; BB(0x00622c55);
    /* 00622c55: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00622c57: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x622c5cu); f_00800b5c();
    /* 00622c5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622c5d: mov eax, dword ptr [0xa8ecac] */ r_eax = R32((u32)(0xa8ecacu));
    /* 00622c62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622c64: je 0x622c77 */ if (fZ) goto L_00622c77;
L_00622c66:; BB(0x00622c66);
    /* 00622c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622c67: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x622c6cu); f_00857e98();
    /* 00622c6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622c6d: mov dword ptr [0xa8ecac], 0 */ W32((u32)(0xa8ecacu), 0x0u);
L_00622c77:; BB(0x00622c77);
    /* 00622c77: mov ecx, dword ptr [0xa8ecb0] */ r_ecx = R32((u32)(0xa8ecb0u));
    /* 00622c7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622c7f: je 0x622c94 */ if (fZ) goto L_00622c94;
L_00622c81:; BB(0x00622c81);
    /* 00622c81: je 0x622c8a */ if (fZ) goto L_00622c8a;
L_00622c83:; BB(0x00622c83);
    /* 00622c83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622c85: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x622c8au); f_004066a8();
L_00622c8a:; BB(0x00622c8a);
    /* 00622c8a: mov dword ptr [0xa8ecb0], 0 */ W32((u32)(0xa8ecb0u), 0x0u);
L_00622c94:; BB(0x00622c94);
    /* 00622c94: ret  */ FN_RET(0x00622c4c); r_esp += 4; return;
}

void f_00622c98(void)
{
    FN_ENTER(0x00622c98);
    /* 00622c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622c99: mov ebp, esp */ r_ebp = r_esp;
    /* 00622c9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622c9d: push 0x8e24a0 */ { u32 v = 0x8e24a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622ca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622ca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622cb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622cb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622cb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622cb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622cbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622cbf: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00622cc4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00622ccb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x622cd0u); f_005caba4();
    /* 00622cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622cd1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00622cd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622cd6: je 0x622d0f */ if (fZ) goto L_00622d0f;
L_00622cd8:; BB(0x00622cd8);
    /* 00622cd8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00622cdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622ce6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622ce9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622cef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622cf2: call 0x622d14 */ r_esp -= 4; W32(r_esp, 0x622cf7u); f_00622d14();
    /* 00622cf7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622cfa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00622d01:; BB(0x00622d01);
    /* 00622d01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622d04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622d0b: mov esp, ebp */ r_esp = r_ebp;
    /* 00622d0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622d0e: ret  */ FN_RET(0x00622c98); r_esp += 4; return;
L_00622d0f:; BB(0x00622d0f);
    /* 00622d0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622d11: jmp 0x622d01 */ goto L_00622d01;
}

void f_00622d14(void) /* sub_622D14 */
{
    FN_ENTER(0x00622d14);
    /* 00622d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622d15: mov ebp, esp */ r_ebp = r_esp;
    /* 00622d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622d19: push 0x8e24bc */ { u32 v = 0x8e24bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00622d1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622d25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622d2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622d2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622d32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00622d35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00622d38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00622d3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00622d3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00622d41: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00622d44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00622d47: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x622d4cu); f_00619df0();
    /* 00622d4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622d53: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622d56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622d59: mov dword ptr [ecx], 0xb280a0 */ W32((u32)(r_ecx), 0xb280a0u);
    /* 00622d5f: mov eax, dword ptr [0x9c55b8] */ r_eax = R32((u32)(0x9c55b8u));
    /* 00622d64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622d65: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00622d68: call dword ptr [0xb280b4] */ { u32 t = R32((u32)(0xb280b4u)); r_esp -= 4; W32(r_esp, 0x622d6eu); call_ind(t); }
    /* 00622d6e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622d71: mov eax, dword ptr [0xa8ecb0] */ r_eax = R32((u32)(0xa8ecb0u));
    /* 00622d76: mov esi, dword ptr [0xa8ecac] */ r_esi = R32((u32)(0xa8ecacu));
    /* 00622d7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622d7e: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00622d84: push 0x9c55bc */ { u32 v = 0x9c55bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00622d89: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00622d8c: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00622d8f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00622d92: mov dword ptr [ecx + 0xb4], 0x41f00000 */ W32((u32)(r_ecx+0xb4u), 0x41f00000u);
    /* 00622d9c: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00622d9f: mov dword ptr [ecx + 0xb8], 0x3f222222 */ W32((u32)(r_ecx+0xb8u), 0x3f222222u);
    /* 00622da9: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 00622db3: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x622db8u); f_007b9a88();
    /* 00622db8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00622dbb: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x622dc0u); f_007b999c();
    /* 00622dc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622dc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622dc4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x622dc9u); f_007b4f54();
    /* 00622dc9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622dcc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00622dce: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x622dd1u); call_ind(t); }
    /* 00622dd1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622dd4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622dd7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00622dda: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622ddd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622de0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622de7: mov esp, ebp */ r_esp = r_ebp;
    /* 00622de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622dea: ret 8 */ FN_RET(0x00622d14); r_esp += 12; return;
}

void f_00622df0(void) /* sub_622DF0 */
{
    FN_ENTER(0x00622df0);
    /* 00622df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00622df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622df5: push 0x8e24e4 */ { u32 v = 0x8e24e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00622dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622e08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622e0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622e0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622e11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622e14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622e17: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00622e1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00622e23: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x622e28u); f_008581c5();
    /* 00622e28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622e29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00622e2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622e2e: je 0x622eba */ if (fZ) goto L_00622eba;
L_00622e34:; BB(0x00622e34);
    /* 00622e34: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00622e3b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622e42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622e45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622e47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e4a: push 0x9c55a8 */ { u32 v = 0x9c55a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00622e4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00622e51: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x622e56u); f_005b7a84();
    /* 00622e56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622e59: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00622e60:; BB(0x00622e60);
    /* 00622e60: mov dword ptr [0xa8ecb0], ecx */ W32((u32)(0xa8ecb0u), r_ecx);
    /* 00622e66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622e6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622e6f: je 0x622e76 */ if (fZ) goto L_00622e76;
L_00622e71:; BB(0x00622e71);
    /* 00622e71: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x622e76u); f_005b90d0();
L_00622e76:; BB(0x00622e76);
    /* 00622e76: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00622e78: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x622e7du); f_008581c5();
    /* 00622e7d: mov edx, dword ptr [0xa8ecb0] */ r_edx = R32((u32)(0xa8ecb0u));
    /* 00622e83: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00622e89: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00622e8c: mov dword ptr [0xa8ecac], eax */ W32((u32)(0xa8ecacu), r_eax);
    /* 00622e91: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00622e94: push 0x931604 */ { u32 v = 0x931604u; r_esp -= 4; W32(r_esp, v); }
    /* 00622e99: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x622e9eu); f_008009dc();
    /* 00622e9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00622ea1: mov edx, dword ptr [0xa8ecac] */ r_edx = R32((u32)(0xa8ecacu));
    /* 00622ea7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622eaa: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00622eac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622eaf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622eb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00622eb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622eb9: ret  */ FN_RET(0x00622df0); r_esp += 4; return;
L_00622eba:; BB(0x00622eba);
    /* 00622eba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00622ebc: jmp 0x622e60 */ goto L_00622e60;
}

void f_00622ec0(void) /* sub_622EC0 */
{
    FN_ENTER(0x00622ec0);
    /* 00622ec0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00622ec1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00622ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00622ec5: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x622ecau); f_00622f58();
    /* 00622eca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00622ece: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622ed0: jne 0x622ed6 */ if (!fZ) goto L_00622ed6;
L_00622ed2:; BB(0x00622ed2);
    /* 00622ed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622ed3: ret 4 */ FN_RET(0x00622ec0); r_esp += 8; return;
L_00622ed6:; BB(0x00622ed6);
    /* 00622ed6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00622ed7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x622edcu); f_005c2f74();
    /* 00622edc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622ede: ret 4 */ FN_RET(0x00622ec0); r_esp += 8; return;
}

void f_00622ee4(void) /* sub_622EE4 */
{
    FN_ENTER(0x00622ee4);
    /* 00622ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00622ee5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00622ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00622ee9: call 0x622f08 */ r_esp -= 4; W32(r_esp, 0x622eeeu); f_00622f08();
    /* 00622eee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00622ef2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00622ef4: jne 0x622efa */ if (!fZ) goto L_00622efa;
L_00622ef6:; BB(0x00622ef6);
    /* 00622ef6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622ef7: ret 4 */ FN_RET(0x00622ee4); r_esp += 8; return;
L_00622efa:; BB(0x00622efa);
    /* 00622efa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00622efb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x622f00u); f_005c2f74();
    /* 00622f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622f01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00622f02: ret 4 */ FN_RET(0x00622ee4); r_esp += 8; return;
}

void f_00622f08(void) /* sub_622F08 */
{
    FN_ENTER(0x00622f08);
    /* 00622f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622f09: mov ebp, esp */ r_ebp = r_esp;
    /* 00622f0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622f0d: push 0x8e2500 */ { u32 v = 0x8e2500u; r_esp -= 4; W32(r_esp, v); }
    /* 00622f12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622f19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622f20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622f23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622f26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622f29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622f2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00622f32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622f35: mov dword ptr [ecx], 0xb28204 */ W32((u32)(r_ecx), 0xb28204u);
    /* 00622f3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622f42: call 0x622f58 */ r_esp -= 4; W32(r_esp, 0x622f47u); f_00622f58();
    /* 00622f47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622f4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622f51: mov esp, ebp */ r_esp = r_ebp;
    /* 00622f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622f54: ret  */ FN_RET(0x00622f08); r_esp += 4; return;
}

void f_00622f58(void) /* sub_622F58 */
{
    FN_ENTER(0x00622f58);
    /* 00622f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622f59: mov ebp, esp */ r_ebp = r_esp;
    /* 00622f5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00622f5d: push 0x8e251c */ { u32 v = 0x8e251cu; r_esp -= 4; W32(r_esp, v); }
    /* 00622f62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00622f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622f69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00622f70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622f73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00622f76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00622f79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00622f7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00622f7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00622f82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00622f85: mov dword ptr [ecx], 0xb281d0 */ W32((u32)(r_ecx), 0xb281d0u);
    /* 00622f8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622f92: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x622f97u); f_006131f4();
    /* 00622f97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622f9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00622fa1: mov esp, ebp */ r_esp = r_ebp;
    /* 00622fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622fa4: ret  */ FN_RET(0x00622f58); r_esp += 4; return;
}

void f_00622fa8(void) /* sub_622FA8 */
{
    FN_ENTER(0x00622fa8);
    /* 00622fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622fa9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00622fab: mov ecx, dword ptr [ebp + 0xfc] */ r_ecx = R32((u32)(r_ebp+0xfcu));
    /* 00622fb1: add ecx, dword ptr [ebp + 0xf8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xf8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622fb7: mov dword ptr [ebp + 0xfc], ecx */ W32((u32)(r_ebp+0xfcu), r_ecx);
    /* 00622fbd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x622fc2u); f_0082dcbc();
    /* 00622fc2: fld dword ptr [ebp + 0xec] */ FPUSH(R_F32((u32)(r_ebp+0xecu)));
    /* 00622fc8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00622fca: fstp dword ptr [ebp + 0xf0] */ W_F32((u32)(r_ebp+0xf0u), ST(0)); FPOP();
    /* 00622fd0: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x622fd5u); f_004f7c84();
    /* 00622fd5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622fd8: je 0x62301e */ if (fZ) goto L_0062301e;
L_00622fda:; BB(0x00622fda);
    /* 00622fda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00622fdc: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x622fe1u); f_0061347c();
    /* 00622fe1: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 00622fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622fe9: je 0x623015 */ if (fZ) goto L_00623015;
L_00622feb:; BB(0x00622feb);
    /* 00622feb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622fee: je 0x62300c */ if (fZ) goto L_0062300c;
L_00622ff0:; BB(0x00622ff0);
    /* 00622ff0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622ff3: jne 0x622ffe */ if (!fZ) goto L_00622ffe;
L_00622ff5:; BB(0x00622ff5);
    /* 00622ff5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00622ff7: call 0x623070 */ r_esp -= 4; W32(r_esp, 0x622ffcu); f_00623070();
    /* 00622ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622ffd: ret  */ FN_RET(0x00622fa8); r_esp += 4; return;
L_00622ffe:; BB(0x00622ffe);
    /* 00622ffe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00623001: jne 0x623013 */ if (!fZ) goto L_00623013;
L_00623003:; BB(0x00623003);
    /* 00623003: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00623005: call 0x623028 */ r_esp -= 4; W32(r_esp, 0x62300au); f_00623028();
    /* 0062300a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062300b: ret  */ FN_RET(0x00622fa8); r_esp += 4; return;
L_0062300c:; BB(0x0062300c);
    /* 0062300c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062300e: call 0x6232b0 */ r_esp -= 4; W32(r_esp, 0x623013u); f_006232b0();
L_00623013:; BB(0x00623013);
    /* 00623013: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623014: ret  */ FN_RET(0x00622fa8); r_esp += 4; return;
L_00623015:; BB(0x00623015);
    /* 00623015: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00623017: call 0x62333c */ r_esp -= 4; W32(r_esp, 0x62301cu); f_0062333c();
    /* 0062301c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062301d: ret  */ FN_RET(0x00622fa8); r_esp += 4; return;
L_0062301e:; BB(0x0062301e);
    /* 0062301e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00623021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00623023: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x623026u); call_ind(t); }
    /* 00623026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623027: ret  */ FN_RET(0x00622fa8); r_esp += 4; return;
}

