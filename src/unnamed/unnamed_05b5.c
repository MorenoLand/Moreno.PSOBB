#include "protos.h"

void f_005b50c8(void) /* sub_5B50C8 */
{
    FN_ENTER(0x005b50c8);
    /* 005b50c8: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 005b50cd: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 005b50d3: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005b50da: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b50df: mov dword ptr [ecx + 0x38c], 0x12c */ W32((u32)(r_ecx+0x38cu), 0x12cu);
    /* 005b50e9: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 005b50ef: add dword ptr [ecx + 0x384], 1 */ { u32 ad = (u32)(r_ecx+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b50f6: ret 4 */ FN_RET(0x005b50c8); r_esp += 8; return;
}

void f_005b50fc(void) /* sub_5B50FC */
{
    FN_ENTER(0x005b50fc);
    /* 005b50fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b50fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b50ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5101: call 0x5b5120 */ r_esp -= 4; W32(r_esp, 0x5b5106u); f_005b5120();
    /* 005b5106: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b510a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b510c: jne 0x5b5112 */ if (!fZ) goto L_005b5112;
L_005b510e:; BB(0x005b510e);
    /* 005b510e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b510f: ret 4 */ FN_RET(0x005b50fc); r_esp += 8; return;
L_005b5112:; BB(0x005b5112);
    /* 005b5112: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5113: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5b5118u); f_005c2f74();
    /* 005b5118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b5119: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b511a: ret 4 */ FN_RET(0x005b50fc); r_esp += 8; return;
}

void f_005b5120(void) /* sub_5B5120 */
{
    FN_ENTER(0x005b5120);
    /* 005b5120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5121: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5125: push 0x8d9158 */ { u32 v = 0x8d9158u; r_esp -= 4; W32(r_esp, v); }
    /* 005b512a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b5130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5131: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b5138: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b513b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b513e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005b5141: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005b5144: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b5147: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b514a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b5151: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5154: mov dword ptr [eax], 0xb0b6a0 */ W32((u32)(r_eax), 0xb0b6a0u);
    /* 005b515a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b515b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x5b5160u); f_007b4e84();
    /* 005b5160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b5161: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5164: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5b5169u); f_007b9c8c();
    /* 005b5169: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b5170: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5173: add ecx, 0x3a0 */ {  u32 a = r_ecx; u32 b = 0x3a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5179: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x5b517eu); f_005770ec();
    /* 005b517e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b5185: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5188: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5b518du); f_0078638c();
    /* 005b518d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5190: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b5197: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b519a: ret  */ FN_RET(0x005b5120); r_esp += 4; return;
}

void f_005b519c(void) /* sub_5B519C */
{
    FN_ENTER(0x005b519c);
    /* 005b519c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b519d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b519f: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
    /* 005b51a9: mov dword ptr [ebx + 0xc0], 0x41300000 */ W32((u32)(r_ebx+0xc0u), 0x41300000u);
    /* 005b51b3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b51b8u); f_00807ac0();
    /* 005b51b8: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b51bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b51bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b51be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b51bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b51c0: push dword ptr [eax*4 + 0x9c1c64] */ { u32 v = R32((u32)(r_eax*4+0x9c1c64u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b51c7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b51ccu); f_00814298();
    /* 005b51cc: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b51d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b51d2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b51d7u); f_0050b510();
    /* 005b51d7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b51da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b51db: ret  */ FN_RET(0x005b519c); r_esp += 4; return;
}

void f_005b51dc(void) /* sub_5B51DC */
{
    FN_ENTER(0x005b51dc);
    /* 005b51dc: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005b51df: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b51e4: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005b51e7: ret  */ FN_RET(0x005b51dc); r_esp += 4; return;
}

void f_005b51e8(void) /* sub_5B51E8 */
{
    FN_ENTER(0x005b51e8);
    /* 005b51e8: mov eax, 2 */ r_eax = 0x2u;
    /* 005b51ed: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005b51f4: ret  */ FN_RET(0x005b51e8); r_esp += 4; return;
}

void f_005b51f8(void) /* sub_5B51F8 */
{
    FN_ENTER(0x005b51f8);
    /* 005b51f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b51f9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b51fc: mov edi, ecx */ r_edi = r_ecx;
    /* 005b51fe: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b5201: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b5204: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005b5208: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b520b: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005b520e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b5212: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005b5215: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b5219: mov eax, dword ptr [edi + 0x2a4] */ r_eax = R32((u32)(r_edi+0x2a4u));
    /* 005b521f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b5223: mov eax, dword ptr [edi + 0x2a8] */ r_eax = R32((u32)(r_edi+0x2a8u));
    /* 005b5229: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b522d: mov eax, dword ptr [edi + 0x2ac] */ r_eax = R32((u32)(r_edi+0x2acu));
    /* 005b5233: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b5237: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b523cu); f_0082f9c4();
    /* 005b523c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005b5240: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5b5245u); f_0083173c();
    /* 005b5245: fdiv dword ptr [0x92b08c] */ ST(0) = ST(0) / R_F32((u32)(0x92b08cu));
    /* 005b524b: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005b524e: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 005b5254: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005b525a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b525d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b525e: ret  */ FN_RET(0x005b51f8); r_esp += 4; return;
}

void f_005b5260(void) /* sub_5B5260 */
{
    FN_ENTER(0x005b5260);
    /* 005b5260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5261: mov esi, ecx */ r_esi = r_ecx;
    /* 005b5263: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b5268u); f_00807ac0();
    /* 005b5268: mov ecx, eax */ r_ecx = r_eax;
    /* 005b526a: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b526d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b526f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5270: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5272: push dword ptr [ecx*4 + 0x9c1bd4] */ { u32 v = R32((u32)(r_ecx*4+0x9c1bd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5279: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b527eu); f_00814298();
    /* 005b527e: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5283: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b5289: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b528a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b528fu); f_0050b510();
    /* 005b528f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5292: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5293: ret  */ FN_RET(0x005b5260); r_esp += 4; return;
}

void f_005b5294(void) /* sub_5B5294 */
{
    FN_ENTER(0x005b5294);
    /* 005b5294: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 005b529a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b529c: je 0x5b52b1 */ if (fZ) goto L_005b52b1;
L_005b529e:; BB(0x005b529e);
    /* 005b529e: mov dword ptr [ecx + 0x3d0], 0 */ W32((u32)(r_ecx+0x3d0u), 0x0u);
    /* 005b52a8: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b52ab: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005b52b1:; BB(0x005b52b1);
    /* 005b52b1: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 005b52b7: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 005b52bb: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005b52c2: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005b52c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b52c8: fld dword ptr [edx*8 + 0x9c1988] */ FPUSH(R_F32((u32)(r_edx*8+0x9c1988u)));
    /* 005b52cf: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 005b52d2: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005b52d8: fstp dword ptr [ecx + 0xd0] */ W_F32((u32)(r_ecx+0xd0u), ST(0)); FPOP();
    /* 005b52de: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b52e3: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005b52e9: ret  */ FN_RET(0x005b5294); r_esp += 4; return;
}

void f_005b52ec(void) /* sub_5B52EC */
{
    FN_ENTER(0x005b52ec);
    /* 005b52ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b52ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b52ee: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b52f1: mov edi, ecx */ r_edi = r_ecx;
    /* 005b52f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005b52f5: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5b52fau); f_00787534();
    /* 005b52fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b52fb: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5b5300u); f_008113e4();
    /* 005b5300: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b5301: mov dword ptr [edi + 0x3c4], 0 */ W32((u32)(r_edi+0x3c4u), 0x0u);
    /* 005b530b: mov ecx, edi */ r_ecx = r_edi;
    /* 005b530d: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x5b5312u); f_007778d8();
    /* 005b5312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5313: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b5318u); f_007b4d18();
    /* 005b5318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b5319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b531b: je 0x5b5396 */ if (fZ) goto L_005b5396;
L_005b531d:; BB(0x005b531d);
    /* 005b531d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b5320: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 005b5323: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005b5326: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005b5329: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005b532c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b5330: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b5334: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005b5337: mov edx, esi */ r_edx = r_esi;
    /* 005b5339: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b533eu); f_0082f9c4();
    /* 005b533e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b5341: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b5345: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b5347: fmul qword ptr [0x92af58] */ ST(0) = ST(0) * R_F64((u32)(0x92af58u));
    /* 005b534d: fdiv qword ptr [0x92af50] */ ST(0) = ST(0) / R_F64((u32)(0x92af50u));
    /* 005b5353: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b5357: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b535c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5361: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b5365: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b5369: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b536d: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b5371: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b5375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5376: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5379: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b537eu); f_007a9018();
    /* 005b537e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5381: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5386: jge 0x5b5399 */ if ((fS==fO)) goto L_005b5399;
L_005b5388:; BB(0x005b5388);
    /* 005b5388: mov eax, 9 */ r_eax = 0x9u;
    /* 005b538d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b5394: jmp 0x5b53a5 */ goto L_005b53a5;
L_005b5396:; BB(0x005b5396);
    /* 005b5396: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_005b5399:; BB(0x005b5399);
    /* 005b5399: mov eax, 8 */ r_eax = 0x8u;
    /* 005b539e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_005b53a5:; BB(0x005b53a5);
    /* 005b53a5: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b53aau); f_00807ac0();
    /* 005b53aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b53ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b53af: push dword ptr [eax*4 + 0x9c1bf8] */ { u32 v = R32((u32)(r_eax*4+0x9c1bf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b53b6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b53bbu); f_00814298();
    /* 005b53bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b53be: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b53c3u); f_00807ac0();
    /* 005b53c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b53c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b53c8: push dword ptr [eax*4 + 0x9c1c1c] */ { u32 v = R32((u32)(r_eax*4+0x9c1c1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b53cf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b53d4u); f_00814298();
    /* 005b53d4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b53d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b53d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b53d9: ret  */ FN_RET(0x005b52ec); r_esp += 4; return;
}

void f_005b53dc(void) /* sub_5B53DC */
{
    FN_ENTER(0x005b53dc);
    /* 005b53dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b53dd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b53df: fld dword ptr [ebp + 0x39c] */ FPUSH(R_F32((u32)(r_ebp+0x39cu)));
    /* 005b53e5: fld dword ptr [0x92b084] */ FPUSH(R_F32((u32)(0x92b084u)));
    /* 005b53eb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b53ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b53ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b53f0: jbe 0x5b541e */ if ((fC||fZ)) goto L_005b541e;
L_005b53f2:; BB(0x005b53f2);
    /* 005b53f2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005b53f4: fmul dword ptr [0x92b078] */ ST(0) = ST(0) * R_F32((u32)(0x92b078u));
    /* 005b53fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b53fc: fcom dword ptr [0x92b07c] */ fx_compare(ST(0), R_F32((u32)(0x92b07cu))); 
    /* 005b5402: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5404: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5405: jbe 0x5b5416 */ if ((fC||fZ)) goto L_005b5416;
L_005b5407:; BB(0x005b5407);
    /* 005b5407: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b5409: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005b540e: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 005b5414: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5415: ret  */ FN_RET(0x005b53dc); r_esp += 4; return;
L_005b5416:; BB(0x005b5416);
    /* 005b5416: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 005b541c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b541d: ret  */ FN_RET(0x005b53dc); r_esp += 4; return;
L_005b541e:; BB(0x005b541e);
    /* 005b541e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b5420: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b5422: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005b5428: fsub dword ptr [ebp + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xc8u));
    /* 005b542e: fcom dword ptr [0x92b080] */ fx_compare(ST(0), R_F32((u32)(0x92b080u))); 
    /* 005b5434: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5436: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 005b543c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b543d: ja 0x5b54c7 */ if ((!fC&&!fZ)) goto L_005b54c7;
L_005b5443:; BB(0x005b5443);
    /* 005b5443: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005b5446: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005b544c: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b5451: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005b5454: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b5457: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
    /* 005b545d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b545f: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 005b5465: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005b546a: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 005b5470: movzx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)R16((u32)(r_ebp+0x32eu));
    /* 005b5477: mov word ptr [ebp + 0x332], ax */ W16((u32)(r_ebp+0x332u), (u16)r_eax);
    /* 005b547e: mov eax, 1 */ r_eax = 0x1u;
    /* 005b5483: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 005b548a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b548c: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005b5493: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b5495: push dword ptr [0x9c1a3c] */ { u32 v = R32((u32)(0x9c1a3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b549b: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b54a0u); f_005b5de0();
    /* 005b54a0: movzx eax, word ptr [0x9c1a40] */ r_eax = (u32)R16((u32)(0x9c1a40u));
    /* 005b54a7: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b54ae: mov edx, dword ptr [0x9c1a44] */ r_edx = R32((u32)(0x9c1a44u));
    /* 005b54b4: or dword ptr [ebp + 0x37c], edx */ { u32 ad = (u32)(r_ebp+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b54ba: mov eax, dword ptr [0x9c1a34] */ r_eax = R32((u32)(0x9c1a34u));
    /* 005b54bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b54c1: je 0x5b54c7 */ if (fZ) goto L_005b54c7;
L_005b54c3:; BB(0x005b54c3);
    /* 005b54c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b54c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b54c7u); call_ind(t); }
L_005b54c7:; BB(0x005b54c7);
    /* 005b54c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b54c8: ret  */ FN_RET(0x005b53dc); r_esp += 4; return;
}

void f_005b54cc(void) /* sub_5B54CC */
{
    FN_ENTER(0x005b54cc);
    /* 005b54cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b54cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b54ce: mov edi, ecx */ r_edi = r_ecx;
    /* 005b54d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b54d2: push dword ptr [0xa749f0] */ { u32 v = R32((u32)(0xa749f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b54d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b54da: call 0x5b55bc */ r_esp -= 4; W32(r_esp, 0x5b54dfu); f_005b55bc();
    /* 005b54df: mov esi, eax */ r_esi = r_eax;
    /* 005b54e1: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 005b54e4: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b54ea: je 0x5b55ac */ if (fZ) goto L_005b55ac;
L_005b54f0:; BB(0x005b54f0);
    /* 005b54f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b54f1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b54f6u); f_007b4d18();
    /* 005b54f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b54f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b54f8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b54fa: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5b54ffu); f_007706b0();
L_005b54ff:; BB(0x005b54ff);
    /* 005b54ff: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5501: call 0x786584 */ r_esp -= 4; W32(r_esp, 0x5b5506u); f_00786584();
    /* 005b5506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5508: jne 0x5b5516 */ if (!fZ) goto L_005b5516;
L_005b550a:; BB(0x005b550a);
    /* 005b550a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b550c: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5b5511u); f_007865cc();
    /* 005b5511: mov esi, 0xffff */ r_esi = 0xffffu;
L_005b5516:; BB(0x005b5516);
    /* 005b5516: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 005b5519: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b551e: je 0x5b55a9 */ if (fZ) goto L_005b55a9;
L_005b5524:; BB(0x005b5524);
    /* 005b5524: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b5527: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005b552d: movzx esi, word ptr [edi + 0x32e] */ r_esi = (u32)R16((u32)(r_edi+0x32eu));
    /* 005b5534: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b5539: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b553c: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b553f: mov dword ptr [edi + 0x398], 0 */ W32((u32)(r_edi+0x398u), 0x0u);
    /* 005b5549: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005b554f: mov word ptr [edi + 0x332], si */ W16((u32)(r_edi+0x332u), (u16)r_esi);
    /* 005b5556: mov eax, 2 */ r_eax = 0x2u;
    /* 005b555b: mov dword ptr [edi + 0x39c], 0x3f800000 */ W32((u32)(r_edi+0x39cu), 0x3f800000u);
    /* 005b5565: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005b556c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b556e: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005b5575: push dword ptr [0x9c1a50] */ { u32 v = R32((u32)(0x9c1a50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b557b: mov ecx, edi */ r_ecx = r_edi;
    /* 005b557d: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b5582u); f_005b5de0();
    /* 005b5582: movzx eax, word ptr [0x9c1a54] */ r_eax = (u32)R16((u32)(0x9c1a54u));
    /* 005b5589: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b5590: mov edx, dword ptr [0x9c1a58] */ r_edx = R32((u32)(0x9c1a58u));
    /* 005b5596: or dword ptr [edi + 0x37c], edx */ { u32 ad = (u32)(r_edi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b559c: mov eax, dword ptr [0x9c1a48] */ r_eax = R32((u32)(0x9c1a48u));
    /* 005b55a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b55a3: je 0x5b55a9 */ if (fZ) goto L_005b55a9;
L_005b55a5:; BB(0x005b55a5);
    /* 005b55a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005b55a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b55a9u); call_ind(t); }
L_005b55a9:; BB(0x005b55a9);
    /* 005b55a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b55aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b55ab: ret  */ FN_RET(0x005b54cc); r_esp += 4; return;
L_005b55ac:; BB(0x005b55ac);
    /* 005b55ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b55ae: mov ecx, edi */ r_ecx = r_edi;
    /* 005b55b0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5b55b5u); f_007706b0();
    /* 005b55b5: jmp 0x5b54ff */ goto L_005b54ff;
}

void f_005b55bc(void) /* sub_5B55BC */
{
    FN_ENTER(0x005b55bc);
    /* 005b55bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b55bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b55be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b55bf: mov esi, ecx */ r_esi = r_ecx;
    /* 005b55c1: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005b55c5: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005b55c9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005b55cc: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b55ce: je 0x5b5606 */ if (fZ) goto L_005b5606;
L_005b55d0:; BB(0x005b55d0);
    /* 005b55d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b55d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b55d2: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b55d7: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005b55da: mov ecx, esi */ r_ecx = r_esi;
    /* 005b55dc: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x5b55e1u); f_0077170c();
    /* 005b55e1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005b55e4: and edx, 0xfffff7ff */ {  u32 a = r_edx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b55ea: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005b55ed: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005b55f0: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b55f6: je 0x5b5606 */ if (fZ) goto L_005b5606;
L_005b55f8:; BB(0x005b55f8);
    /* 005b55f8: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005b55fc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b55fe: je 0x5b5606 */ if (fZ) goto L_005b5606;
L_005b5600:; BB(0x005b5600);
    /* 005b5600: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5602: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5603: ret 8 */ FN_RET(0x005b55bc); r_esp += 12; return;
L_005b5606:; BB(0x005b5606);
    /* 005b5606: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5607: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5608: mov ecx, esi */ r_ecx = r_esi;
    /* 005b560a: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5b560fu); f_007714cc();
    /* 005b560f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5611: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5612: ret 8 */ FN_RET(0x005b55bc); r_esp += 12; return;
}

void f_005b5618(void) /* sub_5B5618 */
{
    FN_ENTER(0x005b5618);
    /* 005b5618: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5619: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b561a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b561d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b561f: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5624: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5626: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b562bu); f_007aaa30();
    /* 005b562b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b562d: je 0x5b5656 */ if (fZ) goto L_005b5656;
L_005b562f:; BB(0x005b562f);
    /* 005b562f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b5634u); f_00807ac0();
    /* 005b5634: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005b5637: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b5639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b563a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b563b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b563c: push dword ptr [eax*4 + 0x9c1cd0] */ { u32 v = R32((u32)(r_eax*4+0x9c1cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5643: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b5648u); f_00814298();
    /* 005b5648: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b564d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b564e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b5653u); f_0050b510();
    /* 005b5653: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5656:; BB(0x005b5656);
    /* 005b5656: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b565b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b565d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b5662u); f_007aaa30();
    /* 005b5662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5664: je 0x5b568d */ if (fZ) goto L_005b568d;
L_005b5666:; BB(0x005b5666);
    /* 005b5666: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b566bu); f_00807ac0();
    /* 005b566b: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005b566e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b5670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5671: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5672: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5673: push dword ptr [eax*4 + 0x9c1cd0] */ { u32 v = R32((u32)(r_eax*4+0x9c1cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b567a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b567fu); f_00814298();
    /* 005b567f: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5685: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b568au); f_0050b510();
    /* 005b568a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b568d:; BB(0x005b568d);
    /* 005b568d: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b5693: fcom dword ptr [0x92b058] */ fx_compare(ST(0), R_F32((u32)(0x92b058u))); 
    /* 005b5699: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b569b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b569c: jb 0x5b56ad */ if (fC) goto L_005b56ad;
L_005b569e:; BB(0x005b569e);
    /* 005b569e: fcom dword ptr [0x92b054] */ fx_compare(ST(0), R_F32((u32)(0x92b054u))); 
    /* 005b56a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b56a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b56a7: jbe 0x5b5734 */ if ((fC||fZ)) goto L_005b5734;
L_005b56ad:; BB(0x005b56ad);
    /* 005b56ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b56af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b56b1: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005b56b7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b56ba: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
    /* 005b56c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b56c2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b56c7u); f_007aaa30();
    /* 005b56c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b56c9: je 0x5b56da */ if (fZ) goto L_005b56da;
L_005b56cb:; BB(0x005b56cb);
    /* 005b56cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b56cd: call 0x5b5768 */ r_esp -= 4; W32(r_esp, 0x5b56d2u); f_005b5768();
    /* 005b56d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b56d4: jne 0x5b575f */ if (!fZ) goto L_005b575f;
L_005b56da:; BB(0x005b56da);
    /* 005b56da: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b56e0: fcomp dword ptr [0x92b058] */ fx_compare(ST(0), R_F32((u32)(0x92b058u))); FPOP();
    /* 005b56e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b56e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b56e9: jae 0x5b575f */ if (!fC) goto L_005b575f;
L_005b56eb:; BB(0x005b56eb);
    /* 005b56eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b56ed: call 0x77070c */ r_esp -= 4; W32(r_esp, 0x5b56f2u); f_0077070c();
    /* 005b56f2: mov edx, dword ptr [ebx + 0x3bc] */ r_edx = R32((u32)(r_ebx+0x3bcu));
    /* 005b56f8: fild dword ptr [edx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x18u)));
    /* 005b56fb: fmul dword ptr [0x92b060] */ ST(0) = ST(0) * R_F32((u32)(0x92b060u));
    /* 005b5701: fdiv dword ptr [0x92b05c] */ ST(0) = ST(0) / R_F32((u32)(0x92b05cu));
    /* 005b5707: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5709: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b570c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b5710: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5715: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b5719: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b571d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b5721: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b5724: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b5728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5729: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5b572eu); f_00772358();
    /* 005b572e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5733: ret  */ FN_RET(0x005b5618); r_esp += 4; return;
L_005b5734:; BB(0x005b5734);
    /* 005b5734: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b5736: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5739: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005b573f: mov edx, dword ptr [ebx + 0x3bc] */ r_edx = R32((u32)(r_ebx+0x3bcu));
    /* 005b5745: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 005b5747: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b574a: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
    /* 005b5750: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5753: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5755: call dword ptr [ebp + 0x48] */ { u32 t = R32((u32)(r_ebp+0x48u)); r_esp -= 4; W32(r_esp, 0x5b5758u); call_ind(t); }
    /* 005b5758: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b575a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b575c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b575fu); call_ind(t); }
L_005b575f:; BB(0x005b575f);
    /* 005b575f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5764: ret  */ FN_RET(0x005b5618); r_esp += 4; return;
}

void f_005b5768(void) /* sub_5B5768 */
{
    FN_ENTER(0x005b5768);
    /* 005b5768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5769: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b576a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b576b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b576c: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b576f: mov esi, ecx */ r_esi = r_ecx;
    /* 005b5771: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5773: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b5776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5777: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b577c: call 0x5b5e5c */ r_esp -= 4; W32(r_esp, 0x5b5781u); f_005b5e5c();
    /* 005b5781: mov ebp, dword ptr [esi + 0x380] */ r_ebp = R32((u32)(r_esi+0x380u));
    /* 005b5787: lea ebp, [ebp + ebp*4] */ r_ebp = (u32)(r_ebp+r_ebp*4);
    /* 005b578b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005b578e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5793: je 0x5b5cf2 */ if (fZ) goto L_005b5cf2;
L_005b5799:; BB(0x005b5799);
    /* 005b5799: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b579c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b579f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b57a1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b57a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b57a9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b57ab: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005b57ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b57af: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_005b57b3:; BB(0x005b57b3);
    /* 005b57b3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b57b5: fmul qword ptr [0x92af48] */ ST(0) = ST(0) * R_F64((u32)(0x92af48u));
    /* 005b57bb: fdiv qword ptr [0x92af40] */ ST(0) = ST(0) / R_F64((u32)(0x92af40u));
    /* 005b57c1: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005b57c5: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005b57ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b57cf: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005b57d3: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005b57d7: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b57db: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b57df: mov ecx, esi */ r_ecx = r_esi;
    /* 005b57e1: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 005b57e5: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b57eau); f_00770738();
    /* 005b57ea: mov ebx, eax */ r_ebx = r_eax;
    /* 005b57ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b57ee: je 0x5b5ac5 */ if (fZ) goto L_005b5ac5;
L_005b57f4:; BB(0x005b57f4);
    /* 005b57f4: lea edx, [edi + 0x8000] */ r_edx = (u32)(r_edi+0x8000u);
    /* 005b57fa: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b57fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b57fe: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5801: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b5806u); f_007a9018();
    /* 005b5806: mov ecx, eax */ r_ecx = r_eax;
    /* 005b5808: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b580b: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005b580f: fcomp dword ptr [0xa749f4] */ fx_compare(ST(0), R_F32((u32)(0xa749f4u))); FPOP();
    /* 005b5815: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5817: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5818: jae 0x5b5974 */ if (!fC) goto L_005b5974;
L_005b581e:; BB(0x005b581e);
    /* 005b581e: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 005b5824: fild dword ptr [edx + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x1cu)));
    /* 005b5827: fmul dword ptr [0x92b040] */ ST(0) = ST(0) * R_F32((u32)(0x92b040u));
    /* 005b582d: fdiv dword ptr [0x92b03c] */ ST(0) = ST(0) / R_F32((u32)(0x92b03cu));
    /* 005b5833: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005b5837: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005b583c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5841: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005b5845: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005b5849: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b584d: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b5851: cmp ecx, dword ptr [esp + 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5855: jge 0x5b5974 */ if ((fS==fO)) goto L_005b5974;
L_005b585b:; BB(0x005b585b);
    /* 005b585b: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005b5863: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005b586b: mov dword ptr [esp + 0x14], 0x41a00000 */ W32((u32)(r_esp+0x14u), 0x41a00000u);
    /* 005b5873: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b5878u); f_0082d7b0();
    /* 005b5878: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b587a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5b587fu); f_00830cd8();
    /* 005b587f: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005b5882: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5b5887u); f_0082d838();
    /* 005b5887: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005b588a: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b5890: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b5893: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5895: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b589au); f_0082d8bc();
    /* 005b589a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b589e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b589f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005b58a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b58a5: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b58aau); f_00830aa0();
    /* 005b58aa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b58afu); f_0082da80();
    /* 005b58af: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b58b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b58b4: mov ecx, esi */ r_ecx = r_esi;
    /* 005b58b6: call 0x5b5eb4 */ r_esp -= 4; W32(r_esp, 0x5b58bbu); f_005b5eb4();
    /* 005b58bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b58bd: je 0x5b5974 */ if (fZ) goto L_005b5974;
L_005b58c3:; BB(0x005b58c3);
    /* 005b58c3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005b58c7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005b58cb: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005b58cf: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 005b58d2: mov edi, dword ptr [esi + 0x37c] */ r_edi = R32((u32)(r_esi+0x37cu));
    /* 005b58d8: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005b58de: movzx eax, word ptr [esi + 0x32e] */ r_eax = (u32)R16((u32)(r_esi+0x32eu));
    /* 005b58e5: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 005b58ef: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005b58f5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005b58fb: mov dword ptr [esi + 0x39c], 0x3f800000 */ W32((u32)(r_esi+0x39cu), 0x3f800000u);
    /* 005b5905: and ebp, 0xfffbffff */ {  u32 a = r_ebp; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005b590b: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 005b590e: and edi, 0xfffffff1 */ {  u32 a = r_edi; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005b5911: mov dword ptr [esi + 0x37c], edi */ W32((u32)(r_esi+0x37cu), r_edi);
    /* 005b5917: mov word ptr [esi + 0x332], ax */ W16((u32)(r_esi+0x332u), (u16)r_eax);
    /* 005b591e: mov eax, 3 */ r_eax = 0x3u;
    /* 005b5923: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005b592a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b592c: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005b5933: push dword ptr [0x9c1a64] */ { u32 v = R32((u32)(0x9c1a64u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5939: mov ecx, esi */ r_ecx = r_esi;
    /* 005b593b: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b5940u); f_005b5de0();
    /* 005b5940: movzx eax, word ptr [0x9c1a68] */ r_eax = (u32)R16((u32)(0x9c1a68u));
    /* 005b5947: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b594e: mov edx, dword ptr [0x9c1a6c] */ r_edx = R32((u32)(0x9c1a6cu));
    /* 005b5954: or dword ptr [esi + 0x37c], edx */ { u32 ad = (u32)(r_esi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b595a: mov eax, dword ptr [0x9c1a5c] */ r_eax = R32((u32)(0x9c1a5cu));
    /* 005b595f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5961: je 0x5b5967 */ if (fZ) goto L_005b5967;
L_005b5963:; BB(0x005b5963);
    /* 005b5963: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5965: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b5967u); call_ind(t); }
L_005b5967:; BB(0x005b5967);
    /* 005b5967: mov eax, 1 */ r_eax = 0x1u;
    /* 005b596c: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b596f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5971: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5972: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b5973: ret  */ FN_RET(0x005b5768); r_esp += 4; return;
L_005b5974:; BB(0x005b5974);
    /* 005b5974: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005b5977: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b597a: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 005b597e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b597f: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5982: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b5987u); f_007a9018();
    /* 005b5987: mov edx, eax */ r_edx = r_eax;
    /* 005b5989: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b598c: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005b5990: mov dword ptr [esi + 0x3c0], 0 */ W32((u32)(r_esi+0x3c0u), 0x0u);
    /* 005b599a: mov edi, dword ptr [ebp*4 + 0x9c1dbc] */ r_edi = R32((u32)(r_ebp*4+0x9c1dbcu));
    /* 005b59a1: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 005b59a4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b59a6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b59a8: lea edi, [edi + edi + 0x9c1ac0] */ r_edi = (u32)(r_edi+r_edi+0x9c1ac0u);
    /* 005b59af: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 005b59b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b59b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b59b4: jae 0x5b5a52 */ if (!fC) goto L_005b5a52;
L_005b59ba:; BB(0x005b59ba);
    /* 005b59ba: cmp edx, dword ptr [edi + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b59bd: jge 0x5b5a52 */ if ((fS==fO)) goto L_005b5a52;
L_005b59c3:; BB(0x005b59c3);
    /* 005b59c3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 005b59c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b59c9: je 0x5b59d6 */ if (fZ) goto L_005b59d6;
L_005b59cb:; BB(0x005b59cb);
    /* 005b59cb: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b59d1: jmp 0x5b5b5c */ goto L_005b5b5c;
L_005b59d6:; BB(0x005b59d6);
    /* 005b59d6: lea ecx, [esi + 0x168] */ r_ecx = (u32)(r_esi+0x168u);
    /* 005b59dc: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5b59e1u); f_00763498();
    /* 005b59e1: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 005b59e5: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b59e9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b59ec: fadd dword ptr [eax*4 + 0x92af38] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92af38u));
    /* 005b59f3: mov edx, 3 */ r_edx = 0x3u;
    /* 005b59f8: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005b59fc: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b5a00: fadd dword ptr [0x92af38] */ ST(0) = ST(0) + R_F32((u32)(0x92af38u));
    /* 005b5a06: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b5a08: fdiv dword ptr [0x92b038] */ ST(0) = ST(0) / R_F32((u32)(0x92b038u));
    /* 005b5a0e: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005b5a12: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005b5a17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5a1c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005b5a20: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005b5a24: fistp qword ptr [esp + 0x58] */ W64((u32)(r_esp+0x58u), (u64)fx_int64(ST(0))); FPOP();
    /* 005b5a28: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b5a2c: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 005b5a30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5a32: jne 0x5b5a47 */ if (!fZ) goto L_005b5a47;
L_005b5a34:; BB(0x005b5a34);
    /* 005b5a34: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b5a3a: mov edi, 0x9c1bb0 */ r_edi = 0x9c1bb0u;
    /* 005b5a3f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b5a42: jmp 0x5b5b5c */ goto L_005b5b5c;
L_005b5a47:; BB(0x005b5a47);
    /* 005b5a47: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b5a4d: jmp 0x5b5b5c */ goto L_005b5b5c;
L_005b5a52:; BB(0x005b5a52);
    /* 005b5a52: mov edi, dword ptr [ebp*4 + 0x9c1dc0] */ r_edi = R32((u32)(r_ebp*4+0x9c1dc0u));
    /* 005b5a59: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005b5a5d: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 005b5a60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b5a62: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b5a64: lea edi, [edi + edi + 0x9c1ac0] */ r_edi = (u32)(r_edi+r_edi+0x9c1ac0u);
    /* 005b5a6b: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 005b5a6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5a6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5a70: jae 0x5b5acf */ if (!fC) goto L_005b5acf;
L_005b5a72:; BB(0x005b5a72);
    /* 005b5a72: cmp edx, dword ptr [edi + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5a75: jge 0x5b5acf */ if ((fS==fO)) goto L_005b5acf;
L_005b5a77:; BB(0x005b5a77);
    /* 005b5a77: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005b5a7a: mov ebp, dword ptr [esi + 0x40] */ r_ebp = R32((u32)(r_esi+0x40u));
    /* 005b5a7d: mov dword ptr [esp + 0x28], 0x41200000 */ W32((u32)(r_esp+0x28u), 0x41200000u);
    /* 005b5a85: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005b5a89: mov edx, dword ptr [esi + 0x2a4] */ r_edx = R32((u32)(r_esi+0x2a4u));
    /* 005b5a8f: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 005b5a93: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005b5a97: mov edx, dword ptr [esi + 0x2ac] */ r_edx = R32((u32)(r_esi+0x2acu));
    /* 005b5a9d: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005b5aa1: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 005b5aa5: mov dword ptr [esp + 0x1c], 0x41200000 */ W32((u32)(r_esp+0x1cu), 0x41200000u);
    /* 005b5aad: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 005b5ab1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ab3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ab5: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b5abau); f_0077fffc();
    /* 005b5aba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5abd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5abf: je 0x5b5bee */ if (fZ) goto L_005b5bee;
L_005b5ac5:; BB(0x005b5ac5);
    /* 005b5ac5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b5ac7: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5acc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b5ace: ret  */ FN_RET(0x005b5768); r_esp += 4; return;
L_005b5acf:; BB(0x005b5acf);
    /* 005b5acf: mov ebx, dword ptr [ebp*4 + 0x9c1dc4] */ r_ebx = R32((u32)(r_ebp*4+0x9c1dc4u));
    /* 005b5ad6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005b5ada: lea ebp, [ebx + ebx*4] */ r_ebp = (u32)(r_ebx+r_ebx*4);
    /* 005b5add: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b5adf: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b5ae1: lea edi, [ebp + ebp + 0x9c1ac0] */ r_edi = (u32)(r_ebp+r_ebp+0x9c1ac0u);
    /* 005b5ae8: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 005b5aea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5aec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5aed: jae 0x5b5ac5 */ if (!fC) goto L_005b5ac5;
L_005b5aef:; BB(0x005b5aef);
    /* 005b5aef: cmp edx, dword ptr [edi + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5af2: jge 0x5b5ac5 */ if ((fS==fO)) goto L_005b5ac5;
L_005b5af4:; BB(0x005b5af4);
    /* 005b5af4: lea ecx, [esi + 0x168] */ r_ecx = (u32)(r_esi+0x168u);
    /* 005b5afa: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5b5affu); f_00763498();
    /* 005b5aff: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 005b5b03: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b5b07: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b5b0a: fadd dword ptr [eax*4 + 0x92af38] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92af38u));
    /* 005b5b11: mov edx, 0xa */ r_edx = 0xau;
    /* 005b5b16: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005b5b1a: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b5b1e: fadd dword ptr [0x92af38] */ ST(0) = ST(0) + R_F32((u32)(0x92af38u));
    /* 005b5b24: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b5b26: fdiv dword ptr [0x92b038] */ ST(0) = ST(0) / R_F32((u32)(0x92b038u));
    /* 005b5b2c: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005b5b30: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005b5b35: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5b3a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005b5b3e: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005b5b42: fistp qword ptr [esp + 0x58] */ W64((u32)(r_esp+0x58u), (u64)fx_int64(ST(0))); FPOP();
    /* 005b5b46: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b5b4a: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 005b5b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5b50: jne 0x5b5ac5 */ if (!fZ) goto L_005b5ac5;
L_005b5b56:; BB(0x005b5b56);
    /* 005b5b56: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
L_005b5b5c:; BB(0x005b5b5c);
    /* 005b5b5c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005b5b5f: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 005b5b69: mov dword ptr [esi + 0x3c0], edi */ W32((u32)(r_esi+0x3c0u), r_edi);
    /* 005b5b6f: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b5b74: mov dword ptr [esi + 0x39c], 0x3f800000 */ W32((u32)(r_esi+0x39cu), 0x3f800000u);
    /* 005b5b7e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005b5b81: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b5b84: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 005b5b8a: movzx edx, word ptr [esi + 0x32e] */ r_edx = (u32)R16((u32)(r_esi+0x32eu));
    /* 005b5b91: mov word ptr [esi + 0x332], dx */ W16((u32)(r_esi+0x332u), (u16)r_edx);
    /* 005b5b98: mov ebx, 4 */ r_ebx = 0x4u;
    /* 005b5b9d: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
    /* 005b5ba4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005b5ba6: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 005b5bad: push dword ptr [0x9c1a78] */ { u32 v = R32((u32)(0x9c1a78u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5bb3: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5bb5: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b5bbau); f_005b5de0();
    /* 005b5bba: movzx eax, word ptr [0x9c1a7c] */ r_eax = (u32)R16((u32)(0x9c1a7cu));
    /* 005b5bc1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b5bc8: mov edx, dword ptr [0x9c1a80] */ r_edx = R32((u32)(0x9c1a80u));
    /* 005b5bce: or dword ptr [esi + 0x37c], edx */ { u32 ad = (u32)(r_esi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b5bd4: mov eax, dword ptr [0x9c1a70] */ r_eax = R32((u32)(0x9c1a70u));
    /* 005b5bd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5bdb: je 0x5b5be1 */ if (fZ) goto L_005b5be1;
L_005b5bdd:; BB(0x005b5bdd);
    /* 005b5bdd: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5bdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b5be1u); call_ind(t); }
L_005b5be1:; BB(0x005b5be1);
    /* 005b5be1: mov eax, 1 */ r_eax = 0x1u;
    /* 005b5be6: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5be9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5bea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5beb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5bec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b5bed: ret  */ FN_RET(0x005b5768); r_esp += 4; return;
L_005b5bee:; BB(0x005b5bee);
    /* 005b5bee: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 005b5bf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5bf4: jne 0x5b5c58 */ if (!fZ) goto L_005b5c58;
L_005b5bf6:; BB(0x005b5bf6);
    /* 005b5bf6: lea ecx, [esi + 0x168] */ r_ecx = (u32)(r_esi+0x168u);
    /* 005b5bfc: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5b5c01u); f_00763498();
    /* 005b5c01: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 005b5c05: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b5c09: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b5c0c: fadd dword ptr [eax*4 + 0x92af38] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92af38u));
    /* 005b5c13: mov edx, 3 */ r_edx = 0x3u;
    /* 005b5c18: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005b5c1c: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 005b5c20: fadd dword ptr [0x92af38] */ ST(0) = ST(0) + R_F32((u32)(0x92af38u));
    /* 005b5c26: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b5c28: fdiv dword ptr [0x92b038] */ ST(0) = ST(0) / R_F32((u32)(0x92b038u));
    /* 005b5c2e: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 005b5c32: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 005b5c37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5c3c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005b5c40: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 005b5c44: fistp qword ptr [esp + 0x58] */ W64((u32)(r_esp+0x58u), (u64)fx_int64(ST(0))); FPOP();
    /* 005b5c48: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b5c4c: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 005b5c50: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5c52: jne 0x5b5ac5 */ if (!fZ) goto L_005b5ac5;
L_005b5c58:; BB(0x005b5c58);
    /* 005b5c58: fld dword ptr [0x92b02c] */ FPUSH(R_F32((u32)(0x92b02cu)));
    /* 005b5c5e: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 005b5c61: mov ebp, dword ptr [esi + 0x38] */ r_ebp = R32((u32)(r_esi+0x38u));
    /* 005b5c64: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 005b5c68: mov edx, ebx */ r_edx = r_ebx;
    /* 005b5c6a: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 005b5c6e: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005b5c71: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005b5c74: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005b5c78: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005b5c7b: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005b5c7f: je 0x5b5cd2 */ if (fZ) goto L_005b5cd2;
L_005b5c81:; BB(0x005b5c81);
    /* 005b5c81: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005b5c84: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005b5c88: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 005b5c8b: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005b5c8f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005b5c92: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_005b5c96:; BB(0x005b5c96);
    /* 005b5c96: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 005b5c9a: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005b5c9e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b5ca3u); f_0082f9c4();
    /* 005b5ca3: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 005b5ca7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5b5cacu); f_0083173c();
    /* 005b5cac: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 005b5cb0: fdivr dword ptr [0x92b030] */ ST(0) = R_F32((u32)(0x92b030u)) / ST(0);
    /* 005b5cb6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005b5cb8: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005b5cbb: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b5cc1: fstp dword ptr [esi + 0x3d8] */ W_F32((u32)(r_esi+0x3d8u), ST(0)); FPOP();
    /* 005b5cc7: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005b5ccd: jmp 0x5b5b5c */ goto L_005b5b5c;
L_005b5cd2:; BB(0x005b5cd2);
    /* 005b5cd2: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 005b5cd8: mov edx, dword ptr [esi + 0x2a8] */ r_edx = R32((u32)(r_esi+0x2a8u));
    /* 005b5cde: mov ebx, dword ptr [esi + 0x2ac] */ r_ebx = R32((u32)(r_esi+0x2acu));
    /* 005b5ce4: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005b5ce8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005b5cec: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 005b5cf0: jmp 0x5b5c96 */ goto L_005b5c96;
L_005b5cf2:; BB(0x005b5cf2);
    /* 005b5cf2: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 005b5cf5: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 005b5cf8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b5cfa: mov ebx, dword ptr [esi + 0x50] */ r_ebx = R32((u32)(r_esi+0x50u));
    /* 005b5cfd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005b5d00: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 005b5d03: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b5d07: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 005b5d0a: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 005b5d0d: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 005b5d10: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b5d12: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005b5d14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b5d16: fcom dword ptr [0x92b04c] */ fx_compare(ST(0), R_F32((u32)(0x92b04cu))); 
    /* 005b5d1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5d1e: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 005b5d22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5d23: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b5d27: jae 0x5b5dc3 */ if (!fC) goto L_005b5dc3;
L_005b5d2d:; BB(0x005b5d2d);
    /* 005b5d2d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005b5d2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b5d31: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005b5d34: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b5d3a: movzx ebx, word ptr [esi + 0x32e] */ r_ebx = (u32)R16((u32)(r_esi+0x32eu));
    /* 005b5d41: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b5d46: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005b5d49: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b5d4c: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 005b5d56: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 005b5d5c: mov word ptr [esi + 0x332], bx */ W16((u32)(r_esi+0x332u), (u16)r_ebx);
    /* 005b5d63: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005b5d68: mov dword ptr [esi + 0x39c], 0x3f800000 */ W32((u32)(r_esi+0x39cu), 0x3f800000u);
    /* 005b5d72: mov word ptr [esi + 0x32e], bp */ W16((u32)(r_esi+0x32eu), (u16)r_ebp);
    /* 005b5d79: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b5d7b: mov word ptr [esi + 0x330], di */ W16((u32)(r_esi+0x330u), (u16)r_edi);
    /* 005b5d82: push dword ptr [0x9c1a3c] */ { u32 v = R32((u32)(0x9c1a3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5d88: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5d8a: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b5d8fu); f_005b5de0();
    /* 005b5d8f: movzx eax, word ptr [0x9c1a40] */ r_eax = (u32)R16((u32)(0x9c1a40u));
    /* 005b5d96: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b5d9d: mov edx, dword ptr [0x9c1a44] */ r_edx = R32((u32)(0x9c1a44u));
    /* 005b5da3: or dword ptr [esi + 0x37c], edx */ { u32 ad = (u32)(r_esi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b5da9: mov eax, dword ptr [0x9c1a34] */ r_eax = R32((u32)(0x9c1a34u));
    /* 005b5dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5db0: je 0x5b5db6 */ if (fZ) goto L_005b5db6;
L_005b5db2:; BB(0x005b5db2);
    /* 005b5db2: mov ecx, esi */ r_ecx = r_esi;
    /* 005b5db4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b5db6u); call_ind(t); }
L_005b5db6:; BB(0x005b5db6);
    /* 005b5db6: mov eax, 1 */ r_eax = 0x1u;
    /* 005b5dbb: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5dbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b5dbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5dc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5dc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b5dc2: ret  */ FN_RET(0x005b5768); r_esp += 4; return;
L_005b5dc3:; BB(0x005b5dc3);
    /* 005b5dc3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b5dc7: mov dword ptr [esi + 0x2a4], ebx */ W32((u32)(r_esi+0x2a4u), r_ebx);
    /* 005b5dcd: mov dword ptr [esi + 0x2a8], eax */ W32((u32)(r_esi+0x2a8u), r_eax);
    /* 005b5dd3: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 005b5dd9: jmp 0x5b57b3 */ goto L_005b57b3;
}

void f_005b5de0(void) /* sub_5B5DE0 */
{
    FN_ENTER(0x005b5de0);
    /* 005b5de0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5de1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5de2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b5de4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005b5de8: push 0xa000d68 */ { u32 v = 0xa000d68u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5def: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b5df1: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5b5df6u); f_007b52ec();
    /* 005b5df6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5df8: je 0x5b5e3a */ if (fZ) goto L_005b5e3a;
L_005b5dfa:; BB(0x005b5dfa);
    /* 005b5dfa: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5dfd: jne 0x5b5e21 */ if (!fZ) goto L_005b5e21;
L_005b5dff:; BB(0x005b5dff);
    /* 005b5dff: push 0xa000500 */ { u32 v = 0xa000500u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b5e08: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5b5e0du); f_007b52c4();
    /* 005b5e0d: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b5e13: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b5e16: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 005b5e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5e1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5e1e: ret 4 */ FN_RET(0x005b5de0); r_esp += 8; return;
L_005b5e21:; BB(0x005b5e21);
    /* 005b5e21: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b5e24: jne 0x5b5e57 */ if (!fZ) goto L_005b5e57;
L_005b5e26:; BB(0x005b5e26);
    /* 005b5e26: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b5e2c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b5e2f: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 005b5e35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5e36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5e37: ret 4 */ FN_RET(0x005b5de0); r_esp += 8; return;
L_005b5e3a:; BB(0x005b5e3a);
    /* 005b5e3a: push 0xa000028 */ { u32 v = 0xa000028u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b5e43: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5b5e48u); f_007b52c4();
    /* 005b5e48: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b5e4e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b5e51: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_005b5e57:; BB(0x005b5e57);
    /* 005b5e57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5e58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5e59: ret 4 */ FN_RET(0x005b5de0); r_esp += 8; return;
}

void f_005b5e5c(void) /* sub_5B5E5C */
{
    FN_ENTER(0x005b5e5c);
    /* 005b5e5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e5e: mov edi, ecx */ r_edi = r_ecx;
    /* 005b5e60: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5e64: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5e68: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5e6a: call 0x5b55bc */ r_esp -= 4; W32(r_esp, 0x5b5e6fu); f_005b55bc();
    /* 005b5e6f: mov ebp, eax */ r_ebp = r_eax;
    /* 005b5e71: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 005b5e74: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5e7a: je 0x5b5ea9 */ if (fZ) goto L_005b5ea9;
L_005b5e7c:; BB(0x005b5e7c);
    /* 005b5e7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e7d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b5e82u); f_007b4d18();
    /* 005b5e82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b5e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e84: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5e86: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5b5e8bu); f_007706b0();
L_005b5e8b:; BB(0x005b5e8b);
    /* 005b5e8b: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5e8d: call 0x786584 */ r_esp -= 4; W32(r_esp, 0x5b5e92u); f_00786584();
    /* 005b5e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b5e94: jne 0x5b5ea2 */ if (!fZ) goto L_005b5ea2;
L_005b5e96:; BB(0x005b5e96);
    /* 005b5e96: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5e98: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5b5e9du); f_007865cc();
    /* 005b5e9d: mov ebp, 0xffff */ r_ebp = 0xffffu;
L_005b5ea2:; BB(0x005b5ea2);
    /* 005b5ea2: mov eax, ebp */ r_eax = r_ebp;
    /* 005b5ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5ea5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b5ea6: ret 8 */ FN_RET(0x005b5e5c); r_esp += 12; return;
L_005b5ea9:; BB(0x005b5ea9);
    /* 005b5ea9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5eab: mov ecx, edi */ r_ecx = r_edi;
    /* 005b5ead: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5b5eb2u); f_007706b0();
    /* 005b5eb2: jmp 0x5b5e8b */ goto L_005b5e8b;
}

void f_005b5eb4(void) /* sub_5B5EB4 */
{
    FN_ENTER(0x005b5eb4);
    /* 005b5eb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5eb5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5eb8: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005b5ebb: mov ebp, dword ptr [ecx + 0x3c] */ r_ebp = R32((u32)(r_ecx+0x3cu));
    /* 005b5ebe: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b5ec2: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b5ec5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005b5ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5eca: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b5ece: je 0x5b5f18 */ if (fZ) goto L_005b5f18;
L_005b5ed0:; BB(0x005b5ed0);
    /* 005b5ed0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005b5ed4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b5ed6: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005b5eda: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b5edd: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005b5ee1: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005b5ee4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_005b5ee8:; BB(0x005b5ee8);
    /* 005b5ee8: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 005b5ef0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b5ef3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005b5ef7: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 005b5eff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f03: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b5f08u); f_0077fffc();
    /* 005b5f08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5f0d: je 0x5b5f2e */ if (fZ) goto L_005b5f2e;
L_005b5f0f:; BB(0x005b5f0f);
    /* 005b5f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b5f11: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5f14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5f15: ret 4 */ FN_RET(0x005b5eb4); r_esp += 8; return;
L_005b5f18:; BB(0x005b5f18);
    /* 005b5f18: mov eax, dword ptr [ecx + 0x2a4] */ r_eax = R32((u32)(r_ecx+0x2a4u));
    /* 005b5f1e: mov edx, dword ptr [ecx + 0x2ac] */ r_edx = R32((u32)(r_ecx+0x2acu));
    /* 005b5f24: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b5f28: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005b5f2c: jmp 0x5b5ee8 */ goto L_005b5ee8;
L_005b5f2e:; BB(0x005b5f2e);
    /* 005b5f2e: mov eax, 1 */ r_eax = 0x1u;
    /* 005b5f33: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b5f36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5f37: ret 4 */ FN_RET(0x005b5eb4); r_esp += 8; return;
}

void f_005b5f3c(void) /* sub_5B5F3C */
{
    FN_ENTER(0x005b5f3c);
    /* 005b5f3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f3e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b5f43: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5f4a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b5f4fu); f_007aaa30();
    /* 005b5f4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5f51: je 0x5b5f7a */ if (fZ) goto L_005b5f7a;
L_005b5f53:; BB(0x005b5f53);
    /* 005b5f53: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b5f58u); f_00807ac0();
    /* 005b5f58: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 005b5f5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b5f5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f5f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f60: push dword ptr [eax*4 + 0x9c1cd0] */ { u32 v = R32((u32)(r_eax*4+0x9c1cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5f67: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b5f6cu); f_00814298();
    /* 005b5f6c: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f72: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b5f77u); f_0050b510();
    /* 005b5f77: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5f7a:; BB(0x005b5f7a);
    /* 005b5f7a: push 0x42080000 */ { u32 v = 0x42080000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5f81: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b5f86u); f_007aaa30();
    /* 005b5f86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5f88: je 0x5b5fb1 */ if (fZ) goto L_005b5fb1;
L_005b5f8a:; BB(0x005b5f8a);
    /* 005b5f8a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b5f8fu); f_00807ac0();
    /* 005b5f8f: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 005b5f92: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b5f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f97: push dword ptr [eax*4 + 0x9c1cd0] */ { u32 v = R32((u32)(r_eax*4+0x9c1cd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5f9e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b5fa3u); f_00814298();
    /* 005b5fa3: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fa9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b5faeu); f_0050b510();
    /* 005b5fae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5fb1:; BB(0x005b5fb1);
    /* 005b5fb1: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b5fb7: fcom dword ptr [0x92b014] */ fx_compare(ST(0), R_F32((u32)(0x92b014u))); 
    /* 005b5fbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5fbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5fc0: jbe 0x5b601e */ if ((fC||fZ)) goto L_005b601e;
L_005b5fc2:; BB(0x005b5fc2);
    /* 005b5fc2: fcomp dword ptr [0x92b010] */ fx_compare(ST(0), R_F32((u32)(0x92b010u))); FPOP();
    /* 005b5fc8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b5fca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b5fcb: jae 0x5b6020 */ if (!fC) goto L_005b6020;
L_005b5fcd:; BB(0x005b5fcd);
    /* 005b5fcd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b5fcf: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b5fd4u); f_00770738();
    /* 005b5fd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5fd6: je 0x5b6007 */ if (fZ) goto L_005b6007;
L_005b5fd8:; BB(0x005b5fd8);
    /* 005b5fd8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b5fdb: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 005b5fde: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005b5fe1: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 005b5fe4: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005b5fe7: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005b5feb: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005b5fee: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b5ff2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b5ff7u); f_0082f9c4();
    /* 005b5ff7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b5ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ffb: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6000: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6002: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5b6007u); f_00771858();
L_005b6007:; BB(0x005b6007);
    /* 005b6007: lea edx, [ebx + 0x3d8] */ r_edx = (u32)(r_ebx+0x3d8u);
    /* 005b600d: lea eax, [ebx + 0x3d4] */ r_eax = (u32)(r_ebx+0x3d4u);
    /* 005b6013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6014: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6017: call 0x5b60bc */ r_esp -= 4; W32(r_esp, 0x5b601cu); f_005b60bc();
    /* 005b601c: jmp 0x5b6020 */ goto L_005b6020;
L_005b601e:; BB(0x005b601e);
    /* 005b601e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005b6020:; BB(0x005b6020);
    /* 005b6020: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005b6026: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b6028: je 0x5b60b3 */ if (fZ) goto L_005b60b3;
L_005b602e:; BB(0x005b602e);
    /* 005b602e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005b6031: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 005b6037: movzx esi, word ptr [ebx + 0x32e] */ r_esi = (u32)R16((u32)(r_ebx+0x32eu));
    /* 005b603e: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6043: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005b6046: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6049: mov dword ptr [ebx + 0x398], 0 */ W32((u32)(r_ebx+0x398u), 0x0u);
    /* 005b6053: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
    /* 005b6059: mov word ptr [ebx + 0x332], si */ W16((u32)(r_ebx+0x332u), (u16)r_esi);
    /* 005b6060: mov eax, 2 */ r_eax = 0x2u;
    /* 005b6065: mov dword ptr [ebx + 0x39c], 0x3f800000 */ W32((u32)(r_ebx+0x39cu), 0x3f800000u);
    /* 005b606f: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005b6076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b6078: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005b607f: push dword ptr [0x9c1a50] */ { u32 v = R32((u32)(0x9c1a50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6087: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b608cu); f_005b5de0();
    /* 005b608c: movzx eax, word ptr [0x9c1a54] */ r_eax = (u32)R16((u32)(0x9c1a54u));
    /* 005b6093: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005b609a: mov edx, dword ptr [0x9c1a58] */ r_edx = R32((u32)(0x9c1a58u));
    /* 005b60a0: or dword ptr [ebx + 0x37c], edx */ { u32 ad = (u32)(r_ebx+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b60a6: mov eax, dword ptr [0x9c1a48] */ r_eax = R32((u32)(0x9c1a48u));
    /* 005b60ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b60ad: je 0x5b60b3 */ if (fZ) goto L_005b60b3;
L_005b60af:; BB(0x005b60af);
    /* 005b60af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b60b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b60b3u); call_ind(t); }
L_005b60b3:; BB(0x005b60b3);
    /* 005b60b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b60b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b60b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b60b8: ret  */ FN_RET(0x005b5f3c); r_esp += 4; return;
}

