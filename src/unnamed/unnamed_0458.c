#include "protos.h"

void f_00458010(void) /* sub_458010 */
{
    FN_ENTER(0x00458010);
    /* 00458010: call 0x458018 */ r_esp -= 4; W32(r_esp, 0x458015u); f_00458018();
    /* 00458015: ret  */ FN_RET(0x00458010); r_esp += 4; return;
}

void f_00458018(void) /* sub_458018 */
{
    FN_ENTER(0x00458018);
    /* 00458018: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458019: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045801a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045801b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045801d: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x458022u); f_00578b38();
    /* 00458022: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x458027u); f_0082d7b0();
    /* 00458027: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0045802a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45802fu); f_0082d838();
    /* 0045802f: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00458032: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00458034: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x458039u); f_0082d8bc();
    /* 00458039: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45803eu); f_0082fa9c();
    /* 0045803e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00458040: mov esi, eax */ r_esi = r_eax;
L_00458042:; BB(0x00458042);
    /* 00458042: push dword ptr [esi*4 + 0x9a6414] */ { u32 v = R32((u32)(r_esi*4+0x9a6414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458049: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045804f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x458054u); f_005b8624();
    /* 00458054: mov ecx, eax */ r_ecx = r_eax;
    /* 00458056: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x45805bu); f_00829cc8();
    /* 0045805b: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045805e: jne 0x4580f1 */ if (!fZ) goto L_004580f1;
L_00458064:; BB(0x00458064);
    /* 00458064: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0045806a: push dword ptr [ebx + 0x3c8] */ { u32 v = R32((u32)(r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458070: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00458076: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0045807c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045807e: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x458083u); f_00618a44();
    /* 00458083: mov ecx, dword ptr [ebx + 0x454] */ r_ecx = R32((u32)(r_ebx+0x454u));
    /* 00458089: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x45808eu); f_00588428();
    /* 0045808e: push dword ptr [esi*4 + 0x9a6414] */ { u32 v = R32((u32)(r_esi*4+0x9a6414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458095: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045809b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4580a0u); f_005b8610();
    /* 004580a0: mov edi, eax */ r_edi = r_eax;
    /* 004580a2: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 004580a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004580ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004580b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004580b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004580b4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004580b6: push dword ptr [edx + esi*4 + 0x9a61e8] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x9a61e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004580bd: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4580c2u); f_005b8638();
    /* 004580c2: push dword ptr [ebx + 0x3d8] */ { u32 v = R32((u32)(r_ebx+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004580c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004580c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004580ca: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4580cfu); f_0083046c();
    /* 004580cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004580d2: mov ecx, dword ptr [ebx + 0x454] */ r_ecx = R32((u32)(r_ebx+0x454u));
    /* 004580d8: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x4580ddu); f_00452050();
    /* 004580dd: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004580e3: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004580e9: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004580ef: jmp 0x45814e */ goto L_0045814e;
L_004580f1:; BB(0x004580f1);
    /* 004580f1: push dword ptr [ebx + 0x3fc] */ { u32 v = R32((u32)(r_ebx+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004580f7: push dword ptr [ebx + 0x3f8] */ { u32 v = R32((u32)(r_ebx+0x3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004580fd: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x458102u); f_0048e148();
    /* 00458102: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458105: push dword ptr [esi*4 + 0x9a6414] */ { u32 v = R32((u32)(r_esi*4+0x9a6414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045810c: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00458112: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x458117u); f_005b8610();
    /* 00458117: mov edi, eax */ r_edi = r_eax;
    /* 00458119: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0045811f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00458125: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458127: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458129: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045812b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045812d: push dword ptr [edx + esi*4 + 0x9a61e8] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x9a61e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458134: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x458139u); f_005b8638();
    /* 00458139: push dword ptr [ebx + 0x3d8] */ { u32 v = R32((u32)(r_ebx+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045813f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458141: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x458146u); f_0083046c();
    /* 00458146: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458149: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45814eu); f_0048e364();
L_0045814e:; BB(0x0045814e);
    /* 0045814e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458151: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458154: jl 0x458042 */ if ((fS!=fO)) goto L_00458042;
L_0045815a:; BB(0x0045815a);
    /* 0045815a: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45815fu); f_0082faac();
    /* 0045815f: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 00458169: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45816eu); f_0082da80();
    /* 0045816e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x458173u); f_0082dab0();
    /* 00458173: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00458174: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00458175: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458176: ret  */ FN_RET(0x00458018); r_esp += 4; return;
}

void f_00458178(void) /* sub_458178 */
{
    FN_ENTER(0x00458178);
    /* 00458178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458179: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045817c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045817e: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00458184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458186: jne 0x458219 */ if (!fZ) goto L_00458219;
L_0045818c:; BB(0x0045818c);
    /* 0045818c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045818e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x458193u); f_007751b0();
    /* 00458193: fld dword ptr [0x900218] */ FPUSH(R_F32((u32)(0x900218u)));
    /* 00458199: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045819b: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 004581a1: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 004581a7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004581aa: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004581ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004581b3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004581b7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004581bb: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004581bf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004581c2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004581c6: lea eax, [edx + eax + 0x2000] */ r_eax = (u32)(r_edx+r_eax+0x2000u);
    /* 004581cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004581cf: je 0x458219 */ if (fZ) goto L_00458219;
L_004581d1:; BB(0x004581d1);
    /* 004581d1: sar edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004581d4: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004581d7: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004581da: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004581dd: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581e0: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004581e3: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004581e6: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581e8: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 004581ee: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004581f1: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004581f4: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581f6: mov eax, dword ptr [ebp + 0x3b8] */ r_eax = R32((u32)(r_ebp+0x3b8u));
    /* 004581fc: movzx ebp, word ptr [ebp + 0x3cc] */ r_ebp = (u32)R16((u32)(r_ebp+0x3ccu));
    /* 00458203: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00458206: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00458209: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045820b: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045820e: shl ebp, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00458211: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00458213: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458214: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x458219u); f_0044cf88();
L_00458219:; BB(0x00458219);
    /* 00458219: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045821c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045821d: ret  */ FN_RET(0x00458178); r_esp += 4; return;
}

void f_004581c0(void)
{
    FN_ENTER(0x004581c0);
    /* 004581c0: sub al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004581c2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004581c6: lea eax, [edx + eax + 0x2000] */ r_eax = (u32)(r_edx+r_eax+0x2000u);
    /* 004581cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004581cf: je 0x458219 */ if (fZ) goto L_00458219;
L_004581d1:; BB(0x004581d1);
    /* 004581d1: sar edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004581d4: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004581d7: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004581da: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004581dd: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581e0: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004581e3: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004581e6: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581e8: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 004581ee: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004581f1: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004581f4: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004581f6: mov eax, dword ptr [ebp + 0x3b8] */ r_eax = R32((u32)(r_ebp+0x3b8u));
    /* 004581fc: movzx ebp, word ptr [ebp + 0x3cc] */ r_ebp = (u32)R16((u32)(r_ebp+0x3ccu));
    /* 00458203: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00458206: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00458209: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045820b: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045820e: shl ebp, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00458211: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00458213: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458214: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x458219u); f_0044cf88();
L_00458219:; BB(0x00458219);
    /* 00458219: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045821c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045821d: ret  */ FN_RET(0x004581c0); r_esp += 4; return;
}

void f_00458220(void) /* sub_458220 */
{
    FN_ENTER(0x00458220);
    /* 00458220: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458221: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458224: mov edi, ecx */ r_edi = r_ecx;
    /* 00458226: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 0045822c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045822f: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 00458235: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00458237: jl 0x45823e */ if ((fS!=fO)) goto L_0045823e;
L_00458239:; BB(0x00458239);
    /* 00458239: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045823c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045823d: ret  */ FN_RET(0x00458220); r_esp += 4; return;
L_0045823e:; BB(0x0045823e);
    /* 0045823e: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 00458248: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045824b: lea edx, [edi + 0x43c] */ r_edx = (u32)(r_edi+0x43cu);
    /* 00458251: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00458255: lea eax, [edi + 0x454] */ r_eax = (u32)(r_edi+0x454u);
    /* 0045825b: mov ebp, eax */ r_ebp = r_eax;
    /* 0045825d: mov esi, edx */ r_esi = r_edx;
L_0045825f:; BB(0x0045825f);
    /* 0045825f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00458261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458263: je 0x458272 */ if (fZ) goto L_00458272;
L_00458265:; BB(0x00458265);
    /* 00458265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458266: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45826bu); f_005cdcc0();
    /* 0045826b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045826c: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00458272:; BB(0x00458272);
    /* 00458272: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458275: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458277: ja 0x45825f */ if ((!fC&&!fZ)) goto L_0045825f;
L_00458279:; BB(0x00458279);
    /* 00458279: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045827c: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00458280: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00458286: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458289: je 0x458295 */ if (fZ) goto L_00458295;
L_0045828b:; BB(0x0045828b);
    /* 0045828b: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
L_00458295:; BB(0x00458295);
    /* 00458295: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00458298: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045829f: mov ecx, edi */ r_ecx = r_edi;
    /* 004582a1: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x4582a6u); f_00459158();
    /* 004582a6: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 004582ac: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004582af: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 004582b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004582b8: je 0x4582be */ if (fZ) goto L_004582be;
L_004582ba:; BB(0x004582ba);
    /* 004582ba: mov ecx, edi */ r_ecx = r_edi;
    /* 004582bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4582beu); call_ind(t); }
L_004582be:; BB(0x004582be);
    /* 004582be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004582c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004582c2: ret  */ FN_RET(0x00458220); r_esp += 4; return;
}

void f_004582c4(void) /* sub_4582C4 */
{
    FN_ENTER(0x004582c4);
    /* 004582c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004582c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004582c8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004582ca: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004582cd: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004582d2: je 0x45832f */ if (fZ) goto L_0045832f;
L_004582d4:; BB(0x004582d4);
    /* 004582d4: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 004582da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004582dc: je 0x45832a */ if (fZ) goto L_0045832a;
L_004582de:; BB(0x004582de);
    /* 004582de: mov ecx, dword ptr [ebp + 0x3a8] */ r_ecx = R32((u32)(r_ebp+0x3a8u));
    /* 004582e4: sar ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004582e7: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004582ea: mov eax, ecx */ r_eax = r_ecx;
    /* 004582ec: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004582ef: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004582f2: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004582f5: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004582f7: mov ecx, dword ptr [ebp + 0x3b4] */ r_ecx = R32((u32)(r_ebp+0x3b4u));
    /* 004582fd: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00458300: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00458303: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458305: mov ecx, dword ptr [ebp + 0x3b8] */ r_ecx = R32((u32)(r_ebp+0x3b8u));
    /* 0045830b: movzx ebp, word ptr [ebp + 0x3cc] */ r_ebp = (u32)R16((u32)(r_ebp+0x3ccu));
    /* 00458312: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00458315: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00458318: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045831a: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045831d: shl ebp, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00458320: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458323: mov ecx, edx */ r_ecx = r_edx;
    /* 00458325: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45832au); f_0044cf88();
L_0045832a:; BB(0x0045832a);
    /* 0045832a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045832d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045832e: ret  */ FN_RET(0x004582c4); r_esp += 4; return;
L_0045832f:; BB(0x0045832f);
    /* 0045832f: mov dword ptr [ebp + 0x37c], 9 */ W32((u32)(r_ebp+0x37cu), 0x9u);
    /* 00458339: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045833c: lea edx, [ebp + 0x43c] */ r_edx = (u32)(r_ebp+0x43cu);
    /* 00458342: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00458346: lea eax, [ebp + 0x454] */ r_eax = (u32)(r_ebp+0x454u);
    /* 0045834c: mov esi, eax */ r_esi = r_eax;
    /* 0045834e: mov edi, edx */ r_edi = r_edx;
L_00458350:; BB(0x00458350);
    /* 00458350: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00458352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458354: je 0x458363 */ if (fZ) goto L_00458363;
L_00458356:; BB(0x00458356);
    /* 00458356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458357: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45835cu); f_005cdcc0();
    /* 0045835c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045835d: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00458363:; BB(0x00458363);
    /* 00458363: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458366: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458368: ja 0x458350 */ if ((!fC&&!fZ)) goto L_00458350;
L_0045836a:; BB(0x0045836a);
    /* 0045836a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045836d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00458371: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458377: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045837a: je 0x458386 */ if (fZ) goto L_00458386;
L_0045837c:; BB(0x0045837c);
    /* 0045837c: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_00458386:; BB(0x00458386);
    /* 00458386: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00458389: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458390: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458392: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458397u); f_00459158();
    /* 00458397: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045839d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004583a0: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 004583a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004583a9: je 0x4583af */ if (fZ) goto L_004583af;
L_004583ab:; BB(0x004583ab);
    /* 004583ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004583ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4583afu); call_ind(t); }
L_004583af:; BB(0x004583af);
    /* 004583af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004583b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004583b3: ret  */ FN_RET(0x004582c4); r_esp += 4; return;
}

void f_004583b4(void) /* sub_4583B4 */
{
    FN_ENTER(0x004583b4);
    /* 004583b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004583b5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004583b8: mov edi, ecx */ r_edi = r_ecx;
    /* 004583ba: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 004583c0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004583c3: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 004583c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004583cb: jl 0x4583d2 */ if ((fS!=fO)) goto L_004583d2;
L_004583cd:; BB(0x004583cd);
    /* 004583cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004583d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004583d1: ret  */ FN_RET(0x004583b4); r_esp += 4; return;
L_004583d2:; BB(0x004583d2);
    /* 004583d2: mov dword ptr [edi + 0x37c], 2 */ W32((u32)(r_edi+0x37cu), 0x2u);
    /* 004583dc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004583df: lea edx, [edi + 0x43c] */ r_edx = (u32)(r_edi+0x43cu);
    /* 004583e5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004583e9: lea eax, [edi + 0x454] */ r_eax = (u32)(r_edi+0x454u);
    /* 004583ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004583f1: mov esi, edx */ r_esi = r_edx;
L_004583f3:; BB(0x004583f3);
    /* 004583f3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004583f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004583f7: je 0x458406 */ if (fZ) goto L_00458406;
L_004583f9:; BB(0x004583f9);
    /* 004583f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004583fa: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4583ffu); f_005cdcc0();
    /* 004583ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458400: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00458406:; BB(0x00458406);
    /* 00458406: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458409: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045840b: ja 0x4583f3 */ if ((!fC&&!fZ)) goto L_004583f3;
L_0045840d:; BB(0x0045840d);
    /* 0045840d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00458410: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00458414: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0045841a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045841d: je 0x458429 */ if (fZ) goto L_00458429;
L_0045841f:; BB(0x0045841f);
    /* 0045841f: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
L_00458429:; BB(0x00458429);
    /* 00458429: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0045842c: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458433: mov ecx, edi */ r_ecx = r_edi;
    /* 00458435: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x45843au); f_00459158();
    /* 0045843a: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00458440: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00458443: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 0045844a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045844c: je 0x458452 */ if (fZ) goto L_00458452;
L_0045844e:; BB(0x0045844e);
    /* 0045844e: mov ecx, edi */ r_ecx = r_edi;
    /* 00458450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458452u); call_ind(t); }
L_00458452:; BB(0x00458452);
    /* 00458452: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00458455: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458456: ret  */ FN_RET(0x004583b4); r_esp += 4; return;
}

void f_00458458(void)
{
    FN_ENTER(0x00458458);
    /* 00458458: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0045845e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00458460: je 0x458463 */ if (fZ) goto L_00458463;
L_00458462:; BB(0x00458462);
    /* 00458462: ret  */ FN_RET(0x00458458); r_esp += 4; return;
L_00458463:; BB(0x00458463);
    /* 00458463: call 0x45a3d4 */ r_esp -= 4; W32(r_esp, 0x458468u); f_0045a3d4();
    /* 00458468: ret  */ FN_RET(0x00458458); r_esp += 4; return;
}

void f_0045846c(void)
{
    FN_ENTER(0x0045846c);
    /* 0045846c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045846d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045846f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00458471: push 0x8cf37a */ { u32 v = 0x8cf37au; r_esp -= 4; W32(r_esp, v); }
    /* 00458476: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045847c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045847d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00458484: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00458487: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045848a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0045848d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00458490: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00458493: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 00458499: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045849c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045849f: jg 0x4584af */ if ((!fZ&&fS==fO)) goto L_004584af;
L_004584a1:; BB(0x004584a1);
    /* 004584a1: mov eax, ecx */ r_eax = r_ecx;
    /* 004584a3: mov dword ptr [eax + 0x3a4], 0x3f800000 */ W32((u32)(r_eax+0x3a4u), 0x3f800000u);
    /* 004584ad: jmp 0x4584d8 */ goto L_004584d8;
L_004584af:; BB(0x004584af);
    /* 004584af: fild dword ptr [ecx + 0x428] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x428u)));
    /* 004584b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004584b6: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004584b9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004584bc: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004584bf: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004584c1: fsubr dword ptr [0x900214] */ ST(0) = R_F32((u32)(0x900214u)) - ST(0);
    /* 004584c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004584ca: call 0x45878c */ r_esp -= 4; W32(r_esp, 0x4584cfu); f_0045878c();
    /* 004584cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004584d2: fstp dword ptr [eax + 0x3a4] */ W_F32((u32)(r_eax+0x3a4u), ST(0)); FPOP();
L_004584d8:; BB(0x004584d8);
    /* 004584d8: mov ecx, eax */ r_ecx = r_eax;
    /* 004584da: call 0x4587d4 */ r_esp -= 4; W32(r_esp, 0x4584dfu); f_004587d4();
    /* 004584df: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004584e4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004584e7: je 0x4585b6 */ if (fZ) goto L_004585b6;
L_004584ed:; BB(0x004584ed);
    /* 004584ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004584f0: mov ebx, dword ptr [eax + 0x3a0] */ r_ebx = R32((u32)(r_eax+0x3a0u));
L_004584f6:; BB(0x004584f6);
    /* 004584f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004584f9: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004584fc: mov dword ptr [eax + 0x3a0], ebx */ W32((u32)(r_eax+0x3a0u), r_ebx);
    /* 00458502: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00458504: jl 0x45851d */ if ((fS!=fO)) goto L_0045851d;
L_00458506:; BB(0x00458506);
    /* 00458506: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00458509: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045850c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045850f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458512: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00458519: mov esp, ebp */ r_esp = r_ebp;
    /* 0045851b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045851c: ret  */ FN_RET(0x0045846c); r_esp += 4; return;
L_0045851d:; BB(0x0045851d);
    /* 0045851d: mov dword ptr [eax + 0x37c], 1 */ W32((u32)(r_eax+0x37cu), 0x1u);
    /* 00458527: mov esi, 2 */ r_esi = 0x2u;
L_0045852c:; BB(0x0045852c);
    /* 0045852c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045852f: mov eax, dword ptr [eax + esi*4 + 0x434] */ r_eax = R32((u32)(r_eax+r_esi*4+0x434u));
    /* 00458536: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00458539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045853b: je 0x458552 */ if (fZ) goto L_00458552;
L_0045853d:; BB(0x0045853d);
    /* 0045853d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045853e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458543u); f_005cdcc0();
    /* 00458543: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458544: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00458547: mov dword ptr [eax + ebx*2 + 0x434], 0 */ W32((u32)(r_eax+r_ebx*2+0x434u), 0x0u);
L_00458552:; BB(0x00458552);
    /* 00458552: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458555: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458558: jl 0x45852c */ if ((fS!=fO)) goto L_0045852c;
L_0045855a:; BB(0x0045855a);
    /* 0045855a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045855d: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00458563: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458566: je 0x458572 */ if (fZ) goto L_00458572;
L_00458568:; BB(0x00458568);
    /* 00458568: mov dword ptr [eax + 0x3e8], 0 */ W32((u32)(r_eax+0x3e8u), 0x0u);
L_00458572:; BB(0x00458572);
    /* 00458572: mov ecx, eax */ r_ecx = r_eax;
    /* 00458574: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00458577: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045857e: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458583u); f_00459158();
    /* 00458583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00458586: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045858c: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0045858f: mov eax, dword ptr [ecx*4 + 0x9a6288] */ r_eax = R32((u32)(r_ecx*4+0x9a6288u));
    /* 00458596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00458598: je 0x45859f */ if (fZ) goto L_0045859f;
L_0045859a:; BB(0x0045859a);
    /* 0045859a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045859d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45859fu); call_ind(t); }
L_0045859f:; BB(0x0045859f);
    /* 0045859f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004585a2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004585a5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004585a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004585ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004585b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004585b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004585b5: ret  */ FN_RET(0x0045846c); r_esp += 4; return;
L_004585b6:; BB(0x004585b6);
    /* 004585b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004585b9: push dword ptr [eax + 0x3b0] */ { u32 v = R32((u32)(r_eax+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004585bf: push dword ptr [eax + 0x3ac] */ { u32 v = R32((u32)(r_eax+0x3acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004585c5: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4585cau); f_007a900c();
    /* 004585ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004585cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004585cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004585d2: mov ebx, dword ptr [edx + 0x3a0] */ r_ebx = R32((u32)(r_edx+0x3a0u));
    /* 004585d8: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004585db: jne 0x4584f6 */ if (!fZ) goto L_004584f6;
L_004585e1:; BB(0x004585e1);
    /* 004585e1: fld dword ptr [edx + 0x3a4] */ FPUSH(R_F32((u32)(r_edx+0x3a4u)));
    /* 004585e7: fcom dword ptr [0x900014] */ fx_compare(ST(0), R_F32((u32)(0x900014u))); 
    /* 004585ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004585ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004585f0: jbe 0x8cf373 */ if ((fC||fZ)) goto L_008cf373;
L_004585f6:; BB(0x004585f6);
    /* 004585f6: fcomp dword ptr [0x900010] */ fx_compare(ST(0), R_F32((u32)(0x900010u))); FPOP();
    /* 004585fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004585fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004585ff: jae 0x4584f6 */ if (!fC) goto L_004584f6;
L_00458605:; BB(0x00458605);
    /* 00458605: cmp ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045860b: jle 0x458619 */ if ((fZ||fS!=fO)) goto L_00458619;
L_0045860d:; BB(0x0045860d);
    /* 0045860d: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458613: jl 0x4584f6 */ if ((fS!=fO)) goto L_004584f6;
L_00458619:; BB(0x00458619);
    /* 00458619: mov esi, edx */ r_esi = r_edx;
    /* 0045861b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0045861e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00458621: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00458624: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 00458627: mov edi, dword ptr [esi + 0x3d8] */ r_edi = R32((u32)(r_esi+0x3d8u));
    /* 0045862d: mov dword ptr [ebp - 0x40], 0x3f400000 */ W32((u32)(r_ebp+0xffffffc0u), 0x3f400000u);
    /* 00458634: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00458637: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00458639: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00458640: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00458643: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00458646: mov dword ptr [ebp - 0x38], 0xa */ W32((u32)(r_ebp+0xffffffc8u), 0xau);
    /* 0045864d: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 00458650: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00458653: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00458656:; BB(0x00458656);
    /* 00458656: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458659: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045865c: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 00458662: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00458665: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00458668: push dword ptr [eax + 0x9a6414] */ { u32 v = R32((u32)(r_eax+0x9a6414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045866e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x458673u); f_005b8624();
    /* 00458673: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00458676: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 0045867c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0045867f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00458682: push dword ptr [eax*4 + 0x9a6414] */ { u32 v = R32((u32)(r_eax*4+0x9a6414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458689: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45868eu); f_005b8610();
    /* 0045868e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00458691: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 00458697: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0045869a: mov eax, dword ptr [edx + 0x3d0] */ r_eax = R32((u32)(r_edx+0x3d0u));
    /* 004586a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586a6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586a8: push dword ptr [eax + ebx*2 + 0x9a61e8] */ { u32 v = R32((u32)(r_eax+r_ebx*2+0x9a61e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004586af: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4586b4u); f_005b8638();
    /* 004586b4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004586bb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004586be: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004586c0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4586c5u); f_005caba4();
    /* 004586c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004586c6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004586c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004586cb: je 0x4586f1 */ if (fZ) goto L_004586f1;
L_004586cd:; BB(0x004586cd);
    /* 004586cd: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004586d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004586db: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004586de: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 004586e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004586e2: mov ecx, eax */ r_ecx = r_eax;
    /* 004586e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004586e5: call 0x458718 */ r_esp -= 4; W32(r_esp, 0x4586eau); f_00458718();
    /* 004586ea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004586f1:; BB(0x004586f1);
    /* 004586f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004586f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004586fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004586fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00458701: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458704: jl 0x458656 */ if ((fS!=fO)) goto L_00458656;
L_0045870a:; BB(0x0045870a);
    /* 0045870a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045870d: mov ebx, dword ptr [eax + 0x3a0] */ r_ebx = R32((u32)(r_eax+0x3a0u));
    /* 00458713: jmp 0x4584f6 */ f_004584f6(); return;
L_008cf373:; BB(0x008cf373);
    /* 008cf373: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008cf375: jmp 0x4584f6 */ f_004584f6(); return;
}

void f_00458713(void) /* _WinMain@16 */
{
    FN_ENTER(0x00458713);
    /* 00458713: jmp 0x4584f6 */ f_004584f6(); return;
}

void f_00458718(void) /* sub_458718 */
{
    FN_ENTER(0x00458718);
    /* 00458718: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00458719: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045871a: mov esi, ecx */ r_esi = r_ecx;
    /* 0045871c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00458720: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00458724: mov ecx, esi */ r_ecx = r_esi;
    /* 00458726: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x45872bu); f_008193cc();
    /* 0045872b: mov dword ptr [esi], 0xaf7940 */ W32((u32)(r_esi), 0xaf7940u);
    /* 00458731: mov edx, dword ptr [0x9a63e4] */ r_edx = R32((u32)(0x9a63e4u));
    /* 00458737: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0045873a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0045873d: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00458740: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00458743: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00458746: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00458749: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0045874c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045874f: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00458752: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00458755: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00458758: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045875b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0045875e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00458761: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00458764: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00458767: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0045876a: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0045876d: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00458770: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00458773: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00458776: mov ebp, dword ptr [ebp + 0x28] */ r_ebp = R32((u32)(r_ebp+0x28u));
    /* 00458779: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 00458780: mov dword ptr [esi + 0x44], ebp */ W32((u32)(r_esi+0x44u), r_ebp);
    /* 00458783: mov eax, esi */ r_eax = r_esi;
    /* 00458785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458786: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00458787: ret 8 */ FN_RET(0x00458718); r_esp += 12; return;
}

void f_0045878c(void) /* sub_45878C */
{
    FN_ENTER(0x0045878c);
    /* 0045878c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045878f: fld dword ptr [0x900210] */ FPUSH(R_F32((u32)(0x900210u)));
    /* 00458795: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00458799: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045879c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004587a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004587a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004587a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004587ad: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004587b1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004587b4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004587b8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4587bdu); f_0082ddd8();
    /* 004587bd: fld dword ptr [0x900208] */ FPUSH(R_F32((u32)(0x900208u)));
    /* 004587c3: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004587c5: fmul dword ptr [0x90020c] */ ST(0) = ST(0) * R_F32((u32)(0x90020cu));
    /* 004587cb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004587ce: ret 4 */ FN_RET(0x0045878c); r_esp += 8; return;
}

void f_004587d4(void) /* sub_4587D4 */
{
    FN_ENTER(0x004587d4);
    /* 004587d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004587d5: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004587d8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004587da: push dword ptr [ebx + 0x3b0] */ { u32 v = R32((u32)(r_ebx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004587e0: push dword ptr [ebx + 0x3ac] */ { u32 v = R32((u32)(r_ebx+0x3acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004587e6: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4587ebu); f_007a900c();
    /* 004587eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004587ee: fld dword ptr [0xa45760] */ FPUSH(R_F32((u32)(0xa45760u)));
    /* 004587f4: fld dword ptr [0xa45764] */ FPUSH(R_F32((u32)(0xa45764u)));
    /* 004587fa: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 00458800: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 00458806: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458808: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0045880c: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00458810: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00458813: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00458816: fmul dword ptr [ebx + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x3a4u));
    /* 0045881c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00458820: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00458825: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045882a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0045882e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00458832: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00458836: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045883a: fcomp dword ptr [0x900204] */ fx_compare(ST(0), R_F32((u32)(0x900204u))); FPOP();
    /* 00458840: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00458842: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00458846: add ecx, dword ptr [ebx + 0x3ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x3acu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045884c: mov dword ptr [ebx + 0x3a8], ecx */ W32((u32)(r_ebx+0x3a8u), r_ecx);
    /* 00458852: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00458853: jbe 0x458892 */ if ((fC||fZ)) goto L_00458892;
L_00458855:; BB(0x00458855);
    /* 00458855: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458856: call 0x4539cc */ r_esp -= 4; W32(r_esp, 0x45885bu); f_004539cc();
    /* 0045885b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045885c: fld dword ptr [0xa45760] */ FPUSH(R_F32((u32)(0xa45760u)));
    /* 00458862: fld dword ptr [0xa45768] */ FPUSH(R_F32((u32)(0xa45768u)));
    /* 00458868: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0045886a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0045886c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045886e: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 00458874: fld dword ptr [0xa45764] */ FPUSH(R_F32((u32)(0xa45764u)));
    /* 0045887a: fld dword ptr [0xa4576c] */ FPUSH(R_F32((u32)(0xa4576cu)));
    /* 00458880: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458882: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00458886: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00458888: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045888a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045888c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045888e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00458892:; BB(0x00458892);
    /* 00458892: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x458897u); f_0082dcbc();
    /* 00458897: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0045889b: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 004588a1: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004588a4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004588a8: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004588ab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4588b0u); f_0082ddd8();
    /* 004588b0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004588b4: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 004588ba: fchs  */ ST(0) = -ST(0);
    /* 004588bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004588be: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004588c1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004588c3: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004588c6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004588c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004588ca: ret  */ FN_RET(0x004587d4); r_esp += 4; return;
}

void f_004588cc(void) /* sub_4588CC */
{
    FN_ENTER(0x004588cc);
    /* 004588cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004588cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004588d0: mov esi, ecx */ r_esi = r_ecx;
    /* 004588d2: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 004588d8: mov eax, dword ptr [0xa45770] */ r_eax = R32((u32)(0xa45770u));
    /* 004588dd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004588df: jne 0x458902 */ if (!fZ) goto L_00458902;
L_004588e1:; BB(0x004588e1);
    /* 004588e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004588e3: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4588e8u); f_004d4288();
    /* 004588e8: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004588ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004588ef: call 0x452af8 */ r_esp -= 4; W32(r_esp, 0x4588f4u); f_00452af8();
    /* 004588f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004588f7: mov eax, dword ptr [0xa45770] */ r_eax = R32((u32)(0xa45770u));
    /* 004588fc: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
L_00458902:; BB(0x00458902);
    /* 00458902: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458904: jg 0x458922 */ if ((!fZ&&fS==fO)) goto L_00458922;
L_00458906:; BB(0x00458906);
    /* 00458906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458908: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045890a: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0045890d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045890e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045890f: push 0x373 */ { u32 v = 0x373u; r_esp -= 4; W32(r_esp, v); }
    /* 00458914: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x458919u); f_008144b0();
    /* 00458919: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045891c: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
L_00458922:; BB(0x00458922);
    /* 00458922: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458925: mov dword ptr [esi + 0x3a0], edx */ W32((u32)(r_esi+0x3a0u), r_edx);
    /* 0045892b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045892d: jl 0x458934 */ if ((fS!=fO)) goto L_00458934;
L_0045892f:; BB(0x0045892f);
    /* 0045892f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00458932: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00458933: ret  */ FN_RET(0x004588cc); r_esp += 4; return;
L_00458934:; BB(0x00458934);
    /* 00458934: mov dword ptr [esi + 0x37c], 8 */ W32((u32)(r_esi+0x37cu), 0x8u);
    /* 0045893e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00458941: lea edx, [esi + 0x43c] */ r_edx = (u32)(r_esi+0x43cu);
    /* 00458947: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045894b: lea eax, [esi + 0x454] */ r_eax = (u32)(r_esi+0x454u);
    /* 00458951: mov ebp, eax */ r_ebp = r_eax;
    /* 00458953: mov edi, edx */ r_edi = r_edx;
L_00458955:; BB(0x00458955);
    /* 00458955: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00458957: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458959: je 0x458968 */ if (fZ) goto L_00458968;
L_0045895b:; BB(0x0045895b);
    /* 0045895b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045895c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458961u); f_005cdcc0();
    /* 00458961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458962: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00458968:; BB(0x00458968);
    /* 00458968: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045896b: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045896d: ja 0x458955 */ if ((!fC&&!fZ)) goto L_00458955;
L_0045896f:; BB(0x0045896f);
    /* 0045896f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00458972: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00458976: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045897c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045897f: je 0x45898b */ if (fZ) goto L_0045898b;
L_00458981:; BB(0x00458981);
    /* 00458981: mov dword ptr [esi + 0x3e8], 0 */ W32((u32)(r_esi+0x3e8u), 0x0u);
L_0045898b:; BB(0x0045898b);
    /* 0045898b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0045898e: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458995: mov ecx, esi */ r_ecx = r_esi;
    /* 00458997: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x45899cu); f_00459158();
    /* 0045899c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 004589a2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004589a5: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 004589ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004589ae: je 0x4589b4 */ if (fZ) goto L_004589b4;
L_004589b0:; BB(0x004589b0);
    /* 004589b0: mov ecx, esi */ r_ecx = r_esi;
    /* 004589b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4589b4u); call_ind(t); }
L_004589b4:; BB(0x004589b4);
    /* 004589b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004589b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004589b8: ret  */ FN_RET(0x004588cc); r_esp += 4; return;
}

void f_004589bc(void)
{
    FN_ENTER(0x004589bc);
    /* 004589bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004589bd: mov ebx, esp */ r_ebx = r_esp;
    /* 004589bf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004589c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004589c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004589c4: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004589ca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004589cc: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 004589d2: lea edi, [edx - 6] */ r_edi = (u32)(r_edx+0xfffffffau);
    /* 004589d5: lea ecx, [edx + edx - 0xc] */ r_ecx = (u32)(r_edx+r_edx+0xfffffff4u);
    /* 004589d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004589db: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004589de: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004589e0: mov ecx, dword ptr [eax + ebp + 0x458] */ r_ecx = R32((u32)(r_eax+r_ebp+0x458u));
    /* 004589e7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004589eb: mov ecx, dword ptr [eax + ebp + 0x45c] */ r_ecx = R32((u32)(r_eax+r_ebp+0x45cu));
    /* 004589f2: mov eax, dword ptr [eax + ebp + 0x460] */ r_eax = R32((u32)(r_eax+r_ebp+0x460u));
    /* 004589f9: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 004589fd: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00458a01: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00458a07: cmp eax, dword ptr [0xa45774] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa45774u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a0d: jne 0x458a1d */ if (!fZ) goto L_00458a1d;
L_00458a0f:; BB(0x00458a0f);
    /* 00458a0f: push dword ptr [edx*4 + 0x9a6188] */ { u32 v = R32((u32)(r_edx*4+0x9a6188u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458a16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458a18: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458a1du); f_00459158();
L_00458a1d:; BB(0x00458a1d);
    /* 00458a1d: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00458a23: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a26: je 0x459077 */ if (fZ) goto L_00459077;
L_00458a2c:; BB(0x00458a2c);
    /* 00458a2c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a2f: je 0x459077 */ if (fZ) goto L_00459077;
L_00458a35:; BB(0x00458a35);
    /* 00458a35: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458a3c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458a3e: jne 0x458a52 */ if (!fZ) goto L_00458a52;
L_00458a40:; BB(0x00458a40);
    /* 00458a40: mov dword ptr [0xa45740], 0x25 */ W32((u32)(0xa45740u), 0x25u);
    /* 00458a4a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458a4d: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458a52:; BB(0x00458a52);
    /* 00458a52: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458a54: jne 0x458a7a */ if (!fZ) goto L_00458a7a;
L_00458a56:; BB(0x00458a56);
    /* 00458a56: mov edx, dword ptr [0xa45774] */ r_edx = R32((u32)(0xa45774u));
    /* 00458a5c: add edx, dword ptr [0xa45740] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45740u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458a62: mov ecx, dword ptr [0xa45778] */ r_ecx = R32((u32)(0xa45778u));
    /* 00458a68: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00458a6a: mov dword ptr [0xa45744], ecx */ W32((u32)(0xa45744u), r_ecx);
    /* 00458a70: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458a73: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
    /* 00458a78: jmp 0x458a80 */ goto L_00458a80;
L_00458a7a:; BB(0x00458a7a);
    /* 00458a7a: mov ecx, dword ptr [0xa45744] */ r_ecx = R32((u32)(0xa45744u));
L_00458a80:; BB(0x00458a80);
    /* 00458a80: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00458a86: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a88: jne 0x458add */ if (!fZ) goto L_00458add;
L_00458a8a:; BB(0x00458a8a);
    /* 00458a8a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00458a8e: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00458a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458a94: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x458a99u); f_0050b510();
    /* 00458a99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a9e: je 0x458aa9 */ if (fZ) goto L_00458aa9;
L_00458aa0:; BB(0x00458aa0);
    /* 00458aa0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aa2: mov ecx, eax */ r_ecx = r_eax;
    /* 00458aa4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x458aa9u); f_00508efc();
L_00458aa9:; BB(0x00458aa9);
    /* 00458aa9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aad: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00458ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ab1: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ab6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x458abbu); f_00814298();
    /* 00458abb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00458abd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ac2: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x458ac7u); f_006ff5f8();
    /* 00458ac7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458aca: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458ad1: mov ecx, dword ptr [0xa45744] */ r_ecx = R32((u32)(0xa45744u));
    /* 00458ad7: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
L_00458add:; BB(0x00458add);
    /* 00458add: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458adf: jg 0x458cfc */ if ((!fZ&&fS==fO)) goto L_00458cfc;
L_00458ae5:; BB(0x00458ae5);
    /* 00458ae5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458ae8: jl 0x458cfc */ if ((fS!=fO)) goto L_00458cfc;
L_00458aee:; BB(0x00458aee);
    /* 00458aee: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458af1: jne 0x458cfc */ if (!fZ) goto L_00458cfc;
L_00458af7:; BB(0x00458af7);
    /* 00458af7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458af9: jne 0x458b17 */ if (!fZ) goto L_00458b17;
L_00458afb:; BB(0x00458afb);
    /* 00458afb: fld dword ptr [0x900200] */ FPUSH(R_F32((u32)(0x900200u)));
    /* 00458b01: mov dword ptr [0xa45748], 0x41a00000 */ W32((u32)(0xa45748u), 0x41a00000u);
    /* 00458b0b: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458b10: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
    /* 00458b15: jmp 0x458b1d */ goto L_00458b1d;
L_00458b17:; BB(0x00458b17);
    /* 00458b17: fld dword ptr [0xa45748] */ FPUSH(R_F32((u32)(0xa45748u)));
L_00458b1d:; BB(0x00458b1d);
    /* 00458b1d: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00458b23: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 00458b29: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 00458b2f: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00458b35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458b37: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00458b39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458b3b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458b3d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00458b41: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 00458b45: mov eax, dword ptr [ebp + 0x420] */ r_eax = R32((u32)(r_ebp+0x420u));
    /* 00458b4b: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00458b4f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b51: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00458b55: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00458b59: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00458b5d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00458b61: jne 0x458b82 */ if (!fZ) goto L_00458b82;
L_00458b63:; BB(0x00458b63);
    /* 00458b63: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b65: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x458b6au); f_0077a6cc();
    /* 00458b6a: lea edi, [esp + 0x40] */ r_edi = (u32)(r_esp+0x40u);
    /* 00458b6e: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00458b72: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00458b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458b76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458b77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b78: call 0x6ec8ec */ r_esp -= 4; W32(r_esp, 0x458b7du); f_006ec8ec();
    /* 00458b7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458b80: jmp 0x458b9f */ goto L_00458b9f;
L_00458b82:; BB(0x00458b82);
    /* 00458b82: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b84: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x458b89u); f_0077a6cc();
    /* 00458b89: lea edi, [esp + 0x40] */ r_edi = (u32)(r_esp+0x40u);
    /* 00458b8d: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00458b91: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458b94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458b95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458b96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b97: call 0x6ed87c */ r_esp -= 4; W32(r_esp, 0x458b9cu); f_006ed87c();
    /* 00458b9c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00458b9f:; BB(0x00458b9f);
    /* 00458b9f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00458ba3: mov eax, 1 */ r_eax = 0x1u;
    /* 00458ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458baa: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00458baf: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458bb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458bb5: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x458bbau); f_0080575c();
    /* 00458bba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458bbd: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 00458bc3: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00458bc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458bcb: fchs  */ ST(0) = -ST(0);
    /* 00458bcd: fstp dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0)); FPOP();
    /* 00458bd3: fchs  */ ST(0) = -ST(0);
    /* 00458bd5: fstp dword ptr [ebp + 0x414] */ W_F32((u32)(r_ebp+0x414u), ST(0)); FPOP();
    /* 00458bdb: lea edi, [ebp + 0x418] */ r_edi = (u32)(r_ebp+0x418u);
    /* 00458be1: mov ecx, edi */ r_ecx = r_edi;
    /* 00458be3: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x458be8u); f_0083173c();
    /* 00458be8: fcomp dword ptr [0xa4577c] */ fx_compare(ST(0), R_F32((u32)(0xa4577cu))); FPOP();
    /* 00458bee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00458bf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00458bf1: ja 0x458bfe */ if ((!fC&&!fZ)) goto L_00458bfe;
L_00458bf3:; BB(0x00458bf3);
    /* 00458bf3: fld dword ptr [ebp + 0x408] */ FPUSH(R_F32((u32)(r_ebp+0x408u)));
    /* 00458bf9: jmp 0x458cbf */ f_00458cbf(); return;
L_00458bfe:; BB(0x00458bfe);
    /* 00458bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00458c00: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x458c05u); f_0082df08();
    /* 00458c05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00458c07: fld dword ptr [0xa4577c] */ FPUSH(R_F32((u32)(0xa4577cu)));
    /* 00458c0d: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00458c13: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00458c15: fld dword ptr [ebp + 0x420] */ FPUSH(R_F32((u32)(r_ebp+0x420u)));
    /* 00458c1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458c1d: fst dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0));
    /* 00458c23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c25: fst dword ptr [ebp + 0x420] */ W_F32((u32)(r_ebp+0x420u), ST(0));
    /* 00458c2b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00458c2d: fmul qword ptr [0x9000e0] */ ST(0) = ST(0) * R_F64((u32)(0x9000e0u));
    /* 00458c33: fdiv qword ptr [0x9000d8] */ ST(0) = ST(0) / R_F64((u32)(0x9000d8u));
    /* 00458c39: fld dword ptr [ebp + 0x408] */ FPUSH(R_F32((u32)(r_ebp+0x408u)));
    /* 00458c3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c41: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00458c44: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00458c48: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458c4d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00458c51: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00458c55: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00458c59: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00458c5c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00458c60: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00458c66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c68: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00458c6a: fmul qword ptr [0x9000e0] */ ST(0) = ST(0) * R_F64((u32)(0x9000e0u));
    /* 00458c70: fdiv qword ptr [0x9000d8] */ ST(0) = ST(0) / R_F64((u32)(0x9000d8u));
    /* 00458c76: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00458c79: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00458c7d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458c82: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00458c86: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00458c8a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00458c8e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00458c91: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00458c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458c96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458c97: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x458c9cu); f_007a900c();
    /* 00458c9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458c9f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458ca1: mov ecx, edi */ r_ecx = r_edi;
    /* 00458ca3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x458ca8u); f_0082dcbc();
    /* 00458ca8: fchs  */ ST(0) = -ST(0);
    /* 00458caa: fstp dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0)); FPOP();
    /* 00458cb0: mov ecx, edi */ r_ecx = r_edi;
    /* 00458cb2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x458cb7u); f_0082ddd8();
    /* 00458cb7: fchs  */ ST(0) = -ST(0);
    /* 00458cb9: fst dword ptr [ebp + 0x408] */ W_F32((u32)(r_ebp+0x408u), ST(0));
    /* 00458cbf: fld dword ptr [0xa45780] */ FPUSH(R_F32((u32)(0xa45780u)));
    /* 00458cc5: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458ccc: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00458cd2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00458cd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458cd6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00458cd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cda: fadd dword ptr [ebp + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x418u));
    /* 00458ce0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458ce2: fadd dword ptr [ebp + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x420u));
    /* 00458ce8: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00458cee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cf0: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
    /* 00458cf6: fstp dword ptr [ebp + 0x420] */ W_F32((u32)(r_ebp+0x420u), ST(0)); FPOP();
L_00458cfc:; BB(0x00458cfc);
    /* 00458cfc: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458cfe: jne 0x458d17 */ if (!fZ) goto L_00458d17;
L_00458d00:; BB(0x00458d00);
    /* 00458d00: mov edi, dword ptr [0xa45778] */ r_edi = R32((u32)(0xa45778u));
    /* 00458d06: mov dword ptr [0xa4574c], edi */ W32((u32)(0xa4574cu), r_edi);
    /* 00458d0c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00458d0f: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d12: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d17:; BB(0x00458d17);
    /* 00458d17: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458d19: jne 0x458d34 */ if (!fZ) goto L_00458d34;
L_00458d1b:; BB(0x00458d1b);
    /* 00458d1b: mov edi, dword ptr [0xa4574c] */ r_edi = R32((u32)(0xa4574cu));
    /* 00458d21: add edi, -0xf */ {  u32 a = r_edi; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458d24: mov dword ptr [0xa45750], edi */ W32((u32)(0xa45750u), r_edi);
    /* 00458d2a: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d2f: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d34:; BB(0x00458d34);
    /* 00458d34: cmp edx, dword ptr [0xa45750] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45750u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d3a: jle 0x458d59 */ if ((fZ||fS!=fO)) goto L_00458d59;
L_00458d3c:; BB(0x00458d3c);
    /* 00458d3c: mov eax, dword ptr [0xa4574c] */ r_eax = R32((u32)(0xa4574cu));
    /* 00458d41: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458d43: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00458d47: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d4b: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d51: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d57: jmp 0x458d92 */ goto L_00458d92;
L_00458d59:; BB(0x00458d59);
    /* 00458d59: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d5c: jl 0x458d6a */ if ((fS!=fO)) goto L_00458d6a;
L_00458d5e:; BB(0x00458d5e);
    /* 00458d5e: mov dword ptr [ebp + 0x3f0], 0x3f800000 */ W32((u32)(r_ebp+0x3f0u), 0x3f800000u);
    /* 00458d68: jmp 0x458d92 */ goto L_00458d92;
L_00458d6a:; BB(0x00458d6a);
    /* 00458d6a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d6d: jle 0x458d88 */ if ((fZ||fS!=fO)) goto L_00458d88;
L_00458d6f:; BB(0x00458d6f);
    /* 00458d6f: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458d72: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00458d76: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d7a: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d80: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d86: jmp 0x458d92 */ goto L_00458d92;
L_00458d88:; BB(0x00458d88);
    /* 00458d88: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
L_00458d92:; BB(0x00458d92);
    /* 00458d92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458d94: call 0x4587d4 */ r_esp -= 4; W32(r_esp, 0x458d99u); f_004587d4();
    /* 00458d99: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00458d9f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458da2: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00458da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00458daa: jge 0x458e38 */ if ((fS==fO)) goto L_00458e38;
L_00458db0:; BB(0x00458db0);
    /* 00458db0: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00458db5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458db8: je 0x458e44 */ if (fZ) goto L_00458e44;
L_00458dbe:; BB(0x00458dbe);
    /* 00458dbe: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00458dc4: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00458dc8: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00458dce: lea eax, [ebp + 0x43c] */ r_eax = (u32)(r_ebp+0x43cu);
    /* 00458dd4: lea edi, [ebp + 0x454] */ r_edi = (u32)(r_ebp+0x454u);
    /* 00458dda: mov esi, eax */ r_esi = r_eax;
L_00458ddc:; BB(0x00458ddc);
    /* 00458ddc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00458dde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458de0: je 0x458def */ if (fZ) goto L_00458def;
L_00458de2:; BB(0x00458de2);
    /* 00458de2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458de3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458de8u); f_005cdcc0();
    /* 00458de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458de9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00458def:; BB(0x00458def);
    /* 00458def: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458df2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458df4: ja 0x458ddc */ if ((!fC&&!fZ)) goto L_00458ddc;
L_00458df6:; BB(0x00458df6);
    /* 00458df6: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00458dfa: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e03: je 0x458e0f */ if (fZ) goto L_00458e0f;
L_00458e05:; BB(0x00458e05);
    /* 00458e05: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_00458e0f:; BB(0x00458e0f);
    /* 00458e0f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00458e12: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458e19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e1b: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458e20u); f_00459158();
    /* 00458e20: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e26: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00458e29: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00458e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e32: je 0x458e38 */ if (fZ) goto L_00458e38;
L_00458e34:; BB(0x00458e34);
    /* 00458e34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458e38u); call_ind(t); }
L_00458e38:; BB(0x00458e38);
    /* 00458e38: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00458e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458e40: mov esp, ebx */ r_esp = r_ebx;
    /* 00458e42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00458e43: ret  */ FN_RET(0x004589bc); r_esp += 4; return;
L_00458e44:; BB(0x00458e44);
    /* 00458e44: movzx eax, word ptr [0xa44ce0] */ r_eax = (u32)R16((u32)(0xa44ce0u));
    /* 00458e4b: movzx edx, word ptr [0xa44ce2] */ r_edx = (u32)R16((u32)(0xa44ce2u));
    /* 00458e52: movzx edi, word ptr [0xa44ce4] */ r_edi = (u32)R16((u32)(0xa44ce4u));
    /* 00458e59: mov word ptr [esp + 0x4c], ax */ W16((u32)(r_esp+0x4cu), (u16)r_eax);
    /* 00458e5e: movzx eax, word ptr [0xa44ce6] */ r_eax = (u32)R16((u32)(0xa44ce6u));
    /* 00458e65: mov word ptr [esp + 0x4e], dx */ W16((u32)(r_esp+0x4eu), (u16)r_edx);
    /* 00458e6a: mov word ptr [esp + 0x50], di */ W16((u32)(r_esp+0x50u), (u16)r_edi);
    /* 00458e6f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00458e71: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 00458e76: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 00458e7d: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 00458e82: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 00458e89: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 00458e8e: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 00458e95: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 00458e9a: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 00458e9f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00458ea3: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 00458ea8: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00458eac: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 00458eb1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00458eb5: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 00458eba: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00458ebe: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 00458ec3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00458ec7: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 00458ecc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00458ed0: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 00458ed5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00458ed9: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 00458ede: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00458ee2: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 00458ee7: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00458eeb: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 00458ef0: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 00458ef7: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 00458efc: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00458f03: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 00458f0a: mov word ptr [esp + 0x88], ax */ W16((u32)(r_esp+0x88u), (u16)r_eax);
    /* 00458f12: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 00458f19: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 00458f21: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 00458f27: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00458f2b: mov eax, 1 */ r_eax = 0x1u;
    /* 00458f30: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 00458f35: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00458f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00458f3c: jle 0x458dbe */ if ((fZ||fS!=fO)) goto L_00458dbe;
L_00458f42:; BB(0x00458f42);
    /* 00458f42: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00458f46: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00458f4a:; BB(0x00458f4a);
    /* 00458f4a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00458f51: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f53: je 0x45905f */ if (fZ) goto L_0045905f;
L_00458f59:; BB(0x00458f59);
    /* 00458f59: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00458f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f5e: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x458f63u); f_00453ab8();
    /* 00458f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f66: je 0x45905a */ if (fZ) goto L_0045905a;
L_00458f6c:; BB(0x00458f6c);
    /* 00458f6c: movzx eax, byte ptr [0xa45784] */ r_eax = (u32)R8((u32)(0xa45784u));
    /* 00458f73: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f75: jne 0x458f89 */ if (!fZ) goto L_00458f89;
L_00458f77:; BB(0x00458f77);
    /* 00458f77: mov dword ptr [0xa45788], 0x41480000 */ W32((u32)(0xa45788u), 0x41480000u);
    /* 00458f81: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458f84: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458f89:; BB(0x00458f89);
    /* 00458f89: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f8b: jne 0x458fef */ if (!fZ) goto L_00458fef;
L_00458f8d:; BB(0x00458f8d);
    /* 00458f8d: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458f93: fld dword ptr [0x9001e8] */ FPUSH(R_F32((u32)(0x9001e8u)));
    /* 00458f99: fld dword ptr [0x9001e4] */ FPUSH(R_F32((u32)(0x9001e4u)));
    /* 00458f9f: fld dword ptr [0x9001e0] */ FPUSH(R_F32((u32)(0x9001e0u)));
    /* 00458fa5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458fa7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fab: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458faf: fstp dword ptr [0xa45794] */ W_F32((u32)(0xa45794u), ST(0)); FPOP();
    /* 00458fb5: fst dword ptr [0xa45798] */ W_F32((u32)(0xa45798u), ST(0));
    /* 00458fbb: fstp dword ptr [0xa457a0] */ W_F32((u32)(0xa457a0u), ST(0)); FPOP();
    /* 00458fc1: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fc9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458fcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fcd: fstp dword ptr [0xa4579c] */ W_F32((u32)(0xa4579cu), ST(0)); FPOP();
    /* 00458fd3: mov dword ptr [0xa4578c], 0 */ W32((u32)(0xa4578cu), 0x0u);
    /* 00458fdd: fchs  */ ST(0) = -ST(0);
    /* 00458fdf: fstp dword ptr [0xa45790] */ W_F32((u32)(0xa45790u), ST(0)); FPOP();
    /* 00458fe5: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458fea: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458fef:; BB(0x00458fef);
    /* 00458fef: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00458ff3: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00458ff7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00458ff9:; BB(0x00458ff9);
    /* 00458ff9: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00458ffd: lea eax, [esp + 0x52] */ r_eax = (u32)(r_esp+0x52u);
    /* 00459001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459002: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 00459008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459009: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x45900eu); f_0044cfc0();
    /* 0045900e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459010: je 0x459047 */ if (fZ) goto L_00459047;
L_00459012:; BB(0x00459012);
    /* 00459012: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00459016: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00459019: fadd dword ptr [ebp + 0xa4578c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4578cu));
    /* 0045901f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00459022: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00459026: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00459029: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0045902d: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00459030: fadd dword ptr [ebp + 0xa45790] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa45790u));
    /* 00459036: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459038: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0045903c: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00459040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459041: call 0x460d34 */ r_esp -= 4; W32(r_esp, 0x459046u); f_00460d34();
    /* 00459046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00459047:; BB(0x00459047);
    /* 00459047: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045904a: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045904d: jl 0x458ff9 */ if ((fS!=fO)) goto L_00458ff9;
L_0045904f:; BB(0x0045904f);
    /* 0045904f: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00459053: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00459058: jmp 0x45905f */ goto L_0045905f;
L_0045905a:; BB(0x0045905a);
    /* 0045905a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0045905f:; BB(0x0045905f);
    /* 0045905f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00459062: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459064: jl 0x458f4a */ if ((fS!=fO)) goto L_00458f4a;
L_0045906a:; BB(0x0045906a);
    /* 0045906a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0045906e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00459072: jmp 0x458dbe */ goto L_00458dbe;
L_00459077:; BB(0x00459077);
    /* 00459077: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 0045907d: fcom dword ptr [0x90001c] */ fx_compare(ST(0), R_F32((u32)(0x90001cu))); 
    /* 00459083: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00459085: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00459086: jbe 0x4590bd */ if ((fC||fZ)) goto L_004590bd;
L_00459088:; BB(0x00459088);
    /* 00459088: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0045908e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459090: je 0x4590b3 */ if (fZ) goto L_004590b3;
L_00459092:; BB(0x00459092);
    /* 00459092: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00459094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459095: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45909au); f_005cdcc0();
    /* 0045909a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045909b: fld dword ptr [0x900018] */ FPUSH(R_F32((u32)(0x900018u)));
    /* 004590a1: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 004590a7: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 004590b1: jmp 0x4590d6 */ goto L_004590d6;
L_004590b3:; BB(0x004590b3);
    /* 004590b3: fld dword ptr [0x900018] */ FPUSH(R_F32((u32)(0x900018u)));
    /* 004590b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004590bb: jmp 0x4590d6 */ goto L_004590d6;
L_004590bd:; BB(0x004590bd);
    /* 004590bd: fld dword ptr [0x900018] */ FPUSH(R_F32((u32)(0x900018u)));
    /* 004590c3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004590c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004590c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004590c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004590ca: ja 0x4590d6 */ if ((!fC&&!fZ)) goto L_004590d6;
L_004590cc:; BB(0x004590cc);
    /* 004590cc: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 004590d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004590d4: je 0x45910b */ if (fZ) goto L_0045910b;
L_004590d6:; BB(0x004590d6);
    /* 004590d6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004590d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004590da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004590dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004590de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004590df: jb 0x459150 */ if (fC) goto L_00459150;
L_004590e1:; BB(0x004590e1);
    /* 004590e1: fcomp dword ptr [0x90001c] */ fx_compare(ST(0), R_F32((u32)(0x90001cu))); FPOP();
    /* 004590e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004590e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004590ea: ja 0x458a35 */ if ((!fC&&!fZ)) goto L_00458a35;
L_004590f0:; BB(0x004590f0);
    /* 004590f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004590f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004590f4: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004590f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004590f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004590f9: push 0x36f */ { u32 v = 0x36fu; r_esp -= 4; W32(r_esp, v); }
    /* 004590fe: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x459103u); f_008144b0();
    /* 00459103: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459106: jmp 0x458a35 */ f_00458a35(); return;
L_0045910b:; BB(0x0045910b);
    /* 0045910b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045910d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045910f: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00459113: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 00459118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459119: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45911eu); f_00509590();
    /* 0045911e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00459121: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 00459127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459129: je 0x459142 */ if (fZ) goto L_00459142;
L_0045912b:; BB(0x0045912b);
    /* 0045912b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045912d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045912f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x459134u); f_00508efc();
    /* 00459134: fld dword ptr [0x900018] */ FPUSH(R_F32((u32)(0x900018u)));
    /* 0045913a: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 00459140: jmp 0x4590d6 */ goto L_004590d6;
L_00459142:; BB(0x00459142);
    /* 00459142: fld dword ptr [0x900018] */ FPUSH(R_F32((u32)(0x900018u)));
    /* 00459148: fld dword ptr [ebp + 0x3d8] */ FPUSH(R_F32((u32)(r_ebp+0x3d8u)));
    /* 0045914e: jmp 0x4590d6 */ goto L_004590d6;
L_00459150:; BB(0x00459150);
    /* 00459150: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00459152: jmp 0x458a35 */ f_00458a35(); return;
}

