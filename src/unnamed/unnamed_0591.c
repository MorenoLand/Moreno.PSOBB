#include "protos.h"

void f_00591054(void) /* sub_591054 */
{
    FN_ENTER(0x00591054);
    /* 00591054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591055: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591056: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00591057: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591058: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059105a: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059105f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591061: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x591066u); f_007aaa30();
    /* 00591066: mov ebx, eax */ r_ebx = r_eax;
    /* 00591068: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059106d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059106f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x591074u); f_007aaa30();
    /* 00591074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591076: jne 0x591080 */ if (!fZ) goto L_00591080;
L_00591078:; BB(0x00591078);
    /* 00591078: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059107a: je 0x59116b */ if (fZ) goto L_0059116b;
L_00591080:; BB(0x00591080);
    /* 00591080: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591082: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x591087u); f_00521324();
    /* 00591087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591089: je 0x591156 */ if (fZ) goto L_00591156;
L_0059108f:; BB(0x0059108f);
    /* 0059108f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591095: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0059109b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059109d: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5910a0u); call_ind(t); }
    /* 005910a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910a2: je 0x591156 */ if (fZ) goto L_00591156;
L_005910a8:; BB(0x005910a8);
    /* 005910a8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005910ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005910ae: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 005910b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005910b6: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5910b9u); call_ind(t); }
    /* 005910b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005910bc: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005910c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005910c2: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 005910c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005910ca: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5910cdu); call_ind(t); }
    /* 005910cd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005910d0: fcomp dword ptr [0x929184] */ fx_compare(ST(0), R_F32((u32)(0x929184u))); FPOP();
    /* 005910d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005910d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005910d9: jbe 0x591156 */ if ((fC||fZ)) goto L_00591156;
L_005910db:; BB(0x005910db);
    /* 005910db: mov edx, dword ptr [ebp + 0x408] */ r_edx = R32((u32)(r_ebp+0x408u));
    /* 005910e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005910e3: jle 0x591133 */ if ((fZ||fS!=fO)) goto L_00591133;
L_005910e5:; BB(0x005910e5);
    /* 005910e5: mov ebx, dword ptr [ebp + 0x398] */ r_ebx = R32((u32)(r_ebp+0x398u));
    /* 005910eb: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005910f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005910f5: jne 0x591156 */ if (!fZ) goto L_00591156;
L_005910f7:; BB(0x005910f7);
    /* 005910f7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005910f9: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 005910ff: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x591104u); f_0069792c();
    /* 00591104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591106: je 0x591156 */ if (fZ) goto L_00591156;
L_00591108:; BB(0x00591108);
    /* 00591108: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059110e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00591110: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x591115u); f_0068dfd8();
    /* 00591115: lea edi, [ebp + 0x410] */ r_edi = (u32)(r_ebp+0x410u);
    /* 0059111b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059111c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059111e: call 0x68c358 */ r_esp -= 4; W32(r_esp, 0x591123u); f_0068c358();
    /* 00591123: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591129: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59112eu); f_0050b510();
    /* 0059112e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591131: jmp 0x591156 */ goto L_00591156;
L_00591133:; BB(0x00591133);
    /* 00591133: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591135: je 0x591156 */ if (fZ) goto L_00591156;
L_00591137:; BB(0x00591137);
    /* 00591137: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591139: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59113eu); f_007751b0();
    /* 0059113e: fcomp dword ptr [0x929180] */ fx_compare(ST(0), R_F32((u32)(0x929180u))); FPOP();
    /* 00591144: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591146: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591147: ja 0x591156 */ if ((!fC&&!fZ)) goto L_00591156;
L_00591149:; BB(0x00591149);
    /* 00591149: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059114f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591151: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x591156u); f_0051fe4c();
L_00591156:; BB(0x00591156);
    /* 00591156: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00591159: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059115b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059115c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059115d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059115e: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00591163: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x591168u); f_00814298();
    /* 00591168: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0059116b:; BB(0x0059116b);
    /* 0059116b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059116c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059116d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059116e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059116f: ret  */ FN_RET(0x00591054); r_esp += 4; return;
}

void f_00591170(void) /* sub_591170 */
{
    FN_ENTER(0x00591170);
    /* 00591170: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 00591176: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059117b: jne 0x5911c2 */ if (!fZ) goto L_005911c2;
L_0059117d:; BB(0x0059117d);
    /* 0059117d: fld dword ptr [ecx + 0x3b4] */ FPUSH(R_F32((u32)(r_ecx+0x3b4u)));
    /* 00591183: fcom dword ptr [0x92917c] */ fx_compare(ST(0), R_F32((u32)(0x92917cu))); 
    /* 00591189: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059118b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059118c: jbe 0x5911c5 */ if ((fC||fZ)) goto L_005911c5;
L_0059118e:; BB(0x0059118e);
    /* 0059118e: fcom dword ptr [0x929178] */ fx_compare(ST(0), R_F32((u32)(0x929178u))); 
    /* 00591194: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591196: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591197: jb 0x59119d */ if (fC) goto L_0059119d;
L_00591199:; BB(0x00591199);
    /* 00591199: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059119b: jmp 0x5911c2 */ goto L_005911c2;
L_0059119d:; BB(0x0059119d);
    /* 0059119d: fld dword ptr [0x929174] */ FPUSH(R_F32((u32)(0x929174u)));
    /* 005911a3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005911a5: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 005911a8: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005911ab: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005911af: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005911b2: call 0x5911cc */ r_esp -= 4; W32(r_esp, 0x5911b7u); f_005911cc();
    /* 005911b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005911b9: mov eax, 0 */ r_eax = 0x0u;
    /* 005911be: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005911c1: ret  */ FN_RET(0x00591170); r_esp += 4; return;
L_005911c2:; BB(0x005911c2);
    /* 005911c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005911c4: ret  */ FN_RET(0x00591170); r_esp += 4; return;
L_005911c5:; BB(0x005911c5);
    /* 005911c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005911c7: jmp 0x5911c2 */ goto L_005911c2;
}

void f_005911cc(void) /* sub_5911CC */
{
    FN_ENTER(0x005911cc);
    /* 005911cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005911cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005911ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005911cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005911d0: mov edi, ecx */ r_edi = r_ecx;
    /* 005911d2: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 005911d5: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 005911db: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005911df: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005911e3: fmul dword ptr [0x929170] */ ST(0) = ST(0) * R_F32((u32)(0x929170u));
    /* 005911e9: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 005911ec: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 005911ef: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 005911f2: mov ecx, edi */ r_ecx = r_edi;
    /* 005911f4: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 005911fb: mov dword ptr [ebp + 0x10], 0x41400000 */ W32((u32)(r_ebp+0x10u), 0x41400000u);
    /* 00591202: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
    /* 00591209: mov dword ptr [ebp + 0x18], 0x9d01 */ W32((u32)(r_ebp+0x18u), 0x9d01u);
    /* 00591210: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00591213: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x591218u); f_007b798c();
    /* 00591218: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0059121b: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591220: je 0x591229 */ if (fZ) goto L_00591229;
L_00591222:; BB(0x00591222);
    /* 00591222: mov eax, 1 */ r_eax = 0x1u;
    /* 00591227: jmp 0x59122b */ goto L_0059122b;
L_00591229:; BB(0x00591229);
    /* 00591229: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0059122b:; BB(0x0059122b);
    /* 0059122b: mov edx, dword ptr [0x9bfb84] */ r_edx = R32((u32)(0x9bfb84u));
    /* 00591231: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00591234: mov edx, dword ptr [0x9bfb88] */ r_edx = R32((u32)(0x9bfb88u));
    /* 0059123a: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0059123d: mov edx, dword ptr [0x9bfb8c] */ r_edx = R32((u32)(0x9bfb8cu));
    /* 00591243: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00591246: mov edx, dword ptr [0x9bfb90] */ r_edx = R32((u32)(0x9bfb90u));
    /* 0059124c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0059124f: mov edx, dword ptr [0x9bfb94] */ r_edx = R32((u32)(0x9bfb94u));
    /* 00591255: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00591258: mov edx, dword ptr [0x9bfb98] */ r_edx = R32((u32)(0x9bfb98u));
    /* 0059125e: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00591261: mov edx, dword ptr [0x9bfb9c] */ r_edx = R32((u32)(0x9bfb9cu));
    /* 00591267: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0059126a: mov edx, dword ptr [0x9bfba0] */ r_edx = R32((u32)(0x9bfba0u));
    /* 00591270: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00591273: mov edx, dword ptr [0x9bfba4] */ r_edx = R32((u32)(0x9bfba4u));
    /* 00591279: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0059127c: mov edx, dword ptr [0x9bfba8] */ r_edx = R32((u32)(0x9bfba8u));
    /* 00591282: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00591285: mov edx, dword ptr [0x9bfbac] */ r_edx = R32((u32)(0x9bfbacu));
    /* 0059128b: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0059128e: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
    /* 00591291: mov dword ptr [edi + 0x60], esi */ W32((u32)(r_edi+0x60u), r_esi);
    /* 00591294: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591296: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591297: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591298: ret 8 */ FN_RET(0x005911cc); r_esp += 12; return;
}

