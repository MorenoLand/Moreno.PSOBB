#include "protos.h"

void f_00512050(void) /* sub_512050 */
{
    FN_ENTER(0x00512050);
    /* 00512050: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00512054: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00512058: fadd dword ptr [0x92052c] */ ST(0) = ST(0) + R_F32((u32)(0x92052cu));
    /* 0051205e: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00512061: ret 8 */ FN_RET(0x00512050); r_esp += 12; return;
}

void f_00512064(void) /* sub_512064 */
{
    FN_ENTER(0x00512064);
    /* 00512064: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512065: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00512066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512067: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512068: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051206b: mov edx, ecx */ r_edx = r_ecx;
    /* 0051206d: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00512071: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00512075: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00512078: mov ebx, eax */ r_ebx = r_eax;
    /* 0051207a: mov ebp, ecx */ r_ebp = r_ecx;
L_0051207c:; BB(0x0051207c);
    /* 0051207c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x512081u); f_0082d7b0();
    /* 00512081: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00512083: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x512088u); f_008305ec();
    /* 00512088: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0051208b: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512091: jne 0x5120ef */ if (!fZ) goto L_005120ef;
L_00512093:; BB(0x00512093);
    /* 00512093: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00512096: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512098: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0051209b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051209d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051209f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005120a1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005120a4: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005120a7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005120ab: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
    /* 005120af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005120b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005120b2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5120b7u); f_00830aa0();
    /* 005120b7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005120bb: mov eax, dword ptr [esi + edx + 4] */ r_eax = R32((u32)(r_esi+r_edx+0x4u));
    /* 005120bf: mov dword ptr [esi + edx + 0x10], eax */ W32((u32)(r_esi+r_edx+0x10u), r_eax);
    /* 005120c3: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 005120c7: mov dword ptr [esi + edx + 0x14], eax */ W32((u32)(r_esi+r_edx+0x14u), r_eax);
    /* 005120cb: mov eax, dword ptr [esi + edx + 0xc] */ r_eax = R32((u32)(r_esi+r_edx+0xcu));
    /* 005120cf: mov dword ptr [esi + edx + 0x18], eax */ W32((u32)(r_esi+r_edx+0x18u), r_eax);
    /* 005120d3: lea edx, [edx + esi + 0x10] */ r_edx = (u32)(r_edx+r_esi+0x10u);
    /* 005120d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005120d8: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5120ddu); f_007828e4();
    /* 005120dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005120df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005120e2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005120e6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005120e9: mov dword ptr [esi + eax], edx */ W32((u32)(r_esi+r_eax), r_edx);
    /* 005120ec: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005120ef:; BB(0x005120ef);
    /* 005120ef: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005120f5: je 0x512113 */ if (fZ) goto L_00512113;
L_005120f7:; BB(0x005120f7);
    /* 005120f7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5120fcu); f_0082da80();
    /* 005120fc: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 005120ff: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512101: jne 0x51207c */ if (!fZ) goto L_0051207c;
L_00512107:; BB(0x00512107);
    /* 00512107: mov eax, ebx */ r_eax = r_ebx;
    /* 00512109: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051210c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051210d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051210e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051210f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00512110: ret 8 */ FN_RET(0x00512064); r_esp += 12; return;
L_00512113:; BB(0x00512113);
    /* 00512113: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512114: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00512117: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0051211b: call 0x512064 */ r_esp -= 4; W32(r_esp, 0x512120u); f_00512064();
    /* 00512120: mov ebx, eax */ r_ebx = r_eax;
    /* 00512122: jmp 0x5120f7 */ goto L_005120f7;
}

void f_00512124(void) /* sub_512124 */
{
    FN_ENTER(0x00512124);
    /* 00512124: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00512126: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512127: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512128: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051212b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0051212f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00512133: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00512136: mov ebx, eax */ r_ebx = r_eax;
    /* 00512138: mov ebp, edx */ r_ebp = r_edx;
L_0051213a:; BB(0x0051213a);
    /* 0051213a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51213fu); f_0082d7b0();
    /* 0051213f: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00512142: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x512147u); f_0082d838();
    /* 00512147: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 0051214a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051214c: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x512151u); f_00830df8();
    /* 00512151: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00512154: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x512159u); f_00831290();
    /* 00512159: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0051215c: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512162: jne 0x5121c0 */ if (!fZ) goto L_005121c0;
L_00512164:; BB(0x00512164);
    /* 00512164: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00512167: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512169: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0051216c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051216e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00512170: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00512172: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00512175: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00512178: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0051217c: lea edx, [ecx + esi + 4] */ r_edx = (u32)(r_ecx+r_esi+0x4u);
    /* 00512180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512183: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x512188u); f_00830aa0();
    /* 00512188: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0051218c: mov ecx, dword ptr [esi + edx + 4] */ r_ecx = R32((u32)(r_esi+r_edx+0x4u));
    /* 00512190: mov dword ptr [esi + edx + 0x10], ecx */ W32((u32)(r_esi+r_edx+0x10u), r_ecx);
    /* 00512194: mov ecx, dword ptr [esi + edx + 8] */ r_ecx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00512198: mov dword ptr [esi + edx + 0x14], ecx */ W32((u32)(r_esi+r_edx+0x14u), r_ecx);
    /* 0051219c: mov ecx, dword ptr [esi + edx + 0xc] */ r_ecx = R32((u32)(r_esi+r_edx+0xcu));
    /* 005121a0: mov dword ptr [esi + edx + 0x18], ecx */ W32((u32)(r_esi+r_edx+0x18u), r_ecx);
    /* 005121a4: lea ecx, [edx + esi + 0x10] */ r_ecx = (u32)(r_edx+r_esi+0x10u);
    /* 005121a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005121a9: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5121aeu); f_007828e4();
    /* 005121ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005121b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005121b3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005121b7: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 005121ba: mov dword ptr [esi + eax], ecx */ W32((u32)(r_esi+r_eax), r_ecx);
    /* 005121bd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005121c0:; BB(0x005121c0);
    /* 005121c0: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005121c6: je 0x5121e4 */ if (fZ) goto L_005121e4;
L_005121c8:; BB(0x005121c8);
    /* 005121c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5121cdu); f_0082da80();
    /* 005121cd: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 005121d0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005121d2: jne 0x51213a */ if (!fZ) goto L_0051213a;
L_005121d8:; BB(0x005121d8);
    /* 005121d8: mov eax, ebx */ r_eax = r_ebx;
    /* 005121da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005121dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005121de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005121df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005121e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005121e1: ret 8 */ FN_RET(0x00512124); r_esp += 12; return;
L_005121e4:; BB(0x005121e4);
    /* 005121e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005121e5: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005121e8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005121ec: call 0x512124 */ r_esp -= 4; W32(r_esp, 0x5121f1u); f_00512124();
    /* 005121f1: mov ebx, eax */ r_ebx = r_eax;
    /* 005121f3: jmp 0x5121c8 */ goto L_005121c8;
}

