#include "protos.h"

void f_004a8094(void) /* sub_4A8094 */
{
    FN_ENTER(0x004a8094);
    /* 004a8094: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 004a809a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a809c: je 0x4a809f */ if (fZ) goto L_004a809f;
L_004a809e:; BB(0x004a809e);
    /* 004a809e: ret  */ FN_RET(0x004a8094); r_esp += 4; return;
L_004a809f:; BB(0x004a809f);
    /* 004a809f: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a80a4: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004a80a7: ret  */ FN_RET(0x004a8094); r_esp += 4; return;
}

void f_004a80a8(void) /* sub_4A80A8 */
{
    FN_ENTER(0x004a80a8);
    /* 004a80a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a80a9: mov edi, ecx */ r_edi = r_ecx;
    /* 004a80ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a80ad: lea edx, [edi + 0x3c8] */ r_edx = (u32)(r_edi+0x3c8u);
    /* 004a80b3: mov dword ptr [0xa47698], eax */ W32((u32)(0xa47698u), r_eax);
    /* 004a80b8: mov dword ptr [0xa47688], eax */ W32((u32)(0xa47688u), r_eax);
    /* 004a80bd: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a80c3: mov ecx, 0x4a0944 */ r_ecx = 0x4a0944u;
    /* 004a80c8: mov dword ptr [0xa47684], edx */ W32((u32)(0xa47684u), r_edx);
    /* 004a80ce: mov dword ptr [0xa47680], eax */ W32((u32)(0xa47680u), r_eax);
    /* 004a80d3: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4a80d8u); f_0082fac4();
    /* 004a80d8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a80ddu); f_0082d7b0();
    /* 004a80dd: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4a80e2u); f_0082fa9c();
    /* 004a80e2: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004a80e5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a80eau); f_0082d838();
    /* 004a80ea: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004a80ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a80ef: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a80f4u); f_0082d8bc();
    /* 004a80f4: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004a80f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a80f9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4a80feu); f_0082e9e4();
    /* 004a80fe: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 004a8101: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8103: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4a8108u); f_00830c04();
    /* 004a8108: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a810d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8112: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8117: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8119: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a811eu); f_0082fa0c();
    /* 004a811e: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8120: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a8125u); f_007aabd8();
    /* 004a8125: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 004a8128: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 004a812e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a812f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a8132: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x4a8137u); f_00830590();
    /* 004a8137: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4a813cu); f_0082faac();
    /* 004a813c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a8141u); f_0082da80();
    /* 004a8141: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8143: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x4a8148u); f_0082fac4();
    /* 004a8148: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a8149: ret  */ FN_RET(0x004a80a8); r_esp += 4; return;
}

void f_004a814c(void) /* sub_4A814C */
{
    FN_ENTER(0x004a814c);
    /* 004a814c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a814d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a814e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a814f: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8152: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a8154: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004a8157: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4a815cu); f_00829cc8();
    /* 004a815c: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x4a8161u); f_00520d08();
    /* 004a8161: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004a8166: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004a816b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a816d: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4a8172u); f_00830b08();
    /* 004a8172: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a8173: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004a8178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a817a: je 0x4a832d */ if (fZ) goto L_004a832d;
L_004a8180:; BB(0x004a8180);
    /* 004a8180: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004a8187: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a818a: je 0x4a832d */ if (fZ) goto L_004a832d;
L_004a8190:; BB(0x004a8190);
    /* 004a8190: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a8196: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a8198: je 0x4a81a1 */ if (fZ) goto L_004a81a1;
L_004a819a:; BB(0x004a819a);
    /* 004a819a: mov eax, 1 */ r_eax = 0x1u;
    /* 004a819f: jmp 0x4a81a3 */ goto L_004a81a3;
L_004a81a1:; BB(0x004a81a1);
    /* 004a81a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004a81a3:; BB(0x004a81a3);
    /* 004a81a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a81a5: jne 0x4a832d */ if (!fZ) goto L_004a832d;
L_004a81ab:; BB(0x004a81ab);
    /* 004a81ab: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a81b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a81b3: jne 0x4a832d */ if (!fZ) goto L_004a832d;
L_004a81b9:; BB(0x004a81b9);
    /* 004a81b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a81bb: call 0x4d30d4 */ r_esp -= 4; W32(r_esp, 0x4a81c0u); f_004d30d4();
    /* 004a81c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a81c1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x4a81c6u); f_007b4d18();
    /* 004a81c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a81c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a81cb: je 0x4a832d */ if (fZ) goto L_004a832d;
L_004a81d1:; BB(0x004a81d1);
    /* 004a81d1: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 004a81d7: mov ebp, dword ptr [edi + 0x178] */ r_ebp = R32((u32)(r_edi+0x178u));
    /* 004a81dd: mov edx, dword ptr [edi + 0x180] */ r_edx = R32((u32)(r_edi+0x180u));
    /* 004a81e3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004a81e7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004a81eb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004a81ee: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a81f2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004a81f5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004a81f8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004a8200: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a8204: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a8208: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004a820c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004a8210: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4a8215u); f_0082f9c4();
    /* 004a8215: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004a821d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004a8221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8222: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4a8227u); f_007828e4();
    /* 004a8227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a8228: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a822c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004a8230: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004a8234: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004a8238: fstp dword ptr [0xa47664] */ W_F32((u32)(0xa47664u), ST(0)); FPOP();
    /* 004a823e: mov dword ptr [0xa47674], eax */ W32((u32)(0xa47674u), r_eax);
    /* 004a8243: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004a8247: mov dword ptr [0xa47678], edx */ W32((u32)(0xa47678u), r_edx);
    /* 004a824d: mov dword ptr [0xa4767c], ebp */ W32((u32)(0xa4767cu), r_ebp);
    /* 004a8253: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004a8255: mov dword ptr [0xa47668], edi */ W32((u32)(0xa47668u), r_edi);
    /* 004a825b: mov dword ptr [0xa4766c], eax */ W32((u32)(0xa4766cu), r_eax);
    /* 004a8260: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a8264: mov dword ptr [0xa47670], eax */ W32((u32)(0xa47670u), r_eax);
L_004a8269:; BB(0x004a8269);
    /* 004a8269: mov eax, dword ptr [ebp + 0x90395c] */ r_eax = R32((u32)(r_ebp+0x90395cu));
    /* 004a826f: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004a8277: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8279: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a827b: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004a827f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a8282: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a8284: mov edi, dword ptr [edx + ebx + 0x3c8] */ r_edi = R32((u32)(r_edx+r_ebx+0x3c8u));
    /* 004a828b: mov eax, dword ptr [edx + ebx + 0x3d0] */ r_eax = R32((u32)(r_edx+r_ebx+0x3d0u));
    /* 004a8292: mov edx, 0xa47674 */ r_edx = 0xa47674u;
    /* 004a8297: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004a829b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004a829f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4a82a4u); f_0082f9c4();
    /* 004a82a4: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004a82a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a82a9: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4a82aeu); f_007828e4();
    /* 004a82ae: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a82b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a82b5: fld dword ptr [0x903b7c] */ FPUSH(R_F32((u32)(0x903b7cu)));
    /* 004a82bb: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004a82be: fcomp dword ptr [0xa47664] */ fx_compare(ST(0), R_F32((u32)(0xa47664u))); FPOP();
    /* 004a82c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a82c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a82c7: jae 0x4a8321 */ if (!fC) goto L_004a8321;
L_004a82c9:; BB(0x004a82c9);
    /* 004a82c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a82ca: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004a82ce: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a82d0: fadd dword ptr [0x903b78] */ ST(0) = ST(0) + R_F32((u32)(0x903b78u));
    /* 004a82d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a82d9: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x4a82deu); f_0082f9f8();
    /* 004a82de: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004a82e1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a82e3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a82e6: mov edx, 0xa47668 */ r_edx = 0xa47668u;
    /* 004a82eb: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004a82ef: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4a82f4u); f_0082f9e0();
    /* 004a82f4: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 004a82f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a82f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a82fa: jb 0x4a8321 */ if (fC) goto L_004a8321;
L_004a82fc:; BB(0x004a82fc);
    /* 004a82fc: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004a8300: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004a8303: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8305: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a8308: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a830a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a830c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a830e: lea edi, [ebx + edx] */ r_edi = (u32)(r_ebx+r_edx);
    /* 004a8311: lea ebp, [ebx + edx + 0x588] */ r_ebp = (u32)(r_ebx+r_edx+0x588u);
    /* 004a8318: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a831a: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x4a831fu); f_00577234();
    /* 004a831f: jmp 0x4a8350 */ goto L_004a8350;
L_004a8321:; BB(0x004a8321);
    /* 004a8321: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004a8324: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a8327: jl 0x4a8269 */ if ((fS!=fO)) goto L_004a8269;
L_004a832d:; BB(0x004a832d);
    /* 004a832d: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004a8331: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004a8334: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8336: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a8339: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a833b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a833d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a833f: lea edi, [ebx + edx] */ r_edi = (u32)(r_ebx+r_edx);
    /* 004a8342: lea ebp, [ebx + edx + 0x588] */ r_ebp = (u32)(r_ebx+r_edx+0x588u);
    /* 004a8349: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a834b: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x4a8350u); f_0057723c();
L_004a8350:; BB(0x004a8350);
    /* 004a8350: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a8352: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4a8357u); f_00577244();
    /* 004a8357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8359: je 0x4a8366 */ if (fZ) goto L_004a8366;
L_004a835b:; BB(0x004a835b);
    /* 004a835b: mov eax, dword ptr [edi + 0x588] */ r_eax = R32((u32)(r_edi+0x588u));
    /* 004a8361: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a8363: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4a8366u); call_ind(t); }
L_004a8366:; BB(0x004a8366);
    /* 004a8366: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a836bu); f_0082d7b0();
    /* 004a836b: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 004a836e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a8373u); f_0082d838();
    /* 004a8373: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004a8376: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8378: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a837du); f_0082d8bc();
    /* 004a837d: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 004a8380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8382: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4a8387u); f_0082e9e4();
    /* 004a8387: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 004a838a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a838c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4a8391u); f_00830c04();
    /* 004a8391: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8396: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a839b: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a83a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a83a2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a83a7u); f_0082fa0c();
    /* 004a83a7: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x4a83acu); f_00578b38();
    /* 004a83ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a83ae: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4a83b3u); f_007aa668();
    /* 004a83b3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4a83b8u); f_0082dab0();
    /* 004a83b8: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004a83be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a83c3u); f_0061cdb0();
    /* 004a83c3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a83c8u); f_0082da80();
    /* 004a83c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a83ca: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004a83cf: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4a83d4u); f_0082d6fc();
    /* 004a83d4: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 004a83d9: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x4a83deu); f_00830b08();
    /* 004a83de: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004a83e3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004a83e8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a83eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a83ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a83ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a83ee: ret 4 */ FN_RET(0x004a814c); r_esp += 8; return;
}

