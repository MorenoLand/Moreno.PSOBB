#include "protos.h"

void f_004af170(void) /* sub_4AF170 */
{
    FN_ENTER(0x004af170);
    /* 004af170: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004af171: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004af172: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004af175: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004af177: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 004af17d: mov edx, dword ptr [ebx + 0x440] */ r_edx = R32((u32)(r_ebx+0x440u));
    /* 004af183: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004af186: mov eax, dword ptr [ebx + 0x444] */ r_eax = R32((u32)(r_ebx+0x444u));
    /* 004af18c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004af190: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af192: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004af196: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004af199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af19a: call 0x520158 */ r_esp -= 4; W32(r_esp, 0x4af19fu); f_00520158();
    /* 004af19f: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004af1a2: fcom dword ptr [0x907094] */ fx_compare(ST(0), R_F32((u32)(0x907094u))); 
    /* 004af1a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af1aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af1ab: jae 0x4af1b8 */ if (!fC) goto L_004af1b8;
L_004af1ad:; BB(0x004af1ad);
    /* 004af1ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004af1af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004af1b1: mov edx, 7 */ r_edx = 0x7u;
    /* 004af1b6: jmp 0x4af1d9 */ goto L_004af1d9;
L_004af1b8:; BB(0x004af1b8);
    /* 004af1b8: fcomp dword ptr [0x90708c] */ fx_compare(ST(0), R_F32((u32)(0x90708cu))); FPOP();
    /* 004af1be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af1c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af1c1: jb 0x4af1cf */ if (fC) goto L_004af1cf;
L_004af1c3:; BB(0x004af1c3);
    /* 004af1c3: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004af1c8: mov edx, 2 */ r_edx = 0x2u;
    /* 004af1cd: jmp 0x4af1d9 */ goto L_004af1d9;
L_004af1cf:; BB(0x004af1cf);
    /* 004af1cf: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004af1d4: mov edx, 4 */ r_edx = 0x4u;
L_004af1d9:; BB(0x004af1d9);
    /* 004af1d9: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004af1dc: fcom dword ptr [0x907090] */ fx_compare(ST(0), R_F32((u32)(0x907090u))); 
    /* 004af1e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af1e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af1e5: jae 0x4af1fb */ if (!fC) goto L_004af1fb;
L_004af1e7:; BB(0x004af1e7);
    /* 004af1e7: fcomp dword ptr [0x907088] */ fx_compare(ST(0), R_F32((u32)(0x907088u))); FPOP();
    /* 004af1ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af1ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af1f0: jbe 0x4af1fd */ if ((fC||fZ)) goto L_004af1fd;
L_004af1f2:; BB(0x004af1f2);
    /* 004af1f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004af1f4: mov edx, 7 */ r_edx = 0x7u;
    /* 004af1f9: jmp 0x4af1fd */ goto L_004af1fd;
L_004af1fb:; BB(0x004af1fb);
    /* 004af1fb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004af1fd:; BB(0x004af1fd);
    /* 004af1fd: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 004af203: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004af205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af207: je 0x4af246 */ if (fZ) goto L_004af246;
L_004af209:; BB(0x004af209);
    /* 004af209: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004af20d: not edx */ r_edx = ~r_edx;
    /* 004af20f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004af212: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af214: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004af216: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af218: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af21a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004af21c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af21e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004af220:; BB(0x004af220);
    /* 004af220: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 004af226: or dword ptr [eax + edi + 0x18], ecx */ { u32 ad = (u32)(r_eax+r_edi+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004af22a: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 004af230: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004af233: and dword ptr [eax + edi + 0x18], edx */ { u32 ad = (u32)(r_eax+r_edi+0x18u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004af237: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af23a: cmp esi, dword ptr [ebx + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af240: jne 0x4af220 */ if (!fZ) goto L_004af220;
L_004af242:; BB(0x004af242);
    /* 004af242: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_004af246:; BB(0x004af246);
    /* 004af246: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004af249: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af24a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004af24b: ret  */ FN_RET(0x004af170); r_esp += 4; return;
}

void f_004af24c(void) /* sub_4AF24C */
{
    FN_ENTER(0x004af24c);
    /* 004af24c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004af24d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004af24f: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004af255: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004af25b: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004af262: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004af265: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004af26b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004af26f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004af272: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004af275: ja 0x4af389 */ if ((!fC&&!fZ)) goto L_004af389;
L_004af27b:; BB(0x004af27b);
    /* 004af27b: mov ecx, dword ptr [ecx*4 + 0x904960] */ r_ecx = R32((u32)(r_ecx*4+0x904960u));
    /* 004af282: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af24c); r_esp += 4; return;
}

void f_004af284(void)
{
    FN_ENTER(0x004af284);
    goto L_004af284;
L_004af262:; BB(0x004af262);
    /* 004af262: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004af265: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004af26b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004af26f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004af272: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004af275: ja 0x4af389 */ if ((!fC&&!fZ)) goto L_004af389;
L_004af27b:; BB(0x004af27b);
    /* 004af27b: mov ecx, dword ptr [ecx*4 + 0x904960] */ r_ecx = R32((u32)(r_ecx*4+0x904960u));
    /* 004af282: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004af284:; BB(0x004af284);
    /* 004af284: mov eax, 1 */ r_eax = 0x1u;
    /* 004af289: jmp 0x4af262 */ goto L_004af262;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af284); r_esp += 4; return;
}

void f_004af28b(void)
{
    FN_ENTER(0x004af28b);
    /* 004af28b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af293: jne 0x4af29f */ if (!fZ) goto L_004af29f;
L_004af295:; BB(0x004af295);
    /* 004af295: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004af29a: jmp 0x4af389 */ goto L_004af389;
L_004af29f:; BB(0x004af29f);
    /* 004af29f: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004af2a4: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af28b); r_esp += 4; return;
}

void f_004af2a9(void)
{
    FN_ENTER(0x004af2a9);
    /* 004af2a9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af2af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af2b1: jne 0x4af2bd */ if (!fZ) goto L_004af2bd;
L_004af2b3:; BB(0x004af2b3);
    /* 004af2b3: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004af2b8: jmp 0x4af389 */ goto L_004af389;
L_004af2bd:; BB(0x004af2bd);
    /* 004af2bd: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004af2c2: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af2a9); r_esp += 4; return;
}

void f_004af2c7(void)
{
    FN_ENTER(0x004af2c7);
    /* 004af2c7: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af2cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af2cf: jne 0x4af2db */ if (!fZ) goto L_004af2db;
L_004af2d1:; BB(0x004af2d1);
    /* 004af2d1: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004af2d6: jmp 0x4af389 */ goto L_004af389;
L_004af2db:; BB(0x004af2db);
    /* 004af2db: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004af2e0: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af2c7); r_esp += 4; return;
}

void f_004af2e5(void)
{
    FN_ENTER(0x004af2e5);
    /* 004af2e5: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af2eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af2ed: jne 0x4af2f9 */ if (!fZ) goto L_004af2f9;
L_004af2ef:; BB(0x004af2ef);
    /* 004af2ef: mov eax, 0xf */ r_eax = 0xfu;
    /* 004af2f4: jmp 0x4af389 */ goto L_004af389;
L_004af2f9:; BB(0x004af2f9);
    /* 004af2f9: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004af2fe: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af2e5); r_esp += 4; return;
}

void f_004af303(void)
{
    FN_ENTER(0x004af303);
    /* 004af303: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af30b: jne 0x4af314 */ if (!fZ) goto L_004af314;
L_004af30d:; BB(0x004af30d);
    /* 004af30d: mov eax, 4 */ r_eax = 0x4u;
    /* 004af312: jmp 0x4af389 */ goto L_004af389;
L_004af314:; BB(0x004af314);
    /* 004af314: mov eax, 0xa */ r_eax = 0xau;
    /* 004af319: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af303); r_esp += 4; return;
}

void f_004af31b(void)
{
    FN_ENTER(0x004af31b);
    /* 004af31b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af321: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af323: jne 0x4af32c */ if (!fZ) goto L_004af32c;
L_004af325:; BB(0x004af325);
    /* 004af325: mov eax, 3 */ r_eax = 0x3u;
    /* 004af32a: jmp 0x4af389 */ goto L_004af389;
L_004af32c:; BB(0x004af32c);
    /* 004af32c: mov eax, 0xb */ r_eax = 0xbu;
    /* 004af331: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af31b); r_esp += 4; return;
}

void f_004af333(void)
{
    FN_ENTER(0x004af333);
    /* 004af333: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af335: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4af33au); f_00520bf4();
    /* 004af33a: fcomp dword ptr [0x907080] */ fx_compare(ST(0), R_F32((u32)(0x907080u))); FPOP();
    /* 004af340: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af342: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af343: jbe 0x4af34c */ if ((fC||fZ)) goto L_004af34c;
L_004af345:; BB(0x004af345);
    /* 004af345: mov eax, 0xc */ r_eax = 0xcu;
    /* 004af34a: jmp 0x4af389 */ goto L_004af389;
L_004af34c:; BB(0x004af34c);
    /* 004af34c: mov eax, 0xe */ r_eax = 0xeu;
    /* 004af351: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af333); r_esp += 4; return;
}

void f_004af353(void)
{
    FN_ENTER(0x004af353);
    /* 004af353: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af359: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af35b: jne 0x4af364 */ if (!fZ) goto L_004af364;
L_004af35d:; BB(0x004af35d);
    /* 004af35d: mov eax, 5 */ r_eax = 0x5u;
    /* 004af362: jmp 0x4af389 */ goto L_004af389;
L_004af364:; BB(0x004af364);
    /* 004af364: mov eax, 9 */ r_eax = 0x9u;
    /* 004af369: jmp 0x4af389 */ goto L_004af389;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af353); r_esp += 4; return;
}

void f_004af36b(void)
{
    FN_ENTER(0x004af36b);
    /* 004af36b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af36d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4af372u); f_00520bf4();
    /* 004af372: fcomp dword ptr [0x907080] */ fx_compare(ST(0), R_F32((u32)(0x907080u))); FPOP();
    /* 004af378: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af37a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af37b: jbe 0x4af384 */ if ((fC||fZ)) goto L_004af384;
L_004af37d:; BB(0x004af37d);
    /* 004af37d: mov eax, 8 */ r_eax = 0x8u;
    /* 004af382: jmp 0x4af389 */ goto L_004af389;
L_004af384:; BB(0x004af384);
    /* 004af384: mov eax, 6 */ r_eax = 0x6u;
L_004af389:; BB(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af36b); r_esp += 4; return;
}

void f_004af389(void)
{
    FN_ENTER(0x004af389);
    /* 004af389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af38a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af38c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af391u); f_004b5150();
    /* 004af391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af392: ret  */ FN_RET(0x004af389); r_esp += 4; return;
}

void f_004af394(void) /* sub_4AF394 */
{
    FN_ENTER(0x004af394);
    /* 004af394: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004af395: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004af397: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004af39b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af39e: je 0x4af560 */ if (fZ) goto L_004af560;
L_004af3a4:; BB(0x004af3a4);
    /* 004af3a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004af3a7: je 0x4af539 */ if (fZ) goto L_004af539;
L_004af3ad:; BB(0x004af3ad);
    /* 004af3ad: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004af3b0: je 0x4af539 */ if (fZ) goto L_004af539;
L_004af3b6:; BB(0x004af3b6);
    /* 004af3b6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004af3b9: je 0x4af539 */ if (fZ) goto L_004af539;
L_004af3bf:; BB(0x004af3bf);
    /* 004af3bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004af3c1: jne 0x4af539 */ if (!fZ) goto L_004af539;
L_004af3c7:; BB(0x004af3c7);
    /* 004af3c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af3c9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4af3ceu); f_007aa094();
    /* 004af3ce: mov edx, dword ptr [ebx + 0x730] */ r_edx = R32((u32)(r_ebx+0x730u));
    /* 004af3d4: cmp edx, dword ptr [ebx + 0x734] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004af3da: jge 0x4af3f7 */ if ((fS==fO)) goto L_004af3f7;
L_004af3dc:; BB(0x004af3dc);
    /* 004af3dc: mov eax, dword ptr [ebx + 0x738] */ r_eax = R32((u32)(r_ebx+0x738u));
    /* 004af3e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004af3e4: jle 0x4af53d */ if ((fZ||fS!=fO)) goto L_004af53d;
L_004af3ea:; BB(0x004af3ea);
    /* 004af3ea: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004af3ed: mov dword ptr [ebx + 0x738], eax */ W32((u32)(r_ebx+0x738u), r_eax);
    /* 004af3f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af3f4: ret 8 */ FN_RET(0x004af394); r_esp += 12; return;
L_004af3f7:; BB(0x004af3f7);
    /* 004af3f7: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004af3fd: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004af404: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004af40a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004af40d: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004af413: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004af417: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004af41a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004af41d: ja 0x4af531 */ if ((!fC&&!fZ)) goto L_004af531;
L_004af423:; BB(0x004af423);
    /* 004af423: mov ecx, dword ptr [ecx*4 + 0x904a00] */ r_ecx = R32((u32)(r_ecx*4+0x904a00u));
    /* 004af42a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
L_004af539:; BB(0x004af539);
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af394); r_esp += 12; return;
L_004af53d:; BB(0x004af53d);
    /* 004af53d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004af53e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af542: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004af545: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004af54b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af54d: call 0x4b4e6c */ r_esp -= 4; W32(r_esp, 0x4af552u); f_004b4e6c();
    /* 004af552: mov dword ptr [ebx + 0x738], 5 */ W32((u32)(r_ebx+0x738u), 0x5u);
    /* 004af55c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af55d: ret 8 */ FN_RET(0x004af394); r_esp += 12; return;
L_004af560:; BB(0x004af560);
    /* 004af560: mov dword ptr [ebx + 0x734], 9 */ W32((u32)(r_ebx+0x734u), 0x9u);
    /* 004af56a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004af56c: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004af572: mov dword ptr [ebx + 0x738], eax */ W32((u32)(r_ebx+0x738u), r_eax);
    /* 004af578: mov edx, 1 */ r_edx = 0x1u;
    /* 004af57d: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004af584: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af585: ret 8 */ FN_RET(0x004af394); r_esp += 12; return;
}

void f_004af42c(void)
{
    FN_ENTER(0x004af42c);
    goto L_004af42c;
L_004af40a:; BB(0x004af40a);
    /* 004af40a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004af40d: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004af413: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004af417: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004af41a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004af41d: ja 0x4af531 */ if ((!fC&&!fZ)) goto L_004af531;
L_004af423:; BB(0x004af423);
    /* 004af423: mov ecx, dword ptr [ecx*4 + 0x904a00] */ r_ecx = R32((u32)(r_ecx*4+0x904a00u));
    /* 004af42a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004af42c:; BB(0x004af42c);
    /* 004af42c: mov eax, 1 */ r_eax = 0x1u;
    /* 004af431: jmp 0x4af40a */ goto L_004af40a;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af42c); r_esp += 12; return;
}

void f_004af433(void)
{
    FN_ENTER(0x004af433);
    /* 004af433: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af439: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af43b: jne 0x4af447 */ if (!fZ) goto L_004af447;
L_004af43d:; BB(0x004af43d);
    /* 004af43d: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004af442: jmp 0x4af531 */ goto L_004af531;
L_004af447:; BB(0x004af447);
    /* 004af447: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004af44c: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af433); r_esp += 12; return;
}

void f_004af451(void)
{
    FN_ENTER(0x004af451);
    /* 004af451: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af459: jne 0x4af465 */ if (!fZ) goto L_004af465;
L_004af45b:; BB(0x004af45b);
    /* 004af45b: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004af460: jmp 0x4af531 */ goto L_004af531;
L_004af465:; BB(0x004af465);
    /* 004af465: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004af46a: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af451); r_esp += 12; return;
}

void f_004af46f(void)
{
    FN_ENTER(0x004af46f);
    /* 004af46f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af477: jne 0x4af483 */ if (!fZ) goto L_004af483;
L_004af479:; BB(0x004af479);
    /* 004af479: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004af47e: jmp 0x4af531 */ goto L_004af531;
L_004af483:; BB(0x004af483);
    /* 004af483: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004af488: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af46f); r_esp += 12; return;
}

void f_004af48d(void)
{
    FN_ENTER(0x004af48d);
    /* 004af48d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af495: jne 0x4af4a1 */ if (!fZ) goto L_004af4a1;
L_004af497:; BB(0x004af497);
    /* 004af497: mov eax, 0xf */ r_eax = 0xfu;
    /* 004af49c: jmp 0x4af531 */ goto L_004af531;
L_004af4a1:; BB(0x004af4a1);
    /* 004af4a1: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004af4a6: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af48d); r_esp += 12; return;
}

void f_004af4ab(void)
{
    FN_ENTER(0x004af4ab);
    /* 004af4ab: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af4b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af4b3: jne 0x4af4bc */ if (!fZ) goto L_004af4bc;
L_004af4b5:; BB(0x004af4b5);
    /* 004af4b5: mov eax, 4 */ r_eax = 0x4u;
    /* 004af4ba: jmp 0x4af531 */ goto L_004af531;
L_004af4bc:; BB(0x004af4bc);
    /* 004af4bc: mov eax, 0xa */ r_eax = 0xau;
    /* 004af4c1: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af4ab); r_esp += 12; return;
}

void f_004af4c3(void)
{
    FN_ENTER(0x004af4c3);
    /* 004af4c3: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af4c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af4cb: jne 0x4af4d4 */ if (!fZ) goto L_004af4d4;
L_004af4cd:; BB(0x004af4cd);
    /* 004af4cd: mov eax, 3 */ r_eax = 0x3u;
    /* 004af4d2: jmp 0x4af531 */ goto L_004af531;
L_004af4d4:; BB(0x004af4d4);
    /* 004af4d4: mov eax, 0xb */ r_eax = 0xbu;
    /* 004af4d9: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af4c3); r_esp += 12; return;
}

void f_004af4db(void)
{
    FN_ENTER(0x004af4db);
    /* 004af4db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af4dd: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4af4e2u); f_00520bf4();
    /* 004af4e2: fcomp dword ptr [0x907070] */ fx_compare(ST(0), R_F32((u32)(0x907070u))); FPOP();
    /* 004af4e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af4ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af4eb: jbe 0x4af4f4 */ if ((fC||fZ)) goto L_004af4f4;
L_004af4ed:; BB(0x004af4ed);
    /* 004af4ed: mov eax, 0xc */ r_eax = 0xcu;
    /* 004af4f2: jmp 0x4af531 */ goto L_004af531;
L_004af4f4:; BB(0x004af4f4);
    /* 004af4f4: mov eax, 0xe */ r_eax = 0xeu;
    /* 004af4f9: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af4db); r_esp += 12; return;
}

void f_004af4fb(void)
{
    FN_ENTER(0x004af4fb);
    /* 004af4fb: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004af501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af503: jne 0x4af50c */ if (!fZ) goto L_004af50c;
L_004af505:; BB(0x004af505);
    /* 004af505: mov eax, 5 */ r_eax = 0x5u;
    /* 004af50a: jmp 0x4af531 */ goto L_004af531;
L_004af50c:; BB(0x004af50c);
    /* 004af50c: mov eax, 9 */ r_eax = 0x9u;
    /* 004af511: jmp 0x4af531 */ goto L_004af531;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af4fb); r_esp += 12; return;
}

void f_004af513(void)
{
    FN_ENTER(0x004af513);
    /* 004af513: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af515: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4af51au); f_00520bf4();
    /* 004af51a: fcomp dword ptr [0x907070] */ fx_compare(ST(0), R_F32((u32)(0x907070u))); FPOP();
    /* 004af520: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004af522: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004af523: jbe 0x4af52c */ if ((fC||fZ)) goto L_004af52c;
L_004af525:; BB(0x004af525);
    /* 004af525: mov eax, 8 */ r_eax = 0x8u;
    /* 004af52a: jmp 0x4af531 */ goto L_004af531;
L_004af52c:; BB(0x004af52c);
    /* 004af52c: mov eax, 6 */ r_eax = 0x6u;
L_004af531:; BB(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af513); r_esp += 12; return;
}

void f_004af531(void)
{
    FN_ENTER(0x004af531);
    /* 004af531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af532: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af534: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4af539u); f_004b5150();
    /* 004af539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004af53a: ret 8 */ FN_RET(0x004af531); r_esp += 12; return;
}

void f_004af588(void) /* sub_4AF588 */
{
    FN_ENTER(0x004af588);
    /* 004af588: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004af58a: push 0x9abc20 */ { u32 v = 0x9abc20u; r_esp -= 4; W32(r_esp, v); }
    /* 004af58f: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x4af594u); f_0078b0a0();
    /* 004af594: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004af597: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004af59d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004af59f: je 0x4af5b4 */ if (fZ) goto L_004af5b4;
L_004af5a1:; BB(0x004af5a1);
    /* 004af5a1: je 0x4af5aa */ if (fZ) goto L_004af5aa;
L_004af5a3:; BB(0x004af5a3);
    /* 004af5a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004af5a5: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4af5aau); f_004066a8();
L_004af5aa:; BB(0x004af5aa);
    /* 004af5aa: mov dword ptr [0xa47af4], 0 */ W32((u32)(0xa47af4u), 0x0u);
L_004af5b4:; BB(0x004af5b4);
    /* 004af5b4: ret  */ FN_RET(0x004af588); r_esp += 4; return;
}

void f_004af5b8(void)
{
    FN_ENTER(0x004af5b8);
    /* 004af5b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004af5b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004af5bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004af5bd: push 0x8d0c14 */ { u32 v = 0x8d0c14u; r_esp -= 4; W32(r_esp, v); }
    /* 004af5c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004af5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af5c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004af5d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004af5d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004af5d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004af5d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004af5dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004af5df: push 0x7dc */ { u32 v = 0x7dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004af5e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004af5eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4af5f0u); f_005caba4();
    /* 004af5f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004af5f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004af5f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af5f6: je 0x4af62f */ if (fZ) goto L_004af62f;
L_004af5f8:; BB(0x004af5f8);
    /* 004af5f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004af5ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004af606: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af609: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af60f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004af612: call 0x4af634 */ r_esp -= 4; W32(r_esp, 0x4af617u); f_004af634();
    /* 004af617: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004af61a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004af621:; BB(0x004af621);
    /* 004af621: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004af624: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004af62b: mov esp, ebp */ r_esp = r_ebp;
    /* 004af62d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004af62e: ret  */ FN_RET(0x004af5b8); r_esp += 4; return;
L_004af62f:; BB(0x004af62f);
    /* 004af62f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004af631: jmp 0x4af621 */ goto L_004af621;
}

void f_004af634(void) /* sub_4AF634 */
{
    FN_ENTER(0x004af634);
    /* 004af634: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004af635: mov ebp, esp */ r_ebp = r_esp;
    /* 004af637: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004af639: push 0x8d0d26 */ { u32 v = 0x8d0d26u; r_esp -= 4; W32(r_esp, v); }
    /* 004af63e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004af644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af645: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004af64c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004af64f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004af652: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004af655: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004af658: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004af65b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004af65e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af661: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004af664: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004af667: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x4af66cu); f_005216f4();
    /* 004af66c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004af673: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af676: mov dword ptr [ecx], 0xafab60 */ W32((u32)(r_ecx), 0xafab60u);
    /* 004af67c: add ecx, 0x638 */ {  u32 a = r_ecx; u32 b = 0x638u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004af682: call 0x42a8f4 */ r_esp -= 4; W32(r_esp, 0x4af687u); f_0042a8f4();
    /* 004af687: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004af68e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af691: add ecx, 0x658 */ {  u32 a = r_ecx; u32 b = 0x658u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004af697: call 0x42a8f4 */ r_esp -= 4; W32(r_esp, 0x4af69cu); f_0042a8f4();
    /* 004af69c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004af6a3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af6a6: add ecx, 0x678 */ {  u32 a = r_ecx; u32 b = 0x678u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004af6ac: call 0x42a8f4 */ r_esp -= 4; W32(r_esp, 0x4af6b1u); f_0042a8f4();
    /* 004af6b1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004af6b8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af6bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004af6bd: add ecx, 0x698 */ {  u32 a = r_ecx; u32 b = 0x698u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004af6c3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4af6c8u); f_008193cc();
    /* 004af6c8: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004af6cf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af6d2: mov eax, dword ptr [0x9abb5c] */ r_eax = R32((u32)(0x9abb5cu));
    /* 004af6d7: mov edx, dword ptr [0xa47ad0] */ r_edx = R32((u32)(0xa47ad0u));
    /* 004af6dd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004af6e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af6e2: jne 0x4af6ea */ if (!fZ) goto L_004af6ea;
L_004af6e4:; BB(0x004af6e4);
    /* 004af6e4: mov dword ptr [0xa47ad0], ecx */ W32((u32)(0xa47ad0u), r_ecx);
L_004af6ea:; BB(0x004af6ea);
    /* 004af6ea: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004af6ec: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4af6f1u); f_0077a684();
    /* 004af6f1: mov esi, eax */ r_esi = r_eax;
    /* 004af6f3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004af6f5: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4af6fau); f_0077a698();
    /* 004af6fa: mov ebx, eax */ r_ebx = r_eax;
    /* 004af6fc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004af6fe: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4af703u); f_0077a6b4();
    /* 004af703: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004af706: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af70a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004af70b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004af70c: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4af711u); f_00520c70();
    /* 004af711: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004af713: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4af718u); f_0077a6cc();
    /* 004af718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004af719: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af71c: mov dword ptr [ecx + 0x628], eax */ W32((u32)(r_ecx+0x628u), r_eax);
    /* 004af722: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004af725: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af726: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x4af72bu); f_0051f750();
    /* 004af72b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af72e: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004af732: mov dword ptr [ebx + 0x630], 0 */ W32((u32)(r_ebx+0x630u), 0x0u);
    /* 004af73c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004af73e: jl 0x4af770 */ if ((fS!=fO)) goto L_004af770;
L_004af740:; BB(0x004af740);
    /* 004af740: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004af745: jg 0x4af770 */ if ((!fZ&&fS==fO)) goto L_004af770;
L_004af747:; BB(0x004af747);
    /* 004af747: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af749: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004af74b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004af74e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004af750: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 004af755: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004af758: and ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004af75e: cmp ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af764: jne 0x4af770 */ if (!fZ) goto L_004af770;
L_004af766:; BB(0x004af766);
    /* 004af766: mov dword ptr [ebx + 0x630], 0x8000 */ W32((u32)(r_ebx+0x630u), 0x8000u);
L_004af770:; BB(0x004af770);
    /* 004af770: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004af772: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x4af777u); f_00521840();
    /* 004af777: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004af77d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004af77f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4af784u); f_005b8610();
    /* 004af784: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af787: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004af78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004af78f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004af792: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4af797u); f_005b8624();
    /* 004af797: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af79a: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004af7a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004af7a2: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004af7a5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4af7aau); f_005b8610();
    /* 004af7aa: mov esi, eax */ r_esi = r_eax;
    /* 004af7ac: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004af7ae:; BB(0x004af7ae);
    /* 004af7ae: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004af7b1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004af7b4: push dword ptr [edx + 0x907048] */ { u32 v = R32((u32)(r_edx+0x907048u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af7ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004af7bb: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4af7c0u); f_0078e934();
    /* 004af7c0: push dword ptr [edi*4 + 0x907020] */ { u32 v = R32((u32)(r_edi*4+0x907020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af7c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004af7c8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004af7cb: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004af7ce: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004af7d1: mov dword ptr [eax + ebx*2 + 0x5b0], ecx */ W32((u32)(r_eax+r_ebx*2+0x5b0u), r_ecx);
    /* 004af7d8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4af7ddu); f_0078e934();
    /* 004af7dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004af7e0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af7e3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004af7e6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004af7e9: mov dword ptr [edx + ebx*2 + 0x5d8], ecx */ W32((u32)(r_edx+r_ebx*2+0x5d8u), r_ecx);
    /* 004af7f0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004af7f3: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004af7f6: jl 0x4af7ae */ if ((fS!=fO)) goto L_004af7ae;
L_004af7f8:; BB(0x004af7f8);
    /* 004af7f8: mov eax, dword ptr [0x9abbf4] */ r_eax = R32((u32)(0x9abbf4u));
    /* 004af7fd: mov ebx, dword ptr [0x9abbf8] */ r_ebx = R32((u32)(0x9abbf8u));
    /* 004af803: mov esi, dword ptr [0x9abbfc] */ r_esi = R32((u32)(0x9abbfcu));
    /* 004af809: mov edi, dword ptr [0x9abc00] */ r_edi = R32((u32)(0x9abc00u));
    /* 004af80f: mov ecx, dword ptr [0x9abc04] */ r_ecx = R32((u32)(0x9abc04u));
    /* 004af815: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 004af81b: mov eax, dword ptr [0x9abc08] */ r_eax = R32((u32)(0x9abc08u));
    /* 004af820: mov dword ptr [edx + 0x3cc], ebx */ W32((u32)(r_edx+0x3ccu), r_ebx);
    /* 004af826: mov dword ptr [edx + 0x3d0], esi */ W32((u32)(r_edx+0x3d0u), r_esi);
    /* 004af82c: mov dword ptr [edx + 0x3d4], edi */ W32((u32)(r_edx+0x3d4u), r_edi);
    /* 004af832: mov dword ptr [edx + 0x3d8], ecx */ W32((u32)(r_edx+0x3d8u), r_ecx);
    /* 004af838: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af83b: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
    /* 004af841: mov eax, dword ptr [0x9abc0c] */ r_eax = R32((u32)(0x9abc0cu));
    /* 004af846: mov dword ptr [edx + 0x3e0], eax */ W32((u32)(r_edx+0x3e0u), r_eax);
    /* 004af84c: mov eax, dword ptr [0x9abc10] */ r_eax = R32((u32)(0x9abc10u));
    /* 004af851: mov dword ptr [edx + 0x3e4], eax */ W32((u32)(r_edx+0x3e4u), r_eax);
    /* 004af857: mov eax, dword ptr [0x9abc14] */ r_eax = R32((u32)(0x9abc14u));
    /* 004af85c: mov dword ptr [edx + 0x3e8], eax */ W32((u32)(r_edx+0x3e8u), r_eax);
    /* 004af862: mov eax, dword ptr [0x9abc18] */ r_eax = R32((u32)(0x9abc18u));
    /* 004af867: mov dword ptr [edx + 0x3ec], eax */ W32((u32)(r_edx+0x3ecu), r_eax);
    /* 004af86d: mov eax, dword ptr [0x9abc1c] */ r_eax = R32((u32)(0x9abc1cu));
    /* 004af872: mov dword ptr [edx + 0x3f0], eax */ W32((u32)(r_edx+0x3f0u), r_eax);
    /* 004af878: lea edx, [ecx + 0x3c8] */ r_edx = (u32)(r_ecx+0x3c8u);
    /* 004af87e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004af87f: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x4af884u); f_007b9ccc();
    /* 004af884: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af887: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x4af88cu); f_0051ffdc();
    /* 004af88c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af88f: mov eax, dword ptr [0xa47af4] */ r_eax = R32((u32)(0xa47af4u));
    /* 004af894: mov dword ptr [ecx + 0xd8], 0x9aba20 */ W32((u32)(r_ecx+0xd8u), 0x9aba20u);
    /* 004af89e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004af8a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004af8a1: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 004af8a7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 004af8ad: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 004af8b3: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 004af8ba: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4af8bfu); f_007aa4c8();
    /* 004af8bf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af8c2: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 004af8c9: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004af8d0: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x4af8d5u); f_00520360();
    /* 004af8d5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af8d8: mov dword ptr [ecx + 0x358], 0x9abbd8 */ W32((u32)(r_ecx+0x358u), 0x9abbd8u);
    /* 004af8e2: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 004af8e4: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4af8e9u); f_00520390();
    /* 004af8e9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af8ec: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 004af8f6: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004af8f8: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x4af8fdu); f_00521820();
    /* 004af8fd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af900: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004af902: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x4af907u); f_005217fc();
    /* 004af907: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004af90a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004af90c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004af90e: mov dword ptr [eax + 0x7b0], edx */ W32((u32)(r_eax+0x7b0u), r_edx);
    /* 004af914: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004af917: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4af91cu); f_005caba4();
    /* 004af91c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004af91f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004af922: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004af925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af927: je 0x4b02a8 */ if (fZ) goto L_004b02a8;
L_004af92d:; BB(0x004af92d);
    /* 004af92d: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 004af934: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004af93b: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 004af93e: mov ecx, eax */ r_ecx = r_eax;
    /* 004af940: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4af945u); f_008193cc();
    /* 004af945: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004af94c:; BB(0x004af94c);
    /* 004af94c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004af94f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004af952: mov dword ptr [edx + 0x7ac], eax */ W32((u32)(r_edx+0x7acu), r_eax);
    /* 004af958: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004af95f: mov dword ptr [edx + 0x3f4], 0 */ W32((u32)(r_edx+0x3f4u), 0x0u);
    /* 004af969: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004af96e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004af970: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
    /* 004af97a: mov dword ptr [edx + 0x634], eax */ W32((u32)(r_edx+0x634u), r_eax);
    /* 004af980: mov dword ptr [edx + 0x6b8], eax */ W32((u32)(r_edx+0x6b8u), r_eax);
    /* 004af986: mov dword ptr [edx + 0x6bc], eax */ W32((u32)(r_edx+0x6bcu), r_eax);
    /* 004af98c: mov dword ptr [edx + 0x3fc], 0 */ W32((u32)(r_edx+0x3fcu), 0x0u);
    /* 004af996: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
    /* 004af9a0: mov dword ptr [edx + 0x404], 0 */ W32((u32)(r_edx+0x404u), 0x0u);
    /* 004af9aa: mov dword ptr [edx + 0x408], 0 */ W32((u32)(r_edx+0x408u), 0x0u);
    /* 004af9b4: mov dword ptr [edx + 0x40c], 0 */ W32((u32)(r_edx+0x40cu), 0x0u);
    /* 004af9be: mov dword ptr [edx + 0x410], 0 */ W32((u32)(r_edx+0x410u), 0x0u);
    /* 004af9c8: mov dword ptr [edx + 0x414], 0 */ W32((u32)(r_edx+0x414u), 0x0u);
    /* 004af9d2: mov dword ptr [edx + 0x418], 0 */ W32((u32)(r_edx+0x418u), 0x0u);
    /* 004af9dc: mov dword ptr [edx + 0x41c], 0 */ W32((u32)(r_edx+0x41cu), 0x0u);
    /* 004af9e6: mov dword ptr [edx + 0x420], 0 */ W32((u32)(r_edx+0x420u), 0x0u);
    /* 004af9f0: mov dword ptr [edx + 0x424], 0 */ W32((u32)(r_edx+0x424u), 0x0u);
    /* 004af9fa: mov dword ptr [edx + 0x428], 0 */ W32((u32)(r_edx+0x428u), 0x0u);
    /* 004afa04: mov dword ptr [edx + 0x42c], 0 */ W32((u32)(r_edx+0x42cu), 0x0u);
    /* 004afa0e: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 004afa18: mov dword ptr [edx + 0x434], 0 */ W32((u32)(r_edx+0x434u), 0x0u);
    /* 004afa22: mov dword ptr [edx + 0x438], 0 */ W32((u32)(r_edx+0x438u), 0x0u);
    /* 004afa2c: mov dword ptr [edx + 0x43c], 0 */ W32((u32)(r_edx+0x43cu), 0x0u);
    /* 004afa36: mov dword ptr [edx + 0x440], 0 */ W32((u32)(r_edx+0x440u), 0x0u);
    /* 004afa40: mov dword ptr [edx + 0x444], 0 */ W32((u32)(r_edx+0x444u), 0x0u);
    /* 004afa4a: mov dword ptr [edx + 0x448], 0 */ W32((u32)(r_edx+0x448u), 0x0u);
    /* 004afa54: mov dword ptr [edx + 0x44c], 0 */ W32((u32)(r_edx+0x44cu), 0x0u);
    /* 004afa5e: mov dword ptr [edx + 0x450], 0 */ W32((u32)(r_edx+0x450u), 0x0u);
    /* 004afa68: mov dword ptr [edx + 0x454], 0 */ W32((u32)(r_edx+0x454u), 0x0u);
    /* 004afa72: mov dword ptr [edx + 0x458], 0 */ W32((u32)(r_edx+0x458u), 0x0u);
    /* 004afa7c: mov dword ptr [edx + 0x45c], 0 */ W32((u32)(r_edx+0x45cu), 0x0u);
    /* 004afa86: mov dword ptr [edx + 0x460], 0 */ W32((u32)(r_edx+0x460u), 0x0u);
    /* 004afa90: mov dword ptr [edx + 0x464], 0 */ W32((u32)(r_edx+0x464u), 0x0u);
    /* 004afa9a: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
    /* 004afaa4: mov dword ptr [edx + 0x46c], 0 */ W32((u32)(r_edx+0x46cu), 0x0u);
    /* 004afaae: mov dword ptr [edx + 0x470], 0 */ W32((u32)(r_edx+0x470u), 0x0u);
    /* 004afab8: mov dword ptr [edx + 0x474], 0 */ W32((u32)(r_edx+0x474u), 0x0u);
    /* 004afac2: mov dword ptr [edx + 0x478], 0 */ W32((u32)(r_edx+0x478u), 0x0u);
    /* 004afacc: mov dword ptr [edx + 0x47c], 0 */ W32((u32)(r_edx+0x47cu), 0x0u);
    /* 004afad6: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
    /* 004afae0: mov dword ptr [edx + 0x484], 0 */ W32((u32)(r_edx+0x484u), 0x0u);
    /* 004afaea: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
    /* 004afaf4: mov dword ptr [edx + 0x48c], 0 */ W32((u32)(r_edx+0x48cu), 0x0u);
    /* 004afafe: mov dword ptr [edx + 0x490], 0 */ W32((u32)(r_edx+0x490u), 0x0u);
    /* 004afb08: mov dword ptr [edx + 0x494], 0 */ W32((u32)(r_edx+0x494u), 0x0u);
    /* 004afb12: mov dword ptr [edx + 0x498], 0 */ W32((u32)(r_edx+0x498u), 0x0u);
    /* 004afb1c: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 004afb26: mov dword ptr [edx + 0x4a0], 0 */ W32((u32)(r_edx+0x4a0u), 0x0u);
    /* 004afb30: mov dword ptr [edx + 0x4a4], 0 */ W32((u32)(r_edx+0x4a4u), 0x0u);
    /* 004afb3a: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 004afb44: mov dword ptr [edx + 0x4ac], 0 */ W32((u32)(r_edx+0x4acu), 0x0u);
    /* 004afb4e: mov dword ptr [edx + 0x4b0], 0 */ W32((u32)(r_edx+0x4b0u), 0x0u);
    /* 004afb58: mov dword ptr [edx + 0x4b4], 0 */ W32((u32)(r_edx+0x4b4u), 0x0u);
    /* 004afb62: mov dword ptr [edx + 0x4b8], 0 */ W32((u32)(r_edx+0x4b8u), 0x0u);
    /* 004afb6c: mov dword ptr [edx + 0x4bc], 0 */ W32((u32)(r_edx+0x4bcu), 0x0u);
    /* 004afb76: mov dword ptr [edx + 0x4c0], 0 */ W32((u32)(r_edx+0x4c0u), 0x0u);
    /* 004afb80: mov dword ptr [edx + 0x4c4], 0 */ W32((u32)(r_edx+0x4c4u), 0x0u);
    /* 004afb8a: mov dword ptr [edx + 0x4c8], 0 */ W32((u32)(r_edx+0x4c8u), 0x0u);
    /* 004afb94: mov dword ptr [edx + 0x4cc], 0 */ W32((u32)(r_edx+0x4ccu), 0x0u);
    /* 004afb9e: mov dword ptr [edx + 0x4d0], 0 */ W32((u32)(r_edx+0x4d0u), 0x0u);
    /* 004afba8: mov dword ptr [edx + 0x4d4], 0 */ W32((u32)(r_edx+0x4d4u), 0x0u);
    /* 004afbb2: mov dword ptr [edx + 0x4d8], 0 */ W32((u32)(r_edx+0x4d8u), 0x0u);
    /* 004afbbc: mov dword ptr [edx + 0x4dc], 0 */ W32((u32)(r_edx+0x4dcu), 0x0u);
    /* 004afbc6: mov dword ptr [edx + 0x4e0], 0 */ W32((u32)(r_edx+0x4e0u), 0x0u);
    /* 004afbd0: mov dword ptr [edx + 0x4e4], 0 */ W32((u32)(r_edx+0x4e4u), 0x0u);
    /* 004afbda: mov dword ptr [edx + 0x4e8], 0 */ W32((u32)(r_edx+0x4e8u), 0x0u);
    /* 004afbe4: mov dword ptr [edx + 0x4ec], 0 */ W32((u32)(r_edx+0x4ecu), 0x0u);
    /* 004afbee: mov dword ptr [edx + 0x4f0], 0 */ W32((u32)(r_edx+0x4f0u), 0x0u);
    /* 004afbf8: mov dword ptr [edx + 0x4f4], 0 */ W32((u32)(r_edx+0x4f4u), 0x0u);
    /* 004afc02: mov dword ptr [edx + 0x4f8], 0 */ W32((u32)(r_edx+0x4f8u), 0x0u);
    /* 004afc0c: mov dword ptr [edx + 0x4fc], 0 */ W32((u32)(r_edx+0x4fcu), 0x0u);
    /* 004afc16: mov dword ptr [edx + 0x500], 0 */ W32((u32)(r_edx+0x500u), 0x0u);
    /* 004afc20: mov dword ptr [edx + 0x504], 0 */ W32((u32)(r_edx+0x504u), 0x0u);
    /* 004afc2a: mov dword ptr [edx + 0x508], 0 */ W32((u32)(r_edx+0x508u), 0x0u);
    /* 004afc34: mov dword ptr [edx + 0x50c], 0 */ W32((u32)(r_edx+0x50cu), 0x0u);
    /* 004afc3e: mov dword ptr [edx + 0x510], 0 */ W32((u32)(r_edx+0x510u), 0x0u);
    /* 004afc48: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4afc4du); f_008581c5();
    /* 004afc4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004afc4e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afc51: mov dword ptr [edx + 0x6e0], eax */ W32((u32)(r_edx+0x6e0u), r_eax);
    /* 004afc57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004afc59: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_004afc5c:; BB(0x004afc5c);
    /* 004afc5c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004afc5f: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004afc62: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afc64: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afc66: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afc68: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afc6a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afc6c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004afc6f: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afc71: mov ecx, eax */ r_ecx = r_eax;
    /* 004afc73: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4afc78u); f_00830cd8();
    /* 004afc78: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 004afc7f: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 004afc84: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4afc89u); f_005caba4();
    /* 004afc89: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004afc8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004afc8f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004afc92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afc94: je 0x4b029e */ if (fZ) goto L_004b029e;
L_004afc9a:; BB(0x004afc9a);
    /* 004afc9a: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 004afca1: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004afca8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afcab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004afcae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004afcb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afcb2: mov ebx, dword ptr [eax + 0x6e0] */ r_ebx = R32((u32)(r_eax+0x6e0u));
    /* 004afcb8: add ebx, dword ptr [ebp - 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afcbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004afcbc: lea esi, [eax + 0x698] */ r_esi = (u32)(r_eax+0x698u);
    /* 004afcc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004afcc3: call 0x4bb7e4 */ r_esp -= 4; W32(r_esp, 0x4afcc8u); f_004bb7e4();
    /* 004afcc8: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004afccf:; BB(0x004afccf);
    /* 004afccf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afcd2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004afcd5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004afcd8: mov dword ptr [ecx + edx*4 + 0x6e4], eax */ W32((u32)(r_ecx+r_edx*4+0x6e4u), r_eax);
    /* 004afcdf: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004afce6: mov eax, edx */ r_eax = r_edx;
    /* 004afce8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afceb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004afcee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afcf1: jge 0x4afcfe */ if ((fS==fO)) goto L_004afcfe;
L_004afcf3:; BB(0x004afcf3);
    /* 004afcf3: mov eax, dword ptr [ecx + 0x6e0] */ r_eax = R32((u32)(r_ecx+0x6e0u));
    /* 004afcf9: jmp 0x4afc5c */ goto L_004afc5c;
L_004afcfe:; BB(0x004afcfe);
    /* 004afcfe: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 004afd02: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 004afd06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afd09: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004afd0c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afd0f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004afd11: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004afd14: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004afd17: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
L_004afd1a:; BB(0x004afd1a);
    /* 004afd1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004afd1d: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004afd24: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004afd27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004afd29: push 0x3d0 */ { u32 v = 0x3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004afd2e: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004afd31: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004afd33: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004afd36: mov dword ptr [ebx + ecx + 0x538], 0x461c4000 */ W32((u32)(r_ebx+r_ecx+0x538u), 0x461c4000u);
    /* 004afd41: mov dword ptr [ebx + ecx + 0x53c], 0x461c4000 */ W32((u32)(r_ebx+r_ecx+0x53cu), 0x461c4000u);
    /* 004afd4c: mov dword ptr [ebx + ecx + 0x540], 0x461c4000 */ W32((u32)(r_ebx+r_ecx+0x540u), 0x461c4000u);
    /* 004afd57: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4afd5cu); f_005caba4();
    /* 004afd5c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004afd5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004afd62: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004afd65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afd67: je 0x4b0294 */ if (fZ) goto L_004b0294;
L_004afd6d:; BB(0x004afd6d);
    /* 004afd6d: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 004afd74: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004afd7b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004afd7e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004afd81: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afd84: mov eax, ebx */ r_eax = r_ebx;
    /* 004afd86: mov edi, esi */ r_edi = r_esi;
    /* 004afd88: mov ebx, edx */ r_ebx = r_edx;
    /* 004afd8a: lea eax, [ecx + eax + 0x538] */ r_eax = (u32)(r_ecx+r_eax+0x538u);
    /* 004afd91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004afd94: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004afd97: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004afd9a: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 004afd9d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004afda0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004afda3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004afda5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004afda6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004afda7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004afda8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004afdab: call 0x4b9ff0 */ r_esp -= 4; W32(r_esp, 0x4afdb0u); f_004b9ff0();
    /* 004afdb0: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004afdb7:; BB(0x004afdb7);
    /* 004afdb7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afdba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004afdbd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004afdc0: mov dword ptr [ecx + edx*4 + 0x600], eax */ W32((u32)(r_ecx+r_edx*4+0x600u), r_eax);
    /* 004afdc7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004afdce: mov eax, edx */ r_eax = r_edx;
    /* 004afdd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afdd3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004afdd6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afdd9: jl 0x4afd1a */ if ((fS!=fO)) goto L_004afd1a;
L_004afddf:; BB(0x004afddf);
    /* 004afddf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004afde1: mov dword ptr [ecx + 0x6c8], eax */ W32((u32)(r_ecx+0x6c8u), r_eax);
    /* 004afde7: mov dword ptr [ecx + 0x6cc], eax */ W32((u32)(r_ecx+0x6ccu), r_eax);
    /* 004afded: mov dword ptr [ecx + 0x6d0], eax */ W32((u32)(r_ecx+0x6d0u), r_eax);
    /* 004afdf3: mov dword ptr [ecx + 0x6d4], eax */ W32((u32)(r_ecx+0x6d4u), r_eax);
    /* 004afdf9: mov dword ptr [ecx + 0x6d8], eax */ W32((u32)(r_ecx+0x6d8u), r_eax);
    /* 004afdff: add ecx, 0x638 */ {  u32 a = r_ecx; u32 b = 0x638u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afe05: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe0au); f_0042ee78();
    /* 004afe0a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe0d: add ecx, 0x658 */ {  u32 a = r_ecx; u32 b = 0x658u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afe13: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe18u); f_0042ee78();
    /* 004afe18: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe1b: add ecx, 0x678 */ {  u32 a = r_ecx; u32 b = 0x678u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afe21: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe26u); f_0042ee78();
    /* 004afe26: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe29: mov edx, dword ptr [esi + 0x628] */ r_edx = R32((u32)(r_esi+0x628u));
    /* 004afe2f: mov dword ptr [esi + 0x6f4], 0 */ W32((u32)(r_esi+0x6f4u), 0x0u);
    /* 004afe39: mov ebx, 0x4e20 */ r_ebx = 0x4e20u;
    /* 004afe3e: mov dword ptr [esi + 0x6f8], 0 */ W32((u32)(r_esi+0x6f8u), 0x0u);
    /* 004afe48: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004afe4a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004afe4c: mov dword ptr [esi + 0x6fc], 0 */ W32((u32)(r_esi+0x6fcu), 0x0u);
    /* 004afe56: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004afe59: mov dword ptr [esi + 0x704], eax */ W32((u32)(r_esi+0x704u), r_eax);
    /* 004afe5f: mov dword ptr [esi + 0x700], eax */ W32((u32)(r_esi+0x700u), r_eax);
    /* 004afe65: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004afe68: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 004afe6b: mov dword ptr [esi + 0x708], ecx */ W32((u32)(r_esi+0x708u), r_ecx);
    /* 004afe71: mov word ptr [esi + 0x334], bx */ W16((u32)(r_esi+0x334u), (u16)r_ebx);
    /* 004afe78: mov word ptr [esi + 0x2bc], bx */ W16((u32)(r_esi+0x2bcu), (u16)r_ebx);
    /* 004afe7f: mov dword ptr [esi + 0x70c], edi */ W32((u32)(r_esi+0x70cu), r_edi);
    /* 004afe85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4afe8au); f_005caba4();
    /* 004afe8a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004afe8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004afe90: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004afe93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afe95: je 0x4b028a */ if (fZ) goto L_004b028a;
L_004afe9b:; BB(0x004afe9b);
    /* 004afe9b: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004afea2: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004afea9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afeac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004afeaf: lea edx, [eax + 0x698] */ r_edx = (u32)(r_eax+0x698u);
    /* 004afeb5: add eax, 0x714 */ {  u32 a = r_eax; u32 b = 0x714u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afeba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004afebb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afebc: call 0x4ba498 */ r_esp -= 4; W32(r_esp, 0x4afec1u); f_004ba498();
    /* 004afec1: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004afec8:; BB(0x004afec8);
    /* 004afec8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afecb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004afece: mov dword ptr [edx + 0x710], eax */ W32((u32)(r_edx+0x710u), r_eax);
    /* 004afed4: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004afedb: mov dword ptr [edx + 0x714], 0 */ W32((u32)(r_edx+0x714u), 0x0u);
    /* 004afee5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004afee7: mov dword ptr [edx + 0x718], 0 */ W32((u32)(r_edx+0x718u), 0x0u);
    /* 004afef1: mov dword ptr [edx + 0x71c], 0 */ W32((u32)(r_edx+0x71cu), 0x0u);
    /* 004afefb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004aff02: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4aff07u); f_008581c5();
    /* 004aff07: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004aff0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aff0d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004aff10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aff12: je 0x4b0280 */ if (fZ) goto L_004b0280;
L_004aff18:; BB(0x004aff18);
    /* 004aff18: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004aff1f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004aff26: mov ecx, eax */ r_ecx = r_eax;
    /* 004aff28: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004aff2a: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4aff2fu); f_00521a4c();
    /* 004aff2f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004aff36:; BB(0x004aff36);
    /* 004aff36: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004aff39: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff3c: mov dword ptr [edx + 0x720], eax */ W32((u32)(r_edx+0x720u), r_eax);
    /* 004aff42: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004aff49: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004aff4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004aff50: jle 0x4aff65 */ if ((fZ||fS!=fO)) goto L_004aff65;
L_004aff52:; BB(0x004aff52);
    /* 004aff52: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff55: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004aff57: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004aff5a: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004aff5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff60: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aff63: jl 0x4aff52 */ if ((fS!=fO)) goto L_004aff52;
L_004aff65:; BB(0x004aff65);
    /* 004aff65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff68: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 004aff6b: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 004aff70: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004aff72: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 004aff75: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004aff78: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004aff7b: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 004aff7e: mov dword ptr [edi + 0x724], esi */ W32((u32)(r_edi+0x724u), r_esi);
    /* 004aff84: mov dword ptr [edi + 0x728], esi */ W32((u32)(r_edi+0x728u), r_esi);
    /* 004aff8a: mov dword ptr [edi + 0x514], edx */ W32((u32)(r_edi+0x514u), r_edx);
    /* 004aff90: mov dword ptr [edi + 0x518], ecx */ W32((u32)(r_edi+0x518u), r_ecx);
    /* 004aff96: mov dword ptr [edi + 0x51c], ebx */ W32((u32)(r_edi+0x51cu), r_ebx);
    /* 004aff9c: mov dword ptr [edi + 0x520], edx */ W32((u32)(r_edi+0x520u), r_edx);
    /* 004affa2: mov dword ptr [edi + 0x524], ecx */ W32((u32)(r_edi+0x524u), r_ecx);
    /* 004affa8: mov dword ptr [edi + 0x528], ebx */ W32((u32)(r_edi+0x528u), r_ebx);
    /* 004affae: mov dword ptr [edi + 0x52c], edx */ W32((u32)(r_edi+0x52cu), r_edx);
    /* 004affb4: mov dword ptr [edi + 0x530], ecx */ W32((u32)(r_edi+0x530u), r_ecx);
    /* 004affba: mov dword ptr [edi + 0x534], ebx */ W32((u32)(r_edi+0x534u), r_ebx);
    /* 004affc0: mov dword ptr [edi + 0x6c4], esi */ W32((u32)(r_edi+0x6c4u), r_esi);
    /* 004affc6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4affcbu); f_008581c5();
    /* 004affcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004affcc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004affcf: mov dword ptr [edx + 0x6dc], eax */ W32((u32)(r_edx+0x6dcu), r_eax);
    /* 004affd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004affd7:; BB(0x004affd7);
    /* 004affd7: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004affda: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affdc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affde: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4affebu); f_00830cd8();
    /* 004affeb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004affee: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afff1: jge 0x4afffe */ if ((fS==fO)) goto L_004afffe;
L_004afff3:; BB(0x004afff3);
    /* 004afff3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afff6: mov eax, dword ptr [eax + 0x6dc] */ r_eax = R32((u32)(r_eax+0x6dcu));
    /* 004afffc: jmp 0x4affd7 */ goto L_004affd7;
L_004afffe:; BB(0x004afffe);
    /* 004afffe: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0001: mov dword ptr [esi + 0x74c], 0 */ W32((u32)(r_esi+0x74cu), 0x0u);
    /* 004b000b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b000d: mov dword ptr [esi + 0x790], eax */ W32((u32)(r_esi+0x790u), r_eax);
    /* 004b0013: mov dword ptr [esi + 0x750], 0 */ W32((u32)(r_esi+0x750u), 0x0u);
    /* 004b001d: mov dword ptr [esi + 0x794], eax */ W32((u32)(r_esi+0x794u), r_eax);
    /* 004b0023: mov dword ptr [esi + 0x798], eax */ W32((u32)(r_esi+0x798u), r_eax);
    /* 004b0029: mov dword ptr [esi + 0x79c], eax */ W32((u32)(r_esi+0x79cu), r_eax);
    /* 004b002f: mov dword ptr [esi + 0x754], 0 */ W32((u32)(r_esi+0x754u), 0x0u);
    /* 004b0039: mov dword ptr [esi + 0x7a0], eax */ W32((u32)(r_esi+0x7a0u), r_eax);
    /* 004b003f: mov dword ptr [esi + 0x7a4], eax */ W32((u32)(r_esi+0x7a4u), r_eax);
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004af634); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
L_004b0280:; BB(0x004b0280);
    /* 004b0280: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0282: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b0285: jmp 0x4aff36 */ goto L_004aff36;
L_004b028a:; BB(0x004b028a);
    /* 004b028a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b028c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b028f: jmp 0x4afec8 */ goto L_004afec8;
L_004b0294:; BB(0x004b0294);
    /* 004b0294: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0296: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b0299: jmp 0x4afdb7 */ goto L_004afdb7;
L_004b029e:; BB(0x004b029e);
    /* 004b029e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b02a0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b02a3: jmp 0x4afccf */ goto L_004afccf;
L_004b02a8:; BB(0x004b02a8);
    /* 004b02a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b02aa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b02ad: jmp 0x4af94c */ goto L_004af94c;
}

void f_004afe00(void)
{
    FN_ENTER(0x004afe00);
    /* 004afe00: sar dword ptr [eax], 6 */ { u32 ad = (u32)(r_eax); u32 c = (6u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 004afe03: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004afe05: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe0au); f_0042ee78();
    /* 004afe0a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe0d: add ecx, 0x658 */ {  u32 a = r_ecx; u32 b = 0x658u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afe13: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe18u); f_0042ee78();
    /* 004afe18: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe1b: add ecx, 0x678 */ {  u32 a = r_ecx; u32 b = 0x678u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afe21: call 0x42ee78 */ r_esp -= 4; W32(r_esp, 0x4afe26u); f_0042ee78();
    /* 004afe26: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004afe29: mov edx, dword ptr [esi + 0x628] */ r_edx = R32((u32)(r_esi+0x628u));
    /* 004afe2f: mov dword ptr [esi + 0x6f4], 0 */ W32((u32)(r_esi+0x6f4u), 0x0u);
    /* 004afe39: mov ebx, 0x4e20 */ r_ebx = 0x4e20u;
    /* 004afe3e: mov dword ptr [esi + 0x6f8], 0 */ W32((u32)(r_esi+0x6f8u), 0x0u);
    /* 004afe48: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004afe4a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004afe4c: mov dword ptr [esi + 0x6fc], 0 */ W32((u32)(r_esi+0x6fcu), 0x0u);
    /* 004afe56: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004afe59: mov dword ptr [esi + 0x704], eax */ W32((u32)(r_esi+0x704u), r_eax);
    /* 004afe5f: mov dword ptr [esi + 0x700], eax */ W32((u32)(r_esi+0x700u), r_eax);
    /* 004afe65: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004afe68: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 004afe6b: mov dword ptr [esi + 0x708], ecx */ W32((u32)(r_esi+0x708u), r_ecx);
    /* 004afe71: mov word ptr [esi + 0x334], bx */ W16((u32)(r_esi+0x334u), (u16)r_ebx);
    /* 004afe78: mov word ptr [esi + 0x2bc], bx */ W16((u32)(r_esi+0x2bcu), (u16)r_ebx);
    /* 004afe7f: mov dword ptr [esi + 0x70c], edi */ W32((u32)(r_esi+0x70cu), r_edi);
    /* 004afe85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4afe8au); f_005caba4();
    /* 004afe8a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004afe8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004afe90: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004afe93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afe95: je 0x4b028a */ if (fZ) goto L_004b028a;
L_004afe9b:; BB(0x004afe9b);
    /* 004afe9b: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004afea2: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004afea9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afeac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004afeaf: lea edx, [eax + 0x698] */ r_edx = (u32)(r_eax+0x698u);
    /* 004afeb5: add eax, 0x714 */ {  u32 a = r_eax; u32 b = 0x714u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004afeba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004afebb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afebc: call 0x4ba498 */ r_esp -= 4; W32(r_esp, 0x4afec1u); f_004ba498();
    /* 004afec1: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004afec8:; BB(0x004afec8);
    /* 004afec8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004afecb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004afece: mov dword ptr [edx + 0x710], eax */ W32((u32)(r_edx+0x710u), r_eax);
    /* 004afed4: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004afedb: mov dword ptr [edx + 0x714], 0 */ W32((u32)(r_edx+0x714u), 0x0u);
    /* 004afee5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004afee7: mov dword ptr [edx + 0x718], 0 */ W32((u32)(r_edx+0x718u), 0x0u);
    /* 004afef1: mov dword ptr [edx + 0x71c], 0 */ W32((u32)(r_edx+0x71cu), 0x0u);
    /* 004afefb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004aff02: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4aff07u); f_008581c5();
    /* 004aff07: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004aff0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aff0d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004aff10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aff12: je 0x4b0280 */ if (fZ) goto L_004b0280;
L_004aff18:; BB(0x004aff18);
    /* 004aff18: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004aff1f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004aff26: mov ecx, eax */ r_ecx = r_eax;
    /* 004aff28: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004aff2a: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4aff2fu); f_00521a4c();
    /* 004aff2f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004aff36:; BB(0x004aff36);
    /* 004aff36: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004aff39: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff3c: mov dword ptr [edx + 0x720], eax */ W32((u32)(r_edx+0x720u), r_eax);
    /* 004aff42: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004aff49: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004aff4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004aff50: jle 0x4aff65 */ if ((fZ||fS!=fO)) goto L_004aff65;
L_004aff52:; BB(0x004aff52);
    /* 004aff52: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff55: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004aff57: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004aff5a: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004aff5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff60: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aff63: jl 0x4aff52 */ if ((fS!=fO)) goto L_004aff52;
L_004aff65:; BB(0x004aff65);
    /* 004aff65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aff68: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 004aff6b: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 004aff70: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004aff72: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 004aff75: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004aff78: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004aff7b: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 004aff7e: mov dword ptr [edi + 0x724], esi */ W32((u32)(r_edi+0x724u), r_esi);
    /* 004aff84: mov dword ptr [edi + 0x728], esi */ W32((u32)(r_edi+0x728u), r_esi);
    /* 004aff8a: mov dword ptr [edi + 0x514], edx */ W32((u32)(r_edi+0x514u), r_edx);
    /* 004aff90: mov dword ptr [edi + 0x518], ecx */ W32((u32)(r_edi+0x518u), r_ecx);
    /* 004aff96: mov dword ptr [edi + 0x51c], ebx */ W32((u32)(r_edi+0x51cu), r_ebx);
    /* 004aff9c: mov dword ptr [edi + 0x520], edx */ W32((u32)(r_edi+0x520u), r_edx);
    /* 004affa2: mov dword ptr [edi + 0x524], ecx */ W32((u32)(r_edi+0x524u), r_ecx);
    /* 004affa8: mov dword ptr [edi + 0x528], ebx */ W32((u32)(r_edi+0x528u), r_ebx);
    /* 004affae: mov dword ptr [edi + 0x52c], edx */ W32((u32)(r_edi+0x52cu), r_edx);
    /* 004affb4: mov dword ptr [edi + 0x530], ecx */ W32((u32)(r_edi+0x530u), r_ecx);
    /* 004affba: mov dword ptr [edi + 0x534], ebx */ W32((u32)(r_edi+0x534u), r_ebx);
    /* 004affc0: mov dword ptr [edi + 0x6c4], esi */ W32((u32)(r_edi+0x6c4u), r_esi);
    /* 004affc6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4affcbu); f_008581c5();
    /* 004affcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004affcc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004affcf: mov dword ptr [edx + 0x6dc], eax */ W32((u32)(r_edx+0x6dcu), r_eax);
    /* 004affd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004affd7:; BB(0x004affd7);
    /* 004affd7: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004affda: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affdc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affde: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4affebu); f_00830cd8();
    /* 004affeb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004affee: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afff1: jge 0x4afffe */ if ((fS==fO)) goto L_004afffe;
L_004afff3:; BB(0x004afff3);
    /* 004afff3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afff6: mov eax, dword ptr [eax + 0x6dc] */ r_eax = R32((u32)(r_eax+0x6dcu));
    /* 004afffc: jmp 0x4affd7 */ goto L_004affd7;
L_004afffe:; BB(0x004afffe);
    /* 004afffe: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0001: mov dword ptr [esi + 0x74c], 0 */ W32((u32)(r_esi+0x74cu), 0x0u);
    /* 004b000b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b000d: mov dword ptr [esi + 0x790], eax */ W32((u32)(r_esi+0x790u), r_eax);
    /* 004b0013: mov dword ptr [esi + 0x750], 0 */ W32((u32)(r_esi+0x750u), 0x0u);
    /* 004b001d: mov dword ptr [esi + 0x794], eax */ W32((u32)(r_esi+0x794u), r_eax);
    /* 004b0023: mov dword ptr [esi + 0x798], eax */ W32((u32)(r_esi+0x798u), r_eax);
    /* 004b0029: mov dword ptr [esi + 0x79c], eax */ W32((u32)(r_esi+0x79cu), r_eax);
    /* 004b002f: mov dword ptr [esi + 0x754], 0 */ W32((u32)(r_esi+0x754u), 0x0u);
    /* 004b0039: mov dword ptr [esi + 0x7a0], eax */ W32((u32)(r_esi+0x7a0u), r_eax);
    /* 004b003f: mov dword ptr [esi + 0x7a4], eax */ W32((u32)(r_esi+0x7a4u), r_eax);
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004afe00); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
L_004b0280:; BB(0x004b0280);
    /* 004b0280: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0282: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b0285: jmp 0x4aff36 */ goto L_004aff36;
L_004b028a:; BB(0x004b028a);
    /* 004b028a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b028c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b028f: jmp 0x4afec8 */ goto L_004afec8;
}

void f_004afff7(void)
{
    FN_ENTER(0x004afff7);
    goto L_004afff7;
L_004affd7:; BB(0x004affd7);
    /* 004affd7: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004affda: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affdc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affde: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004affe6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4affebu); f_00830cd8();
    /* 004affeb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004affee: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afff1: jge 0x4afffe */ if ((fS==fO)) goto L_004afffe;
L_004afff3:; BB(0x004afff3);
    /* 004afff3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004afff6: mov eax, dword ptr [eax + 0x6dc] */ r_eax = R32((u32)(r_eax+0x6dcu));
L_004afff7:; BB(0x004afff7);
    /* 004afff7: sbb ah, 6 */ { u32 c = fC; u32 a = (u8)(r_eax>>8); u32 b = 0x6u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004afffa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004afffc: jmp 0x4affd7 */ goto L_004affd7;
L_004afffe:; BB(0x004afffe);
    /* 004afffe: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0001: mov dword ptr [esi + 0x74c], 0 */ W32((u32)(r_esi+0x74cu), 0x0u);
    /* 004b000b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b000d: mov dword ptr [esi + 0x790], eax */ W32((u32)(r_esi+0x790u), r_eax);
    /* 004b0013: mov dword ptr [esi + 0x750], 0 */ W32((u32)(r_esi+0x750u), 0x0u);
    /* 004b001d: mov dword ptr [esi + 0x794], eax */ W32((u32)(r_esi+0x794u), r_eax);
    /* 004b0023: mov dword ptr [esi + 0x798], eax */ W32((u32)(r_esi+0x798u), r_eax);
    /* 004b0029: mov dword ptr [esi + 0x79c], eax */ W32((u32)(r_esi+0x79cu), r_eax);
    /* 004b002f: mov dword ptr [esi + 0x754], 0 */ W32((u32)(r_esi+0x754u), 0x0u);
    /* 004b0039: mov dword ptr [esi + 0x7a0], eax */ W32((u32)(r_esi+0x7a0u), r_eax);
    /* 004b003f: mov dword ptr [esi + 0x7a4], eax */ W32((u32)(r_esi+0x7a4u), r_eax);
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004afff7); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

