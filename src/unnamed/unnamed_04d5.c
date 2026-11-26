#include "protos.h"

void f_004d5150(void) /* sub_4D5150 */
{
    FN_ENTER(0x004d5150);
    /* 004d5150: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5151: mov esi, dword ptr [ecx + 0x44] */ r_esi = R32((u32)(r_ecx+0x44u));
    /* 004d5154: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 004d5157: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d515a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d515c: jg 0x4d5184 */ if ((!fZ&&fS==fO)) goto L_004d5184;
L_004d515e:; BB(0x004d515e);
    /* 004d515e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5160: jl 0x4d5184 */ if ((fS!=fO)) goto L_004d5184;
L_004d5162:; BB(0x004d5162);
    /* 004d5162: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d5164: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d5166: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004d5169: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d516b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d516d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d516f: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5175: lea eax, [esi + edx + 4] */ r_eax = (u32)(r_esi+r_edx+0x4u);
    /* 004d5179: lea edx, [esi + edx + 0x10] */ r_edx = (u32)(r_esi+r_edx+0x10u);
    /* 004d517d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d517e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d517f: call 0x4d5188 */ r_esp -= 4; W32(r_esp, 0x4d5184u); f_004d5188();
L_004d5184:; BB(0x004d5184);
    /* 004d5184: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5185: ret  */ FN_RET(0x004d5150); r_esp += 4; return;
}

void f_004d5188(void) /* sub_4D5188 */
{
    FN_ENTER(0x004d5188);
    /* 004d5188: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5189: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d518a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d518b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d518e: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 004d5192: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004d5196: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004d5198: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004d519b: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d519e: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004d51a1: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 004d51a4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004d51a7: mov ebp, dword ptr [0xa48a18] */ r_ebp = R32((u32)(0xa48a18u));
    /* 004d51ad: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d51af: je 0x4d523e */ if (fZ) goto L_004d523e;
L_004d51b5:; BB(0x004d51b5);
    /* 004d51b5: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004d51b7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 004d51b9: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004d51bc: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004d51bf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d51c1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d51c5: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 004d51c8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d51cc: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 004d51cf: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d51d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d51d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d51d5: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d51dau); f_00836208();
    /* 004d51da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d51dd: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004d51e0: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004d51e8: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004d51ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d51f1u); f_0083173c();
    /* 004d51f1: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 004d51f4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004d51f6: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004d51f9: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x4d51feu); f_0084d15c();
    /* 004d51fe: fmul qword ptr [0x909180] */ ST(0) = ST(0) * R_F64((u32)(0x909180u));
    /* 004d5204: fdiv qword ptr [0x909178] */ ST(0) = ST(0) / R_F64((u32)(0x909178u));
    /* 004d520a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 004d520e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004d5213: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d5218: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004d521c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004d5220: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d5224: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004d5228: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004d522c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d522e: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 004d5231: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5232: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5233: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x4d5238u); f_007a90a8();
    /* 004d5238: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d523b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_004d523e:; BB(0x004d523e);
    /* 004d523e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5242: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5243: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5244: ret 8 */ FN_RET(0x004d5188); r_esp += 12; return;
}

void f_004d5241(void)
{
    FN_ENTER(0x004d5241);
    /* 004d5241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5242: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5243: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5244: ret 8 */ FN_RET(0x004d5241); r_esp += 12; return;
}

void f_004d5248(void) /* sub_4D5248 */
{
    FN_ENTER(0x004d5248);
    /* 004d5248: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5249: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d524a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d524c: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004d524f: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d5254: jl 0x4d5259 */ if ((fS!=fO)) goto L_004d5259;
L_004d5256:; BB(0x004d5256);
    /* 004d5256: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5257: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5258: ret  */ FN_RET(0x004d5248); r_esp += 4; return;
L_004d5259:; BB(0x004d5259);
    /* 004d5259: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d525f: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d5265: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5267: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5269: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d526c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d526e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5270: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5272: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d5278: mov dword ptr [edx + esi + 4], eax */ W32((u32)(r_edx+r_esi+0x4u), r_eax);
    /* 004d527c: mov eax, dword ptr [ecx + 0x17c] */ r_eax = R32((u32)(r_ecx+0x17cu));
    /* 004d5282: mov dword ptr [edx + esi + 8], eax */ W32((u32)(r_edx+r_esi+0x8u), r_eax);
    /* 004d5286: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 004d528c: mov dword ptr [edx + esi + 0xc], eax */ W32((u32)(r_edx+r_esi+0xcu), r_eax);
    /* 004d5290: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004d5293: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5295: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5297: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d529a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d529c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d529e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d52a0: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 004d52a6: mov dword ptr [eax + esi + 0x10], edx */ W32((u32)(r_eax+r_esi+0x10u), r_edx);
    /* 004d52aa: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 004d52b0: mov dword ptr [eax + esi + 0x14], edx */ W32((u32)(r_eax+r_esi+0x14u), r_edx);
    /* 004d52b4: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 004d52ba: mov dword ptr [eax + esi + 0x18], edx */ W32((u32)(r_eax+r_esi+0x18u), r_edx);
    /* 004d52be: mov ebx, dword ptr [ebx + 0x44] */ r_ebx = R32((u32)(r_ebx+0x44u));
    /* 004d52c1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d52c3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d52c5: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004d52c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d52ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d52cc: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d52ce: mov dword ptr [eax + esi], 1 */ W32((u32)(r_eax+r_esi), 0x1u);
    /* 004d52d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d52d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d52d7: ret  */ FN_RET(0x004d5248); r_esp += 4; return;
}

void f_004d5269(void)
{
    FN_ENTER(0x004d5269);
    /* 004d5269: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d526c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d526e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5270: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5272: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d5278: mov dword ptr [edx + esi + 4], eax */ W32((u32)(r_edx+r_esi+0x4u), r_eax);
    /* 004d527c: mov eax, dword ptr [ecx + 0x17c] */ r_eax = R32((u32)(r_ecx+0x17cu));
    /* 004d5282: mov dword ptr [edx + esi + 8], eax */ W32((u32)(r_edx+r_esi+0x8u), r_eax);
    /* 004d5286: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 004d528c: mov dword ptr [edx + esi + 0xc], eax */ W32((u32)(r_edx+r_esi+0xcu), r_eax);
    /* 004d5290: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004d5293: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5295: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5297: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d529a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d529c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d529e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d52a0: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 004d52a6: mov dword ptr [eax + esi + 0x10], edx */ W32((u32)(r_eax+r_esi+0x10u), r_edx);
    /* 004d52aa: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 004d52b0: mov dword ptr [eax + esi + 0x14], edx */ W32((u32)(r_eax+r_esi+0x14u), r_edx);
    /* 004d52b4: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 004d52ba: mov dword ptr [eax + esi + 0x18], edx */ W32((u32)(r_eax+r_esi+0x18u), r_edx);
    /* 004d52be: mov ebx, dword ptr [ebx + 0x44] */ r_ebx = R32((u32)(r_ebx+0x44u));
    /* 004d52c1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d52c3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d52c5: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004d52c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d52ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d52cc: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d52ce: mov dword ptr [eax + esi], 1 */ W32((u32)(r_eax+r_esi), 0x1u);
    /* 004d52d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d52d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d52d7: ret  */ FN_RET(0x004d5269); r_esp += 4; return;
}

void f_004d52d8(void) /* sub_4D52D8 */
{
    FN_ENTER(0x004d52d8);
    /* 004d52d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d52d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d52db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d52dd: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x4d52e2u); f_004f70d0();
    /* 004d52e2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d52e8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d52edu); f_0068d5a8();
    /* 004d52ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d52ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d52f0: je 0x4d531a */ if (fZ) goto L_004d531a;
L_004d52f2:; BB(0x004d52f2);
    /* 004d52f2: fld dword ptr [0x9091a0] */ FPUSH(R_F32((u32)(0x9091a0u)));
    /* 004d52f8: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004d52fb: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004d52fd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d5300: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004d5303: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 004d5306: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004d5308: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004d530b: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004d530e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004d5311: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 004d5314: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 004d5317: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004d531a:; BB(0x004d531a);
    /* 004d531a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d531b: ret  */ FN_RET(0x004d52d8); r_esp += 4; return;
}

void f_004d531c(void) /* sub_4D531C */
{
    FN_ENTER(0x004d531c);
    /* 004d531c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d531d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d531f: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x4d5324u); f_007c0424();
    /* 004d5324: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x4d5329u); f_007becd4();
    /* 004d5329: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d532b: call 0x4f7100 */ r_esp -= 4; W32(r_esp, 0x4d5330u); f_004f7100();
    /* 004d5330: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004d5332: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d5334: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4d5337u); call_ind(t); }
    /* 004d5337: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x4d533cu); f_007c0368();
    /* 004d533c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d533d: ret  */ FN_RET(0x004d531c); r_esp += 4; return;
}