void f_0059129c(void) /* sub_59129C */
{
    FN_ENTER(0x0059129c);
    /* 0059129c: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 005912a2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005912a4: je 0x5912bd */ if (fZ) goto L_005912bd;
L_005912a6:; BB(0x005912a6);
    /* 005912a6: mov edx, dword ptr [ecx + 0x41c] */ r_edx = R32((u32)(r_ecx+0x41cu));
    /* 005912ac: lea eax, [ecx + 0x41c] */ r_eax = (u32)(r_ecx+0x41cu);
    /* 005912b2: mov ecx, eax */ r_ecx = r_eax;
    /* 005912b4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5912b7u); call_ind(t); }
    /* 005912b7: mov eax, 1 */ r_eax = 0x1u;
    /* 005912bc: ret  */ FN_RET(0x0059129c); r_esp += 4; return;
L_005912bd:; BB(0x005912bd);
    /* 005912bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005912bf: ret  */ FN_RET(0x0059129c); r_esp += 4; return;
}

void f_005912c0(void) /* sub_5912C0 */
{
    FN_ENTER(0x005912c0);
    /* 005912c0: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 005912c6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005912c8: je 0x5912e1 */ if (fZ) goto L_005912e1;
L_005912ca:; BB(0x005912ca);
    /* 005912ca: mov edx, dword ptr [ecx + 0x41c] */ r_edx = R32((u32)(r_ecx+0x41cu));
    /* 005912d0: lea eax, [ecx + 0x41c] */ r_eax = (u32)(r_ecx+0x41cu);
    /* 005912d6: mov ecx, eax */ r_ecx = r_eax;
    /* 005912d8: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5912dbu); call_ind(t); }
    /* 005912db: mov eax, 1 */ r_eax = 0x1u;
    /* 005912e0: ret  */ FN_RET(0x005912c0); r_esp += 4; return;
L_005912e1:; BB(0x005912e1);
    /* 005912e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005912e3: ret  */ FN_RET(0x005912c0); r_esp += 4; return;
}

void f_005912e4(void) /* sub_5912E4 */
{
    FN_ENTER(0x005912e4);
    /* 005912e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005912e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005912e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005912e7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005912ea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005912ec: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005912f0: fld dword ptr [0x92915c] */ FPUSH(R_F32((u32)(0x92915cu)));
    /* 005912f6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005912f8: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005912fb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005912fe: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00591301: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00591305: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00591309: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059130d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00591311: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00591314: push 0x4007 */ { u32 v = 0x4007u; r_esp -= 4; W32(r_esp, v); }
    /* 00591319: lea eax, [ebp + 0x128] */ r_eax = (u32)(r_ebp+0x128u);
    /* 0059131f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591321: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x591326u); f_007806dc();
    /* 00591326: mov ebx, eax */ r_ebx = r_eax;
    /* 00591328: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059132b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059132d: je 0x59138d */ if (fZ) goto L_0059138d;
L_0059132f:; BB(0x0059132f);
    /* 0059132f: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00591332: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00591335: mov dword ptr [ebp + 0x3d8], esi */ W32((u32)(r_ebp+0x3d8u), r_esi);
    /* 0059133b: test esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591341: je 0x591362 */ if (fZ) goto L_00591362;
L_00591343:; BB(0x00591343);
    /* 00591343: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00591346: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00591348: mov dword ptr [ebp + 0x3dc], edx */ W32((u32)(r_ebp+0x3dcu), r_edx);
    /* 0059134e: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00591351: mov dword ptr [ebp + 0x3e0], esi */ W32((u32)(r_ebp+0x3e0u), r_esi);
    /* 00591357: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0059135a: mov dword ptr [ebp + 0x3e4], edx */ W32((u32)(r_ebp+0x3e4u), r_edx);
    /* 00591360: jmp 0x59137d */ goto L_0059137d;
L_00591362:; BB(0x00591362);
    /* 00591362: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00591365: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 00591368: mov dword ptr [ebp + 0x3dc], edx */ W32((u32)(r_ebp+0x3dcu), r_edx);
    /* 0059136e: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00591371: mov dword ptr [ebp + 0x3e0], esi */ W32((u32)(r_ebp+0x3e0u), r_esi);
    /* 00591377: mov dword ptr [ebp + 0x3e4], edx */ W32((u32)(r_ebp+0x3e4u), r_edx);
L_0059137d:; BB(0x0059137d);
    /* 0059137d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0059137f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00591382: jne 0x59140a */ if (!fZ) goto L_0059140a;
L_00591388:; BB(0x00591388);
    /* 00591388: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059138b: jne 0x591398 */ if (!fZ) goto L_00591398;
L_0059138d:; BB(0x0059138d);
    /* 0059138d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059138f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00591392: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591393: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591394: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591395: ret 4 */ FN_RET(0x005912e4); r_esp += 8; return;
L_00591398:; BB(0x00591398);
    /* 00591398: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059139b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059139c: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x5913a1u); f_00578bac();
    /* 005913a1: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005913a3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005913a6: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005913a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005913aa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5913afu); f_0050b510();
    /* 005913af: mov esi, eax */ r_esi = r_eax;
    /* 005913b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005913b4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005913b6: je 0x5913eb */ if (fZ) goto L_005913eb;
L_005913b8:; BB(0x005913b8);
    /* 005913b8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005913ba: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5913bfu); f_0050c094();
    /* 005913bf: mov ebp, eax */ r_ebp = r_eax;
    /* 005913c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005913c4: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5913c9u); f_0050c08c();
    /* 005913c9: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 005913cd: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 005913d4: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 005913d7: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 005913da: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 005913e1: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005913e7: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
L_005913eb:; BB(0x005913eb);
    /* 005913eb: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005913f0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005913f3: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005913f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005913f7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5913fcu); f_0050b510();
    /* 005913fc: mov eax, 1 */ r_eax = 0x1u;
    /* 00591401: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00591404: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591406: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591407: ret 4 */ FN_RET(0x005912e4); r_esp += 8; return;
L_0059140a:; BB(0x0059140a);
    /* 0059140a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059140d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059140e: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x591413u); f_00578bac();
    /* 00591413: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00591415: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00591418: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059141b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059141c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x591421u); f_0050b510();
    /* 00591421: mov esi, eax */ r_esi = r_eax;
    /* 00591423: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591426: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591428: je 0x59145d */ if (fZ) goto L_0059145d;
L_0059142a:; BB(0x0059142a);
    /* 0059142a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059142c: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x591431u); f_0050c094();
    /* 00591431: mov ebp, eax */ r_ebp = r_eax;
    /* 00591433: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591436: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x59143bu); f_0050c08c();
    /* 0059143b: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 0059143f: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 00591446: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 00591449: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0059144c: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 00591453: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00591459: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
L_0059145d:; BB(0x0059145d);
    /* 0059145d: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591462: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00591465: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591469: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59146eu); f_0050b510();
    /* 0059146e: mov eax, 1 */ r_eax = 0x1u;
    /* 00591473: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00591476: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591477: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591478: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591479: ret 4 */ FN_RET(0x005912e4); r_esp += 8; return;
}

