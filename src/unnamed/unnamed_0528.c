#include "protos.h"

void f_0052814c(void) /* sub_52814C */
{
    FN_ENTER(0x0052814c);
    /* 0052814c: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00528152: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 00528158: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052815e: je 0x52816a */ if (fZ) goto L_0052816a;
L_00528160:; BB(0x00528160);
    /* 00528160: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00528163: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528166: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00528169: ret  */ FN_RET(0x0052814c); r_esp += 4; return;
L_0052816a:; BB(0x0052816a);
    /* 0052816a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0052816d: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528170: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00528173: ret  */ FN_RET(0x0052814c); r_esp += 4; return;
}

void f_00528174(void) /* sub_528174 */
{
    FN_ENTER(0x00528174);
    /* 00528174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00528175: mov edi, ecx */ r_edi = r_ecx;
    /* 00528177: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052817b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052817e: je 0x528256 */ if (fZ) goto L_00528256;
L_00528184:; BB(0x00528184);
    /* 00528184: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528187: je 0x5281da */ if (fZ) goto L_005281da;
L_00528189:; BB(0x00528189);
    /* 00528189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052818b: jne 0x5281ac */ if (!fZ) goto L_005281ac;
L_0052818d:; BB(0x0052818d);
    /* 0052818d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052818f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528194u); f_007aa094();
    /* 00528194: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00528196: mov ecx, edi */ r_ecx = r_edi;
    /* 00528198: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x52819eu); call_ind(t); }
    /* 0052819e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005281a0: mov ecx, edi */ r_ecx = r_edi;
    /* 005281a2: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5281a8u); call_ind(t); }
    /* 005281a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005281a9: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_005281ac:; BB(0x005281ac);
    /* 005281ac: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005281af: jne 0x528246 */ if (!fZ) goto L_00528246;
L_005281b5:; BB(0x005281b5);
    /* 005281b5: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005281b8: mov edx, dword ptr [edi + 0x3cc] */ r_edx = R32((u32)(r_edi+0x3ccu));
    /* 005281be: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005281c3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005281c6: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005281c9: mov dword ptr [edi + 0x3cc], edx */ W32((u32)(r_edi+0x3ccu), r_edx);
    /* 005281cf: mov ecx, edi */ r_ecx = r_edi;
    /* 005281d1: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5281d6u); f_0051f81c();
    /* 005281d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005281d7: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_005281da:; BB(0x005281da);
    /* 005281da: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005281e0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005281e2: je 0x528246 */ if (fZ) goto L_00528246;
L_005281e4:; BB(0x005281e4);
    /* 005281e4: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005281ea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005281ed: je 0x52824a */ if (fZ) goto L_0052824a;
L_005281ef:; BB(0x005281ef);
    /* 005281ef: movsx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 005281f6: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 005281fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005281ff: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00528201: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00528204: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00528206: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00528209: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052820b: jge 0x52821a */ if ((fS==fO)) goto L_0052821a;
L_0052820d:; BB(0x0052820d);
    /* 0052820d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052820f: mov ecx, edi */ r_ecx = r_edi;
    /* 00528211: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528216u); f_0051f62c();
    /* 00528216: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528217: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_0052821a:; BB(0x0052821a);
    /* 0052821a: mov ecx, edi */ r_ecx = r_edi;
    /* 0052821c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x528221u); f_007751b0();
    /* 00528221: fcomp dword ptr [0x922084] */ fx_compare(ST(0), R_F32((u32)(0x922084u))); FPOP();
    /* 00528227: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00528229: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052822a: jae 0x528239 */ if (!fC) goto L_00528239;
L_0052822c:; BB(0x0052822c);
    /* 0052822c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052822e: mov ecx, edi */ r_ecx = r_edi;
    /* 00528230: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528235u); f_0051f62c();
    /* 00528235: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528236: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_00528239:; BB(0x00528239);
    /* 00528239: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052823f: mov ecx, edi */ r_ecx = r_edi;
    /* 00528241: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528246u); f_0051f62c();
L_00528246:; BB(0x00528246);
    /* 00528246: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528247: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_0052824a:; BB(0x0052824a);
    /* 0052824a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052824b: mov ecx, edi */ r_ecx = r_edi;
    /* 0052824d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528252u); f_0051f62c();
    /* 00528252: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528253: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
L_00528256:; BB(0x00528256);
    /* 00528256: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00528258: mov eax, 4 */ r_eax = 0x4u;
    /* 0052825d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00528264: mov ecx, edi */ r_ecx = r_edi;
    /* 00528266: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x52826cu); call_ind(t); }
    /* 0052826c: mov ecx, edi */ r_ecx = r_edi;
    /* 0052826e: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x528273u); f_0052814c();
    /* 00528273: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00528278: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0052827e: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528281: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 00528287: mov ecx, edi */ r_ecx = r_edi;
    /* 00528289: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x52828eu); f_00779df0();
    /* 0052828e: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00528294: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528299: je 0x5282a2 */ if (fZ) goto L_005282a2;
L_0052829b:; BB(0x0052829b);
    /* 0052829b: mov eax, 0x2c9 */ r_eax = 0x2c9u;
    /* 005282a0: jmp 0x5282ae */ goto L_005282ae;
L_005282a2:; BB(0x005282a2);
    /* 005282a2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005282a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005282a9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5282aeu); f_007879b8();
L_005282ae:; BB(0x005282ae);
    /* 005282ae: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005282b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005282b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005282b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005282b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005282b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005282b7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5282bcu); f_00814298();
    /* 005282bc: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005282c1: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5282c6u); f_00814680();
    /* 005282c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005282c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005282ca: ret 4 */ FN_RET(0x00528174); r_esp += 8; return;
}

