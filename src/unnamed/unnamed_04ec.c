#include "protos.h"

void f_004ec000(void) /* sub_4EC000 */
{
    FN_ENTER(0x004ec000);
    /* 004ec000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec001: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec007: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ec009: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4ec00eu); f_004d28a4();
    /* 004ec00e: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004ec011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec013: jne 0x4ec024 */ if (!fZ) goto L_004ec024;
L_004ec015:; BB(0x004ec015);
    /* 004ec015: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ec018: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ec01a: call 0x4ec2bc */ r_esp -= 4; W32(r_esp, 0x4ec01fu); f_004ec2bc();
    /* 004ec01f: jmp 0x4ec29f */ goto L_004ec29f;
L_004ec024:; BB(0x004ec024);
    /* 004ec024: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec027: jne 0x4ec29f */ if (!fZ) goto L_004ec29f;
L_004ec02d:; BB(0x004ec02d);
    /* 004ec02d: movzx eax, byte ptr [0xa72268] */ r_eax = (u32)R8((u32)(0xa72268u));
    /* 004ec034: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004ec037: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec039: jne 0x4ec04d */ if (!fZ) goto L_004ec04d;
L_004ec03b:; BB(0x004ec03b);
    /* 004ec03b: mov dword ptr [0xa7226c], 0x42100000 */ W32((u32)(0xa7226cu), 0x42100000u);
    /* 004ec045: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec048: mov byte ptr [0xa72268], al */ W8((u32)(0xa72268u), (u8)r_eax);
L_004ec04d:; BB(0x004ec04d);
    /* 004ec04d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec04f: jne 0x4ec063 */ if (!fZ) goto L_004ec063;
L_004ec051:; BB(0x004ec051);
    /* 004ec051: mov dword ptr [0xa72270], 0x4126147b */ W32((u32)(0xa72270u), 0x4126147bu);
    /* 004ec05b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec05e: mov byte ptr [0xa72268], al */ W8((u32)(0xa72268u), (u8)r_eax);
L_004ec063:; BB(0x004ec063);
    /* 004ec063: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec065: jne 0x4ec07c */ if (!fZ) goto L_004ec07c;
L_004ec067:; BB(0x004ec067);
    /* 004ec067: mov dword ptr [0xa72274], 0xc1900000 */ W32((u32)(0xa72274u), 0xc1900000u);
    /* 004ec071: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ec074: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec077: mov byte ptr [0xa72268], al */ W8((u32)(0xa72268u), (u8)r_eax);
L_004ec07c:; BB(0x004ec07c);
    /* 004ec07c: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec07e: jne 0x4ec09f */ if (!fZ) goto L_004ec09f;
L_004ec080:; BB(0x004ec080);
    /* 004ec080: mov dword ptr [0xa72278], 0xc1400000 */ W32((u32)(0xa72278u), 0xc1400000u);
    /* 004ec08a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ec08d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec090: mov dword ptr [0xa7227c], 0xc1400000 */ W32((u32)(0xa7227cu), 0xc1400000u);
    /* 004ec09a: mov byte ptr [0xa72268], al */ W8((u32)(0xa72268u), (u8)r_eax);
L_004ec09f:; BB(0x004ec09f);
    /* 004ec09f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec0a1: jne 0x4ec0c9 */ if (!fZ) goto L_004ec0c9;
L_004ec0a3:; BB(0x004ec0a3);
    /* 004ec0a3: fld dword ptr [0x91dab4] */ FPUSH(R_F32((u32)(0x91dab4u)));
    /* 004ec0a9: mov dword ptr [0xa72280], 0x44230000 */ W32((u32)(0xa72280u), 0x44230000u);
    /* 004ec0b3: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec0b8: mov dword ptr [0xa72284], 0x43f60000 */ W32((u32)(0xa72284u), 0x43f60000u);
    /* 004ec0c2: mov byte ptr [0xa72268], al */ W8((u32)(0xa72268u), (u8)r_eax);
    /* 004ec0c7: jmp 0x4ec0cf */ goto L_004ec0cf;
L_004ec0c9:; BB(0x004ec0c9);
    /* 004ec0c9: fld dword ptr [0xa72284] */ FPUSH(R_F32((u32)(0xa72284u)));
L_004ec0cf:; BB(0x004ec0cf);
    /* 004ec0cf: fld dword ptr [0x91da8c] */ FPUSH(R_F32((u32)(0x91da8cu)));
    /* 004ec0d5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004ec0d7: fld dword ptr [0xa7227c] */ FPUSH(R_F32((u32)(0xa7227cu)));
    /* 004ec0dd: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ec0df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec0e1: mov edx, 1 */ r_edx = 0x1u;
    /* 004ec0e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec0e7: jae 0x4ec2ac */ if (!fC) goto L_004ec2ac;
L_004ec0ed:; BB(0x004ec0ed);
    /* 004ec0ed: fld dword ptr [0xa72280] */ FPUSH(R_F32((u32)(0xa72280u)));
    /* 004ec0f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec0f5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004ec0f9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec0fb: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004ec0ff: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004ec103: mov edi, edx */ r_edi = r_edx;
    /* 004ec105: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_004ec107:; BB(0x004ec107);
    /* 004ec107: fld dword ptr [0xa72278] */ FPUSH(R_F32((u32)(0xa72278u)));
    /* 004ec10d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec10f: jne 0x4ec117 */ if (!fZ) goto L_004ec117;
L_004ec111:; BB(0x004ec111);
    /* 004ec111: fadd dword ptr [0xa72274] */ ST(0) = ST(0) + R_F32((u32)(0xa72274u));
L_004ec117:; BB(0x004ec117);
    /* 004ec117: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004ec119: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec11b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec11c: jae 0x4ec2b4 */ if (!fC) goto L_004ec2b4;
L_004ec122:; BB(0x004ec122);
    /* 004ec122: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004ec124: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ec126: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec128: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004ec12c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_004ec130:; BB(0x004ec130);
    /* 004ec130: fld dword ptr [0x91dab0] */ FPUSH(R_F32((u32)(0x91dab0u)));
    /* 004ec136: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004ec13a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004ec13e: fld dword ptr [0x91daac] */ FPUSH(R_F32((u32)(0x91daacu)));
    /* 004ec144: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004ec148: fld dword ptr [0x91daa8] */ FPUSH(R_F32((u32)(0x91daa8u)));
    /* 004ec14e: fld dword ptr [0x91daa4] */ FPUSH(R_F32((u32)(0x91daa4u)));
    /* 004ec154: fld dword ptr [0x91daa0] */ FPUSH(R_F32((u32)(0x91daa0u)));
    /* 004ec15a: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004ec15c: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 004ec15e: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004ec160: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004ec162: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004ec164: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 004ec166: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004ec168: fadd st(7), st(0) */ ST(7) = ST(7) + ST(0);
    /* 004ec16a: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 004ec16c: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004ec170: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004ec174: fld dword ptr [0x91da9c] */ FPUSH(R_F32((u32)(0x91da9cu)));
    /* 004ec17a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 004ec17c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec17e: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 004ec180: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004ec182: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 004ec186: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 004ec18d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec18f: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 004ec191: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004ec195: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004ec197: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 004ec19b: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004ec19f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec1a1: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004ec1a3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec1a5: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 004ec1a9: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 004ec1ad: fld dword ptr [0x91da98] */ FPUSH(R_F32((u32)(0x91da98u)));
    /* 004ec1b3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ec1b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec1b7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004ec1b9: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 004ec1bd: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004ec1c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ec1c3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004ec1c7: fld dword ptr [0x91da94] */ FPUSH(R_F32((u32)(0x91da94u)));
    /* 004ec1cd: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 004ec1d1: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004ec1d4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004ec1d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec1dd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ec1e1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ec1e5: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ec1e9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004ec1ec: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ec1f0: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ec1f3: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004ec1f7: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004ec1ff: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004ec203: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004ec207: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004ec20b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004ec20f: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004ec213: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 004ec217: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004ec21b: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 004ec21f: mov ecx, 6 */ r_ecx = 0x6u;
    /* 004ec224: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004ec228: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ec22c: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004ec230: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec232: push 0xbfc00000 */ { u32 v = 0xbfc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec239: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4ec23eu); f_0082b5d8();
    /* 004ec23e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ec241: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004ec245: fadd dword ptr [0xa7226c] */ ST(0) = ST(0) + R_F32((u32)(0xa7226cu));
    /* 004ec24b: fld dword ptr [0xa72280] */ FPUSH(R_F32((u32)(0xa72280u)));
    /* 004ec251: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ec253: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec255: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec257: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004ec25b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec25c: jbe 0x4ec265 */ if ((fC||fZ)) goto L_004ec265;
L_004ec25e:; BB(0x004ec25e);
    /* 004ec25e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ec260: jmp 0x4ec130 */ goto L_004ec130;
L_004ec265:; BB(0x004ec265);
    /* 004ec265: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004ec269: fld dword ptr [0xa72284] */ FPUSH(R_F32((u32)(0xa72284u)));
L_004ec26f:; BB(0x004ec26f);
    /* 004ec26f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec271: fadd dword ptr [0xa72270] */ ST(0) = ST(0) + R_F32((u32)(0xa72270u));
    /* 004ec277: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ec279: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec27b: xor edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ec27e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec27f: jb 0x4ec107 */ if (fC) goto L_004ec107;
L_004ec285:; BB(0x004ec285);
    /* 004ec285: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004ec287: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ec289: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ec28b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004ec28f: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
L_004ec292:; BB(0x004ec292);
    /* 004ec292: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ec294: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec295: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ec298: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ec29a: call 0x4ec2bc */ r_esp -= 4; W32(r_esp, 0x4ec29fu); f_004ec2bc();
L_004ec29f:; BB(0x004ec29f);
    /* 004ec29f: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4ec2a4u); f_004d2968();
    /* 004ec2a4: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec2ab: ret  */ FN_RET(0x004ec000); r_esp += 4; return;
L_004ec2ac:; BB(0x004ec2ac);
    /* 004ec2ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ec2ae: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ec2b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ec2b2: jmp 0x4ec292 */ goto L_004ec292;
L_004ec2b4:; BB(0x004ec2b4);
    /* 004ec2b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ec2b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec2b8: jmp 0x4ec26f */ goto L_004ec26f;
}

