#include "protos.h"

void f_00714090(void) /* sub_714090 */
{
    FN_ENTER(0x00714090);
    /* 00714090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714091: mov edi, ecx */ r_edi = r_ecx;
    /* 00714093: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00714096: call 0x730f5c */ r_esp -= 4; W32(r_esp, 0x71409bu); f_00730f5c();
    /* 0071409b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071409d: jne 0x7140ba */ if (!fZ) goto L_007140ba;
L_0071409f:; BB(0x0071409f);
    /* 0071409f: movzx eax, word ptr [edi + 0x1e] */ r_eax = (u32)R16((u32)(r_edi+0x1eu));
    /* 007140a3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007140a5: jne 0x7140ae */ if (!fZ) goto L_007140ae;
L_007140a7:; BB(0x007140a7);
    /* 007140a7: mov eax, 1 */ r_eax = 0x1u;
    /* 007140ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007140ad: ret  */ FN_RET(0x00714090); r_esp += 4; return;
L_007140ae:; BB(0x007140ae);
    /* 007140ae: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 007140b1: call 0x7311f0 */ r_esp -= 4; W32(r_esp, 0x7140b6u); f_007311f0();
    /* 007140b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007140b8: je 0x7140c1 */ if (fZ) goto L_007140c1;
L_007140ba:; BB(0x007140ba);
    /* 007140ba: mov eax, 1 */ r_eax = 0x1u;
    /* 007140bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007140c0: ret  */ FN_RET(0x00714090); r_esp += 4; return;
L_007140c1:; BB(0x007140c1);
    /* 007140c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007140c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007140c4: ret  */ FN_RET(0x00714090); r_esp += 4; return;
}

void f_007140c8(void) /* sub_7140C8 */
{
    FN_ENTER(0x007140c8);
    /* 007140c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007140c9: mov edi, ecx */ r_edi = r_ecx;
    /* 007140cb: mov ecx, edi */ r_ecx = r_edi;
    /* 007140cd: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x7140d2u); f_007138a8();
    /* 007140d2: movzx eax, word ptr [edi + 0x1e] */ r_eax = (u32)R16((u32)(r_edi+0x1eu));
    /* 007140d6: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007140db: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 007140df: mov ecx, edi */ r_ecx = r_edi;
    /* 007140e1: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x7140e6u); f_007138e0();
    /* 007140e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007140e7: ret  */ FN_RET(0x007140c8); r_esp += 4; return;
}

void f_007140e8(void) /* sub_7140E8 */
{
    FN_ENTER(0x007140e8);
    /* 007140e8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 007140eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007140ed: je 0x7140f8 */ if (fZ) goto L_007140f8;
L_007140ef:; BB(0x007140ef);
    /* 007140ef: call 0x72fe6c */ r_esp -= 4; W32(r_esp, 0x7140f4u); f_0072fe6c();
    /* 007140f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007140f6: jne 0x7140fb */ if (!fZ) goto L_007140fb;
L_007140f8:; BB(0x007140f8);
    /* 007140f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007140fa: ret  */ FN_RET(0x007140e8); r_esp += 4; return;
L_007140fb:; BB(0x007140fb);
    /* 007140fb: mov eax, 1 */ r_eax = 0x1u;
    /* 00714100: ret  */ FN_RET(0x007140e8); r_esp += 4; return;
}

void f_00714104(void) /* sub_714104 */
{
    FN_ENTER(0x00714104);
    /* 00714104: mov dword ptr [0xa98400], 0x3f800000 */ W32((u32)(0xa98400u), 0x3f800000u);
    /* 0071410e: mov dword ptr [0xa98404], 0x41000000 */ W32((u32)(0xa98404u), 0x41000000u);
    /* 00714118: mov dword ptr [0xa98408], 0x3fc00000 */ W32((u32)(0xa98408u), 0x3fc00000u);
    /* 00714122: ret  */ FN_RET(0x00714104); r_esp += 4; return;
}

void f_00714124(void) /* sub_714124 */
{
    FN_ENTER(0x00714124);
    /* 00714124: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714125: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714129: call 0x714148 */ r_esp -= 4; W32(r_esp, 0x71412eu); f_00714148();
    /* 0071412e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00714132: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714134: jne 0x71413a */ if (!fZ) goto L_0071413a;
L_00714136:; BB(0x00714136);
    /* 00714136: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714137: ret 4 */ FN_RET(0x00714124); r_esp += 8; return;
L_0071413a:; BB(0x0071413a);
    /* 0071413a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071413b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x714140u); f_005c2f74();
    /* 00714140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00714141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714142: ret 4 */ FN_RET(0x00714124); r_esp += 8; return;
}

