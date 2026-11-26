#include "protos.h"

void f_00691204(void) /* sub_691204 */
{
    FN_ENTER(0x00691204);
    /* 00691204: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00691208: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069120c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00691210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691214: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691217: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069121b: mov esi, edx */ r_esi = r_edx;
    /* 0069121d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069121f: movzx ebx, byte ptr [esi + 0xf2] */ r_ebx = (u32)R8((u32)(r_esi+0xf2u));
    /* 00691226: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691229: je 0x69144c */ if (fZ) goto L_0069144c;
L_0069122f:; BB(0x0069122f);
    /* 0069122f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00691231:; BB(0x00691231);
    /* 00691231: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691233: je 0x691257 */ if (fZ) goto L_00691257;
L_00691235:; BB(0x00691235);
    /* 00691235: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00691237: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069123a: jl 0x691241 */ if ((fS!=fO)) goto L_00691241;
L_0069123c:; BB(0x0069123c);
    /* 0069123c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069123f: jle 0x69124a */ if ((fZ||fS!=fO)) goto L_0069124a;
L_00691241:; BB(0x00691241);
    /* 00691241: mov ebx, 9 */ r_ebx = 0x9u;
    /* 00691246: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0069124a:; BB(0x0069124a);
    /* 0069124a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069124c: movsx edi, bl */ r_edi = (u32)(i32)(i8)(u8)r_ebx;
    /* 0069124f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691250: mov ecx, esi */ r_ecx = r_esi;
    /* 00691252: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x691255u); call_ind(t); }
    /* 00691255: jmp 0x691265 */ goto L_00691265;
L_00691257:; BB(0x00691257);
    /* 00691257: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00691259: mov ecx, esi */ r_ecx = r_esi;
    /* 0069125b: call dword ptr [ebx + 0x7c] */ { u32 t = R32((u32)(r_ebx+0x7cu)); r_esp -= 4; W32(r_esp, 0x69125eu); call_ind(t); }
    /* 0069125e: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 00691261: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00691265:; BB(0x00691265);
    /* 00691265: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0069126b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069126f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691270: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x691275u); f_0069792c();
    /* 00691275: mov ebx, eax */ r_ebx = r_eax;
    /* 00691277: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691279: je 0x691438 */ if (fZ) goto L_00691438;
L_0069127f:; BB(0x0069127f);
    /* 0069127f: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691281: je 0x6913cc */ if (fZ) goto L_006913cc;
L_00691287:; BB(0x00691287);
    /* 00691287: movsx edi, word ptr [ebp + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0069128e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00691292: movzx edi, word ptr [ebp + 0x336] */ r_edi = (u32)R16((u32)(r_ebp+0x336u));
    /* 00691299: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069129b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0069129f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 006912a1: call dword ptr [edi + 0x7c] */ { u32 t = R32((u32)(r_edi+0x7cu)); r_esp -= 4; W32(r_esp, 0x6912a4u); call_ind(t); }
    /* 006912a4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006912a8: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 006912ab: mov dword ptr [ebp + edi*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_edi*4+0xdf8u), 0x0u);
    /* 006912b6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 006912b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006912ba: call dword ptr [edi + 0x4c] */ { u32 t = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, 0x6912bdu); call_ind(t); }
    /* 006912bd: movzx edi, byte ptr [ebx + 0xf2] */ r_edi = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006912c4: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006912c7: je 0x6913ee */ if (fZ) goto L_006913ee;
L_006912cd:; BB(0x006912cd);
    /* 006912cd: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006912d0: mov ebx, 9 */ r_ebx = 0x9u;
L_006912d5:; BB(0x006912d5);
    /* 006912d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006912d6: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006912da: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6912dfu); f_0069792c();
    /* 006912df: mov esi, eax */ r_esi = r_eax;
    /* 006912e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006912e3: je 0x691313 */ if (fZ) goto L_00691313;
L_006912e5:; BB(0x006912e5);
    /* 006912e5: mov dword ptr [ebp + ebx*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), 0x0u);
    /* 006912f0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006912f2: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006912f5: mov ecx, esi */ r_ecx = r_esi;
    /* 006912f7: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x6912fau); call_ind(t); }
    /* 006912fa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006912fc: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 006912ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691300: mov ecx, esi */ r_ecx = r_esi;
    /* 00691302: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x691305u); call_ind(t); }
    /* 00691305: mov dword ptr [ebp + edi*2 + 0xdf8], esi */ W32((u32)(r_ebp+r_edi*2+0xdf8u), r_esi);
    /* 0069130c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069130e: mov ecx, esi */ r_ecx = r_esi;
    /* 00691310: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x691313u); call_ind(t); }
L_00691313:; BB(0x00691313);
    /* 00691313: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691316: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691319: jle 0x6912d5 */ if ((fZ||fS!=fO)) goto L_006912d5;
L_0069131b:; BB(0x0069131b);
    /* 0069131b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0069131e: mov ebx, dword ptr [ebp + 0x328] */ r_ebx = R32((u32)(r_ebp+0x328u));
    /* 00691324: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691327: je 0x691338 */ if (fZ) goto L_00691338;
L_00691329:; BB(0x00691329);
    /* 00691329: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069132b: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x691330u); f_00691468();
    /* 00691330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691331: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691333: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x691338u); f_007aa4c8();
L_00691338:; BB(0x00691338);
    /* 00691338: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069133c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0069133f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00691343: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00691345:; BB(0x00691345);
    /* 00691345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691346: mov ecx, esi */ r_ecx = r_esi;
    /* 00691348: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x69134du); f_0069792c();
    /* 0069134d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069134f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691351: je 0x691386 */ if (fZ) goto L_00691386;
L_00691353:; BB(0x00691353);
    /* 00691353: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691355: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x69135au); f_008173b4();
    /* 0069135a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069135c: je 0x691386 */ if (fZ) goto L_00691386;
L_0069135e:; BB(0x0069135e);
    /* 0069135e: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 00691364: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691367: jne 0x69136d */ if (!fZ) goto L_0069136d;
L_00691369:; BB(0x00691369);
    /* 00691369: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069136b: jmp 0x69137b */ goto L_0069137b;
L_0069136d:; BB(0x0069136d);
    /* 0069136d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691370: je 0x691379 */ if (fZ) goto L_00691379;
L_00691372:; BB(0x00691372);
    /* 00691372: mov edx, 1 */ r_edx = 0x1u;
    /* 00691377: jmp 0x69137b */ goto L_0069137b;
L_00691379:; BB(0x00691379);
    /* 00691379: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069137b:; BB(0x0069137b);
    /* 0069137b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069137d: je 0x691386 */ if (fZ) goto L_00691386;
L_0069137f:; BB(0x0069137f);
    /* 0069137f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691381: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x691386u); f_005c42f4();
L_00691386:; BB(0x00691386);
    /* 00691386: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691389: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069138c: jl 0x691345 */ if ((fS!=fO)) goto L_00691345;
L_0069138e:; BB(0x0069138e);
    /* 0069138e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00691392: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00691395: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00691399: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069139a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069139c: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6913a1u); f_00770b58();
    /* 006913a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006913a5: mov word ptr [ebp + 0x336], bx */ W16((u32)(r_ebp+0x336u), (u16)r_ebx);
    /* 006913ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913ae: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x6913b3u); f_00775270();
    /* 006913b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913b5: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x6913bau); f_007776f8();
    /* 006913ba: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006913be: mov dword ptr [ebp + ebx*4 + 0xdf8], esi */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), r_esi);
    /* 006913c5: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 006913c7: mov ecx, esi */ r_ecx = r_esi;
    /* 006913c9: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x6913ccu); call_ind(t); }
L_006913cc:; BB(0x006913cc);
    /* 006913cc: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 006913d2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006913d5: je 0x6913e6 */ if (fZ) goto L_006913e6;
L_006913d7:; BB(0x006913d7);
    /* 006913d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913d9: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x6913deu); f_00691468();
    /* 006913de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006913df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913e1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x6913e6u); f_007aa4c8();
L_006913e6:; BB(0x006913e6);
    /* 006913e6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006913e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006913ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006913eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006913ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006913ed: ret  */ FN_RET(0x00691204); r_esp += 4; return;
L_006913ee:; BB(0x006913ee);
    /* 006913ee: movzx ebx, byte ptr [ebx + 0xf3] */ r_ebx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 006913f5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006913f8: jne 0x6912cd */ if (!fZ) goto L_006912cd;
L_006913fe:; BB(0x006913fe);
    /* 006913fe: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00691402: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00691405: mov edi, 9 */ r_edi = 0x9u;
L_0069140a:; BB(0x0069140a);
    /* 0069140a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069140b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069140d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x691412u); f_0069792c();
    /* 00691412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691414: je 0x691428 */ if (fZ) goto L_00691428;