void f_005282d0(void) /* sub_5282D0 */
{
    FN_ENTER(0x005282d0);
    /* 005282d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005282d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005282d2: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005282d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005282d7: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005282db: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005282de: je 0x52857d */ if (fZ) goto L_0052857d;
L_005282e4:; BB(0x005282e4);
    /* 005282e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005282e7: je 0x52855e */ if (fZ) goto L_0052855e;
L_005282ed:; BB(0x005282ed);
    /* 005282ed: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005282f0: je 0x528462 */ if (fZ) goto L_00528462;
L_005282f6:; BB(0x005282f6);
    /* 005282f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005282f8: jne 0x52855e */ if (!fZ) goto L_0052855e;
L_005282fe:; BB(0x005282fe);
    /* 005282fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528300: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528305u); f_007aa094();
    /* 00528305: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0052830b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052830d: jle 0x528321 */ if ((fZ||fS!=fO)) goto L_00528321;
L_0052830f:; BB(0x0052830f);
    /* 0052830f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00528312: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 00528318: jne 0x528321 */ if (!fZ) goto L_00528321;
L_0052831a:; BB(0x0052831a);
    /* 0052831a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052831c: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x528321u); f_0051f81c();
L_00528321:; BB(0x00528321);
    /* 00528321: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x528326u); f_00520e6c();
    /* 00528326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528328: je 0x52833b */ if (fZ) goto L_0052833b;
L_0052832a:; BB(0x0052832a);
    /* 0052832a: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00528330: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528333: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
    /* 00528339: jmp 0x52834a */ goto L_0052834a;
L_0052833b:; BB(0x0052833b);
    /* 0052833b: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00528341: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528344: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
L_0052834a:; BB(0x0052834a);
    /* 0052834a: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052834f: jge 0x528369 */ if ((fS==fO)) goto L_00528369;
L_00528351:; BB(0x00528351);
    /* 00528351: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00528354: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528359: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0052835c: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00528362: mov edx, 0x11 */ r_edx = 0x11u;
    /* 00528367: jmp 0x5283ac */ goto L_005283ac;
L_00528369:; BB(0x00528369);
    /* 00528369: cmp eax, 0x168 */ {  u32 a = r_eax; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052836e: jge 0x528388 */ if ((fS==fO)) goto L_00528388;
L_00528370:; BB(0x00528370);
    /* 00528370: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00528373: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528378: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0052837b: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00528381: mov edx, 0x22 */ r_edx = 0x22u;
    /* 00528386: jmp 0x5283ac */ goto L_005283ac;
L_00528388:; BB(0x00528388);
    /* 00528388: cmp eax, 0x1b3 */ {  u32 a = r_eax; u32 b = 0x1b3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052838d: jge 0x5283a7 */ if ((fS==fO)) goto L_005283a7;
L_0052838f:; BB(0x0052838f);
    /* 0052838f: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00528392: add eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528397: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0052839a: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 005283a0: mov edx, 0x44 */ r_edx = 0x44u;
    /* 005283a5: jmp 0x5283ac */ goto L_005283ac;
L_005283a7:; BB(0x005283a7);
    /* 005283a7: mov edx, 0x44 */ r_edx = 0x44u;
L_005283ac:; BB(0x005283ac);
    /* 005283ac: cmp eax, 0x1b3 */ {  u32 a = r_eax; u32 b = 0x1b3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005283b1: jge 0x52843a */ if ((fS==fO)) goto L_0052843a;
L_005283b7:; BB(0x005283b7);
    /* 005283b7: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 005283bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005283bf: jne 0x528422 */ if (!fZ) goto L_00528422;
L_005283c1:; BB(0x005283c1);
    /* 005283c1: add edx, dword ptr [ebp + 0x3e0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3e0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005283c7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005283cd: jg 0x5283d7 */ if ((!fZ&&fS==fO)) goto L_005283d7;
L_005283cf:; BB(0x005283cf);
    /* 005283cf: mov dword ptr [ebp + 0x3e0], edx */ W32((u32)(r_ebp+0x3e0u), r_edx);
    /* 005283d5: jmp 0x528444 */ goto L_00528444;
L_005283d7:; BB(0x005283d7);
    /* 005283d7: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005283dd: mov dword ptr [ebp + 0x41c], 1 */ W32((u32)(r_ebp+0x41cu), 0x1u);
    /* 005283e7: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005283e9: add edx, 0x1fe */ {  u32 a = r_edx; u32 b = 0x1feu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005283ef: mov dword ptr [ebp + 0x3e0], edx */ W32((u32)(r_ebp+0x3e0u), r_edx);
    /* 005283f5: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005283fa: je 0x528403 */ if (fZ) goto L_00528403;
L_005283fc:; BB(0x005283fc);
    /* 005283fc: mov eax, 0x2c6 */ r_eax = 0x2c6u;
    /* 00528401: jmp 0x52840f */ goto L_0052840f;
L_00528403:; BB(0x00528403);
    /* 00528403: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00528408: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052840a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52840fu); f_007879b8();
L_0052840f:; BB(0x0052840f);
    /* 0052840f: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00528412: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528414: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528415: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00528417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528418: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52841du); f_00814298();
    /* 0052841d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528420: jmp 0x528444 */ goto L_00528444;
L_00528422:; BB(0x00528422);
    /* 00528422: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 00528428: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052842a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052842c: jl 0x528566 */ if ((fS!=fO)) goto L_00528566;
L_00528432:; BB(0x00528432);
    /* 00528432: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 00528438: jmp 0x528444 */ goto L_00528444;
L_0052843a:; BB(0x0052843a);
    /* 0052843a: mov dword ptr [ebp + 0x3e0], 0xff */ W32((u32)(r_ebp+0x3e0u), 0xffu);
L_00528444:; BB(0x00528444);
    /* 00528444: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00528447: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528449: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x52844fu); call_ind(t); }
    /* 0052844f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00528452: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528454: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x52845au); call_ind(t); }
    /* 0052845a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052845d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052845e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052845f: ret 4 */ FN_RET(0x005282d0); r_esp += 8; return;
L_00528462:; BB(0x00528462);
    /* 00528462: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00528468: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052846d: jle 0x52855e */ if ((fZ||fS!=fO)) goto L_0052855e;
L_00528473:; BB(0x00528473);
    /* 00528473: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00528475: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00528478: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052847d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00528480: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528482: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528487u); f_0051f62c();
    /* 00528487: fld dword ptr [0x922080] */ FPUSH(R_F32((u32)(0x922080u)));
    /* 0052848d: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00528490: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00528493: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 00528496: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00528499: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052849d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005284a1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005284a5: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005284a9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005284ac: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005284ae: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 005284b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005284b4: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5284b9u); f_0050b7a4();
    /* 005284b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005284bc: mov ebx, dword ptr [0x921f4c] */ r_ebx = R32((u32)(0x921f4cu));
    /* 005284c2: mov eax, dword ptr [0x921f5c] */ r_eax = R32((u32)(0x921f5cu));
    /* 005284c7: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005284cf: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005284d3: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005284db: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005284de: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005284e6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005284ea: mov eax, dword ptr [0xa72fc4] */ r_eax = R32((u32)(0xa72fc4u));
    /* 005284ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005284f1: mov dword ptr [esp + 0x14], 0x41f00000 */ W32((u32)(r_esp+0x14u), 0x41f00000u);
    /* 005284f9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005284fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005284ff: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00528503: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00528509: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052850e: je 0x528521 */ if (fZ) goto L_00528521;
L_00528510:; BB(0x00528510);
    /* 00528510: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00528514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528517: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528519: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052851a: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x52851fu); f_0051fc9c();
    /* 0052851f: jmp 0x528530 */ goto L_00528530;
L_00528521:; BB(0x00528521);
    /* 00528521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528523: push 0x9bc358 */ { u32 v = 0x9bc358u; r_esp -= 4; W32(r_esp, v); }
    /* 00528528: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052852a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052852b: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x528530u); f_0051fc9c();
L_00528530:; BB(0x00528530);
    /* 00528530: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00528536: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052853b: je 0x528544 */ if (fZ) goto L_00528544;
L_0052853d:; BB(0x0052853d);
    /* 0052853d: mov eax, 0x2c7 */ r_eax = 0x2c7u;
    /* 00528542: jmp 0x528550 */ goto L_00528550;
L_00528544:; BB(0x00528544);
    /* 00528544: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00528549: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052854b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x528550u); f_007879b8();
L_00528550:; BB(0x00528550);
    /* 00528550: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528554: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00528555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528556: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52855bu); f_00814298();
    /* 0052855b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052855e:; BB(0x0052855e);
    /* 0052855e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528561: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00528562: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528563: ret 4 */ FN_RET(0x005282d0); r_esp += 8; return;
L_00528566:; BB(0x00528566);
    /* 00528566: mov dword ptr [ebp + 0x41c], 0 */ W32((u32)(r_ebp+0x41cu), 0x0u);
    /* 00528570: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00528572: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 00528578: jmp 0x528444 */ goto L_00528444;
L_0052857d:; BB(0x0052857d);
    /* 0052857d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00528580: mov eax, 1 */ r_eax = 0x1u;
    /* 00528585: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052858c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052858e: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x528594u); call_ind(t); }
    /* 00528594: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00528596: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x52859bu); f_0052814c();
    /* 0052859b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052859d: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005285a3: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005285a6: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 005285ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005285ae: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5285b3u); f_0051f664();
    /* 005285b3: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005285b9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005285bb: jne 0x52855e */ if (!fZ) goto L_0052855e;
L_005285bd:; BB(0x005285bd);
    /* 005285bd: mov dword ptr [ebp + 0x41c], 1 */ W32((u32)(r_ebp+0x41cu), 0x1u);
    /* 005285c7: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005285ca: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 005285d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005285d2: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
    /* 005285d8: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 005285de: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 005285e4: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 005285ea: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005285ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005285ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005285ef: ret 4 */ FN_RET(0x005282d0); r_esp += 8; return;
}

void f_005285f4(void) /* sub_5285F4 */
{
    FN_ENTER(0x005285f4);
    /* 005285f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005285f5: mov edi, ecx */ r_edi = r_ecx;
    /* 005285f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005285fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005285fe: je 0x528674 */ if (fZ) goto L_00528674;
L_00528600:; BB(0x00528600);
    /* 00528600: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00528603: je 0x528670 */ if (fZ) goto L_00528670;
L_00528605:; BB(0x00528605);
    /* 00528605: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528608: je 0x528638 */ if (fZ) goto L_00528638;
L_0052860a:; BB(0x0052860a);
    /* 0052860a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052860c: jne 0x528620 */ if (!fZ) goto L_00528620;
L_0052860e:; BB(0x0052860e);
    /* 0052860e: mov ecx, edi */ r_ecx = r_edi;
    /* 00528610: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528615u); f_007aa094();
    /* 00528615: add dword ptr [edi + 0x418], 1 */ { u32 ad = (u32)(r_edi+0x418u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052861c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052861d: ret 4 */ FN_RET(0x005285f4); r_esp += 8; return;
L_00528620:; BB(0x00528620);
    /* 00528620: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00528623: jne 0x528670 */ if (!fZ) goto L_00528670;
L_00528625:; BB(0x00528625);
    /* 00528625: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0052862b: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052862e: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 00528634: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528635: ret 4 */ FN_RET(0x005285f4); r_esp += 8; return;
L_00528638:; BB(0x00528638);
    /* 00528638: fld dword ptr [0x922078] */ FPUSH(R_F32((u32)(0x922078u)));
    /* 0052863e: fadd dword ptr [edi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc4u));
    /* 00528644: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00528645: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00528648: mov ecx, edi */ r_ecx = r_edi;
    /* 0052864a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52864fu); f_007aaa30();
    /* 0052864f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528651: je 0x52865c */ if (fZ) goto L_0052865c;
L_00528653:; BB(0x00528653);
    /* 00528653: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528655: mov ecx, edi */ r_ecx = r_edi;
    /* 00528657: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x52865cu); f_0051f62c();
L_0052865c:; BB(0x0052865c);
    /* 0052865c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052865e: mov ecx, edi */ r_ecx = r_edi;
    /* 00528660: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x528666u); call_ind(t); }
    /* 00528666: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00528668: mov ecx, edi */ r_ecx = r_edi;
    /* 0052866a: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x528670u); call_ind(t); }
L_00528670:; BB(0x00528670);
    /* 00528670: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00528671: ret 4 */ FN_RET(0x005285f4); r_esp += 8; return;
L_00528674:; BB(0x00528674);
    /* 00528674: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00528676: mov eax, 6 */ r_eax = 0x6u;
    /* 0052867b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00528682: mov ecx, edi */ r_ecx = r_edi;
    /* 00528684: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x52868au); call_ind(t); }
    /* 0052868a: mov ecx, edi */ r_ecx = r_edi;
    /* 0052868c: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x528691u); f_0052814c();
    /* 00528691: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528693: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00528699: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052869c: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 005286a2: mov ecx, edi */ r_ecx = r_edi;
    /* 005286a4: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5286a9u); f_0051f664();
    /* 005286a9: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 005286af: mov dword ptr [edi + 0x418], 0 */ W32((u32)(r_edi+0x418u), 0x0u);
    /* 005286b9: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005286be: je 0x5286c7 */ if (fZ) goto L_005286c7;
L_005286c0:; BB(0x005286c0);
    /* 005286c0: mov eax, 0x2cc */ r_eax = 0x2ccu;
    /* 005286c5: jmp 0x5286d3 */ goto L_005286d3;
L_005286c7:; BB(0x005286c7);
    /* 005286c7: push 0x102 */ { u32 v = 0x102u; r_esp -= 4; W32(r_esp, v); }
    /* 005286cc: mov ecx, edi */ r_ecx = r_edi;
    /* 005286ce: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5286d3u); f_007879b8();
L_005286d3:; BB(0x005286d3);
    /* 005286d3: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005286d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005286d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005286d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005286da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005286db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005286dc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5286e1u); f_00814298();
    /* 005286e1: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005286e6: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5286ebu); f_00814680();
    /* 005286eb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005286ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005286ef: ret 4 */ FN_RET(0x005285f4); r_esp += 8; return;
}

void f_005286f4(void) /* sub_5286F4 */
{
    FN_ENTER(0x005286f4);
    /* 005286f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005286f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005286f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005286f9: push 0x8d4ac0 */ { u32 v = 0x8d4ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005286fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00528704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528705: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052870c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052870f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00528712: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00528715: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00528718: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0052871b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0052871e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528721: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528724: je 0x5289d8 */ if (fZ) goto L_005289d8;
L_0052872a:; BB(0x0052872a);
    /* 0052872a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052872d: je 0x528790 */ if (fZ) goto L_00528790;
L_0052872f:; BB(0x0052872f);
    /* 0052872f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528731: jne 0x52876f */ if (!fZ) goto L_0052876f;
L_00528733:; BB(0x00528733);
    /* 00528733: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528738u); f_007aa094();
    /* 00528738: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052873b: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 00528741: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528744: je 0x52888b */ if (fZ) goto L_0052888b;
L_0052874a:; BB(0x0052874a);
    /* 0052874a: cmp ebx, 0x19 */ {  u32 a = r_ebx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052874d: je 0x5287bd */ if (fZ) goto L_005287bd;
L_0052874f:; BB(0x0052874f);
    /* 0052874f: mov ecx, eax */ r_ecx = r_eax;
    /* 00528751: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528753: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00528756: mov dword ptr [ecx + 0x418], ebx */ W32((u32)(r_ecx+0x418u), r_ebx);
    /* 0052875c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x528762u); call_ind(t); }
    /* 00528762: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528765: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528767: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x52876du); call_ind(t); }
    /* 0052876d: jmp 0x5287a4 */ goto L_005287a4;
L_0052876f:; BB(0x0052876f);
    /* 0052876f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00528772: jne 0x5287a4 */ if (!fZ) goto L_005287a4;
L_00528774:; BB(0x00528774);
    /* 00528774: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00528777: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 0052877d: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528782: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00528785: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528788: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 0052878e: jmp 0x5287a4 */ goto L_005287a4;
L_00528790:; BB(0x00528790);
    /* 00528790: mov eax, ecx */ r_eax = r_ecx;
    /* 00528792: mov edx, dword ptr [eax + 0x418] */ r_edx = R32((u32)(r_eax+0x418u));
    /* 00528798: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052879b: jl 0x5287a4 */ if ((fS!=fO)) goto L_005287a4;
L_0052879d:; BB(0x0052879d);
    /* 0052879d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052879f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5287a4u); f_0051f62c();
L_005287a4:; BB(0x005287a4);
    /* 005287a4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005287a7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005287aa: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005287ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005287b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005287b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005287b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005287ba: ret 4 */ FN_RET(0x005286f4); r_esp += 8; return;
L_005287bd:; BB(0x005287bd);
    /* 005287bd: mov edx, dword ptr [eax + 0x41c] */ r_edx = R32((u32)(r_eax+0x41cu));
    /* 005287c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005287c5: je 0x52874f */ if (fZ) goto L_0052874f;
L_005287c7:; BB(0x005287c7);
    /* 005287c7: push dword ptr [eax + 0x398] */ { u32 v = R32((u32)(r_eax+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005287cd: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5287d2u); f_00520f3c();
    /* 005287d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005287d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005287d5: jne 0x5287e5 */ if (!fZ) goto L_005287e5;
L_005287d7:; BB(0x005287d7);
    /* 005287d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005287da: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 005287e0: jmp 0x52874f */ goto L_0052874f;
L_005287e5:; BB(0x005287e5);
    /* 005287e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005287e8: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 005287ee: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005287f4: je 0x5287fd */ if (fZ) goto L_005287fd;
L_005287f6:; BB(0x005287f6);
    /* 005287f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005287fb: jmp 0x5287ff */ goto L_005287ff;
L_005287fd:; BB(0x005287fd);
    /* 005287fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005287ff:; BB(0x005287ff);
    /* 005287ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528801: je 0x528854 */ if (fZ) goto L_00528854;
L_00528803:; BB(0x00528803);
    /* 00528803: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528806: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 0052880c: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00528810: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528811: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x528816u); f_0051f8d8();
    /* 00528816: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00528817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528819: jne 0x528829 */ if (!fZ) goto L_00528829;
L_0052881b:; BB(0x0052881b);
    /* 0052881b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052881e: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 00528824: jmp 0x52874f */ goto L_0052874f;
L_00528829:; BB(0x00528829);
    /* 00528829: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052882c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052882e: mov eax, dword ptr [edx + 0x398] */ r_eax = R32((u32)(r_edx+0x398u));
    /* 00528834: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00528838: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0052883c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052883d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052883e: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x528843u); f_00693348();
    /* 00528843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528846: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528849: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 0052884f: jmp 0x52874f */ goto L_0052874f;
L_00528854:; BB(0x00528854);
    /* 00528854: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528857: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0052885d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0052885f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00528864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528866: push dword ptr [ecx + 0xa4] */ { u32 v = R32((u32)(r_ecx+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052886c: push dword ptr [0x922074] */ { u32 v = R32((u32)(0x922074u)); r_esp -= 4; W32(r_esp, v); }
    /* 00528872: push dword ptr [0x922070] */ { u32 v = R32((u32)(0x922070u)); r_esp -= 4; W32(r_esp, v); }
    /* 00528878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00528879: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x52887cu); call_ind(t); }
    /* 0052887c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052887e: mov eax, ebx */ r_eax = r_ebx;
    /* 00528880: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 00528886: jmp 0x52874f */ goto L_0052874f;
L_0052888b:; BB(0x0052888b);
    /* 0052888b: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 00528891: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528893: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00528896: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00528898: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052889a: jle 0x5288d2 */ if ((fZ||fS!=fO)) goto L_005288d2;
L_0052889c:; BB(0x0052889c);
    /* 0052889c: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 005288a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005288a4: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x5288a9u); f_0052135c();
    /* 005288a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005288aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288ac: je 0x5288cb */ if (fZ) goto L_005288cb;
L_005288ae:; BB(0x005288ae);
    /* 005288ae: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005288b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288b8: jne 0x5288c1 */ if (!fZ) goto L_005288c1;
L_005288ba:; BB(0x005288ba);
    /* 005288ba: mov eax, 1 */ r_eax = 0x1u;
    /* 005288bf: jmp 0x5288c3 */ goto L_005288c3;
L_005288c1:; BB(0x005288c1);
    /* 005288c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005288c3:; BB(0x005288c3);
    /* 005288c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288c5: je 0x5289d0 */ if (fZ) goto L_005289d0;
L_005288cb:; BB(0x005288cb);
    /* 005288cb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005288ce: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005288d0: jl 0x52889c */ if ((fS!=fO)) goto L_0052889c;
L_005288d2:; BB(0x005288d2);
    /* 005288d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005288d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005288d6: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x5288dbu); f_0052135c();
    /* 005288db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005288dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288de: je 0x528901 */ if (fZ) goto L_00528901;
L_005288e0:; BB(0x005288e0);
    /* 005288e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005288e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005288e6: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 005288e9: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005288ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005288ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005288ee: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5288f3u); f_007a9180();
    /* 005288f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005288f6: fcomp dword ptr [0xa72f9c] */ fx_compare(ST(0), R_F32((u32)(0xa72f9cu))); FPOP();
    /* 005288fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005288fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005288ff: jb 0x528906 */ if (fC) goto L_00528906;
L_00528901:; BB(0x00528901);
    /* 00528901: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528903: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00528906:; BB(0x00528906);
    /* 00528906: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052890b: je 0x5289c2 */ if (fZ) goto L_005289c2;
L_00528911:; BB(0x00528911);
    /* 00528911: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00528918: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052891a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52891fu); f_005caba4();
    /* 0052891f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00528920: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00528923: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528925: je 0x52894b */ if (fZ) goto L_0052894b;
L_00528927:; BB(0x00528927);
    /* 00528927: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0052892e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528935: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528938: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052893b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052893c: mov ecx, eax */ r_ecx = r_eax;
    /* 0052893e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052893f: call 0x52a44c */ r_esp -= 4; W32(r_esp, 0x528944u); f_0052a44c();
    /* 00528944: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0052894b:; BB(0x0052894b);
    /* 0052894b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00528952: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528955: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528958: mov ecx, dword ptr [edx + 0x3cc] */ r_ecx = R32((u32)(r_edx+0x3ccu));
    /* 0052895e: mov dword ptr [edx + 0x398], eax */ W32((u32)(r_edx+0x398u), r_eax);
    /* 00528964: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052896a: mov dword ptr [edx + 0x41c], 1 */ W32((u32)(r_edx+0x41cu), 0x1u);
    /* 00528974: je 0x52897d */ if (fZ) goto L_0052897d;
L_00528976:; BB(0x00528976);
    /* 00528976: mov eax, 1 */ r_eax = 0x1u;
    /* 0052897b: jmp 0x52897f */ goto L_0052897f;
L_0052897d:; BB(0x0052897d);
    /* 0052897d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0052897f:; BB(0x0052897f);
    /* 0052897f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528981: je 0x52898a */ if (fZ) goto L_0052898a;
L_00528983:; BB(0x00528983);
    /* 00528983: mov eax, 0x2c5 */ r_eax = 0x2c5u;
    /* 00528988: jmp 0x528996 */ goto L_00528996;
L_0052898a:; BB(0x0052898a);
    /* 0052898a: mov ecx, edx */ r_ecx = r_edx;
    /* 0052898c: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00528991: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x528996u); f_007879b8();
L_00528996:; BB(0x00528996);
    /* 00528996: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528999: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0052899c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052899e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052899f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005289a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005289a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005289a2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5289a7u); f_00814298();
    /* 005289a7: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005289ac: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5289b1u); f_00814680();
    /* 005289b1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005289b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005289b7: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 005289bd: jmp 0x52874f */ goto L_0052874f;
L_005289c2:; BB(0x005289c2);
    /* 005289c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005289c5: mov ebx, dword ptr [eax + 0x418] */ r_ebx = R32((u32)(r_eax+0x418u));
    /* 005289cb: jmp 0x52874f */ goto L_0052874f;
L_005289d0:; BB(0x005289d0);
    /* 005289d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005289d3: jmp 0x5288d2 */ goto L_005288d2;
L_005289d8:; BB(0x005289d8);
    /* 005289d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005289da: mov eax, 1 */ r_eax = 0x1u;
    /* 005289df: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005289e6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5289ecu); call_ind(t); }
    /* 005289ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005289ef: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005289f1: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x5289f7u); call_ind(t); }
    /* 005289f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005289fa: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x5289ffu); f_0052814c();
    /* 005289ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528a02: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00528a08: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528a0b: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00528a11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528a13: mov dword ptr [ecx + 0x418], edx */ W32((u32)(r_ecx+0x418u), r_edx);
    /* 00528a19: mov dword ptr [ecx + 0x41c], edx */ W32((u32)(r_ecx+0x41cu), r_edx);
    /* 00528a1f: jmp 0x5287a4 */ goto L_005287a4;
}

void f_00528a24(void) /* sub_528A24 */
{
    FN_ENTER(0x00528a24);
    /* 00528a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528a25: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528a28: mov esi, ecx */ r_esi = r_ecx;
    /* 00528a2a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00528a2e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a31: je 0x528bbf */ if (fZ) goto L_00528bbf;
L_00528a37:; BB(0x00528a37);
    /* 00528a37: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a3a: je 0x528bb8 */ if (fZ) goto L_00528bb8;
L_00528a40:; BB(0x00528a40);
    /* 00528a40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a43: je 0x528ba4 */ if (fZ) goto L_00528ba4;
L_00528a49:; BB(0x00528a49);
    /* 00528a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a4b: jne 0x528b89 */ if (!fZ) goto L_00528b89;
L_00528a51:; BB(0x00528a51);
    /* 00528a51: mov ecx, esi */ r_ecx = r_esi;
    /* 00528a53: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528a58u); f_007aa094();
    /* 00528a58: mov ecx, esi */ r_ecx = r_esi;
    /* 00528a5a: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x528a5fu); f_0052126c();
    /* 00528a5f: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 00528a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a67: jne 0x528b62 */ if (!fZ) goto L_00528b62;
L_00528a6d:; BB(0x00528a6d);
    /* 00528a6d: fld dword ptr [0x92206c] */ FPUSH(R_F32((u32)(0x92206cu)));
    /* 00528a73: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00528a79: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00528a7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00528a80: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00528a83: mov ecx, esi */ r_ecx = r_esi;
    /* 00528a85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x528a8au); f_007aaa30();
    /* 00528a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a8c: je 0x528acb */ if (fZ) goto L_00528acb;
L_00528a8e:; BB(0x00528a8e);
    /* 00528a8e: mov edx, dword ptr [esi + 0x420] */ r_edx = R32((u32)(r_esi+0x420u));
    /* 00528a94: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00528a97: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00528a9a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00528a9d: fcomp dword ptr [0x922058] */ fx_compare(ST(0), R_F32((u32)(0x922058u))); FPOP();
    /* 00528aa3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00528aa5: mov dword ptr [esi + 0x420], edx */ W32((u32)(r_esi+0x420u), r_edx);
    /* 00528aab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00528aac: jb 0x528b6e */ if (fC) goto L_00528b6e;
L_00528ab2:; BB(0x00528ab2);
    /* 00528ab2: mov dword ptr [esi + 0x41c], 1 */ W32((u32)(r_esi+0x41cu), 0x1u);
    /* 00528abc: mov dword ptr [esi + 0xc8], 0 */ W32((u32)(r_esi+0xc8u), 0x0u);
    /* 00528ac6: jmp 0x528b6e */ goto L_00528b6e;
L_00528acb:; BB(0x00528acb);
    /* 00528acb: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00528ad0: mov ecx, esi */ r_ecx = r_esi;
    /* 00528ad2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x528ad7u); f_007aaa30();
    /* 00528ad7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528ad9: je 0x528b6e */ if (fZ) goto L_00528b6e;
L_00528adf:; BB(0x00528adf);
    /* 00528adf: mov ecx, esi */ r_ecx = r_esi;
    /* 00528ae1: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x528ae6u); f_00521324();
    /* 00528ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528ae8: je 0x528b23 */ if (fZ) goto L_00528b23;
L_00528aea:; BB(0x00528aea);
    /* 00528aea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00528aef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528af0: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00528af6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528af8: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x528afbu); call_ind(t); }
    /* 00528afb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528afd: je 0x528b23 */ if (fZ) goto L_00528b23;
L_00528aff:; BB(0x00528aff);
    /* 00528aff: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528b05: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00528b0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00528b0d: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x528b10u); call_ind(t); }
    /* 00528b10: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00528b12: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528b18: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00528b1e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528b20: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x528b23u); call_ind(t); }
L_00528b23:; BB(0x00528b23);
    /* 00528b23: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00528b29: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b2e: je 0x528b37 */ if (fZ) goto L_00528b37;
L_00528b30:; BB(0x00528b30);
    /* 00528b30: mov ecx, 0x2ca */ r_ecx = 0x2cau;
    /* 00528b35: jmp 0x528b45 */ goto L_00528b45;
L_00528b37:; BB(0x00528b37);
    /* 00528b37: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b3c: mov ecx, esi */ r_ecx = r_esi;
    /* 00528b3e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x528b43u); f_007879b8();
    /* 00528b43: mov ecx, eax */ r_ecx = r_eax;
L_00528b45:; BB(0x00528b45);
    /* 00528b45: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00528b48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528b4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528b4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528b4e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x528b53u); f_00814298();
    /* 00528b53: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00528b58: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x528b5du); f_00814680();
    /* 00528b5d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528b60: jmp 0x528b6e */ goto L_00528b6e;
L_00528b62:; BB(0x00528b62);
    /* 00528b62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b65: jne 0x528b6e */ if (!fZ) goto L_00528b6e;
L_00528b67:; BB(0x00528b67);
    /* 00528b67: add dword ptr [esi + 0x418], 1 */ { u32 ad = (u32)(r_esi+0x418u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00528b6e:; BB(0x00528b6e);
    /* 00528b6e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00528b70: mov ecx, esi */ r_ecx = r_esi;
    /* 00528b72: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x528b78u); call_ind(t); }
    /* 00528b78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00528b7a: mov ecx, esi */ r_ecx = r_esi;
    /* 00528b7c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x528b82u); call_ind(t); }
    /* 00528b82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528b85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528b86: ret 4 */ FN_RET(0x00528a24); r_esp += 8; return;
L_00528b89:; BB(0x00528b89);
    /* 00528b89: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b8c: jne 0x528bb8 */ if (!fZ) goto L_00528bb8;
L_00528b8e:; BB(0x00528b8e);
    /* 00528b8e: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00528b94: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528b97: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 00528b9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528ba0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528ba1: ret 4 */ FN_RET(0x00528a24); r_esp += 8; return;
L_00528ba4:; BB(0x00528ba4);
    /* 00528ba4: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00528baa: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528bad: jl 0x528bb8 */ if ((fS!=fO)) goto L_00528bb8;
L_00528baf:; BB(0x00528baf);
    /* 00528baf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528bb1: mov ecx, esi */ r_ecx = r_esi;
    /* 00528bb3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528bb8u); f_0051f62c();
L_00528bb8:; BB(0x00528bb8);
    /* 00528bb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528bbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528bbc: ret 4 */ FN_RET(0x00528a24); r_esp += 8; return;
L_00528bbf:; BB(0x00528bbf);
    /* 00528bbf: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00528bc1: mov eax, 7 */ r_eax = 0x7u;
    /* 00528bc6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00528bcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00528bcf: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x528bd5u); call_ind(t); }
    /* 00528bd5: mov ecx, esi */ r_ecx = r_esi;
    /* 00528bd7: call 0x528c10 */ r_esp -= 4; W32(r_esp, 0x528bdcu); f_00528c10();
    /* 00528bdc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528bde: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00528be4: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528be7: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 00528bed: mov ecx, esi */ r_ecx = r_esi;
    /* 00528bef: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x528bf4u); f_0051f664();
    /* 00528bf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528bf6: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00528bfc: mov dword ptr [esi + 0x41c], eax */ W32((u32)(r_esi+0x41cu), r_eax);
    /* 00528c02: mov dword ptr [esi + 0x420], eax */ W32((u32)(r_esi+0x420u), r_eax);
    /* 00528c08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00528c0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528c0c: ret 4 */ FN_RET(0x00528a24); r_esp += 8; return;
}

void f_00528c10(void) /* sub_528C10 */
{
    FN_ENTER(0x00528c10);
    /* 00528c10: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00528c16: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 00528c1c: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c22: je 0x528c2e */ if (fZ) goto L_00528c2e;
L_00528c24:; BB(0x00528c24);
    /* 00528c24: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00528c27: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528c2a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00528c2d: ret  */ FN_RET(0x00528c10); r_esp += 4; return;
L_00528c2e:; BB(0x00528c2e);
    /* 00528c2e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00528c31: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528c34: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00528c37: ret  */ FN_RET(0x00528c10); r_esp += 4; return;
}

void f_00528c38(void) /* sub_528C38 */
{
    FN_ENTER(0x00528c38);
    /* 00528c38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528c39: mov ebp, esp */ r_ebp = r_esp;
    /* 00528c3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00528c3d: push 0x8d4ae8 */ { u32 v = 0x8d4ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00528c42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00528c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528c49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00528c50: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528c53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00528c56: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00528c59: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00528c5c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00528c5f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00528c62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528c65: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c68: je 0x528e99 */ if (fZ) goto L_00528e99;
L_00528c6e:; BB(0x00528c6e);
    /* 00528c6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00528c71: je 0x528e22 */ if (fZ) goto L_00528e22;
L_00528c77:; BB(0x00528c77);
    /* 00528c77: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c7a: je 0x528e19 */ if (fZ) goto L_00528e19;
L_00528c80:; BB(0x00528c80);
    /* 00528c80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c82: jne 0x528ded */ if (!fZ) goto L_00528ded;
L_00528c88:; BB(0x00528c88);
    /* 00528c88: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528c8du); f_007aa094();
    /* 00528c8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528c90: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 00528c96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c98: je 0x528e38 */ if (fZ) goto L_00528e38;
L_00528c9e:; BB(0x00528c9e);
    /* 00528c9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528ca0: je 0x528ccb */ if (fZ) goto L_00528ccb;
L_00528ca2:; BB(0x00528ca2);
    /* 00528ca2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528ca5: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00528cab: fcomp dword ptr [0x922050] */ fx_compare(ST(0), R_F32((u32)(0x922050u))); FPOP();
    /* 00528cb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00528cb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00528cb4: jae 0x528cc6 */ if (!fC) goto L_00528cc6;
L_00528cb6:; BB(0x00528cb6);
    /* 00528cb6: mov eax, edx */ r_eax = r_edx;
    /* 00528cb8: lea edx, [eax + 0x3f0] */ r_edx = (u32)(r_eax+0x3f0u);
    /* 00528cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528cbf: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x528cc4u); f_00508db8();
    /* 00528cc4: jmp 0x528ccb */ goto L_00528ccb;
L_00528cc6:; BB(0x00528cc6);
    /* 00528cc6: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x528ccbu); f_00508f48();
L_00528ccb:; BB(0x00528ccb);
    /* 00528ccb: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00528cd0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528cd3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x528cd8u); f_007aaa30();
    /* 00528cd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528cda: je 0x528dd5 */ if (fZ) goto L_00528dd5;
L_00528ce0:; BB(0x00528ce0);
    /* 00528ce0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528ce3: fld dword ptr [0x92204c] */ FPUSH(R_F32((u32)(0x92204cu)));
    /* 00528ce9: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00528cec: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 00528cf2: mov ecx, dword ptr [ebx + 0x3ec] */ r_ecx = R32((u32)(r_ebx+0x3ecu));
    /* 00528cf8: mov esi, dword ptr [ebx + 0x3cc] */ r_esi = R32((u32)(r_ebx+0x3ccu));
    /* 00528cfe: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00528d01: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00528d04: lea eax, [ebx + 0x3e4] */ r_eax = (u32)(r_ebx+0x3e4u);
    /* 00528d0a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00528d0d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00528d10: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528d16: je 0x528d1f */ if (fZ) goto L_00528d1f;
L_00528d18:; BB(0x00528d18);
    /* 00528d18: mov eax, 1 */ r_eax = 0x1u;
    /* 00528d1d: jmp 0x528d21 */ goto L_00528d21;
L_00528d1f:; BB(0x00528d1f);
    /* 00528d1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00528d21:; BB(0x00528d21);
    /* 00528d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528d23: jne 0x528d2e */ if (!fZ) goto L_00528d2e;
L_00528d25:; BB(0x00528d25);
    /* 00528d25: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x528d2au); f_00520e6c();
    /* 00528d2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528d2c: je 0x528d50 */ if (fZ) goto L_00528d50;
L_00528d2e:; BB(0x00528d2e);
    /* 00528d2e: mov eax, dword ptr [0xa72fc4] */ r_eax = R32((u32)(0xa72fc4u));
    /* 00528d33: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00528d36: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x528d3bu); f_00520e3c();
    /* 00528d3b: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00528d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528d3f: mov eax, ebx */ r_eax = r_ebx;
    /* 00528d41: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00528d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528d46: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x528d4bu); f_006e9848();
    /* 00528d4b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528d4e: jmp 0x528d94 */ goto L_00528d94;
L_00528d50:; BB(0x00528d50);
    /* 00528d50: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00528d57: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00528d5c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x528d61u); f_005caba4();
    /* 00528d61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00528d62: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00528d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528d67: je 0x528d8d */ if (fZ) goto L_00528d8d;
L_00528d69:; BB(0x00528d69);
    /* 00528d69: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00528d70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528d77: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00528d7a: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00528d7d: mov ecx, eax */ r_ecx = r_eax;
    /* 00528d7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528d80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00528d81: call 0x529e68 */ r_esp -= 4; W32(r_esp, 0x528d86u); f_00529e68();
    /* 00528d86: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00528d8d:; BB(0x00528d8d);
    /* 00528d8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00528d94:; BB(0x00528d94);
    /* 00528d94: mov eax, ebx */ r_eax = r_ebx;
    /* 00528d96: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 00528d9c: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528da2: je 0x528dab */ if (fZ) goto L_00528dab;
L_00528da4:; BB(0x00528da4);
    /* 00528da4: mov eax, 1 */ r_eax = 0x1u;
    /* 00528da9: jmp 0x528dad */ goto L_00528dad;
L_00528dab:; BB(0x00528dab);
    /* 00528dab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00528dad:; BB(0x00528dad);
    /* 00528dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528daf: je 0x528db8 */ if (fZ) goto L_00528db8;
L_00528db1:; BB(0x00528db1);
    /* 00528db1: mov eax, 0x2c4 */ r_eax = 0x2c4u;
    /* 00528db6: jmp 0x528dc4 */ goto L_00528dc4;
L_00528db8:; BB(0x00528db8);
    /* 00528db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00528dba: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00528dbf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x528dc4u); f_007879b8();
L_00528dc4:; BB(0x00528dc4);
    /* 00528dc4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528dc7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528dc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528dcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528dcd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x528dd2u); f_00814298();
    /* 00528dd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00528dd5:; BB(0x00528dd5);
    /* 00528dd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528dd8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528dda: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x528de0u); call_ind(t); }
    /* 00528de0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528de3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00528de5: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x528debu); call_ind(t); }
    /* 00528deb: jmp 0x528e22 */ goto L_00528e22;
L_00528ded:; BB(0x00528ded);
    /* 00528ded: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00528df0: jne 0x528e22 */ if (!fZ) goto L_00528e22;
L_00528df2:; BB(0x00528df2);
    /* 00528df2: mov eax, ecx */ r_eax = r_ecx;
    /* 00528df4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00528dfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528dfc: je 0x528e22 */ if (fZ) goto L_00528e22;
L_00528dfe:; BB(0x00528dfe);
    /* 00528dfe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00528e02: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528e07: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00528e0b: mov edx, ecx */ r_edx = r_ecx;
    /* 00528e0d: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 00528e17: jmp 0x528e22 */ goto L_00528e22;
L_00528e19:; BB(0x00528e19);
    /* 00528e19: call 0x528ee0 */ r_esp -= 4; W32(r_esp, 0x528e1eu); f_00528ee0();
    /* 00528e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528e20: je 0x528e72 */ if (fZ) goto L_00528e72;
L_00528e22:; BB(0x00528e22);
    /* 00528e22: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528e25: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00528e28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528e2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00528e32: mov esp, ebp */ r_esp = r_ebp;
    /* 00528e34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528e35: ret 4 */ FN_RET(0x00528c38); r_esp += 8; return;
L_00528e38:; BB(0x00528e38);
    /* 00528e38: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 00528e3d: lea edx, [eax + 0x3f0] */ r_edx = (u32)(r_eax+0x3f0u);
    /* 00528e43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528e44: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x528e49u); f_00509590();
    /* 00528e49: mov ecx, eax */ r_ecx = r_eax;
    /* 00528e4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528e4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528e51: mov dword ptr [edx + 0x430], ecx */ W32((u32)(r_edx+0x430u), r_ecx);
    /* 00528e57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528e59: je 0x528c9e */ if (fZ) goto L_00528c9e;
L_00528e5f:; BB(0x00528e5f);
    /* 00528e5f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x528e64u); f_00508f48();
    /* 00528e64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528e67: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 00528e6d: jmp 0x528c9e */ goto L_00528c9e;
L_00528e72:; BB(0x00528e72);
    /* 00528e72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528e75: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00528e7b: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00528e7e: je 0x528e87 */ if (fZ) goto L_00528e87;
L_00528e80:; BB(0x00528e80);
    /* 00528e80: mov eax, 1 */ r_eax = 0x1u;
    /* 00528e85: jmp 0x528e89 */ goto L_00528e89;
L_00528e87:; BB(0x00528e87);
    /* 00528e87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00528e89:; BB(0x00528e89);
    /* 00528e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528e8b: je 0x528e22 */ if (fZ) goto L_00528e22;
L_00528e8d:; BB(0x00528e8d);
    /* 00528e8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528e90: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528e92: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528e97u); f_0051f62c();
    /* 00528e97: jmp 0x528e22 */ goto L_00528e22;
L_00528e99:; BB(0x00528e99);
    /* 00528e99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00528e9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528e9d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00528ea4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x528eaau); call_ind(t); }
    /* 00528eaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528ead: call 0x528c10 */ r_esp -= 4; W32(r_esp, 0x528eb2u); f_00528c10();
    /* 00528eb2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528eb5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00528eb7: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00528ebd: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00528ec0: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00528ec6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x528ecbu); f_0051f664();
    /* 00528ecb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00528ece: mov dword ptr [eax + 0x430], 0 */ W32((u32)(r_eax+0x430u), 0x0u);
    /* 00528ed8: jmp 0x528e22 */ goto L_00528e22;
}

void f_00528ee0(void) /* sub_528EE0 */
{
    FN_ENTER(0x00528ee0);
    /* 00528ee0: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00528ee6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00528ee8: je 0x528ef7 */ if (fZ) goto L_00528ef7;
L_00528eea:; BB(0x00528eea);
    /* 00528eea: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00528eec: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x528ef1u); f_0051f62c();
    /* 00528ef1: mov eax, 1 */ r_eax = 0x1u;
    /* 00528ef6: ret  */ FN_RET(0x00528ee0); r_esp += 4; return;
L_00528ef7:; BB(0x00528ef7);
    /* 00528ef7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00528ef9: ret  */ FN_RET(0x00528ee0); r_esp += 4; return;
}

void f_00528efc(void) /* sub_528EFC */
{
    FN_ENTER(0x00528efc);
    /* 00528efc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00528efd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528efe: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528f01: mov edi, ecx */ r_edi = r_ecx;
    /* 00528f03: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00528f07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f0a: je 0x5290f6 */ if (fZ) goto L_005290f6;
L_00528f10:; BB(0x00528f10);
    /* 00528f10: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f13: je 0x52903e */ if (fZ) goto L_0052903e;
L_00528f19:; BB(0x00528f19);
    /* 00528f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f1b: jne 0x5290cd */ if (!fZ) goto L_005290cd;
L_00528f21:; BB(0x00528f21);
    /* 00528f21: mov ecx, edi */ r_ecx = r_edi;
    /* 00528f23: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x528f28u); f_007aa094();
    /* 00528f28: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 00528f2d: mov edx, dword ptr [edi + 0x3d8] */ r_edx = R32((u32)(r_edi+0x3d8u));
    /* 00528f33: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528f36: jl 0x528f9b */ if ((fS!=fO)) goto L_00528f9b;
L_00528f38:; BB(0x00528f38);
    /* 00528f38: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00528f3e: fcomp dword ptr [0x922048] */ fx_compare(ST(0), R_F32((u32)(0x922048u))); FPOP();
    /* 00528f44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00528f46: mov dword ptr [edi + 0x3d8], 0 */ W32((u32)(r_edi+0x3d8u), 0x0u);
    /* 00528f50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00528f51: jbe 0x528fb3 */ if ((fC||fZ)) goto L_00528fb3;
L_00528f53:; BB(0x00528f53);
    /* 00528f53: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00528f55: mov ecx, edi */ r_ecx = r_edi;
    /* 00528f57: call dword ptr [edx + 0x194] */ { u32 t = R32((u32)(r_edx+0x194u)); r_esp -= 4; W32(r_esp, 0x528f5du); call_ind(t); }
    /* 00528f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f5f: je 0x528f7a */ if (fZ) goto L_00528f7a;
L_00528f61:; BB(0x00528f61);
    /* 00528f61: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00528f67: fsub dword ptr [0x922048] */ ST(0) = ST(0) - R_F32((u32)(0x922048u));
    /* 00528f6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00528f6e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00528f71: mov ecx, edi */ r_ecx = r_edi;
    /* 00528f73: call 0x52105c */ r_esp -= 4; W32(r_esp, 0x528f78u); f_0052105c();
    /* 00528f78: mov esi, eax */ r_esi = r_eax;
L_00528f7a:; BB(0x00528f7a);
    /* 00528f7a: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 00528f7d: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f83: je 0x5290d5 */ if (fZ) goto L_005290d5;
L_00528f89:; BB(0x00528f89);
    /* 00528f89: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f8f: je 0x528fb3 */ if (fZ) goto L_00528fb3;
L_00528f91:; BB(0x00528f91);
    /* 00528f91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528f92: mov ecx, edi */ r_ecx = r_edi;
    /* 00528f94: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x528f99u); f_00520fcc();
    /* 00528f99: jmp 0x528fb3 */ goto L_00528fb3;
L_00528f9b:; BB(0x00528f9b);
    /* 00528f9b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00528f9e: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 00528fa4: mov ecx, edi */ r_ecx = r_edi;
    /* 00528fa6: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x528fabu); f_00521238();
    /* 00528fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528fad: je 0x5290cd */ if (fZ) goto L_005290cd;
L_00528fb3:; BB(0x00528fb3);
    /* 00528fb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00528fb5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x528fbau); f_005213d8();
    /* 00528fba: mov ecx, edi */ r_ecx = r_edi;
    /* 00528fbc: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x528fc1u); f_00521410();
    /* 00528fc1: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00528fc7: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 00528fcd: add dword ptr [edi + 0x41c], 1 */ { u32 ad = (u32)(r_edi+0x41cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00528fd4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00528fd6: fmul qword ptr [0x921f90] */ ST(0) = ST(0) * R_F64((u32)(0x921f90u));
    /* 00528fdc: fdiv qword ptr [0x921f88] */ ST(0) = ST(0) / R_F64((u32)(0x921f88u));
    /* 00528fe2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00528fe5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00528fe9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00528fee: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00528ff2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00528ff6: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00528ffa: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00528ffd: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00529003: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00529007: mov dword ptr [edi + 0x428], edx */ W32((u32)(r_edi+0x428u), r_edx);
    /* 0052900d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529011: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529014: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x529019u); f_007a8c74();
    /* 00529019: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052901c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0052901e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00529021: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00529024: mov ecx, edi */ r_ecx = r_edi;
    /* 00529026: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x52902cu); call_ind(t); }
    /* 0052902c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052902e: mov ecx, edi */ r_ecx = r_edi;
    /* 00529030: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x529036u); call_ind(t); }
    /* 00529036: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529039: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052903a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052903b: ret 4 */ FN_RET(0x00528efc); r_esp += 8; return;
L_0052903e:; BB(0x0052903e);
    /* 0052903e: mov ecx, edi */ r_ecx = r_edi;
    /* 00529040: call 0x528ee0 */ r_esp -= 4; W32(r_esp, 0x529045u); f_00528ee0();
    /* 00529045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529047: jne 0x5290cd */ if (!fZ) goto L_005290cd;
L_0052904d:; BB(0x0052904d);
    /* 0052904d: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00529053: fcom dword ptr [0x922044] */ fx_compare(ST(0), R_F32((u32)(0x922044u))); 
    /* 00529059: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052905b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052905c: jbe 0x529071 */ if ((fC||fZ)) goto L_00529071;
L_0052905e:; BB(0x0052905e);
    /* 0052905e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00529060: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00529062: mov ecx, edi */ r_ecx = r_edi;
    /* 00529064: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x529069u); f_0051f62c();
    /* 00529069: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052906c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052906d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052906e: ret 4 */ FN_RET(0x00528efc); r_esp += 8; return;
L_00529071:; BB(0x00529071);
    /* 00529071: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00529077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529079: je 0x52905e */ if (fZ) goto L_0052905e;
L_0052907b:; BB(0x0052907b);
    /* 0052907b: fcomp dword ptr [0x922040] */ fx_compare(ST(0), R_F32((u32)(0x922040u))); FPOP();
    /* 00529081: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00529083: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00529084: jb 0x5290a8 */ if (fC) goto L_005290a8;
L_00529086:; BB(0x00529086);
    /* 00529086: fild dword ptr [edi + 0x41c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x41cu)));
    /* 0052908c: fcomp dword ptr [0x92203c] */ fx_compare(ST(0), R_F32((u32)(0x92203cu))); FPOP();
    /* 00529092: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00529094: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00529095: jbe 0x5290cd */ if ((fC||fZ)) goto L_005290cd;
L_00529097:; BB(0x00529097);
    /* 00529097: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00529099: mov ecx, edi */ r_ecx = r_edi;
    /* 0052909b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5290a0u); f_0051f62c();
    /* 005290a0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005290a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005290a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005290a5: ret 4 */ FN_RET(0x00528efc); r_esp += 8; return;
L_005290a8:; BB(0x005290a8);
    /* 005290a8: push dword ptr [edi + 0x428] */ { u32 v = R32((u32)(r_edi+0x428u)); r_esp -= 4; W32(r_esp, v); }
    /* 005290ae: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005290b1: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5290b6u); f_007a9018();
    /* 005290b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005290b9: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 005290bf: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005290c2: jge 0x5290cd */ if ((fS==fO)) goto L_005290cd;
L_005290c4:; BB(0x005290c4);
    /* 005290c4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005290c6: mov ecx, edi */ r_ecx = r_edi;
    /* 005290c8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5290cdu); f_0051f62c();
L_005290cd:; BB(0x005290cd);
    /* 005290cd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005290d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005290d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005290d2: ret 4 */ FN_RET(0x00528efc); r_esp += 8; return;
L_005290d5:; BB(0x005290d5);
    /* 005290d5: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005290db: fsub dword ptr [0x922048] */ ST(0) = ST(0) - R_F32((u32)(0x922048u));
    /* 005290e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005290e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005290e5: mov ecx, edi */ r_ecx = r_edi;
    /* 005290e7: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x5290ecu); f_00521160();
    /* 005290ec: mov esi, eax */ r_esi = r_eax;
    /* 005290ee: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 005290f1: jmp 0x528f89 */ goto L_00528f89;
L_005290f6:; BB(0x005290f6);
    /* 005290f6: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005290fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529100: je 0x529174 */ if (fZ) goto L_00529174;
L_00529102:; BB(0x00529102);
    /* 00529102: mov eax, 2 */ r_eax = 0x2u;
    /* 00529107: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0052910e:; BB(0x0052910e);
    /* 0052910e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00529110: mov ecx, edi */ r_ecx = r_edi;
    /* 00529112: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x529118u); call_ind(t); }
    /* 00529118: mov ecx, edi */ r_ecx = r_edi;
    /* 0052911a: call 0x528c10 */ r_esp -= 4; W32(r_esp, 0x52911fu); f_00528c10();
    /* 0052911f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00529121: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00529127: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052912a: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 00529130: mov ecx, edi */ r_ecx = r_edi;
    /* 00529132: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x529137u); f_0051f664();
    /* 00529137: mov edx, dword ptr [edi + 0x3cc] */ r_edx = R32((u32)(r_edi+0x3ccu));
    /* 0052913d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052913f: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 00529145: mov dword ptr [edi + 0x428], eax */ W32((u32)(r_edi+0x428u), r_eax);
    /* 0052914b: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529151: je 0x5290cd */ if (fZ) goto L_005290cd;
L_00529157:; BB(0x00529157);
    /* 00529157: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052915a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052915c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052915d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052915e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052915f: push 0x2cb */ { u32 v = 0x2cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00529164: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x529169u); f_00814298();
    /* 00529169: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052916c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052916f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529170: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529171: ret 4 */ FN_RET(0x00528efc); r_esp += 8; return;
L_00529174:; BB(0x00529174);
    /* 00529174: mov eax, 3 */ r_eax = 0x3u;
    /* 00529179: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00529180: jmp 0x52910e */ goto L_0052910e;
}