void f_00714148(void) /* sub_714148 */
{
    FN_ENTER(0x00714148);
    /* 00714148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714149: mov ebp, esp */ r_ebp = r_esp;
    /* 0071414b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071414d: push 0x8f05ec */ { u32 v = 0x8f05ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00714152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714160: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00714169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071416c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071416f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00714172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714175: mov dword ptr [ecx], 0xb3f428 */ W32((u32)(r_ecx), 0xb3f428u);
    /* 0071417b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00714182: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x714187u); f_00710c28();
    /* 00714187: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071418a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00714191: mov esp, ebp */ r_esp = r_ebp;
    /* 00714193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714194: ret  */ FN_RET(0x00714148); r_esp += 4; return;
}

void f_00714198(void) /* sub_714198 */
{
    FN_ENTER(0x00714198);
    /* 00714198: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071419c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007141a0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007141a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007141a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007141a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007141a7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007141aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007141ac: mov esi, edx */ r_esi = r_edx;
    /* 007141ae: mov ebp, eax */ r_ebp = r_eax;
    /* 007141b0: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 007141b5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007141ba: je 0x71430c */ if (fZ) goto L_0071430c;
L_007141c0:; BB(0x007141c0);
    /* 007141c0: fld dword ptr [0x96fc20] */ FPUSH(R_F32((u32)(0x96fc20u)));
    /* 007141c6: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007141ca: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141d0: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007141d4: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 007141d8: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141de: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 007141e2: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 007141e6: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141ec: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 007141f0: mov edx, eax */ r_edx = r_eax;
    /* 007141f2: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141f5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007141f8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007141fb: mov edx, eax */ r_edx = r_eax;
    /* 007141fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007141ff: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00714203: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00714206: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00714209: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071420d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00714211: mov edx, eax */ r_edx = r_eax;
    /* 00714213: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00714215: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00714219: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071421c: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071421f: add edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00714222: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00714225: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00714229: mov edx, dword ptr [edx*4 + 0x96f900] */ r_edx = R32((u32)(r_edx*4+0x96f900u));
    /* 00714230: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00714233: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00714236: jg 0x7142a1 */ if ((!fZ&&fS==fO)) goto L_007142a1;
L_00714238:; BB(0x00714238);
    /* 00714238: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071423d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071423f: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00714244: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x714249u); f_0072e7d0();
    /* 00714249: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071424e: mov ecx, edi */ r_ecx = r_edi;
    /* 00714250: fld dword ptr [0x96fc14] */ FPUSH(R_F32((u32)(0x96fc14u)));
    /* 00714256: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 00714259: fld dword ptr [0x96fc10] */ FPUSH(R_F32((u32)(0x96fc10u)));
    /* 0071425f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00714261: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00714264: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 00714267: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0071426a: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071426f: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x714274u); f_0072e7d0();
    /* 00714274: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00714278: push dword ptr [eax*8 + 0x96f8e4] */ { u32 v = R32((u32)(r_eax*8+0x96f8e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071427f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00714283: push dword ptr [eax*8 + 0x96f8e0] */ { u32 v = R32((u32)(r_eax*8+0x96f8e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071428a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071428c: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x714291u); f_0072e7e4();
    /* 00714291: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00714295: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071429b: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 0071429f: jmp 0x7142cc */ goto L_007142cc;
L_007142a1:; BB(0x007142a1);
    /* 007142a1: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007142a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142a8: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007142ad: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x7142b2u); f_0072e7d0();
    /* 007142b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007142b5: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007142b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007142bb: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 007142be: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007142c2: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007142c8: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
L_007142cc:; BB(0x007142cc);
    /* 007142cc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007142cf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007142d3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007142d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007142d9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007142dc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007142e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142e2: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7142e7u); f_0072e7e4();
    /* 007142e7: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007142eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007142ed: je 0x7142f6 */ if (fZ) goto L_007142f6;
L_007142ef:; BB(0x007142ef);
    /* 007142ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142f1: call 0x72e844 */ r_esp -= 4; W32(r_esp, 0x7142f6u); f_0072e844();
L_007142f6:; BB(0x007142f6);
    /* 007142f6: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007142fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007142fc: je 0x714305 */ if (fZ) goto L_00714305;
L_007142fe:; BB(0x007142fe);
    /* 007142fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714300: call 0x72e854 */ r_esp -= 4; W32(r_esp, 0x714305u); f_0072e854();
L_00714305:; BB(0x00714305);
    /* 00714305: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071430a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071430b: ret  */ FN_RET(0x00714198); r_esp += 4; return;
L_0071430c:; BB(0x0071430c);
    /* 0071430c: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00714310: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00714315: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00714319: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0071431d: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00714323: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 00714327: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 0071432b: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00714331: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 00714335: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714339: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071433a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071433b: ret  */ FN_RET(0x00714198); r_esp += 4; return;
}

void f_007141a4(void) /* sub_7141A4 */
{
    FN_ENTER(0x007141a4);
    /* 007141a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007141a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007141a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007141a7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007141aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007141ac: mov esi, edx */ r_esi = r_edx;
    /* 007141ae: mov ebp, eax */ r_ebp = r_eax;
    /* 007141b0: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 007141b5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007141ba: je 0x71430c */ if (fZ) goto L_0071430c;
L_007141c0:; BB(0x007141c0);
    /* 007141c0: fld dword ptr [0x96fc20] */ FPUSH(R_F32((u32)(0x96fc20u)));
    /* 007141c6: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007141ca: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141d0: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007141d4: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 007141d8: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141de: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 007141e2: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 007141e6: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141ec: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 007141f0: mov edx, eax */ r_edx = r_eax;
    /* 007141f2: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007141f5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007141f8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007141fb: mov edx, eax */ r_edx = r_eax;
    /* 007141fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007141ff: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00714203: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00714206: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00714209: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071420d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00714211: mov edx, eax */ r_edx = r_eax;
    /* 00714213: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00714215: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00714219: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071421c: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071421f: add edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00714222: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00714225: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00714229: mov edx, dword ptr [edx*4 + 0x96f900] */ r_edx = R32((u32)(r_edx*4+0x96f900u));
    /* 00714230: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00714233: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00714236: jg 0x7142a1 */ if ((!fZ&&fS==fO)) goto L_007142a1;
L_00714238:; BB(0x00714238);
    /* 00714238: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071423d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071423f: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00714244: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x714249u); f_0072e7d0();
    /* 00714249: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071424e: mov ecx, edi */ r_ecx = r_edi;
    /* 00714250: fld dword ptr [0x96fc14] */ FPUSH(R_F32((u32)(0x96fc14u)));
    /* 00714256: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 00714259: fld dword ptr [0x96fc10] */ FPUSH(R_F32((u32)(0x96fc10u)));
    /* 0071425f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00714261: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00714264: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 00714267: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0071426a: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071426f: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x714274u); f_0072e7d0();
    /* 00714274: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00714278: push dword ptr [eax*8 + 0x96f8e4] */ { u32 v = R32((u32)(r_eax*8+0x96f8e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071427f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00714283: push dword ptr [eax*8 + 0x96f8e0] */ { u32 v = R32((u32)(r_eax*8+0x96f8e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071428a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071428c: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x714291u); f_0072e7e4();
    /* 00714291: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00714295: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071429b: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 0071429f: jmp 0x7142cc */ goto L_007142cc;
L_007142a1:; BB(0x007142a1);
    /* 007142a1: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007142a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142a8: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007142ad: call 0x72e7d0 */ r_esp -= 4; W32(r_esp, 0x7142b2u); f_0072e7d0();
    /* 007142b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007142b5: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007142b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007142bb: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 007142be: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007142c2: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007142c8: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
L_007142cc:; BB(0x007142cc);
    /* 007142cc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007142cf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007142d3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007142d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007142d9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007142dc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007142e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142e2: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7142e7u); f_0072e7e4();
    /* 007142e7: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 007142eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007142ed: je 0x7142f6 */ if (fZ) goto L_007142f6;
L_007142ef:; BB(0x007142ef);
    /* 007142ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007142f1: call 0x72e844 */ r_esp -= 4; W32(r_esp, 0x7142f6u); f_0072e844();
L_007142f6:; BB(0x007142f6);
    /* 007142f6: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007142fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007142fc: je 0x714305 */ if (fZ) goto L_00714305;
L_007142fe:; BB(0x007142fe);
    /* 007142fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714300: call 0x72e854 */ r_esp -= 4; W32(r_esp, 0x714305u); f_0072e854();
L_00714305:; BB(0x00714305);
    /* 00714305: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071430a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071430b: ret  */ FN_RET(0x007141a4); r_esp += 4; return;
L_0071430c:; BB(0x0071430c);
    /* 0071430c: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00714310: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00714315: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00714319: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0071431d: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00714323: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 00714327: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 0071432b: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00714331: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 00714335: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714339: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071433a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071433b: ret  */ FN_RET(0x007141a4); r_esp += 4; return;
}

void f_0071433c(void) /* sub_71433C */
{
    FN_ENTER(0x0071433c);
    /* 0071433c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00714340: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00714345: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 0071434a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071434d: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00714350: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00714353: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00714356: fadd dword ptr [0x96fc04] */ ST(0) = ST(0) + R_F32((u32)(0x96fc04u));
    /* 0071435c: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0071435f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00714362: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00714366: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0071436a: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0071436d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714370: ret  */ FN_RET(0x0071433c); r_esp += 4; return;
}

void f_0071434a(void) /* sub_71434A */
{
    FN_ENTER(0x0071434a);
    /* 0071434a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071434d: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00714350: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00714353: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00714356: fadd dword ptr [0x96fc04] */ ST(0) = ST(0) + R_F32((u32)(0x96fc04u));
    /* 0071435c: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0071435f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00714362: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00714366: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0071436a: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0071436d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714370: ret  */ FN_RET(0x0071434a); r_esp += 4; return;
}

void f_00714374(void) /* sub_714374 */
{
    FN_ENTER(0x00714374);
    /* 00714374: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00714378: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0071437d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00714381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00714382: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714383: mov esi, ecx */ r_esi = r_ecx;
    /* 00714385: mov ebp, eax */ r_ebp = r_eax;
    /* 00714387: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0071438a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071438d: je 0x714415 */ if (fZ) goto L_00714415;
L_00714393:; BB(0x00714393);
    /* 00714393: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 00714397: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071439c: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 007143a0: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007143a3: jge 0x7143ac */ if ((fS==fO)) goto L_007143ac;
L_007143a5:; BB(0x007143a5);
    /* 007143a5: mov ecx, 0x96fb50 */ r_ecx = 0x96fb50u;
    /* 007143aa: jmp 0x7143bd */ goto L_007143bd;
L_007143ac:; BB(0x007143ac);
    /* 007143ac: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007143af: jge 0x7143b8 */ if ((fS==fO)) goto L_007143b8;
L_007143b1:; BB(0x007143b1);
    /* 007143b1: mov ecx, 0x96fb58 */ r_ecx = 0x96fb58u;
    /* 007143b6: jmp 0x7143bd */ goto L_007143bd;
L_007143b8:; BB(0x007143b8);
    /* 007143b8: mov ecx, 0x96fb60 */ r_ecx = 0x96fb60u;
L_007143bd:; BB(0x007143bd);
    /* 007143bd: push dword ptr [edx*8 + 0x96f924] */ { u32 v = R32((u32)(r_edx*8+0x96f924u)); r_esp -= 4; W32(r_esp, v); }
    /* 007143c4: push dword ptr [edx*8 + 0x96f920] */ { u32 v = R32((u32)(r_edx*8+0x96f920u)); r_esp -= 4; W32(r_esp, v); }
    /* 007143cb: fld dword ptr [0x96fc00] */ FPUSH(R_F32((u32)(0x96fc00u)));
    /* 007143d1: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 007143d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007143d5: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 007143d8: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 007143db: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 007143de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007143e0: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 007143e3: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 007143e6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007143e8: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 007143eb: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 007143ee: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 007143f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007143f3: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7143f8u); f_0072e7e4();
    /* 007143f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007143fa: je 0x714403 */ if (fZ) goto L_00714403;
L_007143fc:; BB(0x007143fc);
    /* 007143fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007143fe: call 0x72e844 */ r_esp -= 4; W32(r_esp, 0x714403u); f_0072e844();
L_00714403:; BB(0x00714403);
    /* 00714403: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00714407: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714409: je 0x714412 */ if (fZ) goto L_00714412;
L_0071440b:; BB(0x0071440b);
    /* 0071440b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071440d: call 0x72e854 */ r_esp -= 4; W32(r_esp, 0x714412u); f_0072e854();
L_00714412:; BB(0x00714412);
    /* 00714412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714413: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714414: ret  */ FN_RET(0x00714374); r_esp += 4; return;
L_00714415:; BB(0x00714415);
    /* 00714415: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00714419: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071441f: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00714423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714425: ret  */ FN_RET(0x00714374); r_esp += 4; return;
}

void f_00714381(void) /* sub_714381 */
{
    FN_ENTER(0x00714381);
    /* 00714381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00714382: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714383: mov esi, ecx */ r_esi = r_ecx;
    /* 00714385: mov ebp, eax */ r_ebp = r_eax;
    /* 00714387: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0071438a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071438d: je 0x714415 */ if (fZ) goto L_00714415;
L_00714393:; BB(0x00714393);
    /* 00714393: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 00714397: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071439c: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 007143a0: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007143a3: jge 0x7143ac */ if ((fS==fO)) goto L_007143ac;
L_007143a5:; BB(0x007143a5);
    /* 007143a5: mov ecx, 0x96fb50 */ r_ecx = 0x96fb50u;
    /* 007143aa: jmp 0x7143bd */ goto L_007143bd;
L_007143ac:; BB(0x007143ac);
    /* 007143ac: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007143af: jge 0x7143b8 */ if ((fS==fO)) goto L_007143b8;
L_007143b1:; BB(0x007143b1);
    /* 007143b1: mov ecx, 0x96fb58 */ r_ecx = 0x96fb58u;
    /* 007143b6: jmp 0x7143bd */ goto L_007143bd;
L_007143b8:; BB(0x007143b8);
    /* 007143b8: mov ecx, 0x96fb60 */ r_ecx = 0x96fb60u;
L_007143bd:; BB(0x007143bd);
    /* 007143bd: push dword ptr [edx*8 + 0x96f924] */ { u32 v = R32((u32)(r_edx*8+0x96f924u)); r_esp -= 4; W32(r_esp, v); }
    /* 007143c4: push dword ptr [edx*8 + 0x96f920] */ { u32 v = R32((u32)(r_edx*8+0x96f920u)); r_esp -= 4; W32(r_esp, v); }
    /* 007143cb: fld dword ptr [0x96fc00] */ FPUSH(R_F32((u32)(0x96fc00u)));
    /* 007143d1: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 007143d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007143d5: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 007143d8: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 007143db: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 007143de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007143e0: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 007143e3: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 007143e6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007143e8: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 007143eb: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 007143ee: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 007143f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007143f3: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7143f8u); f_0072e7e4();
    /* 007143f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007143fa: je 0x714403 */ if (fZ) goto L_00714403;
L_007143fc:; BB(0x007143fc);
    /* 007143fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007143fe: call 0x72e844 */ r_esp -= 4; W32(r_esp, 0x714403u); f_0072e844();
L_00714403:; BB(0x00714403);
    /* 00714403: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00714407: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714409: je 0x714412 */ if (fZ) goto L_00714412;
L_0071440b:; BB(0x0071440b);
    /* 0071440b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071440d: call 0x72e854 */ r_esp -= 4; W32(r_esp, 0x714412u); f_0072e854();
L_00714412:; BB(0x00714412);
    /* 00714412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714413: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714414: ret  */ FN_RET(0x00714381); r_esp += 4; return;
L_00714415:; BB(0x00714415);
    /* 00714415: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00714419: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071441f: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00714423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714425: ret  */ FN_RET(0x00714381); r_esp += 4; return;
}

void f_00714428(void) /* sub_714428 */
{
    FN_ENTER(0x00714428);
    /* 00714428: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071442c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0071442f: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 00714433: ret 4 */ FN_RET(0x00714428); r_esp += 8; return;
}

void f_00714438(void) /* sub_714438 */
{
    FN_ENTER(0x00714438);
    /* 00714438: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071443c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0071443f: mov eax, dword ptr [edx + eax*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_eax*4+0x24u));
    /* 00714443: ret 4 */ FN_RET(0x00714438); r_esp += 8; return;
}

void f_00714448(void) /* sub_714448 */
{
    FN_ENTER(0x00714448);
    /* 00714448: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071444c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0071444f: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00714453: ret 4 */ FN_RET(0x00714448); r_esp += 8; return;
}

void f_00714458(void) /* sub_714458 */
{
    FN_ENTER(0x00714458);
    /* 00714458: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071445c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0071445f: mov eax, dword ptr [edx + eax*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_eax*4+0x34u));
    /* 00714463: ret 4 */ FN_RET(0x00714458); r_esp += 8; return;
}

void f_00714468(void) /* sub_714468 */
{
    FN_ENTER(0x00714468);
    /* 00714468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714469: mov ebp, esp */ r_ebp = r_esp;
    /* 0071446b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071446d: push 0x8f0608 */ { u32 v = 0x8f0608u; r_esp -= 4; W32(r_esp, v); }
    /* 00714472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714480: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00714489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0071448c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071448f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00714492: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714495: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00714498: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071449b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071449d: push 0x9f1e1c */ { u32 v = 0x9f1e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007144a2: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7144a7u); f_00710d30();
    /* 007144a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007144ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007144b1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007144b4: mov dword ptr [ecx], 0xb3f428 */ W32((u32)(r_ecx), 0xb3f428u);
    /* 007144ba: mov eax, dword ptr [0x9f1e18] */ r_eax = R32((u32)(0x9f1e18u));
    /* 007144bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007144c0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007144c3: call 0x712c14 */ r_esp -= 4; W32(r_esp, 0x7144c8u); f_00712c14();
    /* 007144c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007144cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007144cd: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007144d0: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 007144d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007144d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007144dd: mov esp, ebp */ r_esp = r_ebp;
    /* 007144df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007144e0: ret 8 */ FN_RET(0x00714468); r_esp += 12; return;
}

void f_007144e4(void) /* sub_7144E4 */
{
    FN_ENTER(0x007144e4);
    /* 007144e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007144e5: mov esi, ecx */ r_esi = r_ecx;
    /* 007144e7: mov ecx, esi */ r_ecx = r_esi;
    /* 007144e9: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7144eeu); f_00710db4();
    /* 007144ee: mov ecx, esi */ r_ecx = r_esi;
    /* 007144f0: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x7144f5u); f_00710ee4();
    /* 007144f5: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 007144f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007144f9: mov ecx, esi */ r_ecx = r_esi;
    /* 007144fb: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x714500u); f_0072a5ec();
    /* 00714500: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714501: ret  */ FN_RET(0x007144e4); r_esp += 4; return;
}

void f_00714504(void) /* sub_714504 */
{
    FN_ENTER(0x00714504);
    /* 00714504: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714505: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714506: mov edi, ecx */ r_edi = r_ecx;
    /* 00714508: mov ecx, edi */ r_ecx = r_edi;
    /* 0071450a: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x71450fu); f_00712644();
    /* 0071450f: mov ebx, eax */ r_ebx = r_eax;
    /* 00714511: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00714514: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00714516: jge 0x714527 */ if ((fS==fO)) goto L_00714527;
L_00714518:; BB(0x00714518);
    /* 00714518: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 0071451b: fdiv dword ptr [0x96fbfc] */ ST(0) = ST(0) / R_F32((u32)(0x96fbfcu));
    /* 00714521: fst dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0));
    /* 00714524: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
L_00714527:; BB(0x00714527);
    /* 00714527: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714528: mov ecx, edi */ r_ecx = r_edi;
    /* 0071452a: call 0x7119d4 */ r_esp -= 4; W32(r_esp, 0x71452fu); f_007119d4();
    /* 0071452f: fld dword ptr [0x96fbf4] */ FPUSH(R_F32((u32)(0x96fbf4u)));
    /* 00714535: fld dword ptr [0x96fbf8] */ FPUSH(R_F32((u32)(0x96fbf8u)));
    /* 0071453b: fadd dword ptr [edi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x48u));
    /* 0071453e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00714540: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 00714543: fld dword ptr [0x96fbf0] */ FPUSH(R_F32((u32)(0x96fbf0u)));
    /* 00714549: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071454b: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0071454e: fadd dword ptr [edi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4cu));
    /* 00714551: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00714553: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 00714556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714557: fstp dword ptr [ebx + 0x14] */ W_F32((u32)(r_ebx+0x14u), ST(0)); FPOP();
    /* 0071455a: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0071455d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071455f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00714560: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x714565u); f_0072a648();
    /* 00714565: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714566: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00714567: ret  */ FN_RET(0x00714504); r_esp += 4; return;
}

void f_00714568(void) /* sub_714568 */
{
    FN_ENTER(0x00714568);
    /* 00714568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714569: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071456b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071456f: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x714574u); f_0077d8d0();
    /* 00714574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00714575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714576: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714578: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x71457du); f_00714584();
    /* 0071457d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071457e: ret 4 */ FN_RET(0x00714568); r_esp += 8; return;
}

void f_00714584(void) /* sub_714584 */
{
    FN_ENTER(0x00714584);
    /* 00714584: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00714588: cmp eax, dword ptr [ecx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071458b: je 0x714595 */ if (fZ) goto L_00714595;
L_0071458d:; BB(0x0071458d);
    /* 0071458d: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00714590: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x714595u); f_00714598();
L_00714595:; BB(0x00714595);
    /* 00714595: ret 4 */ FN_RET(0x00714584); r_esp += 8; return;
}

void f_00714598(void) /* sub_714598 */
{
    FN_ENTER(0x00714598);
    /* 00714598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00714599: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071459a: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071459d: mov esi, ecx */ r_esi = r_ecx;
    /* 0071459f: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 007145a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007145a4: jne 0x7145c9 */ if (!fZ) goto L_007145c9;
L_007145a6:; BB(0x007145a6);
    /* 007145a6: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007145a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007145ab: je 0x7145b6 */ if (fZ) goto L_007145b6;
L_007145ad:; BB(0x007145ad);
    /* 007145ad: call 0x77d948 */ r_esp -= 4; W32(r_esp, 0x7145b2u); f_0077d948();
    /* 007145b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007145b4: jne 0x7145c9 */ if (!fZ) goto L_007145c9;
L_007145b6:; BB(0x007145b6);
    /* 007145b6: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007145ba: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007145bf: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007145c3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007145c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007145c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007145c8: ret  */ FN_RET(0x00714598); r_esp += 4; return;
L_007145c9:; BB(0x007145c9);
    /* 007145c9: movzx ebx, word ptr [esi + 8] */ r_ebx = (u32)R16((u32)(r_esi+0x8u));
    /* 007145cd: and ebx, 0xffef */ {  u32 a = r_ebx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007145d3: mov word ptr [esi + 8], bx */ W16((u32)(r_esi+0x8u), (u16)r_ebx);
    /* 007145d7: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 007145da: movzx edx, byte ptr [ebx + 0x2c] */ r_edx = (u32)R8((u32)(r_ebx+0x2cu));
    /* 007145de: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 007145e1: call 0x7146b9 */ r_esp -= 4; W32(r_esp, 0x7145e6u); f_007146b9();
    /* 007145e6: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 007145ea: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 007145ee: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 007145f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007145f4: mov ebp, eax */ r_ebp = r_eax;
L_007145f6:; BB(0x007145f6);
    /* 007145f6: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 007145fa: movzx eax, word ptr [edi + ebp*2 + 0x30] */ r_eax = (u32)R16((u32)(r_edi+r_ebp*2+0x30u));
    /* 007145ff: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00714602: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00714606: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00714609: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0071460e: mov edx, dword ptr [ebx + ebp*4 + 0x24] */ r_edx = R32((u32)(r_ebx+r_ebp*4+0x24u));
    /* 00714612: mov ecx, eax */ r_ecx = r_eax;
    /* 00714614: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00714617: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071461a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0071461e: mov ecx, dword ptr [ebx + ebp*4 + 4] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 00714622: mov edi, eax */ r_edi = r_eax;
    /* 00714624: sar edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00714627: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0071462a: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0071462e: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00714631: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00714634: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00714638: mov eax, dword ptr [ebx + ebp*4 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x14u));
    /* 0071463c: call 0x7141a4 */ r_esp -= 4; W32(r_esp, 0x714641u); f_007141a4();
    /* 00714641: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00714644: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00714647: jl 0x7145f6 */ if ((fS!=fO)) goto L_007145f6;
L_00714649:; BB(0x00714649);
    /* 00714649: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0071464d: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00714651: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00714655: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00714659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071465b: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0071465f: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00714661: mov ebx, eax */ r_ebx = r_eax;
L_00714663:; BB(0x00714663);
    /* 00714663: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00714666: mov edi, dword ptr [edi + ebx*4 + 0x34] */ r_edi = R32((u32)(r_edi+r_ebx*4+0x34u));
    /* 0071466a: movzx edx, byte ptr [ebp + ebx*4 + 0x39] */ r_edx = (u32)R8((u32)(r_ebp+r_ebx*4+0x39u));
    /* 0071466f: movzx ecx, byte ptr [ebp + ebx*4 + 0x3a] */ r_ecx = (u32)R8((u32)(r_ebp+r_ebx*4+0x3au));
    /* 00714674: mov eax, edi */ r_eax = r_edi;
    /* 00714676: call 0x71434a */ r_esp -= 4; W32(r_esp, 0x71467bu); f_0071434a();
    /* 0071467b: movzx eax, byte ptr [ebp + ebx*4 + 0x3b] */ r_eax = (u32)R8((u32)(r_ebp+r_ebx*4+0x3bu));
    /* 00714680: movsx edx, byte ptr [ebp + ebx*4 + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ebx*4+0x38u));
    /* 00714685: mov ecx, eax */ r_ecx = r_eax;
    /* 00714687: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071468a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071468c: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071468f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00714693: mov eax, edi */ r_eax = r_edi;
    /* 00714695: call 0x714381 */ r_esp -= 4; W32(r_esp, 0x71469au); f_00714381();
    /* 0071469a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071469d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007146a0: jl 0x714663 */ if ((fS!=fO)) goto L_00714663;
L_007146a2:; BB(0x007146a2);
    /* 007146a2: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007146a6: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007146aa: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007146ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007146ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007146af: ret  */ FN_RET(0x00714598); r_esp += 4; return;
}

void f_007146b9(void) /* sub_7146B9 */
{
    FN_ENTER(0x007146b9);
    /* 007146b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007146bc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007146bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007146c1: call 0x7146d5 */ r_esp -= 4; W32(r_esp, 0x7146c6u); f_007146d5();
    /* 007146c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007146c9: ret  */ FN_RET(0x007146b9); r_esp += 4; return;
}

void f_007146d5(void) /* sub_7146D5 */
{
    FN_ENTER(0x007146d5);
    /* 007146d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007146d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007146d7: mov edi, eax */ r_edi = r_eax;
    /* 007146d9: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 007146dc: mov eax, esi */ r_eax = r_esi;
    /* 007146de: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007146e1: mov ecx, edi */ r_ecx = r_edi;
    /* 007146e3: push dword ptr [eax*8 + 0x96fb8c] */ { u32 v = R32((u32)(r_eax*8+0x96fb8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007146ea: push dword ptr [eax*8 + 0x96fb88] */ { u32 v = R32((u32)(r_eax*8+0x96fb88u)); r_esp -= 4; W32(r_esp, v); }
    /* 007146f1: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7146f6u); f_0072e7e4();
    /* 007146f6: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 007146f9: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007146fc: mov edx, dword ptr [esi*4 + 0x96fb68] */ r_edx = R32((u32)(r_esi*4+0x96fb68u));
    /* 00714703: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00714706: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714707: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00714708: ret  */ FN_RET(0x007146d5); r_esp += 4; return;
}

void f_0071470c(void) /* sub_71470C */
{
    FN_ENTER(0x0071470c);
    /* 0071470c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071470d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071470e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071470f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714710: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714713: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00714717: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0071471b: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0071471e: call 0x7146b9 */ r_esp -= 4; W32(r_esp, 0x714723u); f_007146b9();
    /* 00714723: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00714727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714729: mov ebp, eax */ r_ebp = r_eax;
L_0071472b:; BB(0x0071472b);
    /* 0071472b: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0071472f: movzx eax, word ptr [edi + ebp*2 + 4] */ r_eax = (u32)R16((u32)(r_edi+r_ebp*2+0x4u));
    /* 00714734: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00714737: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0071473b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0071473e: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00714743: mov edx, dword ptr [ebx + ebp*4 + 0x24] */ r_edx = R32((u32)(r_ebx+r_ebp*4+0x24u));
    /* 00714747: mov ecx, eax */ r_ecx = r_eax;
    /* 00714749: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0071474c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071474f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00714753: mov ecx, dword ptr [ebx + ebp*4 + 4] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 00714757: mov edi, eax */ r_edi = r_eax;
    /* 00714759: sar edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0071475c: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0071475f: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00714763: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00714766: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00714769: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071476d: mov eax, dword ptr [ebx + ebp*4 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x14u));
    /* 00714771: call 0x7141a4 */ r_esp -= 4; W32(r_esp, 0x714776u); f_007141a4();
    /* 00714776: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00714779: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071477c: jl 0x71472b */ if ((fS!=fO)) goto L_0071472b;
L_0071477e:; BB(0x0071477e);
    /* 0071477e: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00714782: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00714786: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714788: mov ebx, eax */ r_ebx = r_eax;
L_0071478a:; BB(0x0071478a);
    /* 0071478a: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0071478d: mov ebp, dword ptr [ebp + ebx*4 + 0x34] */ r_ebp = R32((u32)(r_ebp+r_ebx*4+0x34u));
    /* 00714791: movzx edx, byte ptr [esi + ebx*4 + 0xd] */ r_edx = (u32)R8((u32)(r_esi+r_ebx*4+0xdu));
    /* 00714796: movzx ecx, byte ptr [esi + ebx*4 + 0xe] */ r_ecx = (u32)R8((u32)(r_esi+r_ebx*4+0xeu));
    /* 0071479b: mov eax, ebp */ r_eax = r_ebp;
    /* 0071479d: call 0x71434a */ r_esp -= 4; W32(r_esp, 0x7147a2u); f_0071434a();
    /* 007147a2: movzx eax, byte ptr [esi + ebx*4 + 0xf] */ r_eax = (u32)R8((u32)(r_esi+r_ebx*4+0xfu));
    /* 007147a7: movsx edx, byte ptr [esi + ebx*4 + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+r_ebx*4+0xcu));
    /* 007147ac: mov ecx, eax */ r_ecx = r_eax;
    /* 007147ae: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007147b1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007147b3: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007147b6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007147ba: mov eax, ebp */ r_eax = r_ebp;
    /* 007147bc: call 0x714381 */ r_esp -= 4; W32(r_esp, 0x7147c1u); f_00714381();
    /* 007147c1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007147c4: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007147c7: jl 0x71478a */ if ((fS!=fO)) goto L_0071478a;
L_007147c9:; BB(0x007147c9);
    /* 007147c9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007147cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007147cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007147ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007147cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007147d0: ret  */ FN_RET(0x0071470c); r_esp += 4; return;
}

void f_007147d4(void) /* sub_7147D4 */
{
    FN_ENTER(0x007147d4);
    /* 007147d4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007147d8: mov dword ptr [eax], 0x43140000 */ W32((u32)(r_eax), 0x43140000u);
    /* 007147de: mov dword ptr [eax + 4], 0x42b40000 */ W32((u32)(r_eax+0x4u), 0x42b40000u);
    /* 007147e5: ret  */ FN_RET(0x007147d4); r_esp += 4; return;
}

void f_007147e8(void) /* sub_7147E8 */
{
    FN_ENTER(0x007147e8);
    /* 007147e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007147ec: mov eax, dword ptr [edx*4 + 0x96fba8] */ r_eax = R32((u32)(r_edx*4+0x96fba8u));
    /* 007147f3: ret  */ FN_RET(0x007147e8); r_esp += 4; return;
}

void f_007147f4(void) /* sub_7147F4 */
{
    FN_ENTER(0x007147f4);
    /* 007147f4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007147f8: mov eax, dword ptr [edx*4 + 0x96fbc8] */ r_eax = R32((u32)(r_edx*4+0x96fbc8u));
    /* 007147ff: ret  */ FN_RET(0x007147f4); r_esp += 4; return;
}

void f_00714800(void) /* sub_714800 */
{
    FN_ENTER(0x00714800);
    /* 00714800: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00714805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714806: push 0x9f1960 */ { u32 v = 0x9f1960u; r_esp -= 4; W32(r_esp, v); }
    /* 0071480b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071480f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x714814u); f_0072a68c();
    /* 00714814: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714817: ret  */ FN_RET(0x00714800); r_esp += 4; return;
}

void f_00714818(void) /* sub_714818 */
{
    FN_ENTER(0x00714818);
    /* 00714818: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714819: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071481b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071481d: call 0x71483c */ r_esp -= 4; W32(r_esp, 0x714822u); f_0071483c();
    /* 00714822: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00714826: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714828: jne 0x71482e */ if (!fZ) goto L_0071482e;
L_0071482a:; BB(0x0071482a);
    /* 0071482a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071482b: ret 4 */ FN_RET(0x00714818); r_esp += 8; return;
L_0071482e:; BB(0x0071482e);
    /* 0071482e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071482f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x714834u); f_005c2f74();
    /* 00714834: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00714835: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714836: ret 4 */ FN_RET(0x00714818); r_esp += 8; return;
}

void f_0071483c(void) /* sub_71483C */
{
    FN_ENTER(0x0071483c);
    /* 0071483c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071483d: mov ebp, esp */ r_ebp = r_esp;
    /* 0071483f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00714841: push 0x8f0624 */ { u32 v = 0x8f0624u; r_esp -= 4; W32(r_esp, v); }
    /* 00714846: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071484c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071484d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714854: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714857: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071485a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071485d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00714860: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00714863: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00714866: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071486d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714870: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00714873: mov dword ptr [eax], 0xb3f490 */ W32((u32)(r_eax), 0xb3f490u);
    /* 00714879: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071487b: je 0x71488c */ if (fZ) goto L_0071488c;
L_0071487d:; BB(0x0071487d);
    /* 0071487d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x714882u); f_007127b0();
    /* 00714882: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714885: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_0071488c:; BB(0x0071488c);
    /* 0071488c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0071488f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714891: je 0x7148a2 */ if (fZ) goto L_007148a2;
L_00714893:; BB(0x00714893);
    /* 00714893: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x714898u); f_007127b0();
    /* 00714898: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071489b: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_007148a2:; BB(0x007148a2);
    /* 007148a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007148a9: mov ecx, eax */ r_ecx = r_eax;
    /* 007148ab: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7148b0u); f_008171e8();
    /* 007148b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007148b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007148ba: mov esp, ebp */ r_esp = r_ebp;
    /* 007148bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007148bd: ret  */ FN_RET(0x0071483c); r_esp += 4; return;
}

void f_007148c0(void) /* sub_7148C0 */
{
    FN_ENTER(0x007148c0);
    /* 007148c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007148c1: mov ebp, esp */ r_ebp = r_esp;
    /* 007148c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007148c5: push 0x8f065a */ { u32 v = 0x8f065au; r_esp -= 4; W32(r_esp, v); }
    /* 007148ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007148d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007148d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007148d8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007148db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007148de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007148e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007148e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007148e7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007148ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007148ed: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7148f2u); f_008193cc();
    /* 007148f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007148f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007148fc: mov dword ptr [eax], 0xb3f490 */ W32((u32)(r_eax), 0xb3f490u);
    /* 00714902: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00714904: push 0x96fc50 */ { u32 v = 0x96fc50u; r_esp -= 4; W32(r_esp, v); }
    /* 00714909: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x71490eu); f_00735708();
    /* 0071490e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714911: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00714914: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00714917: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00714919:; BB(0x00714919);
    /* 00714919: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071491a: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x71491fu); f_0077d8d0();
    /* 0071491f: mov edi, eax */ r_edi = r_eax;
    /* 00714921: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714924: mov ecx, edi */ r_ecx = r_edi;
    /* 00714926: call 0x77d910 */ r_esp -= 4; W32(r_esp, 0x71492bu); f_0077d910();
    /* 0071492b: mov ebx, eax */ r_ebx = r_eax;
    /* 0071492d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071492f: call 0x77d948 */ r_esp -= 4; W32(r_esp, 0x714934u); f_0077d948();
    /* 00714934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714936: je 0x714949 */ if (fZ) goto L_00714949;
L_00714938:; BB(0x00714938);
    /* 00714938: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071493b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071493c: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0071493e: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00714941: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714942: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x714947u); f_00735c90();
    /* 00714947: jmp 0x714958 */ goto L_00714958;
L_00714949:; BB(0x00714949);
    /* 00714949: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071494c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071494d: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0071494f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00714952: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714953: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x714958u); f_00735ee0();
L_00714958:; BB(0x00714958);
    /* 00714958: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0071495b: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071495e: jl 0x714919 */ if ((fS!=fO)) goto L_00714919;
L_00714960:; BB(0x00714960);
    /* 00714960: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00714965: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071496a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071496d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00714970: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 00714973: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0071497a: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00714980: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00714987: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0071498a: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x71498fu); f_007361d0();
    /* 0071498f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00714992: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00714995: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x71499au); f_00736458();
    /* 0071499a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007149a1: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 007149a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7149a8u); f_005caba4();
    /* 007149a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007149ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007149ae: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007149b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007149b3: je 0x7149fd */ if (fZ) goto L_007149fd;
L_007149b5:; BB(0x007149b5);
    /* 007149b5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007149bc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007149c3: push 0x96fc48 */ { u32 v = 0x96fc48u; r_esp -= 4; W32(r_esp, v); }
    /* 007149c8: push 0x96fc40 */ { u32 v = 0x96fc40u; r_esp -= 4; W32(r_esp, v); }
    /* 007149cd: mov ecx, eax */ r_ecx = r_eax;
    /* 007149cf: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x7149d4u); f_00714468();
    /* 007149d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007149db:; BB(0x007149db);
    /* 007149db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007149de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007149e1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007149e4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007149e7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007149ea: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 007149ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007149f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007149f7: mov esp, ebp */ r_esp = r_ebp;
    /* 007149f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007149fa: ret 4 */ FN_RET(0x007148c0); r_esp += 8; return;
L_007149fd:; BB(0x007149fd);
    /* 007149fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007149ff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00714a02: jmp 0x7149db */ goto L_007149db;
}

void f_00714a04(void) /* sub_714A04 */
{
    FN_ENTER(0x00714a04);
    /* 00714a04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714a05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714a07: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00714a0a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x714a0fu); f_007365f4();
    /* 00714a0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714a10: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00714a13: call 0x714568 */ r_esp -= 4; W32(r_esp, 0x714a18u); f_00714568();
    /* 00714a18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714a19: ret  */ FN_RET(0x00714a04); r_esp += 4; return;
}

void f_00714a1c(void) /* sub_714A1C */
{
    FN_ENTER(0x00714a1c);
    /* 00714a1c: mov dword ptr [0xa98414], 0x3f800000 */ W32((u32)(0xa98414u), 0x3f800000u);
    /* 00714a26: mov dword ptr [0xa98418], 0x41000000 */ W32((u32)(0xa98418u), 0x41000000u);
    /* 00714a30: mov dword ptr [0xa9841c], 0x3fc00000 */ W32((u32)(0xa9841cu), 0x3fc00000u);
    /* 00714a3a: ret  */ FN_RET(0x00714a1c); r_esp += 4; return;
}

void f_00714a3c(void) /* sub_714A3C */
{
    FN_ENTER(0x00714a3c);
    /* 00714a3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714a3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714a3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714a41: call 0x714a60 */ r_esp -= 4; W32(r_esp, 0x714a46u); f_00714a60();
    /* 00714a46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00714a4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714a4c: jne 0x714a52 */ if (!fZ) goto L_00714a52;
L_00714a4e:; BB(0x00714a4e);
    /* 00714a4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714a4f: ret 4 */ FN_RET(0x00714a3c); r_esp += 8; return;
L_00714a52:; BB(0x00714a52);
    /* 00714a52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714a53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x714a58u); f_005c2f74();
    /* 00714a58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00714a59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714a5a: ret 4 */ FN_RET(0x00714a3c); r_esp += 8; return;
}

void f_00714a60(void) /* sub_714A60 */
{
    FN_ENTER(0x00714a60);
    /* 00714a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00714a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00714a65: push 0x8f0674 */ { u32 v = 0x8f0674u; r_esp -= 4; W32(r_esp, v); }
    /* 00714a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714a71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714a78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714a7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714a7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00714a81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00714a84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00714a87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00714a8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714a8d: mov dword ptr [ecx], 0xb3f4f0 */ W32((u32)(r_ecx), 0xb3f4f0u);
    /* 00714a93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00714a9a: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x714a9fu); f_007366bc();
    /* 00714a9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00714aa2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00714aa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00714aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714aac: ret  */ FN_RET(0x00714a60); r_esp += 4; return;
}

void f_00714ab0(void) /* sub_714AB0 */
{
    FN_ENTER(0x00714ab0);
    /* 00714ab0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714ab6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714aba: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714abe: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x714ac3u); f_00714ac8();
    /* 00714ac3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714ac6: ret  */ FN_RET(0x00714ab0); r_esp += 4; return;
}

void f_00714ac8(void) /* sub_714AC8 */
{
    FN_ENTER(0x00714ac8);
    /* 00714ac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714ac9: mov ebp, esp */ r_ebp = r_esp;
    /* 00714acb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00714acd: push 0x8f069c */ { u32 v = 0x8f069cu; r_esp -= 4; W32(r_esp, v); }
    /* 00714ad2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714ad9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714ae0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714ae3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714ae6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00714ae9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00714aec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00714aef: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00714af1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714af4: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x714af9u); f_00737f80();
    /* 00714af9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00714b00: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00714b05: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x714b0au); f_005caba4();
    /* 00714b0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714b0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00714b10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714b12: je 0x714b48 */ if (fZ) goto L_00714b48;
L_00714b14:; BB(0x00714b14);
    /* 00714b14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00714b1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00714b22: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b25: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b28: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714b2b: call 0x714b4c */ r_esp -= 4; W32(r_esp, 0x714b30u); f_00714b4c();
    /* 00714b30: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714b33: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00714b3a:; BB(0x00714b3a);
    /* 00714b3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00714b3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00714b44: mov esp, ebp */ r_esp = r_ebp;
    /* 00714b46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714b47: ret  */ FN_RET(0x00714ac8); r_esp += 4; return;
L_00714b48:; BB(0x00714b48);
    /* 00714b48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714b4a: jmp 0x714b3a */ goto L_00714b3a;
}

void f_00714b4c(void) /* sub_714B4C */
{
    FN_ENTER(0x00714b4c);
    /* 00714b4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714b4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714b4e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714b50: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00714b54: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00714b57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714b58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714b5a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00714b5c: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b60: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x714b65u); f_00736988();
    /* 00714b65: mov dword ptr [ebx], 0xb3f4f0 */ W32((u32)(r_ebx), 0xb3f4f0u);
    /* 00714b6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714b6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714b6e: call 0x714e9c */ r_esp -= 4; W32(r_esp, 0x714b73u); f_00714e9c();
    /* 00714b73: mov eax, ebx */ r_eax = r_ebx;
    /* 00714b75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714b76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00714b77: ret 8 */ FN_RET(0x00714b4c); r_esp += 12; return;
}

void f_00714b7c(void) /* sub_714B7C */
{
    FN_ENTER(0x00714b7c);
    /* 00714b7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00714b7d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00714b7f: call 0x7368f0 */ r_esp -= 4; W32(r_esp, 0x714b84u); f_007368f0();
    /* 00714b84: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b88: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b8c: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714b90: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x714b95u); f_00714ac8();
    /* 00714b95: mov esi, eax */ r_esi = r_eax;
    /* 00714b97: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00714b99: call 0x7368f0 */ r_esp -= 4; W32(r_esp, 0x714b9eu); f_007368f0();
    /* 00714b9e: mov eax, esi */ r_eax = r_esi;
    /* 00714ba0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714ba3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714ba4: ret  */ FN_RET(0x00714b7c); r_esp += 4; return;
}

void f_00714ba8(void) /* sub_714BA8 */
{
    FN_ENTER(0x00714ba8);
    /* 00714ba8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00714ba9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714baa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00714bac: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00714bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714bb1: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x714bb6u); f_00719140();
    /* 00714bb6: mov esi, eax */ r_esi = r_eax;
    /* 00714bb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714bbb: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 00714bc2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714bc5: jne 0x714cb9 */ if (!fZ) goto L_00714cb9;
L_00714bcb:; BB(0x00714bcb);
    /* 00714bcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714bcd: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x714bd2u); f_00712480();
    /* 00714bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714bd4: je 0x714cb9 */ if (fZ) goto L_00714cb9;
L_00714bda:; BB(0x00714bda);
    /* 00714bda: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 00714be1: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714be4: jne 0x714cb9 */ if (!fZ) goto L_00714cb9;
L_00714bea:; BB(0x00714bea);
    /* 00714bea: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714bed: je 0x714c39 */ if (fZ) goto L_00714c39;
L_00714bef:; BB(0x00714bef);
    /* 00714bef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00714bf1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00714bf3: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00714bf6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714bf8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714bfe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714c00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714c02: lea esi, [eax + eax + 0xaae75c] */ r_esi = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00714c09: mov ecx, esi */ r_ecx = r_esi;
    /* 00714c0b: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x714c10u); f_007c09fc();
    /* 00714c10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714c12: je 0x714c1b */ if (fZ) goto L_00714c1b;
L_00714c14:; BB(0x00714c14);
    /* 00714c14: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714c16: call 0x7381e0 */ r_esp -= 4; W32(r_esp, 0x714c1bu); f_007381e0();
L_00714c1b:; BB(0x00714c1b);
    /* 00714c1b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c1d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c1f: mov ecx, esi */ r_ecx = r_esi;
    /* 00714c21: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714c27: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x714c2cu); f_007c09fc();
    /* 00714c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714c2e: je 0x714c81 */ if (fZ) goto L_00714c81;
L_00714c30:; BB(0x00714c30);
    /* 00714c30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714c32: call 0x736768 */ r_esp -= 4; W32(r_esp, 0x714c37u); f_00736768();
    /* 00714c37: jmp 0x714c81 */ goto L_00714c81;
L_00714c39:; BB(0x00714c39);
    /* 00714c39: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c3d: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00714c40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714c42: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714c48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714c4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00714c4c: lea esi, [eax + eax + 0xaae75c] */ r_esi = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00714c53: mov ecx, esi */ r_ecx = r_esi;
    /* 00714c55: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x714c5au); f_007c0c6c();
    /* 00714c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714c5c: je 0x714c65 */ if (fZ) goto L_00714c65;
L_00714c5e:; BB(0x00714c5e);
    /* 00714c5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714c60: call 0x7381e0 */ r_esp -= 4; W32(r_esp, 0x714c65u); f_007381e0();
L_00714c65:; BB(0x00714c65);
    /* 00714c65: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c67: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00714c69: mov ecx, esi */ r_ecx = r_esi;
    /* 00714c6b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714c71: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x714c76u); f_007c0c6c();
    /* 00714c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714c78: je 0x714c81 */ if (fZ) goto L_00714c81;
L_00714c7a:; BB(0x00714c7a);
    /* 00714c7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714c7c: call 0x736768 */ r_esp -= 4; W32(r_esp, 0x714c81u); f_00736768();
L_00714c81:; BB(0x00714c81);
    /* 00714c81: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00714c86: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00714c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714c8d: mov ecx, esi */ r_ecx = r_esi;
    /* 00714c8f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x714c94u); f_007c1160();
    /* 00714c94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714c96: je 0x714c9f */ if (fZ) goto L_00714c9f;
L_00714c98:; BB(0x00714c98);
    /* 00714c98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714c9a: call 0x714d04 */ r_esp -= 4; W32(r_esp, 0x714c9fu); f_00714d04();
L_00714c9f:; BB(0x00714c9f);
    /* 00714c9f: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00714ca4: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00714ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714ca7: mov ecx, esi */ r_ecx = r_esi;
    /* 00714ca9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x714caeu); f_007c1160();
    /* 00714cae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714cb0: je 0x714cb9 */ if (fZ) goto L_00714cb9;
L_00714cb2:; BB(0x00714cb2);
    /* 00714cb2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714cb4: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x714cb9u); f_007388b0();
L_00714cb9:; BB(0x00714cb9);
    /* 00714cb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714cbb: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x714cc0u); f_0073741c();
    /* 00714cc0: fild dword ptr [ebp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x5cu)));
    /* 00714cc3: fcomp dword ptr [0x96fc78] */ fx_compare(ST(0), R_F32((u32)(0x96fc78u))); FPOP();
    /* 00714cc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00714ccb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00714ccc: jb 0x714ce6 */ if (fC) goto L_00714ce6;
L_00714cce:; BB(0x00714cce);
    /* 00714cce: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00714cd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714cd3: je 0x714cda */ if (fZ) goto L_00714cda;
L_00714cd5:; BB(0x00714cd5);
    /* 00714cd5: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x714cdau); f_00761388();
L_00714cda:; BB(0x00714cda);
    /* 00714cda: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 00714cdd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714cdf: je 0x714ce6 */ if (fZ) goto L_00714ce6;
L_00714ce1:; BB(0x00714ce1);
    /* 00714ce1: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x714ce6u); f_0073f68c();
L_00714ce6:; BB(0x00714ce6);
    /* 00714ce6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714ce8: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x714cedu); f_00710db4();
    /* 00714ced: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714cef: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x714cf4u); f_00710ee4();
    /* 00714cf4: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 00714cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714cf8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00714cfa: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x714cffu); f_0072a5ec();
    /* 00714cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714d00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00714d01: ret  */ FN_RET(0x00714ba8); r_esp += 4; return;
}

void f_00714d04(void) /* sub_714D04 */
{
    FN_ENTER(0x00714d04);
    /* 00714d04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714d05: mov edi, ecx */ r_edi = r_ecx;
    /* 00714d07: movzx eax, word ptr [edi + 0x88] */ r_eax = (u32)R16((u32)(r_edi+0x88u));
    /* 00714d0e: mov word ptr [edi + 0x94], ax */ W16((u32)(r_edi+0x94u), (u16)r_eax);
    /* 00714d15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00714d17: mov ecx, edi */ r_ecx = r_edi;
    /* 00714d19: call 0x7379e4 */ r_esp -= 4; W32(r_esp, 0x714d1eu); f_007379e4();
    /* 00714d1e: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00714d25: or eax, 0xffff0006 */ {  u32 a = r_eax; u32 b = 0xffff0006u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714d2a: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00714d31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00714d32: ret  */ FN_RET(0x00714d04); r_esp += 4; return;
}

void f_00714d34(void) /* sub_714D34 */
{
    FN_ENTER(0x00714d34);
    /* 00714d34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714d36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d38: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d3c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d41: call 0x737874 */ r_esp -= 4; W32(r_esp, 0x714d46u); f_00737874();
    /* 00714d46: ret 8 */ FN_RET(0x00714d34); r_esp += 12; return;
}

void f_00714d4c(void) /* sub_714D4C */
{
    FN_ENTER(0x00714d4c);
    /* 00714d4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00714d4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d55: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d5a: call 0x737874 */ r_esp -= 4; W32(r_esp, 0x714d5fu); f_00737874();
    /* 00714d5f: ret 8 */ FN_RET(0x00714d4c); r_esp += 12; return;
}

void f_00714d64(void) /* sub_714D64 */
{
    FN_ENTER(0x00714d64);
    /* 00714d64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714d66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00714d69: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d6d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714d72: call 0x737874 */ r_esp -= 4; W32(r_esp, 0x714d77u); f_00737874();
    /* 00714d77: ret 8 */ FN_RET(0x00714d64); r_esp += 12; return;
}

void f_00714d7c(void) /* sub_714D7C */
{
    FN_ENTER(0x00714d7c);
    /* 00714d7c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714d7f: mov edx, ecx */ r_edx = r_ecx;
    /* 00714d81: movsx ecx, word ptr [edx + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8au));
    /* 00714d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00714d8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00714d8c: jle 0x714def */ if ((fZ||fS!=fO)) goto L_00714def;
L_00714d8e:; BB(0x00714d8e);
    /* 00714d8e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00714d92: mov ebx, eax */ r_ebx = r_eax;
    /* 00714d94: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00714d98: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00714d9b: mov eax, ecx */ r_eax = r_ecx;
    /* 00714d9d: mov esi, edx */ r_esi = r_edx;
    /* 00714d9f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00714da3:; BB(0x00714da3);
    /* 00714da3: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00714da6: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00714da9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714dab: je 0x714ddd */ if (fZ) goto L_00714ddd;
L_00714dad:; BB(0x00714dad);
    /* 00714dad: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00714db1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714db4: je 0x714ddd */ if (fZ) goto L_00714ddd;
L_00714db6:; BB(0x00714db6);
    /* 00714db6: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00714db9: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714dbd: jne 0x714ddd */ if (!fZ) goto L_00714ddd;
L_00714dbf:; BB(0x00714dbf);
    /* 00714dbf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714dc1: je 0x714dd1 */ if (fZ) goto L_00714dd1;
L_00714dc3:; BB(0x00714dc3);
    /* 00714dc3: call 0x72c930 */ r_esp -= 4; W32(r_esp, 0x714dc8u); f_0072c930();
    /* 00714dc8: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00714dcf: jmp 0x714ddd */ goto L_00714ddd;
L_00714dd1:; BB(0x00714dd1);
    /* 00714dd1: call 0x72c940 */ r_esp -= 4; W32(r_esp, 0x714dd6u); f_0072c940();
    /* 00714dd6: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00714ddd:; BB(0x00714ddd);
    /* 00714ddd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00714de0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00714de2: jl 0x714da3 */ if ((fS!=fO)) goto L_00714da3;
L_00714de4:; BB(0x00714de4);
    /* 00714de4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00714de8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00714dec: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00714def:; BB(0x00714def);
    /* 00714def: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714df2: ret 8 */ FN_RET(0x00714d7c); r_esp += 12; return;
}

void f_00714df8(void) /* sub_714DF8 */
{
    FN_ENTER(0x00714df8);
    /* 00714df8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714dfb: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00714e02: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00714e04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00714e06: jle 0x714e55 */ if ((fZ||fS!=fO)) goto L_00714e55;
L_00714e08:; BB(0x00714e08);
    /* 00714e08: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00714e0c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00714e10: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00714e14: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_00714e17:; BB(0x00714e17);
    /* 00714e17: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00714e1a: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 00714e1d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714e1f: je 0x714e43 */ if (fZ) goto L_00714e43;
L_00714e21:; BB(0x00714e21);
    /* 00714e21: movzx edi, word ptr [ebx + 4] */ r_edi = (u32)R16((u32)(r_ebx+0x4u));
    /* 00714e25: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714e2b: je 0x714e43 */ if (fZ) goto L_00714e43;
L_00714e2d:; BB(0x00714e2d);
    /* 00714e2d: mov edi, dword ptr [ebx + 0x18] */ r_edi = R32((u32)(r_ebx+0x18u));
    /* 00714e30: cmp edi, dword ptr [esp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714e34: jne 0x714e43 */ if (!fZ) goto L_00714e43;
L_00714e36:; BB(0x00714e36);
    /* 00714e36: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 00714e39: mov dword ptr [ebx + 0x30], esi */ W32((u32)(r_ebx+0x30u), r_esi);
    /* 00714e3c: movsx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00714e43:; BB(0x00714e43);
    /* 00714e43: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00714e46: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00714e48: jl 0x714e17 */ if ((fS!=fO)) goto L_00714e17;
L_00714e4a:; BB(0x00714e4a);
    /* 00714e4a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00714e4e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00714e52: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00714e55:; BB(0x00714e55);
    /* 00714e55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00714e58: ret 8 */ FN_RET(0x00714df8); r_esp += 12; return;
}

void f_00714e5c(void) /* sub_714E5C */
{
    FN_ENTER(0x00714e5c);
    /* 00714e5c: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00714e61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00714e63: mov word ptr [ecx + 0x94], ax */ W16((u32)(r_ecx+0x94u), (u16)r_eax);
    /* 00714e6a: mov word ptr [ecx + 0x88], ax */ W16((u32)(r_ecx+0x88u), (u16)r_eax);
    /* 00714e71: call 0x7379a4 */ r_esp -= 4; W32(r_esp, 0x714e76u); f_007379a4();
    /* 00714e76: ret 4 */ FN_RET(0x00714e5c); r_esp += 8; return;
}

void f_00714e7c(void) /* sub_714E7C */
{
    FN_ENTER(0x00714e7c);
    /* 00714e7c: mov dword ptr [0xa98424], 0x3f800000 */ W32((u32)(0xa98424u), 0x3f800000u);
    /* 00714e86: mov dword ptr [0xa98428], 0x41000000 */ W32((u32)(0xa98428u), 0x41000000u);
    /* 00714e90: mov dword ptr [0xa9842c], 0x3fc00000 */ W32((u32)(0xa9842cu), 0x3fc00000u);
    /* 00714e9a: ret  */ FN_RET(0x00714e7c); r_esp += 4; return;
}

void f_00714e9c(void) /* sub_714E9C */
{
    FN_ENTER(0x00714e9c);
    /* 00714e9c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00714ea0: mov eax, dword ptr [0x9f1e44] */ r_eax = R32((u32)(0x9f1e44u));
    /* 00714ea5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00714ea8: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 00714eac: ret 4 */ FN_RET(0x00714e9c); r_esp += 8; return;
}

void f_00714eb0(void) /* sub_714EB0 */
{
    FN_ENTER(0x00714eb0);
    /* 00714eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714eb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714eb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714eb5: call 0x714ed4 */ r_esp -= 4; W32(r_esp, 0x714ebau); f_00714ed4();
    /* 00714eba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00714ebe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714ec0: jne 0x714ec6 */ if (!fZ) goto L_00714ec6;
L_00714ec2:; BB(0x00714ec2);
    /* 00714ec2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714ec3: ret 4 */ FN_RET(0x00714eb0); r_esp += 8; return;
L_00714ec6:; BB(0x00714ec6);
    /* 00714ec6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714ec7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x714eccu); f_005c2f74();
    /* 00714ecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00714ecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00714ece: ret 4 */ FN_RET(0x00714eb0); r_esp += 8; return;
}

void f_00714ed4(void) /* sub_714ED4 */
{
    FN_ENTER(0x00714ed4);
    /* 00714ed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714ed5: mov ebp, esp */ r_ebp = r_esp;
    /* 00714ed7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00714ed9: push 0x8f06b8 */ { u32 v = 0x8f06b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00714ede: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714ee5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714eec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714eef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714ef2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00714ef5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00714ef8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00714efb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00714efe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00714f01: mov dword ptr [ecx], 0xb3f558 */ W32((u32)(r_ecx), 0xb3f558u);
    /* 00714f07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00714f0e: call 0x738168 */ r_esp -= 4; W32(r_esp, 0x714f13u); f_00738168();
    /* 00714f13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00714f16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00714f1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00714f1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714f20: ret  */ FN_RET(0x00714ed4); r_esp += 4; return;
}

void f_00714f24(void) /* sub_714F24 */
{
    FN_ENTER(0x00714f24);
    /* 00714f24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00714f25: mov ebp, esp */ r_ebp = r_esp;
    /* 00714f27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00714f29: push 0x8f06e0 */ { u32 v = 0x8f06e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00714f2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00714f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714f35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00714f3c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00714f3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00714f42: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00714f45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00714f48: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00714f4b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00714f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714f4f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714f52: call 0x738bfc */ r_esp -= 4; W32(r_esp, 0x714f57u); f_00738bfc();
    /* 00714f57: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00714f5e: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00714f63: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x714f68u); f_005caba4();
    /* 00714f68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00714f6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714f6e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00714f71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714f73: je 0x714faa */ if (fZ) goto L_00714faa;
L_00714f75:; BB(0x00714f75);
    /* 00714f75: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00714f7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00714f83: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00714f86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00714f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00714f8a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714f8d: call 0x714fb4 */ r_esp -= 4; W32(r_esp, 0x714f92u); f_00714fb4();
    /* 00714f92: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00714f99:; BB(0x00714f99);
    /* 00714f99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00714f9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00714f9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00714fa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00714fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00714fa9: ret  */ FN_RET(0x00714f24); r_esp += 4; return;
L_00714faa:; BB(0x00714faa);
    /* 00714faa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714fac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00714faf: jmp 0x714f99 */ goto L_00714f99;
}

void f_00714fb4(void) /* sub_714FB4 */
{
    FN_ENTER(0x00714fb4);
    /* 00714fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00714fb5: mov edi, ecx */ r_edi = r_ecx;
    /* 00714fb7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714fbb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00714fbf: mov ecx, edi */ r_ecx = r_edi;
    /* 00714fc1: call 0x7382f8 */ r_esp -= 4; W32(r_esp, 0x714fc6u); f_007382f8();
    /* 00714fc6: mov dword ptr [edi], 0xb3f558 */ W32((u32)(r_edi), 0xb3f558u);
    /* 00714fcc: mov edx, dword ptr [0x9f1e48] */ r_edx = R32((u32)(0x9f1e48u));
    /* 00714fd2: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00714fd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00714fd7: mov word ptr [edi + 0x8c], ax */ W16((u32)(r_edi+0x8cu), (u16)r_eax);
    /* 00714fde: mov eax, edi */ r_eax = r_edi;
    /* 00714fe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00714fe1: ret 8 */ FN_RET(0x00714fb4); r_esp += 12; return;
}

void f_00714fe4(void) /* sub_714FE4 */
{
    FN_ENTER(0x00714fe4);
    /* 00714fe4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00714fe5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00714fe7: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00714fee: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714ff0: jne 0x715120 */ if (!fZ) goto L_00715120;
L_00714ff6:; BB(0x00714ff6);
    /* 00714ff6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714ff8: jne 0x715120 */ if (!fZ) goto L_00715120;
L_00714ffe:; BB(0x00714ffe);
    /* 00714ffe: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00715000: je 0x715062 */ if (fZ) goto L_00715062;
L_00715002:; BB(0x00715002);
    /* 00715002: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x715007u); f_00694c6c();
    /* 00715007: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00715009: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071500b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0071500e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715010: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715016: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715018: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071501a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00715021: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x715026u); f_007c09fc();
    /* 00715026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715028: je 0x715031 */ if (fZ) goto L_00715031;
L_0071502a:; BB(0x0071502a);
    /* 0071502a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071502c: call 0x7381e0 */ r_esp -= 4; W32(r_esp, 0x715031u); f_007381e0();
L_00715031:; BB(0x00715031);
    /* 00715031: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x715036u); f_00694c6c();
    /* 00715036: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00715038: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071503a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0071503d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071503f: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715045: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715047: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715049: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00715050: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x715055u); f_007c09fc();
    /* 00715055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715057: je 0x7150c0 */ if (fZ) goto L_007150c0;
L_00715059:; BB(0x00715059);
    /* 00715059: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071505b: call 0x736768 */ r_esp -= 4; W32(r_esp, 0x715060u); f_00736768();
    /* 00715060: jmp 0x7150c0 */ goto L_007150c0;
L_00715062:; BB(0x00715062);
    /* 00715062: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x715067u); f_00694c6c();
    /* 00715067: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00715069: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071506b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0071506e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715070: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715076: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715078: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071507a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00715081: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x715086u); f_007c0c6c();
    /* 00715086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715088: je 0x715091 */ if (fZ) goto L_00715091;
L_0071508a:; BB(0x0071508a);
    /* 0071508a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071508c: call 0x7381e0 */ r_esp -= 4; W32(r_esp, 0x715091u); f_007381e0();
L_00715091:; BB(0x00715091);
    /* 00715091: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x715096u); f_00694c6c();
    /* 00715096: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00715098: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0071509a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0071509d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071509f: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007150a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007150a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007150a9: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007150b0: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x7150b5u); f_007c0c6c();
    /* 007150b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007150b7: je 0x7150c0 */ if (fZ) goto L_007150c0;
L_007150b9:; BB(0x007150b9);
    /* 007150b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007150bb: call 0x736768 */ r_esp -= 4; W32(r_esp, 0x7150c0u); f_00736768();
L_007150c0:; BB(0x007150c0);
    /* 007150c0: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7150c5u); f_00694c6c();
    /* 007150c5: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 007150cb: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007150d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007150d2: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007150d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007150d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007150d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007150db: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007150e2: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7150e7u); f_007c1160();
    /* 007150e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007150e9: je 0x7150f2 */ if (fZ) goto L_007150f2;
L_007150eb:; BB(0x007150eb);
    /* 007150eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007150ed: call 0x73885c */ r_esp -= 4; W32(r_esp, 0x7150f2u); f_0073885c();
L_007150f2:; BB(0x007150f2);
    /* 007150f2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7150f7u); f_00694c6c();
    /* 007150f7: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 007150fd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00715100: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715104: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715106: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00715108: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0071510f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00715110: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x715115u); f_007c1160();
    /* 00715115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715117: je 0x715120 */ if (fZ) goto L_00715120;
L_00715119:; BB(0x00715119);
    /* 00715119: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071511b: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x715120u); f_007388b0();
L_00715120:; BB(0x00715120);
    /* 00715120: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 00715123: fcomp dword ptr [0x96fca4] */ fx_compare(ST(0), R_F32((u32)(0x96fca4u))); FPOP();
    /* 00715129: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071512b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071512c: jb 0x715146 */ if (fC) goto L_00715146;
L_0071512e:; BB(0x0071512e);
    /* 0071512e: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00715131: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715133: je 0x71513a */ if (fZ) goto L_0071513a;
L_00715135:; BB(0x00715135);
    /* 00715135: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x71513au); f_00761388();
L_0071513a:; BB(0x0071513a);
    /* 0071513a: mov ecx, dword ptr [ebx + 0x64] */ r_ecx = R32((u32)(r_ebx+0x64u));
    /* 0071513d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071513f: je 0x715146 */ if (fZ) goto L_00715146;
L_00715141:; BB(0x00715141);
    /* 00715141: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x715146u); f_0073f68c();
L_00715146:; BB(0x00715146);
    /* 00715146: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715148: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x71514du); f_00710db4();
    /* 0071514d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071514f: call 0x715178 */ r_esp -= 4; W32(r_esp, 0x715154u); f_00715178();
    /* 00715154: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715156: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x71515bu); f_007107d8();
    /* 0071515b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071515d: call 0x7388f0 */ r_esp -= 4; W32(r_esp, 0x715162u); f_007388f0();
    /* 00715162: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715164: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x715169u); f_0071087c();
    /* 00715169: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0071516c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071516d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071516f: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x715174u); f_0072a5ec();
    /* 00715174: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00715175: ret  */ FN_RET(0x00714fe4); r_esp += 4; return;
}