L_00691416:; BB(0x00691416);
    /* 00691416: mov dword ptr [ebp + edi*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_edi*4+0xdf8u), 0x0u);
    /* 00691421: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691423: mov ecx, eax */ r_ecx = r_eax;
    /* 00691425: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x691428u); call_ind(t); }
L_00691428:; BB(0x00691428);
    /* 00691428: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069142b: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069142e: jle 0x69140a */ if ((fZ||fS!=fO)) goto L_0069140a;
L_00691430:; BB(0x00691430);
    /* 00691430: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00691433: jmp 0x6912cd */ goto L_006912cd;
L_00691438:; BB(0x00691438);
    /* 00691438: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0069143c: mov dword ptr [ebp + ebx*4 + 0xdf8], esi */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), r_esi);
    /* 00691443: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00691445: mov ecx, esi */ r_ecx = r_esi;
    /* 00691447: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x69144au); call_ind(t); }
    /* 0069144a: jmp 0x6913cc */ goto L_006913cc;
L_0069144c:; BB(0x0069144c);
    /* 0069144c: movzx ebx, byte ptr [esi + 0xf3] */ r_ebx = (u32)R8((u32)(r_esi+0xf3u));
    /* 00691453: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691456: jne 0x69122f */ if (!fZ) goto L_0069122f;
L_0069145c:; BB(0x0069145c);
    /* 0069145c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00691461: jmp 0x691231 */ goto L_00691231;
}

void f_00691210(void) /* sub_691210 */
{
    FN_ENTER(0x00691210);
    /* 00691210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691214: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691217: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069121b: mov esi, edx */ r_esi = r_edx;
    /* 0069121d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069121f: movzx ebx, byte ptr [esi + 0xf2] */ r_ebx = (u32)R8((u32)(r_esi+0xf2u));
    /* 00691226: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691229: je 0x69144c */ if (fZ) goto L_0069144c;
L_0069122f:; BB(0x0069122f);
    /* 0069122f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00691231:; BB(0x00691231);
    /* 00691231: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691233: je 0x691257 */ if (fZ) goto L_00691257;
L_00691235:; BB(0x00691235);
    /* 00691235: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00691237: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069123a: jl 0x691241 */ if ((fS!=fO)) goto L_00691241;
L_0069123c:; BB(0x0069123c);
    /* 0069123c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069123f: jle 0x69124a */ if ((fZ||fS!=fO)) goto L_0069124a;
L_00691241:; BB(0x00691241);
    /* 00691241: mov ebx, 9 */ r_ebx = 0x9u;
    /* 00691246: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0069124a:; BB(0x0069124a);
    /* 0069124a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069124c: movsx edi, bl */ r_edi = (u32)(i32)(i8)(u8)r_ebx;
    /* 0069124f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691250: mov ecx, esi */ r_ecx = r_esi;
    /* 00691252: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x691255u); call_ind(t); }
    /* 00691255: jmp 0x691265 */ goto L_00691265;
L_00691257:; BB(0x00691257);
    /* 00691257: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00691259: mov ecx, esi */ r_ecx = r_esi;
    /* 0069125b: call dword ptr [ebx + 0x7c] */ { u32 t = R32((u32)(r_ebx+0x7cu)); r_esp -= 4; W32(r_esp, 0x69125eu); call_ind(t); }
    /* 0069125e: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 00691261: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00691265:; BB(0x00691265);
    /* 00691265: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0069126b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069126f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691270: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x691275u); f_0069792c();
    /* 00691275: mov ebx, eax */ r_ebx = r_eax;
    /* 00691277: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691279: je 0x691438 */ if (fZ) goto L_00691438;
L_0069127f:; BB(0x0069127f);
    /* 0069127f: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691281: je 0x6913cc */ if (fZ) goto L_006913cc;
L_00691287:; BB(0x00691287);
    /* 00691287: movsx edi, word ptr [ebp + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0069128e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00691292: movzx edi, word ptr [ebp + 0x336] */ r_edi = (u32)R16((u32)(r_ebp+0x336u));
    /* 00691299: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069129b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0069129f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 006912a1: call dword ptr [edi + 0x7c] */ { u32 t = R32((u32)(r_edi+0x7cu)); r_esp -= 4; W32(r_esp, 0x6912a4u); call_ind(t); }
    /* 006912a4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006912a8: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 006912ab: mov dword ptr [ebp + edi*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_edi*4+0xdf8u), 0x0u);
    /* 006912b6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 006912b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006912ba: call dword ptr [edi + 0x4c] */ { u32 t = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, 0x6912bdu); call_ind(t); }
    /* 006912bd: movzx edi, byte ptr [ebx + 0xf2] */ r_edi = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006912c4: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006912c7: je 0x6913ee */ if (fZ) goto L_006913ee;
L_006912cd:; BB(0x006912cd);
    /* 006912cd: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006912d0: mov ebx, 9 */ r_ebx = 0x9u;
L_006912d5:; BB(0x006912d5);
    /* 006912d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006912d6: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006912da: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6912dfu); f_0069792c();
    /* 006912df: mov esi, eax */ r_esi = r_eax;
    /* 006912e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006912e3: je 0x691313 */ if (fZ) goto L_00691313;
L_006912e5:; BB(0x006912e5);
    /* 006912e5: mov dword ptr [ebp + ebx*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), 0x0u);
    /* 006912f0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006912f2: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006912f5: mov ecx, esi */ r_ecx = r_esi;
    /* 006912f7: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x6912fau); call_ind(t); }
    /* 006912fa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006912fc: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 006912ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691300: mov ecx, esi */ r_ecx = r_esi;
    /* 00691302: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x691305u); call_ind(t); }
    /* 00691305: mov dword ptr [ebp + edi*2 + 0xdf8], esi */ W32((u32)(r_ebp+r_edi*2+0xdf8u), r_esi);
    /* 0069130c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069130e: mov ecx, esi */ r_ecx = r_esi;
    /* 00691310: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x691313u); call_ind(t); }
L_00691313:; BB(0x00691313);
    /* 00691313: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691316: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691319: jle 0x6912d5 */ if ((fZ||fS!=fO)) goto L_006912d5;
L_0069131b:; BB(0x0069131b);
    /* 0069131b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0069131e: mov ebx, dword ptr [ebp + 0x328] */ r_ebx = R32((u32)(r_ebp+0x328u));
    /* 00691324: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691327: je 0x691338 */ if (fZ) goto L_00691338;
L_00691329:; BB(0x00691329);
    /* 00691329: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069132b: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x691330u); f_00691468();
    /* 00691330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691331: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691333: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x691338u); f_007aa4c8();
L_00691338:; BB(0x00691338);
    /* 00691338: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069133c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0069133f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00691343: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00691345:; BB(0x00691345);
    /* 00691345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691346: mov ecx, esi */ r_ecx = r_esi;
    /* 00691348: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x69134du); f_0069792c();
    /* 0069134d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069134f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691351: je 0x691386 */ if (fZ) goto L_00691386;
L_00691353:; BB(0x00691353);
    /* 00691353: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691355: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x69135au); f_008173b4();
    /* 0069135a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069135c: je 0x691386 */ if (fZ) goto L_00691386;
L_0069135e:; BB(0x0069135e);
    /* 0069135e: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 00691364: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691367: jne 0x69136d */ if (!fZ) goto L_0069136d;
L_00691369:; BB(0x00691369);
    /* 00691369: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069136b: jmp 0x69137b */ goto L_0069137b;
L_0069136d:; BB(0x0069136d);
    /* 0069136d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00691370: je 0x691379 */ if (fZ) goto L_00691379;
L_00691372:; BB(0x00691372);
    /* 00691372: mov edx, 1 */ r_edx = 0x1u;
    /* 00691377: jmp 0x69137b */ goto L_0069137b;
L_00691379:; BB(0x00691379);
    /* 00691379: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069137b:; BB(0x0069137b);
    /* 0069137b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069137d: je 0x691386 */ if (fZ) goto L_00691386;
L_0069137f:; BB(0x0069137f);
    /* 0069137f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691381: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x691386u); f_005c42f4();
L_00691386:; BB(0x00691386);
    /* 00691386: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691389: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069138c: jl 0x691345 */ if ((fS!=fO)) goto L_00691345;
