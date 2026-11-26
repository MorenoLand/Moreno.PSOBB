#include "protos.h"

void f_0048607c(void) /* sub_48607C */
{
    FN_ENTER(0x0048607c);
    /* 0048607c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048607d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486080: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00486082: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 00486085: cmp eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048608a: jge 0x486098 */ if ((fS==fO)) goto L_00486098;
L_0048608c:; BB(0x0048608c);
    /* 0048608c: fld dword ptr [0x900e78] */ FPUSH(R_F32((u32)(0x900e78u)));
    /* 00486092: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00486096: jmp 0x4860e2 */ goto L_004860e2;
L_00486098:; BB(0x00486098);
    /* 00486098: cmp eax, 0x10f */ {  u32 a = r_eax; u32 b = 0x10fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048609d: jge 0x48613b */ if ((fS==fO)) goto L_0048613b;
L_004860a3:; BB(0x004860a3);
    /* 004860a3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004860a5: add eax, 0x10f */ {  u32 a = r_eax; u32 b = 0x10fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004860aa: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004860ae: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004860b2: fdiv dword ptr [0x900e80] */ ST(0) = ST(0) / R_F32((u32)(0x900e80u));
    /* 004860b8: fcom dword ptr [0x900e7c] */ fx_compare(ST(0), R_F32((u32)(0x900e7cu))); 
    /* 004860be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004860c0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004860c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004860c5: je 0x48613b */ if (fZ) goto L_0048613b;
L_004860c7:; BB(0x004860c7);
    /* 004860c7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004860cb: fcomp dword ptr [0x900e78] */ fx_compare(ST(0), R_F32((u32)(0x900e78u))); FPOP();
    /* 004860d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004860d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004860d4: jae 0x4860e2 */ if (!fC) goto L_004860e2;
L_004860d6:; BB(0x004860d6);
    /* 004860d6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004860da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004860dd: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4860e2u); f_0048e3a4();
L_004860e2:; BB(0x004860e2);
    /* 004860e2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4860e7u); f_0082d7b0();
    /* 004860e7: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4860ecu); f_0082fa9c();
    /* 004860ec: lea ecx, [ebp + 0x58] */ r_ecx = (u32)(r_ebp+0x58u);
    /* 004860ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4860f4u); f_0082d838();
    /* 004860f4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004860f7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4860fcu); f_00829cc8();
    /* 004860fc: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 004860ff: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x486104u); f_00588428();
    /* 00486104: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00486107: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048610a: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048610d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x486112u); f_0083046c();
    /* 00486112: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486115: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 00486118: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x48611du); f_00452050();
    /* 0048611d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x486122u); f_0082faac();
    /* 00486122: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x486127u); f_0082da80();
    /* 00486127: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048612b: fcomp dword ptr [0x900e78] */ fx_compare(ST(0), R_F32((u32)(0x900e78u))); FPOP();
    /* 00486131: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486133: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486134: jae 0x48613b */ if (!fC) goto L_0048613b;
L_00486136:; BB(0x00486136);
    /* 00486136: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x48613bu); f_005963d0();
L_0048613b:; BB(0x0048613b);
    /* 0048613b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048613e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048613f: ret  */ FN_RET(0x0048607c); r_esp += 4; return;
}

void f_00486140(void) /* sub_486140 */
{
    FN_ENTER(0x00486140);
    /* 00486140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00486141: mov edi, ecx */ r_edi = r_ecx;
    /* 00486143: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00486146: cmp eax, 0x1ac */ {  u32 a = r_eax; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048614b: jge 0x48614f */ if ((fS==fO)) goto L_0048614f;
L_0048614d:; BB(0x0048614d);
    /* 0048614d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048614e: ret  */ FN_RET(0x00486140); r_esp += 4; return;
L_0048614f:; BB(0x0048614f);
    /* 0048614f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x486154u); f_0082d7b0();
    /* 00486154: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x486159u); f_0082fa9c();
    /* 00486159: lea ecx, [edi + 0x58] */ r_ecx = (u32)(r_edi+0x58u);
    /* 0048615c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x486161u); f_0082d838();
    /* 00486161: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 00486164: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x486169u); f_00829cc8();
    /* 00486169: mov ecx, dword ptr [edi + 0x9c] */ r_ecx = R32((u32)(r_edi+0x9cu));
    /* 0048616f: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x486174u); f_00588428();
    /* 00486174: push dword ptr [edi + 0x4c] */ { u32 v = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00486177: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048617a: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048617d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x486182u); f_0083046c();
    /* 00486182: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486185: mov ecx, dword ptr [edi + 0x9c] */ r_ecx = R32((u32)(r_edi+0x9cu));
    /* 0048618b: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x486190u); f_00452050();
    /* 00486190: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x486195u); f_0082faac();
    /* 00486195: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48619au); f_0082da80();
    /* 0048619a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048619b: ret  */ FN_RET(0x00486140); r_esp += 4; return;
}

void f_0048619c(void) /* sub_48619C */
{
    FN_ENTER(0x0048619c);
    /* 0048619c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048619d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048619f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004861a1: push 0x8cfaa2 */ { u32 v = 0x8cfaa2u; r_esp -= 4; W32(r_esp, v); }
    /* 004861a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004861ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004861ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004861b4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004861b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004861ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004861bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004861c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004861c3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004861c8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004861cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4861d4u); f_005caba4();
    /* 004861d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004861d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004861da: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004861dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004861df: je 0x48641b */ if (fZ) goto L_0048641b;
L_004861e5:; BB(0x004861e5);
    /* 004861e5: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004861ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004861f3: mov ecx, eax */ r_ecx = r_eax;
    /* 004861f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004861f8: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004861fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004861fc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x486201u); f_008193cc();
    /* 00486201: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00486208: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0048620b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0048620e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00486211: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 00486214: mov dword ptr [esi], 0xaf87a0 */ W32((u32)(r_esi), 0xaf87a0u);
    /* 0048621a: mov eax, dword ptr [0x9a68e0] */ r_eax = R32((u32)(0x9a68e0u));
    /* 0048621f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00486222: mov dword ptr [esi + 0x58], 0xc61c4000 */ W32((u32)(r_esi+0x58u), 0xc61c4000u);
    /* 00486229: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 00486230: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00486237: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00486239: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0048623c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0048623f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00486242: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00486245: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00486248: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0048624b: mov edx, 0x900ebc */ r_edx = 0x900ebcu;
    /* 00486250: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x486255u); f_0082f9c4();
    /* 00486255: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0048625c: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0048625f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x486264u); f_0083173c();
    /* 00486264: fcomp dword ptr [0x900df4] */ fx_compare(ST(0), R_F32((u32)(0x900df4u))); FPOP();
    /* 0048626a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048626c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048626d: jbe 0x48628f */ if ((fC||fZ)) goto L_0048628f;
L_0048626f:; BB(0x0048626f);
    /* 0048626f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00486272: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x486277u); f_0082df08();
    /* 00486277: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00486279: fld dword ptr [0x900df4] */ FPUSH(R_F32((u32)(0x900df4u)));
    /* 0048627f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00486282: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00486284: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00486287: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00486289: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0048628c: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
L_0048628f:; BB(0x0048628f);
    /* 0048628f: mov eax, esi */ r_eax = r_esi;
    /* 00486291: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00486294: lea esi, [eax + 0x58] */ r_esi = (u32)(r_eax+0x58u);
    /* 00486297: mov ecx, esi */ r_ecx = r_esi;
    /* 00486299: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48629eu); f_0082ebac();
    /* 0048629e: mov ebx, dword ptr [0xa46fa0] */ r_ebx = R32((u32)(0xa46fa0u));
    /* 004862a4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004862a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862a8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4862adu); f_005b8610();
    /* 004862ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862b0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004862b2: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004862b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862b7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4862bcu); f_005b8624();
    /* 004862bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862bf: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004862c1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004862c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862c6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4862cbu); f_005b8638();
    /* 004862cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862ce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004862d0: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004862d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862d5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4862dau); f_005b8610();
    /* 004862da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862dd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004862df: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004862e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862e4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4862e9u); f_005b8624();
    /* 004862e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862ec: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004862ee: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004862f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004862f3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4862f8u); f_005b8638();
    /* 004862f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004862fb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004862fd: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00486300: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486302: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x486307u); f_005b8610();
    /* 00486307: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048630a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048630c: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0048630f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486311: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x486316u); f_005b8624();
    /* 00486316: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486319: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048631b: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0048631e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486320: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x486325u); f_005b8638();
    /* 00486325: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486328: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0048632a: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0048632d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048632f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x486334u); f_005b8610();
    /* 00486334: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486337: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00486339: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0048633c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048633e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x486343u); f_005b8624();
    /* 00486343: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486346: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00486348: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0048634b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048634d: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x486352u); f_005b8638();
    /* 00486352: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486355: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00486358: lea eax, [edx + 0x64] */ r_eax = (u32)(r_edx+0x64u);
    /* 0048635b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048635c: push 0x900df8 */ { u32 v = 0x900df8u; r_esp -= 4; W32(r_esp, v); }
    /* 00486361: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x486366u); f_0058836c();
    /* 00486366: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486369: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0048636c: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 0048636f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486370: push 0x900e18 */ { u32 v = 0x900e18u; r_esp -= 4; W32(r_esp, v); }
    /* 00486375: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48637au); f_0058836c();
    /* 0048637a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048637d: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 00486383: lea eax, [edx + 0x84] */ r_eax = (u32)(r_edx+0x84u);
    /* 00486389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048638a: push 0x900e38 */ { u32 v = 0x900e38u; r_esp -= 4; W32(r_esp, v); }
    /* 0048638f: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x486394u); f_0058836c();
    /* 00486394: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486397: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00486399: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0048639f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4863a4u); f_004d31f4();
    /* 004863a4: push 0x900de8 */ { u32 v = 0x900de8u; r_esp -= 4; W32(r_esp, v); }
    /* 004863a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004863aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004863ab: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4863b0u); f_004d681c();
    /* 004863b0: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 004863b5: push 0x900ddc */ { u32 v = 0x900ddcu; r_esp -= 4; W32(r_esp, v); }
    /* 004863ba: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4863bfu); f_004d6770();
    /* 004863bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004863c2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004863c4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004863c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004863c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004863c9: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 004863cf: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 004863d5: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 004863db: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 004863e1: call 0x4a03f8 */ r_esp -= 4; W32(r_esp, 0x4863e6u); f_004a03f8();
    /* 004863e6: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004863e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004863ec: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 004863f3: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004863f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004863fb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004863fe: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
L_00486401:; BB(0x00486401);
    /* 00486401: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486404: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486407: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048640a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048640d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486410: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486417: mov esp, ebp */ r_esp = r_ebp;
    /* 00486419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048641a: ret  */ FN_RET(0x0048619c); r_esp += 4; return;
L_0048641b:; BB(0x0048641b);
    /* 0048641b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048641d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00486420: jmp 0x486401 */ goto L_00486401;
}

void f_00486424(void) /* sub_486424 */
{
    FN_ENTER(0x00486424);
    /* 00486424: mov dword ptr [0xa46cc8], 0x3f800000 */ W32((u32)(0xa46cc8u), 0x3f800000u);
    /* 0048642e: mov dword ptr [0xa46ccc], 0x41000000 */ W32((u32)(0xa46cccu), 0x41000000u);
    /* 00486438: mov dword ptr [0xa46cd0], 0x3fc00000 */ W32((u32)(0xa46cd0u), 0x3fc00000u);
    /* 00486442: ret  */ FN_RET(0x00486424); r_esp += 4; return;
}

void f_00486444(void) /* sub_486444 */
{
    FN_ENTER(0x00486444);
    /* 00486444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486445: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00486447: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486449: call 0x486468 */ r_esp -= 4; W32(r_esp, 0x48644eu); f_00486468();
    /* 0048644e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00486452: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486454: jne 0x48645a */ if (!fZ) goto L_0048645a;
L_00486456:; BB(0x00486456);
    /* 00486456: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486457: ret 4 */ FN_RET(0x00486444); r_esp += 8; return;
L_0048645a:; BB(0x0048645a);
    /* 0048645a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048645b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x486460u); f_005c2f74();
    /* 00486460: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486461: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486462: ret 4 */ FN_RET(0x00486444); r_esp += 8; return;
}

void f_00486468(void) /* sub_486468 */
{
    FN_ENTER(0x00486468);
    /* 00486468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486469: mov ebp, esp */ r_ebp = r_esp;
    /* 0048646b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048646d: push 0x8cfabc */ { u32 v = 0x8cfabcu; r_esp -= 4; W32(r_esp, v); }
    /* 00486472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486480: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486486: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00486489: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048648c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048648f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00486492: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486495: mov dword ptr [ecx], 0xaf88c8 */ W32((u32)(r_ecx), 0xaf88c8u);
    /* 0048649b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004864a2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4864a7u); f_008171e8();
    /* 004864a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004864aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004864b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004864b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004864b4: ret  */ FN_RET(0x00486468); r_esp += 4; return;
}

void f_004864b8(void) /* sub_4864B8 */
{
    FN_ENTER(0x004864b8);
    /* 004864b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004864b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004864bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004864bd: call 0x4864dc */ r_esp -= 4; W32(r_esp, 0x4864c2u); f_004864dc();
    /* 004864c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004864c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004864c8: jne 0x4864ce */ if (!fZ) goto L_004864ce;
L_004864ca:; BB(0x004864ca);
    /* 004864ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004864cb: ret 4 */ FN_RET(0x004864b8); r_esp += 8; return;
L_004864ce:; BB(0x004864ce);
    /* 004864ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004864cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4864d4u); f_005c2f74();
    /* 004864d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004864d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004864d6: ret 4 */ FN_RET(0x004864b8); r_esp += 8; return;
}

void f_004864dc(void) /* sub_4864DC */
{
    FN_ENTER(0x004864dc);
    /* 004864dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004864dd: mov ebp, esp */ r_ebp = r_esp;
    /* 004864df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004864e1: push 0x8cfad8 */ { u32 v = 0x8cfad8u; r_esp -= 4; W32(r_esp, v); }
    /* 004864e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004864ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004864ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004864f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004864f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004864fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004864fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00486500: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00486503: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00486506: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048650d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486510: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00486513: mov dword ptr [ecx], 0xaf88d8 */ W32((u32)(r_ecx), 0xaf88d8u);
    /* 00486519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048651b: je 0x486527 */ if (fZ) goto L_00486527;
L_0048651d:; BB(0x0048651d);
    /* 0048651d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048651e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x486523u); f_005cdcc0();
    /* 00486523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486524: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00486527:; BB(0x00486527);
    /* 00486527: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048652e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x486533u); f_008171e8();
    /* 00486533: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486536: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048653d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048653f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486540: ret  */ FN_RET(0x004864dc); r_esp += 4; return;
}

void f_00486544(void) /* sub_486544 */
{
    FN_ENTER(0x00486544);
    /* 00486544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486545: mov ebp, esp */ r_ebp = r_esp;
    /* 00486547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486549: push 0x8cfb00 */ { u32 v = 0x8cfb00u; r_esp -= 4; W32(r_esp, v); }
    /* 0048654e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486555: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048655c: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048655f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486562: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00486565: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00486568: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0048656b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048656e: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x486573u); f_00520db8();
    /* 00486573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486575: jne 0x4866e8 */ if (!fZ) goto L_004866e8;
L_0048657b:; BB(0x0048657b);
    /* 0048657b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048657e: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00486581: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00486584: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00486587: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0048658a: fcomp dword ptr [0x900eec] */ fx_compare(ST(0), R_F32((u32)(0x900eecu))); FPOP();
    /* 00486590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486592: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00486595: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486596: jbe 0x4866e8 */ if ((fC||fZ)) goto L_004866e8;
L_0048659c:; BB(0x0048659c);
    /* 0048659c: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004865a2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004865a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004865a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004865a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004865ac: jle 0x48673a */ if ((fZ||fS!=fO)) goto L_0048673a;
L_004865b2:; BB(0x004865b2);
    /* 004865b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004865b5: lea edx, [eax + 0x20] */ r_edx = (u32)(r_eax+0x20u);
    /* 004865b8: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_004865bb:; BB(0x004865bb);
    /* 004865bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004865be: mov edx, dword ptr [eax*4 + 0xaad720] */ r_edx = R32((u32)(r_eax*4+0xaad720u));
    /* 004865c5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004865c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004865c9: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x4865ceu); f_0048e100();
    /* 004865ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004865cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004865d1: je 0x4866d2 */ if (fZ) goto L_004866d2;
L_004865d7:; BB(0x004865d7);
    /* 004865d7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004865da: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004865dd: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 004865e0: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004865e3: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 004865e6: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 004865e9: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004865ec: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 004865ef: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 004865f2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4865f7u); f_0082f9c4();
    /* 004865f7: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 004865fe: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00486601: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x486606u); f_0083173c();
    /* 00486606: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486609: fcomp dword ptr [edx + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x2cu))); FPOP();
    /* 0048660c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048660e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048660f: ja 0x4866d2 */ if ((!fC&&!fZ)) goto L_004866d2;
L_00486615:; BB(0x00486615);
    /* 00486615: mov eax, edx */ r_eax = r_edx;
    /* 00486617: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 0048661a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0048661d: call 0x49e2f8 */ r_esp -= 4; W32(r_esp, 0x486622u); f_0049e2f8();
    /* 00486622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486624: je 0x48664d */ if (fZ) goto L_0048664d;
L_00486626:; BB(0x00486626);
    /* 00486626: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486629: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 0048662c: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0048662f: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 00486632: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00486635: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00486639: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048663e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00486641: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00486644: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00486647: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0048664a: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
L_0048664d:; BB(0x0048664d);
    /* 0048664d: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00486652: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486653: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x486658u); f_0048e9d4();
    /* 00486658: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048665b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048665d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486660: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00486662: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00486665: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 00486668: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0048666b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048666d: mov dword ptr [ebp - 0x6c], ebx */ W32((u32)(r_ebp+0xffffff94u), r_ebx);
    /* 00486670: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00486675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00486677: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486678: push dword ptr [ebp - 0x68] */ { u32 v = R32((u32)(r_ebp+0xffffff98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048667b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048667d: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00486680: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x486683u); call_ind(t); }
    /* 00486683: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00486685: mov eax, dword ptr [0xaca378] */ r_eax = R32((u32)(0xaca378u));
    /* 0048668a: add dword ptr [ebp - 0x18], 0x38 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0048668e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00486691: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00486698: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0048669a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48669fu); f_005caba4();
    /* 0048669f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004866a0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004866a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004866a5: je 0x4866cb */ if (fZ) goto L_004866cb;
L_004866a7:; BB(0x004866a7);
    /* 004866a7: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 004866ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004866b5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004866b8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004866bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004866bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004866be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004866bf: call 0x486748 */ r_esp -= 4; W32(r_esp, 0x4866c4u); f_00486748();
    /* 004866c4: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004866cb:; BB(0x004866cb);
    /* 004866cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004866d2:; BB(0x004866d2);
    /* 004866d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004866d5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004866d8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004866db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004866de: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004866e0: jl 0x4865bb */ if ((fS!=fO)) goto L_004865bb;
L_004866e6:; BB(0x004866e6);
    /* 004866e6: jmp 0x4866f6 */ goto L_004866f6;
L_004866e8:; BB(0x004866e8);
    /* 004866e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004866eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004866f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004866f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004866f5: ret  */ FN_RET(0x00486544); r_esp += 4; return;
L_004866f6:; BB(0x004866f6);
    /* 004866f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004866f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004866fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004866fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004866fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004866fe: push 0x5a1 */ { u32 v = 0x5a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00486703: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x486708u); f_00814298();
    /* 00486708: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048670b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048670e: call 0x486804 */ r_esp -= 4; W32(r_esp, 0x486713u); f_00486804();
    /* 00486713: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486716: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00486719: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048671c: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048671f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00486723: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486728: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048672c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048672f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486736: mov esp, ebp */ r_esp = r_ebp;
    /* 00486738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486739: ret  */ FN_RET(0x00486544); r_esp += 4; return;
L_0048673a:; BB(0x0048673a);
    /* 0048673a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048673d: lea edx, [eax + 0x20] */ r_edx = (u32)(r_eax+0x20u);
    /* 00486740: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00486743: jmp 0x4866f6 */ goto L_004866f6;
}

void f_00486748(void) /* sub_486748 */
{
    FN_ENTER(0x00486748);
    /* 00486748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486749: mov ebp, esp */ r_ebp = r_esp;
    /* 0048674b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048674d: push 0x8cfb1c */ { u32 v = 0x8cfb1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486760: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486766: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00486769: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048676c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048676f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486772: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00486775: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00486778: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048677b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x486780u); f_008193cc();
    /* 00486780: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486787: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048678a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048678d: mov dword ptr [edi], 0xaf88d8 */ W32((u32)(r_edi), 0xaf88d8u);
    /* 00486793: mov eax, dword ptr [0x9a68e8] */ r_eax = R32((u32)(0x9a68e8u));
    /* 00486798: mov dword ptr [edi + 0x28], 5 */ W32((u32)(r_edi+0x28u), 0x5u);
    /* 0048679f: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004867a2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004867a4: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 004867a9: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004867ac: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004867af: fadd dword ptr [0x900f14] */ ST(0) = ST(0) + R_F32((u32)(0x900f14u));
    /* 004867b5: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004867b8: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 004867bb: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004867be: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 004867c1: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004867c4: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004867c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004867c8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4867cdu); f_00509590();
    /* 004867cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004867d0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004867d3: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004867d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004867d8: je 0x4867e6 */ if (fZ) goto L_004867e6;
L_004867da:; BB(0x004867da);
    /* 004867da: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004867dc: mov ecx, eax */ r_ecx = r_eax;
    /* 004867de: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4867e3u); f_00508efc();
    /* 004867e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_004867e6:; BB(0x004867e6);
    /* 004867e6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004867e9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004867ec: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004867ef: mov eax, edx */ r_eax = r_edx;
    /* 004867f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004867f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004867fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004867fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004867fe: ret 8 */ FN_RET(0x00486748); r_esp += 12; return;
}

void f_00486804(void) /* sub_486804 */
{
    FN_ENTER(0x00486804);
    /* 00486804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00486805: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486808: mov edi, ecx */ r_edi = r_ecx;
    /* 0048680a: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0048680d: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00486810: mov dword ptr [esp + 4], 0x40a00000 */ W32((u32)(r_esp+0x4u), 0x40a00000u);
    /* 00486818: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048681b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048681f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00486822: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00486824: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048682a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48682fu); f_0050b7a4();
    /* 0048682f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00486833: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00486835: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0048683a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048683b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x486840u); f_0050b7a4();
    /* 00486840: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00486843: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00486844: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048684a: call 0x486854 */ r_esp -= 4; W32(r_esp, 0x48684fu); f_00486854();
    /* 0048684f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00486852: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00486853: ret  */ FN_RET(0x00486804); r_esp += 4; return;
}

void f_00486854(void) /* sub_486854 */
{
    FN_ENTER(0x00486854);
    /* 00486854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486855: mov ebp, esp */ r_ebp = r_esp;
    /* 00486857: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486859: push 0x8cfb44 */ { u32 v = 0x8cfb44u; r_esp -= 4; W32(r_esp, v); }
    /* 0048685e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486865: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048686c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048686f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486872: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00486875: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00486878: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048687b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0048687d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00486884: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x486889u); f_005caba4();
    /* 00486889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048688a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048688d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048688f: je 0x4868c5 */ if (fZ) goto L_004868c5;
L_00486891:; BB(0x00486891);
    /* 00486891: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00486898: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048689f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004868a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004868a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004868a8: call 0x486748 */ r_esp -= 4; W32(r_esp, 0x4868adu); f_00486748();
    /* 004868ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004868b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004868b7:; BB(0x004868b7);
    /* 004868b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004868ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004868c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004868c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004868c4: ret  */ FN_RET(0x00486854); r_esp += 4; return;
L_004868c5:; BB(0x004868c5);
    /* 004868c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004868c7: jmp 0x4868b7 */ goto L_004868b7;
}

void f_004868cc(void) /* sub_4868CC */
{
    FN_ENTER(0x004868cc);
    /* 004868cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004868cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004868cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004868d1: push 0x8cfb6c */ { u32 v = 0x8cfb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004868d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004868dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004868dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004868e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004868e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004868ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004868ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004868f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004868f3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004868f5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004868fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x486901u); f_005caba4();
    /* 00486901: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486902: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00486905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486907: je 0x486940 */ if (fZ) goto L_00486940;
L_00486909:; BB(0x00486909);
    /* 00486909: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00486910: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486917: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048691a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048691d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00486920: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486923: call 0x486944 */ r_esp -= 4; W32(r_esp, 0x486928u); f_00486944();
    /* 00486928: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048692b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00486932:; BB(0x00486932);
    /* 00486932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048693c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048693e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048693f: ret  */ FN_RET(0x004868cc); r_esp += 4; return;
L_00486940:; BB(0x00486940);
    /* 00486940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486942: jmp 0x486932 */ goto L_00486932;
}

void f_00486944(void) /* sub_486944 */
{
    FN_ENTER(0x00486944);
    /* 00486944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486945: mov ebp, esp */ r_ebp = r_esp;
    /* 00486947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486949: push 0x8cfb88 */ { u32 v = 0x8cfb88u; r_esp -= 4; W32(r_esp, v); }
    /* 0048694e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048695c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048695f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486962: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00486965: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00486968: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0048696b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0048696e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486971: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00486974: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00486977: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048697a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048697b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048697e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00486981: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x486986u); f_008193cc();
    /* 00486986: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048698d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00486990: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486992: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00486995: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486997: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0048699a: mov dword ptr [eax], 0xaf88c8 */ W32((u32)(r_eax), 0xaf88c8u);
    /* 004869a0: mov edx, dword ptr [0x9a68e4] */ r_edx = R32((u32)(0x9a68e4u));
    /* 004869a6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004869a9: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004869ab: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004869ae: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004869b1: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 004869b4: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 004869b7: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004869ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004869bd: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004869c4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004869c7: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4869ccu); f_0077a6cc();
    /* 004869cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004869cd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004869d0: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004869d3: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004869d6: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004869da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004869df: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004869e2: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004869e5: fist dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0)));
    /* 004869e8: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004869eb: fcomp dword ptr [0x900f08] */ fx_compare(ST(0), R_F32((u32)(0x900f08u))); FPOP();
    /* 004869f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004869f3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004869f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004869f7: je 0x486a5c */ if (fZ) goto L_00486a5c;
L_004869f9:; BB(0x004869f9);
    /* 004869f9: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
L_004869fc:; BB(0x004869fc);
    /* 004869fc: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 004869fe: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x486a03u); f_0077a6cc();
    /* 00486a03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486a04: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00486a07: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00486a0a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00486a0d: fcomp dword ptr [0x900f08] */ fx_compare(ST(0), R_F32((u32)(0x900f08u))); FPOP();
    /* 00486a13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486a15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486a16: je 0x486a53 */ if (fZ) goto L_00486a53;
L_00486a18:; BB(0x00486a18);
    /* 00486a18: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
L_00486a1b:; BB(0x00486a1b);
    /* 00486a1b: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00486a1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00486a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486a21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486a22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00486a23: push 0x5a0 */ { u32 v = 0x5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00486a28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x486a2du); f_00814298();
    /* 00486a2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00486a30: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00486a33: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00486a36: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00486a39: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486a3c: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00486a43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486a46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486a4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00486a4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486a50: ret 0xc */ FN_RET(0x00486944); r_esp += 16; return;
L_00486a53:; BB(0x00486a53);
    /* 00486a53: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 00486a5a: jmp 0x486a1b */ goto L_00486a1b;
L_00486a5c:; BB(0x00486a5c);
    /* 00486a5c: mov dword ptr [ecx + 0x34], 0x14 */ W32((u32)(r_ecx+0x34u), 0x14u);
    /* 00486a63: jmp 0x4869fc */ goto L_004869fc;
}

void f_00486a68(void) /* sub_486A68 */
{
    FN_ENTER(0x00486a68);
    /* 00486a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486a69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00486a6b: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x486a70u); f_00520db8();
    /* 00486a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486a72: jne 0x486abc */ if (!fZ) goto L_00486abc;
L_00486a74:; BB(0x00486a74);
    /* 00486a74: movzx eax, byte ptr [0xa46cd8] */ r_eax = (u32)R8((u32)(0xa46cd8u));
    /* 00486a7b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00486a7d: jne 0x486a93 */ if (!fZ) goto L_00486a93;
L_00486a7f:; BB(0x00486a7f);
    /* 00486a7f: mov dword ptr [0xa46cdc], 0xc2700000 */ W32((u32)(0xa46cdcu), 0xc2700000u);
    /* 00486a89: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00486a8e: mov byte ptr [0xa46cd8], al */ W8((u32)(0xa46cd8u), (u8)r_eax);
L_00486a93:; BB(0x00486a93);
    /* 00486a93: fld dword ptr [0xa46cdc] */ FPUSH(R_F32((u32)(0xa46cdcu)));
    /* 00486a99: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 00486a9c: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00486a9f: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00486aa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486aa4: je 0x486aaf */ if (fZ) goto L_00486aaf;
L_00486aa6:; BB(0x00486aa6);
    /* 00486aa6: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00486aa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486aaa: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x486aafu); f_00508db8();
L_00486aaf:; BB(0x00486aaf);
    /* 00486aaf: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00486ab2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486ab5: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00486ab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486aba: jl 0x486abe */ if ((fS!=fO)) goto L_00486abe;
L_00486abc:; BB(0x00486abc);
    /* 00486abc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486abd: ret  */ FN_RET(0x00486a68); r_esp += 4; return;
L_00486abe:; BB(0x00486abe);
    /* 00486abe: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00486ac2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486ac7: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00486acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486acc: ret  */ FN_RET(0x00486a68); r_esp += 4; return;
}

void f_00486ad0(void) /* sub_486AD0 */
{
    FN_ENTER(0x00486ad0);
    /* 00486ad0: mov dword ptr [0xa46ce0], 0x3f800000 */ W32((u32)(0xa46ce0u), 0x3f800000u);
    /* 00486ada: mov dword ptr [0xa46ce4], 0x41000000 */ W32((u32)(0xa46ce4u), 0x41000000u);
    /* 00486ae4: mov dword ptr [0xa46ce8], 0x3fc00000 */ W32((u32)(0xa46ce8u), 0x3fc00000u);
    /* 00486aee: ret  */ FN_RET(0x00486ad0); r_esp += 4; return;
}

void f_00486af0(void) /* sub_486AF0 */
{
    FN_ENTER(0x00486af0);
    /* 00486af0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486af1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00486af3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486af5: call 0x486b14 */ r_esp -= 4; W32(r_esp, 0x486afau); f_00486b14();
    /* 00486afa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00486afe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486b00: jne 0x486b06 */ if (!fZ) goto L_00486b06;
L_00486b02:; BB(0x00486b02);
    /* 00486b02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486b03: ret 4 */ FN_RET(0x00486af0); r_esp += 8; return;
L_00486b06:; BB(0x00486b06);
    /* 00486b06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486b07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x486b0cu); f_005c2f74();
    /* 00486b0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486b0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486b0e: ret 4 */ FN_RET(0x00486af0); r_esp += 8; return;
}

void f_00486b14(void) /* sub_486B14 */
{
    FN_ENTER(0x00486b14);
    /* 00486b14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486b15: mov ebp, esp */ r_ebp = r_esp;
    /* 00486b17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486b19: push 0x8cfba4 */ { u32 v = 0x8cfba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00486b1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486b2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486b2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486b32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00486b35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00486b38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00486b3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00486b3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486b45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486b48: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00486b4b: mov dword ptr [ecx], 0xaf8990 */ W32((u32)(r_ecx), 0xaf8990u);
    /* 00486b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486b53: je 0x486b5f */ if (fZ) goto L_00486b5f;
L_00486b55:; BB(0x00486b55);
    /* 00486b55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486b56: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x486b5bu); f_005cdcc0();
    /* 00486b5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486b5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00486b5f:; BB(0x00486b5f);
    /* 00486b5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00486b66: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x486b6bu); f_008171e8();
    /* 00486b6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486b6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486b75: mov esp, ebp */ r_esp = r_ebp;
    /* 00486b77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486b78: ret  */ FN_RET(0x00486b14); r_esp += 4; return;
}

void f_00486b7c(void) /* sub_486B7C */
{
    FN_ENTER(0x00486b7c);
    /* 00486b7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00486b7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00486b7e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486b81: mov edi, ecx */ r_edi = r_ecx;
    /* 00486b83: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x486b88u); f_00520db8();
    /* 00486b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486b8a: jne 0x486cac */ if (!fZ) goto L_00486cac;
L_00486b90:; BB(0x00486b90);
    /* 00486b90: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00486b94: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486b99: je 0x486cb2 */ if (fZ) goto L_00486cb2;
L_00486b9f:; BB(0x00486b9f);
    /* 00486b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486ba0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x486ba5u); f_0068d5a8();
    /* 00486ba5: mov esi, eax */ r_esi = r_eax;
    /* 00486ba7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486baa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486bac: je 0x486c99 */ if (fZ) goto L_00486c99;
L_00486bb2:; BB(0x00486bb2);
    /* 00486bb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00486bb3: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x486bb8u); f_0048df48();
    /* 00486bb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486bb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486bbb: je 0x486c99 */ if (fZ) goto L_00486c99;
L_00486bc1:; BB(0x00486bc1);
    /* 00486bc1: fld dword ptr [0x900f34] */ FPUSH(R_F32((u32)(0x900f34u)));
    /* 00486bc7: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00486bca: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00486bcd: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00486bd0: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00486bd3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00486bd5: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00486bd9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00486bdc: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00486bdf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00486be3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00486be5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00486be7:; BB(0x00486be7);
    /* 00486be7: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00486bea: sub edx, dword ptr [edi + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00486bed: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00486bf1: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00486bf5: fcom dword ptr [0x900f30] */ fx_compare(ST(0), R_F32((u32)(0x900f30u))); 
    /* 00486bfb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486bfd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00486c01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486c02: ja 0x486c11 */ if ((!fC&&!fZ)) goto L_00486c11;
L_00486c04:; BB(0x00486c04);
    /* 00486c04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00486c06: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00486c09: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 00486c0c: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 00486c0f: jmp 0x486c68 */ goto L_00486c68;
L_00486c11:; BB(0x00486c11);
    /* 00486c11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00486c13: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00486c17: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00486c1b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00486c1f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00486c23: lea esi, [edi + 0x28] */ r_esi = (u32)(r_edi+0x28u);
    /* 00486c26: mov edx, esi */ r_edx = r_esi;
    /* 00486c28: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x486c2du); f_0082f9c4();
    /* 00486c2d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00486c31: fdivr dword ptr [0x900f2c] */ ST(0) = R_F32((u32)(0x900f2cu)) / ST(0);
    /* 00486c37: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00486c3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00486c3d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00486c41: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00486c45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00486c47: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00486c49: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00486c4b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00486c4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00486c4f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00486c53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00486c55: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00486c59: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00486c5d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00486c61: mov ecx, esi */ r_ecx = r_esi;
    /* 00486c63: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x486c68u); f_0082ebac();
L_00486c68:; BB(0x00486c68);
    /* 00486c68: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00486c6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486c6d: je 0x486c78 */ if (fZ) goto L_00486c78;
L_00486c6f:; BB(0x00486c6f);
    /* 00486c6f: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 00486c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486c73: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x486c78u); f_00508db8();
L_00486c78:; BB(0x00486c78);
    /* 00486c78: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00486c7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486c7e: cmp eax, dword ptr [edi + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00486c81: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00486c84: jle 0x486cac */ if ((fZ||fS!=fO)) goto L_00486cac;
L_00486c86:; BB(0x00486c86);
    /* 00486c86: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00486c8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00486c8f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00486c93: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00486c96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00486c97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00486c98: ret  */ FN_RET(0x00486b7c); r_esp += 4; return;
L_00486c99:; BB(0x00486c99);
    /* 00486c99: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00486c9d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00486ca2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00486ca6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00486ca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00486caa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00486cab: ret  */ FN_RET(0x00486b7c); r_esp += 4; return;
L_00486cac:; BB(0x00486cac);
    /* 00486cac: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00486caf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00486cb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00486cb1: ret  */ FN_RET(0x00486b7c); r_esp += 4; return;
L_00486cb2:; BB(0x00486cb2);
    /* 00486cb2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00486cb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486cb6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00486cb9: call 0x49e3c4 */ r_esp -= 4; W32(r_esp, 0x486cbeu); f_0049e3c4();
    /* 00486cbe: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00486cc1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00486cc5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00486cc9: jmp 0x486be7 */ goto L_00486be7;
}

void f_00486cd0(void) /* sub_486CD0 */
{
    FN_ENTER(0x00486cd0);
    /* 00486cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00486cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486cd5: push 0x8cfbcc */ { u32 v = 0x8cfbccu; r_esp -= 4; W32(r_esp, v); }
    /* 00486cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486ce1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486ce8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486ceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486cee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00486cf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00486cf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00486cf7: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486cf9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00486d00: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x486d05u); f_005caba4();
    /* 00486d05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486d06: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00486d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486d0b: je 0x486d49 */ if (fZ) goto L_00486d49;
L_00486d0d:; BB(0x00486d0d);
    /* 00486d0d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00486d14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486d1b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00486d1e: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 00486d22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486d26: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00486d29: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00486d2c: call 0x486d50 */ r_esp -= 4; W32(r_esp, 0x486d31u); f_00486d50();
    /* 00486d31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486d34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00486d3b:; BB(0x00486d3b);
    /* 00486d3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486d3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486d45: mov esp, ebp */ r_esp = r_ebp;
    /* 00486d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486d48: ret  */ FN_RET(0x00486cd0); r_esp += 4; return;
L_00486d49:; BB(0x00486d49);
    /* 00486d49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486d4b: jmp 0x486d3b */ goto L_00486d3b;
}

void f_00486d50(void) /* sub_486D50 */
{
    FN_ENTER(0x00486d50);
    /* 00486d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00486d53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486d55: push 0x8cfbe8 */ { u32 v = 0x8cfbe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00486d5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486d61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486d68: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486d6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486d6e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00486d71: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00486d74: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00486d77: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00486d7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00486d7d: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00486d81: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00486d84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00486d87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486d88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00486d8b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00486d8e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00486d91: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00486d94: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x486d99u); f_008193cc();
    /* 00486d99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486da0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00486da3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486da5: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00486da8: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 00486dad: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00486db0: mov dword ptr [eax], 0xaf8990 */ W32((u32)(r_eax), 0xaf8990u);
    /* 00486db6: mov edx, dword ptr [0x9a68ec] */ r_edx = R32((u32)(0x9a68ecu));
    /* 00486dbc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00486dbf: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00486dc1: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 00486dc4: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00486dc7: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00486dca: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00486dcd: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00486dd0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486dd3: mov word ptr [eax + 0x24], dx */ W16((u32)(r_eax+0x24u), (u16)r_edx);
    /* 00486dd7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00486dda: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00486ddd: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486de1: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x486de6u); f_00509590();
    /* 00486de6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486de9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00486dec: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00486def: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486df1: je 0x486dff */ if (fZ) goto L_00486dff;
L_00486df3:; BB(0x00486df3);
    /* 00486df3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00486df5: mov ecx, eax */ r_ecx = r_eax;
    /* 00486df7: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x486dfcu); f_00508efc();
    /* 00486dfc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_00486dff:; BB(0x00486dff);
    /* 00486dff: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00486e02: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00486e05: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00486e08: mov eax, edx */ r_eax = r_edx;
    /* 00486e0a: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 00486e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00486e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486e1e: ret 0x10 */ FN_RET(0x00486d50); r_esp += 20; return;
}

void f_00486e24(void) /* sub_486E24 */
{
    FN_ENTER(0x00486e24);
    /* 00486e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486e25: mov ebp, esp */ r_ebp = r_esp;
    /* 00486e27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486e29: push 0x8cfc1e */ { u32 v = 0x8cfc1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00486e2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486e35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486e3c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486e3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486e42: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00486e45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00486e48: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00486e4b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00486e4d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00486e54: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x486e59u); f_005caba4();
    /* 00486e59: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00486e5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486e5f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00486e62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486e64: je 0x486f0e */ if (fZ) goto L_00486f0e;
L_00486e6a:; BB(0x00486e6a);
    /* 00486e6a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00486e71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486e78: mov ecx, eax */ r_ecx = r_eax;
    /* 00486e7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00486e7d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00486e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486e81: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x486e86u); f_008193cc();
    /* 00486e86: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00486e8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486e90: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00486e93: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00486e96: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 00486e9b: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00486e9e: mov dword ptr [eax], 0xaf8990 */ W32((u32)(r_eax), 0xaf8990u);
    /* 00486ea4: mov edx, dword ptr [0x9a68ec] */ r_edx = R32((u32)(0x9a68ecu));
    /* 00486eaa: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00486ead: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00486eaf: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 00486eb2: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00486eb5: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00486eb8: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00486ebb: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00486ebe: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00486ec3: mov word ptr [eax + 0x24], dx */ W16((u32)(r_eax+0x24u), (u16)r_edx);
    /* 00486ec7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00486eca: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00486ecd: lea eax, [eax + 0x28] */ r_eax = (u32)(r_eax+0x28u);
    /* 00486ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486ed1: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x486ed6u); f_00509590();
    /* 00486ed6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486ed9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00486edc: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00486edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486ee1: je 0x486eec */ if (fZ) goto L_00486eec;
L_00486ee3:; BB(0x00486ee3);
    /* 00486ee3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00486ee5: mov ecx, eax */ r_ecx = r_eax;
    /* 00486ee7: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x486eecu); f_00508efc();
L_00486eec:; BB(0x00486eec);
    /* 00486eec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00486eef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486ef1: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00486ef4: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
L_00486ef7:; BB(0x00486ef7);
    /* 00486ef7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486efa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00486efd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00486f00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486f03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486f0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00486f0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486f0d: ret  */ FN_RET(0x00486e24); r_esp += 4; return;
L_00486f0e:; BB(0x00486f0e);
    /* 00486f0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486f10: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00486f13: jmp 0x486ef7 */ goto L_00486ef7;
}

void f_00486f18(void) /* sub_486F18 */
{
    FN_ENTER(0x00486f18);
    /* 00486f18: mov dword ptr [0xa46cf4], 0x3f800000 */ W32((u32)(0xa46cf4u), 0x3f800000u);
    /* 00486f22: mov dword ptr [0xa46cf8], 0x41000000 */ W32((u32)(0xa46cf8u), 0x41000000u);
    /* 00486f2c: mov dword ptr [0xa46cfc], 0x3fc00000 */ W32((u32)(0xa46cfcu), 0x3fc00000u);
    /* 00486f36: ret  */ FN_RET(0x00486f18); r_esp += 4; return;
}

void f_00486f38(void) /* sub_486F38 */
{
    FN_ENTER(0x00486f38);
    /* 00486f38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486f39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00486f3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00486f3d: call 0x486f5c */ r_esp -= 4; W32(r_esp, 0x486f42u); f_00486f5c();
    /* 00486f42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00486f46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00486f48: jne 0x486f4e */ if (!fZ) goto L_00486f4e;
L_00486f4a:; BB(0x00486f4a);
    /* 00486f4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486f4b: ret 4 */ FN_RET(0x00486f38); r_esp += 8; return;
L_00486f4e:; BB(0x00486f4e);
    /* 00486f4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00486f4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x486f54u); f_005c2f74();
    /* 00486f54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486f55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00486f56: ret 4 */ FN_RET(0x00486f38); r_esp += 8; return;
}

void f_00486f5c(void) /* sub_486F5C */
{
    FN_ENTER(0x00486f5c);
    /* 00486f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486f5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00486f5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00486f61: push 0x8cfc38 */ { u32 v = 0x8cfc38u; r_esp -= 4; W32(r_esp, v); }
    /* 00486f66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00486f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486f6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00486f74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00486f77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00486f7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00486f7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00486f80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00486f83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00486f86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00486f8d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00486f90: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00486f93: mov dword ptr [ecx], 0xaf8a18 */ W32((u32)(r_ecx), 0xaf8a18u);
    /* 00486f99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486f9b: je 0x486fa7 */ if (fZ) goto L_00486fa7;
L_00486f9d:; BB(0x00486f9d);
    /* 00486f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486f9e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x486fa3u); f_005cdcc0();
    /* 00486fa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486fa4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00486fa7:; BB(0x00486fa7);
    /* 00486fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00486fae: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x486fb3u); f_008171e8();
    /* 00486fb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00486fb6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00486fbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00486fbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00486fc0: ret  */ FN_RET(0x00486f5c); r_esp += 4; return;
}

void f_00486fc4(void) /* sub_486FC4 */
{
    FN_ENTER(0x00486fc4);
    /* 00486fc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00486fc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486fc6: mov esi, ecx */ r_esi = r_ecx;
    /* 00486fc8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00486fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486fcd: je 0x486ff9 */ if (fZ) goto L_00486ff9;
L_00486fcf:; BB(0x00486fcf);
    /* 00486fcf: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 00486fd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00486fd4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x486fd9u); f_0068d5a8();
    /* 00486fd9: mov ebp, eax */ r_ebp = r_eax;
    /* 00486fdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00486fde: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486fe0: je 0x486ff9 */ if (fZ) goto L_00486ff9;
L_00486fe2:; BB(0x00486fe2);
    /* 00486fe2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486fe3: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x486fe8u); f_0048e100();
    /* 00486fe8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00486fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00486feb: je 0x486ff9 */ if (fZ) goto L_00486ff9;
L_00486fed:; BB(0x00486fed);
    /* 00486fed: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00486ff0: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00486ff3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00486ff4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x486ff9u); f_00508db8();
L_00486ff9:; BB(0x00486ff9);
    /* 00486ff9: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00486ffc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486fff: cmp eax, dword ptr [esi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00487002: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00487005: jle 0x487017 */ if ((fZ||fS!=fO)) goto L_00487017;
L_00487007:; BB(0x00487007);
    /* 00487007: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0048700b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00487010: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00487014: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487015: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487016: ret  */ FN_RET(0x00486fc4); r_esp += 4; return;
L_00487017:; BB(0x00487017);
    /* 00487017: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487019: ret  */ FN_RET(0x00486fc4); r_esp += 4; return;
}