void f_0059147c(void)
{
    FN_ENTER(0x0059147c);
    /* 0059147c: mov ecx, dword ptr [0xa74500] */ r_ecx = R32((u32)(0xa74500u));
    /* 00591482: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591484: je 0x591498 */ if (fZ) goto L_00591498;
L_00591486:; BB(0x00591486);
    /* 00591486: je 0x59148e */ if (fZ) goto L_0059148e;
L_00591488:; BB(0x00591488);
    /* 00591488: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059148a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059148c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x59148eu); call_ind(t); }
L_0059148e:; BB(0x0059148e);
    /* 0059148e: mov dword ptr [0xa74500], 0 */ W32((u32)(0xa74500u), 0x0u);
L_00591498:; BB(0x00591498);
    /* 00591498: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 0059149d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059149f: je 0x5914b2 */ if (fZ) goto L_005914b2;
L_005914a1:; BB(0x005914a1);
    /* 005914a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005914a2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5914a7u); f_00857e98();
    /* 005914a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005914a8: mov dword ptr [0xa744d4], 0 */ W32((u32)(0xa744d4u), 0x0u);
L_005914b2:; BB(0x005914b2);
    /* 005914b2: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 005914b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005914ba: je 0x5914cf */ if (fZ) goto L_005914cf;
L_005914bc:; BB(0x005914bc);
    /* 005914bc: je 0x5914c5 */ if (fZ) goto L_005914c5;
L_005914be:; BB(0x005914be);
    /* 005914be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005914c0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5914c5u); f_004066a8();
L_005914c5:; BB(0x005914c5);
    /* 005914c5: mov dword ptr [0xa744dc], 0 */ W32((u32)(0xa744dcu), 0x0u);
L_005914cf:; BB(0x005914cf);
    /* 005914cf: ret  */ FN_RET(0x0059147c); r_esp += 4; return;
}

void f_005914d0(void)
{
    FN_ENTER(0x005914d0);
    /* 005914d0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005914d4: call 0x5914dc */ r_esp -= 4; W32(r_esp, 0x5914d9u); f_005914dc();
    /* 005914d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005914da: ret  */ FN_RET(0x005914d0); r_esp += 4; return;
}

void f_005914dc(void) /* sub_5914DC */
{
    FN_ENTER(0x005914dc);
    /* 005914dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005914dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005914df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005914e1: push 0x8d8244 */ { u32 v = 0x8d8244u; r_esp -= 4; W32(r_esp, v); }
    /* 005914e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005914ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005914ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005914f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005914f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005914fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005914fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00591500: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00591503: push 0x464 */ { u32 v = 0x464u; r_esp -= 4; W32(r_esp, v); }
    /* 00591508: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0059150f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x591514u); f_005caba4();
    /* 00591514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00591515: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00591518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059151a: je 0x591553 */ if (fZ) goto L_00591553;
L_0059151c:; BB(0x0059151c);
    /* 0059151c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00591523: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059152a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059152d: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00591533: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00591536: call 0x591558 */ r_esp -= 4; W32(r_esp, 0x59153bu); f_00591558();
    /* 0059153b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059153e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00591545:; BB(0x00591545);
    /* 00591545: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00591548: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059154f: mov esp, ebp */ r_esp = r_ebp;
    /* 00591551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591552: ret  */ FN_RET(0x005914dc); r_esp += 4; return;
L_00591553:; BB(0x00591553);
    /* 00591553: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591555: jmp 0x591545 */ goto L_00591545;
}

void f_00591558(void) /* sub_591558 */
{
    FN_ENTER(0x00591558);
    /* 00591558: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591559: mov ebp, esp */ r_ebp = r_esp;
    /* 0059155b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059155d: push 0x8d8260 */ { u32 v = 0x8d8260u; r_esp -= 4; W32(r_esp, v); }
    /* 00591562: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00591568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591569: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00591570: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591573: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00591576: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00591579: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059157c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059157f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00591582: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00591585: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00591588: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059158b: call 0x5915ec */ r_esp -= 4; W32(r_esp, 0x591590u); f_005915ec();
    /* 00591590: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00591597: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059159a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059159d: mov dword ptr [ecx], 0xb08f00 */ W32((u32)(r_ecx), 0xb08f00u);
    /* 005915a3: mov eax, dword ptr [0x9bfb64] */ r_eax = R32((u32)(0x9bfb64u));
    /* 005915a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005915a9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005915ac: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x5915b1u); f_0051f750();
    /* 005915b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005915b4: call 0x591658 */ r_esp -= 4; W32(r_esp, 0x5915b9u); f_00591658();
    /* 005915b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005915bc: call 0x595234 */ r_esp -= 4; W32(r_esp, 0x5915c1u); f_00595234();
    /* 005915c1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005915c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005915c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005915c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005915ca: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005915d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005915d2: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x5915d8u); call_ind(t); }
    /* 005915d8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005915db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005915de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005915e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005915e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005915e8: ret 8 */ FN_RET(0x00591558); r_esp += 12; return;
}

void f_005915ec(void) /* sub_5915EC */
{
    FN_ENTER(0x005915ec);
    /* 005915ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005915ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005915ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005915f1: push 0x8d827c */ { u32 v = 0x8d827cu; r_esp -= 4; W32(r_esp, v); }
    /* 005915f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005915fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005915fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00591604: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059160a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059160d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00591610: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00591613: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00591616: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00591619: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x59161eu); f_005216f4();
    /* 0059161e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00591625: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00591628: mov dword ptr [ecx], 0xb08d20 */ W32((u32)(r_ecx), 0xb08d20u);
    /* 0059162e: add ecx, 0x41c */ {  u32 a = r_ecx; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00591634: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x591639u); f_00576a48();
    /* 00591639: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059163c: mov edx, dword ptr [0x9bfb60] */ r_edx = R32((u32)(0x9bfb60u));
    /* 00591642: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00591645: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00591648: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059164f: mov esp, ebp */ r_esp = r_ebp;
    /* 00591651: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591652: ret 4 */ FN_RET(0x005915ec); r_esp += 8; return;
}

