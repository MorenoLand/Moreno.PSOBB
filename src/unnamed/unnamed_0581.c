#include "protos.h"

void f_0058106c(void) /* sub_58106C */
{
    FN_ENTER(0x0058106c);
    /* 0058106c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058106d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581070: mov edi, ecx */ r_edi = r_ecx;
    /* 00581072: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00581078: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058107b: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00581081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00581083: jl 0x5810e0 */ if ((fS!=fO)) goto L_005810e0;
L_00581085:; BB(0x00581085);
    /* 00581085: fild dword ptr [edi + 0x47c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x47cu)));
    /* 0058108b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058108e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00581091: mov ecx, edi */ r_ecx = r_edi;
    /* 00581093: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00581097: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0058109b: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5810a0u); f_007714cc();
    /* 005810a0: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005810a3: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005810a8: je 0x58113b */ if (fZ) goto L_0058113b;
L_005810ae:; BB(0x005810ae);
    /* 005810ae: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005810b1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005810b5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005810b7: fmul qword ptr [0x927d90] */ ST(0) = ST(0) * R_F64((u32)(0x927d90u));
    /* 005810bd: fdiv qword ptr [0x927d88] */ ST(0) = ST(0) / R_F64((u32)(0x927d88u));
    /* 005810c3: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005810c7: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005810cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005810d1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005810d5: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005810d9: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005810dc: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
L_005810e0:; BB(0x005810e0);
    /* 005810e0: mov dword ptr [edi + 0x37c], 2 */ W32((u32)(r_edi+0x37cu), 0x2u);
    /* 005810ea: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 005810ee: lea edx, [edi + 0x39c] */ r_edx = (u32)(r_edi+0x39cu);
    /* 005810f4: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 005810f8: lea eax, [edi + 0x3a4] */ r_eax = (u32)(r_edi+0x3a4u);
    /* 005810fe: mov ebx, eax */ r_ebx = r_eax;
    /* 00581100: mov ebp, edx */ r_ebp = r_edx;
L_00581102:; BB(0x00581102);
    /* 00581102: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00581105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581107: je 0x581117 */ if (fZ) goto L_00581117;
L_00581109:; BB(0x00581109);
    /* 00581109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058110a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58110fu); f_005cdcc0();
    /* 0058110f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581110: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_00581117:; BB(0x00581117);
    /* 00581117: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0058111a: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058111c: ja 0x581102 */ if ((!fC&&!fZ)) goto L_00581102;
L_0058111e:; BB(0x0058111e);
    /* 0058111e: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00581122: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00581126: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0058112c: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581133: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581135: je 0x58113b */ if (fZ) goto L_0058113b;
L_00581137:; BB(0x00581137);
    /* 00581137: mov ecx, edi */ r_ecx = r_edi;
    /* 00581139: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58113bu); call_ind(t); }
L_0058113b:; BB(0x0058113b);
    /* 0058113b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058113e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058113f: ret  */ FN_RET(0x0058106c); r_esp += 4; return;
}