L_0069138e:; BB(0x0069138e);
    /* 0069138e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00691392: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00691395: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00691399: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069139a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069139c: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6913a1u); f_00770b58();
    /* 006913a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006913a5: mov word ptr [ebp + 0x336], bx */ W16((u32)(r_ebp+0x336u), (u16)r_ebx);
    /* 006913ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913ae: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x6913b3u); f_00775270();
    /* 006913b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913b5: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x6913bau); f_007776f8();
    /* 006913ba: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006913be: mov dword ptr [ebp + ebx*4 + 0xdf8], esi */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), r_esi);
    /* 006913c5: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 006913c7: mov ecx, esi */ r_ecx = r_esi;
    /* 006913c9: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x6913ccu); call_ind(t); }
L_006913cc:; BB(0x006913cc);
    /* 006913cc: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 006913d2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006913d5: je 0x6913e6 */ if (fZ) goto L_006913e6;
L_006913d7:; BB(0x006913d7);
    /* 006913d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913d9: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x6913deu); f_00691468();
    /* 006913de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006913df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006913e1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x6913e6u); f_007aa4c8();
L_006913e6:; BB(0x006913e6);
    /* 006913e6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006913e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006913ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006913eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006913ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006913ed: ret  */ FN_RET(0x00691210); r_esp += 4; return;
L_006913ee:; BB(0x006913ee);
    /* 006913ee: movzx ebx, byte ptr [ebx + 0xf3] */ r_ebx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 006913f5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006913f8: jne 0x6912cd */ if (!fZ) goto L_006912cd;
L_006913fe:; BB(0x006913fe);
    /* 006913fe: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00691402: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00691405: mov edi, 9 */ r_edi = 0x9u;
L_0069140a:; BB(0x0069140a);
    /* 0069140a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069140b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069140d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x691412u); f_0069792c();
    /* 00691412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691414: je 0x691428 */ if (fZ) goto L_00691428;
L_00691416:; BB(0x00691416);
    /* 00691416: mov dword ptr [ebp + edi*4 + 0xdf8], 0 */ W32((u32)(r_ebp+r_edi*4+0xdf8u), 0x0u);
    /* 00691421: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691423: mov ecx, eax */ r_ecx = r_eax;
    /* 00691425: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x691428u); call_ind(t); }
L_00691428:; BB(0x00691428);
    /* 00691428: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069142b: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069142e: jle 0x69140a */ if ((fZ||fS!=fO)) goto L_0069140a;
L_00691430:; BB(0x00691430);
    /* 00691430: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00691433: jmp 0x6912cd */ goto L_006912cd;
L_00691438:; BB(0x00691438);
    /* 00691438: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0069143c: mov dword ptr [ebp + ebx*4 + 0xdf8], esi */ W32((u32)(r_ebp+r_ebx*4+0xdf8u), r_esi);
    /* 00691443: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00691445: mov ecx, esi */ r_ecx = r_esi;
    /* 00691447: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x69144au); call_ind(t); }
    /* 0069144a: jmp 0x6913cc */ goto L_006913cc;
L_0069144c:; BB(0x0069144c);
    /* 0069144c: movzx ebx, byte ptr [esi + 0xf3] */ r_ebx = (u32)R8((u32)(r_esi+0xf3u));
    /* 00691453: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691456: jne 0x69122f */ if (!fZ) goto L_0069122f;
L_0069145c:; BB(0x0069145c);
    /* 0069145c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00691461: jmp 0x691231 */ goto L_00691231;
}

void f_00691468(void) /* sub_691468 */
{
    FN_ENTER(0x00691468);
    /* 00691468: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0069146f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691470: call 0x691478 */ r_esp -= 4; W32(r_esp, 0x691475u); f_00691478();
    /* 00691475: ret  */ FN_RET(0x00691468); r_esp += 4; return;
}

void f_00691478(void) /* sub_691478 */
{
    FN_ENTER(0x00691478);
    /* 00691478: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069147c: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 0069147f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00691482: ja 0x691565 */ if ((!fC&&!fZ)) goto L_00691565;
L_00691488:; BB(0x00691488);
    /* 00691488: mov eax, dword ptr [edx*4 + 0x93c5fc] */ r_eax = R32((u32)(r_edx*4+0x93c5fcu));
    /* 0069148f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00691565:; BB(0x00691565);
    /* 00691565: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69156au); f_0069d1bc();
    /* 0069156a: ret 4 */ FN_RET(0x00691478); r_esp += 8; return;
}

void f_00691491(void)
{
    FN_ENTER(0x00691491);
    /* 00691491: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00691497: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691499: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69149cu); call_ind(t); }
    /* 0069149c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069149f: ret 4 */ FN_RET(0x00691491); r_esp += 8; return;
}

void f_006914a2(void)
{
    FN_ENTER(0x006914a2);
    /* 006914a2: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914aa: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x6914adu); call_ind(t); }
    /* 006914ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006914b0: ret 4 */ FN_RET(0x006914a2); r_esp += 8; return;
}

void f_006914b3(void)
{
    FN_ENTER(0x006914b3);
    /* 006914b3: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914b9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914bb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6914beu); call_ind(t); }
    /* 006914be: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006914c1: ret 4 */ FN_RET(0x006914b3); r_esp += 8; return;
}

void f_006914c4(void)
{
    FN_ENTER(0x006914c4);
    /* 006914c4: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914ca: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914cc: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x6914cfu); call_ind(t); }
    /* 006914cf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006914d2: ret 4 */ FN_RET(0x006914c4); r_esp += 8; return;
}

void f_006914d5(void)
{
    FN_ENTER(0x006914d5);
    /* 006914d5: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914db: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914dd: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x6914e0u); call_ind(t); }
    /* 006914e0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006914e3: ret 4 */ FN_RET(0x006914d5); r_esp += 8; return;
}

void f_006914e6(void)
{
    FN_ENTER(0x006914e6);
    /* 006914e6: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914ec: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914ee: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x6914f1u); call_ind(t); }
    /* 006914f1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006914f4: ret 4 */ FN_RET(0x006914e6); r_esp += 8; return;
}

void f_006914f7(void)
{
    FN_ENTER(0x006914f7);
    /* 006914f7: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006914fd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006914ff: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x691502u); call_ind(t); }
    /* 00691502: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00691505: ret 4 */ FN_RET(0x006914f7); r_esp += 8; return;
}

void f_00691508(void)
{
    FN_ENTER(0x00691508);
    /* 00691508: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0069150e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691510: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x691513u); call_ind(t); }
    /* 00691513: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00691516: ret 4 */ FN_RET(0x00691508); r_esp += 8; return;
}

void f_00691519(void)
{
    FN_ENTER(0x00691519);
    /* 00691519: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0069151f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691521: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x691524u); call_ind(t); }
    /* 00691524: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00691527: ret 4 */ FN_RET(0x00691519); r_esp += 8; return;
}

void f_0069152a(void)
{
    FN_ENTER(0x0069152a);
    /* 0069152a: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00691530: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691532: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x691535u); call_ind(t); }
    /* 00691535: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00691538: ret 4 */ FN_RET(0x0069152a); r_esp += 8; return;
}

void f_0069153b(void)
{
    FN_ENTER(0x0069153b);
    /* 0069153b: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00691541: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691543: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x691546u); call_ind(t); }
    /* 00691546: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00691549: ret 4 */ FN_RET(0x0069153b); r_esp += 8; return;
}

void f_0069154c(void)
{
    FN_ENTER(0x0069154c);
    /* 0069154c: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00691552: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691554: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x691557u); call_ind(t); }
    /* 00691557: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069155a: ret 4 */ FN_RET(0x0069154c); r_esp += 8; return;
}

void f_0069155d(void)
{
    FN_ENTER(0x0069155d);
    /* 0069155d: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x691562u); f_006a20a4();
    /* 00691562: ret 4 */ FN_RET(0x0069155d); r_esp += 8; return;
}

void f_00691570(void) /* sub_691570 */
{
    FN_ENTER(0x00691570);
    /* 00691570: mov eax, dword ptr [ecx + 0x900] */ r_eax = R32((u32)(r_ecx+0x900u));
    /* 00691576: ret  */ FN_RET(0x00691570); r_esp += 4; return;
}

void f_00691578(void) /* sub_691578 */
{
    FN_ENTER(0x00691578);
    /* 00691578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069157a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069157b: mov edi, ecx */ r_edi = r_ecx;
    /* 0069157d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00691581: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00691583: mov ecx, esi */ r_ecx = r_esi;
    /* 00691585: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x691588u); call_ind(t); }
    /* 00691588: mov ebx, eax */ r_ebx = r_eax;
    /* 0069158a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069158c: je 0x6915c1 */ if (fZ) goto L_006915c1;
L_0069158e:; BB(0x0069158e);
    /* 0069158e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00691591: cmp edx, dword ptr [0x9cb9a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691597: jne 0x6915b4 */ if (!fZ) goto L_006915b4;
L_00691599:; BB(0x00691599);
    /* 00691599: mov ecx, esi */ r_ecx = r_esi;
    /* 0069159b: call 0x691600 */ r_esp -= 4; W32(r_esp, 0x6915a0u); f_00691600();
    /* 006915a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006915a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006915a2: mov ecx, edi */ r_ecx = r_edi;
    /* 006915a4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006915a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006915a9: call 0x6916dc */ r_esp -= 4; W32(r_esp, 0x6915aeu); f_006916dc();
    /* 006915ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006915af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006915b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006915b1: ret 8 */ FN_RET(0x00691578); r_esp += 12; return;
L_006915b4:; BB(0x006915b4);
    /* 006915b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006915b5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006915b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006915ba: mov ecx, edi */ r_ecx = r_edi;
    /* 006915bc: call 0x6915c8 */ r_esp -= 4; W32(r_esp, 0x6915c1u); f_006915c8();
L_006915c1:; BB(0x006915c1);
    /* 006915c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006915c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006915c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006915c4: ret 8 */ FN_RET(0x00691578); r_esp += 12; return;
}