void f_005121f8(void) /* sub_5121F8 */
{
    FN_ENTER(0x005121f8);
    /* 005121f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005121f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005121fa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005121fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005121ff: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00512203: call 0x782a88 */ r_esp -= 4; W32(r_esp, 0x512208u); f_00782a88();
    /* 00512208: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0051220b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051220d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051220f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00512212: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512214: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512216: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00512218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512219: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51221eu); f_008581c5();
    /* 0051221e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512221: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00512224: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00512227: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051222b: jle 0x51227b */ if ((fZ||fS!=fO)) goto L_0051227b;
L_0051222d:; BB(0x0051222d);
    /* 0051222d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00512231: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00512234: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00512237: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00512239: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0051223c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051223e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512240: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00512242: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00512244: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00512246: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00512248: jmp 0x51224d */ goto L_0051224d;
L_0051224a:; BB(0x0051224a);
    /* 0051224a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
L_0051224d:; BB(0x0051224d);
    /* 0051224d: mov dword ptr [edx + eax], 0 */ W32((u32)(r_edx+r_eax), 0x0u);
    /* 00512254: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00512257: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051225a: mov dword ptr [edx + eax + 4], ebp */ W32((u32)(r_edx+r_eax+0x4u), r_ebp);
    /* 0051225e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00512261: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 00512265: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00512268: mov dword ptr [edx + eax + 0xc], edi */ W32((u32)(r_edx+r_eax+0xcu), r_edi);
    /* 0051226c: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051226f: cmp ecx, dword ptr [ebx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512272: jl 0x51224a */ if ((fS!=fO)) goto L_0051224a;
L_00512274:; BB(0x00512274);
    /* 00512274: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00512278: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0051227b:; BB(0x0051227b);
    /* 0051227b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051227e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051227f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00512280: ret 4 */ FN_RET(0x005121f8); r_esp += 8; return;
}

void f_00512284(void) /* sub_512284 */
{
    FN_ENTER(0x00512284);
    /* 00512284: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512285: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00512287: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512289: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x51228eu); f_005122a8();
    /* 0051228e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00512292: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00512294: jne 0x51229a */ if (!fZ) goto L_0051229a;
L_00512296:; BB(0x00512296);
    /* 00512296: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00512297: ret 4 */ FN_RET(0x00512284); r_esp += 8; return;
L_0051229a:; BB(0x0051229a);
    /* 0051229a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051229b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5122a0u); f_00857e98();
    /* 005122a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005122a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005122a2: ret 4 */ FN_RET(0x00512284); r_esp += 8; return;
}

void f_005122a8(void) /* sub_5122A8 */
{
    FN_ENTER(0x005122a8);
    /* 005122a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005122a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005122ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005122ad: push 0x8d4258 */ { u32 v = 0x8d4258u; r_esp -= 4; W32(r_esp, v); }
    /* 005122b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005122b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005122b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005122c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005122c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005122c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005122c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005122cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005122cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005122d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005122d5: mov dword ptr [ecx], 0xaff758 */ W32((u32)(r_ecx), 0xaff758u);
    /* 005122db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005122e2: call 0x579464 */ r_esp -= 4; W32(r_esp, 0x5122e7u); f_00579464();
    /* 005122e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005122ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005122f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005122f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005122f4: ret  */ FN_RET(0x005122a8); r_esp += 4; return;
}

void f_005122f8(void) /* sub_5122F8 */
{
    FN_ENTER(0x005122f8);
    /* 005122f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005122f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005122fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005122fd: call 0x57946c */ r_esp -= 4; W32(r_esp, 0x512302u); f_0057946c();
    /* 00512302: mov dword ptr [ebp], 0xaff758 */ W32((u32)(r_ebp), 0xaff758u);
    /* 00512309: mov eax, ebp */ r_eax = r_ebp;
    /* 0051230b: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 00512312: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512313: ret  */ FN_RET(0x005122f8); r_esp += 4; return;
}

void f_00512314(void) /* sub_512314 */
{
    FN_ENTER(0x00512314);
    /* 00512314: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00512318: fdivr dword ptr [0x9205a8] */ ST(0) = R_F32((u32)(0x9205a8u)) / ST(0);
    /* 0051231e: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 00512321: ret 4 */ FN_RET(0x00512314); r_esp += 8; return;
}

void f_00512324(void) /* sub_512324 */
{
    FN_ENTER(0x00512324);
    /* 00512324: mov dword ptr [ecx + 0x18], 0x40000000 */ W32((u32)(r_ecx+0x18u), 0x40000000u);
    /* 0051232b: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00512332: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00512339: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00512340: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00512347: ret  */ FN_RET(0x00512324); r_esp += 4; return;
}

void f_00512348(void) /* sub_512348 */
{
    FN_ENTER(0x00512348);
    /* 00512348: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0051234f: mov dword ptr [ecx + 4], 0xbf800000 */ W32((u32)(r_ecx+0x4u), 0xbf800000u);
    /* 00512356: mov dword ptr [ecx + 8], 0xbf800000 */ W32((u32)(r_ecx+0x8u), 0xbf800000u);
    /* 0051235d: mov dword ptr [ecx + 0xc], 0xbf800000 */ W32((u32)(r_ecx+0xcu), 0xbf800000u);
    /* 00512364: mov dword ptr [ecx + 0x10], 0xbf800000 */ W32((u32)(r_ecx+0x10u), 0xbf800000u);
    /* 0051236b: ret  */ FN_RET(0x00512348); r_esp += 4; return;
}

void f_0051236c(void) /* sub_51236C */
{
    FN_ENTER(0x0051236c);
    /* 0051236c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051236d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051236f: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00512372: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 00512375: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00512378: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051237a: call 0x512398 */ r_esp -= 4; W32(r_esp, 0x51237fu); f_00512398();
    /* 0051237f: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00512382: fcomp dword ptr [0x920594] */ fx_compare(ST(0), R_F32((u32)(0x920594u))); FPOP();
    /* 00512388: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051238a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0051238c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051238d: mov eax, 1 */ r_eax = 0x1u;
    /* 00512392: jbe 0x512396 */ if ((fC||fZ)) goto L_00512396;
L_00512394:; BB(0x00512394);
    /* 00512394: mov eax, edx */ r_eax = r_edx;
L_00512396:; BB(0x00512396);
    /* 00512396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512397: ret  */ FN_RET(0x0051236c); r_esp += 4; return;
}