void f_00581140(void) /* sub_581140 */
{
    FN_ENTER(0x00581140);
    /* 00581140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581141: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581142: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581145: mov edi, ecx */ r_edi = r_ecx;
    /* 00581147: fld dword ptr [0x927e60] */ FPUSH(R_F32((u32)(0x927e60u)));
    /* 0058114d: fadd dword ptr [edi + 0x384] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x384u));
    /* 00581153: fstp dword ptr [edi + 0x384] */ W_F32((u32)(r_edi+0x384u), ST(0)); FPOP();
    /* 00581159: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0058115c: lea edx, [edi + 0x380] */ r_edx = (u32)(r_edi+0x380u);
    /* 00581162: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00581164: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x581169u); f_0082ebac();
    /* 00581169: fld dword ptr [0x927e68] */ FPUSH(R_F32((u32)(0x927e68u)));
    /* 0058116f: fld dword ptr [edi + 0x384] */ FPUSH(R_F32((u32)(r_edi+0x384u)));
    /* 00581175: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00581177: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581179: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058117a: ja 0x5811fe */ if ((!fC&&!fZ)) goto L_005811fe;
L_00581180:; BB(0x00581180);
    /* 00581180: mov edx, dword ptr [edi + 0x38c] */ r_edx = R32((u32)(r_edi+0x38cu));
    /* 00581186: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00581189: fcomp dword ptr [edi + 0x38c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x38cu))); FPOP();
    /* 0058118f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581191: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581192: ja 0x5811fe */ if ((!fC&&!fZ)) goto L_005811fe;
L_00581194:; BB(0x00581194);
    /* 00581194: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581196: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581198: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058119d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058119e: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005811a1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5811a6u); f_0050b510();
    /* 005811a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005811a9: mov dword ptr [edi + 0x37c], 3 */ W32((u32)(r_edi+0x37cu), 0x3u);
    /* 005811b3: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005811b7: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 005811bd: lea ebp, [edi + 0x3a4] */ r_ebp = (u32)(r_edi+0x3a4u);
    /* 005811c3: mov esi, eax */ r_esi = r_eax;
L_005811c5:; BB(0x005811c5);
    /* 005811c5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005811c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005811c9: je 0x5811d8 */ if (fZ) goto L_005811d8;
L_005811cb:; BB(0x005811cb);
    /* 005811cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005811cc: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5811d1u); f_005cdcc0();
    /* 005811d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005811d2: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005811d8:; BB(0x005811d8);
    /* 005811d8: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005811db: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005811dd: ja 0x5811c5 */ if ((!fC&&!fZ)) goto L_005811c5;
L_005811df:; BB(0x005811df);
    /* 005811df: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005811e3: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 005811e9: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005811f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005811f2: je 0x5811f8 */ if (fZ) goto L_005811f8;
L_005811f4:; BB(0x005811f4);
    /* 005811f4: mov ecx, edi */ r_ecx = r_edi;
    /* 005811f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5811f8u); call_ind(t); }
L_005811f8:; BB(0x005811f8);
    /* 005811f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005811fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005811fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005811fd: ret  */ FN_RET(0x00581140); r_esp += 4; return;
L_005811fe:; BB(0x005811fe);
    /* 005811fe: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00581204: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581207: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0058120d: test al, 7 */ {  u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058120f: jne 0x58126d */ if (!fZ) goto L_0058126d;
L_00581211:; BB(0x00581211);
    /* 00581211: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00581213: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581215: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581216: jbe 0x581271 */ if ((fC||fZ)) goto L_00581271;
L_00581218:; BB(0x00581218);
    /* 00581218: movzx eax, byte ptr [0xa741e8] */ r_eax = (u32)R8((u32)(0xa741e8u));
    /* 0058121f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581221: jne 0x581237 */ if (!fZ) goto L_00581237;
L_00581223:; BB(0x00581223);
    /* 00581223: mov dword ptr [0xa741ec], 0x40a00000 */ W32((u32)(0xa741ecu), 0x40a00000u);
    /* 0058122d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581232: mov byte ptr [0xa741e8], al */ W8((u32)(0xa741e8u), (u8)r_eax);
L_00581237:; BB(0x00581237);
    /* 00581237: fld dword ptr [0xa741ec] */ FPUSH(R_F32((u32)(0xa741ecu)));
    /* 0058123d: fadd dword ptr [edi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38cu));
    /* 00581243: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00581249: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 0058124f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00581253: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00581256: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058125a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0058125d: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581262: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581263: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x581268u); f_0050b510();
    /* 00581268: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058126b: jmp 0x581271 */ goto L_00581271;
L_0058126d:; BB(0x0058126d);
    /* 0058126d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058126f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00581271:; BB(0x00581271);
    /* 00581271: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581274: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00581275: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581276: ret  */ FN_RET(0x00581140); r_esp += 4; return;
}

void f_00581278(void) /* sub_581278 */
{
    FN_ENTER(0x00581278);
    /* 00581278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058127a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058127b: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058127e: mov esi, ecx */ r_esi = r_ecx;
    /* 00581280: movzx edx, byte ptr [0xa741f0] */ r_edx = (u32)R8((u32)(0xa741f0u));
    /* 00581287: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058128a: jne 0x58129f */ if (!fZ) goto L_0058129f;
L_0058128c:; BB(0x0058128c);
    /* 0058128c: mov dword ptr [0xa741f4], 0x41400000 */ W32((u32)(0xa741f4u), 0x41400000u);
    /* 00581296: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00581299: mov byte ptr [0xa741f0], dl */ W8((u32)(0xa741f0u), (u8)r_edx);
L_0058129f:; BB(0x0058129f);
    /* 0058129f: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005812a5: fcom dword ptr [0x927cf0] */ fx_compare(ST(0), R_F32((u32)(0x927cf0u))); 
    /* 005812ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005812ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005812ae: jb 0x581485 */ if (fC) goto L_00581485;
L_005812b4:; BB(0x005812b4);
    /* 005812b4: fcom dword ptr [0xa741f4] */ fx_compare(ST(0), R_F32((u32)(0xa741f4u))); 
    /* 005812ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005812bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005812bd: ja 0x581485 */ if ((!fC&&!fZ)) goto L_00581485;
L_005812c3:; BB(0x005812c3);
    /* 005812c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005812c5: fild dword ptr [esi + 0x390] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x390u)));
    /* 005812cb: fcomp dword ptr [0xa7424c] */ fx_compare(ST(0), R_F32((u32)(0xa7424cu))); FPOP();
    /* 005812d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005812d3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005812d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005812d9: jae 0x5812dd */ if (!fC) goto L_005812dd;
L_005812db:; BB(0x005812db);
    /* 005812db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005812dd:; BB(0x005812dd);
    /* 005812dd: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005812e0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005812e2: je 0x58139b */ if (fZ) goto L_0058139b;
L_005812e8:; BB(0x005812e8);
    /* 005812e8: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005812ed: mov ebx, 0x100 */ r_ebx = 0x100u;
    /* 005812f2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005812f5: mov ecx, esi */ r_ecx = r_esi;
    /* 005812f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005812fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005812fb: push dword ptr [0xa74244] */ { u32 v = R32((u32)(0xa74244u)); r_esp -= 4; W32(r_esp, v); }
    /* 00581301: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x581306u); f_0077170c();
    /* 00581306: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00581309: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0058130c: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00581311: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581317: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0058131a: jne 0x58133e */ if (!fZ) goto L_0058133e;
L_0058131c:; BB(0x0058131c);
    /* 0058131c: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00581320: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581322: je 0x581329 */ if (fZ) goto L_00581329;
L_00581324:; BB(0x00581324);
    /* 00581324: mov ebx, 0xffffff00 */ r_ebx = 0xffffff00u;
L_00581329:; BB(0x00581329);
    /* 00581329: movzx edx, byte ptr [0xa741f0] */ r_edx = (u32)R8((u32)(0xa741f0u));
    /* 00581330: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00581336: add dword ptr [esi + 0x60], ebx */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00581339: jmp 0x581485 */ goto L_00581485;
L_0058133e:; BB(0x0058133e);
    /* 0058133e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00581341: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00581345: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00581347: fmul qword ptr [0x927d80] */ ST(0) = ST(0) * R_F64((u32)(0x927d80u));
    /* 0058134d: fdiv qword ptr [0x927d78] */ ST(0) = ST(0) / R_F64((u32)(0x927d78u));
    /* 00581353: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581357: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 0058135c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581361: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581365: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581369: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058136d: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00581371: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00581375: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0058137a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058137b: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058137e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x581383u); f_007a8c74();
    /* 00581383: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581386: movzx edx, byte ptr [0xa741f0] */ r_edx = (u32)R8((u32)(0xa741f0u));
    /* 0058138d: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00581393: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00581396: jmp 0x581485 */ goto L_00581485;
L_0058139b:; BB(0x0058139b);
    /* 0058139b: movzx eax, byte ptr [0xa74250] */ r_eax = (u32)R8((u32)(0xa74250u));
    /* 005813a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005813a4: jne 0x5813ba */ if (!fZ) goto L_005813ba;
L_005813a6:; BB(0x005813a6);
    /* 005813a6: mov dword ptr [0xa74254], 0x43480000 */ W32((u32)(0xa74254u), 0x43480000u);
    /* 005813b0: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005813b5: mov byte ptr [0xa74250], al */ W8((u32)(0xa74250u), (u8)r_eax);
L_005813ba:; BB(0x005813ba);
    /* 005813ba: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005813be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005813bf: mov ecx, esi */ r_ecx = r_esi;
    /* 005813c1: push dword ptr [0xa74254] */ { u32 v = R32((u32)(0xa74254u)); r_esp -= 4; W32(r_esp, v); }
    /* 005813c7: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5813ccu); f_007714cc();
    /* 005813cc: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005813cf: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005813d4: je 0x5819e2 */ if (fZ) goto L_005819e2;
L_005813da:; BB(0x005813da);
    /* 005813da: movzx eax, byte ptr [0xa74250] */ r_eax = (u32)R8((u32)(0xa74250u));
    /* 005813e1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005813e3: jne 0x5813f9 */ if (!fZ) goto L_005813f9;
L_005813e5:; BB(0x005813e5);
    /* 005813e5: mov dword ptr [0xa74258], 0x41f00000 */ W32((u32)(0xa74258u), 0x41f00000u);
    /* 005813ef: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005813f4: mov byte ptr [0xa74250], al */ W8((u32)(0xa74250u), (u8)r_eax);
L_005813f9:; BB(0x005813f9);
    /* 005813f9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005813fb: je 0x581411 */ if (fZ) goto L_00581411;
L_005813fd:; BB(0x005813fd);
    /* 005813fd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00581401: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x581406u); f_0083173c();
    /* 00581406: fcomp dword ptr [0xa74258] */ fx_compare(ST(0), R_F32((u32)(0xa74258u))); FPOP();
    /* 0058140c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058140e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058140f: jae 0x581415 */ if (!fC) goto L_00581415;
L_00581411:; BB(0x00581411);
    /* 00581411: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00581413: jmp 0x58142a */ goto L_0058142a;
L_00581415:; BB(0x00581415);
    /* 00581415: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 0058141b: mov edx, 0xffffe800 */ r_edx = 0xffffe800u;
    /* 00581420: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581423: jne 0x58142a */ if (!fZ) goto L_0058142a;
L_00581425:; BB(0x00581425);
    /* 00581425: mov edx, 0x1800 */ r_edx = 0x1800u;
L_0058142a:; BB(0x0058142a);
    /* 0058142a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058142e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00581432: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00581434: fmul qword ptr [0x927d80] */ ST(0) = ST(0) * R_F64((u32)(0x927d80u));
    /* 0058143a: fdiv qword ptr [0x927d78] */ ST(0) = ST(0) / R_F64((u32)(0x927d78u));
    /* 00581440: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581444: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 00581449: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058144e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581452: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581456: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058145a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0058145e: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00581462: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581464: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00581469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058146a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058146d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x581472u); f_007a8c74();
    /* 00581472: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581475: movzx edx, byte ptr [0xa741f0] */ r_edx = (u32)R8((u32)(0xa741f0u));
    /* 0058147c: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00581482: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_00581485:; BB(0x00581485);
    /* 00581485: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581488: jne 0x5814a0 */ if (!fZ) goto L_005814a0;
L_0058148a:; BB(0x0058148a);
    /* 0058148a: mov dword ptr [0xa741f8], 0x41a00000 */ W32((u32)(0xa741f8u), 0x41a00000u);
    /* 00581494: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058149a: mov byte ptr [0xa741f0], dl */ W8((u32)(0xa741f0u), (u8)r_edx);
L_005814a0:; BB(0x005814a0);
    /* 005814a0: fld dword ptr [0x927cec] */ FPUSH(R_F32((u32)(0x927cecu)));
    /* 005814a6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005814a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005814aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005814ab: ja 0x581ce0 */ if ((!fC&&!fZ)) goto L_00581ce0;
L_005814b1:; BB(0x005814b1);
    /* 005814b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005814b3: fcom dword ptr [0xa741f8] */ fx_compare(ST(0), R_F32((u32)(0xa741f8u))); 
    /* 005814b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005814bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005814bc: jbe 0x5814c7 */ if ((fC||fZ)) goto L_005814c7;
L_005814be:; BB(0x005814be);
    /* 005814be: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005814c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005814c2: jmp 0x5816f6 */ goto L_005816f6;
L_005814c7:; BB(0x005814c7);
    /* 005814c7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005814c9: fmul dword ptr [0x927e4c] */ ST(0) = ST(0) * R_F32((u32)(0x927e4cu));
    /* 005814cf: fdiv dword ptr [0x927ce8] */ ST(0) = ST(0) / R_F32((u32)(0x927ce8u));
    /* 005814d5: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 005814d9: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 005814de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005814e3: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 005814e7: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 005814eb: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 005814ef: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005814f3: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 005814f7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5814fcu); f_0082dcbc();
    /* 005814fc: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00581500: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581504: fcomp dword ptr [0x927e48] */ fx_compare(ST(0), R_F32((u32)(0x927e48u))); FPOP();
    /* 0058150a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058150c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058150d: jbe 0x5816f6 */ if ((fC||fZ)) goto L_005816f6;
L_00581513:; BB(0x00581513);
    /* 00581513: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581517: fmul dword ptr [0x927ce4] */ ST(0) = ST(0) * R_F32((u32)(0x927ce4u));
    /* 0058151d: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00581520: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00581523: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00581526: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 0058152c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058152e: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00581532: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00581536: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0058153a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058153d: jne 0x581549 */ if (!fZ) goto L_00581549;
L_0058153f:; BB(0x0058153f);
    /* 0058153f: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581543: fchs  */ ST(0) = -ST(0);
    /* 00581545: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581549:; BB(0x00581549);
    /* 00581549: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058154c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x581551u); f_0082ddd8();
    /* 00581551: fmul dword ptr [esp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x6cu));
    /* 00581555: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00581559: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058155b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058155e: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00581562: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x581567u); f_0082dcbc();
    /* 00581567: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0058156b: movzx edx, byte ptr [0xa74260] */ r_edx = (u32)R8((u32)(0xa74260u));
    /* 00581572: fchs  */ ST(0) = -ST(0);
    /* 00581574: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00581576: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581579: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0058157d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058157f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00581583: jne 0x581598 */ if (!fZ) goto L_00581598;
L_00581585:; BB(0x00581585);
    /* 00581585: mov eax, dword ptr [0xa74244] */ r_eax = R32((u32)(0xa74244u));
    /* 0058158a: mov dword ptr [0xa74264], eax */ W32((u32)(0xa74264u), r_eax);
    /* 0058158f: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00581592: mov byte ptr [0xa74260], dl */ W8((u32)(0xa74260u), (u8)r_edx);
L_00581598:; BB(0x00581598);
    /* 00581598: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058159b: jne 0x5815b7 */ if (!fZ) goto L_005815b7;
L_0058159d:; BB(0x0058159d);
    /* 0058159d: fld dword ptr [0xa74264] */ FPUSH(R_F32((u32)(0xa74264u)));
    /* 005815a3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005815a5: fstp dword ptr [0xa74268] */ W_F32((u32)(0xa74268u), ST(0)); FPOP();
    /* 005815ab: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005815b1: mov byte ptr [0xa74260], dl */ W8((u32)(0xa74260u), (u8)r_edx);
L_005815b7:; BB(0x005815b7);
    /* 005815b7: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005815ba: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 005815bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005815be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005815bf: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5815c4u); f_007a9180();
    /* 005815c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005815c7: fcomp dword ptr [0xa74268] */ fx_compare(ST(0), R_F32((u32)(0xa74268u))); FPOP();
    /* 005815cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005815cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005815d0: ja 0x5816ef */ if ((!fC&&!fZ)) goto L_005816ef;
L_005815d6:; BB(0x005815d6);
    /* 005815d6: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 005815da: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 005815de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005815e0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005815e4: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005815e8: mov edx, ebx */ r_edx = r_ebx;
    /* 005815ea: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005815ee: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005815f2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5815f7u); f_0082f9c4();
    /* 005815f7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005815fb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x581600u); f_0083173c();
    /* 00581600: fcomp dword ptr [0x927e48] */ fx_compare(ST(0), R_F32((u32)(0x927e48u))); FPOP();
    /* 00581606: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581608: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581609: je 0x5816ef */ if (fZ) goto L_005816ef;
L_0058160f:; BB(0x0058160f);
    /* 0058160f: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 00581613: mov edi, 1 */ r_edi = 0x1u;
L_00581618:; BB(0x00581618);
    /* 00581618: movzx eax, byte ptr [0xa74260] */ r_eax = (u32)R8((u32)(0xa74260u));
    /* 0058161f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581621: jne 0x581637 */ if (!fZ) goto L_00581637;
L_00581623:; BB(0x00581623);
    /* 00581623: mov dword ptr [0xa7426c], 0x41200000 */ W32((u32)(0xa7426cu), 0x41200000u);
    /* 0058162d: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581632: mov byte ptr [0xa74260], al */ W8((u32)(0xa74260u), (u8)r_eax);
L_00581637:; BB(0x00581637);
    /* 00581637: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0058163b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0058163f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581642: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 00581645: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00581649: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0058164c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00581650: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00581654: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x581659u); f_0082ebac();
    /* 00581659: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0058165d: fadd dword ptr [0xa7426c] */ ST(0) = ST(0) + R_F32((u32)(0xa7426cu));
    /* 00581663: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00581667: lea ebp, [esp + 0x24] */ r_ebp = (u32)(r_esp+0x24u);
    /* 0058166b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058166f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581670: mov ecx, esi */ r_ecx = r_esi;
    /* 00581672: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581673: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581678u); f_007b4c58();
    /* 00581678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058167a: je 0x581692 */ if (fZ) goto L_00581692;
L_0058167c:; BB(0x0058167c);
    /* 0058167c: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00581680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581681: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00581682: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x581687u); f_00780d3c();
    /* 00581687: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058168a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058168c: je 0x5819f4 */ if (fZ) goto L_005819f4;
L_00581692:; BB(0x00581692);
    /* 00581692: mov ebp, edi */ r_ebp = r_edi;
    /* 00581694: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00581697: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058169d: je 0x5816a1 */ if (fZ) goto L_005816a1;
L_0058169f:; BB(0x0058169f);
    /* 0058169f: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_005816a1:; BB(0x005816a1);
    /* 005816a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005816a3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5816a8u); f_0082dcbc();
    /* 005816a8: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 005816ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005816ae: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5816b3u); f_0082ddd8();
    /* 005816b3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005816b7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005816bb: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005816bf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005816c3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005816c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005816c7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005816c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005816cb: fchs  */ ST(0) = -ST(0);
    /* 005816cd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005816cf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005816d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005816d3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005816d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005816d8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005816dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005816de: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005816e2: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005816e5: jl 0x581618 */ if ((fS!=fO)) goto L_00581618;
L_005816eb:; BB(0x005816eb);
    /* 005816eb: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_005816ef:; BB(0x005816ef);
    /* 005816ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005816f1: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5816f6u); f_007b6880();
L_005816f6:; BB(0x005816f6);
    /* 005816f6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005816f9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005816fb: jne 0x581978 */ if (!fZ) goto L_00581978;
L_00581701:; BB(0x00581701);
    /* 00581701: movzx eax, byte ptr [0xa74270] */ r_eax = (u32)R8((u32)(0xa74270u));
    /* 00581708: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058170a: jne 0x581726 */ if (!fZ) goto L_00581726;
L_0058170c:; BB(0x0058170c);
    /* 0058170c: fld dword ptr [0xa74244] */ FPUSH(R_F32((u32)(0xa74244u)));
    /* 00581712: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00581714: fst dword ptr [0xa74274] */ W_F32((u32)(0xa74274u), ST(0));
    /* 0058171a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058171f: mov byte ptr [0xa74270], al */ W8((u32)(0xa74270u), (u8)r_eax);
    /* 00581724: jmp 0x58172c */ goto L_0058172c;
L_00581726:; BB(0x00581726);
    /* 00581726: fld dword ptr [0xa74274] */ FPUSH(R_F32((u32)(0xa74274u)));
L_0058172c:; BB(0x0058172c);
    /* 0058172c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0058172e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00581733: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00581735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581737: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581739: jle 0x58178a */ if ((fZ||fS!=fO)) goto L_0058178a;
L_0058173b:; BB(0x0058173b);
    /* 0058173b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058173d: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581741:; BB(0x00581741);
    /* 00581741: mov edx, dword ptr [ebx*4 + 0xaad720] */ r_edx = R32((u32)(r_ebx*4+0xaad720u));
    /* 00581748: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058174a: je 0x581779 */ if (fZ) goto L_00581779;
L_0058174c:; BB(0x0058174c);
    /* 0058174c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0058174f: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581757: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58175cu); f_007a9180();
    /* 0058175c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058175f: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581763: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00581765: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581767: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581768: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0058176d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058176f: jbe 0x581773 */ if ((fC||fZ)) goto L_00581773;
L_00581771:; BB(0x00581771);
    /* 00581771: fst st(1) */ ST(1) = ST(0);
L_00581773:; BB(0x00581773);
    /* 00581773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581775: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581779:; BB(0x00581779);
    /* 00581779: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058177c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058177e: jl 0x581741 */ if ((fS!=fO)) goto L_00581741;
L_00581780:; BB(0x00581780);
    /* 00581780: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581784: fld dword ptr [0xa74274] */ FPUSH(R_F32((u32)(0xa74274u)));
L_0058178a:; BB(0x0058178a);
    /* 0058178a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058178c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058178e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058178f: jbe 0x581996 */ if ((fC||fZ)) goto L_00581996;
L_00581795:; BB(0x00581795);
    /* 00581795: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0058179b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058179d: jne 0x581978 */ if (!fZ) goto L_00581978;
L_005817a3:; BB(0x005817a3);
    /* 005817a3: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005817a8: movsx edi, word ptr [esi + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 005817af: mov ebx, dword ptr [esi + 0x3fc] */ r_ebx = R32((u32)(r_esi+0x3fcu));
    /* 005817b5: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005817b7: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005817ba: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005817bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005817be: jg 0x581978 */ if ((!fZ&&fS==fO)) goto L_00581978;
L_005817c4:; BB(0x005817c4);
    /* 005817c4: movzx eax, byte ptr [0xa74278] */ r_eax = (u32)R8((u32)(0xa74278u));
    /* 005817cb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817cd: jne 0x5817e1 */ if (!fZ) goto L_005817e1;
L_005817cf:; BB(0x005817cf);
    /* 005817cf: mov dword ptr [0xa7427c], 0x41a00000 */ W32((u32)(0xa7427cu), 0x41a00000u);
    /* 005817d9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005817dc: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_005817e1:; BB(0x005817e1);
    /* 005817e1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817e3: jne 0x5817f7 */ if (!fZ) goto L_005817f7;
L_005817e5:; BB(0x005817e5);
    /* 005817e5: mov dword ptr [0xa74280], 0x41200000 */ W32((u32)(0xa74280u), 0x41200000u);
    /* 005817ef: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005817f2: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_005817f7:; BB(0x005817f7);
    /* 005817f7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817f9: jne 0x581817 */ if (!fZ) goto L_00581817;
L_005817fb:; BB(0x005817fb);
    /* 005817fb: fld dword ptr [0x927e3c] */ FPUSH(R_F32((u32)(0x927e3cu)));
    /* 00581801: mov dword ptr [0xa7425c], 0x41200000 */ W32((u32)(0xa7425cu), 0x41200000u);
    /* 0058180b: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581810: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
    /* 00581815: jmp 0x58181d */ goto L_0058181d;
L_00581817:; BB(0x00581817);
    /* 00581817: fld dword ptr [0xa7425c] */ FPUSH(R_F32((u32)(0xa7425cu)));
L_0058181d:; BB(0x0058181d);
    /* 0058181d: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 00581821: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581824: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00581828: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0058182b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058182d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581830: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00581834: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581837: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0058183b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058183d: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00581841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581843: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581844: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581849u); f_007b4c58();
    /* 00581849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058184b: je 0x581978 */ if (fZ) goto L_00581978;
L_00581851:; BB(0x00581851);
    /* 00581851: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581857: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 0058185d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058185f: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581865: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581866: ja 0x581ce9 */ if ((!fC&&!fZ)) goto L_00581ce9;
L_0058186c:; BB(0x0058186c);
    /* 0058186c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058186e: fmul dword ptr [0x927e44] */ ST(0) = ST(0) * R_F32((u32)(0x927e44u));
    /* 00581874: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581876: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 0058187a: fmul dword ptr [0x927e40] */ ST(0) = ST(0) * R_F32((u32)(0x927e40u));
    /* 00581880: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00581882: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581886: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 0058188b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581890: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581894: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581898: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058189c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005818a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005818a2: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
L_005818a6:; BB(0x005818a6);
    /* 005818a6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005818a9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005818ad: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005818b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005818b2: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005818b6: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 005818b9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005818bd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5818c2u); f_0082dcbc();
    /* 005818c2: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 005818c6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 005818ca: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005818ce: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005818d2: fadd dword ptr [0xa7425c] */ ST(0) = ST(0) + R_F32((u32)(0xa7425cu));
    /* 005818d8: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 005818dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005818de: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5818e3u); f_0082ddd8();
    /* 005818e3: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 005818e7: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 005818eb: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005818ef: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005818f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005818f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005818f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005818f8: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5818fdu); f_007b4c58();
    /* 005818fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005818ff: je 0x581978 */ if (fZ) goto L_00581978;
L_00581901:; BB(0x00581901);
    /* 00581901: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00581903: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581909: jl 0x5818a6 */ if ((fS!=fO)) goto L_005818a6;
L_0058190b:; BB(0x0058190b);
    /* 0058190b: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 0058190f: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581915: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00581917: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581919: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 0058191f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581921: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581922: jbe 0x58186c */ if ((fC||fZ)) goto L_0058186c;
L_00581928:; BB(0x00581928);
    /* 00581928: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058192a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058192c:; BB(0x0058192c);
    /* 0058192c: mov dword ptr [esi + 0x37c], 9 */ W32((u32)(r_esi+0x37cu), 0x9u);
    /* 00581936: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 0058193c: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_00581942:; BB(0x00581942);
    /* 00581942: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581946: je 0x581955 */ if (fZ) goto L_00581955;
L_00581948:; BB(0x00581948);
    /* 00581948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581949: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58194eu); f_005cdcc0();
    /* 0058194e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058194f: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581955:; BB(0x00581955);
    /* 00581955: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581958: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058195a: ja 0x581942 */ if ((!fC&&!fZ)) goto L_00581942;
L_0058195c:; BB(0x0058195c);
    /* 0058195c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581962: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058196b: je 0x581971 */ if (fZ) goto L_00581971;
L_0058196d:; BB(0x0058196d);
    /* 0058196d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058196f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581971u); call_ind(t); }
L_00581971:; BB(0x00581971);
    /* 00581971: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581975: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581976: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581977: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_00581978:; BB(0x00581978);
    /* 00581978: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0058197e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581981: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00581987: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581989: jle 0x581a48 */ if ((fZ||fS!=fO)) goto L_00581a48;
L_0058198f:; BB(0x0058198f);
    /* 0058198f: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581992: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581993: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581994: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581995: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_00581996:; BB(0x00581996);
    /* 00581996: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 005819a0: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 005819a6: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_005819ac:; BB(0x005819ac);
    /* 005819ac: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005819ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819b0: je 0x5819bf */ if (fZ) goto L_005819bf;
L_005819b2:; BB(0x005819b2);
    /* 005819b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005819b3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5819b8u); f_005cdcc0();
    /* 005819b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005819b9: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005819bf:; BB(0x005819bf);
    /* 005819bf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005819c2: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005819c4: ja 0x5819ac */ if ((!fC&&!fZ)) goto L_005819ac;
L_005819c6:; BB(0x005819c6);
    /* 005819c6: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 005819cc: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005819d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819d5: je 0x5819db */ if (fZ) goto L_005819db;
L_005819d7:; BB(0x005819d7);
    /* 005819d7: mov ecx, esi */ r_ecx = r_esi;
    /* 005819d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5819dbu); call_ind(t); }
L_005819db:; BB(0x005819db);
    /* 005819db: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005819de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005819df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005819e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005819e1: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_005819e2:; BB(0x005819e2);
    /* 005819e2: movzx edx, byte ptr [0xa741f0] */ r_edx = (u32)R8((u32)(0xa741f0u));
    /* 005819e9: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005819ef: jmp 0x581485 */ goto L_00581485;
L_005819f4:; BB(0x005819f4);
    /* 005819f4: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 005819f8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005819fc: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005819ff: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581a02: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581a05: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00581a08: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00581a0c: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00581a0f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00581a13: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 00581a16: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 00581a19: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00581a1c: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00581a1f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00581a23: mov dword ptr [esi + 0x38c], edx */ W32((u32)(r_esi+0x38cu), r_edx);
    /* 00581a29: mov dword ptr [esi + 0x250], eax */ W32((u32)(r_esi+0x250u), r_eax);
    /* 00581a2f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00581a33: mov dword ptr [esi + 0x254], eax */ W32((u32)(r_esi+0x254u), r_eax);
    /* 00581a39: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00581a3d: mov dword ptr [esi + 0x258], eax */ W32((u32)(r_esi+0x258u), r_eax);
    /* 00581a43: jmp 0x5816ef */ goto L_005816ef;
L_00581a48:; BB(0x00581a48);
    /* 00581a48: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00581a4b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a4d: jne 0x581c24 */ if (!fZ) goto L_00581c24;
L_00581a53:; BB(0x00581a53);
    /* 00581a53: mov eax, dword ptr [esi + 0x404] */ r_eax = R32((u32)(r_esi+0x404u));
    /* 00581a59: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a5c: jl 0x581c24 */ if ((fS!=fO)) goto L_00581c24;
L_00581a62:; BB(0x00581a62);
    /* 00581a62: movzx eax, byte ptr [0xa74278] */ r_eax = (u32)R8((u32)(0xa74278u));
    /* 00581a69: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a6b: jne 0x581a7f */ if (!fZ) goto L_00581a7f;
L_00581a6d:; BB(0x00581a6d);
    /* 00581a6d: mov dword ptr [0xa7427c], 0x41a00000 */ W32((u32)(0xa7427cu), 0x41a00000u);
    /* 00581a77: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581a7a: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_00581a7f:; BB(0x00581a7f);
    /* 00581a7f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a81: jne 0x581a95 */ if (!fZ) goto L_00581a95;
L_00581a83:; BB(0x00581a83);
    /* 00581a83: mov dword ptr [0xa74280], 0x41200000 */ W32((u32)(0xa74280u), 0x41200000u);
    /* 00581a8d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581a90: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_00581a95:; BB(0x00581a95);
    /* 00581a95: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a97: jne 0x581ab5 */ if (!fZ) goto L_00581ab5;
L_00581a99:; BB(0x00581a99);
    /* 00581a99: fld dword ptr [0x927e3c] */ FPUSH(R_F32((u32)(0x927e3cu)));
    /* 00581a9f: mov dword ptr [0xa7425c], 0x41200000 */ W32((u32)(0xa7425cu), 0x41200000u);
    /* 00581aa9: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581aae: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
    /* 00581ab3: jmp 0x581abb */ goto L_00581abb;
L_00581ab5:; BB(0x00581ab5);
    /* 00581ab5: fld dword ptr [0xa7425c] */ FPUSH(R_F32((u32)(0xa7425cu)));
L_00581abb:; BB(0x00581abb);
    /* 00581abb: lea edi, [esp + 0x48] */ r_edi = (u32)(r_esp+0x48u);
    /* 00581abf: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581ac2: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00581ac6: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00581ac9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00581acb: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581ace: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00581ad2: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581ad5: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00581ad9: mov ecx, esi */ r_ecx = r_esi;
    /* 00581adb: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 00581adf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581ae1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581ae2: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581ae7u); f_007b4c58();
    /* 00581ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581ae9: je 0x581c24 */ if (fZ) goto L_00581c24;
L_00581aef:; BB(0x00581aef);
    /* 00581aef: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581af5: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 00581afb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581afd: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581b03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581b04: ja 0x581cf2 */ if ((!fC&&!fZ)) goto L_00581cf2;
L_00581b0a:; BB(0x00581b0a);
    /* 00581b0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581b0c: fmul dword ptr [0x927e44] */ ST(0) = ST(0) * R_F32((u32)(0x927e44u));
    /* 00581b12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581b14: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00581b18: fmul dword ptr [0x927e40] */ ST(0) = ST(0) * R_F32((u32)(0x927e40u));
    /* 00581b1e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00581b20: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581b24: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 00581b29: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581b2e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581b32: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581b36: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 00581b3a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00581b3e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00581b40: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
L_00581b44:; BB(0x00581b44);
    /* 00581b44: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581b47: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00581b4b: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581b4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00581b50: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00581b54: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00581b57: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00581b5b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x581b60u); f_0082dcbc();
    /* 00581b60: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 00581b64: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00581b68: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00581b6c: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00581b70: fadd dword ptr [0xa7425c] */ ST(0) = ST(0) + R_F32((u32)(0xa7425cu));
    /* 00581b76: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00581b7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00581b7c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x581b81u); f_0082ddd8();
    /* 00581b81: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 00581b85: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00581b89: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00581b8d: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00581b91: mov ecx, esi */ r_ecx = r_esi;
    /* 00581b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581b96: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581b9bu); f_007b4c58();
    /* 00581b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581b9d: je 0x581c24 */ if (fZ) goto L_00581c24;
L_00581ba3:; BB(0x00581ba3);
    /* 00581ba3: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00581ba5: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581bab: jl 0x581b44 */ if ((fS!=fO)) goto L_00581b44;
L_00581bad:; BB(0x00581bad);
    /* 00581bad: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00581bb1: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581bb7: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00581bb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581bbb: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 00581bc1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581bc3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581bc4: jbe 0x581b0a */ if ((fC||fZ)) goto L_00581b0a;
L_00581bca:; BB(0x00581bca);
    /* 00581bca: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581bcc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00581bce:; BB(0x00581bce);
    /* 00581bce: mov dword ptr [esi + 0x404], 0 */ W32((u32)(r_esi+0x404u), 0x0u);
    /* 00581bd8: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581bde: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
    /* 00581be4: mov dword ptr [esi + 0x37c], 9 */ W32((u32)(r_esi+0x37cu), 0x9u);
L_00581bee:; BB(0x00581bee);
    /* 00581bee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581bf2: je 0x581c01 */ if (fZ) goto L_00581c01;
L_00581bf4:; BB(0x00581bf4);
    /* 00581bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581bf5: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581bfau); f_005cdcc0();
    /* 00581bfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581bfb: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581c01:; BB(0x00581c01);
    /* 00581c01: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581c04: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581c06: ja 0x581bee */ if ((!fC&&!fZ)) goto L_00581bee;
L_00581c08:; BB(0x00581c08);
    /* 00581c08: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581c0e: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c17: je 0x581c1d */ if (fZ) goto L_00581c1d;
L_00581c19:; BB(0x00581c19);
    /* 00581c19: mov ecx, esi */ r_ecx = r_esi;
    /* 00581c1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581c1du); call_ind(t); }
L_00581c1d:; BB(0x00581c1d);
    /* 00581c1d: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581c20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581c21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581c22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581c23: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_00581c24:; BB(0x00581c24);
    /* 00581c24: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 00581c2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c2c: je 0x581c83 */ if (fZ) goto L_00581c83;
L_00581c2e:; BB(0x00581c2e);
    /* 00581c2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c31: jne 0x58198f */ if (!fZ) goto L_0058198f;
L_00581c37:; BB(0x00581c37);
    /* 00581c37: mov dword ptr [esi + 0x37c], 5 */ W32((u32)(r_esi+0x37cu), 0x5u);
    /* 00581c41: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581c47: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_00581c4d:; BB(0x00581c4d);
    /* 00581c4d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581c4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c51: je 0x581c60 */ if (fZ) goto L_00581c60;
L_00581c53:; BB(0x00581c53);
    /* 00581c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581c54: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581c59u); f_005cdcc0();
    /* 00581c59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581c5a: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581c60:; BB(0x00581c60);
    /* 00581c60: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581c63: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581c65: ja 0x581c4d */ if ((!fC&&!fZ)) goto L_00581c4d;
L_00581c67:; BB(0x00581c67);
    /* 00581c67: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581c6d: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c76: je 0x581c7c */ if (fZ) goto L_00581c7c;
L_00581c78:; BB(0x00581c78);
    /* 00581c78: mov ecx, esi */ r_ecx = r_esi;
    /* 00581c7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581c7cu); call_ind(t); }
L_00581c7c:; BB(0x00581c7c);
    /* 00581c7c: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581c7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581c80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581c81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581c82: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_00581c83:; BB(0x00581c83);
    /* 00581c83: add dword ptr [esi + 0x3f4], 1 */ { u32 ad = (u32)(r_esi+0x3f4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00581c8a: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581c90: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
    /* 00581c96: mov dword ptr [esi + 0x3f8], 0 */ W32((u32)(r_esi+0x3f8u), 0x0u);
    /* 00581ca0: mov dword ptr [esi + 0x37c], 7 */ W32((u32)(r_esi+0x37cu), 0x7u);
L_00581caa:; BB(0x00581caa);
    /* 00581caa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581cac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581cae: je 0x581cbd */ if (fZ) goto L_00581cbd;
L_00581cb0:; BB(0x00581cb0);
    /* 00581cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581cb1: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581cb6u); f_005cdcc0();
    /* 00581cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581cb7: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581cbd:; BB(0x00581cbd);
    /* 00581cbd: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581cc0: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581cc2: ja 0x581caa */ if ((!fC&&!fZ)) goto L_00581caa;
L_00581cc4:; BB(0x00581cc4);
    /* 00581cc4: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581cca: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581cd3: je 0x581cd9 */ if (fZ) goto L_00581cd9;
L_00581cd5:; BB(0x00581cd5);
    /* 00581cd5: mov ecx, esi */ r_ecx = r_esi;
    /* 00581cd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581cd9u); call_ind(t); }
L_00581cd9:; BB(0x00581cd9);
    /* 00581cd9: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581cdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581cde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581cdf: ret  */ FN_RET(0x00581278); r_esp += 4; return;
L_00581ce0:; BB(0x00581ce0);
    /* 00581ce0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581ce2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581ce4: jmp 0x5816f6 */ goto L_005816f6;
L_00581ce9:; BB(0x00581ce9);
    /* 00581ce9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581ceb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581ced: jmp 0x58192c */ goto L_0058192c;
L_00581cf2:; BB(0x00581cf2);
    /* 00581cf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581cf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581cf6: jmp 0x581bce */ goto L_00581bce;
}

void f_005814e0(void)
{
    FN_ENTER(0x005814e0);
    /* 005814e0: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005814e2: add byte ptr [ecx - 0x26a3dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd95c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005814e8: insb byte ptr es:[edi], dx */ UNSUP(0x005814e8, "insb byte ptr es:[edi], dx");
    /* 005814e9: and al, 0x5c */ {  u32 a = (u8)r_eax; u32 b = 0x5cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005814eb: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 005814ef: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005814f3: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 005814f7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5814fcu); f_0082dcbc();
    /* 005814fc: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00581500: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581504: fcomp dword ptr [0x927e48] */ fx_compare(ST(0), R_F32((u32)(0x927e48u))); FPOP();
    /* 0058150a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058150c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058150d: jbe 0x5816f6 */ if ((fC||fZ)) goto L_005816f6;
L_00581513:; BB(0x00581513);
    /* 00581513: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581517: fmul dword ptr [0x927ce4] */ ST(0) = ST(0) * R_F32((u32)(0x927ce4u));
    /* 0058151d: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00581520: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00581523: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00581526: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 0058152c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058152e: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00581532: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00581536: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0058153a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058153d: jne 0x581549 */ if (!fZ) goto L_00581549;
L_0058153f:; BB(0x0058153f);
    /* 0058153f: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581543: fchs  */ ST(0) = -ST(0);
    /* 00581545: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581549:; BB(0x00581549);
    /* 00581549: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058154c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x581551u); f_0082ddd8();
    /* 00581551: fmul dword ptr [esp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x6cu));
    /* 00581555: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00581559: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058155b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058155e: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00581562: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x581567u); f_0082dcbc();
    /* 00581567: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0058156b: movzx edx, byte ptr [0xa74260] */ r_edx = (u32)R8((u32)(0xa74260u));
    /* 00581572: fchs  */ ST(0) = -ST(0);
    /* 00581574: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00581576: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581579: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0058157d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058157f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00581583: jne 0x581598 */ if (!fZ) goto L_00581598;
L_00581585:; BB(0x00581585);
    /* 00581585: mov eax, dword ptr [0xa74244] */ r_eax = R32((u32)(0xa74244u));
    /* 0058158a: mov dword ptr [0xa74264], eax */ W32((u32)(0xa74264u), r_eax);
    /* 0058158f: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00581592: mov byte ptr [0xa74260], dl */ W8((u32)(0xa74260u), (u8)r_edx);
L_00581598:; BB(0x00581598);
    /* 00581598: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058159b: jne 0x5815b7 */ if (!fZ) goto L_005815b7;
L_0058159d:; BB(0x0058159d);
    /* 0058159d: fld dword ptr [0xa74264] */ FPUSH(R_F32((u32)(0xa74264u)));
    /* 005815a3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005815a5: fstp dword ptr [0xa74268] */ W_F32((u32)(0xa74268u), ST(0)); FPOP();
    /* 005815ab: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005815b1: mov byte ptr [0xa74260], dl */ W8((u32)(0xa74260u), (u8)r_edx);
L_005815b7:; BB(0x005815b7);
    /* 005815b7: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005815ba: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 005815bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005815be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005815bf: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5815c4u); f_007a9180();
    /* 005815c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005815c7: fcomp dword ptr [0xa74268] */ fx_compare(ST(0), R_F32((u32)(0xa74268u))); FPOP();
    /* 005815cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005815cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005815d0: ja 0x5816ef */ if ((!fC&&!fZ)) goto L_005816ef;
L_005815d6:; BB(0x005815d6);
    /* 005815d6: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 005815da: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 005815de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005815e0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005815e4: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005815e8: mov edx, ebx */ r_edx = r_ebx;
    /* 005815ea: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005815ee: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005815f2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5815f7u); f_0082f9c4();
    /* 005815f7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005815fb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x581600u); f_0083173c();
    /* 00581600: fcomp dword ptr [0x927e48] */ fx_compare(ST(0), R_F32((u32)(0x927e48u))); FPOP();
    /* 00581606: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581608: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581609: je 0x5816ef */ if (fZ) goto L_005816ef;
L_0058160f:; BB(0x0058160f);
    /* 0058160f: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 00581613: mov edi, 1 */ r_edi = 0x1u;
L_00581618:; BB(0x00581618);
    /* 00581618: movzx eax, byte ptr [0xa74260] */ r_eax = (u32)R8((u32)(0xa74260u));
    /* 0058161f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581621: jne 0x581637 */ if (!fZ) goto L_00581637;
L_00581623:; BB(0x00581623);
    /* 00581623: mov dword ptr [0xa7426c], 0x41200000 */ W32((u32)(0xa7426cu), 0x41200000u);
    /* 0058162d: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581632: mov byte ptr [0xa74260], al */ W8((u32)(0xa74260u), (u8)r_eax);
L_00581637:; BB(0x00581637);
    /* 00581637: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0058163b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0058163f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581642: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 00581645: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00581649: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0058164c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00581650: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00581654: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x581659u); f_0082ebac();
    /* 00581659: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0058165d: fadd dword ptr [0xa7426c] */ ST(0) = ST(0) + R_F32((u32)(0xa7426cu));
    /* 00581663: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00581667: lea ebp, [esp + 0x24] */ r_ebp = (u32)(r_esp+0x24u);
    /* 0058166b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058166f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581670: mov ecx, esi */ r_ecx = r_esi;
    /* 00581672: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581673: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581678u); f_007b4c58();
    /* 00581678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058167a: je 0x581692 */ if (fZ) goto L_00581692;
L_0058167c:; BB(0x0058167c);
    /* 0058167c: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00581680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581681: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00581682: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x581687u); f_00780d3c();
    /* 00581687: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058168a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058168c: je 0x5819f4 */ if (fZ) goto L_005819f4;
L_00581692:; BB(0x00581692);
    /* 00581692: mov ebp, edi */ r_ebp = r_edi;
    /* 00581694: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00581697: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058169d: je 0x5816a1 */ if (fZ) goto L_005816a1;
L_0058169f:; BB(0x0058169f);
    /* 0058169f: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_005816a1:; BB(0x005816a1);
    /* 005816a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005816a3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5816a8u); f_0082dcbc();
    /* 005816a8: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 005816ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005816ae: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5816b3u); f_0082ddd8();
    /* 005816b3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005816b7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005816bb: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 005816bf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005816c3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005816c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005816c7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005816c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005816cb: fchs  */ ST(0) = -ST(0);
    /* 005816cd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005816cf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005816d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005816d3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005816d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005816d8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005816dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005816de: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005816e2: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005816e5: jl 0x581618 */ if ((fS!=fO)) goto L_00581618;
L_005816eb:; BB(0x005816eb);
    /* 005816eb: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_005816ef:; BB(0x005816ef);
    /* 005816ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005816f1: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5816f6u); f_007b6880();
L_005816f6:; BB(0x005816f6);
    /* 005816f6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005816f9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005816fb: jne 0x581978 */ if (!fZ) goto L_00581978;
L_00581701:; BB(0x00581701);
    /* 00581701: movzx eax, byte ptr [0xa74270] */ r_eax = (u32)R8((u32)(0xa74270u));
    /* 00581708: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058170a: jne 0x581726 */ if (!fZ) goto L_00581726;
L_0058170c:; BB(0x0058170c);
    /* 0058170c: fld dword ptr [0xa74244] */ FPUSH(R_F32((u32)(0xa74244u)));
    /* 00581712: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00581714: fst dword ptr [0xa74274] */ W_F32((u32)(0xa74274u), ST(0));
    /* 0058171a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058171f: mov byte ptr [0xa74270], al */ W8((u32)(0xa74270u), (u8)r_eax);
    /* 00581724: jmp 0x58172c */ goto L_0058172c;
L_00581726:; BB(0x00581726);
    /* 00581726: fld dword ptr [0xa74274] */ FPUSH(R_F32((u32)(0xa74274u)));
L_0058172c:; BB(0x0058172c);
    /* 0058172c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0058172e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00581733: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00581735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581737: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581739: jle 0x58178a */ if ((fZ||fS!=fO)) goto L_0058178a;
L_0058173b:; BB(0x0058173b);
    /* 0058173b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058173d: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581741:; BB(0x00581741);
    /* 00581741: mov edx, dword ptr [ebx*4 + 0xaad720] */ r_edx = R32((u32)(r_ebx*4+0xaad720u));
    /* 00581748: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058174a: je 0x581779 */ if (fZ) goto L_00581779;
L_0058174c:; BB(0x0058174c);
    /* 0058174c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0058174f: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581757: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58175cu); f_007a9180();
    /* 0058175c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058175f: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581763: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00581765: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581767: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581768: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0058176d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058176f: jbe 0x581773 */ if ((fC||fZ)) goto L_00581773;
L_00581771:; BB(0x00581771);
    /* 00581771: fst st(1) */ ST(1) = ST(0);
L_00581773:; BB(0x00581773);
    /* 00581773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581775: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00581779:; BB(0x00581779);
    /* 00581779: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058177c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058177e: jl 0x581741 */ if ((fS!=fO)) goto L_00581741;
L_00581780:; BB(0x00581780);
    /* 00581780: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00581784: fld dword ptr [0xa74274] */ FPUSH(R_F32((u32)(0xa74274u)));
L_0058178a:; BB(0x0058178a);
    /* 0058178a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058178c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058178e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058178f: jbe 0x581996 */ if ((fC||fZ)) goto L_00581996;
L_00581795:; BB(0x00581795);
    /* 00581795: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0058179b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058179d: jne 0x581978 */ if (!fZ) goto L_00581978;
L_005817a3:; BB(0x005817a3);
    /* 005817a3: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005817a8: movsx edi, word ptr [esi + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 005817af: mov ebx, dword ptr [esi + 0x3fc] */ r_ebx = R32((u32)(r_esi+0x3fcu));
    /* 005817b5: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005817b7: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005817ba: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005817bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005817be: jg 0x581978 */ if ((!fZ&&fS==fO)) goto L_00581978;
L_005817c4:; BB(0x005817c4);
    /* 005817c4: movzx eax, byte ptr [0xa74278] */ r_eax = (u32)R8((u32)(0xa74278u));
    /* 005817cb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817cd: jne 0x5817e1 */ if (!fZ) goto L_005817e1;
L_005817cf:; BB(0x005817cf);
    /* 005817cf: mov dword ptr [0xa7427c], 0x41a00000 */ W32((u32)(0xa7427cu), 0x41a00000u);
    /* 005817d9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005817dc: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_005817e1:; BB(0x005817e1);
    /* 005817e1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817e3: jne 0x5817f7 */ if (!fZ) goto L_005817f7;
L_005817e5:; BB(0x005817e5);
    /* 005817e5: mov dword ptr [0xa74280], 0x41200000 */ W32((u32)(0xa74280u), 0x41200000u);
    /* 005817ef: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005817f2: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_005817f7:; BB(0x005817f7);
    /* 005817f7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005817f9: jne 0x581817 */ if (!fZ) goto L_00581817;
L_005817fb:; BB(0x005817fb);
    /* 005817fb: fld dword ptr [0x927e3c] */ FPUSH(R_F32((u32)(0x927e3cu)));
    /* 00581801: mov dword ptr [0xa7425c], 0x41200000 */ W32((u32)(0xa7425cu), 0x41200000u);
    /* 0058180b: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581810: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
    /* 00581815: jmp 0x58181d */ goto L_0058181d;
L_00581817:; BB(0x00581817);
    /* 00581817: fld dword ptr [0xa7425c] */ FPUSH(R_F32((u32)(0xa7425cu)));
L_0058181d:; BB(0x0058181d);
    /* 0058181d: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 00581821: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581824: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00581828: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0058182b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058182d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581830: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00581834: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581837: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0058183b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058183d: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00581841: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581843: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581844: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581849u); f_007b4c58();
    /* 00581849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058184b: je 0x581978 */ if (fZ) goto L_00581978;
L_00581851:; BB(0x00581851);
    /* 00581851: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581857: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 0058185d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058185f: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581865: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581866: ja 0x581ce9 */ if ((!fC&&!fZ)) goto L_00581ce9;
L_0058186c:; BB(0x0058186c);
    /* 0058186c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058186e: fmul dword ptr [0x927e44] */ ST(0) = ST(0) * R_F32((u32)(0x927e44u));
    /* 00581874: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581876: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 0058187a: fmul dword ptr [0x927e40] */ ST(0) = ST(0) * R_F32((u32)(0x927e40u));
    /* 00581880: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00581882: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581886: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 0058188b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581890: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581894: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581898: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058189c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 005818a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005818a2: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
L_005818a6:; BB(0x005818a6);
    /* 005818a6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005818a9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005818ad: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005818b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005818b2: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005818b6: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 005818b9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005818bd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5818c2u); f_0082dcbc();
    /* 005818c2: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 005818c6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 005818ca: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005818ce: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005818d2: fadd dword ptr [0xa7425c] */ ST(0) = ST(0) + R_F32((u32)(0xa7425cu));
    /* 005818d8: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 005818dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005818de: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5818e3u); f_0082ddd8();
    /* 005818e3: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 005818e7: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 005818eb: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005818ef: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005818f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005818f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005818f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005818f8: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5818fdu); f_007b4c58();
    /* 005818fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005818ff: je 0x581978 */ if (fZ) goto L_00581978;
L_00581901:; BB(0x00581901);
    /* 00581901: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00581903: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581909: jl 0x5818a6 */ if ((fS!=fO)) goto L_005818a6;
L_0058190b:; BB(0x0058190b);
    /* 0058190b: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 0058190f: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581915: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00581917: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581919: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 0058191f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581921: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581922: jbe 0x58186c */ if ((fC||fZ)) goto L_0058186c;
L_00581928:; BB(0x00581928);
    /* 00581928: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058192a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058192c:; BB(0x0058192c);
    /* 0058192c: mov dword ptr [esi + 0x37c], 9 */ W32((u32)(r_esi+0x37cu), 0x9u);
    /* 00581936: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 0058193c: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_00581942:; BB(0x00581942);
    /* 00581942: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581946: je 0x581955 */ if (fZ) goto L_00581955;
L_00581948:; BB(0x00581948);
    /* 00581948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581949: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58194eu); f_005cdcc0();
    /* 0058194e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058194f: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581955:; BB(0x00581955);
    /* 00581955: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581958: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058195a: ja 0x581942 */ if ((!fC&&!fZ)) goto L_00581942;
L_0058195c:; BB(0x0058195c);
    /* 0058195c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581962: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581969: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058196b: je 0x581971 */ if (fZ) goto L_00581971;
L_0058196d:; BB(0x0058196d);
    /* 0058196d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058196f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581971u); call_ind(t); }
L_00581971:; BB(0x00581971);
    /* 00581971: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581975: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581976: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581977: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_00581978:; BB(0x00581978);
    /* 00581978: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0058197e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581981: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00581987: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581989: jle 0x581a48 */ if ((fZ||fS!=fO)) goto L_00581a48;
L_0058198f:; BB(0x0058198f);
    /* 0058198f: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581992: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581993: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581994: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581995: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_00581996:; BB(0x00581996);
    /* 00581996: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 005819a0: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 005819a6: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_005819ac:; BB(0x005819ac);
    /* 005819ac: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005819ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819b0: je 0x5819bf */ if (fZ) goto L_005819bf;
L_005819b2:; BB(0x005819b2);
    /* 005819b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005819b3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5819b8u); f_005cdcc0();
    /* 005819b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005819b9: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_005819bf:; BB(0x005819bf);
    /* 005819bf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005819c2: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005819c4: ja 0x5819ac */ if ((!fC&&!fZ)) goto L_005819ac;
L_005819c6:; BB(0x005819c6);
    /* 005819c6: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 005819cc: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 005819d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819d5: je 0x5819db */ if (fZ) goto L_005819db;
L_005819d7:; BB(0x005819d7);
    /* 005819d7: mov ecx, esi */ r_ecx = r_esi;
    /* 005819d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5819dbu); call_ind(t); }
L_005819db:; BB(0x005819db);
    /* 005819db: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005819de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005819df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005819e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005819e1: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_005819f4:; BB(0x005819f4);
    /* 005819f4: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 005819f8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005819fc: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005819ff: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581a02: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581a05: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00581a08: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00581a0c: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00581a0f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00581a13: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 00581a16: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 00581a19: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00581a1c: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00581a1f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00581a23: mov dword ptr [esi + 0x38c], edx */ W32((u32)(r_esi+0x38cu), r_edx);
    /* 00581a29: mov dword ptr [esi + 0x250], eax */ W32((u32)(r_esi+0x250u), r_eax);
    /* 00581a2f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00581a33: mov dword ptr [esi + 0x254], eax */ W32((u32)(r_esi+0x254u), r_eax);
    /* 00581a39: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00581a3d: mov dword ptr [esi + 0x258], eax */ W32((u32)(r_esi+0x258u), r_eax);
    /* 00581a43: jmp 0x5816ef */ goto L_005816ef;
L_00581a48:; BB(0x00581a48);
    /* 00581a48: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00581a4b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a4d: jne 0x581c24 */ if (!fZ) goto L_00581c24;
L_00581a53:; BB(0x00581a53);
    /* 00581a53: mov eax, dword ptr [esi + 0x404] */ r_eax = R32((u32)(r_esi+0x404u));
    /* 00581a59: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a5c: jl 0x581c24 */ if ((fS!=fO)) goto L_00581c24;
L_00581a62:; BB(0x00581a62);
    /* 00581a62: movzx eax, byte ptr [0xa74278] */ r_eax = (u32)R8((u32)(0xa74278u));
    /* 00581a69: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a6b: jne 0x581a7f */ if (!fZ) goto L_00581a7f;
L_00581a6d:; BB(0x00581a6d);
    /* 00581a6d: mov dword ptr [0xa7427c], 0x41a00000 */ W32((u32)(0xa7427cu), 0x41a00000u);
    /* 00581a77: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581a7a: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_00581a7f:; BB(0x00581a7f);
    /* 00581a7f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a81: jne 0x581a95 */ if (!fZ) goto L_00581a95;
L_00581a83:; BB(0x00581a83);
    /* 00581a83: mov dword ptr [0xa74280], 0x41200000 */ W32((u32)(0xa74280u), 0x41200000u);
    /* 00581a8d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581a90: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
L_00581a95:; BB(0x00581a95);
    /* 00581a95: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581a97: jne 0x581ab5 */ if (!fZ) goto L_00581ab5;
L_00581a99:; BB(0x00581a99);
    /* 00581a99: fld dword ptr [0x927e3c] */ FPUSH(R_F32((u32)(0x927e3cu)));
    /* 00581a9f: mov dword ptr [0xa7425c], 0x41200000 */ W32((u32)(0xa7425cu), 0x41200000u);
    /* 00581aa9: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581aae: mov byte ptr [0xa74278], al */ W8((u32)(0xa74278u), (u8)r_eax);
    /* 00581ab3: jmp 0x581abb */ goto L_00581abb;
L_00581ab5:; BB(0x00581ab5);
    /* 00581ab5: fld dword ptr [0xa7425c] */ FPUSH(R_F32((u32)(0xa7425cu)));
L_00581abb:; BB(0x00581abb);
    /* 00581abb: lea edi, [esp + 0x48] */ r_edi = (u32)(r_esp+0x48u);
    /* 00581abf: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581ac2: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00581ac6: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00581ac9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00581acb: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581ace: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00581ad2: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00581ad5: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00581ad9: mov ecx, esi */ r_ecx = r_esi;
    /* 00581adb: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 00581adf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581ae1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581ae2: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581ae7u); f_007b4c58();
    /* 00581ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581ae9: je 0x581c24 */ if (fZ) goto L_00581c24;
L_00581aef:; BB(0x00581aef);
    /* 00581aef: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581af5: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 00581afb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581afd: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581b03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581b04: ja 0x581cf2 */ if ((!fC&&!fZ)) goto L_00581cf2;
L_00581b0a:; BB(0x00581b0a);
    /* 00581b0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581b0c: fmul dword ptr [0x927e44] */ ST(0) = ST(0) * R_F32((u32)(0x927e44u));
    /* 00581b12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581b14: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00581b18: fmul dword ptr [0x927e40] */ ST(0) = ST(0) * R_F32((u32)(0x927e40u));
    /* 00581b1e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00581b20: fnstcw word ptr [esp + 0x54] */ W16((u32)(r_esp+0x54u), fcw);
    /* 00581b24: movzx eax, word ptr [esp + 0x54] */ r_eax = (u32)R16((u32)(r_esp+0x54u));
    /* 00581b29: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581b2e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00581b32: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 00581b36: fistp dword ptr [esp + 0x64] */ W32((u32)(r_esp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 00581b3a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00581b3e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00581b40: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
L_00581b44:; BB(0x00581b44);
    /* 00581b44: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00581b47: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00581b4b: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00581b4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00581b50: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00581b54: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00581b57: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00581b5b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x581b60u); f_0082dcbc();
    /* 00581b60: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 00581b64: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 00581b68: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00581b6c: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00581b70: fadd dword ptr [0xa7425c] */ ST(0) = ST(0) + R_F32((u32)(0xa7425cu));
    /* 00581b76: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00581b7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00581b7c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x581b81u); f_0082ddd8();
    /* 00581b81: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 00581b85: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 00581b89: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00581b8d: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00581b91: mov ecx, esi */ r_ecx = r_esi;
    /* 00581b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581b96: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x581b9bu); f_007b4c58();
    /* 00581b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581b9d: je 0x581c24 */ if (fZ) goto L_00581c24;
L_00581ba3:; BB(0x00581ba3);
    /* 00581ba3: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00581ba5: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581bab: jl 0x581b44 */ if ((fS!=fO)) goto L_00581b44;
L_00581bad:; BB(0x00581bad);
    /* 00581bad: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00581bb1: fld dword ptr [0xa74280] */ FPUSH(R_F32((u32)(0xa74280u)));
    /* 00581bb7: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00581bb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581bbb: fcom dword ptr [0xa7427c] */ fx_compare(ST(0), R_F32((u32)(0xa7427cu))); 
    /* 00581bc1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581bc3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581bc4: jbe 0x581b0a */ if ((fC||fZ)) goto L_00581b0a;
L_00581bca:; BB(0x00581bca);
    /* 00581bca: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581bcc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00581bce:; BB(0x00581bce);
    /* 00581bce: mov dword ptr [esi + 0x404], 0 */ W32((u32)(r_esi+0x404u), 0x0u);
    /* 00581bd8: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581bde: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
    /* 00581be4: mov dword ptr [esi + 0x37c], 9 */ W32((u32)(r_esi+0x37cu), 0x9u);
L_00581bee:; BB(0x00581bee);
    /* 00581bee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581bf2: je 0x581c01 */ if (fZ) goto L_00581c01;
L_00581bf4:; BB(0x00581bf4);
    /* 00581bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581bf5: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581bfau); f_005cdcc0();
    /* 00581bfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581bfb: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581c01:; BB(0x00581c01);
    /* 00581c01: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581c04: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581c06: ja 0x581bee */ if ((!fC&&!fZ)) goto L_00581bee;
L_00581c08:; BB(0x00581c08);
    /* 00581c08: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581c0e: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c17: je 0x581c1d */ if (fZ) goto L_00581c1d;
L_00581c19:; BB(0x00581c19);
    /* 00581c19: mov ecx, esi */ r_ecx = r_esi;
    /* 00581c1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581c1du); call_ind(t); }
L_00581c1d:; BB(0x00581c1d);
    /* 00581c1d: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581c20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581c21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581c22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581c23: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_00581c24:; BB(0x00581c24);
    /* 00581c24: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 00581c2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c2c: je 0x581c83 */ if (fZ) goto L_00581c83;
L_00581c2e:; BB(0x00581c2e);
    /* 00581c2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c31: jne 0x58198f */ if (!fZ) goto L_0058198f;
L_00581c37:; BB(0x00581c37);
    /* 00581c37: mov dword ptr [esi + 0x37c], 5 */ W32((u32)(r_esi+0x37cu), 0x5u);
    /* 00581c41: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581c47: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
L_00581c4d:; BB(0x00581c4d);
    /* 00581c4d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581c4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c51: je 0x581c60 */ if (fZ) goto L_00581c60;
L_00581c53:; BB(0x00581c53);
    /* 00581c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581c54: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581c59u); f_005cdcc0();
    /* 00581c59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581c5a: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581c60:; BB(0x00581c60);
    /* 00581c60: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581c63: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581c65: ja 0x581c4d */ if ((!fC&&!fZ)) goto L_00581c4d;
L_00581c67:; BB(0x00581c67);
    /* 00581c67: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581c6d: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c76: je 0x581c7c */ if (fZ) goto L_00581c7c;
L_00581c78:; BB(0x00581c78);
    /* 00581c78: mov ecx, esi */ r_ecx = r_esi;
    /* 00581c7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581c7cu); call_ind(t); }
L_00581c7c:; BB(0x00581c7c);
    /* 00581c7c: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581c7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581c80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581c81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581c82: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_00581c83:; BB(0x00581c83);
    /* 00581c83: add dword ptr [esi + 0x3f4], 1 */ { u32 ad = (u32)(r_esi+0x3f4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00581c8a: lea edi, [esi + 0x39c] */ r_edi = (u32)(r_esi+0x39cu);
    /* 00581c90: lea ebx, [esi + 0x3a4] */ r_ebx = (u32)(r_esi+0x3a4u);
    /* 00581c96: mov dword ptr [esi + 0x3f8], 0 */ W32((u32)(r_esi+0x3f8u), 0x0u);
    /* 00581ca0: mov dword ptr [esi + 0x37c], 7 */ W32((u32)(r_esi+0x37cu), 0x7u);
L_00581caa:; BB(0x00581caa);
    /* 00581caa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581cac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581cae: je 0x581cbd */ if (fZ) goto L_00581cbd;
L_00581cb0:; BB(0x00581cb0);
    /* 00581cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581cb1: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581cb6u); f_005cdcc0();
    /* 00581cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581cb7: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581cbd:; BB(0x00581cbd);
    /* 00581cbd: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581cc0: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581cc2: ja 0x581caa */ if ((!fC&&!fZ)) goto L_00581caa;
L_00581cc4:; BB(0x00581cc4);
    /* 00581cc4: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581cca: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581cd3: je 0x581cd9 */ if (fZ) goto L_00581cd9;
L_00581cd5:; BB(0x00581cd5);
    /* 00581cd5: mov ecx, esi */ r_ecx = r_esi;
    /* 00581cd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581cd9u); call_ind(t); }
L_00581cd9:; BB(0x00581cd9);
    /* 00581cd9: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581cdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00581cde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00581cdf: ret  */ FN_RET(0x005814e0); r_esp += 4; return;
L_00581ce9:; BB(0x00581ce9);
    /* 00581ce9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581ceb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581ced: jmp 0x58192c */ goto L_0058192c;
L_00581cf2:; BB(0x00581cf2);
    /* 00581cf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581cf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00581cf6: jmp 0x581bce */ goto L_00581bce;
}

void f_00581cfc(void) /* sub_581CFC */
{
    FN_ENTER(0x00581cfc);
    /* 00581cfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00581cfd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581d00: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00581d02: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00581d08: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581d0b: movzx edx, byte ptr [0xa741fc] */ r_edx = (u32)R8((u32)(0xa741fcu));
    /* 00581d12: mov dword ptr [ebx + 0x390], ecx */ W32((u32)(r_ebx+0x390u), r_ecx);
    /* 00581d18: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581d1b: jne 0x581d30 */ if (!fZ) goto L_00581d30;
L_00581d1d:; BB(0x00581d1d);
    /* 00581d1d: mov eax, dword ptr [0x9bf268] */ r_eax = R32((u32)(0x9bf268u));
    /* 00581d22: mov dword ptr [0xa74200], eax */ W32((u32)(0xa74200u), r_eax);
    /* 00581d27: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00581d2a: mov byte ptr [0xa741fc], dl */ W8((u32)(0xa741fcu), (u8)r_edx);
L_00581d30:; BB(0x00581d30);
    /* 00581d30: fld dword ptr [0x927cf8] */ FPUSH(R_F32((u32)(0x927cf8u)));
    /* 00581d36: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00581d3c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00581d3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581d40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581d41: jb 0x581db1 */ if (fC) goto L_00581db1;
L_00581d43:; BB(0x00581d43);
    /* 00581d43: fld dword ptr [0xa74200] */ FPUSH(R_F32((u32)(0xa74200u)));
    /* 00581d49: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00581d4b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00581d4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581d4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581d50: jae 0x581db5 */ if (!fC) goto L_00581db5;
L_00581d52:; BB(0x00581d52);
    /* 00581d52: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581d55: jne 0x581d6d */ if (!fZ) goto L_00581d6d;
L_00581d57:; BB(0x00581d57);
    /* 00581d57: mov dword ptr [0xa74204], 0x40a00000 */ W32((u32)(0xa74204u), 0x40a00000u);
    /* 00581d61: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00581d67: mov byte ptr [0xa741fc], dl */ W8((u32)(0xa741fcu), (u8)r_edx);
L_00581d6d:; BB(0x00581d6d);
    /* 00581d6d: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00581d73: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00581d79: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00581d7c: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00581d82: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00581d86: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00581d8a: fadd dword ptr [0xa74204] */ ST(0) = ST(0) + R_F32((u32)(0xa74204u));
    /* 00581d90: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00581d94: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00581d98: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00581d9b: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00581da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581da1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x581da6u); f_0050b510();
    /* 00581da6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581da9: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00581daf: jmp 0x581db5 */ goto L_00581db5;
L_00581db1:; BB(0x00581db1);
    /* 00581db1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00581db3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00581db5:; BB(0x00581db5);
    /* 00581db5: cmp ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581db8: jg 0x581e0c */ if ((!fZ&&fS==fO)) goto L_00581e0c;
L_00581dba:; BB(0x00581dba);
    /* 00581dba: je 0x581e11 */ if (fZ) goto L_00581e11;
L_00581dbc:; BB(0x00581dbc);
    /* 00581dbc: cmp ecx, 0x5a */ {  u32 a = r_ecx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581dbf: jne 0x581dcb */ if (!fZ) goto L_00581dcb;
L_00581dc1:; BB(0x00581dc1);
    /* 00581dc1: mov dword ptr [ebx + 0x3e8], 0 */ W32((u32)(r_ebx+0x3e8u), 0x0u);
L_00581dcb:; BB(0x00581dcb);
    /* 00581dcb: movzx eax, byte ptr [0xa741fc] */ r_eax = (u32)R8((u32)(0xa741fcu));
    /* 00581dd2: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581dd4: jne 0x581df8 */ if (!fZ) goto L_00581df8;
L_00581dd6:; BB(0x00581dd6);
    /* 00581dd6: fld dword ptr [0x927e34] */ FPUSH(R_F32((u32)(0x927e34u)));
    /* 00581ddc: fmul dword ptr [0xa74284] */ ST(0) = ST(0) * R_F32((u32)(0xa74284u));
    /* 00581de2: fdiv dword ptr [0x927e30] */ ST(0) = ST(0) / R_F32((u32)(0x927e30u));
    /* 00581de8: fstp dword ptr [0xa7420c] */ W_F32((u32)(0xa7420cu), ST(0)); FPOP();
    /* 00581dee: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581df3: mov byte ptr [0xa741fc], al */ W8((u32)(0xa741fcu), (u8)r_eax);
L_00581df8:; BB(0x00581df8);
    /* 00581df8: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00581dfb: fsub dword ptr [0xa7420c] */ ST(0) = ST(0) - R_F32((u32)(0xa7420cu));
    /* 00581e01: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00581e04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581e06: jle 0x581e99 */ if ((fZ||fS!=fO)) goto L_00581e99;
L_00581e0c:; BB(0x00581e0c);
    /* 00581e0c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581e0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581e10: ret  */ FN_RET(0x00581cfc); r_esp += 4; return;
L_00581e11:; BB(0x00581e11);
    /* 00581e11: movzx eax, byte ptr [0xa741fc] */ r_eax = (u32)R8((u32)(0xa741fcu));
    /* 00581e18: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581e1a: jne 0x581e38 */ if (!fZ) goto L_00581e38;
L_00581e1c:; BB(0x00581e1c);
    /* 00581e1c: fld dword ptr [0x927e34] */ FPUSH(R_F32((u32)(0x927e34u)));
    /* 00581e22: mov dword ptr [0xa74208], 0x3f000000 */ W32((u32)(0xa74208u), 0x3f000000u);
    /* 00581e2c: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581e31: mov byte ptr [0xa741fc], al */ W8((u32)(0xa741fcu), (u8)r_eax);
    /* 00581e36: jmp 0x581e3e */ goto L_00581e3e;
L_00581e38:; BB(0x00581e38);
    /* 00581e38: fld dword ptr [0xa74208] */ FPUSH(R_F32((u32)(0xa74208u)));
L_00581e3e:; BB(0x00581e3e);
    /* 00581e3e: fld dword ptr [0x927cf4] */ FPUSH(R_F32((u32)(0x927cf4u)));
    /* 00581e44: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00581e48: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00581e4e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00581e50: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00581e53: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00581e55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00581e57: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00581e5a: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 00581e60: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00581e63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00581e65: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00581e67: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00581e69: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00581e6d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00581e6f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00581e73: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00581e77: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00581e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581e7a: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x581e7fu); f_005787a4();
    /* 00581e7f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00581e83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00581e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581e86: call 0x578418 */ r_esp -= 4; W32(r_esp, 0x581e8bu); f_00578418();
    /* 00581e8b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581e8e: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00581e94: jmp 0x581dbc */ goto L_00581dbc;
L_00581e99:; BB(0x00581e99);
    /* 00581e99: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00581e9d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00581ea2: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00581ea6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581ea9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581eaa: ret  */ FN_RET(0x00581cfc); r_esp += 4; return;
}

void f_00581eac(void) /* sub_581EAC */
{
    FN_ENTER(0x00581eac);
    /* 00581eac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581eaf: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 00581eb5: fcomp dword ptr [0x927d0c] */ fx_compare(ST(0), R_F32((u32)(0x927d0cu))); FPOP();
    /* 00581ebb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581ebd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581ebe: jb 0x581eef */ if (fC) goto L_00581eef;
L_00581ec0:; BB(0x00581ec0);
    /* 00581ec0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00581ec4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00581ec6: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00581eca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00581ecc: mov esi, eax */ r_esi = r_eax;
L_00581ece:; BB(0x00581ece);
    /* 00581ece: mov edx, dword ptr [ebx + esi*4 + 0x39c] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x39cu));
    /* 00581ed5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00581ed8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581eda: je 0x581f64 */ if (fZ) goto L_00581f64;
L_00581ee0:; BB(0x00581ee0);
    /* 00581ee0: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581ee3: jl 0x581ece */ if ((fS!=fO)) goto L_00581ece;
L_00581ee5:; BB(0x00581ee5);
    /* 00581ee5: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00581ee9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00581eeb: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00581eef:; BB(0x00581eef);
    /* 00581eef: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00581ef5: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00581ef7: jne 0x581efd */ if (!fZ) goto L_00581efd;
L_00581ef9:; BB(0x00581ef9);
    /* 00581ef9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581efc: ret  */ FN_RET(0x00581eac); r_esp += 4; return;
L_00581efd:; BB(0x00581efd);
    /* 00581efd: mov dword ptr [ecx + 0x37c], 6 */ W32((u32)(r_ecx+0x37cu), 0x6u);
    /* 00581f07: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00581f0b: lea edx, [ecx + 0x39c] */ r_edx = (u32)(r_ecx+0x39cu);
    /* 00581f11: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00581f15: mov esi, ecx */ r_esi = r_ecx;
    /* 00581f17: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00581f1a: lea eax, [ecx + 0x3a4] */ r_eax = (u32)(r_ecx+0x3a4u);
    /* 00581f20: mov ebx, eax */ r_ebx = r_eax;
    /* 00581f22: mov ebp, edx */ r_ebp = r_edx;
L_00581f24:; BB(0x00581f24);
    /* 00581f24: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00581f27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581f29: je 0x581f39 */ if (fZ) goto L_00581f39;
L_00581f2b:; BB(0x00581f2b);
    /* 00581f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581f2c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581f31u); f_005cdcc0();
    /* 00581f31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581f32: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_00581f39:; BB(0x00581f39);
    /* 00581f39: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00581f3c: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581f3e: ja 0x581f24 */ if ((!fC&&!fZ)) goto L_00581f24;
L_00581f40:; BB(0x00581f40);
    /* 00581f40: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00581f44: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00581f47: mov ecx, esi */ r_ecx = r_esi;
    /* 00581f49: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00581f4d: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00581f53: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00581f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581f5c: je 0x581f60 */ if (fZ) goto L_00581f60;
L_00581f5e:; BB(0x00581f5e);
    /* 00581f5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581f60u); call_ind(t); }
L_00581f60:; BB(0x00581f60);
    /* 00581f60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581f63: ret  */ FN_RET(0x00581eac); r_esp += 4; return;
L_00581f64:; BB(0x00581f64);
    /* 00581f64: push dword ptr [esi*4 + 0x927d00] */ { u32 v = R32((u32)(r_esi*4+0x927d00u)); r_esp -= 4; W32(r_esp, v); }
    /* 00581f6b: mov edx, dword ptr [esi*4 + 0x927cf8] */ r_edx = R32((u32)(r_esi*4+0x927cf8u));
    /* 00581f72: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581f74: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581f76: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00581f79: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581f7b: lea edx, [ebx + eax + 0x3a8] */ r_edx = (u32)(r_ebx+r_eax+0x3a8u);
    /* 00581f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581f83: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x581f88u); f_00509590();
    /* 00581f88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581f8b: mov dword ptr [ebx + esi*4 + 0x398], eax */ W32((u32)(r_ebx+r_esi*4+0x398u), r_eax);
    /* 00581f92: jmp 0x581ee0 */ goto L_00581ee0;
}

void f_00581f98(void) /* sub_581F98 */
{
    FN_ENTER(0x00581f98);
    /* 00581f98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00581f99: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581f9c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00581f9e: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00581fa4: fcomp dword ptr [0x927d10] */ fx_compare(ST(0), R_F32((u32)(0x927d10u))); FPOP();
    /* 00581faa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00581fac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00581fad: jb 0x581fca */ if (fC) goto L_00581fca;
L_00581faf:; BB(0x00581faf);
    /* 00581faf: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 00581fb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581fb7: je 0x581fca */ if (fZ) goto L_00581fca;
L_00581fb9:; BB(0x00581fb9);
    /* 00581fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581fba: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x581fbfu); f_005cdcc0();
    /* 00581fbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581fc0: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
L_00581fca:; BB(0x00581fca);
    /* 00581fca: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00581fd0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581fd3: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00581fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00581fdb: jle 0x581fe2 */ if ((fZ||fS!=fO)) goto L_00581fe2;
L_00581fdd:; BB(0x00581fdd);
    /* 00581fdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00581fe0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00581fe1: ret  */ FN_RET(0x00581f98); r_esp += 4; return;
L_00581fe2:; BB(0x00581fe2);
    /* 00581fe2: mov dword ptr [ebx + 0x37c], 3 */ W32((u32)(r_ebx+0x37cu), 0x3u);
    /* 00581fec: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00581fef: lea edx, [ebx + 0x39c] */ r_edx = (u32)(r_ebx+0x39cu);
    /* 00581ff5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00581ff9: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 00581fff: mov ebp, eax */ r_ebp = r_eax;
    /* 00582001: mov edi, edx */ r_edi = r_edx;
L_00582003:; BB(0x00582003);
    /* 00582003: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00582005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582007: je 0x582016 */ if (fZ) goto L_00582016;
L_00582009:; BB(0x00582009);
    /* 00582009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058200a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58200fu); f_005cdcc0();
    /* 0058200f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582010: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00582016:; BB(0x00582016);
    /* 00582016: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00582019: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058201b: ja 0x582003 */ if ((!fC&&!fZ)) goto L_00582003;
L_0058201d:; BB(0x0058201d);
    /* 0058201d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00582020: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00582024: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0058202a: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00582031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582033: je 0x582039 */ if (fZ) goto L_00582039;
L_00582035:; BB(0x00582035);
    /* 00582035: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00582037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582039u); call_ind(t); }
L_00582039:; BB(0x00582039);
    /* 00582039: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058203c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058203d: ret  */ FN_RET(0x00581f98); r_esp += 4; return;
}