void f_006915c8(void) /* sub_6915C8 */
{
    FN_ENTER(0x006915c8);
    /* 006915c8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x6915cdu); f_00816d30();
    /* 006915cd: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006915d1: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6915d6u); f_00816cb8();
    /* 006915d6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006915da: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6915dfu); f_00816cb8();
    /* 006915df: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 006915e4: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6915e9u); f_00816cb8();
    /* 006915e9: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006915ee: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 006915f3: call 0x718300 */ r_esp -= 4; W32(r_esp, 0x6915f8u); f_00718300();
    /* 006915f8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006915fb: ret 8 */ FN_RET(0x006915c8); r_esp += 12; return;
}

void f_00691600(void) /* sub_691600 */
{
    FN_ENTER(0x00691600);
    /* 00691600: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691603: fld dword ptr [ecx + 0x864] */ FPUSH(R_F32((u32)(r_ecx+0x864u)));
    /* 00691609: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069160c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00691610: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691615: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00691619: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069161d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00691621: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00691624: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00691628: fld dword ptr [ecx + 0x854] */ FPUSH(R_F32((u32)(r_ecx+0x854u)));
    /* 0069162e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00691631: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00691635: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069163a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069163e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00691642: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00691646: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00691649: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0069164d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069164f: fld dword ptr [ecx + 0x834] */ FPUSH(R_F32((u32)(r_ecx+0x834u)));
    /* 00691655: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00691658: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069165c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691661: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00691665: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00691669: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069166d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00691670: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00691674: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00691676: fld dword ptr [ecx + 0x844] */ FPUSH(R_F32((u32)(r_ecx+0x844u)));
    /* 0069167c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069167f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00691683: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691688: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069168c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00691690: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00691694: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00691697: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0069169b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069169d: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006916a0: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006916a5: jne 0x6916b8 */ if (!fZ) goto L_006916b8;
L_006916a7:; BB(0x006916a7);
    /* 006916a7: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 006916ad: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 006916b0: fmul dword ptr [ecx + 0x880] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x880u));
    /* 006916b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_006916b8:; BB(0x006916b8);
    /* 006916b8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006916bb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006916bf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006916c4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006916c8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006916cc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006916d0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006916d3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006916d7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006916da: ret  */ FN_RET(0x00691600); r_esp += 4; return;
}

void f_006916dc(void) /* sub_6916DC */
{
    FN_ENTER(0x006916dc);
    /* 006916dc: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x6916e1u); f_00816d30();
    /* 006916e1: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006916e5: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6916eau); f_00816cb8();
    /* 006916ea: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006916ee: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6916f3u); f_00816cb8();
    /* 006916f3: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 006916f8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x6916fdu); f_00816cb8();
    /* 006916fd: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00691701: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x691706u); f_00815f24();
    /* 00691706: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 0069170b: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x691710u); f_00816cb8();
    /* 00691710: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00691715: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0069171a: call 0x718300 */ r_esp -= 4; W32(r_esp, 0x69171fu); f_00718300();
    /* 0069171f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691722: ret 0xc */ FN_RET(0x006916dc); r_esp += 16; return;
}