void f_00512398(void) /* sub_512398 */
{
    FN_ENTER(0x00512398);
    /* 00512398: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0051239b: fcom dword ptr [0x920590] */ fx_compare(ST(0), R_F32((u32)(0x920590u))); 
    /* 005123a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005123a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005123a4: jbe 0x5123df */ if ((fC||fZ)) goto L_005123df;
L_005123a6:; BB(0x005123a6);
    /* 005123a6: fcom dword ptr [0x920588] */ fx_compare(ST(0), R_F32((u32)(0x920588u))); 
    /* 005123ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005123ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005123af: jbe 0x5123c2 */ if ((fC||fZ)) goto L_005123c2;
L_005123b1:; BB(0x005123b1);
    /* 005123b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005123b3: fld dword ptr [0x920580] */ FPUSH(R_F32((u32)(0x920580u)));
    /* 005123b9: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005123c0: jmp 0x5123d5 */ goto L_005123d5;
L_005123c2:; BB(0x005123c2);
    /* 005123c2: fld dword ptr [0x920584] */ FPUSH(R_F32((u32)(0x920584u)));
    /* 005123c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005123ca: fld dword ptr [0x920580] */ FPUSH(R_F32((u32)(0x920580u)));
    /* 005123d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005123d2: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
L_005123d5:; BB(0x005123d5);
    /* 005123d5: fst dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0));
    /* 005123d8: fst dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0));
    /* 005123db: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 005123de: ret  */ FN_RET(0x00512398); r_esp += 4; return;
L_005123df:; BB(0x005123df);
    /* 005123df: fld dword ptr [0x92058c] */ FPUSH(R_F32((u32)(0x92058cu)));
    /* 005123e5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005123e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005123e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005123eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005123ec: jbe 0x5123f0 */ if ((fC||fZ)) goto L_005123f0;
L_005123ee:; BB(0x005123ee);
    /* 005123ee: fst st(1) */ ST(1) = ST(0);
L_005123f0:; BB(0x005123f0);
    /* 005123f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005123f2: fst dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0));
    /* 005123f5: fst dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0));
    /* 005123f8: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 005123fb: mov dword ptr [ecx + 4], 0xbf800000 */ W32((u32)(r_ecx+0x4u), 0xbf800000u);
    /* 00512402: ret  */ FN_RET(0x00512398); r_esp += 4; return;
}

void f_00512404(void) /* sub_512404 */
{
    FN_ENTER(0x00512404);
    /* 00512404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512405: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00512407: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0051240a: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 0051240d: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00512410: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00512412: call 0x512398 */ r_esp -= 4; W32(r_esp, 0x512417u); f_00512398();
    /* 00512417: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0051241a: fcomp dword ptr [0x92057c] */ fx_compare(ST(0), R_F32((u32)(0x92057cu))); FPOP();
    /* 00512420: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00512422: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00512424: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00512425: mov eax, 1 */ r_eax = 0x1u;
    /* 0051242a: jae 0x51242e */ if (!fC) goto L_0051242e;
L_0051242c:; BB(0x0051242c);
    /* 0051242c: mov eax, edx */ r_eax = r_edx;
L_0051242e:; BB(0x0051242e);
    /* 0051242e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051242f: ret  */ FN_RET(0x00512404); r_esp += 4; return;
}

void f_00512430(void) /* sub_512430 */
{
    FN_ENTER(0x00512430);
    /* 00512430: call 0x579530 */ r_esp -= 4; W32(r_esp, 0x512435u); f_00579530();
    /* 00512435: mov ecx, 0x1d00 */ r_ecx = 0x1d00u;
    /* 0051243a: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x51243fu); f_0082e1c4();
    /* 0051243f: ret  */ FN_RET(0x00512430); r_esp += 4; return;
}

void f_00512440(void) /* sub_512440 */
{
    FN_ENTER(0x00512440);
    /* 00512440: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00512443: fcomp dword ptr [0x920578] */ fx_compare(ST(0), R_F32((u32)(0x920578u))); FPOP();
    /* 00512449: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051244b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0051244d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051244e: mov eax, 1 */ r_eax = 0x1u;
    /* 00512453: ja 0x512457 */ if ((!fC&&!fZ)) goto L_00512457;
L_00512455:; BB(0x00512455);
    /* 00512455: mov eax, edx */ r_eax = r_edx;
L_00512457:; BB(0x00512457);
    /* 00512457: ret  */ FN_RET(0x00512440); r_esp += 4; return;
}

void f_00512458(void) /* sub_512458 */
{
    FN_ENTER(0x00512458);
    /* 00512458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512459: mov edi, ecx */ r_edi = r_ecx;
    /* 0051245b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051245d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051245f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00512461: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x512464u); call_ind(t); }
    /* 00512464: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 00512467: fmul dword ptr [0x920570] */ ST(0) = ST(0) * R_F32((u32)(0x920570u));
    /* 0051246d: fadd dword ptr [0x920574] */ ST(0) = ST(0) + R_F32((u32)(0x920574u));
    /* 00512473: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00512476: mov dword ptr [edi + 4], 0x3f800000 */ W32((u32)(r_edi+0x4u), 0x3f800000u);
    /* 0051247d: mov dword ptr [edi + 8], 0x3f800000 */ W32((u32)(r_edi+0x8u), 0x3f800000u);
    /* 00512484: mov dword ptr [edi + 0xc], 0x3f800000 */ W32((u32)(r_edi+0xcu), 0x3f800000u);
    /* 0051248b: mov dword ptr [edi + 0x10], 0x3f800000 */ W32((u32)(r_edi+0x10u), 0x3f800000u);
    /* 00512492: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00512493: ret  */ FN_RET(0x00512458); r_esp += 4; return;
}

void f_00512494(void) /* sub_512494 */
{
    FN_ENTER(0x00512494);
    /* 00512494: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512495: mov edi, ecx */ r_edi = r_ecx;
    /* 00512497: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00512499: mov ecx, edi */ r_ecx = r_edi;
    /* 0051249b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051249d: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5124a0u); call_ind(t); }
    /* 005124a0: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 005124a3: fmul dword ptr [0x920568] */ ST(0) = ST(0) * R_F32((u32)(0x920568u));
    /* 005124a9: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 005124ac: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 005124b3: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 005124ba: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 005124c1: mov dword ptr [edi + 0x10], 0 */ W32((u32)(r_edi+0x10u), 0x0u);
    /* 005124c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005124c9: ret  */ FN_RET(0x00512494); r_esp += 4; return;
}

