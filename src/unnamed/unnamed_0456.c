#include "protos.h"

void f_004560b0(void) /* sub_4560B0 */
{
    FN_ENTER(0x004560b0);
    /* 004560b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004560b1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004560b4: mov edi, ecx */ r_edi = r_ecx;
    /* 004560b6: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 004560bc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004560bf: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 004560c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004560c7: jl 0x4560ce */ if ((fS!=fO)) goto L_004560ce;
L_004560c9:; BB(0x004560c9);
    /* 004560c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004560cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004560cd: ret  */ FN_RET(0x004560b0); r_esp += 4; return;
L_004560ce:; BB(0x004560ce);
    /* 004560ce: mov dword ptr [edi + 0x3d8], 5 */ W32((u32)(r_edi+0x3d8u), 0x5u);
    /* 004560d8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004560db: lea edx, [edi + 0x420] */ r_edx = (u32)(r_edi+0x420u);
    /* 004560e1: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004560e5: mov dword ptr [edi + 0x37c], 7 */ W32((u32)(r_edi+0x37cu), 0x7u);
    /* 004560ef: lea eax, [edi + 0x434] */ r_eax = (u32)(r_edi+0x434u);
    /* 004560f5: mov ebp, eax */ r_ebp = r_eax;
    /* 004560f7: mov esi, edx */ r_esi = r_edx;
L_004560f9:; BB(0x004560f9);
    /* 004560f9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004560fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004560fd: je 0x45610c */ if (fZ) goto L_0045610c;
L_004560ff:; BB(0x004560ff);
    /* 004560ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456100: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456105u); f_005cdcc0();
    /* 00456105: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456106: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045610c:; BB(0x0045610c);
    /* 0045610c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045610f: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00456111: ja 0x4560f9 */ if ((!fC&&!fZ)) goto L_004560f9;
L_00456113:; BB(0x00456113);
    /* 00456113: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00456116: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0045611a: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00456120: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456123: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045612a: mov dword ptr [edi + 0x3d8], 5 */ W32((u32)(r_edi+0x3d8u), 0x5u);
    /* 00456134: mov ecx, edi */ r_ecx = r_edi;
    /* 00456136: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x45613bu); f_00454804();
    /* 0045613b: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00456141: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456144: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 0045614b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045614d: je 0x456153 */ if (fZ) goto L_00456153;
L_0045614f:; BB(0x0045614f);
    /* 0045614f: mov ecx, edi */ r_ecx = r_edi;
    /* 00456151: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x456153u); call_ind(t); }
L_00456153:; BB(0x00456153);
    /* 00456153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456157: ret  */ FN_RET(0x004560b0); r_esp += 4; return;
}

void f_00456158(void)
{
    FN_ENTER(0x00456158);
    /* 00456158: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0045615e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00456160: jne 0x456172 */ if (!fZ) goto L_00456172;
L_00456162:; BB(0x00456162);
    /* 00456162: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 00456168: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045616b: je 0x456173 */ if (fZ) goto L_00456173;
L_0045616d:; BB(0x0045616d);
    /* 0045616d: call 0x455a34 */ r_esp -= 4; W32(r_esp, 0x456172u); f_00455a34();
L_00456172:; BB(0x00456172);
    /* 00456172: ret  */ FN_RET(0x00456158); r_esp += 4; return;
L_00456173:; BB(0x00456173);
    /* 00456173: call 0x45617c */ r_esp -= 4; W32(r_esp, 0x456178u); f_0045617c();
    /* 00456178: ret  */ FN_RET(0x00456158); r_esp += 4; return;
}

