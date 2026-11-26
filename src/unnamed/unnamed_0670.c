#include "protos.h"

void f_00670000(void)
{
    FN_ENTER(0x00670000);
    /* 00670000: rcr ecx, 0x44 */ { u32 c = (4u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 00670003: and al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00670005: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670007: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 0067000d: jmp 0x670023 */ goto L_00670023;
L_00670023:; BB(0x00670023);
    /* 00670023: fadd dword ptr [ebp + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4u));
    /* 00670029: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067002d: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00670031: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00670035: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x67003au); f_0077fffc();
    /* 0067003a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067003d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067003f: je 0x670386 */ if (fZ) goto L_00670386;
L_00670045:; BB(0x00670045);
    /* 00670045: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
L_00670049:; BB(0x00670049);
    /* 00670049: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0067004f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00670053: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00670057: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067005a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067005b: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x670060u); f_0077fffc();
    /* 00670060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670065: je 0x67036f */ if (fZ) goto L_0067036f;
L_0067006b:; BB(0x0067006b);
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
L_0067006e:; BB(0x0067006e);
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670000); r_esp += 4; return;
L_0067036f:; BB(0x0067036f);
    /* 0067036f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00670373: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00670377: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0067037b: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0067037e: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00670381: jmp 0x67006e */ goto L_0067006e;
L_00670386:; BB(0x00670386);
    /* 00670386: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0067038a: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067038e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00670392: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00670395: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00670399: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0067039c: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0067039f: jmp 0x670049 */ goto L_00670049;
}

void f_00670045(void)
{
    FN_ENTER(0x00670045);
    /* 00670045: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00670049: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0067004f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00670053: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00670057: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067005a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067005b: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x670060u); f_0077fffc();
    /* 00670060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670065: je 0x67036f */ if (fZ) goto L_0067036f;
L_0067006b:; BB(0x0067006b);
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
L_0067006e:; BB(0x0067006e);
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670045); r_esp += 4; return;
L_0067036f:; BB(0x0067036f);
    /* 0067036f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00670373: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00670377: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0067037b: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0067037e: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00670381: jmp 0x67006e */ goto L_0067006e;
}

