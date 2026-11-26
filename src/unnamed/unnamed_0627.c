#include "protos.h"

void f_00627070(void) /* sub_627070 */
{
    FN_ENTER(0x00627070);
    /* 00627070: lea edx, [ecx + 0x344] */ r_edx = (u32)(r_ecx+0x344u);
    /* 00627076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00627078: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062707a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062707d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00627080: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00627083: mov dword ptr [ecx + 0x354], 0 */ W32((u32)(r_ecx+0x354u), 0x0u);
    /* 0062708d: ret  */ FN_RET(0x00627070); r_esp += 4; return;
}

void f_00627090(void) /* sub_627090 */
{
    FN_ENTER(0x00627090);
    /* 00627090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627091: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627093: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 00627099: mov dword ptr [ebp + 0x364], eax */ W32((u32)(r_ebp+0x364u), r_eax);
    /* 0062709f: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 006270a5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006270a8: jb 0x6270b6 */ if (fC) goto L_006270b6;
L_006270aa:; BB(0x006270aa);
    /* 006270aa: mov dword ptr [ebp + 0x360], 2 */ W32((u32)(r_ebp+0x360u), 0x2u);
    /* 006270b4: jmp 0x6270bc */ goto L_006270bc;
L_006270b6:; BB(0x006270b6);
    /* 006270b6: mov dword ptr [ebp + 0x360], eax */ W32((u32)(r_ebp+0x360u), r_eax);
L_006270bc:; BB(0x006270bc);
    /* 006270bc: fld dword ptr [0x931e70] */ FPUSH(R_F32((u32)(0x931e70u)));
    /* 006270c2: fadd dword ptr [ebp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x68u));
    /* 006270c5: fld dword ptr [0x931e6c] */ FPUSH(R_F32((u32)(0x931e6cu)));
    /* 006270cb: fadd dword ptr [ebp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x70u));
    /* 006270ce: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006270d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006270d3: fstp dword ptr [ebp + 0x358] */ W_F32((u32)(r_ebp+0x358u), ST(0)); FPOP();
    /* 006270d9: fstp dword ptr [ebp + 0x340] */ W_F32((u32)(r_ebp+0x340u), ST(0)); FPOP();
    /* 006270df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006270e1: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x6270e7u); call_ind(t); }
    /* 006270e7: fld dword ptr [0x931e68] */ FPUSH(R_F32((u32)(0x931e68u)));
    /* 006270ed: fsub dword ptr [ebp + 0x6c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x6cu));
    /* 006270f0: fstp dword ptr [ebp + 0x35c] */ W_F32((u32)(r_ebp+0x35cu), ST(0)); FPOP();
    /* 006270f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006270f7: ret  */ FN_RET(0x00627090); r_esp += 4; return;
}

