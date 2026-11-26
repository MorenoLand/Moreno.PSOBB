#include "protos.h"

void f_0051e028(void) /* sub_51E028 */
{
    FN_ENTER(0x0051e028);
    /* 0051e028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e029: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e02c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051e02e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0051e032: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e035: je 0x51e08a */ if (fZ) goto L_0051e08a;
L_0051e037:; BB(0x0051e037);
    /* 0051e037: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e03a: je 0x51e072 */ if (fZ) goto L_0051e072;
L_0051e03c:; BB(0x0051e03c);
    /* 0051e03c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e03e: jne 0x51e083 */ if (!fZ) goto L_0051e083;
L_0051e040:; BB(0x0051e040);
    /* 0051e040: add dword ptr [ebp + 0x424], -1 */ { u32 ad = (u32)(r_ebp+0x424u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051e047: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e049: call 0x51b1ac */ r_esp -= 4; W32(r_esp, 0x51e04eu); f_0051b1ac();
    /* 0051e04e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e050: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51e055u); f_007aa094();
    /* 0051e055: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e058: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e05a: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51e060u); call_ind(t); }
    /* 0051e060: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e063: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e065: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51e06bu); call_ind(t); }
    /* 0051e06b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e06e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e06f: ret 4 */ FN_RET(0x0051e028); r_esp += 8; return;
L_0051e072:; BB(0x0051e072);
    /* 0051e072: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 0051e078: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051e07a: jg 0x51e083 */ if ((!fZ&&fS==fO)) goto L_0051e083;
L_0051e07c:; BB(0x0051e07c);
    /* 0051e07c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e07e: call 0x51e0e8 */ r_esp -= 4; W32(r_esp, 0x51e083u); f_0051e0e8();
L_0051e083:; BB(0x0051e083);
    /* 0051e083: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e087: ret 4 */ FN_RET(0x0051e028); r_esp += 8; return;
L_0051e08a:; BB(0x0051e08a);
    /* 0051e08a: mov eax, 4 */ r_eax = 0x4u;
    /* 0051e08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e090: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051e097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e099: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51e09eu); f_0051f664();
    /* 0051e09e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e0a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e0a3: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51e0a9u); call_ind(t); }
    /* 0051e0a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e0ab: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51e0b0u); f_007751b0();
    /* 0051e0b0: fld dword ptr [0x921208] */ FPUSH(R_F32((u32)(0x921208u)));
    /* 0051e0b6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e0b8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051e0bb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051e0bf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051e0c4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051e0c8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051e0cc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051e0d0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051e0d3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051e0d7: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e0da: mov dword ptr [ebp + 0x424], eax */ W32((u32)(r_ebp+0x424u), r_eax);
    /* 0051e0e0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e0e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e0e4: ret 4 */ FN_RET(0x0051e028); r_esp += 8; return;
}

void f_0051e0e8(void) /* sub_51E0E8 */
{
    FN_ENTER(0x0051e0e8);
    /* 0051e0e8: mov eax, dword ptr [ecx + 0x3e0] */ r_eax = R32((u32)(r_ecx+0x3e0u));
    /* 0051e0ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e0f0: je 0x51e0fa */ if (fZ) goto L_0051e0fa;
L_0051e0f2:; BB(0x0051e0f2);
    /* 0051e0f2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0f4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e0f9u); f_0051f62c();
    /* 0051e0f9: ret  */ FN_RET(0x0051e0e8); r_esp += 4; return;
L_0051e0fa:; BB(0x0051e0fa);
    /* 0051e0fa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0fc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e101u); f_0051f62c();
    /* 0051e101: ret  */ FN_RET(0x0051e0e8); r_esp += 4; return;
}

void f_0051e104(void) /* sub_51E104 */
{
    FN_ENTER(0x0051e104);
    /* 0051e104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e105: mov edi, ecx */ r_edi = r_ecx;
    /* 0051e107: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051e10b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e10e: je 0x51e1a7 */ if (fZ) goto L_0051e1a7;
L_0051e114:; BB(0x0051e114);
    /* 0051e114: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e117: je 0x51e15b */ if (fZ) goto L_0051e15b;
L_0051e119:; BB(0x0051e119);
    /* 0051e119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e11b: jne 0x51e143 */ if (!fZ) goto L_0051e143;
L_0051e11d:; BB(0x0051e11d);
    /* 0051e11d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e11f: call 0x51b1ac */ r_esp -= 4; W32(r_esp, 0x51e124u); f_0051b1ac();
    /* 0051e124: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e126: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51e12bu); f_007aa094();
    /* 0051e12b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051e12d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e12f: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51e135u); call_ind(t); }
    /* 0051e135: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051e137: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e139: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51e13fu); call_ind(t); }
    /* 0051e13f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e140: ret 4 */ FN_RET(0x0051e104); r_esp += 8; return;
L_0051e143:; BB(0x0051e143);
    /* 0051e143: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051e146: jne 0x51e1a3 */ if (!fZ) goto L_0051e1a3;
L_0051e148:; BB(0x0051e148);
    /* 0051e148: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0051e14e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e151: mov dword ptr [edi + 0x410], eax */ W32((u32)(r_edi+0x410u), r_eax);
    /* 0051e157: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e158: ret 4 */ FN_RET(0x0051e104); r_esp += 8; return;
L_0051e15b:; BB(0x0051e15b);
    /* 0051e15b: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0051e161: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051e163: jne 0x51e19a */ if (!fZ) goto L_0051e19a;
L_0051e165:; BB(0x0051e165);
    /* 0051e165: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0051e16b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e16d: je 0x51e1a3 */ if (fZ) goto L_0051e1a3;
L_0051e16f:; BB(0x0051e16f);
    /* 0051e16f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e171: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x51e176u); f_005213d8();
    /* 0051e176: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e178: call 0x51e0e8 */ r_esp -= 4; W32(r_esp, 0x51e17du); f_0051e0e8();
    /* 0051e17d: movzx eax, word ptr [edi + 0x3e8] */ r_eax = (u32)R16((u32)(r_edi+0x3e8u));
    /* 0051e184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e185: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51e18au); f_007b4d18();
    /* 0051e18a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051e18b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e18d: je 0x51e1a3 */ if (fZ) goto L_0051e1a3;
L_0051e18f:; BB(0x0051e18f);
    /* 0051e18f: mov ecx, eax */ r_ecx = r_eax;
    /* 0051e191: call 0x51e1ec */ r_esp -= 4; W32(r_esp, 0x51e196u); f_0051e1ec();
    /* 0051e196: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e197: ret 4 */ FN_RET(0x0051e104); r_esp += 8; return;
L_0051e19a:; BB(0x0051e19a);
    /* 0051e19a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e19c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e19e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e1a3u); f_0051f62c();
L_0051e1a3:; BB(0x0051e1a3);
    /* 0051e1a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e1a4: ret 4 */ FN_RET(0x0051e104); r_esp += 8; return;
L_0051e1a7:; BB(0x0051e1a7);
    /* 0051e1a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1a9: mov eax, 4 */ r_eax = 0x4u;
    /* 0051e1ae: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051e1b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e1b7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51e1bcu); f_0051f664();
    /* 0051e1bc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051e1be: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e1c0: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51e1c6u); call_ind(t); }
    /* 0051e1c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e1c8: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x51e1cdu); f_00520f68();
    /* 0051e1cd: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0051e1d3: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 0051e1dd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e1e0: mov dword ptr [edi + 0x410], eax */ W32((u32)(r_edi+0x410u), r_eax);
    /* 0051e1e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e1e7: ret 4 */ FN_RET(0x0051e104); r_esp += 8; return;
}

void f_0051e1ec(void) /* sub_51E1EC */
{
    FN_ENTER(0x0051e1ec);
    /* 0051e1ec: mov eax, dword ptr [ecx + 0x410] */ r_eax = R32((u32)(r_ecx+0x410u));
    /* 0051e1f2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e1f5: mov dword ptr [ecx + 0x410], eax */ W32((u32)(r_ecx+0x410u), r_eax);
    /* 0051e1fb: ret  */ FN_RET(0x0051e1ec); r_esp += 4; return;
}

void f_0051e1fc(void) /* sub_51E1FC */
{
    FN_ENTER(0x0051e1fc);
    /* 0051e1fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e1fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051e1ff: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051e203: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e206: je 0x51e3af */ if (fZ) goto L_0051e3af;
L_0051e20c:; BB(0x0051e20c);
    /* 0051e20c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e20f: je 0x51e380 */ if (fZ) goto L_0051e380;
L_0051e215:; BB(0x0051e215);
    /* 0051e215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e217: jne 0x51e36d */ if (!fZ) goto L_0051e36d;
L_0051e21d:; BB(0x0051e21d);
    /* 0051e21d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e21f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51e224u); f_007aa094();
    /* 0051e224: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0051e22a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051e22c: jne 0x51e353 */ if (!fZ) goto L_0051e353;
L_0051e232:; BB(0x0051e232);
    /* 0051e232: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e237: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e239: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51e23eu); f_007aaa30();
    /* 0051e23e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e240: jne 0x51e252 */ if (!fZ) goto L_0051e252;
L_0051e242:; BB(0x0051e242);
    /* 0051e242: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e247: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e249: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51e24eu); f_007aaa30();
    /* 0051e24e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e250: je 0x51e263 */ if (fZ) goto L_0051e263;
L_0051e252:; BB(0x0051e252);
    /* 0051e252: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e257: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051e25a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e25b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51e260u); f_0050b510();
    /* 0051e260: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e263:; BB(0x0051e263);
    /* 0051e263: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e268: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e26a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51e26fu); f_007aaa30();
    /* 0051e26f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e271: je 0x51e292 */ if (fZ) goto L_0051e292;
L_0051e273:; BB(0x0051e273);
    /* 0051e273: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e278: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e27a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51e27fu); f_007879b8();
    /* 0051e27f: mov ecx, eax */ r_ecx = r_eax;
    /* 0051e281: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051e284: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051e286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e287: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e289: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e28a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51e28fu); f_00814298();
    /* 0051e28f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e292:; BB(0x0051e292);
    /* 0051e292: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e297: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e299: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51e29eu); f_007aaa30();
    /* 0051e29e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e2a0: je 0x51e2cb */ if (fZ) goto L_0051e2cb;
L_0051e2a2:; BB(0x0051e2a2);
    /* 0051e2a2: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e2a9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51e2aeu); f_007879b8();
    /* 0051e2ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0051e2b0: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051e2b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051e2b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2b9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51e2beu); f_00814298();
    /* 0051e2be: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e2c3: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51e2c8u); f_00814680();
    /* 0051e2c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e2cb:; BB(0x0051e2cb);
    /* 0051e2cb: fld dword ptr [0xa72dfc] */ FPUSH(R_F32((u32)(0xa72dfcu)));
    /* 0051e2d1: fld dword ptr [0xa72dfc] */ FPUSH(R_F32((u32)(0xa72dfcu)));
    /* 0051e2d7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051e2d9: fdivr dword ptr [0x9211f0] */ ST(0) = R_F32((u32)(0x9211f0u)) / ST(0);
    /* 0051e2df: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0051e2e5: fcom dword ptr [0x9212f4] */ fx_compare(ST(0), R_F32((u32)(0x9212f4u))); 
    /* 0051e2eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051e2ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051e2ee: ja 0x51e30f */ if ((!fC&&!fZ)) goto L_0051e30f;
L_0051e2f0:; BB(0x0051e2f0);
    /* 0051e2f0: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0051e2f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051e2f4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051e2f6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e2f8: fadd dword ptr [0x9212f0] */ ST(0) = ST(0) + R_F32((u32)(0x9212f0u));
    /* 0051e2fe: fadd dword ptr [ebp + 0x440] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x440u));
    /* 0051e304: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0051e307: fstp dword ptr [ebp + 0x414] */ W_F32((u32)(r_ebp+0x414u), ST(0)); FPOP();
    /* 0051e30d: jmp 0x51e327 */ goto L_0051e327;
L_0051e30f:; BB(0x0051e30f);
    /* 0051e30f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0051e311: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051e313: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051e315: fld dword ptr [ebp + 0x43c] */ FPUSH(R_F32((u32)(r_ebp+0x43cu)));
    /* 0051e31b: fmul dword ptr [0x9211ec] */ ST(0) = ST(0) * R_F32((u32)(0x9211ecu));
    /* 0051e321: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
L_0051e327:; BB(0x0051e327);
    /* 0051e327: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051e32a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51e32fu); f_0082dcbc();
    /* 0051e32f: fld dword ptr [ebp + 0x43c] */ FPUSH(R_F32((u32)(r_ebp+0x43cu)));
    /* 0051e335: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e337: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0051e33a: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051e33d: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0051e340: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51e345u); f_0082ddd8();
    /* 0051e345: fld dword ptr [ebp + 0x43c] */ FPUSH(R_F32((u32)(r_ebp+0x43cu)));
    /* 0051e34b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e34d: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0051e350: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
L_0051e353:; BB(0x0051e353);
    /* 0051e353: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e356: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e358: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51e35eu); call_ind(t); }
    /* 0051e35e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e361: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e363: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51e369u); call_ind(t); }
    /* 0051e369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e36a: ret 4 */ FN_RET(0x0051e1fc); r_esp += 8; return;
L_0051e36d:; BB(0x0051e36d);
    /* 0051e36d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051e370: jne 0x51e3ab */ if (!fZ) goto L_0051e3ab;
L_0051e372:; BB(0x0051e372);
    /* 0051e372: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0051e37c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e37d: ret 4 */ FN_RET(0x0051e1fc); r_esp += 8; return;
L_0051e380:; BB(0x0051e380);
    /* 0051e380: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0051e386: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e388: je 0x51e3ab */ if (fZ) goto L_0051e3ab;
L_0051e38a:; BB(0x0051e38a);
    /* 0051e38a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e38c: call 0x51c550 */ r_esp -= 4; W32(r_esp, 0x51e391u); f_0051c550();
    /* 0051e391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e393: je 0x51e3a2 */ if (fZ) goto L_0051e3a2;
L_0051e395:; BB(0x0051e395);
    /* 0051e395: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e397: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e399: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e39eu); f_0051f62c();
    /* 0051e39e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e39f: ret 4 */ FN_RET(0x0051e1fc); r_esp += 8; return;
L_0051e3a2:; BB(0x0051e3a2);
    /* 0051e3a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e3a6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e3abu); f_0051f62c();
L_0051e3ab:; BB(0x0051e3ab);
    /* 0051e3ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e3ac: ret 4 */ FN_RET(0x0051e1fc); r_esp += 8; return;
L_0051e3af:; BB(0x0051e3af);
    /* 0051e3af: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e3b1: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0051e3b6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051e3bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e3bf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51e3c4u); f_0051f664();
    /* 0051e3c4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e3c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e3c9: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51e3cfu); call_ind(t); }
    /* 0051e3cf: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0051e3d5: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051e3d8: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051e3db: mov dword ptr [ebp + 0x410], eax */ W32((u32)(r_ebp+0x410u), r_eax);
    /* 0051e3e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e3e3: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x51e3e8u); f_00520f68();
    /* 0051e3e8: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0051e3eb: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0051e3ee: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051e3f1: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0051e3f7: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0051e3fa: mov dword ptr [ebp + 0x450], edx */ W32((u32)(r_ebp+0x450u), r_edx);
    /* 0051e400: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 0051e40a: mov dword ptr [ebp + 0x454], eax */ W32((u32)(r_ebp+0x454u), r_eax);
    /* 0051e410: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51e415u); f_0082dcbc();
    /* 0051e415: fld dword ptr [0x9211e8] */ FPUSH(R_F32((u32)(0x9211e8u)));
    /* 0051e41b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e41d: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0051e420: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0051e423: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0051e426: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51e42bu); f_0082ddd8();
    /* 0051e42b: fld dword ptr [0x9211e8] */ FPUSH(R_F32((u32)(0x9211e8u)));
    /* 0051e431: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0051e434: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051e436: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0051e439: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0051e43c: mov dword ptr [ebp + 0x43c], 0x40555555 */ W32((u32)(r_ebp+0x43cu), 0x40555555u);
    /* 0051e446: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0051e44c: mov dword ptr [ebp + 0x414], 0 */ W32((u32)(r_ebp+0x414u), 0x0u);
    /* 0051e456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e457: ret 4 */ FN_RET(0x0051e1fc); r_esp += 8; return;
}

void f_0051e45c(void) /* sub_51E45C */
{
    FN_ENTER(0x0051e45c);
    /* 0051e45c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e45d: mov esi, ecx */ r_esi = r_ecx;
    /* 0051e45f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x51e464u); f_004f7c84();
    /* 0051e464: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e466: je 0x51e474 */ if (fZ) goto L_0051e474;
L_0051e468:; BB(0x0051e468);
    /* 0051e468: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e46a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e46c: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x51e472u); call_ind(t); }
    /* 0051e472: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e473: ret  */ FN_RET(0x0051e45c); r_esp += 4; return;
L_0051e474:; BB(0x0051e474);
    /* 0051e474: movzx eax, word ptr [esi + 0x3e8] */ r_eax = (u32)R16((u32)(r_esi+0x3e8u));
    /* 0051e47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e47c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51e481u); f_007b4d18();
    /* 0051e481: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051e482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e484: je 0x51e48d */ if (fZ) goto L_0051e48d;
L_0051e486:; BB(0x0051e486);
    /* 0051e486: mov ecx, eax */ r_ecx = r_eax;
    /* 0051e488: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51e48du); f_008173b4();
L_0051e48d:; BB(0x0051e48d);
    /* 0051e48d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e48f: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e491: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x51e497u); call_ind(t); }
    /* 0051e497: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e49a: je 0x51e4ef */ if (fZ) goto L_0051e4ef;
L_0051e49c:; BB(0x0051e49c);
    /* 0051e49c: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 0051e4a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e4a4: je 0x51e4cb */ if (fZ) goto L_0051e4cb;
L_0051e4a6:; BB(0x0051e4a6);
    /* 0051e4a6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0051e4a9: mov dword ptr [esi + 0x41c], eax */ W32((u32)(r_esi+0x41cu), r_eax);
    /* 0051e4af: jne 0x51e4cb */ if (!fZ) goto L_0051e4cb;
L_0051e4b1:; BB(0x0051e4b1);
    /* 0051e4b1: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051e4b8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e4bb: je 0x51e4cb */ if (fZ) goto L_0051e4cb;
L_0051e4bd:; BB(0x0051e4bd);
    /* 0051e4bd: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e4c0: je 0x51e4cb */ if (fZ) goto L_0051e4cb;
L_0051e4c2:; BB(0x0051e4c2);
    /* 0051e4c2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e4c4: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e4c6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e4cbu); f_0051f62c();
L_0051e4cb:; BB(0x0051e4cb);
    /* 0051e4cb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e4cd: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e4cf: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x51e4d5u); call_ind(t); }
L_0051e4d5:; BB(0x0051e4d5);
    /* 0051e4d5: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e4d7: call 0x51b72c */ r_esp -= 4; W32(r_esp, 0x51e4dcu); f_0051b72c();
    /* 0051e4dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e4de: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x51e4e3u); f_006401f0();
    /* 0051e4e3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e4e5: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e4e7: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x51e4edu); call_ind(t); }
    /* 0051e4ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e4ee: ret  */ FN_RET(0x0051e45c); r_esp += 4; return;
L_0051e4ef:; BB(0x0051e4ef);
    /* 0051e4ef: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051e4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e4f8: je 0x51e501 */ if (fZ) goto L_0051e501;
L_0051e4fa:; BB(0x0051e4fa);
    /* 0051e4fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e4fd: je 0x51e50d */ if (fZ) goto L_0051e50d;
L_0051e4ff:; BB(0x0051e4ff);
    /* 0051e4ff: jmp 0x51e4d5 */ goto L_0051e4d5;
L_0051e501:; BB(0x0051e501);
    /* 0051e501: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e503: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e505: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x51e50bu); call_ind(t); }
    /* 0051e50b: jmp 0x51e4d5 */ goto L_0051e4d5;
L_0051e50d:; BB(0x0051e50d);
    /* 0051e50d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e50f: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0051e512: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 0051e515: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0051e518: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0051e51b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0051e51e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0051e521: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e523: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e528u); f_0051f62c();
    /* 0051e528: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e52a: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e52c: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x51e532u); call_ind(t); }
    /* 0051e532: jmp 0x51e4d5 */ goto L_0051e4d5;
}

void f_0051e534(void) /* sub_51E534 */
{
    FN_ENTER(0x0051e534);
    /* 0051e534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e535: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e536: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e537: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e53a: mov esi, ecx */ r_esi = r_ecx;
    /* 0051e53c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x51e541u); f_004f7c84();
    /* 0051e541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e543: jne 0x51e70c */ if (!fZ) goto L_0051e70c;
L_0051e549:; BB(0x0051e549);
    /* 0051e549: mov eax, dword ptr [esi + 0x410] */ r_eax = R32((u32)(r_esi+0x410u));
    /* 0051e54f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051e551: jne 0x51e705 */ if (!fZ) goto L_0051e705;
L_0051e557:; BB(0x0051e557);
    /* 0051e557: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051e55e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e561: je 0x51e705 */ if (fZ) goto L_0051e705;
L_0051e567:; BB(0x0051e567);
    /* 0051e567: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x51e56cu); f_00694cc8();
    /* 0051e56c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e56e: je 0x51e593 */ if (fZ) goto L_0051e593;
L_0051e570:; BB(0x0051e570);
    /* 0051e570: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e575: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e577: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e579: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051e57f: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051e585: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x51e588u); call_ind(t); }
    /* 0051e588: mov ebp, eax */ r_ebp = r_eax;
    /* 0051e58a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e58c: jne 0x51e5b1 */ if (!fZ) goto L_0051e5b1;
L_0051e58e:; BB(0x0051e58e);
    /* 0051e58e: jmp 0x51e700 */ goto L_0051e700;
L_0051e593:; BB(0x0051e593);
    /* 0051e593: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e598: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e59a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e59c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5a1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x51e5a4u); call_ind(t); }
    /* 0051e5a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e5a6: je 0x51e700 */ if (fZ) goto L_0051e700;
L_0051e5ac:; BB(0x0051e5ac);
    /* 0051e5ac: mov ebp, 1 */ r_ebp = 0x1u;
L_0051e5b1:; BB(0x0051e5b1);
    /* 0051e5b1: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051e5b8: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e5bb: je 0x51e658 */ if (fZ) goto L_0051e658;
L_0051e5c1:; BB(0x0051e5c1);
    /* 0051e5c1: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0051e5c4: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0051e5c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5c9: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 0051e5cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5d1: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x51e5d6u); f_007a8d98();
    /* 0051e5d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e5d9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51e5deu); f_0082d7b0();
    /* 0051e5de: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051e5e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e5e3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51e5e8u); f_0082d838();
    /* 0051e5e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5ea: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e5f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5f3: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51e5f8u); f_00830b74();
    /* 0051e5f8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0051e5fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e5fe: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x51e603u); f_00830c04();
    /* 0051e603: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0051e606: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e608: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51e60du); f_0082e9e4();
    /* 0051e60d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0051e610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e612: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51e617u); f_0082d8bc();
    /* 0051e617: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e61c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e61e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e620: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e622: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51e627u); f_00830b74();
    /* 0051e627: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e62c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e631: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0051e636: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e638: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x51e63du); f_0082fa0c();
    /* 0051e63d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e63f: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0051e644: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51e649u); f_0082e9e4();
    /* 0051e649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e64b: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x51e650u); f_0052d46c();
    /* 0051e650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051e651: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51e656u); f_0082da80();
    /* 0051e656: jmp 0x51e65b */ goto L_0051e65b;
L_0051e658:; BB(0x0051e658);
    /* 0051e658: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
L_0051e65b:; BB(0x0051e65b);
    /* 0051e65b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e65d: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x51e662u); f_00520608();
    /* 0051e662: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0051e665: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51e66au); f_00829cc8();
    /* 0051e66a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51e66fu); f_0082d7b0();
    /* 0051e66f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051e671: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51e676u); f_0082d838();
    /* 0051e676: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0051e679: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e67b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51e680u); f_0082d8bc();
    /* 0051e680: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e687: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e68b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51e690u); f_00830b74();
    /* 0051e690: mov edx, dword ptr [esi + 0x410] */ r_edx = R32((u32)(r_esi+0x410u));
    /* 0051e696: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051e699: je 0x51e6ac */ if (fZ) goto L_0051e6ac;
L_0051e69b:; BB(0x0051e69b);
    /* 0051e69b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e69d: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051e6a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e6a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6a7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51e6acu); f_00830b74();
L_0051e6ac:; BB(0x0051e6ac);
    /* 0051e6ac: mov edi, dword ptr [esi + 0x3ec] */ r_edi = R32((u32)(r_esi+0x3ecu));
    /* 0051e6b2: mov dword ptr [0xa72e54], 0 */ W32((u32)(0xa72e54u), 0x0u);
    /* 0051e6bc: mov edx, edi */ r_edx = r_edi;
    /* 0051e6be: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0051e6c1: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051e6c3: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0051e6c5: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0051e6c7: mov dword ptr [0xa72e50], edi */ W32((u32)(0xa72e50u), r_edi);
    /* 0051e6cd: mov ecx, 0x51b180 */ r_ecx = 0x51b180u;
    /* 0051e6d2: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x51e6d7u); f_0082fac4();
    /* 0051e6d7: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x51e6dcu); f_00520d08();
    /* 0051e6dc: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x51e6e1u); f_00578b38();
    /* 0051e6e1: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e6e4: je 0x51e71d */ if (fZ) goto L_0051e71d;
L_0051e6e6:; BB(0x0051e6e6);
    /* 0051e6e6: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e6e8: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x51e6edu); f_007aa7b8();
L_0051e6ed:; BB(0x0051e6ed);
    /* 0051e6ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e6ef: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x51e6f4u); f_0082fac4();
    /* 0051e6f4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51e6f9u); f_0082da80();
    /* 0051e6f9: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e6fb: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x51e700u); f_00520610();
L_0051e700:; BB(0x0051e700);
    /* 0051e700: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x51e705u); f_0082dab0();
L_0051e705:; BB(0x0051e705);
    /* 0051e705: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e709: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e70a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e70b: ret  */ FN_RET(0x0051e534); r_esp += 4; return;
L_0051e70c:; BB(0x0051e70c);
    /* 0051e70c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0051e70e: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e710: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x51e716u); call_ind(t); }
    /* 0051e716: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e71c: ret  */ FN_RET(0x0051e534); r_esp += 4; return;
L_0051e71d:; BB(0x0051e71d);
    /* 0051e71d: mov ecx, esi */ r_ecx = r_esi;
    /* 0051e71f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x51e724u); f_007aa668();
    /* 0051e724: jmp 0x51e6ed */ goto L_0051e6ed;
}

void f_0051e6fc(void)
{
    FN_ENTER(0x0051e6fc);
    /* 0051e6fc: adc byte ptr [edi], bl */ { u32 ad = (u32)(r_edi); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 0051e6fe: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0051e700: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x51e705u); f_0082dab0();
    /* 0051e705: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e709: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e70a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e70b: ret  */ FN_RET(0x0051e6fc); r_esp += 4; return;
}

void f_0051e728(void) /* sub_51E728 */
{
    FN_ENTER(0x0051e728);
    /* 0051e728: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e729: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e72a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051e72c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e72e: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x51e733u); f_0051f814();
    /* 0051e733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051e735: je 0x51e767 */ if (fZ) goto L_0051e767;
L_0051e737:; BB(0x0051e737);
    /* 0051e737: mov esi, dword ptr [ebp + 0x3e0] */ r_esi = R32((u32)(r_ebp+0x3e0u));
    /* 0051e73d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e73f: call 0x51b660 */ r_esp -= 4; W32(r_esp, 0x51e744u); f_0051b660();
    /* 0051e744: cmp esi, dword ptr [ebp + 0x3e0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x3e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e74a: je 0x51e760 */ if (fZ) goto L_0051e760;
L_0051e74c:; BB(0x0051e74c);
    /* 0051e74c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e74e: je 0x51e759 */ if (fZ) goto L_0051e759;
L_0051e750:; BB(0x0051e750);
    /* 0051e750: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e752: call 0x51b16c */ r_esp -= 4; W32(r_esp, 0x51e757u); f_0051b16c();
    /* 0051e757: jmp 0x51e760 */ goto L_0051e760;
L_0051e759:; BB(0x0051e759);
    /* 0051e759: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e75b: call 0x51b718 */ r_esp -= 4; W32(r_esp, 0x51e760u); f_0051b718();
L_0051e760:; BB(0x0051e760);
    /* 0051e760: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e762: call 0x51b72c */ r_esp -= 4; W32(r_esp, 0x51e767u); f_0051b72c();
L_0051e767:; BB(0x0051e767);
    /* 0051e767: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e768: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e769: ret  */ FN_RET(0x0051e728); r_esp += 4; return;
}

void f_0051e76c(void) /* sub_51E76C */
{
    FN_ENTER(0x0051e76c);
    /* 0051e76c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e76d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e76e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e76f: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e772: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051e774: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e776: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x51e77bu); f_0051f814();
    /* 0051e77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e77d: je 0x51e7d6 */ if (fZ) goto L_0051e7d6;
L_0051e77f:; BB(0x0051e77f);
    /* 0051e77f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e783: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51e788u); f_0051f7fc();
    /* 0051e788: push dword ptr [ebp + 0x3e4] */ { u32 v = R32((u32)(r_ebp+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051e78e: push 0x921594 */ { u32 v = 0x921594u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e794: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e799u); f_0061cdb0();
    /* 0051e799: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e79c: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 0051e7a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e7a4: je 0x51e7bf */ if (fZ) goto L_0051e7bf;
L_0051e7a6:; BB(0x0051e7a6);
    /* 0051e7a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7aa: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51e7afu); f_0051f7fc();
    /* 0051e7af: push 0x9215a0 */ { u32 v = 0x9215a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e7bau); f_0061cdb0();
    /* 0051e7ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e7bd: jmp 0x51e7d6 */ goto L_0051e7d6;
L_0051e7bf:; BB(0x0051e7bf);
    /* 0051e7bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7c3: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51e7c8u); f_0051f7fc();
    /* 0051e7c8: push 0x9215ac */ { u32 v = 0x9215acu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7ce: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e7d3u); f_0061cdb0();
    /* 0051e7d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e7d6:; BB(0x0051e7d6);
    /* 0051e7d6: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e7dd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051e7e0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7e5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x51e7e8u); call_ind(t); }
    /* 0051e7e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e7ea: je 0x51e906 */ if (fZ) goto L_0051e906;
L_0051e7f0:; BB(0x0051e7f0);
    /* 0051e7f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e7f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e7f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051e7f6: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x51e7fbu); f_00520cf8();
    /* 0051e7fb: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0051e7fe: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51e803u); f_00829cc8();
    /* 0051e803: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51e808u); f_0082d7b0();
    /* 0051e808: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0051e80b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51e810u); f_0082d838();
    /* 0051e810: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0051e813: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e815: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51e81au); f_0082d8bc();
    /* 0051e81a: fld dword ptr [ebp + 0x368] */ FPUSH(R_F32((u32)(r_ebp+0x368u)));
    /* 0051e820: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0051e824: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0051e829: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051e82e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0051e832: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051e836: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051e83a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0051e83e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0051e842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051e844: jl 0x51e852 */ if ((fS!=fO)) goto L_0051e852;
L_0051e846:; BB(0x0051e846);
    /* 0051e846: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e849: jl 0x51e854 */ if ((fS!=fO)) goto L_0051e854;
L_0051e84b:; BB(0x0051e84b);
    /* 0051e84b: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0051e850: jmp 0x51e854 */ goto L_0051e854;
L_0051e852:; BB(0x0051e852);
    /* 0051e852: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051e854:; BB(0x0051e854);
    /* 0051e854: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 0051e85a: mov esi, dword ptr [ebp + 0xdc] */ r_esi = R32((u32)(r_ebp+0xdcu));
    /* 0051e860: fld dword ptr [ebp + 0x36c] */ FPUSH(R_F32((u32)(r_ebp+0x36cu)));
    /* 0051e866: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0051e86a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e86c: mov edi, dword ptr [edx + eax*8 + 4] */ r_edi = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0051e870: fcomp dword ptr [0x9211b8] */ fx_compare(ST(0), R_F32((u32)(0x9211b8u))); FPOP();
    /* 0051e876: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051e878: mov esi, dword ptr [esi + edi*8 + 4] */ r_esi = R32((u32)(r_esi+r_edi*8+0x4u));
    /* 0051e87c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0051e87e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e880: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051e881: jae 0x51e88f */ if (!fC) goto L_0051e88f;
L_0051e883:; BB(0x0051e883);
    /* 0051e883: fld dword ptr [0x9211b8] */ FPUSH(R_F32((u32)(0x9211b8u)));
    /* 0051e889: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0051e88d: jmp 0x51e8c8 */ goto L_0051e8c8;
L_0051e88f:; BB(0x0051e88f);
    /* 0051e88f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0051e893: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0051e896: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0051e899: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0051e89d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0051e8a1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0051e8a4: fadd dword ptr [eax*4 + 0x9210f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9210f8u));
    /* 0051e8ab: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0051e8ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051e8af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051e8b0: jae 0x51e8c8 */ if (!fC) goto L_0051e8c8;
L_0051e8b2:; BB(0x0051e8b2);
    /* 0051e8b2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0051e8b6: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0051e8ba: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0051e8bd: fadd dword ptr [edx*4 + 0x9210f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9210f8u));
    /* 0051e8c4: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0051e8c8:; BB(0x0051e8c8);
    /* 0051e8c8: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051e8d1: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51e8d6u); f_00830b74();
    /* 0051e8d6: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x51e8dbu); f_00578b38();
    /* 0051e8db: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x51e8e0u); f_0082fa9c();
    /* 0051e8e0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0051e8e4: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0051e8e7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051e8eb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051e8ee: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051e8f2: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x51e8f7u); f_0083046c();
    /* 0051e8f7: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51e8fcu); f_0082faac();
    /* 0051e8fc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x51e901u); f_0082dab0();
    /* 0051e901: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51e906u); f_0082da80();
L_0051e906:; BB(0x0051e906);
    /* 0051e906: mov esi, dword ptr [0xa72e58] */ r_esi = R32((u32)(0xa72e58u));
    /* 0051e90c: mov edi, dword ptr [ebp + 0x3e4] */ r_edi = R32((u32)(r_ebp+0x3e4u));
    /* 0051e912: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e914: je 0x51e934 */ if (fZ) goto L_0051e934;
L_0051e916:; BB(0x0051e916);
    /* 0051e916: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0051e91a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e91b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51e920u); f_007b4d18();
    /* 0051e920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051e921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e923: je 0x51e92d */ if (fZ) goto L_0051e92d;
L_0051e925:; BB(0x0051e925);
    /* 0051e925: cmp edi, dword ptr [eax + 0x3e4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e92b: je 0x51e936 */ if (fZ) goto L_0051e936;
L_0051e92d:; BB(0x0051e92d);
    /* 0051e92d: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0051e930: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e932: jne 0x51e916 */ if (!fZ) goto L_0051e916;
L_0051e934:; BB(0x0051e934);
    /* 0051e934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051e936:; BB(0x0051e936);
    /* 0051e936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e938: je 0x51e960 */ if (fZ) goto L_0051e960;
L_0051e93a:; BB(0x0051e93a);
    /* 0051e93a: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e93f: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e944: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051e94a: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e951: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e956u); f_0061cdb0();
    /* 0051e956: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e959: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e95c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e95d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e95e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e95f: ret  */ FN_RET(0x0051e76c); r_esp += 4; return;
L_0051e960:; BB(0x0051e960);
    /* 0051e960: fld dword ptr [0x9211b0] */ FPUSH(R_F32((u32)(0x9211b0u)));
    /* 0051e966: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0051e96a: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 0051e970: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0051e976: mov esi, dword ptr [ebp + 0x308] */ r_esi = R32((u32)(r_ebp+0x308u));
    /* 0051e97c: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051e982: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0051e986: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0051e98a: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0051e98e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051e992: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0051e996: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e99b: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e9a7u); f_0061cdb0();
    /* 0051e9a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e9aa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e9ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e9ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e9af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e9b0: ret  */ FN_RET(0x0051e76c); r_esp += 4; return;
}

void f_0051e8fd(void)
{
    FN_ENTER(0x0051e8fd);
    /* 0051e8fd: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0051e8fe: int1  */ UNSUP(0x0051e8fe, "int1 ");
    /* 0051e8ff: xor byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0051e901: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51e906u); f_0082da80();
    /* 0051e906: mov esi, dword ptr [0xa72e58] */ r_esi = R32((u32)(0xa72e58u));
    /* 0051e90c: mov edi, dword ptr [ebp + 0x3e4] */ r_edi = R32((u32)(r_ebp+0x3e4u));
    /* 0051e912: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e914: je 0x51e934 */ if (fZ) goto L_0051e934;
L_0051e916:; BB(0x0051e916);
    /* 0051e916: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0051e91a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e91b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51e920u); f_007b4d18();
    /* 0051e920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051e921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e923: je 0x51e92d */ if (fZ) goto L_0051e92d;
L_0051e925:; BB(0x0051e925);
    /* 0051e925: cmp edi, dword ptr [eax + 0x3e4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e92b: je 0x51e936 */ if (fZ) goto L_0051e936;
L_0051e92d:; BB(0x0051e92d);
    /* 0051e92d: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0051e930: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e932: jne 0x51e916 */ if (!fZ) goto L_0051e916;
L_0051e934:; BB(0x0051e934);
    /* 0051e934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051e936:; BB(0x0051e936);
    /* 0051e936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e938: je 0x51e960 */ if (fZ) goto L_0051e960;
L_0051e93a:; BB(0x0051e93a);
    /* 0051e93a: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e93f: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e944: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051e94a: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e951: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e956u); f_0061cdb0();
    /* 0051e956: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e959: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e95c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e95d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e95e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e95f: ret  */ FN_RET(0x0051e8fd); r_esp += 4; return;
L_0051e960:; BB(0x0051e960);
    /* 0051e960: fld dword ptr [0x9211b0] */ FPUSH(R_F32((u32)(0x9211b0u)));
    /* 0051e966: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0051e96a: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 0051e970: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0051e976: mov esi, dword ptr [ebp + 0x308] */ r_esi = R32((u32)(r_ebp+0x308u));
    /* 0051e97c: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051e982: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0051e986: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0051e98a: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0051e98e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051e992: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0051e996: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e99b: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51e9a7u); f_0061cdb0();
    /* 0051e9a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e9aa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051e9ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e9ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051e9af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051e9b0: ret  */ FN_RET(0x0051e8fd); r_esp += 4; return;
}

void f_0051e9b4(void) /* sub_51E9B4 */
{
    FN_ENTER(0x0051e9b4);
    /* 0051e9b4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0051e9bb: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051e9be: je 0x51e9cc */ if (fZ) goto L_0051e9cc;
L_0051e9c0:; BB(0x0051e9c0);
    /* 0051e9c0: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051e9c3: je 0x51e9cc */ if (fZ) goto L_0051e9cc;
L_0051e9c5:; BB(0x0051e9c5);
    /* 0051e9c5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9c7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51e9ccu); f_0051f62c();
L_0051e9cc:; BB(0x0051e9cc);
    /* 0051e9cc: ret  */ FN_RET(0x0051e9b4); r_esp += 4; return;
}

void f_0051e9d0(void)
{
    FN_ENTER(0x0051e9d0);
    /* 0051e9d0: mov dword ptr [0xa72e0c], 0x3f800000 */ W32((u32)(0xa72e0cu), 0x3f800000u);
    /* 0051e9da: mov ecx, 0xa72e60 */ r_ecx = 0xa72e60u;
    /* 0051e9df: mov dword ptr [0xa72e10], 0x41000000 */ W32((u32)(0xa72e10u), 0x41000000u);
    /* 0051e9e9: mov dword ptr [0xa72e14], 0x3fc00000 */ W32((u32)(0xa72e14u), 0x3fc00000u);
    /* 0051e9f3: mov dword ptr [0xa72e08], 0x46afc800 */ W32((u32)(0xa72e08u), 0x46afc800u);
    /* 0051e9fd: mov dword ptr [0xa72e00], 0x461c4000 */ W32((u32)(0xa72e00u), 0x461c4000u);
    /* 0051ea07: mov dword ptr [0xa72e18], 0x44610000 */ W32((u32)(0xa72e18u), 0x44610000u);
    /* 0051ea11: mov dword ptr [0xa72e04], 0x44610000 */ W32((u32)(0xa72e04u), 0x44610000u);
    /* 0051ea1b: mov dword ptr [0xa72dfc], 0x41700000 */ W32((u32)(0xa72dfcu), 0x41700000u);
    /* 0051ea25: mov dword ptr [0xa72df8], 0x41800000 */ W32((u32)(0xa72df8u), 0x41800000u);
    /* 0051ea2f: mov dword ptr [0x9bb9f0], 0 */ W32((u32)(0x9bb9f0u), 0x0u);
    /* 0051ea39: mov dword ptr [0x9bb7f8], 0x40c00000 */ W32((u32)(0x9bb7f8u), 0x40c00000u);
    /* 0051ea43: mov dword ptr [0x9bb824], 0x40c00000 */ W32((u32)(0x9bb824u), 0x40c00000u);
    /* 0051ea4d: mov dword ptr [0x9bb928], 0x3fc00000 */ W32((u32)(0x9bb928u), 0x3fc00000u);
    /* 0051ea57: mov dword ptr [0x9bb978], 0x3f800000 */ W32((u32)(0x9bb978u), 0x3f800000u);
    /* 0051ea61: mov dword ptr [0x9bb988], 0x3f800000 */ W32((u32)(0x9bb988u), 0x3f800000u);
    /* 0051ea6b: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x51ea70u); f_00568fa8();
    /* 0051ea70: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea75: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x51ea7au); f_0085909d();
    /* 0051ea7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ea7b: mov ecx, 0xa72e58 */ r_ecx = 0xa72e58u;
    /* 0051ea80: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x51ea85u); f_00568fa8();
    /* 0051ea85: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea8a: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x51ea8fu); f_0085909d();
    /* 0051ea8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ea90: ret  */ FN_RET(0x0051e9d0); r_esp += 4; return;
}

void f_0051ea94(void) /* sub_51EA94 */
{
    FN_ENTER(0x0051ea94);
    /* 0051ea94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea95: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ea98: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51ea9du); f_00520e6c();
    /* 0051ea9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ea9f: je 0x51eaba */ if (fZ) goto L_0051eaba;
L_0051eaa1:; BB(0x0051eaa1);
    /* 0051eaa1: push 0x92157c */ { u32 v = 0x92157cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eaa6: push 0x9bb9d8 */ { u32 v = 0x9bb9d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eaab: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x51eab0u); f_0051f674();
    /* 0051eab0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051eab3: mov dword ptr [0xa72e20], eax */ W32((u32)(0xa72e20u), r_eax);
    /* 0051eab8: jmp 0x51eaca */ goto L_0051eaca;
L_0051eaba:; BB(0x0051eaba);
    /* 0051eaba: push 0x9bb9d8 */ { u32 v = 0x9bb9d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eabf: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x51eac4u); f_0051f6b0();
    /* 0051eac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051eac5: mov dword ptr [0xa72e20], eax */ W32((u32)(0xa72e20u), r_eax);
L_0051eaca:; BB(0x0051eaca);
    /* 0051eaca: mov ecx, 0xa72e60 */ r_ecx = 0xa72e60u;
    /* 0051eacf: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x51ead4u); f_00568fa8();
    /* 0051ead4: mov ecx, 0xa72e58 */ r_ecx = 0xa72e58u;
    /* 0051ead9: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x51eadeu); f_00568fa8();
    /* 0051eade: mov dword ptr [0xa72e44], 0 */ W32((u32)(0xa72e44u), 0x0u);
    /* 0051eae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051eaea: mov dword ptr [0xa72e54], eax */ W32((u32)(0xa72e54u), r_eax);
    /* 0051eaef: mov dword ptr [0xa72e48], 0 */ W32((u32)(0xa72e48u), 0x0u);
    /* 0051eaf9: mov dword ptr [0xa72e50], eax */ W32((u32)(0xa72e50u), r_eax);
    /* 0051eafe: mov dword ptr [0xa72e4c], 0 */ W32((u32)(0xa72e4cu), 0x0u);
    /* 0051eb08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051eb0a: mov ebx, eax */ r_ebx = r_eax;
L_0051eb0c:; BB(0x0051eb0c);
    /* 0051eb0c: push dword ptr [ebx + 0x921170] */ { u32 v = R32((u32)(r_ebx+0x921170u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051eb12: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x51eb17u); f_0077a684();
    /* 0051eb17: push dword ptr [ebx + 0x921168] */ { u32 v = R32((u32)(r_ebx+0x921168u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051eb1d: mov dword ptr [ebx + 0xa72e3c], eax */ W32((u32)(r_ebx+0xa72e3cu), r_eax);
    /* 0051eb23: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51eb28u); f_0077a698();
    /* 0051eb28: push dword ptr [ebx + 0x921160] */ { u32 v = R32((u32)(r_ebx+0x921160u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051eb2e: mov dword ptr [ebx + 0xa72e34], eax */ W32((u32)(r_ebx+0xa72e34u), r_eax);
    /* 0051eb34: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51eb39u); f_0077a6b4();
    /* 0051eb39: push dword ptr [ebx + 0x921158] */ { u32 v = R32((u32)(r_ebx+0x921158u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051eb3f: mov dword ptr [ebx + 0xa72e2c], eax */ W32((u32)(r_ebx+0xa72e2cu), r_eax);
    /* 0051eb45: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x51eb4au); f_0077a6cc();
    /* 0051eb4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051eb4d: mov dword ptr [ebx + 0xa72e24], eax */ W32((u32)(r_ebx+0xa72e24u), r_eax);
    /* 0051eb53: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051eb56: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051eb59: jl 0x51eb0c */ if ((fS!=fO)) goto L_0051eb0c;
L_0051eb5b:; BB(0x0051eb5b);
    /* 0051eb5b: mov eax, dword ptr [0x9210ec] */ r_eax = R32((u32)(0x9210ecu));
    /* 0051eb60: movzx edx, word ptr [0x9210f0] */ r_edx = (u32)R16((u32)(0x9210f0u));
    /* 0051eb67: movzx ecx, word ptr [0x9210f2] */ r_ecx = (u32)R16((u32)(0x9210f2u));
    /* 0051eb6e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0051eb72: movzx eax, word ptr [0x9210f4] */ r_eax = (u32)R16((u32)(0x9210f4u));
    /* 0051eb79: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0051eb7e: mov edx, dword ptr [0xa72e20] */ r_edx = R32((u32)(0xa72e20u));
    /* 0051eb84: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0051eb89: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0051eb8e: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0051eb94: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051eb9a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051eb9d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051eba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eba1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eba3: push dword ptr [0x9bb7cc] */ { u32 v = R32((u32)(0x9bb7ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051eba9: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ebac: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ebaf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebb1: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x51ebb6u); f_00608470();
    /* 0051ebb6: mov eax, dword ptr [0xa72e20] */ r_eax = R32((u32)(0xa72e20u));
    /* 0051ebbb: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0051ebbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebc0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0051ebc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebc8: push dword ptr [0x9bb7cc] */ { u32 v = R32((u32)(0x9bb7ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ebce: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd1: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x51ebdbu); f_00608470();
    /* 0051ebdb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ebde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051ebdf: ret  */ FN_RET(0x0051ea94); r_esp += 4; return;
}

void f_0051ebe0(void) /* sub_51EBE0 */
{
    FN_ENTER(0x0051ebe0);
    /* 0051ebe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebe1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ebe4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051ebe6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051ebea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ebed: je 0x51ecdf */ if (fZ) goto L_0051ecdf;
L_0051ebf3:; BB(0x0051ebf3);
    /* 0051ebf3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ebf6: je 0x51ecb9 */ if (fZ) goto L_0051ecb9;
L_0051ebfc:; BB(0x0051ebfc);
    /* 0051ebfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ebfe: jne 0x51eccc */ if (!fZ) goto L_0051eccc;
L_0051ec04:; BB(0x0051ec04);
    /* 0051ec04: mov eax, dword ptr [0xa72e58] */ r_eax = R32((u32)(0xa72e58u));
    /* 0051ec09: mov edx, dword ptr [ebp + 0x3e4] */ r_edx = R32((u32)(r_ebp+0x3e4u));
    /* 0051ec0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec11: je 0x51ec47 */ if (fZ) goto L_0051ec47;
L_0051ec13:; BB(0x0051ec13);
    /* 0051ec13: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0051ec16: mov esi, eax */ r_esi = r_eax;
    /* 0051ec18: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0051ec1c: mov edi, edx */ r_edi = r_edx;
L_0051ec1e:; BB(0x0051ec1e);
    /* 0051ec1e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0051ec22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ec23: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51ec28u); f_007b4d18();
    /* 0051ec28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ec29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec2b: je 0x51ec39 */ if (fZ) goto L_0051ec39;
L_0051ec2d:; BB(0x0051ec2d);
    /* 0051ec2d: cmp edi, dword ptr [eax + 0x3e4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x3e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec33: je 0x51ecd3 */ if (fZ) goto L_0051ecd3;
L_0051ec39:; BB(0x0051ec39);
    /* 0051ec39: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0051ec3c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec3e: jne 0x51ec1e */ if (!fZ) goto L_0051ec1e;
L_0051ec40:; BB(0x0051ec40);
    /* 0051ec40: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0051ec43: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0051ec47:; BB(0x0051ec47);
    /* 0051ec47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051ec49:; BB(0x0051ec49);
    /* 0051ec49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec4b: je 0x51ec58 */ if (fZ) goto L_0051ec58;
L_0051ec4d:; BB(0x0051ec4d);
    /* 0051ec4d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0051ec51: mov word ptr [ebp + 0x3e8], dx */ W16((u32)(r_ebp+0x3e8u), (u16)r_edx);
L_0051ec58:; BB(0x0051ec58);
    /* 0051ec58: mov edx, dword ptr [ebp + 0x3e0] */ r_edx = R32((u32)(r_ebp+0x3e0u));
    /* 0051ec5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec60: jne 0x51ec8c */ if (!fZ) goto L_0051ec8c;
L_0051ec62:; BB(0x0051ec62);
    /* 0051ec62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ec64: je 0x51ec8c */ if (fZ) goto L_0051ec8c;
L_0051ec66:; BB(0x0051ec66);
    /* 0051ec66: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0051ec6c: mov dword ptr [ebp + 0x3fc], edx */ W32((u32)(r_ebp+0x3fcu), r_edx);
    /* 0051ec72: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 0051ec78: mov dword ptr [ebp + 0x400], edx */ W32((u32)(r_ebp+0x400u), r_edx);
    /* 0051ec7e: mov eax, dword ptr [eax + 0x3f8] */ r_eax = R32((u32)(r_eax+0x3f8u));
    /* 0051ec84: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 0051ec8a: jmp 0x51ecb0 */ goto L_0051ecb0;
L_0051ec8c:; BB(0x0051ec8c);
    /* 0051ec8c: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0051ec92: mov edx, dword ptr [ebp + 0x3f4] */ r_edx = R32((u32)(r_ebp+0x3f4u));
    /* 0051ec98: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 0051ec9e: mov eax, dword ptr [ebp + 0x3f8] */ r_eax = R32((u32)(r_ebp+0x3f8u));
    /* 0051eca4: mov dword ptr [ebp + 0x400], edx */ W32((u32)(r_ebp+0x400u), r_edx);
    /* 0051ecaa: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
L_0051ecb0:; BB(0x0051ecb0);
    /* 0051ecb0: add dword ptr [ebp + 0x428], 1 */ { u32 ad = (u32)(r_ebp+0x428u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051ecb7: jmp 0x51eccc */ goto L_0051eccc;
L_0051ecb9:; BB(0x0051ecb9);
    /* 0051ecb9: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 0051ecbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051ecc1: jle 0x51eccc */ if ((fZ||fS!=fO)) goto L_0051eccc;
L_0051ecc3:; BB(0x0051ecc3);
    /* 0051ecc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ecc7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51ecccu); f_0051f62c();
L_0051eccc:; BB(0x0051eccc);
    /* 0051eccc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051eccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ecd0: ret 4 */ FN_RET(0x0051ebe0); r_esp += 8; return;
L_0051ecd3:; BB(0x0051ecd3);
    /* 0051ecd3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0051ecd6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0051ecda: jmp 0x51ec49 */ goto L_0051ec49;
L_0051ecdf:; BB(0x0051ecdf);
    /* 0051ecdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051ece1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ece2: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 0051ece8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ecea: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51ecefu); f_0051f664();
    /* 0051ecef: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051ecf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ecf4: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51ecfau); call_ind(t); }
    /* 0051ecfa: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0051ed00: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051ed03: mov dword ptr [ebp + 0x410], eax */ W32((u32)(r_ebp+0x410u), r_eax);
    /* 0051ed09: jmp 0x51eccc */ goto L_0051eccc;
}

void f_0051ed0c(void) /* sub_51ED0C */
{
    FN_ENTER(0x0051ed0c);
    /* 0051ed0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051ed0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051ed11: call 0x51ed30 */ r_esp -= 4; W32(r_esp, 0x51ed16u); f_0051ed30();
    /* 0051ed16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051ed1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051ed1c: jne 0x51ed22 */ if (!fZ) goto L_0051ed22;
L_0051ed1e:; BB(0x0051ed1e);
    /* 0051ed1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051ed1f: ret 4 */ FN_RET(0x0051ed0c); r_esp += 8; return;
L_0051ed22:; BB(0x0051ed22);
    /* 0051ed22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x51ed28u); f_005c2f74();
    /* 0051ed28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ed29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051ed2a: ret 4 */ FN_RET(0x0051ed0c); r_esp += 8; return;
}

void f_0051ed30(void) /* sub_51ED30 */
{
    FN_ENTER(0x0051ed30);
    /* 0051ed30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed31: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ed33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed35: push 0x8d4704 */ { u32 v = 0x8d4704u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051ed40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051ed48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ed4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051ed4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051ed51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051ed54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051ed57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051ed5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051ed61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ed64: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 0051ed6a: mov dword ptr [ecx], 0xb00498 */ W32((u32)(r_ecx), 0xb00498u);
    /* 0051ed70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ed72: je 0x51ed7e */ if (fZ) goto L_0051ed7e;
L_0051ed74:; BB(0x0051ed74);
    /* 0051ed74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed75: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x51ed7au); f_00857e98();
    /* 0051ed7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ed7b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0051ed7e:; BB(0x0051ed7e);
    /* 0051ed7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051ed85: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x51ed8au); f_007a9f38();
    /* 0051ed8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051ed8d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051ed94: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ed96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ed97: ret  */ FN_RET(0x0051ed30); r_esp += 4; return;
}

void f_0051ed98(void) /* sub_51ED98 */
{
    FN_ENTER(0x0051ed98);
    /* 0051ed98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed99: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ed9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed9d: push 0x8d4720 */ { u32 v = 0x8d4720u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eda2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051eda8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eda9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051edb0: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051edb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051edb6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0051edb9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0051edbc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0051edbf: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0051edc2: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051edc8: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0051edcb: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0051edce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051edd1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0051edd4: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x51edd9u); f_007a9e5c();
    /* 0051edd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051ede0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ede3: mov dword ptr [edx], 0xb00498 */ W32((u32)(r_edx), 0xb00498u);
    /* 0051ede9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051edeb: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 0051edf1: lea esi, [ebp + 8] */ r_esi = (u32)(r_ebp+0x8u);
    /* 0051edf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edf6: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 0051edfc: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
    /* 0051ee02: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
    /* 0051ee08: mov dword ptr [edx + 0x11c], eax */ W32((u32)(r_edx+0x11cu), r_eax);
    /* 0051ee0e: mov dword ptr [edx + 0x120], eax */ W32((u32)(r_edx+0x120u), r_eax);
    /* 0051ee14: mov dword ptr [edx + 0x124], eax */ W32((u32)(r_edx+0x124u), r_eax);
    /* 0051ee1a: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 0051ee20: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
    /* 0051ee26: mov dword ptr [edx + 0x130], eax */ W32((u32)(r_edx+0x130u), r_eax);
    /* 0051ee2c: mov dword ptr [edx + 0x134], eax */ W32((u32)(r_edx+0x134u), r_eax);
    /* 0051ee32: mov dword ptr [edx + 0x138], eax */ W32((u32)(r_edx+0x138u), r_eax);
    /* 0051ee38: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 0051ee3e: mov dword ptr [edx + 0x140], eax */ W32((u32)(r_edx+0x140u), r_eax);
    /* 0051ee44: mov dword ptr [edx + 0x144], eax */ W32((u32)(r_edx+0x144u), r_eax);
    /* 0051ee4a: mov dword ptr [edx + 0x148], eax */ W32((u32)(r_edx+0x148u), r_eax);
    /* 0051ee50: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ee53: mov ecx, dword ptr [0x9bba40] */ r_ecx = R32((u32)(0x9bba40u));
    /* 0051ee59: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0051ee5c: add ebx, 0x10c */ {  u32 a = r_ebx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051ee62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee64: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x51ee69u); f_007806dc();
    /* 0051ee69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ee6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ee6e: je 0x51f050 */ if (fZ) goto L_0051f050;
L_0051ee74:; BB(0x0051ee74);
    /* 0051ee74: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ee77: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0051ee7a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051ee7c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0051ee7f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0051ee82: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0051ee85: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0051ee88: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
L_0051ee8b:; BB(0x0051ee8b);
    /* 0051ee8b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ee8e: mov edi, dword ptr [0xa72e7c] */ r_edi = R32((u32)(0xa72e7cu));
    /* 0051ee94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee96: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0051ee9c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0051ee9f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0051eea2: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0051eea8: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0051eeab: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0051eeae: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0051eeb4: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0051eeba: mov dword ptr [ecx + 0xd8], 0x9bba44 */ W32((u32)(r_ecx+0xd8u), 0x9bba44u);
    /* 0051eec4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x51eec9u); f_007aa4c8();
    /* 0051eec9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051eecc: fld dword ptr [0x9215f4] */ FPUSH(R_F32((u32)(0x9215f4u)));
    /* 0051eed2: fadd dword ptr [edx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xc4u));
    /* 0051eed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051eedb: fstp dword ptr [edx + 0x100] */ W_F32((u32)(r_edx+0x100u), ST(0)); FPOP();
    /* 0051eee1: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 0051eee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051eee9: jne 0x51eef9 */ if (!fZ) goto L_0051eef9;
L_0051eeeb:; BB(0x0051eeeb);
    /* 0051eeeb: mov dword ptr [edx + 0xfc], 0 */ W32((u32)(r_edx+0xfcu), 0x0u);
    /* 0051eef5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051eef7: jmp 0x51ef1c */ goto L_0051ef1c;
L_0051eef9:; BB(0x0051eef9);
    /* 0051eef9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eefb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eefd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eeff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ef01: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ef03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef04: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51ef09u); f_008581c5();
    /* 0051ef09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ef0a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ef0d: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 0051ef13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051ef16: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
L_0051ef1c:; BB(0x0051ef1c);
    /* 0051ef1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051ef1f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0051ef21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051ef23: jle 0x51f02c */ if ((fZ||fS!=fO)) goto L_0051f02c;
L_0051ef29:; BB(0x0051ef29);
    /* 0051ef29: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 0051ef2c: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0051ef2f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051ef31: mov dword ptr [eax + ebx*8], edi */ W32((u32)(r_eax+r_ebx*8), r_edi);
    /* 0051ef34: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0051ef37: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ef39: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ef3b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051ef3e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0051ef41: mov dword ptr [eax + ebx*8 + 4], ecx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_ecx);
    /* 0051ef45: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 0051ef48: mov dword ptr [eax + ebx*8 + 8], edx */ W32((u32)(r_eax+r_ebx*8+0x8u), r_edx);
    /* 0051ef4c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0051ef53: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef58u); f_008587a5();
    /* 0051ef58: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051ef5b: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0051ef5e: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef64: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0051ef67: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef6cu); f_008587a5();
    /* 0051ef6c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051ef6f: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051ef72: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef78: fadd dword ptr [0xa72e6c] */ ST(0) = ST(0) + R_F32((u32)(0xa72e6cu));
    /* 0051ef7e: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0051ef81: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef86u); f_008587a5();
    /* 0051ef86: fld dword ptr [0x9215e8] */ FPUSH(R_F32((u32)(0x9215e8u)));
    /* 0051ef8c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051ef8f: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051ef92: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef98: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051ef9a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0051ef9f: fmul dword ptr [0x9215e4] */ ST(0) = ST(0) * R_F32((u32)(0x9215e4u));
    /* 0051efa5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051efa7: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0051efaa: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0051efae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051efb3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0051efb6: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0051efb9: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051efbc: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0051efbf: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051efc2: mov eax, dword ptr [eax + 0xfc] */ r_eax = R32((u32)(r_eax+0xfcu));
    /* 0051efc8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0051efcb: mov dword ptr [eax + ebx*8 + 0x18], edi */ W32((u32)(r_eax+r_ebx*8+0x18u), r_edi);
    /* 0051efcf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x51efd4u); f_0082d990();
    /* 0051efd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051efd6: mov edx, edi */ r_edx = r_edi;
    /* 0051efd8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51efddu); f_0082d8bc();
    /* 0051efdd: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051efe0: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0051efe3: mov edi, dword ptr [eax + 0xfc] */ r_edi = R32((u32)(r_eax+0xfcu));
    /* 0051efe9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051efec: lea eax, [edi + eax + 0xc] */ r_eax = (u32)(r_edi+r_eax+0xcu);
    /* 0051eff0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051eff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eff3: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x51eff8u); f_0082eab8();
    /* 0051eff8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0051effd: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x51f002u); f_0082eb80();
    /* 0051f002: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051f005: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 0051f00b: mov dword ptr [edx + ebx*8 + 0x1c], 0 */ W32((u32)(r_edx+r_ebx*8+0x1cu), 0x0u);
    /* 0051f013: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051f016: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051f019: cmp esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051f01f: jge 0x51f02c */ if ((fS==fO)) goto L_0051f02c;
L_0051f021:; BB(0x0051f021);
    /* 0051f021: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 0051f027: jmp 0x51ef29 */ goto L_0051ef29;
L_0051f02c:; BB(0x0051f02c);
    /* 0051f02c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f02f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051f032: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f035: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f038: mov dword ptr [edx + 0x108], ecx */ W32((u32)(r_edx+0x108u), r_ecx);
    /* 0051f03e: mov eax, edx */ r_eax = r_edx;
    /* 0051f040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f043: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f04a: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f04c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f04d: ret 0x14 */ FN_RET(0x0051ed98); r_esp += 24; return;
L_0051f050:; BB(0x0051f050);
    /* 0051f050: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051f053: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051f056: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0051f059: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0051f05c: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0051f05f: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0051f062: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 0051f065: jmp 0x51ee8b */ goto L_0051ee8b;
}

void f_0051ee94(void)
{
    FN_ENTER(0x0051ee94);
    /* 0051ee94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee96: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0051ee9c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0051ee9f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0051eea2: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0051eea8: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0051eeab: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0051eeae: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0051eeb4: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0051eeba: mov dword ptr [ecx + 0xd8], 0x9bba44 */ W32((u32)(r_ecx+0xd8u), 0x9bba44u);
    /* 0051eec4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x51eec9u); f_007aa4c8();
    /* 0051eec9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051eecc: fld dword ptr [0x9215f4] */ FPUSH(R_F32((u32)(0x9215f4u)));
    /* 0051eed2: fadd dword ptr [edx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xc4u));
    /* 0051eed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051eedb: fstp dword ptr [edx + 0x100] */ W_F32((u32)(r_edx+0x100u), ST(0)); FPOP();
    /* 0051eee1: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 0051eee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051eee9: jne 0x51eef9 */ if (!fZ) goto L_0051eef9;
L_0051eeeb:; BB(0x0051eeeb);
    /* 0051eeeb: mov dword ptr [edx + 0xfc], 0 */ W32((u32)(r_edx+0xfcu), 0x0u);
    /* 0051eef5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051eef7: jmp 0x51ef1c */ goto L_0051ef1c;
L_0051eef9:; BB(0x0051eef9);
    /* 0051eef9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eefb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eefd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051eeff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ef01: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ef03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef04: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51ef09u); f_008581c5();
    /* 0051ef09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ef0a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051ef0d: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 0051ef13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051ef16: mov dword ptr [edx + 0xfc], eax */ W32((u32)(r_edx+0xfcu), r_eax);
L_0051ef1c:; BB(0x0051ef1c);
    /* 0051ef1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051ef1f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0051ef21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051ef23: jle 0x51f02c */ if ((fZ||fS!=fO)) goto L_0051f02c;
L_0051ef29:; BB(0x0051ef29);
    /* 0051ef29: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 0051ef2c: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0051ef2f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051ef31: mov dword ptr [eax + ebx*8], edi */ W32((u32)(r_eax+r_ebx*8), r_edi);
    /* 0051ef34: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0051ef37: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ef39: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ef3b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051ef3e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0051ef41: mov dword ptr [eax + ebx*8 + 4], ecx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_ecx);
    /* 0051ef45: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 0051ef48: mov dword ptr [eax + ebx*8 + 8], edx */ W32((u32)(r_eax+r_ebx*8+0x8u), r_edx);
    /* 0051ef4c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0051ef53: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef58u); f_008587a5();
    /* 0051ef58: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051ef5b: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0051ef5e: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef64: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0051ef67: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef6cu); f_008587a5();
    /* 0051ef6c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051ef6f: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051ef72: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef78: fadd dword ptr [0xa72e6c] */ ST(0) = ST(0) + R_F32((u32)(0xa72e6cu));
    /* 0051ef7e: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0051ef81: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51ef86u); f_008587a5();
    /* 0051ef86: fld dword ptr [0x9215e8] */ FPUSH(R_F32((u32)(0x9215e8u)));
    /* 0051ef8c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051ef8f: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051ef92: fdiv dword ptr [0x9215ec] */ ST(0) = ST(0) / R_F32((u32)(0x9215ecu));
    /* 0051ef98: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051ef9a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0051ef9f: fmul dword ptr [0x9215e4] */ ST(0) = ST(0) * R_F32((u32)(0x9215e4u));
    /* 0051efa5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051efa7: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0051efaa: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0051efae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051efb3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0051efb6: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0051efb9: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051efbc: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0051efbf: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051efc2: mov eax, dword ptr [eax + 0xfc] */ r_eax = R32((u32)(r_eax+0xfcu));
    /* 0051efc8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0051efcb: mov dword ptr [eax + ebx*8 + 0x18], edi */ W32((u32)(r_eax+r_ebx*8+0x18u), r_edi);
    /* 0051efcf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x51efd4u); f_0082d990();
    /* 0051efd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051efd6: mov edx, edi */ r_edx = r_edi;
    /* 0051efd8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51efddu); f_0082d8bc();
    /* 0051efdd: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051efe0: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0051efe3: mov edi, dword ptr [eax + 0xfc] */ r_edi = R32((u32)(r_eax+0xfcu));
    /* 0051efe9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051efec: lea eax, [edi + eax + 0xc] */ r_eax = (u32)(r_edi+r_eax+0xcu);
    /* 0051eff0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051eff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eff3: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x51eff8u); f_0082eab8();
    /* 0051eff8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0051effd: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x51f002u); f_0082eb80();
    /* 0051f002: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051f005: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 0051f00b: mov dword ptr [edx + ebx*8 + 0x1c], 0 */ W32((u32)(r_edx+r_ebx*8+0x1cu), 0x0u);
    /* 0051f013: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051f016: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051f019: cmp esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051f01f: jge 0x51f02c */ if ((fS==fO)) goto L_0051f02c;
L_0051f021:; BB(0x0051f021);
    /* 0051f021: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 0051f027: jmp 0x51ef29 */ goto L_0051ef29;
L_0051f02c:; BB(0x0051f02c);
    /* 0051f02c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f02f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051f032: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f035: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f038: mov dword ptr [edx + 0x108], ecx */ W32((u32)(r_edx+0x108u), r_ecx);
    /* 0051f03e: mov eax, edx */ r_eax = r_edx;
    /* 0051f040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f043: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f04a: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f04c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f04d: ret 0x14 */ FN_RET(0x0051ee94); r_esp += 24; return;
}