void f_005124cc(void) /* sub_5124CC */
{
    FN_ENTER(0x005124cc);
    /* 005124cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005124cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005124cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005124d1: push 0x8d42bc */ { u32 v = 0x8d42bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005124d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005124dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005124dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005124e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005124e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005124ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005124ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005124f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005124f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005124f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005124f9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00512500: mov eax, ecx */ r_eax = r_ecx;
    /* 00512502: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 00512508: mov dword ptr [eax], 0xaff860 */ W32((u32)(r_eax), 0xaff860u);
    /* 0051250e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512510: je 0x51252b */ if (fZ) goto L_0051252b;
L_00512512:; BB(0x00512512);
    /* 00512512: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00512516: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051251b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0051251f: mov edx, ecx */ r_edx = r_ecx;
    /* 00512521: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_0051252b:; BB(0x0051252b);
    /* 0051252b: mov eax, ecx */ r_eax = r_ecx;
    /* 0051252d: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 00512533: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512535: je 0x512550 */ if (fZ) goto L_00512550;
L_00512537:; BB(0x00512537);
    /* 00512537: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0051253b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00512540: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00512544: mov edx, ecx */ r_edx = r_ecx;
    /* 00512546: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
L_00512550:; BB(0x00512550);
    /* 00512550: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x512555u); f_00786f64();
    /* 00512555: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00512558: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x51255du); f_007b9c8c();
    /* 0051255d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00512564: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00512569: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051256c: lea edx, [eax + 0x3d4] */ r_edx = (u32)(r_eax+0x3d4u);
    /* 00512572: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512574: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512577: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x51257cu); f_008586d6();
    /* 0051257c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00512583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00512586: lea ecx, [eax + 0x3b0] */ r_ecx = (u32)(r_eax+0x3b0u);
    /* 0051258c: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x512591u); f_005769f8();
    /* 00512591: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00512594: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x512599u); f_0052a684();
    /* 00512599: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051259c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051259e: jne 0x5125b0 */ if (!fZ) goto L_005125b0;
L_005125a0:; BB(0x005125a0);
    /* 005125a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005125a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005125aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005125ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005125ad: ret 4 */ FN_RET(0x005124cc); r_esp += 8; return;
L_005125b0:; BB(0x005125b0);
    /* 005125b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005125b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005125b4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5125b9u); f_005c2f74();
    /* 005125b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005125ba: jmp 0x5125a0 */ goto L_005125a0;
}

void f_005125bc(void) /* sub_5125BC */
{
    FN_ENTER(0x005125bc);
    /* 005125bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005125be: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005125c5: ret  */ FN_RET(0x005125bc); r_esp += 4; return;
}

void f_005125c8(void) /* sub_5125C8 */
{
    FN_ENTER(0x005125c8);
    /* 005125c8: mov eax, dword ptr [0xa72d10] */ r_eax = R32((u32)(0xa72d10u));
    /* 005125cd: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005125d0: je 0x5125e3 */ if (fZ) goto L_005125e3;
L_005125d2:; BB(0x005125d2);
    /* 005125d2: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005125d5: je 0x5125e3 */ if (fZ) goto L_005125e3;
L_005125d7:; BB(0x005125d7);
    /* 005125d7: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005125da: je 0x5125e3 */ if (fZ) goto L_005125e3;
L_005125dc:; BB(0x005125dc);
    /* 005125dc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5125e1u); f_0082dab0();
    /* 005125e1: jmp 0x5125e8 */ goto L_005125e8;
L_005125e3:; BB(0x005125e3);
    /* 005125e3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5125e8u); f_0082dbac();
L_005125e8:; BB(0x005125e8);
    /* 005125e8: add dword ptr [0xa72d10], 1 */ { u32 ad = (u32)(0xa72d10u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005125ef: ret  */ FN_RET(0x005125c8); r_esp += 4; return;
}

void f_005125f0(void) /* sub_5125F0 */
{
    FN_ENTER(0x005125f0);
    /* 005125f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005125f1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005125f4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005125f6: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 005125fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005125ff: fmul dword ptr [0x920610] */ ST(0) = ST(0) * R_F32((u32)(0x920610u));
    /* 00512605: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0051260c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00512610: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 00512618: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0051261d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x512622u); f_0082d990();
    /* 00512622: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00512625: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512627: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51262cu); f_0082d8bc();
    /* 0051262c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051262f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512630: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00512634: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512636: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x51263bu); f_0082eab8();
    /* 0051263b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x512640u); f_0082da80();
    /* 00512640: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00512643: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00512646: mov edx, ebp */ r_edx = r_ebp;
    /* 00512648: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x51264du); f_0082ebac();
    /* 0051264d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00512650: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00512652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512653: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x512658u); f_005787a4();
    /* 00512658: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0051265c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051265e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051265f: call 0x578538 */ r_esp -= 4; W32(r_esp, 0x512664u); f_00578538();
    /* 00512664: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00512667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512668: ret  */ FN_RET(0x005125f0); r_esp += 4; return;
}

void f_0051266c(void) /* sub_51266C */
{
    FN_ENTER(0x0051266c);
    /* 0051266c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051266d: mov edi, ecx */ r_edi = r_ecx;
    /* 0051266f: mov ecx, edi */ r_ecx = r_edi;
    /* 00512671: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00512676: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51267bu); f_007879b8();
    /* 0051267b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051267e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00512680: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512681: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512682: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512684: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x512689u); f_00814298();
    /* 00512689: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051268c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051268d: ret  */ FN_RET(0x0051266c); r_esp += 4; return;
}

void f_00512690(void) /* sub_512690 */
{
    FN_ENTER(0x00512690);
    /* 00512690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00512691: mov edi, ecx */ r_edi = r_ecx;
    /* 00512693: mov ecx, edi */ r_ecx = r_edi;
    /* 00512695: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051269a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51269fu); f_007879b8();
    /* 0051269f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005126a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005126a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005126a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005126a8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5126adu); f_00814298();
    /* 005126ad: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005126b2: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5126b7u); f_00814680();
    /* 005126b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005126ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005126bb: ret  */ FN_RET(0x00512690); r_esp += 4; return;
}

void f_005126bc(void) /* sub_5126BC */
{
    FN_ENTER(0x005126bc);
    /* 005126bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005126bd: mov edi, ecx */ r_edi = r_ecx;
    /* 005126bf: mov ecx, edi */ r_ecx = r_edi;
    /* 005126c1: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 005126c6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5126cbu); f_007879b8();
    /* 005126cb: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005126ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005126d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005126d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005126d4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5126d9u); f_00814298();
    /* 005126d9: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005126de: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5126e3u); f_00814680();
    /* 005126e3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005126e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005126e7: ret  */ FN_RET(0x005126bc); r_esp += 4; return;
}

void f_005126e8(void) /* sub_5126E8 */
{
    FN_ENTER(0x005126e8);
    /* 005126e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005126e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005126ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005126eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005126ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005126ef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005126f1: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005126f4: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005126f9: je 0x512703 */ if (fZ) goto L_00512703;
L_005126fb:; BB(0x005126fb);
    /* 005126fb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005126fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005126ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512700: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00512701: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00512702: ret  */ FN_RET(0x005126e8); r_esp += 4; return;
L_00512703:; BB(0x00512703);
    /* 00512703: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00512708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051270a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051270c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00512711: push dword ptr [0xa72cec] */ { u32 v = R32((u32)(0xa72cecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00512717: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x51271au); call_ind(t); }
    /* 0051271a: mov edi, eax */ r_edi = r_eax;
    /* 0051271c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051271e: je 0x512971 */ if (fZ) goto L_00512971;
L_00512724:; BB(0x00512724);
    /* 00512724: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00512726: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00512729: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51272eu); f_00520e6c();
    /* 0051272e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512730: je 0x512750 */ if (fZ) goto L_00512750;
L_00512732:; BB(0x00512732);
    /* 00512732: lea ebp, [ebx + 0x3d4] */ r_ebp = (u32)(r_ebx+0x3d4u);
    /* 00512738: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051273a: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x51273fu); f_005771a4();
    /* 0051273f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00512745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512746: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00512748: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x51274du); f_0057725c();
    /* 0051274d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00512750:; BB(0x00512750);
    /* 00512750: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512751: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x512756u); f_00794548();
    /* 00512756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512757: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0051275d: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00512760: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00512763: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00512769: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51276eu); f_00829cc8();
    /* 0051276e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x512773u); f_0082d7b0();
    /* 00512773: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512775: push dword ptr [ebx + 0x388] */ { u32 v = R32((u32)(r_ebx+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051277b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051277d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051277f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x512784u); f_00830b74();
    /* 00512784: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00512787: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51278cu); f_0082d838();
    /* 0051278c: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0051278f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00512791: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x512796u); f_0082d8bc();
    /* 00512796: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x51279bu); f_004f7c84();
    /* 0051279b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051279e: je 0x512a33 */ if (fZ) goto L_00512a33;
L_005127a4:; BB(0x005127a4);
    /* 005127a4: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005127ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005127ad: jl 0x5127b4 */ if ((fS!=fO)) goto L_005127b4;
L_005127af:; BB(0x005127af);
    /* 005127af: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005127b2: jle 0x5127be */ if ((fZ||fS!=fO)) goto L_005127be;
L_005127b4:; BB(0x005127b4);
    /* 005127b4: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005127b7: jl 0x5127dd */ if ((fS!=fO)) goto L_005127dd;
L_005127b9:; BB(0x005127b9);
    /* 005127b9: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005127bc: jg 0x5127dd */ if ((!fZ&&fS==fO)) goto L_005127dd;
L_005127be:; BB(0x005127be);
    /* 005127be: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 005127c1: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005127c4: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 005127c7: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005127ca: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 005127cd: movsx ebp, word ptr [esi + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 005127d1: mov edx, ebp */ r_edx = r_ebp;
    /* 005127d3: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005127d9: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
L_005127dd:; BB(0x005127dd);
    /* 005127dd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005127e1: mov edx, dword ptr [ebx + 0x380] */ r_edx = R32((u32)(r_ebx+0x380u));
    /* 005127e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005127e9: jne 0x51282d */ if (!fZ) goto L_0051282d;
L_005127eb:; BB(0x005127eb);
    /* 005127eb: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 005127ee: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 005127f1: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005127f4: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005127f7: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005127fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005127fd: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00512801: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00512805: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00512809: mov edx, 0xffffff4c */ r_edx = 0xffffff4cu;
    /* 0051280e: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00512812: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 00512815: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00512818: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0051281b: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0051281e: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00512821: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512824: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00512829: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
L_0051282d:; BB(0x0051282d);
    /* 0051282d: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x512832u); f_00578b38();
    /* 00512832: mov dword ptr [0xa72d10], 0 */ W32((u32)(0xa72d10u), 0x0u);
    /* 0051283c: mov ecx, 0x5125c8 */ r_ecx = 0x5125c8u;
    /* 00512841: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x512846u); f_0082fac4();
    /* 00512846: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0051284c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051284f: je 0x512991 */ if (fZ) goto L_00512991;
L_00512855:; BB(0x00512855);
    /* 00512855: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00512858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051285a: jne 0x51286e */ if (!fZ) goto L_0051286e;
L_0051285c:; BB(0x0051285c);
    /* 0051285c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051285f: je 0x512979 */ if (fZ) goto L_00512979;
L_00512865:; BB(0x00512865);
    /* 00512865: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512867: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x51286cu); f_007aa7b8();
    /* 0051286c: jmp 0x5128a7 */ goto L_005128a7;
L_0051286e:; BB(0x0051286e);
    /* 0051286e: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 00512874: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0051287a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0051287d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x512880u); call_ind(t); }
    /* 00512880: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512882: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x512887u); f_008173d0();
    /* 00512887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512889: jne 0x51289b */ if (!fZ) goto L_0051289b;
L_0051288b:; BB(0x0051288b);
    /* 0051288b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051288e: je 0x512985 */ if (fZ) goto L_00512985;
L_00512894:; BB(0x00512894);
    /* 00512894: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512896: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x51289bu); f_007aa7b8();
L_0051289b:; BB(0x0051289b);
    /* 0051289b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0051289e: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005128a4: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5128a7u); call_ind(t); }
L_005128a7:; BB(0x005128a7);
    /* 005128a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005128a9: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5128aeu); f_0082fac4();
    /* 005128ae: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5128b3u); f_0082dab0();
    /* 005128b3: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005128b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005128bb: jne 0x5128ed */ if (!fZ) goto L_005128ed;
L_005128bd:; BB(0x005128bd);
    /* 005128bd: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 005128c0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005128c3: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 005128c6: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005128c9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005128cc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005128cf: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005128d3: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005128d7: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 005128da: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005128dd: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005128e0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005128e3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005128e6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005128e9: mov word ptr [eax + 6], si */ W16((u32)(r_eax+0x6u), (u16)r_esi);
L_005128ed:; BB(0x005128ed);
    /* 005128ed: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005128f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005128f6: jl 0x51291a */ if ((fS!=fO)) goto L_0051291a;
L_005128f8:; BB(0x005128f8);
    /* 005128f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005128fb: jle 0x512907 */ if ((fZ||fS!=fO)) goto L_00512907;
L_005128fd:; BB(0x005128fd);
    /* 005128fd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512900: jl 0x51291a */ if ((fS!=fO)) goto L_0051291a;
L_00512902:; BB(0x00512902);
    /* 00512902: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512905: jg 0x51291a */ if ((!fZ&&fS==fO)) goto L_0051291a;
L_00512907:; BB(0x00512907);
    /* 00512907: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0051290a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0051290d: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00512910: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00512913: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00512916: mov word ptr [eax + 6], bp */ W16((u32)(r_eax+0x6u), (u16)r_ebp);
L_0051291a:; BB(0x0051291a);
    /* 0051291a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51291fu); f_0082da80();
    /* 0051291f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00512924: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00512927: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051292c: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x512931u); f_00794750();
    /* 00512931: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00512938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051293a: jl 0x51294b */ if ((fS!=fO)) goto L_0051294b;
L_0051293c:; BB(0x0051293c);
    /* 0051293c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051293f: jle 0x512971 */ if ((fZ||fS!=fO)) goto L_00512971;
L_00512941:; BB(0x00512941);
    /* 00512941: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512944: jl 0x51294b */ if ((fS!=fO)) goto L_0051294b;
L_00512946:; BB(0x00512946);
    /* 00512946: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512949: jle 0x512971 */ if ((fZ||fS!=fO)) goto L_00512971;
L_0051294b:; BB(0x0051294b);
    /* 0051294b: mov dword ptr [esp + 8], 0x3fc00000 */ W32((u32)(r_esp+0x8u), 0x3fc00000u);
    /* 00512953: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00512957: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512959: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00512961: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 00512969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051296b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051296c: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x512971u); f_00779d4c();
L_00512971:; BB(0x00512971);
    /* 00512971: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00512974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00512975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512976: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00512977: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00512978: ret  */ FN_RET(0x005126e8); r_esp += 4; return;
L_00512979:; BB(0x00512979);
    /* 00512979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051297b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x512980u); f_007aa668();
    /* 00512980: jmp 0x5128a7 */ goto L_005128a7;
L_00512985:; BB(0x00512985);
    /* 00512985: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00512987: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x51298cu); f_007aa668();
    /* 0051298c: jmp 0x51289b */ goto L_0051289b;
L_00512991:; BB(0x00512991);
    /* 00512991: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00512997: lea edi, [ebx + 0x3b0] */ r_edi = (u32)(r_ebx+0x3b0u);
    /* 0051299d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051299f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5129a2u); call_ind(t); }
    /* 005129a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005129a4: je 0x5128a7 */ if (fZ) goto L_005128a7;
L_005129aa:; BB(0x005129aa);
    /* 005129aa: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005129af: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005129b5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005129ba: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 005129bf: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005129c5: mov ecx, edi */ r_ecx = r_edi;
    /* 005129c7: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 005129cc: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 005129d2: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5129d5u); call_ind(t); }
    /* 005129d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005129d7: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5129dcu); f_008173d0();
    /* 005129dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005129de: jne 0x512a01 */ if (!fZ) goto L_00512a01;
L_005129e0:; BB(0x005129e0);
    /* 005129e0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005129e5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005129e8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005129ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005129ef: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5129f4u); f_007aa668();
    /* 005129f4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005129f9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005129fc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00512a01:; BB(0x00512a01);
    /* 00512a01: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00512a07: mov ecx, edi */ r_ecx = r_edi;
    /* 00512a09: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x512a0cu); call_ind(t); }
    /* 00512a0c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00512a11: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00512a17: mov edi, dword ptr [0xaab518] */ r_edi = R32((u32)(0xaab518u));
    /* 00512a1d: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00512a22: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00512a28: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 00512a2e: jmp 0x5128a7 */ goto L_005128a7;
L_00512a33:; BB(0x00512a33);
    /* 00512a33: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00512a36: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x512a3bu); f_0082e1e8();
    /* 00512a3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512a3c: jmp 0x51291a */ goto L_0051291a;
}

void f_00512a44(void)
{
    FN_ENTER(0x00512a44);
    /* 00512a44: mov eax, dword ptr [0xa72d08] */ r_eax = R32((u32)(0xa72d08u));
    /* 00512a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a4b: je 0x512a5e */ if (fZ) goto L_00512a5e;
L_00512a4d:; BB(0x00512a4d);
    /* 00512a4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a4e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x512a53u); f_00857e98();
    /* 00512a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512a54: mov dword ptr [0xa72d08], 0 */ W32((u32)(0xa72d08u), 0x0u);
L_00512a5e:; BB(0x00512a5e);
    /* 00512a5e: mov eax, dword ptr [0xa72d04] */ r_eax = R32((u32)(0xa72d04u));
    /* 00512a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a65: je 0x512a78 */ if (fZ) goto L_00512a78;
L_00512a67:; BB(0x00512a67);
    /* 00512a67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a68: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x512a6du); f_00857e98();
    /* 00512a6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512a6e: mov dword ptr [0xa72d04], 0 */ W32((u32)(0xa72d04u), 0x0u);
L_00512a78:; BB(0x00512a78);
    /* 00512a78: mov eax, dword ptr [0xa72d00] */ r_eax = R32((u32)(0xa72d00u));
    /* 00512a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a7f: je 0x512a92 */ if (fZ) goto L_00512a92;
L_00512a81:; BB(0x00512a81);
    /* 00512a81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a82: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x512a87u); f_00857e98();
    /* 00512a87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512a88: mov dword ptr [0xa72d00], 0 */ W32((u32)(0xa72d00u), 0x0u);
L_00512a92:; BB(0x00512a92);
    /* 00512a92: mov eax, dword ptr [0xa72cfc] */ r_eax = R32((u32)(0xa72cfcu));
    /* 00512a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a99: je 0x512aac */ if (fZ) goto L_00512aac;
L_00512a9b:; BB(0x00512a9b);
    /* 00512a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x512aa1u); f_00857e98();
    /* 00512aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512aa2: mov dword ptr [0xa72cfc], 0 */ W32((u32)(0xa72cfcu), 0x0u);
L_00512aac:; BB(0x00512aac);
    /* 00512aac: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 00512ab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512ab4: je 0x512ac9 */ if (fZ) goto L_00512ac9;
L_00512ab6:; BB(0x00512ab6);
    /* 00512ab6: je 0x512abf */ if (fZ) goto L_00512abf;
L_00512ab8:; BB(0x00512ab8);
    /* 00512ab8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512aba: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x512abfu); f_0045a950();
L_00512abf:; BB(0x00512abf);
    /* 00512abf: mov dword ptr [0xa72d18], 0 */ W32((u32)(0xa72d18u), 0x0u);
L_00512ac9:; BB(0x00512ac9);
    /* 00512ac9: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 00512acf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512ad1: je 0x512ae6 */ if (fZ) goto L_00512ae6;
L_00512ad3:; BB(0x00512ad3);
    /* 00512ad3: je 0x512adc */ if (fZ) goto L_00512adc;
L_00512ad5:; BB(0x00512ad5);
    /* 00512ad5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ad7: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x512adcu); f_0045a950();
L_00512adc:; BB(0x00512adc);
    /* 00512adc: mov dword ptr [0xa72d14], 0 */ W32((u32)(0xa72d14u), 0x0u);
L_00512ae6:; BB(0x00512ae6);
    /* 00512ae6: mov ecx, dword ptr [0xa72d0c] */ r_ecx = R32((u32)(0xa72d0cu));
    /* 00512aec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00512aee: je 0x512b03 */ if (fZ) goto L_00512b03;
L_00512af0:; BB(0x00512af0);
    /* 00512af0: je 0x512af9 */ if (fZ) goto L_00512af9;
L_00512af2:; BB(0x00512af2);
    /* 00512af2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512af4: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x512af9u); f_004066a8();
L_00512af9:; BB(0x00512af9);
    /* 00512af9: mov dword ptr [0xa72d0c], 0 */ W32((u32)(0xa72d0cu), 0x0u);
L_00512b03:; BB(0x00512b03);
    /* 00512b03: ret  */ FN_RET(0x00512a44); r_esp += 4; return;
}

void f_00512b04(void)
{
    FN_ENTER(0x00512b04);
    /* 00512b04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512b05: mov ebp, esp */ r_ebp = r_esp;
    /* 00512b07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00512b09: push 0x8d42fe */ { u32 v = 0x8d42feu; r_esp -= 4; W32(r_esp, v); }
    /* 00512b0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00512b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00512b1c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512b1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00512b22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00512b25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00512b28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00512b2b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00512b2d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00512b34: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x512b39u); f_005caba4();
    /* 00512b39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512b3a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00512b3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b3f: je 0x512bc7 */ if (fZ) goto L_00512bc7;
L_00512b45:; BB(0x00512b45);
    /* 00512b45: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00512b4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00512b53: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00512b59: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00512b5c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x512b61u); f_00787a4c();
    /* 00512b61: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00512b64: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00512b6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00512b6e:; BB(0x00512b6e);
    /* 00512b6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00512b75: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00512b7c: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 00512b81: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x512b86u); f_005caba4();
    /* 00512b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512b87: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00512b8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b8c: je 0x512bc3 */ if (fZ) goto L_00512bc3;
L_00512b8e:; BB(0x00512b8e);
    /* 00512b8e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00512b95: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00512b9c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00512b9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00512ba2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00512ba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ba6: call 0x512bd0 */ r_esp -= 4; W32(r_esp, 0x512babu); f_00512bd0();
    /* 00512bab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00512bae: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00512bb5:; BB(0x00512bb5);
    /* 00512bb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00512bb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00512bbf: mov esp, ebp */ r_esp = r_ebp;
    /* 00512bc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512bc2: ret  */ FN_RET(0x00512b04); r_esp += 4; return;
L_00512bc3:; BB(0x00512bc3);
    /* 00512bc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00512bc5: jmp 0x512bb5 */ goto L_00512bb5;
L_00512bc7:; BB(0x00512bc7);
    /* 00512bc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00512bc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00512bcc: jmp 0x512b6e */ goto L_00512b6e;
}

void f_00512bd0(void) /* sub_512BD0 */
{
    FN_ENTER(0x00512bd0);
    /* 00512bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00512bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00512bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00512bd5: push 0x8d434c */ { u32 v = 0x8d434cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00512be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512be1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00512be8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00512beb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00512bee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00512bf1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00512bf4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00512bf7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00512bfa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00512bfd: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00512c00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00512c03: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x512c08u); f_0052b6ec();
    /* 00512c08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00512c0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512c12: mov dword ptr [ecx], 0xaff860 */ W32((u32)(r_ecx), 0xaff860u);
    /* 00512c18: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512c1e: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x512c23u); f_00576a48();
    /* 00512c23: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00512c2a: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00512c2f: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512c34: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512c37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00512c39: add eax, 0x3d4 */ {  u32 a = r_eax; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00512c3e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512c41: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x512c46u); f_00858736();
    /* 00512c46: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00512c4d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512c50: mov eax, dword ptr [0x9bb404] */ r_eax = R32((u32)(0x9bb404u));
    /* 00512c55: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00512c58: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00512c5a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00512c5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c5e: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x512c64u); call_ind(t); }
    /* 00512c64: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512c67: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00512c6a: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00512c6d: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00512c70: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00512c76: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00512c7c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512c7f: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00512c85: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00512c8b: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00512c91: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00512c97: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00512c9d: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00512ca3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512ca6: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00512cac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512caf: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00512cb5: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00512cb8: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00512cbe: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00512cc1: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00512cc7: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00512cca: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00512cd0: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00512cd6: call 0x512f94 */ r_esp -= 4; W32(r_esp, 0x512cdbu); f_00512f94();
    /* 00512cdb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512cde: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 00512ce3: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 00512ce9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00512cef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00512cf1: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 00512cf5: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00512cf8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00512cfe: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 00512d02: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00512d05: mov dword ptr [ecx + 0xd8], 0x9bb300 */ W32((u32)(r_ecx+0xd8u), 0x9bb300u);
    /* 00512d0f: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00512d15: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00512d1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00512d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512d1e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00512d25: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x512d2au); f_007aa4c8();
    /* 00512d2a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512d2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512d2f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00512d36: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00512d3c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00512d43: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00512d46: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d48: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d4a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d4c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d4e: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d50: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512d52: lea esi, [ebx + ebx + 0x9bb260] */ r_esi = (u32)(r_ebx+r_ebx+0x9bb260u);
    /* 00512d59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00512d5a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x512d5fu); f_007b9a88();
    /* 00512d5f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512d62: mov ebx, dword ptr [0xa72d08] */ r_ebx = R32((u32)(0xa72d08u));
    /* 00512d68: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 00512d6e: mov eax, dword ptr [0xa72d00] */ r_eax = R32((u32)(0xa72d00u));
    /* 00512d73: mov esi, dword ptr [ecx + 0x33c] */ r_esi = R32((u32)(r_ecx+0x33cu));
    /* 00512d79: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00512d7c: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00512d7f: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00512d82: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x512d87u); f_007868f8();
    /* 00512d87: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512d8a: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00512d90: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 00512d97: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00512d99: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00512d9b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00512d9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512da0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512da2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00512da4: lea ebx, [edx + 0x9bb200] */ r_ebx = (u32)(r_edx+0x9bb200u);
    /* 00512daa: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00512db0: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 00512db7: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x512dbcu); f_0078730c();
    /* 00512dbc: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512dbf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512dc2: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00512dc8: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00512dce: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00512dd4: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00512dd7: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00512dda: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00512ddd: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x512de2u); f_00786bbc();
    /* 00512de2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512de5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x512deau); f_007751b0();
    /* 00512dea: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512ded: fld dword ptr [0x9205f4] */ FPUSH(R_F32((u32)(0x9205f4u)));
    /* 00512df3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00512df5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00512df7: fmul dword ptr [0x9205f0] */ ST(0) = ST(0) * R_F32((u32)(0x9205f0u));
    /* 00512dfd: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00512dff: mov ecx, dword ptr [esi + 0x2e8] */ r_ecx = R32((u32)(r_esi+0x2e8u));
    /* 00512e05: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 00512e08: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00512e0b: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00512e0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00512e14: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00512e17: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00512e1a: fistp dword ptr [esi + 0x2b0] */ W32((u32)(r_esi+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00512e20: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00512e23: mov eax, 0xf */ r_eax = 0xfu;
    /* 00512e28: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 00512e2f: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00512e35: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00512e3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00512e3e: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 00512e45: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 00512e4c: mov word ptr [esi + 0x37e], dx */ W16((u32)(r_esi+0x37eu), (u16)r_edx);
    /* 00512e53: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 00512e59: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 00512e5f: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00512e62: mov dword ptr [esi + 0x2e8], ecx */ W32((u32)(r_esi+0x2e8u), r_ecx);
    /* 00512e68: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 00512e6b: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x512e70u); f_00520e6c();
    /* 00512e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512e72: je 0x512e9c */ if (fZ) goto L_00512e9c;
L_00512e74:; BB(0x00512e74);
    /* 00512e74: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512e77: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00512e7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512e80: jne 0x512e89 */ if (!fZ) goto L_00512e89;
L_00512e82:; BB(0x00512e82);
    /* 00512e82: mov ebx, 0xffff0040 */ r_ebx = 0xffff0040u;
    /* 00512e87: jmp 0x512ec2 */ goto L_00512ec2;
L_00512e89:; BB(0x00512e89);
    /* 00512e89: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512e8c: jne 0x512e95 */ if (!fZ) goto L_00512e95;
L_00512e8e:; BB(0x00512e8e);
    /* 00512e8e: mov ebx, 0xffffff00 */ r_ebx = 0xffffff00u;
    /* 00512e93: jmp 0x512ec2 */ goto L_00512ec2;
L_00512e95:; BB(0x00512e95);
    /* 00512e95: mov ebx, 0xff20ff20 */ r_ebx = 0xff20ff20u;
    /* 00512e9a: jmp 0x512ec2 */ goto L_00512ec2;
L_00512e9c:; BB(0x00512e9c);
    /* 00512e9c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512e9f: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00512ea5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512ea8: jne 0x512eb1 */ if (!fZ) goto L_00512eb1;
L_00512eaa:; BB(0x00512eaa);
    /* 00512eaa: mov ebx, 0xffff0000 */ r_ebx = 0xffff0000u;
    /* 00512eaf: jmp 0x512ec2 */ goto L_00512ec2;
L_00512eb1:; BB(0x00512eb1);
    /* 00512eb1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512eb4: jne 0x512ebd */ if (!fZ) goto L_00512ebd;
L_00512eb6:; BB(0x00512eb6);
    /* 00512eb6: mov ebx, 0xffffff00 */ r_ebx = 0xffffff00u;
    /* 00512ebb: jmp 0x512ec2 */ goto L_00512ec2;
L_00512ebd:; BB(0x00512ebd);
    /* 00512ebd: mov ebx, 0xff0000ff */ r_ebx = 0xff0000ffu;
L_00512ec2:; BB(0x00512ec2);
    /* 00512ec2: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 00512ec8: lea ecx, [edx + 0x3b0] */ r_ecx = (u32)(r_edx+0x3b0u);
    /* 00512ece: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x512ed1u); call_ind(t); }
    /* 00512ed1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512ed4: mov dword ptr [eax + 0x398], 1 */ W32((u32)(r_eax+0x398u), 0x1u);
    /* 00512ede: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512edf: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ee4: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x512ee9u); f_00578cc4();
    /* 00512ee9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00512eed: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00512ef2: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 00512ef8: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x512efdu); f_00578cc4();
    /* 00512efd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512f00: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512f03: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00512f09: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00512f0f: mov eax, dword ptr [0xa72cfc] */ r_eax = R32((u32)(0xa72cfcu));
    /* 00512f14: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00512f17: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00512f19: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00512f1f: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00512f22: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00512f25: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 00512f2b: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00512f2e: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00512f31: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 00512f37: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00512f3a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00512f3d: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 00512f43: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00512f45:; BB(0x00512f45);
    /* 00512f45: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00512f48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00512f4a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00512f4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512f4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00512f51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00512f53: lea ecx, [ecx + edx + 0x3d4] */ r_ecx = (u32)(r_ecx+r_edx+0x3d4u);
    /* 00512f5a: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x512f5fu); f_0057739c();
    /* 00512f5f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512f62: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512f65: jge 0x512f6c */ if ((fS==fO)) goto L_00512f6c;
L_00512f67:; BB(0x00512f67);
    /* 00512f67: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512f6a: jmp 0x512f45 */ goto L_00512f45;
L_00512f6c:; BB(0x00512f6c);
    /* 00512f6c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512f6f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00512f71: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x512f77u); call_ind(t); }
    /* 00512f77: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00512f7a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00512f7d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00512f80: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00512f83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00512f86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00512f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00512f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00512f90: ret 8 */ FN_RET(0x00512bd0); r_esp += 12; return;
}

void f_00512f94(void) /* sub_512F94 */
{
    FN_ENTER(0x00512f94);
    /* 00512f94: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00512f9a: mov edx, 2 */ r_edx = 0x2u;
    /* 00512f9f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512fa2: jl 0x512fa6 */ if ((fS!=fO)) goto L_00512fa6;
L_00512fa4:; BB(0x00512fa4);
    /* 00512fa4: mov eax, edx */ r_eax = r_edx;
L_00512fa6:; BB(0x00512fa6);
    /* 00512fa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00512fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00512faa: jg 0x512fae */ if ((!fZ&&fS==fO)) goto L_00512fae;
L_00512fac:; BB(0x00512fac);
    /* 00512fac: mov eax, edx */ r_eax = r_edx;
L_00512fae:; BB(0x00512fae);
    /* 00512fae: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00512fb4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512fb7: jne 0x512fcb */ if (!fZ) goto L_00512fcb;
L_00512fb9:; BB(0x00512fb9);
    /* 00512fb9: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 00512fc3: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00512fc5: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x512fcau); f_00787550();
    /* 00512fca: ret  */ FN_RET(0x00512f94); r_esp += 4; return;
L_00512fcb:; BB(0x00512fcb);
    /* 00512fcb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512fce: jne 0x512fe2 */ if (!fZ) goto L_00512fe2;
L_00512fd0:; BB(0x00512fd0);
    /* 00512fd0: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00512fda: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00512fdc: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x512fe1u); f_00787550();
    /* 00512fe1: ret  */ FN_RET(0x00512f94); r_esp += 4; return;
L_00512fe2:; BB(0x00512fe2);
    /* 00512fe2: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 00512fec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00512fee: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x512ff3u); f_00787550();
    /* 00512ff3: ret  */ FN_RET(0x00512f94); r_esp += 4; return;
}

