#include "protos.h"

void f_005880c0(void) /* sub_5880C0 */
{
    FN_ENTER(0x005880c0);
    /* 005880c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005880c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005880c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005880c5: push 0x8d7dc8 */ { u32 v = 0x8d7dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005880ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005880d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005880d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005880d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005880db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005880de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005880e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005880e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005880e7: push 0x398 */ { u32 v = 0x398u; r_esp -= 4; W32(r_esp, v); }
    /* 005880ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005880f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5880f8u); f_005caba4();
    /* 005880f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005880f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005880fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005880fe: je 0x58813a */ if (fZ) goto L_0058813a;
L_00588100:; BB(0x00588100);
    /* 00588100: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00588107: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058810e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588111: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588114: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00588117: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058811a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058811d: call 0x588140 */ r_esp -= 4; W32(r_esp, 0x588122u); f_00588140();
    /* 00588122: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588125: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058812c:; BB(0x0058812c);
    /* 0058812c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058812f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00588136: mov esp, ebp */ r_esp = r_ebp;
    /* 00588138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588139: ret  */ FN_RET(0x005880c0); r_esp += 4; return;
L_0058813a:; BB(0x0058813a);
    /* 0058813a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058813c: jmp 0x58812c */ goto L_0058812c;
}

void f_00588140(void) /* sub_588140 */
{
    FN_ENTER(0x00588140);
    /* 00588140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588141: mov ebp, esp */ r_ebp = r_esp;
    /* 00588143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588145: push 0x8d7de4 */ { u32 v = 0x8d7de4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058814a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00588150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00588158: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058815b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058815e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00588161: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00588164: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00588167: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0058816a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058816d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00588170: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00588173: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00588176: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00588179: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0058817c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058817f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x588184u); f_007865e8();
    /* 00588184: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058818b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058818e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00588191: mov dword ptr [ecx], 0xb07c40 */ W32((u32)(r_ecx), 0xb07c40u);
    /* 00588197: mov eax, dword ptr [0x9bf678] */ r_eax = R32((u32)(0x9bf678u));
    /* 0058819c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0058819e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005881a1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005881a3: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005881a6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005881a9: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 005881ac: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 005881af: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 005881b2: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 005881b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005881b7: mov dword ptr [ecx + 0x30c], eax */ W32((u32)(r_ecx+0x30cu), r_eax);
    /* 005881bd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005881c0: mov dword ptr [ecx + 0x310], eax */ W32((u32)(r_ecx+0x310u), r_eax);
    /* 005881c6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005881c9: mov dword ptr [ecx + 0x314], eax */ W32((u32)(r_ecx+0x314u), r_eax);
    /* 005881cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005881d2: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 005881d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005881da: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 005881e0: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 005881e6: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5881ebu); f_00787550();
    /* 005881eb: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005881ed: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5881f2u); f_0077a6cc();
    /* 005881f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005881f3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005881f6: fld dword ptr [0x92849c] */ FPUSH(R_F32((u32)(0x92849cu)));
    /* 005881fc: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 00588202: mov ebx, dword ptr [edx*4 + 0x9bf660] */ r_ebx = R32((u32)(r_edx*4+0x9bf660u));
    /* 00588209: fld dword ptr [eax + ebx*4] */ FPUSH(R_F32((u32)(r_eax+r_ebx*4)));
    /* 0058820c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058820e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00588210: mov dword ptr [ecx + 0x310], 0 */ W32((u32)(r_ecx+0x310u), 0x0u);
    /* 0058821a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058821b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058821d: ja 0x588221 */ if ((!fC&&!fZ)) goto L_00588221;
L_0058821f:; BB(0x0058821f);
    /* 0058821f: fst st(1) */ ST(1) = ST(0);
L_00588221:; BB(0x00588221);
    /* 00588221: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588223: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 00588229: add ecx, 0x30c */ {  u32 a = r_ecx; u32 b = 0x30cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058822f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x588234u); f_0083173c();
    /* 00588234: fcomp dword ptr [0x92849c] */ fx_compare(ST(0), R_F32((u32)(0x92849cu))); FPOP();
    /* 0058823a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058823c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058823d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588240: jne 0x58824c */ if (!fZ) goto L_0058824c;
L_00588242:; BB(0x00588242);
    /* 00588242: mov dword ptr [ecx + 0x30c], 0x3f800000 */ W32((u32)(r_ecx+0x30cu), 0x3f800000u);
L_0058824c:; BB(0x0058824c);
    /* 0058824c: add ecx, 0x30c */ {  u32 a = r_ecx; u32 b = 0x30cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00588252: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x588257u); f_0082df08();
    /* 00588257: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588259: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058825c: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00588262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588264: jne 0x5882ae */ if (!fZ) goto L_005882ae;
L_00588266:; BB(0x00588266);
    /* 00588266: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0058826b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x588270u); f_007879b8();
    /* 00588270: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588273: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00588276: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00588278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588279: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058827a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058827b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058827c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x588281u); f_00814298();
    /* 00588281: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00588284: fld dword ptr [0x928490] */ FPUSH(R_F32((u32)(0x928490u)));
    /* 0058828a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058828d: mov eax, dword ptr [0xa74374] */ r_eax = R32((u32)(0xa74374u));
    /* 00588292: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 00588298: mov dword ptr [ecx + 0x380], 0x40a00000 */ W32((u32)(r_ecx+0x380u), 0x40a00000u);
    /* 005882a2: mov dword ptr [ecx + 0x388], 0xc */ W32((u32)(r_ecx+0x388u), 0xcu);
    /* 005882ac: jmp 0x5882d9 */ goto L_005882d9;
L_005882ae:; BB(0x005882ae);
    /* 005882ae: fldz  */ FPUSH(0.0);
    /* 005882b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005882b3: jne 0x5882d9 */ if (!fZ) goto L_005882d9;
L_005882b5:; BB(0x005882b5);
    /* 005882b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005882b7: fld dword ptr [0x928494] */ FPUSH(R_F32((u32)(0x928494u)));
    /* 005882bd: mov dword ptr [ecx + 0x380], 0x40a00000 */ W32((u32)(r_ecx+0x380u), 0x40a00000u);
    /* 005882c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005882c9: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 005882cf: mov dword ptr [ecx + 0x388], 0xc */ W32((u32)(r_ecx+0x388u), 0xcu);
L_005882d9:; BB(0x005882d9);
    /* 005882d9: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005882dc: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005882df: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005882e2: fld dword ptr [ecx + 0x30c] */ FPUSH(R_F32((u32)(r_ecx+0x30cu)));
    /* 005882e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005882ea: fld dword ptr [ecx + 0x314] */ FPUSH(R_F32((u32)(r_ecx+0x314u)));
    /* 005882f0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005882f2: fstp dword ptr [ecx + 0x30c] */ W_F32((u32)(r_ecx+0x30cu), ST(0)); FPOP();
    /* 005882f8: fstp dword ptr [ecx + 0x314] */ W_F32((u32)(r_ecx+0x314u), ST(0)); FPOP();
    /* 005882fe: mov eax, ecx */ r_eax = r_ecx;
    /* 00588300: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588303: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058830a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058830c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058830d: ret 0x10 */ FN_RET(0x00588140); r_esp += 20; return;
}

void f_00588310(void) /* sub_588310 */
{
    FN_ENTER(0x00588310);
    /* 00588310: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00588311: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588312: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00588313: mov ecx, dword ptr [0xa74394] */ r_ecx = R32((u32)(0xa74394u));
    /* 00588319: mov esi, dword ptr [0xa74398] */ r_esi = R32((u32)(0xa74398u));
    /* 0058831f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00588321: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588324: je 0x588365 */ if (fZ) goto L_00588365;
L_00588326:; BB(0x00588326);
    /* 00588326: mov eax, dword ptr [0xa74390] */ r_eax = R32((u32)(0xa74390u));
    /* 0058832b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0058832e: lea ebx, [ecx + 4] */ r_ebx = (u32)(r_ecx+0x4u);
    /* 00588331: mov edi, ecx */ r_edi = r_ecx;
L_00588333:; BB(0x00588333);
    /* 00588333: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588335: jne 0x588346 */ if (!fZ) goto L_00588346;
L_00588337:; BB(0x00588337);
    /* 00588337: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00588338: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588339: call 0x4d4574 */ r_esp -= 4; W32(r_esp, 0x58833eu); f_004d4574();
    /* 0058833e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588341: mov eax, dword ptr [0xa74390] */ r_eax = R32((u32)(0xa74390u));
L_00588346:; BB(0x00588346);
    /* 00588346: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00588349: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058834c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058834e: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00588351: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588354: jne 0x588333 */ if (!fZ) goto L_00588333;
L_00588356:; BB(0x00588356);
    /* 00588356: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00588359:; BB(0x00588359);
    /* 00588359: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058835c: mov dword ptr [0xa74390], eax */ W32((u32)(0xa74390u), r_eax);
    /* 00588361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00588363: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00588364: ret  */ FN_RET(0x00588310); r_esp += 4; return;
L_00588365:; BB(0x00588365);
    /* 00588365: mov eax, dword ptr [0xa74390] */ r_eax = R32((u32)(0xa74390u));
    /* 0058836a: jmp 0x588359 */ goto L_00588359;
}

void f_0058836c(void) /* sub_58836C */
{
    FN_ENTER(0x0058836c);
    /* 0058836c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058836d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058836e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058836f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00588370: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00588374: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00588378: mov edx, esi */ r_edx = r_esi;
    /* 0058837a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058837c: je 0x588399 */ if (fZ) goto L_00588399;
L_0058837e:; BB(0x0058837e);
    /* 0058837e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00588380: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00588382: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588385: je 0x5883a0 */ if (fZ) goto L_005883a0;
L_00588387:; BB(0x00588387);
    /* 00588387: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058838a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058838d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0058838f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588392: je 0x5883a0 */ if (fZ) goto L_005883a0;
L_00588394:; BB(0x00588394);
    /* 00588394: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588397: jl 0x588387 */ if ((fS!=fO)) goto L_00588387;
L_00588399:; BB(0x00588399);
    /* 00588399: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058839b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058839c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058839d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058839e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058839f: ret  */ FN_RET(0x0058836c); r_esp += 4; return;
L_005883a0:; BB(0x005883a0);
    /* 005883a0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005883a2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5883a7u); f_008581c5();
    /* 005883a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005883a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005883aa: je 0x5883ea */ if (fZ) goto L_005883ea;
L_005883ac:; BB(0x005883ac);
    /* 005883ac: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 005883ae: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005883b1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005883b3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005883b6: je 0x5883e5 */ if (fZ) goto L_005883e5;
L_005883b8:; BB(0x005883b8);
    /* 005883b8: mov edi, dword ptr [0xa74378] */ r_edi = R32((u32)(0xa74378u));
    /* 005883be: mov ecx, dword ptr [0xa7437c] */ r_ecx = R32((u32)(0xa7437cu));
    /* 005883c4: mov edx, dword ptr [0xa74380] */ r_edx = R32((u32)(0xa74380u));
    /* 005883ca: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_005883cd:; BB(0x005883cd);
    /* 005883cd: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 005883cf: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 005883d2: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 005883d5: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005883d8: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 005883da: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005883dd: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005883e0: jne 0x5883cd */ if (!fZ) goto L_005883cd;
L_005883e2:; BB(0x005883e2);
    /* 005883e2: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005883e5:; BB(0x005883e5);
    /* 005883e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005883e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005883e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005883e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005883e9: ret  */ FN_RET(0x0058836c); r_esp += 4; return;
L_005883ea:; BB(0x005883ea);
    /* 005883ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005883ec: jmp 0x5883e5 */ goto L_005883e5;
}

void f_005883f0(void) /* sub_5883F0 */
{
    FN_ENTER(0x005883f0);
    /* 005883f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005883f2: je 0x5883fb */ if (fZ) goto L_005883fb;
L_005883f4:; BB(0x005883f4);
    /* 005883f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005883f6: call 0x587aa0 */ r_esp -= 4; W32(r_esp, 0x5883fbu); f_00587aa0();
L_005883fb:; BB(0x005883fb);
    /* 005883fb: ret  */ FN_RET(0x005883f0); r_esp += 4; return;
}

void f_00588428(void) /* sub_588428 */
{
    FN_ENTER(0x00588428);
    /* 00588428: mov dword ptr [0xa74390], 0 */ W32((u32)(0xa74390u), 0x0u);
    /* 00588432: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00588434: mov dword ptr [0xa74394], eax */ W32((u32)(0xa74394u), r_eax);
    /* 00588439: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058843c: mov dword ptr [0xa74398], edx */ W32((u32)(0xa74398u), r_edx);
    /* 00588442: mov ecx, 0x588310 */ r_ecx = 0x588310u;
    /* 00588447: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x58844cu); f_0082fac4();
    /* 0058844c: ret  */ FN_RET(0x00588428); r_esp += 4; return;
}

void f_00588450(void) /* sub_588450 */
{
    FN_ENTER(0x00588450);
    /* 00588450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588451: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00588453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00588455: call 0x588474 */ r_esp -= 4; W32(r_esp, 0x58845au); f_00588474();
    /* 0058845a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058845e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588460: jne 0x588466 */ if (!fZ) goto L_00588466;
L_00588462:; BB(0x00588462);
    /* 00588462: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00588463: ret 4 */ FN_RET(0x00588450); r_esp += 8; return;
L_00588466:; BB(0x00588466);
    /* 00588466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588467: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x58846cu); f_005c2f74();
    /* 0058846c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058846d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058846e: ret 4 */ FN_RET(0x00588450); r_esp += 8; return;
}

void f_00588474(void) /* sub_588474 */
{
    FN_ENTER(0x00588474);
    /* 00588474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588475: mov ebp, esp */ r_ebp = r_esp;
    /* 00588477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588479: push 0x8d7e48 */ { u32 v = 0x8d7e48u; r_esp -= 4; W32(r_esp, v); }
    /* 0058847e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00588484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058848c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058848f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00588492: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00588495: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00588498: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058849b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058849e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005884a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005884a8: mov dword ptr [ecx], 0xb07e80 */ W32((u32)(r_ecx), 0xb07e80u);
    /* 005884ae: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5884b3u); f_007b9c8c();
    /* 005884b3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005884ba: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005884bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005884c2: add eax, 0x468 */ {  u32 a = r_eax; u32 b = 0x468u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005884c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005884c9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005884cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005884cc: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5884d1u); f_008586d6();
    /* 005884d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005884d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005884db: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005884e1: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5884e6u); f_005769f8();
    /* 005884e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005884e9: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5884eeu); f_0051f4fc();
    /* 005884ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005884f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005884f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005884fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005884fb: ret  */ FN_RET(0x00588474); r_esp += 4; return;
}

void f_005884fc(void)
{
    FN_ENTER(0x005884fc);
    /* 005884fc: call 0x58a1dc */ r_esp -= 4; W32(r_esp, 0x588501u); f_0058a1dc();
    /* 00588501: mov ecx, dword ptr [0xa743b8] */ r_ecx = R32((u32)(0xa743b8u));
    /* 00588507: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588509: je 0x58851e */ if (fZ) goto L_0058851e;
L_0058850b:; BB(0x0058850b);
    /* 0058850b: je 0x588514 */ if (fZ) goto L_00588514;
L_0058850d:; BB(0x0058850d);
    /* 0058850d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058850f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x588514u); f_004066a8();
L_00588514:; BB(0x00588514);
    /* 00588514: mov dword ptr [0xa743b8], 0 */ W32((u32)(0xa743b8u), 0x0u);
L_0058851e:; BB(0x0058851e);
    /* 0058851e: ret  */ FN_RET(0x005884fc); r_esp += 4; return;
}

void f_00588520(void)
{
    FN_ENTER(0x00588520);
    /* 00588520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588521: mov ebp, esp */ r_ebp = r_esp;
    /* 00588523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588525: push 0x8d7e70 */ { u32 v = 0x8d7e70u; r_esp -= 4; W32(r_esp, v); }
    /* 0058852a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00588530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00588538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058853b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058853e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00588541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00588544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00588547: push 0x4fc */ { u32 v = 0x4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058854c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00588553: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588558u); f_005caba4();
    /* 00588558: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588559: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058855c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058855e: je 0x588597 */ if (fZ) goto L_00588597;
L_00588560:; BB(0x00588560);
    /* 00588560: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00588567: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058856e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588571: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588577: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058857a: call 0x58859c */ r_esp -= 4; W32(r_esp, 0x58857fu); f_0058859c();
    /* 0058857f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588582: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00588589:; BB(0x00588589);
    /* 00588589: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058858c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00588593: mov esp, ebp */ r_esp = r_ebp;
    /* 00588595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588596: ret  */ FN_RET(0x00588520); r_esp += 4; return;
L_00588597:; BB(0x00588597);
    /* 00588597: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588599: jmp 0x588589 */ goto L_00588589;
}

void f_0058859c(void) /* sub_58859C */
{
    FN_ENTER(0x0058859c);
    /* 0058859c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058859d: mov ebp, esp */ r_ebp = r_esp;
    /* 0058859f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005885a1: push 0x8d7ec0 */ { u32 v = 0x8d7ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 005885a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005885ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005885ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005885b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005885b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005885ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005885bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005885c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005885c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005885c6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005885c9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005885cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005885cf: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5885d4u); f_005216f4();
    /* 005885d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005885db: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005885de: mov dword ptr [ecx], 0xb07e80 */ W32((u32)(r_ecx), 0xb07e80u);
    /* 005885e4: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005885ea: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5885efu); f_00576a48();
    /* 005885ef: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005885f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005885fb: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588600: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588603: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00588605: add eax, 0x468 */ {  u32 a = r_eax; u32 b = 0x468u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058860a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058860c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058860d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x588612u); f_00858736();
    /* 00588612: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00588619: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058861c: mov eax, dword ptr [0x9bf770] */ r_eax = R32((u32)(0x9bf770u));
    /* 00588621: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588624: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588625: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00588628: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x58862du); f_0051f750();
    /* 0058862d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588630: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x588635u); f_00521840();
    /* 00588635: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588638: mov ebx, dword ptr [0xa743b8] */ r_ebx = R32((u32)(0xa743b8u));
    /* 0058863e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588640: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00588646: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00588649: push 0x9bf790 */ { u32 v = 0x9bf790u; r_esp -= 4; W32(r_esp, v); }
    /* 0058864e: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00588651: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00588657: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 0058865a: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0058865d: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x588662u); f_0051ff3c();
    /* 00588662: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588665: fld dword ptr [0x928640] */ FPUSH(R_F32((u32)(0x928640u)));
    /* 0058866b: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0058866e: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00588674: call 0x5892e4 */ r_esp -= 4; W32(r_esp, 0x588679u); f_005892e4();
    /* 00588679: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058867c: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00588681: mov dword ptr [ecx + 0xd8], 0x9bf680 */ W32((u32)(r_ecx+0xd8u), 0x9bf680u);
    /* 0058868b: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00588691: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00588697: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00588699: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058869a: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005886a1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5886a6u); f_007aa4c8();
    /* 005886a6: push dword ptr [0xa743c0] */ { u32 v = R32((u32)(0xa743c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005886ac: push dword ptr [0xa743c4] */ { u32 v = R32((u32)(0xa743c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005886b2: push dword ptr [0xa743c8] */ { u32 v = R32((u32)(0xa743c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005886b8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005886bb: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005886c2: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005886c9: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5886ceu); f_00520c70();
    /* 005886ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005886d1: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5886d6u); f_00520370();
    /* 005886d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005886d9: mov dword ptr [ecx + 0x358], 0x9bf774 */ W32((u32)(r_ecx+0x358u), 0x9bf774u);
    /* 005886e3: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 005886e5: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5886eau); f_00520390();
    /* 005886ea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005886ed: mov dword ptr [ecx + 0x384], 0x41200000 */ W32((u32)(r_ecx+0x384u), 0x41200000u);
    /* 005886f7: call 0x589374 */ r_esp -= 4; W32(r_esp, 0x5886fcu); f_00589374();
    /* 005886fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005886ff: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00588703: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588706: jg 0x588719 */ if ((!fZ&&fS==fO)) goto L_00588719;
L_00588708:; BB(0x00588708);
    /* 00588708: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058870b: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 00588715: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00588717: jmp 0x58872f */ goto L_0058872f;
L_00588719:; BB(0x00588719);
    /* 00588719: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058871c: mov edx, dword ptr [ecx + 0x3fc] */ r_edx = R32((u32)(r_ecx+0x3fcu));
    /* 00588722: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588724: jl 0x58872f */ if ((fS!=fO)) goto L_0058872f;
L_00588726:; BB(0x00588726);
    /* 00588726: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00588729: mov dword ptr [ecx + 0x3fc], edx */ W32((u32)(r_ecx+0x3fcu), r_edx);
L_0058872f:; BB(0x0058872f);
    /* 0058872f: mov eax, dword ptr [ecx + 0x400] */ r_eax = R32((u32)(r_ecx+0x400u));
    /* 00588735: mov dword ptr [ecx + 0x414], 1 */ W32((u32)(r_ecx+0x414u), 0x1u);
    /* 0058873f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588741: jl 0x588745 */ if ((fS!=fO)) goto L_00588745;
L_00588743:; BB(0x00588743);
    /* 00588743: mov edx, eax */ r_edx = r_eax;
L_00588745:; BB(0x00588745);
    /* 00588745: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 0058874b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058874d: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 00588753: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 00588759: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
    /* 0058875f: mov dword ptr [ecx + 0x410], edx */ W32((u32)(r_ecx+0x410u), r_edx);
    /* 00588765: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058876b: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x588770u); f_00576c48();
    /* 00588770: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588773: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00588778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058877a: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 00588780: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 00588786: mov word ptr [ecx + 0x42c], dx */ W16((u32)(r_ecx+0x42cu), (u16)r_edx);
    /* 0058878d: mov word ptr [ecx + 0x42e], dx */ W16((u32)(r_ecx+0x42eu), (u16)r_edx);
    /* 00588794: mov word ptr [ecx + 0x430], dx */ W16((u32)(r_ecx+0x430u), (u16)r_edx);
    /* 0058879b: mov word ptr [ecx + 0x432], dx */ W16((u32)(r_ecx+0x432u), (u16)r_edx);
    /* 005887a2: mov word ptr [ecx + 0x434], dx */ W16((u32)(r_ecx+0x434u), (u16)r_edx);
    /* 005887a9: mov word ptr [ecx + 0x436], dx */ W16((u32)(r_ecx+0x436u), (u16)r_edx);
    /* 005887b0: mov word ptr [ecx + 0x438], dx */ W16((u32)(r_ecx+0x438u), (u16)r_edx);
    /* 005887b7: mov word ptr [ecx + 0x43a], dx */ W16((u32)(r_ecx+0x43au), (u16)r_edx);
    /* 005887be: mov word ptr [ecx + 0x43c], dx */ W16((u32)(r_ecx+0x43cu), (u16)r_edx);
    /* 005887c5: mov word ptr [ecx + 0x43e], dx */ W16((u32)(r_ecx+0x43eu), (u16)r_edx);
    /* 005887cc: mov word ptr [ecx + 0x440], dx */ W16((u32)(r_ecx+0x440u), (u16)r_edx);
    /* 005887d3: mov word ptr [ecx + 0x442], dx */ W16((u32)(r_ecx+0x442u), (u16)r_edx);
    /* 005887da: mov word ptr [ecx + 0x444], dx */ W16((u32)(r_ecx+0x444u), (u16)r_edx);
    /* 005887e1: mov word ptr [ecx + 0x446], dx */ W16((u32)(r_ecx+0x446u), (u16)r_edx);
    /* 005887e8: mov word ptr [ecx + 0x448], dx */ W16((u32)(r_ecx+0x448u), (u16)r_edx);
    /* 005887ef: mov word ptr [ecx + 0x44a], dx */ W16((u32)(r_ecx+0x44au), (u16)r_edx);
    /* 005887f6: mov word ptr [ecx + 0x44c], dx */ W16((u32)(r_ecx+0x44cu), (u16)r_edx);
    /* 005887fd: mov word ptr [ecx + 0x44e], dx */ W16((u32)(r_ecx+0x44eu), (u16)r_edx);
    /* 00588804: mov word ptr [ecx + 0x450], dx */ W16((u32)(r_ecx+0x450u), (u16)r_edx);
    /* 0058880b: mov word ptr [ecx + 0x452], dx */ W16((u32)(r_ecx+0x452u), (u16)r_edx);
    /* 00588812: mov word ptr [ecx + 0x454], dx */ W16((u32)(r_ecx+0x454u), (u16)r_edx);
    /* 00588819: mov word ptr [ecx + 0x456], dx */ W16((u32)(r_ecx+0x456u), (u16)r_edx);
    /* 00588820: mov word ptr [ecx + 0x458], dx */ W16((u32)(r_ecx+0x458u), (u16)r_edx);
    /* 00588827: mov word ptr [ecx + 0x45a], dx */ W16((u32)(r_ecx+0x45au), (u16)r_edx);
    /* 0058882e: mov word ptr [ecx + 0x45c], dx */ W16((u32)(r_ecx+0x45cu), (u16)r_edx);
    /* 00588835: mov word ptr [ecx + 0x45e], dx */ W16((u32)(r_ecx+0x45eu), (u16)r_edx);
    /* 0058883c: mov word ptr [ecx + 0x460], dx */ W16((u32)(r_ecx+0x460u), (u16)r_edx);
    /* 00588843: mov word ptr [ecx + 0x462], dx */ W16((u32)(r_ecx+0x462u), (u16)r_edx);
    /* 0058884a: mov word ptr [ecx + 0x464], dx */ W16((u32)(r_ecx+0x464u), (u16)r_edx);
    /* 00588851: mov word ptr [ecx + 0x466], dx */ W16((u32)(r_ecx+0x466u), (u16)r_edx);
    /* 00588858: mov word ptr [ecx + 0x420], dx */ W16((u32)(r_ecx+0x420u), (u16)r_edx);
    /* 0058885f: mov word ptr [ecx + 0x422], dx */ W16((u32)(r_ecx+0x422u), (u16)r_edx);
    /* 00588866: mov word ptr [ecx + 0x424], dx */ W16((u32)(r_ecx+0x424u), (u16)r_edx);
    /* 0058886d: mov word ptr [ecx + 0x426], dx */ W16((u32)(r_ecx+0x426u), (u16)r_edx);
    /* 00588874: mov word ptr [ecx + 0x428], dx */ W16((u32)(r_ecx+0x428u), (u16)r_edx);
    /* 0058887b: mov word ptr [ecx + 0x42a], dx */ W16((u32)(r_ecx+0x42au), (u16)r_edx);
    /* 00588882: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00588884:; BB(0x00588884);
    /* 00588884: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00588887: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588889: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0058888c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058888e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588890: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00588892: lea ecx, [ecx + edx + 0x468] */ r_ecx = (u32)(r_ecx+r_edx+0x468u);
    /* 00588899: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x58889eu); f_0057739c();
    /* 0058889e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005888a1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005888a4: jge 0x5888ab */ if ((fS==fO)) goto L_005888ab;
L_005888a6:; BB(0x005888a6);
    /* 005888a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005888a9: jmp 0x588884 */ goto L_00588884;
L_005888ab:; BB(0x005888ab);
    /* 005888ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005888ae: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005888b1: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005888b4: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 005888b7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005888b9: mov dword ptr [ecx + 0x4e0], esi */ W32((u32)(r_ecx+0x4e0u), r_esi);
    /* 005888bf: mov dword ptr [ecx + 0x4f8], 0 */ W32((u32)(r_ecx+0x4f8u), 0x0u);
    /* 005888c9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005888cb: mov dword ptr [ecx + 0x4e4], esi */ W32((u32)(r_ecx+0x4e4u), r_esi);
    /* 005888d1: mov dword ptr [ecx + 0x3e8], esi */ W32((u32)(r_ecx+0x3e8u), r_esi);
    /* 005888d7: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 005888dd: mov dword ptr [ecx + 0x3f0], edx */ W32((u32)(r_ecx+0x3f0u), r_edx);
    /* 005888e3: mov dword ptr [ecx + 0x3f4], ebx */ W32((u32)(r_ecx+0x3f4u), r_ebx);
    /* 005888e9: mov dword ptr [ecx + 0x4e8], esi */ W32((u32)(r_ecx+0x4e8u), r_esi);
    /* 005888ef: mov dword ptr [ecx + 0x4ec], esi */ W32((u32)(r_ecx+0x4ecu), r_esi);
    /* 005888f5: mov dword ptr [ecx + 0x4f0], esi */ W32((u32)(r_ecx+0x4f0u), r_esi);
    /* 005888fb: mov dword ptr [ecx + 0x4f4], esi */ W32((u32)(r_ecx+0x4f4u), r_esi);
    /* 00588901: mov word ptr [ecx + 0x32e], si */ W16((u32)(r_ecx+0x32eu), (u16)r_esi);
    /* 00588908: call 0x589df0 */ r_esp -= 4; W32(r_esp, 0x58890du); f_00589df0();
    /* 0058890d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588910: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588913: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588916: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00588919: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058891c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00588923: mov esp, ebp */ r_esp = r_ebp;
    /* 00588925: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588926: ret 8 */ FN_RET(0x0058859c); r_esp += 12; return;
}

void f_0058892c(void) /* sub_58892C */
{
    FN_ENTER(0x0058892c);
    /* 0058892c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058892d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058892f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00588933: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588936: je 0x58895f */ if (fZ) goto L_0058895f;
L_00588938:; BB(0x00588938);
    /* 00588938: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058893b: jne 0x58895b */ if (!fZ) goto L_0058895b;
L_0058893d:; BB(0x0058893d);
    /* 0058893d: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00588943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588945: jne 0x58895b */ if (!fZ) goto L_0058895b;
L_00588947:; BB(0x00588947);
    /* 00588947: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588948: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x58894du); f_008113e4();
    /* 0058894d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058894e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00588952: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588957: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_0058895b:; BB(0x0058895b);
    /* 0058895b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058895c: ret 4 */ FN_RET(0x0058892c); r_esp += 8; return;
L_0058895f:; BB(0x0058895f);
    /* 0058895f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00588961: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x588966u); f_00787534();
    /* 00588966: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0058896c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058896f: mov dword ptr [ebx + 0x414], eax */ W32((u32)(r_ebx+0x414u), r_eax);
    /* 00588975: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00588977: call 0x58898c */ r_esp -= 4; W32(r_esp, 0x58897cu); f_0058898c();
    /* 0058897c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058897e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00588980: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x588986u); call_ind(t); }
    /* 00588986: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00588987: ret 4 */ FN_RET(0x0058892c); r_esp += 8; return;
}

void f_0058898c(void) /* sub_58898C */
{
    FN_ENTER(0x0058898c);
    /* 0058898c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058898d: mov ebp, esp */ r_ebp = r_esp;
    /* 0058898f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588991: push 0x8d7f1e */ { u32 v = 0x8d7f1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00588996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058899c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058899d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005889a4: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005889aa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005889ad: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005889b0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005889b3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005889b6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005889b8: mov eax, 0x928580 */ r_eax = 0x928580u;
    /* 005889bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005889bf: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005889c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005889c8: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 005889ce: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005889d1: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005889d7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005889da: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 005889e0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005889e3: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 005889e9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005889ec: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 005889f2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005889f5: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005889fb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005889fe: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00588a04: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588a07: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 00588a0d: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588a10: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 00588a16: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588a19: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 00588a1f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588a22: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 00588a28: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588a2b: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00588a31: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588a34: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00588a3a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588a3d: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00588a43: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588a46: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00588a4c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588a4f: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00588a55: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588a58: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588a5b: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 00588a61: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00588a67: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00588a6c: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00588a6f: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00588a72: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00588a75: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 00588a7b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00588a81: mov dword ptr [ebp - 0x100], edi */ W32((u32)(r_ebp+0xffffff00u), r_edi);
    /* 00588a87: mov dword ptr [ebp - 0xfc], esi */ W32((u32)(r_ebp+0xffffff04u), r_esi);
    /* 00588a8d: mov dword ptr [ebp - 0xd8], edi */ W32((u32)(r_ebp+0xffffff28u), r_edi);
    /* 00588a93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00588a96: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00588a9c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588a9f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00588aa5: mov eax, 0x928520 */ r_eax = 0x928520u;
    /* 00588aaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00588aac: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00588ab2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00588ab5: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00588abb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00588abe: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00588ac4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00588ac7: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00588acd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00588ad0: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00588ad6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00588ad9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00588adf: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00588ae2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00588ae8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00588aeb: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00588af1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588af4: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00588afa: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588afd: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00588b03: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588b06: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00588b0c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588b0f: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00588b15: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588b18: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00588b1e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588b21: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00588b27: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588b2a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00588b30: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588b33: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00588b39: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588b3c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00588b42: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588b45: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588b48: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00588b4b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00588b4e: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00588b53: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00588b56: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00588b59: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00588b5c: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00588b62: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00588b68: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 00588b6e: mov dword ptr [ebp - 0xb0], esi */ W32((u32)(r_ebp+0xffffff50u), r_esi);
    /* 00588b74: mov dword ptr [ebp - 0x8c], edi */ W32((u32)(r_ebp+0xffffff74u), r_edi);
    /* 00588b7a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00588b7d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00588b83: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588b86: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00588b89: mov eax, 0x9284c0 */ r_eax = 0x9284c0u;
    /* 00588b8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00588b90: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00588b93: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00588b96: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00588b99: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00588b9c: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00588b9f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00588ba2: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00588ba5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00588ba8: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00588bab: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00588bae: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00588bb1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00588bb4: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00588bb7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00588bba: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00588bbd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588bc0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00588bc3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588bc6: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00588bc9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588bcc: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00588bcf: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588bd2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00588bd5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588bd8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00588bdb: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588bde: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00588be1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588be4: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00588be7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588bea: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00588bed: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588bf0: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00588bf3: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588bf6: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588bf9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00588bfc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00588bff: mov edi, dword ptr [0xa743b8] */ r_edi = R32((u32)(0xa743b8u));
    /* 00588c05: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c07: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c09: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00588c0c: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00588c0f: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00588c12: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00588c15: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 00588c18: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00588c1b: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00588c21: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00588c24: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00588c27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588c28: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00588c2b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00588c2e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588c31: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00588c34: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x588c39u); f_0050b7a4();
    /* 00588c39: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x588c43u); f_0050b7a4();
    /* 00588c43: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00588c4a: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c4f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588c54u); f_005caba4();
    /* 00588c54: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588c57: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588c5c: je 0x588c88 */ if (fZ) goto L_00588c88;
L_00588c5e:; BB(0x00588c5e);
    /* 00588c5e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00588c65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588c6c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588c6f: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00588c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588c76: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588c7c: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588c81u); f_006441f4();
    /* 00588c81: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00588c88:; BB(0x00588c88);
    /* 00588c88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588c8f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00588c96: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588ca0u); f_005caba4();
    /* 00588ca0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588ca1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588ca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588ca6: je 0x588cd2 */ if (fZ) goto L_00588cd2;
L_00588ca8:; BB(0x00588ca8);
    /* 00588ca8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00588caf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00588cb6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588cb9: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 00588cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588cc0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588cc6: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588ccbu); f_006441f4();
    /* 00588ccb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00588cd2:; BB(0x00588cd2);
    /* 00588cd2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588cd9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00588ce0: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588ce5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588ceau); f_005caba4();
    /* 00588cea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588ceb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588cee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588cf0: je 0x588d19 */ if (fZ) goto L_00588d19;
L_00588cf2:; BB(0x00588cf2);
    /* 00588cf2: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00588cf9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00588d00: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588d03: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00588d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588d07: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588d0d: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588d12u); f_006441f4();
    /* 00588d12: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00588d19:; BB(0x00588d19);
    /* 00588d19: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588d1c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00588d1f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588d22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588d25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00588d2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00588d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588d2f: ret  */ FN_RET(0x0058898c); r_esp += 4; return;
}

void f_005889e0(void)
{
    FN_ENTER(0x005889e0);
    /* 005889e0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005889e3: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 005889e9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005889ec: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 005889f2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005889f5: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005889fb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005889fe: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00588a04: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588a07: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 00588a0d: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588a10: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 00588a16: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588a19: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 00588a1f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588a22: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 00588a28: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588a2b: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00588a31: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588a34: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00588a3a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588a3d: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00588a43: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588a46: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00588a4c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588a4f: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00588a55: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588a58: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588a5b: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 00588a61: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00588a67: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00588a6c: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00588a6f: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00588a72: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00588a75: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 00588a7b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00588a81: mov dword ptr [ebp - 0x100], edi */ W32((u32)(r_ebp+0xffffff00u), r_edi);
    /* 00588a87: mov dword ptr [ebp - 0xfc], esi */ W32((u32)(r_ebp+0xffffff04u), r_esi);
    /* 00588a8d: mov dword ptr [ebp - 0xd8], edi */ W32((u32)(r_ebp+0xffffff28u), r_edi);
    /* 00588a93: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00588a96: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00588a9c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588a9f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00588aa5: mov eax, 0x928520 */ r_eax = 0x928520u;
    /* 00588aaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00588aac: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00588ab2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00588ab5: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00588abb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00588abe: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00588ac4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00588ac7: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00588acd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00588ad0: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00588ad6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00588ad9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00588adf: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00588ae2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00588ae8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00588aeb: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00588af1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588af4: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00588afa: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588afd: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00588b03: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588b06: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00588b0c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588b0f: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00588b15: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588b18: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00588b1e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588b21: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00588b27: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588b2a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00588b30: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588b33: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00588b39: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588b3c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00588b42: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588b45: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588b48: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00588b4b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00588b4e: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00588b53: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00588b56: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00588b59: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00588b5c: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00588b62: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00588b68: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 00588b6e: mov dword ptr [ebp - 0xb0], esi */ W32((u32)(r_ebp+0xffffff50u), r_esi);
    /* 00588b74: mov dword ptr [ebp - 0x8c], edi */ W32((u32)(r_ebp+0xffffff74u), r_edi);
    /* 00588b7a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00588b7d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00588b83: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588b86: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00588b89: mov eax, 0x9284c0 */ r_eax = 0x9284c0u;
    /* 00588b8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00588b90: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00588b93: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00588b96: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00588b99: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00588b9c: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00588b9f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00588ba2: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00588ba5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00588ba8: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00588bab: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00588bae: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00588bb1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00588bb4: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00588bb7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00588bba: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00588bbd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00588bc0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00588bc3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00588bc6: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00588bc9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00588bcc: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00588bcf: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00588bd2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00588bd5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00588bd8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00588bdb: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00588bde: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00588be1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00588be4: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00588be7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00588bea: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00588bed: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00588bf0: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00588bf3: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588bf6: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00588bf9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00588bfc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00588bff: mov edi, dword ptr [0xa743b8] */ r_edi = R32((u32)(0xa743b8u));
    /* 00588c05: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c07: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c09: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00588c0c: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00588c0f: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00588c12: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00588c15: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 00588c18: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00588c1b: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00588c21: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00588c24: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00588c27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588c28: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00588c2b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00588c2e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00588c31: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00588c34: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x588c39u); f_0050b7a4();
    /* 00588c39: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x588c43u); f_0050b7a4();
    /* 00588c43: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00588c4a: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c4f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588c54u); f_005caba4();
    /* 00588c54: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588c57: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588c5c: je 0x588c88 */ if (fZ) goto L_00588c88;
L_00588c5e:; BB(0x00588c5e);
    /* 00588c5e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00588c65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588c6c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588c6f: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00588c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588c76: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588c7c: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588c81u); f_006441f4();
    /* 00588c81: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00588c88:; BB(0x00588c88);
    /* 00588c88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588c8f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00588c96: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588c9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588ca0u); f_005caba4();
    /* 00588ca0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588ca1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588ca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588ca6: je 0x588cd2 */ if (fZ) goto L_00588cd2;
L_00588ca8:; BB(0x00588ca8);
    /* 00588ca8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00588caf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00588cb6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588cb9: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 00588cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588cc0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588cc6: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588ccbu); f_006441f4();
    /* 00588ccb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00588cd2:; BB(0x00588cd2);
    /* 00588cd2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588cd9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00588ce0: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00588ce5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x588ceau); f_005caba4();
    /* 00588cea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00588ceb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588cee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588cf0: je 0x588d19 */ if (fZ) goto L_00588d19;
L_00588cf2:; BB(0x00588cf2);
    /* 00588cf2: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00588cf9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00588d00: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588d03: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00588d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588d07: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00588d0d: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x588d12u); f_006441f4();
    /* 00588d12: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00588d19:; BB(0x00588d19);
    /* 00588d19: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588d1c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00588d1f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588d22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588d25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00588d2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00588d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588d2f: ret  */ FN_RET(0x005889e0); r_esp += 4; return;
}

void f_00588ad3(void)
{
    FN_ENTER(0x00588ad3);
}

void f_00588d30(void) /* sub_588D30 */
{
    FN_ENTER(0x00588d30);
    /* 00588d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588d31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00588d33: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00588d37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588d3a: je 0x588d67 */ if (fZ) goto L_00588d67;
L_00588d3c:; BB(0x00588d3c);
    /* 00588d3c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588d3f: je 0x588d50 */ if (fZ) goto L_00588d50;
L_00588d41:; BB(0x00588d41);
    /* 00588d41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588d43: jne 0x588d63 */ if (!fZ) goto L_00588d63;
L_00588d45:; BB(0x00588d45);
    /* 00588d45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00588d47: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x588d4cu); f_007aa094();
    /* 00588d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588d4d: ret 4 */ FN_RET(0x00588d30); r_esp += 8; return;
L_00588d50:; BB(0x00588d50);
    /* 00588d50: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00588d56: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588d58: je 0x588d63 */ if (fZ) goto L_00588d63;
L_00588d5a:; BB(0x00588d5a);
    /* 00588d5a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00588d5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00588d5e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x588d63u); f_0051f62c();
L_00588d63:; BB(0x00588d63);
    /* 00588d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588d64: ret 4 */ FN_RET(0x00588d30); r_esp += 8; return;
L_00588d67:; BB(0x00588d67);
    /* 00588d67: mov eax, dword ptr [ebp + 0x414] */ r_eax = R32((u32)(r_ebp+0x414u));
    /* 00588d6d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00588d70: mov dword ptr [ebp + 0x414], eax */ W32((u32)(r_ebp+0x414u), r_eax);
    /* 00588d76: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00588d79: mov edx, 3 */ r_edx = 0x3u;
    /* 00588d7e: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00588d85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00588d87: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x588d8du); call_ind(t); }
    /* 00588d8d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00588d8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00588d91: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x588d96u); f_0051f664();
    /* 00588d96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588d97: ret 4 */ FN_RET(0x00588d30); r_esp += 8; return;
}

void f_00588d9c(void) /* sub_588D9C */
{
    FN_ENTER(0x00588d9c);
    /* 00588d9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00588d9d: mov edi, ecx */ r_edi = r_ecx;
    /* 00588d9f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00588da3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588da6: je 0x588ddb */ if (fZ) goto L_00588ddb;
L_00588da8:; BB(0x00588da8);
    /* 00588da8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588dab: je 0x588dc3 */ if (fZ) goto L_00588dc3;
L_00588dad:; BB(0x00588dad);
    /* 00588dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588daf: jne 0x588dd7 */ if (!fZ) goto L_00588dd7;
L_00588db1:; BB(0x00588db1);
    /* 00588db1: mov ecx, edi */ r_ecx = r_edi;
    /* 00588db3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x588db8u); f_007aa094();
    /* 00588db8: mov ecx, edi */ r_ecx = r_edi;
    /* 00588dba: call 0x588e10 */ r_esp -= 4; W32(r_esp, 0x588dbfu); f_00588e10();
    /* 00588dbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00588dc0: ret 4 */ FN_RET(0x00588d9c); r_esp += 8; return;
L_00588dc3:; BB(0x00588dc3);
    /* 00588dc3: mov ecx, edi */ r_ecx = r_edi;
    /* 00588dc5: call 0x589040 */ r_esp -= 4; W32(r_esp, 0x588dcau); f_00589040();
    /* 00588dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00588dcc: je 0x588dd7 */ if (fZ) goto L_00588dd7;
L_00588dce:; BB(0x00588dce);
    /* 00588dce: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00588dd0: mov ecx, edi */ r_ecx = r_edi;
    /* 00588dd2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x588dd7u); f_0051f62c();
L_00588dd7:; BB(0x00588dd7);
    /* 00588dd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00588dd8: ret 4 */ FN_RET(0x00588d9c); r_esp += 8; return;
L_00588ddb:; BB(0x00588ddb);
    /* 00588ddb: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 00588de1: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00588de4: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00588dea: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00588dec: mov edx, 2 */ r_edx = 0x2u;
    /* 00588df1: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00588df8: mov ecx, edi */ r_ecx = r_edi;
    /* 00588dfa: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x588e00u); call_ind(t); }
    /* 00588e00: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00588e02: mov ecx, edi */ r_ecx = r_edi;
    /* 00588e04: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x588e09u); f_0051f664();
    /* 00588e09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00588e0a: ret 4 */ FN_RET(0x00588d9c); r_esp += 8; return;
}

void f_00588e10(void) /* sub_588E10 */
{
    FN_ENTER(0x00588e10);
    /* 00588e10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00588e11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588e12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00588e13: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00588e16: mov edi, ecx */ r_edi = r_ecx;
    /* 00588e18: mov eax, dword ptr [edi + 0x4e0] */ r_eax = R32((u32)(r_edi+0x4e0u));
    /* 00588e1e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588e21: cmp eax, dword ptr [edi + 0x4e4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4e4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588e27: jl 0x58901c */ if ((fS!=fO)) goto L_0058901c;
L_00588e2d:; BB(0x00588e2d);
    /* 00588e2d: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00588e33: cmp eax, dword ptr [edi + 0x400] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x400u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588e39: mov dword ptr [edi + 0x4e0], 0 */ W32((u32)(r_edi+0x4e0u), 0x0u);
    /* 00588e43: jge 0x589015 */ if ((fS==fO)) goto L_00589015;
L_00588e49:; BB(0x00588e49);
    /* 00588e49: mov ecx, dword ptr [edi + 0x3fc] */ r_ecx = R32((u32)(r_edi+0x3fcu));
    /* 00588e4f: cmp ecx, dword ptr [edi + 0x41c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x41cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588e55: jle 0x589015 */ if ((fZ||fS!=fO)) goto L_00589015;
L_00588e5b:; BB(0x00588e5b);
    /* 00588e5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00588e5d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00588e61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00588e63: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00588e66: mov edx, dword ptr [edi + 0x3e4] */ r_edx = R32((u32)(r_edi+0x3e4u));
    /* 00588e6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588e6e: je 0x588eb9 */ if (fZ) goto L_00588eb9;
L_00588e70:; BB(0x00588e70);
    /* 00588e70: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588e73: jne 0x588e7f */ if (!fZ) goto L_00588e7f;
L_00588e75:; BB(0x00588e75);
    /* 00588e75: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 00588e7d: jmp 0x588ec1 */ goto L_00588ec1;
L_00588e7f:; BB(0x00588e7f);
    /* 00588e7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00588e81: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00588e85: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588e88: jne 0x588ec1 */ if (!fZ) goto L_00588ec1;
L_00588e8a:; BB(0x00588e8a);
    /* 00588e8a: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00588e8d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x588e92u); f_0082dcbc();
    /* 00588e92: fld dword ptr [0x928634] */ FPUSH(R_F32((u32)(0x928634u)));
    /* 00588e98: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00588e9a: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00588e9d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00588ea0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x588ea5u); f_0082ddd8();
    /* 00588ea5: fld dword ptr [0x928634] */ FPUSH(R_F32((u32)(0x928634u)));
    /* 00588eab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00588ead: mov ecx, dword ptr [edi + 0x3fc] */ r_ecx = R32((u32)(r_edi+0x3fcu));
    /* 00588eb3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00588eb7: jmp 0x588ec1 */ goto L_00588ec1;
L_00588eb9:; BB(0x00588eb9);
    /* 00588eb9: mov dword ptr [esp + 4], 0x40a00000 */ W32((u32)(r_esp+0x4u), 0x40a00000u);
L_00588ec1:; BB(0x00588ec1);
    /* 00588ec1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00588ec3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00588ec5: jle 0x588f89 */ if ((fZ||fS!=fO)) goto L_00588f89;
L_00588ecb:; BB(0x00588ecb);
    /* 00588ecb: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588ece: jl 0x588f66 */ if ((fS!=fO)) goto L_00588f66;
L_00588ed4:; BB(0x00588ed4);
    /* 00588ed4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00588ed7: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588ed9: movzx ebx, word ptr [edx + 0x42c] */ r_ebx = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588ee0: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588ee6: je 0x589029 */ if (fZ) goto L_00589029;
L_00588eec:; BB(0x00588eec);
    /* 00588eec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588eef: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00588ef2: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588ef4: movzx ebx, word ptr [edx + 0x42c] */ r_ebx = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588efb: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f01: je 0x589029 */ if (fZ) goto L_00589029;
L_00588f07:; BB(0x00588f07);
    /* 00588f07: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588f0a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00588f0d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588f0f: movzx ebx, word ptr [edx + 0x42c] */ r_ebx = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588f16: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f1c: je 0x589029 */ if (fZ) goto L_00589029;
L_00588f22:; BB(0x00588f22);
    /* 00588f22: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588f25: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00588f28: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588f2a: movzx ebx, word ptr [edx + 0x42c] */ r_ebx = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588f31: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f37: je 0x589029 */ if (fZ) goto L_00589029;
L_00588f3d:; BB(0x00588f3d);
    /* 00588f3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588f40: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00588f43: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588f45: movzx ebx, word ptr [edx + 0x42c] */ r_ebx = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588f4c: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f52: je 0x589029 */ if (fZ) goto L_00589029;
L_00588f58:; BB(0x00588f58);
    /* 00588f58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588f5b: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
    /* 00588f5e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588f60: jle 0x588ed4 */ if ((fZ||fS!=fO)) goto L_00588ed4;
L_00588f66:; BB(0x00588f66);
    /* 00588f66: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
L_00588f69:; BB(0x00588f69);
    /* 00588f69: lea edx, [edi + ebx] */ r_edx = (u32)(r_edi+r_ebx);
    /* 00588f6c: movzx ebp, word ptr [edx + 0x42c] */ r_ebp = (u32)R16((u32)(r_edx+0x42cu));
    /* 00588f73: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f79: je 0x589029 */ if (fZ) goto L_00589029;
L_00588f7f:; BB(0x00588f7f);
    /* 00588f7f: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00588f82: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588f85: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588f87: jl 0x588f69 */ if ((fS!=fO)) goto L_00588f69;
L_00588f89:; BB(0x00588f89);
    /* 00588f89: mov ebp, 0xffff */ r_ebp = 0xffffu;
L_00588f8e:; BB(0x00588f8e);
    /* 00588f8e: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 00588f92: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00588f96: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00588f99: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00588f9d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00588fa0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00588fa4: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00588fa7: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588fa9: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00588fab: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00588fae: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588fb4: jne 0x588fc9 */ if (!fZ) goto L_00588fc9;
L_00588fb6:; BB(0x00588fb6);
    /* 00588fb6: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00588fbc: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 00588fc2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00588fc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00588fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588fc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00588fc8: ret  */ FN_RET(0x00588e10); r_esp += 4; return;
L_00588fc9:; BB(0x00588fc9);
    /* 00588fc9: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00588fcd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00588fd1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00588fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588fd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00588fd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588fd7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00588fd9: call 0x58a200 */ r_esp -= 4; W32(r_esp, 0x588fdeu); f_0058a200();
    /* 00588fde: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588fe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588fe3: je 0x589015 */ if (fZ) goto L_00589015;
L_00588fe5:; BB(0x00588fe5);
    /* 00588fe5: mov edx, dword ptr [edi + 0x418] */ r_edx = R32((u32)(r_edi+0x418u));
    /* 00588feb: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00588fee: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00588ff4: mov word ptr [edi + edx*2 + 0x420], bp */ W16((u32)(r_edi+r_edx*2+0x420u), (u16)r_ebp);
    /* 00588ffc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00588ffe: add dword ptr [edi + 0x41c], 1 */ { u32 ad = (u32)(r_edi+0x41cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00589005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589007: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589008: push 0x264 */ { u32 v = 0x264u; r_esp -= 4; W32(r_esp, v); }
    /* 0058900d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x589012u); f_00814298();
    /* 00589012: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00589015:; BB(0x00589015);
    /* 00589015: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589018: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058901a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058901b: ret  */ FN_RET(0x00588e10); r_esp += 4; return;
L_0058901c:; BB(0x0058901c);
    /* 0058901c: mov dword ptr [edi + 0x4e0], eax */ W32((u32)(r_edi+0x4e0u), r_eax);
    /* 00589022: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589025: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589027: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589028: ret  */ FN_RET(0x00588e10); r_esp += 4; return;
L_00589029:; BB(0x00589029);
    /* 00589029: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0058902d: lea eax, [ebx + eax + 1] */ r_eax = (u32)(r_ebx+r_eax+0x1u);
    /* 00589031: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 00589034: mov word ptr [edx + 0x42c], bp */ W16((u32)(r_edx+0x42cu), (u16)r_ebp);
    /* 0058903b: jmp 0x588f8e */ goto L_00588f8e;
}

