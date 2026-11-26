#include "protos.h"

void f_006d1144(void) /* sub_6D1144 */
{
    FN_ENTER(0x006d1144);
    /* 006d1144: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1149u); f_006dc358();
    /* 006d1149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d114b: jne 0x6d1152 */ if (!fZ) goto L_006d1152;
L_006d114d:; BB(0x006d114d);
    /* 006d114d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1152u); f_006dc358();
L_006d1152:; BB(0x006d1152);
    /* 006d1152: ret  */ FN_RET(0x006d1144); r_esp += 4; return;
}

void f_006d1154(void) /* sub_6D1154 */
{
    FN_ENTER(0x006d1154);
    /* 006d1154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1155: mov edi, ecx */ r_edi = r_ecx;
    /* 006d1157: mov ecx, dword ptr [edi + 0xe744] */ r_ecx = R32((u32)(r_edi+0xe744u));
    /* 006d115d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d115f: je 0x6d1170 */ if (fZ) goto L_006d1170;
L_006d1161:; BB(0x006d1161);
    /* 006d1161: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d1166u); f_007127b0();
    /* 006d1166: mov dword ptr [edi + 0xe744], 0 */ W32((u32)(r_edi+0xe744u), 0x0u);
L_006d1170:; BB(0x006d1170);
    /* 006d1170: mov ecx, dword ptr [edi + 0xe74c] */ r_ecx = R32((u32)(r_edi+0xe74cu));
    /* 006d1176: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1178: je 0x6d1189 */ if (fZ) goto L_006d1189;
L_006d117a:; BB(0x006d117a);
    /* 006d117a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d117fu); f_007127b0();
    /* 006d117f: mov dword ptr [edi + 0xe74c], 0 */ W32((u32)(r_edi+0xe74cu), 0x0u);
L_006d1189:; BB(0x006d1189);
    /* 006d1189: mov ecx, dword ptr [edi + 0xe748] */ r_ecx = R32((u32)(r_edi+0xe748u));
    /* 006d118f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1191: je 0x6d11a2 */ if (fZ) goto L_006d11a2;
L_006d1193:; BB(0x006d1193);
    /* 006d1193: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d1198u); f_007127b0();
    /* 006d1198: mov dword ptr [edi + 0xe748], 0 */ W32((u32)(r_edi+0xe748u), 0x0u);
L_006d11a2:; BB(0x006d11a2);
    /* 006d11a2: mov ecx, dword ptr [edi + 0xe740] */ r_ecx = R32((u32)(r_edi+0xe740u));
    /* 006d11a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d11aa: je 0x6d11bb */ if (fZ) goto L_006d11bb;
L_006d11ac:; BB(0x006d11ac);
    /* 006d11ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d11b1u); f_007127b0();
    /* 006d11b1: mov dword ptr [edi + 0xe740], 0 */ W32((u32)(r_edi+0xe740u), 0x0u);
L_006d11bb:; BB(0x006d11bb);
    /* 006d11bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d11bc: ret  */ FN_RET(0x006d1154); r_esp += 4; return;
}

