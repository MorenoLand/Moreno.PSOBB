#include "protos.h"

void f_0054503f(void)
{
    FN_ENTER(0x0054503f);
    /* 0054503f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545042: movsx ecx, word ptr [eax + 0x3a0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a0u));
    /* 00545049: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0054504c: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0054504f: add edx, 0x555 */ {  u32 a = r_edx; u32 b = 0x555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00545055: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00545058: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054505b: mov word ptr [eax + 0x3a0], cx */ W16((u32)(r_eax+0x3a0u), (u16)r_ecx);
    /* 00545062: movsx esi, cx */ r_esi = (u32)(i32)(i16)(u16)r_ecx;
    /* 00545065: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00545068: jl 0x54507f */ if ((fS!=fO)) goto L_0054507f;
L_0054506a:; BB(0x0054506a);
    /* 0054506a: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00545074: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545077: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054507a: jmp 0x5457d4 */ goto L_005457d4;
L_0054507f:; BB(0x0054507f);
    /* 0054507f: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545082: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545085: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054503f); r_esp += 4; return;
}

void f_0054508a(void)
{
    FN_ENTER(0x0054508a);
    /* 0054508a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054508d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00545090: jmp 0x5450ff */ goto L_005450ff;
L_005450ff:; BB(0x005450ff);
    /* 005450ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545102: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x545107u); f_007aa094();
    /* 00545107: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054510a: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00545110: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00545116: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00545118: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x54511bu); call_ind(t); }
    /* 0054511b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054511e: fld dword ptr [0x923ab4] */ FPUSH(R_F32((u32)(0x923ab4u)));
    /* 00545124: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00545127: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0054512a: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 0054512d: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 00545133: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00545139: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 0054513f: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00545145: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0054514b: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00545151: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 00545157: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0054515d: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00545163: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00545169: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 0054516f: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00545175: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00545178: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0054517e: mov dword ptr [edx + 0x48], esi */ W32((u32)(r_edx+0x48u), r_esi);
    /* 00545181: mov dword ptr [edx + 0x4c], edi */ W32((u32)(r_edx+0x4cu), r_edi);
    /* 00545184: mov edx, dword ptr [0xa73824] */ r_edx = R32((u32)(0xa73824u));
    /* 0054518a: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0054518c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054518f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00545193: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00545196: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x54519bu); f_0078ea90();
    /* 0054519b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054519d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005451a0: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 005451a6: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 005451ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5451b1u); f_0082ebac();
    /* 005451b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005451b4: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 005451ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005451bc: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 005451c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005451c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005451c4: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5451c9u); f_0077fffc();
    /* 005451c9: mov edx, eax */ r_edx = r_eax;
    /* 005451cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005451ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005451d0: je 0x54525e */ if (fZ) goto L_0054525e;
L_005451d6:; BB(0x005451d6);
    /* 005451d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005451d9: fld dword ptr [ecx + 0x30c] */ FPUSH(R_F32((u32)(r_ecx+0x30cu)));
    /* 005451df: fld dword ptr [ecx + 0x314] */ FPUSH(R_F32((u32)(r_ecx+0x314u)));
    /* 005451e5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005451e7: fmul qword ptr [0x9239b0] */ ST(0) = ST(0) * R_F64((u32)(0x9239b0u));
    /* 005451ed: fdiv qword ptr [0x9239a8] */ ST(0) = ST(0) / R_F64((u32)(0x9239a8u));
    /* 005451f3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005451f6: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005451f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005451fb: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005451fe: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00545202: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00545207: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0054520a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0054520d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00545210: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00545213: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00545216: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00545219: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054521b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054521d: fmul qword ptr [0x9239b0] */ ST(0) = ST(0) * R_F64((u32)(0x9239b0u));
    /* 00545223: fdiv qword ptr [0x9239a8] */ ST(0) = ST(0) / R_F64((u32)(0x9239a8u));
    /* 00545229: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0054522c: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00545230: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00545235: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00545238: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0054523b: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054523e: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00545241: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00545244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00545245: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00545246: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x54524bu); f_007a900c();
    /* 0054524b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054524e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545251: lea eax, [eax + esi - 0x8000] */ r_eax = (u32)(r_eax+r_esi+0xffff8000u);
    /* 00545258: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
L_0054525e:; BB(0x0054525e);
    /* 0054525e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x545263u); f_008587a5();
    /* 00545263: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00545266: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00545269: fdiv dword ptr [0x923a1c] */ ST(0) = ST(0) / R_F32((u32)(0x923a1cu));
    /* 0054526f: fcomp dword ptr [0x923a18] */ fx_compare(ST(0), R_F32((u32)(0x923a18u))); FPOP();
    /* 00545275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545278: jae 0x545281 */ if (!fC) goto L_00545281;
L_0054527a:; BB(0x0054527a);
    /* 0054527a: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0054527f: jmp 0x545286 */ goto L_00545286;
L_00545281:; BB(0x00545281);
    /* 00545281: mov esi, 1 */ r_esi = 0x1u;
L_00545286:; BB(0x00545286);
    /* 00545286: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545289: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054528b: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0054528e: lea edx, [eax + 0x30c] */ r_edx = (u32)(r_eax+0x30cu);
    /* 00545294: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00545297:; BB(0x00545297);
    /* 00545297: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054529a: mov eax, dword ptr [ecx + 0x30c] */ r_eax = R32((u32)(r_ecx+0x30cu));
    /* 005452a0: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 005452a6: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005452ac: mov eax, dword ptr [ecx + 0x314] */ r_eax = R32((u32)(r_ecx+0x314u));
    /* 005452b2: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 005452b8: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005452be:; BB(0x005452be);
    /* 005452be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452c1: lea ecx, [ebp - 0xc4] */ r_ecx = (u32)(r_ebp+0xffffff3cu);
    /* 005452c7: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005452ca: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005452d0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005452d3: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005452d9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005452dc: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005452e2: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 005452e8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5452edu); f_0082ebac();
    /* 005452ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452f0: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 005452f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005452f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005452f9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5452feu); f_007b4c58();
    /* 005452fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545301: je 0x545a21 */ if (fZ) goto L_00545a21;
L_00545307:; BB(0x00545307);
    /* 00545307: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054530a: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054530d: jge 0x545844 */ if ((fS==fO)) goto L_00545844;
L_00545313:; BB(0x00545313);
    /* 00545313: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545315: je 0x545297 */ if (fZ) goto L_00545297;
L_00545317:; BB(0x00545317);
    /* 00545317: jmp 0x545813 */ goto L_00545813;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054508a); r_esp += 4; return;
L_00545813:; BB(0x00545813);
    /* 00545813: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00545818: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54581du); f_0082d990();
    /* 0054581d: mov edx, edi */ r_edx = r_edi;
    /* 0054581f: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00545822: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545824: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x545829u); f_0082d8bc();
    /* 00545829: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054582c: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 00545832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545833: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545835: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x54583au); f_0082eab8();
    /* 0054583a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54583fu); f_0082da80();
    /* 0054583f: jmp 0x5452be */ goto L_005452be;
L_00545844:; BB(0x00545844);
    /* 00545844: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545847: fld dword ptr [0x9239f4] */ FPUSH(R_F32((u32)(0x9239f4u)));
    /* 0054584d: mov ecx, dword ptr [0xa73824] */ r_ecx = R32((u32)(0xa73824u));
    /* 00545853: fld dword ptr [edx + 0x3a8] */ FPUSH(R_F32((u32)(r_edx+0x3a8u)));
    /* 00545859: fld dword ptr [edx + 0x3ac] */ FPUSH(R_F32((u32)(r_edx+0x3acu)));
    /* 0054585f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00545861: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00545863: fadd dword ptr [0x9239f8] */ ST(0) = ST(0) + R_F32((u32)(0x9239f8u));
    /* 00545869: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0054586b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054586d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054586f: fst dword ptr [edx + 0x3ac] */ W_F32((u32)(r_edx+0x3acu), ST(0));
    /* 00545875: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00545878: ja 0x54587c */ if ((!fC&&!fZ)) goto L_0054587c;
L_0054587a:; BB(0x0054587a);
    /* 0054587a: fst st(1) */ ST(1) = ST(0);
L_0054587c:; BB(0x0054587c);
    /* 0054587c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054587e: fstp dword ptr [edx + 0x3a8] */ W_F32((u32)(r_edx+0x3a8u), ST(0)); FPOP();
    /* 00545884: fcomp dword ptr [ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4u))); FPOP();
    /* 00545887: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545889: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054588a: jb 0x5458a7 */ if (fC) goto L_005458a7;
L_0054588c:; BB(0x0054588c);
    /* 0054588c: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00545892: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 0054589c: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005458a1: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
L_005458a7:; BB(0x005458a7);
    /* 005458a7: mov ecx, edx */ r_ecx = r_edx;
    /* 005458a9: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 005458ac: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005458af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005458b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b5: push 0x1f3 */ { u32 v = 0x1f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005458ba: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5458bfu); f_008144b0();
    /* 005458bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005458c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458c5: mov eax, dword ptr [eax + 0x3b4] */ r_eax = R32((u32)(r_eax+0x3b4u));
    /* 005458cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005458cd: jle 0x545907 */ if ((fZ||fS!=fO)) goto L_00545907;
L_005458cf:; BB(0x005458cf);
    /* 005458cf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458d2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005458d5: mov dword ptr [edx + 0x3b4], eax */ W32((u32)(r_edx+0x3b4u), r_eax);
    /* 005458db: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005458e1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005458e4: test ecx, 0x300000 */ {  u32 a = r_ecx; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005458ea: je 0x545907 */ if (fZ) goto L_00545907;
L_005458ec:; BB(0x005458ec);
    /* 005458ec: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 005458f2: mov dword ptr [edx + 0x3b4], 5 */ W32((u32)(r_edx+0x3b4u), 0x5u);
    /* 005458fc: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545901: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
L_00545907:; BB(0x00545907);
    /* 00545907: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0054590c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054590e: jne 0x545a10 */ if (!fZ) goto L_00545a10;
L_00545914:; BB(0x00545914);
    /* 00545914: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 0054591a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054591d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00545920: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545926: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 0054592c: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 00545936: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545940: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00545942: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00545945: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 0054594f: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545959: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 00545963: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 0054596d: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 00545977: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_00545981:; BB(0x00545981);
    /* 00545981: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545984: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 0054598b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054598e: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545991: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 00545998: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054599b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054599d: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 005459a3: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 005459a9: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005459b3: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005459b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5459bau); f_005caba4();
    /* 005459ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005459bb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005459c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005459c3: je 0x5459f7 */ if (fZ) goto L_005459f7;
L_005459c5:; BB(0x005459c5);
    /* 005459c5: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 005459cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005459d6: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 005459dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005459de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005459e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005459e2: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005459e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005459e8: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x5459edu); f_00546908();
    /* 005459ed: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005459f7:; BB(0x005459f7);
    /* 005459f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005459fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545a04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00545a07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00545a0a: jl 0x545981 */ if ((fS!=fO)) goto L_00545981;
L_00545a10:; BB(0x00545a10);
    /* 00545a10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a17: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x545a1cu); f_00772b44();
    /* 00545a1c: jmp 0x5457d4 */ goto L_005457d4;
L_00545a21:; BB(0x00545a21);
    /* 00545a21: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00545a27: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a2a: mov esi, dword ptr [ebp - 0xc0] */ r_esi = R32((u32)(r_ebp+0xffffff40u));
    /* 00545a30: mov edi, dword ptr [ebp - 0xbc] */ r_edi = R32((u32)(r_ebp+0xffffff44u));
    /* 00545a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a39: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00545a3c: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 00545a3f: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 00545a42: mov dword ptr [edx + 0x30c], eax */ W32((u32)(r_edx+0x30cu), r_eax);
    /* 00545a48: mov dword ptr [edx + 0x310], esi */ W32((u32)(r_edx+0x310u), r_esi);
    /* 00545a4e: mov dword ptr [edx + 0x314], edi */ W32((u32)(r_edx+0x314u), r_edi);
    /* 00545a54: lea edx, [edx + 0x44] */ r_edx = (u32)(r_edx+0x44u);
    /* 00545a57: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x545a5cu); f_0082f9c4();
    /* 00545a5c: jmp 0x545844 */ goto L_00545844;
}

void f_00545092(void)
{
    FN_ENTER(0x00545092);
    /* 00545092: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545095: mov ecx, dword ptr [0xa73824] */ r_ecx = R32((u32)(0xa73824u));
    /* 0054509b: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0054509e: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005450a1: mov dword ptr [eax + 0x3b0], edx */ W32((u32)(r_eax+0x3b0u), r_edx);
    /* 005450a7: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005450a9: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 005450af: mov dword ptr [eax + 0x3ac], 0 */ W32((u32)(r_eax+0x3acu), 0x0u);
    /* 005450b9: mov dword ptr [eax + 0x3a8], esi */ W32((u32)(r_eax+0x3a8u), r_esi);
    /* 005450bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005450c1: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 005450cb: mov dword ptr [eax + 0x3b4], edx */ W32((u32)(r_eax+0x3b4u), r_edx);
    /* 005450d1: mov word ptr [eax + 0x3a6], dx */ W16((u32)(r_eax+0x3a6u), (u16)r_edx);
    /* 005450d8: mov edi, 1 */ r_edi = 0x1u;
    /* 005450dd: mov word ptr [eax + 0xb8], di */ W16((u32)(r_eax+0xb8u), (u16)r_edi);
    /* 005450e4: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 005450e7: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005450ea: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005450ed: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 005450f0: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005450f6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005450f9: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005450fc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005450ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545102: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x545107u); f_007aa094();
    /* 00545107: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054510a: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00545110: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00545116: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00545118: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x54511bu); call_ind(t); }
    /* 0054511b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054511e: fld dword ptr [0x923ab4] */ FPUSH(R_F32((u32)(0x923ab4u)));
    /* 00545124: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00545127: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0054512a: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 0054512d: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 00545133: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00545139: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 0054513f: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00545145: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0054514b: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00545151: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 00545157: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0054515d: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00545163: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00545169: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 0054516f: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00545175: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 00545178: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0054517e: mov dword ptr [edx + 0x48], esi */ W32((u32)(r_edx+0x48u), r_esi);
    /* 00545181: mov dword ptr [edx + 0x4c], edi */ W32((u32)(r_edx+0x4cu), r_edi);
    /* 00545184: mov edx, dword ptr [0xa73824] */ r_edx = R32((u32)(0xa73824u));
    /* 0054518a: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0054518c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054518f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00545193: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00545196: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x54519bu); f_0078ea90();
    /* 0054519b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054519d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005451a0: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 005451a6: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 005451ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5451b1u); f_0082ebac();
    /* 005451b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005451b4: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 005451ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005451bc: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 005451c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005451c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005451c4: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5451c9u); f_0077fffc();
    /* 005451c9: mov edx, eax */ r_edx = r_eax;
    /* 005451cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005451ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005451d0: je 0x54525e */ if (fZ) goto L_0054525e;
L_005451d6:; BB(0x005451d6);
    /* 005451d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005451d9: fld dword ptr [ecx + 0x30c] */ FPUSH(R_F32((u32)(r_ecx+0x30cu)));
    /* 005451df: fld dword ptr [ecx + 0x314] */ FPUSH(R_F32((u32)(r_ecx+0x314u)));
    /* 005451e5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005451e7: fmul qword ptr [0x9239b0] */ ST(0) = ST(0) * R_F64((u32)(0x9239b0u));
    /* 005451ed: fdiv qword ptr [0x9239a8] */ ST(0) = ST(0) / R_F64((u32)(0x9239a8u));
    /* 005451f3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005451f6: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 005451f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005451fb: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005451fe: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00545202: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00545207: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0054520a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0054520d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00545210: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00545213: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00545216: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00545219: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054521b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054521d: fmul qword ptr [0x9239b0] */ ST(0) = ST(0) * R_F64((u32)(0x9239b0u));
    /* 00545223: fdiv qword ptr [0x9239a8] */ ST(0) = ST(0) / R_F64((u32)(0x9239a8u));
    /* 00545229: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0054522c: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00545230: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00545235: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00545238: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0054523b: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054523e: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00545241: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00545244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00545245: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00545246: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x54524bu); f_007a900c();
    /* 0054524b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054524e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545251: lea eax, [eax + esi - 0x8000] */ r_eax = (u32)(r_eax+r_esi+0xffff8000u);
    /* 00545258: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
L_0054525e:; BB(0x0054525e);
    /* 0054525e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x545263u); f_008587a5();
    /* 00545263: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00545266: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00545269: fdiv dword ptr [0x923a1c] */ ST(0) = ST(0) / R_F32((u32)(0x923a1cu));
    /* 0054526f: fcomp dword ptr [0x923a18] */ fx_compare(ST(0), R_F32((u32)(0x923a18u))); FPOP();
    /* 00545275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545278: jae 0x545281 */ if (!fC) goto L_00545281;
L_0054527a:; BB(0x0054527a);
    /* 0054527a: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0054527f: jmp 0x545286 */ goto L_00545286;
L_00545281:; BB(0x00545281);
    /* 00545281: mov esi, 1 */ r_esi = 0x1u;
L_00545286:; BB(0x00545286);
    /* 00545286: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545289: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054528b: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0054528e: lea edx, [eax + 0x30c] */ r_edx = (u32)(r_eax+0x30cu);
    /* 00545294: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00545297:; BB(0x00545297);
    /* 00545297: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054529a: mov eax, dword ptr [ecx + 0x30c] */ r_eax = R32((u32)(r_ecx+0x30cu));
    /* 005452a0: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 005452a6: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005452ac: mov eax, dword ptr [ecx + 0x314] */ r_eax = R32((u32)(r_ecx+0x314u));
    /* 005452b2: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 005452b8: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005452be:; BB(0x005452be);
    /* 005452be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452c1: lea ecx, [ebp - 0xc4] */ r_ecx = (u32)(r_ebp+0xffffff3cu);
    /* 005452c7: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005452ca: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005452d0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005452d3: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005452d9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005452dc: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005452e2: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 005452e8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5452edu); f_0082ebac();
    /* 005452ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452f0: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 005452f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005452f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005452f9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5452feu); f_007b4c58();
    /* 005452fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545301: je 0x545a21 */ if (fZ) goto L_00545a21;
L_00545307:; BB(0x00545307);
    /* 00545307: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054530a: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054530d: jge 0x545844 */ if ((fS==fO)) goto L_00545844;
L_00545313:; BB(0x00545313);
    /* 00545313: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545315: je 0x545297 */ if (fZ) goto L_00545297;
L_00545317:; BB(0x00545317);
    /* 00545317: jmp 0x545813 */ goto L_00545813;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545092); r_esp += 4; return;
L_00545813:; BB(0x00545813);
    /* 00545813: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00545818: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54581du); f_0082d990();
    /* 0054581d: mov edx, edi */ r_edx = r_edi;
    /* 0054581f: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00545822: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545824: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x545829u); f_0082d8bc();
    /* 00545829: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054582c: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 00545832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545833: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545835: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x54583au); f_0082eab8();
    /* 0054583a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54583fu); f_0082da80();
    /* 0054583f: jmp 0x5452be */ goto L_005452be;
L_00545844:; BB(0x00545844);
    /* 00545844: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545847: fld dword ptr [0x9239f4] */ FPUSH(R_F32((u32)(0x9239f4u)));
    /* 0054584d: mov ecx, dword ptr [0xa73824] */ r_ecx = R32((u32)(0xa73824u));
    /* 00545853: fld dword ptr [edx + 0x3a8] */ FPUSH(R_F32((u32)(r_edx+0x3a8u)));
    /* 00545859: fld dword ptr [edx + 0x3ac] */ FPUSH(R_F32((u32)(r_edx+0x3acu)));
    /* 0054585f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00545861: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00545863: fadd dword ptr [0x9239f8] */ ST(0) = ST(0) + R_F32((u32)(0x9239f8u));
    /* 00545869: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0054586b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054586d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054586f: fst dword ptr [edx + 0x3ac] */ W_F32((u32)(r_edx+0x3acu), ST(0));
    /* 00545875: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00545878: ja 0x54587c */ if ((!fC&&!fZ)) goto L_0054587c;
L_0054587a:; BB(0x0054587a);
    /* 0054587a: fst st(1) */ ST(1) = ST(0);
L_0054587c:; BB(0x0054587c);
    /* 0054587c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054587e: fstp dword ptr [edx + 0x3a8] */ W_F32((u32)(r_edx+0x3a8u), ST(0)); FPOP();
    /* 00545884: fcomp dword ptr [ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4u))); FPOP();
    /* 00545887: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545889: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054588a: jb 0x5458a7 */ if (fC) goto L_005458a7;
L_0054588c:; BB(0x0054588c);
    /* 0054588c: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00545892: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 0054589c: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005458a1: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
L_005458a7:; BB(0x005458a7);
    /* 005458a7: mov ecx, edx */ r_ecx = r_edx;
    /* 005458a9: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 005458ac: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005458af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005458b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b5: push 0x1f3 */ { u32 v = 0x1f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005458ba: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5458bfu); f_008144b0();
    /* 005458bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005458c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458c5: mov eax, dword ptr [eax + 0x3b4] */ r_eax = R32((u32)(r_eax+0x3b4u));
    /* 005458cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005458cd: jle 0x545907 */ if ((fZ||fS!=fO)) goto L_00545907;
L_005458cf:; BB(0x005458cf);
    /* 005458cf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458d2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005458d5: mov dword ptr [edx + 0x3b4], eax */ W32((u32)(r_edx+0x3b4u), r_eax);
    /* 005458db: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005458e1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005458e4: test ecx, 0x300000 */ {  u32 a = r_ecx; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005458ea: je 0x545907 */ if (fZ) goto L_00545907;
L_005458ec:; BB(0x005458ec);
    /* 005458ec: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 005458f2: mov dword ptr [edx + 0x3b4], 5 */ W32((u32)(r_edx+0x3b4u), 0x5u);
    /* 005458fc: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545901: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
L_00545907:; BB(0x00545907);
    /* 00545907: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0054590c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054590e: jne 0x545a10 */ if (!fZ) goto L_00545a10;
L_00545914:; BB(0x00545914);
    /* 00545914: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 0054591a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054591d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00545920: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545926: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 0054592c: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 00545936: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545940: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00545942: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00545945: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 0054594f: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545959: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 00545963: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 0054596d: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 00545977: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_00545981:; BB(0x00545981);
    /* 00545981: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545984: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 0054598b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054598e: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545991: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 00545998: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054599b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054599d: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 005459a3: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 005459a9: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005459b3: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005459b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5459bau); f_005caba4();
    /* 005459ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005459bb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005459c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005459c3: je 0x5459f7 */ if (fZ) goto L_005459f7;
L_005459c5:; BB(0x005459c5);
    /* 005459c5: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 005459cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005459d6: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 005459dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005459de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005459e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005459e2: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005459e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005459e8: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x5459edu); f_00546908();
    /* 005459ed: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005459f7:; BB(0x005459f7);
    /* 005459f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005459fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545a04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00545a07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00545a0a: jl 0x545981 */ if ((fS!=fO)) goto L_00545981;
L_00545a10:; BB(0x00545a10);
    /* 00545a10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a17: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x545a1cu); f_00772b44();
    /* 00545a1c: jmp 0x5457d4 */ goto L_005457d4;
L_00545a21:; BB(0x00545a21);
    /* 00545a21: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00545a27: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a2a: mov esi, dword ptr [ebp - 0xc0] */ r_esi = R32((u32)(r_ebp+0xffffff40u));
    /* 00545a30: mov edi, dword ptr [ebp - 0xbc] */ r_edi = R32((u32)(r_ebp+0xffffff44u));
    /* 00545a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a39: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00545a3c: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 00545a3f: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 00545a42: mov dword ptr [edx + 0x30c], eax */ W32((u32)(r_edx+0x30cu), r_eax);
    /* 00545a48: mov dword ptr [edx + 0x310], esi */ W32((u32)(r_edx+0x310u), r_esi);
    /* 00545a4e: mov dword ptr [edx + 0x314], edi */ W32((u32)(r_edx+0x314u), r_edi);
    /* 00545a54: lea edx, [edx + 0x44] */ r_edx = (u32)(r_edx+0x44u);
    /* 00545a57: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x545a5cu); f_0082f9c4();
    /* 00545a5c: jmp 0x545844 */ goto L_00545844;
}

void f_0054524f(void)
{
    FN_ENTER(0x0054524f);
    /* 0054524f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545250: call 0x84d6e2 */ r_esp -= 4; W32(r_esp, 0x545255u); f_0084d6e2();
    /* 00545255: cmp bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a - b) & 0xffu;   }
    /* 00545258: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
    /* 0054525e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x545263u); f_008587a5();
    /* 00545263: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00545266: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00545269: fdiv dword ptr [0x923a1c] */ ST(0) = ST(0) / R_F32((u32)(0x923a1cu));
    /* 0054526f: fcomp dword ptr [0x923a18] */ fx_compare(ST(0), R_F32((u32)(0x923a18u))); FPOP();
    /* 00545275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545278: jae 0x545281 */ if (!fC) goto L_00545281;
L_0054527a:; BB(0x0054527a);
    /* 0054527a: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0054527f: jmp 0x545286 */ goto L_00545286;
L_00545281:; BB(0x00545281);
    /* 00545281: mov esi, 1 */ r_esi = 0x1u;
L_00545286:; BB(0x00545286);
    /* 00545286: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545289: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054528b: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0054528e: lea edx, [eax + 0x30c] */ r_edx = (u32)(r_eax+0x30cu);
    /* 00545294: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00545297:; BB(0x00545297);
    /* 00545297: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054529a: mov eax, dword ptr [ecx + 0x30c] */ r_eax = R32((u32)(r_ecx+0x30cu));
    /* 005452a0: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 005452a6: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005452ac: mov eax, dword ptr [ecx + 0x314] */ r_eax = R32((u32)(r_ecx+0x314u));
    /* 005452b2: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 005452b8: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005452be:; BB(0x005452be);
    /* 005452be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452c1: lea ecx, [ebp - 0xc4] */ r_ecx = (u32)(r_ebp+0xffffff3cu);
    /* 005452c7: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005452ca: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005452d0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005452d3: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005452d9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005452dc: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005452e2: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 005452e8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5452edu); f_0082ebac();
    /* 005452ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005452f0: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 005452f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005452f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005452f9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5452feu); f_007b4c58();
    /* 005452fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545301: je 0x545a21 */ if (fZ) goto L_00545a21;
L_00545307:; BB(0x00545307);
    /* 00545307: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054530a: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054530d: jge 0x545844 */ if ((fS==fO)) goto L_00545844;
L_00545313:; BB(0x00545313);
    /* 00545313: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545315: je 0x545297 */ if (fZ) goto L_00545297;
L_00545317:; BB(0x00545317);
    /* 00545317: jmp 0x545813 */ goto L_00545813;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054524f); r_esp += 4; return;
L_00545813:; BB(0x00545813);
    /* 00545813: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00545818: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54581du); f_0082d990();
    /* 0054581d: mov edx, edi */ r_edx = r_edi;
    /* 0054581f: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00545822: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545824: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x545829u); f_0082d8bc();
    /* 00545829: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054582c: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 00545832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545833: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545835: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x54583au); f_0082eab8();
    /* 0054583a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54583fu); f_0082da80();
    /* 0054583f: jmp 0x5452be */ goto L_005452be;
L_00545844:; BB(0x00545844);
    /* 00545844: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545847: fld dword ptr [0x9239f4] */ FPUSH(R_F32((u32)(0x9239f4u)));
    /* 0054584d: mov ecx, dword ptr [0xa73824] */ r_ecx = R32((u32)(0xa73824u));
    /* 00545853: fld dword ptr [edx + 0x3a8] */ FPUSH(R_F32((u32)(r_edx+0x3a8u)));
    /* 00545859: fld dword ptr [edx + 0x3ac] */ FPUSH(R_F32((u32)(r_edx+0x3acu)));
    /* 0054585f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00545861: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00545863: fadd dword ptr [0x9239f8] */ ST(0) = ST(0) + R_F32((u32)(0x9239f8u));
    /* 00545869: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0054586b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054586d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054586f: fst dword ptr [edx + 0x3ac] */ W_F32((u32)(r_edx+0x3acu), ST(0));
    /* 00545875: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00545876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00545878: ja 0x54587c */ if ((!fC&&!fZ)) goto L_0054587c;
L_0054587a:; BB(0x0054587a);
    /* 0054587a: fst st(1) */ ST(1) = ST(0);
L_0054587c:; BB(0x0054587c);
    /* 0054587c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054587e: fstp dword ptr [edx + 0x3a8] */ W_F32((u32)(r_edx+0x3a8u), ST(0)); FPOP();
    /* 00545884: fcomp dword ptr [ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4u))); FPOP();
    /* 00545887: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00545889: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054588a: jb 0x5458a7 */ if (fC) goto L_005458a7;
L_0054588c:; BB(0x0054588c);
    /* 0054588c: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00545892: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 0054589c: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005458a1: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
L_005458a7:; BB(0x005458a7);
    /* 005458a7: mov ecx, edx */ r_ecx = r_edx;
    /* 005458a9: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 005458ac: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005458af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005458b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458b5: push 0x1f3 */ { u32 v = 0x1f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005458ba: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5458bfu); f_008144b0();
    /* 005458bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005458c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458c5: mov eax, dword ptr [eax + 0x3b4] */ r_eax = R32((u32)(r_eax+0x3b4u));
    /* 005458cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005458cd: jle 0x545907 */ if ((fZ||fS!=fO)) goto L_00545907;
L_005458cf:; BB(0x005458cf);
    /* 005458cf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458d2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005458d5: mov dword ptr [edx + 0x3b4], eax */ W32((u32)(r_edx+0x3b4u), r_eax);
    /* 005458db: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005458e1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005458e4: test ecx, 0x300000 */ {  u32 a = r_ecx; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005458ea: je 0x545907 */ if (fZ) goto L_00545907;
L_005458ec:; BB(0x005458ec);
    /* 005458ec: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 005458f2: mov dword ptr [edx + 0x3b4], 5 */ W32((u32)(r_edx+0x3b4u), 0x5u);
    /* 005458fc: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545901: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
L_00545907:; BB(0x00545907);
    /* 00545907: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0054590c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054590e: jne 0x545a10 */ if (!fZ) goto L_00545a10;
L_00545914:; BB(0x00545914);
    /* 00545914: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 0054591a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054591d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00545920: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545926: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 0054592c: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 00545936: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545940: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00545942: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00545945: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 0054594f: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545959: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 00545963: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 0054596d: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 00545977: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_00545981:; BB(0x00545981);
    /* 00545981: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545984: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 0054598b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054598e: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545991: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 00545998: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054599b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054599d: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 005459a3: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 005459a9: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005459b3: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005459b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5459bau); f_005caba4();
    /* 005459ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005459bb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005459c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005459c3: je 0x5459f7 */ if (fZ) goto L_005459f7;
L_005459c5:; BB(0x005459c5);
    /* 005459c5: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 005459cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005459d6: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 005459dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005459de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005459e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005459e2: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005459e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005459e8: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x5459edu); f_00546908();
    /* 005459ed: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005459f7:; BB(0x005459f7);
    /* 005459f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005459fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545a04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00545a07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00545a0a: jl 0x545981 */ if ((fS!=fO)) goto L_00545981;
L_00545a10:; BB(0x00545a10);
    /* 00545a10: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a17: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x545a1cu); f_00772b44();
    /* 00545a1c: jmp 0x5457d4 */ goto L_005457d4;
L_00545a21:; BB(0x00545a21);
    /* 00545a21: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00545a27: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545a2a: mov esi, dword ptr [ebp - 0xc0] */ r_esi = R32((u32)(r_ebp+0xffffff40u));
    /* 00545a30: mov edi, dword ptr [ebp - 0xbc] */ r_edi = R32((u32)(r_ebp+0xffffff44u));
    /* 00545a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545a39: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00545a3c: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 00545a3f: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 00545a42: mov dword ptr [edx + 0x30c], eax */ W32((u32)(r_edx+0x30cu), r_eax);
    /* 00545a48: mov dword ptr [edx + 0x310], esi */ W32((u32)(r_edx+0x310u), r_esi);
    /* 00545a4e: mov dword ptr [edx + 0x314], edi */ W32((u32)(r_edx+0x314u), r_edi);
    /* 00545a54: lea edx, [edx + 0x44] */ r_edx = (u32)(r_edx+0x44u);
    /* 00545a57: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x545a5cu); f_0082f9c4();
    /* 00545a5c: jmp 0x545844 */ goto L_00545844;
}

void f_0054531c(void)
{
    FN_ENTER(0x0054531c);
    /* 0054531c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054531f: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00545326: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00545329: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0054532f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00545332: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00545335: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00545338: mov edi, dword ptr [ecx + 0xa4] */ r_edi = R32((u32)(r_ecx+0xa4u));
    /* 0054533e: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 00545341: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00545344: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 00545347: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54534cu); f_007aa094();
    /* 0054534c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054534f: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 00545355: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054531c); r_esp += 4; return;
}

void f_00545341(void)
{
    FN_ENTER(0x00545341);
    /* 00545341: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00545344: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 00545347: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54534cu); f_007aa094();
    /* 0054534c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054534f: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 00545355: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545341); r_esp += 4; return;
}

void f_00545345(void)
{
    FN_ENTER(0x00545345);
    /* 00545345: ja 0x54535f */ if ((!fC&&!fZ)) UNSUP(0x00545345, "branch to code that was not decoded");
L_00545347:; BB(0x00545347);
    /* 00545347: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54534cu); f_007aa094();
    /* 0054534c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054534f: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 00545355: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545345); r_esp += 4; return;
}

void f_0054534f(void)
{
    FN_ENTER(0x0054534f);
    /* 0054534f: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 00545355: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054534f); r_esp += 4; return;
}

void f_00545350(void)
{
    FN_ENTER(0x00545350);
    /* 00545350: mov byte ptr [eax - 0x8fffffd], dl */ W8((u32)(r_eax+0xf7000003u), (u8)r_edx);
    /* 00545356: rol dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 00545359: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545350); r_esp += 4; return;
}

void f_00545352(void)
{
    FN_ENTER(0x00545352);
    /* 00545352: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545354: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00545356: rol dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R32(ad); u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } W32(ad, r);  } }
    /* 00545359: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0054535b: je 0x5453b8 */ if (fZ) goto L_005453b8;
L_0054535d:; BB(0x0054535d);
    /* 0054535d: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545363: or ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545369: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054536f: je 0x545392 */ if (fZ) goto L_00545392;
L_00545371:; BB(0x00545371);
    /* 00545371: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0054537b: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545381: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00545387: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0054538a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054538d: jmp 0x5457d4 */ goto L_005457d4;
L_00545392:; BB(0x00545392);
    /* 00545392: mov edx, eax */ r_edx = r_eax;
    /* 00545394: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 0054539e: mov dword ptr [edx + 0x390], ecx */ W32((u32)(r_edx+0x390u), r_ecx);
    /* 005453a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005453a6: mov word ptr [edx + 0x3a0], ax */ W16((u32)(r_edx+0x3a0u), (u16)r_eax);
    /* 005453ad: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005453b0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005453b3: jmp 0x5457d4 */ goto L_005457d4;
L_005453b8:; BB(0x005453b8);
    /* 005453b8: and ecx, 0xfff7ffff */ {  u32 a = r_ecx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005453be: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005453c4: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453ca: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545352); r_esp += 4; return;
}

void f_005453cf(void)
{
    FN_ENTER(0x005453cf);
    /* 005453cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005453d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005453d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005453d6: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005453d9: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5453deu); f_00772b44();
    /* 005453de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005453e1: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 005453e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005453ea: jne 0x545401 */ if (!fZ) goto L_00545401;
L_005453ec:; BB(0x005453ec);
    /* 005453ec: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 005453f6: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005453f9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005453fc: jmp 0x5457d4 */ goto L_005457d4;
L_00545401:; BB(0x00545401);
    /* 00545401: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545404: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545407: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x005453cf); r_esp += 4; return;
}

void f_0054540c(void)
{
    FN_ENTER(0x0054540c);
    /* 0054540c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054540f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545411: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545413: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00545416: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54541bu); f_00772b44();
    /* 0054541b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054541e: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00545421: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00545424: add ecx, 0xfffff000 */ {  u32 a = r_ecx; u32 b = 0xfffff000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054542a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054542c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054542e: jg 0x545432 */ if ((!fZ&&fS==fO)) goto L_00545432;
L_00545430:; BB(0x00545430);
    /* 00545430: mov ecx, eax */ r_ecx = r_eax;
L_00545432:; BB(0x00545432);
    /* 00545432: test esi, 0x800000 */ {  u32 a = r_esi; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545438: jne 0x54544a */ if (!fZ) goto L_0054544a;
L_0054543a:; BB(0x0054543a);
    /* 0054543a: mov eax, edx */ r_eax = r_edx;
    /* 0054543c: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0054543f: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545442: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545445: jmp 0x5457d4 */ goto L_005457d4;
L_0054544a:; BB(0x0054544a);
    /* 0054544a: mov eax, edx */ r_eax = r_edx;
    /* 0054544c: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545452: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 00545459: mov edx, 2 */ r_edx = 0x2u;
    /* 0054545e: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 00545465: mov dword ptr [eax + 0x384], edx */ W32((u32)(r_eax+0x384u), r_edx);
    /* 0054546b: and esi, 0xfbfbffff */ {  u32 a = r_esi; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00545471: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00545474: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 0054547a: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0054547d: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545480: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00545483: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00545489: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0054548c: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0054548f: mov dword ptr [edx + 0x18], edi */ W32((u32)(r_edx+0x18u), r_edi);
    /* 00545492: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00545495: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 0054549b: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 005454a5: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 005454a8: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 005454b2: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 005454bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005454be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005454c1: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 005454cb: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 005454d5: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005454df: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005454e9: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005454f3:; BB(0x005454f3);
    /* 005454f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005454f6: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005454fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545500: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545503: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 0054550a: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054550d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054550f: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00545515: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00545518: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0054551f: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545521: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545526u); f_005caba4();
    /* 00545526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545527: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0054552a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054552c: je 0x54555a */ if (fZ) goto L_0054555a;
L_0054552e:; BB(0x0054552e);
    /* 0054552e: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 00545535: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054553c: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 00545542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545544: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545546: mov ecx, eax */ r_ecx = r_eax;
    /* 00545548: push 0x400ccccd */ { u32 v = 0x400ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054554d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054554e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545553u); f_00546908();
    /* 00545553: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0054555a:; BB(0x0054555a);
    /* 0054555a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545561: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545564: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545567: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054556a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054556d: jl 0x5454f3 */ if ((fS!=fO)) goto L_005454f3;
L_0054556f:; BB(0x0054556f);
    /* 0054556f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545575: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545578: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054557b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545581: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00545584: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054558e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545598: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054559a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054559d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 005455a7: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 005455b1: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 005455bb: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005455c5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005455cf: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005455d9:; BB(0x005455d9);
    /* 005455d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005455dc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005455e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005455e6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005455e9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005455f0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005455f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005455f5: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 005455f8: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 005455fb: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00545602: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545604: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545609u); f_005caba4();
    /* 00545609: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054560a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0054560d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054560f: je 0x54563a */ if (fZ) goto L_0054563a;
L_00545611:; BB(0x00545611);
    /* 00545611: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00545618: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054561f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00545622: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00545624: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545626: mov ecx, eax */ r_ecx = r_eax;
    /* 00545628: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054562d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054562e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545633u); f_00546908();
    /* 00545633: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0054563a:; BB(0x0054563a);
    /* 0054563a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545641: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545644: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545647: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054564a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054564d: jl 0x5455d9 */ if ((fS!=fO)) goto L_005455d9;
L_0054564f:; BB(0x0054564f);
    /* 0054564f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545655: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545658: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054565b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545661: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00545664: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054566e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545678: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054567a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054567d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 00545687: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545691: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 0054569b: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005456a5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005456af: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005456b9:; BB(0x005456b9);
    /* 005456b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005456bc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005456c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005456c6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005456c9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005456d0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005456d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005456d5: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005456d8: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 005456db: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005456e2: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005456e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5456e9u); f_005caba4();
    /* 005456e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005456ea: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005456ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005456ef: je 0x54571a */ if (fZ) goto L_0054571a;
L_005456f1:; BB(0x005456f1);
    /* 005456f1: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005456f8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005456ff: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00545702: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00545704: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545706: mov ecx, eax */ r_ecx = r_eax;
    /* 00545708: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0054570d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054570e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545713u); f_00546908();
    /* 00545713: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0054571a:; BB(0x0054571a);
    /* 0054571a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545721: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545727: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054572a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054572d: jl 0x5456b9 */ if ((fS!=fO)) goto L_005456b9;
L_0054572f:; BB(0x0054572f);
    /* 0054572f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545732: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545735: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545738: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054540c); r_esp += 4; return;
}

void f_00545541(void)
{
    FN_ENTER(0x00545541);
    /* 00545541: jmp ptr [edx] */ { u32 t = R32((u32)(r_edx)); jmp_ind(t); return; }
}

void f_00545543(void)
{
    FN_ENTER(0x00545543);
    goto L_00545543;
L_005454f3:; BB(0x005454f3);
    /* 005454f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005454f6: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005454fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545500: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545503: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 0054550a: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054550d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054550f: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00545515: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00545518: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0054551f: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545521: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545526u); f_005caba4();
    /* 00545526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545527: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0054552a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054552c: je 0x54555a */ if (fZ) goto L_0054555a;
L_0054552e:; BB(0x0054552e);
    /* 0054552e: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 00545535: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054553c: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 00545542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
L_00545543:; BB(0x00545543);
    /* 00545543: add byte ptr [edx + 0xf], ch */ { u32 ad = (u32)(r_edx+0xfu);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00545544: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545546: mov ecx, eax */ r_ecx = r_eax;
    /* 00545548: push 0x400ccccd */ { u32 v = 0x400ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054554d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054554e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545553u); f_00546908();
    /* 00545553: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0054555a:; BB(0x0054555a);
    /* 0054555a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545561: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545564: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545567: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054556a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054556d: jl 0x5454f3 */ if ((fS!=fO)) goto L_005454f3;
L_0054556f:; BB(0x0054556f);
    /* 0054556f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545575: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545578: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054557b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545581: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00545584: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054558e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545598: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054559a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054559d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 005455a7: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 005455b1: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 005455bb: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005455c5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005455cf: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005455d9:; BB(0x005455d9);
    /* 005455d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005455dc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005455e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005455e6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005455e9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005455f0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005455f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005455f5: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 005455f8: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 005455fb: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00545602: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545604: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545609u); f_005caba4();
    /* 00545609: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054560a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0054560d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054560f: je 0x54563a */ if (fZ) goto L_0054563a;
L_00545611:; BB(0x00545611);
    /* 00545611: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00545618: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054561f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00545622: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00545624: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545626: mov ecx, eax */ r_ecx = r_eax;
    /* 00545628: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054562d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054562e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545633u); f_00546908();
    /* 00545633: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0054563a:; BB(0x0054563a);
    /* 0054563a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545641: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545644: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545647: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054564a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054564d: jl 0x5455d9 */ if ((fS!=fO)) goto L_005455d9;
L_0054564f:; BB(0x0054564f);
    /* 0054564f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545655: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545658: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054565b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545661: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00545664: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054566e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545678: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054567a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054567d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 00545687: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545691: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 0054569b: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005456a5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005456af: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005456b9:; BB(0x005456b9);
    /* 005456b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005456bc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005456c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005456c6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005456c9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005456d0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005456d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005456d5: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005456d8: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 005456db: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005456e2: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005456e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5456e9u); f_005caba4();
    /* 005456e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005456ea: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005456ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005456ef: je 0x54571a */ if (fZ) goto L_0054571a;
L_005456f1:; BB(0x005456f1);
    /* 005456f1: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005456f8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005456ff: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00545702: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00545704: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545706: mov ecx, eax */ r_ecx = r_eax;
    /* 00545708: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0054570d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054570e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545713u); f_00546908();
    /* 00545713: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0054571a:; BB(0x0054571a);
    /* 0054571a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545721: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545727: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054572a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054572d: jl 0x5456b9 */ if ((fS!=fO)) goto L_005456b9;
L_0054572f:; BB(0x0054572f);
    /* 0054572f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545732: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545735: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545738: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00545543); r_esp += 4; return;
}

void f_0054554f(void)
{
    FN_ENTER(0x0054554f);
    goto L_0054554f;
L_005454f3:; BB(0x005454f3);
    /* 005454f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005454f6: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005454fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545500: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00545503: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 0054550a: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 0054550d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054550f: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00545515: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00545518: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0054551f: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545521: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545526u); f_005caba4();
    /* 00545526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545527: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0054552a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054552c: je 0x54555a */ if (fZ) goto L_0054555a;
L_0054552e:; BB(0x0054552e);
    /* 0054552e: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 00545535: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054553c: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 00545542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545544: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545546: mov ecx, eax */ r_ecx = r_eax;
    /* 00545548: push 0x400ccccd */ { u32 v = 0x400ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054554d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054554e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545553u); f_00546908();
L_0054554f:; BB(0x0054554f);
    /* 0054554f: mov ch, 0x13 */ r_ecx = (r_ecx & 0xffff00ffu) | (((0x13u) & 0xffu) << 8);
    /* 00545551: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00545553: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0054555a:; BB(0x0054555a);
    /* 0054555a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545561: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545564: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545567: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054556a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054556d: jl 0x5454f3 */ if ((fS!=fO)) goto L_005454f3;
L_0054556f:; BB(0x0054556f);
    /* 0054556f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545575: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545578: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054557b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545581: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00545584: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054558e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545598: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054559a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054559d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 005455a7: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 005455b1: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 005455bb: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005455c5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005455cf: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005455d9:; BB(0x005455d9);
    /* 005455d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005455dc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005455e3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005455e6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005455e9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005455f0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005455f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005455f5: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 005455f8: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 005455fb: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00545602: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00545604: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545609u); f_005caba4();
    /* 00545609: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054560a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0054560d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054560f: je 0x54563a */ if (fZ) goto L_0054563a;
L_00545611:; BB(0x00545611);
    /* 00545611: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00545618: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054561f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00545622: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00545624: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545626: mov ecx, eax */ r_ecx = r_eax;
    /* 00545628: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054562d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054562e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545633u); f_00546908();
    /* 00545633: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0054563a:; BB(0x0054563a);
    /* 0054563a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545641: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545644: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545647: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054564a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054564d: jl 0x5455d9 */ if ((fS!=fO)) goto L_005455d9;
L_0054564f:; BB(0x0054564f);
    /* 0054564f: fld dword ptr [0x923a10] */ FPUSH(R_F32((u32)(0x923a10u)));
    /* 00545655: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545658: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0054565b: fadd dword ptr [eax + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x394u));
    /* 00545661: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00545664: mov dword ptr [ebp - 0xb8], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff48u), 0xc0e00000u);
    /* 0054566e: mov dword ptr [ebp - 0xb4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff4cu), 0xc0e00000u);
    /* 00545678: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054567a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054567d: mov dword ptr [ebp - 0xb0], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff50u), 0xc0e00000u);
    /* 00545687: mov dword ptr [ebp - 0xac], 0x40e00000 */ W32((u32)(r_ebp+0xffffff54u), 0x40e00000u);
    /* 00545691: mov dword ptr [ebp - 0xa8], 0x40e00000 */ W32((u32)(r_ebp+0xffffff58u), 0x40e00000u);
    /* 0054569b: mov dword ptr [ebp - 0xa4], 0xc0e00000 */ W32((u32)(r_ebp+0xffffff5cu), 0xc0e00000u);
    /* 005456a5: mov dword ptr [ebp - 0xa0], 0x40e00000 */ W32((u32)(r_ebp+0xffffff60u), 0x40e00000u);
    /* 005456af: mov dword ptr [ebp - 0x9c], 0x40e00000 */ W32((u32)(r_ebp+0xffffff64u), 0x40e00000u);
L_005456b9:; BB(0x005456b9);
    /* 005456b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005456bc: fld dword ptr [ebp + eax*8 - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff48u)));
    /* 005456c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005456c6: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 005456c9: fld dword ptr [ebp + eax*8 - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*8+0xffffff4cu)));
    /* 005456d0: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 005456d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005456d5: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005456d8: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 005456db: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005456e2: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005456e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5456e9u); f_005caba4();
    /* 005456e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005456ea: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005456ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005456ef: je 0x54571a */ if (fZ) goto L_0054571a;
L_005456f1:; BB(0x005456f1);
    /* 005456f1: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005456f8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005456ff: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00545702: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00545704: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545706: mov ecx, eax */ r_ecx = r_eax;
    /* 00545708: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0054570d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054570e: call 0x546908 */ r_esp -= 4; W32(r_esp, 0x545713u); f_00546908();
    /* 00545713: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0054571a:; BB(0x0054571a);
    /* 0054571a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545721: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00545727: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054572a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054572d: jl 0x5456b9 */ if ((fS!=fO)) goto L_005456b9;
L_0054572f:; BB(0x0054572f);
    /* 0054572f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545732: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545735: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00545738: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054554f); r_esp += 4; return;
}

void f_0054573d(void)
{
    FN_ENTER(0x0054573d);
    /* 0054573d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545740: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 00545746: and ecx, 0xffdfffff */ {  u32 a = r_ecx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0054574c: or ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00545752: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545758: je 0x545799 */ if (fZ) goto L_00545799;
L_0054575a:; BB(0x0054575a);
    /* 0054575a: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
    /* 00545764: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00545767: and ecx, 0xfffcffff */ {  u32 a = r_ecx; u32 b = 0xfffcffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0054576d: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 00545777: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 0054577d: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00545780: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 0054578a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054578d: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 00545797: jmp 0x5457d4 */ goto L_005457d4;
L_00545799:; BB(0x00545799);
    /* 00545799: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 005457a3: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 005457a9: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005457af: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005457b2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005457b5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005457b8: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x0054573d); r_esp += 4; return;
}

void f_005457ba(void)
{
    FN_ENTER(0x005457ba);
    /* 005457ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457bd: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005457c0: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005457c3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005457c6: jmp 0x5457d4 */ goto L_005457d4;
L_005457d4:; BB(0x005457d4);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x005457ba); r_esp += 4; return;
}

void f_00545a64(void) /* sub_545A64 */
{
    FN_ENTER(0x00545a64);
    /* 00545a64: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 00545a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00545a6c: je 0x545a6f */ if (fZ) goto L_00545a6f;
L_00545a6e:; BB(0x00545a6e);
    /* 00545a6e: ret  */ FN_RET(0x00545a64); r_esp += 4; return;
L_00545a6f:; BB(0x00545a6f);
    /* 00545a6f: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00545a75: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545a7a: je 0x545a9b */ if (fZ) goto L_00545a9b;
L_00545a7c:; BB(0x00545a7c);
    /* 00545a7c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00545a7f: mov dword ptr [ecx + 0x64], 0x8000 */ W32((u32)(r_ecx+0x64u), 0x8000u);
    /* 00545a86: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00545a8c: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 00545a96: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00545a99: jmp 0x545aae */ goto L_00545aae;
L_00545a9b:; BB(0x00545a9b);
    /* 00545a9b: mov dword ptr [ecx + 0x384], 2 */ W32((u32)(r_ecx+0x384u), 0x2u);
    /* 00545aa5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00545aa7: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_00545aae:; BB(0x00545aae);
    /* 00545aae: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00545ab3: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00545ab9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x545abeu); f_007aa094();
    /* 00545abe: ret  */ FN_RET(0x00545a64); r_esp += 4; return;
}

void f_00545ac0(void) /* sub_545AC0 */
{
    FN_ENTER(0x00545ac0);
    /* 00545ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00545ac1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00545ac2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545ac3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00545ac4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545ac7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00545ac9: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00545acc: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545ad1: je 0x545adb */ if (fZ) goto L_00545adb;
L_00545ad3:; BB(0x00545ad3);
    /* 00545ad3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00545ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545ad8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00545ad9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00545ada: ret  */ FN_RET(0x00545ac0); r_esp += 4; return;
L_00545adb:; BB(0x00545adb);
    /* 00545adb: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ae0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545ae2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00545ae4: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ae9: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00545aee: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x545af1u); call_ind(t); }
    /* 00545af1: mov edi, eax */ r_edi = r_eax;
    /* 00545af3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545af5: je 0x545d07 */ if (fZ) goto L_00545d07;
L_00545afb:; BB(0x00545afb);
    /* 00545afb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00545afc: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x545b01u); f_00794548();
    /* 00545b01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545b02: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x545b07u); f_00578b38();
    /* 00545b07: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00545b0c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x545b11u); f_0082d7b0();
    /* 00545b11: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00545b17: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00545b1a: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00545b1d: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00545b23: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545b26: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00545b2a: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00545b30: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00545b33: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00545b36: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00545b3c: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00545b3f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00545b43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545b45: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x545b4au); f_00830b74();
    /* 00545b4a: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00545b4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545b4f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x545b54u); f_00830c04();
    /* 00545b54: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00545b57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00545b59: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x545b5eu); f_0082d8bc();
    /* 00545b5e: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00545b64: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545b6a: je 0x545bd6 */ if (fZ) goto L_00545bd6;
L_00545b6c:; BB(0x00545b6c);
    /* 00545b6c: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00545b72: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00545b77: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00545b7d: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00545b83: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00545b88: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x545b8du); f_0082d6fc();
    /* 00545b8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545b90: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 00545b96: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x545b9bu); f_0082dcbc();
    /* 00545b9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00545b9c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00545b9f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x545ba4u); f_0082e900();
    /* 00545ba4: fld dword ptr [0x9239e4] */ FPUSH(R_F32((u32)(0x9239e4u)));
    /* 00545baa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00545bac: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00545bb0: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00545bb4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00545bb8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00545bbf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00545bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00545bc3: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x545bc8u); f_0082d710();
    /* 00545bc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545bc9: mov ecx, dword ptr [0xa73834] */ r_ecx = R32((u32)(0xa73834u));
    /* 00545bcf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x545bd4u); f_00829cc8();
    /* 00545bd4: jmp 0x545bde */ goto L_00545bde;
L_00545bd6:; BB(0x00545bd6);
    /* 00545bd6: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00545bd9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x545bdeu); f_00829cc8();
L_00545bde:; BB(0x00545bde);
    /* 00545bde: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00545be4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00545be7: jne 0x545d5c */ if (!fZ) goto L_00545d5c;
L_00545bed:; BB(0x00545bed);
    /* 00545bed: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545bf0: je 0x545d50 */ if (fZ) goto L_00545d50;
L_00545bf6:; BB(0x00545bf6);
    /* 00545bf6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545bf8: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x545bfdu); f_007aa7b8();
L_00545bfd:; BB(0x00545bfd);
    /* 00545bfd: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00545c03: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c09: jne 0x545d32 */ if (!fZ) goto L_00545d32;
L_00545c0f:; BB(0x00545c0f);
    /* 00545c0f: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00545c15: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00545c1b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x545c20u); f_0082da80();
    /* 00545c20: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545c22: call 0x545db4 */ r_esp -= 4; W32(r_esp, 0x545c27u); f_00545db4();
    /* 00545c27: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x545c2cu); f_00794750();
    /* 00545c2c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x545c31u); f_0082dab0();
    /* 00545c31: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c34: je 0x545d0f */ if (fZ) goto L_00545d0f;
L_00545c3a:; BB(0x00545c3a);
    /* 00545c3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00545c3c:; BB(0x00545c3c);
    /* 00545c3c: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 00545c42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c44: je 0x545c60 */ if (fZ) goto L_00545c60;
L_00545c46:; BB(0x00545c46);
    /* 00545c46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c48: je 0x545c56 */ if (fZ) goto L_00545c56;
L_00545c4a:; BB(0x00545c4a);
    /* 00545c4a: mov dword ptr [edx + 0x340], 1 */ W32((u32)(r_edx+0x340u), 0x1u);
    /* 00545c54: jmp 0x545c60 */ goto L_00545c60;
L_00545c56:; BB(0x00545c56);
    /* 00545c56: mov dword ptr [edx + 0x340], 0 */ W32((u32)(r_edx+0x340u), 0x0u);
L_00545c60:; BB(0x00545c60);
    /* 00545c60: mov edx, dword ptr [ebx + 0x3fc] */ r_edx = R32((u32)(r_ebx+0x3fcu));
    /* 00545c66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c68: je 0x545c84 */ if (fZ) goto L_00545c84;
L_00545c6a:; BB(0x00545c6a);
    /* 00545c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c6c: je 0x545c7a */ if (fZ) goto L_00545c7a;
L_00545c6e:; BB(0x00545c6e);
    /* 00545c6e: mov dword ptr [edx + 0x340], 1 */ W32((u32)(r_edx+0x340u), 0x1u);
    /* 00545c78: jmp 0x545c84 */ goto L_00545c84;
L_00545c7a:; BB(0x00545c7a);
    /* 00545c7a: mov dword ptr [edx + 0x340], 0 */ W32((u32)(r_edx+0x340u), 0x0u);
L_00545c84:; BB(0x00545c84);
    /* 00545c84: mov edx, dword ptr [ebx + 0x400] */ r_edx = R32((u32)(r_ebx+0x400u));
    /* 00545c8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c8c: je 0x545ca8 */ if (fZ) goto L_00545ca8;
L_00545c8e:; BB(0x00545c8e);
    /* 00545c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545c90: je 0x545c9e */ if (fZ) goto L_00545c9e;
L_00545c92:; BB(0x00545c92);
    /* 00545c92: mov dword ptr [edx + 0x340], 1 */ W32((u32)(r_edx+0x340u), 0x1u);
    /* 00545c9c: jmp 0x545ca8 */ goto L_00545ca8;
L_00545c9e:; BB(0x00545c9e);
    /* 00545c9e: mov dword ptr [edx + 0x340], 0 */ W32((u32)(r_edx+0x340u), 0x0u);
L_00545ca8:; BB(0x00545ca8);
    /* 00545ca8: mov edx, dword ptr [ebx + 0x404] */ r_edx = R32((u32)(r_ebx+0x404u));
    /* 00545cae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cb0: je 0x545ccc */ if (fZ) goto L_00545ccc;
L_00545cb2:; BB(0x00545cb2);
    /* 00545cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cb4: je 0x545cc2 */ if (fZ) goto L_00545cc2;
L_00545cb6:; BB(0x00545cb6);
    /* 00545cb6: mov dword ptr [edx + 0x340], 1 */ W32((u32)(r_edx+0x340u), 0x1u);
    /* 00545cc0: jmp 0x545ccc */ goto L_00545ccc;
L_00545cc2:; BB(0x00545cc2);
    /* 00545cc2: mov dword ptr [edx + 0x340], 0 */ W32((u32)(r_edx+0x340u), 0x0u);
L_00545ccc:; BB(0x00545ccc);
    /* 00545ccc: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00545ccf: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cd4: jne 0x545d07 */ if (!fZ) goto L_00545d07;
L_00545cd6:; BB(0x00545cd6);
    /* 00545cd6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cd8: je 0x545d07 */ if (fZ) goto L_00545d07;
L_00545cda:; BB(0x00545cda);
    /* 00545cda: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cdf: je 0x545d07 */ if (fZ) goto L_00545d07;
L_00545ce1:; BB(0x00545ce1);
    /* 00545ce1: mov dword ptr [esp + 0x10], 0x3fc00000 */ W32((u32)(r_esp+0x10u), 0x3fc00000u);
    /* 00545ce9: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00545ced: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545cef: mov dword ptr [esp + 0x14], 0x3fc00000 */ W32((u32)(r_esp+0x14u), 0x3fc00000u);
    /* 00545cf7: mov dword ptr [esp + 0x18], 0x3fc00000 */ W32((u32)(r_esp+0x18u), 0x3fc00000u);
    /* 00545cff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545d02: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x545d07u); f_00779d4c();
L_00545d07:; BB(0x00545d07);
    /* 00545d07: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00545d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545d0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545d0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00545d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00545d0e: ret  */ FN_RET(0x00545ac0); r_esp += 4; return;
L_00545d0f:; BB(0x00545d0f);
    /* 00545d0f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00545d15: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d1a: je 0x545c3a */ if (fZ) goto L_00545c3a;
L_00545d20:; BB(0x00545d20);
    /* 00545d20: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00545d23: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00545d25: mov eax, 0 */ r_eax = 0x0u;
    /* 00545d2a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00545d2d: jmp 0x545c3c */ goto L_00545c3c;
L_00545d32:; BB(0x00545d32);
    /* 00545d32: push 0xa737b4 */ { u32 v = 0xa737b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00545d37: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x545d3cu); f_0082d710();
    /* 00545d3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545d3e: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00545d43: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x545d48u); f_0082d6fc();
    /* 00545d48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545d4b: jmp 0x545c0f */ goto L_00545c0f;
L_00545d50:; BB(0x00545d50);
    /* 00545d50: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545d52: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x545d57u); f_007aa668();
    /* 00545d57: jmp 0x545bfd */ goto L_00545bfd;
L_00545d5c:; BB(0x00545d5c);
    /* 00545d5c: mov edx, dword ptr [ebx + 0x410] */ r_edx = R32((u32)(r_ebx+0x410u));
    /* 00545d62: lea esi, [ebx + 0x410] */ r_esi = (u32)(r_ebx+0x410u);
    /* 00545d68: mov ecx, esi */ r_ecx = r_esi;
    /* 00545d6a: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x545d6du); call_ind(t); }
    /* 00545d6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d6f: jne 0x545d78 */ if (!fZ) goto L_00545d78;
L_00545d71:; BB(0x00545d71);
    /* 00545d71: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00545d73: jmp 0x545bfd */ goto L_00545bfd;
L_00545d78:; BB(0x00545d78);
    /* 00545d78: mov edx, dword ptr [ebx + 0x410] */ r_edx = R32((u32)(r_ebx+0x410u));
    /* 00545d7e: mov ecx, esi */ r_ecx = r_esi;
    /* 00545d80: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x545d83u); call_ind(t); }
    /* 00545d83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545d85: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x545d8au); f_008173d0();
    /* 00545d8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d8c: jne 0x545d9a */ if (!fZ) goto L_00545d9a;
L_00545d8e:; BB(0x00545d8e);
    /* 00545d8e: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d91: je 0x545daa */ if (fZ) goto L_00545daa;
L_00545d93:; BB(0x00545d93);
    /* 00545d93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545d95: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x545d9au); f_007aa7b8();
L_00545d9a:; BB(0x00545d9a);
    /* 00545d9a: mov edx, dword ptr [ebx + 0x410] */ r_edx = R32((u32)(r_ebx+0x410u));
    /* 00545da0: mov ecx, esi */ r_ecx = r_esi;
    /* 00545da2: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x545da5u); call_ind(t); }
    /* 00545da5: jmp 0x545bfd */ goto L_00545bfd;
L_00545daa:; BB(0x00545daa);
    /* 00545daa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00545dac: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x545db1u); f_007aa668();
    /* 00545db1: jmp 0x545d9a */ goto L_00545d9a;
}

void f_00545db4(void) /* sub_545DB4 */
{
    FN_ENTER(0x00545db4);
    /* 00545db4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00545db5: mov edi, ecx */ r_edi = r_ecx;
    /* 00545db7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00545dba: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00545dbf: je 0x545dc3 */ if (fZ) goto L_00545dc3;
L_00545dc1:; BB(0x00545dc1);
    /* 00545dc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00545dc2: ret  */ FN_RET(0x00545db4); r_esp += 4; return;
L_00545dc3:; BB(0x00545dc3);
    /* 00545dc3: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00545dc9: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545dce: je 0x545ddd */ if (fZ) goto L_00545ddd;
L_00545dd0:; BB(0x00545dd0);
    /* 00545dd0: mov ecx, dword ptr [0xa73808] */ r_ecx = R32((u32)(0xa73808u));
    /* 00545dd6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x545ddbu); f_00829cc8();
    /* 00545ddb: jmp 0x545de8 */ goto L_00545de8;
L_00545ddd:; BB(0x00545ddd);
    /* 00545ddd: mov ecx, dword ptr [0xa73804] */ r_ecx = R32((u32)(0xa73804u));
    /* 00545de3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x545de8u); f_00829cc8();
L_00545de8:; BB(0x00545de8);
    /* 00545de8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x545dedu); f_0082d7b0();
    /* 00545ded: add edi, 0x3bc */ {  u32 a = r_edi; u32 b = 0x3bcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00545df3: mov ecx, edi */ r_ecx = r_edi;
    /* 00545df5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x545dfau); f_0082d838();
    /* 00545dfa: push dword ptr [0xa7380c] */ { u32 v = R32((u32)(0xa7380cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00545e00: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x545e05u); f_0082e1e8();
    /* 00545e05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545e06: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x545e0bu); f_0082da80();
    /* 00545e0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00545e0c: ret  */ FN_RET(0x00545db4); r_esp += 4; return;
}

void f_00545e10(void)
{
    FN_ENTER(0x00545e10);
    /* 00545e10: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00545e16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545e18: je 0x545e2d */ if (fZ) goto L_00545e2d;
L_00545e1a:; BB(0x00545e1a);
    /* 00545e1a: je 0x545e23 */ if (fZ) goto L_00545e23;
L_00545e1c:; BB(0x00545e1c);
    /* 00545e1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e1e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x545e23u); f_004066a8();
L_00545e23:; BB(0x00545e23);
    /* 00545e23: mov dword ptr [0xa73838], 0 */ W32((u32)(0xa73838u), 0x0u);
L_00545e2d:; BB(0x00545e2d);
    /* 00545e2d: mov eax, dword ptr [0xa73834] */ r_eax = R32((u32)(0xa73834u));
    /* 00545e32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545e34: je 0x545e47 */ if (fZ) goto L_00545e47;
L_00545e36:; BB(0x00545e36);
    /* 00545e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545e37: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x545e3cu); f_00800b5c();
    /* 00545e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545e3d: mov dword ptr [0xa73834], 0 */ W32((u32)(0xa73834u), 0x0u);
L_00545e47:; BB(0x00545e47);
    /* 00545e47: call 0x546bb0 */ r_esp -= 4; W32(r_esp, 0x545e4cu); f_00546bb0();
    /* 00545e4c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x545e51u); f_0061cdb0();
    /* 00545e51: ret  */ FN_RET(0x00545e10); r_esp += 4; return;
}

void f_00545e54(void)
{
    FN_ENTER(0x00545e54);
    /* 00545e54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545e55: mov ebp, esp */ r_ebp = r_esp;
    /* 00545e57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00545e59: push 0x8d594c */ { u32 v = 0x8d594cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545e5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00545e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545e65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00545e6c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545e6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00545e72: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00545e75: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00545e78: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00545e7b: push 0x434 */ { u32 v = 0x434u; r_esp -= 4; W32(r_esp, v); }
    /* 00545e80: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00545e87: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x545e8cu); f_005caba4();
    /* 00545e8c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00545e8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545e92: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00545e95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545e97: je 0x546154 */ if (fZ) goto L_00546154;
L_00545e9d:; BB(0x00545e9d);
    /* 00545e9d: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00545ea4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545eab: mov ecx, eax */ r_ecx = r_eax;
    /* 00545ead: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 00545eb2: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00545eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545eb6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00545eb9: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x545ebeu); f_0052c3fc();
    /* 00545ebe: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00545ec5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00545ec8: mov dword ptr [eax], 0xb03400 */ W32((u32)(r_eax), 0xb03400u);
    /* 00545ece: lea ecx, [eax + 0x410] */ r_ecx = (u32)(r_eax+0x410u);
    /* 00545ed4: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x545ed9u); f_005122f8();
    /* 00545ed9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00545ee0: mov eax, dword ptr [0x9bd0a0] */ r_eax = R32((u32)(0x9bd0a0u));
    /* 00545ee5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545ee8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00545eeb: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00545eed: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00545ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00545ef1: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x545ef7u); call_ind(t); }
    /* 00545ef7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545efa: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x545effu); f_00786bbc();
    /* 00545eff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545f02: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00545f0c: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f0e: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x545f13u); f_00787550();
    /* 00545f13: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00545f16: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00545f19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f1b: mov edx, dword ptr [eax + 0x2e8] */ r_edx = R32((u32)(r_eax+0x2e8u));
    /* 00545f21: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00545f24: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00545f27: mov dword ptr [eax + 0x2e8], edx */ W32((u32)(r_eax+0x2e8u), r_edx);
    /* 00545f2d: movsx esi, word ptr [ebx + 0x3e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x3eu));
    /* 00545f31: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00545f34: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 00545f37: mov dword ptr [eax + 0x374], esi */ W32((u32)(r_eax+0x374u), r_esi);
    /* 00545f3d: mov edi, 0xf */ r_edi = 0xfu;
    /* 00545f42: mov word ptr [eax + 0x342], di */ W16((u32)(r_eax+0x342u), (u16)r_edi);
    /* 00545f49: mov word ptr [eax + 0x344], di */ W16((u32)(r_eax+0x344u), (u16)r_edi);
    /* 00545f50: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00545f53: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00545f56: mov dword ptr [eax + 0x4c], ebx */ W32((u32)(r_eax+0x4cu), r_ebx);
    /* 00545f59: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00545f5c: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00545f5f: mov dword ptr [eax + 0x58], ebx */ W32((u32)(r_eax+0x58u), r_ebx);
    /* 00545f62: mov dword ptr [eax + 0x298], ecx */ W32((u32)(r_eax+0x298u), r_ecx);
    /* 00545f68: mov dword ptr [eax + 0x29c], edx */ W32((u32)(r_eax+0x29cu), r_edx);
    /* 00545f6e: mov dword ptr [eax + 0x2a0], ebx */ W32((u32)(r_eax+0x2a0u), r_ebx);
    /* 00545f74: mov dword ptr [eax + 0x2a4], ecx */ W32((u32)(r_eax+0x2a4u), r_ecx);
    /* 00545f7a: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00545f80: mov dword ptr [eax + 0x2a8], edx */ W32((u32)(r_eax+0x2a8u), r_edx);
    /* 00545f86: mov dword ptr [eax + 0x2ac], ebx */ W32((u32)(r_eax+0x2acu), r_ebx);
    /* 00545f8c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x545f91u); f_005b8610();
    /* 00545f91: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545f94: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00545f9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f9c: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00545f9f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x545fa4u); f_005b8624();
    /* 00545fa4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545fa7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00545faa: mov eax, dword ptr [0xa73838] */ r_eax = R32((u32)(0xa73838u));
    /* 00545faf: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00545fb5: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00545fbb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00545fbd: mov dword ptr [ecx + 0xd8], 0x9bcf60 */ W32((u32)(r_ecx+0xd8u), 0x9bcf60u);
    /* 00545fc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00545fc8: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00545fcf: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x545fd4u); f_007aa4c8();
    /* 00545fd4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545fd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545fd9: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00545fe0: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00545fe7: push 0x9bd0dc */ { u32 v = 0x9bd0dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00545fec: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x545ff1u); f_007b9a88();
    /* 00545ff1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545ff4: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00545ffa: push dword ptr [eax*4 + 0xa73828] */ { u32 v = R32((u32)(r_eax*4+0xa73828u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546001: push dword ptr [eax*4 + 0xa7382c] */ { u32 v = R32((u32)(r_eax*4+0xa7382cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00546008: push dword ptr [eax*4 + 0xa73830] */ { u32 v = R32((u32)(r_eax*4+0xa73830u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054600f: mov dword ptr [ecx + 0x358], 0x9bd0a4 */ W32((u32)(r_ecx+0x358u), 0x9bd0a4u);
    /* 00546019: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x54601eu); f_007868f8();
    /* 0054601e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00546021: call 0x543e7c */ r_esp -= 4; W32(r_esp, 0x546026u); f_00543e7c();
    /* 00546026: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00546029: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00546030: movzx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)R16((u32)(r_ecx+0x2beu));
    /* 00546037: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 0054603e: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 00546045: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 0054604c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x546051u); f_0078730c();
    /* 00546051: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00546054: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00546057: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 0054605d: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00546063: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00546066: mov dword ptr [eax + 0x390], 0x550000 */ W32((u32)(r_eax+0x390u), 0x550000u);
    /* 00546070: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00546072: mov dword ptr [eax + 0x408], edx */ W32((u32)(r_eax+0x408u), r_edx);
    /* 00546078: mov dword ptr [eax + 0x40c], edx */ W32((u32)(r_eax+0x40cu), r_edx);
    /* 0054607e: mov dword ptr [eax + 0x64], 0x8000 */ W32((u32)(r_eax+0x64u), 0x8000u);
    /* 00546085: mov dword ptr [eax + 0x394], 0 */ W32((u32)(r_eax+0x394u), 0x0u);
    /* 0054608f: mov dword ptr [eax + 0x39c], 0 */ W32((u32)(r_eax+0x39cu), 0x0u);
    /* 00546099: mov dword ptr [eax + 0x398], 0 */ W32((u32)(r_eax+0x398u), 0x0u);
    /* 005460a3: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 005460a6: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005460a9: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 005460ac: mov edi, dword ptr [eax + 0xa4] */ r_edi = R32((u32)(r_eax+0xa4u));
    /* 005460b2: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 005460b5: and esi, 0xfffffffd */ {  u32 a = r_esi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005460b8: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 005460bb: mov word ptr [eax + 0x3a6], dx */ W16((u32)(r_eax+0x3a6u), (u16)r_edx);
    /* 005460c2: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005460c8: mov dword ptr [eax + 0x3fc], edx */ W32((u32)(r_eax+0x3fcu), r_edx);
    /* 005460ce: mov dword ptr [eax + 0x400], edx */ W32((u32)(r_eax+0x400u), r_edx);
    /* 005460d4: mov dword ptr [eax + 0x404], edx */ W32((u32)(r_eax+0x404u), r_edx);
    /* 005460da: mov eax, dword ptr [0x92399c] */ r_eax = R32((u32)(0x92399cu));
    /* 005460df: mov edx, dword ptr [0xa73838] */ r_edx = R32((u32)(0xa73838u));
    /* 005460e5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005460e8: movzx eax, word ptr [0x9239a0] */ r_eax = (u32)R16((u32)(0x9239a0u));
    /* 005460ef: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 005460f3: movzx eax, word ptr [0x9239a2] */ r_eax = (u32)R16((u32)(0x9239a2u));
    /* 005460fa: mov word ptr [ebp - 0x26], ax */ W16((u32)(r_ebp+0xffffffdau), (u16)r_eax);
    /* 005460fe: movzx eax, word ptr [0x9239a4] */ r_eax = (u32)R16((u32)(0x9239a4u));
    /* 00546105: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 00546109: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0054610f: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00546115: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00546118: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0054611b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054611c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054611e: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00546123: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00546126: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546129: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0054612b: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x546130u); f_00608470();
    /* 00546130: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00546133: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0054613a:; BB(0x0054613a);
    /* 0054613a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054613d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546140: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00546143: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00546146: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546149: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546150: mov esp, ebp */ r_esp = r_ebp;
    /* 00546152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546153: ret  */ FN_RET(0x00545e54); r_esp += 4; return;
L_00546154:; BB(0x00546154);
    /* 00546154: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546156: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00546159: jmp 0x54613a */ goto L_0054613a;
}

