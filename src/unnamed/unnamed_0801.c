#include "protos.h"

void f_00801034(void) /* sub_801034 */
{
    FN_ENTER(0x00801034);
    /* 00801034: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801037: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080103a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0080103d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080103f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00801041: jle 0x801085 */ if ((fZ||fS!=fO)) goto L_00801085;
L_00801043:; BB(0x00801043);
    /* 00801043: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00801047: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0080104a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0080104d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080104f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00801051: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00801053: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00801055: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00801057: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00801059: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0080105b:; BB(0x0080105b);
    /* 0080105b: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 0080105e: mov dword ptr [eax + ebx], 0 */ W32((u32)(r_eax+r_ebx), 0x0u);
    /* 00801065: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 00801068: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 0080106b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080106d: mov dword ptr [ebx + edx*4], esi */ W32((u32)(r_ebx+r_edx*4), r_esi);
    /* 00801070: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 00801073: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00801076: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00801079: cmp edx, dword ptr [ebx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080107c: jl 0x80105b */ if ((fS!=fO)) goto L_0080105b;
L_0080107e:; BB(0x0080107e);
    /* 0080107e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00801082: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00801085:; BB(0x00801085);
    /* 00801085: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0080108c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080108f: ret  */ FN_RET(0x00801034); r_esp += 4; return;
}

void f_00801090(void) /* sub_801090 */
{
    FN_ENTER(0x00801090);
    /* 00801090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801091: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00801095: movsx edx, byte ptr [eax + 0x28] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x28u));
    /* 00801099: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0080109f: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 008010a2: mov edi, dword ptr [edi + edx*4] */ r_edi = R32((u32)(r_edi+r_edx*4));
    /* 008010a5: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008010a7: mov edi, dword ptr [ecx + 0x20] */ r_edi = R32((u32)(r_ecx+0x20u));
    /* 008010aa: mov dword ptr [edi + edx*4], eax */ W32((u32)(r_edi+r_edx*4), r_eax);
    /* 008010ad: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 008010b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008010b5: ret 4 */ FN_RET(0x00801090); r_esp += 8; return;
}

void f_008010b8(void) /* sub_8010B8 */
{
    FN_ENTER(0x008010b8);
    /* 008010b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008010b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008010bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008010bd: call 0x8010dc */ r_esp -= 4; W32(r_esp, 0x8010c2u); f_008010dc();
    /* 008010c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008010c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008010c8: jne 0x8010ce */ if (!fZ) goto L_008010ce;
L_008010ca:; BB(0x008010ca);
    /* 008010ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008010cb: ret 4 */ FN_RET(0x008010b8); r_esp += 8; return;
L_008010ce:; BB(0x008010ce);
    /* 008010ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008010cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x8010d4u); f_005c2f74();
    /* 008010d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008010d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008010d6: ret 4 */ FN_RET(0x008010b8); r_esp += 8; return;
}

void f_008010dc(void) /* sub_8010DC */
{
    FN_ENTER(0x008010dc);
    /* 008010dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008010dd: mov ebp, esp */ r_ebp = r_esp;
    /* 008010df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008010e1: push 0x8f6f94 */ { u32 v = 0x8f6f94u; r_esp -= 4; W32(r_esp, v); }
    /* 008010e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008010ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008010ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008010f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008010f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008010fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008010fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00801100: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00801103: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00801106: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00801109: mov dword ptr [ecx], 0xb472c8 */ W32((u32)(r_ecx), 0xb472c8u);
    /* 0080110f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00801116: call 0x800ed0 */ r_esp -= 4; W32(r_esp, 0x80111bu); f_00800ed0();
    /* 0080111b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080111e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00801125: mov esp, ebp */ r_esp = r_ebp;
    /* 00801127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801128: ret  */ FN_RET(0x008010dc); r_esp += 4; return;
}

void f_0080112c(void) /* sub_80112C */
{
    FN_ENTER(0x0080112c);
    /* 0080112c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080112d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080112f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801133: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801137: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801139: call 0x800f4c */ r_esp -= 4; W32(r_esp, 0x80113eu); f_00800f4c();
    /* 0080113e: mov dword ptr [ebx], 0xb472c8 */ W32((u32)(r_ebx), 0xb472c8u);
    /* 00801144: mov edx, dword ptr [0xa101a0] */ r_edx = R32((u32)(0xa101a0u));
    /* 0080114a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0080114d: mov eax, ebx */ r_eax = r_ebx;
    /* 0080114f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801150: ret 8 */ FN_RET(0x0080112c); r_esp += 12; return;
}