void f_006270f8(void) /* sub_6270F8 */
{
    FN_ENTER(0x006270f8);
    /* 006270f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006270f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006270fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006270fd: push 0x8e2cb0 */ { u32 v = 0x8e2cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00627102: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00627108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627109: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00627110: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627113: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00627116: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00627119: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062711c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062711f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00627122: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627125: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00627128: call 0x626fa0 */ r_esp -= 4; W32(r_esp, 0x62712du); f_00626fa0();
    /* 0062712d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627134: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627137: mov dword ptr [ecx], 0xb29040 */ W32((u32)(r_ecx), 0xb29040u);
    /* 0062713d: mov eax, dword ptr [0x9c5c10] */ r_eax = R32((u32)(0x9c5c10u));
    /* 00627142: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00627145: call 0x627090 */ r_esp -= 4; W32(r_esp, 0x62714au); f_00627090();
    /* 0062714a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062714d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00627157: mov esp, ebp */ r_esp = r_ebp;
    /* 00627159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062715a: ret 8 */ FN_RET(0x006270f8); r_esp += 12; return;
}

void f_00627160(void) /* sub_627160 */
{
    FN_ENTER(0x00627160);
    /* 00627160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627161: mov ebp, esp */ r_ebp = r_esp;
    /* 00627163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00627165: push 0x8e2ccc */ { u32 v = 0x8e2cccu; r_esp -= 4; W32(r_esp, v); }
    /* 0062716a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00627170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00627178: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062717b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062717e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00627181: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00627184: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00627187: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062718a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062718d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00627190: call 0x626fa0 */ r_esp -= 4; W32(r_esp, 0x627195u); f_00626fa0();
    /* 00627195: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062719c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062719f: mov dword ptr [ecx], 0xb28ee0 */ W32((u32)(r_ecx), 0xb28ee0u);
    /* 006271a5: mov eax, dword ptr [0x9c5c0c] */ r_eax = R32((u32)(0x9c5c0cu));
    /* 006271aa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006271ad: call 0x627090 */ r_esp -= 4; W32(r_esp, 0x6271b2u); f_00627090();
    /* 006271b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006271b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006271b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006271bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006271c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006271c2: ret 8 */ FN_RET(0x00627160); r_esp += 12; return;
}

void f_006271c8(void) /* sub_6271C8 */
{
    FN_ENTER(0x006271c8);
    /* 006271c8: fld dword ptr [0x931e64] */ FPUSH(R_F32((u32)(0x931e64u)));
    /* 006271ce: ret 0x18 */ FN_RET(0x006271c8); r_esp += 28; return;
}

void f_006271d4(void) /* sub_6271D4 */
{
    FN_ENTER(0x006271d4);
    /* 006271d4: fld dword ptr [0x931e60] */ FPUSH(R_F32((u32)(0x931e60u)));
    /* 006271da: ret 8 */ FN_RET(0x006271d4); r_esp += 12; return;
}

void f_006271e0(void) /* sub_6271E0 */
{
    FN_ENTER(0x006271e0);
    /* 006271e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006271e1: mov edi, ecx */ r_edi = r_ecx;
    /* 006271e3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6271e8u); f_004f7c84();
    /* 006271e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006271ea: jne 0x627232 */ if (!fZ) goto L_00627232;
L_006271ec:; BB(0x006271ec);
    /* 006271ec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006271ee: mov ecx, edi */ r_ecx = r_edi;
    /* 006271f0: call dword ptr [eax + 0x148] */ { u32 t = R32((u32)(r_eax+0x148u)); r_esp -= 4; W32(r_esp, 0x6271f6u); call_ind(t); }
    /* 006271f6: mov ecx, edi */ r_ecx = r_edi;
    /* 006271f8: call 0x627234 */ r_esp -= 4; W32(r_esp, 0x6271fdu); f_00627234();
    /* 006271fd: mov ecx, edi */ r_ecx = r_edi;
    /* 006271ff: call 0x6272b4 */ r_esp -= 4; W32(r_esp, 0x627204u); f_006272b4();
    /* 00627204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00627206: je 0x627232 */ if (fZ) goto L_00627232;
L_00627208:; BB(0x00627208);
    /* 00627208: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0062720f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00627212: je 0x627232 */ if (fZ) goto L_00627232;
L_00627214:; BB(0x00627214);
    /* 00627214: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00627219: mov ecx, edi */ r_ecx = r_edi;
    /* 0062721b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x627220u); f_007aaa30();
    /* 00627220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00627222: je 0x627232 */ if (fZ) goto L_00627232;
L_00627224:; BB(0x00627224);
    /* 00627224: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00627226: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00627229: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062722a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x62722fu); f_0050b510();
    /* 0062722f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00627232:; BB(0x00627232);
    /* 00627232: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00627233: ret  */ FN_RET(0x006271e0); r_esp += 4; return;
}

void f_00627234(void) /* sub_627234 */
{
    FN_ENTER(0x00627234);
    /* 00627234: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00627235: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00627237: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62723cu); f_00807ac0();
    /* 0062723c: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00627243: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627246: jne 0x627271 */ if (!fZ) goto L_00627271;
L_00627248:; BB(0x00627248);
    /* 00627248: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062724b: jl 0x62726a */ if ((fS!=fO)) goto L_0062726a;
L_0062724d:; BB(0x0062724d);
    /* 0062724d: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627250: jg 0x627259 */ if ((!fZ&&fS==fO)) goto L_00627259;
L_00627252:; BB(0x00627252);
    /* 00627252: mov ecx, 0x49f */ r_ecx = 0x49fu;
    /* 00627257: jmp 0x62729d */ goto L_0062729d;
L_00627259:; BB(0x00627259);
    /* 00627259: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062725c: jl 0x62726a */ if ((fS!=fO)) goto L_0062726a;
L_0062725e:; BB(0x0062725e);
    /* 0062725e: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627261: jg 0x62726a */ if ((!fZ&&fS==fO)) goto L_0062726a;
L_00627263:; BB(0x00627263);
    /* 00627263: mov ecx, 0x4b6 */ r_ecx = 0x4b6u;
    /* 00627268: jmp 0x62729d */ goto L_0062729d;
L_0062726a:; BB(0x0062726a);
    /* 0062726a: mov ecx, 0x453 */ r_ecx = 0x453u;
    /* 0062726f: jmp 0x62729d */ goto L_0062729d;
L_00627271:; BB(0x00627271);
    /* 00627271: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00627274: jne 0x6272af */ if (!fZ) goto L_006272af;
L_00627276:; BB(0x00627276);
    /* 00627276: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627279: jl 0x627298 */ if ((fS!=fO)) goto L_00627298;
L_0062727b:; BB(0x0062727b);
    /* 0062727b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062727e: jg 0x627287 */ if ((!fZ&&fS==fO)) goto L_00627287;
L_00627280:; BB(0x00627280);
    /* 00627280: mov ecx, 0x4a0 */ r_ecx = 0x4a0u;
    /* 00627285: jmp 0x62729d */ goto L_0062729d;
L_00627287:; BB(0x00627287);
    /* 00627287: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062728a: jl 0x627298 */ if ((fS!=fO)) goto L_00627298;
L_0062728c:; BB(0x0062728c);
    /* 0062728c: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062728f: jg 0x627298 */ if ((!fZ&&fS==fO)) goto L_00627298;
L_00627291:; BB(0x00627291);
    /* 00627291: mov ecx, 0x4b7 */ r_ecx = 0x4b7u;
    /* 00627296: jmp 0x62729d */ goto L_0062729d;
L_00627298:; BB(0x00627298);
    /* 00627298: mov ecx, 0x455 */ r_ecx = 0x455u;
L_0062729d:; BB(0x0062729d);
    /* 0062729d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006272a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006272a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006272a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006272a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006272a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006272a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006272a7: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6272acu); f_008144b0();
    /* 006272ac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006272af:; BB(0x006272af);
    /* 006272af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006272b0: ret  */ FN_RET(0x00627234); r_esp += 4; return;
}

void f_006272b4(void) /* sub_6272B4 */
{
    FN_ENTER(0x006272b4);
    /* 006272b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006272b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006272b6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006272b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006272bb: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006272c0: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 006272c3: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006272c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006272c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006272ca: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6272cfu); f_0078ea50();
    /* 006272cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006272d2: fcomp dword ptr [0x931e58] */ fx_compare(ST(0), R_F32((u32)(0x931e58u))); FPOP();
    /* 006272d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006272da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006272db: jae 0x6272f1 */ if (!fC) goto L_006272f1;
L_006272dd:; BB(0x006272dd);
    /* 006272dd: mov edx, 1 */ r_edx = 0x1u;
    /* 006272e2: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 006272e6: mov eax, 1 */ r_eax = 0x1u;
    /* 006272eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006272ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006272ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006272f0: ret  */ FN_RET(0x006272b4); r_esp += 4; return;
L_006272f1:; BB(0x006272f1);
    /* 006272f1: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 006272f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006272f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006272fb: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00627300: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x627303u); call_ind(t); }
    /* 00627303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627305: jne 0x62730f */ if (!fZ) goto L_0062730f;
L_00627307:; BB(0x00627307);
    /* 00627307: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627309: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062730c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062730d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062730e: ret  */ FN_RET(0x006272b4); r_esp += 4; return;
L_0062730f:; BB(0x0062730f);
    /* 0062730f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00627312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627313: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00627314: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x627319u); f_00835c3c();
    /* 00627319: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062731c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00627320: fcomp dword ptr [0x931e4c] */ fx_compare(ST(0), R_F32((u32)(0x931e4cu))); FPOP();
    /* 00627326: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627328: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627329: jbe 0x627333 */ if ((fC||fZ)) goto L_00627333;
L_0062732b:; BB(0x0062732b);
    /* 0062732b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062732d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00627330: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00627331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627332: ret  */ FN_RET(0x006272b4); r_esp += 4; return;
L_00627333:; BB(0x00627333);
    /* 00627333: mov eax, 1 */ r_eax = 0x1u;
    /* 00627338: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062733b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062733c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062733d: ret  */ FN_RET(0x006272b4); r_esp += 4; return;
}

void f_00627340(void) /* sub_627340 */
{
    FN_ENTER(0x00627340);
    /* 00627340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627341: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627342: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00627343: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00627345: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00627347: call 0x6272b4 */ r_esp -= 4; W32(r_esp, 0x62734cu); f_006272b4();
    /* 0062734c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062734e: je 0x6274c5 */ if (fZ) goto L_006274c5;
L_00627354:; BB(0x00627354);
    /* 00627354: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x627359u); f_00835068();
    /* 00627359: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62735eu); f_0082d7b0();
    /* 0062735e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00627361: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x627366u); f_0082d838();
    /* 00627366: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00627369: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062736b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x627370u); f_0082d8bc();
    /* 00627370: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627375: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00627378: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62737du); f_00829cc8();
    /* 0062737d: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00627380: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627382: je 0x627399 */ if (fZ) goto L_00627399;
L_00627384:; BB(0x00627384);
    /* 00627384: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 0062738a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062738c: je 0x627399 */ if (fZ) goto L_00627399;
L_0062738e:; BB(0x0062738e);
    /* 0062738e: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627394: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x627399u); f_00835574();
L_00627399:; BB(0x00627399);
    /* 00627399: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 0062739e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006273a0: je 0x6274b7 */ if (fZ) goto L_006274b7;
L_006273a6:; BB(0x006273a6);
    /* 006273a6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6273abu); f_0082dbac();
    /* 006273ab: mov eax, dword ptr [ebx + 0x360] */ r_eax = R32((u32)(r_ebx+0x360u));
    /* 006273b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006273b3: jne 0x627480 */ if (!fZ) goto L_00627480;
L_006273b9:; BB(0x006273b9);
    /* 006273b9: fld dword ptr [ebx + 0x35c] */ FPUSH(R_F32((u32)(r_ebx+0x35cu)));
    /* 006273bf: fld dword ptr [ebx + 0x358] */ FPUSH(R_F32((u32)(r_ebx+0x358u)));
    /* 006273c5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006273c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006273c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006273ca: jb 0x6273d3 */ if (fC) goto L_006273d3;
L_006273cc:; BB(0x006273cc);
    /* 006273cc: mov edi, 1 */ r_edi = 0x1u;
    /* 006273d1: jmp 0x6273d5 */ goto L_006273d5;
L_006273d3:; BB(0x006273d3);
    /* 006273d3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006273d5:; BB(0x006273d5);
    /* 006273d5: fld dword ptr [0x931e48] */ FPUSH(R_F32((u32)(0x931e48u)));
    /* 006273db: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006273dd: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 006273df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006273e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006273e2: jb 0x6273eb */ if (fC) goto L_006273eb;
L_006273e4:; BB(0x006273e4);
    /* 006273e4: mov esi, 1 */ r_esi = 0x1u;
    /* 006273e9: jmp 0x6273ed */ goto L_006273ed;
L_006273eb:; BB(0x006273eb);
    /* 006273eb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006273ed:; BB(0x006273ed);
    /* 006273ed: fld dword ptr [0x931e44] */ FPUSH(R_F32((u32)(0x931e44u)));
    /* 006273f3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006273f5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006273f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006273f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006273fa: jb 0x627403 */ if (fC) goto L_00627403;
L_006273fc:; BB(0x006273fc);
    /* 006273fc: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00627401: jmp 0x627405 */ goto L_00627405;
L_00627403:; BB(0x00627403);
    /* 00627403: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00627405:; BB(0x00627405);
    /* 00627405: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 0062740a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062740d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x627412u); f_00829cc8();
    /* 00627412: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627415: je 0x62750a */ if (fZ) goto L_0062750a;
L_0062741b:; BB(0x0062741b);
    /* 0062741b: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062741e: je 0x6274f2 */ if (fZ) goto L_006274f2;
L_00627424:; BB(0x00627424);
    /* 00627424: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627427: je 0x6274d7 */ if (fZ) goto L_006274d7;
L_0062742d:; BB(0x0062742d);
    /* 0062742d: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627432: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00627434: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x627439u); f_00829cc8();
    /* 00627439: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062743b: jne 0x62744d */ if (!fZ) goto L_0062744d;
L_0062743d:; BB(0x0062743d);
    /* 0062743d: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 00627442: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00627445: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00627448: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x62744du); f_00835120();
L_0062744d:; BB(0x0062744d);
    /* 0062744d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062744f: jne 0x627464 */ if (!fZ) goto L_00627464;
L_00627451:; BB(0x00627451);
    /* 00627451: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 00627456: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00627459: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0062745c: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0062745f: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x627464u); f_00835120();
L_00627464:; BB(0x00627464);
    /* 00627464: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627466: jne 0x6274b2 */ if (!fZ) goto L_006274b2;
L_00627468:; BB(0x00627468);
    /* 00627468: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 0062746d: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00627470: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00627473: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00627476: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00627479: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x62747eu); f_00835120();
    /* 0062747e: jmp 0x6274b2 */ goto L_006274b2;
L_00627480:; BB(0x00627480);
    /* 00627480: movzx eax, word ptr [ebx + 0x364] */ r_eax = (u32)R16((u32)(r_ebx+0x364u));
    /* 00627487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627488: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x62748du); f_00816eec();
    /* 0062748d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062748e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627491: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627494: je 0x62751f */ if (fZ) goto L_0062751f;
L_0062749a:; BB(0x0062749a);
    /* 0062749a: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 0062749f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006274a2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6274a7u); f_00829cc8();
L_006274a7:; BB(0x006274a7);
    /* 006274a7: mov ecx, dword ptr [0xa8ed78] */ r_ecx = R32((u32)(0xa8ed78u));
    /* 006274ad: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x6274b2u); f_00835090();
L_006274b2:; BB(0x006274b2);
    /* 006274b2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6274b7u); f_0082dab0();
L_006274b7:; BB(0x006274b7);
    /* 006274b7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6274bcu); f_0082da80();
    /* 006274bc: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x6274c1u); f_00835078();
    /* 006274c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006274c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006274c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006274c4: ret  */ FN_RET(0x00627340); r_esp += 4; return;
L_006274c5:; BB(0x006274c5);
    /* 006274c5: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6274cau); f_004f7c84();
    /* 006274ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006274cd: je 0x627354 */ if (fZ) goto L_00627354;
L_006274d3:; BB(0x006274d3);
    /* 006274d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006274d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006274d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006274d6: ret  */ FN_RET(0x00627340); r_esp += 4; return;
L_006274d7:; BB(0x006274d7);
    /* 006274d7: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 006274dc: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006274df: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006274e2: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006274e5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006274e8: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x6274edu); f_00835120();
    /* 006274ed: jmp 0x62742d */ goto L_0062742d;
L_006274f2:; BB(0x006274f2);
    /* 006274f2: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 006274f7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006274fa: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006274fd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627500: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x627505u); f_00835120();
    /* 00627505: jmp 0x627424 */ goto L_00627424;
L_0062750a:; BB(0x0062750a);
    /* 0062750a: mov eax, dword ptr [0xa8ed78] */ r_eax = R32((u32)(0xa8ed78u));
    /* 0062750f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00627512: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00627515: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x62751au); f_00835120();
    /* 0062751a: jmp 0x62741b */ goto L_0062741b;
L_0062751f:; BB(0x0062751f);
    /* 0062751f: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627524: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00627526: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62752bu); f_00829cc8();
    /* 0062752b: jmp 0x6274a7 */ goto L_006274a7;
}

void f_00627530(void)
{
    FN_ENTER(0x00627530);
    /* 00627530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627531: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627534: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627536: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0062753d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062753f: je 0x62767b */ if (fZ) goto L_0062767b;
L_00627545:; BB(0x00627545);
    /* 00627545: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627548: jne 0x627649 */ if (!fZ) goto L_00627649;
L_0062754e:; BB(0x0062754e);
    /* 0062754e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627550: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627555u); f_00627a34();
    /* 00627555: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00627559: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0062755d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062755f: mov esi, eax */ r_esi = r_eax;
L_00627561:; BB(0x00627561);
    /* 00627561: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627562: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x627567u); f_0068d5a8();
    /* 00627567: mov edi, eax */ r_edi = r_eax;
    /* 00627569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062756c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062756e: je 0x627613 */ if (fZ) goto L_00627613;
L_00627574:; BB(0x00627574);
    /* 00627574: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 0062757a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062757c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062757e: je 0x627596 */ if (fZ) goto L_00627596;
L_00627580:; BB(0x00627580);
    /* 00627580: mov ecx, dword ptr [ebp + eax*4 + 0x344] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x344u));
    /* 00627587: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062758a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062758c: je 0x627613 */ if (fZ) goto L_00627613;
L_00627592:; BB(0x00627592);
    /* 00627592: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627594: jne 0x627580 */ if (!fZ) goto L_00627580;
L_00627596:; BB(0x00627596);
    /* 00627596: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0062759c: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006275a2: jne 0x627613 */ if (!fZ) goto L_00627613;
L_006275a4:; BB(0x006275a4);
    /* 006275a4: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006275a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006275aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006275ac: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x6275b1u); f_007b8338();
    /* 006275b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006275b3: je 0x627613 */ if (fZ) goto L_00627613;
L_006275b5:; BB(0x006275b5);
    /* 006275b5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006275b8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006275bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006275c1: push dword ptr [ebp + 0x340] */ { u32 v = R32((u32)(r_ebp+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275c7: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x6275cdu); call_ind(t); }
    /* 006275cd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006275cf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006275d3: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006275d8: mov ecx, edi */ r_ecx = r_edi;
    /* 006275da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006275db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006275dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006275de: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275e2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006275e7: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6275eau); call_ind(t); }
    /* 006275ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006275ec: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006275ef: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006275f5: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006275f8: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 006275fe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627601: jge 0x627613 */ if ((fS==fO)) goto L_00627613;
L_00627603:; BB(0x00627603);
    /* 00627603: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00627606: mov dword ptr [ebp + 0x354], edx */ W32((u32)(r_ebp+0x354u), r_edx);
    /* 0062760c: mov dword ptr [ebp + eax*4 + 0x344], edi */ W32((u32)(r_ebp+r_eax*4+0x344u), r_edi);
L_00627613:; BB(0x00627613);
    /* 00627613: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627616: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627619: jl 0x627561 */ if ((fS!=fO)) goto L_00627561;
L_0062761f:; BB(0x0062761f);
    /* 0062761f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00627623: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00627627: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0062762d: fcom dword ptr [0x931e28] */ fx_compare(ST(0), R_F32((u32)(0x931e28u))); 
    /* 00627633: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627635: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627636: je 0x62771c */ if (fZ) goto L_0062771c;
L_0062763c:; BB(0x0062763c);
    /* 0062763c: fcomp dword ptr [0x931e24] */ fx_compare(ST(0), R_F32((u32)(0x931e24u))); FPOP();
    /* 00627642: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627644: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627645: je 0x6276bb */ if (fZ) goto L_006276bb;
L_00627647:; BB(0x00627647);
    /* 00627647: jmp 0x6276b6 */ f_006276b6(); return;
L_00627649:; BB(0x00627649);
    /* 00627649: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062764c: jne 0x6276b6 */ if (!fZ) goto L_006276b6;
L_0062764e:; BB(0x0062764e);
    /* 0062764e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627650: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627655u); f_00627a34();
    /* 00627655: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0062765b: fcom dword ptr [0x931e2c] */ fx_compare(ST(0), R_F32((u32)(0x931e2cu))); 
    /* 00627661: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627663: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627664: je 0x62773f */ if (fZ) goto L_0062773f;
L_0062766a:; BB(0x0062766a);
    /* 0062766a: fcomp dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); FPOP();
    /* 00627670: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627672: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627673: je 0x62772f */ if (fZ) goto L_0062772f;
L_00627679:; BB(0x00627679);
    /* 00627679: jmp 0x6276b6 */ f_006276b6(); return;
L_0062767b:; BB(0x0062767b);
    /* 0062767b: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 00627681: fcom dword ptr [0x931e30] */ fx_compare(ST(0), R_F32((u32)(0x931e30u))); 
    /* 00627687: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627689: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062768a: jbe 0x62769c */ if ((fC||fZ)) goto L_0062769c;
L_0062768c:; BB(0x0062768c);
    /* 0062768c: fld dword ptr [0x931e34] */ FPUSH(R_F32((u32)(0x931e34u)));
    /* 00627692: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00627694: fstp dword ptr [ebp + 0x35c] */ W_F32((u32)(r_ebp+0x35cu), ST(0)); FPOP();
    /* 0062769a: jmp 0x6276b6 */ f_006276b6(); return;
L_0062769c:; BB(0x0062769c);
    /* 0062769c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062769e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276a1: je 0x6276af */ if (fZ) goto L_006276af;
L_006276a3:; BB(0x006276a3);
    /* 006276a3: mov eax, 1 */ r_eax = 0x1u;
    /* 006276a8: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
L_006276af:; BB(0x006276af);
    /* 006276af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006276b1: call 0x627070 */ r_esp -= 4; W32(r_esp, 0x6276b6u); f_00627070();
L_006276b6:; BB(0x006276b6);
    /* 006276b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006276b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006276ba: ret  */ FN_RET(0x00627530); r_esp += 4; return;
L_006276bb:; BB(0x006276bb);
    /* 006276bb: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006276c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276c5: je 0x6276b6 */ if (fZ) goto L_006276b6;
L_006276c7:; BB(0x006276c7);
    /* 006276c7: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 006276cd: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 006276d3: mov eax, 2 */ r_eax = 0x2u;
    /* 006276d8: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 006276df: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6276e4u); f_005b8638();
    /* 006276e4: mov dword ptr [ebp + 0xc0], 0x41b00000 */ W32((u32)(r_ebp+0xc0u), 0x41b00000u);
    /* 006276ee: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 006276f4: mov dword ptr [ebp + 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xc8u), 0x3f800000u);
    /* 006276fe: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627701: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627704: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627707: fadd dword ptr [edx*4 + 0x931d88] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d88u));
    /* 0062770e: fadd dword ptr [0x931e34] */ ST(0) = ST(0) + R_F32((u32)(0x931e34u));
    /* 00627714: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 0062771a: jmp 0x6276b6 */ f_006276b6(); return;
L_0062771c:; BB(0x0062771c);
    /* 0062771c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062771e: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627724: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627727: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062772a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0062772d: jmp 0x6276b6 */ f_006276b6(); return;
L_0062772f:; BB(0x0062772f);
    /* 0062772f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00627732: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627734: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x62773au); call_ind(t); }
    /* 0062773a: jmp 0x6276b6 */ f_006276b6(); return;
L_0062773f:; BB(0x0062773f);
    /* 0062773f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627741: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627747: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0062774a: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062774d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00627750: jmp 0x6276b6 */ f_006276b6(); return;
}

void f_00627573(void)
{
    FN_ENTER(0x00627573);
    goto L_00627573;
L_00627561:; BB(0x00627561);
    /* 00627561: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627562: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x627567u); f_0068d5a8();
    /* 00627567: mov edi, eax */ r_edi = r_eax;
    /* 00627569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062756c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062756e: je 0x627613 */ if (fZ) goto L_00627613;
L_00627573:; BB(0x00627573);
    /* 00627573: add byte ptr [ebx + 0x35495], cl */ { u32 ad = (u32)(r_ebx+0x35495u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00627574:; BB(0x00627574);
    /* 00627574: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 00627579: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062757a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062757b: rol byte ptr [ebp - 0x74e98b2e], 0x8c */ { u32 ad = (u32)(r_ebp+0x8b1674d2u); u32 c = (12u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0062757c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062757e: je 0x627596 */ if (fZ) goto L_00627596;
L_00627580:; BB(0x00627580);
    /* 00627580: mov ecx, dword ptr [ebp + eax*4 + 0x344] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x344u));
    /* 00627582: test dword ptr [ebx + eax], eax */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00627586: add byte ptr [ebx - 0x30c4fe40], al */ { u32 ad = (u32)(r_ebx+0xcf3b01c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00627587: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062758a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062758c: je 0x627613 */ if (fZ) goto L_00627613;
L_00627592:; BB(0x00627592);
    /* 00627592: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627594: jne 0x627580 */ if (!fZ) goto L_00627580;
L_00627596:; BB(0x00627596);
    /* 00627596: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0062759c: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006275a2: jne 0x627613 */ if (!fZ) goto L_00627613;
L_006275a4:; BB(0x006275a4);
    /* 006275a4: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006275a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006275aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006275ac: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x6275b1u); f_007b8338();
    /* 006275b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006275b3: je 0x627613 */ if (fZ) goto L_00627613;
L_006275b5:; BB(0x006275b5);
    /* 006275b5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006275b8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006275bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006275c1: push dword ptr [ebp + 0x340] */ { u32 v = R32((u32)(r_ebp+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275c7: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x6275cdu); call_ind(t); }
    /* 006275cd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006275cf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006275d3: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006275d8: mov ecx, edi */ r_ecx = r_edi;
    /* 006275da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006275db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006275dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006275de: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275e2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006275e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006275e7: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6275eau); call_ind(t); }
    /* 006275ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006275ec: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006275ef: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006275f5: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006275f8: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 006275fe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627601: jge 0x627613 */ if ((fS==fO)) goto L_00627613;
L_00627603:; BB(0x00627603);
    /* 00627603: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00627606: mov dword ptr [ebp + 0x354], edx */ W32((u32)(r_ebp+0x354u), r_edx);
    /* 0062760c: mov dword ptr [ebp + eax*4 + 0x344], edi */ W32((u32)(r_ebp+r_eax*4+0x344u), r_edi);
L_00627613:; BB(0x00627613);
    /* 00627613: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627616: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627619: jl 0x627561 */ if ((fS!=fO)) goto L_00627561;
L_0062761f:; BB(0x0062761f);
    /* 0062761f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00627623: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00627627: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0062762d: fcom dword ptr [0x931e28] */ fx_compare(ST(0), R_F32((u32)(0x931e28u))); 
    /* 00627633: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627635: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627636: je 0x62771c */ if (fZ) goto L_0062771c;
L_0062763c:; BB(0x0062763c);
    /* 0062763c: fcomp dword ptr [0x931e24] */ fx_compare(ST(0), R_F32((u32)(0x931e24u))); FPOP();
    /* 00627642: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627644: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627645: je 0x6276bb */ if (fZ) goto L_006276bb;
L_00627647:; BB(0x00627647);
    /* 00627647: jmp 0x6276b6 */ f_006276b6(); return;
L_006276b6:; BB(0x006276b6);
    /* 006276b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006276b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006276ba: ret  */ FN_RET(0x00627573); r_esp += 4; return;
L_006276bb:; BB(0x006276bb);
    /* 006276bb: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006276c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276c5: je 0x6276b6 */ if (fZ) goto L_006276b6;
L_006276c7:; BB(0x006276c7);
    /* 006276c7: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 006276cd: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 006276d3: mov eax, 2 */ r_eax = 0x2u;
    /* 006276d8: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 006276df: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6276e4u); f_005b8638();
    /* 006276e4: mov dword ptr [ebp + 0xc0], 0x41b00000 */ W32((u32)(r_ebp+0xc0u), 0x41b00000u);
    /* 006276ee: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 006276f4: mov dword ptr [ebp + 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xc8u), 0x3f800000u);
    /* 006276fe: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627701: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627704: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627707: fadd dword ptr [edx*4 + 0x931d88] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d88u));
    /* 0062770e: fadd dword ptr [0x931e34] */ ST(0) = ST(0) + R_F32((u32)(0x931e34u));
    /* 00627714: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 0062771a: jmp 0x6276b6 */ f_006276b6(); return;
L_0062771c:; BB(0x0062771c);
    /* 0062771c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062771e: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627724: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627727: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062772a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0062772d: jmp 0x6276b6 */ f_006276b6(); return;
}

void f_00627758(void) /* sub_627758 */
{
    FN_ENTER(0x00627758);
    /* 00627758: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627759: mov edi, ecx */ r_edi = r_ecx;
    /* 0062775b: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627761: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627767: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62776cu); f_005b8638();
    /* 0062776c: fld dword ptr [0x931e20] */ FPUSH(R_F32((u32)(0x931e20u)));
    /* 00627772: fmul dword ptr [edi + 0x358] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x358u));
    /* 00627778: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 0062777e: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627783: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627785: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0062778c: fstp dword ptr [edi + 0x35c] */ W_F32((u32)(r_edi+0x35cu), ST(0)); FPOP();
    /* 00627792: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00627795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627797: jne 0x6277a6 */ if (!fZ) goto L_006277a6;
L_00627799:; BB(0x00627799);
    /* 00627799: fld dword ptr [0x931e14] */ FPUSH(R_F32((u32)(0x931e14u)));
    /* 0062779f: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 006277a4: jmp 0x6277ba */ goto L_006277ba;
L_006277a6:; BB(0x006277a6);
    /* 006277a6: fld dword ptr [0x931e14] */ FPUSH(R_F32((u32)(0x931e14u)));
    /* 006277ac: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 006277b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006277b3: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
L_006277ba:; BB(0x006277ba);
    /* 006277ba: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 006277c0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006277c3: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 006277c6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006277c9: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 006277cf: mov dword ptr [edi + 0xc8], ecx */ W32((u32)(r_edi+0xc8u), r_ecx);
    /* 006277d5: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
    /* 006277df: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006277e2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006277e5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006277e8: fadd dword ptr [edx*4 + 0x931d80] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d80u));
    /* 006277ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006277f1: fstp dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0)); FPOP();
    /* 006277f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006277f8: ret  */ FN_RET(0x00627758); r_esp += 4; return;
}

void f_006277fc(void) /* sub_6277FC */
{
    FN_ENTER(0x006277fc);
    /* 006277fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006277fd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627800: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627802: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00627809: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062780c: je 0x62793c */ if (fZ) goto L_0062793c;
L_00627812:; BB(0x00627812);
    /* 00627812: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627815: jne 0x627912 */ if (!fZ) goto L_00627912;
L_0062781b:; BB(0x0062781b);
    /* 0062781b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062781d: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627822u); f_00627a34();
    /* 00627822: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00627826: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0062782a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062782c: mov esi, eax */ r_esi = r_eax;
L_0062782e:; BB(0x0062782e);
    /* 0062782e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062782f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x627834u); f_0068d5a8();
    /* 00627834: mov edi, eax */ r_edi = r_eax;
    /* 00627836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627839: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062783b: je 0x6278e0 */ if (fZ) goto L_006278e0;
L_00627841:; BB(0x00627841);
    /* 00627841: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 00627847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627849: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062784b: je 0x627863 */ if (fZ) goto L_00627863;
L_0062784d:; BB(0x0062784d);
    /* 0062784d: mov ecx, dword ptr [ebp + eax*4 + 0x344] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x344u));
    /* 00627854: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627857: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627859: je 0x6278e0 */ if (fZ) goto L_006278e0;
L_0062785f:; BB(0x0062785f);
    /* 0062785f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627861: jne 0x62784d */ if (!fZ) goto L_0062784d;
L_00627863:; BB(0x00627863);
    /* 00627863: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00627869: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062786f: jne 0x6278e0 */ if (!fZ) goto L_006278e0;
L_00627871:; BB(0x00627871);
    /* 00627871: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00627876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627877: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627879: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x62787eu); f_007b8338();
    /* 0062787e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627880: je 0x6278e0 */ if (fZ) goto L_006278e0;
L_00627882:; BB(0x00627882);
    /* 00627882: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00627885: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0062788c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062788e: push dword ptr [ebp + 0x340] */ { u32 v = R32((u32)(r_ebp+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627894: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x62789au); call_ind(t); }
    /* 0062789a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062789c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006278a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006278a5: mov ecx, edi */ r_ecx = r_edi;
    /* 006278a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006278a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006278a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006278ab: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006278af: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006278b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006278b4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6278b7u); call_ind(t); }
    /* 006278b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006278b9: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006278bc: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006278c2: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006278c5: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 006278cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006278ce: jge 0x6278e0 */ if ((fS==fO)) goto L_006278e0;
L_006278d0:; BB(0x006278d0);
    /* 006278d0: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006278d3: mov dword ptr [ebp + 0x354], edx */ W32((u32)(r_ebp+0x354u), r_edx);
    /* 006278d9: mov dword ptr [ebp + eax*4 + 0x344], edi */ W32((u32)(r_ebp+r_eax*4+0x344u), r_edi);
L_006278e0:; BB(0x006278e0);
    /* 006278e0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006278e3: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006278e6: jl 0x62782e */ if ((fS!=fO)) goto L_0062782e;
L_006278ec:; BB(0x006278ec);
    /* 006278ec: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006278f0: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 006278f4: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 006278fa: fcom dword ptr [0x931e28] */ fx_compare(ST(0), R_F32((u32)(0x931e28u))); 
    /* 00627900: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627902: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627903: je 0x627979 */ if (fZ) goto L_00627979;
L_00627905:; BB(0x00627905);
    /* 00627905: fcomp dword ptr [0x931e24] */ fx_compare(ST(0), R_F32((u32)(0x931e24u))); FPOP();
    /* 0062790b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062790d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062790e: je 0x62795e */ if (fZ) goto L_0062795e;
L_00627910:; BB(0x00627910);
    /* 00627910: jmp 0x627959 */ goto L_00627959;
L_00627912:; BB(0x00627912);
    /* 00627912: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627915: jne 0x627959 */ if (!fZ) goto L_00627959;
L_00627917:; BB(0x00627917);
    /* 00627917: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627919: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x62791eu); f_00627a34();
    /* 0062791e: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00627924: fcom dword ptr [0x931e2c] */ fx_compare(ST(0), R_F32((u32)(0x931e2cu))); 
    /* 0062792a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062792c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062792d: je 0x6279a6 */ if (fZ) goto L_006279a6;
L_0062792f:; BB(0x0062792f);
    /* 0062792f: fcomp dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); FPOP();
    /* 00627935: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627937: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627938: je 0x62798c */ if (fZ) goto L_0062798c;
L_0062793a:; BB(0x0062793a);
    /* 0062793a: jmp 0x627959 */ goto L_00627959;
L_0062793c:; BB(0x0062793c);
    /* 0062793c: movzx eax, word ptr [ebp + 0x364] */ r_eax = (u32)R16((u32)(r_ebp+0x364u));
    /* 00627943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627944: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x627949u); f_00816eec();
    /* 00627949: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062794a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062794d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627950: je 0x6279b9 */ if (fZ) goto L_006279b9;
L_00627952:; BB(0x00627952);
    /* 00627952: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627954: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627959u); f_00627a34();
L_00627959:; BB(0x00627959);
    /* 00627959: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062795c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062795d: ret  */ FN_RET(0x006277fc); r_esp += 4; return;
L_0062795e:; BB(0x0062795e);
    /* 0062795e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00627961: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627963: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x627969u); call_ind(t); }
    /* 00627969: movzx eax, word ptr [ebp + 0x364] */ r_eax = (u32)R16((u32)(r_ebp+0x364u));
    /* 00627970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627971: call 0x816e60 */ r_esp -= 4; W32(r_esp, 0x627976u); f_00816e60();
    /* 00627976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627977: jmp 0x627959 */ goto L_00627959;
L_00627979:; BB(0x00627979);
    /* 00627979: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062797b: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627981: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627984: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00627987: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0062798a: jmp 0x627959 */ goto L_00627959;
L_0062798c:; BB(0x0062798c);
    /* 0062798c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00627993: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627996: je 0x627959 */ if (fZ) goto L_00627959;
L_00627998:; BB(0x00627998);
    /* 00627998: mov eax, 1 */ r_eax = 0x1u;
    /* 0062799d: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 006279a4: jmp 0x627959 */ goto L_00627959;
L_006279a6:; BB(0x006279a6);
    /* 006279a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006279a8: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 006279ae: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006279b1: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006279b4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006279b7: jmp 0x627959 */ goto L_00627959;
L_006279b9:; BB(0x006279b9);
    /* 006279b9: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 006279bf: fcomp dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); FPOP();
    /* 006279c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006279c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006279c8: ja 0x627952 */ if ((!fC&&!fZ)) goto L_00627952;
L_006279ca:; BB(0x006279ca);
    /* 006279ca: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006279d1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006279d4: je 0x627952 */ if (fZ) goto L_00627952;
L_006279da:; BB(0x006279da);
    /* 006279da: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 006279e0: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 006279e6: mov eax, 2 */ r_eax = 0x2u;
    /* 006279eb: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 006279f2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6279f7u); f_005b8638();
    /* 006279f7: mov dword ptr [ebp + 0xc0], 0x41b00000 */ W32((u32)(r_ebp+0xc0u), 0x41b00000u);
    /* 00627a01: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 00627a07: mov dword ptr [ebp + 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xc8u), 0x3f800000u);
    /* 00627a11: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627a14: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627a17: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627a1a: fadd dword ptr [edx*4 + 0x931d78] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d78u));
    /* 00627a21: fadd dword ptr [0x931e04] */ ST(0) = ST(0) + R_F32((u32)(0x931e04u));
    /* 00627a27: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 00627a2d: jmp 0x627952 */ goto L_00627952;
}

void f_00627a34(void) /* sub_627A34 */
{
    FN_ENTER(0x00627a34);
    /* 00627a34: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 00627a3a: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 00627a40: fcom dword ptr [ecx + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xc4u))); 
    /* 00627a46: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627a48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627a49: jbe 0x627a58 */ if ((fC||fZ)) goto L_00627a58;
L_00627a4b:; BB(0x00627a4b);
    /* 00627a4b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627a4d: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 00627a57: ret  */ FN_RET(0x00627a34); r_esp += 4; return;
L_00627a58:; BB(0x00627a58);
    /* 00627a58: fstp dword ptr [ecx + 0xc0] */ W_F32((u32)(r_ecx+0xc0u), ST(0)); FPOP();
    /* 00627a5e: ret  */ FN_RET(0x00627a34); r_esp += 4; return;
}

void f_00627a60(void) /* sub_627A60 */
{
    FN_ENTER(0x00627a60);
    /* 00627a60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627a61: mov esi, ecx */ r_esi = r_ecx;
    /* 00627a63: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627a68: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627a6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00627a70: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627a73: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00627a76: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x627a7bu); f_005b8638();
    /* 00627a7b: mov dword ptr [esi + 0x35c], 0 */ W32((u32)(r_esi+0x35cu), 0x0u);
    /* 00627a85: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 00627a8b: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00627a92: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627a95: jne 0x627aa4 */ if (!fZ) goto L_00627aa4;
L_00627a97:; BB(0x00627a97);
    /* 00627a97: fld dword ptr [0x931dec] */ FPUSH(R_F32((u32)(0x931decu)));
    /* 00627a9d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00627aa2: jmp 0x627abb */ goto L_00627abb;
L_00627aa4:; BB(0x00627aa4);
    /* 00627aa4: fld dword ptr [0x931dec] */ FPUSH(R_F32((u32)(0x931decu)));
    /* 00627aaa: mov eax, 3 */ r_eax = 0x3u;
    /* 00627aaf: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00627ab6: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
L_00627abb:; BB(0x00627abb);
    /* 00627abb: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 00627ac1: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00627ac4: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00627ac7: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00627aca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00627acc: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 00627ad2: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 00627ad8: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 00627ade: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627ae1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627ae4: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627ae7: fadd dword ptr [edx*4 + 0x931d70] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d70u));
    /* 00627aee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00627af0: mov ecx, esi */ r_ecx = r_esi;
    /* 00627af2: fstp dword ptr [esi + 0xc4] */ W_F32((u32)(r_esi+0xc4u), ST(0)); FPOP();
    /* 00627af8: call 0x627070 */ r_esp -= 4; W32(r_esp, 0x627afdu); f_00627070();
    /* 00627afd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627afe: ret  */ FN_RET(0x00627a60); r_esp += 4; return;
}

void f_00627b00(void) /* sub_627B00 */
{
    FN_ENTER(0x00627b00);
    /* 00627b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627b01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627b04: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00627b06: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00627b0d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b10: je 0x627d07 */ if (fZ) goto L_00627d07;
L_00627b16:; BB(0x00627b16);
    /* 00627b16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b19: jne 0x627c34 */ if (!fZ) goto L_00627c34;
L_00627b1f:; BB(0x00627b1f);
    /* 00627b1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627b21: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627b26u); f_00627a34();
    /* 00627b26: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00627b2a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00627b2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627b30: mov esi, eax */ r_esi = r_eax;
L_00627b32:; BB(0x00627b32);
    /* 00627b32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627b33: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x627b38u); f_0068d5a8();
    /* 00627b38: mov edi, eax */ r_edi = r_eax;
    /* 00627b3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627b3d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b3f: je 0x627be4 */ if (fZ) goto L_00627be4;
L_00627b45:; BB(0x00627b45);
    /* 00627b45: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 00627b4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627b4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b4f: je 0x627b67 */ if (fZ) goto L_00627b67;
L_00627b51:; BB(0x00627b51);
    /* 00627b51: mov ecx, dword ptr [ebp + eax*4 + 0x344] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x344u));
    /* 00627b58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627b5b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b5d: je 0x627be4 */ if (fZ) goto L_00627be4;
L_00627b63:; BB(0x00627b63);
    /* 00627b63: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b65: jne 0x627b51 */ if (!fZ) goto L_00627b51;
L_00627b67:; BB(0x00627b67);
    /* 00627b67: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00627b6d: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b73: jne 0x627be4 */ if (!fZ) goto L_00627be4;
L_00627b75:; BB(0x00627b75);
    /* 00627b75: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00627b7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00627b7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627b7d: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x627b82u); f_007b8338();
    /* 00627b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627b84: je 0x627be4 */ if (fZ) goto L_00627be4;
L_00627b86:; BB(0x00627b86);
    /* 00627b86: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00627b89: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00627b90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627b92: push dword ptr [ebp + 0x340] */ { u32 v = R32((u32)(r_ebp+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627b98: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x627b9eu); call_ind(t); }
    /* 00627b9e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00627ba0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00627ba4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00627ba9: mov ecx, edi */ r_ecx = r_edi;
    /* 00627bab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627bac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627bad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00627baf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627bb3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627bb7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627bb8: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x627bbbu); call_ind(t); }
    /* 00627bbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627bbd: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00627bc0: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00627bc6: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00627bc9: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 00627bcf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627bd2: jge 0x627be4 */ if ((fS==fO)) goto L_00627be4;
L_00627bd4:; BB(0x00627bd4);
    /* 00627bd4: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00627bd7: mov dword ptr [ebp + 0x354], edx */ W32((u32)(r_ebp+0x354u), r_edx);
    /* 00627bdd: mov dword ptr [ebp + eax*4 + 0x344], edi */ W32((u32)(r_ebp+r_eax*4+0x344u), r_edi);
L_00627be4:; BB(0x00627be4);
    /* 00627be4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00627be7: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627bea: jl 0x627b32 */ if ((fS!=fO)) goto L_00627b32;
L_00627bf0:; BB(0x00627bf0);
    /* 00627bf0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00627bf4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00627bf8: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00627bfe: fcom dword ptr [0x931e28] */ fx_compare(ST(0), R_F32((u32)(0x931e28u))); 
    /* 00627c04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627c06: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627c07: jbe 0x627c20 */ if ((fC||fZ)) goto L_00627c20;
L_00627c09:; BB(0x00627c09);
    /* 00627c09: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627c0b: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627c11: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627c14: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00627c17: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00627c1a: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
L_00627c20:; BB(0x00627c20);
    /* 00627c20: fcomp dword ptr [0x931e24] */ fx_compare(ST(0), R_F32((u32)(0x931e24u))); FPOP();
    /* 00627c26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627c28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627c29: je 0x627d29 */ if (fZ) goto L_00627d29;
L_00627c2f:; BB(0x00627c2f);
    /* 00627c2f: jmp 0x627d24 */ goto L_00627d24;
L_00627c34:; BB(0x00627c34);
    /* 00627c34: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627c37: jne 0x627d24 */ if (!fZ) goto L_00627d24;
L_00627c3d:; BB(0x00627c3d);
    /* 00627c3d: movzx eax, word ptr [ebp + 0x364] */ r_eax = (u32)R16((u32)(r_ebp+0x364u));
    /* 00627c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627c45: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x627c4au); f_00816eec();
    /* 00627c4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627c4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627c4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627c51: je 0x627d36 */ if (fZ) goto L_00627d36;
L_00627c57:; BB(0x00627c57);
    /* 00627c57: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00627c5d: fcom dword ptr [0x931de8] */ fx_compare(ST(0), R_F32((u32)(0x931de8u))); 
    /* 00627c63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627c65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627c66: jb 0x627c81 */ if (fC) goto L_00627c81;
L_00627c68:; BB(0x00627c68);
    /* 00627c68: fcom dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); 
    /* 00627c6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627c70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627c71: ja 0x627c81 */ if ((!fC&&!fZ)) goto L_00627c81;
L_00627c73:; BB(0x00627c73);
    /* 00627c73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627c75: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 00627c7f: jmp 0x627ced */ goto L_00627ced;
L_00627c81:; BB(0x00627c81);
    /* 00627c81: fcom dword ptr [0x931de0] */ fx_compare(ST(0), R_F32((u32)(0x931de0u))); 
    /* 00627c87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627c89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627c8a: jb 0x627c9a */ if (fC) goto L_00627c9a;
L_00627c8c:; BB(0x00627c8c);
    /* 00627c8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627c8e: mov dword ptr [ebp + 0xc0], 0x3f800000 */ W32((u32)(r_ebp+0xc0u), 0x3f800000u);
    /* 00627c98: jmp 0x627ced */ goto L_00627ced;
L_00627c9a:; BB(0x00627c9a);
    /* 00627c9a: fcom dword ptr [0x931ddc] */ fx_compare(ST(0), R_F32((u32)(0x931ddcu))); 
    /* 00627ca0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627ca2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627ca3: jb 0x627cb3 */ if (fC) goto L_00627cb3;
L_00627ca5:; BB(0x00627ca5);
    /* 00627ca5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627ca7: mov dword ptr [ebp + 0xc0], 0x40000000 */ W32((u32)(r_ebp+0xc0u), 0x40000000u);
    /* 00627cb1: jmp 0x627ced */ goto L_00627ced;
L_00627cb3:; BB(0x00627cb3);
    /* 00627cb3: fcom dword ptr [0x931dd8] */ fx_compare(ST(0), R_F32((u32)(0x931dd8u))); 
    /* 00627cb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627cbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627cbc: jb 0x627ccc */ if (fC) goto L_00627ccc;
L_00627cbe:; BB(0x00627cbe);
    /* 00627cbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627cc0: mov dword ptr [ebp + 0xc0], 0x40400000 */ W32((u32)(r_ebp+0xc0u), 0x40400000u);
    /* 00627cca: jmp 0x627ced */ goto L_00627ced;
L_00627ccc:; BB(0x00627ccc);
    /* 00627ccc: fcomp dword ptr [0x931dd4] */ fx_compare(ST(0), R_F32((u32)(0x931dd4u))); FPOP();
    /* 00627cd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627cd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627cd5: jb 0x627ce3 */ if (fC) goto L_00627ce3;
L_00627cd7:; BB(0x00627cd7);
    /* 00627cd7: mov dword ptr [ebp + 0xc0], 0x40800000 */ W32((u32)(r_ebp+0xc0u), 0x40800000u);
    /* 00627ce1: jmp 0x627ced */ goto L_00627ced;
L_00627ce3:; BB(0x00627ce3);
    /* 00627ce3: mov dword ptr [ebp + 0xc0], 0x40a00000 */ W32((u32)(r_ebp+0xc0u), 0x40a00000u);
L_00627ced:; BB(0x00627ced);
    /* 00627ced: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00627cf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627cf7: je 0x627d24 */ if (fZ) goto L_00627d24;
L_00627cf9:; BB(0x00627cf9);
    /* 00627cf9: mov eax, 1 */ r_eax = 0x1u;
    /* 00627cfe: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00627d05: jmp 0x627d24 */ goto L_00627d24;
L_00627d07:; BB(0x00627d07);
    /* 00627d07: movzx eax, word ptr [ebp + 0x364] */ r_eax = (u32)R16((u32)(r_ebp+0x364u));
    /* 00627d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627d0f: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x627d14u); f_00816eec();
    /* 00627d14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627d15: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627d18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627d1b: je 0x627d72 */ if (fZ) goto L_00627d72;
L_00627d1d:; BB(0x00627d1d);
    /* 00627d1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627d1f: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627d24u); f_00627a34();
L_00627d24:; BB(0x00627d24);
    /* 00627d24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00627d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627d28: ret  */ FN_RET(0x00627b00); r_esp += 4; return;
L_00627d29:; BB(0x00627d29);
    /* 00627d29: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00627d2c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627d2e: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x627d34u); call_ind(t); }
    /* 00627d34: jmp 0x627d24 */ goto L_00627d24;
L_00627d36:; BB(0x00627d36);
    /* 00627d36: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00627d3c: fcom dword ptr [0x931de4] */ fx_compare(ST(0), R_F32((u32)(0x931de4u))); 
    /* 00627d42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627d44: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627d45: je 0x627d56 */ if (fZ) goto L_00627d56;
L_00627d47:; BB(0x00627d47);
    /* 00627d47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00627d49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00627d4b: call 0x627a34 */ r_esp -= 4; W32(r_esp, 0x627d50u); f_00627a34();
    /* 00627d50: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
L_00627d56:; BB(0x00627d56);
    /* 00627d56: fcomp dword ptr [0x931e2c] */ fx_compare(ST(0), R_F32((u32)(0x931e2cu))); FPOP();
    /* 00627d5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627d5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627d5f: jne 0x627d24 */ if (!fZ) goto L_00627d24;
L_00627d61:; BB(0x00627d61);
    /* 00627d61: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00627d67: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627d6a: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00627d6d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00627d70: jmp 0x627d24 */ goto L_00627d24;
L_00627d72:; BB(0x00627d72);
    /* 00627d72: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00627d78: fcomp dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); FPOP();
    /* 00627d7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00627d80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00627d81: ja 0x627d1d */ if ((!fC&&!fZ)) goto L_00627d1d;
L_00627d83:; BB(0x00627d83);
    /* 00627d83: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00627d8a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627d8d: je 0x627d1d */ if (fZ) goto L_00627d1d;
L_00627d8f:; BB(0x00627d8f);
    /* 00627d8f: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627d95: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627d9b: mov eax, 2 */ r_eax = 0x2u;
    /* 00627da0: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00627da7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x627dacu); f_005b8638();
    /* 00627dac: mov dword ptr [ebp + 0xc0], 0x41b00000 */ W32((u32)(r_ebp+0xc0u), 0x41b00000u);
    /* 00627db6: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 00627dbc: mov dword ptr [ebp + 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xc8u), 0x3f800000u);
    /* 00627dc6: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627dc9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627dcc: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627dcf: fadd dword ptr [edx*4 + 0x931d68] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d68u));
    /* 00627dd6: fadd dword ptr [0x931db8] */ ST(0) = ST(0) + R_F32((u32)(0x931db8u));
    /* 00627ddc: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
    /* 00627de2: jmp 0x627d1d */ goto L_00627d1d;
}

void f_00627de8(void) /* sub_627DE8 */
{
    FN_ENTER(0x00627de8);
    /* 00627de8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00627de9: mov esi, ecx */ r_esi = r_ecx;
    /* 00627deb: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627df0: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627df6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00627df8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627dfb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00627dfe: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x627e03u); f_005b8638();
    /* 00627e03: mov dword ptr [esi + 0x35c], 0 */ W32((u32)(r_esi+0x35cu), 0x0u);
    /* 00627e0d: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 00627e13: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00627e1a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627e1d: jne 0x627e2c */ if (!fZ) goto L_00627e2c;
L_00627e1f:; BB(0x00627e1f);
    /* 00627e1f: fld dword ptr [0x931da4] */ FPUSH(R_F32((u32)(0x931da4u)));
    /* 00627e25: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00627e2a: jmp 0x627e43 */ goto L_00627e43;
L_00627e2c:; BB(0x00627e2c);
    /* 00627e2c: fld dword ptr [0x931da4] */ FPUSH(R_F32((u32)(0x931da4u)));
    /* 00627e32: mov eax, 3 */ r_eax = 0x3u;
    /* 00627e37: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00627e3e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
L_00627e43:; BB(0x00627e43);
    /* 00627e43: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 00627e49: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00627e4c: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00627e4f: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00627e52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00627e54: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 00627e5a: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 00627e60: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 00627e66: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00627e69: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00627e6c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00627e6f: fadd dword ptr [edx*4 + 0x931d60] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931d60u));
    /* 00627e76: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00627e78: mov ecx, esi */ r_ecx = r_esi;
    /* 00627e7a: fstp dword ptr [esi + 0xc4] */ W_F32((u32)(r_esi+0xc4u), ST(0)); FPOP();
    /* 00627e80: call 0x627070 */ r_esp -= 4; W32(r_esp, 0x627e85u); f_00627070();
    /* 00627e85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627e86: ret  */ FN_RET(0x00627de8); r_esp += 4; return;
}

void f_00627e88(void) /* sub_627E88 */
{
    FN_ENTER(0x00627e88);
    /* 00627e88: mov dword ptr [0xa8ed64], 0x3f800000 */ W32((u32)(0xa8ed64u), 0x3f800000u);
    /* 00627e92: mov dword ptr [0xa8ed68], 0x41000000 */ W32((u32)(0xa8ed68u), 0x41000000u);
    /* 00627e9c: mov dword ptr [0xa8ed6c], 0x3fc00000 */ W32((u32)(0xa8ed6cu), 0x3fc00000u);
    /* 00627ea6: ret  */ FN_RET(0x00627e88); r_esp += 4; return;
}

void f_00627ea8(void) /* sub_627EA8 */
{
    FN_ENTER(0x00627ea8);
    /* 00627ea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627ea9: mov ebp, esp */ r_ebp = r_esp;
    /* 00627eab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00627ead: push 0x8e2d0e */ { u32 v = 0x8e2d0eu; r_esp -= 4; W32(r_esp, v); }
    /* 00627eb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00627eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627eb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00627ec0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627ec3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00627ec6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00627ec9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00627ecc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00627ecf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627ed1: mov dword ptr [0xa8ed80], eax */ W32((u32)(0xa8ed80u), r_eax);
    /* 00627ed6: mov dword ptr [0xa8ed84], eax */ W32((u32)(0xa8ed84u), r_eax);
    /* 00627edb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x627ee0u); f_00807ac0();
    /* 00627ee0: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627ee3: jl 0x627f9a */ if ((fS!=fO)) goto L_00627f9a;
L_00627ee9:; BB(0x00627ee9);
    /* 00627ee9: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627eec: jg 0x627f9a */ if ((!fZ&&fS==fO)) goto L_00627f9a;
L_00627ef2:; BB(0x00627ef2);
    /* 00627ef2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00627ef9: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00627efe: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x627f03u); f_008581c5();
    /* 00627f03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627f04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00627f07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627f09: je 0x628077 */ if (fZ) goto L_00628077;
L_00627f0f:; BB(0x00627f0f);
    /* 00627f0f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00627f16: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00627f1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f25: push 0x9c5bfc */ { u32 v = 0x9c5bfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00627f2a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00627f2c: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x627f31u); f_005b7a84();
    /* 00627f31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00627f3b:; BB(0x00627f3b);
    /* 00627f3b: mov dword ptr [0xa8ed80], ecx */ W32((u32)(0xa8ed80u), r_ecx);
    /* 00627f41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00627f48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627f4a: je 0x627f51 */ if (fZ) goto L_00627f51;
L_00627f4c:; BB(0x00627f4c);
    /* 00627f4c: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x627f51u); f_005b90d0();
L_00627f51:; BB(0x00627f51);
    /* 00627f51: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00627f53: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x627f58u); f_008581c5();
    /* 00627f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627f59: mov dword ptr [0xa8ed84], eax */ W32((u32)(0xa8ed84u), r_eax);
    /* 00627f5e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00627f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f61: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00627f64: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00627f69: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00627f6b: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627f71: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x627f76u); f_005b8624();
    /* 00627f76: mov edx, dword ptr [0xa8ed84] */ r_edx = R32((u32)(0xa8ed84u));
    /* 00627f7c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00627f7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00627f81: mov dword ptr [0xa8ed7c], eax */ W32((u32)(0xa8ed7cu), r_eax);
    /* 00627f86: mov dword ptr [0xa8ed78], eax */ W32((u32)(0xa8ed78u), r_eax);
    /* 00627f8b: mov dword ptr [0xa8ed74], eax */ W32((u32)(0xa8ed74u), r_eax);
    /* 00627f90: mov dword ptr [0xa8ed70], eax */ W32((u32)(0xa8ed70u), r_eax);
    /* 00627f95: jmp 0x628069 */ goto L_00628069;
L_00627f9a:; BB(0x00627f9a);
    /* 00627f9a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00627fa1: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00627fa6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x627fabu); f_008581c5();
    /* 00627fab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627fac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00627faf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627fb1: je 0x62807e */ if (fZ) goto L_0062807e;
L_00627fb7:; BB(0x00627fb7);
    /* 00627fb7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00627fbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627fc5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00627fc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627fcd: push 0x9c5bdc */ { u32 v = 0x9c5bdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00627fd2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00627fd4: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x627fd9u); f_005b7a84();
    /* 00627fd9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00627fdc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00627fe3:; BB(0x00627fe3);
    /* 00627fe3: mov dword ptr [0xa8ed80], ecx */ W32((u32)(0xa8ed80u), r_ecx);
    /* 00627fe9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00627ff0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ff2: je 0x627ff9 */ if (fZ) goto L_00627ff9;
L_00627ff4:; BB(0x00627ff4);
    /* 00627ff4: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x627ff9u); f_005b90d0();
L_00627ff9:; BB(0x00627ff9);
    /* 00627ff9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00627ffb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x628000u); f_008581c5();
    /* 00628000: push 0x931f94 */ { u32 v = 0x931f94u; r_esp -= 4; W32(r_esp, v); }
    /* 00628005: mov dword ptr [0xa8ed84], eax */ W32((u32)(0xa8ed84u), r_eax);
    /* 0062800a: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62800fu); f_008009dc();
    /* 0062800f: push 0x931fb0 */ { u32 v = 0x931fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628014: mov edx, dword ptr [0xa8ed84] */ r_edx = R32((u32)(0xa8ed84u));
    /* 0062801a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062801c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x628021u); f_008009dc();
    /* 00628021: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628024: mov edx, dword ptr [0xa8ed84] */ r_edx = R32((u32)(0xa8ed84u));
    /* 0062802a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062802c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062802f: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00628035: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62803au); f_005b8624();
    /* 0062803a: mov edx, dword ptr [0xa8ed84] */ r_edx = R32((u32)(0xa8ed84u));
    /* 00628040: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00628042: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00628045: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 0062804b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x628050u); f_005b8610();
    /* 00628050: mov dword ptr [0xa8ed74], 1 */ W32((u32)(0xa8ed74u), 0x1u);
    /* 0062805a: mov dword ptr [0xa8ed78], eax */ W32((u32)(0xa8ed78u), r_eax);
    /* 0062805f: mov dword ptr [0xa8ed70], 0 */ W32((u32)(0xa8ed70u), 0x0u);
L_00628069:; BB(0x00628069);
    /* 00628069: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062806c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628073: mov esp, ebp */ r_esp = r_ebp;
    /* 00628075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628076: ret  */ FN_RET(0x00627ea8); r_esp += 4; return;
L_00628077:; BB(0x00628077);
    /* 00628077: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628079: jmp 0x627f3b */ goto L_00627f3b;
L_0062807e:; BB(0x0062807e);
    /* 0062807e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00628080: jmp 0x627fe3 */ goto L_00627fe3;
}

