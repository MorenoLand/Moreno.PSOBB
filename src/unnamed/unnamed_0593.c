#include "protos.h"

void f_00593140(void)
{
    FN_ENTER(0x00593140);
    goto L_00593140;
L_00593093:; BB(0x00593093);
    /* 00593093: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593095: mov ecx, edi */ r_ecx = r_edi;
    /* 00593097: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59309du); call_ind(t); }
    /* 0059309d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059309e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059309f: ret 4 */ FN_RET(0x00593140); r_esp += 8; return;
L_00593140:; BB(0x00593140);
    /* 00593140: jmp 0x593093 */ goto L_00593093;
}

void f_00593268(void) /* sub_593268 */
{
    FN_ENTER(0x00593268);
    /* 00593268: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593269: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059326a: mov esi, ecx */ r_esi = r_ecx;
    /* 0059326c: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00593272: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 00593279: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059327c: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x593281u); f_00520e3c();
    /* 00593281: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00593282: mov edx, dword ptr [esi + 0x408] */ r_edx = R32((u32)(r_esi+0x408u));
    /* 00593288: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059328a: jle 0x5932db */ if ((fZ||fS!=fO)) goto L_005932db;
L_0059328c:; BB(0x0059328c);
    /* 0059328c: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00593291: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593294: je 0x5932ec */ if (fZ) goto L_005932ec;
L_00593296:; BB(0x00593296);
    /* 00593296: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0059329c: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 005932a3: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005932a6: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x5932abu); f_00520e3c();
    /* 005932ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005932ac: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 005932af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005932b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005932b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005932b2: call 0x6f1eb0 */ r_esp -= 4; W32(r_esp, 0x5932b7u); f_006f1eb0();
    /* 005932b7: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005932bd: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 005932c4: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005932c7: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x5932ccu); f_00520e3c();
    /* 005932cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005932cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005932ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005932cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005932d0: call 0x6e7998 */ r_esp -= 4; W32(r_esp, 0x5932d5u); f_006e7998();
    /* 005932d5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005932d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005932d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005932da: ret  */ FN_RET(0x00593268); r_esp += 4; return;
L_005932db:; BB(0x005932db);
    /* 005932db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005932dc: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005932df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005932e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005932e1: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x5932e6u); f_006eeeb4();
    /* 005932e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005932e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005932ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005932eb: ret  */ FN_RET(0x00593268); r_esp += 4; return;
L_005932ec:; BB(0x005932ec);
    /* 005932ec: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005932f2: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 005932f9: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005932fc: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x593301u); f_00520e3c();
    /* 00593301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593302: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00593305: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593306: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00593307: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x59330cu); f_006f0984();
    /* 0059330c: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00593312: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 00593319: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059331c: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x593321u); f_00520e3c();
    /* 00593321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593322: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593323: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00593324: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x593329u); f_006e2634();
    /* 00593329: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059332c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059332d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059332e: ret  */ FN_RET(0x00593268); r_esp += 4; return;
}