void f_00801154(void) /* sub_801154 */
{
    FN_ENTER(0x00801154);
    /* 00801154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801156: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801159: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080115b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0080115e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00801160: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801162: je 0x801176 */ if (fZ) goto L_00801176;
L_00801164:; BB(0x00801164);
    /* 00801164: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801166: je 0x80116f */ if (fZ) goto L_0080116f;
L_00801168:; BB(0x00801168);
    /* 00801168: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x80116du); f_007a9074();
    /* 0080116d: jmp 0x801186 */ goto L_00801186;
L_0080116f:; BB(0x0080116f);
    /* 0080116f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801174u); f_007a9044();
    /* 00801174: jmp 0x801186 */ goto L_00801186;
L_00801176:; BB(0x00801176);
    /* 00801176: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801178: je 0x801181 */ if (fZ) goto L_00801181;
L_0080117a:; BB(0x0080117a);
    /* 0080117a: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x80117fu); f_007a905c();
    /* 0080117f: jmp 0x801186 */ goto L_00801186;
L_00801181:; BB(0x00801181);
    /* 00801181: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x801186u); f_007a902c();
L_00801186:; BB(0x00801186);
    /* 00801186: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 0080118c: fld dword ptr [0x97e9a8] */ FPUSH(R_F32((u32)(0x97e9a8u)));
    /* 00801192: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 00801198: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 0080119e: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 008011a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008011a6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008011a8: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 008011aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008011ac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008011ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008011b0: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008011b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008011b6: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008011ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008011bc: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 008011c0: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 008011c4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x8011c9u); f_0082dbac();
    /* 008011c9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008011ce: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x8011d3u); f_0082bb30();
    /* 008011d3: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008011d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008011d9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x8011deu); f_00829cc8();
    /* 008011de: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008011e1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008011e4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008011e7: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x8011ecu); f_0082bb60();
    /* 008011ec: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008011ef: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 008011f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008011f4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008011f6: jle 0x801399 */ if ((fZ||fS!=fO)) goto L_00801399;
L_008011fc:; BB(0x008011fc);
    /* 008011fc: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00801200: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00801204: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00801207: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801209: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0080120b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080120d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080120f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00801211: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801213: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801215: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00801218: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080121a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080121c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080121e: mov esi, edx */ r_esi = r_edx;
    /* 00801220: mov ebx, ecx */ r_ebx = r_ecx;
L_00801222:; BB(0x00801222);
    /* 00801222: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00801225: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 00801228: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080122b: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 0080122e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801230: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00801234: mov ecx, dword ptr [edi + eax + 4] */ r_ecx = R32((u32)(r_edi+r_eax+0x4u));
    /* 00801238: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0080123c: mov ecx, dword ptr [edi + eax + 8] */ r_ecx = R32((u32)(r_edi+r_eax+0x8u));
    /* 00801240: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00801244: mov eax, dword ptr [edi + eax + 0xc] */ r_eax = R32((u32)(r_edi+r_eax+0xcu));
    /* 00801248: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0080124c: je 0x801377 */ if (fZ) goto L_00801377;
L_00801252:; BB(0x00801252);
    /* 00801252: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00801256: mov esi, edx */ r_esi = r_edx;
L_00801258:; BB(0x00801258);
    /* 00801258: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0080125b: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0080125e: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00801261: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00801264: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801268: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080126a: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0080126e: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00801271: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00801274: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801276: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0080127a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080127c: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00801280: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801283: je 0x8012ad */ if (fZ) goto L_008012ad;
L_00801285:; BB(0x00801285);
    /* 00801285: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801287: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801289: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080128b: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0080128f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801290: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00801294: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00801296: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x80129bu); f_00830aa0();
    /* 0080129b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0080129f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 008012a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008012a5: fchs  */ ST(0) = -ST(0);
    /* 008012a7: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008012ab: jmp 0x8012bb */ goto L_008012bb;
L_008012ad:; BB(0x008012ad);
    /* 008012ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008012af: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 008012b3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008012b7: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
L_008012bb:; BB(0x008012bb);
    /* 008012bb: fcomp dword ptr [0x97e9a4] */ fx_compare(ST(0), R_F32((u32)(0x97e9a4u))); FPOP();
    /* 008012c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008012c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008012c4: jb 0x80135c */ if (fC) goto L_0080135c;
L_008012ca:; BB(0x008012ca);
    /* 008012ca: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 008012cd: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x8012d2u); f_0082b438();
    /* 008012d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 008012d6: fld dword ptr [0x97e9a4] */ FPUSH(R_F32((u32)(0x97e9a4u)));
    /* 008012dc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 008012e0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 008012e4: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 008012e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008012eb: je 0x8013b0 */ if (fZ) goto L_008013b0;
L_008012f1:; BB(0x008012f1);
    /* 008012f1: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 008012f5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008012f7: fchs  */ ST(0) = -ST(0);
    /* 008012f9: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 008012fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008012fd: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008012ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801301: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801303: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00801307: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801309: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0080130b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080130d: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00801311: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801313: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00801317: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801319: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080131b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080131d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_0080131f:; BB(0x0080131f);
    /* 0080131f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00801321: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801324: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801326: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 00801329: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0080132b: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 0080132e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801330: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00801332: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801335: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801337: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00801339: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080133b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0080133f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00801341: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00801343: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00801347: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00801349: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0080134d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080134e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801351: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00801355: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x80135au); f_0082b440();
    /* 0080135a: jmp 0x801369 */ goto L_00801369;
L_0080135c:; BB(0x0080135c);
    /* 0080135c: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801360: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801363: je 0x8012ca */ if (fZ) goto L_008012ca;
L_00801369:; BB(0x00801369);
    /* 00801369: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0080136b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080136d: jne 0x801258 */ if (!fZ) goto L_00801258;
L_00801373:; BB(0x00801373);
    /* 00801373: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00801377:; BB(0x00801377);
    /* 00801377: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x80137cu); f_004ac444();
    /* 0080137c: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0080137f: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00801382: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801385: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00801388: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080138b: jl 0x801222 */ if ((fS!=fO)) goto L_00801222;
L_00801391:; BB(0x00801391);
    /* 00801391: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00801395: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_00801399:; BB(0x00801399);
    /* 00801399: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x80139eu); f_0082dab0();
    /* 0080139e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008013a0: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x8013a5u); f_00801034();
    /* 008013a5: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x8013aau); f_007a9044();
    /* 008013aa: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008013ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008013ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008013af: ret  */ FN_RET(0x00801154); r_esp += 4; return;
L_008013b0:; BB(0x008013b0);
    /* 008013b0: fld dword ptr [0x97e9a4] */ FPUSH(R_F32((u32)(0x97e9a4u)));
    /* 008013b6: jmp 0x80131f */ goto L_0080131f;
}

