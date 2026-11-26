#include "protos.h"

void f_0053423c(void) /* sub_53423C */
{
    FN_ENTER(0x0053423c);
    /* 0053423c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053423f: mov eax, dword ptr [0x9229ac] */ r_eax = R32((u32)(0x9229acu));
    /* 00534244: movzx edx, word ptr [0x9229b0] */ r_edx = (u32)R16((u32)(0x9229b0u));
    /* 0053424b: movzx ecx, word ptr [0x9229b2] */ r_ecx = (u32)R16((u32)(0x9229b2u));
    /* 00534252: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00534256: movzx eax, word ptr [0x9229b4] */ r_eax = (u32)R16((u32)(0x9229b4u));
    /* 0053425d: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00534262: mov edx, dword ptr [0xa73480] */ r_edx = R32((u32)(0xa73480u));
    /* 00534268: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0053426d: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00534272: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00534278: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0053427e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00534281: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00534284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534285: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053428a: push dword ptr [0x9bc788] */ { u32 v = R32((u32)(0x9bc788u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534290: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00534293: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534296: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00534298: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53429du); f_00608470();
    /* 0053429d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005342a0: ret  */ FN_RET(0x0053423c); r_esp += 4; return;
}

void f_005342a4(void) /* sub_5342A4 */
{
    FN_ENTER(0x005342a4);
    /* 005342a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005342a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005342a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005342a9: call 0x5342c8 */ r_esp -= 4; W32(r_esp, 0x5342aeu); f_005342c8();
    /* 005342ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005342b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005342b4: jne 0x5342ba */ if (!fZ) goto L_005342ba;
L_005342b6:; BB(0x005342b6);
    /* 005342b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005342b7: ret 4 */ FN_RET(0x005342a4); r_esp += 8; return;
L_005342ba:; BB(0x005342ba);
    /* 005342ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005342bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5342c0u); f_005c2f74();
    /* 005342c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005342c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005342c2: ret 4 */ FN_RET(0x005342a4); r_esp += 8; return;
}

void f_005342c8(void) /* sub_5342C8 */
{
    FN_ENTER(0x005342c8);
    /* 005342c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005342c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005342cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005342cd: push 0x8d4dd0 */ { u32 v = 0x8d4dd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005342d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005342d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005342d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005342e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005342e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005342e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005342e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005342ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005342ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005342f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005342f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005342fc: mov dword ptr [ecx], 0xb01d80 */ W32((u32)(r_ecx), 0xb01d80u);
    /* 00534302: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x534307u); f_007b9c8c();
    /* 00534307: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053430e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00534311: call 0x531488 */ r_esp -= 4; W32(r_esp, 0x534316u); f_00531488();
    /* 00534316: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00534319: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00534320: mov esp, ebp */ r_esp = r_ebp;
    /* 00534322: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534323: ret  */ FN_RET(0x005342c8); r_esp += 4; return;
}

void f_00534324(void) /* sub_534324 */
{
    FN_ENTER(0x00534324);
    /* 00534324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534325: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00534327: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053432b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0053432f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00534331: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 00534334: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00534337: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0053433a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0053433d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00534340: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00534345: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00534348: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 0053434f: mov word ptr [ebx + 0x334], ax */ W16((u32)(r_ebx+0x334u), (u16)r_eax);
    /* 00534356: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534358: call 0x53436c */ r_esp -= 4; W32(r_esp, 0x53435du); f_0053436c();
    /* 0053435d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053435f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534361: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x534367u); call_ind(t); }
    /* 00534367: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534368: ret 0xc */ FN_RET(0x00534324); r_esp += 16; return;
}

void f_0053436c(void) /* sub_53436C */
{
    FN_ENTER(0x0053436c);
    /* 0053436c: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00534372: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00534375: and eax, 0xefffffff */ {  u32 a = r_eax; u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053437a: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00534380: mov dword ptr [ecx + 0x37c], 0xb */ W32((u32)(r_ecx+0x37cu), 0xbu);
    /* 0053438a: and edx, 0xf9fbffff */ {  u32 a = r_edx; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534390: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00534393: ret  */ FN_RET(0x0053436c); r_esp += 4; return;
}

void f_00534394(void) /* sub_534394 */
{
    FN_ENTER(0x00534394);
    /* 00534394: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00534399: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0053439c: mov word ptr [ecx + 0x3ce], ax */ W16((u32)(r_ecx+0x3ceu), (u16)r_eax);
    /* 005343a3: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 005343aa: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 005343b0: mov dword ptr [ecx + 0x3c8], 0x47c35000 */ W32((u32)(r_ecx+0x3c8u), 0x47c35000u);
    /* 005343ba: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005343c0: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005343c3: or eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005343c8: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 005343ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005343d0: jne 0x5343ee */ if (!fZ) goto L_005343ee;
L_005343d2:; BB(0x005343d2);
    /* 005343d2: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005343d9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005343dc: je 0x5343ee */ if (fZ) goto L_005343ee;
L_005343de:; BB(0x005343de);
    /* 005343de: mov dword ptr [ecx + 0x37c], 0xa */ W32((u32)(r_ecx+0x37cu), 0xau);
    /* 005343e8: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_005343ee:; BB(0x005343ee);
    /* 005343ee: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005343f0: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x5343f6u); call_ind(t); }
    /* 005343f6: ret 4 */ FN_RET(0x00534394); r_esp += 8; return;
}

void f_005343fc(void) /* sub_5343FC */
{
    FN_ENTER(0x005343fc);
    /* 005343fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005343fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005343fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005343ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534400: mov edi, ecx */ r_edi = r_ecx;
    /* 00534402: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00534405: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053440a: je 0x534411 */ if (fZ) goto L_00534411;
L_0053440c:; BB(0x0053440c);
    /* 0053440c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053440d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053440e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053440f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534410: ret  */ FN_RET(0x005343fc); r_esp += 4; return;
L_00534411:; BB(0x00534411);
    /* 00534411: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00534416: mov ecx, edi */ r_ecx = r_edi;
    /* 00534418: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053441a: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053441f: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00534424: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x534427u); call_ind(t); }
    /* 00534427: mov esi, eax */ r_esi = r_eax;
    /* 00534429: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053442b: je 0x5344e2 */ if (fZ) goto L_005344e2;
L_00534431:; BB(0x00534431);
    /* 00534431: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00534434: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00534439: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x53443eu); f_00829cc8();
    /* 0053443e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053443f: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x534444u); f_00794548();
    /* 00534444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534445: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x53444au); f_00578b38();
    /* 0053444a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53444fu); f_0082d7b0();
    /* 0053444f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00534455: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053445b: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00534461: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x534466u); f_004f7c84();
    /* 00534466: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534469: je 0x534541 */ if (fZ) goto L_00534541;
L_0053446f:; BB(0x0053446f);
    /* 0053446f: fld dword ptr [edi + 0x3bc] */ FPUSH(R_F32((u32)(r_edi+0x3bcu)));
    /* 00534475: fadd dword ptr [edi + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3c4u));
    /* 0053447b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053447e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00534482: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00534484: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0053448b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00534493: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x534498u); f_00830b74();
    /* 00534498: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0053449b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5344a0u); f_0082d838();
    /* 005344a0: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 005344a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005344a5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5344aau); f_0082e9e4();
    /* 005344aa: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005344ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005344af: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5344b4u); f_0082d8bc();
    /* 005344b4: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005344ba: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005344bd: jne 0x5344f0 */ if (!fZ) goto L_005344f0;
L_005344bf:; BB(0x005344bf);
    /* 005344bf: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005344c2: je 0x5344e7 */ if (fZ) goto L_005344e7;
L_005344c4:; BB(0x005344c4);
    /* 005344c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005344c6: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5344cbu); f_007aa7b8();
L_005344cb:; BB(0x005344cb);
    /* 005344cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5344d0u); f_0082da80();
    /* 005344d0: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5344d5u); f_00794750();
    /* 005344d5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5344dau); f_0082dab0();
    /* 005344da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005344db: mov ecx, edi */ r_ecx = r_edi;
    /* 005344dd: call 0x5315f0 */ r_esp -= 4; W32(r_esp, 0x5344e2u); f_005315f0();
L_005344e2:; BB(0x005344e2);
    /* 005344e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005344e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005344e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005344e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005344e6: ret  */ FN_RET(0x005343fc); r_esp += 4; return;
L_005344e7:; BB(0x005344e7);
    /* 005344e7: mov ecx, edi */ r_ecx = r_edi;
    /* 005344e9: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5344eeu); f_007aa668();
    /* 005344ee: jmp 0x5344cb */ goto L_005344cb;
L_005344f0:; BB(0x005344f0);
    /* 005344f0: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 005344f6: lea ebx, [edi + 0x398] */ r_ebx = (u32)(r_edi+0x398u);
    /* 005344fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005344fe: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x534501u); call_ind(t); }
    /* 00534501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534503: jne 0x534509 */ if (!fZ) goto L_00534509;
L_00534505:; BB(0x00534505);
    /* 00534505: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00534507: jmp 0x5344cb */ goto L_005344cb;
L_00534509:; BB(0x00534509);
    /* 00534509: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 0053450f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534511: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x534514u); call_ind(t); }
    /* 00534514: mov ecx, edi */ r_ecx = r_edi;
    /* 00534516: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x53451bu); f_008173d0();
    /* 0053451b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053451d: jne 0x53452b */ if (!fZ) goto L_0053452b;
L_0053451f:; BB(0x0053451f);
    /* 0053451f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534522: je 0x534538 */ if (fZ) goto L_00534538;
L_00534524:; BB(0x00534524);
    /* 00534524: mov ecx, edi */ r_ecx = r_edi;
    /* 00534526: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x53452bu); f_007aa7b8();
L_0053452b:; BB(0x0053452b);
    /* 0053452b: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00534531: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534533: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x534536u); call_ind(t); }
    /* 00534536: jmp 0x5344cb */ goto L_005344cb;
L_00534538:; BB(0x00534538);
    /* 00534538: mov ecx, edi */ r_ecx = r_edi;
    /* 0053453a: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x53453fu); f_007aa668();
    /* 0053453f: jmp 0x53452b */ goto L_0053452b;
L_00534541:; BB(0x00534541);
    /* 00534541: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00534544: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x534549u); f_0082d838();
    /* 00534549: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0053454c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053454e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x534553u); f_0082e9e4();
    /* 00534553: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00534556: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00534558: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53455du); f_0082d8bc();
    /* 0053455d: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534560: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x534565u); f_0082e1e8();
    /* 00534565: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534566: jmp 0x5344cb */ goto L_005344cb;
}

void f_00534544(void)
{
    FN_ENTER(0x00534544);
    goto L_00534544;
L_005344cb:; BB(0x005344cb);
    /* 005344cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5344d0u); f_0082da80();
    /* 005344d0: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5344d5u); f_00794750();
    /* 005344d5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5344dau); f_0082dab0();
    /* 005344da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005344db: mov ecx, edi */ r_ecx = r_edi;
    /* 005344dd: call 0x5315f0 */ r_esp -= 4; W32(r_esp, 0x5344e2u); f_005315f0();
    /* 005344e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005344e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005344e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005344e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005344e6: ret  */ FN_RET(0x00534544); r_esp += 4; return;
L_00534544:; BB(0x00534544);
    /* 00534544: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x534549u); f_0082d838();
    /* 00534549: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0053454c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053454e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x534553u); f_0082e9e4();
    /* 00534553: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00534556: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00534558: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53455du); f_0082d8bc();
    /* 0053455d: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534560: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x534565u); f_0082e1e8();
    /* 00534565: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534566: jmp 0x5344cb */ goto L_005344cb;
}

void f_0053456c(void) /* sub_53456C */
{
    FN_ENTER(0x0053456c);
    /* 0053456c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053456d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053456f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534571: call 0x531654 */ r_esp -= 4; W32(r_esp, 0x534576u); f_00531654();
    /* 00534576: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x53457bu); f_004f7c84();
    /* 0053457b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053457e: je 0x5346f3 */ if (fZ) goto L_005346f3;
L_00534584:; BB(0x00534584);
    /* 00534584: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0053458a: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053458f: jne 0x53471b */ if (!fZ) goto L_0053471b;
L_00534595:; BB(0x00534595);
    /* 00534595: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053459a: je 0x5345da */ if (fZ) goto L_005345da;
L_0053459c:; BB(0x0053459c);
    /* 0053459c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053459e: je 0x5345af */ if (fZ) goto L_005345af;
L_005345a0:; BB(0x005345a0);
    /* 005345a0: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005345a7: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005345ad: jmp 0x5345ee */ goto L_005345ee;
L_005345af:; BB(0x005345af);
    /* 005345af: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005345b6: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005345b9: je 0x5345d2 */ if (fZ) goto L_005345d2;
L_005345bb:; BB(0x005345bb);
    /* 005345bb: mov dword ptr [ebp + 0x37c], 9 */ W32((u32)(r_ebp+0x37cu), 0x9u);
    /* 005345c5: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 005345cb: mov edx, 9 */ r_edx = 0x9u;
    /* 005345d0: jmp 0x5345ee */ goto L_005345ee;
L_005345d2:; BB(0x005345d2);
    /* 005345d2: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005345d8: jmp 0x5345ee */ goto L_005345ee;
L_005345da:; BB(0x005345da);
    /* 005345da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005345dc: call 0x534764 */ r_esp -= 4; W32(r_esp, 0x5345e1u); f_00534764();
    /* 005345e1: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005345e8: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_005345ee:; BB(0x005345ee);
    /* 005345ee: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005345f0: je 0x534625 */ if (fZ) goto L_00534625;
L_005345f2:; BB(0x005345f2);
    /* 005345f2: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005345f8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005345fb: je 0x534614 */ if (fZ) goto L_00534614;
L_005345fd:; BB(0x005345fd);
    /* 005345fd: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 00534607: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534609: call 0x534994 */ r_esp -= 4; W32(r_esp, 0x53460eu); f_00534994();
    /* 0053460e: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_00534614:; BB(0x00534614);
    /* 00534614: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 0053461e: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_00534625:; BB(0x00534625);
    /* 00534625: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 0053462c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053462d: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x534632u); f_00578c74();
    /* 00534632: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534634: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534636: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x53463bu); f_007706b0();
    /* 0053463b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053463d: call 0x52d00c */ r_esp -= 4; W32(r_esp, 0x534642u); f_0052d00c();
    /* 00534642: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534644: call 0x534994 */ r_esp -= 4; W32(r_esp, 0x534649u); f_00534994();
    /* 00534649: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0053464f: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534654: jne 0x5346f5 */ if (!fZ) goto L_005346f5;
L_0053465a:; BB(0x0053465a);
    /* 0053465a: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053465f: je 0x53468c */ if (fZ) goto L_0053468c;
L_00534661:; BB(0x00534661);
    /* 00534661: fld dword ptr [0x922b7c] */ FPUSH(R_F32((u32)(0x922b7cu)));
    /* 00534667: fadd dword ptr [ebp + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c4u));
    /* 0053466d: fld dword ptr [0x922b78] */ FPUSH(R_F32((u32)(0x922b78u)));
    /* 00534673: fsub dword ptr [0x922b74] */ ST(0) = ST(0) - R_F32((u32)(0x922b74u));
    /* 00534679: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053467b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053467d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053467e: ja 0x534682 */ if ((!fC&&!fZ)) goto L_00534682;
L_00534680:; BB(0x00534680);
    /* 00534680: fst st(1) */ ST(1) = ST(0);
L_00534682:; BB(0x00534682);
    /* 00534682: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00534684: fstp dword ptr [ebp + 0x3c4] */ W_F32((u32)(r_ebp+0x3c4u), ST(0)); FPOP();
    /* 0053468a: jmp 0x534693 */ goto L_00534693;
L_0053468c:; BB(0x0053468c);
    /* 0053468c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053468e: call 0x531594 */ r_esp -= 4; W32(r_esp, 0x534693u); f_00531594();
L_00534693:; BB(0x00534693);
    /* 00534693: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534695: call 0x5314ec */ r_esp -= 4; W32(r_esp, 0x53469au); f_005314ec();
    /* 0053469a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053469c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053469d: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005346a0: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 005346a3: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 005346a6: fld dword ptr [ebp + 0x3bc] */ FPUSH(R_F32((u32)(r_ebp+0x3bcu)));
    /* 005346ac: fld dword ptr [ebp + 0x3c4] */ FPUSH(R_F32((u32)(r_ebp+0x3c4u)));
    /* 005346b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005346b4: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 005346b6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005346b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005346ba: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005346bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005346be: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 005346c4: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 005346ca: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005346d0: mov dword ptr [ebp + 0x308], edx */ W32((u32)(r_ebp+0x308u), r_edx);
    /* 005346d6: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 005346d9: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5346deu); f_006946a8();
    /* 005346de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005346e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005346e2: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005346e5: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005346ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005346eb: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5346f0u); f_00805608();
    /* 005346f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005346f3:; BB(0x005346f3);
    /* 005346f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005346f4: ret  */ FN_RET(0x0053456c); r_esp += 4; return;
L_005346f5:; BB(0x005346f5);
    /* 005346f5: movzx eax, word ptr [ebp + 0x3ce] */ r_eax = (u32)R16((u32)(r_ebp+0x3ceu));
    /* 005346fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005346fd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x534702u); f_007b4d18();
    /* 00534702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534705: je 0x5346f3 */ if (fZ) goto L_005346f3;
L_00534707:; BB(0x00534707);
    /* 00534707: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0053470a: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0053470d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00534710: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00534713: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00534716: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00534719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053471a: ret  */ FN_RET(0x0053456c); r_esp += 4; return;
L_0053471b:; BB(0x0053471b);
    /* 0053471b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053471d: je 0x534731 */ if (fZ) goto L_00534731;
L_0053471f:; BB(0x0053471f);
    /* 0053471f: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00534726: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0053472c: jmp 0x5345ee */ goto L_005345ee;
L_00534731:; BB(0x00534731);
    /* 00534731: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00534738: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053473b: je 0x534757 */ if (fZ) goto L_00534757;
L_0053473d:; BB(0x0053473d);
    /* 0053473d: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 00534747: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0053474d: mov edx, 0xa */ r_edx = 0xau;
    /* 00534752: jmp 0x5345ee */ goto L_005345ee;
L_00534757:; BB(0x00534757);
    /* 00534757: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0053475d: jmp 0x5345ee */ goto L_005345ee;
}

void f_00534764(void) /* sub_534764 */
{
    FN_ENTER(0x00534764);
    /* 00534764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534765: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534766: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00534768: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053476a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053476c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053476e: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x534771u); call_ind(t); }
    /* 00534771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534773: je 0x534781 */ if (fZ) goto L_00534781;
L_00534775:; BB(0x00534775);
    /* 00534775: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053477a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053477c: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x534781u); f_0052ccd8();
L_00534781:; BB(0x00534781);
    /* 00534781: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534783: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x534788u); f_00770738();
    /* 00534788: mov ebp, eax */ r_ebp = r_eax;
    /* 0053478a: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00534791: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534793: je 0x5348df */ if (fZ) goto L_005348df;
L_00534799:; BB(0x00534799);
    /* 00534799: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053479c: je 0x5348df */ if (fZ) goto L_005348df;
L_005347a2:; BB(0x005347a2);
    /* 005347a2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005347a5: jne 0x534920 */ if (!fZ) goto L_00534920;
L_005347ab:; BB(0x005347ab);
    /* 005347ab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005347ad: je 0x534923 */ if (fZ) goto L_00534923;
L_005347b3:; BB(0x005347b3);
    /* 005347b3: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005347b6: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005347b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005347ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005347bb: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5347c0u); f_0078ea50();
    /* 005347c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005347c3: mov ebp, dword ptr [ebx + 0x394] */ r_ebp = R32((u32)(r_ebx+0x394u));
    /* 005347c9: mov edx, ebp */ r_edx = r_ebp;
    /* 005347cb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005347cd: je 0x534856 */ if (fZ) goto L_00534856;
L_005347d3:; BB(0x005347d3);
    /* 005347d3: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005347d6: jne 0x534824 */ if (!fZ) goto L_00534824;
L_005347d8:; BB(0x005347d8);
    /* 005347d8: fcom dword ptr [0x922b68] */ fx_compare(ST(0), R_F32((u32)(0x922b68u))); 
    /* 005347de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005347e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005347e1: jb 0x534803 */ if (fC) goto L_00534803;
L_005347e3:; BB(0x005347e3);
    /* 005347e3: fcomp dword ptr [0x922b64] */ fx_compare(ST(0), R_F32((u32)(0x922b64u))); FPOP();
    /* 005347e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005347eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005347ec: jbe 0x534874 */ if ((fC||fZ)) goto L_00534874;
L_005347f2:; BB(0x005347f2);
    /* 005347f2: mov dword ptr [ebx + 0x394], 2 */ W32((u32)(r_ebx+0x394u), 0x2u);
    /* 005347fc: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00534801: jmp 0x534874 */ goto L_00534874;
L_00534803:; BB(0x00534803);
    /* 00534803: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00534805: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0053480b: mov dword ptr [ebx + 0x394], 0 */ W32((u32)(r_ebx+0x394u), 0x0u);
    /* 00534815: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053481a: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00534820: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00534822: jmp 0x534874 */ goto L_00534874;
L_00534824:; BB(0x00534824);
    /* 00534824: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534827: jne 0x534872 */ if (!fZ) goto L_00534872;
L_00534829:; BB(0x00534829);
    /* 00534829: fcomp dword ptr [0x922b6c] */ fx_compare(ST(0), R_F32((u32)(0x922b6cu))); FPOP();
    /* 0053482f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00534831: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00534832: jae 0x534874 */ if (!fC) goto L_00534874;
L_00534834:; BB(0x00534834);
    /* 00534834: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0053483a: mov dword ptr [ebx + 0x394], 1 */ W32((u32)(r_ebx+0x394u), 0x1u);
    /* 00534844: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00534849: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053484e: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00534854: jmp 0x534874 */ goto L_00534874;
L_00534856:; BB(0x00534856);
    /* 00534856: fcomp dword ptr [0x922b60] */ fx_compare(ST(0), R_F32((u32)(0x922b60u))); FPOP();
    /* 0053485c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053485e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053485f: jbe 0x534874 */ if ((fC||fZ)) goto L_00534874;
L_00534861:; BB(0x00534861);
    /* 00534861: mov dword ptr [ebx + 0x394], 1 */ W32((u32)(r_ebx+0x394u), 0x1u);
    /* 0053486b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00534870: jmp 0x534874 */ goto L_00534874;
L_00534872:; BB(0x00534872);
    /* 00534872: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00534874:; BB(0x00534874);
    /* 00534874: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534876: je 0x534920 */ if (fZ) goto L_00534920;
L_0053487c:; BB(0x0053487c);
    /* 0053487c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053487e: je 0x5348b6 */ if (fZ) goto L_005348b6;
L_00534880:; BB(0x00534880);
    /* 00534880: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534883: jne 0x534899 */ if (!fZ) goto L_00534899;
L_00534885:; BB(0x00534885);
    /* 00534885: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0053488b: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534890: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00534896: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534898: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_00534899:; BB(0x00534899);
    /* 00534899: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053489c: jne 0x534920 */ if (!fZ) goto L_00534920;
L_005348a2:; BB(0x005348a2);
    /* 005348a2: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005348a8: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348ad: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005348b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005348b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348b5: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_005348b6:; BB(0x005348b6);
    /* 005348b6: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005348bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348be: jne 0x534920 */ if (!fZ) goto L_00534920;
L_005348c0:; BB(0x005348c0);
    /* 005348c0: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005348c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005348ca: je 0x534920 */ if (fZ) goto L_00534920;
L_005348cc:; BB(0x005348cc);
    /* 005348cc: mov dword ptr [ebx + 0x37c], 2 */ W32((u32)(r_ebx+0x37cu), 0x2u);
    /* 005348d6: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005348dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005348dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348de: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_005348df:; BB(0x005348df);
    /* 005348df: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005348e1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005348e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005348e5: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5348e8u); call_ind(t); }
    /* 005348e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348ea: je 0x534920 */ if (fZ) goto L_00534920;
L_005348ec:; BB(0x005348ec);
    /* 005348ec: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005348ee: je 0x534945 */ if (fZ) goto L_00534945;
L_005348f0:; BB(0x005348f0);
    /* 005348f0: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005348f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348f8: jne 0x534916 */ if (!fZ) goto L_00534916;
L_005348fa:; BB(0x005348fa);
    /* 005348fa: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00534901: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534904: je 0x534916 */ if (fZ) goto L_00534916;
L_00534906:; BB(0x00534906);
    /* 00534906: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 00534910: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_00534916:; BB(0x00534916);
    /* 00534916: mov dword ptr [ebx + 0x394], 2 */ W32((u32)(r_ebx+0x394u), 0x2u);
L_00534920:; BB(0x00534920);
    /* 00534920: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534922: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_00534923:; BB(0x00534923);
    /* 00534923: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00534929: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053492b: jne 0x534920 */ if (!fZ) goto L_00534920;
L_0053492d:; BB(0x0053492d);
    /* 0053492d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534930: je 0x534920 */ if (fZ) goto L_00534920;
L_00534932:; BB(0x00534932);
    /* 00534932: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 0053493c: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 00534942: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534944: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_00534945:; BB(0x00534945);
    /* 00534945: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00534948: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0053494b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053494c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053494d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x534952u); f_0078ea50();
    /* 00534952: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534955: fcomp dword ptr [0x922b5c] */ fx_compare(ST(0), R_F32((u32)(0x922b5cu))); FPOP();
    /* 0053495b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053495d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053495e: jbe 0x534989 */ if ((fC||fZ)) goto L_00534989;
L_00534960:; BB(0x00534960);
    /* 00534960: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00534966: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534968: jne 0x534920 */ if (!fZ) goto L_00534920;
L_0053496a:; BB(0x0053496a);
    /* 0053496a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00534971: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534974: je 0x534920 */ if (fZ) goto L_00534920;
L_00534976:; BB(0x00534976);
    /* 00534976: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 00534980: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 00534986: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534988: ret  */ FN_RET(0x00534764); r_esp += 4; return;
L_00534989:; BB(0x00534989);
    /* 00534989: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053498b: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534990u); f_00533078();
    /* 00534990: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534992: ret  */ FN_RET(0x00534764); r_esp += 4; return;
}

void f_00534843(void)
{
    FN_ENTER(0x00534843);
    /* 00534843: add byte ptr [ebp + 1], bh */ { u32 ad = (u32)(r_ebp+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00534849: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053484e: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00534854: jmp 0x534874 */ goto L_00534874;
L_00534874:; BB(0x00534874);
    /* 00534874: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534876: je 0x534920 */ if (fZ) goto L_00534920;
L_0053487c:; BB(0x0053487c);
    /* 0053487c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053487e: je 0x5348b6 */ if (fZ) goto L_005348b6;
L_00534880:; BB(0x00534880);
    /* 00534880: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534883: jne 0x534899 */ if (!fZ) goto L_00534899;
L_00534885:; BB(0x00534885);
    /* 00534885: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0053488b: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534890: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00534896: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534898: ret  */ FN_RET(0x00534843); r_esp += 4; return;
L_00534899:; BB(0x00534899);
    /* 00534899: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053489c: jne 0x534920 */ if (!fZ) goto L_00534920;
L_005348a2:; BB(0x005348a2);
    /* 005348a2: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005348a8: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348ad: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005348b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005348b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348b5: ret  */ FN_RET(0x00534843); r_esp += 4; return;
L_005348b6:; BB(0x005348b6);
    /* 005348b6: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005348bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005348be: jne 0x534920 */ if (!fZ) goto L_00534920;
L_005348c0:; BB(0x005348c0);
    /* 005348c0: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005348c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005348ca: je 0x534920 */ if (fZ) goto L_00534920;
L_005348cc:; BB(0x005348cc);
    /* 005348cc: mov dword ptr [ebx + 0x37c], 2 */ W32((u32)(r_ebx+0x37cu), 0x2u);
    /* 005348d6: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005348dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005348dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348de: ret  */ FN_RET(0x00534843); r_esp += 4; return;
L_00534920:; BB(0x00534920);
    /* 00534920: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534922: ret  */ FN_RET(0x00534843); r_esp += 4; return;
}

void f_00534953(void)
{
    FN_ENTER(0x00534953);
    goto L_00534953;
L_00534920:; BB(0x00534920);
    /* 00534920: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534922: ret  */ FN_RET(0x00534953); r_esp += 4; return;
L_00534953:; BB(0x00534953);
    /* 00534953: les ecx, ptr [eax] */ UNSUP(0x00534953, "les ecx, ptr [eax]");
    /* 00534955: fcomp dword ptr [0x922b5c] */ fx_compare(ST(0), R_F32((u32)(0x922b5cu))); FPOP();
    /* 0053495b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053495d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053495e: jbe 0x534989 */ if ((fC||fZ)) goto L_00534989;
L_00534960:; BB(0x00534960);
    /* 00534960: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00534966: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534968: jne 0x534920 */ if (!fZ) goto L_00534920;
L_0053496a:; BB(0x0053496a);
    /* 0053496a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00534971: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534974: je 0x534920 */ if (fZ) goto L_00534920;
L_00534976:; BB(0x00534976);
    /* 00534976: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 00534980: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 00534986: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534988: ret  */ FN_RET(0x00534953); r_esp += 4; return;
L_00534989:; BB(0x00534989);
    /* 00534989: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053498b: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534990u); f_00533078();
    /* 00534990: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534992: ret  */ FN_RET(0x00534953); r_esp += 4; return;
}

void f_00534994(void) /* sub_534994 */
{
    FN_ENTER(0x00534994);
    /* 00534994: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0053499b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053499e: ja 0x5349f4 */ if ((!fC&&!fZ)) goto L_005349f4;
L_005349a0:; BB(0x005349a0);
    /* 005349a0: mov eax, dword ptr [eax*4 + 0x922ab8] */ r_eax = R32((u32)(r_eax*4+0x922ab8u));
    /* 005349a7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x00534994); r_esp += 4; return;
}

void f_005349a9(void)
{
    FN_ENTER(0x005349a9);
    /* 005349a9: call 0x5349f8 */ r_esp -= 4; W32(r_esp, 0x5349aeu); f_005349f8();
    /* 005349ae: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349a9); r_esp += 4; return;
}

void f_005349b0(void)
{
    FN_ENTER(0x005349b0);
    /* 005349b0: call 0x534af4 */ r_esp -= 4; W32(r_esp, 0x5349b5u); f_00534af4();
    /* 005349b5: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349b0); r_esp += 4; return;
}

void f_005349b7(void)
{
    FN_ENTER(0x005349b7);
    /* 005349b7: call 0x534b74 */ r_esp -= 4; W32(r_esp, 0x5349bcu); f_00534b74();
    /* 005349bc: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349b7); r_esp += 4; return;
}

void f_005349be(void)
{
    FN_ENTER(0x005349be);
    /* 005349be: call 0x534c50 */ r_esp -= 4; W32(r_esp, 0x5349c3u); f_00534c50();
    /* 005349c3: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349be); r_esp += 4; return;
}

void f_005349c5(void)
{
    FN_ENTER(0x005349c5);
    /* 005349c5: call 0x534ce4 */ r_esp -= 4; W32(r_esp, 0x5349cau); f_00534ce4();
    /* 005349ca: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349c5); r_esp += 4; return;
}

void f_005349cc(void)
{
    FN_ENTER(0x005349cc);
    /* 005349cc: call 0x534dbc */ r_esp -= 4; W32(r_esp, 0x5349d1u); f_00534dbc();
    /* 005349d1: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349cc); r_esp += 4; return;
}

void f_005349d3(void)
{
    FN_ENTER(0x005349d3);
    /* 005349d3: call 0x534e84 */ r_esp -= 4; W32(r_esp, 0x5349d8u); f_00534e84();
    /* 005349d8: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349d3); r_esp += 4; return;
}

void f_005349da(void)
{
    FN_ENTER(0x005349da);
    /* 005349da: call 0x534f2c */ r_esp -= 4; W32(r_esp, 0x5349dfu); f_00534f2c();
    /* 005349df: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349da); r_esp += 4; return;
}

void f_005349e1(void)
{
    FN_ENTER(0x005349e1);
    /* 005349e1: call 0x535070 */ r_esp -= 4; W32(r_esp, 0x5349e6u); f_00535070();
    /* 005349e6: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349e1); r_esp += 4; return;
}

void f_005349e8(void)
{
    FN_ENTER(0x005349e8);
    /* 005349e8: call 0x535280 */ r_esp -= 4; W32(r_esp, 0x5349edu); f_00535280();
    /* 005349ed: jmp 0x5349f4 */ goto L_005349f4;
L_005349f4:; BB(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349e8); r_esp += 4; return;
}

void f_005349ef(void)
{
    FN_ENTER(0x005349ef);
    /* 005349ef: call 0x5353b0 */ r_esp -= 4; W32(r_esp, 0x5349f4u); f_005353b0();
    /* 005349f4: ret  */ FN_RET(0x005349ef); r_esp += 4; return;
}

void f_005349f4(void)
{
    FN_ENTER(0x005349f4);
    /* 005349f4: ret  */ FN_RET(0x005349f4); r_esp += 4; return;
}

void f_005349f8(void) /* sub_5349F8 */
{
    FN_ENTER(0x005349f8);
    /* 005349f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005349f9: mov edi, ecx */ r_edi = r_ecx;
    /* 005349fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005349fd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x534a02u); f_00770738();
    /* 00534a02: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00534a08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534a0a: je 0x534aa0 */ if (fZ) goto L_00534aa0;
L_00534a10:; BB(0x00534a10);
    /* 00534a10: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534a13: jne 0x534ac9 */ if (!fZ) goto L_00534ac9;
L_00534a19:; BB(0x00534a19);
    /* 00534a19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534a1b: je 0x534acb */ if (fZ) goto L_00534acb;
L_00534a21:; BB(0x00534a21);
    /* 00534a21: movsx edx, word ptr [edi + 0x3d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x3d0u));
    /* 00534a28: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00534a2b: mov word ptr [edi + 0x3d0], dx */ W16((u32)(r_edi+0x3d0u), (u16)r_edx);
    /* 00534a32: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00534a35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00534a37: jle 0x534acb */ if ((fZ||fS!=fO)) goto L_00534acb;
L_00534a3d:; BB(0x00534a3d);
    /* 00534a3d: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00534a43: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 00534a4d: mov ecx, edi */ r_ecx = r_edi;
    /* 00534a4f: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00534a52: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534a58: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534a5e: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534a64: push 0xbf19999a */ { u32 v = 0xbf19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00534a69: call 0x52bfd4 */ r_esp -= 4; W32(r_esp, 0x534a6eu); f_0052bfd4();
    /* 00534a6e: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 00534a74: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 00534a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534a7b: mov ecx, edi */ r_ecx = r_edi;
    /* 00534a7d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534a80: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x534a85u); f_00771858();
    /* 00534a85: mov ecx, edi */ r_ecx = r_edi;
    /* 00534a87: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534a8cu); f_007aa094();
    /* 00534a8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534a8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534a90: mov ecx, edi */ r_ecx = r_edi;
    /* 00534a92: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534a97u); f_00772b44();
    /* 00534a97: mov ecx, edi */ r_ecx = r_edi;
    /* 00534a99: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x534a9eu); f_007b6880();
    /* 00534a9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534a9f: ret  */ FN_RET(0x005349f8); r_esp += 4; return;
L_00534aa0:; BB(0x00534aa0);
    /* 00534aa0: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00534aa3: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534aa8: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00534aab: mov edx, 1 */ r_edx = 0x1u;
    /* 00534ab0: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00534ab7: mov dword ptr [edi + 0x384], edx */ W32((u32)(r_edi+0x384u), r_edx);
    /* 00534abd: mov eax, 0x78 */ r_eax = 0x78u;
    /* 00534ac2: mov word ptr [edi + 0x3d0], ax */ W16((u32)(r_edi+0x3d0u), (u16)r_eax);
L_00534ac9:; BB(0x00534ac9);
    /* 00534ac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534aca: ret  */ FN_RET(0x005349f8); r_esp += 4; return;
L_00534acb:; BB(0x00534acb);
    /* 00534acb: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534ad1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534ad3: jne 0x534ac9 */ if (!fZ) goto L_00534ac9;
L_00534ad5:; BB(0x00534ad5);
    /* 00534ad5: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00534adc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534ade: je 0x534ac9 */ if (fZ) goto L_00534ac9;
L_00534ae0:; BB(0x00534ae0);
    /* 00534ae0: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 00534aea: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00534af0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534af1: ret  */ FN_RET(0x005349f8); r_esp += 4; return;
}

void f_00534af4(void) /* sub_534AF4 */
{
    FN_ENTER(0x00534af4);
    /* 00534af4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534af5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534af6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00534af8: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00534afe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534b00: je 0x534b26 */ if (fZ) goto L_00534b26;
L_00534b02:; BB(0x00534b02);
    /* 00534b02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534b05: je 0x534b1e */ if (fZ) goto L_00534b1e;
L_00534b07:; BB(0x00534b07);
    /* 00534b07: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534b0a: jne 0x534b6e */ if (!fZ) goto L_00534b6e;
L_00534b0c:; BB(0x00534b0c);
    /* 00534b0c: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00534b12: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534b15: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00534b1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534b1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b1d: ret  */ FN_RET(0x00534af4); r_esp += 4; return;
L_00534b1e:; BB(0x00534b1e);
    /* 00534b1e: lea ebx, [ebp + 0x398] */ r_ebx = (u32)(r_ebp+0x398u);
    /* 00534b24: jmp 0x534b4c */ goto L_00534b4c;
L_00534b26:; BB(0x00534b26);
    /* 00534b26: lea ebx, [ebp + 0x398] */ r_ebx = (u32)(r_ebp+0x398u);
    /* 00534b2c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00534b2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534b30: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x534b33u); call_ind(t); }
    /* 00534b33: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00534b39: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 00534b43: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00534b46: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
L_00534b4c:; BB(0x00534b4c);
    /* 00534b4c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00534b4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534b50: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x534b53u); call_ind(t); }
    /* 00534b53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534b56: jne 0x534b6e */ if (!fZ) goto L_00534b6e;
L_00534b58:; BB(0x00534b58);
    /* 00534b58: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00534b5e: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534b61: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00534b67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534b69: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534b6eu); f_00533078();
L_00534b6e:; BB(0x00534b6e);
    /* 00534b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534b70: ret  */ FN_RET(0x00534af4); r_esp += 4; return;
}

void f_00534b74(void) /* sub_534B74 */
{
    FN_ENTER(0x00534b74);
    /* 00534b74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534b75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534b76: mov edi, ecx */ r_edi = r_ecx;
    /* 00534b78: movzx eax, word ptr [edi + 0x3ce] */ r_eax = (u32)R16((u32)(r_edi+0x3ceu));
    /* 00534b7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534b80: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x534b85u); f_00786b3c();
    /* 00534b85: mov ebx, eax */ r_ebx = r_eax;
    /* 00534b87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534b8a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534b8c: je 0x534c2c */ if (fZ) goto L_00534c2c;
L_00534b92:; BB(0x00534b92);
    /* 00534b92: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00534b95: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534b9b: jne 0x534c2c */ if (!fZ) goto L_00534c2c;
L_00534ba1:; BB(0x00534ba1);
    /* 00534ba1: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00534ba7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534ba9: je 0x534bb2 */ if (fZ) goto L_00534bb2;
L_00534bab:; BB(0x00534bab);
    /* 00534bab: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534bae: je 0x534bd6 */ if (fZ) goto L_00534bd6;
L_00534bb0:; BB(0x00534bb0);
    /* 00534bb0: jmp 0x534c29 */ goto L_00534c29;
L_00534bb2:; BB(0x00534bb2);
    /* 00534bb2: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00534bb8: mov eax, 1 */ r_eax = 0x1u;
    /* 00534bbd: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00534bc4: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00534bca: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00534bd0: mov dword ptr [edi + 0x384], eax */ W32((u32)(r_edi+0x384u), r_eax);
L_00534bd6:; BB(0x00534bd6);
    /* 00534bd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00534bd8: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534bdb: mov ecx, edi */ r_ecx = r_edi;
    /* 00534bdd: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00534be0: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534be3: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x534be8u); f_00771c8c();
    /* 00534be8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00534bea: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534bed: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 00534bf3: mov ecx, edi */ r_ecx = r_edi;
    /* 00534bf5: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00534bf8: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534bfb: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534bfe: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x534c03u); f_00771bf4();
    /* 00534c03: fstp dword ptr [edi + 0x3c8] */ W_F32((u32)(r_edi+0x3c8u), ST(0)); FPOP();
    /* 00534c09: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c0b: call 0x7718b4 */ r_esp -= 4; W32(r_esp, 0x534c10u); f_007718b4();
    /* 00534c10: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c12: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534c17u); f_007aa094();
    /* 00534c17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534c19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534c1b: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c1d: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534c22u); f_00772b44();
    /* 00534c22: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c24: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x534c29u); f_007b6894();
L_00534c29:; BB(0x00534c29);
    /* 00534c29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534c2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534c2b: ret  */ FN_RET(0x00534b74); r_esp += 4; return;
L_00534c2c:; BB(0x00534c2c);
    /* 00534c2c: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c2e: call 0x534c38 */ r_esp -= 4; W32(r_esp, 0x534c33u); f_00534c38();
    /* 00534c33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534c34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534c35: ret  */ FN_RET(0x00534b74); r_esp += 4; return;
}

void f_00534c38(void) /* sub_534C38 */
{
    FN_ENTER(0x00534c38);
    /* 00534c38: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00534c3e: and eax, 0xdfffffff */ {  u32 a = r_eax; u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534c43: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00534c49: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534c4eu); f_00533078();
    /* 00534c4e: ret  */ FN_RET(0x00534c38); r_esp += 4; return;
}

void f_00534c50(void) /* sub_534C50 */
{
    FN_ENTER(0x00534c50);
    /* 00534c50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534c51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c52: mov edi, ecx */ r_edi = r_ecx;
    /* 00534c54: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00534c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534c5c: je 0x534cb0 */ if (fZ) goto L_00534cb0;
L_00534c5e:; BB(0x00534c5e);
    /* 00534c5e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534c61: jne 0x534cad */ if (!fZ) goto L_00534cad;
L_00534c63:; BB(0x00534c63);
    /* 00534c63: lea ebp, [edi + 0x398] */ r_ebp = (u32)(r_edi+0x398u);
L_00534c69:; BB(0x00534c69);
    /* 00534c69: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c6b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534c70u); f_007aa094();
    /* 00534c70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534c72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534c74: mov ecx, edi */ r_ecx = r_edi;
    /* 00534c76: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534c7bu); f_00772b44();
    /* 00534c7b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00534c7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534c80: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x534c83u); call_ind(t); }
    /* 00534c83: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534c86: jne 0x534cad */ if (!fZ) goto L_00534cad;
L_00534c88:; BB(0x00534c88);
    /* 00534c88: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534c8e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00534c91: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 00534c9b: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534c9e: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534ca4: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534caa: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00534cad:; BB(0x00534cad);
    /* 00534cad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534caf: ret  */ FN_RET(0x00534c50); r_esp += 4; return;
L_00534cb0:; BB(0x00534cb0);
    /* 00534cb0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00534cb2: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 00534cb9: lea ebp, [edi + 0x398] */ r_ebp = (u32)(r_edi+0x398u);
    /* 00534cbf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00534cc2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00534cc4: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x534cc7u); call_ind(t); }
    /* 00534cc7: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534ccd: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 00534cd7: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00534cda: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534ce0: jmp 0x534c69 */ goto L_00534c69;
}

void f_00534ce4(void) /* sub_534CE4 */
{
    FN_ENTER(0x00534ce4);
    /* 00534ce4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ce5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ce6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00534ce8: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00534cee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534cf0: je 0x534cfd */ if (fZ) goto L_00534cfd;
L_00534cf2:; BB(0x00534cf2);
    /* 00534cf2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534cf5: jne 0x534db8 */ if (!fZ) goto L_00534db8;
L_00534cfb:; BB(0x00534cfb);
    /* 00534cfb: jmp 0x534d35 */ goto L_00534d35;
L_00534cfd:; BB(0x00534cfd);
    /* 00534cfd: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00534d00: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 00534d03: mov ebp, dword ptr [ebx + 0x54] */ r_ebp = R32((u32)(r_ebx+0x54u));
    /* 00534d06: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534d0b: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00534d0e: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00534d11: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00534d16: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00534d1d: mov dword ptr [ebx + 0x2a4], edx */ W32((u32)(r_ebx+0x2a4u), r_edx);
    /* 00534d23: mov dword ptr [ebx + 0x2a8], ebp */ W32((u32)(r_ebx+0x2a8u), r_ebp);
    /* 00534d29: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
    /* 00534d2f: mov dword ptr [ebx + 0x384], ecx */ W32((u32)(r_ebx+0x384u), r_ecx);
L_00534d35:; BB(0x00534d35);
    /* 00534d35: mov ebp, dword ptr [ebx + 0x300] */ r_ebp = R32((u32)(r_ebx+0x300u));
    /* 00534d3b: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00534d41: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00534d47: mov ecx, dword ptr [ebx + 0x358] */ r_ecx = R32((u32)(r_ebx+0x358u));
    /* 00534d4d: mov dword ptr [ebx + 0x298], ebp */ W32((u32)(r_ebx+0x298u), r_ebp);
    /* 00534d53: mov dword ptr [ebx + 0x29c], edx */ W32((u32)(r_ebx+0x29cu), r_edx);
    /* 00534d59: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 00534d63: mov dword ptr [ebx + 0x2a0], eax */ W32((u32)(r_ebx+0x2a0u), r_eax);
    /* 00534d69: push dword ptr [ebx + 0x2ac] */ { u32 v = R32((u32)(r_ebx+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00534d6f: push dword ptr [ebx + 0x2a8] */ { u32 v = R32((u32)(r_ebx+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534d75: push dword ptr [ebx + 0x2a4] */ { u32 v = R32((u32)(r_ebx+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534d7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d7e: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534d81: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534d83: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x534d88u); f_00771f5c();
    /* 00534d88: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 00534d8e: lea eax, [ebx + 0x30c] */ r_eax = (u32)(r_ebx+0x30cu);
    /* 00534d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534d95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534d97: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00534d9a: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x534d9fu); f_00771858();
    /* 00534d9f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00534da1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534da3: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x534da6u); call_ind(t); }
    /* 00534da6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534da8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534dadu); f_007aa094();
    /* 00534dad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534db1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534db3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534db8u); f_00772b44();
L_00534db8:; BB(0x00534db8);
    /* 00534db8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534db9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534dba: ret  */ FN_RET(0x00534ce4); r_esp += 4; return;
}

void f_00534dbc(void) /* sub_534DBC */
{
    FN_ENTER(0x00534dbc);
    /* 00534dbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534dbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00534dbe: mov edi, ecx */ r_edi = r_ecx;
    /* 00534dc0: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00534dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534dc8: je 0x534dfe */ if (fZ) goto L_00534dfe;
L_00534dca:; BB(0x00534dca);
    /* 00534dca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534dcd: je 0x534df6 */ if (fZ) goto L_00534df6;
L_00534dcf:; BB(0x00534dcf);
    /* 00534dcf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534dd2: jne 0x534e81 */ if (!fZ) goto L_00534e81;
L_00534dd8:; BB(0x00534dd8);
    /* 00534dd8: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534dde: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00534de1: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534de4: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534dea: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534df0: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00534df3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534df4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534df5: ret  */ FN_RET(0x00534dbc); r_esp += 4; return;
L_00534df6:; BB(0x00534df6);
    /* 00534df6: lea ebx, [edi + 0x398] */ r_ebx = (u32)(r_edi+0x398u);
    /* 00534dfc: jmp 0x534e43 */ goto L_00534e43;
L_00534dfe:; BB(0x00534dfe);
    /* 00534dfe: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534e04: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00534e07: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00534e0d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00534e10: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534e16: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00534e19: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00534e1b: mov word ptr [edi + 0xb8], bx */ W16((u32)(r_edi+0xb8u), (u16)r_ebx);
    /* 00534e22: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00534e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534e26: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x534e2bu); f_00578a20();
    /* 00534e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00534e2c: lea ebx, [edi + 0x398] */ r_ebx = (u32)(r_edi+0x398u);
    /* 00534e32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534e34: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x534e39u); f_00512494();
    /* 00534e39: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_00534e43:; BB(0x00534e43);
    /* 00534e43: mov ecx, edi */ r_ecx = r_edi;
    /* 00534e45: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534e4au); f_007aa094();
    /* 00534e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534e4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534e4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00534e50: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534e55u); f_00772b44();
    /* 00534e55: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00534e57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534e59: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x534e5cu); call_ind(t); }
    /* 00534e5c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534e5f: jne 0x534e81 */ if (!fZ) goto L_00534e81;
L_00534e61:; BB(0x00534e61);
    /* 00534e61: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534e67: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 00534e71: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534e74: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534e7a: mov ecx, edi */ r_ecx = r_edi;
    /* 00534e7c: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534e81u); f_00533078();
L_00534e81:; BB(0x00534e81);
    /* 00534e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534e82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534e83: ret  */ FN_RET(0x00534dbc); r_esp += 4; return;
}

void f_00534e45(void)
{
    FN_ENTER(0x00534e45);
    /* 00534e45: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534e4au); f_007aa094();
    /* 00534e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534e4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534e4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00534e50: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x534e55u); f_00772b44();
    /* 00534e55: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00534e57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00534e59: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x534e5cu); call_ind(t); }
    /* 00534e5c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534e5f: jne 0x534e81 */ if (!fZ) goto L_00534e81;
L_00534e61:; BB(0x00534e61);
    /* 00534e61: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00534e67: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 00534e71: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534e74: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00534e7a: mov ecx, edi */ r_ecx = r_edi;
    /* 00534e7c: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x534e81u); f_00533078();
L_00534e81:; BB(0x00534e81);
    /* 00534e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00534e82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534e83: ret  */ FN_RET(0x00534e45); r_esp += 4; return;
}

void f_00534e84(void) /* sub_534E84 */
{
    FN_ENTER(0x00534e84);
    /* 00534e84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534e85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00534e86: mov edi, ecx */ r_edi = r_ecx;
    /* 00534e88: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00534e8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534e90: je 0x534ea7 */ if (fZ) goto L_00534ea7;
L_00534e92:; BB(0x00534e92);
    /* 00534e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534e95: je 0x534e9f */ if (fZ) goto L_00534e9f;
L_00534e97:; BB(0x00534e97);
    /* 00534e97: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534e9a: jne 0x534f05 */ if (!fZ) goto L_00534f05;
L_00534e9c:; BB(0x00534e9c);
    /* 00534e9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00534e9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534e9e: ret  */ FN_RET(0x00534e84); r_esp += 4; return;
L_00534e9f:; BB(0x00534e9f);
    /* 00534e9f: lea esi, [edi + 0x398] */ r_esi = (u32)(r_edi+0x398u);
    /* 00534ea5: jmp 0x534ef2 */ goto L_00534ef2;
L_00534ea7:; BB(0x00534ea7);
    /* 00534ea7: mov ecx, edi */ r_ecx = r_edi;
    /* 00534ea9: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x534eaeu); f_00787534();
    /* 00534eae: mov eax, 4 */ r_eax = 0x4u;
    /* 00534eb3: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00534eba: lea esi, [edi + 0x398] */ r_esi = (u32)(r_edi+0x398u);
    /* 00534ec0: mov ecx, esi */ r_ecx = r_esi;
    /* 00534ec2: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x534ec7u); f_00512458();
    /* 00534ec7: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00534ecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534ece: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x534ed3u); f_005787fc();
    /* 00534ed3: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00534ed6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00534ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534ed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534edb: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00534ee0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x534ee5u); f_00814298();
    /* 00534ee5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534ee8: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_00534ef2:; BB(0x00534ef2);
    /* 00534ef2: mov ecx, edi */ r_ecx = r_edi;
    /* 00534ef4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534ef9u); f_007aa094();
    /* 00534ef9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00534efb: mov ecx, esi */ r_ecx = r_esi;
    /* 00534efd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x534f00u); call_ind(t); }
    /* 00534f00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00534f03: je 0x534f08 */ if (fZ) goto L_00534f08;
L_00534f05:; BB(0x00534f05);
    /* 00534f05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00534f06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534f07: ret  */ FN_RET(0x00534e84); r_esp += 4; return;
L_00534f08:; BB(0x00534f08);
    /* 00534f08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00534f0a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00534f0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534f0e: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x534f13u); f_005786e8();
    /* 00534f13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00534f14: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x534f19u); f_008113e4();
    /* 00534f19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534f1c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00534f20: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00534f25: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00534f29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00534f2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00534f2b: ret  */ FN_RET(0x00534e84); r_esp += 4; return;
}

void f_00534f2c(void) /* sub_534F2C */
{
    FN_ENTER(0x00534f2c);
    /* 00534f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00534f2d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534f30: mov esi, ecx */ r_esi = r_ecx;
    /* 00534f32: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00534f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534f3a: je 0x534f47 */ if (fZ) goto L_00534f47;
L_00534f3c:; BB(0x00534f3c);
    /* 00534f3c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534f3f: jne 0x535068 */ if (!fZ) goto L_00535068;
L_00534f45:; BB(0x00534f45);
    /* 00534f45: jmp 0x534f68 */ goto L_00534f68;
L_00534f47:; BB(0x00534f47);
    /* 00534f47: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00534f4a: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00534f54: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534f59: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00534f5c: mov edx, 3 */ r_edx = 0x3u;
    /* 00534f61: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
L_00534f68:; BB(0x00534f68);
    /* 00534f68: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f6a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534f6fu); f_007aa094();
    /* 00534f6f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00534f75: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00534f7b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00534f7e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00534f81: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00534f87: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00534f8d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00534f90: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f92: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00534f96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00534f9a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00534f9e: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00534fa4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00534fa8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00534fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534fac: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x534fb1u); f_00771e14();
    /* 00534fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534fb3: je 0x534fcb */ if (fZ) goto L_00534fcb;
L_00534fb5:; BB(0x00534fb5);
    /* 00534fb5: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fbb: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc1: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534fc9: jmp 0x534fe4 */ goto L_00534fe4;
L_00534fcb:; BB(0x00534fcb);
    /* 00534fcb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00534fcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00534fcf: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x534fd2u); call_ind(t); }
    /* 00534fd2: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fd8: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00534fde: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
L_00534fe4:; BB(0x00534fe4);
    /* 00534fe4: fld dword ptr [0x922b3c] */ FPUSH(R_F32((u32)(0x922b3cu)));
    /* 00534fea: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00534fec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00534fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534ff0: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 00534ff6: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00534ffc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534fff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535002: mov ecx, esi */ r_ecx = r_esi;
    /* 00535004: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053500c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x535011u); f_00772b44();
    /* 00535011: mov ecx, esi */ r_ecx = r_esi;
    /* 00535013: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x535018u); f_007b6880();
    /* 00535018: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0053501b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053501d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535021: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00535026: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53502bu); f_008144b0();
    /* 0053502b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053502e: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00535034: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535037: je 0x535068 */ if (fZ) goto L_00535068;
L_00535039:; BB(0x00535039);
    /* 00535039: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0053503c: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00535042: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535047: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0053504a: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 00535051: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00535054: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0053505a: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00535061: mov ecx, esi */ r_ecx = r_esi;
    /* 00535063: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x535068u); f_00533078();
L_00535068:; BB(0x00535068);
    /* 00535068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053506b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053506c: ret  */ FN_RET(0x00534f2c); r_esp += 4; return;
}

void f_00534f4c(void)
{
    FN_ENTER(0x00534f4c);
    /* 00534f4c: test byte ptr [ebx], al */ {  u32 a = R8((u32)(r_ebx)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 00534f4e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00534f50: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00534f52: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00534f54: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534f59: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00534f5c: mov edx, 3 */ r_edx = 0x3u;
    /* 00534f61: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00534f68: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f6a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534f6fu); f_007aa094();
    /* 00534f6f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00534f75: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00534f7b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00534f7e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00534f81: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00534f87: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00534f8d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00534f90: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f92: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00534f96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00534f9a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00534f9e: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00534fa4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00534fa8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00534fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534fac: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x534fb1u); f_00771e14();
    /* 00534fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534fb3: je 0x534fcb */ if (fZ) goto L_00534fcb;
L_00534fb5:; BB(0x00534fb5);
    /* 00534fb5: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fbb: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc1: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534fc9: jmp 0x534fe4 */ goto L_00534fe4;
L_00534fcb:; BB(0x00534fcb);
    /* 00534fcb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00534fcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00534fcf: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x534fd2u); call_ind(t); }
    /* 00534fd2: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fd8: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00534fde: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
L_00534fe4:; BB(0x00534fe4);
    /* 00534fe4: fld dword ptr [0x922b3c] */ FPUSH(R_F32((u32)(0x922b3cu)));
    /* 00534fea: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00534fec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00534fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534ff0: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 00534ff6: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00534ffc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534fff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535002: mov ecx, esi */ r_ecx = r_esi;
    /* 00535004: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053500c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x535011u); f_00772b44();
    /* 00535011: mov ecx, esi */ r_ecx = r_esi;
    /* 00535013: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x535018u); f_007b6880();
    /* 00535018: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0053501b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053501d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535021: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00535026: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53502bu); f_008144b0();
    /* 0053502b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053502e: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00535034: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535037: je 0x535068 */ if (fZ) goto L_00535068;
L_00535039:; BB(0x00535039);
    /* 00535039: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0053503c: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00535042: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535047: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0053504a: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 00535051: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00535054: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0053505a: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00535061: mov ecx, esi */ r_ecx = r_esi;
    /* 00535063: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x535068u); f_00533078();
L_00535068:; BB(0x00535068);
    /* 00535068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053506b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053506c: ret  */ FN_RET(0x00534f4c); r_esp += 4; return;
}

void f_00534f50(void)
{
    FN_ENTER(0x00534f50);
    /* 00534f50: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00534f52: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00534f54: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00534f59: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00534f5c: mov edx, 3 */ r_edx = 0x3u;
    /* 00534f61: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00534f68: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f6a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x534f6fu); f_007aa094();
    /* 00534f6f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00534f75: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00534f7b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00534f7e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00534f81: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00534f87: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00534f8d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00534f90: mov ecx, esi */ r_ecx = r_esi;
    /* 00534f92: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00534f96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00534f9a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00534f9e: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00534fa4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00534fa8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00534fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534fac: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x534fb1u); f_00771e14();
    /* 00534fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534fb3: je 0x534fcb */ if (fZ) goto L_00534fcb;
L_00534fb5:; BB(0x00534fb5);
    /* 00534fb5: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fbb: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc1: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534fc9: jmp 0x534fe4 */ goto L_00534fe4;
L_00534fcb:; BB(0x00534fcb);
    /* 00534fcb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00534fcd: mov ecx, esi */ r_ecx = r_esi;
    /* 00534fcf: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x534fd2u); call_ind(t); }
    /* 00534fd2: fld dword ptr [0x922b40] */ FPUSH(R_F32((u32)(0x922b40u)));
    /* 00534fd8: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00534fde: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
L_00534fe4:; BB(0x00534fe4);
    /* 00534fe4: fld dword ptr [0x922b3c] */ FPUSH(R_F32((u32)(0x922b3cu)));
    /* 00534fea: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00534fec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00534fee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00534ff0: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 00534ff6: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00534ffc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534fff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535002: mov ecx, esi */ r_ecx = r_esi;
    /* 00535004: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053500c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x535011u); f_00772b44();
    /* 00535011: mov ecx, esi */ r_ecx = r_esi;
    /* 00535013: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x535018u); f_007b6880();
    /* 00535018: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0053501b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053501d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053501f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535021: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00535026: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53502bu); f_008144b0();
    /* 0053502b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053502e: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00535034: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535037: je 0x535068 */ if (fZ) goto L_00535068;
L_00535039:; BB(0x00535039);
    /* 00535039: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0053503c: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00535042: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535047: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0053504a: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 00535051: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00535054: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0053505a: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00535061: mov ecx, esi */ r_ecx = r_esi;
    /* 00535063: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x535068u); f_00533078();
L_00535068:; BB(0x00535068);
    /* 00535068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053506b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053506c: ret  */ FN_RET(0x00534f50); r_esp += 4; return;
}