void f_00691728(void) /* sub_691728 */
{
    FN_ENTER(0x00691728);
    /* 00691728: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691729: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069172a: mov esi, ecx */ r_esi = r_ecx;
    /* 0069172c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00691730: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00691733: cmp eax, dword ptr [0x9cb9a8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691739: jne 0x69174d */ if (!fZ) goto L_0069174d;
L_0069173b:; BB(0x0069173b);
    /* 0069173b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00691740: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x691745u); f_006a8f2c();
    /* 00691745: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00691748: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069174b: je 0x691776 */ if (fZ) goto L_00691776;
L_0069174d:; BB(0x0069174d);
    /* 0069174d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00691751: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691752: add esi, 0x834 */ {  u32 a = r_esi; u32 b = 0x834u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691758: mov ecx, esi */ r_ecx = r_esi;
    /* 0069175a: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x69175fu); f_006a9078();
    /* 0069175f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691764: push 0x557 */ { u32 v = 0x557u; r_esp -= 4; W32(r_esp, v); }
    /* 00691769: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x69176eu); f_00814298();
    /* 0069176e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691772: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691773: ret 8 */ FN_RET(0x00691728); r_esp += 12; return;
L_00691776:; BB(0x00691776);
    /* 00691776: mov eax, dword ptr [esi + 0x900] */ r_eax = R32((u32)(r_esi+0x900u));
    /* 0069177c: cmp eax, dword ptr [ebp + 0x900] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x900u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691782: jne 0x69174d */ if (!fZ) goto L_0069174d;
L_00691784:; BB(0x00691784);
    /* 00691784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691785: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691786: ret 8 */ FN_RET(0x00691728); r_esp += 12; return;
}

void f_0069178c(void) /* sub_69178C */
{
    FN_ENTER(0x0069178c);
    /* 0069178c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00691790: add ecx, 0x844 */ {  u32 a = r_ecx; u32 b = 0x844u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691796: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069179a: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x69179fu); f_006a9078();
    /* 0069179f: ret 8 */ FN_RET(0x0069178c); r_esp += 12; return;
}

void f_006917a4(void) /* sub_6917A4 */
{
    FN_ENTER(0x006917a4);
    /* 006917a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006917a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006917a6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006917a9: mov esi, ecx */ r_esi = r_ecx;
    /* 006917ab: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006917af: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6917b4u); f_00687c48();
    /* 006917b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006917b6: jne 0x6917c0 */ if (!fZ) goto L_006917c0;
L_006917b8:; BB(0x006917b8);
    /* 006917b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006917bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006917bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006917bd: ret 8 */ FN_RET(0x006917a4); r_esp += 12; return;
L_006917c0:; BB(0x006917c0);
    /* 006917c0: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006917c3: cmp edx, dword ptr [0x9c605c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006917c9: jne 0x6917e5 */ if (!fZ) goto L_006917e5;
L_006917cb:; BB(0x006917cb);
    /* 006917cb: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 006917d2: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006917d8: je 0x6917e5 */ if (fZ) goto L_006917e5;
L_006917da:; BB(0x006917da);
    /* 006917da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006917db: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6917e0u); f_007b4d18();
    /* 006917e0: mov ebp, eax */ r_ebp = r_eax;
    /* 006917e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006917e5:; BB(0x006917e5);
    /* 006917e5: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006917e8: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006917ee: jne 0x69181b */ if (!fZ) goto L_0069181b;
L_006917f0:; BB(0x006917f0);
    /* 006917f0: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006917f7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006917fa: jne 0x6918ac */ if (!fZ) goto L_006918ac;
L_00691800:; BB(0x00691800);
    /* 00691800: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00691804: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691805: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691806: add esi, 0x854 */ {  u32 a = r_esi; u32 b = 0x854u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069180c: mov ecx, esi */ r_ecx = r_esi;
    /* 0069180e: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x691813u); f_006a9078();
    /* 00691813: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691816: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691817: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691818: ret 8 */ FN_RET(0x006917a4); r_esp += 12; return;
L_0069181b:; BB(0x0069181b);
    /* 0069181b: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00691822: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691825: jne 0x6918ac */ if (!fZ) goto L_006918ac;
L_0069182b:; BB(0x0069182b);
    /* 0069182b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069182d: je 0x69183c */ if (fZ) goto L_0069183c;
L_0069182f:; BB(0x0069182f);
    /* 0069182f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691832: jne 0x69183c */ if (!fZ) goto L_0069183c;
L_00691834:; BB(0x00691834);
    /* 00691834: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691837: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691838: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691839: ret 8 */ FN_RET(0x006917a4); r_esp += 12; return;
L_0069183c:; BB(0x0069183c);
    /* 0069183c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00691840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691842: lea ecx, [esi + 0x854] */ r_ecx = (u32)(r_esi+0x854u);
    /* 00691848: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x69184du); f_006a9078();
    /* 0069184d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00691851: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00691855: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691857: je 0x691874 */ if (fZ) goto L_00691874;
L_00691859:; BB(0x00691859);
    /* 00691859: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69185eu); f_0068d5ac();
    /* 0069185e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691860: je 0x691874 */ if (fZ) goto L_00691874;
L_00691862:; BB(0x00691862);
    /* 00691862: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00691866: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691867: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691868: add eax, 0x864 */ {  u32 a = r_eax; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069186d: mov ecx, eax */ r_ecx = r_eax;
    /* 0069186f: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x691874u); f_006a9078();
L_00691874:; BB(0x00691874);
    /* 00691874: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x691879u); f_007a61a4();
    /* 00691879: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069187c: jne 0x6918ac */ if (!fZ) goto L_006918ac;
L_0069187e:; BB(0x0069187e);
    /* 0069187e: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00691882: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00691886: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069188a: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069188f: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00691894: mov byte ptr [esp + 4], 0x8f */ W8((u32)(r_esp+0x4u), 0x8fu);
    /* 00691899: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0069189e: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 006918a3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006918a7: call 0x8004fc */ r_esp -= 4; W32(r_esp, 0x6918acu); f_008004fc();
L_006918ac:; BB(0x006918ac);
    /* 006918ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006918af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006918b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006918b1: ret 8 */ FN_RET(0x006917a4); r_esp += 12; return;
}

void f_006918b4(void) /* sub_6918B4 */
{
    FN_ENTER(0x006918b4);
    /* 006918b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006918b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006918b7: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6918bcu); f_00687c48();
    /* 006918bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006918be: jne 0x6918c4 */ if (!fZ) goto L_006918c4;
L_006918c0:; BB(0x006918c0);
    /* 006918c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006918c1: ret 8 */ FN_RET(0x006918b4); r_esp += 12; return;
L_006918c4:; BB(0x006918c4);
    /* 006918c4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006918c8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006918cb: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006918d1: jne 0x6918f5 */ if (!fZ) goto L_006918f5;
L_006918d3:; BB(0x006918d3);
    /* 006918d3: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006918da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006918dd: jne 0x6918f5 */ if (!fZ) goto L_006918f5;
L_006918df:; BB(0x006918df);
    /* 006918df: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006918e3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006918e7: add ebp, 0x864 */ {  u32 a = r_ebp; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006918ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006918ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006918f0: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x6918f5u); f_006a9078();
L_006918f5:; BB(0x006918f5);
    /* 006918f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006918f6: ret 8 */ FN_RET(0x006918b4); r_esp += 12; return;
}

void f_006918fc(void) /* sub_6918FC */
{
    FN_ENTER(0x006918fc);
    /* 006918fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006918fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006918fe: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691901: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00691905: mov byte ptr [esp + 4], 0x8f */ W8((u32)(r_esp+0x4u), 0x8fu);
    /* 0069190a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069190c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00691911: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 00691916: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0069191b: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 00691920: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00691922: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00691926: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069192a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0069192d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00691931: call 0x6a9800 */ r_esp -= 4; W32(r_esp, 0x691936u); f_006a9800();
    /* 00691936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691938: je 0x6919a7 */ if (fZ) goto L_006919a7;
L_0069193a:; BB(0x0069193a);
    /* 0069193a: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069193f: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x691944u); f_0068d5ac();
    /* 00691944: mov esi, eax */ r_esi = r_eax;
    /* 00691946: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691948: je 0x6919a7 */ if (fZ) goto L_006919a7;
L_0069194a:; BB(0x0069194a);
    /* 0069194a: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0069194f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691950: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x691955u); f_007b4d18();
    /* 00691955: mov ebx, eax */ r_ebx = r_eax;
    /* 00691957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069195a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069195c: je 0x6919a7 */ if (fZ) goto L_006919a7;
L_0069195e:; BB(0x0069195e);
    /* 0069195e: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00691962: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00691966: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691968: je 0x69197c */ if (fZ) goto L_0069197c;
L_0069196a:; BB(0x0069196a);
    /* 0069196a: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 0069196f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691971: lea ecx, [esi + 0x864] */ r_ecx = (u32)(r_esi+0x864u);
    /* 00691977: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x69197cu); f_006a9078();
L_0069197c:; BB(0x0069197c);
    /* 0069197c: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0069197f: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691985: je 0x6919a7 */ if (fZ) goto L_006919a7;
L_00691987:; BB(0x00691987);
    /* 00691987: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0069198b: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x691990u); f_0068d5ac();
    /* 00691990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691992: je 0x6919a7 */ if (fZ) goto L_006919a7;
L_00691994:; BB(0x00691994);
    /* 00691994: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00691999: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069199a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069199b: add eax, 0x854 */ {  u32 a = r_eax; u32 b = 0x854u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006919a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006919a2: call 0x6a9078 */ r_esp -= 4; W32(r_esp, 0x6919a7u); f_006a9078();
L_006919a7:; BB(0x006919a7);
    /* 006919a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006919aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006919ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006919ac: ret  */ FN_RET(0x006918fc); r_esp += 4; return;
}

void f_006919b0(void) /* sub_6919B0 */
{
    FN_ENTER(0x006919b0);
    /* 006919b0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006919b3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006919b7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006919bf: mov byte ptr [esp + 4], 0x90 */ W8((u32)(r_esp+0x4u), 0x90u);
    /* 006919c4: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 006919c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006919cb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006919cf: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006919d2: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006919d6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006919da: call 0x6a9828 */ r_esp -= 4; W32(r_esp, 0x6919dfu); f_006a9828();
    /* 006919df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006919e1: je 0x691a0f */ if (fZ) goto L_00691a0f;
L_006919e3:; BB(0x006919e3);
    /* 006919e3: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006919e8: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6919edu); f_0068d5ac();
    /* 006919ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006919ef: je 0x691a0f */ if (fZ) goto L_00691a0f;
L_006919f1:; BB(0x006919f1);
    /* 006919f1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006919f5: mov dword ptr [eax + 0x900], edx */ W32((u32)(r_eax+0x900u), r_edx);
    /* 006919fb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006919fe: je 0x691a13 */ if (fZ) goto L_00691a13;
L_00691a00:; BB(0x00691a00);
    /* 00691a00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00691a02: push dword ptr [eax + 0xa4] */ { u32 v = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00691a08: mov ecx, eax */ r_ecx = r_eax;
    /* 00691a0a: call 0x7ba0ec */ r_esp -= 4; W32(r_esp, 0x691a0fu); f_007ba0ec();
L_00691a0f:; BB(0x00691a0f);
    /* 00691a0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691a12: ret  */ FN_RET(0x006919b0); r_esp += 4; return;
L_00691a13:; BB(0x00691a13);
    /* 00691a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00691a15: push dword ptr [eax + 0xa4] */ { u32 v = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00691a1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00691a1d: call 0x7ba0bc */ r_esp -= 4; W32(r_esp, 0x691a22u); f_007ba0bc();
    /* 00691a22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691a25: ret  */ FN_RET(0x006919b0); r_esp += 4; return;
}

void f_00691a28(void) /* sub_691A28 */
{
    FN_ENTER(0x00691a28);
    /* 00691a28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691a2b: je 0x691a3b */ if (fZ) goto L_00691a3b;
L_00691a2d:; BB(0x00691a2d);
    /* 00691a2d: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00691a34: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691a37: jne 0x691a3b */ if (!fZ) goto L_00691a3b;
L_00691a39:; BB(0x00691a39);
    /* 00691a39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691a3a: ret  */ FN_RET(0x00691a28); r_esp += 4; return;
L_00691a3b:; BB(0x00691a3b);
    /* 00691a3b: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00691a3f: mov byte ptr [esp], 0x81 */ W8((u32)(r_esp), 0x81u);
    /* 00691a43: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00691a48: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00691a4d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00691a50: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x691a55u); f_008003e0();
    /* 00691a55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691a56: ret  */ FN_RET(0x00691a28); r_esp += 4; return;
}

void f_00691a58(void) /* sub_691A58 */
{
    FN_ENTER(0x00691a58);
    /* 00691a58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691a5b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00691a5f: mov byte ptr [esp + 4], 0x81 */ W8((u32)(r_esp+0x4u), 0x81u);
    /* 00691a64: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00691a69: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00691a6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691a6f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00691a73: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x691a78u); f_006a9e70();
    /* 00691a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691a7a: je 0x691a91 */ if (fZ) goto L_00691a91;
L_00691a7c:; BB(0x00691a7c);
    /* 00691a7c: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00691a81: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x691a86u); f_0068d5ac();
    /* 00691a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691a88: je 0x691a91 */ if (fZ) goto L_00691a91;
L_00691a8a:; BB(0x00691a8a);
    /* 00691a8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00691a8c: call 0x691a98 */ r_esp -= 4; W32(r_esp, 0x691a91u); f_00691a98();
L_00691a91:; BB(0x00691a91);
    /* 00691a91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691a94: ret  */ FN_RET(0x00691a58); r_esp += 4; return;
}

void f_00691a98(void) /* sub_691A98 */
{
    FN_ENTER(0x00691a98);
    /* 00691a98: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00691a9e: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691aa3: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00691aa9: ret  */ FN_RET(0x00691a98); r_esp += 4; return;
}

void f_00691aac(void) /* sub_691AAC */
{
    FN_ENTER(0x00691aac);
    /* 00691aac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691aad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691aaf: je 0x691abf */ if (fZ) goto L_00691abf;
L_00691ab1:; BB(0x00691ab1);
    /* 00691ab1: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00691ab8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691abb: jne 0x691abf */ if (!fZ) goto L_00691abf;
L_00691abd:; BB(0x00691abd);
    /* 00691abd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691abe: ret  */ FN_RET(0x00691aac); r_esp += 4; return;
L_00691abf:; BB(0x00691abf);
    /* 00691abf: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00691ac3: mov byte ptr [esp], 0x82 */ W8((u32)(r_esp), 0x82u);
    /* 00691ac7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00691acc: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00691ad1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00691ad4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x691ad9u); f_008003e0();
    /* 00691ad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691ada: ret  */ FN_RET(0x00691aac); r_esp += 4; return;
}

void f_00691adc(void) /* sub_691ADC */
{
    FN_ENTER(0x00691adc);
    /* 00691adc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691adf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00691ae3: mov byte ptr [esp + 4], 0x82 */ W8((u32)(r_esp+0x4u), 0x82u);
    /* 00691ae8: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00691aed: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00691af1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691af3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00691af7: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x691afcu); f_006a9e70();
    /* 00691afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691afe: je 0x691b15 */ if (fZ) goto L_00691b15;
L_00691b00:; BB(0x00691b00);
    /* 00691b00: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00691b05: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x691b0au); f_0068d5ac();
    /* 00691b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b0c: je 0x691b15 */ if (fZ) goto L_00691b15;
L_00691b0e:; BB(0x00691b0e);
    /* 00691b0e: mov ecx, eax */ r_ecx = r_eax;
    /* 00691b10: call 0x691b1c */ r_esp -= 4; W32(r_esp, 0x691b15u); f_00691b1c();
L_00691b15:; BB(0x00691b15);
    /* 00691b15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691b18: ret  */ FN_RET(0x00691adc); r_esp += 4; return;
}

void f_00691b1c(void) /* sub_691B1C */
{
    FN_ENTER(0x00691b1c);
    /* 00691b1c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00691b22: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691b27: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00691b2d: ret  */ FN_RET(0x00691b1c); r_esp += 4; return;
}

void f_00691b30(void) /* sub_691B30 */
{
    FN_ENTER(0x00691b30);
    /* 00691b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691b31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691b33: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 00691b39: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691b3b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x691b3eu); call_ind(t); }
    /* 00691b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b40: je 0x691b5a */ if (fZ) goto L_00691b5a;
L_00691b42:; BB(0x00691b42);
    /* 00691b42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691b44: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 00691b4a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691b4c: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x691b52u); call_ind(t); }
    /* 00691b52: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 00691b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691b59: ret  */ FN_RET(0x00691b30); r_esp += 4; return;
L_00691b5a:; BB(0x00691b5a);
    /* 00691b5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00691b5c: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 00691b62: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00691b64: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x691b6au); call_ind(t); }
    /* 00691b6a: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 00691b70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691b71: ret  */ FN_RET(0x00691b30); r_esp += 4; return;
}

void f_00691b74(void) /* sub_691B74 */
{
    FN_ENTER(0x00691b74);
    /* 00691b74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691b75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691b76: mov esi, ecx */ r_esi = r_ecx;
    /* 00691b78: movzx ebp, byte ptr [esp + 0xc] */ r_ebp = (u32)R8((u32)(r_esp+0xcu));
    /* 00691b7d: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691b82u); f_00688b8c();
    /* 00691b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b84: je 0x691b91 */ if (fZ) goto L_00691b91;
L_00691b86:; BB(0x00691b86);
    /* 00691b86: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00691b8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691b8c: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691b8e: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
L_00691b91:; BB(0x00691b91);
    /* 00691b91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691b92: mov ecx, esi */ r_ecx = r_esi;
    /* 00691b94: call 0x691bb8 */ r_esp -= 4; W32(r_esp, 0x691b99u); f_00691bb8();
    /* 00691b99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691b9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00691b9d: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00691ba4: add esi, 0x380 */ {  u32 a = r_esi; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691bab: mov ecx, esi */ r_ecx = r_esi;
    /* 00691bad: call 0x6a6ef4 */ r_esp -= 4; W32(r_esp, 0x691bb2u); f_006a6ef4();
    /* 00691bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691bb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691bb4: ret 4 */ FN_RET(0x00691b74); r_esp += 8; return;
}

void f_00691bb8(void) /* sub_691BB8 */
{
    FN_ENTER(0x00691bb8);
    /* 00691bb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691bb9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691bbc: mov esi, ecx */ r_esi = r_ecx;
    /* 00691bbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691bbf: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x691bc4u); f_006ac458();
    /* 00691bc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691bc5: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00691bc8: movsx eax, word ptr [esp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00691bcd: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00691bd3: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x691bd8u); f_0069320e();
    /* 00691bd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691bdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691bdc: ret 4 */ FN_RET(0x00691bb8); r_esp += 8; return;
}

void f_00691be0(void) /* sub_691BE0 */
{
    FN_ENTER(0x00691be0);
    /* 00691be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691be1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691be2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691be4: movzx ebx, byte ptr [esp + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+0xcu));
    /* 00691be9: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691beeu); f_00688b8c();
    /* 00691bee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691bf0: je 0x691bfc */ if (fZ) goto L_00691bfc;
L_00691bf2:; BB(0x00691bf2);
    /* 00691bf2: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00691bf5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691bf7: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691bf9: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
L_00691bfc:; BB(0x00691bfc);
    /* 00691bfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691bfd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691bff: call 0x691c28 */ r_esp -= 4; W32(r_esp, 0x691c04u); f_00691c28();
    /* 00691c04: movsx edx, byte ptr [ebp + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x961u));
    /* 00691c0b: add ebp, 0x380 */ {  u32 a = r_ebp; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00691c11: mov eax, 1 */ r_eax = 0x1u;
    /* 00691c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691c17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691c19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691c1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691c1b: call 0x6a6ef4 */ r_esp -= 4; W32(r_esp, 0x691c20u); f_006a6ef4();
    /* 00691c20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691c21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691c22: ret 4 */ FN_RET(0x00691be0); r_esp += 8; return;
}

void f_00691c28(void) /* sub_691C28 */
{
    FN_ENTER(0x00691c28);
    /* 00691c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c29: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691c2c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691c2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c2f: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x691c34u); f_006ac458();
    /* 00691c34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691c35: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00691c3b: movsx ecx, word ptr [eax + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00691c3f: movsx eax, word ptr [esp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00691c44: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691c47: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x691c4cu); f_0069320e();
    /* 00691c4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691c4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691c50: ret 4 */ FN_RET(0x00691c28); r_esp += 8; return;
}

void f_00691c54(void) /* sub_691C54 */
{
    FN_ENTER(0x00691c54);
    /* 00691c54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691c55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c56: mov esi, ecx */ r_esi = r_ecx;
    /* 00691c58: movzx ebp, byte ptr [esp + 0xc] */ r_ebp = (u32)R8((u32)(r_esp+0xcu));
    /* 00691c5d: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691c62u); f_00688b8c();
    /* 00691c62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691c64: je 0x691c71 */ if (fZ) goto L_00691c71;
L_00691c66:; BB(0x00691c66);
    /* 00691c66: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00691c6a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691c6c: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691c6e: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
L_00691c71:; BB(0x00691c71);
    /* 00691c71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c72: mov ecx, esi */ r_ecx = r_esi;
    /* 00691c74: call 0x691c98 */ r_esp -= 4; W32(r_esp, 0x691c79u); f_00691c98();
    /* 00691c79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691c7b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00691c7d: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00691c84: add esi, 0x380 */ {  u32 a = r_esi; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691c8b: mov ecx, esi */ r_ecx = r_esi;
    /* 00691c8d: call 0x6a6ef4 */ r_esp -= 4; W32(r_esp, 0x691c92u); f_006a6ef4();
    /* 00691c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691c94: ret 4 */ FN_RET(0x00691c54); r_esp += 8; return;
}

void f_00691c98(void) /* sub_691C98 */
{
    FN_ENTER(0x00691c98);
    /* 00691c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c99: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691c9c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691c9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691c9f: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x691ca4u); f_006ac458();
    /* 00691ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691ca5: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00691cab: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00691caf: movsx eax, word ptr [esp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00691cb4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691cb7: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x691cbcu); f_0069320e();
    /* 00691cbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691cc0: ret 4 */ FN_RET(0x00691c98); r_esp += 8; return;
}

void f_00691cc4(void) /* sub_691CC4 */
{
    FN_ENTER(0x00691cc4);
    /* 00691cc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691cc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691cc6: mov esi, ecx */ r_esi = r_ecx;
    /* 00691cc8: movzx ebp, byte ptr [esp + 0xc] */ r_ebp = (u32)R8((u32)(r_esp+0xcu));
    /* 00691ccd: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691cd2u); f_00688b8c();
    /* 00691cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691cd4: je 0x691ce1 */ if (fZ) goto L_00691ce1;
L_00691cd6:; BB(0x00691cd6);
    /* 00691cd6: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00691cda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691cdc: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691cde: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
L_00691ce1:; BB(0x00691ce1);
    /* 00691ce1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691ce2: mov ecx, esi */ r_ecx = r_esi;
    /* 00691ce4: call 0x691d08 */ r_esp -= 4; W32(r_esp, 0x691ce9u); f_00691d08();
    /* 00691ce9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691ceb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00691ced: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00691cf4: add esi, 0x380 */ {  u32 a = r_esi; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691cfb: mov ecx, esi */ r_ecx = r_esi;
    /* 00691cfd: call 0x6a6ef4 */ r_esp -= 4; W32(r_esp, 0x691d02u); f_006a6ef4();
    /* 00691d02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691d04: ret 4 */ FN_RET(0x00691cc4); r_esp += 8; return;
}

void f_00691d08(void) /* sub_691D08 */
{
    FN_ENTER(0x00691d08);
    /* 00691d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d09: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691d0c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691d0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d0f: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x691d14u); f_006ac458();
    /* 00691d14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691d15: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00691d1b: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00691d1f: movsx eax, word ptr [esp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00691d24: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691d27: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x691d2cu); f_0069320e();
    /* 00691d2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691d2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d30: ret 4 */ FN_RET(0x00691d08); r_esp += 8; return;
}

void f_00691d34(void) /* sub_691D34 */
{
    FN_ENTER(0x00691d34);
    /* 00691d34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691d35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d36: mov esi, ecx */ r_esi = r_ecx;
    /* 00691d38: movzx ebp, byte ptr [esp + 0xc] */ r_ebp = (u32)R8((u32)(r_esp+0xcu));
    /* 00691d3d: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691d42u); f_00688b8c();
    /* 00691d42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691d44: je 0x691d51 */ if (fZ) goto L_00691d51;
L_00691d46:; BB(0x00691d46);
    /* 00691d46: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00691d4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691d4c: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691d4e: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
L_00691d51:; BB(0x00691d51);
    /* 00691d51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d52: mov ecx, esi */ r_ecx = r_esi;
    /* 00691d54: call 0x691d78 */ r_esp -= 4; W32(r_esp, 0x691d59u); f_00691d78();
    /* 00691d59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691d5b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00691d5d: movsx eax, byte ptr [esi + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00691d64: add esi, 0x380 */ {  u32 a = r_esi; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691d6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00691d6d: call 0x6a6ef4 */ r_esp -= 4; W32(r_esp, 0x691d72u); f_006a6ef4();
    /* 00691d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691d74: ret 4 */ FN_RET(0x00691d34); r_esp += 8; return;
}

void f_00691d78(void) /* sub_691D78 */
{
    FN_ENTER(0x00691d78);
    /* 00691d78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d79: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691d7c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00691d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691d7f: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x691d84u); f_006ac458();
    /* 00691d84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691d85: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00691d8b: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 00691d8f: movsx eax, word ptr [esp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00691d94: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691d97: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x691d9cu); f_0069320e();
    /* 00691d9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691da0: ret 4 */ FN_RET(0x00691d78); r_esp += 8; return;
}

void f_00691da4(void) /* sub_691DA4 */
{
    FN_ENTER(0x00691da4);
    /* 00691da4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691da5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691da6: mov edi, ecx */ r_edi = r_ecx;
    /* 00691da8: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 00691dad: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691db2u); f_00688b8c();
    /* 00691db2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691db4: je 0x691dc0 */ if (fZ) goto L_00691dc0;
L_00691db6:; BB(0x00691db6);
    /* 00691db6: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00691db9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691dbb: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691dbd: movzx esi, al */ r_esi = (u32)(u8)r_eax;
L_00691dc0:; BB(0x00691dc0);
    /* 00691dc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691dc1: mov ecx, edi */ r_ecx = r_edi;
    /* 00691dc3: call 0x770ba4 */ r_esp -= 4; W32(r_esp, 0x691dc8u); f_00770ba4();
    /* 00691dc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691dc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691dca: ret 4 */ FN_RET(0x00691da4); r_esp += 8; return;
}

void f_00691dd0(void) /* sub_691DD0 */
{
    FN_ENTER(0x00691dd0);
    /* 00691dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691dd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691dd2: mov edi, ecx */ r_edi = r_ecx;
    /* 00691dd4: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 00691dd9: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x691ddeu); f_00688b8c();
    /* 00691dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691de0: je 0x691dec */ if (fZ) goto L_00691dec;
L_00691de2:; BB(0x00691de2);
    /* 00691de2: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00691de5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691de7: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691de9: movzx esi, al */ r_esi = (u32)(u8)r_eax;
L_00691dec:; BB(0x00691dec);
    /* 00691dec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691ded: mov ecx, edi */ r_ecx = r_edi;
    /* 00691def: call 0x770c18 */ r_esp -= 4; W32(r_esp, 0x691df4u); f_00770c18();
    /* 00691df4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691df5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691df6: ret 4 */ FN_RET(0x00691dd0); r_esp += 8; return;
}

void f_00691dfc(void) /* sub_691DFC */
{
    FN_ENTER(0x00691dfc);
    /* 00691dfc: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00691e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691e01: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x691e06u); f_006c1bd4();
    /* 00691e06: mov eax, dword ptr [eax + 0x218] */ r_eax = R32((u32)(r_eax+0x218u));
    /* 00691e0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691e0d: ret  */ FN_RET(0x00691dfc); r_esp += 4; return;
}

void f_00691e10(void) /* sub_691E10 */
{
    FN_ENTER(0x00691e10);
    /* 00691e10: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00691e17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e1a: jne 0x691e2b */ if (!fZ) goto L_00691e2b;
L_00691e1c:; BB(0x00691e1c);
    /* 00691e1c: mov dword ptr [ecx + 0x634], 0 */ W32((u32)(r_ecx+0x634u), 0x0u);
    /* 00691e26: call 0x77d578 */ r_esp -= 4; W32(r_esp, 0x691e2bu); f_0077d578();
L_00691e2b:; BB(0x00691e2b);
    /* 00691e2b: ret  */ FN_RET(0x00691e10); r_esp += 4; return;
}

void f_00691e2c(void) /* sub_691E2C */
{
    FN_ENTER(0x00691e2c);
    /* 00691e2c: mov edx, ecx */ r_edx = r_ecx;
    /* 00691e2e: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 00691e35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e38: jne 0x691e52 */ if (!fZ) goto L_00691e52;
L_00691e3a:; BB(0x00691e3a);
    /* 00691e3a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00691e3e: lea ecx, [edx + 0x628] */ r_ecx = (u32)(r_edx+0x628u);
    /* 00691e44: movsx edx, word ptr [edx + 0x3dc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x3dcu));
    /* 00691e4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691e4d: call 0x6a7be8 */ r_esp -= 4; W32(r_esp, 0x691e52u); f_006a7be8();
L_00691e52:; BB(0x00691e52);
    /* 00691e52: ret  */ FN_RET(0x00691e2c); r_esp += 4; return;
}

void f_00691e54(void) /* sub_691E54 */
{
    FN_ENTER(0x00691e54);
    /* 00691e54: movsx eax, byte ptr [ecx + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x961u));
    /* 00691e5b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e5e: je 0x691e78 */ if (fZ) goto L_00691e78;
L_00691e60:; BB(0x00691e60);
    /* 00691e60: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e63: je 0x691e78 */ if (fZ) goto L_00691e78;
L_00691e65:; BB(0x00691e65);
    /* 00691e65: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e68: je 0x691e78 */ if (fZ) goto L_00691e78;
L_00691e6a:; BB(0x00691e6a);
    /* 00691e6a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00691e6d: jne 0x691e75 */ if (!fZ) goto L_00691e75;
L_00691e6f:; BB(0x00691e6f);
    /* 00691e6f: mov eax, 2 */ r_eax = 0x2u;
    /* 00691e74: ret  */ FN_RET(0x00691e54); r_esp += 4; return;
L_00691e75:; BB(0x00691e75);
    /* 00691e75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691e77: ret  */ FN_RET(0x00691e54); r_esp += 4; return;
L_00691e78:; BB(0x00691e78);
    /* 00691e78: mov eax, 1 */ r_eax = 0x1u;
    /* 00691e7d: ret  */ FN_RET(0x00691e54); r_esp += 4; return;
}

void f_00691e80(void) /* sub_691E80 */
{
    FN_ENTER(0x00691e80);
    /* 00691e80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691e81: mov edi, ecx */ r_edi = r_ecx;
    /* 00691e83: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x691e88u); f_0068be84();
    /* 00691e88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691e8a: je 0x691ea8 */ if (fZ) goto L_00691ea8;
L_00691e8c:; BB(0x00691e8c);
    /* 00691e8c: mov edx, dword ptr [edi + 0x3c4] */ r_edx = R32((u32)(r_edi+0x3c4u));
    /* 00691e92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691e94: je 0x691eae */ if (fZ) goto L_00691eae;
L_00691e96:; BB(0x00691e96);
    /* 00691e96: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 00691e9b: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00691e9e: mov eax, dword ptr [edi + 0x3c4] */ r_eax = R32((u32)(r_edi+0x3c4u));
    /* 00691ea4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691ea5: ret 4 */ FN_RET(0x00691e80); r_esp += 8; return;
L_00691ea8:; BB(0x00691ea8);
    /* 00691ea8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691eaa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691eab: ret 4 */ FN_RET(0x00691e80); r_esp += 8; return;
L_00691eae:; BB(0x00691eae);
    /* 00691eae: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 00691eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691eb4: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00691eb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691eb9: call 0x69748c */ r_esp -= 4; W32(r_esp, 0x691ebeu); f_0069748c();
    /* 00691ebe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691ec1: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 00691ec7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691ec8: ret 4 */ FN_RET(0x00691e80); r_esp += 8; return;
}

void f_00691ecc(void) /* sub_691ECC */
{
    FN_ENTER(0x00691ecc);
    /* 00691ecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691ecd: mov ebp, esp */ r_ebp = r_esp;
    /* 00691ecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00691ed1: push 0x8eb2e8 */ { u32 v = 0x8eb2e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00691ed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00691edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691edd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00691ee4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691ee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00691eea: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00691eed: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00691ef0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00691ef3: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00691ef6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00691efd: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00691eff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x691f04u); f_005caba4();
    /* 00691f04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00691f07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691f0a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00691f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691f0f: je 0x691f4a */ if (fZ) goto L_00691f4a;
L_00691f11:; BB(0x00691f11);
    /* 00691f11: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00691f18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00691f1f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00691f22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00691f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691f26: movzx ebx, word ptr [eax + 0x1c] */ r_ebx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00691f2a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x691f2fu); f_008193cc();
    /* 00691f2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00691f32: mov dword ptr [eax], 0xb39444 */ W32((u32)(r_eax), 0xb39444u);
    /* 00691f38: mov word ptr [eax + 0x1c], bx */ W16((u32)(r_eax+0x1cu), (u16)r_ebx);
    /* 00691f3c: mov dword ptr [eax + 0x20], 0x691f5c */ W32((u32)(r_eax+0x20u), 0x691f5cu);
    /* 00691f43: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00691f4a:; BB(0x00691f4a);
    /* 00691f4a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00691f4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00691f50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00691f57: mov esp, ebp */ r_esp = r_ebp;
    /* 00691f59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691f5a: ret  */ FN_RET(0x00691ecc); r_esp += 4; return;
}

void f_00691f5c(void) /* sub_691F5C */
{
    FN_ENTER(0x00691f5c);
    /* 00691f5c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00691f60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691f62: je 0x691f6f */ if (fZ) goto L_00691f6f;
L_00691f64:; BB(0x00691f64);
    /* 00691f64: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00691f67: or eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00691f6c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00691f6f:; BB(0x00691f6f);
    /* 00691f6f: ret  */ FN_RET(0x00691f5c); r_esp += 4; return;
}

void f_00691f70(void) /* sub_691F70 */
{
    FN_ENTER(0x00691f70);
    /* 00691f70: mov edx, dword ptr [0xa94254] */ r_edx = R32((u32)(0xa94254u));
    /* 00691f76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691f78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691f7a: je 0x691f81 */ if (fZ) goto L_00691f81;
L_00691f7c:; BB(0x00691f7c);
    /* 00691f7c: mov eax, 1 */ r_eax = 0x1u;
L_00691f81:; BB(0x00691f81);
    /* 00691f81: mov edx, dword ptr [0xa94258] */ r_edx = R32((u32)(0xa94258u));
    /* 00691f87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691f89: je 0x691f8e */ if (fZ) goto L_00691f8e;
L_00691f8b:; BB(0x00691f8b);
    /* 00691f8b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691f8e:; BB(0x00691f8e);
    /* 00691f8e: mov edx, dword ptr [0xa9425c] */ r_edx = R32((u32)(0xa9425cu));
    /* 00691f94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691f96: je 0x691f9b */ if (fZ) goto L_00691f9b;
L_00691f98:; BB(0x00691f98);
    /* 00691f98: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691f9b:; BB(0x00691f9b);
    /* 00691f9b: mov edx, dword ptr [0xa94260] */ r_edx = R32((u32)(0xa94260u));
    /* 00691fa1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fa3: je 0x691fa8 */ if (fZ) goto L_00691fa8;
L_00691fa5:; BB(0x00691fa5);
    /* 00691fa5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fa8:; BB(0x00691fa8);
    /* 00691fa8: mov edx, dword ptr [0xa94264] */ r_edx = R32((u32)(0xa94264u));
    /* 00691fae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fb0: je 0x691fb5 */ if (fZ) goto L_00691fb5;
L_00691fb2:; BB(0x00691fb2);
    /* 00691fb2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fb5:; BB(0x00691fb5);
    /* 00691fb5: mov edx, dword ptr [0xa94268] */ r_edx = R32((u32)(0xa94268u));
    /* 00691fbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fbd: je 0x691fc2 */ if (fZ) goto L_00691fc2;
L_00691fbf:; BB(0x00691fbf);
    /* 00691fbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fc2:; BB(0x00691fc2);
    /* 00691fc2: mov edx, dword ptr [0xa9426c] */ r_edx = R32((u32)(0xa9426cu));
    /* 00691fc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fca: je 0x691fcf */ if (fZ) goto L_00691fcf;
L_00691fcc:; BB(0x00691fcc);
    /* 00691fcc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fcf:; BB(0x00691fcf);
    /* 00691fcf: mov edx, dword ptr [0xa94270] */ r_edx = R32((u32)(0xa94270u));
    /* 00691fd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fd7: je 0x691fdc */ if (fZ) goto L_00691fdc;
L_00691fd9:; BB(0x00691fd9);
    /* 00691fd9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fdc:; BB(0x00691fdc);
    /* 00691fdc: mov edx, dword ptr [0xa94274] */ r_edx = R32((u32)(0xa94274u));
    /* 00691fe2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691fe4: je 0x691fe9 */ if (fZ) goto L_00691fe9;
L_00691fe6:; BB(0x00691fe6);
    /* 00691fe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691fe9:; BB(0x00691fe9);
    /* 00691fe9: mov edx, dword ptr [0xa94278] */ r_edx = R32((u32)(0xa94278u));
    /* 00691fef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691ff1: je 0x691ff6 */ if (fZ) goto L_00691ff6;
L_00691ff3:; BB(0x00691ff3);
    /* 00691ff3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00691ff6:; BB(0x00691ff6);
    /* 00691ff6: mov edx, dword ptr [0xa9427c] */ r_edx = R32((u32)(0xa9427cu));
    /* 00691ffc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691ffe: je 0x692003 */ if (fZ) goto L_00692003;
L_00692000:; BB(0x00692000);
    /* 00692000: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00692003:; BB(0x00692003);
    /* 00692003: mov edx, dword ptr [0xa94280] */ r_edx = R32((u32)(0xa94280u));
    /* 00692009: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069200b: je 0x692010 */ if (fZ) goto L_00692010;
L_0069200d:; BB(0x0069200d);
    /* 0069200d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00692010:; BB(0x00692010);
    /* 00692010: ret  */ FN_RET(0x00691f70); r_esp += 4; return;
}