void f_0067005c(void)
{
    FN_ENTER(0x0067005c);
    /* 0067005c: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0067005d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x67005fu); call_ind(t); }
    /* 0067005f: add byte ptr [ebx - 0x3f7af33c], al */ { u32 ad = (u32)(r_ebx+0xc0850cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00670065: je 0x67036f */ if (fZ) goto L_0067036f;
L_0067006b:; BB(0x0067006b);
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
L_0067006e:; BB(0x0067006e);
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x0067005c); r_esp += 4; return;
L_0067036f:; BB(0x0067036f);
    /* 0067036f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00670373: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00670377: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0067037b: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0067037e: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00670381: jmp 0x67006e */ goto L_0067006e;
}

void f_00670061(void)
{
    FN_ENTER(0x00670061);
    /* 00670061: les ecx, ptr [eax*4 + 0x4840fc0] */ UNSUP(0x00670061, "les ecx, ptr [eax*4 + 0x4840fc0]");
    /* 00670068: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067006a: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067006c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067006d: cmp al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a - b) & 0xffu;   }
    /* 0067006f: add eax, 0x93a010 */ {  u32 a = r_eax; u32 b = 0x93a010u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670061); r_esp += 4; return;
}

void f_00670066(void)
{
    FN_ENTER(0x00670066);
    /* 00670066: test byte ptr [ebx + eax], al */ {  u32 a = R8((u32)(r_ebx+r_eax)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 00670069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670066); r_esp += 4; return;
}

void f_00670069(void)
{
    FN_ENTER(0x00670069);
    /* 00670069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670069); r_esp += 4; return;
}

void f_0067006e(void)
{
    FN_ENTER(0x0067006e);
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x0067006e); r_esp += 4; return;
}

void f_0067006f(void)
{
    FN_ENTER(0x0067006f);
    /* 0067006f: add eax, 0x93a010 */ {  u32 a = r_eax; u32 b = 0x93a010u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x0067006f); r_esp += 4; return;
}

void f_00670075(void)
{
    FN_ENTER(0x00670075);
    /* 00670075: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670076: and al, 0x64 */ {  u32 a = (u8)r_eax; u32 b = 0x64u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x00670075); r_esp += 4; return;
}

void f_006703c4(void) /* sub_6703C4 */
{
    FN_ENTER(0x006703c4);
    /* 006703c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006703c5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006703c7: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 006703cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006703cf: je 0x670461 */ if (fZ) goto L_00670461;
L_006703d5:; BB(0x006703d5);
    /* 006703d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006703d8: jne 0x670412 */ if (!fZ) goto L_00670412;
L_006703da:; BB(0x006703da);
    /* 006703da: fld dword ptr [0x939fe4] */ FPUSH(R_F32((u32)(0x939fe4u)));
    /* 006703e0: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 006703e6: fcom dword ptr [0x939fe0] */ fx_compare(ST(0), R_F32((u32)(0x939fe0u))); 
    /* 006703ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006703ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006703ef: jb 0x67040a */ if (fC) goto L_0067040a;
L_006703f1:; BB(0x006703f1);
    /* 006703f1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006703f3: mov dword ptr [ebp + 0x90], 3 */ W32((u32)(r_ebp+0x90u), 0x3u);
    /* 006703fd: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00670402: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 00670408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670409: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
L_0067040a:; BB(0x0067040a);
    /* 0067040a: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 00670410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670411: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
L_00670412:; BB(0x00670412);
    /* 00670412: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670415: jne 0x67044c */ if (!fZ) goto L_0067044c;
L_00670417:; BB(0x00670417);
    /* 00670417: fld dword ptr [0x939fec] */ FPUSH(R_F32((u32)(0x939fecu)));
    /* 0067041d: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 00670423: fcom dword ptr [0x939fe8] */ fx_compare(ST(0), R_F32((u32)(0x939fe8u))); 
    /* 00670429: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067042b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067042c: ja 0x670444 */ if ((!fC&&!fZ)) goto L_00670444;
L_0067042e:; BB(0x0067042e);
    /* 0067042e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670430: mov dword ptr [ebp + 0x90], 0 */ W32((u32)(r_ebp+0x90u), 0x0u);
    /* 0067043a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067043c: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 00670442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670443: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
L_00670444:; BB(0x00670444);
    /* 00670444: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 0067044a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067044b: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
L_0067044c:; BB(0x0067044c);
    /* 0067044c: call 0x671008 */ r_esp -= 4; W32(r_esp, 0x670451u); f_00671008();
    /* 00670451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670453: je 0x670474 */ if (fZ) goto L_00670474;
L_00670455:; BB(0x00670455);
    /* 00670455: mov dword ptr [ebp + 0x90], 1 */ W32((u32)(r_ebp+0x90u), 0x1u);
    /* 0067045f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670460: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
L_00670461:; BB(0x00670461);
    /* 00670461: call 0x671024 */ r_esp -= 4; W32(r_esp, 0x670466u); f_00671024();
    /* 00670466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670468: je 0x670474 */ if (fZ) goto L_00670474;
L_0067046a:; BB(0x0067046a);
    /* 0067046a: mov dword ptr [ebp + 0x90], 2 */ W32((u32)(r_ebp+0x90u), 0x2u);
L_00670474:; BB(0x00670474);
    /* 00670474: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670475: ret  */ FN_RET(0x006703c4); r_esp += 4; return;
}

void f_00670478(void) /* sub_670478 */
{
    FN_ENTER(0x00670478);
    /* 00670478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00670479: mov esi, ecx */ r_esi = r_ecx;
    /* 0067047b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0067047d: mov ecx, esi */ r_ecx = r_esi;
    /* 0067047f: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00670484: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00670489: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67048cu); call_ind(t); }
    /* 0067048c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067048e: je 0x6704ae */ if (fZ) goto L_006704ae;
L_00670490:; BB(0x00670490);
    /* 00670490: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 00670496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670498: jne 0x67049c */ if (!fZ) goto L_0067049c;
L_0067049a:; BB(0x0067049a);
    /* 0067049a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067049b: ret  */ FN_RET(0x00670478); r_esp += 4; return;
L_0067049c:; BB(0x0067049c);
    /* 0067049c: mov ecx, dword ptr [esi + 0xc8] */ r_ecx = R32((u32)(r_esi+0xc8u));
    /* 006704a2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6704a7u); f_00829cc8();
    /* 006704a7: mov ecx, esi */ r_ecx = r_esi;
    /* 006704a9: call 0x6704b0 */ r_esp -= 4; W32(r_esp, 0x6704aeu); f_006704b0();
L_006704ae:; BB(0x006704ae);
    /* 006704ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006704af: ret  */ FN_RET(0x00670478); r_esp += 4; return;
}

void f_006704b0(void) /* sub_6704B0 */
{
    FN_ENTER(0x006704b0);
    /* 006704b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006704b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006704b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6704b8u); f_0082d7b0();
    /* 006704b8: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 006704bb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6704c0u); f_0082d838();
    /* 006704c0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006704c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006704c5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6704cau); f_0082d8bc();
    /* 006704ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006704cc: mov edx, 0xffffe000 */ r_edx = 0xffffe000u;
    /* 006704d1: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6704d6u); f_0082e9e4();
    /* 006704d6: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 006704dc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006704df: je 0x6704f1 */ if (fZ) goto L_006704f1;
L_006704e1:; BB(0x006704e1);
    /* 006704e1: mov eax, dword ptr [ebp + 0x94] */ r_eax = R32((u32)(r_ebp+0x94u));
    /* 006704e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006704e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006704e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006704eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006704ec: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6704f1u); f_0082fa0c();
L_006704f1:; BB(0x006704f1);
    /* 006704f1: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 006704f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006704f9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6704feu); f_005b8638();
    /* 006704fe: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670504: mov ecx, dword ptr [ebp + 0xc4] */ r_ecx = R32((u32)(r_ebp+0xc4u));
    /* 0067050a: mov edx, eax */ r_edx = r_eax;
    /* 0067050c: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x670511u); f_0083bd00();
    /* 00670511: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x670516u); f_0082da80();
    /* 00670516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670517: ret  */ FN_RET(0x006704b0); r_esp += 4; return;
}

void f_00670500(void)
{
    FN_ENTER(0x00670500);
    /* 00670500: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 00670502: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00670504: mov ecx, dword ptr [ebp + 0xc4] */ r_ecx = R32((u32)(r_ebp+0xc4u));
    /* 0067050a: mov edx, eax */ r_edx = r_eax;
    /* 0067050c: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x670511u); f_0083bd00();
    /* 00670511: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x670516u); f_0082da80();
    /* 00670516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670517: ret  */ FN_RET(0x00670500); r_esp += 4; return;
}

void f_00670518(void)
{
    FN_ENTER(0x00670518);
    /* 00670518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670519: mov ebp, esp */ r_ebp = r_esp;
    /* 0067051b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067051d: push 0x8e9080 */ { u32 v = 0x8e9080u; r_esp -= 4; W32(r_esp, v); }
    /* 00670522: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670529: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670530: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670533: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670536: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670539: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067053c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067053f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00670544: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067054b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x670550u); f_005caba4();
    /* 00670550: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670551: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00670554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670556: je 0x67058f */ if (fZ) goto L_0067058f;
L_00670558:; BB(0x00670558);
    /* 00670558: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067055f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670566: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670569: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067056f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670572: call 0x670594 */ r_esp -= 4; W32(r_esp, 0x670577u); f_00670594();
    /* 00670577: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067057a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00670581:; BB(0x00670581);
    /* 00670581: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670584: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067058b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067058d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067058e: ret  */ FN_RET(0x00670518); r_esp += 4; return;
L_0067058f:; BB(0x0067058f);
    /* 0067058f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670591: jmp 0x670581 */ goto L_00670581;
}

void f_00670594(void) /* sub_670594 */
{
    FN_ENTER(0x00670594);
    /* 00670594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670595: mov ebp, esp */ r_ebp = r_esp;
    /* 00670597: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670599: push 0x8e909c */ { u32 v = 0x8e909cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067059e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006705a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006705a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006705ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006705af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006705b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006705b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006705b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006705bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006705be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006705c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006705c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006705c7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6705ccu); f_007ba278();
    /* 006705cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006705d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006705d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006705d9: mov dword ptr [edx], 0xb35bb0 */ W32((u32)(r_edx), 0xb35bb0u);
    /* 006705df: mov ecx, dword ptr [0x9c96bc] */ r_ecx = R32((u32)(0x9c96bcu));
    /* 006705e5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006705e8: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 006705eb: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 006705ee: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 006705f1: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 006705f4: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 006705f7: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 006705fa: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006705fd: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00670600: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00670603: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00670606: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00670609: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 0067060c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0067060f: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 00670612: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00670615: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 00670618: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0067061b: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0067061e: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x670623u); f_00671040();
    /* 00670623: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670628: je 0x670636 */ if (fZ) goto L_00670636;
L_0067062a:; BB(0x0067062a);
    /* 0067062a: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 00670634: jmp 0x670640 */ goto L_00670640;
L_00670636:; BB(0x00670636);
    /* 00670636: mov dword ptr [edx + 0x90], 3 */ W32((u32)(r_edx+0x90u), 0x3u);
L_00670640:; BB(0x00670640);
    /* 00670640: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00670643: mov dword ptr [edx + 0x94], 0x3f800000 */ W32((u32)(r_edx+0x94u), 0x3f800000u);
    /* 0067064d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00670650: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00670652: jg 0x670682 */ if ((!fZ&&fS==fO)) goto L_00670682;
L_00670654:; BB(0x00670654);
    /* 00670654: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 0067065a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067065c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x670661u); f_005b8610();
    /* 00670661: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670664: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 0067066a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067066c: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00670672: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x670677u); f_005b8624();
    /* 00670677: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067067a: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00670680: jmp 0x6706ae */ goto L_006706ae;
L_00670682:; BB(0x00670682);
    /* 00670682: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 00670688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067068a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67068fu); f_005b8610();
    /* 0067068f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670692: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 00670698: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067069a: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 006706a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6706a5u); f_005b8624();
    /* 006706a5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006706a8: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
L_006706ae:; BB(0x006706ae);
    /* 006706ae: call 0x670774 */ r_esp -= 4; W32(r_esp, 0x6706b3u); f_00670774();
    /* 006706b3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006706b6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006706b9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006706bc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006706bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006706c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006706c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006706cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006706cc: ret 8 */ FN_RET(0x00670594); r_esp += 12; return;
}

void f_006706d0(void) /* sub_6706D0 */
{
    FN_ENTER(0x006706d0);
    /* 006706d0: mov ecx, dword ptr [0xa8fda8] */ r_ecx = R32((u32)(0xa8fda8u));
    /* 006706d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006706d8: je 0x6706ed */ if (fZ) goto L_006706ed;
L_006706da:; BB(0x006706da);
    /* 006706da: je 0x6706e3 */ if (fZ) goto L_006706e3;
L_006706dc:; BB(0x006706dc);
    /* 006706dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006706de: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6706e3u); f_004066a8();
L_006706e3:; BB(0x006706e3);
    /* 006706e3: mov dword ptr [0xa8fda8], 0 */ W32((u32)(0xa8fda8u), 0x0u);
L_006706ed:; BB(0x006706ed);
    /* 006706ed: ret  */ FN_RET(0x006706d0); r_esp += 4; return;
}

void f_006706f0(void) /* sub_6706F0 */
{
    FN_ENTER(0x006706f0);
    /* 006706f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006706f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006706f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006706f5: push 0x8e90c4 */ { u32 v = 0x8e90c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006706fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670701: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670708: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067070b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067070e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670711: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670714: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00670717: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067071c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00670723: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x670728u); f_008581c5();
    /* 00670728: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670729: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067072c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067072e: je 0x67076f */ if (fZ) goto L_0067076f;
L_00670730:; BB(0x00670730);
    /* 00670730: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00670737: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067073e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670741: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670746: push 0x9c96ac */ { u32 v = 0x9c96acu; r_esp -= 4; W32(r_esp, v); }
    /* 0067074b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067074d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x670752u); f_005b7a84();
    /* 00670752: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670755: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067075c:; BB(0x0067075c);
    /* 0067075c: mov dword ptr [0xa8fda8], eax */ W32((u32)(0xa8fda8u), r_eax);
    /* 00670761: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670764: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067076b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067076d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067076e: ret  */ FN_RET(0x006706f0); r_esp += 4; return;
L_0067076f:; BB(0x0067076f);
    /* 0067076f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670771: jmp 0x67075c */ goto L_0067075c;
}

void f_00670774(void) /* sub_670774 */
{
    FN_ENTER(0x00670774);
    /* 00670774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670775: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670778: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067077a: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0067077d: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00670780: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 0067078a: mov dword ptr [ebx + 0x98], eax */ W32((u32)(r_ebx+0x98u), r_eax);
    /* 00670790: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00670793: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 00670799: mov dword ptr [ebx + 0xa8], 0 */ W32((u32)(r_ebx+0xa8u), 0x0u);
    /* 006707a3: mov dword ptr [ebx + 0xa0], eax */ W32((u32)(r_ebx+0xa0u), r_eax);
    /* 006707a9: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 006707b3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6707b8u); f_008587a5();
    /* 006707b8: mov dword ptr [ebx + 0xb8], 0 */ W32((u32)(r_ebx+0xb8u), 0x0u);
    /* 006707c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006707c5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006707c8: fdiv dword ptr [0x939fcc] */ ST(0) = ST(0) / R_F32((u32)(0x939fccu));
    /* 006707ce: fmul dword ptr [0x939fc8] */ ST(0) = ST(0) * R_F32((u32)(0x939fc8u));
    /* 006707d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006707d6: fstp dword ptr [ebx + 0xb0] */ W_F32((u32)(r_ebx+0xb0u), ST(0)); FPOP();
    /* 006707dc: mov byte ptr [ebx + 0xc0], dl */ W8((u32)(r_ebx+0xc0u), (u8)r_edx);
    /* 006707e2: mov byte ptr [ebx + 0xc1], dl */ W8((u32)(r_ebx+0xc1u), (u8)r_edx);
    /* 006707e8: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 006707ed: mov word ptr [ebx + 0xbc], ax */ W16((u32)(r_ebx+0xbcu), (u16)r_eax);
    /* 006707f4: mov word ptr [ebx + 0xbe], dx */ W16((u32)(r_ebx+0xbeu), (u16)r_edx);
    /* 006707fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006707fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006707ff: ret  */ FN_RET(0x00670774); r_esp += 4; return;
}

void f_00670800(void) /* sub_670800 */
{
    FN_ENTER(0x00670800);
    /* 00670800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670801: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00670803: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00670805: call 0x670824 */ r_esp -= 4; W32(r_esp, 0x67080au); f_00670824();
    /* 0067080a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067080e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670810: jne 0x670816 */ if (!fZ) goto L_00670816;
L_00670812:; BB(0x00670812);
    /* 00670812: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670813: ret 4 */ FN_RET(0x00670800); r_esp += 8; return;
L_00670816:; BB(0x00670816);
    /* 00670816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670817: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67081cu); f_005c2f74();
    /* 0067081c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067081d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067081e: ret 4 */ FN_RET(0x00670800); r_esp += 8; return;
}

void f_00670824(void) /* sub_670824 */
{
    FN_ENTER(0x00670824);
    /* 00670824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670825: mov ebp, esp */ r_ebp = r_esp;
    /* 00670827: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670829: push 0x8e90e0 */ { u32 v = 0x8e90e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067082e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670835: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067083c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067083f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670842: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670845: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670848: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067084b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067084e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670851: mov dword ptr [ecx], 0xb35c80 */ W32((u32)(r_ecx), 0xb35c80u);
    /* 00670857: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067085e: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x670863u); f_006131f4();
    /* 00670863: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670866: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067086d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067086f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670870: ret  */ FN_RET(0x00670824); r_esp += 4; return;
}

void f_00670874(void) /* sub_670874 */
{
    FN_ENTER(0x00670874);
    /* 00670874: mov ecx, dword ptr [0xa8fdc0] */ r_ecx = R32((u32)(0xa8fdc0u));
    /* 0067087a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067087c: je 0x670891 */ if (fZ) goto L_00670891;
L_0067087e:; BB(0x0067087e);
    /* 0067087e: je 0x670887 */ if (fZ) goto L_00670887;
L_00670880:; BB(0x00670880);
    /* 00670880: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670882: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x670887u); f_004066a8();
L_00670887:; BB(0x00670887);
    /* 00670887: mov dword ptr [0xa8fdc0], 0 */ W32((u32)(0xa8fdc0u), 0x0u);
L_00670891:; BB(0x00670891);
    /* 00670891: ret  */ FN_RET(0x00670874); r_esp += 4; return;
}

void f_00670894(void)
{
    FN_ENTER(0x00670894);
    /* 00670894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670895: mov ebp, esp */ r_ebp = r_esp;
    /* 00670897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670899: push 0x8e9108 */ { u32 v = 0x8e9108u; r_esp -= 4; W32(r_esp, v); }
    /* 0067089e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006708a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006708a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006708ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006708af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006708b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006708b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006708b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006708bb: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006708c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006708c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6708ccu); f_005caba4();
    /* 006708cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006708cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006708d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006708d2: je 0x67090b */ if (fZ) goto L_0067090b;
L_006708d4:; BB(0x006708d4);
    /* 006708d4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006708db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006708e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006708e5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006708eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006708ee: call 0x670910 */ r_esp -= 4; W32(r_esp, 0x6708f3u); f_00670910();
    /* 006708f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006708f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006708fd:; BB(0x006708fd);
    /* 006708fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670900: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670907: mov esp, ebp */ r_esp = r_ebp;
    /* 00670909: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067090a: ret  */ FN_RET(0x00670894); r_esp += 4; return;
L_0067090b:; BB(0x0067090b);
    /* 0067090b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067090d: jmp 0x6708fd */ goto L_006708fd;
}

void f_00670910(void) /* sub_670910 */
{
    FN_ENTER(0x00670910);
    /* 00670910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670911: mov ebp, esp */ r_ebp = r_esp;
    /* 00670913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670915: push 0x8e9124 */ { u32 v = 0x8e9124u; r_esp -= 4; W32(r_esp, v); }
    /* 0067091a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670921: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670928: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067092b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067092e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00670931: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00670934: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00670937: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067093a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067093d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00670940: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00670943: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x670948u); f_006132e4();
    /* 00670948: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067094f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670952: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670955: mov dword ptr [ecx], 0xb35c80 */ W32((u32)(r_ecx), 0xb35c80u);
    /* 0067095b: mov eax, dword ptr [0x9c96d8] */ r_eax = R32((u32)(0x9c96d8u));
    /* 00670960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670961: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00670964: call dword ptr [0xb35c94] */ { u32 t = R32((u32)(0xb35c94u)); r_esp -= 4; W32(r_esp, 0x67096au); call_ind(t); }
    /* 0067096a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067096d: call 0x670a90 */ r_esp -= 4; W32(r_esp, 0x670972u); f_00670a90();
    /* 00670972: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670975: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670978: je 0x6709c1 */ if (fZ) goto L_006709c1;
L_0067097a:; BB(0x0067097a);
    /* 0067097a: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_00670984:; BB(0x00670984);
    /* 00670984: mov edx, dword ptr [0xa8fdc0] */ r_edx = R32((u32)(0xa8fdc0u));
    /* 0067098a: mov edi, dword ptr [0xa8fdbc] */ r_edi = R32((u32)(0xa8fdbcu));
    /* 00670990: mov dword ptr [ebx + 0xcc], 0x3f800000 */ W32((u32)(r_ebx+0xccu), 0x3f800000u);
    /* 0067099a: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 006709a0: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006709a3: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006709a6: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 006709a9: mov eax, ebx */ r_eax = r_ebx;
    /* 006709ab: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006709ae: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006709b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006709b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006709bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006709bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006709be: ret 8 */ FN_RET(0x00670910); r_esp += 12; return;
L_006709c1:; BB(0x006709c1);
    /* 006709c1: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 006709cb: jmp 0x670984 */ goto L_00670984;
}

void f_006709d0(void) /* sub_6709D0 */
{
    FN_ENTER(0x006709d0);
    /* 006709d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006709d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006709d3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6709d8u); f_004f7c84();
    /* 006709d8: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006709de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006709e0: je 0x670a75 */ if (fZ) goto L_00670a75;
L_006709e6:; BB(0x006709e6);
    /* 006709e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006709e9: jne 0x670a23 */ if (!fZ) goto L_00670a23;
L_006709eb:; BB(0x006709eb);
    /* 006709eb: fld dword ptr [0x93a0e4] */ FPUSH(R_F32((u32)(0x93a0e4u)));
    /* 006709f1: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 006709f7: fcom dword ptr [0x93a0e0] */ fx_compare(ST(0), R_F32((u32)(0x93a0e0u))); 
    /* 006709fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006709ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670a00: jb 0x670a1b */ if (fC) goto L_00670a1b;
L_00670a02:; BB(0x00670a02);
    /* 00670a02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670a04: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00670a0e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00670a13: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00670a19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a1a: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
L_00670a1b:; BB(0x00670a1b);
    /* 00670a1b: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 00670a21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a22: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
L_00670a23:; BB(0x00670a23);
    /* 00670a23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670a26: jne 0x670a5d */ if (!fZ) goto L_00670a5d;
L_00670a28:; BB(0x00670a28);
    /* 00670a28: fld dword ptr [0x93a0ec] */ FPUSH(R_F32((u32)(0x93a0ecu)));
    /* 00670a2e: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 00670a34: fcom dword ptr [0x93a0e8] */ fx_compare(ST(0), R_F32((u32)(0x93a0e8u))); 
    /* 00670a3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670a3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670a3d: ja 0x670a55 */ if ((!fC&&!fZ)) goto L_00670a55;
L_00670a3f:; BB(0x00670a3f);
    /* 00670a3f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670a41: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00670a4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670a4d: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00670a53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a54: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
L_00670a55:; BB(0x00670a55);
    /* 00670a55: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 00670a5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a5c: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
L_00670a5d:; BB(0x00670a5d);
    /* 00670a5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00670a5f: call 0x670a90 */ r_esp -= 4; W32(r_esp, 0x670a64u); f_00670a90();
    /* 00670a64: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670a67: je 0x670a8b */ if (fZ) goto L_00670a8b;
L_00670a69:; BB(0x00670a69);
    /* 00670a69: mov dword ptr [ebx + 0xc8], 1 */ W32((u32)(r_ebx+0xc8u), 0x1u);
    /* 00670a73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a74: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
L_00670a75:; BB(0x00670a75);
    /* 00670a75: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00670a77: call 0x670a90 */ r_esp -= 4; W32(r_esp, 0x670a7cu); f_00670a90();
    /* 00670a7c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670a7f: jne 0x670a8b */ if (!fZ) goto L_00670a8b;
L_00670a81:; BB(0x00670a81);
    /* 00670a81: mov dword ptr [ebx + 0xc8], 2 */ W32((u32)(r_ebx+0xc8u), 0x2u);
L_00670a8b:; BB(0x00670a8b);
    /* 00670a8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670a8c: ret  */ FN_RET(0x006709d0); r_esp += 4; return;
}

void f_00670a90(void) /* sub_670A90 */
{
    FN_ENTER(0x00670a90);
    /* 00670a90: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x670a95u); f_00670fb8();
    /* 00670a95: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670a98: jl 0x670aa5 */ if ((fS!=fO)) goto L_00670aa5;
L_00670a9a:; BB(0x00670a9a);
    /* 00670a9a: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670a9d: jg 0x670aa5 */ if ((!fZ&&fS==fO)) goto L_00670aa5;
L_00670a9f:; BB(0x00670a9f);
    /* 00670a9f: mov eax, 0xc */ r_eax = 0xcu;
    /* 00670aa4: ret  */ FN_RET(0x00670a90); r_esp += 4; return;
L_00670aa5:; BB(0x00670aa5);
    /* 00670aa5: ret  */ FN_RET(0x00670a90); r_esp += 4; return;
}

void f_00670aa8(void) /* sub_670AA8 */
{
    FN_ENTER(0x00670aa8);
    /* 00670aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670aa9: mov ebp, esp */ r_ebp = r_esp;
    /* 00670aab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670aad: push 0x8e914c */ { u32 v = 0x8e914cu; r_esp -= 4; W32(r_esp, v); }
    /* 00670ab2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670ab9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670ac0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670ac3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670ac6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670ac9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670acc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00670acf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00670ad4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00670adb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x670ae0u); f_008581c5();
    /* 00670ae0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670ae1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00670ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670ae6: je 0x670b38 */ if (fZ) goto L_00670b38;
L_00670ae8:; BB(0x00670ae8);
    /* 00670ae8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00670aef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670af6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670af9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670afe: push 0x9c96c8 */ { u32 v = 0x9c96c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b05: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x670b0au); f_005b7a84();
    /* 00670b0a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670b0d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00670b14:; BB(0x00670b14);
    /* 00670b14: mov dword ptr [0xa8fdc0], eax */ W32((u32)(0xa8fdc0u), r_eax);
    /* 00670b19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670b20: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x670b25u); f_00671000();
    /* 00670b25: mov dword ptr [0xa8fdbc], eax */ W32((u32)(0xa8fdbcu), r_eax);
    /* 00670b2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670b2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670b34: mov esp, ebp */ r_esp = r_ebp;
    /* 00670b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670b37: ret  */ FN_RET(0x00670aa8); r_esp += 4; return;
L_00670b38:; BB(0x00670b38);
    /* 00670b38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670b3a: jmp 0x670b14 */ goto L_00670b14;
}

void f_00670b3c(void) /* sub_670B3C */
{
    FN_ENTER(0x00670b3c);
    /* 00670b3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670b3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00670b3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00670b41: call 0x670b60 */ r_esp -= 4; W32(r_esp, 0x670b46u); f_00670b60();
    /* 00670b46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00670b4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670b4c: jne 0x670b52 */ if (!fZ) goto L_00670b52;
L_00670b4e:; BB(0x00670b4e);
    /* 00670b4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670b4f: ret 4 */ FN_RET(0x00670b3c); r_esp += 8; return;
L_00670b52:; BB(0x00670b52);
    /* 00670b52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670b53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x670b58u); f_005c2f74();
    /* 00670b58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670b59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670b5a: ret 4 */ FN_RET(0x00670b3c); r_esp += 8; return;
}

void f_00670b60(void) /* sub_670B60 */
{
    FN_ENTER(0x00670b60);
    /* 00670b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00670b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670b65: push 0x8e9168 */ { u32 v = 0x8e9168u; r_esp -= 4; W32(r_esp, v); }
    /* 00670b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670b71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670b78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670b7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670b7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670b81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670b84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00670b87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00670b8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670b8d: mov dword ptr [ecx], 0xb35d50 */ W32((u32)(r_ecx), 0xb35d50u);
    /* 00670b93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670b9a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x670b9fu); f_006131f4();
    /* 00670b9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670ba2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670ba9: mov esp, ebp */ r_esp = r_ebp;
    /* 00670bab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670bac: ret  */ FN_RET(0x00670b60); r_esp += 4; return;
}

void f_00670bb0(void) /* sub_670BB0 */
{
    FN_ENTER(0x00670bb0);
    /* 00670bb0: mov ecx, dword ptr [0xa8fdd0] */ r_ecx = R32((u32)(0xa8fdd0u));
    /* 00670bb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670bb8: je 0x670bcd */ if (fZ) goto L_00670bcd;
L_00670bba:; BB(0x00670bba);
    /* 00670bba: je 0x670bc3 */ if (fZ) goto L_00670bc3;
L_00670bbc:; BB(0x00670bbc);
    /* 00670bbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670bbe: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x670bc3u); f_004066a8();
L_00670bc3:; BB(0x00670bc3);
    /* 00670bc3: mov dword ptr [0xa8fdd0], 0 */ W32((u32)(0xa8fdd0u), 0x0u);
L_00670bcd:; BB(0x00670bcd);
    /* 00670bcd: ret  */ FN_RET(0x00670bb0); r_esp += 4; return;
}

void f_00670bd0(void)
{
    FN_ENTER(0x00670bd0);
    /* 00670bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00670bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670bd5: push 0x8e9190 */ { u32 v = 0x8e9190u; r_esp -= 4; W32(r_esp, v); }
    /* 00670bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670be1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670be8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670beb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670bee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670bf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670bf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00670bf7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670bfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00670c03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x670c08u); f_005caba4();
    /* 00670c08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670c09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00670c0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670c0e: je 0x670c47 */ if (fZ) goto L_00670c47;
L_00670c10:; BB(0x00670c10);
    /* 00670c10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00670c17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670c1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670c21: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670c27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670c2a: call 0x670c4c */ r_esp -= 4; W32(r_esp, 0x670c2fu); f_00670c4c();
    /* 00670c2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670c32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00670c39:; BB(0x00670c39);
    /* 00670c39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670c3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670c43: mov esp, ebp */ r_esp = r_ebp;
    /* 00670c45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670c46: ret  */ FN_RET(0x00670bd0); r_esp += 4; return;
L_00670c47:; BB(0x00670c47);
    /* 00670c47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670c49: jmp 0x670c39 */ goto L_00670c39;
}

void f_00670c4c(void) /* sub_670C4C */
{
    FN_ENTER(0x00670c4c);
    /* 00670c4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670c4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00670c4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670c51: push 0x8e91ac */ { u32 v = 0x8e91acu; r_esp -= 4; W32(r_esp, v); }
    /* 00670c56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670c5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670c64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670c67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670c6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00670c6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00670c70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00670c73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00670c76: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670c79: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00670c7c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00670c7f: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x670c84u); f_006132e4();
    /* 00670c84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670c8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670c8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670c91: mov dword ptr [ecx], 0xb35d50 */ W32((u32)(r_ecx), 0xb35d50u);
    /* 00670c97: mov eax, dword ptr [0x9c96f4] */ r_eax = R32((u32)(0x9c96f4u));
    /* 00670c9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670c9d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00670ca0: call dword ptr [0xb35d64] */ { u32 t = R32((u32)(0xb35d64u)); r_esp -= 4; W32(r_esp, 0x670ca6u); call_ind(t); }
    /* 00670ca6: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x670cabu); f_00670fb8();
    /* 00670cab: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00670cae: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670cb1: je 0x670cfa */ if (fZ) goto L_00670cfa;
L_00670cb3:; BB(0x00670cb3);
    /* 00670cb3: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_00670cbd:; BB(0x00670cbd);
    /* 00670cbd: mov edx, dword ptr [0xa8fdd0] */ r_edx = R32((u32)(0xa8fdd0u));
    /* 00670cc3: mov edi, dword ptr [0xa8fdcc] */ r_edi = R32((u32)(0xa8fdccu));
    /* 00670cc9: mov dword ptr [ebx + 0xcc], 0x3f800000 */ W32((u32)(r_ebx+0xccu), 0x3f800000u);
    /* 00670cd3: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00670cd9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00670cdc: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00670cdf: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 00670ce2: mov eax, ebx */ r_eax = r_ebx;
    /* 00670ce4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670ce7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00670cea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670ced: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670cf4: mov esp, ebp */ r_esp = r_ebp;
    /* 00670cf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670cf7: ret 8 */ FN_RET(0x00670c4c); r_esp += 12; return;
L_00670cfa:; BB(0x00670cfa);
    /* 00670cfa: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00670d04: jmp 0x670cbd */ goto L_00670cbd;
}

void f_00670d08(void) /* sub_670D08 */
{
    FN_ENTER(0x00670d08);
    /* 00670d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670d09: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00670d0b: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00670d11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670d13: je 0x670da6 */ if (fZ) goto L_00670da6;
L_00670d19:; BB(0x00670d19);
    /* 00670d19: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670d1c: jne 0x670d56 */ if (!fZ) goto L_00670d56;
L_00670d1e:; BB(0x00670d1e);
    /* 00670d1e: fld dword ptr [0x93a134] */ FPUSH(R_F32((u32)(0x93a134u)));
    /* 00670d24: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 00670d2a: fcom dword ptr [0x93a130] */ fx_compare(ST(0), R_F32((u32)(0x93a130u))); 
    /* 00670d30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670d32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670d33: jb 0x670d4e */ if (fC) goto L_00670d4e;
L_00670d35:; BB(0x00670d35);
    /* 00670d35: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670d37: mov dword ptr [ebp + 0xc8], 3 */ W32((u32)(r_ebp+0xc8u), 0x3u);
    /* 00670d41: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00670d46: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00670d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670d4d: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
L_00670d4e:; BB(0x00670d4e);
    /* 00670d4e: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 00670d54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670d55: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
L_00670d56:; BB(0x00670d56);
    /* 00670d56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670d59: jne 0x670d90 */ if (!fZ) goto L_00670d90;
L_00670d5b:; BB(0x00670d5b);
    /* 00670d5b: fld dword ptr [0x93a13c] */ FPUSH(R_F32((u32)(0x93a13cu)));
    /* 00670d61: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 00670d67: fcom dword ptr [0x93a138] */ fx_compare(ST(0), R_F32((u32)(0x93a138u))); 
    /* 00670d6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670d6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670d70: ja 0x670d88 */ if ((!fC&&!fZ)) goto L_00670d88;
L_00670d72:; BB(0x00670d72);
    /* 00670d72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670d74: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 00670d7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670d80: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00670d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670d87: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
L_00670d88:; BB(0x00670d88);
    /* 00670d88: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 00670d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670d8f: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
L_00670d90:; BB(0x00670d90);
    /* 00670d90: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x670d95u); f_00670fb8();
    /* 00670d95: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670d98: je 0x670dba */ if (fZ) goto L_00670dba;
L_00670d9a:; BB(0x00670d9a);
    /* 00670d9a: mov dword ptr [ebp + 0xc8], 1 */ W32((u32)(r_ebp+0xc8u), 0x1u);
    /* 00670da4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670da5: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
L_00670da6:; BB(0x00670da6);
    /* 00670da6: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x670dabu); f_00670fb8();
    /* 00670dab: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00670dae: jne 0x670dba */ if (!fZ) goto L_00670dba;
L_00670db0:; BB(0x00670db0);
    /* 00670db0: mov dword ptr [ebp + 0xc8], 2 */ W32((u32)(r_ebp+0xc8u), 0x2u);
L_00670dba:; BB(0x00670dba);
    /* 00670dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670dbb: ret  */ FN_RET(0x00670d08); r_esp += 4; return;
}

void f_00670dbc(void) /* sub_670DBC */
{
    FN_ENTER(0x00670dbc);
    /* 00670dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00670dbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00670dbf: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00670dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670dc7: je 0x670e3e */ if (fZ) goto L_00670e3e;
L_00670dc9:; BB(0x00670dc9);
    /* 00670dc9: mov eax, dword ptr [0xa8fdcc] */ r_eax = R32((u32)(0xa8fdccu));
    /* 00670dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670dd0: je 0x670e3e */ if (fZ) goto L_00670e3e;
L_00670dd2:; BB(0x00670dd2);
    /* 00670dd2: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670dd8: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670dde: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00670de0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00670de2: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x670de5u); call_ind(t); }
    /* 00670de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670de7: je 0x670e3e */ if (fZ) goto L_00670e3e;
L_00670de9:; BB(0x00670de9);
    /* 00670de9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x670deeu); f_0082dbac();
    /* 00670dee: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00670df1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x670df6u); f_00829cc8();
    /* 00670df6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x670dfbu); f_0082d7b0();
    /* 00670dfb: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00670dfe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x670e03u); f_0082d838();
    /* 00670e03: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00670e06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00670e08: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x670e0du); f_0082d8bc();
    /* 00670e0d: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00670e13: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670e16: je 0x670e2c */ if (fZ) goto L_00670e2c;
L_00670e18:; BB(0x00670e18);
    /* 00670e18: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00670e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00670e21: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e27: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x670e2cu); f_0082fa0c();
L_00670e2c:; BB(0x00670e2c);
    /* 00670e2c: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00670e2f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x670e34u); f_00831758();
    /* 00670e34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x670e39u); f_0082da80();
    /* 00670e39: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x670e3eu); f_0082dab0();
L_00670e3e:; BB(0x00670e3e);
    /* 00670e3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00670e3f: ret  */ FN_RET(0x00670dbc); r_esp += 4; return;
}

void f_00670e40(void) /* sub_670E40 */
{
    FN_ENTER(0x00670e40);
    /* 00670e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00670e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670e45: push 0x8e91d4 */ { u32 v = 0x8e91d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670e58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670e5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00670e61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00670e64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00670e67: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e6c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00670e73: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x670e78u); f_008581c5();
    /* 00670e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670e79: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00670e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670e7e: je 0x670ed0 */ if (fZ) goto L_00670ed0;
L_00670e80:; BB(0x00670e80);
    /* 00670e80: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00670e87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670e8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670e91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670e96: push 0x9c96e4 */ { u32 v = 0x9c96e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e9b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00670e9d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x670ea2u); f_005b7a84();
    /* 00670ea2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670ea5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00670eac:; BB(0x00670eac);
    /* 00670eac: mov dword ptr [0xa8fdd0], eax */ W32((u32)(0xa8fdd0u), r_eax);
    /* 00670eb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670eb8: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x670ebdu); f_00671000();
    /* 00670ebd: mov dword ptr [0xa8fdcc], eax */ W32((u32)(0xa8fdccu), r_eax);
    /* 00670ec2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670ec5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670ecc: mov esp, ebp */ r_esp = r_ebp;
    /* 00670ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670ecf: ret  */ FN_RET(0x00670e40); r_esp += 4; return;
L_00670ed0:; BB(0x00670ed0);
    /* 00670ed0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670ed2: jmp 0x670eac */ goto L_00670eac;
}

void f_00670ed4(void) /* sub_670ED4 */
{
    FN_ENTER(0x00670ed4);
    /* 00670ed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670ed5: mov ebp, esp */ r_ebp = r_esp;
    /* 00670ed7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670ed9: push 0x8e91f0 */ { u32 v = 0x8e91f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670ede: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670ee5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00670eec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670eef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00670ef2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00670ef5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00670ef8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00670efb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00670efe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00670f01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670f08: mov eax, ecx */ r_eax = r_ecx;
    /* 00670f0a: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00670f0d: mov dword ptr [eax], 0xb35df8 */ W32((u32)(r_eax), 0xb35df8u);
    /* 00670f13: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f15: je 0x670f5c */ if (fZ) goto L_00670f5c;
L_00670f17:; BB(0x00670f17);
    /* 00670f17: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00670f1a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00670f1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00670f1e: jle 0x670f4b */ if ((fZ||fS!=fO)) goto L_00670f4b;
L_00670f20:; BB(0x00670f20);
    /* 00670f20: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 00670f23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f25: je 0x670f3b */ if (fZ) goto L_00670f3b;
L_00670f27:; BB(0x00670f27);
    /* 00670f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670f28: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x670f2du); f_00857e98();
    /* 00670f2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670f2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00670f31: mov dword ptr [esi + 0x68], 0 */ W32((u32)(r_esi+0x68u), 0x0u);
    /* 00670f38: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
L_00670f3b:; BB(0x00670f3b);
    /* 00670f3b: add esi, 0x6c */ {  u32 a = r_esi; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00670f3e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00670f41: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00670f43: jl 0x670f20 */ if ((fS!=fO)) goto L_00670f20;
L_00670f45:; BB(0x00670f45);
    /* 00670f45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00670f48: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
L_00670f4b:; BB(0x00670f4b);
    /* 00670f4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00670f4c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x670f51u); f_00857e98();
    /* 00670f51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670f52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00670f55: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00670f5c:; BB(0x00670f5c);
    /* 00670f5c: mov edx, dword ptr [0xa8fde0] */ r_edx = R32((u32)(0xa8fde0u));
    /* 00670f62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f64: je 0x670f7d */ if (fZ) goto L_00670f7d;
L_00670f66:; BB(0x00670f66);
    /* 00670f66: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00670f6a: mov dword ptr [0xa8fde0], 0 */ W32((u32)(0xa8fde0u), 0x0u);
    /* 00670f74: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670f79: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00670f7d:; BB(0x00670f7d);
    /* 00670f7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00670f84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670f87: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x670f8cu); f_008171e8();
    /* 00670f8c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670f8f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670f91: jne 0x670fac */ if (!fZ) goto L_00670fac;
L_00670f93:; BB(0x00670f93);
    /* 00670f93: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00670f96: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00670f99: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00670f9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00670f9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00670fa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00670fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670fa9: ret 4 */ FN_RET(0x00670ed4); r_esp += 8; return;
L_00670fac:; BB(0x00670fac);
    /* 00670fac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00670faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670fb0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x670fb5u); f_005c2f74();
    /* 00670fb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670fb6: jmp 0x670f93 */ goto L_00670f93;
}

void f_00670fb8(void) /* sub_670FB8 */
{
    FN_ENTER(0x00670fb8);
    /* 00670fb8: mov edx, dword ptr [0xaab210] */ r_edx = R32((u32)(0xaab210u));
    /* 00670fbe: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00670fc1: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00670fc4: ja 0x670fd2 */ if ((!fC&&!fZ)) goto L_00670fd2;
L_00670fc6:; BB(0x00670fc6);
    /* 00670fc6: mov eax, dword ptr [edx*4 + 0x93a17c] */ r_eax = R32((u32)(r_edx*4+0x93a17cu));
    /* 00670fcd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00670fd2:; BB(0x00670fd2);
    /* 00670fd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670fd4: ret  */ FN_RET(0x00670fb8); r_esp += 4; return;
}

void f_00670fcf(void)
{
    FN_ENTER(0x00670fcf);
    /* 00670fcf: mov eax, edx */ r_eax = r_edx;
    /* 00670fd1: ret  */ FN_RET(0x00670fcf); r_esp += 4; return;
}

void f_00670fd2(void)
{
    FN_ENTER(0x00670fd2);
    /* 00670fd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670fd4: ret  */ FN_RET(0x00670fd2); r_esp += 4; return;
}

void f_00670fd8(void) /* sub_670FD8 */
{
    FN_ENTER(0x00670fd8);
    /* 00670fd8: mov ecx, dword ptr [0xa8fde8] */ r_ecx = R32((u32)(0xa8fde8u));
    /* 00670fde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00670fe0: je 0x670ffd */ if (fZ) goto L_00670ffd;
L_00670fe2:; BB(0x00670fe2);
    /* 00670fe2: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x670fe7u); f_00829de0();
    /* 00670fe7: push dword ptr [0xa8fde8] */ { u32 v = R32((u32)(0xa8fde8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00670fed: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x670ff2u); f_0082e960();
    /* 00670ff2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00670ff3: mov dword ptr [0xa8fde8], 0 */ W32((u32)(0xa8fde8u), 0x0u);
L_00670ffd:; BB(0x00670ffd);
    /* 00670ffd: ret  */ FN_RET(0x00670fd8); r_esp += 4; return;
}