void f_006d11c0(void) /* sub_6D11C0 */
{
    FN_ENTER(0x006d11c0);
    /* 006d11c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d11c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d11c2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d11c5: mov edi, ecx */ r_edi = r_ecx;
    /* 006d11c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d11c9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006d11cc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006d11d0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006d11d4: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 006d11d8: mov ecx, dword ptr [edi + 0xe740] */ r_ecx = R32((u32)(r_edi+0xe740u));
    /* 006d11de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d11e0: je 0x6d1286 */ if (fZ) goto L_006d1286;
L_006d11e6:; BB(0x006d11e6);
    /* 006d11e6: mov eax, dword ptr [edi + 0xe754] */ r_eax = R32((u32)(r_edi+0xe754u));
    /* 006d11ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d11ee: je 0x6d1286 */ if (fZ) goto L_006d1286;
L_006d11f4:; BB(0x006d11f4);
    /* 006d11f4: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d11f9u); f_00737d90();
    /* 006d11f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d11fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d11fd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1200: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1202: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1204: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1206: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006d1209: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d120b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d120d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d120f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d1211: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d1213: push dword ptr [ebx + edi + 0x3c8] */ { u32 v = R32((u32)(r_ebx+r_edi+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d121a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d121fu); f_006dc358();
    /* 006d121f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1222: jne 0x6d1286 */ if (!fZ) goto L_006d1286;
L_006d1224:; BB(0x006d1224);
    /* 006d1224: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d1227: mov eax, dword ptr [ebx + edi + 0x3c4] */ r_eax = R32((u32)(r_ebx+r_edi+0x3c4u));
    /* 006d122e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1232: push 0x96bf94 */ { u32 v = 0x96bf94u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1237: push 0x96b754 */ { u32 v = 0x96b754u; r_esp -= 4; W32(r_esp, v); }
    /* 006d123c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d123d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6d1242u); f_00858bf5();
    /* 006d1242: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006d1246: push dword ptr [edi + 0xe754] */ { u32 v = R32((u32)(r_edi+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d124c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d124d: push dword ptr [ebx + edi + 0x3c8] */ { u32 v = R32((u32)(r_ebx+r_edi+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1254: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1259u); f_006dc358();
    /* 006d1259: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d125c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d125e: jne 0x6d126d */ if (!fZ) goto L_006d126d;
L_006d1260:; BB(0x006d1260);
    /* 006d1260: mov dword ptr [edi + 0x20], 0xc */ W32((u32)(r_edi+0x20u), 0xcu);
    /* 006d1267: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d126a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d126b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d126c: ret  */ FN_RET(0x006d11c0); r_esp += 4; return;
L_006d126d:; BB(0x006d126d);
    /* 006d126d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d126f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1271: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d1273: mov ecx, edi */ r_ecx = r_edi;
    /* 006d1275: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1278u); call_ind(t); }
    /* 006d1278: mov ecx, edi */ r_ecx = r_edi;
    /* 006d127a: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d127fu); f_006d1154();
    /* 006d127f: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
L_006d1286:; BB(0x006d1286);
    /* 006d1286: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1289: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d128a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d128b: ret  */ FN_RET(0x006d11c0); r_esp += 4; return;
}

void f_006d128c(void) /* sub_6D128C */
{
    FN_ENTER(0x006d128c);
    /* 006d128c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d128d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d128f: mov ecx, dword ptr [ebx + 0xe744] */ r_ecx = R32((u32)(r_ebx+0xe744u));
    /* 006d1295: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1297: je 0x6d13fd */ if (fZ) goto L_006d13fd;
L_006d129d:; BB(0x006d129d);
    /* 006d129d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d12a4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d12a6: je 0x6d1372 */ if (fZ) goto L_006d1372;
L_006d12ac:; BB(0x006d12ac);
    /* 006d12ac: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d12b1u); f_007365f4();
    /* 006d12b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d12b3: jne 0x6d12d3 */ if (!fZ) goto L_006d12d3;
L_006d12b5:; BB(0x006d12b5);
    /* 006d12b5: mov ecx, dword ptr [ebx + 0xe744] */ r_ecx = R32((u32)(r_ebx+0xe744u));
    /* 006d12bb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d12c0u); f_007127b0();
    /* 006d12c0: mov dword ptr [ebx + 0xe744], 0 */ W32((u32)(r_ebx+0xe744u), 0x0u);
    /* 006d12ca: mov dword ptr [ebx + 0x20], 0xb */ W32((u32)(r_ebx+0x20u), 0xbu);
    /* 006d12d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d12d2: ret  */ FN_RET(0x006d128c); r_esp += 4; return;
L_006d12d3:; BB(0x006d12d3);
    /* 006d12d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d12d6: jne 0x6d1365 */ if (!fZ) goto L_006d1365;
L_006d12dc:; BB(0x006d12dc);
    /* 006d12dc: mov ecx, dword ptr [ebx + 0xe744] */ r_ecx = R32((u32)(r_ebx+0xe744u));
    /* 006d12e2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d12e7u); f_007127b0();
    /* 006d12e7: mov ecx, dword ptr [ebx + 0xe74c] */ r_ecx = R32((u32)(r_ebx+0xe74cu));
    /* 006d12ed: mov dword ptr [ebx + 0xe744], 0 */ W32((u32)(r_ebx+0xe744u), 0x0u);
    /* 006d12f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d12f9: je 0x6d130a */ if (fZ) goto L_006d130a;
L_006d12fb:; BB(0x006d12fb);
    /* 006d12fb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d1300u); f_007127b0();
    /* 006d1300: mov dword ptr [ebx + 0xe74c], 0 */ W32((u32)(r_ebx+0xe74cu), 0x0u);
L_006d130a:; BB(0x006d130a);
    /* 006d130a: mov edx, dword ptr [ebx + 0xe740] */ r_edx = R32((u32)(r_ebx+0xe740u));
    /* 006d1310: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1312: je 0x6d1335 */ if (fZ) goto L_006d1335;
L_006d1314:; BB(0x006d1314);
    /* 006d1314: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d131b: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d1320: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d1323: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d132a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d132c: je 0x6d1335 */ if (fZ) goto L_006d1335;
L_006d132e:; BB(0x006d132e);
    /* 006d132e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1330: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d1335u); f_00760acc();
L_006d1335:; BB(0x006d1335);
    /* 006d1335: mov eax, dword ptr [ebx + 0xe750] */ r_eax = R32((u32)(r_ebx+0xe750u));
    /* 006d133b: mov dword ptr [0xa961b4], 0x90000 */ W32((u32)(0xa961b4u), 0x90000u);
    /* 006d1345: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1347: mov dword ptr [0xa961bc], eax */ W32((u32)(0xa961bcu), r_eax);
    /* 006d134c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d134e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d1350: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1352: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1355u); call_ind(t); }
    /* 006d1355: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1357: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d135cu); f_006d1154();
    /* 006d135c: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d1363: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1364: ret  */ FN_RET(0x006d128c); r_esp += 4; return;
L_006d1365:; BB(0x006d1365);
    /* 006d1365: mov ecx, dword ptr [ebx + 0xe744] */ r_ecx = R32((u32)(r_ebx+0xe744u));
    /* 006d136b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_006d1372:; BB(0x006d1372);
    /* 006d1372: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1374: je 0x6d13fd */ if (fZ) goto L_006d13fd;
L_006d137a:; BB(0x006d137a);
    /* 006d137a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d137fu); f_007127b0();
    /* 006d137f: mov ecx, dword ptr [ebx + 0xe74c] */ r_ecx = R32((u32)(r_ebx+0xe74cu));
    /* 006d1385: mov dword ptr [ebx + 0xe744], 0 */ W32((u32)(r_ebx+0xe744u), 0x0u);
    /* 006d138f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1391: je 0x6d13a2 */ if (fZ) goto L_006d13a2;
L_006d1393:; BB(0x006d1393);
    /* 006d1393: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d1398u); f_007127b0();
    /* 006d1398: mov dword ptr [ebx + 0xe74c], 0 */ W32((u32)(r_ebx+0xe74cu), 0x0u);
L_006d13a2:; BB(0x006d13a2);
    /* 006d13a2: mov edx, dword ptr [ebx + 0xe740] */ r_edx = R32((u32)(r_ebx+0xe740u));
    /* 006d13a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d13aa: je 0x6d13cd */ if (fZ) goto L_006d13cd;
L_006d13ac:; BB(0x006d13ac);
    /* 006d13ac: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d13b3: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d13b8: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d13bb: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d13c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d13c4: je 0x6d13cd */ if (fZ) goto L_006d13cd;
L_006d13c6:; BB(0x006d13c6);
    /* 006d13c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d13c8: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d13cdu); f_00760acc();
L_006d13cd:; BB(0x006d13cd);
    /* 006d13cd: mov eax, dword ptr [ebx + 0xe750] */ r_eax = R32((u32)(r_ebx+0xe750u));
    /* 006d13d3: mov dword ptr [0xa961b4], 0x90000 */ W32((u32)(0xa961b4u), 0x90000u);
    /* 006d13dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d13df: mov dword ptr [0xa961bc], eax */ W32((u32)(0xa961bcu), r_eax);
    /* 006d13e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d13e6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d13e8: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d13ea: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d13edu); call_ind(t); }
    /* 006d13ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d13ef: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d13f4u); f_006d1154();
    /* 006d13f4: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d13fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d13fc: ret  */ FN_RET(0x006d128c); r_esp += 4; return;
L_006d13fd:; BB(0x006d13fd);
    /* 006d13fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d13fe: ret  */ FN_RET(0x006d128c); r_esp += 4; return;
}

void f_006d1400(void) /* sub_6D1400 */
{
    FN_ENTER(0x006d1400);
    /* 006d1400: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1401: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d1404: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d1406: mov ecx, dword ptr [ebx + 0xe740] */ r_ecx = R32((u32)(r_ebx+0xe740u));
    /* 006d140c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d140e: je 0x6d1578 */ if (fZ) goto L_006d1578;
L_006d1414:; BB(0x006d1414);
    /* 006d1414: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d1419u); f_00737d90();
    /* 006d1419: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d141b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d141d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1420: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1422: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1424: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1426: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1429: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d142b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d142d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d142f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1431: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1433: push dword ptr [eax + ebx + 0x3c8] */ { u32 v = R32((u32)(r_eax+r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d143a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d143fu); f_006dc358();
    /* 006d143f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1440: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1442: jne 0x6d1578 */ if (!fZ) goto L_006d1578;
L_006d1448:; BB(0x006d1448);
    /* 006d1448: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d144b: push dword ptr [ebx + 0xe754] */ { u32 v = R32((u32)(r_ebx+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1452: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d1457u); f_0082c21c();
    /* 006d1457: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d145a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d145c: je 0x6d14ac */ if (fZ) goto L_006d14ac;
L_006d145e:; BB(0x006d145e);
    /* 006d145e: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1463: jne 0x6d1483 */ if (!fZ) goto L_006d1483;
L_006d1465:; BB(0x006d1465);
    /* 006d1465: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1467: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d1469: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d146b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d146d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1470u); call_ind(t); }
    /* 006d1470: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1472: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d1477u); f_006d1154();
    /* 006d1477: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d147e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1481: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1482: ret  */ FN_RET(0x006d1400); r_esp += 4; return;
L_006d1483:; BB(0x006d1483);
    /* 006d1483: cmp eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1488: jne 0x6d1578 */ if (!fZ) goto L_006d1578;
L_006d148e:; BB(0x006d148e);
    /* 006d148e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1490: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d1492: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d1494: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1496: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1499u); call_ind(t); }
    /* 006d1499: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d149b: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d14a0u); f_006d1154();
    /* 006d14a0: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d14a7: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d14aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d14ab: ret  */ FN_RET(0x006d1400); r_esp += 4; return;
L_006d14ac:; BB(0x006d14ac);
    /* 006d14ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d14ae: call 0x6d1144 */ r_esp -= 4; W32(r_esp, 0x6d14b3u); f_006d1144();
    /* 006d14b3: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d14b7: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d14bb: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d14c0: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d14c5: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d14cau); f_006be204();
    /* 006d14ca: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d14ce: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d14d2: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d14d7u); f_006be2bc();
    /* 006d14d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d14da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d14dc: jne 0x6d150d */ if (!fZ) goto L_006d150d;
L_006d14de:; BB(0x006d14de);
    /* 006d14de: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d14e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d14e6: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d14e8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d14ea: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d14ed: mov dword ptr [ebx + 0xe764], eax */ W32((u32)(r_ebx+0xe764u), r_eax);
    /* 006d14f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d14f5: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d14f8u); call_ind(t); }
    /* 006d14f8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d14fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d14fc: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d1501u); f_006d2dac();
    /* 006d1501: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1503: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d1508u); f_006d1154();
    /* 006d1508: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d150b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d150c: ret  */ FN_RET(0x006d1400); r_esp += 4; return;
L_006d150d:; BB(0x006d150d);
    /* 006d150d: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 006d1511: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006d1515: push dword ptr [0xa961b4] */ { u32 v = R32((u32)(0xa961b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d151b: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d151e: push dword ptr [0xa961bc] */ { u32 v = R32((u32)(0xa961bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1524: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1529: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d152eu); f_005b9b3c();
    /* 006d152e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d1533: jbe 0x6d155d */ if ((fC||fZ)) goto L_006d155d;
L_006d1535:; BB(0x006d1535);
    /* 006d1535: mov edx, dword ptr [0xa961bc] */ r_edx = R32((u32)(0xa961bcu));
    /* 006d153b: mov dword ptr [ebx + 0x20], 0xf */ W32((u32)(r_ebx+0x20u), 0xfu);
    /* 006d1542: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1544: mov dword ptr [0xa961b8], edx */ W32((u32)(0xa961b8u), r_edx);
    /* 006d154a: mov edx, dword ptr [0xa961b4] */ r_edx = R32((u32)(0xa961b4u));
    /* 006d1550: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1552: mov dword ptr [0xa961b0], edx */ W32((u32)(0xa961b0u), r_edx);
    /* 006d1558: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d155b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d155c: ret  */ FN_RET(0x006d1400); r_esp += 4; return;
L_006d155d:; BB(0x006d155d);
    /* 006d155d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d155f: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006d1561: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d1563: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1565: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d1568u); call_ind(t); }
    /* 006d1568: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d156a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d156c: call 0x6d2dac */ r_esp -= 4; W32(r_esp, 0x6d1571u); f_006d2dac();
    /* 006d1571: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1573: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d1578u); f_006d1154();
L_006d1578:; BB(0x006d1578);
    /* 006d1578: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d157b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d157c: ret  */ FN_RET(0x006d1400); r_esp += 4; return;
}

void f_006d1580(void) /* sub_6D1580 */
{
    FN_ENTER(0x006d1580);
    /* 006d1580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1581: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1582: mov edi, ecx */ r_edi = r_ecx;
    /* 006d1584: mov ecx, dword ptr [edi + 0xe740] */ r_ecx = R32((u32)(r_edi+0xe740u));
    /* 006d158a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d158c: je 0x6d160b */ if (fZ) goto L_006d160b;
L_006d158e:; BB(0x006d158e);
    /* 006d158e: mov eax, dword ptr [edi + 0xe754] */ r_eax = R32((u32)(r_edi+0xe754u));
    /* 006d1594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1596: je 0x6d160b */ if (fZ) goto L_006d160b;
L_006d1598:; BB(0x006d1598);
    /* 006d1598: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d159du); f_00737d90();
    /* 006d159d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d159f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d15a1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d15a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d15a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d15a8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d15aa: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006d15ad: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d15af: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d15b1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d15b3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d15b5: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d15b7: lea eax, [edi + ebx] */ r_eax = (u32)(r_edi+r_ebx);
    /* 006d15ba: push dword ptr [eax + 0x3c8] */ { u32 v = R32((u32)(r_eax+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d15c0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d15c5u); f_006dc358();
    /* 006d15c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d15c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d15c8: jne 0x6d160b */ if (!fZ) goto L_006d160b;
L_006d15ca:; BB(0x006d15ca);
    /* 006d15ca: push dword ptr [edi + 0xe754] */ { u32 v = R32((u32)(r_edi+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d15d0: lea eax, [edi + ebx + 0x34] */ r_eax = (u32)(r_edi+r_ebx+0x34u);
    /* 006d15d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d15d5: push dword ptr [ebx + edi + 0x3c8] */ { u32 v = R32((u32)(r_ebx+r_edi+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d15dc: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d15e1u); f_006dc358();
    /* 006d15e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d15e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d15e6: jne 0x6d15f2 */ if (!fZ) goto L_006d15f2;
L_006d15e8:; BB(0x006d15e8);
    /* 006d15e8: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d15ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d15f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d15f1: ret  */ FN_RET(0x006d1580); r_esp += 4; return;
L_006d15f2:; BB(0x006d15f2);
    /* 006d15f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d15f4: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d15f6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d15f8: mov ecx, edi */ r_ecx = r_edi;
    /* 006d15fa: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d15fdu); call_ind(t); }
    /* 006d15fd: mov ecx, edi */ r_ecx = r_edi;
    /* 006d15ff: call 0x6d1154 */ r_esp -= 4; W32(r_esp, 0x6d1604u); f_006d1154();
    /* 006d1604: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
L_006d160b:; BB(0x006d160b);
    /* 006d160b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d160c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d160d: ret  */ FN_RET(0x006d1580); r_esp += 4; return;
}

void f_006d1610(void) /* sub_6D1610 */
{
    FN_ENTER(0x006d1610);
    /* 006d1610: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1611: mov esi, ecx */ r_esi = r_ecx;
    /* 006d1613: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d1618u); f_005b7a28();
    /* 006d1618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d161a: jne 0x6d161e */ if (!fZ) goto L_006d161e;
L_006d161c:; BB(0x006d161c);
    /* 006d161c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d161d: ret  */ FN_RET(0x006d1610); r_esp += 4; return;
L_006d161e:; BB(0x006d161e);
    /* 006d161e: push 0x96bffc */ { u32 v = 0x96bffcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d1623: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x6d1628u); f_005b7a44();
    /* 006d1628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1629: mov dword ptr [esi + 0xe750], eax */ W32((u32)(r_esi+0xe750u), r_eax);
    /* 006d162f: mov eax, dword ptr [esi + 0xe73c] */ r_eax = R32((u32)(r_esi+0xe73cu));
    /* 006d1635: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006d1638: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1639: ret  */ FN_RET(0x006d1610); r_esp += 4; return;
}

void f_006d163c(void) /* sub_6D163C */
{
    FN_ENTER(0x006d163c);
    /* 006d163c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d163d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d163e: mov edi, ecx */ r_edi = r_ecx;
    /* 006d1640: mov ecx, dword ptr [edi + 0xe740] */ r_ecx = R32((u32)(r_edi+0xe740u));
    /* 006d1646: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1648: je 0x6d165f */ if (fZ) goto L_006d165f;
L_006d164a:; BB(0x006d164a);
    /* 006d164a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d1651: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1653: je 0x6d165f */ if (fZ) goto L_006d165f;
L_006d1655:; BB(0x006d1655);
    /* 006d1655: mov dword ptr [edi + 0x20], 0x10 */ W32((u32)(r_edi+0x20u), 0x10u);
    /* 006d165c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d165d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d165e: ret  */ FN_RET(0x006d163c); r_esp += 4; return;
L_006d165f:; BB(0x006d165f);
    /* 006d165f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1661: je 0x6d1682 */ if (fZ) goto L_006d1682;
L_006d1663:; BB(0x006d1663);
    /* 006d1663: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d166a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d166c: je 0x6d1682 */ if (fZ) goto L_006d1682;
L_006d166e:; BB(0x006d166e);
    /* 006d166e: mov dword ptr [edi + 0xe73c], 0xa */ W32((u32)(r_edi+0xe73cu), 0xau);
    /* 006d1678: mov dword ptr [edi + 0x20], 8 */ W32((u32)(r_edi+0x20u), 0x8u);
    /* 006d167f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1680: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1681: ret  */ FN_RET(0x006d163c); r_esp += 4; return;
L_006d1682:; BB(0x006d1682);
    /* 006d1682: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1684: je 0x6d16f1 */ if (fZ) goto L_006d16f1;
L_006d1686:; BB(0x006d1686);
    /* 006d1686: mov eax, dword ptr [edi + 0xe748] */ r_eax = R32((u32)(r_edi+0xe748u));
    /* 006d168c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d168e: je 0x6d16f1 */ if (fZ) goto L_006d16f1;
L_006d1690:; BB(0x006d1690);
    /* 006d1690: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d1695u); f_00737d90();
    /* 006d1695: mov esi, eax */ r_esi = r_eax;
    /* 006d1697: cmp esi, dword ptr [edi + 0xe738] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xe738u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d169d: je 0x6d16f1 */ if (fZ) goto L_006d16f1;
L_006d169f:; BB(0x006d169f);
    /* 006d169f: mov ecx, dword ptr [edi + 0xe748] */ r_ecx = R32((u32)(r_edi+0xe748u));
    /* 006d16a5: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d16aa: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006d16ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16af: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d16b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d16b4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d16b6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d16b8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d16bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16c3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d16c5: lea edx, [edi + edx + 0x84] */ r_edx = (u32)(r_edi+r_edx+0x84u);
    /* 006d16cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d16cd: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d16d2u); f_0073ae38();
    /* 006d16d2: mov ecx, dword ptr [edi + 0xe74c] */ r_ecx = R32((u32)(r_edi+0xe74cu));
    /* 006d16d8: mov dword ptr [edi + 0xe738], esi */ W32((u32)(r_edi+0xe738u), r_esi);
    /* 006d16de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d16e0: je 0x6d16f1 */ if (fZ) goto L_006d16f1;
L_006d16e2:; BB(0x006d16e2);
    /* 006d16e2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d16e7u); f_007127b0();
    /* 006d16e7: mov dword ptr [edi + 0xe74c], 0 */ W32((u32)(r_edi+0xe74cu), 0x0u);
L_006d16f1:; BB(0x006d16f1);
    /* 006d16f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d16f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d16f3: ret  */ FN_RET(0x006d163c); r_esp += 4; return;
}

void f_006d16f4(void) /* sub_6D16F4 */
{
    FN_ENTER(0x006d16f4);
    /* 006d16f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d16f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d16f6: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d16f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d16fb: mov eax, dword ptr [ebp + 0xe734] */ r_eax = R32((u32)(r_ebp+0xe734u));
    /* 006d1701: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1703: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1705: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1708: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d170a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d170c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d170e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1711: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1713: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1715: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1717: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1719: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d171b: push dword ptr [eax + ebp + 0x3c8] */ { u32 v = R32((u32)(r_eax+r_ebp+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1722: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1727u); f_006dc358();
    /* 006d1727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d172a: jne 0x6d19f9 */ if (!fZ) goto L_006d19f9;
L_006d1730:; BB(0x006d1730);
    /* 006d1730: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d1733: push dword ptr [ebp + 0xe754] */ { u32 v = R32((u32)(r_ebp+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d173a: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d173fu); f_0082c21c();
    /* 006d173f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1744: je 0x6d17a4 */ if (fZ) goto L_006d17a4;
L_006d1746:; BB(0x006d1746);
    /* 006d1746: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d174b: jne 0x6d1773 */ if (!fZ) goto L_006d1773;
L_006d174d:; BB(0x006d174d);
    /* 006d174d: mov eax, dword ptr [ebp + 0xe764] */ r_eax = R32((u32)(r_ebp+0xe764u));
    /* 006d1753: mov dword ptr [ebp + 0xe77c], 1 */ W32((u32)(r_ebp+0xe77cu), 0x1u);
    /* 006d175d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1760: mov dword ptr [ebp + 0xe764], eax */ W32((u32)(r_ebp+0xe764u), r_eax);
    /* 006d1766: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d176d: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1770: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d1772: ret  */ FN_RET(0x006d16f4); r_esp += 4; return;
L_006d1773:; BB(0x006d1773);
    /* 006d1773: cmp eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1778: jne 0x6d19f9 */ if (!fZ) goto L_006d19f9;
L_006d177e:; BB(0x006d177e);
    /* 006d177e: mov eax, dword ptr [ebp + 0xe764] */ r_eax = R32((u32)(r_ebp+0xe764u));
    /* 006d1784: mov dword ptr [ebp + 0xe77c], 1 */ W32((u32)(r_ebp+0xe77cu), 0x1u);
    /* 006d178e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1791: mov dword ptr [ebp + 0xe764], eax */ W32((u32)(r_ebp+0xe764u), r_eax);
    /* 006d1797: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d179e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d17a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d17a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d17a3: ret  */ FN_RET(0x006d16f4); r_esp += 4; return;
L_006d17a4:; BB(0x006d17a4);
    /* 006d17a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d17a6: call 0x6d1144 */ r_esp -= 4; W32(r_esp, 0x6d17abu); f_006d1144();
    /* 006d17ab: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d17af: push dword ptr [esp + 0x5c] */ { u32 v = R32((u32)(r_esp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d17b3: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d17b8: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d17bd: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d17c2u); f_006be204();
    /* 006d17c2: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d17c6: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d17ca: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d17cfu); f_006be2bc();
    /* 006d17cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d17d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d17d4: jne 0x6d17fc */ if (!fZ) goto L_006d17fc;
L_006d17d6:; BB(0x006d17d6);
    /* 006d17d6: mov eax, dword ptr [ebp + 0xe764] */ r_eax = R32((u32)(r_ebp+0xe764u));
    /* 006d17dc: mov dword ptr [ebp + 0xe77c], 1 */ W32((u32)(r_ebp+0xe77cu), 0x1u);
    /* 006d17e6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d17e9: mov dword ptr [ebp + 0xe764], eax */ W32((u32)(r_ebp+0xe764u), r_eax);
    /* 006d17ef: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d17f6: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d17f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d17fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d17fb: ret  */ FN_RET(0x006d16f4); r_esp += 4; return;
L_006d17fc:; BB(0x006d17fc);
    /* 006d17fc: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 006d1800: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006d1804: push dword ptr [0xa961b4] */ { u32 v = R32((u32)(0xa961b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d180a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d180d: push dword ptr [0xa961bc] */ { u32 v = R32((u32)(0xa961bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1813: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1818: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d181du); f_005b9b3c();
    /* 006d181d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d1822: jbe 0x6d19d9 */ if ((fC||fZ)) goto L_006d19d9;
L_006d1828:; BB(0x006d1828);
    /* 006d1828: mov ebx, dword ptr [0xa961bc] */ r_ebx = R32((u32)(0xa961bcu));
    /* 006d182e: mov eax, dword ptr [ebp + 0xe734] */ r_eax = R32((u32)(r_ebp+0xe734u));
    /* 006d1834: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d1837: jge 0x6d19bd */ if ((fS==fO)) goto L_006d19bd;
L_006d183d:; BB(0x006d183d);
    /* 006d183d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d183e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d1841: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d1843: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6d1846u); call_ind(t); }
    /* 006d1846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1848: je 0x6d19bd */ if (fZ) goto L_006d19bd;
L_006d184e:; BB(0x006d184e);
    /* 006d184e: mov eax, dword ptr [ebp + 0xe734] */ r_eax = R32((u32)(r_ebp+0xe734u));
    /* 006d1854: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1856: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1858: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d185b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d185d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d185f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1861: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1864: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1866: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1868: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d186a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d186c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d186e: lea edx, [ebp + eax + 0x44] */ r_edx = (u32)(r_ebp+r_eax+0x44u);
    /* 006d1872: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 006d1875: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d1877: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d1879: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d187c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d187f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d1882: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d1885: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d1888: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d188b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d188e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d1891: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d1894: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d1897: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d189a: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006d189d: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d18a0: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006d18a3: mov eax, dword ptr [ebp + 0xe734] */ r_eax = R32((u32)(r_ebp+0xe734u));
    /* 006d18a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18ad: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d18b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d18b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d18b4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d18b6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d18b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18c1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d18c3: lea edx, [ebp + eax + 0x84] */ r_edx = (u32)(r_ebp+r_eax+0x84u);
    /* 006d18ca: lea eax, [ebx + 0x58] */ r_eax = (u32)(r_ebx+0x58u);
    /* 006d18cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d18cf: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d18d1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d18d4: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d18d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d18da: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d18dd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d18e0: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d18e3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d18e6: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d18e9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d18ec: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d18ef: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d18f2: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d18f5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006d18f8: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006d18fb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006d18fe: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006d1901: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006d1904: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006d1907: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d190a: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006d190d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d1910: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006d1913: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d1916: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006d1919: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d191c: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006d191f: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d1922: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006d1925: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d1928: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006d192b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006d192e: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006d1931: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006d1934: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006d1937: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006d193a: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006d193d: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006d1940: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006d1943: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006d1946: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006d1949: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006d194c: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006d194f: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006d1952: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 006d1955: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 006d1958: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 006d195b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006d195e: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 006d1961: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006d1964: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 006d1967: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006d196a: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 006d196d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006d1970: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 006d1973: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 006d1976: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 006d1979: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 006d197c: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 006d197f: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 006d1982: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 006d1985: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 006d1988: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 006d198b: mov eax, dword ptr [ebp + 0xe734] */ r_eax = R32((u32)(r_ebp+0xe734u));
    /* 006d1991: movsx ebx, byte ptr [ebx + 0x14] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebx+0x14u));
    /* 006d1995: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1997: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1999: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d199c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d199e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d19a0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d19a2: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d19a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19ad: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19af: mov dword ptr [eax + ebp + 0x3cc], ebx */ W32((u32)(r_eax+r_ebp+0x3ccu), r_ebx);
    /* 006d19b6: add dword ptr [ebp + 0xe734], 1 */ { u32 ad = (u32)(r_ebp+0xe734u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006d19bd:; BB(0x006d19bd);
    /* 006d19bd: mov eax, dword ptr [ebp + 0xe764] */ r_eax = R32((u32)(r_ebp+0xe764u));
    /* 006d19c3: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d19ca: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19cd: mov dword ptr [ebp + 0xe764], eax */ W32((u32)(r_ebp+0xe764u), r_eax);
    /* 006d19d3: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d19d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d19d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d19d8: ret  */ FN_RET(0x006d16f4); r_esp += 4; return;
L_006d19d9:; BB(0x006d19d9);
    /* 006d19d9: mov eax, dword ptr [ebp + 0xe764] */ r_eax = R32((u32)(r_ebp+0xe764u));
    /* 006d19df: mov dword ptr [ebp + 0xe77c], 1 */ W32((u32)(r_ebp+0xe77cu), 0x1u);
    /* 006d19e9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d19ec: mov dword ptr [ebp + 0xe764], eax */ W32((u32)(r_ebp+0xe764u), r_eax);
    /* 006d19f2: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
L_006d19f9:; BB(0x006d19f9);
    /* 006d19f9: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d19fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d19fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d19fe: ret  */ FN_RET(0x006d16f4); r_esp += 4; return;
}

void f_006d1a00(void) /* sub_6D1A00 */
{
    FN_ENTER(0x006d1a00);
    /* 006d1a00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1a01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d1a03: mov eax, dword ptr [ebx + 0xe754] */ r_eax = R32((u32)(r_ebx+0xe754u));
    /* 006d1a09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1a0b: je 0x6d1aa1 */ if (fZ) goto L_006d1aa1;
L_006d1a11:; BB(0x006d1a11);
    /* 006d1a11: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d1a17: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a19: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a1b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1a1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a20: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a22: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a24: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1a27: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a29: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a2b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a2d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a2f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a31: push dword ptr [eax + ebx + 0x3c8] */ { u32 v = R32((u32)(r_eax+r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1a38: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1a3du); f_006dc358();
    /* 006d1a3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1a3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1a40: jne 0x6d1a9f */ if (!fZ) goto L_006d1a9f;
L_006d1a42:; BB(0x006d1a42);
    /* 006d1a42: push dword ptr [ebx + 0xe754] */ { u32 v = R32((u32)(r_ebx+0xe754u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1a48: mov eax, dword ptr [ebx + 0xe734] */ r_eax = R32((u32)(r_ebx+0xe734u));
    /* 006d1a4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1a52: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1a55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a57: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a59: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1a5b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d1a5e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d1a60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d1a62: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d1a64: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d1a66: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d1a68: lea eax, [ebx + ecx + 0x34] */ r_eax = (u32)(r_ebx+r_ecx+0x34u);
    /* 006d1a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1a6d: push dword ptr [ecx + ebx + 0x3c8] */ { u32 v = R32((u32)(r_ecx+r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1a74: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1a79u); f_006dc358();
    /* 006d1a79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1a7e: jne 0x6d1a89 */ if (!fZ) goto L_006d1a89;
L_006d1a80:; BB(0x006d1a80);
    /* 006d1a80: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 006d1a87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1a88: ret  */ FN_RET(0x006d1a00); r_esp += 4; return;
L_006d1a89:; BB(0x006d1a89);
    /* 006d1a89: mov eax, dword ptr [ebx + 0xe764] */ r_eax = R32((u32)(r_ebx+0xe764u));
    /* 006d1a8f: mov dword ptr [ebx + 0x20], 2 */ W32((u32)(r_ebx+0x20u), 0x2u);
    /* 006d1a96: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1a99: mov dword ptr [ebx + 0xe764], eax */ W32((u32)(r_ebx+0xe764u), r_eax);
L_006d1a9f:; BB(0x006d1a9f);
    /* 006d1a9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1aa0: ret  */ FN_RET(0x006d1a00); r_esp += 4; return;
L_006d1aa1:; BB(0x006d1aa1);
    /* 006d1aa1: mov dword ptr [ebx + 0x20], 0x12 */ W32((u32)(r_ebx+0x20u), 0x12u);
    /* 006d1aa8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1aa9: ret  */ FN_RET(0x006d1a00); r_esp += 4; return;
}

void f_006d1aac(void) /* sub_6D1AAC */
{
    FN_ENTER(0x006d1aac);
    /* 006d1aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d1aad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d1aaf: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d1ab4u); f_005b7a28();
    /* 006d1ab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1ab6: jne 0x6d1aba */ if (!fZ) goto L_006d1aba;
L_006d1ab8:; BB(0x006d1ab8);
    /* 006d1ab8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d1ab9: ret  */ FN_RET(0x006d1aac); r_esp += 4; return;
L_006d1aba:; BB(0x006d1aba);
    /* 006d1aba: push 0x96bffc */ { u32 v = 0x96bffcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d1abf: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x6d1ac4u); f_005b7a44();
    /* 006d1ac4: mov dword ptr [0xa961b4], 0x90000 */ W32((u32)(0xa961b4u), 0x90000u);
    /* 006d1ace: mov dword ptr [ebp + 0xe750], eax */ W32((u32)(r_ebp+0xe750u), r_eax);
    /* 006d1ad4: mov dword ptr [0xa961bc], eax */ W32((u32)(0xa961bcu), r_eax);
    /* 006d1ad9: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d1ae0: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d1ae2: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d1ae7u); f_007930dc();
    /* 006d1ae7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1aea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1aed: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d1af0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d1af2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d1af5u); call_ind(t); }
    /* 006d1af5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d1af6: ret  */ FN_RET(0x006d1aac); r_esp += 4; return;
}

void f_006d1af8(void) /* sub_6D1AF8 */
{
    FN_ENTER(0x006d1af8);
    /* 006d1af8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d1af9: mov ebp, esp */ r_ebp = r_esp;
    /* 006d1afb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d1afd: push 0x8edd84 */ { u32 v = 0x8edd84u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1b02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d1b08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1b09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d1b10: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d1b13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d1b16: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d1b19: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d1b1c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d1b1f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d1b22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1b25: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d1b28: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d1b2b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d1b2e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d1b31: call 0x6d0ab0 */ r_esp -= 4; W32(r_esp, 0x6d1b36u); f_006d0ab0();
    /* 006d1b36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d1b3d: push 0xe700 */ { u32 v = 0xe700u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1b42: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d1b45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d1b48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d1b4b: mov dword ptr [esi], 0xb3c17c */ W32((u32)(r_esi), 0xb3c17cu);
    /* 006d1b51: mov eax, dword ptr [0x9cf0b8] */ r_eax = R32((u32)(0x9cf0b8u));
    /* 006d1b56: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006d1b59: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d1b5b: mov dword ptr [esi + 0x14758], ebx */ W32((u32)(r_esi+0x14758u), r_ebx);
    /* 006d1b61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1b62: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006d1b65: mov dword ptr [esi + 0x1475c], ebx */ W32((u32)(r_esi+0x1475cu), r_ebx);
    /* 006d1b6b: mov dword ptr [esi + 0x14760], ebx */ W32((u32)(r_esi+0x14760u), r_ebx);
    /* 006d1b71: mov dword ptr [esi + 0x14764], ebx */ W32((u32)(r_esi+0x14764u), r_ebx);
    /* 006d1b77: mov dword ptr [0xa961a4], ebx */ W32((u32)(0xa961a4u), r_ebx);
    /* 006d1b7d: mov dword ptr [0xa961a0], ebx */ W32((u32)(0xa961a0u), r_ebx);
    /* 006d1b83: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 006d1b86: mov dword ptr [0xa9619c], ebx */ W32((u32)(0xa9619cu), r_ebx);
    /* 006d1b8c: mov dword ptr [0xa96198], ebx */ W32((u32)(0xa96198u), r_ebx);
    /* 006d1b92: mov dword ptr [esi + 0x14754], ebx */ W32((u32)(r_esi+0x14754u), r_ebx);
    /* 006d1b98: add esi, 0x6054 */ {  u32 a = r_esi; u32 b = 0x6054u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d1b9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1b9f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6d1ba4u); f_0086b5cc();
    /* 006d1ba4: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1ba9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d1bac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d1bae: mov dword ptr [edx + 0x6050], eax */ W32((u32)(r_edx+0x6050u), r_eax);
    /* 006d1bb4: mov dword ptr [edx + 0x6044], eax */ W32((u32)(r_edx+0x6044u), r_eax);
    /* 006d1bba: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6d1bbfu); f_0082e940();
    /* 006d1bbf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1bc2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d1bc5: mov dword ptr [ecx + 0x6040], eax */ W32((u32)(r_ecx+0x6040u), r_eax);
    /* 006d1bcb: call 0x6d1bf0 */ r_esp -= 4; W32(r_esp, 0x6d1bd0u); f_006d1bf0();
    /* 006d1bd0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d1bd3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d1bd6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d1bd9: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 006d1be0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d1be3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d1bea: mov esp, ebp */ r_esp = r_ebp;
    /* 006d1bec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d1bed: ret 0xc */ FN_RET(0x006d1af8); r_esp += 16; return;
}

void f_006d1bf0(void) /* sub_6D1BF0 */
{
    FN_ENTER(0x006d1bf0);
    /* 006d1bf0: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d1bf5u); f_005b7a28();
    /* 006d1bf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1bf7: jne 0x6d1bfc */ if (!fZ) goto L_006d1bfc;
L_006d1bf9:; BB(0x006d1bf9);
    /* 006d1bf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1bfb: ret  */ FN_RET(0x006d1bf0); r_esp += 4; return;
L_006d1bfc:; BB(0x006d1bfc);
    /* 006d1bfc: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1c02: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x6d1c07u); f_005b7a44();
    /* 006d1c07: mov dword ptr [0xa9619c], 0x90000 */ W32((u32)(0xa9619cu), 0x90000u);
    /* 006d1c11: mov dword ptr [0xa961a4], eax */ W32((u32)(0xa961a4u), r_eax);
    /* 006d1c16: mov eax, 1 */ r_eax = 0x1u;
    /* 006d1c1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1c1c: ret  */ FN_RET(0x006d1bf0); r_esp += 4; return;
}

void f_006d1c20(void) /* sub_6D1C20 */
{
    FN_ENTER(0x006d1c20);
    /* 006d1c20: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006d1c23: call dword ptr [eax*4 + 0x9cf084] */ { u32 t = R32((u32)(r_eax*4+0x9cf084u)); r_esp -= 4; W32(r_esp, 0x6d1c2au); call_ind(t); }
    /* 006d1c2a: ret  */ FN_RET(0x006d1c20); r_esp += 4; return;
}

void f_006d1c2c(void) /* sub_6D1C2C */
{
    FN_ENTER(0x006d1c2c);
    /* 006d1c2c: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d1c31u); f_005b7a28();
    /* 006d1c31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1c33: je 0x6d1c40 */ if (fZ) goto L_006d1c40;
L_006d1c35:; BB(0x006d1c35);
    /* 006d1c35: mov dword ptr [0xa955e0], 0 */ W32((u32)(0xa955e0u), 0x0u);
    /* 006d1c3f: ret  */ FN_RET(0x006d1c2c); r_esp += 4; return;
L_006d1c40:; BB(0x006d1c40);
    /* 006d1c40: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1c46: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x6d1c4bu); f_005b9008();
    /* 006d1c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1c4c: jmp 0x6d1c35 */ goto L_006d1c35;
}

void f_006d1c50(void) /* sub_6D1C50 */
{
    FN_ENTER(0x006d1c50);
    /* 006d1c50: mov eax, dword ptr [ecx + 0x604c] */ r_eax = R32((u32)(r_ecx+0x604cu));
    /* 006d1c56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1c58: je 0x6d1c70 */ if (fZ) goto L_006d1c70;
L_006d1c5a:; BB(0x006d1c5a);
    /* 006d1c5a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1c5d: je 0x6d1c6a */ if (fZ) goto L_006d1c6a;
L_006d1c5f:; BB(0x006d1c5f);
    /* 006d1c5f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d1c62: jne 0x6d1c6f */ if (!fZ) goto L_006d1c6f;
L_006d1c64:; BB(0x006d1c64);
    /* 006d1c64: call 0x6d1c78 */ r_esp -= 4; W32(r_esp, 0x6d1c69u); f_006d1c78();
    /* 006d1c69: ret  */ FN_RET(0x006d1c50); r_esp += 4; return;
L_006d1c6a:; BB(0x006d1c6a);
    /* 006d1c6a: call 0x6d1cac */ r_esp -= 4; W32(r_esp, 0x6d1c6fu); f_006d1cac();
L_006d1c6f:; BB(0x006d1c6f);
    /* 006d1c6f: ret  */ FN_RET(0x006d1c50); r_esp += 4; return;
L_006d1c70:; BB(0x006d1c70);
    /* 006d1c70: call 0x6d2578 */ r_esp -= 4; W32(r_esp, 0x6d1c75u); f_006d2578();
    /* 006d1c75: ret  */ FN_RET(0x006d1c50); r_esp += 4; return;
}

void f_006d1c78(void) /* sub_6D1C78 */
{
    FN_ENTER(0x006d1c78);
    /* 006d1c78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1c79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d1c7b: mov eax, dword ptr [ebx + 0x6050] */ r_eax = R32((u32)(r_ebx+0x6050u));
    /* 006d1c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1c83: jle 0x6d1c8e */ if ((fZ||fS!=fO)) goto L_006d1c8e;
L_006d1c85:; BB(0x006d1c85);
    /* 006d1c85: mov dword ptr [ebx + 0x20], 2 */ W32((u32)(r_ebx+0x20u), 0x2u);
    /* 006d1c8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1c8d: ret  */ FN_RET(0x006d1c78); r_esp += 4; return;
L_006d1c8e:; BB(0x006d1c8e);
    /* 006d1c8e: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1c90: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d1c95u); f_007930dc();
    /* 006d1c95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1c96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1c99: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d1c9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d1c9d: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d1ca0u); call_ind(t); }
    /* 006d1ca0: mov dword ptr [ebx + 0x20], 8 */ W32((u32)(r_ebx+0x20u), 0x8u);
    /* 006d1ca7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1ca8: ret  */ FN_RET(0x006d1c78); r_esp += 4; return;
}

void f_006d1cac(void) /* sub_6D1CAC */
{
    FN_ENTER(0x006d1cac);
    /* 006d1cac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1cad: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d1cb0: mov esi, ecx */ r_esi = r_ecx;
    /* 006d1cb2: push dword ptr [esi + 0x603c] */ { u32 v = R32((u32)(r_esi+0x603cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1cb8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1cbdu); f_006dc358();
    /* 006d1cbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d1cbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1cc0: je 0x6d1cc7 */ if (fZ) goto L_006d1cc7;
L_006d1cc2:; BB(0x006d1cc2);
    /* 006d1cc2: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1cc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1cc6: ret  */ FN_RET(0x006d1cac); r_esp += 4; return;
L_006d1cc7:; BB(0x006d1cc7);
    /* 006d1cc7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d1cca: push dword ptr [esi + 0x6040] */ { u32 v = R32((u32)(r_esi+0x6040u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1cd1: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d1cd6u); f_0082c21c();
    /* 006d1cd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1cdb: je 0x6d1d09 */ if (fZ) goto L_006d1d09;
L_006d1cdd:; BB(0x006d1cdd);
    /* 006d1cdd: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1ce2: jne 0x6d1cf3 */ if (!fZ) goto L_006d1cf3;
L_006d1ce4:; BB(0x006d1ce4);
    /* 006d1ce4: mov dword ptr [esi + 0x604c], 0 */ W32((u32)(r_esi+0x604cu), 0x0u);
    /* 006d1cee: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1cf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1cf2: ret  */ FN_RET(0x006d1cac); r_esp += 4; return;
L_006d1cf3:; BB(0x006d1cf3);
    /* 006d1cf3: cmp eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1cf8: jne 0x6d1d31 */ if (!fZ) goto L_006d1d31;
L_006d1cfa:; BB(0x006d1cfa);
    /* 006d1cfa: mov dword ptr [esi + 0x604c], 0 */ W32((u32)(r_esi+0x604cu), 0x0u);
    /* 006d1d04: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1d07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1d08: ret  */ FN_RET(0x006d1cac); r_esp += 4; return;
L_006d1d09:; BB(0x006d1d09);
    /* 006d1d09: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d1d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1d0d: mov ecx, esi */ r_ecx = r_esi;
    /* 006d1d0f: call 0x6d1d38 */ r_esp -= 4; W32(r_esp, 0x6d1d14u); f_006d1d38();
    /* 006d1d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1d16: je 0x6d1d27 */ if (fZ) goto L_006d1d27;
L_006d1d18:; BB(0x006d1d18);
    /* 006d1d18: mov dword ptr [esi + 0x604c], 0 */ W32((u32)(r_esi+0x604cu), 0x0u);
    /* 006d1d22: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1d25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1d26: ret  */ FN_RET(0x006d1cac); r_esp += 4; return;
L_006d1d27:; BB(0x006d1d27);
    /* 006d1d27: mov dword ptr [esi + 0x604c], 2 */ W32((u32)(r_esi+0x604cu), 0x2u);
L_006d1d31:; BB(0x006d1d31);
    /* 006d1d31: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1d34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1d35: ret  */ FN_RET(0x006d1cac); r_esp += 4; return;
}

void f_006d1d38(void) /* sub_6D1D38 */
{
    FN_ENTER(0x006d1d38);
    /* 006d1d38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1d39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1d3a: mov edi, ecx */ r_edi = r_ecx;
    /* 006d1d3c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006d1d40: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1d45u); f_006dc358();
    /* 006d1d45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1d47: jne 0x6d1d4e */ if (!fZ) goto L_006d1d4e;
L_006d1d49:; BB(0x006d1d49);
    /* 006d1d49: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d1d4eu); f_006dc358();
L_006d1d4e:; BB(0x006d1d4e);
    /* 006d1d4e: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d51: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d54: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d1d59: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d1d5e: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d1d63u); f_006be204();
    /* 006d1d63: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d66: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d69: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d1d6eu); f_006be2bc();
    /* 006d1d6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1d73: jne 0x6d1d7a */ if (!fZ) goto L_006d1d7a;
L_006d1d75:; BB(0x006d1d75);
    /* 006d1d75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1d76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1d77: ret 4 */ FN_RET(0x006d1d38); r_esp += 8; return;
L_006d1d7a:; BB(0x006d1d7a);
    /* 006d1d7a: push dword ptr [0xa9619c] */ { u32 v = R32((u32)(0xa9619cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d80: push dword ptr [0xa961a4] */ { u32 v = R32((u32)(0xa961a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d86: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006d1d89: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d8c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006d1d8f: lea esi, [eax + edx + 0x18] */ r_esi = (u32)(r_eax+r_edx+0x18u);
    /* 006d1d93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1d94: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d1d99u); f_005b9b3c();
    /* 006d1d99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1d9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d1d9e: jbe 0x6d1dc1 */ if ((fC||fZ)) goto L_006d1dc1;
L_006d1da0:; BB(0x006d1da0);
    /* 006d1da0: mov esi, dword ptr [0xa961a4] */ r_esi = R32((u32)(0xa961a4u));
    /* 006d1da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1da7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d1da9: mov ecx, edi */ r_ecx = r_edi;
    /* 006d1dab: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6d1daeu); call_ind(t); }
    /* 006d1dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1db0: je 0x6d1f70 */ if (fZ) goto L_006d1f70;
L_006d1db6:; BB(0x006d1db6);
    /* 006d1db6: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1dbc: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d1dbf: jl 0x6d1dc8 */ if ((fS!=fO)) goto L_006d1dc8;
L_006d1dc1:; BB(0x006d1dc1);
    /* 006d1dc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1dc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1dc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1dc5: ret 4 */ FN_RET(0x006d1d38); r_esp += 8; return;
L_006d1dc8:; BB(0x006d1dc8);
    /* 006d1dc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dcc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1dcf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1dd8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1ddc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dde: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1de0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1de2: lea edx, [edi + eax + 0x6064] */ r_edx = (u32)(r_edi+r_eax+0x6064u);
    /* 006d1de9: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 006d1dec: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d1dee: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d1df0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d1df3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d1df6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d1df9: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d1dfc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d1dff: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d1e02: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d1e05: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d1e08: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d1e0b: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d1e0e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d1e11: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006d1e14: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d1e17: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006d1e1a: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1e20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e24: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1e27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e2b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e2d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1e30: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e32: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e34: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e36: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e38: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e3a: lea edx, [edi + eax + 0x60a4] */ r_edx = (u32)(r_edi+r_eax+0x60a4u);
    /* 006d1e41: lea eax, [esi + 0x58] */ r_eax = (u32)(r_esi+0x58u);
    /* 006d1e44: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d1e46: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d1e48: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d1e4b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d1e4e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d1e51: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d1e54: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d1e57: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d1e5a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d1e5d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d1e60: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d1e63: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d1e66: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d1e69: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d1e6c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006d1e6f: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006d1e72: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006d1e75: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006d1e78: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006d1e7b: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006d1e7e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d1e81: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006d1e84: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d1e87: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006d1e8a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d1e8d: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006d1e90: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d1e93: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006d1e96: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d1e99: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006d1e9c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d1e9f: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006d1ea2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006d1ea5: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006d1ea8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006d1eab: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006d1eae: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006d1eb1: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006d1eb4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006d1eb7: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006d1eba: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006d1ebd: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006d1ec0: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006d1ec3: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006d1ec6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006d1ec9: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 006d1ecc: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 006d1ecf: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 006d1ed2: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006d1ed5: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 006d1ed8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006d1edb: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 006d1ede: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006d1ee1: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 006d1ee4: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006d1ee7: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 006d1eea: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 006d1eed: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 006d1ef0: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 006d1ef3: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 006d1ef6: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 006d1ef9: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 006d1efc: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 006d1eff: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 006d1f02: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f07: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1f0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f0f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f11: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1f14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f18: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f1a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1f1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f21: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f23: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f25: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f27: lea edx, [edi + eax + 0x61a4] */ r_edx = (u32)(r_edi+r_eax+0x61a4u);
    /* 006d1f2e: lea eax, [esi + 0x158] */ r_eax = (u32)(r_esi+0x158u);
    /* 006d1f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f36: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6d1f3bu); f_0086b6b8();
    /* 006d1f3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1f3e: movsx esi, byte ptr [esi + 0x14] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+0x14u));
    /* 006d1f42: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1f48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f4c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1f4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f53: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f55: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1f58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f60: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f62: mov dword ptr [eax + edi + 0x63ec], esi */ W32((u32)(r_eax+r_edi+0x63ecu), r_esi);
    /* 006d1f69: add dword ptr [edi + 0x6050], 1 */ { u32 ad = (u32)(r_edi+0x6050u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006d1f70:; BB(0x006d1f70);
    /* 006d1f70: mov eax, 1 */ r_eax = 0x1u;
    /* 006d1f75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1f76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1f77: ret 4 */ FN_RET(0x006d1d38); r_esp += 8; return;
}

void f_006d1d51(void)
{
    FN_ENTER(0x006d1d51);
    /* 006d1d51: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d54: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d1d59: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d1d5e: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d1d63u); f_006be204();
    /* 006d1d63: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d66: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d69: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d1d6eu); f_006be2bc();
    /* 006d1d6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1d73: jne 0x6d1d7a */ if (!fZ) goto L_006d1d7a;
L_006d1d75:; BB(0x006d1d75);
    /* 006d1d75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1d76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1d77: ret 4 */ FN_RET(0x006d1d51); r_esp += 8; return;
L_006d1d7a:; BB(0x006d1d7a);
    /* 006d1d7a: push dword ptr [0xa9619c] */ { u32 v = R32((u32)(0xa9619cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d80: push dword ptr [0xa961a4] */ { u32 v = R32((u32)(0xa961a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d86: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006d1d89: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d1d8c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006d1d8f: lea esi, [eax + edx + 0x18] */ r_esi = (u32)(r_eax+r_edx+0x18u);
    /* 006d1d93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1d94: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d1d99u); f_005b9b3c();
    /* 006d1d99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1d9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d1d9e: jbe 0x6d1dc1 */ if ((fC||fZ)) goto L_006d1dc1;
L_006d1da0:; BB(0x006d1da0);
    /* 006d1da0: mov esi, dword ptr [0xa961a4] */ r_esi = R32((u32)(0xa961a4u));
    /* 006d1da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1da7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d1da9: mov ecx, edi */ r_ecx = r_edi;
    /* 006d1dab: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6d1daeu); call_ind(t); }
    /* 006d1dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1db0: je 0x6d1f70 */ if (fZ) goto L_006d1f70;
L_006d1db6:; BB(0x006d1db6);
    /* 006d1db6: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1dbc: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d1dbf: jl 0x6d1dc8 */ if ((fS!=fO)) goto L_006d1dc8;
L_006d1dc1:; BB(0x006d1dc1);
    /* 006d1dc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d1dc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1dc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1dc5: ret 4 */ FN_RET(0x006d1d51); r_esp += 8; return;
L_006d1dc8:; BB(0x006d1dc8);
    /* 006d1dc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dcc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1dcf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1dd5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1dd8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1ddc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1dde: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1de0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1de2: lea edx, [edi + eax + 0x6064] */ r_edx = (u32)(r_edi+r_eax+0x6064u);
    /* 006d1de9: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 006d1dec: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d1dee: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d1df0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d1df3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d1df6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d1df9: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d1dfc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d1dff: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d1e02: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d1e05: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d1e08: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d1e0b: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d1e0e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d1e11: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006d1e14: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d1e17: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006d1e1a: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1e20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e24: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1e27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e2b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1e2d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1e30: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e32: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e34: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e36: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e38: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1e3a: lea edx, [edi + eax + 0x60a4] */ r_edx = (u32)(r_edi+r_eax+0x60a4u);
    /* 006d1e41: lea eax, [esi + 0x58] */ r_eax = (u32)(r_esi+0x58u);
    /* 006d1e44: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006d1e46: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006d1e48: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006d1e4b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006d1e4e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006d1e51: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006d1e54: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006d1e57: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006d1e5a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006d1e5d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006d1e60: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006d1e63: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006d1e66: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006d1e69: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006d1e6c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006d1e6f: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006d1e72: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006d1e75: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006d1e78: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006d1e7b: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006d1e7e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d1e81: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006d1e84: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d1e87: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006d1e8a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d1e8d: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006d1e90: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006d1e93: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006d1e96: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006d1e99: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006d1e9c: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d1e9f: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006d1ea2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006d1ea5: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006d1ea8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006d1eab: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006d1eae: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006d1eb1: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006d1eb4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006d1eb7: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006d1eba: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006d1ebd: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006d1ec0: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006d1ec3: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006d1ec6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006d1ec9: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 006d1ecc: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 006d1ecf: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 006d1ed2: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 006d1ed5: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 006d1ed8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 006d1edb: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 006d1ede: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 006d1ee1: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 006d1ee4: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006d1ee7: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 006d1eea: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 006d1eed: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 006d1ef0: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 006d1ef3: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 006d1ef6: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 006d1ef9: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 006d1efc: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 006d1eff: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 006d1f02: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f07: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1f0d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f0f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f11: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1f14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f18: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f1a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1f1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f21: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f23: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f25: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f27: lea edx, [edi + eax + 0x61a4] */ r_edx = (u32)(r_edi+r_eax+0x61a4u);
    /* 006d1f2e: lea eax, [esi + 0x158] */ r_eax = (u32)(r_esi+0x158u);
    /* 006d1f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f36: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6d1f3bu); f_0086b6b8();
    /* 006d1f3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1f3e: movsx esi, byte ptr [esi + 0x14] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+0x14u));
    /* 006d1f42: mov eax, dword ptr [edi + 0x6050] */ r_eax = R32((u32)(r_edi+0x6050u));
    /* 006d1f48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f4c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d1f4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f53: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d1f55: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d1f58: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f5e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f60: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d1f62: mov dword ptr [eax + edi + 0x63ec], esi */ W32((u32)(r_eax+r_edi+0x63ecu), r_esi);
    /* 006d1f69: add dword ptr [edi + 0x6050], 1 */ { u32 ad = (u32)(r_edi+0x6050u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006d1f70:; BB(0x006d1f70);
    /* 006d1f70: mov eax, 1 */ r_eax = 0x1u;
    /* 006d1f75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d1f76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1f77: ret 4 */ FN_RET(0x006d1d51); r_esp += 8; return;
}

void f_006d1f7c(void) /* sub_6D1F7C */
{
    FN_ENTER(0x006d1f7c);
    /* 006d1f7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1f7e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d1f81: mov edi, ecx */ r_edi = r_ecx;
    /* 006d1f83: mov ecx, dword ptr [edi + 0x14758] */ r_ecx = R32((u32)(r_edi+0x14758u));
    /* 006d1f89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1f8b: je 0x6d1fa5 */ if (fZ) goto L_006d1fa5;
L_006d1f8d:; BB(0x006d1f8d);
    /* 006d1f8d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d1f94: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d1f96: je 0x6d1fa5 */ if (fZ) goto L_006d1fa5;
L_006d1f98:; BB(0x006d1f98);
    /* 006d1f98: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 006d1f9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d1fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d1fa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d1fa4: ret  */ FN_RET(0x006d1f7c); r_esp += 4; return;
L_006d1fa5:; BB(0x006d1fa5);
    /* 006d1fa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d1fa7: je 0x6d20d1 */ if (fZ) goto L_006d20d1;
L_006d1fad:; BB(0x006d1fad);
    /* 006d1fad: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d1fb4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d1fb6: je 0x6d20d1 */ if (fZ) goto L_006d20d1;
L_006d1fbc:; BB(0x006d1fbc);
    /* 006d1fbc: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d1fc1u); f_00737d90();
    /* 006d1fc1: mov ebx, eax */ r_ebx = r_eax;
    /* 006d1fc3: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d1fca: mov dword ptr [edi + 0x14754], ebx */ W32((u32)(r_edi+0x14754u), r_ebx);
    /* 006d1fd0: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006d1fd8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1fda: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d1fdfu); f_0073ec50();
    /* 006d1fdf: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d1fe3: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d1fe6: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d1fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1feb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1fed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d1fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d1fef: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6d1ff4u); f_0073aa40();
    /* 006d1ff4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d1ff7: mov dword ptr [edi + 0x14764], eax */ W32((u32)(r_edi+0x14764u), r_eax);
    /* 006d1ffd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d1fff: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2001: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2003: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d2006: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2008: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d200a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d200c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006d200f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2011: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2013: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2015: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2017: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2019: lea edx, [edi + ebx + 0x61a4] */ r_edx = (u32)(r_edi+r_ebx+0x61a4u);
    /* 006d2020: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2023: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d2028u); f_0073ae38();
    /* 006d2028: mov ecx, dword ptr [edi + 0x14764] */ r_ecx = R32((u32)(r_edi+0x14764u));
    /* 006d202e: push 0xc64b2000 */ { u32 v = 0xc64b2000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2033: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6d2038u); f_00712624();
    /* 006d2038: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006d203d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2040: jl 0x6d2057 */ if ((fS!=fO)) goto L_006d2057;
L_006d2042:; BB(0x006d2042);
    /* 006d2042: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2047: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d204c: mov ecx, dword ptr [edi + 0x14764] */ r_ecx = R32((u32)(r_edi+0x14764u));
    /* 006d2052: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d2057u); f_0070f5a4();
L_006d2057:; BB(0x006d2057);
    /* 006d2057: mov ecx, dword ptr [edi + 0x1475c] */ r_ecx = R32((u32)(r_edi+0x1475cu));
    /* 006d205d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d205f: je 0x6d2070 */ if (fZ) goto L_006d2070;
L_006d2061:; BB(0x006d2061);
    /* 006d2061: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d2066u); f_007127b0();
    /* 006d2066: mov dword ptr [edi + 0x1475c], 0 */ W32((u32)(r_edi+0x1475cu), 0x0u);
L_006d2070:; BB(0x006d2070);
    /* 006d2070: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d2072: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d2077u); f_0073ec50();
    /* 006d2077: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d207a: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d207e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d207f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2080: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d2085u); f_00735884();
    /* 006d2085: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2088: mov dword ptr [edi + 0x1475c], eax */ W32((u32)(r_edi+0x1475cu), r_eax);
    /* 006d208e: mov ecx, edi */ r_ecx = r_edi;
    /* 006d2090: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d2095u); f_006dc8d8();
    /* 006d2095: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006d2099: mov ecx, edi */ r_ecx = r_edi;
    /* 006d209b: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d20a0u); f_006dc8d8();
    /* 006d20a0: mov ecx, dword ptr [edi + 0x1475c] */ r_ecx = R32((u32)(r_edi+0x1475cu));
    /* 006d20a6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d20a9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006d20ad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d20b0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d20b4: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d20b9u); f_0070f5a4();
    /* 006d20b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d20bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d20bd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d20bf: mov ecx, edi */ r_ecx = r_edi;
    /* 006d20c1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d20c4u); call_ind(t); }
    /* 006d20c4: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d20cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d20ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d20cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d20d0: ret  */ FN_RET(0x006d1f7c); r_esp += 4; return;
L_006d20d1:; BB(0x006d20d1);
    /* 006d20d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d20d3: je 0x6d2140 */ if (fZ) goto L_006d2140;
L_006d20d5:; BB(0x006d20d5);
    /* 006d20d5: mov eax, dword ptr [edi + 0x14760] */ r_eax = R32((u32)(r_edi+0x14760u));
    /* 006d20db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d20dd: je 0x6d2140 */ if (fZ) goto L_006d2140;
L_006d20df:; BB(0x006d20df);
    /* 006d20df: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d20e4u); f_00737d90();
    /* 006d20e4: mov ebx, eax */ r_ebx = r_eax;
    /* 006d20e6: cmp ebx, dword ptr [edi + 0x6048] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x6048u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d20ec: je 0x6d2140 */ if (fZ) goto L_006d2140;
L_006d20ee:; BB(0x006d20ee);
    /* 006d20ee: mov ecx, dword ptr [edi + 0x14760] */ r_ecx = R32((u32)(r_edi+0x14760u));
    /* 006d20f4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d20f9: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d20fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d20fe: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d2101: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2103: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2105: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d2107: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d210a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d210c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d210e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2110: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2112: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2114: lea edx, [edi + edx + 0x60a4] */ r_edx = (u32)(r_edi+r_edx+0x60a4u);
    /* 006d211b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d211c: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d2121u); f_0073ae38();
    /* 006d2121: mov ecx, dword ptr [edi + 0x14764] */ r_ecx = R32((u32)(r_edi+0x14764u));
    /* 006d2127: mov dword ptr [edi + 0x6048], ebx */ W32((u32)(r_edi+0x6048u), r_ebx);
    /* 006d212d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d212f: je 0x6d2140 */ if (fZ) goto L_006d2140;
L_006d2131:; BB(0x006d2131);
    /* 006d2131: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d2136u); f_007127b0();
    /* 006d2136: mov dword ptr [edi + 0x14764], 0 */ W32((u32)(r_edi+0x14764u), 0x0u);
L_006d2140:; BB(0x006d2140);
    /* 006d2140: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2143: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2144: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2145: ret  */ FN_RET(0x006d1f7c); r_esp += 4; return;
}