void f_004d5340(void) /* sub_4D5340 */
{
    FN_ENTER(0x004d5340);
    /* 004d5340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5341: mov ebx, esp */ r_ebx = r_esp;
    /* 004d5343: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004d5346: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5347: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5349: mov eax, 0x1074 */ r_eax = 0x1074u;
    /* 004d534e: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x4d5353u); f_00858020();
    /* 004d5353: mov ecx, dword ptr [esp + 0x1074] */ r_ecx = R32((u32)(r_esp+0x1074u));
    /* 004d535a: mov edi, ecx */ r_edi = r_ecx;
    /* 004d535c: mov ecx, edi */ r_ecx = r_edi;
    /* 004d535e: call 0x4f7320 */ r_esp -= 4; W32(r_esp, 0x4d5363u); f_004f7320();
    /* 004d5363: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5366: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5369: push 0x9091d0 */ { u32 v = 0x9091d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d536e: push 0x1e000a */ { u32 v = 0x1e000au; r_esp -= 4; W32(r_esp, v); }
    /* 004d5373: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5378u); f_0061cdb0();
    /* 004d5378: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d537b: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5381: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d5384: mov dword ptr [esp], 0x1e000d */ W32((u32)(r_esp), 0x1e000du);
    /* 004d538b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d538d: mov dword ptr [esp + 4], 0x9091e0 */ W32((u32)(r_esp+0x4u), 0x9091e0u);
    /* 004d5395: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5397: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d539a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d539c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d539e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d53a0: fld dword ptr [edx + esi + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x4u)));
    /* 004d53a4: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d53a8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d53adu); f_0061cdb0();
    /* 004d53ad: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d53b3: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d53b6: mov dword ptr [esp], 0x1e000e */ W32((u32)(r_esp), 0x1e000eu);
    /* 004d53bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53bf: mov dword ptr [esp + 4], 0x9091ec */ W32((u32)(r_esp+0x4u), 0x9091ecu);
    /* 004d53c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53c9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d53cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d53ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d53d0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d53d2: fld dword ptr [edx + esi + 8] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x8u)));
    /* 004d53d6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d53da: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d53dfu); f_0061cdb0();
    /* 004d53df: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d53e5: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d53e8: mov dword ptr [esp], 0x1e000f */ W32((u32)(r_esp), 0x1e000fu);
    /* 004d53ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53f1: mov dword ptr [esp + 4], 0x9091f8 */ W32((u32)(r_esp+0x4u), 0x9091f8u);
    /* 004d53f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53fb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d53fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5400: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5402: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5404: fld dword ptr [edx + esi + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_esi+0xcu)));
    /* 004d5408: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d540c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5411u); f_0061cdb0();
    /* 004d5411: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5417: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d541a: mov dword ptr [esp], 0x1e0010 */ W32((u32)(r_esp), 0x1e0010u);
    /* 004d5421: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5423: mov dword ptr [esp + 4], 0x909204 */ W32((u32)(r_esp+0x4u), 0x909204u);
    /* 004d542b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d542d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5430: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5432: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5434: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5436: fld dword ptr [edx + esi + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x10u)));
    /* 004d543a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d543e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5443u); f_0061cdb0();
    /* 004d5443: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5449: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d544c: mov dword ptr [esp], 0x1e0011 */ W32((u32)(r_esp), 0x1e0011u);
    /* 004d5453: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5455: mov dword ptr [esp + 4], 0x909210 */ W32((u32)(r_esp+0x4u), 0x909210u);
    /* 004d545d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d545f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5462: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5466: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5468: fld dword ptr [edx + esi + 0x14] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x14u)));
    /* 004d546c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5470: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5475u); f_0061cdb0();
    /* 004d5475: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d547b: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d547e: mov dword ptr [esp], 0x1e0012 */ W32((u32)(r_esp), 0x1e0012u);
    /* 004d5485: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5487: mov dword ptr [esp + 4], 0x90921c */ W32((u32)(r_esp+0x4u), 0x90921cu);
    /* 004d548f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5491: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5494: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5496: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5498: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d549a: fld dword ptr [edx + esi + 0x18] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x18u)));
    /* 004d549e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d54a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54a7u); f_0061cdb0();
    /* 004d54a7: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004d54aa: mov dword ptr [esp + 0x30], 0x909228 */ W32((u32)(r_esp+0x30u), 0x909228u);
    /* 004d54b2: mov dword ptr [esp + 0x34], 0x909230 */ W32((u32)(r_esp+0x34u), 0x909230u);
    /* 004d54ba: push dword ptr [esp + eax*4 + 0x30] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d54be: push 0x909238 */ { u32 v = 0x909238u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c3: push 0x1e0014 */ { u32 v = 0x1e0014u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54cdu); f_0061cdb0();
    /* 004d54cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d54d0: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 004d54d8: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004d54dc: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
    /* 004d54e1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004d54e5: mov dword ptr [esp + 0x4c], 2 */ W32((u32)(r_esp+0x4cu), 0x2u);
    /* 004d54ed: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004d54f1: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004d54f4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004d54f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d54fb: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
    /* 004d54ff: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 004d5503: jge 0x4d5629 */ if ((fS==fO)) goto L_004d5629;
L_004d5509:; BB(0x004d5509);
    /* 004d5509: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d550f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d5511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d5515:; BB(0x004d5515);
    /* 004d5515: mov dword ptr [esp + ecx*4 + 0x68], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x68u), 0xffffffffu);
    /* 004d551d: mov dword ptr [esp + ecx*4 + 0x268], 0xffff0000 */ W32((u32)(r_esp+r_ecx*4+0x268u), 0xffff0000u);
    /* 004d5528: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004d552a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d552c: je 0x4d557e */ if (fZ) goto L_004d557e;
L_004d552e:; BB(0x004d552e);
    /* 004d552e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004d5531: mov dword ptr [esp + eax + 0x468], edi */ W32((u32)(r_esp+r_eax+0x468u), r_edi);
    /* 004d5538: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004d553b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d553e: mov dword ptr [esp + eax + 0x46c], edi */ W32((u32)(r_esp+r_eax+0x46cu), r_edi);
    /* 004d5545: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004d5548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d554b: mov dword ptr [esp + eax + 0x470], edi */ W32((u32)(r_esp+r_eax+0x470u), r_edi);
    /* 004d5552: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 004d5555: mov dword ptr [esp + eax + 0xa68], edi */ W32((u32)(r_esp+r_eax+0xa68u), r_edi);
    /* 004d555c: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 004d555f: mov dword ptr [esp + eax + 0xa6c], edi */ W32((u32)(r_esp+r_eax+0xa6cu), r_edi);
    /* 004d5566: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004d5569: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d556c: mov dword ptr [esp + eax + 0xa70], edi */ W32((u32)(r_esp+r_eax+0xa70u), r_edi);
    /* 004d5573: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5576: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d557c: jl 0x4d5515 */ if ((fS!=fO)) goto L_004d5515;
L_004d557e:; BB(0x004d557e);
    /* 004d557e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5581: jl 0x4d561d */ if ((fS!=fO)) goto L_004d561d;
L_004d5587:; BB(0x004d5587);
    /* 004d5587: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d5592: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004d5596: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d559d: lea edx, [esp + 0x468] */ r_edx = (u32)(r_esp+0x468u);
    /* 004d55a4: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55ab: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d55b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d55b7u); f_0082d7b0();
    /* 004d55b7: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d55be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c0: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 004d55c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c5: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d55cau); f_0082c07c();
    /* 004d55ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d55cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d55d2u); f_0082da80();
    /* 004d55d2: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d55dd: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 004d55e4: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d55eb: lea edx, [esp + 0xa68] */ r_edx = (u32)(r_esp+0xa68u);
    /* 004d55f2: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55f9: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d5600: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d5605u); f_0082d7b0();
    /* 004d5605: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d560c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d560e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d560f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5610: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d5615u); f_0082c07c();
    /* 004d5615: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5618: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d561du); f_0082da80();
L_004d561d:; BB(0x004d561d);
    /* 004d561d: add esp, 0x1078 */ {  u32 a = r_esp; u32 b = 0x1078u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5625: mov esp, ebx */ r_esp = r_ebx;
    /* 004d5627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5628: ret  */ FN_RET(0x004d5340); r_esp += 4; return;
L_004d5629:; BB(0x004d5629);
    /* 004d5629: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004d562d: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004d5631: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d5633: mov ebp, edi */ r_ebp = r_edi;
    /* 004d5635: mov edi, edx */ r_edi = r_edx;
    /* 004d5637: jmp 0x4d563c */ goto L_004d563c;
L_004d5639:; BB(0x004d5639);
    /* 004d5639: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
L_004d563c:; BB(0x004d563c);
    /* 004d563c: fld dword ptr [0x90919c] */ FPUSH(R_F32((u32)(0x90919cu)));
    /* 004d5642: mov ecx, dword ptr [0xa48a70] */ r_ecx = R32((u32)(0xa48a70u));
    /* 004d5648: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004d564c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d5650: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d5652: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5656: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5659: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004d565d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d5661: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d5663: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d5666: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d566a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d566e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5671: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d5675: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004d5679: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d567d: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d5682u); f_007be6b8();
    /* 004d5682: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d5687: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d568b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004d568e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5692: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d5695: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5698: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d569c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d56a0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004d56a4: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d56a9u); f_007be6b8();
    /* 004d56a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d56aeu); f_0082d7b0();
    /* 004d56ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004d56b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b7: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d56bcu); f_0082c07c();
    /* 004d56bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d56bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d56c4u); f_0082da80();
    /* 004d56c4: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d56c7: jle 0x4d5639 */ if ((fZ||fS!=fO)) goto L_004d5639;
L_004d56cd:; BB(0x004d56cd);
    /* 004d56cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004d56d1: jmp 0x4d5509 */ goto L_004d5509;
}

void f_004d5345(void)
{
    FN_ENTER(0x004d5345);
    /* 004d5345: rcl byte ptr [edi + 0x56], 0x51 */ UNSUP(0x004d5345, "rcl byte ptr [edi + 0x56], 0x51");
    /* 004d5349: mov eax, 0x1074 */ r_eax = 0x1074u;
    /* 004d534e: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x4d5353u); f_00858020();
    /* 004d5353: mov ecx, dword ptr [esp + 0x1074] */ r_ecx = R32((u32)(r_esp+0x1074u));
    /* 004d535a: mov edi, ecx */ r_edi = r_ecx;
    /* 004d535c: mov ecx, edi */ r_ecx = r_edi;
    /* 004d535e: call 0x4f7320 */ r_esp -= 4; W32(r_esp, 0x4d5363u); f_004f7320();
    /* 004d5363: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5366: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5369: push 0x9091d0 */ { u32 v = 0x9091d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d536e: push 0x1e000a */ { u32 v = 0x1e000au; r_esp -= 4; W32(r_esp, v); }
    /* 004d5373: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5378u); f_0061cdb0();
    /* 004d5378: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d537b: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5381: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d5384: mov dword ptr [esp], 0x1e000d */ W32((u32)(r_esp), 0x1e000du);
    /* 004d538b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d538d: mov dword ptr [esp + 4], 0x9091e0 */ W32((u32)(r_esp+0x4u), 0x9091e0u);
    /* 004d5395: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5397: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d539a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d539c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d539e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d53a0: fld dword ptr [edx + esi + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x4u)));
    /* 004d53a4: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d53a8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d53adu); f_0061cdb0();
    /* 004d53ad: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d53b3: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d53b6: mov dword ptr [esp], 0x1e000e */ W32((u32)(r_esp), 0x1e000eu);
    /* 004d53bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53bf: mov dword ptr [esp + 4], 0x9091ec */ W32((u32)(r_esp+0x4u), 0x9091ecu);
    /* 004d53c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53c9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d53cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d53ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d53d0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d53d2: fld dword ptr [edx + esi + 8] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x8u)));
    /* 004d53d6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d53da: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d53dfu); f_0061cdb0();
    /* 004d53df: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d53e5: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d53e8: mov dword ptr [esp], 0x1e000f */ W32((u32)(r_esp), 0x1e000fu);
    /* 004d53ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53f1: mov dword ptr [esp + 4], 0x9091f8 */ W32((u32)(r_esp+0x4u), 0x9091f8u);
    /* 004d53f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d53fb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d53fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5400: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5402: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5404: fld dword ptr [edx + esi + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_esi+0xcu)));
    /* 004d5408: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d540c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5411u); f_0061cdb0();
    /* 004d5411: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5417: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d541a: mov dword ptr [esp], 0x1e0010 */ W32((u32)(r_esp), 0x1e0010u);
    /* 004d5421: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5423: mov dword ptr [esp + 4], 0x909204 */ W32((u32)(r_esp+0x4u), 0x909204u);
    /* 004d542b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d542d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5430: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5432: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5434: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5436: fld dword ptr [edx + esi + 0x10] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x10u)));
    /* 004d543a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d543e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5443u); f_0061cdb0();
    /* 004d5443: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d5449: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d544c: mov dword ptr [esp], 0x1e0011 */ W32((u32)(r_esp), 0x1e0011u);
    /* 004d5453: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5455: mov dword ptr [esp + 4], 0x909210 */ W32((u32)(r_esp+0x4u), 0x909210u);
    /* 004d545d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d545f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5462: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5466: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5468: fld dword ptr [edx + esi + 0x14] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x14u)));
    /* 004d546c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5470: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5475u); f_0061cdb0();
    /* 004d5475: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d547b: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d547e: mov dword ptr [esp], 0x1e0012 */ W32((u32)(r_esp), 0x1e0012u);
    /* 004d5485: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5487: mov dword ptr [esp + 4], 0x90921c */ W32((u32)(r_esp+0x4u), 0x90921cu);
    /* 004d548f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5491: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5494: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5496: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5498: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d549a: fld dword ptr [edx + esi + 0x18] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x18u)));
    /* 004d549e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d54a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54a7u); f_0061cdb0();
    /* 004d54a7: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004d54aa: mov dword ptr [esp + 0x30], 0x909228 */ W32((u32)(r_esp+0x30u), 0x909228u);
    /* 004d54b2: mov dword ptr [esp + 0x34], 0x909230 */ W32((u32)(r_esp+0x34u), 0x909230u);
    /* 004d54ba: push dword ptr [esp + eax*4 + 0x30] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d54be: push 0x909238 */ { u32 v = 0x909238u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c3: push 0x1e0014 */ { u32 v = 0x1e0014u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54cdu); f_0061cdb0();
    /* 004d54cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d54d0: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 004d54d8: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004d54dc: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
    /* 004d54e1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004d54e5: mov dword ptr [esp + 0x4c], 2 */ W32((u32)(r_esp+0x4cu), 0x2u);
    /* 004d54ed: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004d54f1: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004d54f4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004d54f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d54fb: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
    /* 004d54ff: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 004d5503: jge 0x4d5629 */ if ((fS==fO)) goto L_004d5629;
L_004d5509:; BB(0x004d5509);
    /* 004d5509: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d550f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d5511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d5515:; BB(0x004d5515);
    /* 004d5515: mov dword ptr [esp + ecx*4 + 0x68], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x68u), 0xffffffffu);
    /* 004d551d: mov dword ptr [esp + ecx*4 + 0x268], 0xffff0000 */ W32((u32)(r_esp+r_ecx*4+0x268u), 0xffff0000u);
    /* 004d5528: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004d552a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d552c: je 0x4d557e */ if (fZ) goto L_004d557e;
L_004d552e:; BB(0x004d552e);
    /* 004d552e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004d5531: mov dword ptr [esp + eax + 0x468], edi */ W32((u32)(r_esp+r_eax+0x468u), r_edi);
    /* 004d5538: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004d553b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d553e: mov dword ptr [esp + eax + 0x46c], edi */ W32((u32)(r_esp+r_eax+0x46cu), r_edi);
    /* 004d5545: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004d5548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d554b: mov dword ptr [esp + eax + 0x470], edi */ W32((u32)(r_esp+r_eax+0x470u), r_edi);
    /* 004d5552: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 004d5555: mov dword ptr [esp + eax + 0xa68], edi */ W32((u32)(r_esp+r_eax+0xa68u), r_edi);
    /* 004d555c: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 004d555f: mov dword ptr [esp + eax + 0xa6c], edi */ W32((u32)(r_esp+r_eax+0xa6cu), r_edi);
    /* 004d5566: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004d5569: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d556c: mov dword ptr [esp + eax + 0xa70], edi */ W32((u32)(r_esp+r_eax+0xa70u), r_edi);
    /* 004d5573: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5576: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d557c: jl 0x4d5515 */ if ((fS!=fO)) goto L_004d5515;
L_004d557e:; BB(0x004d557e);
    /* 004d557e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5581: jl 0x4d561d */ if ((fS!=fO)) goto L_004d561d;
L_004d5587:; BB(0x004d5587);
    /* 004d5587: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d5592: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004d5596: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d559d: lea edx, [esp + 0x468] */ r_edx = (u32)(r_esp+0x468u);
    /* 004d55a4: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55ab: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d55b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d55b7u); f_0082d7b0();
    /* 004d55b7: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d55be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c0: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 004d55c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c5: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d55cau); f_0082c07c();
    /* 004d55ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d55cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d55d2u); f_0082da80();
    /* 004d55d2: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d55dd: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 004d55e4: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d55eb: lea edx, [esp + 0xa68] */ r_edx = (u32)(r_esp+0xa68u);
    /* 004d55f2: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55f9: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d5600: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d5605u); f_0082d7b0();
    /* 004d5605: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d560c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d560e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d560f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5610: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d5615u); f_0082c07c();
    /* 004d5615: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5618: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d561du); f_0082da80();
L_004d561d:; BB(0x004d561d);
    /* 004d561d: add esp, 0x1078 */ {  u32 a = r_esp; u32 b = 0x1078u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5625: mov esp, ebx */ r_esp = r_ebx;
    /* 004d5627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5628: ret  */ FN_RET(0x004d5345); r_esp += 4; return;
L_004d5629:; BB(0x004d5629);
    /* 004d5629: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004d562d: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004d5631: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d5633: mov ebp, edi */ r_ebp = r_edi;
    /* 004d5635: mov edi, edx */ r_edi = r_edx;
    /* 004d5637: jmp 0x4d563c */ goto L_004d563c;
L_004d5639:; BB(0x004d5639);
    /* 004d5639: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
L_004d563c:; BB(0x004d563c);
    /* 004d563c: fld dword ptr [0x90919c] */ FPUSH(R_F32((u32)(0x90919cu)));
    /* 004d5642: mov ecx, dword ptr [0xa48a70] */ r_ecx = R32((u32)(0xa48a70u));
    /* 004d5648: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004d564c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d5650: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d5652: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5656: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5659: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004d565d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d5661: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d5663: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d5666: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d566a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d566e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5671: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d5675: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004d5679: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d567d: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d5682u); f_007be6b8();
    /* 004d5682: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d5687: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d568b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004d568e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5692: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d5695: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5698: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d569c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d56a0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004d56a4: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d56a9u); f_007be6b8();
    /* 004d56a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d56aeu); f_0082d7b0();
    /* 004d56ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004d56b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b7: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d56bcu); f_0082c07c();
    /* 004d56bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d56bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d56c4u); f_0082da80();
    /* 004d56c4: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d56c7: jle 0x4d5639 */ if ((fZ||fS!=fO)) goto L_004d5639;
L_004d56cd:; BB(0x004d56cd);
    /* 004d56cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004d56d1: jmp 0x4d5509 */ goto L_004d5509;
}

void f_004d5442(void)
{
    FN_ENTER(0x004d5442);
    /* 004d5442: add byte ptr [ebx - 0x5b758bcb], cl */ { u32 ad = (u32)(r_ebx+0xa48a7435u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5448: add byte ptr [ebx + 0x4c74447], cl */ { u32 ad = (u32)(r_ebx+0x4c74447u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d544e: and al, 0x11 */ {  u32 a = (u8)r_eax; u32 b = 0x11u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d5450: add byte ptr [esi], bl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5452: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5454: rol bh, 0x44 */ { u32 c = (4u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 004d5457: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 004d5459: adc byte ptr [edx - 0x3ffcff70], dl */ { u32 ad = (u32)(r_edx+0xc0030090u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 004d545f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5462: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5466: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5468: fld dword ptr [edx + esi + 0x14] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x14u)));
    /* 004d546c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5470: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5475u); f_0061cdb0();
    /* 004d5475: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d547b: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d547e: mov dword ptr [esp], 0x1e0012 */ W32((u32)(r_esp), 0x1e0012u);
    /* 004d5485: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5487: mov dword ptr [esp + 4], 0x90921c */ W32((u32)(r_esp+0x4u), 0x90921cu);
    /* 004d548f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5491: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5494: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5496: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5498: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d549a: fld dword ptr [edx + esi + 0x18] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x18u)));
    /* 004d549e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d54a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54a7u); f_0061cdb0();
    /* 004d54a7: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004d54aa: mov dword ptr [esp + 0x30], 0x909228 */ W32((u32)(r_esp+0x30u), 0x909228u);
    /* 004d54b2: mov dword ptr [esp + 0x34], 0x909230 */ W32((u32)(r_esp+0x34u), 0x909230u);
    /* 004d54ba: push dword ptr [esp + eax*4 + 0x30] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d54be: push 0x909238 */ { u32 v = 0x909238u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c3: push 0x1e0014 */ { u32 v = 0x1e0014u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54cdu); f_0061cdb0();
    /* 004d54cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d54d0: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 004d54d8: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004d54dc: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
    /* 004d54e1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004d54e5: mov dword ptr [esp + 0x4c], 2 */ W32((u32)(r_esp+0x4cu), 0x2u);
    /* 004d54ed: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004d54f1: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004d54f4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004d54f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d54fb: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
    /* 004d54ff: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 004d5503: jge 0x4d5629 */ if ((fS==fO)) goto L_004d5629;
L_004d5509:; BB(0x004d5509);
    /* 004d5509: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d550f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d5511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d5515:; BB(0x004d5515);
    /* 004d5515: mov dword ptr [esp + ecx*4 + 0x68], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x68u), 0xffffffffu);
    /* 004d551d: mov dword ptr [esp + ecx*4 + 0x268], 0xffff0000 */ W32((u32)(r_esp+r_ecx*4+0x268u), 0xffff0000u);
    /* 004d5528: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004d552a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d552c: je 0x4d557e */ if (fZ) goto L_004d557e;
L_004d552e:; BB(0x004d552e);
    /* 004d552e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004d5531: mov dword ptr [esp + eax + 0x468], edi */ W32((u32)(r_esp+r_eax+0x468u), r_edi);
    /* 004d5538: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004d553b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d553e: mov dword ptr [esp + eax + 0x46c], edi */ W32((u32)(r_esp+r_eax+0x46cu), r_edi);
    /* 004d5545: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004d5548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d554b: mov dword ptr [esp + eax + 0x470], edi */ W32((u32)(r_esp+r_eax+0x470u), r_edi);
    /* 004d5552: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 004d5555: mov dword ptr [esp + eax + 0xa68], edi */ W32((u32)(r_esp+r_eax+0xa68u), r_edi);
    /* 004d555c: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 004d555f: mov dword ptr [esp + eax + 0xa6c], edi */ W32((u32)(r_esp+r_eax+0xa6cu), r_edi);
    /* 004d5566: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004d5569: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d556c: mov dword ptr [esp + eax + 0xa70], edi */ W32((u32)(r_esp+r_eax+0xa70u), r_edi);
    /* 004d5573: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5576: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d557c: jl 0x4d5515 */ if ((fS!=fO)) goto L_004d5515;
L_004d557e:; BB(0x004d557e);
    /* 004d557e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5581: jl 0x4d561d */ if ((fS!=fO)) goto L_004d561d;
L_004d5587:; BB(0x004d5587);
    /* 004d5587: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d5592: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004d5596: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d559d: lea edx, [esp + 0x468] */ r_edx = (u32)(r_esp+0x468u);
    /* 004d55a4: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55ab: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d55b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d55b7u); f_0082d7b0();
    /* 004d55b7: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d55be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c0: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 004d55c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c5: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d55cau); f_0082c07c();
    /* 004d55ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d55cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d55d2u); f_0082da80();
    /* 004d55d2: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d55dd: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 004d55e4: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d55eb: lea edx, [esp + 0xa68] */ r_edx = (u32)(r_esp+0xa68u);
    /* 004d55f2: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55f9: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d5600: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d5605u); f_0082d7b0();
    /* 004d5605: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d560c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d560e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d560f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5610: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d5615u); f_0082c07c();
    /* 004d5615: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5618: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d561du); f_0082da80();
L_004d561d:; BB(0x004d561d);
    /* 004d561d: add esp, 0x1078 */ {  u32 a = r_esp; u32 b = 0x1078u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5625: mov esp, ebx */ r_esp = r_ebx;
    /* 004d5627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5628: ret  */ FN_RET(0x004d5442); r_esp += 4; return;
L_004d5629:; BB(0x004d5629);
    /* 004d5629: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004d562d: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004d5631: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d5633: mov ebp, edi */ r_ebp = r_edi;
    /* 004d5635: mov edi, edx */ r_edi = r_edx;
    /* 004d5637: jmp 0x4d563c */ goto L_004d563c;
L_004d5639:; BB(0x004d5639);
    /* 004d5639: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
L_004d563c:; BB(0x004d563c);
    /* 004d563c: fld dword ptr [0x90919c] */ FPUSH(R_F32((u32)(0x90919cu)));
    /* 004d5642: mov ecx, dword ptr [0xa48a70] */ r_ecx = R32((u32)(0xa48a70u));
    /* 004d5648: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004d564c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d5650: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d5652: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5656: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5659: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004d565d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d5661: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d5663: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d5666: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d566a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d566e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5671: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d5675: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004d5679: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d567d: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d5682u); f_007be6b8();
    /* 004d5682: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d5687: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d568b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004d568e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5692: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d5695: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5698: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d569c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d56a0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004d56a4: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d56a9u); f_007be6b8();
    /* 004d56a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d56aeu); f_0082d7b0();
    /* 004d56ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004d56b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b7: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d56bcu); f_0082c07c();
    /* 004d56bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d56bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d56c4u); f_0082da80();
    /* 004d56c4: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d56c7: jle 0x4d5639 */ if ((fZ||fS!=fO)) goto L_004d5639;
L_004d56cd:; BB(0x004d56cd);
    /* 004d56cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004d56d1: jmp 0x4d5509 */ goto L_004d5509;
}

void f_004d5447(void)
{
    FN_ENTER(0x004d5447);
    /* 004d5447: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 004d5448: add byte ptr [ebx + 0x4c74447], cl */ { u32 ad = (u32)(r_ebx+0x4c74447u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d544e: and al, 0x11 */ {  u32 a = (u8)r_eax; u32 b = 0x11u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d5450: add byte ptr [esi], bl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5452: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5454: rol bh, 0x44 */ { u32 c = (4u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 004d5457: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 004d5459: adc byte ptr [edx - 0x3ffcff70], dl */ { u32 ad = (u32)(r_edx+0xc0030090u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 004d545f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5462: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5466: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5468: fld dword ptr [edx + esi + 0x14] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x14u)));
    /* 004d546c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5470: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d5475u); f_0061cdb0();
    /* 004d5475: mov esi, dword ptr [0xa48a74] */ r_esi = R32((u32)(0xa48a74u));
    /* 004d547b: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004d547e: mov dword ptr [esp], 0x1e0012 */ W32((u32)(r_esp), 0x1e0012u);
    /* 004d5485: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5487: mov dword ptr [esp + 4], 0x90921c */ W32((u32)(r_esp+0x4u), 0x90921cu);
    /* 004d548f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5491: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5494: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5496: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5498: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d549a: fld dword ptr [edx + esi + 0x18] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x18u)));
    /* 004d549e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d54a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54a7u); f_0061cdb0();
    /* 004d54a7: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004d54aa: mov dword ptr [esp + 0x30], 0x909228 */ W32((u32)(r_esp+0x30u), 0x909228u);
    /* 004d54b2: mov dword ptr [esp + 0x34], 0x909230 */ W32((u32)(r_esp+0x34u), 0x909230u);
    /* 004d54ba: push dword ptr [esp + eax*4 + 0x30] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d54be: push 0x909238 */ { u32 v = 0x909238u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c3: push 0x1e0014 */ { u32 v = 0x1e0014u; r_esp -= 4; W32(r_esp, v); }
    /* 004d54c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d54cdu); f_0061cdb0();
    /* 004d54cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d54d0: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 004d54d8: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004d54dc: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
    /* 004d54e1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004d54e5: mov dword ptr [esp + 0x4c], 2 */ W32((u32)(r_esp+0x4cu), 0x2u);
    /* 004d54ed: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004d54f1: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004d54f4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004d54f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d54fb: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
    /* 004d54ff: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 004d5503: jge 0x4d5629 */ if ((fS==fO)) goto L_004d5629;
L_004d5509:; BB(0x004d5509);
    /* 004d5509: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d550f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d5511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d5515:; BB(0x004d5515);
    /* 004d5515: mov dword ptr [esp + ecx*4 + 0x68], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x68u), 0xffffffffu);
    /* 004d551d: mov dword ptr [esp + ecx*4 + 0x268], 0xffff0000 */ W32((u32)(r_esp+r_ecx*4+0x268u), 0xffff0000u);
    /* 004d5528: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004d552a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d552c: je 0x4d557e */ if (fZ) goto L_004d557e;
L_004d552e:; BB(0x004d552e);
    /* 004d552e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004d5531: mov dword ptr [esp + eax + 0x468], edi */ W32((u32)(r_esp+r_eax+0x468u), r_edi);
    /* 004d5538: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004d553b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d553e: mov dword ptr [esp + eax + 0x46c], edi */ W32((u32)(r_esp+r_eax+0x46cu), r_edi);
    /* 004d5545: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004d5548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d554b: mov dword ptr [esp + eax + 0x470], edi */ W32((u32)(r_esp+r_eax+0x470u), r_edi);
    /* 004d5552: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 004d5555: mov dword ptr [esp + eax + 0xa68], edi */ W32((u32)(r_esp+r_eax+0xa68u), r_edi);
    /* 004d555c: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 004d555f: mov dword ptr [esp + eax + 0xa6c], edi */ W32((u32)(r_esp+r_eax+0xa6cu), r_edi);
    /* 004d5566: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004d5569: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d556c: mov dword ptr [esp + eax + 0xa70], edi */ W32((u32)(r_esp+r_eax+0xa70u), r_edi);
    /* 004d5573: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5576: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d557c: jl 0x4d5515 */ if ((fS!=fO)) goto L_004d5515;
L_004d557e:; BB(0x004d557e);
    /* 004d557e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5581: jl 0x4d561d */ if ((fS!=fO)) goto L_004d561d;
L_004d5587:; BB(0x004d5587);
    /* 004d5587: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d5592: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004d5596: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d559d: lea edx, [esp + 0x468] */ r_edx = (u32)(r_esp+0x468u);
    /* 004d55a4: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55ab: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d55b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d55b7u); f_0082d7b0();
    /* 004d55b7: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d55be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c0: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 004d55c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c5: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d55cau); f_0082c07c();
    /* 004d55ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d55cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d55d2u); f_0082da80();
    /* 004d55d2: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d55dd: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 004d55e4: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d55eb: lea edx, [esp + 0xa68] */ r_edx = (u32)(r_esp+0xa68u);
    /* 004d55f2: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55f9: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d5600: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d5605u); f_0082d7b0();
    /* 004d5605: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d560c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d560e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d560f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5610: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d5615u); f_0082c07c();
    /* 004d5615: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5618: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d561du); f_0082da80();
L_004d561d:; BB(0x004d561d);
    /* 004d561d: add esp, 0x1078 */ {  u32 a = r_esp; u32 b = 0x1078u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5625: mov esp, ebx */ r_esp = r_ebx;
    /* 004d5627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5628: ret  */ FN_RET(0x004d5447); r_esp += 4; return;
L_004d5629:; BB(0x004d5629);
    /* 004d5629: lea esi, [esp + 0x5c] */ r_esi = (u32)(r_esp+0x5cu);
    /* 004d562d: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004d5631: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d5633: mov ebp, edi */ r_ebp = r_edi;
    /* 004d5635: mov edi, edx */ r_edi = r_edx;
    /* 004d5637: jmp 0x4d563c */ goto L_004d563c;
L_004d5639:; BB(0x004d5639);
    /* 004d5639: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
L_004d563c:; BB(0x004d563c);
    /* 004d563c: fld dword ptr [0x90919c] */ FPUSH(R_F32((u32)(0x90919cu)));
    /* 004d5642: mov ecx, dword ptr [0xa48a70] */ r_ecx = R32((u32)(0xa48a70u));
    /* 004d5648: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004d564c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d5650: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d5652: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5656: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5659: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004d565d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d5661: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d5663: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d5666: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d566a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d566e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5671: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d5675: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004d5679: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d567d: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d5682u); f_007be6b8();
    /* 004d5682: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d5687: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d568b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004d568e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5692: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d5695: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5698: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d569c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d56a0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004d56a4: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d56a9u); f_007be6b8();
    /* 004d56a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d56aeu); f_0082d7b0();
    /* 004d56ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004d56b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b7: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d56bcu); f_0082c07c();
    /* 004d56bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d56bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d56c4u); f_0082da80();
    /* 004d56c4: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d56c7: jle 0x4d5639 */ if ((fZ||fS!=fO)) goto L_004d5639;
L_004d56cd:; BB(0x004d56cd);
    /* 004d56cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004d56d1: jmp 0x4d5509 */ goto L_004d5509;
}

void f_004d5647(void)
{
    FN_ENTER(0x004d5647);
    goto L_004d5647;
L_004d5509:; BB(0x004d5509);
    /* 004d5509: mov edx, dword ptr [0xa48a74] */ r_edx = R32((u32)(0xa48a74u));
    /* 004d550f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d5511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004d5515:; BB(0x004d5515);
    /* 004d5515: mov dword ptr [esp + ecx*4 + 0x68], 0xffffffff */ W32((u32)(r_esp+r_ecx*4+0x68u), 0xffffffffu);
    /* 004d551d: mov dword ptr [esp + ecx*4 + 0x268], 0xffff0000 */ W32((u32)(r_esp+r_ecx*4+0x268u), 0xffff0000u);
    /* 004d5528: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004d552a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d552c: je 0x4d557e */ if (fZ) goto L_004d557e;
L_004d552e:; BB(0x004d552e);
    /* 004d552e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004d5531: mov dword ptr [esp + eax + 0x468], edi */ W32((u32)(r_esp+r_eax+0x468u), r_edi);
    /* 004d5538: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004d553b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d553e: mov dword ptr [esp + eax + 0x46c], edi */ W32((u32)(r_esp+r_eax+0x46cu), r_edi);
    /* 004d5545: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004d5548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d554b: mov dword ptr [esp + eax + 0x470], edi */ W32((u32)(r_esp+r_eax+0x470u), r_edi);
    /* 004d5552: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 004d5555: mov dword ptr [esp + eax + 0xa68], edi */ W32((u32)(r_esp+r_eax+0xa68u), r_edi);
    /* 004d555c: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 004d555f: mov dword ptr [esp + eax + 0xa6c], edi */ W32((u32)(r_esp+r_eax+0xa6cu), r_edi);
    /* 004d5566: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004d5569: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d556c: mov dword ptr [esp + eax + 0xa70], edi */ W32((u32)(r_esp+r_eax+0xa70u), r_edi);
    /* 004d5573: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5576: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d557c: jl 0x4d5515 */ if ((fS!=fO)) goto L_004d5515;
L_004d557e:; BB(0x004d557e);
    /* 004d557e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5581: jl 0x4d561d */ if ((fS!=fO)) goto L_004d561d;
L_004d5587:; BB(0x004d5587);
    /* 004d5587: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d5592: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004d5596: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d559d: lea edx, [esp + 0x468] */ r_edx = (u32)(r_esp+0x468u);
    /* 004d55a4: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55ab: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d55b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d55b7u); f_0082d7b0();
    /* 004d55b7: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d55be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c0: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 004d55c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d55c5: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d55cau); f_0082c07c();
    /* 004d55ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d55cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d55d2u); f_0082da80();
    /* 004d55d2: mov dword ptr [esp + 0x1070], 0 */ W32((u32)(r_esp+0x1070u), 0x0u);
    /* 004d55dd: lea eax, [esp + 0x268] */ r_eax = (u32)(r_esp+0x268u);
    /* 004d55e4: mov dword ptr [esp + 0x106c], eax */ W32((u32)(r_esp+0x106cu), r_eax);
    /* 004d55eb: lea edx, [esp + 0xa68] */ r_edx = (u32)(r_esp+0xa68u);
    /* 004d55f2: mov dword ptr [esp + 0x1068], edx */ W32((u32)(r_esp+0x1068u), r_edx);
    /* 004d55f9: mov dword ptr [esp + 0x1074], esi */ W32((u32)(r_esp+0x1074u), r_esi);
    /* 004d5600: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d5605u); f_0082d7b0();
    /* 004d5605: lea eax, [esp + 0x1068] */ r_eax = (u32)(r_esp+0x1068u);
    /* 004d560c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d560e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d560f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5610: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d5615u); f_0082c07c();
    /* 004d5615: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5618: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d561du); f_0082da80();
L_004d561d:; BB(0x004d561d);
    /* 004d561d: add esp, 0x1078 */ {  u32 a = r_esp; u32 b = 0x1078u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5625: mov esp, ebx */ r_esp = r_ebx;
    /* 004d5627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5628: ret  */ FN_RET(0x004d5647); r_esp += 4; return;
L_004d5639:; BB(0x004d5639);
    /* 004d5639: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004d563c: fld dword ptr [0x90919c] */ FPUSH(R_F32((u32)(0x90919cu)));
    /* 004d5642: mov ecx, dword ptr [0xa48a70] */ r_ecx = R32((u32)(0xa48a70u));
L_004d5647:; BB(0x004d5647);
    /* 004d5647: add byte ptr [ecx - 0x24e7db84], cl */ { u32 ad = (u32)(r_ecx+0xdb18247cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d5648: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004d564c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d564d: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d564e: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d5650: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004d5652: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5656: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d5659: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004d565d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d5661: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004d5663: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d5666: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004d566a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004d566e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5671: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d5675: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004d5679: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d567d: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d5682u); f_007be6b8();
    /* 004d5682: mov eax, dword ptr [0xa48a70] */ r_eax = R32((u32)(0xa48a70u));
    /* 004d5687: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d568b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004d568e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d5692: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d5695: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004d5698: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d569c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d56a0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004d56a4: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4d56a9u); f_007be6b8();
    /* 004d56a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d56aeu); f_0082d7b0();
    /* 004d56ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004d56b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56b7: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4d56bcu); f_0082c07c();
    /* 004d56bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d56bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d56c4u); f_0082da80();
    /* 004d56c4: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d56c7: jle 0x4d5639 */ if ((fZ||fS!=fO)) goto L_004d5639;
L_004d56cd:; BB(0x004d56cd);
    /* 004d56cd: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004d56d1: jmp 0x4d5509 */ goto L_004d5509;
}

void f_004d56d8(void) /* sub_4D56D8 */
{
    FN_ENTER(0x004d56d8);
    /* 004d56d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d56d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004d56db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d56dd: push 0x8d1e28 */ { u32 v = 0x8d1e28u; r_esp -= 4; W32(r_esp, v); }
    /* 004d56e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d56e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d56e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d56f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d56f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d56f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d56f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d56fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d56ff: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5701: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d5708: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d570du); f_005caba4();
    /* 004d570d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d570e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d5711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5713: je 0x4d5738 */ if (fZ) goto L_004d5738;
L_004d5715:; BB(0x004d5715);
    /* 004d5715: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d571c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5723: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5729: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d572c: call 0x4d5748 */ r_esp -= 4; W32(r_esp, 0x4d5731u); f_004d5748();
    /* 004d5731: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d5738:; BB(0x004d5738);
    /* 004d5738: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d573b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5742: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5745: ret  */ FN_RET(0x004d56d8); r_esp += 4; return;
}

void f_004d5748(void) /* sub_4D5748 */
{
    FN_ENTER(0x004d5748);
    /* 004d5748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5749: mov edi, ecx */ r_edi = r_ecx;
    /* 004d574b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d574f: mov ecx, edi */ r_ecx = r_edi;
    /* 004d5751: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x4d5756u); f_004f7330();
    /* 004d5756: mov dword ptr [edi], 0xafc620 */ W32((u32)(r_edi), 0xafc620u);
    /* 004d575c: mov edx, dword ptr [0x9acba4] */ r_edx = R32((u32)(0x9acba4u));
    /* 004d5762: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004d5765: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5767: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004d576a: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004d576d: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004d5770: mov eax, edi */ r_eax = r_edi;
    /* 004d5772: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5773: ret 4 */ FN_RET(0x004d5748); r_esp += 8; return;
}

void f_004d5778(void) /* sub_4D5778 */
{
    FN_ENTER(0x004d5778);
    /* 004d5778: mov dword ptr [0xa48a60], 0x3f800000 */ W32((u32)(0xa48a60u), 0x3f800000u);
    /* 004d5782: mov dword ptr [0xa48a64], 0x41000000 */ W32((u32)(0xa48a64u), 0x41000000u);
    /* 004d578c: mov dword ptr [0xa48a68], 0x3fc00000 */ W32((u32)(0xa48a68u), 0x3fc00000u);
    /* 004d5796: ret  */ FN_RET(0x004d5778); r_esp += 4; return;
}

void f_004d5798(void) /* sub_4D5798 */
{
    FN_ENTER(0x004d5798);
    /* 004d5798: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5799: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d579b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d579d: call 0x4d57bc */ r_esp -= 4; W32(r_esp, 0x4d57a2u); f_004d57bc();
    /* 004d57a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d57a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d57a8: jne 0x4d57ae */ if (!fZ) goto L_004d57ae;
L_004d57aa:; BB(0x004d57aa);
    /* 004d57aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d57ab: ret 4 */ FN_RET(0x004d5798); r_esp += 8; return;
L_004d57ae:; BB(0x004d57ae);
    /* 004d57ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d57af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d57b4u); f_005c2f74();
    /* 004d57b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d57b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d57b6: ret 4 */ FN_RET(0x004d5798); r_esp += 8; return;
}

void f_004d57bc(void) /* sub_4D57BC */
{
    FN_ENTER(0x004d57bc);
    /* 004d57bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d57bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d57bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d57c1: push 0x8d1e44 */ { u32 v = 0x8d1e44u; r_esp -= 4; W32(r_esp, v); }
    /* 004d57c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d57cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d57cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d57d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d57d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d57da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d57dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d57e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d57e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d57e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d57e9: mov dword ptr [ecx], 0xafc7e8 */ W32((u32)(r_ecx), 0xafc7e8u);
    /* 004d57ef: mov dword ptr [0xa48a9c], 0 */ W32((u32)(0xa48a9cu), 0x0u);
    /* 004d57f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d5800: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d5805u); f_004d1f18();
    /* 004d5805: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5808: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d580f: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5812: ret  */ FN_RET(0x004d57bc); r_esp += 4; return;
}

void f_004d5814(void) /* sub_4D5814 */
{
    FN_ENTER(0x004d5814);
    /* 004d5814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5815: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d5817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d5819: call 0x4d5838 */ r_esp -= 4; W32(r_esp, 0x4d581eu); f_004d5838();
    /* 004d581e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d5822: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5824: jne 0x4d582a */ if (!fZ) goto L_004d582a;
L_004d5826:; BB(0x004d5826);
    /* 004d5826: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5827: ret 4 */ FN_RET(0x004d5814); r_esp += 8; return;
L_004d582a:; BB(0x004d582a);
    /* 004d582a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d582b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d5830u); f_005c2f74();
    /* 004d5830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5832: ret 4 */ FN_RET(0x004d5814); r_esp += 8; return;
}

void f_004d5838(void) /* sub_4D5838 */
{
    FN_ENTER(0x004d5838);
    /* 004d5838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5839: mov ebp, esp */ r_ebp = r_esp;
    /* 004d583b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d583d: push 0x8d1e60 */ { u32 v = 0x8d1e60u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5842: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5849: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5850: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5853: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5856: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d5859: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d585c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d585f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d5862: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5869: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d586c: mov dword ptr [eax], 0xafc810 */ W32((u32)(r_eax), 0xafc810u);
    /* 004d5872: call 0x4d869c */ r_esp -= 4; W32(r_esp, 0x4d5877u); f_004d869c();
    /* 004d5877: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d587e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5881: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d5886u); f_008171e8();
    /* 004d5886: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5889: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5890: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5893: ret  */ FN_RET(0x004d5838); r_esp += 4; return;
}

void f_004d5894(void) /* sub_4D5894 */
{
    FN_ENTER(0x004d5894);
    /* 004d5894: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5895: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d5897: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d5899: call 0x4d58b8 */ r_esp -= 4; W32(r_esp, 0x4d589eu); f_004d58b8();
    /* 004d589e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d58a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d58a4: jne 0x4d58aa */ if (!fZ) goto L_004d58aa;
L_004d58a6:; BB(0x004d58a6);
    /* 004d58a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d58a7: ret 4 */ FN_RET(0x004d5894); r_esp += 8; return;
L_004d58aa:; BB(0x004d58aa);
    /* 004d58aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d58ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d58b0u); f_005c2f74();
    /* 004d58b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d58b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d58b2: ret 4 */ FN_RET(0x004d5894); r_esp += 8; return;
}

void f_004d58b8(void) /* sub_4D58B8 */
{
    FN_ENTER(0x004d58b8);
    /* 004d58b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d58b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004d58bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d58bd: push 0x8d1e7c */ { u32 v = 0x8d1e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d58c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d58c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d58c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d58d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d58d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d58d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d58d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d58dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d58df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d58e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d58e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d58ec: mov dword ptr [eax], 0xafc820 */ W32((u32)(r_eax), 0xafc820u);
    /* 004d58f2: call 0x4d869c */ r_esp -= 4; W32(r_esp, 0x4d58f7u); f_004d869c();
    /* 004d58f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d58fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5901: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d5906u); f_008171e8();
    /* 004d5906: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5909: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5910: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5912: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5913: ret  */ FN_RET(0x004d58b8); r_esp += 4; return;
}

void f_004d5914(void) /* sub_4D5914 */
{
    FN_ENTER(0x004d5914);
    /* 004d5914: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5915: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d5917: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d5919: call 0x4d5938 */ r_esp -= 4; W32(r_esp, 0x4d591eu); f_004d5938();
    /* 004d591e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d5922: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5924: jne 0x4d592a */ if (!fZ) goto L_004d592a;
L_004d5926:; BB(0x004d5926);
    /* 004d5926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5927: ret 4 */ FN_RET(0x004d5914); r_esp += 8; return;
L_004d592a:; BB(0x004d592a);
    /* 004d592a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d592b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d5930u); f_005c2f74();
    /* 004d5930: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5931: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5932: ret 4 */ FN_RET(0x004d5914); r_esp += 8; return;
}

void f_004d5938(void) /* sub_4D5938 */
{
    FN_ENTER(0x004d5938);
    /* 004d5938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5939: mov ebp, esp */ r_ebp = r_esp;
    /* 004d593b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d593d: push 0x8d1e98 */ { u32 v = 0x8d1e98u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5942: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5949: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5950: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5953: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5956: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d5959: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d595c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d595f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d5962: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5969: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d596c: mov dword ptr [eax], 0xafc7d8 */ W32((u32)(r_eax), 0xafc7d8u);
    /* 004d5972: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4d5977u); f_004d3250();
    /* 004d5977: mov dword ptr [0xa48a9c], 0 */ W32((u32)(0xa48a9cu), 0x0u);
    /* 004d5981: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d5988: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d598b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d5990u); f_008171e8();
    /* 004d5990: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5993: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d599a: mov esp, ebp */ r_esp = r_ebp;
    /* 004d599c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d599d: ret  */ FN_RET(0x004d5938); r_esp += 4; return;
}

void f_004d59a0(void) /* sub_4D59A0 */
{
    FN_ENTER(0x004d59a0);
    /* 004d59a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d59a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d59a4: mov edi, ecx */ r_edi = r_ecx;
    /* 004d59a6: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d59ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d59ae: je 0x4d5a0a */ if (fZ) goto L_004d5a0a;
L_004d59b0:; BB(0x004d59b0);
    /* 004d59b0: call 0x4d4344 */ r_esp -= 4; W32(r_esp, 0x4d59b5u); f_004d4344();
    /* 004d59b5: mov edx, eax */ r_edx = r_eax;
    /* 004d59b7: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004d59ba: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004d59bd: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004d59c0: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 004d59c3: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004d59c6: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004d59c9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004d59cc: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004d59cf: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004d59d2: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004d59d5: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004d59d8: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004d59db: fild dword ptr [edx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x14u)));
    /* 004d59de: fmul dword ptr [0x9094a4] */ ST(0) = ST(0) * R_F32((u32)(0x9094a4u));
    /* 004d59e4: fdiv dword ptr [0x9094a0] */ ST(0) = ST(0) / R_F32((u32)(0x9094a0u));
    /* 004d59ea: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d59ed: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d59f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d59f6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d59fa: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d59fe: fistp dword ptr [edi + 0x54] */ W32((u32)(r_edi+0x54u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d5a01: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d5a04: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 004d5a07: mov dword ptr [edi + 0x58], edx */ W32((u32)(r_edi+0x58u), r_edx);
L_004d5a0a:; BB(0x004d5a0a);
    /* 004d5a0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5a0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5a0e: ret 4 */ FN_RET(0x004d59a0); r_esp += 8; return;
}

void f_004d5a14(void) /* sub_4D5A14 */
{
    FN_ENTER(0x004d5a14);
    /* 004d5a14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a15: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5a17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a19: push 0x8d1ec0 */ { u32 v = 0x8d1ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5a24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5a2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5a2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5a32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d5a35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d5a38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d5a3b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a3d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d5a44: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d5a49u); f_005caba4();
    /* 004d5a49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5a4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d5a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5a4f: je 0x4d5a7f */ if (fZ) goto L_004d5a7f;
L_004d5a51:; BB(0x004d5a51);
    /* 004d5a51: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d5a58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5a5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5a62: call 0x4d5a84 */ r_esp -= 4; W32(r_esp, 0x4d5a67u); f_004d5a84();
    /* 004d5a67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5a6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d5a71:; BB(0x004d5a71);
    /* 004d5a71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5a74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5a7b: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5a7e: ret  */ FN_RET(0x004d5a14); r_esp += 4; return;
L_004d5a7f:; BB(0x004d5a7f);
    /* 004d5a7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5a81: jmp 0x4d5a71 */ goto L_004d5a71;
}

void f_004d5a84(void) /* sub_4D5A84 */
{
    FN_ENTER(0x004d5a84);
    /* 004d5a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5a85: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d5a87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d5a89: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d5a8eu); f_004d1f68();
    /* 004d5a8e: mov dword ptr [ebp], 0xafc7e8 */ W32((u32)(r_ebp), 0xafc7e8u);
    /* 004d5a95: mov eax, ebp */ r_eax = r_ebp;
    /* 004d5a97: mov dword ptr [ebp + 0x38], 4 */ W32((u32)(r_ebp+0x38u), 0x4u);
    /* 004d5a9e: mov dword ptr [0xa48a9c], 0 */ W32((u32)(0xa48a9cu), 0x0u);
    /* 004d5aa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5aa9: ret  */ FN_RET(0x004d5a84); r_esp += 4; return;
}

void f_004d5aac(void) /* sub_4D5AAC */
{
    FN_ENTER(0x004d5aac);
    /* 004d5aac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5aad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5aae: mov edi, ecx */ r_edi = r_ecx;
    /* 004d5ab0: lea esi, [edi + 0x34] */ r_esi = (u32)(r_edi+0x34u);
    /* 004d5ab3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ab4: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5ab7: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 004d5aba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5abb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5abc: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x4d5ac1u); f_007a8f28();
    /* 004d5ac1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d5ac3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5ac6: movzx eax, byte ptr [0xa48b74] */ r_eax = (u32)R8((u32)(0xa48b74u));
    /* 004d5acd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5ad0: je 0x4d5b09 */ if (fZ) goto L_004d5b09;
L_004d5ad2:; BB(0x004d5ad2);
    /* 004d5ad2: movzx eax, word ptr [edi + 0x20] */ r_eax = (u32)R16((u32)(r_edi+0x20u));
    /* 004d5ad6: movzx ecx, word ptr [edi + 0x22] */ r_ecx = (u32)R16((u32)(r_edi+0x22u));
    /* 004d5ada: movzx edx, word ptr [edi + 0x24] */ r_edx = (u32)R16((u32)(r_edi+0x24u));
    /* 004d5ade: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5ae1: mov word ptr [edi + 0x20], ax */ W16((u32)(r_edi+0x20u), (u16)r_eax);
    /* 004d5ae5: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 004d5ae8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5aea: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5aec: je 0x4d5af9 */ if (fZ) goto L_004d5af9;
L_004d5aee:; BB(0x004d5aee);
    /* 004d5aee: movzx eax, byte ptr [0xa48b74] */ r_eax = (u32)R8((u32)(0xa48b74u));
    /* 004d5af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5af7: jne 0x4d5b06 */ if (!fZ) goto L_004d5b06;
L_004d5af9:; BB(0x004d5af9);
    /* 004d5af9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004d5afd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5b02: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_004d5b06:; BB(0x004d5b06);
    /* 004d5b06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5b07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5b08: ret  */ FN_RET(0x004d5aac); r_esp += 4; return;
L_004d5b09:; BB(0x004d5b09);
    /* 004d5b09: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d5b0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b0f: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b15: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x4d5b1au); f_004d8610();
    /* 004d5b1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5b1d: jmp 0x4d5ad2 */ goto L_004d5ad2;
}

void f_004d5b20(void) /* sub_4D5B20 */
{
    FN_ENTER(0x004d5b20);
    /* 004d5b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b21: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b25: push 0x8d1ee8 */ { u32 v = 0x8d1ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5b38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5b3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5b3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d5b41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d5b44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d5b47: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b49: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d5b50: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d5b55u); f_005caba4();
    /* 004d5b55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5b56: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d5b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5b5b: je 0x4d5b89 */ if (fZ) goto L_004d5b89;
L_004d5b5d:; BB(0x004d5b5d);
    /* 004d5b5d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d5b64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5b6b: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5b71: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5b74: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5b77: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5b7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5b7d: call 0x4d5b98 */ r_esp -= 4; W32(r_esp, 0x4d5b82u); f_004d5b98();
    /* 004d5b82: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d5b89:; BB(0x004d5b89);
    /* 004d5b89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5b8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5b93: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b96: ret  */ FN_RET(0x004d5b20); r_esp += 4; return;
}

void f_004d5b98(void) /* sub_4D5B98 */
{
    FN_ENTER(0x004d5b98);
    /* 004d5b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b99: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b9d: push 0x8d1f04 */ { u32 v = 0x8d1f04u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ba2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ba9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5bb0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5bb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5bb6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004d5bb9: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004d5bbc: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004d5bbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004d5bc2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5bc5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004d5bc8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004d5bcb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d5bce: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004d5bd1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004d5bd4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d5bd7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d5bdcu); f_008193cc();
    /* 004d5bdc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5be3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5be6: mov dword ptr [eax], 0xafc810 */ W32((u32)(r_eax), 0xafc810u);
    /* 004d5bec: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d5bf2: lea ecx, [edx + 0x178] */ r_ecx = (u32)(r_edx+0x178u);
    /* 004d5bf8: add edx, 0x184 */ {  u32 a = r_edx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5bfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5bff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5c00: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d5c05u); f_00836208();
    /* 004d5c05: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 004d5c08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5c0b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5c0e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d5c11: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 004d5c13: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004d5c15: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004d5c18: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004d5c1b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d5c20: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004d5c23: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004d5c26: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 004d5c29: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004d5c2c: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 004d5c2f: mov edi, dword ptr [eax + 0x184] */ r_edi = R32((u32)(r_eax+0x184u));
    /* 004d5c35: mov dword ptr [edx + 0x34], edi */ W32((u32)(r_edx+0x34u), r_edi);
    /* 004d5c38: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004d5c3e: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004d5c41: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 004d5c47: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004d5c4a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d5c4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5c4f: jne 0x4d5c5c */ if (!fZ) goto L_004d5c5c;
L_004d5c51:; BB(0x004d5c51);
    /* 004d5c51: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d5c56: mov word ptr [edx + 0x22], cx */ W16((u32)(r_edx+0x22u), (u16)r_ecx);
    /* 004d5c5a: jmp 0x4d5c60 */ goto L_004d5c60;
L_004d5c5c:; BB(0x004d5c5c);
    /* 004d5c5c: mov word ptr [edx + 0x22], cx */ W16((u32)(r_edx+0x22u), (u16)r_ecx);
L_004d5c60:; BB(0x004d5c60);
    /* 004d5c60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5c63: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 004d5c66: mov word ptr [edx + 0x24], bx */ W16((u32)(r_edx+0x24u), (u16)r_ebx);
    /* 004d5c6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d5c6c: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 004d5c72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5c74: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 004d5c7a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d5c7c: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 004d5c82: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5c84: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004d5c87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5c89: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 004d5c8c: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004d5c8f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d5c94u); f_0083173c();
    /* 004d5c94: fcomp dword ptr [0x909498] */ fx_compare(ST(0), R_F32((u32)(0x909498u))); FPOP();
    /* 004d5c9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d5c9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d5c9d: je 0x4d5ca9 */ if (fZ) goto L_004d5ca9;
L_004d5c9f:; BB(0x004d5c9f);
    /* 004d5c9f: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 004d5ca2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d5ca7u); f_0082df08();
    /* 004d5ca7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d5ca9:; BB(0x004d5ca9);
    /* 004d5ca9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5cac: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d5cb1: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 004d5cb4: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 004d5cb7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004d5cb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5cbb: fadd dword ptr [eax + 0x178] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x178u));
    /* 004d5cc1: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 004d5cc4: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 004d5cc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5cc9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004d5ccb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d5ccd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d5ccf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5cd1: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 004d5cd4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d5cd6: fadd dword ptr [eax + 0x17c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x17cu));
    /* 004d5cdc: fstp dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0)); FPOP();
    /* 004d5cdf: fadd dword ptr [eax + 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x180u));
    /* 004d5ce5: add eax, 0x184 */ {  u32 a = r_eax; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d5cea: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 004d5ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5cee: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5cf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5cf2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4d5cf7u); f_00836208();
    /* 004d5cf7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5cfa: mov ebx, dword ptr [0xa48a54] */ r_ebx = R32((u32)(0xa48a54u));
    /* 004d5d00: movzx eax, word ptr [ecx + 0x22] */ r_eax = (u32)R16((u32)(r_ecx+0x22u));
    /* 004d5d04: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004d5d07: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004d5d0a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004d5d0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d5d0e: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 004d5d11: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 004d5d15: lea esi, [ebx + 0x178] */ r_esi = (u32)(r_ebx+0x178u);
    /* 004d5d1b: add ebx, 0x184 */ {  u32 a = r_ebx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d5d21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d23: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x4d5d28u); f_004d8610();
    /* 004d5d28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5d2b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5d2e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004d5d31: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004d5d34: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d5d37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5d3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5d41: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5d43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5d44: ret 0x10 */ FN_RET(0x004d5b98); r_esp += 20; return;
}

void f_004d5d48(void) /* sub_4D5D48 */
{
    FN_ENTER(0x004d5d48);
    /* 004d5d48: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5d4c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5d50: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x4d5d55u); f_004d8610();
    /* 004d5d55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5d58: ret  */ FN_RET(0x004d5d48); r_esp += 4; return;
}

void f_004d5d5c(void) /* sub_4D5D5C */
{
    FN_ENTER(0x004d5d5c);
    /* 004d5d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d5d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5d5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d61: push 0x8d1f20 */ { u32 v = 0x8d1f20u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d5d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5d6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d5d74: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5d77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d5d7a: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 004d5d7d: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 004d5d80: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 004d5d83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004d5d86: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5d89: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004d5d8c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004d5d8f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d5d92: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004d5d95: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004d5d98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d5d9b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004d5d9e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004d5da1: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 004d5da5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004d5da8: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004d5dac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004d5daf: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d5db4u); f_008193cc();
    /* 004d5db4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d5dbb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5dbe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d5dc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5dc4: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d5dc7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d5dca: mov dword ptr [edx], 0xafc820 */ W32((u32)(r_edx), 0xafc820u);
    /* 004d5dd0: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004d5dd3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004d5dd6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004d5dd9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d5ddc: mov word ptr [edx + 0x28], cx */ W16((u32)(r_edx+0x28u), (u16)r_ecx);
    /* 004d5de0: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 004d5de3: mov word ptr [edx + 0x2a], si */ W16((u32)(r_edx+0x2au), (u16)r_esi);
    /* 004d5de7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004d5de9: mov word ptr [edx + 0x2c], di */ W16((u32)(r_edx+0x2cu), (u16)r_edi);
    /* 004d5ded: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 004d5df1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d5df4: jg 0x4d5e1f */ if ((!fZ&&fS==fO)) goto L_004d5e1f;
L_004d5df6:; BB(0x004d5df6);
    /* 004d5df6: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 004d5df9: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004d5dfc: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004d5dff: movzx ecx, word ptr [edx + 8] */ r_ecx = (u32)R16((u32)(r_edx+0x8u));
    /* 004d5e03: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5e09: mov word ptr [edx + 8], cx */ W16((u32)(r_edx+0x8u), (u16)r_ecx);
    /* 004d5e0d: mov eax, edx */ r_eax = r_edx;
    /* 004d5e0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5e12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5e19: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5e1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5e1c: ret 0x1c */ FN_RET(0x004d5d5c); r_esp += 32; return;
L_004d5e1f:; BB(0x004d5e1f);
    /* 004d5e1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d5e22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5e24: je 0x4d5df6 */ if (fZ) goto L_004d5df6;
L_004d5e26:; BB(0x004d5e26);
    /* 004d5e26: mov ecx, esi */ r_ecx = r_esi;
    /* 004d5e28: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5e2e: je 0x4d5e5d */ if (fZ) goto L_004d5e5d;
L_004d5e30:; BB(0x004d5e30);
    /* 004d5e30: mov eax, ecx */ r_eax = r_ecx;
    /* 004d5e32: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d5e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e37: call 0x4d865c */ r_esp -= 4; W32(r_esp, 0x4d5e3cu); f_004d865c();
    /* 004d5e3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5e3f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
L_004d5e42:; BB(0x004d5e42);
    /* 004d5e42: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 004d5e45: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004d5e48: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004d5e4b: mov eax, edx */ r_eax = r_edx;
    /* 004d5e4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d5e50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d5e57: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5e59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5e5a: ret 0x1c */ FN_RET(0x004d5d5c); r_esp += 32; return;
L_004d5e5d:; BB(0x004d5e5d);
    /* 004d5e5d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d5e60: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d5e63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d5e65: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5e67: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004d5e6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d5e6c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5e6e: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004d5e71: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5e73: je 0x4d5e42 */ if (fZ) goto L_004d5e42;
L_004d5e75:; BB(0x004d5e75);
    /* 004d5e75: mov eax, edi */ r_eax = r_edi;
    /* 004d5e77: mov edx, esi */ r_edx = r_esi;
    /* 004d5e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e7b: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x4d5e80u); f_004d8610();
    /* 004d5e80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5e83: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004d5e86: jmp 0x4d5e42 */ goto L_004d5e42;
}

void f_004d5e88(void) /* sub_4D5E88 */
{
    FN_ENTER(0x004d5e88);
    /* 004d5e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5e8b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5e8e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d5e90: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d5e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5e95: je 0x4d5f39 */ if (fZ) goto L_004d5f39;
L_004d5e9b:; BB(0x004d5e9b);
    /* 004d5e9b: movsx ebp, word ptr [ebx + 0x2c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004d5e9f: movzx edx, word ptr [ebx + 0x2a] */ r_edx = (u32)R16((u32)(r_ebx+0x2au));
    /* 004d5ea3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d5ea6: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5eac: mov word ptr [ebx + 0x2c], bp */ W16((u32)(r_ebx+0x2cu), (u16)r_ebp);
    /* 004d5eb0: je 0x4d5ee6 */ if (fZ) goto L_004d5ee6;
L_004d5eb2:; BB(0x004d5eb2);
    /* 004d5eb2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004d5eb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5eb6: movsx ecx, word ptr [ebx + 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 004d5eba: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 004d5ebd: movsx ebp, word ptr [ebx + 0x2e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2eu));
    /* 004d5ec1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ec2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ec3: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5ec6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ec8: call 0x7be414 */ r_esp -= 4; W32(r_esp, 0x4d5ecdu); f_007be414();
    /* 004d5ecd: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d5ed1: movzx ebx, word ptr [ebx + 0x2a] */ r_ebx = (u32)R16((u32)(r_ebx+0x2au));
    /* 004d5ed5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ed7: call 0x4d865c */ r_esp -= 4; W32(r_esp, 0x4d5edcu); f_004d865c();
    /* 004d5edc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5edf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5ee2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5ee3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5ee4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5ee5: ret  */ FN_RET(0x004d5e88); r_esp += 4; return;
L_004d5ee6:; BB(0x004d5ee6);
    /* 004d5ee6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004d5ee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5eea: movsx ecx, word ptr [ebx + 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 004d5eee: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 004d5ef1: movsx ebp, word ptr [ebx + 0x2e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2eu));
    /* 004d5ef5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ef6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ef7: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5efa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5efc: call 0x7be414 */ r_esp -= 4; W32(r_esp, 0x4d5f01u); f_007be414();
    /* 004d5f01: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004d5f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f06: movsx edi, word ptr [ebx + 0x28] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 004d5f0a: movsx ebp, word ptr [ebx + 0x2c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004d5f0e: movsx edx, word ptr [ebx + 0x2e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2eu));
    /* 004d5f12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f14: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5f17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f18: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5f1b: call 0x7be414 */ r_esp -= 4; W32(r_esp, 0x4d5f20u); f_007be414();
    /* 004d5f20: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004d5f24: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004d5f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f2a: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x4d5f2fu); f_004d8610();
    /* 004d5f2f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d5f32: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5f35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5f36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5f37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5f38: ret  */ FN_RET(0x004d5e88); r_esp += 4; return;
L_004d5f39:; BB(0x004d5f39);
    /* 004d5f39: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004d5f3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d5f3e: jne 0x4d5e9b */ if (!fZ) goto L_004d5e9b;
L_004d5f44:; BB(0x004d5f44);
    /* 004d5f44: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004d5f48: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d5f4d: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004d5f51: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5f54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5f55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5f56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5f57: ret  */ FN_RET(0x004d5e88); r_esp += 4; return;
}

void f_004d5f58(void) /* sub_4D5F58 */
{
    FN_ENTER(0x004d5f58);
    /* 004d5f58: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5f5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d5f63u); f_0068d5a8();
    /* 004d5f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5f66: je 0x4d5f6f */ if (fZ) goto L_004d5f6f;
L_004d5f68:; BB(0x004d5f68);
    /* 004d5f68: mov ecx, eax */ r_ecx = r_eax;
    /* 004d5f6a: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x4d5f6fu); f_00692804();
L_004d5f6f:; BB(0x004d5f6f);
    /* 004d5f6f: ret  */ FN_RET(0x004d5f58); r_esp += 4; return;
}

void f_004d5f70(void) /* sub_4D5F70 */
{
    FN_ENTER(0x004d5f70);
    /* 004d5f70: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d5f76: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d5f7bu); f_0068d5a8();
    /* 004d5f7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d5f7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d5f7e: je 0x4d5f87 */ if (fZ) goto L_004d5f87;
L_004d5f80:; BB(0x004d5f80);
    /* 004d5f80: mov ecx, eax */ r_ecx = r_eax;
    /* 004d5f82: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x4d5f87u); f_00693240();
L_004d5f87:; BB(0x004d5f87);
    /* 004d5f87: ret  */ FN_RET(0x004d5f70); r_esp += 4; return;
}

void f_004d5f88(void) /* sub_4D5F88 */
{
    FN_ENTER(0x004d5f88);
    /* 004d5f88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f8b: mov edi, ecx */ r_edi = r_ecx;
    /* 004d5f8d: push 0x3f39999a */ { u32 v = 0x3f39999au; r_esp -= 4; W32(r_esp, v); }
    /* 004d5f92: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004d5f95: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 004d5f98: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5f9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5f9d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5f9f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fa1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fa3: lea eax, [edx + edx + 0x909260] */ r_eax = (u32)(r_edx+r_edx+0x909260u);
    /* 004d5faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fac: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x4d5fb1u); f_004d63b0();
    /* 004d5fb1: push 0x3f39999a */ { u32 v = 0x3f39999au; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fb6: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004d5fb9: lea ebx, [edi + 0x28] */ r_ebx = (u32)(r_edi+0x28u);
    /* 004d5fbc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d5fbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fc1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fc3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fc5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d5fc7: lea ecx, [edx + edx + 0x90926c] */ r_ecx = (u32)(r_edx+r_edx+0x90926cu);
    /* 004d5fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fd0: call 0x4d63b0 */ r_esp -= 4; W32(r_esp, 0x4d5fd5u); f_004d63b0();
    /* 004d5fd5: mov dword ptr [0xa48a9c], 1 */ W32((u32)(0xa48a9cu), 0x1u);
    /* 004d5fdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d5fe1: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x4d5fe6u); f_004d33c0();
    /* 004d5fe6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d5fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d5fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d5feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d5fec: ret  */ FN_RET(0x004d5f88); r_esp += 4; return;
}

void f_004d5ff0(void) /* sub_4D5FF0 */
{
    FN_ENTER(0x004d5ff0);
    /* 004d5ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ff5: push 0x8d1f48 */ { u32 v = 0x8d1f48u; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d6000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6001: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d6008: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d600b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d600e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d6011: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d6014: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d6017: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004d601c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004d6023: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d6026: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004d6028: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d602du); f_005caba4();
    /* 004d602d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d602e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004d6031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6033: je 0x4d6070 */ if (fZ) goto L_004d6070;
L_004d6035:; BB(0x004d6035);
    /* 004d6035: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004d603c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d6043: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d6049: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d604c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d604f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d6052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6053: call 0x4d6074 */ r_esp -= 4; W32(r_esp, 0x4d6058u); f_004d6074();
    /* 004d6058: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d605b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004d6062:; BB(0x004d6062);
    /* 004d6062: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6065: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d606c: mov esp, ebp */ r_esp = r_ebp;
    /* 004d606e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d606f: ret  */ FN_RET(0x004d5ff0); r_esp += 4; return;
L_004d6070:; BB(0x004d6070);
    /* 004d6070: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6072: jmp 0x4d6062 */ goto L_004d6062;
}