void f_00593330(void) /* sub_593330 */
{
    FN_ENTER(0x00593330);
    /* 00593330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593331: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00593332: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00593334: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00593338: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059333b: je 0x5933d5 */ if (fZ) goto L_005933d5;
L_00593341:; BB(0x00593341);
    /* 00593341: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593344: je 0x5933bc */ if (fZ) goto L_005933bc;
L_00593346:; BB(0x00593346);
    /* 00593346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593348: jne 0x5933a3 */ if (!fZ) goto L_005933a3;
L_0059334a:; BB(0x0059334a);
    /* 0059334a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059334c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593351u); f_007aa094();
    /* 00593351: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00593357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593359: jne 0x593371 */ if (!fZ) goto L_00593371;
L_0059335b:; BB(0x0059335b);
    /* 0059335b: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00593361: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00593363: je 0x593393 */ if (fZ) goto L_00593393;
L_00593365:; BB(0x00593365);
    /* 00593365: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
    /* 0059336f: jmp 0x593393 */ goto L_00593393;
L_00593371:; BB(0x00593371);
    /* 00593371: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593374: jne 0x593393 */ if (!fZ) goto L_00593393;
L_00593376:; BB(0x00593376);
    /* 00593376: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 0059337c: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00593382: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x593385u); call_ind(t); }
    /* 00593385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593387: je 0x593393 */ if (fZ) goto L_00593393;
L_00593389:; BB(0x00593389);
    /* 00593389: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
L_00593393:; BB(0x00593393);
    /* 00593393: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00593396: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593398: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59339eu); call_ind(t); }
    /* 0059339e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059339f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005933a0: ret 4 */ FN_RET(0x00593330); r_esp += 8; return;
L_005933a3:; BB(0x005933a3);
    /* 005933a3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005933a6: jne 0x5933d0 */ if (!fZ) goto L_005933d0;
L_005933a8:; BB(0x005933a8);
    /* 005933a8: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005933ae: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005933b1: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005933b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005933b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005933b9: ret 4 */ FN_RET(0x00593330); r_esp += 8; return;
L_005933bc:; BB(0x005933bc);
    /* 005933bc: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 005933c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005933c5: jne 0x5933d0 */ if (!fZ) goto L_005933d0;
L_005933c7:; BB(0x005933c7);
    /* 005933c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005933c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005933cb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5933d0u); f_0051f62c();
L_005933d0:; BB(0x005933d0);
    /* 005933d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005933d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005933d2: ret 4 */ FN_RET(0x00593330); r_esp += 8; return;
L_005933d5:; BB(0x005933d5);
    /* 005933d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005933d7: mov eax, 8 */ r_eax = 0x8u;
    /* 005933dc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005933e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005933e5: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5933eau); f_0051f664();
    /* 005933ea: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005933ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005933ef: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5933f5u); call_ind(t); }
    /* 005933f5: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005933f7: mov ebx, dword ptr [ebp + 0x3d4] */ r_ebx = R32((u32)(r_ebp+0x3d4u));
    /* 005933fd: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00593403: and ebx, 0xffeffffc */ {  u32 a = r_ebx; u32 b = 0xffeffffcu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00593409: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0059340c: mov dword ptr [ebp + 0x3d4], ebx */ W32((u32)(r_ebp+0x3d4u), r_ebx);
    /* 00593412: lea ebx, [ebp + 0x41c] */ r_ebx = (u32)(r_ebp+0x41cu);
    /* 00593418: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059341a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x59341du); call_ind(t); }
    /* 0059341d: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00593423: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593425: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x593428u); call_ind(t); }
    /* 00593428: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
    /* 00593432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593434: ret 4 */ FN_RET(0x00593330); r_esp += 8; return;
}

void f_00593360(void)
{
    FN_ENTER(0x00593360);
    /* 00593360: add byte ptr [eax - 0x38d18bf0], ch */ { u32 ad = (u32)(r_eax+0xc72e7410u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00593366: test dword ptr [esp + eax], edi */ {  u32 a = R32((u32)(r_esp+r_eax)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;   }
    /* 00593369: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059336b: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059336d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059336f: jmp 0x593393 */ goto L_00593393;
L_00593393:; BB(0x00593393);
    /* 00593393: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00593396: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593398: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59339eu); call_ind(t); }
    /* 0059339e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059339f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005933a0: ret 4 */ FN_RET(0x00593360); r_esp += 8; return;
}

void f_00593438(void) /* sub_593438 */
{
    FN_ENTER(0x00593438);
    /* 00593438: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00593439: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059343c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059343e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00593442: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593445: je 0x59367e */ if (fZ) goto L_0059367e;
L_0059344b:; BB(0x0059344b);
    /* 0059344b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059344e: je 0x5935a6 */ if (fZ) goto L_005935a6;
L_00593454:; BB(0x00593454);
    /* 00593454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593456: jne 0x593589 */ if (!fZ) goto L_00593589;
L_0059345c:; BB(0x0059345c);
    /* 0059345c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059345e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593463u); f_007aa094();
    /* 00593463: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 00593469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059346b: je 0x593515 */ if (fZ) goto L_00593515;
L_00593471:; BB(0x00593471);
    /* 00593471: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593474: jne 0x5934dd */ if (!fZ) goto L_005934dd;
L_00593476:; BB(0x00593476);
    /* 00593476: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0059347c: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 00593482: fcomp dword ptr [0x92909c] */ fx_compare(ST(0), R_F32((u32)(0x92909cu))); FPOP();
    /* 00593488: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059348a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059348b: jb 0x5934bd */ if (fC) goto L_005934bd;
L_0059348d:; BB(0x0059348d);
    /* 0059348d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059348f: mov dword ptr [ebx + 0x43c], 2 */ W32((u32)(r_ebx+0x43cu), 0x2u);
    /* 00593499: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059349b: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5934a1u); call_ind(t); }
    /* 005934a1: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005934a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005934a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005934a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005934a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005934a9: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 005934ae: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5934b3u); f_00814298();
    /* 005934b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005934b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005934b8: call 0x593788 */ r_esp -= 4; W32(r_esp, 0x5934bdu); f_00593788();
L_005934bd:; BB(0x005934bd);
    /* 005934bd: push dword ptr [ebx + 0x448] */ { u32 v = R32((u32)(r_ebx+0x448u)); r_esp -= 4; W32(r_esp, v); }
    /* 005934c3: push dword ptr [ebx + 0x3b0] */ { u32 v = R32((u32)(r_ebx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005934c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005934cb: push dword ptr [ebx + 0x3a8] */ { u32 v = R32((u32)(r_ebx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005934d1: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5934d6u); f_005209d4();
    /* 005934d6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005934d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005934da: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_005934dd:; BB(0x005934dd);
    /* 005934dd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005934e0: jne 0x5935b1 */ if (!fZ) goto L_005935b1;
L_005934e6:; BB(0x005934e6);
    /* 005934e6: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005934ec: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005934ee: je 0x5934fa */ if (fZ) goto L_005934fa;
L_005934f0:; BB(0x005934f0);
    /* 005934f0: mov dword ptr [ebx + 0x43c], 3 */ W32((u32)(r_ebx+0x43cu), 0x3u);
L_005934fa:; BB(0x005934fa);
    /* 005934fa: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005934fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005934fe: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593504u); call_ind(t); }
    /* 00593504: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00593506: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593508: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59350eu); call_ind(t); }
    /* 0059350e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593512: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_00593515:; BB(0x00593515);
    /* 00593515: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059351a: push dword ptr [ebx + 0x444] */ { u32 v = R32((u32)(r_ebx+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593520: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593523: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x593528u); f_007a8c74();
    /* 00593528: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059352b: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00593531: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 00593537: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0059353a: fcomp dword ptr [0x929098] */ fx_compare(ST(0), R_F32((u32)(0x929098u))); FPOP();
    /* 00593540: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593543: jb 0x59356e */ if (fC) goto L_0059356e;
L_00593545:; BB(0x00593545);
    /* 00593545: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00593547: mov dword ptr [ebx + 0x43c], 1 */ W32((u32)(r_ebx+0x43cu), 0x1u);
    /* 00593551: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593553: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x593559u); call_ind(t); }
    /* 00593559: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059355c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059355e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059355f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593561: push 0x27e */ { u32 v = 0x27eu; r_esp -= 4; W32(r_esp, v); }
    /* 00593566: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59356bu); f_00814298();
    /* 0059356b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059356e:; BB(0x0059356e);
    /* 0059356e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00593570: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593572: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593578u); call_ind(t); }
    /* 00593578: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059357a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059357c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x593582u); call_ind(t); }
    /* 00593582: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593585: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593586: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_00593589:; BB(0x00593589);
    /* 00593589: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059358c: jne 0x5935b1 */ if (!fZ) goto L_005935b1;
L_0059358e:; BB(0x0059358e);
    /* 0059358e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00593590: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593592: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x593598u); call_ind(t); }
    /* 00593598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059359a: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x59359fu); f_00520be8();
    /* 0059359f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005935a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005935a3: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_005935a6:; BB(0x005935a6);
    /* 005935a6: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 005935ac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005935af: je 0x5935b8 */ if (fZ) goto L_005935b8;
L_005935b1:; BB(0x005935b1);
    /* 005935b1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005935b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005935b5: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_005935b8:; BB(0x005935b8);
    /* 005935b8: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005935be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005935c0: jne 0x5935e4 */ if (!fZ) goto L_005935e4;
L_005935c2:; BB(0x005935c2);
    /* 005935c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005935c4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5935c9u); f_007751b0();
    /* 005935c9: fcomp dword ptr [ebx + 0x3f4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3f4u))); FPOP();
    /* 005935cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005935d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005935d2: ja 0x5935e4 */ if ((!fC&&!fZ)) goto L_005935e4;
L_005935d4:; BB(0x005935d4);
    /* 005935d4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005935d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005935d8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5935ddu); f_0051f62c();
    /* 005935dd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005935e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005935e1: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_005935e4:; BB(0x005935e4);
    /* 005935e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005935e6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5935ebu); f_007751b0();
    /* 005935eb: fcomp dword ptr [ebx + 0x3f0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3f0u))); FPOP();
    /* 005935f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005935f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005935f4: ja 0x59364c */ if ((!fC&&!fZ)) goto L_0059364c;
L_005935f6:; BB(0x005935f6);
    /* 005935f6: mov eax, dword ptr [ebx + 0x408] */ r_eax = R32((u32)(r_ebx+0x408u));
    /* 005935fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005935fe: jle 0x59363c */ if ((fZ||fS!=fO)) goto L_0059363c;
L_00593600:; BB(0x00593600);
    /* 00593600: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593602: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x593607u); f_007751b0();
    /* 00593607: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0059360d: mov edx, dword ptr [edx*4 + 0xa744e0] */ r_edx = R32((u32)(r_edx*4+0xa744e0u));
    /* 00593614: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 00593617: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593619: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059361a: jbe 0x59362c */ if ((fC||fZ)) goto L_0059362c;
L_0059361c:; BB(0x0059361c);
    /* 0059361c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059361e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593620: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593625u); f_0051f62c();
    /* 00593625: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593628: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593629: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_0059362c:; BB(0x0059362c);
    /* 0059362c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059362e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593630: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593635u); f_0051f62c();
    /* 00593635: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593638: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593639: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_0059363c:; BB(0x0059363c);
    /* 0059363c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059363e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593640: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593645u); f_0051f62c();
    /* 00593645: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593648: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593649: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_0059364c:; BB(0x0059364c);
    /* 0059364c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059364e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x593653u); f_007751b0();
    /* 00593653: fcomp dword ptr [ebx + 0x3fc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3fcu))); FPOP();
    /* 00593659: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059365b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059365c: ja 0x59366e */ if ((!fC&&!fZ)) goto L_0059366e;
L_0059365e:; BB(0x0059365e);
    /* 0059365e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00593660: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593662: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593667u); f_0051f62c();
    /* 00593667: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059366a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059366b: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_0059366e:; BB(0x0059366e);
    /* 0059366e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00593670: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593672: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593677u); f_0051f62c();
    /* 00593677: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059367a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059367b: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
L_0059367e:; BB(0x0059367e);
    /* 0059367e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00593680: mov eax, 3 */ r_eax = 0x3u;
    /* 00593685: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059368c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059368e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x593693u); f_0051f664();
    /* 00593693: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00593695: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00593697: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59369du); call_ind(t); }
    /* 0059369d: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005936a3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005936a5: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005936aa: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005936af: mov dword ptr [ebx + 0x404], 0 */ W32((u32)(r_ebx+0x404u), 0x0u);
    /* 005936b9: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 005936bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005936c1: mov dword ptr [ebx + 0x43c], 3 */ W32((u32)(r_ebx+0x43cu), 0x3u);
    /* 005936cb: call dword ptr [edx + 0x1a8] */ { u32 t = R32((u32)(r_edx+0x1a8u)); r_esp -= 4; W32(r_esp, 0x5936d1u); call_ind(t); }
    /* 005936d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005936d3: je 0x593778 */ if (fZ) goto L_00593778;
L_005936d9:; BB(0x005936d9);
    /* 005936d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005936db: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5936e0u); f_005213d8();
    /* 005936e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005936e2: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5936e7u); f_00521410();
    /* 005936e7: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 005936ed: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 005936f3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005936f5: fmul qword ptr [0x928f88] */ ST(0) = ST(0) * R_F64((u32)(0x928f88u));
    /* 005936fb: fdiv qword ptr [0x928f80] */ ST(0) = ST(0) / R_F64((u32)(0x928f80u));
    /* 00593701: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00593704: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00593708: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059370d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00593711: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00593715: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00593719: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0059371c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059371e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00593722: mov dword ptr [ebx + 0x444], eax */ W32((u32)(r_ebx+0x444u), r_eax);
    /* 00593728: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059372d: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593733: call 0x5911cc */ r_esp -= 4; W32(r_esp, 0x593738u); f_005911cc();
    /* 00593738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059373a: jne 0x593778 */ if (!fZ) goto L_00593778;
L_0059373c:; BB(0x0059373c);
    /* 0059373c: fld dword ptr [0x929094] */ FPUSH(R_F32((u32)(0x929094u)));
    /* 00593742: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00593748: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0059374e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00593750: fchs  */ ST(0) = -ST(0);
    /* 00593752: fstp dword ptr [ebx + 0x3a8] */ W_F32((u32)(r_ebx+0x3a8u), ST(0)); FPOP();
    /* 00593758: mov dword ptr [ebx + 0x43c], 0 */ W32((u32)(r_ebx+0x43cu), 0x0u);
    /* 00593762: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00593764: fdiv dword ptr [0xa744b0] */ ST(0) = ST(0) / R_F32((u32)(0xa744b0u));
    /* 0059376a: fstp dword ptr [ebx + 0x448] */ W_F32((u32)(r_ebx+0x448u), ST(0)); FPOP();
    /* 00593770: fchs  */ ST(0) = -ST(0);
    /* 00593772: fstp dword ptr [ebx + 0x3b0] */ W_F32((u32)(r_ebx+0x3b0u), ST(0)); FPOP();
L_00593778:; BB(0x00593778);
    /* 00593778: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059377a: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x59377fu); f_00520bdc();
    /* 0059377f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593782: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00593783: ret 4 */ FN_RET(0x00593438); r_esp += 8; return;
}

void f_00593788(void) /* sub_593788 */
{
    FN_ENTER(0x00593788);
    /* 00593788: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00593789: lea ebx, [ecx + 0x38] */ r_ebx = (u32)(r_ecx+0x38u);
    /* 0059378c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059378d: call 0x5912e4 */ r_esp -= 4; W32(r_esp, 0x593792u); f_005912e4();
    /* 00593792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00593794: jne 0x5937a4 */ if (!fZ) goto L_005937a4;
L_00593796:; BB(0x00593796);
    /* 00593796: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059379b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059379c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5937a1u); f_0050b510();
    /* 005937a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005937a4:; BB(0x005937a4);
    /* 005937a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005937a5: ret  */ FN_RET(0x00593788); r_esp += 4; return;
}

void f_005937a8(void) /* sub_5937A8 */
{
    FN_ENTER(0x005937a8);
    /* 005937a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005937a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005937aa: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005937ad: mov edi, ecx */ r_edi = r_ecx;
    /* 005937af: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005937b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937b6: je 0x593a14 */ if (fZ) goto L_00593a14;
L_005937bc:; BB(0x005937bc);
    /* 005937bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937bf: je 0x5939bf */ if (fZ) goto L_005939bf;
L_005937c5:; BB(0x005937c5);
    /* 005937c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937c7: jne 0x5939e5 */ if (!fZ) goto L_005939e5;
L_005937cd:; BB(0x005937cd);
    /* 005937cd: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 005937d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937d5: je 0x5939ed */ if (fZ) goto L_005939ed;
L_005937db:; BB(0x005937db);
    /* 005937db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937de: je 0x59388a */ if (fZ) goto L_0059388a;
L_005937e4:; BB(0x005937e4);
    /* 005937e4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005937e7: jne 0x59383c */ if (!fZ) goto L_0059383c;
L_005937e9:; BB(0x005937e9);
    /* 005937e9: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 005937ef: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 005937f5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005937f8: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 005937fe: mov ebp, dword ptr [eax*4 + 0xa744e0] */ r_ebp = R32((u32)(r_eax*4+0xa744e0u));
    /* 00593805: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00593808: jl 0x59382d */ if ((fS!=fO)) goto L_0059382d;
L_0059380a:; BB(0x0059380a);
    /* 0059380a: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593810: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593815: je 0x593823 */ if (fZ) goto L_00593823;
L_00593817:; BB(0x00593817);
    /* 00593817: mov dword ptr [edi + 0x43c], 3 */ W32((u32)(r_edi+0x43cu), 0x3u);
    /* 00593821: jmp 0x59382d */ goto L_0059382d;
L_00593823:; BB(0x00593823);
    /* 00593823: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
L_0059382d:; BB(0x0059382d);
    /* 0059382d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059382f: mov ecx, edi */ r_ecx = r_edi;
    /* 00593831: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593837u); call_ind(t); }
    /* 00593837: jmp 0x5939ad */ goto L_005939ad;
L_0059383c:; BB(0x0059383c);
    /* 0059383c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059383f: jne 0x5939ad */ if (!fZ) goto L_005939ad;
L_00593845:; BB(0x00593845);
    /* 00593845: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 0059384b: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00593851: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x593854u); call_ind(t); }
    /* 00593854: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593856: je 0x5939ad */ if (fZ) goto L_005939ad;
L_0059385c:; BB(0x0059385c);
    /* 0059385c: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593862: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593867: mov ecx, edi */ r_ecx = r_edi;
    /* 00593869: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059386e: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
    /* 00593878: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059387e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593880: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x593885u); f_007b52c4();
    /* 00593885: jmp 0x5939ad */ goto L_005939ad;
L_0059388a:; BB(0x0059388a);
    /* 0059388a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059388c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593891u); f_007aa094();
    /* 00593891: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593893: mov ecx, edi */ r_ecx = r_edi;
    /* 00593895: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x59389bu); call_ind(t); }
    /* 0059389b: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005938a1: fcomp dword ptr [0x92908c] */ fx_compare(ST(0), R_F32((u32)(0x92908cu))); FPOP();
    /* 005938a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005938a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005938aa: jae 0x593939 */ if (!fC) goto L_00593939;
L_005938b0:; BB(0x005938b0);
    /* 005938b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005938b2: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5938b7u); f_00521238();
    /* 005938b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005938b9: jne 0x5938c2 */ if (!fZ) goto L_005938c2;
L_005938bb:; BB(0x005938bb);
    /* 005938bb: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005938be: mov eax, edx */ r_eax = r_edx;
    /* 005938c0: jmp 0x59390c */ goto L_0059390c;
L_005938c2:; BB(0x005938c2);
    /* 005938c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005938c4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5938c9u); f_005213d8();
    /* 005938c9: mov ecx, edi */ r_ecx = r_edi;
    /* 005938cb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5938d0u); f_00521410();
    /* 005938d0: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005938d6: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005938dc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005938de: fmul qword ptr [0x928f78] */ ST(0) = ST(0) * R_F64((u32)(0x928f78u));
    /* 005938e4: fdiv qword ptr [0x928f70] */ ST(0) = ST(0) / R_F64((u32)(0x928f70u));
    /* 005938ea: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005938ed: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005938f0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005938f4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005938f9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005938fd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00593901: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00593905: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00593908: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_0059390c:; BB(0x0059390c);
    /* 0059390c: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 00593911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593913: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x593918u); f_007a8c74();
    /* 00593918: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059391b: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0059391e: mov ecx, eax */ r_ecx = r_eax;
    /* 00593920: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x593925u); f_0082dcbc();
    /* 00593925: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00593928: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 0059392e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x593933u); f_0082ddd8();
    /* 00593933: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
L_00593939:; BB(0x00593939);
    /* 00593939: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059393b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059393d: call dword ptr [eax + 0x1c8] */ { u32 t = R32((u32)(r_eax+0x1c8u)); r_esp -= 4; W32(r_esp, 0x593943u); call_ind(t); }
    /* 00593943: mov ecx, edi */ r_ecx = r_edi;
    /* 00593945: call 0x593ab8 */ r_esp -= 4; W32(r_esp, 0x59394au); f_00593ab8();
    /* 0059394a: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00593950: fcom dword ptr [0x929088] */ fx_compare(ST(0), R_F32((u32)(0x929088u))); 
    /* 00593956: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593958: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593959: jb 0x59398d */ if (fC) goto L_0059398d;
L_0059395b:; BB(0x0059395b);
    /* 0059395b: fcom dword ptr [0x929084] */ fx_compare(ST(0), R_F32((u32)(0x929084u))); 
    /* 00593961: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593963: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593964: ja 0x59398d */ if ((!fC&&!fZ)) goto L_0059398d;
L_00593966:; BB(0x00593966);
    /* 00593966: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00593968: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059396e: mov edx, dword ptr [eax*4 + 0xa744e0] */ r_edx = R32((u32)(r_eax*4+0xa744e0u));
    /* 00593975: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593978: mov ecx, edi */ r_ecx = r_edi;
    /* 0059397a: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593980: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593986: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x59398bu); f_0052069c();
    /* 0059398b: jmp 0x593999 */ goto L_00593999;
L_0059398d:; BB(0x0059398d);
    /* 0059398d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059398f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593991: mov ecx, edi */ r_ecx = r_edi;
    /* 00593993: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593999u); call_ind(t); }
L_00593999:; BB(0x00593999);
    /* 00593999: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0059399f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005939a1: je 0x5939ad */ if (fZ) goto L_005939ad;
L_005939a3:; BB(0x005939a3);
    /* 005939a3: mov dword ptr [edi + 0x43c], 2 */ W32((u32)(r_edi+0x43cu), 0x2u);
L_005939ad:; BB(0x005939ad);
    /* 005939ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005939af: mov ecx, edi */ r_ecx = r_edi;
    /* 005939b1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5939b7u); call_ind(t); }
    /* 005939b7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005939ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005939bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005939bc: ret 4 */ FN_RET(0x005937a8); r_esp += 8; return;
L_005939bf:; BB(0x005939bf);
    /* 005939bf: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 005939c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005939c8: jne 0x5939e5 */ if (!fZ) goto L_005939e5;
L_005939ca:; BB(0x005939ca);
    /* 005939ca: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005939d0: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005939d5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005939d7: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005939dd: mov ecx, edi */ r_ecx = r_edi;
    /* 005939df: call dword ptr [edx + 0x1b4] */ { u32 t = R32((u32)(r_edx+0x1b4u)); r_esp -= 4; W32(r_esp, 0x5939e5u); call_ind(t); }
L_005939e5:; BB(0x005939e5);
    /* 005939e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005939e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005939e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005939ea: ret 4 */ FN_RET(0x005937a8); r_esp += 8; return;
L_005939ed:; BB(0x005939ed);
    /* 005939ed: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005939f2: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 005939f8: call 0x576bb8 */ r_esp -= 4; W32(r_esp, 0x5939fdu); f_00576bb8();
    /* 005939fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005939ff: je 0x59388a */ if (fZ) goto L_0059388a;
L_00593a05:; BB(0x00593a05);
    /* 00593a05: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 00593a0f: jmp 0x59388a */ goto L_0059388a;
L_00593a14:; BB(0x00593a14);
    /* 00593a14: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00593a16: mov eax, 7 */ r_eax = 0x7u;
    /* 00593a1b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00593a22: mov ecx, edi */ r_ecx = r_edi;
    /* 00593a24: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x593a29u); f_0051f664();
    /* 00593a29: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593a2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00593a2d: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x593a33u); call_ind(t); }
    /* 00593a33: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593a38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593a3a: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593a40: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00593a45: or eax, 0x50000 */ {  u32 a = r_eax; u32 b = 0x50000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593a4a: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593a50: mov ecx, edi */ r_ecx = r_edi;
    /* 00593a52: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x593a57u); f_007b52ec();
    /* 00593a57: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00593a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593a5f: jne 0x593a6d */ if (!fZ) goto L_00593a6d;
L_00593a61:; BB(0x00593a61);
    /* 00593a61: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 00593a6b: jmp 0x593aa5 */ goto L_00593aa5;
L_00593a6d:; BB(0x00593a6d);
    /* 00593a6d: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00593a72: lea ebp, [edi + 0x41c] */ r_ebp = (u32)(r_edi+0x41cu);
    /* 00593a78: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593a7a: call 0x708120 */ r_esp -= 4; W32(r_esp, 0x593a7fu); f_00708120();
    /* 00593a7f: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00593a85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593a87: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x593a8au); call_ind(t); }
    /* 00593a8a: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593a90: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 00593a9a: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593a9f: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
L_00593aa5:; BB(0x00593aa5);
    /* 00593aa5: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
    /* 00593aaf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593ab3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593ab4: ret 4 */ FN_RET(0x005937a8); r_esp += 8; return;
}

void f_00593ab8(void) /* sub_593AB8 */
{
    FN_ENTER(0x00593ab8);
    /* 00593ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593ab9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00593abb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593abd: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593ac2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x593ac7u); f_007aaa30();
    /* 00593ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593ac9: jne 0x593adb */ if (!fZ) goto L_00593adb;
L_00593acb:; BB(0x00593acb);
    /* 00593acb: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593ad0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593ad2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x593ad7u); f_007aaa30();
    /* 00593ad7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00593ad9: je 0x593ae6 */ if (fZ) goto L_00593ae6;
L_00593adb:; BB(0x00593adb);
    /* 00593adb: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00593ade: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593adf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00593ae1: call 0x5912e4 */ r_esp -= 4; W32(r_esp, 0x593ae6u); f_005912e4();
L_00593ae6:; BB(0x00593ae6);
    /* 00593ae6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593ae7: ret  */ FN_RET(0x00593ab8); r_esp += 4; return;
}

void f_00593ae8(void) /* sub_593AE8 */
{
    FN_ENTER(0x00593ae8);
    /* 00593ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593ae9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00593aea: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00593aed: mov edi, ecx */ r_edi = r_ecx;
    /* 00593aef: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00593af3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593af6: je 0x594004 */ if (fZ) goto L_00594004;
L_00593afc:; BB(0x00593afc);
    /* 00593afc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593aff: je 0x593cfa */ if (fZ) goto L_00593cfa;
L_00593b05:; BB(0x00593b05);
    /* 00593b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b07: jne 0x593cc9 */ if (!fZ) goto L_00593cc9;
L_00593b0d:; BB(0x00593b0d);
    /* 00593b0d: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 00593b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b15: je 0x593fbc */ if (fZ) goto L_00593fbc;
L_00593b1b:; BB(0x00593b1b);
    /* 00593b1b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b1e: je 0x593f0e */ if (fZ) goto L_00593f0e;
L_00593b24:; BB(0x00593b24);
    /* 00593b24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b27: je 0x593d59 */ if (fZ) goto L_00593d59;
L_00593b2d:; BB(0x00593b2d);
    /* 00593b2d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b30: je 0x593d32 */ if (fZ) goto L_00593d32;
L_00593b36:; BB(0x00593b36);
    /* 00593b36: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b39: je 0x593c41 */ if (fZ) goto L_00593c41;
L_00593b3f:; BB(0x00593b3f);
    /* 00593b3f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b42: jne 0x593b98 */ if (!fZ) goto L_00593b98;
L_00593b44:; BB(0x00593b44);
    /* 00593b44: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00593b4a: fcomp dword ptr [0x929050] */ fx_compare(ST(0), R_F32((u32)(0x929050u))); FPOP();
    /* 00593b50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593b52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593b53: jbe 0x593ba1 */ if ((fC||fZ)) goto L_00593ba1;
L_00593b55:; BB(0x00593b55);
    /* 00593b55: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00593b5b: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00593b61: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x593b64u); call_ind(t); }
    /* 00593b64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b66: je 0x593ba1 */ if (fZ) goto L_00593ba1;
L_00593b68:; BB(0x00593b68);
    /* 00593b68: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593b6e: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593b73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593b75: mov dword ptr [edi + 0x43c], 6 */ W32((u32)(r_edi+0x43cu), 0x6u);
    /* 00593b7f: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00593b84: mov ecx, edi */ r_ecx = r_edi;
    /* 00593b86: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593b8b: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593b91: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x593b96u); f_007b52c4();
    /* 00593b96: jmp 0x593ba1 */ goto L_00593ba1;
L_00593b98:; BB(0x00593b98);
    /* 00593b98: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593b9b: jne 0x593d2a */ if (!fZ) goto L_00593d2a;
L_00593ba1:; BB(0x00593ba1);
    /* 00593ba1: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ba3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593ba8u); f_007aa094();
    /* 00593ba8: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593bad: mov ecx, edi */ r_ecx = r_edi;
    /* 00593baf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x593bb4u); f_007aaa30();
    /* 00593bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593bb6: je 0x593bfc */ if (fZ) goto L_00593bfc;
L_00593bb8:; BB(0x00593bb8);
    /* 00593bb8: mov ecx, edi */ r_ecx = r_edi;
    /* 00593bba: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x593bbfu); f_00521324();
    /* 00593bbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593bc1: je 0x593bfc */ if (fZ) goto L_00593bfc;
L_00593bc3:; BB(0x00593bc3);
    /* 00593bc3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593bc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593bc9: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 00593bcf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00593bd1: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x593bd4u); call_ind(t); }
    /* 00593bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593bd6: je 0x593bfc */ if (fZ) goto L_00593bfc;
L_00593bd8:; BB(0x00593bd8);
    /* 00593bd8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593bdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593bde: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 00593be4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00593be6: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x593be9u); call_ind(t); }
    /* 00593be9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00593beb: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00593bf1: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 00593bf7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00593bf9: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x593bfcu); call_ind(t); }
L_00593bfc:; BB(0x00593bfc);
    /* 00593bfc: fld dword ptr [edi + 0x44c] */ FPUSH(R_F32((u32)(r_edi+0x44cu)));
    /* 00593c02: fmul dword ptr [0x929064] */ ST(0) = ST(0) * R_F32((u32)(0x929064u));
    /* 00593c08: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 00593c0e: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 00593c14: fst dword ptr [edi + 0x44c] */ W_F32((u32)(r_edi+0x44cu), ST(0));
    /* 00593c1a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593c1d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00593c21: mov ecx, edi */ r_ecx = r_edi;
    /* 00593c23: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00593c26: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00593c2a: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x593c2fu); f_005207c4();
    /* 00593c2f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593c31: mov ecx, edi */ r_ecx = r_edi;
    /* 00593c33: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x593c39u); call_ind(t); }
    /* 00593c39: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593c3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593c3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593c3e: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593c41:; BB(0x00593c41);
    /* 00593c41: mov ecx, edi */ r_ecx = r_edi;
    /* 00593c43: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593c48u); f_007aa094();
    /* 00593c48: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00593c4e: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 00593c54: fcomp dword ptr [0x92904c] */ fx_compare(ST(0), R_F32((u32)(0x92904cu))); FPOP();
    /* 00593c5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593c5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593c5d: jb 0x593ca8 */ if (fC) goto L_00593ca8;
L_00593c5f:; BB(0x00593c5f);
    /* 00593c5f: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593c65: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593c6a: je 0x593c78 */ if (fZ) goto L_00593c78;
L_00593c6c:; BB(0x00593c6c);
    /* 00593c6c: mov dword ptr [edi + 0x43c], 5 */ W32((u32)(r_edi+0x43cu), 0x5u);
    /* 00593c76: jmp 0x593c82 */ goto L_00593c82;
L_00593c78:; BB(0x00593c78);
    /* 00593c78: mov dword ptr [edi + 0x43c], 6 */ W32((u32)(r_edi+0x43cu), 0x6u);
L_00593c82:; BB(0x00593c82);
    /* 00593c82: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593c84: mov ecx, edi */ r_ecx = r_edi;
    /* 00593c86: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x593c8cu); call_ind(t); }
    /* 00593c8c: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00593c8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00593c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593c93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593c94: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 00593c99: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x593c9eu); f_00814298();
    /* 00593c9e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593ca1: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ca3: call 0x593788 */ r_esp -= 4; W32(r_esp, 0x593ca8u); f_00593788();
L_00593ca8:; BB(0x00593ca8);
    /* 00593ca8: push dword ptr [edi + 0x44c] */ { u32 v = R32((u32)(r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00593cae: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593cb4: mov ecx, edi */ r_ecx = r_edi;
    /* 00593cb6: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00593cbc: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x593cc1u); f_00520adc();
    /* 00593cc1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593cc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593cc5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593cc6: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593cc9:; BB(0x00593cc9);
    /* 00593cc9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593ccc: jne 0x593d2a */ if (!fZ) goto L_00593d2a;
L_00593cce:; BB(0x00593cce);
    /* 00593cce: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00593cd1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00593cd3: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 00593cdd: mov dword ptr [edi + 0x3e8], eax */ W32((u32)(r_edi+0x3e8u), r_eax);
    /* 00593ce3: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ce5: call dword ptr [edx + 0x178] */ { u32 t = R32((u32)(r_edx+0x178u)); r_esp -= 4; W32(r_esp, 0x593cebu); call_ind(t); }
    /* 00593ceb: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ced: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x593cf2u); f_00520be8();
    /* 00593cf2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593cf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593cf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593cf7: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593cfa:; BB(0x00593cfa);
    /* 00593cfa: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 00593d00: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593d03: je 0x593d0f */ if (fZ) goto L_00593d0f;
L_00593d05:; BB(0x00593d05);
    /* 00593d05: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00593d0b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00593d0d: je 0x593d2a */ if (fZ) goto L_00593d2a;
L_00593d0f:; BB(0x00593d0f);
    /* 00593d0f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593d11: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d13: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593d19u); call_ind(t); }
    /* 00593d19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593d1b: je 0x593ff3 */ if (fZ) goto L_00593ff3;
L_00593d21:; BB(0x00593d21);
    /* 00593d21: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00593d23: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d25: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593d2au); f_0051f62c();
L_00593d2a:; BB(0x00593d2a);
    /* 00593d2a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593d2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593d2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593d2f: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593d32:; BB(0x00593d32);
    /* 00593d32: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00593d37: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00593d3d: call 0x576bb8 */ r_esp -= 4; W32(r_esp, 0x593d42u); f_00576bb8();
    /* 00593d42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593d44: je 0x593c41 */ if (fZ) goto L_00593c41;
L_00593d4a:; BB(0x00593d4a);
    /* 00593d4a: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
    /* 00593d54: jmp 0x593c41 */ goto L_00593c41;
L_00593d59:; BB(0x00593d59);
    /* 00593d59: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d5b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593d60u); f_007aa094();
    /* 00593d60: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d62: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x593d67u); f_00521238();
    /* 00593d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593d69: je 0x593d79 */ if (fZ) goto L_00593d79;
L_00593d6b:; BB(0x00593d6b);
    /* 00593d6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d6d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x593d72u); f_005213d8();
    /* 00593d72: mov ecx, edi */ r_ecx = r_edi;
    /* 00593d74: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x593d79u); f_00521410();
L_00593d79:; BB(0x00593d79);
    /* 00593d79: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00593d7f: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 00593d85: fcomp dword ptr [0x929048] */ fx_compare(ST(0), R_F32((u32)(0x929048u))); FPOP();
    /* 00593d8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00593d8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00593d8e: jb 0x593ef2 */ if (fC) goto L_00593ef2;
L_00593d94:; BB(0x00593d94);
    /* 00593d94: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00593d97: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00593d9d: fsub dword ptr [0x929174] */ ST(0) = ST(0) - R_F32((u32)(0x929174u));
    /* 00593da3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593da6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00593daa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00593dad: mov ecx, edi */ r_ecx = r_edi;
    /* 00593daf: call 0x5911cc */ r_esp -= 4; W32(r_esp, 0x593db4u); f_005911cc();
    /* 00593db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593db6: je 0x593dc7 */ if (fZ) goto L_00593dc7;
L_00593db8:; BB(0x00593db8);
    /* 00593db8: mov dword ptr [edi + 0x43c], 7 */ W32((u32)(r_edi+0x43cu), 0x7u);
    /* 00593dc2: jmp 0x593ef2 */ goto L_00593ef2;
L_00593dc7:; BB(0x00593dc7);
    /* 00593dc7: fld dword ptr [0x92905c] */ FPUSH(R_F32((u32)(0x92905cu)));
    /* 00593dcd: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00593dd3: fsub dword ptr [0x929174] */ ST(0) = ST(0) - R_F32((u32)(0x929174u));
    /* 00593dd9: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00593ddc: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00593ddf: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 00593de2: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00593de8: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 00593dee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00593df0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00593df2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00593df4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00593df6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00593df9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00593dfb: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00593dfe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00593e01: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00593e05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00593e07: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00593e0b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00593e0f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00593e13: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00593e17: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00593e1b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00593e1e: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00593e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593e21: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x593e26u); f_00780630();
    /* 00593e26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593e29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593e2b: je 0x593ee8 */ if (fZ) goto L_00593ee8;
L_00593e31:; BB(0x00593e31);
    /* 00593e31: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00593e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593e35: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x593e3au); f_00807cac();
    /* 00593e3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00593e3b: movsx edx, word ptr [edi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 00593e3f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593e41: jne 0x593edc */ if (!fZ) goto L_00593edc;
L_00593e47:; BB(0x00593e47);
    /* 00593e47: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00593e4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593e4f: jne 0x593e5d */ if (!fZ) goto L_00593e5d;
L_00593e51:; BB(0x00593e51);
    /* 00593e51: mov dword ptr [edi + 0x43c], 4 */ W32((u32)(r_edi+0x43cu), 0x4u);
    /* 00593e5b: jmp 0x593ea3 */ goto L_00593ea3;
L_00593e5d:; BB(0x00593e5d);
    /* 00593e5d: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00593e62: lea esi, [edi + 0x41c] */ r_esi = (u32)(r_edi+0x41cu);
    /* 00593e68: mov ecx, esi */ r_ecx = r_esi;
    /* 00593e6a: call 0x708120 */ r_esp -= 4; W32(r_esp, 0x593e6fu); f_00708120();
    /* 00593e6f: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00593e75: mov ecx, esi */ r_ecx = r_esi;
    /* 00593e77: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x593e7au); call_ind(t); }
    /* 00593e7a: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593e7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593e81: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00593e87: or eax, 0x140000 */ {  u32 a = r_eax; u32 b = 0x140000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593e8c: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00593e92: mov ecx, edi */ r_ecx = r_edi;
    /* 00593e94: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x593e99u); f_007b52ec();
    /* 00593e99: mov dword ptr [edi + 0x43c], 3 */ W32((u32)(r_edi+0x43cu), 0x3u);
L_00593ea3:; BB(0x00593ea3);
    /* 00593ea3: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00593ea9: fsub dword ptr [0x929174] */ ST(0) = ST(0) - R_F32((u32)(0x929174u));
    /* 00593eaf: fdiv dword ptr [0xa744b4] */ ST(0) = ST(0) / R_F32((u32)(0xa744b4u));
    /* 00593eb5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593eb7: fstp dword ptr [edi + 0x44c] */ W_F32((u32)(r_edi+0x44cu), ST(0)); FPOP();
    /* 00593ebd: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ebf: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x593ec5u); call_ind(t); }
    /* 00593ec5: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00593ec8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00593eca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593ecc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593ecd: push 0x281 */ { u32 v = 0x281u; r_esp -= 4; W32(r_esp, v); }
    /* 00593ed2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x593ed7u); f_00814298();
    /* 00593ed7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593eda: jmp 0x593ef2 */ goto L_00593ef2;
L_00593edc:; BB(0x00593edc);
    /* 00593edc: mov dword ptr [edi + 0x43c], 7 */ W32((u32)(r_edi+0x43cu), 0x7u);
    /* 00593ee6: jmp 0x593ef2 */ goto L_00593ef2;
L_00593ee8:; BB(0x00593ee8);
    /* 00593ee8: mov dword ptr [edi + 0x43c], 7 */ W32((u32)(r_edi+0x43cu), 0x7u);
L_00593ef2:; BB(0x00593ef2);
    /* 00593ef2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593ef4: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ef6: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593efcu); call_ind(t); }
    /* 00593efc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593efe: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f00: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x593f06u); call_ind(t); }
    /* 00593f06: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593f09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593f0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593f0b: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593f0e:; BB(0x00593f0e);
    /* 00593f0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f10: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593f15u); f_007aa094();
    /* 00593f15: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f17: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x593f1cu); f_00521238();
    /* 00593f1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593f1e: jne 0x593f27 */ if (!fZ) goto L_00593f27;
L_00593f20:; BB(0x00593f20);
    /* 00593f20: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00593f23: mov eax, edx */ r_eax = r_edx;
    /* 00593f25: jmp 0x593f74 */ goto L_00593f74;
L_00593f27:; BB(0x00593f27);
    /* 00593f27: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f29: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x593f2eu); f_005213d8();
    /* 00593f2e: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f30: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x593f35u); f_00521410();
    /* 00593f35: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00593f3b: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 00593f41: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00593f43: fmul qword ptr [0x928f68] */ ST(0) = ST(0) * R_F64((u32)(0x928f68u));
    /* 00593f49: fdiv qword ptr [0x928f60] */ ST(0) = ST(0) / R_F64((u32)(0x928f60u));
    /* 00593f4f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00593f52: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00593f56: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00593f5b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00593f60: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00593f64: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00593f68: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00593f6c: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00593f70: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
L_00593f74:; BB(0x00593f74);
    /* 00593f74: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593f7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00593f7b: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x593f80u); f_007a8c74();
    /* 00593f80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593f83: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00593f88: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00593f8b: mov ecx, edi */ r_ecx = r_edi;
    /* 00593f8d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x593f92u); f_007aaa30();
    /* 00593f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593f94: je 0x593fa0 */ if (fZ) goto L_00593fa0;
L_00593f96:; BB(0x00593f96);
    /* 00593f96: mov dword ptr [edi + 0x43c], 2 */ W32((u32)(r_edi+0x43cu), 0x2u);
L_00593fa0:; BB(0x00593fa0);
    /* 00593fa0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593fa2: mov ecx, edi */ r_ecx = r_edi;
    /* 00593fa4: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593faau); call_ind(t); }
    /* 00593faa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593fac: mov ecx, edi */ r_ecx = r_edi;
    /* 00593fae: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x593fb4u); call_ind(t); }
    /* 00593fb4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593fb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593fb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593fb9: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593fbc:; BB(0x00593fbc);
    /* 00593fbc: mov ecx, edi */ r_ecx = r_edi;
    /* 00593fbe: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x593fc3u); f_007aa094();
    /* 00593fc3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00593fc9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00593fcb: je 0x593fd7 */ if (fZ) goto L_00593fd7;
L_00593fcd:; BB(0x00593fcd);
    /* 00593fcd: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
L_00593fd7:; BB(0x00593fd7);
    /* 00593fd7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593fd9: mov ecx, edi */ r_ecx = r_edi;
    /* 00593fdb: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x593fe1u); call_ind(t); }
    /* 00593fe1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00593fe3: mov ecx, edi */ r_ecx = r_edi;
    /* 00593fe5: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x593febu); call_ind(t); }
    /* 00593feb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593fee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593fef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00593ff0: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00593ff3:; BB(0x00593ff3);
    /* 00593ff3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00593ff5: mov ecx, edi */ r_ecx = r_edi;
    /* 00593ff7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x593ffcu); f_0051f62c();
    /* 00593ffc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00593fff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594000: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594001: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
L_00594004:; BB(0x00594004);
    /* 00594004: mov eax, 6 */ r_eax = 0x6u;
    /* 00594009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059400a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00594011: mov ecx, edi */ r_ecx = r_edi;
    /* 00594013: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x594018u); f_0051f664();
    /* 00594018: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059401a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059401c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x594022u); call_ind(t); }
    /* 00594022: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00594028: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 00594032: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594037: mov ecx, edi */ r_ecx = r_edi;
    /* 00594039: mov dword ptr [edi + 0x448], 0 */ W32((u32)(r_edi+0x448u), 0x0u);
    /* 00594043: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00594048: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059404e: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x594053u); f_00520bdc();
    /* 00594053: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594056: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594057: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594058: ret 4 */ FN_RET(0x00593ae8); r_esp += 8; return;
}