void f_004a83f4(void) /* sub_4A83F4 */
{
    FN_ENTER(0x004a83f4);
    /* 004a83f4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004a83f9: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004a83fe: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8403: add ecx, 0x4cc */ {  u32 a = r_ecx; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8409: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004a840e: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4a8413u); f_00818f50();
    /* 004a8413: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004a8418: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004a841d: ret  */ FN_RET(0x004a83f4); r_esp += 4; return;
}

void f_004a8420(void) /* sub_4A8420 */
{
    FN_ENTER(0x004a8420);
    /* 004a8420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a8423: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4a8428u); f_004f7c84();
    /* 004a8428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a842a: jne 0x4a8433 */ if (!fZ) goto L_004a8433;
L_004a842c:; BB(0x004a842c);
    /* 004a842c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a842e: call 0x4a8438 */ r_esp -= 4; W32(r_esp, 0x4a8433u); f_004a8438();
L_004a8433:; BB(0x004a8433);
    /* 004a8433: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8434: ret  */ FN_RET(0x004a8420); r_esp += 4; return;
}

void f_004a8438(void) /* sub_4A8438 */
{
    FN_ENTER(0x004a8438);
    /* 004a8438: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8439: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a843a: mov edi, ecx */ r_edi = r_ecx;
    /* 004a843c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a8441u); f_0082d7b0();
    /* 004a8441: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004a8444: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a8449u); f_0082d838();
    /* 004a8449: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004a844c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a844e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a8453u); f_0082d8bc();
    /* 004a8453: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004a8456: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8458: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4a845du); f_0082e9e4();
    /* 004a845d: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 004a8460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8462: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4a8467u); f_00830c04();
    /* 004a8467: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a846c: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8471: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8476: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8478: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a847du); f_0082fa0c();
    /* 004a847d: mov eax, dword ptr [0xa47634] */ r_eax = R32((u32)(0xa47634u));
    /* 004a8482: mov esi, dword ptr [edi + 0x34] */ r_esi = R32((u32)(r_edi+0x34u));
    /* 004a8485: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004a848b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004a848e: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004a8491: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8493: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4a8498u); f_007aa668();
    /* 004a8498: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004a849b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a84a0u); f_0082da80();
    /* 004a84a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a84a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a84a2: ret  */ FN_RET(0x004a8438); r_esp += 4; return;
}

void f_004a84a4(void) /* sub_4A84A4 */
{
    FN_ENTER(0x004a84a4);
    /* 004a84a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a84a5: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a84a8: mov esi, ecx */ r_esi = r_ecx;
    /* 004a84aa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004a84ac: mov ecx, esi */ r_ecx = r_esi;
    /* 004a84ae: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84b3: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84b8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4a84bbu); call_ind(t); }
    /* 004a84bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a84bd: je 0x4a85eb */ if (fZ) goto L_004a85eb;
L_004a84c3:; BB(0x004a84c3);
    /* 004a84c3: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 004a84c6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4a84cbu); f_00829cc8();
    /* 004a84cb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a84d0u); f_0082d7b0();
    /* 004a84d0: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004a84d3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a84d8u); f_0082d838();
    /* 004a84d8: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 004a84db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a84dd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a84e2u); f_0082d8bc();
    /* 004a84e2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a84e7u); f_0082d7b0();
    /* 004a84e7: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84ec: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84f1: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a84f8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a84fdu); f_0082fa0c();
    /* 004a84fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a8502u); f_0082da80();
    /* 004a8502: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8507: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a850c: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8513: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a8518u); f_0082fa0c();
    /* 004a8518: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004a851e: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a8524: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004a852a: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 004a8530: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004a8534: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004a8539: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a853e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004a8542: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004a8546: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a854a: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004a854e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004a8552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a8554: jl 0x4a8562 */ if ((fS!=fO)) goto L_004a8562;
L_004a8556:; BB(0x004a8556);
    /* 004a8556: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a8559: jl 0x4a8564 */ if ((fS!=fO)) goto L_004a8564;
L_004a855b:; BB(0x004a855b);
    /* 004a855b: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004a8560: jmp 0x4a8564 */ goto L_004a8564;
L_004a8562:; BB(0x004a8562);
    /* 004a8562: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004a8564:; BB(0x004a8564);
    /* 004a8564: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 004a856a: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 004a8570: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8572: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 004a8576: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 004a857c: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 004a8580: fcom dword ptr [0x903b5c] */ fx_compare(ST(0), R_F32((u32)(0x903b5cu))); 
    /* 004a8586: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a8588: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a8589: jae 0x4a8595 */ if (!fC) goto L_004a8595;
L_004a858b:; BB(0x004a858b);
    /* 004a858b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a858d: fld dword ptr [0x903b5c] */ FPUSH(R_F32((u32)(0x903b5cu)));
    /* 004a8593: jmp 0x4a85c8 */ goto L_004a85c8;
L_004a8595:; BB(0x004a8595);
    /* 004a8595: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a8598: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 004a859b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004a859f: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004a85a3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a85a6: fadd dword ptr [eax*4 + 0x903a20] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a20u));
    /* 004a85ad: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004a85af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a85b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a85b2: jae 0x4a85c8 */ if (!fC) goto L_004a85c8;
L_004a85b4:; BB(0x004a85b4);
    /* 004a85b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a85b6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004a85ba: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004a85be: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004a85c1: fadd dword ptr [edx*4 + 0x903a20] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x903a20u));
L_004a85c8:; BB(0x004a85c8);
    /* 004a85c8: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004a85cb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a85cf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a85d2: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004a85d6: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4a85dbu); f_0083046c();
    /* 004a85db: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004a85e1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a85e6u); f_0061cdb0();
    /* 004a85e6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a85ebu); f_0082da80();
L_004a85eb:; BB(0x004a85eb);
    /* 004a85eb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a85ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a85ef: ret  */ FN_RET(0x004a84a4); r_esp += 4; return;
}