void f_008013bc(void) /* sub_8013BC */
{
    FN_ENTER(0x008013bc);
    /* 008013bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008013bd: mov ebp, esp */ r_ebp = r_esp;
    /* 008013bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008013c1: push 0x8f7028 */ { u32 v = 0x8f7028u; r_esp -= 4; W32(r_esp, v); }
    /* 008013c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008013cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008013cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008013d4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008013d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008013da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 008013dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008013e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 008013e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008013e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008013e8:; BB(0x008013e8);
    /* 008013e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008013eb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008013ed: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 008013f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008013f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008013f4: lea ecx, [edx + edx + 0xa101c0] */ r_ecx = (u32)(r_edx+r_edx+0xa101c0u);
    /* 008013fb: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 008013fe: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00801401: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801403: je 0x80159f */ if (fZ) goto L_0080159f;
L_00801409:; BB(0x00801409);
    /* 00801409: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080140c: je 0x80154f */ if (fZ) goto L_0080154f;
L_00801412:; BB(0x00801412);
    /* 00801412: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801415: je 0x8014c6 */ if (fZ) goto L_008014c6;
L_0080141b:; BB(0x0080141b);
    /* 0080141b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080141e: jne 0x801470 */ if (!fZ) goto L_00801470;
L_00801420:; BB(0x00801420);
    /* 00801420: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00801427: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00801429: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80142eu); f_005caba4();
    /* 0080142e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080142f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00801432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801434: je 0x80153d */ if (fZ) goto L_0080153d;
L_0080143a:; BB(0x0080143a);
    /* 0080143a: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00801441: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00801448: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080144b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0080144e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080144f: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00801455: call 0x801dd0 */ r_esp -= 4; W32(r_esp, 0x80145au); f_00801dd0();
    /* 0080145a: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0080145d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00801464:; BB(0x00801464);
    /* 00801464: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080146b: jmp 0x80150d */ goto L_0080150d;
L_00801470:; BB(0x00801470);
    /* 00801470: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801473: jne 0x80150d */ if (!fZ) goto L_0080150d;
L_00801479:; BB(0x00801479);
    /* 00801479: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00801480: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00801482: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x801487u); f_005caba4();
    /* 00801487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00801488: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080148b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080148d: je 0x801544 */ if (fZ) goto L_00801544;
L_00801493:; BB(0x00801493);
    /* 00801493: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080149a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008014a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008014a4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008014a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008014a8: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 008014ae: call 0x8020ec */ r_esp -= 4; W32(r_esp, 0x8014b3u); f_008020ec();
    /* 008014b3: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008014b6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_008014bd:; BB(0x008014bd);
    /* 008014bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008014c4: jmp 0x80150d */ goto L_0080150d;
L_008014c6:; BB(0x008014c6);
    /* 008014c6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 008014cd: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008014cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x8014d4u); f_005caba4();
    /* 008014d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008014d5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 008014d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008014da: je 0x80154b */ if (fZ) goto L_0080154b;
L_008014dc:; BB(0x008014dc);
    /* 008014dc: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 008014e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 008014ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008014ed: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 008014f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008014f1: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 008014f7: call 0x80112c */ r_esp -= 4; W32(r_esp, 0x8014fcu); f_0080112c();
    /* 008014fc: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 008014ff: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00801506:; BB(0x00801506);
    /* 00801506: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0080150d:; BB(0x0080150d);
    /* 0080150d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00801510: mov dword ptr [eax*4 + 0xaaee20], ebx */ W32((u32)(r_eax*4+0xaaee20u), r_ebx);
    /* 00801517: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080151a: cmp eax, 0x6c */ {  u32 a = r_eax; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080151d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00801520: jl 0x8013e8 */ if ((fS!=fO)) goto L_008013e8;
L_00801526:; BB(0x00801526);
    /* 00801526: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00801529: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080152c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080152f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00801532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00801539: mov esp, ebp */ r_esp = r_ebp;
    /* 0080153b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080153c: ret  */ FN_RET(0x008013bc); r_esp += 4; return;
L_0080153d:; BB(0x0080153d);
    /* 0080153d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080153f: jmp 0x801464 */ goto L_00801464;
L_00801544:; BB(0x00801544);
    /* 00801544: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00801546: jmp 0x8014bd */ goto L_008014bd;
L_0080154b:; BB(0x0080154b);
    /* 0080154b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080154d: jmp 0x801506 */ goto L_00801506;
L_0080154f:; BB(0x0080154f);
    /* 0080154f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00801556: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00801558: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80155du); f_005caba4();
    /* 0080155d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080155e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00801561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801563: je 0x80159b */ if (fZ) goto L_0080159b;
L_00801565:; BB(0x00801565);
    /* 00801565: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0080156c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00801573: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00801576: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00801579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080157a: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00801580: call 0x801abc */ r_esp -= 4; W32(r_esp, 0x801585u); f_00801abc();
    /* 00801585: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00801588: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0080158f:; BB(0x0080158f);
    /* 0080158f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00801596: jmp 0x80150d */ goto L_0080150d;
L_0080159b:; BB(0x0080159b);
    /* 0080159b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080159d: jmp 0x80158f */ goto L_0080158f;
L_0080159f:; BB(0x0080159f);
    /* 0080159f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 008015a6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008015a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x8015adu); f_005caba4();
    /* 008015ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008015ae: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008015b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008015b3: je 0x8015eb */ if (fZ) goto L_008015eb;
L_008015b5:; BB(0x008015b5);
    /* 008015b5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 008015bc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 008015c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008015c6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008015c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008015ca: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 008015d0: call 0x8017b0 */ r_esp -= 4; W32(r_esp, 0x8015d5u); f_008017b0();
    /* 008015d5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008015d8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_008015df:; BB(0x008015df);
    /* 008015df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008015e6: jmp 0x80150d */ goto L_0080150d;
L_008015eb:; BB(0x008015eb);
    /* 008015eb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008015ed: jmp 0x8015df */ goto L_008015df;
}

void f_008015f0(void) /* sub_8015F0 */
{
    FN_ENTER(0x008015f0);
    /* 008015f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008015f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008015f4:; BB(0x008015f4);
    /* 008015f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008015f6: mov dword ptr [edx + 0xa101c4], ecx */ W32((u32)(r_edx+0xa101c4u), r_ecx);
    /* 008015fc: mov dword ptr [eax + 0xaaee20], ecx */ W32((u32)(r_eax+0xaaee20u), r_ecx);
    /* 00801602: mov dword ptr [edx + 0xa101ec], ecx */ W32((u32)(r_edx+0xa101ecu), r_ecx);
    /* 00801608: mov dword ptr [eax + 0xaaee24], ecx */ W32((u32)(r_eax+0xaaee24u), r_ecx);
    /* 0080160e: mov dword ptr [edx + 0xa10214], ecx */ W32((u32)(r_edx+0xa10214u), r_ecx);
    /* 00801614: mov dword ptr [eax + 0xaaee28], ecx */ W32((u32)(r_eax+0xaaee28u), r_ecx);
    /* 0080161a: mov dword ptr [edx + 0xa1023c], ecx */ W32((u32)(r_edx+0xa1023cu), r_ecx);
    /* 00801620: add edx, 0xa0 */ {  u32 a = r_edx; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00801626: mov dword ptr [eax + 0xaaee2c], ecx */ W32((u32)(r_eax+0xaaee2cu), r_ecx);
    /* 0080162c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080162f: cmp eax, 0x1b0 */ {  u32 a = r_eax; u32 b = 0x1b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00801634: jl 0x8015f4 */ if ((fS!=fO)) goto L_008015f4;
L_00801636:; BB(0x00801636);
    /* 00801636: ret  */ FN_RET(0x008015f0); r_esp += 4; return;
}

void f_00801638(void) /* sub_801638 */
{
    FN_ENTER(0x00801638);
    /* 00801638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801639: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080163a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080163b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080163c: fld dword ptr [0x97e9bc] */ FPUSH(R_F32((u32)(0x97e9bcu)));
    /* 00801642: mov edx, 0xaaed20 */ r_edx = 0xaaed20u;
    /* 00801647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00801649: fld dword ptr [0x97e9b8] */ FPUSH(R_F32((u32)(0x97e9b8u)));
    /* 0080164f: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
    /* 00801654: mov ecx, 0x3f400000 */ r_ecx = 0x3f400000u;
    /* 00801659: mov ebx, 0x3f400000 */ r_ebx = 0x3f400000u;
    /* 0080165e: mov ebp, 0x3f000000 */ r_ebp = 0x3f000000u;
L_00801663:; BB(0x00801663);
    /* 00801663: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00801665: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00801668: fst dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0));
    /* 0080166b: fst dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0));
    /* 0080166e: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 00801671: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00801673: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801675: fst dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0));
    /* 00801678: fst dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0));
    /* 0080167b: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 0080167e: fst dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0));
    /* 00801681: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00801683: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 00801685: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 00801688: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0080168b: mov edi, 0x3e800000 */ r_edi = 0x3e800000u;
    /* 00801690: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00801693: mov edi, 0x3e800000 */ r_edi = 0x3e800000u;
    /* 00801698: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 0080169b: mov edi, 0x3f000000 */ r_edi = 0x3f000000u;
    /* 008016a0: mov dword ptr [edx + 0x20], edi */ W32((u32)(r_edx+0x20u), r_edi);
    /* 008016a3: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 008016a6: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 008016a9: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008016ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008016af: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008016b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008016b4: jl 0x801663 */ if ((fS!=fO)) goto L_00801663;
L_008016b6:; BB(0x008016b6);
    /* 008016b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008016b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008016ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008016bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008016be:; BB(0x008016be);
    /* 008016be: mov ebx, dword ptr [ecx + 0xa101e0] */ r_ebx = R32((u32)(r_ecx+0xa101e0u));
    /* 008016c4: mov eax, dword ptr [ebx*4 + 0xa112c8] */ r_eax = R32((u32)(r_ebx*4+0xa112c8u));
    /* 008016cb: mov ebx, dword ptr [ecx + 0xa10208] */ r_ebx = R32((u32)(r_ecx+0xa10208u));
    /* 008016d1: mov ebx, dword ptr [ebx*4 + 0xa112c8] */ r_ebx = R32((u32)(r_ebx*4+0xa112c8u));
    /* 008016d8: mov dword ptr [ecx + 0xa101c4], eax */ W32((u32)(r_ecx+0xa101c4u), r_eax);
    /* 008016de: mov dword ptr [ecx + 0xa101ec], ebx */ W32((u32)(r_ecx+0xa101ecu), r_ebx);
    /* 008016e4: mov ebx, dword ptr [ecx + 0xa10230] */ r_ebx = R32((u32)(r_ecx+0xa10230u));
    /* 008016ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008016ec: mov ebx, dword ptr [ebx*4 + 0xa112c8] */ r_ebx = R32((u32)(r_ebx*4+0xa112c8u));
    /* 008016f3: mov dword ptr [edx + 0xaaee20], eax */ W32((u32)(r_edx+0xaaee20u), r_eax);
    /* 008016f9: mov dword ptr [edx + 0xaaee24], eax */ W32((u32)(r_edx+0xaaee24u), r_eax);
    /* 008016ff: mov dword ptr [ecx + 0xa10214], ebx */ W32((u32)(r_ecx+0xa10214u), r_ebx);
    /* 00801705: mov ebx, dword ptr [ecx + 0xa10258] */ r_ebx = R32((u32)(r_ecx+0xa10258u));
    /* 0080170b: mov ebx, dword ptr [ebx*4 + 0xa112c8] */ r_ebx = R32((u32)(r_ebx*4+0xa112c8u));
    /* 00801712: mov dword ptr [edx + 0xaaee28], eax */ W32((u32)(r_edx+0xaaee28u), r_eax);
    /* 00801718: mov dword ptr [ecx + 0xa1023c], ebx */ W32((u32)(r_ecx+0xa1023cu), r_ebx);
    /* 0080171e: mov dword ptr [edx + 0xaaee2c], eax */ W32((u32)(r_edx+0xaaee2cu), r_eax);
    /* 00801724: add ecx, 0xa0 */ {  u32 a = r_ecx; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080172a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080172d: cmp edx, 0x1b0 */ {  u32 a = r_edx; u32 b = 0x1b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00801733: jl 0x8016be */ if ((fS!=fO)) goto L_008016be;
L_00801735:; BB(0x00801735);
    /* 00801735: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801737: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00801738: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00801739: ret  */ FN_RET(0x00801638); r_esp += 4; return;
}

void f_0080173c(void) /* sub_80173C */
{
    FN_ENTER(0x0080173c);
    /* 0080173c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080173d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080173f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801741: call 0x801760 */ r_esp -= 4; W32(r_esp, 0x801746u); f_00801760();
    /* 00801746: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080174a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080174c: jne 0x801752 */ if (!fZ) goto L_00801752;
L_0080174e:; BB(0x0080174e);
    /* 0080174e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080174f: ret 4 */ FN_RET(0x0080173c); r_esp += 8; return;
L_00801752:; BB(0x00801752);
    /* 00801752: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801753: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x801758u); f_005c2f74();
    /* 00801758: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00801759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080175a: ret 4 */ FN_RET(0x0080173c); r_esp += 8; return;
}

void f_00801760(void) /* sub_801760 */
{
    FN_ENTER(0x00801760);
    /* 00801760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801761: mov ebp, esp */ r_ebp = r_esp;
    /* 00801763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00801765: push 0x8f7044 */ { u32 v = 0x8f7044u; r_esp -= 4; W32(r_esp, v); }
    /* 0080176a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00801770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801771: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00801778: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080177b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080177e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00801781: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00801784: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00801787: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080178a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080178d: mov dword ptr [ecx], 0xb47348 */ W32((u32)(r_ecx), 0xb47348u);
    /* 00801793: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080179a: call 0x800ed0 */ r_esp -= 4; W32(r_esp, 0x80179fu); f_00800ed0();
    /* 0080179f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008017a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008017a9: mov esp, ebp */ r_esp = r_ebp;
    /* 008017ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008017ac: ret  */ FN_RET(0x00801760); r_esp += 4; return;
}

void f_008017b0(void) /* sub_8017B0 */
{
    FN_ENTER(0x008017b0);
    /* 008017b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008017b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008017b3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008017b7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008017bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008017bd: call 0x800f4c */ r_esp -= 4; W32(r_esp, 0x8017c2u); f_00800f4c();
    /* 008017c2: mov dword ptr [ebx], 0xb47348 */ W32((u32)(r_ebx), 0xb47348u);
    /* 008017c8: mov edx, dword ptr [0xa112e0] */ r_edx = R32((u32)(0xa112e0u));
    /* 008017ce: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 008017d1: mov eax, ebx */ r_eax = r_ebx;
    /* 008017d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008017d4: ret 8 */ FN_RET(0x008017b0); r_esp += 12; return;
}

void f_008017d8(void) /* sub_8017D8 */
{
    FN_ENTER(0x008017d8);
    /* 008017d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008017d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008017da: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008017dd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008017df: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008017e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008017e4: je 0x801a35 */ if (fZ) goto L_00801a35;
L_008017ea:; BB(0x008017ea);
    /* 008017ea: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008017ed: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008017ef: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008017f1: je 0x801805 */ if (fZ) goto L_00801805;
L_008017f3:; BB(0x008017f3);
    /* 008017f3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008017f5: je 0x8017fe */ if (fZ) goto L_008017fe;
L_008017f7:; BB(0x008017f7);
    /* 008017f7: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x8017fcu); f_007a9074();
    /* 008017fc: jmp 0x801815 */ goto L_00801815;
L_008017fe:; BB(0x008017fe);
    /* 008017fe: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801803u); f_007a9044();
    /* 00801803: jmp 0x801815 */ goto L_00801815;
L_00801805:; BB(0x00801805);
    /* 00801805: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801807: je 0x801810 */ if (fZ) goto L_00801810;
L_00801809:; BB(0x00801809);
    /* 00801809: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x80180eu); f_007a905c();
    /* 0080180e: jmp 0x801815 */ goto L_00801815;
L_00801810:; BB(0x00801810);
    /* 00801810: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x801815u); f_007a902c();
L_00801815:; BB(0x00801815);
    /* 00801815: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 0080181b: fld dword ptr [0x97e9d8] */ FPUSH(R_F32((u32)(0x97e9d8u)));
    /* 00801821: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 00801827: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 0080182d: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 00801833: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801835: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801837: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00801839: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080183b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0080183d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080183f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00801843: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801845: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00801849: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080184b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0080184f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00801853: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x801858u); f_0082dbac();
    /* 00801858: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0080185d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x801862u); f_0082bb30();
    /* 00801862: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801865: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00801868: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x80186du); f_00829cc8();
    /* 0080186d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801870: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00801873: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00801876: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x80187bu); f_0082bb60();
    /* 0080187b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0080187e: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00801881: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00801883: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00801885: jle 0x801a1f */ if ((fZ||fS!=fO)) goto L_00801a1f;
L_0080188b:; BB(0x0080188b);
    /* 0080188b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080188e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00801892: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00801896: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00801899: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080189b: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0080189d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080189f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008018a1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008018a3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008018a5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008018a7: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 008018aa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008018ac: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008018ae: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008018b0: mov ebx, ecx */ r_ebx = r_ecx;
L_008018b2:; BB(0x008018b2);
    /* 008018b2: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008018b5: mov ecx, dword ptr [ebx + esi] */ r_ecx = R32((u32)(r_ebx+r_esi));
    /* 008018b8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008018bb: mov esi, dword ptr [edi + edx] */ r_esi = R32((u32)(r_edi+r_edx));
    /* 008018be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008018c0: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008018c4: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 008018c8: mov esi, dword ptr [edi + edx + 4] */ r_esi = R32((u32)(r_edi+r_edx+0x4u));
    /* 008018cc: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 008018d0: mov esi, dword ptr [edi + edx + 8] */ r_esi = R32((u32)(r_edi+r_edx+0x8u));
    /* 008018d4: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008018d8: mov edx, dword ptr [edi + edx + 0xc] */ r_edx = R32((u32)(r_edi+r_edx+0xcu));
    /* 008018dc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 008018e0: je 0x8019ff */ if (fZ) goto L_008019ff;
L_008018e6:; BB(0x008018e6);
    /* 008018e6: mov esi, ecx */ r_esi = r_ecx;
L_008018e8:; BB(0x008018e8);
    /* 008018e8: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008018eb: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 008018ee: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 008018f1: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 008018f4: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 008018f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008018fa: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 008018fe: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00801901: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00801904: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801906: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0080190a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080190c: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 00801910: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801913: je 0x801941 */ if (fZ) goto L_00801941;
L_00801915:; BB(0x00801915);
    /* 00801915: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801917: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801919: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080191b: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 0080191f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801920: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00801924: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00801926: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x80192bu); f_00830aa0();
    /* 0080192b: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0080192f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00801933: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801939: fchs  */ ST(0) = -ST(0);
    /* 0080193b: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 0080193f: jmp 0x801953 */ goto L_00801953;
L_00801941:; BB(0x00801941);
    /* 00801941: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801943: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00801947: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 0080194b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080194d: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 00801951: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00801953:; BB(0x00801953);
    /* 00801953: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801955: fcom dword ptr [0x97e9d4] */ fx_compare(ST(0), R_F32((u32)(0x97e9d4u))); 
    /* 0080195b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080195d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080195e: ja 0x8019e5 */ if ((!fC&&!fZ)) goto L_008019e5;
L_00801964:; BB(0x00801964);
    /* 00801964: fld dword ptr [0x97e9d0] */ FPUSH(R_F32((u32)(0x97e9d0u)));
    /* 0080196a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0080196e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801971: je 0x801a3b */ if (fZ) goto L_00801a3b;
L_00801977:; BB(0x00801977);
    /* 00801977: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0080197b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080197d: fchs  */ ST(0) = -ST(0);
    /* 0080197f: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00801981: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801983: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00801985: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801987: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801989: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0080198d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0080198f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00801991: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801993: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00801997: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801999: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0080199d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0080199f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019a1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008019a3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_008019a5:; BB(0x008019a5);
    /* 008019a5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008019a7: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008019aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019ac: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 008019af: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008019b1: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 008019b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019b6: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 008019b8: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008019bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019be: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008019c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019c2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 008019c6: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008019c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008019ca: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 008019ce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008019d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008019d2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 008019d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008019d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008019da: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008019de: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x8019e3u); f_0082b440();
    /* 008019e3: jmp 0x8019f2 */ goto L_008019f2;
L_008019e5:; BB(0x008019e5);
    /* 008019e5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008019e8: je 0x801964 */ if (fZ) goto L_00801964;
L_008019ee:; BB(0x008019ee);
    /* 008019ee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008019f0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_008019f2:; BB(0x008019f2);
    /* 008019f2: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 008019f4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008019f6: jne 0x8018e8 */ if (!fZ) goto L_008018e8;
L_008019fc:; BB(0x008019fc);
    /* 008019fc: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
L_008019ff:; BB(0x008019ff);
    /* 008019ff: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00801a02: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00801a05: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801a08: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00801a0b: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00801a0e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00801a11: jl 0x8018b2 */ if ((fS!=fO)) goto L_008018b2;
L_00801a17:; BB(0x00801a17);
    /* 00801a17: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00801a1b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00801a1f:; BB(0x00801a1f);
    /* 00801a1f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x801a24u); f_004ac444();
    /* 00801a24: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x801a29u); f_0082dab0();
    /* 00801a29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00801a2b: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x801a30u); f_00801034();
    /* 00801a30: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801a35u); f_007a9044();
L_00801a35:; BB(0x00801a35);
    /* 00801a35: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00801a38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801a39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00801a3a: ret  */ FN_RET(0x008017d8); r_esp += 4; return;
L_00801a3b:; BB(0x00801a3b);
    /* 00801a3b: fld dword ptr [0x97e9d0] */ FPUSH(R_F32((u32)(0x97e9d0u)));
    /* 00801a41: jmp 0x8019a5 */ goto L_008019a5;
}

void f_00801a48(void) /* sub_801A48 */
{
    FN_ENTER(0x00801a48);
    /* 00801a48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801a49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00801a4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801a4d: call 0x801a6c */ r_esp -= 4; W32(r_esp, 0x801a52u); f_00801a6c();
    /* 00801a52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00801a56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00801a58: jne 0x801a5e */ if (!fZ) goto L_00801a5e;
L_00801a5a:; BB(0x00801a5a);
    /* 00801a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801a5b: ret 4 */ FN_RET(0x00801a48); r_esp += 8; return;
L_00801a5e:; BB(0x00801a5e);
    /* 00801a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801a5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x801a64u); f_005c2f74();
    /* 00801a64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00801a65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801a66: ret 4 */ FN_RET(0x00801a48); r_esp += 8; return;
}

void f_00801a6c(void) /* sub_801A6C */
{
    FN_ENTER(0x00801a6c);
    /* 00801a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00801a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00801a71: push 0x8f7060 */ { u32 v = 0x8f7060u; r_esp -= 4; W32(r_esp, v); }
    /* 00801a76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00801a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801a7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00801a84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801a87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00801a8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00801a8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00801a90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00801a93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00801a96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00801a99: mov dword ptr [ecx], 0xb47380 */ W32((u32)(r_ecx), 0xb47380u);
    /* 00801a9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00801aa6: call 0x800ed0 */ r_esp -= 4; W32(r_esp, 0x801aabu); f_00800ed0();
    /* 00801aab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00801aae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00801ab5: mov esp, ebp */ r_esp = r_ebp;
    /* 00801ab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801ab8: ret  */ FN_RET(0x00801a6c); r_esp += 4; return;
}

void f_00801abc(void) /* sub_801ABC */
{
    FN_ENTER(0x00801abc);
    /* 00801abc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801abd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00801abf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801ac3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801ac7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801ac9: call 0x800f4c */ r_esp -= 4; W32(r_esp, 0x801aceu); f_00800f4c();
    /* 00801ace: mov dword ptr [ebx], 0xb47380 */ W32((u32)(r_ebx), 0xb47380u);
    /* 00801ad4: mov edx, dword ptr [0xa112e4] */ r_edx = R32((u32)(0xa112e4u));
    /* 00801ada: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00801add: mov eax, ebx */ r_eax = r_ebx;
    /* 00801adf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801ae0: ret 8 */ FN_RET(0x00801abc); r_esp += 12; return;
}

void f_00801ae4(void) /* sub_801AE4 */
{
    FN_ENTER(0x00801ae4);
    /* 00801ae4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801ae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801ae6: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801ae9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00801aeb: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00801aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801af0: je 0x801d49 */ if (fZ) goto L_00801d49;
L_00801af6:; BB(0x00801af6);
    /* 00801af6: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801af9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00801afb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801afd: je 0x801b11 */ if (fZ) goto L_00801b11;
L_00801aff:; BB(0x00801aff);
    /* 00801aff: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801b01: je 0x801b0a */ if (fZ) goto L_00801b0a;
L_00801b03:; BB(0x00801b03);
    /* 00801b03: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x801b08u); f_007a9074();
    /* 00801b08: jmp 0x801b21 */ goto L_00801b21;
L_00801b0a:; BB(0x00801b0a);
    /* 00801b0a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801b0fu); f_007a9044();
    /* 00801b0f: jmp 0x801b21 */ goto L_00801b21;
L_00801b11:; BB(0x00801b11);
    /* 00801b11: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801b13: je 0x801b1c */ if (fZ) goto L_00801b1c;
L_00801b15:; BB(0x00801b15);
    /* 00801b15: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x801b1au); f_007a905c();
    /* 00801b1a: jmp 0x801b21 */ goto L_00801b21;
L_00801b1c:; BB(0x00801b1c);
    /* 00801b1c: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x801b21u); f_007a902c();
L_00801b21:; BB(0x00801b21);
    /* 00801b21: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 00801b27: fld dword ptr [0x97e9e4] */ FPUSH(R_F32((u32)(0x97e9e4u)));
    /* 00801b2d: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 00801b33: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 00801b39: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 00801b3f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801b41: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801b43: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00801b45: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801b47: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801b49: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801b4b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00801b4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801b51: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00801b55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801b57: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00801b5b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00801b5f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00801b64: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x801b69u); f_0082bb30();
    /* 00801b69: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801b6c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00801b6f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x801b74u); f_00829cc8();
    /* 00801b74: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801b77: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00801b7a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00801b7d: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x801b82u); f_0082bb60();
    /* 00801b82: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x801b87u); f_0082dbac();
    /* 00801b87: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801b8a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00801b8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00801b8f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00801b91: jle 0x801d38 */ if ((fZ||fS!=fO)) goto L_00801d38;
L_00801b97:; BB(0x00801b97);
    /* 00801b97: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00801b9b: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00801b9f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00801ba2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ba4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ba6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ba8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801baa: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00801bac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801bae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801bb0: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00801bb3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801bb5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801bb7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801bb9: mov esi, edx */ r_esi = r_edx;
    /* 00801bbb: mov ebx, ecx */ r_ebx = r_ecx;
L_00801bbd:; BB(0x00801bbd);
    /* 00801bbd: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00801bc0: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 00801bc3: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00801bc6: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 00801bc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801bcb: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00801bcf: mov ecx, dword ptr [edi + eax + 4] */ r_ecx = R32((u32)(r_edi+r_eax+0x4u));
    /* 00801bd3: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00801bd7: mov ecx, dword ptr [edi + eax + 8] */ r_ecx = R32((u32)(r_edi+r_eax+0x8u));
    /* 00801bdb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00801bdf: mov eax, dword ptr [edi + eax + 0xc] */ r_eax = R32((u32)(r_edi+r_eax+0xcu));
    /* 00801be3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00801be7: je 0x801d16 */ if (fZ) goto L_00801d16;
L_00801bed:; BB(0x00801bed);
    /* 00801bed: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00801bf1: mov esi, edx */ r_esi = r_edx;
L_00801bf3:; BB(0x00801bf3);
    /* 00801bf3: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00801bf6: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00801bf9: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00801bfc: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00801bff: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801c03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c05: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00801c09: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00801c0c: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00801c0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801c11: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00801c15: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801c17: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00801c1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801c1e: je 0x801c4e */ if (fZ) goto L_00801c4e;
L_00801c20:; BB(0x00801c20);
    /* 00801c20: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801c22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801c24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801c26: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00801c2a: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00801c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00801c30: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x801c35u); f_00835c3c();
    /* 00801c35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00801c38: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00801c3c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00801c40: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801c44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c46: fchs  */ ST(0) = -ST(0);
    /* 00801c48: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00801c4c: jmp 0x801c60 */ goto L_00801c60;
L_00801c4e:; BB(0x00801c4e);
    /* 00801c4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c50: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00801c54: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00801c58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c5a: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00801c5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00801c60:; BB(0x00801c60);
    /* 00801c60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c62: fcom dword ptr [0x97e9e0] */ fx_compare(ST(0), R_F32((u32)(0x97e9e0u))); 
    /* 00801c68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00801c6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00801c6b: ja 0x801cfb */ if ((!fC&&!fZ)) goto L_00801cfb;
L_00801c71:; BB(0x00801c71);
    /* 00801c71: fld dword ptr [0x97e9dc] */ FPUSH(R_F32((u32)(0x97e9dcu)));
    /* 00801c77: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00801c7b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801c7e: je 0x801d4f */ if (fZ) goto L_00801d4f;
L_00801c84:; BB(0x00801c84);
    /* 00801c84: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00801c88: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801c8a: fchs  */ ST(0) = -ST(0);
    /* 00801c8c: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00801c8e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c90: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00801c92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c94: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801c96: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00801c9a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801c9c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00801c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ca0: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00801ca4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801ca6: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00801caa: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801cb0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_00801cb2:; BB(0x00801cb2);
    /* 00801cb2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00801cb4: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801cb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cb9: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 00801cbc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cbe: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00801cc1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cc3: fmul dword ptr [esi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x1cu));
    /* 00801cc6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cc8: fmul dword ptr [esi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x20u));
    /* 00801ccb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ccd: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00801ccf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801cd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cd4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00801cd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cd8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00801cdc: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00801cde: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00801ce0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00801ce4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00801ce6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ce8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00801cec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801ced: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801cf0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00801cf4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x801cf9u); f_0082b440();
    /* 00801cf9: jmp 0x801d08 */ goto L_00801d08;
L_00801cfb:; BB(0x00801cfb);
    /* 00801cfb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801cfe: je 0x801c71 */ if (fZ) goto L_00801c71;
L_00801d04:; BB(0x00801d04);
    /* 00801d04: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801d06: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00801d08:; BB(0x00801d08);
    /* 00801d08: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00801d0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801d0c: jne 0x801bf3 */ if (!fZ) goto L_00801bf3;
L_00801d12:; BB(0x00801d12);
    /* 00801d12: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00801d16:; BB(0x00801d16);
    /* 00801d16: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x801d1bu); f_004ac444();
    /* 00801d1b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801d1e: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00801d21: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801d24: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00801d27: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00801d2a: jl 0x801bbd */ if ((fS!=fO)) goto L_00801bbd;
L_00801d30:; BB(0x00801d30);
    /* 00801d30: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00801d34: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_00801d38:; BB(0x00801d38);
    /* 00801d38: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x801d3du); f_0082dab0();
    /* 00801d3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00801d3f: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x801d44u); f_00801034();
    /* 00801d44: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801d49u); f_007a9044();
L_00801d49:; BB(0x00801d49);
    /* 00801d49: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00801d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801d4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00801d4e: ret  */ FN_RET(0x00801ae4); r_esp += 4; return;
L_00801d4f:; BB(0x00801d4f);
    /* 00801d4f: fld dword ptr [0x97e9dc] */ FPUSH(R_F32((u32)(0x97e9dcu)));
    /* 00801d55: jmp 0x801cb2 */ goto L_00801cb2;
}

void f_00801c20(void)
{
    FN_ENTER(0x00801c20);
    goto L_00801c20;
L_00801bbd:; BB(0x00801bbd);
    /* 00801bbd: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00801bc0: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 00801bc3: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00801bc6: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 00801bc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801bcb: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00801bcf: mov ecx, dword ptr [edi + eax + 4] */ r_ecx = R32((u32)(r_edi+r_eax+0x4u));
    /* 00801bd3: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00801bd7: mov ecx, dword ptr [edi + eax + 8] */ r_ecx = R32((u32)(r_edi+r_eax+0x8u));
    /* 00801bdb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00801bdf: mov eax, dword ptr [edi + eax + 0xc] */ r_eax = R32((u32)(r_edi+r_eax+0xcu));
    /* 00801be3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00801be7: je 0x801d16 */ if (fZ) goto L_00801d16;
L_00801bed:; BB(0x00801bed);
    /* 00801bed: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00801bf1: mov esi, edx */ r_esi = r_edx;
L_00801bf3:; BB(0x00801bf3);
    /* 00801bf3: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00801bf6: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00801bf9: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00801bfc: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00801bff: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801c03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c05: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00801c09: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00801c0c: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00801c0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801c11: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00801c15: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801c17: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00801c1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801c1e: je 0x801c4e */ if (fZ) goto L_00801c4e;
L_00801c20:; BB(0x00801c20);
    /* 00801c20: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801c22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801c24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801c26: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00801c2a: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00801c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00801c30: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x801c35u); f_00835c3c();
    /* 00801c35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00801c38: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00801c3c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00801c40: movsx edx, byte ptr [esi + 0x29] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801c44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c46: fchs  */ ST(0) = -ST(0);
    /* 00801c48: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00801c4c: jmp 0x801c60 */ goto L_00801c60;
L_00801c4e:; BB(0x00801c4e);
    /* 00801c4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c50: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00801c54: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00801c58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c5a: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00801c5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00801c60:; BB(0x00801c60);
    /* 00801c60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c62: fcom dword ptr [0x97e9e0] */ fx_compare(ST(0), R_F32((u32)(0x97e9e0u))); 
    /* 00801c68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00801c6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00801c6b: ja 0x801cfb */ if ((!fC&&!fZ)) goto L_00801cfb;
L_00801c71:; BB(0x00801c71);
    /* 00801c71: fld dword ptr [0x97e9dc] */ FPUSH(R_F32((u32)(0x97e9dcu)));
    /* 00801c77: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00801c7b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801c7e: je 0x801d4f */ if (fZ) goto L_00801d4f;
L_00801c84:; BB(0x00801c84);
    /* 00801c84: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00801c88: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801c8a: fchs  */ ST(0) = -ST(0);
    /* 00801c8c: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00801c8e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c90: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00801c92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801c94: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801c96: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00801c9a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801c9c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00801c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ca0: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00801ca4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801ca6: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00801caa: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801cb0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_00801cb2:; BB(0x00801cb2);
    /* 00801cb2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00801cb4: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801cb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cb9: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 00801cbc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cbe: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00801cc1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cc3: fmul dword ptr [esi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x1cu));
    /* 00801cc6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801cc8: fmul dword ptr [esi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x20u));
    /* 00801ccb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ccd: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00801ccf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801cd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cd4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00801cd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801cd8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00801cdc: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00801cde: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00801ce0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00801ce4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00801ce6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801ce8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00801cec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801ced: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801cf0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00801cf4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x801cf9u); f_0082b440();
    /* 00801cf9: jmp 0x801d08 */ goto L_00801d08;
L_00801cfb:; BB(0x00801cfb);
    /* 00801cfb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801cfe: je 0x801c71 */ if (fZ) goto L_00801c71;
L_00801d04:; BB(0x00801d04);
    /* 00801d04: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801d06: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00801d08:; BB(0x00801d08);
    /* 00801d08: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00801d0a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801d0c: jne 0x801bf3 */ if (!fZ) goto L_00801bf3;
L_00801d12:; BB(0x00801d12);
    /* 00801d12: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00801d16:; BB(0x00801d16);
    /* 00801d16: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x801d1bu); f_004ac444();
    /* 00801d1b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801d1e: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00801d21: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801d24: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00801d27: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00801d2a: jl 0x801bbd */ if ((fS!=fO)) goto L_00801bbd;
L_00801d30:; BB(0x00801d30);
    /* 00801d30: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00801d34: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00801d38: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x801d3du); f_0082dab0();
    /* 00801d3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00801d3f: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x801d44u); f_00801034();
    /* 00801d44: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801d49u); f_007a9044();
    /* 00801d49: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00801d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801d4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00801d4e: ret  */ FN_RET(0x00801c20); r_esp += 4; return;
L_00801d4f:; BB(0x00801d4f);
    /* 00801d4f: fld dword ptr [0x97e9dc] */ FPUSH(R_F32((u32)(0x97e9dcu)));
    /* 00801d55: jmp 0x801cb2 */ goto L_00801cb2;
}

void f_00801d5c(void) /* sub_801D5C */
{
    FN_ENTER(0x00801d5c);
    /* 00801d5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801d5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00801d5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801d61: call 0x801d80 */ r_esp -= 4; W32(r_esp, 0x801d66u); f_00801d80();
    /* 00801d66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00801d6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00801d6c: jne 0x801d72 */ if (!fZ) goto L_00801d72;
L_00801d6e:; BB(0x00801d6e);
    /* 00801d6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801d6f: ret 4 */ FN_RET(0x00801d5c); r_esp += 8; return;
L_00801d72:; BB(0x00801d72);
    /* 00801d72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801d73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x801d78u); f_005c2f74();
    /* 00801d78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00801d79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801d7a: ret 4 */ FN_RET(0x00801d5c); r_esp += 8; return;
}

void f_00801d80(void) /* sub_801D80 */
{
    FN_ENTER(0x00801d80);
    /* 00801d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00801d83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00801d85: push 0x8f707c */ { u32 v = 0x8f707cu; r_esp -= 4; W32(r_esp, v); }
    /* 00801d8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00801d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801d91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00801d98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801d9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00801d9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00801da1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00801da4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00801da7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00801daa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00801dad: mov dword ptr [ecx], 0xb473b8 */ W32((u32)(r_ecx), 0xb473b8u);
    /* 00801db3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00801dba: call 0x800ed0 */ r_esp -= 4; W32(r_esp, 0x801dbfu); f_00800ed0();
    /* 00801dbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00801dc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00801dc9: mov esp, ebp */ r_esp = r_ebp;
    /* 00801dcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00801dcc: ret  */ FN_RET(0x00801d80); r_esp += 4; return;
}

void f_00801dd0(void) /* sub_801DD0 */
{
    FN_ENTER(0x00801dd0);
    /* 00801dd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00801dd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00801dd3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801dd7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00801ddb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00801ddd: call 0x800f4c */ r_esp -= 4; W32(r_esp, 0x801de2u); f_00800f4c();
    /* 00801de2: mov dword ptr [ebx], 0xb473b8 */ W32((u32)(r_ebx), 0xb473b8u);
    /* 00801de8: mov edx, dword ptr [0xa112e8] */ r_edx = R32((u32)(0xa112e8u));
    /* 00801dee: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00801df1: mov eax, ebx */ r_eax = r_ebx;
    /* 00801df3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00801df4: ret 8 */ FN_RET(0x00801dd0); r_esp += 12; return;
}

void f_00801df8(void) /* sub_801DF8 */
{
    FN_ENTER(0x00801df8);
    /* 00801df8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00801df9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00801dfa: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00801dfd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00801dff: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00801e02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801e04: je 0x802065 */ if (fZ) goto L_00802065;
L_00801e0a:; BB(0x00801e0a);
    /* 00801e0a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801e0d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00801e0f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801e11: je 0x801e25 */ if (fZ) goto L_00801e25;
L_00801e13:; BB(0x00801e13);
    /* 00801e13: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801e15: je 0x801e1e */ if (fZ) goto L_00801e1e;
L_00801e17:; BB(0x00801e17);
    /* 00801e17: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x801e1cu); f_007a9074();
    /* 00801e1c: jmp 0x801e35 */ goto L_00801e35;
L_00801e1e:; BB(0x00801e1e);
    /* 00801e1e: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x801e23u); f_007a9044();
    /* 00801e23: jmp 0x801e35 */ goto L_00801e35;
L_00801e25:; BB(0x00801e25);
    /* 00801e25: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00801e27: je 0x801e30 */ if (fZ) goto L_00801e30;
L_00801e29:; BB(0x00801e29);
    /* 00801e29: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x801e2eu); f_007a905c();
    /* 00801e2e: jmp 0x801e35 */ goto L_00801e35;
L_00801e30:; BB(0x00801e30);
    /* 00801e30: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x801e35u); f_007a902c();
L_00801e35:; BB(0x00801e35);
    /* 00801e35: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 00801e3b: fld dword ptr [0x97e9f0] */ FPUSH(R_F32((u32)(0x97e9f0u)));
    /* 00801e41: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 00801e47: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 00801e4d: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 00801e53: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801e55: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801e57: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00801e59: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801e5b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801e5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801e5f: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00801e63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801e65: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00801e69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801e6b: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00801e6f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00801e73: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x801e78u); f_0082dbac();
    /* 00801e78: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00801e7d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x801e82u); f_0082bb30();
    /* 00801e82: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801e85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00801e88: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x801e8du); f_00829cc8();
    /* 00801e8d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801e90: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00801e93: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00801e96: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x801e9bu); f_0082bb60();
    /* 00801e9b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801e9e: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00801ea1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00801ea3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00801ea5: jle 0x802054 */ if ((fZ||fS!=fO)) goto L_00802054;
L_00801eab:; BB(0x00801eab);
    /* 00801eab: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00801eaf: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00801eb3: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00801eb6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801eb8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00801eba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ebc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ebe: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ec0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ec2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00801ec4: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00801ec7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801ec9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801ecb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00801ecd: mov esi, edx */ r_esi = r_edx;
    /* 00801ecf: mov ebx, ecx */ r_ebx = r_ecx;
L_00801ed1:; BB(0x00801ed1);
    /* 00801ed1: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00801ed4: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 00801ed7: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00801eda: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 00801edd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801edf: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00801ee3: mov ecx, dword ptr [edi + eax + 4] */ r_ecx = R32((u32)(r_edi+r_eax+0x4u));
    /* 00801ee7: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00801eeb: mov ecx, dword ptr [edi + eax + 8] */ r_ecx = R32((u32)(r_edi+r_eax+0x8u));
    /* 00801eef: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00801ef3: mov eax, dword ptr [edi + eax + 0xc] */ r_eax = R32((u32)(r_edi+r_eax+0xcu));
    /* 00801ef7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00801efb: je 0x802032 */ if (fZ) goto L_00802032;
L_00801f01:; BB(0x00801f01);
    /* 00801f01: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00801f05: mov esi, edx */ r_esi = r_edx;
L_00801f07:; BB(0x00801f07);
    /* 00801f07: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00801f0a: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00801f0d: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00801f10: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00801f13: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801f17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801f19: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00801f1d: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00801f20: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00801f23: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801f25: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00801f29: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801f2b: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00801f2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801f32: je 0x801f5e */ if (fZ) goto L_00801f5e;
L_00801f34:; BB(0x00801f34);
    /* 00801f34: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00801f36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801f38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00801f3a: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00801f3e: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00801f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00801f43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00801f44: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x801f49u); f_00835c3c();
    /* 00801f49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00801f4c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00801f50: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00801f54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801f56: fchs  */ ST(0) = -ST(0);
    /* 00801f58: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00801f5c: jmp 0x801f6c */ goto L_00801f6c;
L_00801f5e:; BB(0x00801f5e);
    /* 00801f5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801f60: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00801f64: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00801f68: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
L_00801f6c:; BB(0x00801f6c);
    /* 00801f6c: fcomp dword ptr [0x97e9ec] */ fx_compare(ST(0), R_F32((u32)(0x97e9ecu))); FPOP();
    /* 00801f72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00801f74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00801f75: ja 0x802017 */ if ((!fC&&!fZ)) goto L_00802017;
L_00801f7b:; BB(0x00801f7b);
    /* 00801f7b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00801f7e: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x801f83u); f_0082b438();
    /* 00801f83: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00801f87: fld dword ptr [0x97e9e8] */ FPUSH(R_F32((u32)(0x97e9e8u)));
    /* 00801f8d: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00801f91: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00801f95: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00801f99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00801f9c: je 0x80206b */ if (fZ) goto L_0080206b;
L_00801fa2:; BB(0x00801fa2);
    /* 00801fa2: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00801fa6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801fa8: fchs  */ ST(0) = -ST(0);
    /* 00801faa: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00801fac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801fae: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00801fb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801fb2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00801fb4: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00801fb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00801fba: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00801fbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801fbe: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00801fc2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801fc4: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00801fc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801fca: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00801fcc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801fce: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00801fd0:; BB(0x00801fd0);
    /* 00801fd0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00801fd2: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00801fd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801fd7: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 00801fda: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801fdc: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00801fdf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801fe1: fmul dword ptr [esi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x1cu));
    /* 00801fe4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00801fe6: fmul dword ptr [esi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x20u));
    /* 00801fe9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00801feb: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00801fed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00801ff0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801ff2: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00801ff4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00801ff6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00801ffa: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00801ffc: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00801ffe: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00802002: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00802004: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00802008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802009: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0080200c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00802010: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x802015u); f_0082b440();
    /* 00802015: jmp 0x802024 */ goto L_00802024;
L_00802017:; BB(0x00802017);
    /* 00802017: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 0080201b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080201e: je 0x801f7b */ if (fZ) goto L_00801f7b;
L_00802024:; BB(0x00802024);
    /* 00802024: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00802026: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802028: jne 0x801f07 */ if (!fZ) goto L_00801f07;
L_0080202e:; BB(0x0080202e);
    /* 0080202e: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00802032:; BB(0x00802032);
    /* 00802032: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x802037u); f_004ac444();
    /* 00802037: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0080203a: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080203d: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00802040: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00802043: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802046: jl 0x801ed1 */ if ((fS!=fO)) goto L_00801ed1;
L_0080204c:; BB(0x0080204c);
    /* 0080204c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00802050: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_00802054:; BB(0x00802054);
    /* 00802054: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x802059u); f_0082dab0();
    /* 00802059: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080205b: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x802060u); f_00801034();
    /* 00802060: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x802065u); f_007a9044();
L_00802065:; BB(0x00802065);
    /* 00802065: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802069: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080206a: ret  */ FN_RET(0x00801df8); r_esp += 4; return;
L_0080206b:; BB(0x0080206b);
    /* 0080206b: fld dword ptr [0x97e9e8] */ FPUSH(R_F32((u32)(0x97e9e8u)));
    /* 00802071: jmp 0x801fd0 */ goto L_00801fd0;
}