void f_0045617c(void) /* sub_45617C */
{
    FN_ENTER(0x0045617c);
    /* 0045617c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045617d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045617e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045617f: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456182: mov esi, ecx */ r_esi = r_ecx;
    /* 00456184: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 0045618a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045618d: jne 0x45637e */ if (!fZ) goto L_0045637e;
L_00456193:; BB(0x00456193);
    /* 00456193: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0045619a: cmp eax, dword ptr [esi + 0x3e0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004561a0: jg 0x4561ba */ if ((!fZ&&fS==fO)) goto L_004561ba;
L_004561a2:; BB(0x004561a2);
    /* 004561a2: push 0x9a5d4c */ { u32 v = 0x9a5d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004561a7: push 0x9a5d40 */ { u32 v = 0x9a5d40u; r_esp -= 4; W32(r_esp, v); }
    /* 004561ac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004561ae: call 0x453b6c */ r_esp -= 4; W32(r_esp, 0x4561b3u); f_00453b6c();
    /* 004561b3: mov edi, eax */ r_edi = r_eax;
    /* 004561b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004561b8: jmp 0x4561d0 */ goto L_004561d0;
L_004561ba:; BB(0x004561ba);
    /* 004561ba: push 0x9a5d60 */ { u32 v = 0x9a5d60u; r_esp -= 4; W32(r_esp, v); }
    /* 004561bf: push 0x9a5d58 */ { u32 v = 0x9a5d58u; r_esp -= 4; W32(r_esp, v); }
    /* 004561c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004561c6: call 0x453b6c */ r_esp -= 4; W32(r_esp, 0x4561cbu); f_00453b6c();
    /* 004561cb: mov edi, eax */ r_edi = r_eax;
    /* 004561cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004561d0:; BB(0x004561d0);
    /* 004561d0: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004561d3: jl 0x45631e */ if ((fS!=fO)) goto L_0045631e;
L_004561d9:; BB(0x004561d9);
    /* 004561d9: cmp edi, 9 */ {  u32 a = r_edi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004561dc: jg 0x45631e */ if ((!fZ&&fS==fO)) goto L_0045631e;
L_004561e2:; BB(0x004561e2);
    /* 004561e2: movzx edx, byte ptr [0xa45644] */ r_edx = (u32)R8((u32)(0xa45644u));
    /* 004561e9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004561ec: jne 0x456204 */ if (!fZ) goto L_00456204;
L_004561ee:; BB(0x004561ee);
    /* 004561ee: mov dword ptr [0xa45648], 0x43e60000 */ W32((u32)(0xa45648u), 0x43e60000u);
    /* 004561f8: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004561fe: mov byte ptr [0xa45644], dl */ W8((u32)(0xa45644u), (u8)r_edx);
L_00456204:; BB(0x00456204);
    /* 00456204: fld dword ptr [0x8ffe9c] */ FPUSH(R_F32((u32)(0x8ffe9cu)));
    /* 0045620a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00456210: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00456212: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456214: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00456216: jle 0x456454 */ if ((fZ||fS!=fO)) goto L_00456454;
L_0045621c:; BB(0x0045621c);
    /* 0045621c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00456220: fldz  */ FPUSH(0.0);
    /* 00456222: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00456226: fldz  */ FPUSH(0.0);
    /* 00456228: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0045622c: fldz  */ FPUSH(0.0);
    /* 0045622e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00456232: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00456236: mov edi, eax */ r_edi = r_eax;
    /* 00456238: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
L_0045623c:; BB(0x0045623c);
    /* 0045623c: mov ebx, dword ptr [edi*4 + 0xaad720] */ r_ebx = R32((u32)(r_edi*4+0xaad720u));
    /* 00456243: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456245: je 0x4562ce */ if (fZ) goto L_004562ce;
L_0045624b:; BB(0x0045624b);
    /* 0045624b: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0045624f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456250: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x456255u); f_00453ab8();
    /* 00456255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456258: jne 0x456262 */ if (!fZ) goto L_00456262;
L_0045625a:; BB(0x0045625a);
    /* 0045625a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00456260: jmp 0x4562ce */ goto L_004562ce;
L_00456262:; BB(0x00456262);
    /* 00456262: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00456265: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045626d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00456270: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00456273: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00456276: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045627a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0045627d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045627e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045627f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x456284u); f_00836208();
    /* 00456284: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456287: fcom dword ptr [0xa45648] */ fx_compare(ST(0), R_F32((u32)(0xa45648u))); 
    /* 0045628d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045628f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456290: ja 0x4562c6 */ if ((!fC&&!fZ)) goto L_004562c6;
L_00456292:; BB(0x00456292);
    /* 00456292: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00456296: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456298: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456299: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045629f: jbe 0x4562c2 */ if ((fC||fZ)) goto L_004562c2;
L_004562a1:; BB(0x004562a1);
    /* 004562a1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004562a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004562a9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004562ab: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004562af: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004562b2: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004562b6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004562ba: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004562be: mov ebp, ebx */ r_ebp = r_ebx;
    /* 004562c0: jmp 0x4562ce */ goto L_004562ce;
L_004562c2:; BB(0x004562c2);
    /* 004562c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004562c4: jmp 0x4562ce */ goto L_004562ce;
L_004562c6:; BB(0x004562c6);
    /* 004562c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004562c8: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_004562ce:; BB(0x004562ce);
    /* 004562ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004562d1: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004562d3: jl 0x45623c */ if ((fS!=fO)) goto L_0045623c;
L_004562d9:; BB(0x004562d9);
    /* 004562d9: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004562dd: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 004562e1: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004562e5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004562e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004562eb: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004562ef: je 0x45638c */ if (fZ) goto L_0045638c;
L_004562f5:; BB(0x004562f5);
    /* 004562f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004562f7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004562fb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004562ff: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00456303:; BB(0x00456303);
    /* 00456303: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00456307: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456308: mov ecx, esi */ r_ecx = r_esi;
    /* 0045630a: call 0x45645c */ r_esp -= 4; W32(r_esp, 0x45630fu); f_0045645c();
    /* 0045630f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456310: mov ecx, esi */ r_ecx = r_esi;
    /* 00456312: call 0x4564c4 */ r_esp -= 4; W32(r_esp, 0x456317u); f_004564c4();
    /* 00456317: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045631a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045631b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045631c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045631d: ret  */ FN_RET(0x0045617c); r_esp += 4; return;
L_0045631e:; BB(0x0045631e);
    /* 0045631e: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 00456324: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456326: je 0x456377 */ if (fZ) goto L_00456377;
L_00456328:; BB(0x00456328);
    /* 00456328: mov ecx, dword ptr [esi + 0x3b0] */ r_ecx = R32((u32)(r_esi+0x3b0u));
    /* 0045632e: mov ebp, dword ptr [esi + 0x3a8] */ r_ebp = R32((u32)(r_esi+0x3a8u));
    /* 00456334: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00456337: and ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045633a: mov eax, ebp */ r_eax = r_ebp;
    /* 0045633c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045633f: or eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456342: shl ebp, 6 */ { u32 c = (6u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00456345: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456347: mov ebp, dword ptr [esi + 0x3b8] */ r_ebp = R32((u32)(r_esi+0x3b8u));
    /* 0045634d: mov esi, dword ptr [esi + 0x3bc] */ r_esi = R32((u32)(r_esi+0x3bcu));
    /* 00456353: mov edi, ecx */ r_edi = r_ecx;
    /* 00456355: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00456358: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045635a: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045635d: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045635f: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00456362: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00456365: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456367: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045636a: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045636d: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045636f: mov ecx, edx */ r_ecx = r_edx;
    /* 00456371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456372: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x456377u); f_0044cf88();
L_00456377:; BB(0x00456377);
    /* 00456377: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045637a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045637b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045637c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045637d: ret  */ FN_RET(0x0045617c); r_esp += 4; return;
L_0045637e:; BB(0x0045637e);
    /* 0045637e: mov ecx, esi */ r_ecx = r_esi;
    /* 00456380: call 0x455724 */ r_esp -= 4; W32(r_esp, 0x456385u); f_00455724();
    /* 00456385: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456389: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045638a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045638b: ret  */ FN_RET(0x0045617c); r_esp += 4; return;
L_0045638c:; BB(0x0045638c);
    /* 0045638c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0045638e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456390: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00456392:; BB(0x00456392);
    /* 00456392: mov ecx, esi */ r_ecx = r_esi;
    /* 00456394: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x456399u); f_007751b0();
    /* 00456399: fld dword ptr [0x8ffe98] */ FPUSH(R_F32((u32)(0x8ffe98u)));
    /* 0045639f: fsub dword ptr [0xa4564c] */ ST(0) = ST(0) - R_F32((u32)(0xa4564cu));
    /* 004563a5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004563a7: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004563ab: mov ecx, esi */ r_ecx = r_esi;
    /* 004563ad: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4563b2u); f_007751b0();
    /* 004563b2: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004563b6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004563b9: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004563bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004563be: fchs  */ ST(0) = -ST(0);
    /* 004563c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004563c2: fchs  */ ST(0) = -ST(0);
    /* 004563c4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004563c6: fmul qword ptr [0x8ffd88] */ ST(0) = ST(0) * R_F64((u32)(0x8ffd88u));
    /* 004563cc: fdiv qword ptr [0x8ffd80] */ ST(0) = ST(0) / R_F64((u32)(0x8ffd80u));
    /* 004563d2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004563d6: fmul dword ptr [0x8ffe94] */ ST(0) = ST(0) * R_F32((u32)(0x8ffe94u));
    /* 004563dc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004563e0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004563e5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004563ea: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004563ee: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004563f2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004563f6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004563fa: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004563fe: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00456402: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00456407: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045640c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00456410: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00456414: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00456418: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0045641c: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00456420: lea ebp, [edx + ebp - 0x6000] */ r_ebp = (u32)(r_edx+r_ebp+0xffffa000u);
    /* 00456427: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456429: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45642eu); f_0082dcbc();
    /* 0045642e: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00456432: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00456436: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456438: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00456440: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x456445u); f_0082ddd8();
    /* 00456445: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00456449: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045644b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0045644f: jmp 0x456303 */ goto L_00456303;
L_00456454:; BB(0x00456454);
    /* 00456454: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456456: jmp 0x456392 */ goto L_00456392;
}

void f_0045645c(void) /* sub_45645C */
{
    FN_ENTER(0x0045645c);
    /* 0045645c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045645f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00456463: fld dword ptr [0x8ffe90] */ FPUSH(R_F32((u32)(0x8ffe90u)));
    /* 00456469: fmul dword ptr [0xa45650] */ ST(0) = ST(0) * R_F32((u32)(0xa45650u));
    /* 0045646f: fld dword ptr [0xa4564c] */ FPUSH(R_F32((u32)(0xa4564cu)));
    /* 00456475: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00456477: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00456479: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0045647b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045647e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00456482: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456487: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045648b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045648f: fistp dword ptr [ecx + 0x3b8] */ W32((u32)(r_ecx+0x3b8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00456495: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00456498: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0045649b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0045649d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045649f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004564a2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004564a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004564ab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004564af: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004564b3: fistp dword ptr [ecx + 0x3bc] */ W32((u32)(r_ecx+0x3bcu), (u32)fx_int32(ST(0))); FPOP();
    /* 004564b9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004564bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004564bf: ret 4 */ FN_RET(0x0045645c); r_esp += 8; return;
}

void f_004564c4(void) /* sub_4564C4 */
{
    FN_ENTER(0x004564c4);
    /* 004564c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004564c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004564c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004564c7: mov ebx, dword ptr [ecx + 0x394] */ r_ebx = R32((u32)(r_ecx+0x394u));
    /* 004564cd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004564cf: je 0x456526 */ if (fZ) goto L_00456526;
L_004564d1:; BB(0x004564d1);
    /* 004564d1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004564d5: mov edi, dword ptr [ecx + 0x3a8] */ r_edi = R32((u32)(r_ecx+0x3a8u));
    /* 004564db: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 004564e1: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004564e4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004564e7: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004564ea: mov esi, edi */ r_esi = r_edi;
    /* 004564ec: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004564ef: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004564f1: shl edi, 6 */ { u32 c = (6u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004564f4: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004564f6: mov esi, edx */ r_esi = r_edx;
    /* 004564f8: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004564fb: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004564fd: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00456500: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456502: mov edx, dword ptr [ecx + 0x3b8] */ r_edx = R32((u32)(r_ecx+0x3b8u));
    /* 00456508: mov ecx, dword ptr [ecx + 0x3bc] */ r_ecx = R32((u32)(r_ecx+0x3bcu));
    /* 0045650e: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00456511: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00456514: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456516: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00456519: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045651c: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045651e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045651f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456521: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x456526u); f_0044cf88();
L_00456526:; BB(0x00456526);
    /* 00456526: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00456527: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456528: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456529: ret 4 */ FN_RET(0x004564c4); r_esp += 8; return;
}

void f_0045652c(void) /* sub_45652C */
{
    FN_ENTER(0x0045652c);
    /* 0045652c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045652d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456530: mov esi, ecx */ r_esi = r_ecx;
    /* 00456532: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 00456538: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045653b: je 0x4565d3 */ if (fZ) goto L_004565d3;
L_00456541:; BB(0x00456541);
    /* 00456541: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456544: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0045654a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045654c: jl 0x456553 */ if ((fS!=fO)) goto L_00456553;
L_0045654e:; BB(0x0045654e);
    /* 0045654e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456551: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456552: ret  */ FN_RET(0x0045652c); r_esp += 4; return;
L_00456553:; BB(0x00456553);
    /* 00456553: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0045655d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00456560: lea edx, [esi + 0x420] */ r_edx = (u32)(r_esi+0x420u);
    /* 00456566: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045656a: lea eax, [esi + 0x434] */ r_eax = (u32)(r_esi+0x434u);
    /* 00456570: mov ebp, eax */ r_ebp = r_eax;
    /* 00456572: mov edi, edx */ r_edi = r_edx;
L_00456574:; BB(0x00456574);
    /* 00456574: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00456576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456578: je 0x456587 */ if (fZ) goto L_00456587;
L_0045657a:; BB(0x0045657a);
    /* 0045657a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045657b: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456580u); f_005cdcc0();
    /* 00456580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456581: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00456587:; BB(0x00456587);
    /* 00456587: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045658a: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045658c: ja 0x456574 */ if ((!fC&&!fZ)) goto L_00456574;
L_0045658e:; BB(0x0045658e);
    /* 0045658e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00456591: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00456595: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045659b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045659e: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 004565a5: mov dword ptr [esi + 0x3d8], 5 */ W32((u32)(r_esi+0x3d8u), 0x5u);
    /* 004565af: mov ecx, esi */ r_ecx = r_esi;
    /* 004565b1: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x4565b6u); f_00454804();
    /* 004565b6: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 004565bc: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004565bf: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 004565c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004565c8: je 0x4565ce */ if (fZ) goto L_004565ce;
L_004565ca:; BB(0x004565ca);
    /* 004565ca: mov ecx, esi */ r_ecx = r_esi;
    /* 004565cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4565ceu); call_ind(t); }
L_004565ce:; BB(0x004565ce);
    /* 004565ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004565d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004565d2: ret  */ FN_RET(0x0045652c); r_esp += 4; return;
L_004565d3:; BB(0x004565d3);
    /* 004565d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004565d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004565d7: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 004565dd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004565e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004565e2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004565e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004565e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004565e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004565ea: lea eax, [esi + edx + 0x44c] */ r_eax = (u32)(r_esi+r_edx+0x44cu);
    /* 004565f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004565f2: push 0x36e */ { u32 v = 0x36eu; r_esp -= 4; W32(r_esp, v); }
    /* 004565f7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4565fcu); f_00814298();
    /* 004565fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004565ff: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 00456605: jmp 0x456541 */ goto L_00456541;
}

void f_0045660c(void) /* sub_45660C */
{
    FN_ENTER(0x0045660c);
    /* 0045660c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045660d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045660e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045660f: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456612: mov esi, ecx */ r_esi = r_ecx;
    /* 00456614: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0045661a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045661c: jne 0x45677b */ if (!fZ) goto L_0045677b;
L_00456622:; BB(0x00456622);
    /* 00456622: mov ecx, esi */ r_ecx = r_esi;
    /* 00456624: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x456629u); f_007751b0();
    /* 00456629: fcomp qword ptr [0x8ffd78] */ fx_compare(ST(0), R_F64((u32)(0x8ffd78u))); FPOP();
    /* 0045662f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456631: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456632: jb 0x456782 */ if (fC) goto L_00456782;
L_00456638:; BB(0x00456638);
    /* 00456638: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045663e: mov edi, 8 */ r_edi = 0x8u;
    /* 00456643: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456646: jne 0x45664d */ if (!fZ) goto L_0045664d;
L_00456648:; BB(0x00456648);
    /* 00456648: mov edi, 9 */ r_edi = 0x9u;
L_0045664d:; BB(0x0045664d);
    /* 0045664d: movzx eax, byte ptr [0xa45644] */ r_eax = (u32)R8((u32)(0xa45644u));
    /* 00456654: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00456656: jne 0x45666c */ if (!fZ) goto L_0045666c;
L_00456658:; BB(0x00456658);
    /* 00456658: mov dword ptr [0xa45648], 0x43e60000 */ W32((u32)(0xa45648u), 0x43e60000u);
    /* 00456662: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456667: mov byte ptr [0xa45644], al */ W8((u32)(0xa45644u), (u8)r_eax);
L_0045666c:; BB(0x0045666c);
    /* 0045666c: fld dword ptr [0x8ffe88] */ FPUSH(R_F32((u32)(0x8ffe88u)));
    /* 00456672: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00456678: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0045667a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045667c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045667e: jle 0x456858 */ if ((fZ||fS!=fO)) goto L_00456858;
L_00456684:; BB(0x00456684);
    /* 00456684: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00456688: fldz  */ FPUSH(0.0);
    /* 0045668a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0045668e: fldz  */ FPUSH(0.0);
    /* 00456690: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00456694: fldz  */ FPUSH(0.0);
    /* 00456696: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0045669a: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0045669e: mov edi, eax */ r_edi = r_eax;
    /* 004566a0: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
L_004566a4:; BB(0x004566a4);
    /* 004566a4: mov ebx, dword ptr [edi*4 + 0xaad720] */ r_ebx = R32((u32)(r_edi*4+0xaad720u));
    /* 004566ab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004566ad: je 0x456736 */ if (fZ) goto L_00456736;
L_004566b3:; BB(0x004566b3);
    /* 004566b3: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004566b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004566b8: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x4566bdu); f_00453ab8();
    /* 004566bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004566be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004566c0: jne 0x4566ca */ if (!fZ) goto L_004566ca;
L_004566c2:; BB(0x004566c2);
    /* 004566c2: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004566c8: jmp 0x456736 */ goto L_00456736;
L_004566ca:; BB(0x004566ca);
    /* 004566ca: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004566cd: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004566d5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004566d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004566db: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004566de: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004566e2: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004566e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004566e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004566e7: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4566ecu); f_00836208();
    /* 004566ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004566ef: fcom dword ptr [0xa45648] */ fx_compare(ST(0), R_F32((u32)(0xa45648u))); 
    /* 004566f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004566f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004566f8: ja 0x45672e */ if ((!fC&&!fZ)) goto L_0045672e;
L_004566fa:; BB(0x004566fa);
    /* 004566fa: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 004566fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456700: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456701: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00456707: jbe 0x45672a */ if ((fC||fZ)) goto L_0045672a;
L_00456709:; BB(0x00456709);
    /* 00456709: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045670d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00456711: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00456713: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00456717: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045671a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0045671e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00456722: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00456726: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00456728: jmp 0x456736 */ goto L_00456736;
L_0045672a:; BB(0x0045672a);
    /* 0045672a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045672c: jmp 0x456736 */ goto L_00456736;
L_0045672e:; BB(0x0045672e);
    /* 0045672e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456730: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00456736:; BB(0x00456736);
    /* 00456736: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00456739: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045673b: jl 0x4566a4 */ if ((fS!=fO)) goto L_004566a4;
L_00456741:; BB(0x00456741);
    /* 00456741: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00456745: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00456749: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0045674d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00456751: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456753: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00456757: je 0x456790 */ if (fZ) goto L_00456790;
L_00456759:; BB(0x00456759);
    /* 00456759: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045675b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045675f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00456763: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00456767:; BB(0x00456767);
    /* 00456767: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0045676b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045676c: mov ecx, esi */ r_ecx = r_esi;
    /* 0045676e: call 0x45645c */ r_esp -= 4; W32(r_esp, 0x456773u); f_0045645c();
    /* 00456773: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456774: mov ecx, esi */ r_ecx = r_esi;
    /* 00456776: call 0x4564c4 */ r_esp -= 4; W32(r_esp, 0x45677bu); f_004564c4();
L_0045677b:; BB(0x0045677b);
    /* 0045677b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045677e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045677f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456780: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456781: ret  */ FN_RET(0x0045660c); r_esp += 4; return;
L_00456782:; BB(0x00456782);
    /* 00456782: mov ecx, esi */ r_ecx = r_esi;
    /* 00456784: call 0x455a34 */ r_esp -= 4; W32(r_esp, 0x456789u); f_00455a34();
    /* 00456789: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045678c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045678d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045678e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045678f: ret  */ FN_RET(0x0045660c); r_esp += 4; return;
L_00456790:; BB(0x00456790);
    /* 00456790: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00456792: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456794: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00456796:; BB(0x00456796);
    /* 00456796: mov ecx, esi */ r_ecx = r_esi;
    /* 00456798: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45679du); f_007751b0();
    /* 0045679d: fld dword ptr [0x8ffe84] */ FPUSH(R_F32((u32)(0x8ffe84u)));
    /* 004567a3: fsub dword ptr [0xa4564c] */ ST(0) = ST(0) - R_F32((u32)(0xa4564cu));
    /* 004567a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004567ab: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004567af: mov ecx, esi */ r_ecx = r_esi;
    /* 004567b1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4567b6u); f_007751b0();
    /* 004567b6: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004567ba: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004567bd: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004567c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004567c2: fchs  */ ST(0) = -ST(0);
    /* 004567c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004567c6: fchs  */ ST(0) = -ST(0);
    /* 004567c8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004567ca: fmul qword ptr [0x8ffd70] */ ST(0) = ST(0) * R_F64((u32)(0x8ffd70u));
    /* 004567d0: fdiv qword ptr [0x8ffd68] */ ST(0) = ST(0) / R_F64((u32)(0x8ffd68u));
    /* 004567d6: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004567da: fmul dword ptr [0x8ffe80] */ ST(0) = ST(0) * R_F32((u32)(0x8ffe80u));
    /* 004567e0: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004567e4: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004567e9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004567ee: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004567f2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004567f6: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004567fa: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004567fe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00456802: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00456806: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0045680b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00456810: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00456814: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00456818: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045681c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00456820: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00456824: lea ebp, [edx + eax - 0x6000] */ r_ebp = (u32)(r_edx+r_eax+0xffffa000u);
    /* 0045682b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045682d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x456832u); f_0082dcbc();
    /* 00456832: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00456836: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045683a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045683c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00456844: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x456849u); f_0082ddd8();
    /* 00456849: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0045684d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045684f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00456853: jmp 0x456767 */ goto L_00456767;
L_00456858:; BB(0x00456858);
    /* 00456858: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045685a: jmp 0x456796 */ goto L_00456796;
}

void f_00456860(void) /* sub_456860 */
{
    FN_ENTER(0x00456860);
    /* 00456860: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456861: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456862: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00456863: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00456865: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 0045686b: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00456871: lea edi, [edx - 8] */ r_edi = (u32)(r_edx+0xfffffff8u);
    /* 00456874: lea eax, [edx + edx - 0x10] */ r_eax = (u32)(r_edx+r_edx+0xfffffff0u);
    /* 00456878: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045687a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0045687d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045687f: fcom dword ptr [0x8ffccc] */ fx_compare(ST(0), R_F32((u32)(0x8ffcccu))); 
    /* 00456885: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456887: lea ebp, [ebx + edx + 0x48c] */ r_ebp = (u32)(r_ebx+r_edx+0x48cu);
    /* 0045688e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045688f: jbe 0x4568c6 */ if ((fC||fZ)) goto L_004568c6;
L_00456891:; BB(0x00456891);
    /* 00456891: mov eax, dword ptr [ebx + 0x420] */ r_eax = R32((u32)(r_ebx+0x420u));
    /* 00456897: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456899: je 0x4568bc */ if (fZ) goto L_004568bc;
L_0045689b:; BB(0x0045689b);
    /* 0045689b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045689d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045689e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4568a3u); f_005cdcc0();
    /* 004568a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004568a4: fld dword ptr [0x8ffcc8] */ FPUSH(R_F32((u32)(0x8ffcc8u)));
    /* 004568aa: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 004568b0: mov dword ptr [ebx + 0x420], 0 */ W32((u32)(r_ebx+0x420u), 0x0u);
    /* 004568ba: jmp 0x4568e3 */ goto L_004568e3;
L_004568bc:; BB(0x004568bc);
    /* 004568bc: fld dword ptr [0x8ffcc8] */ FPUSH(R_F32((u32)(0x8ffcc8u)));
    /* 004568c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004568c4: jmp 0x4568e3 */ goto L_004568e3;
L_004568c6:; BB(0x004568c6);
    /* 004568c6: fld dword ptr [0x8ffcc8] */ FPUSH(R_F32((u32)(0x8ffcc8u)));
    /* 004568cc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004568ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004568d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004568d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004568d3: ja 0x4568e3 */ if ((!fC&&!fZ)) goto L_004568e3;
L_004568d5:; BB(0x004568d5);
    /* 004568d5: mov eax, dword ptr [ebx + 0x420] */ r_eax = R32((u32)(r_ebx+0x420u));
    /* 004568db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004568dd: je 0x4569f4 */ if (fZ) goto L_004569f4;
L_004568e3:; BB(0x004568e3);
    /* 004568e3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004568e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004568e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004568e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004568eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004568ec: jb 0x456911 */ if (fC) goto L_00456911;
L_004568ee:; BB(0x004568ee);
    /* 004568ee: fcomp dword ptr [0x8ffccc] */ fx_compare(ST(0), R_F32((u32)(0x8ffcccu))); FPOP();
    /* 004568f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004568f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004568f7: ja 0x456913 */ if ((!fC&&!fZ)) goto L_00456913;
L_004568f9:; BB(0x004568f9);
    /* 004568f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004568fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004568fd: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00456900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456901: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00456902: push 0x36f */ { u32 v = 0x36fu; r_esp -= 4; W32(r_esp, v); }
    /* 00456907: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x45690cu); f_008144b0();
    /* 0045690c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045690f: jmp 0x456913 */ goto L_00456913;
L_00456911:; BB(0x00456911);
    /* 00456911: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00456913:; BB(0x00456913);
    /* 00456913: movzx eax, byte ptr [0xa4525c] */ r_eax = (u32)R8((u32)(0xa4525cu));
    /* 0045691a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045691c: jne 0x456930 */ if (!fZ) goto L_00456930;
L_0045691e:; BB(0x0045691e);
    /* 0045691e: mov dword ptr [0xa45260], 0x25 */ W32((u32)(0xa45260u), 0x25u);
    /* 00456928: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045692b: mov byte ptr [0xa4525c], al */ W8((u32)(0xa4525cu), (u8)r_eax);
L_00456930:; BB(0x00456930);
    /* 00456930: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00456932: jne 0x456950 */ if (!fZ) goto L_00456950;
L_00456934:; BB(0x00456934);
    /* 00456934: mov edx, dword ptr [0xa45654] */ r_edx = R32((u32)(0xa45654u));
    /* 0045693a: sub edx, dword ptr [0xa45260] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45260u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00456940: mov dword ptr [0xa45264], edx */ W32((u32)(0xa45264u), r_edx);
    /* 00456946: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045694b: mov byte ptr [0xa4525c], al */ W8((u32)(0xa4525cu), (u8)r_eax);
L_00456950:; BB(0x00456950);
    /* 00456950: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 00456956: cmp eax, dword ptr [0xa45264] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa45264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045695c: jne 0x4569e3 */ if (!fZ) goto L_004569e3;
L_00456962:; BB(0x00456962);
    /* 00456962: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00456967: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456968: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45696du); f_0050b510();
    /* 0045696d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456972: je 0x45697d */ if (fZ) goto L_0045697d;
L_00456974:; BB(0x00456974);
    /* 00456974: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456976: mov ecx, eax */ r_ecx = r_eax;
    /* 00456978: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45697du); f_00508efc();
L_0045697d:; BB(0x0045697d);
    /* 0045697d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045697f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456981: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00456984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456985: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0045698a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45698fu); f_00814298();
    /* 0045698f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456992: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456994: jne 0x4569b3 */ if (!fZ) goto L_004569b3;
L_00456996:; BB(0x00456996);
    /* 00456996: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00456998: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45699du); f_0077a6cc();
    /* 0045699d: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004569a0: lea edx, [ebx + 0x3c0] */ r_edx = (u32)(r_ebx+0x3c0u);
    /* 004569a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004569a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004569a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004569a9: call 0x6ec8ec */ r_esp -= 4; W32(r_esp, 0x4569aeu); f_006ec8ec();
    /* 004569ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004569b1: jmp 0x4569ce */ goto L_004569ce;
L_004569b3:; BB(0x004569b3);
    /* 004569b3: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004569b5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4569bau); f_0077a6cc();
    /* 004569ba: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004569bd: lea edx, [ebx + 0x3c0] */ r_edx = (u32)(r_ebx+0x3c0u);
    /* 004569c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004569c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004569c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004569c6: call 0x6ed87c */ r_esp -= 4; W32(r_esp, 0x4569cbu); f_006ed87c();
    /* 004569cb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004569ce:; BB(0x004569ce);
    /* 004569ce: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004569d0: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004569d5: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4569dau); f_006ff5f8();
    /* 004569da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004569dd: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
L_004569e3:; BB(0x004569e3);
    /* 004569e3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004569e6: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 004569ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004569ee: jl 0x456a3b */ if ((fS!=fO)) goto L_00456a3b;
L_004569f0:; BB(0x004569f0);
    /* 004569f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004569f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004569f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004569f3: ret  */ FN_RET(0x00456860); r_esp += 4; return;
L_004569f4:; BB(0x004569f4);
    /* 004569f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004569f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004569f8: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 004569fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004569fe: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456a03u); f_00509590();
    /* 00456a03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456a06: mov dword ptr [ebx + 0x420], eax */ W32((u32)(r_ebx+0x420u), r_eax);
    /* 00456a0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a0e: je 0x456a2a */ if (fZ) goto L_00456a2a;
L_00456a10:; BB(0x00456a10);
    /* 00456a10: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456a12: mov ecx, eax */ r_ecx = r_eax;
    /* 00456a14: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456a19u); f_00508efc();
    /* 00456a19: fld dword ptr [0x8ffcc8] */ FPUSH(R_F32((u32)(0x8ffcc8u)));
    /* 00456a1f: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00456a25: jmp 0x4568e3 */ goto L_004568e3;
L_00456a2a:; BB(0x00456a2a);
    /* 00456a2a: fld dword ptr [0x8ffcc8] */ FPUSH(R_F32((u32)(0x8ffcc8u)));
    /* 00456a30: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00456a36: jmp 0x4568e3 */ goto L_004568e3;
L_00456a3b:; BB(0x00456a3b);
    /* 00456a3b: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 00456a45: lea edi, [ebx + 0x420] */ r_edi = (u32)(r_ebx+0x420u);
    /* 00456a4b: lea ebp, [ebx + 0x434] */ r_ebp = (u32)(r_ebx+0x434u);
L_00456a51:; BB(0x00456a51);
    /* 00456a51: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00456a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a55: je 0x456a64 */ if (fZ) goto L_00456a64;
L_00456a57:; BB(0x00456a57);
    /* 00456a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456a58: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456a5du); f_005cdcc0();
    /* 00456a5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456a5e: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00456a64:; BB(0x00456a64);
    /* 00456a64: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00456a67: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00456a69: ja 0x456a51 */ if ((!fC&&!fZ)) goto L_00456a51;
L_00456a6b:; BB(0x00456a6b);
    /* 00456a6b: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00456a71: mov dword ptr [ebx + 0x3d8], 5 */ W32((u32)(r_ebx+0x3d8u), 0x5u);
    /* 00456a7b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456a7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456a80: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 00456a87: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x456a8cu); f_00454804();
    /* 00456a8c: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00456a92: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456a95: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 00456a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00456a9e: je 0x456aa4 */ if (fZ) goto L_00456aa4;
L_00456aa0:; BB(0x00456aa0);
    /* 00456aa0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456aa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x456aa4u); call_ind(t); }
L_00456aa4:; BB(0x00456aa4);
    /* 00456aa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00456aa5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456aa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456aa7: ret  */ FN_RET(0x00456860); r_esp += 4; return;
}

void f_00456aa8(void)
{
    FN_ENTER(0x00456aa8);
    /* 00456aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456aa9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00456aab: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00456ab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00456ab3: jne 0x456ad7 */ if (!fZ) goto L_00456ad7;
L_00456ab5:; BB(0x00456ab5);
    /* 00456ab5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456ab7: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x456abcu); f_007751b0();
    /* 00456abc: fcomp dword ptr [0x8ffe7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffe7cu))); FPOP();
    /* 00456ac2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456ac4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456ac5: jae 0x456ad0 */ if (!fC) goto L_00456ad0;
L_00456ac7:; BB(0x00456ac7);
    /* 00456ac7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456ac9: call 0x45617c */ r_esp -= 4; W32(r_esp, 0x456aceu); f_0045617c();
    /* 00456ace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456acf: ret  */ FN_RET(0x00456aa8); r_esp += 4; return;
L_00456ad0:; BB(0x00456ad0);
    /* 00456ad0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456ad2: call 0x455a34 */ r_esp -= 4; W32(r_esp, 0x456ad7u); f_00455a34();
L_00456ad7:; BB(0x00456ad7);
    /* 00456ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456ad8: ret  */ FN_RET(0x00456aa8); r_esp += 4; return;
}

void f_00456adc(void) /* sub_456ADC */
{
    FN_ENTER(0x00456adc);
    /* 00456adc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456add: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456ade: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456adf: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456ae2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00456ae4: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00456aea: lea edi, [ebp + 0x48c] */ r_edi = (u32)(r_ebp+0x48cu);
    /* 00456af0: lea esi, [ebp + 0x498] */ r_esi = (u32)(r_ebp+0x498u);
    /* 00456af6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456af9: je 0x456fc2 */ if (fZ) goto L_00456fc2;
L_00456aff:; BB(0x00456aff);
    /* 00456aff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b02: je 0x456e6c */ if (fZ) goto L_00456e6c;
L_00456b08:; BB(0x00456b08);
    /* 00456b08: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 00456b0e: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b11: je 0x456d61 */ if (fZ) goto L_00456d61;
L_00456b17:; BB(0x00456b17);
    /* 00456b17: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b1a: je 0x456baa */ if (fZ) goto L_00456baa;
L_00456b20:; BB(0x00456b20);
    /* 00456b20: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00456b26: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456b29: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00456b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00456b31: jl 0x456b3a */ if ((fS!=fO)) goto L_00456b3a;
L_00456b33:; BB(0x00456b33);
    /* 00456b33: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456b37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456b38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456b39: ret  */ FN_RET(0x00456adc); r_esp += 4; return;
L_00456b3a:; BB(0x00456b3a);
    /* 00456b3a: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 00456b44: lea edi, [ebp + 0x420] */ r_edi = (u32)(r_ebp+0x420u);
    /* 00456b4a: lea esi, [ebp + 0x434] */ r_esi = (u32)(r_ebp+0x434u);
L_00456b50:; BB(0x00456b50);
    /* 00456b50: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00456b52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b54: je 0x456b63 */ if (fZ) goto L_00456b63;
L_00456b56:; BB(0x00456b56);
    /* 00456b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456b57: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456b5cu); f_005cdcc0();
    /* 00456b5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456b5d: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00456b63:; BB(0x00456b63);
    /* 00456b63: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00456b66: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00456b68: ja 0x456b50 */ if ((!fC&&!fZ)) goto L_00456b50;
L_00456b6a:; BB(0x00456b6a);
    /* 00456b6a: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00456b70: mov dword ptr [ebp + 0x3d8], 5 */ W32((u32)(r_ebp+0x3d8u), 0x5u);
    /* 00456b7a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456b7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456b7f: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 00456b86: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x456b8bu); f_00454804();
    /* 00456b8b: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00456b91: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456b94: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 00456b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b9d: je 0x456ba3 */ if (fZ) goto L_00456ba3;
L_00456b9f:; BB(0x00456b9f);
    /* 00456b9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00456ba1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x456ba3u); call_ind(t); }
L_00456ba3:; BB(0x00456ba3);
    /* 00456ba3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456ba7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00456ba8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456ba9: ret  */ FN_RET(0x00456adc); r_esp += 4; return;
L_00456baa:; BB(0x00456baa);
    /* 00456baa: fld dword ptr [ebp + 0x3f0] */ FPUSH(R_F32((u32)(r_ebp+0x3f0u)));
    /* 00456bb0: fcom dword ptr [0x8ffcd4] */ fx_compare(ST(0), R_F32((u32)(0x8ffcd4u))); 
    /* 00456bb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456bb8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456bb9: jbe 0x456c2b */ if ((fC||fZ)) goto L_00456c2b;
L_00456bbb:; BB(0x00456bbb);
    /* 00456bbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456bbd: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 00456bc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456bc5: je 0x456bd8 */ if (fZ) goto L_00456bd8;
L_00456bc7:; BB(0x00456bc7);
    /* 00456bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456bc8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456bcdu); f_005cdcc0();
    /* 00456bcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456bce: mov dword ptr [ebp + 0x424], 0 */ W32((u32)(r_ebp+0x424u), 0x0u);
L_00456bd8:; BB(0x00456bd8);
    /* 00456bd8: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 00456bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456be0: je 0x456bf3 */ if (fZ) goto L_00456bf3;
L_00456be2:; BB(0x00456be2);
    /* 00456be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456be3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456be8u); f_005cdcc0();
    /* 00456be8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456be9: mov dword ptr [ebp + 0x428], 0 */ W32((u32)(r_ebp+0x428u), 0x0u);
L_00456bf3:; BB(0x00456bf3);
    /* 00456bf3: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00456bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456bfb: je 0x456c0e */ if (fZ) goto L_00456c0e;
L_00456bfd:; BB(0x00456bfd);
    /* 00456bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456bfe: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456c03u); f_005cdcc0();
    /* 00456c03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456c04: mov dword ptr [ebp + 0x42c], 0 */ W32((u32)(r_ebp+0x42cu), 0x0u);
L_00456c0e:; BB(0x00456c0e);
    /* 00456c0e: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 00456c14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c16: je 0x456c66 */ if (fZ) goto L_00456c66;
L_00456c18:; BB(0x00456c18);
    /* 00456c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456c19: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456c1eu); f_005cdcc0();
    /* 00456c1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456c1f: mov dword ptr [ebp + 0x430], 0 */ W32((u32)(r_ebp+0x430u), 0x0u);
    /* 00456c29: jmp 0x456c66 */ goto L_00456c66;
L_00456c2b:; BB(0x00456c2b);
    /* 00456c2b: fcomp dword ptr [0x8ffcd0] */ fx_compare(ST(0), R_F32((u32)(0x8ffcd0u))); FPOP();
    /* 00456c31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456c33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456c34: jb 0x456c66 */ if (fC) goto L_00456c66;
L_00456c36:; BB(0x00456c36);
    /* 00456c36: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 00456c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c3e: je 0x456d26 */ if (fZ) goto L_00456d26;
L_00456c44:; BB(0x00456c44);
    /* 00456c44: mov eax, dword ptr [ebp + 0x428] */ r_eax = R32((u32)(r_ebp+0x428u));
    /* 00456c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c4c: je 0x456cfc */ if (fZ) goto L_00456cfc;
L_00456c52:; BB(0x00456c52);
    /* 00456c52: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00456c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c5a: je 0x456cd2 */ if (fZ) goto L_00456cd2;
L_00456c5c:; BB(0x00456c5c);
    /* 00456c5c: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 00456c62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c64: je 0x456caf */ if (fZ) goto L_00456caf;
L_00456c66:; BB(0x00456c66);
    /* 00456c66: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456c6c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c6e: je 0x456c76 */ if (fZ) goto L_00456c76;
L_00456c70:; BB(0x00456c70);
    /* 00456c70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456c71: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456c76u); f_00508db8();
L_00456c76:; BB(0x00456c76);
    /* 00456c76: mov ecx, dword ptr [ebp + 0x428] */ r_ecx = R32((u32)(r_ebp+0x428u));
    /* 00456c7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c7e: je 0x456c86 */ if (fZ) goto L_00456c86;
L_00456c80:; BB(0x00456c80);
    /* 00456c80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456c81: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456c86u); f_00508db8();
L_00456c86:; BB(0x00456c86);
    /* 00456c86: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 00456c8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c8e: je 0x456c96 */ if (fZ) goto L_00456c96;
L_00456c90:; BB(0x00456c90);
    /* 00456c90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456c91: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456c96u); f_00508db8();
L_00456c96:; BB(0x00456c96);
    /* 00456c96: mov ecx, dword ptr [ebp + 0x430] */ r_ecx = R32((u32)(r_ebp+0x430u));
    /* 00456c9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c9e: je 0x456b20 */ if (fZ) goto L_00456b20;
L_00456ca4:; BB(0x00456ca4);
    /* 00456ca4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456ca5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456caau); f_00508db8();
    /* 00456caa: jmp 0x456b20 */ goto L_00456b20;
L_00456caf:; BB(0x00456caf);
    /* 00456caf: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 00456cb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456cb5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456cbau); f_00509590();
    /* 00456cba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456cbd: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 00456cc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456cc5: je 0x456c66 */ if (fZ) goto L_00456c66;
L_00456cc7:; BB(0x00456cc7);
    /* 00456cc7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456cc9: mov ecx, eax */ r_ecx = r_eax;
    /* 00456ccb: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456cd0u); f_00508efc();
    /* 00456cd0: jmp 0x456c66 */ goto L_00456c66;
L_00456cd2:; BB(0x00456cd2);
    /* 00456cd2: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 00456cd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456cd8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456cddu); f_00509590();
    /* 00456cdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456ce0: mov dword ptr [ebp + 0x42c], eax */ W32((u32)(r_ebp+0x42cu), r_eax);
    /* 00456ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ce8: je 0x456c5c */ if (fZ) goto L_00456c5c;
L_00456cee:; BB(0x00456cee);
    /* 00456cee: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456cf0: mov ecx, eax */ r_ecx = r_eax;
    /* 00456cf2: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456cf7u); f_00508efc();
    /* 00456cf7: jmp 0x456c5c */ goto L_00456c5c;
L_00456cfc:; BB(0x00456cfc);
    /* 00456cfc: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 00456d01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456d02: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456d07u); f_00509590();
    /* 00456d07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456d0a: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 00456d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d12: je 0x456c52 */ if (fZ) goto L_00456c52;
L_00456d18:; BB(0x00456d18);
    /* 00456d18: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00456d1c: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456d21u); f_00508efc();
    /* 00456d21: jmp 0x456c52 */ goto L_00456c52;
L_00456d26:; BB(0x00456d26);
    /* 00456d26: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 00456d2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456d2c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456d31u); f_00509590();
    /* 00456d31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456d34: mov dword ptr [ebp + 0x424], eax */ W32((u32)(r_ebp+0x424u), r_eax);
    /* 00456d3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d3c: je 0x456d47 */ if (fZ) goto L_00456d47;
L_00456d3e:; BB(0x00456d3e);
    /* 00456d3e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d40: mov ecx, eax */ r_ecx = r_eax;
    /* 00456d42: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456d47u); f_00508efc();
L_00456d47:; BB(0x00456d47);
    /* 00456d47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d4b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00456d4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456d4f: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 00456d54: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x456d59u); f_00814298();
    /* 00456d59: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456d5c: jmp 0x456c44 */ goto L_00456c44;
L_00456d61:; BB(0x00456d61);
    /* 00456d61: fld dword ptr [ebp + 0x3f0] */ FPUSH(R_F32((u32)(r_ebp+0x3f0u)));
    /* 00456d67: fcom dword ptr [0x8ffcdc] */ fx_compare(ST(0), R_F32((u32)(0x8ffcdcu))); 
    /* 00456d6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456d6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456d70: jbe 0x456db4 */ if ((fC||fZ)) goto L_00456db4;
L_00456d72:; BB(0x00456d72);
    /* 00456d72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456d74: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d7c: je 0x456d91 */ if (fZ) goto L_00456d91;
L_00456d7e:; BB(0x00456d7e);
    /* 00456d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d7f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456d84u); f_005cdcc0();
    /* 00456d84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456d85: mov dword ptr [ebp + 0x424], 0 */ W32((u32)(r_ebp+0x424u), 0x0u);
    /* 00456d8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00456d91:; BB(0x00456d91);
    /* 00456d91: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00456d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d99: je 0x456de1 */ if (fZ) goto L_00456de1;
L_00456d9b:; BB(0x00456d9b);
    /* 00456d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456d9c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456da1u); f_005cdcc0();
    /* 00456da1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456da2: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456da8: mov dword ptr [ebp + 0x42c], 0 */ W32((u32)(r_ebp+0x42cu), 0x0u);
    /* 00456db2: jmp 0x456de1 */ goto L_00456de1;
L_00456db4:; BB(0x00456db4);
    /* 00456db4: fcomp dword ptr [0x8ffcd8] */ fx_compare(ST(0), R_F32((u32)(0x8ffcd8u))); FPOP();
    /* 00456dba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456dbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456dbd: jb 0x456ddb */ if (fC) goto L_00456ddb;
L_00456dbf:; BB(0x00456dbf);
    /* 00456dbf: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 00456dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456dc7: je 0x456e42 */ if (fZ) goto L_00456e42;
L_00456dc9:; BB(0x00456dc9);
    /* 00456dc9: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00456dcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456dd1: je 0x456e11 */ if (fZ) goto L_00456e11;
L_00456dd3:; BB(0x00456dd3);
    /* 00456dd3: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456dd9: jmp 0x456de1 */ goto L_00456de1;
L_00456ddb:; BB(0x00456ddb);
    /* 00456ddb: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
L_00456de1:; BB(0x00456de1);
    /* 00456de1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456de3: je 0x456deb */ if (fZ) goto L_00456deb;
L_00456de5:; BB(0x00456de5);
    /* 00456de5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456de6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456debu); f_00508db8();
L_00456deb:; BB(0x00456deb);
    /* 00456deb: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 00456df1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456df3: je 0x456e06 */ if (fZ) goto L_00456e06;
L_00456df5:; BB(0x00456df5);
    /* 00456df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456df6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x456dfbu); f_00508db8();
    /* 00456dfb: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 00456e01: jmp 0x456b17 */ goto L_00456b17;
L_00456e06:; BB(0x00456e06);
    /* 00456e06: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 00456e0c: jmp 0x456b17 */ goto L_00456b17;
L_00456e11:; BB(0x00456e11);
    /* 00456e11: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456e17: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456e1cu); f_00509590();
    /* 00456e1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456e1f: mov dword ptr [ebp + 0x42c], eax */ W32((u32)(r_ebp+0x42cu), r_eax);
    /* 00456e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456e27: je 0x456e3a */ if (fZ) goto L_00456e3a;
L_00456e29:; BB(0x00456e29);
    /* 00456e29: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00456e2d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456e32u); f_00508efc();
    /* 00456e32: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456e38: jmp 0x456de1 */ goto L_00456de1;
L_00456e3a:; BB(0x00456e3a);
    /* 00456e3a: mov ecx, dword ptr [ebp + 0x424] */ r_ecx = R32((u32)(r_ebp+0x424u));
    /* 00456e40: jmp 0x456de1 */ goto L_00456de1;
L_00456e42:; BB(0x00456e42);
    /* 00456e42: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456e48: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x456e4du); f_00509590();
    /* 00456e4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456e50: mov dword ptr [ebp + 0x424], eax */ W32((u32)(r_ebp+0x424u), r_eax);
    /* 00456e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456e58: je 0x456dc9 */ if (fZ) goto L_00456dc9;
L_00456e5e:; BB(0x00456e5e);
    /* 00456e5e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e60: mov ecx, eax */ r_ecx = r_eax;
    /* 00456e62: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456e67u); f_00508efc();
    /* 00456e67: jmp 0x456dc9 */ goto L_00456dc9;
L_00456e6c:; BB(0x00456e6c);
    /* 00456e6c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00456e6e: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x456e73u); f_0077a6cc();
    /* 00456e73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456e74: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00456e77: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00456e7b: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 00456e80: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00456e83: mov ebp, edx */ r_ebp = r_edx;
    /* 00456e85: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00456e89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456e8b: mov ebx, eax */ r_ebx = r_eax;
L_00456e8d:; BB(0x00456e8d);
    /* 00456e8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456e8f: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00456e92: push dword ptr [ecx*4 + 0x9a6184] */ { u32 v = R32((u32)(r_ecx*4+0x9a6184u)); r_esp -= 4; W32(r_esp, v); }
    /* 00456e99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456e9a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x456e9fu); f_0050b510();
    /* 00456e9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ea4: je 0x456eaf */ if (fZ) goto L_00456eaf;
L_00456ea6:; BB(0x00456ea6);
    /* 00456ea6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00456ea8: mov ecx, eax */ r_ecx = r_eax;
    /* 00456eaa: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x456eafu); f_00508efc();
L_00456eaf:; BB(0x00456eaf);
    /* 00456eaf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00456eb2: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00456eb5: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456eb8: jl 0x456e8d */ if ((fS!=fO)) goto L_00456e8d;
L_00456eba:; BB(0x00456eba);
    /* 00456eba: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00456ebd: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00456ec1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00456ec5: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00456ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456ecd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00456ecf: jle 0x456ff7 */ if ((fZ||fS!=fO)) goto L_00456ff7;
L_00456ed5:; BB(0x00456ed5);
    /* 00456ed5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00456ed9: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00456edd: mov esi, edx */ r_esi = r_edx;
    /* 00456edf: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00456ee3: mov edi, eax */ r_edi = r_eax;
    /* 00456ee5: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_00456ee9:; BB(0x00456ee9);
    /* 00456ee9: mov ebx, dword ptr [edi*4 + 0xaad720] */ r_ebx = R32((u32)(r_edi*4+0xaad720u));
    /* 00456ef0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ef2: je 0x456f5d */ if (fZ) goto L_00456f5d;
L_00456ef4:; BB(0x00456ef4);
    /* 00456ef4: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00456ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456ef9: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x456efeu); f_00453ab8();
    /* 00456efe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456eff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456f01: je 0x456f5d */ if (fZ) goto L_00456f5d;
L_00456f03:; BB(0x00456f03);
    /* 00456f03: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00456f06: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00456f0a: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00456f0d: mov eax, 0xa45280 */ r_eax = 0xa45280u;
    /* 00456f12: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00456f16: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00456f19: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00456f1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00456f1f: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00456f27: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00456f2b: mov esi, eax */ r_esi = r_eax;
    /* 00456f2d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00456f30: mov ebp, edx */ r_ebp = r_edx;
L_00456f32:; BB(0x00456f32);
    /* 00456f32: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00456f36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456f37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f38: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x456f3du); f_00836208();
    /* 00456f3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456f40: fcomp dword ptr [0xa45580] */ fx_compare(ST(0), R_F32((u32)(0xa45580u))); FPOP();
    /* 00456f46: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00456f48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00456f49: jb 0x456f93 */ if (fC) goto L_00456f93;
L_00456f4b:; BB(0x00456f4b);
    /* 00456f4b: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00456f4e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00456f51: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f54: jl 0x456f32 */ if ((fS!=fO)) goto L_00456f32;
L_00456f56:; BB(0x00456f56);
    /* 00456f56: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00456f5a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00456f5d:; BB(0x00456f5d);
    /* 00456f5d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00456f60: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f62: jl 0x456ee9 */ if ((fS!=fO)) goto L_00456ee9;
L_00456f64:; BB(0x00456f64);
    /* 00456f64: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00456f68: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00456f6c: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00456f70:; BB(0x00456f70);
    /* 00456f70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f75: push 0x375 */ { u32 v = 0x375u; r_esp -= 4; W32(r_esp, v); }
    /* 00456f7a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x456f7fu); f_00814298();
    /* 00456f7f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00456f81: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456f86: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x456f8bu); f_006ff5f8();
    /* 00456f8b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456f8e: jmp 0x456b08 */ goto L_00456b08;
L_00456f93:; BB(0x00456f93);
    /* 00456f93: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00456f97: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00456f9a: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00456f9e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00456fa0: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00456fa4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00456fa6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00456fab: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00456faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fb2: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00456fb6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456fb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456fba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456fbb: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x456fbeu); call_ind(t); }
    /* 00456fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456fc0: jmp 0x456f5d */ goto L_00456f5d;
L_00456fc2:; BB(0x00456fc2);
    /* 00456fc2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00456fc6: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00456fca: mov edx, 0xa45280 */ r_edx = 0xa45280u;
    /* 00456fcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456fd1: mov ebx, eax */ r_ebx = r_eax;
    /* 00456fd3: mov edi, edx */ r_edi = r_edx;
L_00456fd5:; BB(0x00456fd5);
    /* 00456fd5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00456fd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456fd7: call 0x4520c8 */ r_esp -= 4; W32(r_esp, 0x456fdcu); f_004520c8();
    /* 00456fdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456fdf: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00456fe2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00456fe5: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456fe8: jl 0x456fd5 */ if ((fS!=fO)) goto L_00456fd5;
L_00456fea:; BB(0x00456fea);
    /* 00456fea: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00456fee: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00456ff2: jmp 0x456b08 */ goto L_00456b08;
L_00456ff7:; BB(0x00456ff7);
    /* 00456ff7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00456ff9: jmp 0x456f70 */ goto L_00456f70;
}