void f_004a84dc(void)
{
    FN_ENTER(0x004a84dc);
    /* 004a84dc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004a84dd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a84e2u); f_0082d8bc();
    /* 004a84e2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a84e7u); f_0082d7b0();
    /* 004a84e7: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84ec: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84f1: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a84f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a84f8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a84fdu); f_0082fa0c();
    /* 004a84fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a8502u); f_0082da80();
    /* 004a8502: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8507: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a850c: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8511: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8513: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4a8518u); f_0082fa0c();
    /* 004a8518: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004a851e: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a8524: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004a852a: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 004a8530: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004a8534: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004a8539: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a853e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004a8542: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004a8546: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a854a: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004a854e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004a8552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a8554: jl 0x4a8562 */ if ((fS!=fO)) goto L_004a8562;
L_004a8556:; BB(0x004a8556);
    /* 004a8556: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a8559: jl 0x4a8564 */ if ((fS!=fO)) goto L_004a8564;
L_004a855b:; BB(0x004a855b);
    /* 004a855b: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004a8560: jmp 0x4a8564 */ goto L_004a8564;
L_004a8562:; BB(0x004a8562);
    /* 004a8562: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004a8564:; BB(0x004a8564);
    /* 004a8564: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 004a856a: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 004a8570: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8572: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 004a8576: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 004a857c: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 004a8580: fcom dword ptr [0x903b5c] */ fx_compare(ST(0), R_F32((u32)(0x903b5cu))); 
    /* 004a8586: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a8588: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a8589: jae 0x4a8595 */ if (!fC) goto L_004a8595;
L_004a858b:; BB(0x004a858b);
    /* 004a858b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a858d: fld dword ptr [0x903b5c] */ FPUSH(R_F32((u32)(0x903b5cu)));
    /* 004a8593: jmp 0x4a85c8 */ goto L_004a85c8;
L_004a8595:; BB(0x004a8595);
    /* 004a8595: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004a8598: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 004a859b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004a859f: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004a85a3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a85a6: fadd dword ptr [eax*4 + 0x903a20] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a20u));
    /* 004a85ad: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004a85af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a85b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a85b2: jae 0x4a85c8 */ if (!fC) goto L_004a85c8;
L_004a85b4:; BB(0x004a85b4);
    /* 004a85b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a85b6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004a85ba: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004a85be: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004a85c1: fadd dword ptr [edx*4 + 0x903a20] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x903a20u));
L_004a85c8:; BB(0x004a85c8);
    /* 004a85c8: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004a85cb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a85cf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a85d2: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004a85d6: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4a85dbu); f_0083046c();
    /* 004a85db: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004a85e1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4a85e6u); f_0061cdb0();
    /* 004a85e6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a85ebu); f_0082da80();
    /* 004a85eb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a85ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a85ef: ret  */ FN_RET(0x004a84dc); r_esp += 4; return;
}

