#include "protos.h"

void f_0059405c(void) /* sub_59405C */
{
    FN_ENTER(0x0059405c);
    /* 0059405c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059405d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059405e: mov edi, ecx */ r_edi = r_ecx;
    /* 00594060: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00594064: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594067: je 0x594185 */ if (fZ) goto L_00594185;
L_0059406d:; BB(0x0059406d);
    /* 0059406d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594070: je 0x594128 */ if (fZ) goto L_00594128;
L_00594076:; BB(0x00594076);
    /* 00594076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594078: jne 0x594168 */ if (!fZ) goto L_00594168;
L_0059407e:; BB(0x0059407e);
    /* 0059407e: mov ecx, edi */ r_ecx = r_edi;
    /* 00594080: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x594085u); f_007aa094();
    /* 00594085: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059408a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059408c: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x594091u); f_00520ea0();
    /* 00594091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594093: je 0x594168 */ if (fZ) goto L_00594168;
L_00594099:; BB(0x00594099);
    /* 00594099: mov ecx, edi */ r_ecx = r_edi;
    /* 0059409b: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5940a0u); f_005213d8();
    /* 005940a0: mov ecx, edi */ r_ecx = r_edi;
    /* 005940a2: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5940a7u); f_00521410();
    /* 005940a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005940a9: call 0x593ab8 */ r_esp -= 4; W32(r_esp, 0x5940aeu); f_00593ab8();
    /* 005940ae: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005940b1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5940b6u); f_0082dcbc();
    /* 005940b6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005940b9: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005940bc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5940c1u); f_0082ddd8();
    /* 005940c1: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005940c7: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005940ca: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005940d0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005940d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005940d4: fstp dword ptr [edi + 0x44c] */ W_F32((u32)(r_edi+0x44cu), ST(0)); FPOP();
    /* 005940da: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 005940df: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5940e4u); f_0082ddd8();
    /* 005940e4: fcomp dword ptr [edi + 0x44c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x44cu))); FPOP();
    /* 005940ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005940ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005940ed: jbe 0x594107 */ if ((fC||fZ)) goto L_00594107;
L_005940ef:; BB(0x005940ef);
    /* 005940ef: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005940f4: mov ecx, edi */ r_ecx = r_edi;
    /* 005940f6: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x5940fbu); f_005214cc();
    /* 005940fb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005940fd: mov ecx, edi */ r_ecx = r_edi;
    /* 005940ff: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x594105u); call_ind(t); }
    /* 00594105: jmp 0x594119 */ goto L_00594119;
L_00594107:; BB(0x00594107);
    /* 00594107: push dword ptr [edi + 0x448] */ { u32 v = R32((u32)(r_edi+0x448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059410d: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 00594112: mov ecx, edi */ r_ecx = r_edi;
    /* 00594114: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x594119u); f_00521528();
L_00594119:; BB(0x00594119);
    /* 00594119: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059411b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059411d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x594123u); call_ind(t); }
    /* 00594123: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594124: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594125: ret 4 */ FN_RET(0x0059405c); r_esp += 8; return;
L_00594128:; BB(0x00594128);
    /* 00594128: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0059412e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594130: je 0x59416d */ if (fZ) goto L_0059416d;
L_00594132:; BB(0x00594132);
    /* 00594132: push dword ptr [edi + 0x44c] */ { u32 v = R32((u32)(r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00594138: mov ecx, edi */ r_ecx = r_edi;
    /* 0059413a: call 0x5941e4 */ r_esp -= 4; W32(r_esp, 0x59413fu); f_005941e4();
    /* 0059413f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594141: je 0x594151 */ if (fZ) goto L_00594151;
L_00594143:; BB(0x00594143);
    /* 00594143: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00594145: mov ecx, edi */ r_ecx = r_edi;
    /* 00594147: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59414cu); f_0051f62c();
    /* 0059414c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059414d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059414e: ret 4 */ FN_RET(0x0059405c); r_esp += 8; return;
L_00594151:; BB(0x00594151);
    /* 00594151: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00594153: mov ecx, edi */ r_ecx = r_edi;
    /* 00594155: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x59415bu); call_ind(t); }
    /* 0059415b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059415d: je 0x594168 */ if (fZ) goto L_00594168;
L_0059415f:; BB(0x0059415f);
    /* 0059415f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00594161: mov ecx, edi */ r_ecx = r_edi;
    /* 00594163: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594168u); f_0051f62c();
L_00594168:; BB(0x00594168);
    /* 00594168: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594169: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059416a: ret 4 */ FN_RET(0x0059405c); r_esp += 8; return;
L_0059416d:; BB(0x0059416d);
    /* 0059416d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059416f: mov ecx, edi */ r_ecx = r_edi;
    /* 00594171: call dword ptr [eax + 0x1c4] */ { u32 t = R32((u32)(r_eax+0x1c4u)); r_esp -= 4; W32(r_esp, 0x594177u); call_ind(t); }
    /* 00594177: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594179: mov ecx, edi */ r_ecx = r_edi;
    /* 0059417b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594180u); f_0051f62c();
    /* 00594180: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594181: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594182: ret 4 */ FN_RET(0x0059405c); r_esp += 8; return;
L_00594185:; BB(0x00594185);
    /* 00594185: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00594187: mov eax, 0xa */ r_eax = 0xau;
    /* 0059418c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00594193: mov ecx, edi */ r_ecx = r_edi;
    /* 00594195: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59419au); f_0051f664();
    /* 0059419a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059419c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059419e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5941a4u); call_ind(t); }
    /* 005941a4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005941aa: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 005941b0: mov dword ptr [edi + 0x3b4], 0x43960000 */ W32((u32)(r_edi+0x3b4u), 0x43960000u);
    /* 005941ba: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005941bf: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005941c5: mov eax, dword ptr [edx*4 + 0xa744e0] */ r_eax = R32((u32)(r_edx*4+0xa744e0u));
    /* 005941cc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005941ce: mov dword ptr [edi + 0x448], eax */ W32((u32)(r_edi+0x448u), r_eax);
    /* 005941d4: mov dword ptr [edi + 0x44c], 0 */ W32((u32)(r_edi+0x44cu), 0x0u);
    /* 005941de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005941df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005941e0: ret 4 */ FN_RET(0x0059405c); r_esp += 8; return;
}

void f_005941e4(void) /* sub_5941E4 */
{
    FN_ENTER(0x005941e4);
    /* 005941e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005941e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005941e8: mov esi, ecx */ r_esi = r_ecx;
    /* 005941ea: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005941f0: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005941f3: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 005941f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005941f7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005941fa: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5941ffu); f_0082e900();
    /* 005941ff: fcomp dword ptr [0x929038] */ fx_compare(ST(0), R_F32((u32)(0x929038u))); FPOP();
    /* 00594205: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594207: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594208: jb 0x594225 */ if (fC) goto L_00594225;
L_0059420a:; BB(0x0059420a);
    /* 0059420a: mov ecx, esi */ r_ecx = r_esi;
    /* 0059420c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x594211u); f_007751b0();
    /* 00594211: fcomp dword ptr [esi + 0x3fc] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3fcu))); FPOP();
    /* 00594217: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594219: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059421a: ja 0x59427e */ if ((!fC&&!fZ)) goto L_0059427e;
L_0059421c:; BB(0x0059421c);
    /* 0059421c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059421e: mov ecx, esi */ r_ecx = r_esi;
    /* 00594220: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594225u); f_0051f62c();
L_00594225:; BB(0x00594225);
    /* 00594225: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0059422b: fcomp dword ptr [0x929034] */ fx_compare(ST(0), R_F32((u32)(0x929034u))); FPOP();
    /* 00594231: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594233: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594234: jbe 0x59423f */ if ((fC||fZ)) goto L_0059423f;
L_00594236:; BB(0x00594236);
    /* 00594236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00594238: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059423b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059423c: ret 4 */ FN_RET(0x005941e4); r_esp += 8; return;
L_0059423f:; BB(0x0059423f);
    /* 0059423f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00594242: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x594247u); f_0082dcbc();
    /* 00594247: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059424a: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0059424d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x594252u); f_0082ddd8();
    /* 00594252: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00594258: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0059425b: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00594261: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00594263: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00594265: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00594269: mov ecx, 0x1e00 */ r_ecx = 0x1e00u;
    /* 0059426e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x594273u); f_0082ddd8();
    /* 00594273: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00594277: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00594279: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059427b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059427c: jae 0x594287 */ if (!fC) goto L_00594287;
L_0059427e:; BB(0x0059427e);
    /* 0059427e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00594280: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594283: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594284: ret 4 */ FN_RET(0x005941e4); r_esp += 8; return;
L_00594287:; BB(0x00594287);
    /* 00594287: mov eax, 1 */ r_eax = 0x1u;
    /* 0059428c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059428f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594290: ret 4 */ FN_RET(0x005941e4); r_esp += 8; return;
}

void f_00594294(void) /* sub_594294 */
{
    FN_ENTER(0x00594294);
    /* 00594294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00594296: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00594298: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059429c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059429f: je 0x594485 */ if (fZ) goto L_00594485;
L_005942a5:; BB(0x005942a5);
    /* 005942a5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005942a8: je 0x59446c */ if (fZ) goto L_0059446c;
L_005942ae:; BB(0x005942ae);
    /* 005942ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005942b0: jne 0x594449 */ if (!fZ) goto L_00594449;
L_005942b6:; BB(0x005942b6);
    /* 005942b6: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 005942bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005942be: je 0x5943d6 */ if (fZ) goto L_005943d6;
L_005942c4:; BB(0x005942c4);
    /* 005942c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005942c7: jne 0x594391 */ if (!fZ) goto L_00594391;
L_005942cd:; BB(0x005942cd);
    /* 005942cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005942cf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5942d4u); f_007aa094();
    /* 005942d4: fld dword ptr [0x92902c] */ FPUSH(R_F32((u32)(0x92902cu)));
    /* 005942da: fld dword ptr [0x929024] */ FPUSH(R_F32((u32)(0x929024u)));
    /* 005942e0: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005942e6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005942e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005942ea: fld dword ptr [ebx + 0x448] */ FPUSH(R_F32((u32)(r_ebx+0x448u)));
    /* 005942f0: fsub dword ptr [0x929028] */ ST(0) = ST(0) - R_F32((u32)(0x929028u));
    /* 005942f6: fld dword ptr [ebx + 0x3e8] */ FPUSH(R_F32((u32)(r_ebx+0x3e8u)));
    /* 005942fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005942fd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005942ff: fchs  */ ST(0) = -ST(0);
    /* 00594301: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594303: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594305: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594307: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00594309: jb 0x59430d */ if (fC) goto L_0059430d;
L_0059430b:; BB(0x0059430b);
    /* 0059430b: fst st(2) */ ST(2) = ST(0);
L_0059430d:; BB(0x0059430d);
    /* 0059430d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059430f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594311: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 00594317: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594318: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059431a: jb 0x59431e */ if (fC) goto L_0059431e;
L_0059431c:; BB(0x0059431c);
    /* 0059431c: fst st(2) */ ST(2) = ST(0);
L_0059431e:; BB(0x0059431e);
    /* 0059431e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00594320: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594322: fst dword ptr [ebx + 0x448] */ W_F32((u32)(r_ebx+0x448u), ST(0));
    /* 00594328: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059432a: fstp dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0)); FPOP();
    /* 00594330: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x594335u); f_005944ec();
    /* 00594335: fld dword ptr [ebx + 0x44c] */ FPUSH(R_F32((u32)(r_ebx+0x44cu)));
    /* 0059433b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0059433e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594340: fst dword ptr [ebx + 0x44c] */ W_F32((u32)(r_ebx+0x44cu), ST(0));
    /* 00594346: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00594348: fsubr dword ptr [ebx + 0x3e8] */ ST(0) = R_F32((u32)(r_ebx+0x3e8u)) - ST(0);
    /* 0059434e: fcom dword ptr [ebx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3cu))); 
    /* 00594351: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594353: fstp dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0)); FPOP();
    /* 00594359: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059435a: jae 0x59441a */ if (!fC) goto L_0059441a;
L_00594360:; BB(0x00594360);
    /* 00594360: mov dword ptr [ebx + 0x43c], 2 */ W32((u32)(r_ebx+0x43cu), 0x2u);
    /* 0059436a: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 00594370: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00594373: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00594375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594377: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594378: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 0059437d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x594382u); f_00814298();
    /* 00594382: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594385: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594387: call 0x593788 */ r_esp -= 4; W32(r_esp, 0x59438cu); f_00593788();
    /* 0059438c: jmp 0x59441a */ goto L_0059441a;
L_00594391:; BB(0x00594391);
    /* 00594391: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594394: jne 0x59441a */ if (!fZ) goto L_0059441a;
L_0059439a:; BB(0x0059439a);
    /* 0059439a: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005943a0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005943a2: je 0x5943cd */ if (fZ) goto L_005943cd;
L_005943a4:; BB(0x005943a4);
    /* 005943a4: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005943a7: mov dword ptr [ebx + 0x43c], 3 */ W32((u32)(r_ebx+0x43cu), 0x3u);
    /* 005943b1: mov eax, 9 */ r_eax = 0x9u;
    /* 005943b6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005943bd: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 005943c7: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
L_005943cd:; BB(0x005943cd);
    /* 005943cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005943cf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5943d4u); f_007aa094();
    /* 005943d4: jmp 0x59441a */ goto L_0059441a;
L_005943d6:; BB(0x005943d6);
    /* 005943d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005943d8: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5943ddu); f_005944ec();
    /* 005943dd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005943e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005943e2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5943e7u); f_007aa094();
    /* 005943e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005943e9: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5943eeu); f_005944ec();
    /* 005943ee: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005943f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005943f3: fst dword ptr [ebx + 0x44c] */ W_F32((u32)(r_ebx+0x44cu), ST(0));
    /* 005943f9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005943fb: fadd dword ptr [ebx + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3e8u));
    /* 00594401: fst dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0));
    /* 00594407: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 0059440a: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00594410: mov dword ptr [ebx + 0x43c], 1 */ W32((u32)(r_ebx+0x43cu), 0x1u);
L_0059441a:; BB(0x0059441a);
    /* 0059441a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059441c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059441e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x594424u); call_ind(t); }
    /* 00594424: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594426: call 0x594554 */ r_esp -= 4; W32(r_esp, 0x59442bu); f_00594554();
    /* 0059442b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059442d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059442f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x594435u); call_ind(t); }
    /* 00594435: fld dword ptr [ebx + 0x3e8] */ FPUSH(R_F32((u32)(r_ebx+0x3e8u)));
    /* 0059443b: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 0059443e: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00594444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594445: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00594446: ret 4 */ FN_RET(0x00594294); r_esp += 8; return;
L_00594449:; BB(0x00594449);
    /* 00594449: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059444c: jne 0x594480 */ if (!fZ) goto L_00594480;
L_0059444e:; BB(0x0059444e);
    /* 0059444e: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00594454: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 0059445e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594461: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 00594467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594468: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00594469: ret 4 */ FN_RET(0x00594294); r_esp += 8; return;
L_0059446c:; BB(0x0059446c);
    /* 0059446c: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 00594472: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594475: jne 0x594480 */ if (!fZ) goto L_00594480;
L_00594477:; BB(0x00594477);
    /* 00594477: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594479: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059447b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594480u); f_0051f62c();
L_00594480:; BB(0x00594480);
    /* 00594480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594481: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00594482: ret 4 */ FN_RET(0x00594294); r_esp += 8; return;
L_00594485:; BB(0x00594485);
    /* 00594485: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594487: mov eax, 1 */ r_eax = 0x1u;
    /* 0059448c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00594493: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594495: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59449au); f_0051f664();
    /* 0059449a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059449c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059449e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5944a4u); call_ind(t); }
    /* 005944a4: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005944aa: mov dword ptr [ebx + 0x43c], 0 */ W32((u32)(r_ebx+0x43cu), 0x0u);
    /* 005944b4: and eax, 0xffeffff9 */ {  u32 a = r_eax; u32 b = 0xffeffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005944b9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005944bc: mov dword ptr [ebx + 0x448], 0 */ W32((u32)(r_ebx+0x448u), 0x0u);
    /* 005944c6: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 005944cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005944ce: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x5944d3u); f_00520f04();
    /* 005944d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005944d5: je 0x594480 */ if (fZ) goto L_00594480;
L_005944d7:; BB(0x005944d7);
    /* 005944d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005944d9: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5944deu); f_005213d8();
    /* 005944de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005944e0: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5944e5u); f_00521410();
    /* 005944e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005944e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005944e7: ret 4 */ FN_RET(0x00594294); r_esp += 8; return;
}

void f_005944ec(void) /* sub_5944EC */
{
    FN_ENTER(0x005944ec);
    /* 005944ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005944ed: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005944f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005944f2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005944f7: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005944fe: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00594506: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0059450e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x594513u); f_0082d990();
    /* 00594513: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594519: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 0059451f: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x594524u); f_008304c8();
    /* 00594524: mov ebp, dword ptr [ebp + 0x34] */ r_ebp = R32((u32)(r_ebp+0x34u));
    /* 00594527: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594529: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x59452eu); f_008305ec();
    /* 0059452e: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00594531: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x594536u); f_008305ec();
    /* 00594536: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00594539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059453a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0059453e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00594540: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x594545u); f_00830aa0();
    /* 00594545: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59454au); f_0082da80();
    /* 0059454a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0059454e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594552: ret  */ FN_RET(0x005944ec); r_esp += 4; return;
}

void f_00594554(void) /* sub_594554 */
{
    FN_ENTER(0x00594554);
    /* 00594554: fld dword ptr [ecx + 0x3e8] */ FPUSH(R_F32((u32)(r_ecx+0x3e8u)));
    /* 0059455a: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 0059455d: fcomp dword ptr [0x92901c] */ fx_compare(ST(0), R_F32((u32)(0x92901cu))); FPOP();
    /* 00594563: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594565: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594566: jbe 0x594571 */ if ((fC||fZ)) goto L_00594571;
L_00594568:; BB(0x00594568);
    /* 00594568: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059456a: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x594570u); call_ind(t); }
    /* 00594570: ret  */ FN_RET(0x00594554); r_esp += 4; return;
L_00594571:; BB(0x00594571);
    /* 00594571: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00594573: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x594579u); call_ind(t); }
    /* 00594579: ret  */ FN_RET(0x00594554); r_esp += 4; return;
}

void f_0059457c(void) /* sub_59457C */
{
    FN_ENTER(0x0059457c);
    /* 0059457c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059457d: mov edi, ecx */ r_edi = r_ecx;
    /* 0059457f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00594583: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594586: je 0x594698 */ if (fZ) goto L_00594698;
L_0059458c:; BB(0x0059458c);
    /* 0059458c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059458f: je 0x594680 */ if (fZ) goto L_00594680;
L_00594595:; BB(0x00594595);
    /* 00594595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594597: jne 0x594663 */ if (!fZ) goto L_00594663;
L_0059459d:; BB(0x0059459d);
    /* 0059459d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059459f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5945a4u); f_007aa094();
    /* 005945a4: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 005945aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005945ac: je 0x594607 */ if (fZ) goto L_00594607;
L_005945ae:; BB(0x005945ae);
    /* 005945ae: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005945b4: mov edx, dword ptr [edi + 0x400] */ r_edx = R32((u32)(r_edi+0x400u));
    /* 005945ba: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005945c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005945c3: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 005945c9: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005945cc: mov eax, 0xff */ r_eax = 0xffu;
    /* 005945d1: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005945d7: jl 0x5945db */ if ((fS!=fO)) goto L_005945db;
L_005945d9:; BB(0x005945d9);
    /* 005945d9: mov ecx, eax */ r_ecx = r_eax;
L_005945db:; BB(0x005945db);
    /* 005945db: mov dword ptr [edi + 0x440], ecx */ W32((u32)(r_edi+0x440u), r_ecx);
    /* 005945e1: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005945e4: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005945e6: mov dword ptr [edi + 0x400], ecx */ W32((u32)(r_edi+0x400u), r_ecx);
    /* 005945ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005945ee: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5945f3u); f_0052126c();
    /* 005945f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005945f5: jne 0x594635 */ if (!fZ) goto L_00594635;
L_005945f7:; BB(0x005945f7);
    /* 005945f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005945f9: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 005945ff: mov dword ptr [edi + 0x400], eax */ W32((u32)(r_edi+0x400u), r_eax);
    /* 00594605: jmp 0x594635 */ goto L_00594635;
L_00594607:; BB(0x00594607);
    /* 00594607: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059460c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059460e: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x594613u); f_00520ea0();
    /* 00594613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594615: je 0x594635 */ if (fZ) goto L_00594635;
L_00594617:; BB(0x00594617);
    /* 00594617: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 00594621: mov dword ptr [edi + 0x400], 0x1c0000ff */ W32((u32)(r_edi+0x400u), 0x1c0000ffu);
    /* 0059462b: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
L_00594635:; BB(0x00594635);
    /* 00594635: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00594637: mov ecx, edi */ r_ecx = r_edi;
    /* 00594639: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59463fu); call_ind(t); }
    /* 0059463f: mov ecx, edi */ r_ecx = r_edi;
    /* 00594641: call 0x594554 */ r_esp -= 4; W32(r_esp, 0x594646u); f_00594554();
    /* 00594646: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00594648: mov ecx, edi */ r_ecx = r_edi;
    /* 0059464a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x594650u); call_ind(t); }
    /* 00594650: fld dword ptr [edi + 0x3e8] */ FPUSH(R_F32((u32)(r_edi+0x3e8u)));
    /* 00594656: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 00594659: fstp dword ptr [edi + 0x3ec] */ W_F32((u32)(r_edi+0x3ecu), ST(0)); FPOP();
    /* 0059465f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594660: ret 4 */ FN_RET(0x0059457c); r_esp += 8; return;
L_00594663:; BB(0x00594663);
    /* 00594663: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594666: jne 0x594694 */ if (!fZ) goto L_00594694;
L_00594668:; BB(0x00594668);
    /* 00594668: mov dword ptr [edi + 0x400], 0x1c00ffff */ W32((u32)(r_edi+0x400u), 0x1c00ffffu);
    /* 00594672: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 0059467c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059467d: ret 4 */ FN_RET(0x0059457c); r_esp += 8; return;
L_00594680:; BB(0x00594680);
    /* 00594680: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 00594686: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594689: jle 0x594694 */ if ((fZ||fS!=fO)) goto L_00594694;
L_0059468b:; BB(0x0059468b);
    /* 0059468b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059468d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059468f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594694u); f_0051f62c();
L_00594694:; BB(0x00594694);
    /* 00594694: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00594695: ret 4 */ FN_RET(0x0059457c); r_esp += 8; return;
L_00594698:; BB(0x00594698);
    /* 00594698: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059469a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059469c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005946a3: mov ecx, edi */ r_ecx = r_edi;
    /* 005946a5: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5946aau); f_0051f664();
    /* 005946aa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005946ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005946ae: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5946b4u); call_ind(t); }
    /* 005946b4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005946ba: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005946bf: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005946c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005946c7: mov dword ptr [edi + 0x43c], edx */ W32((u32)(r_edi+0x43cu), r_edx);
    /* 005946cd: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 005946d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005946d4: ret 4 */ FN_RET(0x0059457c); r_esp += 8; return;
}

void f_005946d8(void) /* sub_5946D8 */
{
    FN_ENTER(0x005946d8);
    /* 005946d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005946d9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005946dc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005946de: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005946e2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005946e5: je 0x59472e */ if (fZ) goto L_0059472e;
L_005946e7:; BB(0x005946e7);
    /* 005946e7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005946ea: je 0x59470b */ if (fZ) goto L_0059470b;
L_005946ec:; BB(0x005946ec);
    /* 005946ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005946ee: je 0x594727 */ if (fZ) goto L_00594727;
L_005946f0:; BB(0x005946f0);
    /* 005946f0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005946f3: jne 0x594727 */ if (!fZ) goto L_00594727;
L_005946f5:; BB(0x005946f5);
    /* 005946f5: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005946fb: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005946fe: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00594704: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594708: ret 4 */ FN_RET(0x005946d8); r_esp += 8; return;
L_0059470b:; BB(0x0059470b);
    /* 0059470b: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 00594711: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 00594717: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x59471au); call_ind(t); }
    /* 0059471a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059471c: je 0x594727 */ if (fZ) goto L_00594727;
L_0059471e:; BB(0x0059471e);
    /* 0059471e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00594720: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594722: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594727u); f_0051f62c();
L_00594727:; BB(0x00594727);
    /* 00594727: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059472a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059472b: ret 4 */ FN_RET(0x005946d8); r_esp += 8; return;
L_0059472e:; BB(0x0059472e);
    /* 0059472e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00594730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594731: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00594738: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059473a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59473fu); f_0051f664();
    /* 0059473f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00594742: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594744: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x59474au); call_ind(t); }
    /* 0059474a: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00594750: or eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00594753: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00594759: lea ecx, [ebp + 0x41c] */ r_ecx = (u32)(r_ebp+0x41cu);
    /* 0059475f: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x594764u); f_00576c48();
    /* 00594764: fld dword ptr [0x929010] */ FPUSH(R_F32((u32)(0x929010u)));
    /* 0059476a: fadd dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e8u));
    /* 00594770: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00594773: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00594776: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059477a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059477d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00594781: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00594784: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594785: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x59478au); f_005789e4();
    /* 0059478a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059478b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059478e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059478f: ret 4 */ FN_RET(0x005946d8); r_esp += 8; return;
}

void f_00594794(void) /* sub_594794 */
{
    FN_ENTER(0x00594794);
    /* 00594794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594795: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00594796: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00594798: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059479c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059479f: je 0x5948e6 */ if (fZ) goto L_005948e6;
L_005947a5:; BB(0x005947a5);
    /* 005947a5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005947a8: je 0x59484a */ if (fZ) goto L_0059484a;
L_005947ae:; BB(0x005947ae);
    /* 005947ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005947b0: jne 0x5948a8 */ if (!fZ) goto L_005948a8;
L_005947b6:; BB(0x005947b6);
    /* 005947b6: add dword ptr [ebp + 0x43c], 1 */ { u32 ad = (u32)(r_ebp+0x43cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005947bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005947bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5947c4u); f_007aa094();
    /* 005947c4: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005947c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005947cb: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5947d0u); f_00520ea0();
    /* 005947d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005947d2: je 0x59483a */ if (fZ) goto L_0059483a;
L_005947d4:; BB(0x005947d4);
    /* 005947d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005947d6: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5947dbu); f_005213d8();
    /* 005947db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005947dd: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5947e2u); f_00521410();
    /* 005947e2: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005947e5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5947eau); f_0082dcbc();
    /* 005947ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005947ed: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005947f0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5947f5u); f_0082ddd8();
    /* 005947f5: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005947fb: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005947fe: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 00594804: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00594806: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00594808: fstp dword ptr [ebp + 0x44c] */ W_F32((u32)(r_ebp+0x44cu), ST(0)); FPOP();
    /* 0059480e: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 00594813: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x594818u); f_0082ddd8();
    /* 00594818: fcomp dword ptr [ebp + 0x44c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x44cu))); FPOP();
    /* 0059481e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594820: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594821: jbe 0x59483a */ if ((fC||fZ)) goto L_0059483a;
L_00594823:; BB(0x00594823);
    /* 00594823: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 00594828: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059482a: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x59482fu); f_005214cc();
    /* 0059482f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00594832: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594834: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59483au); call_ind(t); }
L_0059483a:; BB(0x0059483a);
    /* 0059483a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059483d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059483f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x594845u); call_ind(t); }
    /* 00594845: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594847: ret 4 */ FN_RET(0x00594794); r_esp += 8; return;
L_0059484a:; BB(0x0059484a);
    /* 0059484a: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059484f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00594852: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594854: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x59485au); call_ind(t); }
    /* 0059485a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059485c: je 0x594892 */ if (fZ) goto L_00594892;
L_0059485e:; BB(0x0059485e);
    /* 0059485e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00594864: fcomp dword ptr [0x929004] */ fx_compare(ST(0), R_F32((u32)(0x929004u))); FPOP();
    /* 0059486a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059486c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059486d: jbe 0x594884 */ if ((fC||fZ)) goto L_00594884;
L_0059486f:; BB(0x0059486f);
    /* 0059486f: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 00594875: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594878: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 0059487e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594880: jg 0x5948a8 */ if ((!fZ&&fS==fO)) goto L_005948a8;
L_00594882:; BB(0x00594882);
    /* 00594882: jmp 0x5948ad */ goto L_005948ad;
L_00594884:; BB(0x00594884);
    /* 00594884: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594886: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594888: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59488du); f_0051f62c();
    /* 0059488d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059488e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059488f: ret 4 */ FN_RET(0x00594794); r_esp += 8; return;
L_00594892:; BB(0x00594892);
    /* 00594892: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 00594898: cmp eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059489d: jl 0x5948a8 */ if ((fS!=fO)) goto L_005948a8;
L_0059489f:; BB(0x0059489f);
    /* 0059489f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005948a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005948a3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5948a8u); f_0051f62c();
L_005948a8:; BB(0x005948a8);
    /* 005948a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005948a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005948aa: ret 4 */ FN_RET(0x00594794); r_esp += 8; return;
L_005948ad:; BB(0x005948ad);
    /* 005948ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005948b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005948b2: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5948b8u); call_ind(t); }
    /* 005948b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005948ba: je 0x5948a8 */ if (fZ) goto L_005948a8;
L_005948bc:; BB(0x005948bc);
    /* 005948bc: mov dword ptr [ebp + 0x440], 0x3c */ W32((u32)(r_ebp+0x440u), 0x3cu);
    /* 005948c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005948c8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5948cdu); f_007751b0();
    /* 005948cd: fcomp dword ptr [0x929000] */ fx_compare(ST(0), R_F32((u32)(0x929000u))); FPOP();
    /* 005948d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005948d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005948d6: ja 0x5948a8 */ if ((!fC&&!fZ)) goto L_005948a8;
L_005948d8:; BB(0x005948d8);
    /* 005948d8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005948da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005948dc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5948e1u); f_0051f62c();
    /* 005948e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005948e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005948e3: ret 4 */ FN_RET(0x00594794); r_esp += 8; return;
L_005948e6:; BB(0x005948e6);
    /* 005948e6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005948e8: mov eax, 9 */ r_eax = 0x9u;
    /* 005948ed: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005948f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005948f6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5948fbu); f_0051f664();
    /* 005948fb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005948fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594900: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x594906u); call_ind(t); }
    /* 00594906: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059490c: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 00594916: and eax, 0xffeffff8 */ {  u32 a = r_eax; u32 b = 0xffeffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059491b: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00594921: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594923: mov dword ptr [ebp + 0x43c], edx */ W32((u32)(r_ebp+0x43cu), r_edx);
    /* 00594929: mov dword ptr [ebp + 0x440], edx */ W32((u32)(r_ebp+0x440u), r_edx);
    /* 0059492f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594930: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594931: ret 4 */ FN_RET(0x00594794); r_esp += 8; return;
}

void f_00594934(void) /* sub_594934 */
{
    FN_ENTER(0x00594934);
    /* 00594934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00594935: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594938: mov esi, ecx */ r_esi = r_ecx;
    /* 0059493a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059493e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594941: je 0x5949dc */ if (fZ) goto L_005949dc;
L_00594947:; BB(0x00594947);
    /* 00594947: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059494a: je 0x59499e */ if (fZ) goto L_0059499e;
L_0059494c:; BB(0x0059494c);
    /* 0059494c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059494e: jne 0x594983 */ if (!fZ) goto L_00594983;
L_00594950:; BB(0x00594950);
    /* 00594950: fld dword ptr [esi + 0x420] */ FPUSH(R_F32((u32)(r_esi+0x420u)));
    /* 00594956: fcomp dword ptr [0x928ffc] */ fx_compare(ST(0), R_F32((u32)(0x928ffcu))); FPOP();
    /* 0059495c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059495e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059495f: jb 0x594968 */ if (fC) goto L_00594968;
L_00594961:; BB(0x00594961);
    /* 00594961: mov ecx, esi */ r_ecx = r_esi;
    /* 00594963: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x594968u); f_007aa094();
L_00594968:; BB(0x00594968);
    /* 00594968: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059496a: mov ecx, esi */ r_ecx = r_esi;
    /* 0059496c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x594972u); call_ind(t); }
    /* 00594972: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00594974: mov ecx, esi */ r_ecx = r_esi;
    /* 00594976: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59497cu); call_ind(t); }
    /* 0059497c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059497f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594980: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
L_00594983:; BB(0x00594983);
    /* 00594983: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594986: jne 0x5949c5 */ if (!fZ) goto L_005949c5;
L_00594988:; BB(0x00594988);
    /* 00594988: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059498e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594991: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00594997: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059499a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059499b: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
L_0059499e:; BB(0x0059499e);
    /* 0059499e: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 005949a4: lea ecx, [esi + 0x41c] */ r_ecx = (u32)(r_esi+0x41cu);
    /* 005949aa: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5949adu); call_ind(t); }
    /* 005949ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005949af: je 0x5949c5 */ if (fZ) goto L_005949c5;
L_005949b1:; BB(0x005949b1);
    /* 005949b1: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005949b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005949ba: je 0x5949cc */ if (fZ) goto L_005949cc;
L_005949bc:; BB(0x005949bc);
    /* 005949bc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005949be: mov ecx, esi */ r_ecx = r_esi;
    /* 005949c0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5949c5u); f_0051f62c();
L_005949c5:; BB(0x005949c5);
    /* 005949c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005949c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005949c9: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
L_005949cc:; BB(0x005949cc);
    /* 005949cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005949ce: mov ecx, esi */ r_ecx = r_esi;
    /* 005949d0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5949d5u); f_0051f62c();
    /* 005949d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005949d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005949d9: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
L_005949dc:; BB(0x005949dc);
    /* 005949dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005949de: mov eax, 2 */ r_eax = 0x2u;
    /* 005949e3: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005949ea: mov ecx, esi */ r_ecx = r_esi;
    /* 005949ec: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5949f1u); f_0051f664();
    /* 005949f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005949f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005949f5: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5949fbu); call_ind(t); }
    /* 005949fb: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 00594a01: and eax, 0xffeffffd */ {  u32 a = r_eax; u32 b = 0xffeffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594a06: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00594a09: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00594a0f: lea ecx, [esi + 0x41c] */ r_ecx = (u32)(r_esi+0x41cu);
    /* 00594a15: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x594a1au); f_00576c48();
    /* 00594a1a: fld dword ptr [0x928ff8] */ FPUSH(R_F32((u32)(0x928ff8u)));
    /* 00594a20: fadd dword ptr [esi + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3e8u));
    /* 00594a26: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00594a29: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00594a2c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00594a30: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00594a33: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00594a39: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00594a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a3f: jne 0x594a52 */ if (!fZ) goto L_00594a52;
L_00594a41:; BB(0x00594a41);
    /* 00594a41: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00594a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594a45: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x594a4au); f_005789e4();
    /* 00594a4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594a4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594a4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594a4f: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
L_00594a52:; BB(0x00594a52);
    /* 00594a52: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00594a54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594a56: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594a59: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 00594a5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00594a5c: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x594a61u); f_0050a984();
    /* 00594a61: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594a64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00594a67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00594a68: ret 4 */ FN_RET(0x00594934); r_esp += 8; return;
}

void f_00594a6c(void) /* sub_594A6C */
{
    FN_ENTER(0x00594a6c);
    /* 00594a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594a6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00594a6e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00594a70: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00594a75: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594a79: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594a7d: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594a81: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594a85: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594a89: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x594a8eu); f_00773afc();
    /* 00594a8e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00594a91: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00594a97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a9a: je 0x594ab9 */ if (fZ) goto L_00594ab9;
L_00594a9c:; BB(0x00594a9c);
    /* 00594a9c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00594aa3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594aa6: jne 0x594ab1 */ if (!fZ) goto L_00594ab1;
L_00594aa8:; BB(0x00594aa8);
    /* 00594aa8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00594aaa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594aac: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594ab1u); f_0051f62c();
L_00594ab1:; BB(0x00594ab1);
    /* 00594ab1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00594ab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594ab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594ab6: ret 0x18 */ FN_RET(0x00594a6c); r_esp += 28; return;
L_00594ab9:; BB(0x00594ab9);
    /* 00594ab9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594abb: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x594ac0u); f_007751b0();
    /* 00594ac0: fcomp dword ptr [ebp + 0x3f8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3f8u))); FPOP();
    /* 00594ac6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594ac8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594ac9: ja 0x594a9c */ if ((!fC&&!fZ)) goto L_00594a9c;
L_00594acb:; BB(0x00594acb);
    /* 00594acb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00594acd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594acf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594ad4u); f_0051f62c();
    /* 00594ad4: jmp 0x594ab1 */ goto L_00594ab1;
}

void f_00594ad8(void) /* sub_594AD8 */
{
    FN_ENTER(0x00594ad8);
    /* 00594ad8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ad9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00594adb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594add: call 0x520504 */ r_esp -= 4; W32(r_esp, 0x594ae2u); f_00520504();
    /* 00594ae2: movzx eax, word ptr [ebx + 0x11c] */ r_eax = (u32)R16((u32)(r_ebx+0x11cu));
    /* 00594ae9: or eax, 0xffff0026 */ {  u32 a = r_eax; u32 b = 0xffff0026u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594aee: mov word ptr [ebx + 0x11c], ax */ W16((u32)(r_ebx+0x11cu), (u16)r_eax);
    /* 00594af5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00594af6: ret  */ FN_RET(0x00594ad8); r_esp += 4; return;
}

void f_00594af8(void) /* sub_594AF8 */
{
    FN_ENTER(0x00594af8);
    /* 00594af8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594af9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00594afb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00594afd: call 0x520528 */ r_esp -= 4; W32(r_esp, 0x594b02u); f_00520528();
    /* 00594b02: movzx eax, word ptr [ebx + 0x11c] */ r_eax = (u32)R16((u32)(r_ebx+0x11cu));
    /* 00594b09: and eax, 0xffd9 */ {  u32 a = r_eax; u32 b = 0xffd9u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00594b0e: mov word ptr [ebx + 0x11c], ax */ W16((u32)(r_ebx+0x11cu), (u16)r_eax);
    /* 00594b15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00594b16: ret  */ FN_RET(0x00594af8); r_esp += 4; return;
}

void f_00594b18(void) /* sub_594B18 */
{
    FN_ENTER(0x00594b18);
    /* 00594b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594b19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00594b1b: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 00594b21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594b24: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 00594b2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594b2d: jge 0x594b41 */ if ((fS==fO)) goto L_00594b41;
L_00594b2f:; BB(0x00594b2f);
    /* 00594b2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594b31: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x594b36u); f_007751b0();
    /* 00594b36: fcomp dword ptr [0x928ff4] */ fx_compare(ST(0), R_F32((u32)(0x928ff4u))); FPOP();
    /* 00594b3c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594b3e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594b3f: jae 0x594b4c */ if (!fC) goto L_00594b4c;
L_00594b41:; BB(0x00594b41);
    /* 00594b41: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00594b43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594b45: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594b4au); f_0051f62c();
    /* 00594b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594b4b: ret  */ FN_RET(0x00594b18); r_esp += 4; return;
L_00594b4c:; BB(0x00594b4c);
    /* 00594b4c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00594b4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594b50: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594b55u); f_0051f62c();
    /* 00594b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594b56: ret  */ FN_RET(0x00594b18); r_esp += 4; return;
}

void f_00594b58(void) /* sub_594B58 */
{
    FN_ENTER(0x00594b58);
    /* 00594b58: call 0x5b1cb8 */ r_esp -= 4; W32(r_esp, 0x594b5du); f_005b1cb8();
    /* 00594b5d: ret  */ FN_RET(0x00594b58); r_esp += 4; return;
}

void f_00594b60(void) /* sub_594B60 */
{
    FN_ENTER(0x00594b60);
    /* 00594b60: call 0x594b68 */ r_esp -= 4; W32(r_esp, 0x594b65u); f_00594b68();
    /* 00594b65: ret  */ FN_RET(0x00594b60); r_esp += 4; return;
}

void f_00594b68(void) /* sub_594B68 */
{
    FN_ENTER(0x00594b68);
    /* 00594b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594b69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00594b6b: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00594b71: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00594b73: jne 0x594b8c */ if (!fZ) goto L_00594b8c;
L_00594b75:; BB(0x00594b75);
    /* 00594b75: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00594b7c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594b7f: je 0x594b9e */ if (fZ) goto L_00594b9e;
L_00594b81:; BB(0x00594b81);
    /* 00594b81: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00594b83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594b85: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594b8au); f_0051f62c();
    /* 00594b8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594b8b: ret  */ FN_RET(0x00594b68); r_esp += 4; return;
L_00594b8c:; BB(0x00594b8c);
    /* 00594b8c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594b8e: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x594b93u); f_0051f81c();
    /* 00594b93: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00594b99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00594b9c: je 0x594ba0 */ if (fZ) goto L_00594ba0;
L_00594b9e:; BB(0x00594b9e);
    /* 00594b9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594b9f: ret  */ FN_RET(0x00594b68); r_esp += 4; return;
L_00594ba0:; BB(0x00594ba0);
    /* 00594ba0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594ba2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x594ba7u); f_007751b0();
    /* 00594ba7: fcomp dword ptr [ebp + 0x3f8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3f8u))); FPOP();
    /* 00594bad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594baf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594bb0: ja 0x594b9e */ if ((!fC&&!fZ)) goto L_00594b9e;
L_00594bb2:; BB(0x00594bb2);
    /* 00594bb2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00594bb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00594bb6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x594bbbu); f_0051f62c();
    /* 00594bbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00594bbc: ret  */ FN_RET(0x00594b68); r_esp += 4; return;
}

void f_00594c30(void)
{
    FN_ENTER(0x00594c30);
    /* 00594c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00594c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00594c35: push 0x8d82a4 */ { u32 v = 0x8d82a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00594c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00594c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594c41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00594c48: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594c4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00594c4e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00594c51: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00594c54: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00594c57: mov dword ptr [0xa744c8], 0 */ W32((u32)(0xa744c8u), 0x0u);
    /* 00594c61: mov dword ptr [0xa744cc], 0 */ W32((u32)(0xa744ccu), 0x0u);
    /* 00594c6b: mov dword ptr [0xa744d0], 0 */ W32((u32)(0xa744d0u), 0x0u);
    /* 00594c75: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x594c7au); f_00482a20();
    /* 00594c7a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00594c7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594c7f: jne 0x594c93 */ if (!fZ) goto L_00594c93;
L_00594c81:; BB(0x00594c81);
    /* 00594c81: push 0x9bfb50 */ { u32 v = 0x9bfb50u; r_esp -= 4; W32(r_esp, v); }
    /* 00594c86: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x594c8bu); f_0051f6b0();
    /* 00594c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594c8c: mov dword ptr [0xa744dc], eax */ W32((u32)(0xa744dcu), r_eax);
    /* 00594c91: jmp 0x594ca3 */ goto L_00594ca3;
L_00594c93:; BB(0x00594c93);
    /* 00594c93: push 0x9bfb08 */ { u32 v = 0x9bfb08u; r_esp -= 4; W32(r_esp, v); }
    /* 00594c98: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x594c9du); f_0051f6b0();
    /* 00594c9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594c9e: mov dword ptr [0xa744dc], eax */ W32((u32)(0xa744dcu), r_eax);
L_00594ca3:; BB(0x00594ca3);
    /* 00594ca3: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00594ca9: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00594cac: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00594caf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00594cb2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00594cb5: mov dword ptr [0xa744d8], eax */ W32((u32)(0xa744d8u), r_eax);
    /* 00594cba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594cbc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00594cbf: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594cc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594cc2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594cc7u); f_008581c5();
    /* 00594cc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594cc8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00594ccb: mov dword ptr [0xa744d4], eax */ W32((u32)(0xa744d4u), r_eax);
    /* 00594cd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00594cd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00594cd4: jle 0x594dbb */ if ((fZ||fS!=fO)) goto L_00594dbb;
L_00594cda:; BB(0x00594cda);
    /* 00594cda: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594cdd: jl 0x594d83 */ if ((fS!=fO)) goto L_00594d83;
L_00594ce3:; BB(0x00594ce3);
    /* 00594ce3: lea esi, [edx - 5] */ r_esi = (u32)(r_edx+0xfffffffbu);
    /* 00594ce6: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00594ce9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00594cec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594cee: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00594cf1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594cf3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00594cf5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 00594cf8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 00594cfb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 00594cff: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 00594d03: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 00594d07: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 00594d0b: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d11: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d13: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00594d17: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594d1a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 00594d1e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00594d22: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00594d26: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 00594d2a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 00594d2e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d33: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00594d35: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00594d39: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 00594d3d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00594d41: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00594d45: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00594d49: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 00594d4d: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d53: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d55: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00594d59: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 00594d5d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00594d61: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00594d65: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00594d69: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 00594d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594d70: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594d72: jg 0x594d7e */ if ((!fZ&&fS==fO)) goto L_00594d7e;
L_00594d74:; BB(0x00594d74);
    /* 00594d74: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d79: jmp 0x594ce9 */ f_00594ce9(); return;
L_00594d7e:; BB(0x00594d7e);
    /* 00594d7e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594d83:; BB(0x00594d83);
    /* 00594d83: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00594d85: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00594d88: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594d8a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00594d8d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594d8f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00594d92: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00594d95: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00594d99: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 00594d9d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00594da1: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00594da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00594da8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594dab: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594dad: jge 0x594db6 */ if ((fS==fO)) goto L_00594db6;
L_00594daf:; BB(0x00594daf);
    /* 00594daf: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594db4: jmp 0x594d83 */ goto L_00594d83;
L_00594db6:; BB(0x00594db6);
    /* 00594db6: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594dbb:; BB(0x00594dbb);
    /* 00594dbb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00594dbe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00594dc1: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 00594dc4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00594dc7: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00594dca: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00594dcd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594dcf:; BB(0x00594dcf);
    /* 00594dcf: push dword ptr [ebx*4 + 0x928fb8] */ { u32 v = R32((u32)(r_ebx*4+0x928fb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594dd6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x594ddbu); f_0077a684();
    /* 00594ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594ddc: mov dword ptr [ebx*4 + 0xa744f8], eax */ W32((u32)(r_ebx*4+0xa744f8u), r_eax);
    /* 00594de3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594de6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594de9: jl 0x594dcf */ if ((fS!=fO)) goto L_00594dcf;
L_00594deb:; BB(0x00594deb);
    /* 00594deb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594ded:; BB(0x00594ded);
    /* 00594ded: push dword ptr [ebx*4 + 0x928fb0] */ { u32 v = R32((u32)(r_ebx*4+0x928fb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594df4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x594df9u); f_0077a698();
    /* 00594df9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594dfa: mov dword ptr [ebx*4 + 0xa744f0], eax */ W32((u32)(r_ebx*4+0xa744f0u), r_eax);
    /* 00594e01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e04: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e07: jl 0x594ded */ if ((fS!=fO)) goto L_00594ded;
L_00594e09:; BB(0x00594e09);
    /* 00594e09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e0b:; BB(0x00594e0b);
    /* 00594e0b: push dword ptr [ebx*4 + 0x928fa8] */ { u32 v = R32((u32)(r_ebx*4+0x928fa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e12: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x594e17u); f_0077a6b4();
    /* 00594e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e18: mov dword ptr [ebx*4 + 0xa744e8], eax */ W32((u32)(r_ebx*4+0xa744e8u), r_eax);
    /* 00594e1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e22: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e25: jl 0x594e0b */ if ((fS!=fO)) goto L_00594e0b;
L_00594e27:; BB(0x00594e27);
    /* 00594e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e29:; BB(0x00594e29);
    /* 00594e29: push dword ptr [ebx*4 + 0x928fa0] */ { u32 v = R32((u32)(r_ebx*4+0x928fa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e30: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x594e35u); f_0077a6cc();
    /* 00594e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e36: mov dword ptr [ebx*4 + 0xa744e0], eax */ W32((u32)(r_ebx*4+0xa744e0u), r_eax);
    /* 00594e3d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e40: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e43: jl 0x594e29 */ if ((fS!=fO)) goto L_00594e29;
L_00594e45:; BB(0x00594e45);
    /* 00594e45: mov edx, dword ptr [0xa744e0] */ r_edx = R32((u32)(0xa744e0u));
    /* 00594e4b: fld dword ptr [0x928fc4] */ FPUSH(R_F32((u32)(0x928fc4u)));
    /* 00594e51: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594e57: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00594e59: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00594e5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e60: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00594e66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e69: jae 0x594e6d */ if (!fC) goto L_00594e6d;
L_00594e6b:; BB(0x00594e6b);
    /* 00594e6b: fst st(1) */ ST(1) = ST(0);
L_00594e6d:; BB(0x00594e6d);
    /* 00594e6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e6f: fstp dword ptr [0x9bfa78] */ W_F32((u32)(0x9bfa78u), ST(0)); FPOP();
    /* 00594e75: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00594e78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e7f: jae 0x594e83 */ if (!fC) goto L_00594e83;
L_00594e81:; BB(0x00594e81);
    /* 00594e81: fst st(1) */ ST(1) = ST(0);
L_00594e83:; BB(0x00594e83);
    /* 00594e83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00594e85: fstp dword ptr [0x9bfa48] */ W_F32((u32)(0x9bfa48u), ST(0)); FPOP();
    /* 00594e8b: mov dword ptr [0xa7451c], 0 */ W32((u32)(0xa7451cu), 0x0u);
    /* 00594e95: mov dword ptr [0xa74510], 0 */ W32((u32)(0xa74510u), 0x0u);
    /* 00594e9f: mov dword ptr [0xa74514], 0 */ W32((u32)(0xa74514u), 0x0u);
    /* 00594ea9: mov dword ptr [0xa74518], 0 */ W32((u32)(0xa74518u), 0x0u);
    /* 00594eb3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00594eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594eb7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594ebcu); f_0078e934();
    /* 00594ebc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ebf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ec4: je 0x5950e0 */ if (fZ) goto L_005950e0;
L_00594eca:; BB(0x00594eca);
    /* 00594eca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ecd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ed0: mov dword ptr [0xa74504], eax */ W32((u32)(0xa74504u), r_eax);
L_00594ed5:; BB(0x00594ed5);
    /* 00594ed5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594eddu); f_0078e934();
    /* 00594edd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ee0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ee5: je 0x5950d1 */ if (fZ) goto L_005950d1;
L_00594eeb:; BB(0x00594eeb);
    /* 00594eeb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594eee: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ef1: mov dword ptr [0xa74508], eax */ W32((u32)(0xa74508u), r_eax);
L_00594ef6:; BB(0x00594ef6);
    /* 00594ef6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594efeu); f_0078e934();
    /* 00594efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f01: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f06: je 0x5950c2 */ if (fZ) goto L_005950c2;
L_00594f0c:; BB(0x00594f0c);
    /* 00594f0c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594f12: mov dword ptr [0xa7450c], eax */ W32((u32)(0xa7450cu), r_eax);
L_00594f17:; BB(0x00594f17);
    /* 00594f17: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f1c: mov ecx, dword ptr [0x9bfa54] */ r_ecx = R32((u32)(0x9bfa54u));
    /* 00594f22: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00594f28: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00594f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00594f2f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00594f36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00594f38: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594f3du); f_008581c5();
    /* 00594f3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00594f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f43: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00594f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f48: je 0x5950b8 */ if (fZ) goto L_005950b8;
L_00594f4e:; BB(0x00594f4e);
    /* 00594f4e: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00594f55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00594f5c: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f61: mov esi, ebx */ r_esi = r_ebx;
    /* 00594f63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594f66: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00594f6c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00594f6f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00594f72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f75: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00594f78: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00594f7c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594f7f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00594f82: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00594f85: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00594f88: fadd dword ptr [edi*4 + 0x928f58] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928f58u));
    /* 00594f8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00594f93: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x594f98u); f_00511bb4();
    /* 00594f98: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00594f9f:; BB(0x00594f9f);
    /* 00594f9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594fa2: mov dword ptr [0xa74500], eax */ W32((u32)(0xa74500u), r_eax);
    /* 00594fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594fae: mov eax, dword ptr [0x928f4c] */ r_eax = R32((u32)(0x928f4cu));
    /* 00594fb3: movzx edx, word ptr [0x928f50] */ r_edx = (u32)R16((u32)(0x928f50u));
    /* 00594fba: movzx ecx, word ptr [0x928f52] */ r_ecx = (u32)R16((u32)(0x928f52u));
    /* 00594fc1: movzx ebx, word ptr [0x928f54] */ r_ebx = (u32)R16((u32)(0x928f54u));
    /* 00594fc8: mov esi, dword ptr [0x928f3c] */ r_esi = R32((u32)(0x928f3cu));
    /* 00594fce: movzx edi, word ptr [0x928f40] */ r_edi = (u32)R16((u32)(0x928f40u));
    /* 00594fd5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594fd8: movzx eax, word ptr [0x928f42] */ r_eax = (u32)R16((u32)(0x928f42u));
    /* 00594fdf: mov word ptr [ebp - 0x44], dx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_edx);
    /* 00594fe3: mov word ptr [ebp - 0x42], cx */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_ecx);
    /* 00594fe7: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594fed: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00594ff3: mov word ptr [ebp - 0x40], bx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_ebx);
    /* 00594ff7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00594ffa: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00594ffd: mov word ptr [ebp - 0x34], di */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edi);
    /* 00595001: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 00595005: movzx eax, word ptr [0x928f44] */ r_eax = (u32)R16((u32)(0x928f44u));
    /* 0059500c: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00595010: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00595013: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00595019: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0059501c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059501d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059501f: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595024: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595027: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059502a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059502c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595031u); f_00608470();
    /* 00595031: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595036: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00595039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059503a: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595042: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595047: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059504c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059504f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00595051: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595056u); f_00608470();
    /* 00595056: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059505b: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0059505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059505f: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595067: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059506c: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059506f: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595072: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00595074: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595079u); f_00608470();
    /* 00595079: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059507e: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00595081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595082: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508a: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508f: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595094: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595097: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00595099: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59509eu); f_00608470();
    /* 0059509e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005950a1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005950a4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005950a7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005950aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005950ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005950b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005950b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005950b7: ret  */ FN_RET(0x00594c30); r_esp += 4; return;
L_005950b8:; BB(0x005950b8);
    /* 005950b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005950ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005950bd: jmp 0x594f9f */ goto L_00594f9f;
L_005950c2:; BB(0x005950c2);
    /* 005950c2: mov dword ptr [0xa7450c], 0 */ W32((u32)(0xa7450cu), 0x0u);
    /* 005950cc: jmp 0x594f17 */ goto L_00594f17;
L_005950d1:; BB(0x005950d1);
    /* 005950d1: mov dword ptr [0xa74508], 0 */ W32((u32)(0xa74508u), 0x0u);
    /* 005950db: jmp 0x594ef6 */ goto L_00594ef6;
L_005950e0:; BB(0x005950e0);
    /* 005950e0: mov dword ptr [0xa74504], 0 */ W32((u32)(0xa74504u), 0x0u);
    /* 005950ea: jmp 0x594ed5 */ goto L_00594ed5;
}

void f_00594c46(void)
{
    FN_ENTER(0x00594c46);
    /* 00594c46: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00594c48: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594c4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00594c4e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00594c51: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00594c54: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00594c57: mov dword ptr [0xa744c8], 0 */ W32((u32)(0xa744c8u), 0x0u);
    /* 00594c61: mov dword ptr [0xa744cc], 0 */ W32((u32)(0xa744ccu), 0x0u);
    /* 00594c6b: mov dword ptr [0xa744d0], 0 */ W32((u32)(0xa744d0u), 0x0u);
    /* 00594c75: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x594c7au); f_00482a20();
    /* 00594c7a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00594c7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594c7f: jne 0x594c93 */ if (!fZ) goto L_00594c93;
L_00594c81:; BB(0x00594c81);
    /* 00594c81: push 0x9bfb50 */ { u32 v = 0x9bfb50u; r_esp -= 4; W32(r_esp, v); }
    /* 00594c86: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x594c8bu); f_0051f6b0();
    /* 00594c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594c8c: mov dword ptr [0xa744dc], eax */ W32((u32)(0xa744dcu), r_eax);
    /* 00594c91: jmp 0x594ca3 */ goto L_00594ca3;
L_00594c93:; BB(0x00594c93);
    /* 00594c93: push 0x9bfb08 */ { u32 v = 0x9bfb08u; r_esp -= 4; W32(r_esp, v); }
    /* 00594c98: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x594c9du); f_0051f6b0();
    /* 00594c9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594c9e: mov dword ptr [0xa744dc], eax */ W32((u32)(0xa744dcu), r_eax);
L_00594ca3:; BB(0x00594ca3);
    /* 00594ca3: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00594ca9: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00594cac: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00594caf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00594cb2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00594cb5: mov dword ptr [0xa744d8], eax */ W32((u32)(0xa744d8u), r_eax);
    /* 00594cba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594cbc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00594cbf: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594cc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594cc2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594cc7u); f_008581c5();
    /* 00594cc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594cc8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00594ccb: mov dword ptr [0xa744d4], eax */ W32((u32)(0xa744d4u), r_eax);
    /* 00594cd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00594cd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00594cd4: jle 0x594dbb */ if ((fZ||fS!=fO)) goto L_00594dbb;
L_00594cda:; BB(0x00594cda);
    /* 00594cda: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594cdd: jl 0x594d83 */ if ((fS!=fO)) goto L_00594d83;
L_00594ce3:; BB(0x00594ce3);
    /* 00594ce3: lea esi, [edx - 5] */ r_esi = (u32)(r_edx+0xfffffffbu);
    /* 00594ce6: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00594ce9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00594cec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594cee: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00594cf1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594cf3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00594cf5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 00594cf8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 00594cfb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 00594cff: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 00594d03: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 00594d07: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 00594d0b: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d11: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d13: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00594d17: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594d1a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 00594d1e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00594d22: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00594d26: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 00594d2a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 00594d2e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d33: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00594d35: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00594d39: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 00594d3d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00594d41: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00594d45: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00594d49: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 00594d4d: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d53: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d55: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00594d59: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 00594d5d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00594d61: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00594d65: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00594d69: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 00594d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594d70: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594d72: jg 0x594d7e */ if ((!fZ&&fS==fO)) goto L_00594d7e;
L_00594d74:; BB(0x00594d74);
    /* 00594d74: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d79: jmp 0x594ce9 */ f_00594ce9(); return;
L_00594d7e:; BB(0x00594d7e);
    /* 00594d7e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594d83:; BB(0x00594d83);
    /* 00594d83: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00594d85: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00594d88: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594d8a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00594d8d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594d8f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00594d92: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00594d95: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00594d99: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 00594d9d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00594da1: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00594da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00594da8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594dab: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594dad: jge 0x594db6 */ if ((fS==fO)) goto L_00594db6;
L_00594daf:; BB(0x00594daf);
    /* 00594daf: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594db4: jmp 0x594d83 */ goto L_00594d83;
L_00594db6:; BB(0x00594db6);
    /* 00594db6: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594dbb:; BB(0x00594dbb);
    /* 00594dbb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00594dbe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00594dc1: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 00594dc4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00594dc7: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00594dca: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00594dcd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594dcf:; BB(0x00594dcf);
    /* 00594dcf: push dword ptr [ebx*4 + 0x928fb8] */ { u32 v = R32((u32)(r_ebx*4+0x928fb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594dd6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x594ddbu); f_0077a684();
    /* 00594ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594ddc: mov dword ptr [ebx*4 + 0xa744f8], eax */ W32((u32)(r_ebx*4+0xa744f8u), r_eax);
    /* 00594de3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594de6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594de9: jl 0x594dcf */ if ((fS!=fO)) goto L_00594dcf;
L_00594deb:; BB(0x00594deb);
    /* 00594deb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594ded:; BB(0x00594ded);
    /* 00594ded: push dword ptr [ebx*4 + 0x928fb0] */ { u32 v = R32((u32)(r_ebx*4+0x928fb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594df4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x594df9u); f_0077a698();
    /* 00594df9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594dfa: mov dword ptr [ebx*4 + 0xa744f0], eax */ W32((u32)(r_ebx*4+0xa744f0u), r_eax);
    /* 00594e01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e04: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e07: jl 0x594ded */ if ((fS!=fO)) goto L_00594ded;
L_00594e09:; BB(0x00594e09);
    /* 00594e09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e0b:; BB(0x00594e0b);
    /* 00594e0b: push dword ptr [ebx*4 + 0x928fa8] */ { u32 v = R32((u32)(r_ebx*4+0x928fa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e12: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x594e17u); f_0077a6b4();
    /* 00594e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e18: mov dword ptr [ebx*4 + 0xa744e8], eax */ W32((u32)(r_ebx*4+0xa744e8u), r_eax);
    /* 00594e1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e22: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e25: jl 0x594e0b */ if ((fS!=fO)) goto L_00594e0b;
L_00594e27:; BB(0x00594e27);
    /* 00594e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e29:; BB(0x00594e29);
    /* 00594e29: push dword ptr [ebx*4 + 0x928fa0] */ { u32 v = R32((u32)(r_ebx*4+0x928fa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e30: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x594e35u); f_0077a6cc();
    /* 00594e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e36: mov dword ptr [ebx*4 + 0xa744e0], eax */ W32((u32)(r_ebx*4+0xa744e0u), r_eax);
    /* 00594e3d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e40: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e43: jl 0x594e29 */ if ((fS!=fO)) goto L_00594e29;
L_00594e45:; BB(0x00594e45);
    /* 00594e45: mov edx, dword ptr [0xa744e0] */ r_edx = R32((u32)(0xa744e0u));
    /* 00594e4b: fld dword ptr [0x928fc4] */ FPUSH(R_F32((u32)(0x928fc4u)));
    /* 00594e51: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594e57: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00594e59: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00594e5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e60: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00594e66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e69: jae 0x594e6d */ if (!fC) goto L_00594e6d;
L_00594e6b:; BB(0x00594e6b);
    /* 00594e6b: fst st(1) */ ST(1) = ST(0);
L_00594e6d:; BB(0x00594e6d);
    /* 00594e6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e6f: fstp dword ptr [0x9bfa78] */ W_F32((u32)(0x9bfa78u), ST(0)); FPOP();
    /* 00594e75: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00594e78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e7f: jae 0x594e83 */ if (!fC) goto L_00594e83;
L_00594e81:; BB(0x00594e81);
    /* 00594e81: fst st(1) */ ST(1) = ST(0);
L_00594e83:; BB(0x00594e83);
    /* 00594e83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00594e85: fstp dword ptr [0x9bfa48] */ W_F32((u32)(0x9bfa48u), ST(0)); FPOP();
    /* 00594e8b: mov dword ptr [0xa7451c], 0 */ W32((u32)(0xa7451cu), 0x0u);
    /* 00594e95: mov dword ptr [0xa74510], 0 */ W32((u32)(0xa74510u), 0x0u);
    /* 00594e9f: mov dword ptr [0xa74514], 0 */ W32((u32)(0xa74514u), 0x0u);
    /* 00594ea9: mov dword ptr [0xa74518], 0 */ W32((u32)(0xa74518u), 0x0u);
    /* 00594eb3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00594eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594eb7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594ebcu); f_0078e934();
    /* 00594ebc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ebf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ec4: je 0x5950e0 */ if (fZ) goto L_005950e0;
L_00594eca:; BB(0x00594eca);
    /* 00594eca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ecd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ed0: mov dword ptr [0xa74504], eax */ W32((u32)(0xa74504u), r_eax);
L_00594ed5:; BB(0x00594ed5);
    /* 00594ed5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594eddu); f_0078e934();
    /* 00594edd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ee0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ee5: je 0x5950d1 */ if (fZ) goto L_005950d1;
L_00594eeb:; BB(0x00594eeb);
    /* 00594eeb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594eee: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ef1: mov dword ptr [0xa74508], eax */ W32((u32)(0xa74508u), r_eax);
L_00594ef6:; BB(0x00594ef6);
    /* 00594ef6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594efeu); f_0078e934();
    /* 00594efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f01: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f06: je 0x5950c2 */ if (fZ) goto L_005950c2;
L_00594f0c:; BB(0x00594f0c);
    /* 00594f0c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594f12: mov dword ptr [0xa7450c], eax */ W32((u32)(0xa7450cu), r_eax);
L_00594f17:; BB(0x00594f17);
    /* 00594f17: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f1c: mov ecx, dword ptr [0x9bfa54] */ r_ecx = R32((u32)(0x9bfa54u));
    /* 00594f22: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00594f28: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00594f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00594f2f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00594f36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00594f38: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594f3du); f_008581c5();
    /* 00594f3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00594f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f43: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00594f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f48: je 0x5950b8 */ if (fZ) goto L_005950b8;
L_00594f4e:; BB(0x00594f4e);
    /* 00594f4e: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00594f55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00594f5c: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f61: mov esi, ebx */ r_esi = r_ebx;
    /* 00594f63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594f66: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00594f6c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00594f6f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00594f72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f75: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00594f78: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00594f7c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594f7f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00594f82: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00594f85: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00594f88: fadd dword ptr [edi*4 + 0x928f58] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928f58u));
    /* 00594f8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00594f93: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x594f98u); f_00511bb4();
    /* 00594f98: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00594f9f:; BB(0x00594f9f);
    /* 00594f9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594fa2: mov dword ptr [0xa74500], eax */ W32((u32)(0xa74500u), r_eax);
    /* 00594fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594fae: mov eax, dword ptr [0x928f4c] */ r_eax = R32((u32)(0x928f4cu));
    /* 00594fb3: movzx edx, word ptr [0x928f50] */ r_edx = (u32)R16((u32)(0x928f50u));
    /* 00594fba: movzx ecx, word ptr [0x928f52] */ r_ecx = (u32)R16((u32)(0x928f52u));
    /* 00594fc1: movzx ebx, word ptr [0x928f54] */ r_ebx = (u32)R16((u32)(0x928f54u));
    /* 00594fc8: mov esi, dword ptr [0x928f3c] */ r_esi = R32((u32)(0x928f3cu));
    /* 00594fce: movzx edi, word ptr [0x928f40] */ r_edi = (u32)R16((u32)(0x928f40u));
    /* 00594fd5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594fd8: movzx eax, word ptr [0x928f42] */ r_eax = (u32)R16((u32)(0x928f42u));
    /* 00594fdf: mov word ptr [ebp - 0x44], dx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_edx);
    /* 00594fe3: mov word ptr [ebp - 0x42], cx */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_ecx);
    /* 00594fe7: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594fed: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00594ff3: mov word ptr [ebp - 0x40], bx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_ebx);
    /* 00594ff7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00594ffa: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00594ffd: mov word ptr [ebp - 0x34], di */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edi);
    /* 00595001: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 00595005: movzx eax, word ptr [0x928f44] */ r_eax = (u32)R16((u32)(0x928f44u));
    /* 0059500c: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00595010: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00595013: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00595019: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0059501c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059501d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059501f: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595024: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595027: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059502a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059502c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595031u); f_00608470();
    /* 00595031: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595036: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00595039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059503a: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595042: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595047: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059504c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059504f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00595051: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595056u); f_00608470();
    /* 00595056: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059505b: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0059505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059505f: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595067: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059506c: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059506f: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595072: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00595074: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595079u); f_00608470();
    /* 00595079: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059507e: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00595081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595082: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508a: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508f: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595094: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595097: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00595099: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59509eu); f_00608470();
    /* 0059509e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005950a1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005950a4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005950a7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005950aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005950ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005950b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005950b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005950b7: ret  */ FN_RET(0x00594c46); r_esp += 4; return;
L_005950b8:; BB(0x005950b8);
    /* 005950b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005950ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005950bd: jmp 0x594f9f */ goto L_00594f9f;
L_005950c2:; BB(0x005950c2);
    /* 005950c2: mov dword ptr [0xa7450c], 0 */ W32((u32)(0xa7450cu), 0x0u);
    /* 005950cc: jmp 0x594f17 */ goto L_00594f17;
L_005950d1:; BB(0x005950d1);
    /* 005950d1: mov dword ptr [0xa74508], 0 */ W32((u32)(0xa74508u), 0x0u);
    /* 005950db: jmp 0x594ef6 */ goto L_00594ef6;
L_005950e0:; BB(0x005950e0);
    /* 005950e0: mov dword ptr [0xa74504], 0 */ W32((u32)(0xa74504u), 0x0u);
    /* 005950ea: jmp 0x594ed5 */ goto L_00594ed5;
}

void f_00594d4d(void)
{
    FN_ENTER(0x00594d4d);
    /* 00594d4d: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d53: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d55: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00594d59: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 00594d5d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00594d61: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00594d65: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00594d69: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 00594d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594d70: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594d72: jg 0x594d7e */ if ((!fZ&&fS==fO)) goto L_00594d7e;
L_00594d74:; BB(0x00594d74);
    /* 00594d74: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d79: jmp 0x594ce9 */ f_00594ce9(); return;
L_00594d7e:; BB(0x00594d7e);
    /* 00594d7e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594d83:; BB(0x00594d83);
    /* 00594d83: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00594d85: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00594d88: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594d8a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00594d8d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594d8f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00594d92: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00594d95: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00594d99: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 00594d9d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00594da1: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00594da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00594da8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594dab: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594dad: jge 0x594db6 */ if ((fS==fO)) goto L_00594db6;
L_00594daf:; BB(0x00594daf);
    /* 00594daf: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594db4: jmp 0x594d83 */ goto L_00594d83;
L_00594db6:; BB(0x00594db6);
    /* 00594db6: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594dbb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00594dbe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00594dc1: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 00594dc4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00594dc7: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00594dca: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00594dcd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594dcf:; BB(0x00594dcf);
    /* 00594dcf: push dword ptr [ebx*4 + 0x928fb8] */ { u32 v = R32((u32)(r_ebx*4+0x928fb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594dd6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x594ddbu); f_0077a684();
    /* 00594ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594ddc: mov dword ptr [ebx*4 + 0xa744f8], eax */ W32((u32)(r_ebx*4+0xa744f8u), r_eax);
    /* 00594de3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594de6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594de9: jl 0x594dcf */ if ((fS!=fO)) goto L_00594dcf;
L_00594deb:; BB(0x00594deb);
    /* 00594deb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594ded:; BB(0x00594ded);
    /* 00594ded: push dword ptr [ebx*4 + 0x928fb0] */ { u32 v = R32((u32)(r_ebx*4+0x928fb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594df4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x594df9u); f_0077a698();
    /* 00594df9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594dfa: mov dword ptr [ebx*4 + 0xa744f0], eax */ W32((u32)(r_ebx*4+0xa744f0u), r_eax);
    /* 00594e01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e04: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e07: jl 0x594ded */ if ((fS!=fO)) goto L_00594ded;
L_00594e09:; BB(0x00594e09);
    /* 00594e09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e0b:; BB(0x00594e0b);
    /* 00594e0b: push dword ptr [ebx*4 + 0x928fa8] */ { u32 v = R32((u32)(r_ebx*4+0x928fa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e12: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x594e17u); f_0077a6b4();
    /* 00594e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e18: mov dword ptr [ebx*4 + 0xa744e8], eax */ W32((u32)(r_ebx*4+0xa744e8u), r_eax);
    /* 00594e1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e22: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e25: jl 0x594e0b */ if ((fS!=fO)) goto L_00594e0b;
L_00594e27:; BB(0x00594e27);
    /* 00594e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e29:; BB(0x00594e29);
    /* 00594e29: push dword ptr [ebx*4 + 0x928fa0] */ { u32 v = R32((u32)(r_ebx*4+0x928fa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e30: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x594e35u); f_0077a6cc();
    /* 00594e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e36: mov dword ptr [ebx*4 + 0xa744e0], eax */ W32((u32)(r_ebx*4+0xa744e0u), r_eax);
    /* 00594e3d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e40: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e43: jl 0x594e29 */ if ((fS!=fO)) goto L_00594e29;
L_00594e45:; BB(0x00594e45);
    /* 00594e45: mov edx, dword ptr [0xa744e0] */ r_edx = R32((u32)(0xa744e0u));
    /* 00594e4b: fld dword ptr [0x928fc4] */ FPUSH(R_F32((u32)(0x928fc4u)));
    /* 00594e51: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594e57: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00594e59: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00594e5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e60: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00594e66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e69: jae 0x594e6d */ if (!fC) goto L_00594e6d;
L_00594e6b:; BB(0x00594e6b);
    /* 00594e6b: fst st(1) */ ST(1) = ST(0);
L_00594e6d:; BB(0x00594e6d);
    /* 00594e6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e6f: fstp dword ptr [0x9bfa78] */ W_F32((u32)(0x9bfa78u), ST(0)); FPOP();
    /* 00594e75: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00594e78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e7f: jae 0x594e83 */ if (!fC) goto L_00594e83;
L_00594e81:; BB(0x00594e81);
    /* 00594e81: fst st(1) */ ST(1) = ST(0);
L_00594e83:; BB(0x00594e83);
    /* 00594e83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00594e85: fstp dword ptr [0x9bfa48] */ W_F32((u32)(0x9bfa48u), ST(0)); FPOP();
    /* 00594e8b: mov dword ptr [0xa7451c], 0 */ W32((u32)(0xa7451cu), 0x0u);
    /* 00594e95: mov dword ptr [0xa74510], 0 */ W32((u32)(0xa74510u), 0x0u);
    /* 00594e9f: mov dword ptr [0xa74514], 0 */ W32((u32)(0xa74514u), 0x0u);
    /* 00594ea9: mov dword ptr [0xa74518], 0 */ W32((u32)(0xa74518u), 0x0u);
    /* 00594eb3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00594eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594eb7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594ebcu); f_0078e934();
    /* 00594ebc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ebf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ec4: je 0x5950e0 */ if (fZ) goto L_005950e0;
L_00594eca:; BB(0x00594eca);
    /* 00594eca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ecd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ed0: mov dword ptr [0xa74504], eax */ W32((u32)(0xa74504u), r_eax);
L_00594ed5:; BB(0x00594ed5);
    /* 00594ed5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594eddu); f_0078e934();
    /* 00594edd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ee0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ee5: je 0x5950d1 */ if (fZ) goto L_005950d1;
L_00594eeb:; BB(0x00594eeb);
    /* 00594eeb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594eee: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ef1: mov dword ptr [0xa74508], eax */ W32((u32)(0xa74508u), r_eax);
L_00594ef6:; BB(0x00594ef6);
    /* 00594ef6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594efeu); f_0078e934();
    /* 00594efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f01: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f06: je 0x5950c2 */ if (fZ) goto L_005950c2;
L_00594f0c:; BB(0x00594f0c);
    /* 00594f0c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594f12: mov dword ptr [0xa7450c], eax */ W32((u32)(0xa7450cu), r_eax);
L_00594f17:; BB(0x00594f17);
    /* 00594f17: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f1c: mov ecx, dword ptr [0x9bfa54] */ r_ecx = R32((u32)(0x9bfa54u));
    /* 00594f22: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00594f28: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00594f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00594f2f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00594f36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00594f38: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594f3du); f_008581c5();
    /* 00594f3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00594f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f43: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00594f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f48: je 0x5950b8 */ if (fZ) goto L_005950b8;
L_00594f4e:; BB(0x00594f4e);
    /* 00594f4e: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00594f55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00594f5c: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f61: mov esi, ebx */ r_esi = r_ebx;
    /* 00594f63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594f66: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00594f6c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00594f6f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00594f72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f75: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00594f78: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00594f7c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594f7f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00594f82: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00594f85: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00594f88: fadd dword ptr [edi*4 + 0x928f58] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928f58u));
    /* 00594f8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00594f93: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x594f98u); f_00511bb4();
    /* 00594f98: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00594f9f:; BB(0x00594f9f);
    /* 00594f9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594fa2: mov dword ptr [0xa74500], eax */ W32((u32)(0xa74500u), r_eax);
    /* 00594fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594fae: mov eax, dword ptr [0x928f4c] */ r_eax = R32((u32)(0x928f4cu));
    /* 00594fb3: movzx edx, word ptr [0x928f50] */ r_edx = (u32)R16((u32)(0x928f50u));
    /* 00594fba: movzx ecx, word ptr [0x928f52] */ r_ecx = (u32)R16((u32)(0x928f52u));
    /* 00594fc1: movzx ebx, word ptr [0x928f54] */ r_ebx = (u32)R16((u32)(0x928f54u));
    /* 00594fc8: mov esi, dword ptr [0x928f3c] */ r_esi = R32((u32)(0x928f3cu));
    /* 00594fce: movzx edi, word ptr [0x928f40] */ r_edi = (u32)R16((u32)(0x928f40u));
    /* 00594fd5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594fd8: movzx eax, word ptr [0x928f42] */ r_eax = (u32)R16((u32)(0x928f42u));
    /* 00594fdf: mov word ptr [ebp - 0x44], dx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_edx);
    /* 00594fe3: mov word ptr [ebp - 0x42], cx */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_ecx);
    /* 00594fe7: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594fed: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00594ff3: mov word ptr [ebp - 0x40], bx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_ebx);
    /* 00594ff7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00594ffa: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00594ffd: mov word ptr [ebp - 0x34], di */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edi);
    /* 00595001: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 00595005: movzx eax, word ptr [0x928f44] */ r_eax = (u32)R16((u32)(0x928f44u));
    /* 0059500c: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00595010: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00595013: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00595019: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0059501c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059501d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059501f: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595024: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595027: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059502a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059502c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595031u); f_00608470();
    /* 00595031: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595036: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00595039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059503a: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595042: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595047: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059504c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059504f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00595051: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595056u); f_00608470();
    /* 00595056: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059505b: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0059505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059505f: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595067: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059506c: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059506f: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595072: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00595074: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595079u); f_00608470();
    /* 00595079: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059507e: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00595081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595082: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508a: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508f: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595094: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595097: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00595099: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59509eu); f_00608470();
    /* 0059509e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005950a1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005950a4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005950a7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005950aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005950ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005950b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005950b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005950b7: ret  */ FN_RET(0x00594d4d); r_esp += 4; return;
L_005950b8:; BB(0x005950b8);
    /* 005950b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005950ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005950bd: jmp 0x594f9f */ goto L_00594f9f;
L_005950c2:; BB(0x005950c2);
    /* 005950c2: mov dword ptr [0xa7450c], 0 */ W32((u32)(0xa7450cu), 0x0u);
    /* 005950cc: jmp 0x594f17 */ goto L_00594f17;
L_005950d1:; BB(0x005950d1);
    /* 005950d1: mov dword ptr [0xa74508], 0 */ W32((u32)(0xa74508u), 0x0u);
    /* 005950db: jmp 0x594ef6 */ goto L_00594ef6;
L_005950e0:; BB(0x005950e0);
    /* 005950e0: mov dword ptr [0xa74504], 0 */ W32((u32)(0xa74504u), 0x0u);
    /* 005950ea: jmp 0x594ed5 */ goto L_00594ed5;
}