void f_00591658(void) /* sub_591658 */
{
    FN_ENTER(0x00591658);
    /* 00591658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591659: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059165b: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 00591661: fcomp dword ptr [0x929154] */ fx_compare(ST(0), R_F32((u32)(0x929154u))); FPOP();
    /* 00591667: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591669: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059166a: jae 0x591678 */ if (!fC) goto L_00591678;
L_0059166c:; BB(0x0059166c);
    /* 0059166c: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 00591676: jmp 0x591682 */ goto L_00591682;
L_00591678:; BB(0x00591678);
    /* 00591678: mov dword ptr [ebp + 0x3c8], 0 */ W32((u32)(r_ebp+0x3c8u), 0x0u);
L_00591682:; BB(0x00591682);
    /* 00591682: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591684: call 0x591708 */ r_esp -= 4; W32(r_esp, 0x591689u); f_00591708();
    /* 00591689: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0059168f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00591692: je 0x5916f7 */ if (fZ) goto L_005916f7;
L_00591694:; BB(0x00591694);
    /* 00591694: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591696: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0059169d:; BB(0x0059169d);
    /* 0059169d: fld dword ptr [0x929150] */ FPUSH(R_F32((u32)(0x929150u)));
    /* 005916a3: fadd dword ptr [ebp + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x364u));
    /* 005916a9: fld dword ptr [0x92914c] */ FPUSH(R_F32((u32)(0x92914cu)));
    /* 005916af: fadd dword ptr [ebp + 0x360] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x360u));
    /* 005916b5: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 005916bb: fld dword ptr [0x929148] */ FPUSH(R_F32((u32)(0x929148u)));
    /* 005916c1: fadd dword ptr [ebp + 0x36c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x36cu));
    /* 005916c7: fld dword ptr [0x929144] */ FPUSH(R_F32((u32)(0x929144u)));
    /* 005916cd: fadd dword ptr [ebp + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x368u));
    /* 005916d3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005916d5: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 005916db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005916dd: fstp dword ptr [ebp + 0x3f4] */ W_F32((u32)(r_ebp+0x3f4u), ST(0)); FPOP();
    /* 005916e3: fstp dword ptr [ebp + 0x3f8] */ W_F32((u32)(r_ebp+0x3f8u), ST(0)); FPOP();
    /* 005916e9: fstp dword ptr [ebp + 0x3fc] */ W_F32((u32)(r_ebp+0x3fcu), ST(0)); FPOP();
    /* 005916ef: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 005916f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005916f6: ret  */ FN_RET(0x00591658); r_esp += 4; return;
L_005916f7:; BB(0x005916f7);
    /* 005916f7: mov eax, 2 */ r_eax = 0x2u;
    /* 005916fc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00591703: jmp 0x59169d */ goto L_0059169d;
}

void f_00591708(void) /* sub_591708 */
{
    FN_ENTER(0x00591708);
    /* 00591708: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0059170e: fcom dword ptr [0x929140] */ fx_compare(ST(0), R_F32((u32)(0x929140u))); 
    /* 00591714: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591716: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591717: jb 0x59172f */ if (fC) goto L_0059172f;
L_00591719:; BB(0x00591719);
    /* 00591719: fcom dword ptr [0x92913c] */ fx_compare(ST(0), R_F32((u32)(0x92913cu))); 
    /* 0059171f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591721: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591722: jb 0x591737 */ if (fC) goto L_00591737;
L_00591724:; BB(0x00591724);
    /* 00591724: fcom dword ptr [0x929138] */ fx_compare(ST(0), R_F32((u32)(0x929138u))); 
    /* 0059172a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059172c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059172d: jae 0x591737 */ if (!fC) goto L_00591737;
L_0059172f:; BB(0x0059172f);
    /* 0059172f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00591731: mov eax, 1 */ r_eax = 0x1u;
    /* 00591736: ret  */ FN_RET(0x00591708); r_esp += 4; return;
L_00591737:; BB(0x00591737);
    /* 00591737: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00591739: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059173b: ret  */ FN_RET(0x00591708); r_esp += 4; return;
}

void f_0059173c(void) /* sub_59173C */
{
    FN_ENTER(0x0059173c);
    /* 0059173c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059173d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059173f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x591744u); f_004f7c84();
    /* 00591744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591746: je 0x591754 */ if (fZ) goto L_00591754;
L_00591748:; BB(0x00591748);
    /* 00591748: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059174a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059174c: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x591752u); call_ind(t); }
    /* 00591752: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591753: ret  */ FN_RET(0x0059173c); r_esp += 4; return;
L_00591754:; BB(0x00591754);
    /* 00591754: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00591756: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00591758: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x59175eu); call_ind(t); }
    /* 0059175e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591761: je 0x59176d */ if (fZ) goto L_0059176d;
L_00591763:; BB(0x00591763);
    /* 00591763: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00591765: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00591767: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x59176du); call_ind(t); }
L_0059176d:; BB(0x0059176d);
    /* 0059176d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059176f: call 0x5917e0 */ r_esp -= 4; W32(r_esp, 0x591774u); f_005917e0();
    /* 00591774: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00591776: call 0x591908 */ r_esp -= 4; W32(r_esp, 0x59177bu); f_00591908();
    /* 0059177b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059177d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059177f: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x591785u); call_ind(t); }
    /* 00591785: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059178b: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591790: je 0x59179f */ if (fZ) goto L_0059179f;
L_00591792:; BB(0x00591792);
    /* 00591792: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00591797: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059179d: jmp 0x5917a6 */ goto L_005917a6;
L_0059179f:; BB(0x0059179f);
    /* 0059179f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005917a1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5917a6u); f_006401f0();
L_005917a6:; BB(0x005917a6);
    /* 005917a6: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005917ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005917ae: je 0x5917bf */ if (fZ) goto L_005917bf;
L_005917b0:; BB(0x005917b0);
    /* 005917b0: lea ecx, [ebx + 0x41c] */ r_ecx = (u32)(r_ebx+0x41cu);
    /* 005917b6: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x5917bbu); f_00576be4();
    /* 005917bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005917bd: je 0x5917c9 */ if (fZ) goto L_005917c9;
L_005917bf:; BB(0x005917bf);
    /* 005917bf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005917c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005917c3: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5917c9u); call_ind(t); }
L_005917c9:; BB(0x005917c9);
    /* 005917c9: mov eax, dword ptr [ebx + 0x3d8] */ r_eax = R32((u32)(r_ebx+0x3d8u));
    /* 005917cf: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005917d4: je 0x5917dd */ if (fZ) goto L_005917dd;
L_005917d6:; BB(0x005917d6);
    /* 005917d6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005917dd:; BB(0x005917dd);
    /* 005917dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005917de: ret  */ FN_RET(0x0059173c); r_esp += 4; return;
}