void f_004a85f0(void) /* sub_4A85F0 */
{
    FN_ENTER(0x004a85f0);
    /* 004a85f0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004a85f4: mov eax, dword ptr [edx*8 + 0x9a7e40] */ r_eax = R32((u32)(r_edx*8+0x9a7e40u));
    /* 004a85fb: cmp eax, dword ptr [0x903bcc] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903bccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8601: je 0x4a8615 */ if (fZ) goto L_004a8615;
L_004a8603:; BB(0x004a8603);
    /* 004a8603: mov edx, dword ptr [edx*8 + 0x9a7e44] */ r_edx = R32((u32)(r_edx*8+0x9a7e44u));
L_004a860a:; BB(0x004a860a);
    /* 004a860a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a860e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8610: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a8612u); call_ind(t); }
L_004a8612:; BB(0x004a8612);
    /* 004a8612: ret 8 */ FN_RET(0x004a85f0); r_esp += 12; return;
L_004a8615:; BB(0x004a8615);
    /* 004a8615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8617: je 0x4a8612 */ if (fZ) goto L_004a8612;
L_004a8619:; BB(0x004a8619);
    /* 004a8619: mov edx, dword ptr [edx*8 + 0x9a7e44] */ r_edx = R32((u32)(r_edx*8+0x9a7e44u));
    /* 004a8620: cmp edx, dword ptr [0x903bd0] */ {  u32 a = r_edx; u32 b = R32((u32)(0x903bd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a8626: je 0x4a8612 */ if (fZ) goto L_004a8612;
L_004a8628:; BB(0x004a8628);
    /* 004a8628: jmp 0x4a860a */ goto L_004a860a;
}

void f_004a862c(void) /* sub_4A862C */
{
    FN_ENTER(0x004a862c);
    /* 004a862c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a862d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a862e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8631: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a8633: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 004a8637: mov eax, dword ptr [0x90396c] */ r_eax = R32((u32)(0x90396cu));
    /* 004a863c: mov edx, dword ptr [0x90397c] */ r_edx = R32((u32)(0x90397cu));
    /* 004a8642: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a8645: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a864a: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a8652: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a8656: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004a865e: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 004a8666: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004a8669: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a866d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a8670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8671: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8672: call 0x4ab96c */ r_esp -= 4; W32(r_esp, 0x4a8677u); f_004ab96c();
    /* 004a8677: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a867a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a867d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a867f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8680: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a8682: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8683: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4a8688u); f_0051fc9c();
    /* 004a8688: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a868b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a868c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a868d: ret 4 */ FN_RET(0x004a862c); r_esp += 8; return;
}

void f_004a8690(void) /* sub_4A8690 */
{
    FN_ENTER(0x004a8690);
    /* 004a8690: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8693: mov eax, dword ptr [0x903980] */ r_eax = R32((u32)(0x903980u));
    /* 004a8698: mov edx, dword ptr [0x903990] */ r_edx = R32((u32)(0x903990u));
    /* 004a869e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a86a1: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a86a6: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a86ae: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004a86b6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a86ba: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 004a86c2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004a86c5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a86c9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a86cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a86ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a86cf: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a86d3: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4a86d8u); f_0051fc9c();
    /* 004a86d8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a86db: ret 4 */ FN_RET(0x004a8690); r_esp += 8; return;
}

void f_004a86e0(void) /* sub_4A86E0 */
{
    FN_ENTER(0x004a86e0);
    /* 004a86e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a86e3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004a86e7: mov edx, dword ptr [0x903994] */ r_edx = R32((u32)(0x903994u));
    /* 004a86ed: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004a86f0: mov edx, dword ptr [0x9039a4] */ r_edx = R32((u32)(0x9039a4u));
    /* 004a86f6: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a86fe: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a8706: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a870a: mov edx, dword ptr [0xa47640] */ r_edx = R32((u32)(0xa47640u));
    /* 004a8710: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004a8718: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004a871a: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 004a871e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a8722: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a8726: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a8729: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a872b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a872c: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a8730: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4a8735u); f_0051fc9c();
    /* 004a8735: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a8738: ret 0xc */ FN_RET(0x004a86e0); r_esp += 16; return;
}

void f_004a873c(void) /* sub_4A873C */
{
    FN_ENTER(0x004a873c);
    /* 004a873c: mov edx, dword ptr [ecx + 0x4c8] */ r_edx = R32((u32)(r_ecx+0x4c8u));
    /* 004a8742: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8745: mov eax, 0 */ r_eax = 0x0u;
    /* 004a874a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004a874d: ret  */ FN_RET(0x004a873c); r_esp += 4; return;
}

void f_004a8750(void) /* sub_4A8750 */
{
    FN_ENTER(0x004a8750);
    /* 004a8750: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8751: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8753: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8758: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a875c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a8761u); f_0050b7a4();
    /* 004a8761: mov edi, eax */ r_edi = r_eax;
    /* 004a8763: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a8766: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8768: je 0x4a879f */ if (fZ) goto L_004a879f;
L_004a876a:; BB(0x004a876a);
    /* 004a876a: mov ecx, dword ptr [0xa47630] */ r_ecx = R32((u32)(0xa47630u));
    /* 004a8770: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8772: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4a8777u); f_005b8610();
    /* 004a8777: mov edx, dword ptr [0xa4762c] */ r_edx = R32((u32)(0xa4762cu));
    /* 004a877d: movzx ecx, word ptr [edi + 0x2c] */ r_ecx = (u32)R16((u32)(r_edi+0x2cu));
    /* 004a8781: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 004a8788: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004a878b: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 004a8792: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 004a8795: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a879b: mov word ptr [edi + 0x2c], cx */ W16((u32)(r_edi+0x2cu), (u16)r_ecx);
L_004a879f:; BB(0x004a879f);
    /* 004a879f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a87a0: ret  */ FN_RET(0x004a8750); r_esp += 4; return;
}

void f_004a87a4(void)
{
    FN_ENTER(0x004a87a4);
    /* 004a87a4: fld dword ptr [0x921680] */ FPUSH(R_F32((u32)(0x921680u)));
    /* 004a87aa: fld dword ptr [0x903b30] */ FPUSH(R_F32((u32)(0x903b30u)));
    /* 004a87b0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a87b2: fstp dword ptr [0xa4761c] */ W_F32((u32)(0xa4761cu), ST(0)); FPOP();
    /* 004a87b8: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004a87ba: fstp dword ptr [0xa47620] */ W_F32((u32)(0xa47620u), ST(0)); FPOP();
    /* 004a87c0: mov dword ptr [0xa4760c], 0x3f800000 */ W32((u32)(0xa4760cu), 0x3f800000u);
    /* 004a87ca: mov dword ptr [0xa47610], 0x41000000 */ W32((u32)(0xa47610u), 0x41000000u);
    /* 004a87d4: mov dword ptr [0xa47614], 0x3fc00000 */ W32((u32)(0xa47614u), 0x3fc00000u);
    /* 004a87de: mov dword ptr [0xa475f8], 0x3f400000 */ W32((u32)(0xa475f8u), 0x3f400000u);
    /* 004a87e8: mov dword ptr [0xa47564], 0x42820000 */ W32((u32)(0xa47564u), 0x42820000u);
    /* 004a87f2: mov dword ptr [0xa47590], 0x43960000 */ W32((u32)(0xa47590u), 0x43960000u);
    /* 004a87fc: mov dword ptr [0xa475a8], 0x43960000 */ W32((u32)(0xa475a8u), 0x43960000u);
    /* 004a8806: mov dword ptr [0xa475ac], 0x43480000 */ W32((u32)(0xa475acu), 0x43480000u);
    /* 004a8810: mov dword ptr [0xa475b0], 0x43660000 */ W32((u32)(0xa475b0u), 0x43660000u);
    /* 004a881a: mov dword ptr [0xa475d4], 0x43700000 */ W32((u32)(0xa475d4u), 0x43700000u);
    /* 004a8824: mov dword ptr [0xa47618], 0x3f000000 */ W32((u32)(0xa47618u), 0x3f000000u);
    /* 004a882e: mov dword ptr [0xa47568], 0x41a80000 */ W32((u32)(0xa47568u), 0x41a80000u);
    /* 004a8838: mov dword ptr [0xa4756c], 0x40a00000 */ W32((u32)(0xa4756cu), 0x40a00000u);
    /* 004a8842: mov dword ptr [0xa47570], 0x41a00000 */ W32((u32)(0xa47570u), 0x41a00000u);
    /* 004a884c: mov dword ptr [0xa47574], 0x41000000 */ W32((u32)(0xa47574u), 0x41000000u);
    /* 004a8856: mov dword ptr [0xa475bc], 0x3f400000 */ W32((u32)(0xa475bcu), 0x3f400000u);
    /* 004a8860: mov dword ptr [0xa475c0], 0x3f400000 */ W32((u32)(0xa475c0u), 0x3f400000u);
    /* 004a886a: mov dword ptr [0xa475b4], 0x3f400000 */ W32((u32)(0xa475b4u), 0x3f400000u);
    /* 004a8874: mov dword ptr [0xa475b8], 0x3f400000 */ W32((u32)(0xa475b8u), 0x3f400000u);
    /* 004a887e: mov dword ptr [0xa475c4], 0x41400000 */ W32((u32)(0xa475c4u), 0x41400000u);
    /* 004a8888: mov dword ptr [0xa475c8], 0x41000000 */ W32((u32)(0xa475c8u), 0x41000000u);
    /* 004a8892: mov dword ptr [0xa475cc], 0x41700000 */ W32((u32)(0xa475ccu), 0x41700000u);
    /* 004a889c: mov dword ptr [0xa475d0], 0x41300000 */ W32((u32)(0xa475d0u), 0x41300000u);
    /* 004a88a6: mov dword ptr [0xa47560], 0x45c80000 */ W32((u32)(0xa47560u), 0x45c80000u);
    /* 004a88b0: mov dword ptr [0xa47624], 0x44610000 */ W32((u32)(0xa47624u), 0x44610000u);
    /* 004a88ba: mov dword ptr [0x9a8150], 0x41f00000 */ W32((u32)(0x9a8150u), 0x41f00000u);
    /* 004a88c4: mov dword ptr [0x9a80cc], 0 */ W32((u32)(0x9a80ccu), 0x0u);
    /* 004a88ce: mov dword ptr [0x9a7acc], 0x41200000 */ W32((u32)(0x9a7accu), 0x41200000u);
    /* 004a88d8: mov dword ptr [0x9a7af8], 0x41200000 */ W32((u32)(0x9a7af8u), 0x41200000u);
    /* 004a88e2: mov dword ptr [0x9a7b24], 0x41200000 */ W32((u32)(0x9a7b24u), 0x41200000u);
    /* 004a88ec: mov dword ptr [0x9a7b50], 0x41200000 */ W32((u32)(0x9a7b50u), 0x41200000u);
    /* 004a88f6: mov dword ptr [0x9a7b7c], 0x41200000 */ W32((u32)(0x9a7b7cu), 0x41200000u);
    /* 004a8900: mov dword ptr [0x9a7ba8], 0x41200000 */ W32((u32)(0x9a7ba8u), 0x41200000u);
    /* 004a890a: mov dword ptr [0x9a7bd4], 0x41700000 */ W32((u32)(0x9a7bd4u), 0x41700000u);
    /* 004a8914: mov dword ptr [0x9a7c00], 0x41700000 */ W32((u32)(0x9a7c00u), 0x41700000u);
    /* 004a891e: mov dword ptr [0x9a7c2c], 0x41700000 */ W32((u32)(0x9a7c2cu), 0x41700000u);
    /* 004a8928: mov dword ptr [0x9a7c58], 0x41700000 */ W32((u32)(0x9a7c58u), 0x41700000u);
    /* 004a8932: mov dword ptr [0x9a7de8], 0x3ecccccd */ W32((u32)(0x9a7de8u), 0x3ecccccdu);
    /* 004a893c: ret  */ FN_RET(0x004a87a4); r_esp += 4; return;
}

void f_004a8940(void) /* sub_4A8940 */
{
    FN_ENTER(0x004a8940);
    /* 004a8940: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8941: push 0x9a80b4 */ { u32 v = 0x9a80b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8946: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4a894bu); f_0051f6b0();
    /* 004a894b: push 0x9a8090 */ { u32 v = 0x9a8090u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8950: mov dword ptr [0xa47634], eax */ W32((u32)(0xa47634u), r_eax);
    /* 004a8955: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4a895au); f_0051f6b0();
    /* 004a895a: push 0x904370 */ { u32 v = 0x904370u; r_esp -= 4; W32(r_esp, v); }
    /* 004a895f: mov dword ptr [0xa47630], eax */ W32((u32)(0xa47630u), r_eax);
    /* 004a8964: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4a8969u); f_008009dc();
    /* 004a8969: push dword ptr [0x9a8108] */ { u32 v = R32((u32)(0x9a8108u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a896f: mov dword ptr [0xa4768c], 0 */ W32((u32)(0xa4768cu), 0x0u);
    /* 004a8979: mov dword ptr [0xa47690], 0 */ W32((u32)(0xa47690u), 0x0u);
    /* 004a8983: mov dword ptr [0xa4762c], eax */ W32((u32)(0xa4762cu), r_eax);
    /* 004a8988: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a898a: mov dword ptr [0xa47694], 0 */ W32((u32)(0xa47694u), 0x0u);
    /* 004a8994: mov dword ptr [0xa47698], eax */ W32((u32)(0xa47698u), r_eax);
    /* 004a8999: mov dword ptr [0xa47688], eax */ W32((u32)(0xa47688u), r_eax);
    /* 004a899e: mov dword ptr [0xa47684], eax */ W32((u32)(0xa47684u), r_eax);
    /* 004a89a3: mov dword ptr [0xa47680], eax */ W32((u32)(0xa47680u), r_eax);
    /* 004a89a8: mov dword ptr [0xa47660], eax */ W32((u32)(0xa47660u), r_eax);
    /* 004a89ad: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4a89b2u); f_0077a684();
    /* 004a89b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a89b5: mov dword ptr [0xa4765c], eax */ W32((u32)(0xa4765cu), r_eax);
    /* 004a89ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a89bc: mov ebx, eax */ r_ebx = r_eax;
L_004a89be:; BB(0x004a89be);
    /* 004a89be: push dword ptr [ebx + 0x9a80f4] */ { u32 v = R32((u32)(r_ebx+0x9a80f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a89c4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4a89c9u); f_0077a698();
    /* 004a89c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a89ca: mov dword ptr [ebx + 0xa47648], eax */ W32((u32)(r_ebx+0xa47648u), r_eax);
    /* 004a89d0: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a89d3: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a89d6: jl 0x4a89be */ if ((fS!=fO)) goto L_004a89be;
L_004a89d8:; BB(0x004a89d8);
    /* 004a89d8: push dword ptr [0x9a80f0] */ { u32 v = R32((u32)(0x9a80f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a89de: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4a89e3u); f_0077a6b4();
    /* 004a89e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a89e4: mov dword ptr [0xa47644], eax */ W32((u32)(0xa47644u), r_eax);
    /* 004a89e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a89eb: mov ebx, eax */ r_ebx = r_eax;
L_004a89ed:; BB(0x004a89ed);
    /* 004a89ed: push dword ptr [ebx + 0x9a80e4] */ { u32 v = R32((u32)(r_ebx+0x9a80e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a89f3: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4a89f8u); f_0077a6cc();
    /* 004a89f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a89f9: mov dword ptr [ebx + 0xa47638], eax */ W32((u32)(r_ebx+0xa47638u), r_eax);
    /* 004a89ff: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a8a02: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a8a05: jl 0x4a89ed */ if ((fS!=fO)) goto L_004a89ed;
L_004a8a07:; BB(0x004a8a07);
    /* 004a8a07: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4a8a0cu); f_00717f74();
    /* 004a8a0c: call 0x4aaaf4 */ r_esp -= 4; W32(r_esp, 0x4a8a11u); f_004aaaf4();
    /* 004a8a11: call 0x4ab560 */ r_esp -= 4; W32(r_esp, 0x4a8a16u); f_004ab560();
    /* 004a8a16: call 0x4ab058 */ r_esp -= 4; W32(r_esp, 0x4a8a1bu); f_004ab058();
    /* 004a8a1b: call 0x4a9d58 */ r_esp -= 4; W32(r_esp, 0x4a8a20u); f_004a9d58();
    /* 004a8a20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8a21: ret  */ FN_RET(0x004a8940); r_esp += 4; return;
}

void f_004a8a24(void) /* sub_4A8A24 */
{
    FN_ENTER(0x004a8a24);
    /* 004a8a24: mov edx, dword ptr [ecx + 0x734] */ r_edx = R32((u32)(r_ecx+0x734u));
    /* 004a8a2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8a2c: je 0x4a8a45 */ if (fZ) goto L_004a8a45;
L_004a8a2e:; BB(0x004a8a2e);
    /* 004a8a2e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8a32: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8a37: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8a3b: mov dword ptr [ecx + 0x734], 0 */ W32((u32)(r_ecx+0x734u), 0x0u);
L_004a8a45:; BB(0x004a8a45);
    /* 004a8a45: mov edx, dword ptr [ecx + 0x730] */ r_edx = R32((u32)(r_ecx+0x730u));
    /* 004a8a4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8a4d: je 0x4a8a66 */ if (fZ) goto L_004a8a66;
L_004a8a4f:; BB(0x004a8a4f);
    /* 004a8a4f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8a53: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8a58: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8a5c: mov dword ptr [ecx + 0x730], 0 */ W32((u32)(r_ecx+0x730u), 0x0u);
L_004a8a66:; BB(0x004a8a66);
    /* 004a8a66: mov edx, dword ptr [ecx + 0x72c] */ r_edx = R32((u32)(r_ecx+0x72cu));
    /* 004a8a6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8a6e: je 0x4a8a87 */ if (fZ) goto L_004a8a87;
L_004a8a70:; BB(0x004a8a70);
    /* 004a8a70: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8a74: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8a79: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8a7d: mov dword ptr [ecx + 0x72c], 0 */ W32((u32)(r_ecx+0x72cu), 0x0u);
L_004a8a87:; BB(0x004a8a87);
    /* 004a8a87: ret  */ FN_RET(0x004a8a24); r_esp += 4; return;
}

void f_004a8a88(void) /* sub_4A8A88 */
{
    FN_ENTER(0x004a8a88);
    /* 004a8a88: mov edx, dword ptr [ecx + 0x778] */ r_edx = R32((u32)(r_ecx+0x778u));
    /* 004a8a8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8a90: je 0x4a8aa9 */ if (fZ) goto L_004a8aa9;
L_004a8a92:; BB(0x004a8a92);
    /* 004a8a92: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8a96: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8a9b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8a9f: mov dword ptr [ecx + 0x778], 0 */ W32((u32)(r_ecx+0x778u), 0x0u);
L_004a8aa9:; BB(0x004a8aa9);
    /* 004a8aa9: mov edx, dword ptr [ecx + 0x774] */ r_edx = R32((u32)(r_ecx+0x774u));
    /* 004a8aaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8ab1: je 0x4a8aca */ if (fZ) goto L_004a8aca;
L_004a8ab3:; BB(0x004a8ab3);
    /* 004a8ab3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8ab7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8abc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8ac0: mov dword ptr [ecx + 0x774], 0 */ W32((u32)(r_ecx+0x774u), 0x0u);
L_004a8aca:; BB(0x004a8aca);
    /* 004a8aca: mov edx, dword ptr [ecx + 0x770] */ r_edx = R32((u32)(r_ecx+0x770u));
    /* 004a8ad0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8ad2: je 0x4a8aeb */ if (fZ) goto L_004a8aeb;
L_004a8ad4:; BB(0x004a8ad4);
    /* 004a8ad4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8ad8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8add: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8ae1: mov dword ptr [ecx + 0x770], 0 */ W32((u32)(r_ecx+0x770u), 0x0u);
L_004a8aeb:; BB(0x004a8aeb);
    /* 004a8aeb: mov edx, dword ptr [ecx + 0x76c] */ r_edx = R32((u32)(r_ecx+0x76cu));
    /* 004a8af1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8af3: je 0x4a8b0c */ if (fZ) goto L_004a8b0c;
L_004a8af5:; BB(0x004a8af5);
    /* 004a8af5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8af9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8afe: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8b02: mov dword ptr [ecx + 0x76c], 0 */ W32((u32)(r_ecx+0x76cu), 0x0u);
L_004a8b0c:; BB(0x004a8b0c);
    /* 004a8b0c: mov edx, dword ptr [ecx + 0x768] */ r_edx = R32((u32)(r_ecx+0x768u));
    /* 004a8b12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8b14: je 0x4a8b2d */ if (fZ) goto L_004a8b2d;
L_004a8b16:; BB(0x004a8b16);
    /* 004a8b16: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8b1a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8b1f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8b23: mov dword ptr [ecx + 0x768], 0 */ W32((u32)(r_ecx+0x768u), 0x0u);
L_004a8b2d:; BB(0x004a8b2d);
    /* 004a8b2d: mov edx, dword ptr [ecx + 0x764] */ r_edx = R32((u32)(r_ecx+0x764u));
    /* 004a8b33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8b35: je 0x4a8b4e */ if (fZ) goto L_004a8b4e;
L_004a8b37:; BB(0x004a8b37);
    /* 004a8b37: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8b3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8b40: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8b44: mov dword ptr [ecx + 0x764], 0 */ W32((u32)(r_ecx+0x764u), 0x0u);
L_004a8b4e:; BB(0x004a8b4e);
    /* 004a8b4e: mov edx, dword ptr [ecx + 0x760] */ r_edx = R32((u32)(r_ecx+0x760u));
    /* 004a8b54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8b56: je 0x4a8b6f */ if (fZ) goto L_004a8b6f;
L_004a8b58:; BB(0x004a8b58);
    /* 004a8b58: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8b5c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8b61: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8b65: mov dword ptr [ecx + 0x760], 0 */ W32((u32)(r_ecx+0x760u), 0x0u);
L_004a8b6f:; BB(0x004a8b6f);
    /* 004a8b6f: mov edx, dword ptr [ecx + 0x75c] */ r_edx = R32((u32)(r_ecx+0x75cu));
    /* 004a8b75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8b77: je 0x4a8b90 */ if (fZ) goto L_004a8b90;
L_004a8b79:; BB(0x004a8b79);
    /* 004a8b79: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8b7d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8b82: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8b86: mov dword ptr [ecx + 0x75c], 0 */ W32((u32)(r_ecx+0x75cu), 0x0u);
L_004a8b90:; BB(0x004a8b90);
    /* 004a8b90: mov edx, dword ptr [ecx + 0x758] */ r_edx = R32((u32)(r_ecx+0x758u));
    /* 004a8b96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8b98: je 0x4a8bb1 */ if (fZ) goto L_004a8bb1;
L_004a8b9a:; BB(0x004a8b9a);
    /* 004a8b9a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8b9e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8ba3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8ba7: mov dword ptr [ecx + 0x758], 0 */ W32((u32)(r_ecx+0x758u), 0x0u);
L_004a8bb1:; BB(0x004a8bb1);
    /* 004a8bb1: mov edx, dword ptr [ecx + 0x754] */ r_edx = R32((u32)(r_ecx+0x754u));
    /* 004a8bb7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8bb9: je 0x4a8bd2 */ if (fZ) goto L_004a8bd2;
L_004a8bbb:; BB(0x004a8bbb);
    /* 004a8bbb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8bbf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8bc4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8bc8: mov dword ptr [ecx + 0x754], 0 */ W32((u32)(r_ecx+0x754u), 0x0u);
L_004a8bd2:; BB(0x004a8bd2);
    /* 004a8bd2: mov edx, dword ptr [ecx + 0x750] */ r_edx = R32((u32)(r_ecx+0x750u));
    /* 004a8bd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8bda: je 0x4a8bf3 */ if (fZ) goto L_004a8bf3;
L_004a8bdc:; BB(0x004a8bdc);
    /* 004a8bdc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8be0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8be5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8be9: mov dword ptr [ecx + 0x750], 0 */ W32((u32)(r_ecx+0x750u), 0x0u);
L_004a8bf3:; BB(0x004a8bf3);
    /* 004a8bf3: mov edx, dword ptr [ecx + 0x74c] */ r_edx = R32((u32)(r_ecx+0x74cu));
    /* 004a8bf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8bfb: je 0x4a8c14 */ if (fZ) goto L_004a8c14;
L_004a8bfd:; BB(0x004a8bfd);
    /* 004a8bfd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8c01: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8c06: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8c0a: mov dword ptr [ecx + 0x74c], 0 */ W32((u32)(r_ecx+0x74cu), 0x0u);
L_004a8c14:; BB(0x004a8c14);
    /* 004a8c14: mov edx, dword ptr [ecx + 0x748] */ r_edx = R32((u32)(r_ecx+0x748u));
    /* 004a8c1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8c1c: je 0x4a8c35 */ if (fZ) goto L_004a8c35;
L_004a8c1e:; BB(0x004a8c1e);
    /* 004a8c1e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8c22: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8c27: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8c2b: mov dword ptr [ecx + 0x748], 0 */ W32((u32)(r_ecx+0x748u), 0x0u);
L_004a8c35:; BB(0x004a8c35);
    /* 004a8c35: mov edx, dword ptr [ecx + 0x744] */ r_edx = R32((u32)(r_ecx+0x744u));
    /* 004a8c3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8c3d: je 0x4a8c56 */ if (fZ) goto L_004a8c56;
L_004a8c3f:; BB(0x004a8c3f);
    /* 004a8c3f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8c43: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8c48: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8c4c: mov dword ptr [ecx + 0x744], 0 */ W32((u32)(r_ecx+0x744u), 0x0u);
L_004a8c56:; BB(0x004a8c56);
    /* 004a8c56: mov edx, dword ptr [ecx + 0x740] */ r_edx = R32((u32)(r_ecx+0x740u));
    /* 004a8c5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8c5e: je 0x4a8c77 */ if (fZ) goto L_004a8c77;
L_004a8c60:; BB(0x004a8c60);
    /* 004a8c60: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8c64: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8c69: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8c6d: mov dword ptr [ecx + 0x740], 0 */ W32((u32)(r_ecx+0x740u), 0x0u);
L_004a8c77:; BB(0x004a8c77);
    /* 004a8c77: mov edx, dword ptr [ecx + 0x73c] */ r_edx = R32((u32)(r_ecx+0x73cu));
    /* 004a8c7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8c7f: je 0x4a8c98 */ if (fZ) goto L_004a8c98;
L_004a8c81:; BB(0x004a8c81);
    /* 004a8c81: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8c85: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8c8a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8c8e: mov dword ptr [ecx + 0x73c], 0 */ W32((u32)(r_ecx+0x73cu), 0x0u);
L_004a8c98:; BB(0x004a8c98);
    /* 004a8c98: ret  */ FN_RET(0x004a8a88); r_esp += 4; return;
}

void f_004a8c9c(void) /* sub_4A8C9C */
{
    FN_ENTER(0x004a8c9c);
    /* 004a8c9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8c9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8c9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8c9f: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8ca2: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004a8ca6: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 004a8caa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004a8cac: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 004a8caf: movsx ebp, word ptr [edx + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 004a8cb3: movsx ebx, word ptr [edx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004a8cb7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a8cbcu); f_008587a5();
    /* 004a8cbc: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004a8cbf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a8cc2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004a8cc6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a8cca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a8cce: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a8cd2: fdiv dword ptr [0x903ae4] */ ST(0) = ST(0) / R_F32((u32)(0x903ae4u));
    /* 004a8cd8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a8cda: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a8cdc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004a8ce0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004a8ce5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8cea: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a8cee: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004a8cf2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a8cf6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a8cfa: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004a8cfe: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 004a8d02: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a8d05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8d06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8d07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a8d08: ret 8 */ FN_RET(0x004a8c9c); r_esp += 12; return;
}

void f_004a8d0c(void) /* sub_4A8D0C */
{
    FN_ENTER(0x004a8d0c);
    /* 004a8d0c: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 004a8d12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a8d15: je 0x4a8d4b */ if (fZ) goto L_004a8d4b;
L_004a8d17:; BB(0x004a8d17);
    /* 004a8d17: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a8d1a: jne 0x4a8d2c */ if (!fZ) goto L_004a8d2c;
L_004a8d1c:; BB(0x004a8d1c);
    /* 004a8d1c: mov eax, dword ptr [ecx + 0x780] */ r_eax = R32((u32)(r_ecx+0x780u));
    /* 004a8d22: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004a8d25: mov dword ptr [ecx + 0x77c], edx */ W32((u32)(r_ecx+0x77cu), r_edx);
    /* 004a8d2b: ret  */ FN_RET(0x004a8d0c); r_esp += 4; return;
L_004a8d2c:; BB(0x004a8d2c);
    /* 004a8d2c: mov edx, dword ptr [ecx + 0x780] */ r_edx = R32((u32)(r_ecx+0x780u));
    /* 004a8d32: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a8d35: jne 0x4a8d41 */ if (!fZ) goto L_004a8d41;
L_004a8d37:; BB(0x004a8d37);
    /* 004a8d37: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004a8d3a: mov dword ptr [ecx + 0x77c], eax */ W32((u32)(r_ecx+0x77cu), r_eax);
    /* 004a8d40: ret  */ FN_RET(0x004a8d0c); r_esp += 4; return;
L_004a8d41:; BB(0x004a8d41);
    /* 004a8d41: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004a8d44: mov dword ptr [ecx + 0x77c], eax */ W32((u32)(r_ecx+0x77cu), r_eax);
    /* 004a8d4a: ret  */ FN_RET(0x004a8d0c); r_esp += 4; return;
L_004a8d4b:; BB(0x004a8d4b);
    /* 004a8d4b: mov eax, dword ptr [ecx + 0x780] */ r_eax = R32((u32)(r_ecx+0x780u));
    /* 004a8d51: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a8d54: mov dword ptr [ecx + 0x77c], edx */ W32((u32)(r_ecx+0x77cu), r_edx);
    /* 004a8d5a: ret  */ FN_RET(0x004a8d0c); r_esp += 4; return;
}

void f_004a8d5c(void) /* sub_4A8D5C */
{
    FN_ENTER(0x004a8d5c);
    /* 004a8d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8d5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8d5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8d5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8d60: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8d63: mov edi, ecx */ r_edi = r_ecx;
    /* 004a8d65: mov eax, dword ptr [edi + 0x780] */ r_eax = R32((u32)(r_edi+0x780u));
    /* 004a8d6b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8d6d: mov byte ptr [esp], 0xa0 */ W8((u32)(r_esp), 0xa0u);
    /* 004a8d71: mov byte ptr [esp + 1], 0xa */ W8((u32)(r_esp+0x1u), 0xau);
    /* 004a8d76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a8d78: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a8d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8d7c: mov dword ptr [edi + 0x77c], edx */ W32((u32)(r_edi+0x77cu), r_edx);
    /* 004a8d82: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a8d87u); f_004a8e24();
    /* 004a8d87: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a8d8d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8d8f: je 0x4a8e11 */ if (fZ) goto L_004a8e11;
L_004a8d95:; BB(0x004a8d95);
    /* 004a8d95: lea ebp, [esp + 0x14] */ r_ebp = (u32)(r_esp+0x14u);
L_004a8d99:; BB(0x004a8d99);
    /* 004a8d99: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 004a8d9b: cmp ebx, 0x21 */ {  u32 a = r_ebx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8d9e: jne 0x4a8db0 */ if (!fZ) goto L_004a8db0;
L_004a8da0:; BB(0x004a8da0);
    /* 004a8da0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8da1: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8da3: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a8da8u); f_004a771c();
    /* 004a8da8: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a8dae: jmp 0x4a8d99 */ goto L_004a8d99;
L_004a8db0:; BB(0x004a8db0);
    /* 004a8db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8db1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8db2: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8db4: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a8db9u); f_004a8c9c();
    /* 004a8db9: mov eax, dword ptr [ebx*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebx*8+0x9a7f60u));
    /* 004a8dc0: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8dc6: je 0x4a8dfc */ if (fZ) goto L_004a8dfc;
L_004a8dc8:; BB(0x004a8dc8);
    /* 004a8dc8: mov ecx, dword ptr [ebx*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebx*8+0x9a7f64u));
L_004a8dcf:; BB(0x004a8dcf);
    /* 004a8dcf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a8dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8dd1: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a8dd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a8dd5u); call_ind(t); }
L_004a8dd5:; BB(0x004a8dd5);
    /* 004a8dd5: cmp ebx, 0x22 */ {  u32 a = r_ebx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8dd8: je 0x4a8de9 */ if (fZ) goto L_004a8de9;
L_004a8dda:; BB(0x004a8dda);
    /* 004a8dda: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 004a8de0: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a8de3: mov dword ptr [edi + 0x77c], eax */ W32((u32)(r_edi+0x77cu), r_eax);
L_004a8de9:; BB(0x004a8de9);
    /* 004a8de9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a8dec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8ded: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8def: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a8df4u); f_004a7b28();
    /* 004a8df4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a8df7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8df8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8df9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a8dfa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a8dfb: ret  */ FN_RET(0x004a8d5c); r_esp += 4; return;
L_004a8dfc:; BB(0x004a8dfc);
    /* 004a8dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8dfe: je 0x4a8dd5 */ if (fZ) goto L_004a8dd5;
L_004a8e00:; BB(0x004a8e00);
    /* 004a8e00: mov ecx, dword ptr [ebx*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebx*8+0x9a7f64u));
    /* 004a8e07: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8e0d: je 0x4a8dd5 */ if (fZ) goto L_004a8dd5;
L_004a8e0f:; BB(0x004a8e0f);
    /* 004a8e0f: jmp 0x4a8dcf */ goto L_004a8dcf;
L_004a8e11:; BB(0x004a8e11);
    /* 004a8e11: mov ecx, edi */ r_ecx = r_edi;
    /* 004a8e13: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a8e18u); f_004a8d0c();
    /* 004a8e18: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a8e1e: jmp 0x4a8d95 */ goto L_004a8d95;
}

void f_004a8e24(void) /* sub_4A8E24 */
{
    FN_ENTER(0x004a8e24);
    /* 004a8e24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a8e28: lea ecx, [eax + 0x14] */ r_ecx = (u32)(r_eax+0x14u);
    /* 004a8e2b: call 0x4aa758 */ r_esp -= 4; W32(r_esp, 0x4a8e30u); f_004aa758();
    /* 004a8e30: ret 4 */ FN_RET(0x004a8e24); r_esp += 8; return;
}

void f_004a8e34(void) /* sub_4A8E34 */
{
    FN_ENTER(0x004a8e34);
    /* 004a8e34: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a8e38: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a8e3b: ja 0x4a8e46 */ if ((!fC&&!fZ)) goto L_004a8e46;
L_004a8e3d:; BB(0x004a8e3d);
    /* 004a8e3d: mov eax, dword ptr [eax*4 + 0x9039a8] */ r_eax = R32((u32)(r_eax*4+0x9039a8u));
    /* 004a8e44: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004a8e46:; BB(0x004a8e46);
    /* 004a8e46: ret 4 */ FN_RET(0x004a8e34); r_esp += 8; return;
}

void f_004a8e46(void)
{
    FN_ENTER(0x004a8e46);
    /* 004a8e46: ret 4 */ FN_RET(0x004a8e46); r_esp += 8; return;
}

void f_004a8e4c(void) /* sub_4A8E4C */
{
    FN_ENTER(0x004a8e4c);
    /* 004a8e4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a8e4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a8e51: call 0x4a8e70 */ r_esp -= 4; W32(r_esp, 0x4a8e56u); f_004a8e70();
    /* 004a8e56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a8e5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8e5c: jne 0x4a8e62 */ if (!fZ) goto L_004a8e62;
L_004a8e5e:; BB(0x004a8e5e);
    /* 004a8e5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8e5f: ret 4 */ FN_RET(0x004a8e4c); r_esp += 8; return;
L_004a8e62:; BB(0x004a8e62);
    /* 004a8e62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a8e68u); f_005c2f74();
    /* 004a8e68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a8e69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a8e6a: ret 4 */ FN_RET(0x004a8e4c); r_esp += 8; return;
}

void f_004a8e70(void) /* sub_4A8E70 */
{
    FN_ENTER(0x004a8e70);
    /* 004a8e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e71: mov ebp, esp */ r_ebp = r_esp;
    /* 004a8e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e75: push 0x8d0584 */ { u32 v = 0x8d0584u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a8e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a8e88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a8e8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a8e91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a8e94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a8e97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004a8e9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a8ea1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a8ea4: mov dword ptr [eax], 0xaf9f88 */ W32((u32)(r_eax), 0xaf9f88u);
    /* 004a8eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8eab: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x4a8eb0u); f_007b4e84();
    /* 004a8eb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a8eb1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a8eb4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4a8eb9u); f_007b9c8c();
    /* 004a8eb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a8ec0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a8ec3: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x4a8ec8u); f_007b4aec();
    /* 004a8ec8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a8ecb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a8ed2: mov esp, ebp */ r_esp = r_ebp;
    /* 004a8ed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8ed5: ret  */ FN_RET(0x004a8e70); r_esp += 4; return;
}

void f_004a8ed8(void) /* sub_4A8ED8 */
{
    FN_ENTER(0x004a8ed8);
    /* 004a8ed8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8ed9: mov ebp, esp */ r_ebp = r_esp;
    /* 004a8edb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a8edd: push 0x8d05a0 */ { u32 v = 0x8d05a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8ee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a8ee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8ee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a8ef0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8ef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a8ef6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a8ef9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a8efc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a8eff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a8f02: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004a8f05: mov eax, ecx */ r_eax = r_ecx;
    /* 004a8f07: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004a8f0a: mov dword ptr [eax], 0xaf9fb8 */ W32((u32)(r_eax), 0xaf9fb8u);
    /* 004a8f10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8f12: je 0x4a8f2a */ if (fZ) goto L_004a8f2a;
L_004a8f14:; BB(0x004a8f14);
    /* 004a8f14: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004a8f18: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a8f1d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004a8f21: mov edx, ecx */ r_edx = r_ecx;
    /* 004a8f23: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_004a8f2a:; BB(0x004a8f2a);
    /* 004a8f2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a8f31: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4a8f36u); f_008171e8();
    /* 004a8f36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a8f39: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8f3b: jne 0x4a8f4d */ if (!fZ) goto L_004a8f4d;
L_004a8f3d:; BB(0x004a8f3d);
    /* 004a8f3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a8f40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a8f47: mov esp, ebp */ r_esp = r_ebp;
    /* 004a8f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8f4a: ret 4 */ FN_RET(0x004a8ed8); r_esp += 8; return;
L_004a8f4d:; BB(0x004a8f4d);
    /* 004a8f4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a8f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8f51: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4a8f56u); f_005c2f74();
    /* 004a8f56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a8f57: jmp 0x4a8f3d */ goto L_004a8f3d;
}

void f_004a8f5c(void) /* sub_4A8F5C */
{
    FN_ENTER(0x004a8f5c);
    /* 004a8f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a8f5d: mov ebp, esp */ r_ebp = r_esp;
    /* 004a8f5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a8f61: push 0x8d05ec */ { u32 v = 0x8d05ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004a8f66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a8f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a8f6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a8f74: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a8f77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a8f7a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004a8f7d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004a8f80: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004a8f83: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a8f86: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004a8f89: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4a8f8eu); f_008193cc();
    /* 004a8f8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a8f95: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004a8f98: mov dword ptr [edx], 0xaf9fb8 */ W32((u32)(r_edx), 0xaf9fb8u);
    /* 004a8f9e: mov eax, dword ptr [0x9a8164] */ r_eax = R32((u32)(0x9a8164u));
    /* 004a8fa3: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004a8faa: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8faf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a8fb2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a8fb7u); f_005caba4();
    /* 004a8fb7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004a8fba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a8fbd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004a8fc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8fc2: je 0x4a916b */ if (fZ) goto L_004a916b;
L_004a8fc8:; BB(0x004a8fc8);
    /* 004a8fc8: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004a8fcf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004a8fd6: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a8fd9: mov ecx, eax */ r_ecx = r_eax;
    /* 004a8fdb: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004a8fde: mov dword ptr [ebp - 0x48], 0x420c0000 */ W32((u32)(r_ebp+0xffffffb8u), 0x420c0000u);
    /* 004a8fe5: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4a8feau); f_007b4b48();
    /* 004a8fea: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004a8ff1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a8ff4: mov dword ptr [edx], 0xaf9f88 */ W32((u32)(r_edx), 0xaf9f88u);
    /* 004a8ffa: mov eax, dword ptr [0x9a8160] */ r_eax = R32((u32)(0x9a8160u));
    /* 004a8fff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a9001: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004a9004: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4a9009u); f_007ba898();
    /* 004a9009: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a900c: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 004a9016: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004a901a: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 004a9024: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a9026: mov dword ptr [edx + 0xb4], 0x41f00000 */ W32((u32)(r_edx+0xb4u), 0x41f00000u);
    /* 004a9030: mov dword ptr [edx + 0xa8], 1 */ W32((u32)(r_edx+0xa8u), 0x1u);
    /* 004a903a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4a903fu); f_008581c5();
    /* 004a903f: mov esi, eax */ r_esi = r_eax;
    /* 004a9041: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9044: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a9047: mov ecx, dword ptr [ebx + 0xa8] */ r_ecx = R32((u32)(r_ebx+0xa8u));
    /* 004a904d: mov dword ptr [ebx + 0xa4], esi */ W32((u32)(r_ebx+0xa4u), r_esi);
    /* 004a9053: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 004a9056: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9058: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a905a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004a905d: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004a9060: fmul dword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffb8u));
    /* 004a9063: jle 0x8d05e5 */ if ((fZ||fS!=fO)) goto L_008d05e5;
L_004a9069:; BB(0x004a9069);
    /* 004a9069: mov edx, dword ptr [0x9a8174] */ r_edx = R32((u32)(0x9a8174u));
    /* 004a906f: mov ecx, dword ptr [0x9a8178] */ r_ecx = R32((u32)(0x9a8178u));
    /* 004a9075: mov edi, dword ptr [0x9a8184] */ r_edi = R32((u32)(0x9a8184u));
    /* 004a907b: mov eax, dword ptr [0x9a8188] */ r_eax = R32((u32)(0x9a8188u));
    /* 004a9080: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004a9083: mov edx, dword ptr [0x9a817c] */ r_edx = R32((u32)(0x9a817cu));
    /* 004a9089: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 004a908c: mov edi, dword ptr [0x9a818c] */ r_edi = R32((u32)(0x9a818cu));
    /* 004a9092: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a9095: mov edi, dword ptr [0x9a8190] */ r_edi = R32((u32)(0x9a8190u));
    /* 004a909b: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_004a909e:; BB(0x004a909e);
    /* 004a909e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a90a1: fst dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0));
    /* 004a90a4: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 004a90a7: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004a90aa: mov dword ptr [esi + 0x18], 0x10003 */ W32((u32)(r_esi+0x18u), 0x10003u);
    /* 004a90b1: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004a90b4: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004a90b7: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 004a90ba: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a90bd: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004a90c0: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 004a90c3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a90c6: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
    /* 004a90c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a90cb: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 004a90cd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004a90cf: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004a90d2: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 004a90d5: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 004a90d8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a90db: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 004a90de: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004a90e0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004a90e2: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a90e5: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a90e8: cmp ebx, dword ptr [edi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a90ee: jl 0x4a909e */ if ((fS!=fO)) goto L_004a909e;
L_004a90f0:; BB(0x004a90f0);
    /* 004a90f0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004a90f2:; BB(0x004a90f2);
    /* 004a90f2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a90f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a90f6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4a90fbu); f_007b999c();
    /* 004a90fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a90fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a90ff: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4a9104u); f_007b4d98();
    /* 004a9104: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a9107: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a910a: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 004a9110: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a9112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a9114: jle 0x4a9142 */ if ((fZ||fS!=fO)) goto L_004a9142;
L_004a9116:; BB(0x004a9116);
    /* 004a9116: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a9119: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 004a911f: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004a9122: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9124: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9126: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a9128: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a912a: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004a912c: mov edx, dword ptr [ecx + ebx*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x18u));
    /* 004a9130: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a9133: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a9136: mov dword ptr [ecx + ebx*4 + 0x18], edx */ W32((u32)(r_ecx+r_ebx*4+0x18u), r_edx);
    /* 004a913a: cmp eax, dword ptr [esi + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a9140: jl 0x4a9116 */ if ((fS!=fO)) goto L_004a9116;
L_004a9142:; BB(0x004a9142);
    /* 004a9142: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004a9149:; BB(0x004a9149);
    /* 004a9149: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004a914c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a914f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a9152: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004a9155: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004a9158: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004a915b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a915e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a9165: mov esp, ebp */ r_esp = r_ebp;
    /* 004a9167: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a9168: ret 4 */ FN_RET(0x004a8f5c); r_esp += 8; return;
L_004a916b:; BB(0x004a916b);
    /* 004a916b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a916d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004a9170: jmp 0x4a9149 */ goto L_004a9149;
L_008d05e5:; BB(0x008d05e5);
    /* 008d05e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d05e7: jmp 0x4a90f2 */ goto L_004a90f2;
}

