#include "protos.h"

void f_00605080(void) /* sub_605080 */
{
    FN_ENTER(0x00605080);
    /* 00605080: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00605084: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605087: jne 0x60508d */ if (!fZ) goto L_0060508d;
L_00605089:; BB(0x00605089);
    /* 00605089: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060508b: jmp 0x605092 */ goto L_00605092;
L_0060508d:; BB(0x0060508d);
    /* 0060508d: mov eax, 1 */ r_eax = 0x1u;
L_00605092:; BB(0x00605092);
    /* 00605092: mov edx, dword ptr [ecx + 0x3c4] */ r_edx = R32((u32)(r_ecx+0x3c4u));
    /* 00605098: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060509a: jne 0x60509f */ if (!fZ) goto L_0060509f;
L_0060509c:; BB(0x0060509c);
    /* 0060509c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0060509f:; BB(0x0060509f);
    /* 0060509f: movzx edx, byte ptr [ecx + 0x49f] */ r_edx = (u32)R8((u32)(r_ecx+0x49fu));
    /* 006050a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006050a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006050aa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006050ac: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006050b3: ret 4 */ FN_RET(0x00605080); r_esp += 8; return;
}

void f_006050b8(void) /* sub_6050B8 */
{
    FN_ENTER(0x006050b8);
    /* 006050b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006050b9: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006050bc: mov esi, dword ptr [0xa8e464] */ r_esi = R32((u32)(0xa8e464u));
    /* 006050c2: mov ecx, dword ptr [0xa8e448] */ r_ecx = R32((u32)(0xa8e448u));
    /* 006050c8: call 0x605140 */ r_esp -= 4; W32(r_esp, 0x6050cdu); f_00605140();
    /* 006050cd: movsx eax, word ptr [0xa8e44c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8e44cu));
    /* 006050d4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006050d6: jne 0x6050f1 */ if (!fZ) goto L_006050f1;
L_006050d8:; BB(0x006050d8);
    /* 006050d8: mov ecx, dword ptr [0xa8e448] */ r_ecx = R32((u32)(0xa8e448u));
    /* 006050de: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006050e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006050e3: call 0x6051b4 */ r_esp -= 4; W32(r_esp, 0x6050e8u); f_006051b4();
    /* 006050e8: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006050ec: call 0x605270 */ r_esp -= 4; W32(r_esp, 0x6050f1u); f_00605270();
L_006050f1:; BB(0x006050f1);
    /* 006050f1: movsx eax, word ptr [0xa8e450] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8e450u));
    /* 006050f8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006050fa: je 0x605112 */ if (fZ) goto L_00605112;
L_006050fc:; BB(0x006050fc);
    /* 006050fc: movsx eax, word ptr [0xa8e452] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8e452u));
    /* 00605103: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605105: je 0x605112 */ if (fZ) goto L_00605112;
L_00605107:; BB(0x00605107);
    /* 00605107: movsx eax, word ptr [0xa8e454] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8e454u));
    /* 0060510e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605110: jne 0x605134 */ if (!fZ) goto L_00605134;
L_00605112:; BB(0x00605112);
    /* 00605112: mov eax, dword ptr [0xa8e46c] */ r_eax = R32((u32)(0xa8e46cu));
    /* 00605117: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00605119: je 0x605134 */ if (fZ) goto L_00605134;
L_0060511b:; BB(0x0060511b);
    /* 0060511b: mov ecx, dword ptr [0xa8e448] */ r_ecx = R32((u32)(0xa8e448u));
    /* 00605121: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00605125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605126: call 0x6051b4 */ r_esp -= 4; W32(r_esp, 0x60512bu); f_006051b4();
    /* 0060512b: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0060512f: call 0x605270 */ r_esp -= 4; W32(r_esp, 0x605134u); f_00605270();
L_00605134:; BB(0x00605134);
    /* 00605134: add dword ptr [0xa8e464], 1 */ { u32 ad = (u32)(0xa8e464u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0060513b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060513e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060513f: ret  */ FN_RET(0x006050b8); r_esp += 4; return;
}

void f_00605140(void) /* sub_605140 */
{
    FN_ENTER(0x00605140);
    /* 00605140: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00605146: mov edx, dword ptr [edx*4 + 0x9c3e58] */ r_edx = R32((u32)(r_edx*4+0x9c3e58u));
    /* 0060514d: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 00605153: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00605156: mov eax, edx */ r_eax = r_edx;
    /* 00605158: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060515b: je 0x605177 */ if (fZ) goto L_00605177;
L_0060515d:; BB(0x0060515d);
    /* 0060515d: movzx edx, byte ptr [edx + 9] */ r_edx = (u32)R8((u32)(r_edx+0x9u));
    /* 00605161: cmp edx, 0xed */ {  u32 a = r_edx; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00605167: jae 0x605177 */ if (!fC) goto L_00605177;
L_00605169:; BB(0x00605169);
    /* 00605169: mov eax, 0x5eafc8 */ r_eax = 0x5eafc8u;
    /* 0060516e: cmp eax, dword ptr [edx*4 + 0x9c39c0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x9c39c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00605175: je 0x605178 */ if (fZ) goto L_00605178;
L_00605177:; BB(0x00605177);
    /* 00605177: ret  */ FN_RET(0x00605140); r_esp += 4; return;
L_00605178:; BB(0x00605178);
    /* 00605178: mov eax, dword ptr [0xa8e464] */ r_eax = R32((u32)(0xa8e464u));
    /* 0060517d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00605180: jne 0x605177 */ if (!fZ) goto L_00605177;
L_00605182:; BB(0x00605182);
    /* 00605182: mov ecx, dword ptr [ecx + 0x3c4] */ r_ecx = R32((u32)(r_ecx+0x3c4u));
    /* 00605188: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060518a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060518c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060518e: jne 0x605198 */ if (!fZ) goto L_00605198;
L_00605190:; BB(0x00605190);
    /* 00605190: fld dword ptr [0x92e2f4] */ FPUSH(R_F32((u32)(0x92e2f4u)));
    /* 00605196: jmp 0x60519e */ goto L_0060519e;
L_00605198:; BB(0x00605198);
    /* 00605198: fld dword ptr [0x92e2f8] */ FPUSH(R_F32((u32)(0x92e2f8u)));
L_0060519e:; BB(0x0060519e);
    /* 0060519e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006051a1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006051a5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006051a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006051aa: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006051ae: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6051b3u); f_00830b74();
    /* 006051b3: ret  */ FN_RET(0x00605140); r_esp += 4; return;
}

void f_006051b4(void) /* sub_6051B4 */
{
    FN_ENTER(0x006051b4);
    /* 006051b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006051b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006051b6: mov esi, ecx */ r_esi = r_ecx;
    /* 006051b8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006051bc: movsx eax, word ptr [esi + 0x45c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x45cu));
    /* 006051c3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006051c6: je 0x60524a */ if (fZ) goto L_0060524a;
L_006051cc:; BB(0x006051cc);
    /* 006051cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006051cd: call 0x5e4ac8 */ r_esp -= 4; W32(r_esp, 0x6051d2u); f_005e4ac8();
    /* 006051d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006051d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006051d5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006051d8: jne 0x60522c */ if (!fZ) goto L_0060522c;
L_006051da:; BB(0x006051da);
    /* 006051da: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 006051dd: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 006051e0: fmul dword ptr [esi + 0x494] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x494u));
    /* 006051e6: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 006051e9: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 006051ec: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 006051ef: fmul dword ptr [esi + 0x494] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x494u));
    /* 006051f5: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 006051f8: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 006051fb: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 006051fe: fmul dword ptr [esi + 0x494] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x494u));
    /* 00605204: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00605207: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0060520a: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 0060520d: fmul dword ptr [esi + 0x494] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x494u));
    /* 00605213: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00605216: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00605218: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0060521a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0060521c: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0060521f: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00605222: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00605225: mov eax, ebx */ r_eax = r_ebx;
    /* 00605227: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605228: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605229: ret 4 */ FN_RET(0x006051b4); r_esp += 8; return;
L_0060522c:; BB(0x0060522c);
    /* 0060522c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0060522f: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00605231: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00605234: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00605237: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0060523a: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0060523d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00605240: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 00605243: mov eax, ebx */ r_eax = r_ebx;
    /* 00605245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605246: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605247: ret 4 */ FN_RET(0x006051b4); r_esp += 8; return;
L_0060524a:; BB(0x0060524a);
    /* 0060524a: mov dword ptr [ebx], 0x3f800000 */ W32((u32)(r_ebx), 0x3f800000u);
    /* 00605250: mov eax, ebx */ r_eax = r_ebx;
    /* 00605252: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 00605259: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00605260: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 00605267: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605268: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605269: ret 4 */ FN_RET(0x006051b4); r_esp += 8; return;
}

void f_00605270(void) /* sub_605270 */
{
    FN_ENTER(0x00605270);
    /* 00605270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605272: je 0x6052a5 */ if (fZ) goto L_006052a5;
L_00605274:; BB(0x00605274);
    /* 00605274: mov edx, dword ptr [0xa8e46c] */ r_edx = R32((u32)(0xa8e46cu));
    /* 0060527a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060527d: jne 0x6052a5 */ if (!fZ) goto L_006052a5;
L_0060527f:; BB(0x0060527f);
    /* 0060527f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00605285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605286: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00605289: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0060528c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00605292: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x605297u); f_0082d710();
    /* 00605297: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605298: mov eax, dword ptr [0xa8e46c] */ r_eax = R32((u32)(0xa8e46cu));
    /* 0060529d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006052a0: mov dword ptr [0xa8e46c], eax */ W32((u32)(0xa8e46cu), r_eax);
L_006052a5:; BB(0x006052a5);
    /* 006052a5: ret  */ FN_RET(0x00605270); r_esp += 4; return;
}

void f_00605304(void) /* sub_605304 */
{
    FN_ENTER(0x00605304);
    /* 00605304: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605305: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605306: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00605308: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0060530c: mov eax, dword ptr [0x9c3e50] */ r_eax = R32((u32)(0x9c3e50u));
    /* 00605311: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00605314: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00605316: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x60531bu); f_005d2890();
    /* 0060531b: mov dword ptr [ebp + 0x450], eax */ W32((u32)(r_ebp+0x450u), r_eax);
    /* 00605321: movzx eax, byte ptr [eax + 0x2a] */ r_eax = (u32)R8((u32)(r_eax+0x2au));
    /* 00605325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605326: call 0x5e5370 */ r_esp -= 4; W32(r_esp, 0x60532bu); f_005e5370();
    /* 0060532b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060532c: mov dword ptr [ebp + 0x454], eax */ W32((u32)(r_ebp+0x454u), r_eax);
    /* 00605332: mov eax, dword ptr [ebp + 0x450] */ r_eax = R32((u32)(r_ebp+0x450u));
    /* 00605338: movsx edx, byte ptr [eax + 0x1b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x1bu));
    /* 0060533c: mov word ptr [ebp + 0x45c], dx */ W16((u32)(r_ebp+0x45cu), (u16)r_edx);
    /* 00605343: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605345: mov dword ptr [ebp + 0x4fc], eax */ W32((u32)(r_ebp+0x4fcu), r_eax);
    /* 0060534b: mov word ptr [ebp + 0x500], ax */ W16((u32)(r_ebp+0x500u), (u16)r_eax);
    /* 00605352: mov word ptr [ebp + 0x502], ax */ W16((u32)(r_ebp+0x502u), (u16)r_eax);
    /* 00605359: mov byte ptr [ebp + 0x504], al */ W8((u32)(r_ebp+0x504u), (u8)r_eax);
    /* 0060535f: mov byte ptr [ebp + 0x505], al */ W8((u32)(r_ebp+0x505u), (u8)r_eax);
    /* 00605365: movzx eax, byte ptr [ebx + 3] */ r_eax = (u32)R8((u32)(r_ebx+0x3u));
    /* 00605369: mov byte ptr [ebp + 0x49d], al */ W8((u32)(r_ebp+0x49du), (u8)r_eax);
    /* 0060536f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00605371: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x605376u); f_005d2fb0();
    /* 00605376: mov edx, dword ptr [ebp + 0x450] */ r_edx = R32((u32)(r_ebp+0x450u));
    /* 0060537c: movzx edx, byte ptr [edx + 0x1c] */ r_edx = (u32)R8((u32)(r_edx+0x1cu));
    /* 00605380: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605382: jne 0x60538e */ if (!fZ) goto L_0060538e;
L_00605384:; BB(0x00605384);
    /* 00605384: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 00605388: and edx, 0xbf */ {  u32 a = r_edx; u32 b = 0xbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_0060538e:; BB(0x0060538e);
    /* 0060538e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605390: jne 0x60539d */ if (!fZ) goto L_0060539d;
L_00605392:; BB(0x00605392);
    /* 00605392: or edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00605395: mov byte ptr [ebp + 0x49e], dl */ W8((u32)(r_ebp+0x49eu), (u8)r_edx);
    /* 0060539b: jmp 0x6053a3 */ goto L_006053a3;
L_0060539d:; BB(0x0060539d);
    /* 0060539d: mov byte ptr [ebp + 0x49e], dl */ W8((u32)(r_ebp+0x49eu), (u8)r_edx);
L_006053a3:; BB(0x006053a3);
    /* 006053a3: lea eax, [ebp + 0x470] */ r_eax = (u32)(r_ebp+0x470u);
    /* 006053a9: lea ecx, [ebx + 6] */ r_ecx = (u32)(r_ebx+0x6u);
    /* 006053ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006053ae: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006053b0: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 006053b4: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 006053b8: mov ecx, dword ptr [ebp + 0x450] */ r_ecx = R32((u32)(r_ebp+0x450u));
    /* 006053be: mov dword ptr [ebp + 0x448], 0x5e4678 */ W32((u32)(r_ebp+0x448u), 0x5e4678u);
    /* 006053c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006053ca: mov dword ptr [ebp + 0x444], eax */ W32((u32)(r_ebp+0x444u), r_eax);
    /* 006053d0: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 006053d6: movzx eax, byte ptr [ecx + 0x1f] */ r_eax = (u32)R8((u32)(r_ecx+0x1fu));
    /* 006053da: mov word ptr [ebp + 0x49a], ax */ W16((u32)(r_ebp+0x49au), (u16)r_eax);
    /* 006053e1: movzx eax, byte ptr [ecx + 0x20] */ r_eax = (u32)R8((u32)(r_ecx+0x20u));
    /* 006053e5: movzx edx, byte ptr [ecx + 0x21] */ r_edx = (u32)R8((u32)(r_ecx+0x21u));
    /* 006053e9: mov byte ptr [ebp + 0x4f4], al */ W8((u32)(r_ebp+0x4f4u), (u8)r_eax);
    /* 006053ef: mov byte ptr [ebp + 0x4f8], dl */ W8((u32)(r_ebp+0x4f8u), (u8)r_edx);
    /* 006053f5: movzx eax, byte ptr [ecx + 0x22] */ r_eax = (u32)R8((u32)(r_ecx+0x22u));
    /* 006053f9: movzx edx, byte ptr [ecx + 0x23] */ r_edx = (u32)R8((u32)(r_ecx+0x23u));
    /* 006053fd: mov byte ptr [ebp + 0x4f5], al */ W8((u32)(r_ebp+0x4f5u), (u8)r_eax);
    /* 00605403: mov byte ptr [ebp + 0x4f9], dl */ W8((u32)(r_ebp+0x4f9u), (u8)r_edx);
    /* 00605409: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0060540e: mov byte ptr [ebp + 0x4f6], al */ W8((u32)(r_ebp+0x4f6u), (u8)r_eax);
    /* 00605414: mov byte ptr [ebp + 0x4fa], al */ W8((u32)(r_ebp+0x4fau), (u8)r_eax);
    /* 0060541a: mov byte ptr [ebp + 0x4f7], al */ W8((u32)(r_ebp+0x4f7u), (u8)r_eax);
    /* 00605420: mov byte ptr [ebp + 0x4fb], al */ W8((u32)(r_ebp+0x4fbu), (u8)r_eax);
    /* 00605426: lea edx, [ebp + 0x460] */ r_edx = (u32)(r_ebp+0x460u);
    /* 0060542c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060542e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00605430: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00605433: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00605436: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00605439: mov dword ptr [ebp + 0x458], 0x41980000 */ W32((u32)(r_ebp+0x458u), 0x41980000u);
    /* 00605443: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605445: mov dword ptr [ebp + 0x484], eax */ W32((u32)(r_ebp+0x484u), r_eax);
    /* 0060544b: mov dword ptr [ebp + 0x488], eax */ W32((u32)(r_ebp+0x488u), r_eax);
    /* 00605451: mov dword ptr [ebp + 0x48c], eax */ W32((u32)(r_ebp+0x48cu), r_eax);
    /* 00605457: mov dword ptr [ebp + 0x490], eax */ W32((u32)(r_ebp+0x490u), r_eax);
    /* 0060545d: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 00605461: mov byte ptr [ebp + 0x440], dl */ W8((u32)(r_ebp+0x440u), (u8)r_edx);
    /* 00605467: cmp edx, 0xed */ {  u32 a = r_edx; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060546d: jl 0x605484 */ if ((fS!=fO)) goto L_00605484;
L_0060546f:; BB(0x0060546f);
    /* 0060546f: mov byte ptr [ebp + 0x49f], 1 */ W8((u32)(r_ebp+0x49fu), 0x1u);
    /* 00605476: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0060547b: mov word ptr [ebp + 0x498], ax */ W16((u32)(r_ebp+0x498u), (u16)r_eax);
    /* 00605482: jmp 0x6054b9 */ goto L_006054b9;
L_00605484:; BB(0x00605484);
    /* 00605484: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605485: call 0x5e4dd0 */ r_esp -= 4; W32(r_esp, 0x60548au); f_005e4dd0();
    /* 0060548a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060548b: mov byte ptr [ebp + 0x49f], al */ W8((u32)(r_ebp+0x49fu), (u8)r_eax);
    /* 00605491: movsx eax, word ptr [ebp + 0x45c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x45cu));
    /* 00605498: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060549b: je 0x605529 */ if (fZ) goto L_00605529;
L_006054a1:; BB(0x006054a1);
    /* 006054a1: mov eax, dword ptr [ebp + 0x450] */ r_eax = R32((u32)(r_ebp+0x450u));
    /* 006054a7: movzx edx, byte ptr [eax + 0x24] */ r_edx = (u32)R8((u32)(r_eax+0x24u));
    /* 006054ab: mov word ptr [ebp + 0x498], dx */ W16((u32)(r_ebp+0x498u), (u16)r_edx);
    /* 006054b2: movzx edx, byte ptr [ebp + 0x440] */ r_edx = (u32)R8((u32)(r_ebp+0x440u));
L_006054b9:; BB(0x006054b9);
    /* 006054b9: mov dword ptr [ebp + 0x4a0], 0xffffffff */ W32((u32)(r_ebp+0x4a0u), 0xffffffffu);
    /* 006054c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006054c5: mov dword ptr [ebp + 0x4a4], 0 */ W32((u32)(r_ebp+0x4a4u), 0x0u);
    /* 006054cf: jne 0x6054df */ if (!fZ) goto L_006054df;
L_006054d1:; BB(0x006054d1);
    /* 006054d1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006054d6: mov word ptr [ebp + 0x45c], ax */ W16((u32)(r_ebp+0x45cu), (u16)r_eax);
    /* 006054dd: jmp 0x6054f1 */ goto L_006054f1;
L_006054df:; BB(0x006054df);
    /* 006054df: mov dword ptr [0xa8e46c], 0 */ W32((u32)(0xa8e46cu), 0x0u);
    /* 006054e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006054eb: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
L_006054f1:; BB(0x006054f1);
    /* 006054f1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6054f6u); f_0082d7b0();
    /* 006054f6: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006054f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006054fb: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x605500u); f_008316b4();
    /* 00605500: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00605503: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00605505: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x60550au); f_0082d8bc();
    /* 0060550a: push dword ptr [ebp + 0xe0] */ { u32 v = R32((u32)(r_ebp+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605510: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605512: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00605514: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060551a: call 0x7aab2c */ r_esp -= 4; W32(r_esp, 0x60551fu); f_007aab2c();
    /* 0060551f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x605524u); f_0082da80();
    /* 00605524: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605526: ret 8 */ FN_RET(0x00605304); r_esp += 12; return;
L_00605529:; BB(0x00605529);
    /* 00605529: movzx edx, byte ptr [ebp + 0x440] */ r_edx = (u32)R8((u32)(r_ebp+0x440u));
    /* 00605530: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00605535: mov word ptr [ebp + 0x498], ax */ W16((u32)(r_ebp+0x498u), (u16)r_eax);
    /* 0060553c: jmp 0x6054b9 */ goto L_006054b9;
}

void f_00605544(void) /* sub_605544 */
{
    FN_ENTER(0x00605544);
    /* 00605544: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00605545: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00605546: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605547: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605548: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060554b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0060554d: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0060554f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x605554u); f_008581c5();
    /* 00605554: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00605556: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
    /* 0060555c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x605561u); f_008581c5();
    /* 00605561: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00605563: mov dword ptr [ebp + 0x41c], eax */ W32((u32)(r_ebp+0x41cu), r_eax);
    /* 00605569: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60556eu); f_008581c5();
    /* 0060556e: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 00605574: mov dword ptr [ebp + 0x420], eax */ W32((u32)(r_ebp+0x420u), r_eax);
    /* 0060557a: mov eax, dword ptr [0x92e2cc] */ r_eax = R32((u32)(0x92e2ccu));
    /* 0060557f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00605581: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00605583: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00605586: mov esi, dword ptr [ebp + 0x41c] */ r_esi = R32((u32)(r_ebp+0x41cu));
    /* 0060558c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0060558e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00605591: mov edi, dword ptr [ebp + 0x418] */ r_edi = R32((u32)(r_ebp+0x418u));
    /* 00605597: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 0060559a: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0060559d: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 006055a3: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 006055a6: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 006055a9: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 006055af: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 006055b2: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 006055b5: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 006055bb: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 006055be: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 006055c1: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 006055c7: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 006055ca: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006055cd: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 006055d3: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 006055d6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006055d9: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 006055df: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 006055e2: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006055e5: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 006055eb: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 006055ee: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006055f1: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 006055f7: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 006055fa: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006055fd: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 00605603: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 00605606: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00605609: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 0060560f: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00605612: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00605615: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 0060561b: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0060561e: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00605621: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 00605627: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 0060562a: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0060562d: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 00605633: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00605636: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00605639: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 0060563f: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00605642: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00605645: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 0060564b: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0060564e: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00605651: mov ebx, dword ptr [ebp + 0x418] */ r_ebx = R32((u32)(r_ebp+0x418u));
    /* 00605657: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0060565a: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0060565d: mov ebx, dword ptr [ebp + 0x41c] */ r_ebx = R32((u32)(r_ebp+0x41cu));
    /* 00605663: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00605666: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00605669: mov ebx, dword ptr [ebp + 0x420] */ r_ebx = R32((u32)(r_ebp+0x420u));
    /* 0060566f: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00605671: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00605674: mov ebx, dword ptr [ebp + 0x420] */ r_ebx = R32((u32)(r_ebp+0x420u));
    /* 0060567a: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0060567d: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00605680: mov ebx, dword ptr [ebp + 0x420] */ r_ebx = R32((u32)(r_ebp+0x420u));
    /* 00605686: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00605689: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 0060568c: mov ebx, dword ptr [ebp + 0x420] */ r_ebx = R32((u32)(r_ebp+0x420u));
    /* 00605692: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00605695: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00605698: mov ebx, dword ptr [ebp + 0x420] */ r_ebx = R32((u32)(r_ebp+0x420u));
    /* 0060569e: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 006056a1: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006056a4: push dword ptr [ebp + 0x3cc] */ { u32 v = R32((u32)(r_ebp+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006056aa: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x6056afu); f_004e6f24();
    /* 006056af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006056b2: mov ecx, dword ptr [ebp + 0x3d0] */ r_ecx = R32((u32)(r_ebp+0x3d0u));
    /* 006056b8: mov dword ptr [ebp + 0x424], 1 */ W32((u32)(r_ebp+0x424u), 0x1u);
    /* 006056c2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006056c5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006056c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006056c9: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006056cb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006056cd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006056cf: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006056d1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6056d6u); f_005b8610();
    /* 006056d6: mov esi, dword ptr [ebp + 0x41c] */ r_esi = R32((u32)(r_ebp+0x41cu));
    /* 006056dc: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 006056df: mov edi, dword ptr [ebx*4 + 0x9b5b74] */ r_edi = R32((u32)(r_ebx*4+0x9b5b74u));
    /* 006056e6: mov eax, 1 */ r_eax = 0x1u;
    /* 006056eb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006056ed: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006056f1: mov dword ptr [ebp + 0x3d8], 0 */ W32((u32)(r_ebp+0x3d8u), 0x0u);
    /* 006056fb: je 0x605941 */ if (fZ) goto L_00605941;
L_00605701:; BB(0x00605701);
    /* 00605701: push dword ptr [ebp + 0x3cc] */ { u32 v = R32((u32)(r_ebp+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00605707: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x60570cu); f_004e6f24();
    /* 0060570c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060570d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00605710: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00605712: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605714: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00605716: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00605718: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060571a: movsx ecx, word ptr [edx*4 + 0x9b5b68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b68u));
    /* 00605722: mov eax, esi */ r_eax = r_esi;
    /* 00605724: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605726: jne 0x60572d */ if (!fZ) goto L_0060572d;
L_00605728:; BB(0x00605728);
    /* 00605728: mov ecx, 1 */ r_ecx = 0x1u;
L_0060572d:; BB(0x0060572d);
    /* 0060572d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060572f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00605731: jle 0x605795 */ if ((fZ||fS!=fO)) goto L_00605795;
L_00605733:; BB(0x00605733);
    /* 00605733: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00605737: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0060573b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0060573e: mov ebx, edx */ r_ebx = r_edx;
    /* 00605740: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00605744: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00605748:; BB(0x00605748);
    /* 00605748: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0060574a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060574c: jne 0x605757 */ if (!fZ) goto L_00605757;
L_0060574e:; BB(0x0060574e);
    /* 0060574e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605750: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00605752: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00605755: jmp 0x605775 */ goto L_00605775;
L_00605757:; BB(0x00605757);
    /* 00605757: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 0060575d: mov eax, ebp */ r_eax = r_ebp;
    /* 0060575f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00605762: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605763: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00605767: mov ecx, dword ptr [eax + 0x3d0] */ r_ecx = R32((u32)(r_eax+0x3d0u));
    /* 0060576d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x605772u); f_005b8610();
    /* 00605772: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_00605775:; BB(0x00605775);
    /* 00605775: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00605779: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060577c: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0060577f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00605782: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00605784: jl 0x605748 */ if ((fS!=fO)) goto L_00605748;
L_00605786:; BB(0x00605786);
    /* 00605786: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0060578a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0060578d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00605791: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00605795:; BB(0x00605795);
    /* 00605795: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 0060579b: movsx esi, word ptr [edx + 0x40] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x40u));
    /* 0060579f: mov eax, dword ptr [eax + esi*8 + 4] */ r_eax = R32((u32)(r_eax+r_esi*8+0x4u));
    /* 006057a3: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
L_006057a9:; BB(0x006057a9);
    /* 006057a9: mov edi, dword ptr [ebx*4 + 0x9b5b70] */ r_edi = R32((u32)(r_ebx*4+0x9b5b70u));
    /* 006057b0: mov esi, dword ptr [ebp + 0x418] */ r_esi = R32((u32)(r_ebp+0x418u));
    /* 006057b6: mov dword ptr [ebp + 0x3d4], 0 */ W32((u32)(r_ebp+0x3d4u), 0x0u);
    /* 006057c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006057c2: je 0x605870 */ if (fZ) goto L_00605870;
L_006057c8:; BB(0x006057c8);
    /* 006057c8: push dword ptr [ebp + 0x3cc] */ { u32 v = R32((u32)(r_ebp+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006057ce: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x6057d3u); f_004e6f24();
    /* 006057d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006057d4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006057d7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006057d9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006057db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006057dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006057df: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006057e1: movsx ecx, word ptr [edx*4 + 0x9b5b68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b68u));
    /* 006057e9: mov eax, esi */ r_eax = r_esi;
    /* 006057eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006057ed: jne 0x6057f4 */ if (!fZ) goto L_006057f4;
L_006057ef:; BB(0x006057ef);
    /* 006057ef: mov ecx, 1 */ r_ecx = 0x1u;
L_006057f4:; BB(0x006057f4);
    /* 006057f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006057f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006057f8: jle 0x60585c */ if ((fZ||fS!=fO)) goto L_0060585c;
L_006057fa:; BB(0x006057fa);
    /* 006057fa: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006057fe: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00605802: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00605805: mov ebx, edx */ r_ebx = r_edx;
    /* 00605807: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0060580b: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0060580f:; BB(0x0060580f);
    /* 0060580f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00605811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605813: jne 0x60581e */ if (!fZ) goto L_0060581e;
L_00605815:; BB(0x00605815);
    /* 00605815: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605817: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00605819: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0060581c: jmp 0x60583c */ goto L_0060583c;
L_0060581e:; BB(0x0060581e);
    /* 0060581e: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 00605824: mov eax, ebp */ r_eax = r_ebp;
    /* 00605826: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00605829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060582a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0060582e: mov ecx, dword ptr [eax + 0x3d0] */ r_ecx = R32((u32)(r_eax+0x3d0u));
    /* 00605834: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x605839u); f_005b8610();
    /* 00605839: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_0060583c:; BB(0x0060583c);
    /* 0060583c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00605840: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00605843: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00605846: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00605849: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060584b: jl 0x60580f */ if ((fS!=fO)) goto L_0060580f;
L_0060584d:; BB(0x0060584d);
    /* 0060584d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00605851: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00605854: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00605858: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0060585c:; BB(0x0060585c);
    /* 0060585c: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 00605862: movsx esi, word ptr [edx + 0x40] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x40u));
    /* 00605866: mov eax, dword ptr [eax + esi*8 + 4] */ r_eax = R32((u32)(r_eax+r_esi*8+0x4u));
    /* 0060586a: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
L_00605870:; BB(0x00605870);
    /* 00605870: mov edi, dword ptr [ebx*4 + 0x9b5b78] */ r_edi = R32((u32)(r_ebx*4+0x9b5b78u));
    /* 00605877: mov esi, dword ptr [ebp + 0x420] */ r_esi = R32((u32)(r_ebp+0x420u));
    /* 0060587d: mov dword ptr [ebp + 0x3dc], 0 */ W32((u32)(r_ebp+0x3dcu), 0x0u);
    /* 00605887: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605889: je 0x605939 */ if (fZ) goto L_00605939;
L_0060588f:; BB(0x0060588f);
    /* 0060588f: push dword ptr [ebp + 0x3cc] */ { u32 v = R32((u32)(r_ebp+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00605895: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x60589au); f_004e6f24();
    /* 0060589a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060589b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0060589e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006058a0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006058a2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006058a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006058a6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006058a8: movsx edx, word ptr [edx*4 + 0x9b5b66] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx*4+0x9b5b66u));
    /* 006058b0: mov eax, esi */ r_eax = r_esi;
    /* 006058b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006058b4: jne 0x6058bb */ if (!fZ) goto L_006058bb;
L_006058b6:; BB(0x006058b6);
    /* 006058b6: mov edx, 1 */ r_edx = 0x1u;
L_006058bb:; BB(0x006058bb);
    /* 006058bb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006058bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006058bf: jle 0x605917 */ if ((fZ||fS!=fO)) goto L_00605917;
L_006058c1:; BB(0x006058c1);
    /* 006058c1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006058c5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006058c9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006058cd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_006058d1:; BB(0x006058d1);
    /* 006058d1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006058d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006058d5: jne 0x6058e0 */ if (!fZ) goto L_006058e0;
L_006058d7:; BB(0x006058d7);
    /* 006058d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006058d9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006058db: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006058de: jmp 0x6058fe */ goto L_006058fe;
L_006058e0:; BB(0x006058e0);
    /* 006058e0: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 006058e6: mov eax, ebp */ r_eax = r_ebp;
    /* 006058e8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006058eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006058ec: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006058f0: mov ecx, dword ptr [edx + 0x3d0] */ r_ecx = R32((u32)(r_edx+0x3d0u));
    /* 006058f6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6058fbu); f_005b8610();
    /* 006058fb: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_006058fe:; BB(0x006058fe);
    /* 006058fe: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00605902: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00605905: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00605908: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0060590b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060590d: jl 0x6058d1 */ if ((fS!=fO)) goto L_006058d1;
L_0060590f:; BB(0x0060590f);
    /* 0060590f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00605913: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00605917:; BB(0x00605917);
    /* 00605917: mov ebx, dword ptr [ebp + 0x3cc] */ r_ebx = R32((u32)(r_ebp+0x3ccu));
    /* 0060591d: movsx edx, word ptr [ebx + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3eu));
    /* 00605921: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00605925: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
L_0060592b:; BB(0x0060592b);
    /* 0060592b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060592c: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x605931u); f_004e6f24();
    /* 00605931: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00605934: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605935: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605936: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605937: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00605938: ret  */ FN_RET(0x00605544); r_esp += 4; return;
L_00605939:; BB(0x00605939);
    /* 00605939: mov ebx, dword ptr [ebp + 0x3cc] */ r_ebx = R32((u32)(r_ebp+0x3ccu));
    /* 0060593f: jmp 0x60592b */ goto L_0060592b;
L_00605941:; BB(0x00605941);
    /* 00605941: mov eax, 1 */ r_eax = 0x1u;
    /* 00605946: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0060594a: jmp 0x6057a9 */ goto L_006057a9;
}

void f_00605950(void) /* sub_605950 */
{
    FN_ENTER(0x00605950);
    /* 00605950: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00605951: mov esi, ecx */ r_esi = r_ecx;
    /* 00605953: push 0x44000 */ { u32 v = 0x44000u; r_esp -= 4; W32(r_esp, v); }
    /* 00605958: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x60595du); f_0082e940();
    /* 0060595d: push dword ptr [esi + 0x3cc] */ { u32 v = R32((u32)(r_esi+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00605963: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 00605969: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x60596eu); f_004e6f24();
    /* 0060596e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605970: lea edx, [esi + 0x3f0] */ r_edx = (u32)(r_esi+0x3f0u);
    /* 00605976: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605977: push dword ptr [esi + 0x3e8] */ { u32 v = R32((u32)(r_esi+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060597d: push dword ptr [eax*4 + 0x9b5980] */ { u32 v = R32((u32)(r_eax*4+0x9b5980u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605984: call 0x5ba3f4 */ r_esp -= 4; W32(r_esp, 0x605989u); f_005ba3f4();
    /* 00605989: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060598c: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00605992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605994: jl 0x605996 */ if ((fS!=fO)) goto L_00605996;
L_00605996:; BB(0x00605996);
    /* 00605996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00605997: ret  */ FN_RET(0x00605950); r_esp += 4; return;
}

void f_00605998(void) /* sub_605998 */
{
    FN_ENTER(0x00605998);
    /* 00605998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00605999: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060599a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060599b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060599c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060599e: mov edi, eax */ r_edi = r_eax;
L_006059a0:; BB(0x006059a0);
    /* 006059a0: mov ecx, dword ptr [edi + 0xa8e340] */ r_ecx = R32((u32)(r_edi+0xa8e340u));
    /* 006059a6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006059a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006059ab: je 0x6059d3 */ if (fZ) goto L_006059d3;
L_006059ad:; BB(0x006059ad);
    /* 006059ad: push dword ptr [ecx + 0x3a4] */ { u32 v = R32((u32)(r_ecx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006059b3: push dword ptr [ecx + 0x3a0] */ { u32 v = R32((u32)(r_ecx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006059b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006059bb: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x6059beu); call_ind(t); }
    /* 006059be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006059c0: je 0x6059d3 */ if (fZ) goto L_006059d3;
L_006059c2:; BB(0x006059c2);
    /* 006059c2: mov esi, dword ptr [edi + 0xa8e33c] */ r_esi = R32((u32)(r_edi+0xa8e33cu));
    /* 006059c8: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 006059ce: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006059d1: je 0x6059e0 */ if (fZ) goto L_006059e0;
L_006059d3:; BB(0x006059d3);
    /* 006059d3: cmp edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006059d9: jl 0x6059a0 */ if ((fS!=fO)) goto L_006059a0;
L_006059db:; BB(0x006059db);
    /* 006059db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006059dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006059dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006059de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006059df: ret  */ FN_RET(0x00605998); r_esp += 4; return;
L_006059e0:; BB(0x006059e0);
    /* 006059e0: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 006059e6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006059e9: jne 0x6059d3 */ if (!fZ) goto L_006059d3;
L_006059eb:; BB(0x006059eb);
    /* 006059eb: mov edx, dword ptr [esi + 0x43c] */ r_edx = R32((u32)(r_esi+0x43cu));
    /* 006059f1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006059f4: je 0x6059d3 */ if (fZ) goto L_006059d3;
L_006059f6:; BB(0x006059f6);
    /* 006059f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006059f7: call 0x5d783c */ r_esp -= 4; W32(r_esp, 0x6059fcu); f_005d783c();
    /* 006059fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006059fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605a00: jne 0x6059d3 */ if (!fZ) goto L_006059d3;
L_00605a02:; BB(0x00605a02);
    /* 00605a02: push dword ptr [esi + 0x43c] */ { u32 v = R32((u32)(r_esi+0x43cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00605a08: call 0x5d7af0 */ r_esp -= 4; W32(r_esp, 0x605a0du); f_005d7af0();
    /* 00605a0d: mov ebp, eax */ r_ebp = r_eax;
    /* 00605a0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00605a12: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605a14: je 0x6059d3 */ if (fZ) goto L_006059d3;
L_00605a16:; BB(0x00605a16);
    /* 00605a16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00605a18: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x605a1du); f_007a94a0();
    /* 00605a1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605a1e: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00605a24: mov ebx, dword ptr [0xaf0360] */ r_ebx = R32((u32)(0xaf0360u));
    /* 00605a2a: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00605a30: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00605a36: mov dword ptr [0xaab504], ebx */ W32((u32)(0xaab504u), r_ebx);
    /* 00605a3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605a3d: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00605a43: mov ecx, esi */ r_ecx = r_esi;
    /* 00605a45: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00605a4b: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00605a51: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00605a57: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00605a5d: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00605a63: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00605a69: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00605a6f: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00605a75: call 0x604ef8 */ r_esp -= 4; W32(r_esp, 0x605a7au); f_00604ef8();
    /* 00605a7a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00605a7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605a7e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00605a80: mov ecx, esi */ r_ecx = r_esi;
    /* 00605a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605a83: call 0x604a34 */ r_esp -= 4; W32(r_esp, 0x605a88u); f_00604a34();
    /* 00605a88: mov edx, dword ptr [esi + 0x484] */ r_edx = R32((u32)(r_esi+0x484u));
    /* 00605a8e: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605a94: je 0x605ab5 */ if (fZ) goto L_00605ab5;
L_00605a96:; BB(0x00605a96);
    /* 00605a96: movzx edx, byte ptr [esi + 0x440] */ r_edx = (u32)R8((u32)(r_esi+0x440u));
    /* 00605a9d: cmp edx, 0x89 */ {  u32 a = r_edx; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605aa3: jne 0x605aaa */ if (!fZ) goto L_00605aaa;
L_00605aa5:; BB(0x00605aa5);
    /* 00605aa5: mov ebx, 1 */ r_ebx = 0x1u;
L_00605aaa:; BB(0x00605aaa);
    /* 00605aaa: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00605aac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605aad: mov ecx, esi */ r_ecx = r_esi;
    /* 00605aaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605ab0: call 0x604a34 */ r_esp -= 4; W32(r_esp, 0x605ab5u); f_00604a34();
L_00605ab5:; BB(0x00605ab5);
    /* 00605ab5: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 00605abb: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00605ac1: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00605ac7: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00605acd: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00605ad3: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 00605ad9: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00605adf: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 00605ae5: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00605aeb: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 00605af1: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 00605af7: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00605afd: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00605b03: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00605b09: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x605b0eu); f_007a9044();
    /* 00605b0e: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x605b13u); f_007a94b0();
    /* 00605b13: jmp 0x6059d3 */ goto L_006059d3;
}

void f_00605b18(void) /* sub_605B18 */
{
    FN_ENTER(0x00605b18);
    /* 00605b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605b19: mov ebp, esp */ r_ebp = r_esp;
    /* 00605b1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605b1d: push 0x8dee08 */ { u32 v = 0x8dee08u; r_esp -= 4; W32(r_esp, v); }
    /* 00605b22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605b29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605b30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605b33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605b36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00605b39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00605b3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00605b3f: mov eax, dword ptr [0xa8e470] */ r_eax = R32((u32)(0xa8e470u));
    /* 00605b44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605b46: je 0x605bf1 */ if (fZ) goto L_00605bf1;
L_00605b4c:; BB(0x00605b4c);
    /* 00605b4c: mov eax, dword ptr [0xa8e474] */ r_eax = R32((u32)(0xa8e474u));
    /* 00605b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605b53: je 0x605b9e */ if (fZ) goto L_00605b9e;
L_00605b55:; BB(0x00605b55);
    /* 00605b55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00605b57:; BB(0x00605b57);
    /* 00605b57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605b59: mov dword ptr [edx*4 + 0xa8e340], eax */ W32((u32)(r_edx*4+0xa8e340u), r_eax);
    /* 00605b60: mov dword ptr [edx*4 + 0xa8e344], eax */ W32((u32)(r_edx*4+0xa8e344u), r_eax);
    /* 00605b67: mov dword ptr [edx*4 + 0xa8e348], eax */ W32((u32)(r_edx*4+0xa8e348u), r_eax);
    /* 00605b6e: mov dword ptr [edx*4 + 0xa8e34c], eax */ W32((u32)(r_edx*4+0xa8e34cu), r_eax);
    /* 00605b75: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00605b78: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00605b7b: jl 0x605b57 */ if ((fS!=fO)) goto L_00605b57;
L_00605b7d:; BB(0x00605b7d);
    /* 00605b7d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605b80: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00605b83: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605b86: mov dword ptr [0xa8e478], 0 */ W32((u32)(0xa8e478u), 0x0u);
    /* 00605b90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605b93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605b9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00605b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605b9d: ret  */ FN_RET(0x00605b18); r_esp += 4; return;
L_00605b9e:; BB(0x00605b9e);
    /* 00605b9e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00605ba5: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00605baa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x605bafu); f_008581c5();
    /* 00605baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605bb0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00605bb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605bb5: je 0x605bed */ if (fZ) goto L_00605bed;
L_00605bb7:; BB(0x00605bb7);
    /* 00605bb7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00605bbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605bc5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605bc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605bca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605bcd: push 0x9c3e40 */ { u32 v = 0x9c3e40u; r_esp -= 4; W32(r_esp, v); }
    /* 00605bd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00605bd4: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x605bd9u); f_005b7a84();
    /* 00605bd9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605bdc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00605be3:; BB(0x00605be3);
    /* 00605be3: mov dword ptr [0xa8e474], eax */ W32((u32)(0xa8e474u), r_eax);
    /* 00605be8: jmp 0x605b55 */ goto L_00605b55;
L_00605bed:; BB(0x00605bed);
    /* 00605bed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605bef: jmp 0x605be3 */ goto L_00605be3;
L_00605bf1:; BB(0x00605bf1);
    /* 00605bf1: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00605bf6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x605bfbu); f_008581c5();
    /* 00605bfb: mov dword ptr [0xa8e470], eax */ W32((u32)(0xa8e470u), r_eax);
    /* 00605c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c01: push dword ptr [0x9c3e54] */ { u32 v = R32((u32)(0x9c3e54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605c07: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x605c0cu); f_005b9910();
    /* 00605c0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00605c0f: jmp 0x605b4c */ goto L_00605b4c;
}

void f_00605c14(void) /* sub_605C14 */
{
    FN_ENTER(0x00605c14);
    /* 00605c14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605c15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00605c17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00605c19: call 0x605c38 */ r_esp -= 4; W32(r_esp, 0x605c1eu); f_00605c38();
    /* 00605c1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00605c22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605c24: jne 0x605c2a */ if (!fZ) goto L_00605c2a;
L_00605c26:; BB(0x00605c26);
    /* 00605c26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605c27: ret 4 */ FN_RET(0x00605c14); r_esp += 8; return;
L_00605c2a:; BB(0x00605c2a);
    /* 00605c2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605c2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x605c30u); f_005c2f74();
    /* 00605c30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605c31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605c32: ret 4 */ FN_RET(0x00605c14); r_esp += 8; return;
}

void f_00605c38(void) /* sub_605C38 */
{
    FN_ENTER(0x00605c38);
    /* 00605c38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605c39: mov ebp, esp */ r_ebp = r_esp;
    /* 00605c3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605c3d: push 0x8dee24 */ { u32 v = 0x8dee24u; r_esp -= 4; W32(r_esp, v); }
    /* 00605c42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605c50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605c53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605c56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00605c59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00605c5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00605c5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00605c62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605c65: mov dword ptr [ecx], 0xb1da00 */ W32((u32)(r_ecx), 0xb1da00u);
    /* 00605c6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00605c72: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x605c77u); f_0060c7e4();
    /* 00605c77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605c7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605c81: mov esp, ebp */ r_esp = r_ebp;
    /* 00605c83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605c84: ret  */ FN_RET(0x00605c38); r_esp += 4; return;
}

void f_00605c88(void) /* sub_605C88 */
{
    FN_ENTER(0x00605c88);
    /* 00605c88: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00605c8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605c8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605c90: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00605c92: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x605c97u); f_00814298();
    /* 00605c97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00605c9a: ret  */ FN_RET(0x00605c88); r_esp += 4; return;
}

void f_00605c9c(void) /* sub_605C9C */
{
    FN_ENTER(0x00605c9c);
    /* 00605c9c: mov ecx, dword ptr [0xa8e4a0] */ r_ecx = R32((u32)(0xa8e4a0u));
    /* 00605ca2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605ca4: je 0x605cc1 */ if (fZ) goto L_00605cc1;
L_00605ca6:; BB(0x00605ca6);
    /* 00605ca6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x605cabu); f_00829de0();
    /* 00605cab: push dword ptr [0xa8e4a0] */ { u32 v = R32((u32)(0xa8e4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605cb1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x605cb6u); f_0082e960();
    /* 00605cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605cb7: mov dword ptr [0xa8e4a0], 0 */ W32((u32)(0xa8e4a0u), 0x0u);
L_00605cc1:; BB(0x00605cc1);
    /* 00605cc1: mov eax, dword ptr [0xa8e4a4] */ r_eax = R32((u32)(0xa8e4a4u));
    /* 00605cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605cc8: je 0x605cdb */ if (fZ) goto L_00605cdb;
L_00605cca:; BB(0x00605cca);
    /* 00605cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605ccb: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x605cd0u); f_005b9bac();
    /* 00605cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605cd1: mov dword ptr [0xa8e4a4], 0 */ W32((u32)(0xa8e4a4u), 0x0u);
L_00605cdb:; BB(0x00605cdb);
    /* 00605cdb: ret  */ FN_RET(0x00605c9c); r_esp += 4; return;
}

void f_00605cdc(void)
{
    FN_ENTER(0x00605cdc);
    /* 00605cdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605cdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00605cdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605ce1: push 0x8dee66 */ { u32 v = 0x8dee66u; r_esp -= 4; W32(r_esp, v); }
    /* 00605ce6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605ced: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605cf4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605cf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605cfa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00605cfd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00605d00: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00605d03: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00605d05: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00605d0c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x605d11u); f_005caba4();
    /* 00605d11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605d12: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00605d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605d17: je 0x605d9f */ if (fZ) goto L_00605d9f;
L_00605d1d:; BB(0x00605d1d);
    /* 00605d1d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00605d24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605d2b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605d31: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00605d34: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x605d39u); f_00787a4c();
    /* 00605d39: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00605d3c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00605d43: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00605d46:; BB(0x00605d46);
    /* 00605d46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00605d4d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00605d54: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00605d59: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x605d5eu); f_005caba4();
    /* 00605d5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605d5f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00605d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605d64: je 0x605d9b */ if (fZ) goto L_00605d9b;
L_00605d66:; BB(0x00605d66);
    /* 00605d66: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00605d6d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00605d74: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605d77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00605d7a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605d7e: call 0x605da8 */ r_esp -= 4; W32(r_esp, 0x605d83u); f_00605da8();
    /* 00605d83: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605d86: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00605d8d:; BB(0x00605d8d);
    /* 00605d8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605d90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605d97: mov esp, ebp */ r_esp = r_ebp;
    /* 00605d99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605d9a: ret  */ FN_RET(0x00605cdc); r_esp += 4; return;
L_00605d9b:; BB(0x00605d9b);
    /* 00605d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605d9d: jmp 0x605d8d */ goto L_00605d8d;
L_00605d9f:; BB(0x00605d9f);
    /* 00605d9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605da1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00605da4: jmp 0x605d46 */ goto L_00605d46;
}

void f_00605da8(void) /* sub_605DA8 */
{
    FN_ENTER(0x00605da8);
    /* 00605da8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605da9: mov ebp, esp */ r_ebp = r_esp;
    /* 00605dab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605dad: push 0x8dee80 */ { u32 v = 0x8dee80u; r_esp -= 4; W32(r_esp, v); }
    /* 00605db2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605db9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605dc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605dc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605dc6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00605dc9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00605dcc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00605dcf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00605dd2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605dd5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00605dd8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00605ddb: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x605de0u); f_0060c858();
    /* 00605de0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605de7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605dea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00605ded: mov dword ptr [ecx], 0xb1da00 */ W32((u32)(r_ecx), 0xb1da00u);
    /* 00605df3: mov eax, dword ptr [0x9c3e80] */ r_eax = R32((u32)(0x9c3e80u));
    /* 00605df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605df9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00605dfc: call dword ptr [0xb1db4c] */ { u32 t = R32((u32)(0xb1db4cu)); r_esp -= 4; W32(r_esp, 0x605e02u); call_ind(t); }
    /* 00605e02: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605e05: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00605e08: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00605e0b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00605e0e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00605e14: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00605e1a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605e1d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00605e23: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00605e29: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00605e2f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00605e35: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00605e3b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00605e41: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605e44: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00605e4a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605e4d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00605e53: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00605e56: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00605e5c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00605e5f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00605e65: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00605e68: mov eax, dword ptr [0xa8e4a4] */ r_eax = R32((u32)(0xa8e4a4u));
    /* 00605e6d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00605e6f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00605e72: mov eax, dword ptr [0xa8e4a0] */ r_eax = R32((u32)(0xa8e4a0u));
    /* 00605e77: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00605e7a: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x605e7fu); f_00606bc8();
    /* 00605e7f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00605e82: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605e85: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00605e88: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00605e8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605e8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605e95: mov esp, ebp */ r_esp = r_ebp;
    /* 00605e97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605e98: ret 8 */ FN_RET(0x00605da8); r_esp += 12; return;
}

void f_00605e9c(void) /* sub_605E9C */
{
    FN_ENTER(0x00605e9c);
    /* 00605e9c: push 0x92ed6c */ { u32 v = 0x92ed6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00605ea1: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x605ea6u); f_005b938c();
    /* 00605ea6: push 0x92ed80 */ { u32 v = 0x92ed80u; r_esp -= 4; W32(r_esp, v); }
    /* 00605eab: mov dword ptr [0xa8e4a4], eax */ W32((u32)(0xa8e4a4u), r_eax);
    /* 00605eb0: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x605eb5u); f_008009dc();
    /* 00605eb5: mov dword ptr [0xa8e4a0], eax */ W32((u32)(0xa8e4a0u), r_eax);
    /* 00605eba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00605ebd: ret  */ FN_RET(0x00605e9c); r_esp += 4; return;
}

void f_00605ec0(void) /* sub_605EC0 */
{
    FN_ENTER(0x00605ec0);
    /* 00605ec0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ec1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00605ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00605ec5: call 0x605ee4 */ r_esp -= 4; W32(r_esp, 0x605ecau); f_00605ee4();
    /* 00605eca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00605ece: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605ed0: jne 0x605ed6 */ if (!fZ) goto L_00605ed6;
L_00605ed2:; BB(0x00605ed2);
    /* 00605ed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605ed3: ret 4 */ FN_RET(0x00605ec0); r_esp += 8; return;
L_00605ed6:; BB(0x00605ed6);
    /* 00605ed6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00605ed7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x605edcu); f_005c2f74();
    /* 00605edc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00605ede: ret 4 */ FN_RET(0x00605ec0); r_esp += 8; return;
}

void f_00605ee4(void) /* sub_605EE4 */
{
    FN_ENTER(0x00605ee4);
    /* 00605ee4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605ee5: mov ebp, esp */ r_ebp = r_esp;
    /* 00605ee7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605ee9: push 0x8dee9c */ { u32 v = 0x8dee9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00605eee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605ef5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605efc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605eff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605f02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00605f05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00605f08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00605f0b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00605f0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00605f11: mov dword ptr [ecx], 0xb1dc00 */ W32((u32)(r_ecx), 0xb1dc00u);
    /* 00605f17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00605f1e: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x605f23u); f_00608fc0();
    /* 00605f23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00605f26: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00605f2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00605f2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605f30: ret  */ FN_RET(0x00605ee4); r_esp += 4; return;
}

void f_00605f34(void) /* sub_605F34 */
{
    FN_ENTER(0x00605f34);
    /* 00605f34: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00605f37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00605f39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605f3c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00605f3e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x605f43u); f_00814298();
    /* 00605f43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00605f46: ret  */ FN_RET(0x00605f34); r_esp += 4; return;
}

void f_00605f48(void) /* sub_605F48 */
{
    FN_ENTER(0x00605f48);
    /* 00605f48: mov ecx, dword ptr [0xa8e4ac] */ r_ecx = R32((u32)(0xa8e4acu));
    /* 00605f4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605f50: je 0x605f6d */ if (fZ) goto L_00605f6d;
L_00605f52:; BB(0x00605f52);
    /* 00605f52: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x605f57u); f_00829de0();
    /* 00605f57: push dword ptr [0xa8e4ac] */ { u32 v = R32((u32)(0xa8e4acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00605f5d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x605f62u); f_0082e960();
    /* 00605f62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605f63: mov dword ptr [0xa8e4ac], 0 */ W32((u32)(0xa8e4acu), 0x0u);
L_00605f6d:; BB(0x00605f6d);
    /* 00605f6d: mov eax, dword ptr [0xa8e4b0] */ r_eax = R32((u32)(0xa8e4b0u));
    /* 00605f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605f74: je 0x605f87 */ if (fZ) goto L_00605f87;
L_00605f76:; BB(0x00605f76);
    /* 00605f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f77: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x605f7cu); f_005b9bac();
    /* 00605f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605f7d: mov dword ptr [0xa8e4b0], 0 */ W32((u32)(0xa8e4b0u), 0x0u);
L_00605f87:; BB(0x00605f87);
    /* 00605f87: ret  */ FN_RET(0x00605f48); r_esp += 4; return;
}

void f_00605f88(void)
{
    FN_ENTER(0x00605f88);
    /* 00605f88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605f89: mov ebp, esp */ r_ebp = r_esp;
    /* 00605f8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00605f8d: push 0x8deede */ { u32 v = 0x8deedeu; r_esp -= 4; W32(r_esp, v); }
    /* 00605f92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00605f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605f99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00605fa0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605fa3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00605fa6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00605fa9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00605fac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00605faf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00605fb1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00605fb8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x605fbdu); f_005caba4();
    /* 00605fbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00605fbe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00605fc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605fc3: je 0x60604b */ if (fZ) goto L_0060604b;
L_00605fc9:; BB(0x00605fc9);
    /* 00605fc9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00605fd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00605fd7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00605fdd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00605fe0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x605fe5u); f_00787a4c();
    /* 00605fe5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00605fe8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00605fef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00605ff2:; BB(0x00605ff2);
    /* 00605ff2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00605ff9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00606000: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606005: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60600au); f_005caba4();
    /* 0060600a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060600b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060600e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606010: je 0x606047 */ if (fZ) goto L_00606047;
L_00606012:; BB(0x00606012);
    /* 00606012: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00606019: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00606020: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00606023: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00606026: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060602a: call 0x606054 */ r_esp -= 4; W32(r_esp, 0x60602fu); f_00606054();
    /* 0060602f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00606032: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00606039:; BB(0x00606039);
    /* 00606039: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060603c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00606043: mov esp, ebp */ r_esp = r_ebp;
    /* 00606045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606046: ret  */ FN_RET(0x00605f88); r_esp += 4; return;
L_00606047:; BB(0x00606047);
    /* 00606047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00606049: jmp 0x606039 */ goto L_00606039;
L_0060604b:; BB(0x0060604b);
    /* 0060604b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060604d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00606050: jmp 0x605ff2 */ goto L_00605ff2;
}

