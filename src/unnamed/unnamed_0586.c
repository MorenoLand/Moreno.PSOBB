#include "protos.h"

void f_00586018(void) /* sub_586018 */
{
    FN_ENTER(0x00586018);
    /* 00586018: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00586019: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058601a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058601b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058601c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058601f: mov esi, ecx */ r_esi = r_ecx;
    /* 00586021: movzx eax, word ptr [esi + 0x3c0] */ r_eax = (u32)R16((u32)(r_esi+0x3c0u));
    /* 00586028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586029: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58602eu); f_007b4d18();
    /* 0058602e: mov ebp, eax */ r_ebp = r_eax;
    /* 00586030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586033: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586035: je 0x58619b */ if (fZ) goto L_0058619b;
L_0058603b:; BB(0x0058603b);
    /* 0058603b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0058603e: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586044: jne 0x58619b */ if (!fZ) goto L_0058619b;
L_0058604a:; BB(0x0058604a);
    /* 0058604a: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 00586050: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00586053: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 00586059: jne 0x5860f0 */ if (!fZ) goto L_005860f0;
L_0058605f:; BB(0x0058605f);
    /* 0058605f: push dword ptr [esi + 0x3c0] */ { u32 v = R32((u32)(r_esi+0x3c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586065: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x58606au); f_0068d5a8();
    /* 0058606a: mov ebx, eax */ r_ebx = r_eax;
    /* 0058606c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058606f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586071: je 0x5860d3 */ if (fZ) goto L_005860d3;
L_00586073:; BB(0x00586073);
    /* 00586073: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 00586079: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058607b: je 0x586238 */ if (fZ) goto L_00586238;
L_00586081:; BB(0x00586081);
    /* 00586081: mov ecx, esi */ r_ecx = r_esi;
    /* 00586083: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x586088u); f_007751b0();
    /* 00586088: fld dword ptr [esi + 0x470] */ FPUSH(R_F32((u32)(r_esi+0x470u)));
    /* 0058608e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00586090: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586092: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586093: jae 0x586201 */ if (!fC) goto L_00586201;
L_00586099:; BB(0x00586099);
    /* 00586099: fld dword ptr [esi + 0x474] */ FPUSH(R_F32((u32)(r_esi+0x474u)));
    /* 0058609f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005860a1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005860a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005860a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005860a6: jae 0x5861ce */ if (!fC) goto L_005861ce;
L_005860ac:; BB(0x005860ac);
    /* 005860ac: mov edi, dword ptr [0x92829c] */ r_edi = R32((u32)(0x92829cu));
    /* 005860b2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005860b4: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005860b7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005860bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005860be: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005860c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005860c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005860c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005860ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005860cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005860cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005860ce: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5860d1u); call_ind(t); }
    /* 005860d1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005860d3:; BB(0x005860d3);
    /* 005860d3: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005860d8: mov ecx, esi */ r_ecx = r_esi;
    /* 005860da: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5860dfu); f_007879b8();
    /* 005860df: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005860e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005860e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005860e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005860e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005860e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005860e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5860edu); f_00814298();
    /* 005860ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005860f0:; BB(0x005860f0);
    /* 005860f0: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005860f6: fcomp dword ptr [0x928290] */ fx_compare(ST(0), R_F32((u32)(0x928290u))); FPOP();
    /* 005860fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005860fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005860ff: jae 0x58615e */ if (!fC) goto L_0058615e;
L_00586101:; BB(0x00586101);
    /* 00586101: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00586104: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00586107: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0058610a: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0058610d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058610f: fmul qword ptr [0x928320] */ ST(0) = ST(0) * R_F64((u32)(0x928320u));
    /* 00586115: fdiv qword ptr [0x928318] */ ST(0) = ST(0) / R_F64((u32)(0x928318u));
    /* 0058611b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0058611f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00586124: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00586129: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0058612d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00586131: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00586135: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00586139: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0058613f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00586143: add edx, dword ptr [eax*4 + 0x928288] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x928288u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058614a: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0058614f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586150: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586153: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x586158u); f_007a8c74();
    /* 00586158: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058615b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_0058615e:; BB(0x0058615e);
    /* 0058615e: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00586164: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586166: je 0x586193 */ if (fZ) goto L_00586193;
L_00586168:; BB(0x00586168);
    /* 00586168: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0058616e: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586174: je 0x58617c */ if (fZ) goto L_0058617c;
L_00586176:; BB(0x00586176);
    /* 00586176: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_0058617c:; BB(0x0058617c);
    /* 0058617c: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00586181: mov dword ptr [esi + 0x380], 0xa */ W32((u32)(r_esi+0x380u), 0xau);
    /* 0058618b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058618d: je 0x586193 */ if (fZ) goto L_00586193;
L_0058618f:; BB(0x0058618f);
    /* 0058618f: mov ecx, esi */ r_ecx = r_esi;
    /* 00586191: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586193u); call_ind(t); }
L_00586193:; BB(0x00586193);
    /* 00586193: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00586196: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00586197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00586198: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00586199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058619a: ret  */ FN_RET(0x00586018); r_esp += 4; return;
L_0058619b:; BB(0x0058619b);
    /* 0058619b: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 005861a1: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005861a7: je 0x5861af */ if (fZ) goto L_005861af;
L_005861a9:; BB(0x005861a9);
    /* 005861a9: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_005861af:; BB(0x005861af);
    /* 005861af: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 005861b4: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 005861be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005861c0: je 0x5861c6 */ if (fZ) goto L_005861c6;
L_005861c2:; BB(0x005861c2);
    /* 005861c2: mov ecx, esi */ r_ecx = r_esi;
    /* 005861c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5861c6u); call_ind(t); }
L_005861c6:; BB(0x005861c6);
    /* 005861c6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005861c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005861ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005861cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005861cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005861cd: ret  */ FN_RET(0x00586018); r_esp += 4; return;
L_005861ce:; BB(0x005861ce);
    /* 005861ce: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005861d0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5861d5u); f_0077a6cc();
    /* 005861d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005861d6: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005861d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005861db: jl 0x5861e2 */ if ((fS!=fO)) goto L_005861e2;
L_005861dd:; BB(0x005861dd);
    /* 005861dd: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005861e0: jle 0x5861e4 */ if ((fZ||fS!=fO)) goto L_005861e4;
L_005861e2:; BB(0x005861e2);
    /* 005861e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005861e4:; BB(0x005861e4);
    /* 005861e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005861e5: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 005861eb: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005861f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005861f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005861f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005861f4: call 0x6f1eb0 */ r_esp -= 4; W32(r_esp, 0x5861f9u); f_006f1eb0();
    /* 005861f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005861fc: jmp 0x5860d3 */ goto L_005860d3;
L_00586201:; BB(0x00586201);
    /* 00586201: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00586203: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586205: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586207: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58620cu); f_0077a6cc();
    /* 0058620c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058620d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00586210: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00586212: jl 0x586219 */ if ((fS!=fO)) goto L_00586219;
L_00586214:; BB(0x00586214);
    /* 00586214: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586217: jle 0x58621b */ if ((fZ||fS!=fO)) goto L_0058621b;
L_00586219:; BB(0x00586219);
    /* 00586219: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0058621b:; BB(0x0058621b);
    /* 0058621b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058621c: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 00586222: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00586228: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00586229: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058622a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058622b: call 0x6e7998 */ r_esp -= 4; W32(r_esp, 0x586230u); f_006e7998();
    /* 00586230: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586233: jmp 0x5860d3 */ goto L_005860d3;
L_00586238:; BB(0x00586238);
    /* 00586238: mov ecx, dword ptr [0x928294] */ r_ecx = R32((u32)(0x928294u));
    /* 0058623e: mov eax, dword ptr [esi + 0x46c] */ r_eax = R32((u32)(r_esi+0x46cu));
    /* 00586244: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00586246: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0058624a: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0058624f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00586253: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00586254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00586255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586259: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058625a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058625c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x58625fu); call_ind(t); }
    /* 0058625f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586261: jmp 0x5860d3 */ goto L_005860d3;
}

void f_00586268(void) /* sub_586268 */
{
    FN_ENTER(0x00586268);
    /* 00586268: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00586269: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058626c: mov esi, ecx */ r_esi = r_ecx;
    /* 0058626e: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00586274: mov ecx, dword ptr [eax + 0x380] */ r_ecx = R32((u32)(r_eax+0x380u));
    /* 0058627a: cmp ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058627d: jne 0x5862af */ if (!fZ) goto L_005862af;
L_0058627f:; BB(0x0058627f);
    /* 0058627f: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00586285: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058628b: je 0x586293 */ if (fZ) goto L_00586293;
L_0058628d:; BB(0x0058628d);
    /* 0058628d: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00586293:; BB(0x00586293);
    /* 00586293: mov eax, dword ptr [0x9bf5f8] */ r_eax = R32((u32)(0x9bf5f8u));
    /* 00586298: mov dword ptr [esi + 0x380], 0xf */ W32((u32)(r_esi+0x380u), 0xfu);
    /* 005862a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862a4: je 0x5862aa */ if (fZ) goto L_005862aa;
L_005862a6:; BB(0x005862a6);
    /* 005862a6: mov ecx, esi */ r_ecx = r_esi;
    /* 005862a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5862aau); call_ind(t); }
L_005862aa:; BB(0x005862aa);
    /* 005862aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005862ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005862ae: ret  */ FN_RET(0x00586268); r_esp += 4; return;
L_005862af:; BB(0x005862af);
    /* 005862af: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 005862b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862b7: je 0x5862bd */ if (fZ) goto L_005862bd;
L_005862b9:; BB(0x005862b9);
    /* 005862b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005862bb: jmp 0x5862de */ goto L_005862de;
L_005862bd:; BB(0x005862bd);
    /* 005862bd: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862c0: je 0x58641a */ if (fZ) goto L_0058641a;
L_005862c6:; BB(0x005862c6);
    /* 005862c6: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862c9: je 0x58641a */ if (fZ) goto L_0058641a;
L_005862cf:; BB(0x005862cf);
    /* 005862cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005862d1:; BB(0x005862d1);
    /* 005862d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862d3: je 0x5862dc */ if (fZ) goto L_005862dc;
L_005862d5:; BB(0x005862d5);
    /* 005862d5: mov edx, 1 */ r_edx = 0x1u;
    /* 005862da: jmp 0x5862de */ goto L_005862de;
L_005862dc:; BB(0x005862dc);
    /* 005862dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005862de:; BB(0x005862de);
    /* 005862de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862e0: jne 0x5863cf */ if (!fZ) goto L_005863cf;
L_005862e6:; BB(0x005862e6);
    /* 005862e6: mov ecx, dword ptr [esi + 0x3bc] */ r_ecx = R32((u32)(r_esi+0x3bcu));
    /* 005862ec: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005862ef: mov dword ptr [esi + 0x3bc], ecx */ W32((u32)(r_esi+0x3bcu), r_ecx);
    /* 005862f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005862f7: jl 0x586409 */ if ((fS!=fO)) goto L_00586409;
L_005862fd:; BB(0x005862fd);
    /* 005862fd: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
L_00586303:; BB(0x00586303);
    /* 00586303: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586306: je 0x5863ff */ if (fZ) goto L_005863ff;
L_0058630c:; BB(0x0058630c);
    /* 0058630c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058630f: je 0x5863ff */ if (fZ) goto L_005863ff;
L_00586315:; BB(0x00586315);
    /* 00586315: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00586317:; BB(0x00586317);
    /* 00586317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586319: jne 0x58639f */ if (!fZ) goto L_0058639f;
L_0058631f:; BB(0x0058631f);
    /* 0058631f: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00586322: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x586327u); f_0082dcbc();
    /* 00586327: fild dword ptr [esi + 0x3dc] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x3dcu)));
    /* 0058632d: fld dword ptr [0x9283fc] */ FPUSH(R_F32((u32)(0x9283fcu)));
    /* 00586333: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00586335: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00586337: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058633a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058633e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00586343: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00586347: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058634b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058634f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00586352: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00586356: push 0x1111 */ { u32 v = 0x1111u; r_esp -= 4; W32(r_esp, v); }
    /* 0058635b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058635c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058635f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x586364u); f_007a8c74();
    /* 00586364: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586367: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0058636a: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 00586370: test al, 0x3f */ {  u32 a = (u8)r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586372: jne 0x586393 */ if (!fZ) goto L_00586393;
L_00586374:; BB(0x00586374);
    /* 00586374: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00586379: mov ecx, esi */ r_ecx = r_esi;
    /* 0058637b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x586380u); f_007879b8();
    /* 00586380: mov ecx, eax */ r_ecx = r_eax;
    /* 00586382: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00586385: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00586387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058638a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058638b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x586390u); f_00814298();
    /* 00586390: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00586393:; BB(0x00586393);
    /* 00586393: mov ecx, esi */ r_ecx = r_esi;
    /* 00586395: call 0x585be8 */ r_esp -= 4; W32(r_esp, 0x58639au); f_00585be8();
    /* 0058639a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058639d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058639e: ret  */ FN_RET(0x00586268); r_esp += 4; return;
L_0058639f:; BB(0x0058639f);
    /* 0058639f: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 005863a5: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863ab: je 0x5863b3 */ if (fZ) goto L_005863b3;
L_005863ad:; BB(0x005863ad);
    /* 005863ad: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_005863b3:; BB(0x005863b3);
    /* 005863b3: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 005863b8: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 005863c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863c4: je 0x5863ca */ if (fZ) goto L_005863ca;
L_005863c6:; BB(0x005863c6);
    /* 005863c6: mov ecx, esi */ r_ecx = r_esi;
    /* 005863c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5863cau); call_ind(t); }
L_005863ca:; BB(0x005863ca);
    /* 005863ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005863cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005863ce: ret  */ FN_RET(0x00586268); r_esp += 4; return;
L_005863cf:; BB(0x005863cf);
    /* 005863cf: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 005863d5: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863db: je 0x5863e3 */ if (fZ) goto L_005863e3;
L_005863dd:; BB(0x005863dd);
    /* 005863dd: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_005863e3:; BB(0x005863e3);
    /* 005863e3: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005863e8: mov dword ptr [esi + 0x380], 0x10 */ W32((u32)(r_esi+0x380u), 0x10u);
    /* 005863f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863f4: je 0x5863fa */ if (fZ) goto L_005863fa;
L_005863f6:; BB(0x005863f6);
    /* 005863f6: mov ecx, esi */ r_ecx = r_esi;
    /* 005863f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5863fau); call_ind(t); }
L_005863fa:; BB(0x005863fa);
    /* 005863fa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005863fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005863fe: ret  */ FN_RET(0x00586268); r_esp += 4; return;
L_005863ff:; BB(0x005863ff);
    /* 005863ff: mov eax, 1 */ r_eax = 0x1u;
    /* 00586404: jmp 0x586317 */ goto L_00586317;
L_00586409:; BB(0x00586409);
    /* 00586409: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 0058640f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586412: je 0x586303 */ if (fZ) goto L_00586303;
L_00586418:; BB(0x00586418);
    /* 00586418: jmp 0x58639f */ goto L_0058639f;
L_0058641a:; BB(0x0058641a);
    /* 0058641a: mov edx, 1 */ r_edx = 0x1u;
    /* 0058641f: jmp 0x5862d1 */ goto L_005862d1;
}

void f_00586424(void) /* sub_586424 */
{
    FN_ENTER(0x00586424);
    /* 00586424: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00586425: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00586428: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058642a: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00586430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586432: je 0x586438 */ if (fZ) goto L_00586438;
L_00586434:; BB(0x00586434);
    /* 00586434: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586436: jmp 0x586465 */ goto L_00586465;
L_00586438:; BB(0x00586438);
    /* 00586438: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0058643e: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00586444: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586447: je 0x586831 */ if (fZ) goto L_00586831;
L_0058644d:; BB(0x0058644d);
    /* 0058644d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586450: je 0x586831 */ if (fZ) goto L_00586831;
L_00586456:; BB(0x00586456);
    /* 00586456: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00586458:; BB(0x00586458);
    /* 00586458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058645a: je 0x586463 */ if (fZ) goto L_00586463;
L_0058645c:; BB(0x0058645c);
    /* 0058645c: mov eax, 1 */ r_eax = 0x1u;
    /* 00586461: jmp 0x586465 */ goto L_00586465;
L_00586463:; BB(0x00586463);
    /* 00586463: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00586465:; BB(0x00586465);
    /* 00586465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586467: jne 0x5867c6 */ if (!fZ) goto L_005867c6;
L_0058646d:; BB(0x0058646d);
    /* 0058646d: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00586473: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00586476: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 0058647c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058647e: jl 0x586796 */ if ((fS!=fO)) goto L_00586796;
L_00586484:; BB(0x00586484);
    /* 00586484: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0058648a: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00586490: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586493: jne 0x586796 */ if (!fZ) goto L_00586796;
L_00586499:; BB(0x00586499);
    /* 00586499: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0058649c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 005864a2: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 005864a8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005864ab: mov eax, dword ptr [ebx + 0x3d8] */ r_eax = R32((u32)(r_ebx+0x3d8u));
    /* 005864b1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005864b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005864b9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5864beu); f_0083173c();
    /* 005864be: fcomp dword ptr [0x9283f8] */ fx_compare(ST(0), R_F32((u32)(0x9283f8u))); FPOP();
    /* 005864c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005864c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005864c7: ja 0x5864e6 */ if ((!fC&&!fZ)) goto L_005864e6;
L_005864c9:; BB(0x005864c9);
    /* 005864c9: fld dword ptr [0x9283f4] */ FPUSH(R_F32((u32)(0x9283f4u)));
    /* 005864cf: fld dword ptr [0x9283f0] */ FPUSH(R_F32((u32)(0x9283f0u)));
    /* 005864d5: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005864dc: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005864e4: jmp 0x5864f7 */ goto L_005864f7;
L_005864e6:; BB(0x005864e6);
    /* 005864e6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005864e9: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5864eeu); f_0082df08();
    /* 005864ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005864f0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005864f3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_005864f7:; BB(0x005864f7);
    /* 005864f7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005864f9: fmul qword ptr [0x928310] */ ST(0) = ST(0) * R_F64((u32)(0x928310u));
    /* 005864ff: fdiv qword ptr [0x928308] */ ST(0) = ST(0) / R_F64((u32)(0x928308u));
    /* 00586505: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00586509: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0058650e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00586513: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00586517: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0058651b: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058651f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00586523: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00586527: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0058652c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058652d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586530: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x586535u); f_007a8c74();
    /* 00586535: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586538: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0058653b: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00586541: cmp eax, 0x87 */ {  u32 a = r_eax; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586546: jge 0x58672a */ if ((fS==fO)) goto L_0058672a;
L_0058654c:; BB(0x0058654c);
    /* 0058654c: fld dword ptr [0x9282a8] */ FPUSH(R_F32((u32)(0x9282a8u)));
    /* 00586552: fadd dword ptr [ebx + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3b8u));
    /* 00586558: fcom dword ptr [0x9282a4] */ fx_compare(ST(0), R_F32((u32)(0x9282a4u))); 
    /* 0058655e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586560: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586561: jbe 0x586578 */ if ((fC||fZ)) goto L_00586578;
L_00586563:; BB(0x00586563);
    /* 00586563: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586565: fld dword ptr [0x9282a4] */ FPUSH(R_F32((u32)(0x9282a4u)));
    /* 0058656b: mov eax, 0x3fa00000 */ r_eax = 0x3fa00000u;
    /* 00586570: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 00586576: jmp 0x58657e */ goto L_0058657e;
L_00586578:; BB(0x00586578);
    /* 00586578: fst dword ptr [ebx + 0x3b8] */ W_F32((u32)(r_ebx+0x3b8u), ST(0));
L_0058657e:; BB(0x0058657e);
    /* 0058657e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00586581: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00586585: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00586587: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00586589: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058658b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058658d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058658f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00586592: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00586596: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0058659a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058659e: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005865a6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005865aa: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5865afu); f_0083173c();
    /* 005865af: fcomp dword ptr [0x9283f0] */ fx_compare(ST(0), R_F32((u32)(0x9283f0u))); FPOP();
    /* 005865b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005865b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005865b8: je 0x58672a */ if (fZ) goto L_0058672a;
L_005865be:; BB(0x005865be);
    /* 005865be: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 005865c5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005865c8: jne 0x5865dd */ if (!fZ) goto L_005865dd;
L_005865ca:; BB(0x005865ca);
    /* 005865ca: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 005865cf: mov dword ptr [0xa7432c], eax */ W32((u32)(0xa7432cu), r_eax);
    /* 005865d4: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005865d7: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005865dd:; BB(0x005865dd);
    /* 005865dd: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005865e0: jne 0x5865fc */ if (!fZ) goto L_005865fc;
L_005865e2:; BB(0x005865e2);
    /* 005865e2: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 005865e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005865ea: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 005865f0: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005865f6: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005865fc:; BB(0x005865fc);
    /* 005865fc: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00586600: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00586603: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00586606: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0058660a: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0058660d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00586611: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00586614: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00586618: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x58661du); f_0082ebac();
    /* 0058661d: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00586621: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 00586624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586626: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58662bu); f_007a9180();
    /* 0058662b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058662e: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 00586634: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586636: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586637: ja 0x58672a */ if ((!fC&&!fZ)) goto L_0058672a;
L_0058663d:; BB(0x0058663d);
    /* 0058663d: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00586641: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00586645: mov eax, 1 */ r_eax = 0x1u;
    /* 0058664a: mov esi, eax */ r_esi = r_eax;
L_0058664c:; BB(0x0058664c);
    /* 0058664c: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 00586653: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586656: jne 0x58666e */ if (!fZ) goto L_0058666e;
L_00586658:; BB(0x00586658);
    /* 00586658: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 00586662: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00586668: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_0058666e:; BB(0x0058666e);
    /* 0058666e: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00586672: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 00586675: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00586678: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0058667c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00586680: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00586683: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00586687: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0058668b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x586690u); f_0082ebac();
    /* 00586690: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00586694: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 0058669a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0058669e: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 005866a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005866a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005866a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005866a7: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5866acu); f_007b4c58();
    /* 005866ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005866ae: je 0x5866c9 */ if (fZ) goto L_005866c9;
L_005866b0:; BB(0x005866b0);
    /* 005866b0: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 005866b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005866b5: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005866b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005866b9: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5866beu); f_00780d3c();
    /* 005866be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005866c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005866c3: je 0x5867f6 */ if (fZ) goto L_005867f6;
L_005866c9:; BB(0x005866c9);
    /* 005866c9: mov edi, esi */ r_edi = r_esi;
    /* 005866cb: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005866ce: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005866d4: je 0x5866d8 */ if (fZ) goto L_005866d8;
L_005866d6:; BB(0x005866d6);
    /* 005866d6: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_005866d8:; BB(0x005866d8);
    /* 005866d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005866da: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5866dfu); f_0082dcbc();
    /* 005866df: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 005866e3: mov ecx, edi */ r_ecx = r_edi;
    /* 005866e5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5866eau); f_0082ddd8();
    /* 005866ea: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005866ee: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005866f2: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 005866f6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005866fa: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005866fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005866fe: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00586700: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00586702: fchs  */ ST(0) = -ST(0);
    /* 00586704: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00586706: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00586708: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058670a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058670d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058670f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00586713: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00586715: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00586719: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058671c: jl 0x58664c */ if ((fS!=fO)) goto L_0058664c;
L_00586722:; BB(0x00586722);
    /* 00586722: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 00586726: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_0058672a:; BB(0x0058672a);
    /* 0058672a: movzx eax, byte ptr [0xa7430c] */ r_eax = (u32)R8((u32)(0xa7430cu));
    /* 00586731: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586733: jne 0x586749 */ if (!fZ) goto L_00586749;
L_00586735:; BB(0x00586735);
    /* 00586735: mov dword ptr [0xa74310], 0x41c80000 */ W32((u32)(0xa74310u), 0x41c80000u);
    /* 0058673f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00586744: mov byte ptr [0xa7430c], al */ W8((u32)(0xa7430cu), (u8)r_eax);
L_00586749:; BB(0x00586749);
    /* 00586749: fld dword ptr [ebx + 0x3e0] */ FPUSH(R_F32((u32)(r_ebx+0x3e0u)));
    /* 0058674f: fcomp dword ptr [0xa74310] */ fx_compare(ST(0), R_F32((u32)(0xa74310u))); FPOP();
    /* 00586755: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586757: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586758: jae 0x58678a */ if (!fC) goto L_0058678a;
L_0058675a:; BB(0x0058675a);
    /* 0058675a: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00586760: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586766: je 0x58676e */ if (fZ) goto L_0058676e;
L_00586768:; BB(0x00586768);
    /* 00586768: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_0058676e:; BB(0x0058676e);
    /* 0058676e: mov eax, dword ptr [0x9bf5f0] */ r_eax = R32((u32)(0x9bf5f0u));
    /* 00586773: mov dword ptr [ebx + 0x380], 0xe */ W32((u32)(r_ebx+0x380u), 0xeu);
    /* 0058677d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058677f: je 0x586785 */ if (fZ) goto L_00586785;
L_00586781:; BB(0x00586781);
    /* 00586781: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00586783: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586785u); call_ind(t); }
L_00586785:; BB(0x00586785);
    /* 00586785: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00586788: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00586789: ret  */ FN_RET(0x00586424); r_esp += 4; return;
L_0058678a:; BB(0x0058678a);
    /* 0058678a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058678c: call 0x585be8 */ r_esp -= 4; W32(r_esp, 0x586791u); f_00585be8();
    /* 00586791: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00586794: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00586795: ret  */ FN_RET(0x00586424); r_esp += 4; return;
L_00586796:; BB(0x00586796);
    /* 00586796: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 0058679c: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867a2: je 0x5867aa */ if (fZ) goto L_005867aa;
L_005867a4:; BB(0x005867a4);
    /* 005867a4: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005867aa:; BB(0x005867aa);
    /* 005867aa: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 005867af: mov dword ptr [ebx + 0x380], 2 */ W32((u32)(r_ebx+0x380u), 0x2u);
    /* 005867b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867bb: je 0x5867c1 */ if (fZ) goto L_005867c1;
L_005867bd:; BB(0x005867bd);
    /* 005867bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005867bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5867c1u); call_ind(t); }
L_005867c1:; BB(0x005867c1);
    /* 005867c1: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005867c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005867c5: ret  */ FN_RET(0x00586424); r_esp += 4; return;
L_005867c6:; BB(0x005867c6);
    /* 005867c6: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005867cc: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867d2: je 0x5867da */ if (fZ) goto L_005867da;
L_005867d4:; BB(0x005867d4);
    /* 005867d4: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005867da:; BB(0x005867da);
    /* 005867da: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005867df: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 005867e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867eb: je 0x5867f1 */ if (fZ) goto L_005867f1;
L_005867ed:; BB(0x005867ed);
    /* 005867ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005867ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5867f1u); call_ind(t); }
L_005867f1:; BB(0x005867f1);
    /* 005867f1: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005867f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005867f5: ret  */ FN_RET(0x00586424); r_esp += 4; return;
L_005867f6:; BB(0x005867f6);
    /* 005867f6: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 005867fa: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 005867fe: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00586801: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00586804: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00586807: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058680a: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 0058680d: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00586810: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00586814: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00586817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00586819: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0058681d: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00586820: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00586824: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00586827: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x58682cu); f_007b6880();
    /* 0058682c: jmp 0x58672a */ goto L_0058672a;
L_00586831:; BB(0x00586831);
    /* 00586831: mov eax, 1 */ r_eax = 0x1u;
    /* 00586836: jmp 0x586458 */ goto L_00586458;
}

void f_0058683c(void) /* sub_58683C */
{
    FN_ENTER(0x0058683c);
    /* 0058683c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058683d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058683f: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00586845: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 0058684b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058684e: je 0x5868eb */ if (fZ) goto L_005868eb;
L_00586854:; BB(0x00586854);
    /* 00586854: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586857: je 0x5868eb */ if (fZ) goto L_005868eb;
L_0058685d:; BB(0x0058685d);
    /* 0058685d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0058685f:; BB(0x0058685f);
    /* 0058685f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586861: jne 0x5868be */ if (!fZ) goto L_005868be;
L_00586863:; BB(0x00586863);
    /* 00586863: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00586869: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058686b: jne 0x5868be */ if (!fZ) goto L_005868be;
L_0058686d:; BB(0x0058686d);
    /* 0058686d: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00586873: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00586876: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 0058687c: jne 0x58689d */ if (!fZ) goto L_0058689d;
L_0058687e:; BB(0x0058687e);
    /* 0058687e: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00586883: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00586885: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58688au); f_007879b8();
    /* 0058688a: mov ecx, eax */ r_ecx = r_eax;
    /* 0058688c: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0058688f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00586891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586895: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58689au); f_00814298();
    /* 0058689a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058689d:; BB(0x0058689d);
    /* 0058689d: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005868a2: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 005868a8: add eax, 0xfffff800 */ {  u32 a = r_eax; u32 b = 0xfffff800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005868ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005868ae: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005868b1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5868b6u); f_007a8c74();
    /* 005868b6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005868b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005868bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005868bd: ret  */ FN_RET(0x0058683c); r_esp += 4; return;
L_005868be:; BB(0x005868be);
    /* 005868be: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005868c4: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005868ca: je 0x5868d2 */ if (fZ) goto L_005868d2;
L_005868cc:; BB(0x005868cc);
    /* 005868cc: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005868d2:; BB(0x005868d2);
    /* 005868d2: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 005868d7: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 005868e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005868e3: je 0x5868e9 */ if (fZ) goto L_005868e9;
L_005868e5:; BB(0x005868e5);
    /* 005868e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005868e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5868e9u); call_ind(t); }
L_005868e9:; BB(0x005868e9);
    /* 005868e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005868ea: ret  */ FN_RET(0x0058683c); r_esp += 4; return;
L_005868eb:; BB(0x005868eb);
    /* 005868eb: mov eax, 1 */ r_eax = 0x1u;
    /* 005868f0: jmp 0x58685f */ goto L_0058685f;
}

void f_005868f8(void) /* sub_5868F8 */
{
    FN_ENTER(0x005868f8);
    /* 005868f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005868f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005868fa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005868fd: mov esi, ecx */ r_esi = r_ecx;
    /* 005868ff: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 00586905: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00586908: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 0058690e: jne 0x58691c */ if (!fZ) goto L_0058691c;
L_00586910:; BB(0x00586910);
    /* 00586910: mov eax, 4 */ r_eax = 0x4u;
    /* 00586915: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0058691c:; BB(0x0058691c);
    /* 0058691c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0058691f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00586922: fcomp dword ptr [0x9283e8] */ fx_compare(ST(0), R_F32((u32)(0x9283e8u))); FPOP();
    /* 00586928: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058692a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058692b: je 0x586968 */ if (fZ) goto L_00586968;
L_0058692d:; BB(0x0058692d);
    /* 0058692d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00586933: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586935: je 0x586962 */ if (fZ) goto L_00586962;
L_00586937:; BB(0x00586937);
    /* 00586937: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0058693d: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586943: je 0x58694b */ if (fZ) goto L_0058694b;
L_00586945:; BB(0x00586945);
    /* 00586945: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_0058694b:; BB(0x0058694b);
    /* 0058694b: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 00586950: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 0058695a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058695c: je 0x586962 */ if (fZ) goto L_00586962;
L_0058695e:; BB(0x0058695e);
    /* 0058695e: mov ecx, esi */ r_ecx = r_esi;
    /* 00586960: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586962u); call_ind(t); }
L_00586962:; BB(0x00586962);
    /* 00586962: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00586965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00586966: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00586967: ret  */ FN_RET(0x005868f8); r_esp += 4; return;
L_00586968:; BB(0x00586968);
    /* 00586968: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0058696a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58696fu); f_0077a6cc();
    /* 0058696f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00586970: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00586973: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00586975: jl 0x58697c */ if ((fS!=fO)) goto L_0058697c;
L_00586977:; BB(0x00586977);
    /* 00586977: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058697a: jle 0x58697e */ if ((fZ||fS!=fO)) goto L_0058697e;
L_0058697c:; BB(0x0058697c);
    /* 0058697c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0058697e:; BB(0x0058697e);
    /* 0058697e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058697f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00586982: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00586983: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00586984: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x586989u); f_006eeeb4();
    /* 00586989: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058698c: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 00586991: mov ecx, esi */ r_ecx = r_esi;
    /* 00586993: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x586998u); f_007879b8();
    /* 00586998: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058699a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058699b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058699c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058699d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058699e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5869a3u); f_00814298();
    /* 005869a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005869a6: jmp 0x58692d */ goto L_0058692d;
}

void f_005869a8(void) /* sub_5869A8 */
{
    FN_ENTER(0x005869a8);
    /* 005869a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005869a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005869aa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005869ac: mov eax, dword ptr [ebp + 0x3bc] */ r_eax = R32((u32)(r_ebp+0x3bcu));
    /* 005869b2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005869b5: mov dword ptr [ebp + 0x3bc], eax */ W32((u32)(r_ebp+0x3bcu), r_eax);
    /* 005869bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005869bd: jl 0x5869f0 */ if ((fS!=fO)) goto L_005869f0;
L_005869bf:; BB(0x005869bf);
    /* 005869bf: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 005869c4: push dword ptr [ebp + 0x3dc] */ { u32 v = R32((u32)(r_ebp+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005869ca: mov ebx, dword ptr [ebp + 0x60] */ r_ebx = R32((u32)(r_ebp+0x60u));
    /* 005869cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005869ce: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5869d3u); f_007a8c74();
    /* 005869d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005869d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005869d5: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 005869d8: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5869ddu); f_007a9018();
    /* 005869dd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005869e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005869e2: jne 0x5869ed */ if (!fZ) goto L_005869ed;
L_005869e4:; BB(0x005869e4);
    /* 005869e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005869e6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005869ed:; BB(0x005869ed);
    /* 005869ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005869ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005869ef: ret  */ FN_RET(0x005869a8); r_esp += 4; return;
L_005869f0:; BB(0x005869f0);
    /* 005869f0: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 005869f6: cmp eax, dword ptr [ebp + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005869fc: je 0x586a04 */ if (fZ) goto L_00586a04;
L_005869fe:; BB(0x005869fe);
    /* 005869fe: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00586a04:; BB(0x00586a04);
    /* 00586a04: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 00586a09: mov dword ptr [ebp + 0x380], 2 */ W32((u32)(r_ebp+0x380u), 0x2u);
    /* 00586a13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586a15: je 0x586a1b */ if (fZ) goto L_00586a1b;
L_00586a17:; BB(0x00586a17);
    /* 00586a17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00586a19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586a1bu); call_ind(t); }
L_00586a1b:; BB(0x00586a1b);
    /* 00586a1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00586a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00586a1d: ret  */ FN_RET(0x005869a8); r_esp += 4; return;
}

void f_00586a20(void) /* sub_586A20 */
{
    FN_ENTER(0x00586a20);
    /* 00586a20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00586a21: mov esi, ecx */ r_esi = r_ecx;
    /* 00586a23: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00586a29: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586a2c: jl 0x586a35 */ if ((fS!=fO)) goto L_00586a35;
L_00586a2e:; BB(0x00586a2e);
    /* 00586a2e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00586a31: jg 0x586a35 */ if ((!fZ&&fS==fO)) goto L_00586a35;
L_00586a33:; BB(0x00586a33);
    /* 00586a33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00586a34: ret  */ FN_RET(0x00586a20); r_esp += 4; return;
L_00586a35:; BB(0x00586a35);
    /* 00586a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586a37: jne 0x586ace */ if (!fZ) goto L_00586ace;
L_00586a3d:; BB(0x00586a3d);
    /* 00586a3d: movzx eax, byte ptr [0xa74314] */ r_eax = (u32)R8((u32)(0xa74314u));
    /* 00586a44: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00586a46: jne 0x586a5c */ if (!fZ) goto L_00586a5c;
L_00586a48:; BB(0x00586a48);
    /* 00586a48: mov dword ptr [0xa74318], 0x41200000 */ W32((u32)(0xa74318u), 0x41200000u);
    /* 00586a52: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00586a57: mov byte ptr [0xa74314], al */ W8((u32)(0xa74314u), (u8)r_eax);
L_00586a5c:; BB(0x00586a5c);
    /* 00586a5c: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 00586a62: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 00586a68: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00586a6b: add ecx, dword ptr [edx*4 + 0x9bf420] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x9bf420u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00586a72: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00586a75: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00586a78: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00586a7b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00586a7e: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00586a81: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00586a84: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00586a87: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x586a8cu); f_0082dcbc();
    /* 00586a8c: fld dword ptr [0xa74318] */ FPUSH(R_F32((u32)(0xa74318u)));
    /* 00586a92: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00586a94: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00586a97: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00586a9a: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00586a9d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x586aa2u); f_0082ddd8();
    /* 00586aa2: fld dword ptr [0xa74318] */ FPUSH(R_F32((u32)(0xa74318u)));
    /* 00586aa8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00586aaa: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00586aad: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00586ab0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00586ab3: fst dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0));
    /* 00586ab6: fstp dword ptr [esi + 0x308] */ W_F32((u32)(r_esi+0x308u), ST(0)); FPOP();
    /* 00586abc: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 00586ac2: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00586ac8: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
L_00586ace:; BB(0x00586ace);
    /* 00586ace: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586ad4: je 0x586adc */ if (fZ) goto L_00586adc;
L_00586ad6:; BB(0x00586ad6);
    /* 00586ad6: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00586adc:; BB(0x00586adc);
    /* 00586adc: mov eax, dword ptr [0x9bf5b8] */ r_eax = R32((u32)(0x9bf5b8u));
    /* 00586ae1: mov dword ptr [esi + 0x380], 7 */ W32((u32)(r_esi+0x380u), 0x7u);
    /* 00586aeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586aed: je 0x586af3 */ if (fZ) goto L_00586af3;
L_00586aef:; BB(0x00586aef);
    /* 00586aef: mov ecx, esi */ r_ecx = r_esi;
    /* 00586af1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586af3u); call_ind(t); }
L_00586af3:; BB(0x00586af3);
    /* 00586af3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00586af4: ret  */ FN_RET(0x00586a20); r_esp += 4; return;
}

void f_00586af8(void) /* sub_586AF8 */
{
    FN_ENTER(0x00586af8);
    /* 00586af8: mov edx, dword ptr [ecx + 0x380] */ r_edx = R32((u32)(r_ecx+0x380u));
    /* 00586afe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00586b00: jl 0x586b12 */ if ((fS!=fO)) goto L_00586b12;
L_00586b02:; BB(0x00586b02);
    /* 00586b02: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00586b05: jle 0x586b11 */ if ((fZ||fS!=fO)) goto L_00586b11;
L_00586b07:; BB(0x00586b07);
    /* 00586b07: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586b0a: jl 0x586b12 */ if ((fS!=fO)) goto L_00586b12;
L_00586b0c:; BB(0x00586b0c);
    /* 00586b0c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00586b0f: jg 0x586b12 */ if ((!fZ&&fS==fO)) goto L_00586b12;
L_00586b11:; BB(0x00586b11);
    /* 00586b11: ret  */ FN_RET(0x00586af8); r_esp += 4; return;
L_00586b12:; BB(0x00586b12);
    /* 00586b12: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00586b15: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00586b1a: cmp edx, dword ptr [ecx + 0x37c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586b20: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00586b23: je 0x586b2b */ if (fZ) goto L_00586b2b;
L_00586b25:; BB(0x00586b25);
    /* 00586b25: mov dword ptr [ecx + 0x37c], edx */ W32((u32)(r_ecx+0x37cu), r_edx);
L_00586b2b:; BB(0x00586b2b);
    /* 00586b2b: mov eax, dword ptr [0x9bf5b0] */ r_eax = R32((u32)(0x9bf5b0u));
    /* 00586b30: mov dword ptr [ecx + 0x380], 6 */ W32((u32)(r_ecx+0x380u), 0x6u);
    /* 00586b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586b3c: je 0x586b40 */ if (fZ) goto L_00586b40;
L_00586b3e:; BB(0x00586b3e);
    /* 00586b3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586b40u); call_ind(t); }
L_00586b40:; BB(0x00586b40);
    /* 00586b40: ret  */ FN_RET(0x00586af8); r_esp += 4; return;
}

void f_00586b44(void) /* sub_586B44 */
{
    FN_ENTER(0x00586b44);
    /* 00586b44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00586b45: mov ebp, esp */ r_ebp = r_esp;
    /* 00586b47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586b49: push 0x8d7d4e */ { u32 v = 0x8d7d4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00586b4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00586b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586b55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00586b5c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00586b5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00586b62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00586b65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00586b68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00586b6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586b6d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00586b70: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00586b73: push 0x478 */ { u32 v = 0x478u; r_esp -= 4; W32(r_esp, v); }
    /* 00586b78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x586b7du); f_005caba4();
    /* 00586b7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00586b7e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00586b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586b83: je 0x586bf3 */ if (fZ) goto L_00586bf3;
L_00586b85:; BB(0x00586b85);
    /* 00586b85: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00586b8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00586b93: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00586b95: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x586b9au); f_005caba4();
    /* 00586b9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00586b9b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00586b9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586ba0: je 0x586bef */ if (fZ) goto L_00586bef;
L_00586ba2:; BB(0x00586ba2);
    /* 00586ba2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00586ba9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00586bb0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586bb6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00586bb9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x586bbeu); f_00787a4c();
    /* 00586bbe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00586bc1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00586bc8:; BB(0x00586bc8);
    /* 00586bc8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00586bcb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586bce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586bd2: call 0x586bf8 */ r_esp -= 4; W32(r_esp, 0x586bd7u); f_00586bf8();
    /* 00586bd7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586bda: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00586be1:; BB(0x00586be1);
    /* 00586be1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00586be4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00586beb: mov esp, ebp */ r_esp = r_ebp;
    /* 00586bed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00586bee: ret  */ FN_RET(0x00586b44); r_esp += 4; return;
L_00586bef:; BB(0x00586bef);
    /* 00586bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586bf1: jmp 0x586bc8 */ goto L_00586bc8;
L_00586bf3:; BB(0x00586bf3);
    /* 00586bf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586bf5: jmp 0x586be1 */ goto L_00586be1;
}

void f_00586bf8(void) /* sub_586BF8 */
{
    FN_ENTER(0x00586bf8);
    /* 00586bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00586bf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00586bfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586bfd: push 0x8d7d86 */ { u32 v = 0x8d7d86u; r_esp -= 4; W32(r_esp, v); }
    /* 00586c02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00586c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586c09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00586c10: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00586c13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00586c16: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00586c19: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00586c1c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00586c1f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00586c22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00586c25: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00586c28: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00586c2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00586c2e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00586c31: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x586c36u); f_007865e8();
    /* 00586c36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00586c3d: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00586c42: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00586c47: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586c4a: mov dword ptr [eax], 0xb07a60 */ W32((u32)(r_eax), 0xb07a60u);
    /* 00586c50: add eax, 0x3f4 */ {  u32 a = r_eax; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00586c55: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00586c57: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00586c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586c5a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x586c5fu); f_00858736();
    /* 00586c5f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00586c66: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586c69: mov eax, dword ptr [0x9bf608] */ r_eax = R32((u32)(0x9bf608u));
    /* 00586c6e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00586c71: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 00586c77: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00586c79: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00586c7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00586c7d: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00586c80: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00586c86: call dword ptr [esi + 0x14c] */ { u32 t = R32((u32)(r_esi+0x14cu)); r_esp -= 4; W32(r_esp, 0x586c8cu); call_ind(t); }
    /* 00586c8c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586c8f: movsx ebx, word ptr [eax + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 00586c93: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00586c95: jl 0x586cd6 */ if ((fS!=fO)) goto L_00586cd6;
L_00586c97:; BB(0x00586c97);
    /* 00586c97: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586c9d: jg 0x586cd6 */ if ((!fZ&&fS==fO)) goto L_00586cd6;
L_00586c9f:; BB(0x00586c9f);
    /* 00586c9f: mov ecx, dword ptr [0xab02b8] */ r_ecx = R32((u32)(0xab02b8u));
    /* 00586ca5: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00586ca8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00586caa: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00586cad: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00586caf: mov edi, dword ptr [edx + ecx + 8] */ r_edi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 00586cb3: movzx esi, word ptr [edx + ecx + 4] */ r_esi = (u32)R16((u32)(r_edx+r_ecx+0x4u));
    /* 00586cb8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00586cba: jl 0x586cd6 */ if ((fS!=fO)) goto L_00586cd6;
L_00586cbc:; BB(0x00586cbc);
    /* 00586cbc: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586cc2: jg 0x586cd6 */ if ((!fZ&&fS==fO)) goto L_00586cd6;
L_00586cc4:; BB(0x00586cc4);
    /* 00586cc4: mov dword ptr [edx + ecx], 0 */ W32((u32)(r_edx+r_ecx), 0x0u);
    /* 00586ccb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586cce: mov dword ptr [edx + ecx + 4], esi */ W32((u32)(r_edx+r_ecx+0x4u), r_esi);
    /* 00586cd2: mov dword ptr [edx + ecx + 8], edi */ W32((u32)(r_edx+r_ecx+0x8u), r_edi);
L_00586cd6:; BB(0x00586cd6);
    /* 00586cd6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00586cd9: push dword ptr [edx*4 + 0x9282bc] */ { u32 v = R32((u32)(r_edx*4+0x9282bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00586ce0: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00586ce6: mov dword ptr [eax + 0x388], edx */ W32((u32)(r_eax+0x388u), r_edx);
    /* 00586cec: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x586cf1u); f_005b8624();
    /* 00586cf1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586cf4: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00586cfa: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00586cfd: mov eax, dword ptr [edx + 0x388] */ r_eax = R32((u32)(r_edx+0x388u));
    /* 00586d03: push dword ptr [eax*4 + 0x9282bc] */ { u32 v = R32((u32)(r_eax*4+0x9282bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00586d0a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x586d0fu); f_005b8610();
    /* 00586d0f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586d12: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00586d15: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00586d18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586d1a: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00586d1d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00586d20: push 0x9bf60c */ { u32 v = 0x9bf60cu; r_esp -= 4; W32(r_esp, v); }
    /* 00586d25: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00586d28: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00586d2b: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00586d2e: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00586d31: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00586d34: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 00586d37: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00586d3a: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00586d3d: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00586d40: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x586d45u); f_007b9a88();
    /* 00586d45: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586d48: mov ebx, dword ptr [0xa742a4] */ r_ebx = R32((u32)(0xa742a4u));
    /* 00586d4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586d50: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 00586d56: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00586d5c: mov edx, dword ptr [eax*4 + 0x9bf428] */ r_edx = R32((u32)(r_eax*4+0x9bf428u));
    /* 00586d63: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 00586d69: mov esi, dword ptr [ebx + 0x430] */ r_esi = R32((u32)(r_ebx+0x430u));
    /* 00586d6f: mov dword ptr [ecx + 0xdc], esi */ W32((u32)(r_ecx+0xdcu), r_esi);
    /* 00586d75: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x586d7au); f_007aa4c8();
    /* 00586d7a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586d7d: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00586d80: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00586d83: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00586d86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586d88: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00586d8f: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 00586d95: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586d98: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 00586d9e: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 00586da4: mov eax, dword ptr [edx + 0x388] */ r_eax = R32((u32)(r_edx+0x388u));
    /* 00586daa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586dac: mov dword ptr [edx + 0x314], 0 */ W32((u32)(r_edx+0x314u), 0x0u);
    /* 00586db6: mov dword ptr [edx + 0x310], 0 */ W32((u32)(r_edx+0x310u), 0x0u);
    /* 00586dc0: mov dword ptr [edx + 0x30c], 0 */ W32((u32)(r_edx+0x30cu), 0x0u);
    /* 00586dca: jne 0x586df5 */ if (!fZ) goto L_00586df5;
L_00586dcc:; BB(0x00586dcc);
    /* 00586dcc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00586dce: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x586dd3u); f_0077a684();
    /* 00586dd3: mov esi, eax */ r_esi = r_eax;
    /* 00586dd5: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00586dd7: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x586ddcu); f_0077a698();
    /* 00586ddc: mov ebx, eax */ r_ebx = r_eax;
    /* 00586dde: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00586de0: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x586de5u); f_0077a6b4();
    /* 00586de5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586de8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586deb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586dec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00586ded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00586dee: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x586df3u); f_007868f8();
    /* 00586df3: jmp 0x586e25 */ goto L_00586e25;
L_00586df5:; BB(0x00586df5);
    /* 00586df5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00586df8: jne 0x586fff */ if (!fZ) goto L_00586fff;
L_00586dfe:; BB(0x00586dfe);
    /* 00586dfe: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e00: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x586e05u); f_0077a684();
    /* 00586e05: mov esi, eax */ r_esi = r_eax;
    /* 00586e07: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e09: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x586e0eu); f_0077a698();
    /* 00586e0e: mov ebx, eax */ r_ebx = r_eax;
    /* 00586e10: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e12: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x586e17u); f_0077a6b4();
    /* 00586e17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586e1a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586e1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00586e1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00586e20: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x586e25u); f_007868f8();
L_00586e25:; BB(0x00586e25);
    /* 00586e25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586e28: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 00586e2f: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 00586e36: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x586e3bu); f_007b4f54();
    /* 00586e3b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586e3e: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00586e44: mov dword ptr [ecx + 0x358], 0 */ W32((u32)(r_ecx+0x358u), 0x0u);
    /* 00586e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586e50: jne 0x586e5b */ if (!fZ) goto L_00586e5b;
L_00586e52:; BB(0x00586e52);
    /* 00586e52: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e54: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x586e59u); f_00787550();
    /* 00586e59: jmp 0x586e62 */ goto L_00586e62;
L_00586e5b:; BB(0x00586e5b);
    /* 00586e5b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e5d: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x586e62u); f_00787550();
L_00586e62:; BB(0x00586e62);
    /* 00586e62: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586e65: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00586e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586e6b: push 0x9bf638 */ { u32 v = 0x9bf638u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e70: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x586e75u); f_0058836c();
    /* 00586e75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586e78: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586e7b: mov dword ptr [edx + 0x3e4], eax */ W32((u32)(r_edx+0x3e4u), r_eax);
    /* 00586e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586e83: je 0x58701a */ if (fZ) goto L_0058701a;
L_00586e89:; BB(0x00586e89);
    /* 00586e89: mov eax, dword ptr [edx + 0x388] */ r_eax = R32((u32)(r_edx+0x388u));
    /* 00586e8f: mov dword ptr [edx + 0x3b8], 0 */ W32((u32)(r_edx+0x3b8u), 0x0u);
    /* 00586e99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586e9b: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
    /* 00586ea5: jne 0x586ed4 */ if (!fZ) goto L_00586ed4;
L_00586ea7:; BB(0x00586ea7);
    /* 00586ea7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ea9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x586eaeu); f_0077a6cc();
    /* 00586eae: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586eb1: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00586eb3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00586eb5: mov dword ptr [edx + 0x468], eax */ W32((u32)(r_edx+0x468u), r_eax);
    /* 00586ebb: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x586ec0u); f_0077a6cc();
    /* 00586ec0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586ec3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586ec6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00586ec9: mov dword ptr [edx + 0x46c], eax */ W32((u32)(r_edx+0x46cu), r_eax);
    /* 00586ecf: jmp 0x586f83 */ goto L_00586f83;
L_00586ed4:; BB(0x00586ed4);
    /* 00586ed4: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ed6: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x586edbu); f_0077a6cc();
    /* 00586edb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586ede: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ee0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00586ee2: mov dword ptr [edx + 0x468], eax */ W32((u32)(r_edx+0x468u), r_eax);
    /* 00586ee8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x586eedu); f_0077a6cc();
    /* 00586eed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586ef0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586ef3: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00586ef6: fcom dword ptr [0x9283e0] */ fx_compare(ST(0), R_F32((u32)(0x9283e0u))); 
    /* 00586efc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586efe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586eff: jae 0x586f0d */ if (!fC) goto L_00586f0d;
L_00586f01:; BB(0x00586f01);
    /* 00586f01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586f03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586f05: mov dword ptr [edx + 0x470], eax */ W32((u32)(r_edx+0x470u), r_eax);
    /* 00586f0b: jmp 0x586f24 */ goto L_00586f24;
L_00586f0d:; BB(0x00586f0d);
    /* 00586f0d: fld dword ptr [0x9283dc] */ FPUSH(R_F32((u32)(0x9283dcu)));
    /* 00586f13: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00586f15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586f17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586f18: ja 0x586f1c */ if ((!fC&&!fZ)) goto L_00586f1c;
L_00586f1a:; BB(0x00586f1a);
    /* 00586f1a: fst st(1) */ ST(1) = ST(0);
L_00586f1c:; BB(0x00586f1c);
    /* 00586f1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586f1e: fstp dword ptr [edx + 0x470] */ W_F32((u32)(r_edx+0x470u), ST(0)); FPOP();
L_00586f24:; BB(0x00586f24);
    /* 00586f24: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00586f26: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x586f2bu); f_0077a6cc();
    /* 00586f2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00586f2c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586f2f: fld dword ptr [0x9283e0] */ FPUSH(R_F32((u32)(0x9283e0u)));
    /* 00586f35: fld dword ptr [0x9283dc] */ FPUSH(R_F32((u32)(0x9283dcu)));
    /* 00586f3b: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00586f3e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00586f40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586f42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586f43: jae 0x586f4f */ if (!fC) goto L_00586f4f;
L_00586f45:; BB(0x00586f45);
    /* 00586f45: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586f47: fld dword ptr [0x9283e0] */ FPUSH(R_F32((u32)(0x9283e0u)));
    /* 00586f4d: jmp 0x586f5c */ goto L_00586f5c;
L_00586f4f:; BB(0x00586f4f);
    /* 00586f4f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00586f51: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00586f53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586f55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586f56: ja 0x586f5a */ if ((!fC&&!fZ)) goto L_00586f5a;
L_00586f58:; BB(0x00586f58);
    /* 00586f58: fst st(1) */ ST(1) = ST(0);
L_00586f5a:; BB(0x00586f5a);
    /* 00586f5a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
L_00586f5c:; BB(0x00586f5c);
    /* 00586f5c: fld dword ptr [edx + 0x470] */ FPUSH(R_F32((u32)(r_edx+0x470u)));
    /* 00586f62: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00586f64: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00586f66: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00586f68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00586f6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00586f6b: jbe 0x586f79 */ if ((fC||fZ)) goto L_00586f79;
L_00586f6d:; BB(0x00586f6d);
    /* 00586f6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586f6f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00586f71: fstp dword ptr [edx + 0x474] */ W_F32((u32)(r_edx+0x474u), ST(0)); FPOP();
    /* 00586f77: jmp 0x586f83 */ goto L_00586f83;
L_00586f79:; BB(0x00586f79);
    /* 00586f79: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00586f7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00586f7d: fstp dword ptr [edx + 0x474] */ W_F32((u32)(r_edx+0x474u), ST(0)); FPOP();
L_00586f83:; BB(0x00586f83);
    /* 00586f83: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00586f86: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00586f89: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00586f8c: mov dword ptr [edx + 0x3ac], eax */ W32((u32)(r_edx+0x3acu), r_eax);
    /* 00586f92: mov dword ptr [edx + 0x3b0], ecx */ W32((u32)(r_edx+0x3b0u), r_ecx);
    /* 00586f98: mov dword ptr [edx + 0x3b4], ebx */ W32((u32)(r_edx+0x3b4u), r_ebx);
    /* 00586f9e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00586fa0:; BB(0x00586fa0);
    /* 00586fa0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586fa3: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00586fa6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00586fa8: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00586fab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00586fad: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00586faf: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00586fb1: lea ecx, [edx + esi + 0x3f4] */ r_ecx = (u32)(r_edx+r_esi+0x3f4u);
    /* 00586fb8: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x586fbdu); f_0057739c();
    /* 00586fbd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00586fc0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586fc3: jl 0x586fa0 */ if ((fS!=fO)) goto L_00586fa0;
L_00586fc5:; BB(0x00586fc5);
    /* 00586fc5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586fc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586fca: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00586fd0: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 00586fd6: mov eax, dword ptr [0x9bf580] */ r_eax = R32((u32)(0x9bf580u));
    /* 00586fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00586fdd: je 0x586fe4 */ if (fZ) goto L_00586fe4;
L_00586fdf:; BB(0x00586fdf);
    /* 00586fdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586fe1u); call_ind(t); }
    /* 00586fe1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_00586fe4:; BB(0x00586fe4);
    /* 00586fe4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586fe7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00586fea: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00586fed: mov eax, ecx */ r_eax = r_ecx;
    /* 00586fef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00586ff2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00586ff9: mov esp, ebp */ r_esp = r_ebp;
    /* 00586ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00586ffc: ret 0xc */ FN_RET(0x00586bf8); r_esp += 16; return;
L_00586fff:; BB(0x00586fff);
    /* 00586fff: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587002: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00587005: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00587008: mov eax, edx */ r_eax = r_edx;
    /* 0058700a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058700d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00587014: mov esp, ebp */ r_esp = r_ebp;
    /* 00587016: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587017: ret 0xc */ FN_RET(0x00586bf8); r_esp += 16; return;
L_0058701a:; BB(0x0058701a);
    /* 0058701a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058701d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00587020: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00587023: mov eax, edx */ r_eax = r_edx;
    /* 00587025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00587028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058702f: mov esp, ebp */ r_esp = r_ebp;
    /* 00587031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587032: ret 0xc */ FN_RET(0x00586bf8); r_esp += 16; return;
}