void f_004ec2bc(void) /* sub_4EC2BC */
{
    FN_ENTER(0x004ec2bc);
    /* 004ec2bc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec2bf: movzx ecx, byte ptr [0xa72264] */ r_ecx = (u32)R8((u32)(0xa72264u));
    /* 004ec2c6: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec2c9: jne 0x4ec2de */ if (!fZ) goto L_004ec2de;
L_004ec2cb:; BB(0x004ec2cb);
    /* 004ec2cb: mov dword ptr [0xa72288], 0x44200000 */ W32((u32)(0xa72288u), 0x44200000u);
    /* 004ec2d5: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ec2d8: mov byte ptr [0xa72264], cl */ W8((u32)(0xa72264u), (u8)r_ecx);
L_004ec2de:; BB(0x004ec2de);
    /* 004ec2de: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec2e1: jne 0x4ec2f6 */ if (!fZ) goto L_004ec2f6;
L_004ec2e3:; BB(0x004ec2e3);
    /* 004ec2e3: mov dword ptr [0xa7228c], 0x43f00000 */ W32((u32)(0xa7228cu), 0x43f00000u);
    /* 004ec2ed: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ec2f0: mov byte ptr [0xa72264], cl */ W8((u32)(0xa72264u), (u8)r_ecx);
L_004ec2f6:; BB(0x004ec2f6);
    /* 004ec2f6: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec2f9: jne 0x4ec350 */ if (!fZ) goto L_004ec350;
L_004ec2fb:; BB(0x004ec2fb);
    /* 004ec2fb: mov eax, dword ptr [0xa72288] */ r_eax = R32((u32)(0xa72288u));
    /* 004ec300: mov edx, dword ptr [0xa7228c] */ r_edx = R32((u32)(0xa7228cu));
    /* 004ec306: mov dword ptr [0xa72290], 0 */ W32((u32)(0xa72290u), 0x0u);
    /* 004ec310: or ecx, 0xffffff04 */ {  u32 a = r_ecx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ec316: mov dword ptr [0xa72294], 0 */ W32((u32)(0xa72294u), 0x0u);
    /* 004ec320: mov dword ptr [0xa72298], eax */ W32((u32)(0xa72298u), r_eax);
    /* 004ec325: mov dword ptr [0xa722a0], eax */ W32((u32)(0xa722a0u), r_eax);
    /* 004ec32a: mov dword ptr [0xa7229c], 0 */ W32((u32)(0xa7229cu), 0x0u);
    /* 004ec334: mov dword ptr [0xa722a4], edx */ W32((u32)(0xa722a4u), r_edx);
    /* 004ec33a: mov dword ptr [0xa722a8], 0 */ W32((u32)(0xa722a8u), 0x0u);
    /* 004ec344: mov dword ptr [0xa722ac], edx */ W32((u32)(0xa722acu), r_edx);
    /* 004ec34a: mov byte ptr [0xa72264], cl */ W8((u32)(0xa72264u), (u8)r_ecx);
L_004ec350:; BB(0x004ec350);
    /* 004ec350: fld dword ptr [0x91da88] */ FPUSH(R_F32((u32)(0x91da88u)));
    /* 004ec356: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004ec35a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004ec35e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004ec363: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec368: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ec36c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004ec370: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ec374: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ec378: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004ec37c: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004ec384: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ec387: mov dword ptr [esp + 0x10], 0xa72290 */ W32((u32)(r_esp+0x10u), 0xa72290u);
    /* 004ec38f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ec393: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004ec398: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ec39c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004ec3a0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ec3a3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ec3a6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004ec3aa: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004ec3ae: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004ec3b2: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3b4: push 0xbfc00000 */ { u32 v = 0xbfc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3bb: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4ec3c0u); f_0082b5d8();
    /* 004ec3c0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec3c3: ret 4 */ FN_RET(0x004ec2bc); r_esp += 8; return;
}

void f_004ec3c8(void) /* sub_4EC3C8 */
{
    FN_ENTER(0x004ec3c8);
    /* 004ec3c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec3cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3cd: push 0x8d2960 */ { u32 v = 0x8d2960u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ec3d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ec3e0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec3e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ec3e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ec3e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ec3ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ec3ef: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec3f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ec3f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ec3fdu); f_005caba4();
    /* 004ec3fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ec400: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ec403: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ec406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec408: je 0x4ec49b */ if (fZ) goto L_004ec49b;
L_004ec40e:; BB(0x004ec40e);
    /* 004ec40e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ec415: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ec41c: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ec422: mov ecx, eax */ r_ecx = r_eax;
    /* 004ec424: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ec429u); f_008193cc();
    /* 004ec429: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec42c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004ec42f: mov dword ptr [ecx], 0xafd4c8 */ W32((u32)(r_ecx), 0xafd4c8u);
    /* 004ec435: mov eax, dword ptr [0x9b8d9c] */ r_eax = R32((u32)(0x9b8d9cu));
    /* 004ec43a: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 004ec441: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004ec444: lea edi, [edx + 3] */ r_edi = (u32)(r_edx+0x3u);
    /* 004ec447: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 004ec44e: mov ebx, 0x1c2 */ r_ebx = 0x1c2u;
    /* 004ec453: cmp edi, 0x1c2 */ {  u32 a = r_edi; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec459: jl 0x4ec45d */ if ((fS!=fO)) goto L_004ec45d;
L_004ec45b:; BB(0x004ec45b);
    /* 004ec45b: mov edi, ebx */ r_edi = r_ebx;
L_004ec45d:; BB(0x004ec45d);
    /* 004ec45d: mov esi, 4 */ r_esi = 0x4u;
    /* 004ec462: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec465: jg 0x4ec469 */ if ((!fZ&&fS==fO)) goto L_004ec469;
L_004ec467:; BB(0x004ec467);
    /* 004ec467: mov edi, esi */ r_edi = r_esi;
L_004ec469:; BB(0x004ec469);
    /* 004ec469: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 004ec46c: call 0x4ebfc4 */ r_esp -= 4; W32(r_esp, 0x4ec471u); f_004ebfc4();
    /* 004ec471: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ec474: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec477: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ec47e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004ec481:; BB(0x004ec481);
    /* 004ec481: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec484: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ec487: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ec48a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ec48d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ec490: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ec497: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec49a: ret  */ FN_RET(0x004ec3c8); r_esp += 4; return;
L_004ec49b:; BB(0x004ec49b);
    /* 004ec49b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ec49d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ec4a0: jmp 0x4ec481 */ goto L_004ec481;
}

void f_004ec4a4(void) /* sub_4EC4A4 */
{
    FN_ENTER(0x004ec4a4);
    /* 004ec4a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec4a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec4a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec4a9: push 0x8d2988 */ { u32 v = 0x8d2988u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec4ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ec4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec4b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ec4bc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec4bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ec4c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ec4c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ec4c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ec4cb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec4cd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ec4d4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ec4d9u); f_005caba4();
    /* 004ec4d9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ec4dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ec4df: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ec4e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec4e4: je 0x4ec573 */ if (fZ) goto L_004ec573;
L_004ec4ea:; BB(0x004ec4ea);
    /* 004ec4ea: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ec4f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ec4f8: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ec4fe: mov ecx, eax */ r_ecx = r_eax;
    /* 004ec500: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ec505u); f_008193cc();
    /* 004ec505: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec508: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004ec50b: mov dword ptr [ecx], 0xafd4c8 */ W32((u32)(r_ecx), 0xafd4c8u);
    /* 004ec511: mov eax, dword ptr [0x9b8d9c] */ r_eax = R32((u32)(0x9b8d9cu));
    /* 004ec516: mov dword ptr [ecx + 0x1c], 0xffffffff */ W32((u32)(r_ecx+0x1cu), 0xffffffffu);
    /* 004ec51d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004ec520: lea edi, [edx + 3] */ r_edi = (u32)(r_edx+0x3u);
    /* 004ec523: mov ebx, 0x1c2 */ r_ebx = 0x1c2u;
    /* 004ec528: cmp edi, 0x1c2 */ {  u32 a = r_edi; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec52e: mov esi, 4 */ r_esi = 0x4u;
    /* 004ec533: jl 0x4ec537 */ if ((fS!=fO)) goto L_004ec537;
L_004ec535:; BB(0x004ec535);
    /* 004ec535: mov edi, ebx */ r_edi = r_ebx;
L_004ec537:; BB(0x004ec537);
    /* 004ec537: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec53a: jg 0x4ec53e */ if ((!fZ&&fS==fO)) goto L_004ec53e;
L_004ec53c:; BB(0x004ec53c);
    /* 004ec53c: mov edi, esi */ r_edi = r_esi;
L_004ec53e:; BB(0x004ec53e);
    /* 004ec53e: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 004ec541: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 004ec544: call 0x4ebfc4 */ r_esp -= 4; W32(r_esp, 0x4ec549u); f_004ebfc4();
    /* 004ec549: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ec54c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec54f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ec556: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004ec559:; BB(0x004ec559);
    /* 004ec559: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ec55c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ec55f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ec562: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ec565: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ec568: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ec56f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec572: ret  */ FN_RET(0x004ec4a4); r_esp += 4; return;
L_004ec573:; BB(0x004ec573);
    /* 004ec573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ec575: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ec578: jmp 0x4ec559 */ goto L_004ec559;
}

void f_004ec57c(void) /* sub_4EC57C */
{
    FN_ENTER(0x004ec57c);
    /* 004ec57c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec57d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ec57f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ec581: call 0x4ec5a0 */ r_esp -= 4; W32(r_esp, 0x4ec586u); f_004ec5a0();
    /* 004ec586: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ec58a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ec58c: jne 0x4ec592 */ if (!fZ) goto L_004ec592;
L_004ec58e:; BB(0x004ec58e);
    /* 004ec58e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ec58f: ret 4 */ FN_RET(0x004ec57c); r_esp += 8; return;
L_004ec592:; BB(0x004ec592);
    /* 004ec592: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec593: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ec598u); f_005c2f74();
    /* 004ec598: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ec599: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ec59a: ret 4 */ FN_RET(0x004ec57c); r_esp += 8; return;
}

void f_004ec5a0(void) /* sub_4EC5A0 */
{
    FN_ENTER(0x004ec5a0);
    /* 004ec5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec5a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5a5: push 0x8d29a4 */ { u32 v = 0x8d29a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ec5b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ec5b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec5bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ec5be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ec5c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ec5c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ec5c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ec5ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ec5cd: mov dword ptr [ecx], 0xafd528 */ W32((u32)(r_ecx), 0xafd528u);
    /* 004ec5d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ec5da: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ec5dfu); f_008171e8();
    /* 004ec5df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ec5e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ec5e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec5eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec5ec: ret  */ FN_RET(0x004ec5a0); r_esp += 4; return;
}

void f_004ec5f0(void) /* sub_4EC5F0 */
{
    FN_ENTER(0x004ec5f0);
    /* 004ec5f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5f3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec5f6: mov esi, ecx */ r_esi = r_ecx;
    /* 004ec5f8: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 004ec5fc: mov ecx, esi */ r_ecx = r_esi;
    /* 004ec5fe: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ec602: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ec607u); f_008193cc();
    /* 004ec607: mov dword ptr [esi], 0xafd528 */ W32((u32)(r_esi), 0xafd528u);
    /* 004ec60d: mov eax, dword ptr [0x9b8da0] */ r_eax = R32((u32)(0x9b8da0u));
    /* 004ec612: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004ec615: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec61au); f_008587a5();
    /* 004ec61a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ec61d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ec620: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec626: fmul dword ptr [0x91db20] */ ST(0) = ST(0) * R_F32((u32)(0x91db20u));
    /* 004ec62c: fadd dword ptr [0x91db24] */ ST(0) = ST(0) + R_F32((u32)(0x91db24u));
    /* 004ec632: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004ec636: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004ec63b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec640: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ec644: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ec648: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ec64c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ec650: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004ec654: mov dword ptr [esi + 0x20], edi */ W32((u32)(r_esi+0x20u), r_edi);
    /* 004ec657: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec65cu); f_008587a5();
    /* 004ec65c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ec660: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec664: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec66a: fmul dword ptr [0x91db24] */ ST(0) = ST(0) * R_F32((u32)(0x91db24u));
    /* 004ec670: fadd dword ptr [0x91db20] */ ST(0) = ST(0) + R_F32((u32)(0x91db20u));
    /* 004ec676: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004ec67a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec67e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ec680: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004ec684: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004ec689: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec68e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ec692: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ec696: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ec69a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ec69e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004ec6a2: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 004ec6a5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec6aau); f_008587a5();
    /* 004ec6aa: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ec6ae: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec6b2: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec6b8: fmul dword ptr [0x91db14] */ ST(0) = ST(0) * R_F32((u32)(0x91db14u));
    /* 004ec6be: fadd dword ptr [0x91db18] */ ST(0) = ST(0) + R_F32((u32)(0x91db18u));
    /* 004ec6c4: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004ec6c8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec6cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ec6ce: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004ec6d2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004ec6d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec6dc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ec6e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ec6e4: fistp dword ptr [esi + 0x28] */ W32((u32)(r_esi+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ec6e7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ec6eb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec6f0u); f_008587a5();
    /* 004ec6f0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ec6f4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec6f8: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec6fe: fmul dword ptr [0x91dad4] */ ST(0) = ST(0) * R_F32((u32)(0x91dad4u));
    /* 004ec704: fadd dword ptr [0x91dad8] */ ST(0) = ST(0) + R_F32((u32)(0x91dad8u));
    /* 004ec70a: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
    /* 004ec70d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec712u); f_008587a5();
    /* 004ec712: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ec716: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec71a: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec720: fmul dword ptr [0x91db10] */ ST(0) = ST(0) * R_F32((u32)(0x91db10u));
    /* 004ec726: fsub dword ptr [0x91dad0] */ ST(0) = ST(0) - R_F32((u32)(0x91dad0u));
    /* 004ec72c: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 004ec72f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ec734u); f_008587a5();
    /* 004ec734: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ec738: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ec73c: fdiv dword ptr [0x91db1c] */ ST(0) = ST(0) / R_F32((u32)(0x91db1cu));
    /* 004ec742: fmul dword ptr [0x91db10] */ ST(0) = ST(0) * R_F32((u32)(0x91db10u));
    /* 004ec748: fsub dword ptr [0x91dad0] */ ST(0) = ST(0) - R_F32((u32)(0x91dad0u));
    /* 004ec74e: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 004ec751: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004ec754: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004ec757: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004ec75a: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 004ec75d: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
    /* 004ec764: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004ec766: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 004ec769: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 004ec76c: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 004ec773: mov eax, esi */ r_eax = r_esi;
    /* 004ec775: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec779: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec77a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ec77b: ret 8 */ FN_RET(0x004ec5f0); r_esp += 12; return;
}

void f_004ec780(void) /* sub_4EC780 */
{
    FN_ENTER(0x004ec780);
    /* 004ec780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec781: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec782: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec785: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ec787: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004ec78a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec78c: je 0x4ec818 */ if (fZ) goto L_004ec818;
L_004ec792:; BB(0x004ec792);
    /* 004ec792: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec795: jne 0x4ec7bb */ if (!fZ) goto L_004ec7bb;
L_004ec797:; BB(0x004ec797);
    /* 004ec797: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 004ec79a: mov dword ptr [ebp + 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0x4cu), 0x3f800000u);
    /* 004ec7a1: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
    /* 004ec7a8: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 004ec7af: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 004ec7b6: jmp 0x4ec844 */ goto L_004ec844;
L_004ec7bb:; BB(0x004ec7bb);
    /* 004ec7bb: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec7be: jne 0x4ec813 */ if (!fZ) goto L_004ec813;
L_004ec7c0:; BB(0x004ec7c0);
    /* 004ec7c0: fld dword ptr [0x91db04] */ FPUSH(R_F32((u32)(0x91db04u)));
    /* 004ec7c6: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 004ec7c9: fadd dword ptr [ebp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x44u));
    /* 004ec7cc: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004ec7cf: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 004ec7d2: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004ec7d5: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 004ec7d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec7da: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004ec7dd: mov esi, eax */ r_esi = r_eax;
    /* 004ec7df: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ec7e1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004ec7e4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ec7e7: mov esi, dword ptr [ebp + 0x24] */ r_esi = R32((u32)(r_ebp+0x24u));
    /* 004ec7ea: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ec7ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ec7f0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004ec7f4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ec7f6: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 004ec7f8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec7fa: fchs  */ ST(0) = -ST(0);
    /* 004ec7fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec7fe: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ec800: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec802: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004ec804: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec806: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004ec808: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004ec80b: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 004ec80e: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004ec811: jmp 0x4ec844 */ goto L_004ec844;
L_004ec813:; BB(0x004ec813);
    /* 004ec813: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 004ec816: jmp 0x4ec844 */ goto L_004ec844;
L_004ec818:; BB(0x004ec818);
    /* 004ec818: fild dword ptr [ebp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x50u)));
    /* 004ec81b: fild dword ptr [ebp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x20u)));
    /* 004ec81e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ec820: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 004ec823: fld dword ptr [0x91db04] */ FPUSH(R_F32((u32)(0x91db04u)));
    /* 004ec829: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004ec82c: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 004ec82f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec831: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
    /* 004ec834: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004ec836: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ec838: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec83a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ec83c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec83e: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 004ec841: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
L_004ec844:; BB(0x004ec844);
    /* 004ec844: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ec847: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 004ec84a: cmp edx, dword ptr [ebp + ecx*4 + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec84e: jl 0x4ec85b */ if ((fS!=fO)) goto L_004ec85b;
L_004ec850:; BB(0x004ec850);
    /* 004ec850: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ec853: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 004ec856: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec859: je 0x4ec861 */ if (fZ) goto L_004ec861;
L_004ec85b:; BB(0x004ec85b);
    /* 004ec85b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec85f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec860: ret  */ FN_RET(0x004ec780); r_esp += 4; return;
L_004ec861:; BB(0x004ec861);
    /* 004ec861: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004ec865: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec86a: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004ec86e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec872: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec873: ret  */ FN_RET(0x004ec780); r_esp += 4; return;
}

void f_004ec874(void) /* sub_4EC874 */
{
    FN_ENTER(0x004ec874);
    /* 004ec874: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec877: fld dword ptr [0x91dae0] */ FPUSH(R_F32((u32)(0x91dae0u)));
    /* 004ec87d: fmul dword ptr [ecx + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4cu));
    /* 004ec880: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004ec883: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 004ec886: fld dword ptr [0x91dadc] */ FPUSH(R_F32((u32)(0x91dadcu)));
    /* 004ec88c: fmul dword ptr [ecx + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x48u));
    /* 004ec88f: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 004ec892: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 004ec895: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ec897: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004ec89b: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004ec89f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004ec8a3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004ec8a7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004ec8ab: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 004ec8b2: mov dword ptr [esp + 4], 0xbfbeb852 */ W32((u32)(r_esp+0x4u), 0xbfbeb852u);
    /* 004ec8ba: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004ec8be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ec8c2: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004ec8c6: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004ec8ca: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4ec8cfu); f_004e9d1c();
    /* 004ec8cf: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ec8d2: ret  */ FN_RET(0x004ec874); r_esp += 4; return;
}

void f_004ec8d4(void) /* sub_4EC8D4 */
{
    FN_ENTER(0x004ec8d4);
    /* 004ec8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec8d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8d9: push 0x8d29de */ { u32 v = 0x8d29deu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ec8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ec8ec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec8ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ec8f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ec8f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ec8f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ec8fb: movzx eax, byte ptr [0xa722b4] */ r_eax = (u32)R8((u32)(0xa722b4u));
    /* 004ec902: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec904: jne 0x4ec918 */ if (!fZ) goto L_004ec918;
L_004ec906:; BB(0x004ec906);
    /* 004ec906: mov dword ptr [0xa722b8], 0x41380000 */ W32((u32)(0xa722b8u), 0x41380000u);
    /* 004ec910: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec913: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
L_004ec918:; BB(0x004ec918);
    /* 004ec918: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec91a: jne 0x4ec92e */ if (!fZ) goto L_004ec92e;
L_004ec91c:; BB(0x004ec91c);
    /* 004ec91c: mov dword ptr [0xa722bc], 0x41a00000 */ W32((u32)(0xa722bcu), 0x41a00000u);
    /* 004ec926: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec929: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
L_004ec92e:; BB(0x004ec92e);
    /* 004ec92e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec930: jne 0x4ec947 */ if (!fZ) goto L_004ec947;
L_004ec932:; BB(0x004ec932);
    /* 004ec932: mov dword ptr [0xa722c0], 0xc2200000 */ W32((u32)(0xa722c0u), 0xc2200000u);
    /* 004ec93c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ec93f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec942: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
L_004ec947:; BB(0x004ec947);
    /* 004ec947: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec949: jne 0x4ec960 */ if (!fZ) goto L_004ec960;
L_004ec94b:; BB(0x004ec94b);
    /* 004ec94b: mov dword ptr [0xa722c4], 0x442a0000 */ W32((u32)(0xa722c4u), 0x442a0000u);
    /* 004ec955: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ec958: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec95b: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
L_004ec960:; BB(0x004ec960);
    /* 004ec960: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec962: jne 0x4ec97d */ if (!fZ) goto L_004ec97d;
L_004ec964:; BB(0x004ec964);
    /* 004ec964: fld dword ptr [0xa722b8] */ FPUSH(R_F32((u32)(0xa722b8u)));
    /* 004ec96a: fchs  */ ST(0) = -ST(0);
    /* 004ec96c: fstp dword ptr [0xa722c8] */ W_F32((u32)(0xa722c8u), ST(0)); FPOP();
    /* 004ec972: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ec975: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec978: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
L_004ec97d:; BB(0x004ec97d);
    /* 004ec97d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ec97f: jne 0x4ec99f */ if (!fZ) goto L_004ec99f;
L_004ec981:; BB(0x004ec981);
    /* 004ec981: fld dword ptr [0x91dae8] */ FPUSH(R_F32((u32)(0x91dae8u)));
    /* 004ec987: fadd dword ptr [0xa722b8] */ ST(0) = ST(0) + R_F32((u32)(0xa722b8u));
    /* 004ec98d: fst dword ptr [0xa722cc] */ W_F32((u32)(0xa722ccu), ST(0));
    /* 004ec993: or eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ec998: mov byte ptr [0xa722b4], al */ W8((u32)(0xa722b4u), (u8)r_eax);
    /* 004ec99d: jmp 0x4ec9a5 */ goto L_004ec9a5;
L_004ec99f:; BB(0x004ec99f);
    /* 004ec99f: fld dword ptr [0xa722cc] */ FPUSH(R_F32((u32)(0xa722ccu)));
L_004ec9a5:; BB(0x004ec9a5);
    /* 004ec9a5: fld dword ptr [0xa722c8] */ FPUSH(R_F32((u32)(0xa722c8u)));
    /* 004ec9ab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ec9ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec9af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 004ec9b1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004ec9b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec9b5: jae 0x8d29cb */ if (!fC) goto L_008d29cb;
L_004ec9bb:; BB(0x004ec9bb);
    /* 004ec9bb: fld dword ptr [0xa722c4] */ FPUSH(R_F32((u32)(0xa722c4u)));
    /* 004ec9c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ec9c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004ec9c5:; BB(0x004ec9c5);
    /* 004ec9c5: fld dword ptr [0xa722c0] */ FPUSH(R_F32((u32)(0xa722c0u)));
L_004ec9cb:; BB(0x004ec9cb);
    /* 004ec9cb: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004ec9cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ec9cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ec9d0: jae 0x8d29d4 */ if (!fC) goto L_008d29d4;
L_004ec9d6:; BB(0x004ec9d6);
    /* 004ec9d6: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004ec9d8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ec9da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ec9dc: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004ec9df: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_004ec9e2:; BB(0x004ec9e2);
    /* 004ec9e2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ec9e9: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec9eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ec9f0u); f_005caba4();
    /* 004ec9f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ec9f1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ec9f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec9f6: je 0x4eca1e */ if (fZ) goto L_004eca1e;
L_004ec9f8:; BB(0x004ec9f8);
    /* 004ec9f8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ec9ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eca06: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 004eca09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004eca0a: mov ecx, eax */ r_ecx = r_eax;
    /* 004eca0c: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eca12: call 0x4ec5f0 */ r_esp -= 4; W32(r_esp, 0x4eca17u); f_004ec5f0();
    /* 004eca17: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004eca1e:; BB(0x004eca1e);
    /* 004eca1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eca25: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004eca28: fadd dword ptr [0x91dae4] */ ST(0) = ST(0) + R_F32((u32)(0x91dae4u));
    /* 004eca2e: fld dword ptr [0xa722c4] */ FPUSH(R_F32((u32)(0xa722c4u)));
    /* 004eca34: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eca36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eca38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eca39: jbe 0x4eca42 */ if ((fC||fZ)) goto L_004eca42;
L_004eca3b:; BB(0x004eca3b);
    /* 004eca3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eca3d: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004eca40: jmp 0x4ec9e2 */ goto L_004ec9e2;
L_004eca42:; BB(0x004eca42);
    /* 004eca42: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eca44: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004eca47: fld dword ptr [0xa722cc] */ FPUSH(R_F32((u32)(0xa722ccu)));
L_004eca4d:; BB(0x004eca4d);
    /* 004eca4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eca4f: fadd dword ptr [0xa722b8] */ ST(0) = ST(0) + R_F32((u32)(0xa722b8u));
    /* 004eca55: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eca57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eca59: xor dword ptr [ebp - 0x14], 1 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r); fO = 0; }
    /* 004eca5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eca5e: jae 0x4eca7c */ if (!fC) goto L_004eca7c;
L_004eca60:; BB(0x004eca60);
    /* 004eca60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004eca63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eca65: je 0x4ec9c5 */ if (fZ) goto L_004ec9c5;
L_004eca6b:; BB(0x004eca6b);
    /* 004eca6b: fld dword ptr [0xa722c0] */ FPUSH(R_F32((u32)(0xa722c0u)));
    /* 004eca71: fadd dword ptr [0xa722bc] */ ST(0) = ST(0) + R_F32((u32)(0xa722bcu));
    /* 004eca77: jmp 0x4ec9cb */ goto L_004ec9cb;
L_004eca7c:; BB(0x004eca7c);
    /* 004eca7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eca7e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eca80: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004eca82:; BB(0x004eca82);
    /* 004eca82: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eca85: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004eca88: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004eca8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eca8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eca95: mov esp, ebp */ r_esp = r_ebp;
    /* 004eca97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eca98: ret  */ FN_RET(0x004ec8d4); r_esp += 4; return;
L_008d29cb:; BB(0x008d29cb);
    /* 008d29cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d29cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d29cf: jmp 0x4eca82 */ goto L_004eca82;
L_008d29d4:; BB(0x008d29d4);
    /* 008d29d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d29d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008d29d8: jmp 0x4eca4d */ goto L_004eca4d;
}

void f_004eca9c(void) /* sub_4ECA9C */
{
    FN_ENTER(0x004eca9c);
    /* 004eca9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eca9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eca9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecaa1: call 0x4ecac0 */ r_esp -= 4; W32(r_esp, 0x4ecaa6u); f_004ecac0();
    /* 004ecaa6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ecaaa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ecaac: jne 0x4ecab2 */ if (!fZ) goto L_004ecab2;
L_004ecaae:; BB(0x004ecaae);
    /* 004ecaae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecaaf: ret 4 */ FN_RET(0x004eca9c); r_esp += 8; return;
L_004ecab2:; BB(0x004ecab2);
    /* 004ecab2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecab3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ecab8u); f_005c2f74();
    /* 004ecab8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ecab9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecaba: ret 4 */ FN_RET(0x004eca9c); r_esp += 8; return;
}

void f_004ecac0(void) /* sub_4ECAC0 */
{
    FN_ENTER(0x004ecac0);
    /* 004ecac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ecac1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ecac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecac5: push 0x8d29f8 */ { u32 v = 0x8d29f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecaca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ecad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecad1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ecad8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecadb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ecade: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ecae1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ecae4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ecae7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ecaea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecaed: mov dword ptr [ecx], 0xafd588 */ W32((u32)(r_ecx), 0xafd588u);
    /* 004ecaf3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ecafa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ecaffu); f_008171e8();
    /* 004ecaff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecb02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ecb09: mov esp, ebp */ r_esp = r_ebp;
    /* 004ecb0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ecb0c: ret  */ FN_RET(0x004ecac0); r_esp += 4; return;
}

void f_004ecb10(void) /* sub_4ECB10 */
{
    FN_ENTER(0x004ecb10);
    /* 004ecb10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecb11: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecb14: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ecb16: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004ecb19: cmp eax, dword ptr [0x9b8da8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b8da8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecb1f: je 0x4ecb2b */ if (fZ) goto L_004ecb2b;
L_004ecb21:; BB(0x004ecb21);
    /* 004ecb21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecb23: call 0x4ecbd0 */ r_esp -= 4; W32(r_esp, 0x4ecb28u); f_004ecbd0();
    /* 004ecb28: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_004ecb2b:; BB(0x004ecb2b);
    /* 004ecb2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ecb2d: jl 0x4ecb4d */ if ((fS!=fO)) goto L_004ecb4d;
L_004ecb2f:; BB(0x004ecb2f);
    /* 004ecb2f: push dword ptr [eax*4 + 0x91db34] */ { u32 v = R32((u32)(r_eax*4+0x91db34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecb36: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4ecb3bu); f_004ea00c();
    /* 004ecb3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ecb3c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ecb3f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ecb42: fadd dword ptr [0x91db2c] */ ST(0) = ST(0) + R_F32((u32)(0x91db2cu));
    /* 004ecb48: fst dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0));
    /* 004ecb4b: jmp 0x4ecb50 */ goto L_004ecb50;
L_004ecb4d:; BB(0x004ecb4d);
    /* 004ecb4d: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
L_004ecb50:; BB(0x004ecb50);
    /* 004ecb50: fld dword ptr [0x91db28] */ FPUSH(R_F32((u32)(0x91db28u)));
    /* 004ecb56: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 004ecb59: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004ecb5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ecb5d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ecb5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ecb61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ecb62: jae 0x4ecb6a */ if (!fC) goto L_004ecb6a;
L_004ecb64:; BB(0x004ecb64);
    /* 004ecb64: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ecb66: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ecb68: jmp 0x4ecb91 */ goto L_004ecb91;
L_004ecb6a:; BB(0x004ecb6a);
    /* 004ecb6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ecb6c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004ecb6e: fld dword ptr [0x91db28] */ FPUSH(R_F32((u32)(0x91db28u)));
    /* 004ecb74: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004ecb76: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004ecb78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ecb7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ecb7b: jbe 0x4ecb83 */ if ((fC||fZ)) goto L_004ecb83;
L_004ecb7d:; BB(0x004ecb7d);
    /* 004ecb7d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ecb7f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ecb81: jmp 0x4ecb91 */ goto L_004ecb91;
L_004ecb83:; BB(0x004ecb83);
    /* 004ecb83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ecb85: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004ecb87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ecb89: fmul dword ptr [0x91db9c] */ ST(0) = ST(0) * R_F32((u32)(0x91db9cu));
    /* 004ecb8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_004ecb91:; BB(0x004ecb91);
    /* 004ecb91: fcom dword ptr [0x91db98] */ fx_compare(ST(0), R_F32((u32)(0x91db98u))); 
    /* 004ecb97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ecb99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ecb9a: jae 0x4ecbab */ if (!fC) goto L_004ecbab;
L_004ecb9c:; BB(0x004ecb9c);
    /* 004ecb9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ecb9e: mov eax, 0x42c80000 */ r_eax = 0x42c80000u;
    /* 004ecba3: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 004ecba6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecbaa: ret  */ FN_RET(0x004ecb10); r_esp += 4; return;
L_004ecbab:; BB(0x004ecbab);
    /* 004ecbab: fcom dword ptr [0x91db94] */ fx_compare(ST(0), R_F32((u32)(0x91db94u))); 
    /* 004ecbb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ecbb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ecbb4: jbe 0x4ecbc5 */ if ((fC||fZ)) goto L_004ecbc5;
L_004ecbb6:; BB(0x004ecbb6);
    /* 004ecbb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ecbb8: mov eax, 0x43930000 */ r_eax = 0x43930000u;
    /* 004ecbbd: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 004ecbc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecbc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecbc4: ret  */ FN_RET(0x004ecb10); r_esp += 4; return;
L_004ecbc5:; BB(0x004ecbc5);
    /* 004ecbc5: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 004ecbc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecbcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecbcc: ret  */ FN_RET(0x004ecb10); r_esp += 4; return;
}

void f_004ecbd0(void) /* sub_4ECBD0 */
{
    FN_ENTER(0x004ecbd0);
    /* 004ecbd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecbd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecbd4: mov edi, ecx */ r_edi = r_ecx;
    /* 004ecbd6: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004ecbd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecbdb: je 0x4ecbe9 */ if (fZ) goto L_004ecbe9;
L_004ecbdd:; BB(0x004ecbdd);
    /* 004ecbdd: call 0x427bb4 */ r_esp -= 4; W32(r_esp, 0x4ecbe2u); f_00427bb4();
    /* 004ecbe2: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
L_004ecbe9:; BB(0x004ecbe9);
    /* 004ecbe9: mov edx, dword ptr [0x9b8da8] */ r_edx = R32((u32)(0x9b8da8u));
    /* 004ecbef: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004ecbf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ecbf4: jl 0x4ecc1e */ if ((fS!=fO)) goto L_004ecc1e;
L_004ecbf6:; BB(0x004ecbf6);
    /* 004ecbf6: mov dword ptr [esp], 0x41d80000 */ W32((u32)(r_esp), 0x41d80000u);
    /* 004ecbfd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ecc00: mov dword ptr [esp + 4], 0x42300000 */ W32((u32)(r_esp+0x4u), 0x42300000u);
    /* 004ecc08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc09: push dword ptr [edx*4 + 0x91db34] */ { u32 v = R32((u32)(r_edx*4+0x91db34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecc10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc11: call 0x4eced0 */ r_esp -= 4; W32(r_esp, 0x4ecc16u); f_004eced0();
    /* 004ecc16: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ecc19: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecc1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ecc1d: ret  */ FN_RET(0x004ecbd0); r_esp += 4; return;
L_004ecc1e:; BB(0x004ecc1e);
    /* 004ecc1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecc21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ecc22: ret  */ FN_RET(0x004ecbd0); r_esp += 4; return;
}

void f_004ecc24(void) /* sub_4ECC24 */
{
    FN_ENTER(0x004ecc24);
    /* 004ecc24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ecc27: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4ecc2cu); f_007a9380();
    /* 004ecc2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecc2e: call 0x4ecc44 */ r_esp -= 4; W32(r_esp, 0x4ecc33u); f_004ecc44();
    /* 004ecc33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecc35: call 0x4ecca0 */ r_esp -= 4; W32(r_esp, 0x4ecc3au); f_004ecca0();
    /* 004ecc3a: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4ecc3fu); f_007a9318();
    /* 004ecc3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecc40: ret  */ FN_RET(0x004ecc24); r_esp += 4; return;
}

void f_004ecc44(void) /* sub_4ECC44 */
{
    FN_ENTER(0x004ecc44);
    /* 004ecc44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc45: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecc48: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ecc4a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004ecc4d: fdiv dword ptr [0x91db84] */ ST(0) = ST(0) / R_F32((u32)(0x91db84u));
    /* 004ecc53: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ecc57: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ecc5a: mov dword ptr [esp + 4], 0x42140000 */ W32((u32)(r_esp+0x4u), 0x42140000u);
    /* 004ecc62: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004ecc66: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004ecc6d: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 004ecc75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc77: push 0xc0440000 */ { u32 v = 0xc0440000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc7c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc7e: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4ecc83u); f_004e9eb8();
    /* 004ecc83: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004ecc87: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004ecc8a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ecc8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc8f: push 0xc0440000 */ { u32 v = 0xc0440000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc94: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecc96: call 0x4e9ce8 */ r_esp -= 4; W32(r_esp, 0x4ecc9bu); f_004e9ce8();
    /* 004ecc9b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ecc9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ecc9f: ret  */ FN_RET(0x004ecc44); r_esp += 4; return;
}

void f_004ecca0(void) /* sub_4ECCA0 */
{
    FN_ENTER(0x004ecca0);
    /* 004ecca0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecca3: mov dword ptr [esp], 0x42780000 */ W32((u32)(r_esp), 0x42780000u);
    /* 004eccaa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004eccad: mov dword ptr [esp + 4], 0x42860000 */ W32((u32)(r_esp+0x4u), 0x42860000u);
    /* 004eccb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eccb6: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccbb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccbd: call 0x4e9ce8 */ r_esp -= 4; W32(r_esp, 0x4eccc2u); f_004e9ce8();
    /* 004eccc2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eccc5: ret  */ FN_RET(0x004ecca0); r_esp += 4; return;
}

void f_004eccc8(void) /* sub_4ECCC8 */
{
    FN_ENTER(0x004eccc8);
    /* 004eccc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eccc9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ecccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecccd: push 0x8d2a20 */ { u32 v = 0x8d2a20u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eccd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eccd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ecce0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecce3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ecce6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ecce9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eccec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eccef: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004eccf1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004eccf8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4eccfdu); f_005caba4();
    /* 004eccfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eccfe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ecd01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecd03: je 0x4ecd36 */ if (fZ) goto L_004ecd36;
L_004ecd05:; BB(0x004ecd05);
    /* 004ecd05: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ecd0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ecd13: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecd16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecd19: call 0x4ecd3c */ r_esp -= 4; W32(r_esp, 0x4ecd1eu); f_004ecd3c();
    /* 004ecd1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecd21: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ecd28:; BB(0x004ecd28);
    /* 004ecd28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecd2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ecd32: mov esp, ebp */ r_esp = r_ebp;
    /* 004ecd34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ecd35: ret  */ FN_RET(0x004eccc8); r_esp += 4; return;
L_004ecd36:; BB(0x004ecd36);
    /* 004ecd36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ecd38: jmp 0x4ecd28 */ goto L_004ecd28;
}

void f_004ecd3c(void) /* sub_4ECD3C */
{
    FN_ENTER(0x004ecd3c);
    /* 004ecd3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd3d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ecd3f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecd43: mov ecx, edi */ r_ecx = r_edi;
    /* 004ecd45: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ecd4au); f_008193cc();
    /* 004ecd4a: mov dword ptr [edi], 0xafd588 */ W32((u32)(r_edi), 0xafd588u);
    /* 004ecd50: mov edx, dword ptr [0x9b8da4] */ r_edx = R32((u32)(0x9b8da4u));
    /* 004ecd56: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004ecd59: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004ecd5e: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004ecd65: mov dword ptr [0x9b8da8], eax */ W32((u32)(0x9b8da8u), r_eax);
    /* 004ecd6a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004ecd6d: mov dword ptr [edi + 0x24], 0x42c80000 */ W32((u32)(r_edi+0x24u), 0x42c80000u);
    /* 004ecd74: mov eax, edi */ r_eax = r_edi;
    /* 004ecd76: mov dword ptr [edi + 0x20], 0x42c80000 */ W32((u32)(r_edi+0x20u), 0x42c80000u);
    /* 004ecd7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ecd7e: ret 4 */ FN_RET(0x004ecd3c); r_esp += 8; return;
}

void f_004ecd84(void) /* sub_4ECD84 */
{
    FN_ENTER(0x004ecd84);
    /* 004ecd84: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ecd88: mov dword ptr [0x9b8da8], eax */ W32((u32)(0x9b8da8u), r_eax);
    /* 004ecd8d: ret  */ FN_RET(0x004ecd84); r_esp += 4; return;
}

void f_004ecd90(void) /* sub_4ECD90 */
{
    FN_ENTER(0x004ecd90);
    /* 004ecd90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ecd93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecd95: call 0x4ecdb4 */ r_esp -= 4; W32(r_esp, 0x4ecd9au); f_004ecdb4();
    /* 004ecd9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ecd9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ecda0: jne 0x4ecda6 */ if (!fZ) goto L_004ecda6;
L_004ecda2:; BB(0x004ecda2);
    /* 004ecda2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecda3: ret 4 */ FN_RET(0x004ecd90); r_esp += 8; return;
L_004ecda6:; BB(0x004ecda6);
    /* 004ecda6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecda7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ecdacu); f_005c2f74();
    /* 004ecdac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ecdad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecdae: ret 4 */ FN_RET(0x004ecd90); r_esp += 8; return;
}

void f_004ecdb4(void) /* sub_4ECDB4 */
{
    FN_ENTER(0x004ecdb4);
    /* 004ecdb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ecdb5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ecdb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecdb9: push 0x8d2a3c */ { u32 v = 0x8d2a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecdbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ecdc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecdc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ecdcc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecdcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ecdd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ecdd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ecdd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ecddb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ecdde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecde1: mov dword ptr [ecx], 0xafd5e8 */ W32((u32)(r_ecx), 0xafd5e8u);
    /* 004ecde7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ecdee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ecdf3u); f_008171e8();
    /* 004ecdf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecdf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ecdfd: mov esp, ebp */ r_esp = r_ebp;
    /* 004ecdff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ece00: ret  */ FN_RET(0x004ecdb4); r_esp += 4; return;
}

void f_004ece04(void) /* sub_4ECE04 */
{
    FN_ENTER(0x004ece04);
    /* 004ece04: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004ece07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004ece09: jne 0x4ece42 */ if (!fZ) goto L_004ece42;
L_004ece0b:; BB(0x004ece0b);
    /* 004ece0b: fld dword ptr [0x91dbb8] */ FPUSH(R_F32((u32)(0x91dbb8u)));
    /* 004ece11: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004ece14: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ece16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ece18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ece19: jb 0x4ece20 */ if (fC) goto L_004ece20;
L_004ece1b:; BB(0x004ece1b);
    /* 004ece1b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ece1d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ece1f: ret  */ FN_RET(0x004ece04); r_esp += 4; return;
L_004ece20:; BB(0x004ece20);
    /* 004ece20: fld dword ptr [0x91dbb0] */ FPUSH(R_F32((u32)(0x91dbb0u)));
    /* 004ece26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ece28: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ece2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ece2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ece2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ece30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ece31: jb 0x4ece3e */ if (fC) goto L_004ece3e;
L_004ece33:; BB(0x004ece33);
    /* 004ece33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ece35: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ece3a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004ece3d: ret  */ FN_RET(0x004ece04); r_esp += 4; return;
L_004ece3e:; BB(0x004ece3e);
    /* 004ece3e: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 004ece41: ret  */ FN_RET(0x004ece04); r_esp += 4; return;
L_004ece42:; BB(0x004ece42);
    /* 004ece42: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ece45: jne 0x4ece5e */ if (!fZ) goto L_004ece5e;
L_004ece47:; BB(0x004ece47);
    /* 004ece47: fld dword ptr [0x91dbb4] */ FPUSH(R_F32((u32)(0x91dbb4u)));
    /* 004ece4d: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 004ece50: fcom dword ptr [0x91dbbc] */ fx_compare(ST(0), R_F32((u32)(0x91dbbcu))); 
    /* 004ece56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ece58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ece59: jbe 0x4ece5f */ if ((fC||fZ)) goto L_004ece5f;
L_004ece5b:; BB(0x004ece5b);
    /* 004ece5b: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
L_004ece5e:; BB(0x004ece5e);
    /* 004ece5e: ret  */ FN_RET(0x004ece04); r_esp += 4; return;
L_004ece5f:; BB(0x004ece5f);
    /* 004ece5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ece61: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ece65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ece67: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004ece6a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ece70: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004ece74: ret  */ FN_RET(0x004ece04); r_esp += 4; return;
}

void f_004ece78(void) /* sub_4ECE78 */
{
    FN_ENTER(0x004ece78);
    /* 004ece78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ece79: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ece7c: mov esi, ecx */ r_esi = r_ecx;
    /* 004ece7e: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4ece83u); f_007a9380();
    /* 004ece83: fld dword ptr [0x91dbac] */ FPUSH(R_F32((u32)(0x91dbacu)));
    /* 004ece89: fld dword ptr [0x91dbac] */ FPUSH(R_F32((u32)(0x91dbacu)));
    /* 004ece8f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ece92: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004ece95: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004ece97: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004ece99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ece9b: fmul dword ptr [0x91dba8] */ ST(0) = ST(0) * R_F32((u32)(0x91dba8u));
    /* 004ecea1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ecea3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004ecea7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ecea9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004eceac: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eceaf: lea edx, [esi + 0x28] */ r_edx = (u32)(r_esi+0x28u);
    /* 004eceb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eceb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004eceb4: push 0xc01c0000 */ { u32 v = 0xc01c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eceb9: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecebc: call 0x4e9f8c */ r_esp -= 4; W32(r_esp, 0x4ecec1u); f_004e9f8c();
    /* 004ecec1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecec4: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4ecec9u); f_007a9318();
    /* 004ecec9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ececc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ececd: ret  */ FN_RET(0x004ece78); r_esp += 4; return;
}

void f_004eced0(void) /* sub_4ECED0 */
{
    FN_ENTER(0x004eced0);
    /* 004eced0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eced1: mov ebp, esp */ r_ebp = r_esp;
    /* 004eced3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eced5: push 0x8d2a64 */ { u32 v = 0x8d2a64u; r_esp -= 4; W32(r_esp, v); }
    /* 004eceda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ecee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecee1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ecee8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eceeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eceee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ecef1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ecef4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ecef7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecef9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ecf00: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ecf05u); f_005caba4();
    /* 004ecf05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ecf06: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ecf09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecf0b: je 0x4ecf44 */ if (fZ) goto L_004ecf44;
L_004ecf0d:; BB(0x004ecf0d);
    /* 004ecf0d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ecf14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ecf1b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecf1e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecf21: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecf24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecf27: call 0x4ecf48 */ r_esp -= 4; W32(r_esp, 0x4ecf2cu); f_004ecf48();
    /* 004ecf2c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecf2f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ecf36:; BB(0x004ecf36);
    /* 004ecf36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ecf40: mov esp, ebp */ r_esp = r_ebp;
    /* 004ecf42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ecf43: ret  */ FN_RET(0x004eced0); r_esp += 4; return;
L_004ecf44:; BB(0x004ecf44);
    /* 004ecf44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ecf46: jmp 0x4ecf36 */ goto L_004ecf36;
}

void f_004ecf48(void) /* sub_4ECF48 */
{
    FN_ENTER(0x004ecf48);
    /* 004ecf48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf4a: mov edi, ecx */ r_edi = r_ecx;
    /* 004ecf4c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004ecf50: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ecf54: mov ecx, edi */ r_ecx = r_edi;
    /* 004ecf56: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ecf5bu); f_008193cc();
    /* 004ecf5b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ecf5f: mov dword ptr [edi], 0xafd5e8 */ W32((u32)(r_edi), 0xafd5e8u);
    /* 004ecf65: mov edx, dword ptr [0x9b8dac] */ r_edx = R32((u32)(0x9b8dacu));
    /* 004ecf6b: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004ecf6e: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004ecf71: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ecf73: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ecf76: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 004ecf79: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004ecf7c: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 004ecf83: mov eax, edi */ r_eax = r_edi;
    /* 004ecf85: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 004ecf8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ecf8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ecf8e: ret 0xc */ FN_RET(0x004ecf48); r_esp += 16; return;
}

void f_004ecf94(void) /* sub_4ECF94 */
{
    FN_ENTER(0x004ecf94);
    /* 004ecf94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ecf97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ecf99: call 0x4ecfb8 */ r_esp -= 4; W32(r_esp, 0x4ecf9eu); f_004ecfb8();
    /* 004ecf9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ecfa2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ecfa4: jne 0x4ecfaa */ if (!fZ) goto L_004ecfaa;
L_004ecfa6:; BB(0x004ecfa6);
    /* 004ecfa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecfa7: ret 4 */ FN_RET(0x004ecf94); r_esp += 8; return;
L_004ecfaa:; BB(0x004ecfaa);
    /* 004ecfaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ecfb0u); f_005c2f74();
    /* 004ecfb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ecfb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ecfb2: ret 4 */ FN_RET(0x004ecf94); r_esp += 8; return;
}

void f_004ecfb8(void) /* sub_4ECFB8 */
{
    FN_ENTER(0x004ecfb8);
    /* 004ecfb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfb9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ecfbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfbd: push 0x8d2a80 */ { u32 v = 0x8d2a80u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ecfc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ecfd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecfd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ecfd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ecfd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ecfdc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ecfdf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ecfe2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ecfe5: mov dword ptr [ecx], 0xafd648 */ W32((u32)(r_ecx), 0xafd648u);
    /* 004ecfeb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ecff2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ecff7u); f_008171e8();
    /* 004ecff7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecffa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ed001: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed004: ret  */ FN_RET(0x004ecfb8); r_esp += 4; return;
}