void f_005917e0(void) /* sub_5917E0 */
{
    FN_ENTER(0x005917e0);
    /* 005917e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005917e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005917e2: mov edi, ecx */ r_edi = r_ecx;
    /* 005917e4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005917e7: test al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005917e9: je 0x591875 */ if (fZ) goto L_00591875;
L_005917ef:; BB(0x005917ef);
    /* 005917ef: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005917f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005917f7: jne 0x59180c */ if (!fZ) goto L_0059180c;
L_005917f9:; BB(0x005917f9);
    /* 005917f9: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005917ff: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591804: jne 0x591812 */ if (!fZ) goto L_00591812;
L_00591806:; BB(0x00591806);
    /* 00591806: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00591808: jne 0x591812 */ if (!fZ) goto L_00591812;
L_0059180a:; BB(0x0059180a);
    /* 0059180a: jmp 0x591859 */ goto L_00591859;
L_0059180c:; BB(0x0059180c);
    /* 0059180c: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
L_00591812:; BB(0x00591812);
    /* 00591812: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00591815: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059181b: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00591821: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00591827: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x59182au); call_ind(t); }
    /* 0059182a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059182c: je 0x591859 */ if (fZ) goto L_00591859;
L_0059182e:; BB(0x0059182e);
    /* 0059182e: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591833: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00591839: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059183b: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 00591841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591842: and eax, 0xffeffffb */ {  u32 a = r_eax; u32 b = 0xffeffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00591847: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059184c: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 00591852: mov ecx, edi */ r_ecx = r_edi;
    /* 00591854: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x591859u); f_007b52ec();
L_00591859:; BB(0x00591859);
    /* 00591859: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00591860: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00591863: jne 0x591904 */ if (!fZ) goto L_00591904;
L_00591869:; BB(0x00591869);
    /* 00591869: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0059186b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059186d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x591872u); f_0051f62c();
    /* 00591872: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591873: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591874: ret  */ FN_RET(0x005917e0); r_esp += 4; return;
L_00591875:; BB(0x00591875);
    /* 00591875: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059187b: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591880: jne 0x591904 */ if (!fZ) goto L_00591904;
L_00591886:; BB(0x00591886);
    /* 00591886: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591888: jne 0x591904 */ if (!fZ) goto L_00591904;
L_0059188a:; BB(0x0059188a);
    /* 0059188a: lea ebx, [edi + 0x41c] */ r_ebx = (u32)(r_edi+0x41cu);
    /* 00591890: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00591892: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x591897u); f_00576be4();
    /* 00591897: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591899: je 0x591904 */ if (fZ) goto L_00591904;
L_0059189b:; BB(0x0059189b);
    /* 0059189b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005918a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005918a3: je 0x5918d6 */ if (fZ) goto L_005918d6;
L_005918a5:; BB(0x005918a5);
    /* 005918a5: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005918ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005918ad: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5918b0u); call_ind(t); }
    /* 005918b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005918b2: je 0x591904 */ if (fZ) goto L_00591904;
L_005918b4:; BB(0x005918b4);
    /* 005918b4: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005918b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918bb: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005918c1: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005918c6: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005918cc: mov ecx, edi */ r_ecx = r_edi;
    /* 005918ce: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5918d3u); f_007b52c4();
    /* 005918d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005918d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005918d5: ret  */ FN_RET(0x005917e0); r_esp += 4; return;
L_005918d6:; BB(0x005918d6);
    /* 005918d6: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005918dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005918de: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5918e1u); call_ind(t); }
    /* 005918e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005918e3: je 0x591904 */ if (fZ) goto L_00591904;
L_005918e5:; BB(0x005918e5);
    /* 005918e5: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005918ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918ec: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005918f2: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005918f7: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005918fd: mov ecx, edi */ r_ecx = r_edi;
    /* 005918ff: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x591904u); f_007b52ec();
L_00591904:; BB(0x00591904);
    /* 00591904: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00591905: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591906: ret  */ FN_RET(0x005917e0); r_esp += 4; return;
}

void f_00591908(void) /* sub_591908 */
{
    FN_ENTER(0x00591908);
    /* 00591908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591909: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0059190c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0059190f: fld dword ptr [0x929134] */ FPUSH(R_F32((u32)(0x929134u)));
    /* 00591915: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00591918: fadd dword ptr [ecx + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3ecu));
    /* 0059191e: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 00591921: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00591927: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0059192d: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 00591933: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00591936: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00591939: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 0059193c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059193d: ret  */ FN_RET(0x00591908); r_esp += 4; return;
}

void f_00591940(void) /* sub_591940 */
{
    FN_ENTER(0x00591940);
    /* 00591940: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591943: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00591945: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59194au); f_004f7c84();
    /* 0059194a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059194c: je 0x59195d */ if (fZ) goto L_0059195d;
L_0059194e:; BB(0x0059194e);
    /* 0059194e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00591951: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591953: call dword ptr [eax + 0x1d4] */ { u32 t = R32((u32)(r_eax+0x1d4u)); r_esp -= 4; W32(r_esp, 0x591959u); call_ind(t); }
    /* 00591959: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059195a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059195b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059195c: ret  */ FN_RET(0x00591940); r_esp += 4; return;
L_0059195d:; BB(0x0059195d);
    /* 0059195d: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00591963: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00591965: jne 0x591ba4 */ if (!fZ) goto L_00591ba4;
L_0059196b:; BB(0x0059196b);
    /* 0059196b: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x591970u); f_00694cc8();
    /* 00591970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591972: je 0x591998 */ if (fZ) goto L_00591998;
L_00591974:; BB(0x00591974);
    /* 00591974: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591979: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059197b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059197e: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00591984: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059198a: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x59198du); call_ind(t); }
    /* 0059198d: mov edi, eax */ r_edi = r_eax;
    /* 0059198f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591991: jne 0x5919b7 */ if (!fZ) goto L_005919b7;
L_00591993:; BB(0x00591993);
    /* 00591993: jmp 0x591ba4 */ goto L_00591ba4;
L_00591998:; BB(0x00591998);
    /* 00591998: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059199d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059199f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005919a2: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005919a7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5919aau); call_ind(t); }
    /* 005919aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005919ac: je 0x591ba4 */ if (fZ) goto L_00591ba4;
L_005919b2:; BB(0x005919b2);
    /* 005919b2: mov edi, 1 */ r_edi = 0x1u;
L_005919b7:; BB(0x005919b7);
    /* 005919b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005919b9: call 0x591bbc */ r_esp -= 4; W32(r_esp, 0x5919beu); f_00591bbc();
    /* 005919be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005919c0: je 0x5919c6 */ if (fZ) goto L_005919c6;
L_005919c2:; BB(0x005919c2);
    /* 005919c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005919c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005919c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005919c5: ret  */ FN_RET(0x00591940); r_esp += 4; return;
L_005919c6:; BB(0x005919c6);
    /* 005919c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005919c8: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5919cdu); f_00520608();
    /* 005919cd: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005919d3: mov esi, dword ptr [0xaf0360] */ r_esi = R32((u32)(0xaf0360u));
    /* 005919d9: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005919df: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 005919e5: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 005919eb: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 005919f1: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005919f7: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005919fd: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00591a03: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00591a09: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00591a0f: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00591a15: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00591a1b: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00591a21: mov edx, dword ptr [ebp + 0x3d8] */ r_edx = R32((u32)(r_ebp+0x3d8u));
    /* 00591a27: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a2d: jne 0x591a3f */ if (!fZ) goto L_00591a3f;
L_00591a2f:; BB(0x00591a2f);
    /* 00591a2f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00591a32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591a34: call dword ptr [edx + 0x1b8] */ { u32 t = R32((u32)(r_edx+0x1b8u)); r_esp -= 4; W32(r_esp, 0x591a3au); call_ind(t); }
    /* 00591a3a: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x591a3fu); f_00520d08();
L_00591a3f:; BB(0x00591a3f);
    /* 00591a3f: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x591a44u); f_00578b38();
    /* 00591a44: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00591a47: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x591a4cu); f_00829cc8();
    /* 00591a4c: mov esi, dword ptr [0xa74504] */ r_esi = R32((u32)(0xa74504u));
    /* 00591a52: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a54: je 0x591a5e */ if (fZ) goto L_00591a5e;
L_00591a56:; BB(0x00591a56);
    /* 00591a56: mov edx, dword ptr [ebp + 0x400] */ r_edx = R32((u32)(r_ebp+0x400u));
    /* 00591a5c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
L_00591a5e:; BB(0x00591a5e);
    /* 00591a5e: mov esi, dword ptr [0xa74508] */ r_esi = R32((u32)(0xa74508u));
    /* 00591a64: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a66: je 0x591a70 */ if (fZ) goto L_00591a70;
L_00591a68:; BB(0x00591a68);
    /* 00591a68: mov edx, dword ptr [ebp + 0x400] */ r_edx = R32((u32)(r_ebp+0x400u));
    /* 00591a6e: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
L_00591a70:; BB(0x00591a70);
    /* 00591a70: mov esi, dword ptr [0xa7450c] */ r_esi = R32((u32)(0xa7450cu));
    /* 00591a76: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a78: je 0x591a82 */ if (fZ) goto L_00591a82;
L_00591a7a:; BB(0x00591a7a);
    /* 00591a7a: mov edx, dword ptr [ebp + 0x400] */ r_edx = R32((u32)(r_ebp+0x400u));
    /* 00591a80: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
L_00591a82:; BB(0x00591a82);
    /* 00591a82: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00591a85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591a87: call dword ptr [edx + 0x1bc] */ { u32 t = R32((u32)(r_edx+0x1bcu)); r_esp -= 4; W32(r_esp, 0x591a8du); call_ind(t); }
    /* 00591a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a8f: je 0x591aac */ if (fZ) goto L_00591aac;
L_00591a91:; BB(0x00591a91);
    /* 00591a91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591a93: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x591a98u); f_008173d0();
    /* 00591a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591a9a: jne 0x591b26 */ if (!fZ) goto L_00591b26;
L_00591aa0:; BB(0x00591aa0);
    /* 00591aa0: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 00591aa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591aa8: jne 0x591b26 */ if (!fZ) goto L_00591b26;
L_00591aaa:; BB(0x00591aaa);
    /* 00591aaa: jmp 0x591adf */ goto L_00591adf;
L_00591aac:; BB(0x00591aac);
    /* 00591aac: lea esi, [ebp + 0x41c] */ r_esi = (u32)(r_ebp+0x41cu);
    /* 00591ab2: mov ecx, esi */ r_ecx = r_esi;
    /* 00591ab4: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x591ab9u); f_00576be4();
    /* 00591ab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591abb: jne 0x591ac9 */ if (!fZ) goto L_00591ac9;
L_00591abd:; BB(0x00591abd);
    /* 00591abd: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 00591ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591ac5: jne 0x591b26 */ if (!fZ) goto L_00591b26;
L_00591ac7:; BB(0x00591ac7);
    /* 00591ac7: jmp 0x591adf */ goto L_00591adf;
L_00591ac9:; BB(0x00591ac9);
    /* 00591ac9: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 00591acf: mov ecx, esi */ r_ecx = r_esi;
    /* 00591ad1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x591ad4u); call_ind(t); }
    /* 00591ad4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591ad6: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x591adbu); f_008173d0();
    /* 00591adb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591add: jne 0x591b26 */ if (!fZ) goto L_00591b26;
L_00591adf:; BB(0x00591adf);
    /* 00591adf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x591ae4u); f_0082d7b0();
    /* 00591ae4: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00591ae7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x591aecu); f_0082d838();
    /* 00591aec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591aee: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00591af4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591af6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591af8: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x591afdu); f_00830b74();
    /* 00591afd: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00591b00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591b02: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x591b07u); f_0082d8bc();
    /* 00591b07: mov dword ptr [0xa7451c], 0 */ W32((u32)(0xa7451cu), 0x0u);
    /* 00591b11: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591b14: je 0x591bad */ if (fZ) goto L_00591bad;
L_00591b1a:; BB(0x00591b1a);
    /* 00591b1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591b1c: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x591b21u); f_007aa7b8();
L_00591b21:; BB(0x00591b21);
    /* 00591b21: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x591b26u); f_0082da80();
L_00591b26:; BB(0x00591b26);
    /* 00591b26: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00591b29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591b2b: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x591b31u); call_ind(t); }
    /* 00591b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591b33: jne 0x591b51 */ if (!fZ) goto L_00591b51;
L_00591b35:; BB(0x00591b35);
    /* 00591b35: lea esi, [ebp + 0x41c] */ r_esi = (u32)(r_ebp+0x41cu);
    /* 00591b3b: mov ecx, esi */ r_ecx = r_esi;
    /* 00591b3d: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x591b42u); f_00576be4();
    /* 00591b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591b44: je 0x591b51 */ if (fZ) goto L_00591b51;
L_00591b46:; BB(0x00591b46);
    /* 00591b46: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00591b4c: mov ecx, esi */ r_ecx = r_esi;
    /* 00591b4e: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x591b51u); call_ind(t); }
L_00591b51:; BB(0x00591b51);
    /* 00591b51: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00591b56: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 00591b5c: mov esi, dword ptr [0xaab510] */ r_esi = R32((u32)(0xaab510u));
    /* 00591b62: mov edi, dword ptr [0xaab514] */ r_edi = R32((u32)(0xaab514u));
    /* 00591b68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591b6a: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00591b6f: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00591b74: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 00591b7a: mov dword ptr [0xaf0378], esi */ W32((u32)(0xaf0378u), r_esi);
    /* 00591b80: mov dword ptr [0xaf037c], edi */ W32((u32)(0xaf037cu), r_edi);
    /* 00591b86: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00591b8b: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 00591b90: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 00591b95: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00591b9a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00591b9f: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x591ba4u); f_00520610();
L_00591ba4:; BB(0x00591ba4);
    /* 00591ba4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x591ba9u); f_0082dab0();
    /* 00591ba9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591baa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591bab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591bac: ret  */ FN_RET(0x00591940); r_esp += 4; return;
L_00591bad:; BB(0x00591bad);
    /* 00591bad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591baf: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x591bb4u); f_007aa668();
    /* 00591bb4: jmp 0x591b21 */ goto L_00591b21;
}

void f_00591bbc(void) /* sub_591BBC */
{
    FN_ENTER(0x00591bbc);
    /* 00591bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591bbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00591bbf: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00591bc4: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00591bc6: je 0x591c24 */ if (fZ) goto L_00591c24;
L_00591bc8:; BB(0x00591bc8);
    /* 00591bc8: lea eax, [ebp + 0x3dc] */ r_eax = (u32)(r_ebp+0x3dcu);
    /* 00591bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591bcf: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x591bd4u); f_00505a3c();
    /* 00591bd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00591bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591bd7: je 0x591c1d */ if (fZ) goto L_00591c1d;
L_00591bd9:; BB(0x00591bd9);
    /* 00591bd9: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00591bdc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x591be1u); f_00829cc8();
    /* 00591be1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x591be6u); f_0082d7b0();
    /* 00591be6: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00591be9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x591beeu); f_0082d838();
    /* 00591bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591bf0: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00591bf6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591bf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591bfa: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x591bffu); f_00830b74();
    /* 00591bff: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00591c02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591c04: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x591c09u); f_0082d8bc();
    /* 00591c09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591c0b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x591c10u); f_007aa668();
    /* 00591c10: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x591c15u); f_0082da80();
    /* 00591c15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00591c17: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x591c1cu); f_00505bf8();
    /* 00591c1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00591c1d:; BB(0x00591c1d);
    /* 00591c1d: mov eax, 1 */ r_eax = 0x1u;
    /* 00591c22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591c23: ret  */ FN_RET(0x00591bbc); r_esp += 4; return;
L_00591c24:; BB(0x00591c24);
    /* 00591c24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591c27: ret  */ FN_RET(0x00591bbc); r_esp += 4; return;
}

void f_00591c28(void) /* sub_591C28 */
{
    FN_ENTER(0x00591c28);
    /* 00591c28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591c29: mov esi, ecx */ r_esi = r_ecx;
    /* 00591c2b: mov ecx, esi */ r_ecx = r_esi;
    /* 00591c2d: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x591c32u); f_0051f814();
    /* 00591c32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00591c34: je 0x591c44 */ if (fZ) goto L_00591c44;
L_00591c36:; BB(0x00591c36);
    /* 00591c36: mov ecx, esi */ r_ecx = r_esi;
    /* 00591c38: call 0x591658 */ r_esp -= 4; W32(r_esp, 0x591c3du); f_00591658();
    /* 00591c3d: mov ecx, esi */ r_ecx = r_esi;
    /* 00591c3f: call 0x591c48 */ r_esp -= 4; W32(r_esp, 0x591c44u); f_00591c48();
L_00591c44:; BB(0x00591c44);
    /* 00591c44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591c45: ret  */ FN_RET(0x00591c28); r_esp += 4; return;
}

void f_00591c48(void) /* sub_591C48 */
{
    FN_ENTER(0x00591c48);
    /* 00591c48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591c49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00591c4b: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 00591c51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00591c53: jle 0x591c71 */ if ((fZ||fS!=fO)) goto L_00591c71;
L_00591c55:; BB(0x00591c55);
    /* 00591c55: mov dword ptr [ebp + 0x24], 0xa744d4 */ W32((u32)(r_ebp+0x24u), 0xa744d4u);
    /* 00591c5c: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00591c5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591c60: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x591c65u); f_00520390();
    /* 00591c65: mov dword ptr [ebp + 0x3d0], 1 */ W32((u32)(r_ebp+0x3d0u), 0x1u);
    /* 00591c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591c70: ret  */ FN_RET(0x00591c48); r_esp += 4; return;
L_00591c71:; BB(0x00591c71);
    /* 00591c71: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00591c76: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00591c78: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00591c7e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00591c81: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 00591c84: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00591c86: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x591c8bu); f_00520390();
    /* 00591c8b: mov dword ptr [ebp + 0x3d0], 0 */ W32((u32)(r_ebp+0x3d0u), 0x0u);
    /* 00591c95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591c96: ret  */ FN_RET(0x00591c48); r_esp += 4; return;
}

void f_00591c98(void) /* sub_591C98 */
{
    FN_ENTER(0x00591c98);
    /* 00591c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00591c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00591c9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00591c9b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00591c9e: mov esi, ecx */ r_esi = r_ecx;
    /* 00591ca0: mov ecx, esi */ r_ecx = r_esi;
    /* 00591ca2: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x591ca7u); f_0051f814();
    /* 00591ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591ca9: je 0x591d65 */ if (fZ) goto L_00591d65;
L_00591caf:; BB(0x00591caf);
    /* 00591caf: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 00591cb5: fcomp dword ptr [0x929120] */ fx_compare(ST(0), R_F32((u32)(0x929120u))); FPOP();
    /* 00591cbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591cbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591cbe: jae 0x591cd9 */ if (!fC) goto L_00591cd9;
L_00591cc0:; BB(0x00591cc0);
    /* 00591cc0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cc4: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591cc9u); f_0051f7fc();
    /* 00591cc9: push 0x929254 */ { u32 v = 0x929254u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ccf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591cd4u); f_0061cdb0();
    /* 00591cd4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591cd7: jmp 0x591cf0 */ goto L_00591cf0;
L_00591cd9:; BB(0x00591cd9);
    /* 00591cd9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cdd: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591ce2u); f_0051f7fc();
    /* 00591ce2: push 0x929264 */ { u32 v = 0x929264u; r_esp -= 4; W32(r_esp, v); }
    /* 00591ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ce8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591cedu); f_0061cdb0();
    /* 00591ced: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00591cf0:; BB(0x00591cf0);
    /* 00591cf0: mov ecx, esi */ r_ecx = r_esi;
    /* 00591cf2: call 0x591708 */ r_esp -= 4; W32(r_esp, 0x591cf7u); f_00591708();
    /* 00591cf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591cf9: je 0x591d14 */ if (fZ) goto L_00591d14;
L_00591cfb:; BB(0x00591cfb);
    /* 00591cfb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00591cfd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00591cff: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591d04u); f_0051f7fc();
    /* 00591d04: push 0x929274 */ { u32 v = 0x929274u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591d0a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591d0fu); f_0061cdb0();
    /* 00591d0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591d12: jmp 0x591d2b */ goto L_00591d2b;
L_00591d14:; BB(0x00591d14);
    /* 00591d14: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d16: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00591d18: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591d1du); f_0051f7fc();
    /* 00591d1d: push 0x929284 */ { u32 v = 0x929284u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591d23: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591d28u); f_0061cdb0();
    /* 00591d28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00591d2b:; BB(0x00591d2b);
    /* 00591d2b: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 00591d31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00591d33: jle 0x591d4e */ if ((fZ||fS!=fO)) goto L_00591d4e;
L_00591d35:; BB(0x00591d35);
    /* 00591d35: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d39: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591d3eu); f_0051f7fc();
    /* 00591d3e: push 0x929290 */ { u32 v = 0x929290u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591d44: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591d49u); f_0061cdb0();
    /* 00591d49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591d4c: jmp 0x591d65 */ goto L_00591d65;
L_00591d4e:; BB(0x00591d4e);
    /* 00591d4e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d52: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x591d57u); f_0051f7fc();
    /* 00591d57: push 0x9292a4 */ { u32 v = 0x9292a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591d5d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x591d62u); f_0061cdb0();
    /* 00591d62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00591d65:; BB(0x00591d65);
    /* 00591d65: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 00591d6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00591d6d: jle 0x591d76 */ if ((fZ||fS!=fO)) goto L_00591d76;
L_00591d6f:; BB(0x00591d6f);
    /* 00591d6f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00591d74: jmp 0x591d78 */ goto L_00591d78;
L_00591d76:; BB(0x00591d76);
    /* 00591d76: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00591d78:; BB(0x00591d78);
    /* 00591d78: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d7d: mov ecx, esi */ r_ecx = r_esi;
    /* 00591d7f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00591d81: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591d86: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x591d89u); call_ind(t); }
    /* 00591d89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591d8b: je 0x591f16 */ if (fZ) goto L_00591f16;
L_00591d91:; BB(0x00591d91);
    /* 00591d91: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00591d94: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x591d99u); f_00829cc8();
    /* 00591d99: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x591d9eu); f_00578b38();
    /* 00591d9e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591da0: je 0x591dce */ if (fZ) goto L_00591dce;
L_00591da2:; BB(0x00591da2);
    /* 00591da2: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00591da5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00591da7: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00591daa: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00591dae: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00591db1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00591db5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00591db8: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00591dbc: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00591dbf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00591dc2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00591dc5: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00591dc8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00591dcb: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
L_00591dce:; BB(0x00591dce);
    /* 00591dce: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x591dd3u); f_0082d7b0();
    /* 00591dd3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00591dd6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x591ddbu); f_0082d838();
    /* 00591ddb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00591dde: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591de0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x591de5u); f_0082d8bc();
    /* 00591de5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591dea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591def: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00591df4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00591df6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x591dfbu); f_0082fa0c();
    /* 00591dfb: mov eax, dword ptr [0xa74504] */ r_eax = R32((u32)(0xa74504u));
    /* 00591e00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e02: je 0x591e0a */ if (fZ) goto L_00591e0a;
L_00591e04:; BB(0x00591e04);
    /* 00591e04: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_00591e0a:; BB(0x00591e0a);
    /* 00591e0a: mov eax, dword ptr [0xa74508] */ r_eax = R32((u32)(0xa74508u));
    /* 00591e0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e11: je 0x591e19 */ if (fZ) goto L_00591e19;
L_00591e13:; BB(0x00591e13);
    /* 00591e13: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_00591e19:; BB(0x00591e19);
    /* 00591e19: mov eax, dword ptr [0xa7450c] */ r_eax = R32((u32)(0xa7450cu));
    /* 00591e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e20: je 0x591e28 */ if (fZ) goto L_00591e28;
L_00591e22:; BB(0x00591e22);
    /* 00591e22: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_00591e28:; BB(0x00591e28);
    /* 00591e28: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00591e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591e31: jne 0x591edf */ if (!fZ) goto L_00591edf;
L_00591e37:; BB(0x00591e37);
    /* 00591e37: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 00591e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00591e40: jl 0x591e4e */ if ((fS!=fO)) goto L_00591e4e;
L_00591e42:; BB(0x00591e42);
    /* 00591e42: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00591e45: jl 0x591e50 */ if ((fS!=fO)) goto L_00591e50;
L_00591e47:; BB(0x00591e47);
    /* 00591e47: mov eax, 0xc */ r_eax = 0xcu;
    /* 00591e4c: jmp 0x591e50 */ goto L_00591e50;
L_00591e4e:; BB(0x00591e4e);
    /* 00591e4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00591e50:; BB(0x00591e50);
    /* 00591e50: fld dword ptr [0x929110] */ FPUSH(R_F32((u32)(0x929110u)));
    /* 00591e56: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 00591e5c: mov edi, dword ptr [esi + 0xdc] */ r_edi = R32((u32)(r_esi+0xdcu));
    /* 00591e62: fld dword ptr [esi + 0x368] */ FPUSH(R_F32((u32)(r_esi+0x368u)));
    /* 00591e68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00591e6a: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00591e6e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00591e70: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00591e74: mov edi, dword ptr [edi + eax*8 + 4] */ r_edi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 00591e78: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00591e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591e7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591e7d: jbe 0x591e83 */ if ((fC||fZ)) goto L_00591e83;
L_00591e7f:; BB(0x00591e7f);
    /* 00591e7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00591e81: jmp 0x591eac */ goto L_00591eac;
L_00591e83:; BB(0x00591e83);
    /* 00591e83: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00591e86: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00591e89: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00591e8d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00591e91: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00591e94: fadd dword ptr [edx*4 + 0x928f90] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x928f90u));
    /* 00591e9b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00591e9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00591e9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00591ea0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00591ea2: jb 0x591ea6 */ if (fC) goto L_00591ea6;
L_00591ea4:; BB(0x00591ea4);
    /* 00591ea4: fst st(1) */ ST(1) = ST(0);
L_00591ea6:; BB(0x00591ea6);
    /* 00591ea6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00591ea8: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_00591eac:; BB(0x00591eac);
    /* 00591eac: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x591eb1u); f_0082fa9c();
    /* 00591eb1: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00591eb5: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00591eb8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00591ebc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00591ebf: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00591ec3: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x591ec8u); f_0083046c();
    /* 00591ec8: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x591ecdu); f_0082faac();
    /* 00591ecd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00591ed1: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 00591ed7: mov dword ptr [esi + 0xf8], edi */ W32((u32)(r_esi+0xf8u), r_edi);
    /* 00591edd: jmp 0x591eee */ goto L_00591eee;
L_00591edf:; BB(0x00591edf);
    /* 00591edf: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00591ee4: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00591ee9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00591eee:; BB(0x00591eee);
    /* 00591eee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x591ef3u); f_0082da80();
    /* 00591ef3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591ef5: je 0x591f11 */ if (fZ) goto L_00591f11;
L_00591ef7:; BB(0x00591ef7);
    /* 00591ef7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00591efb: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00591efe: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00591f00: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00591f03: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00591f07: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 00591f0a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00591f0e: mov dword ptr [esi + 0x20], ebp */ W32((u32)(r_esi+0x20u), r_ebp);
L_00591f11:; BB(0x00591f11);
    /* 00591f11: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x591f16u); f_0082dab0();
L_00591f16:; BB(0x00591f16);
    /* 00591f16: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00591f19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591f1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00591f1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00591f1c: ret  */ FN_RET(0x00591c98); r_esp += 4; return;
}

void f_00591f20(void) /* sub_591F20 */
{
    FN_ENTER(0x00591f20);
    /* 00591f20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00591f24: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00591f27: ja 0x592033 */ if ((!fC&&!fZ)) goto L_00592033;
L_00591f2d:; BB(0x00591f2d);
    /* 00591f2d: mov eax, dword ptr [eax*4 + 0x928ee0] */ r_eax = R32((u32)(r_eax*4+0x928ee0u));
    /* 00591f34: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f20); r_esp += 12; return;
}

void f_00591f36(void)
{
    FN_ENTER(0x00591f36);
    /* 00591f36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f3b: call 0x592038 */ r_esp -= 4; W32(r_esp, 0x591f40u); f_00592038();
    /* 00591f40: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f36); r_esp += 12; return;
}

void f_00591f45(void)
{
    FN_ENTER(0x00591f45);
    /* 00591f45: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f4a: call 0x59213c */ r_esp -= 4; W32(r_esp, 0x591f4fu); f_0059213c();
    /* 00591f4f: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f45); r_esp += 12; return;
}

void f_00591f54(void)
{
    FN_ENTER(0x00591f54);
    /* 00591f54: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f59: call 0x592250 */ r_esp -= 4; W32(r_esp, 0x591f5eu); f_00592250();
    /* 00591f5e: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f54); r_esp += 12; return;
}

void f_00591f63(void)
{
    FN_ENTER(0x00591f63);
    /* 00591f63: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f68: call 0x5926c4 */ r_esp -= 4; W32(r_esp, 0x591f6du); f_005926c4();
    /* 00591f6d: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f63); r_esp += 12; return;
}

void f_00591f72(void)
{
    FN_ENTER(0x00591f72);
    /* 00591f72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f77: call 0x5928c0 */ r_esp -= 4; W32(r_esp, 0x591f7cu); f_005928c0();
    /* 00591f7c: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f72); r_esp += 12; return;
}

void f_00591f81(void)
{
    FN_ENTER(0x00591f81);
    /* 00591f81: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f86: call 0x592a10 */ r_esp -= 4; W32(r_esp, 0x591f8bu); f_00592a10();
    /* 00591f8b: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f81); r_esp += 12; return;
}

void f_00591f90(void)
{
    FN_ENTER(0x00591f90);
    /* 00591f90: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591f95: call 0x592ac4 */ r_esp -= 4; W32(r_esp, 0x591f9au); f_00592ac4();
    /* 00591f9a: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f90); r_esp += 12; return;
}

void f_00591f9f(void)
{
    FN_ENTER(0x00591f9f);
    /* 00591f9f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fa4: call 0x592fdc */ r_esp -= 4; W32(r_esp, 0x591fa9u); f_00592fdc();
    /* 00591fa9: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591f9f); r_esp += 12; return;
}

void f_00591fae(void)
{
    FN_ENTER(0x00591fae);
    /* 00591fae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fb3: call 0x593330 */ r_esp -= 4; W32(r_esp, 0x591fb8u); f_00593330();
    /* 00591fb8: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fae); r_esp += 12; return;
}

void f_00591fba(void)
{
    FN_ENTER(0x00591fba);
    /* 00591fba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fbf: call 0x593438 */ r_esp -= 4; W32(r_esp, 0x591fc4u); f_00593438();
    /* 00591fc4: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fba); r_esp += 12; return;
}

void f_00591fc6(void)
{
    FN_ENTER(0x00591fc6);
    /* 00591fc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fcb: call 0x5937a8 */ r_esp -= 4; W32(r_esp, 0x591fd0u); f_005937a8();
    /* 00591fd0: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fc6); r_esp += 12; return;
}

void f_00591fd2(void)
{
    FN_ENTER(0x00591fd2);
    /* 00591fd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fd7: call 0x593ae8 */ r_esp -= 4; W32(r_esp, 0x591fdcu); f_00593ae8();
    /* 00591fdc: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fd2); r_esp += 12; return;
}

void f_00591fde(void)
{
    FN_ENTER(0x00591fde);
    /* 00591fde: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fe3: call 0x59405c */ r_esp -= 4; W32(r_esp, 0x591fe8u); f_0059405c();
    /* 00591fe8: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fde); r_esp += 12; return;
}

void f_00591fea(void)
{
    FN_ENTER(0x00591fea);
    /* 00591fea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591fef: call 0x594294 */ r_esp -= 4; W32(r_esp, 0x591ff4u); f_00594294();
    /* 00591ff4: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591fea); r_esp += 12; return;
}

void f_00591ff6(void)
{
    FN_ENTER(0x00591ff6);
    /* 00591ff6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00591ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00591ffb: call 0x59457c */ r_esp -= 4; W32(r_esp, 0x592000u); f_0059457c();
    /* 00592000: jmp 0x592033 */ goto L_00592033;
L_00592033:; BB(0x00592033);
    /* 00592033: ret 8 */ FN_RET(0x00591ff6); r_esp += 12; return;
}

