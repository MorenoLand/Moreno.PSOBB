#include "protos.h"

void f_00439024(void) /* sub_439024 */
{
    FN_ENTER(0x00439024);
    /* 00439024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00439025: mov edi, ecx */ r_edi = r_ecx;
    /* 00439027: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0043902c: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043902e: je 0x439032 */ if (fZ) goto L_00439032;
L_00439030:; BB(0x00439030);
    /* 00439030: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00439031: ret  */ FN_RET(0x00439024); r_esp += 4; return;
L_00439032:; BB(0x00439032);
    /* 00439032: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x439037u); f_0082fa9c();
    /* 00439037: mov ecx, dword ptr [0xa44214] */ r_ecx = R32((u32)(0xa44214u));
    /* 0043903d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x439042u); f_00829cc8();
    /* 00439042: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x439047u); f_0082d7b0();
    /* 00439047: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0043904a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043904c: je 0x439372 */ if (fZ) goto L_00439372;
L_00439052:; BB(0x00439052);
    /* 00439052: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439055: je 0x439325 */ if (fZ) goto L_00439325;
L_0043905b:; BB(0x0043905b);
    /* 0043905b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043905e: jge 0x439320 */ if ((fS==fO)) goto L_00439320;
L_00439064:; BB(0x00439064);
    /* 00439064: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439067: jne 0x4390a1 */ if (!fZ) goto L_004390a1;
L_00439069:; BB(0x00439069);
    /* 00439069: mov edx, dword ptr [edi + 0x110] */ r_edx = R32((u32)(r_edi+0x110u));
    /* 0043906f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439071: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x439076u); f_00831308();
    /* 00439076: mov edx, dword ptr [edi + 0x120] */ r_edx = R32((u32)(r_edi+0x120u));
    /* 0043907c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043907e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x439083u); f_0082e9e4();
    /* 00439083: mov edx, dword ptr [edi + 0x11c] */ r_edx = R32((u32)(r_edi+0x11cu));
    /* 00439089: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043908b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x439090u); f_0082d8bc();
    /* 00439090: push dword ptr [0xa4421c] */ { u32 v = R32((u32)(0xa4421cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00439096: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x43909bu); f_0082e1e8();
    /* 0043909b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043909c: jmp 0x439366 */ goto L_00439366;
L_004390a1:; BB(0x004390a1);
    /* 004390a1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004390a4: jne 0x439366 */ if (!fZ) goto L_00439366;
L_004390aa:; BB(0x004390aa);
    /* 004390aa: lea ecx, [edi + 0x140] */ r_ecx = (u32)(r_edi+0x140u);
    /* 004390b0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4390b5u); f_0082d838();
    /* 004390b5: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004390ba: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004390bf: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004390c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004390c6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4390cbu); f_0082fa0c();
    /* 004390cb: mov edx, dword ptr [edi + 0x11c] */ r_edx = R32((u32)(r_edi+0x11cu));
    /* 004390d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004390d3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4390d8u); f_0082d8bc();
    /* 004390d8: mov edx, dword ptr [edi + 0x120] */ r_edx = R32((u32)(r_edi+0x120u));
    /* 004390de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004390e0: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4390e5u); f_00830c04();
    /* 004390e5: push 0xa43ec0 */ { u32 v = 0xa43ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 004390ea: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004390ed: mov dword ptr [0xa43ec8], eax */ W32((u32)(0xa43ec8u), r_eax);
    /* 004390f2: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 004390f5: mov dword ptr [0xa43ecc], edx */ W32((u32)(0xa43eccu), r_edx);
    /* 004390fb: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004390fe: mov dword ptr [0xa43ed0], eax */ W32((u32)(0xa43ed0u), r_eax);
    /* 00439103: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 00439109: mov dword ptr [0xa43edc], eax */ W32((u32)(0xa43edcu), r_eax);
    /* 0043910e: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00439111: mov dword ptr [0xa43f00], eax */ W32((u32)(0xa43f00u), r_eax);
    /* 00439116: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00439119: mov dword ptr [0xa43f04], eax */ W32((u32)(0xa43f04u), r_eax);
    /* 0043911e: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00439121: mov dword ptr [0xa43f08], eax */ W32((u32)(0xa43f08u), r_eax);
    /* 00439126: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 0043912c: mov dword ptr [0xa43f14], eax */ W32((u32)(0xa43f14u), r_eax);
    /* 00439131: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00439134: mov dword ptr [0xa43f38], eax */ W32((u32)(0xa43f38u), r_eax);
    /* 00439139: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 0043913c: mov dword ptr [0xa43f3c], eax */ W32((u32)(0xa43f3cu), r_eax);
    /* 00439141: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00439144: mov dword ptr [0xa43f40], eax */ W32((u32)(0xa43f40u), r_eax);
    /* 00439149: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 0043914f: mov dword ptr [0xa43f4c], eax */ W32((u32)(0xa43f4cu), r_eax);
    /* 00439154: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 00439157: mov dword ptr [0xa43f70], eax */ W32((u32)(0xa43f70u), r_eax);
    /* 0043915c: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 0043915f: mov dword ptr [0xa43f74], eax */ W32((u32)(0xa43f74u), r_eax);
    /* 00439164: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 00439167: mov dword ptr [0xa43f78], eax */ W32((u32)(0xa43f78u), r_eax);
    /* 0043916c: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 00439172: mov dword ptr [0xa43f84], eax */ W32((u32)(0xa43f84u), r_eax);
    /* 00439177: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0043917a: mov dword ptr [0xa43fa8], eax */ W32((u32)(0xa43fa8u), r_eax);
    /* 0043917f: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 00439182: mov dword ptr [0xa43fac], eax */ W32((u32)(0xa43facu), r_eax);
    /* 00439187: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 0043918a: mov dword ptr [0xa43fb0], eax */ W32((u32)(0xa43fb0u), r_eax);
    /* 0043918f: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 00439195: mov dword ptr [0xa43fbc], eax */ W32((u32)(0xa43fbcu), r_eax);
    /* 0043919a: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 0043919d: mov dword ptr [0xa43fe0], eax */ W32((u32)(0xa43fe0u), r_eax);
    /* 004391a2: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 004391a5: mov dword ptr [0xa43fe4], eax */ W32((u32)(0xa43fe4u), r_eax);
    /* 004391aa: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 004391ad: mov dword ptr [0xa43fe8], eax */ W32((u32)(0xa43fe8u), r_eax);
    /* 004391b2: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 004391b8: mov dword ptr [0xa43ff4], eax */ W32((u32)(0xa43ff4u), r_eax);
    /* 004391bd: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 004391c0: mov dword ptr [0xa44018], eax */ W32((u32)(0xa44018u), r_eax);
    /* 004391c5: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 004391c8: mov dword ptr [0xa4401c], eax */ W32((u32)(0xa4401cu), r_eax);
    /* 004391cd: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 004391d3: mov dword ptr [0xa44020], eax */ W32((u32)(0xa44020u), r_eax);
    /* 004391d8: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 004391de: mov dword ptr [0xa4402c], eax */ W32((u32)(0xa4402cu), r_eax);
    /* 004391e3: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 004391e9: mov dword ptr [0xa44050], eax */ W32((u32)(0xa44050u), r_eax);
    /* 004391ee: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 004391f4: mov dword ptr [0xa44054], eax */ W32((u32)(0xa44054u), r_eax);
    /* 004391f9: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 004391ff: mov dword ptr [0xa44058], eax */ W32((u32)(0xa44058u), r_eax);
    /* 00439204: mov eax, dword ptr [edi + 0xf4] */ r_eax = R32((u32)(r_edi+0xf4u));
    /* 0043920a: mov dword ptr [0xa44064], eax */ W32((u32)(0xa44064u), r_eax);
    /* 0043920f: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00439215: mov dword ptr [0xa44088], eax */ W32((u32)(0xa44088u), r_eax);
    /* 0043921a: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 00439220: mov dword ptr [0xa4408c], eax */ W32((u32)(0xa4408cu), r_eax);
    /* 00439225: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 0043922b: mov dword ptr [0xa44090], eax */ W32((u32)(0xa44090u), r_eax);
    /* 00439230: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 00439236: mov dword ptr [0xa4409c], eax */ W32((u32)(0xa4409cu), r_eax);
    /* 0043923b: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00439241: mov dword ptr [0xa440c0], eax */ W32((u32)(0xa440c0u), r_eax);
    /* 00439246: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 0043924c: mov dword ptr [0xa440c4], eax */ W32((u32)(0xa440c4u), r_eax);
    /* 00439251: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00439257: mov dword ptr [0xa440c8], eax */ W32((u32)(0xa440c8u), r_eax);
    /* 0043925c: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 00439262: mov dword ptr [0xa440d4], eax */ W32((u32)(0xa440d4u), r_eax);
    /* 00439267: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 0043926d: mov dword ptr [0xa440f8], eax */ W32((u32)(0xa440f8u), r_eax);
    /* 00439272: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00439278: mov dword ptr [0xa440fc], eax */ W32((u32)(0xa440fcu), r_eax);
    /* 0043927d: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00439283: mov dword ptr [0xa44100], eax */ W32((u32)(0xa44100u), r_eax);
    /* 00439288: mov eax, dword ptr [edi + 0x100] */ r_eax = R32((u32)(r_edi+0x100u));
    /* 0043928e: mov dword ptr [0xa4410c], eax */ W32((u32)(0xa4410cu), r_eax);
    /* 00439293: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00439299: mov dword ptr [0xa44130], eax */ W32((u32)(0xa44130u), r_eax);
    /* 0043929e: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 004392a4: mov dword ptr [0xa44134], eax */ W32((u32)(0xa44134u), r_eax);
    /* 004392a9: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 004392af: mov dword ptr [0xa44138], eax */ W32((u32)(0xa44138u), r_eax);
    /* 004392b4: mov eax, dword ptr [edi + 0x104] */ r_eax = R32((u32)(r_edi+0x104u));
    /* 004392ba: mov dword ptr [0xa44144], eax */ W32((u32)(0xa44144u), r_eax);
    /* 004392bf: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 004392c5: mov dword ptr [0xa44168], eax */ W32((u32)(0xa44168u), r_eax);
    /* 004392ca: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 004392d0: mov dword ptr [0xa4416c], eax */ W32((u32)(0xa4416cu), r_eax);
    /* 004392d5: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 004392db: mov dword ptr [0xa44170], eax */ W32((u32)(0xa44170u), r_eax);
    /* 004392e0: mov eax, dword ptr [edi + 0x108] */ r_eax = R32((u32)(r_edi+0x108u));
    /* 004392e6: mov dword ptr [0xa4417c], eax */ W32((u32)(0xa4417cu), r_eax);
    /* 004392eb: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 004392f1: mov dword ptr [0xa441a0], eax */ W32((u32)(0xa441a0u), r_eax);
    /* 004392f6: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 004392fc: mov dword ptr [0xa441a4], eax */ W32((u32)(0xa441a4u), r_eax);
    /* 00439301: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 00439307: mov dword ptr [0xa441a8], eax */ W32((u32)(0xa441a8u), r_eax);
    /* 0043930c: mov ecx, dword ptr [edi + 0x10c] */ r_ecx = R32((u32)(r_edi+0x10cu));
    /* 00439312: mov dword ptr [0xa441b4], ecx */ W32((u32)(0xa441b4u), r_ecx);
    /* 00439318: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x43931du); f_0082e1e8();
    /* 0043931d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043931e: jmp 0x439366 */ goto L_00439366;
L_00439320:; BB(0x00439320);
    /* 00439320: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439323: jg 0x439366 */ if ((!fZ&&fS==fO)) goto L_00439366;
L_00439325:; BB(0x00439325);
    /* 00439325: mov edx, dword ptr [edi + 0x110] */ r_edx = R32((u32)(r_edi+0x110u));
    /* 0043932b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043932d: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x439332u); f_00831308();
    /* 00439332: mov edx, dword ptr [edi + 0x120] */ r_edx = R32((u32)(r_edi+0x120u));
    /* 00439338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043933a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43933fu); f_0082e9e4();
    /* 0043933f: mov edx, dword ptr [edi + 0x11c] */ r_edx = R32((u32)(r_edi+0x11cu));
    /* 00439345: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439347: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43934cu); f_0082d8bc();
    /* 0043934c: push dword ptr [edi + 0x114] */ { u32 v = R32((u32)(r_edi+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439352: push dword ptr [0xa44218] */ { u32 v = R32((u32)(0xa44218u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439358: push dword ptr [0xa4421c] */ { u32 v = R32((u32)(0xa4421cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043935e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x439363u); f_0083046c();
    /* 00439363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00439366:; BB(0x00439366);
    /* 00439366: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43936bu); f_0082da80();
    /* 0043936b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x439370u); f_0082faac();
    /* 00439370: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00439371: ret  */ FN_RET(0x00439024); r_esp += 4; return;
L_00439372:; BB(0x00439372);
    /* 00439372: mov edx, dword ptr [edi + 0x110] */ r_edx = R32((u32)(r_edi+0x110u));
    /* 00439378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043937a: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x43937fu); f_00831308();
    /* 0043937f: mov edx, dword ptr [edi + 0x11c] */ r_edx = R32((u32)(r_edi+0x11cu));
    /* 00439385: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439387: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43938cu); f_0082d8bc();
    /* 0043938c: push dword ptr [edi + 0x114] */ { u32 v = R32((u32)(r_edi+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439392: push dword ptr [0xa44218] */ { u32 v = R32((u32)(0xa44218u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439398: push dword ptr [0xa4421c] */ { u32 v = R32((u32)(0xa4421cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043939e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4393a3u); f_0083046c();
    /* 004393a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004393a6: jmp 0x439366 */ goto L_00439366;
}

void f_004393a8(void) /* sub_4393A8 */
{
    FN_ENTER(0x004393a8);
    /* 004393a8: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 004393af: ret  */ FN_RET(0x004393a8); r_esp += 4; return;
}

void f_004393b0(void) /* sub_4393B0 */
{
    FN_ENTER(0x004393b0);
    /* 004393b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004393b4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004393b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004393ba: jle 0x4393c4 */ if ((fZ||fS!=fO)) goto L_004393c4;
L_004393bc:; BB(0x004393bc);
    /* 004393bc: cmp edx, 0x258 */ {  u32 a = r_edx; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004393c2: jl 0x4393c9 */ if ((fS!=fO)) goto L_004393c9;
L_004393c4:; BB(0x004393c4);
    /* 004393c4: mov edx, 0x78 */ r_edx = 0x78u;
L_004393c9:; BB(0x004393c9);
    /* 004393c9: mov dword ptr [ecx + 0x154], edx */ W32((u32)(r_ecx+0x154u), r_edx);
    /* 004393cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004393d1: mov dword ptr [ecx + 0x12c], edx */ W32((u32)(r_ecx+0x12cu), r_edx);
    /* 004393d7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004393da: mov dword ptr [ecx + 0x130], edx */ W32((u32)(r_ecx+0x130u), r_edx);
    /* 004393e0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004393e3: mov dword ptr [ecx + 0x20], 2 */ W32((u32)(r_ecx+0x20u), 0x2u);
    /* 004393ea: mov dword ptr [ecx + 0x134], eax */ W32((u32)(r_ecx+0x134u), r_eax);
    /* 004393f0: ret 8 */ FN_RET(0x004393b0); r_esp += 12; return;
}

void f_004393f4(void) /* sub_4393F4 */
{
    FN_ENTER(0x004393f4);
    /* 004393f4: mov dword ptr [ecx + 0x20], 5 */ W32((u32)(r_ecx+0x20u), 0x5u);
    /* 004393fb: ret  */ FN_RET(0x004393f4); r_esp += 4; return;
}

void f_004393fc(void) /* sub_4393FC */
{
    FN_ENTER(0x004393fc);
    /* 004393fc: mov eax, dword ptr [0xa441d8] */ r_eax = R32((u32)(0xa441d8u));
    /* 00439401: mov dword ptr [ecx + 0x118], eax */ W32((u32)(r_ecx+0x118u), r_eax);
    /* 00439407: mov dword ptr [ecx + 0x124], 0xbde */ W32((u32)(r_ecx+0x124u), 0xbdeu);
    /* 00439411: ret  */ FN_RET(0x004393fc); r_esp += 4; return;
}

void f_00439414(void) /* sub_439414 */
{
    FN_ENTER(0x00439414);
    /* 00439414: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00439417: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043941a: mov eax, 0 */ r_eax = 0x0u;
    /* 0043941f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439422: ret  */ FN_RET(0x00439414); r_esp += 4; return;
}

void f_00439424(void) /* sub_439424 */
{
    FN_ENTER(0x00439424);
    /* 00439424: mov dword ptr [0xa441d0], 0x3f000000 */ W32((u32)(0xa441d0u), 0x3f000000u);
    /* 0043942e: mov dword ptr [0xa441d4], 0x44aaaaab */ W32((u32)(0xa441d4u), 0x44aaaaabu);
    /* 00439438: mov dword ptr [0xa441d8], 0x3fcccccd */ W32((u32)(0xa441d8u), 0x3fcccccdu);
    /* 00439442: ret  */ FN_RET(0x00439424); r_esp += 4; return;
}

void f_00439444(void) /* sub_439444 */
{
    FN_ENTER(0x00439444);
    /* 00439444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439445: mov ecx, dword ptr [0xa43d28] */ r_ecx = R32((u32)(0xa43d28u));
    /* 0043944b: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00439451: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00439454: mov ecx, dword ptr [ecx + 0x430] */ r_ecx = R32((u32)(r_ecx+0x430u));
    /* 0043945a: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 00439460: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00439463: mov dword ptr [0xa4421c], edx */ W32((u32)(0xa4421cu), r_edx);
    /* 00439469: mov ebx, 0xa43ec0 */ r_ebx = 0xa43ec0u;
    /* 0043946e: mov dword ptr [0xa44218], ecx */ W32((u32)(0xa44218u), r_ecx);
    /* 00439474: mov dword ptr [0xa44214], eax */ W32((u32)(0xa44214u), r_eax);
    /* 00439479: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0043947b:; BB(0x0043947b);
    /* 0043947b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043947d: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0043947f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00439482: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00439485: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00439488: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0043948b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0043948e: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00439491: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00439494: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00439497: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0043949a: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 0043949d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004394a0: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 004394a3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004394a6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004394a9: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004394ac: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 004394af: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004394b2: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004394b5: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004394b8: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 004394bb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004394be: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 004394c1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004394c4: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004394c7: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 004394ca: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004394cd: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004394d0: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 004394d3: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 004394d6: mov ebx, eax */ r_ebx = r_eax;
    /* 004394d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004394db: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004394de: jl 0x43947b */ if ((fS!=fO)) goto L_0043947b;
L_004394e0:; BB(0x004394e0);
    /* 004394e0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004394e2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004394e4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004394e7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004394ea: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004394ed: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004394f0: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004394f3: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 004394f6: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004394f9: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004394fc: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004394ff: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00439502: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00439505: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00439508: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0043950b: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0043950e: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00439511: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00439514: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00439517: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0043951a: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0043951d: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00439520: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00439523: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00439526: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00439529: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0043952c: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0043952f: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00439532: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00439535: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00439538: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043953b: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0043953d: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 00439540: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00439543: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00439546: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00439549: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0043954c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043954f: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00439552: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00439555: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00439558: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0043955b: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 0043955e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00439561: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 00439564: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00439567: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0043956a: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0043956d: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 00439570: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00439573: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 00439576: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00439579: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 0043957c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0043957f: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00439582: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00439585: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 00439588: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 0043958b: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0043958e: mov eax, dword ptr [0xa43ec0] */ r_eax = R32((u32)(0xa43ec0u));
    /* 00439593: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439596: mov dword ptr [0xa43ec0], eax */ W32((u32)(0xa43ec0u), r_eax);
    /* 0043959b: mov eax, dword ptr [0xa43ec8] */ r_eax = R32((u32)(0xa43ec8u));
    /* 004395a0: mov dword ptr [0xa43e00], eax */ W32((u32)(0xa43e00u), r_eax);
    /* 004395a5: mov eax, dword ptr [0xa43ecc] */ r_eax = R32((u32)(0xa43eccu));
    /* 004395aa: mov dword ptr [0xa43e04], eax */ W32((u32)(0xa43e04u), r_eax);
    /* 004395af: mov eax, dword ptr [0xa43ed0] */ r_eax = R32((u32)(0xa43ed0u));
    /* 004395b4: mov dword ptr [0xa43e08], eax */ W32((u32)(0xa43e08u), r_eax);
    /* 004395b9: mov eax, dword ptr [0xa43edc] */ r_eax = R32((u32)(0xa43edcu));
    /* 004395be: mov dword ptr [0xa441dc], eax */ W32((u32)(0xa441dcu), r_eax);
    /* 004395c3: mov eax, dword ptr [0xa43ef8] */ r_eax = R32((u32)(0xa43ef8u));
    /* 004395c8: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004395cb: mov dword ptr [0xa43ef8], eax */ W32((u32)(0xa43ef8u), r_eax);
    /* 004395d0: mov eax, dword ptr [0xa43f00] */ r_eax = R32((u32)(0xa43f00u));
    /* 004395d5: mov dword ptr [0xa43e0c], eax */ W32((u32)(0xa43e0cu), r_eax);
    /* 004395da: mov eax, dword ptr [0xa43f04] */ r_eax = R32((u32)(0xa43f04u));
    /* 004395df: mov dword ptr [0xa43e10], eax */ W32((u32)(0xa43e10u), r_eax);
    /* 004395e4: mov eax, dword ptr [0xa43f08] */ r_eax = R32((u32)(0xa43f08u));
    /* 004395e9: mov dword ptr [0xa43e14], eax */ W32((u32)(0xa43e14u), r_eax);
    /* 004395ee: mov eax, dword ptr [0xa43f14] */ r_eax = R32((u32)(0xa43f14u));
    /* 004395f3: mov dword ptr [0xa441e0], eax */ W32((u32)(0xa441e0u), r_eax);
    /* 004395f8: mov eax, dword ptr [0xa43f30] */ r_eax = R32((u32)(0xa43f30u));
    /* 004395fd: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439600: mov dword ptr [0xa43f30], eax */ W32((u32)(0xa43f30u), r_eax);
    /* 00439605: mov eax, dword ptr [0xa43f38] */ r_eax = R32((u32)(0xa43f38u));
    /* 0043960a: mov dword ptr [0xa43e18], eax */ W32((u32)(0xa43e18u), r_eax);
    /* 0043960f: mov eax, dword ptr [0xa43f3c] */ r_eax = R32((u32)(0xa43f3cu));
    /* 00439614: mov dword ptr [0xa43e1c], eax */ W32((u32)(0xa43e1cu), r_eax);
    /* 00439619: mov eax, dword ptr [0xa43f40] */ r_eax = R32((u32)(0xa43f40u));
    /* 0043961e: mov dword ptr [0xa43e20], eax */ W32((u32)(0xa43e20u), r_eax);
    /* 00439623: mov eax, dword ptr [0xa43f4c] */ r_eax = R32((u32)(0xa43f4cu));
    /* 00439628: mov dword ptr [0xa441e4], eax */ W32((u32)(0xa441e4u), r_eax);
    /* 0043962d: mov eax, dword ptr [0xa43f68] */ r_eax = R32((u32)(0xa43f68u));
    /* 00439632: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439635: mov dword ptr [0xa43f68], eax */ W32((u32)(0xa43f68u), r_eax);
    /* 0043963a: mov eax, dword ptr [0xa43f70] */ r_eax = R32((u32)(0xa43f70u));
    /* 0043963f: mov dword ptr [0xa43e24], eax */ W32((u32)(0xa43e24u), r_eax);
    /* 00439644: mov eax, dword ptr [0xa43f74] */ r_eax = R32((u32)(0xa43f74u));
    /* 00439649: mov dword ptr [0xa43e28], eax */ W32((u32)(0xa43e28u), r_eax);
    /* 0043964e: mov eax, dword ptr [0xa43f78] */ r_eax = R32((u32)(0xa43f78u));
    /* 00439653: mov dword ptr [0xa43e2c], eax */ W32((u32)(0xa43e2cu), r_eax);
    /* 00439658: mov eax, dword ptr [0xa43f84] */ r_eax = R32((u32)(0xa43f84u));
    /* 0043965d: mov dword ptr [0xa441e8], eax */ W32((u32)(0xa441e8u), r_eax);
    /* 00439662: mov eax, dword ptr [0xa43fa0] */ r_eax = R32((u32)(0xa43fa0u));
    /* 00439667: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043966a: mov dword ptr [0xa43fa0], eax */ W32((u32)(0xa43fa0u), r_eax);
    /* 0043966f: mov eax, dword ptr [0xa43fa8] */ r_eax = R32((u32)(0xa43fa8u));
    /* 00439674: mov dword ptr [0xa43e30], eax */ W32((u32)(0xa43e30u), r_eax);
    /* 00439679: mov eax, dword ptr [0xa43fac] */ r_eax = R32((u32)(0xa43facu));
    /* 0043967e: mov dword ptr [0xa43e34], eax */ W32((u32)(0xa43e34u), r_eax);
    /* 00439683: mov eax, dword ptr [0xa43fb0] */ r_eax = R32((u32)(0xa43fb0u));
    /* 00439688: mov dword ptr [0xa43e38], eax */ W32((u32)(0xa43e38u), r_eax);
    /* 0043968d: mov eax, dword ptr [0xa43fbc] */ r_eax = R32((u32)(0xa43fbcu));
    /* 00439692: mov dword ptr [0xa441ec], eax */ W32((u32)(0xa441ecu), r_eax);
    /* 00439697: mov eax, dword ptr [0xa43fd8] */ r_eax = R32((u32)(0xa43fd8u));
    /* 0043969c: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043969f: mov dword ptr [0xa43fd8], eax */ W32((u32)(0xa43fd8u), r_eax);
    /* 004396a4: mov eax, dword ptr [0xa43fe0] */ r_eax = R32((u32)(0xa43fe0u));
    /* 004396a9: mov dword ptr [0xa43e3c], eax */ W32((u32)(0xa43e3cu), r_eax);
    /* 004396ae: mov eax, dword ptr [0xa43fe4] */ r_eax = R32((u32)(0xa43fe4u));
    /* 004396b3: mov dword ptr [0xa43e40], eax */ W32((u32)(0xa43e40u), r_eax);
    /* 004396b8: mov eax, dword ptr [0xa43fe8] */ r_eax = R32((u32)(0xa43fe8u));
    /* 004396bd: mov dword ptr [0xa43e44], eax */ W32((u32)(0xa43e44u), r_eax);
    /* 004396c2: mov eax, dword ptr [0xa43ff4] */ r_eax = R32((u32)(0xa43ff4u));
    /* 004396c7: mov dword ptr [0xa441f0], eax */ W32((u32)(0xa441f0u), r_eax);
    /* 004396cc: mov eax, dword ptr [0xa44010] */ r_eax = R32((u32)(0xa44010u));
    /* 004396d1: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004396d4: mov dword ptr [0xa44010], eax */ W32((u32)(0xa44010u), r_eax);
    /* 004396d9: mov eax, dword ptr [0xa44018] */ r_eax = R32((u32)(0xa44018u));
    /* 004396de: mov dword ptr [0xa43e48], eax */ W32((u32)(0xa43e48u), r_eax);
    /* 004396e3: mov eax, dword ptr [0xa4401c] */ r_eax = R32((u32)(0xa4401cu));
    /* 004396e8: mov dword ptr [0xa43e4c], eax */ W32((u32)(0xa43e4cu), r_eax);
    /* 004396ed: mov eax, dword ptr [0xa44020] */ r_eax = R32((u32)(0xa44020u));
    /* 004396f2: mov dword ptr [0xa43e50], eax */ W32((u32)(0xa43e50u), r_eax);
    /* 004396f7: mov eax, dword ptr [0xa4402c] */ r_eax = R32((u32)(0xa4402cu));
    /* 004396fc: mov dword ptr [0xa441f4], eax */ W32((u32)(0xa441f4u), r_eax);
    /* 00439701: mov eax, dword ptr [0xa44048] */ r_eax = R32((u32)(0xa44048u));
    /* 00439706: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439709: mov dword ptr [0xa44048], eax */ W32((u32)(0xa44048u), r_eax);
    /* 0043970e: mov eax, dword ptr [0xa44050] */ r_eax = R32((u32)(0xa44050u));
    /* 00439713: mov dword ptr [0xa43e54], eax */ W32((u32)(0xa43e54u), r_eax);
    /* 00439718: mov eax, dword ptr [0xa44054] */ r_eax = R32((u32)(0xa44054u));
    /* 0043971d: mov dword ptr [0xa43e58], eax */ W32((u32)(0xa43e58u), r_eax);
    /* 00439722: mov eax, dword ptr [0xa44058] */ r_eax = R32((u32)(0xa44058u));
    /* 00439727: mov dword ptr [0xa43e5c], eax */ W32((u32)(0xa43e5cu), r_eax);
    /* 0043972c: mov eax, dword ptr [0xa44064] */ r_eax = R32((u32)(0xa44064u));
    /* 00439731: mov dword ptr [0xa441f8], eax */ W32((u32)(0xa441f8u), r_eax);
    /* 00439736: mov eax, dword ptr [0xa44080] */ r_eax = R32((u32)(0xa44080u));
    /* 0043973b: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043973e: mov dword ptr [0xa44080], eax */ W32((u32)(0xa44080u), r_eax);
    /* 00439743: mov eax, dword ptr [0xa44088] */ r_eax = R32((u32)(0xa44088u));
    /* 00439748: mov dword ptr [0xa43e60], eax */ W32((u32)(0xa43e60u), r_eax);
    /* 0043974d: mov eax, dword ptr [0xa4408c] */ r_eax = R32((u32)(0xa4408cu));
    /* 00439752: mov dword ptr [0xa43e64], eax */ W32((u32)(0xa43e64u), r_eax);
    /* 00439757: mov eax, dword ptr [0xa44090] */ r_eax = R32((u32)(0xa44090u));
    /* 0043975c: mov dword ptr [0xa43e68], eax */ W32((u32)(0xa43e68u), r_eax);
    /* 00439761: mov eax, dword ptr [0xa4409c] */ r_eax = R32((u32)(0xa4409cu));
    /* 00439766: mov dword ptr [0xa441fc], eax */ W32((u32)(0xa441fcu), r_eax);
    /* 0043976b: mov eax, dword ptr [0xa440b8] */ r_eax = R32((u32)(0xa440b8u));
    /* 00439770: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439773: mov dword ptr [0xa440b8], eax */ W32((u32)(0xa440b8u), r_eax);
    /* 00439778: mov eax, dword ptr [0xa440c0] */ r_eax = R32((u32)(0xa440c0u));
    /* 0043977d: mov dword ptr [0xa43e6c], eax */ W32((u32)(0xa43e6cu), r_eax);
    /* 00439782: mov eax, dword ptr [0xa440c4] */ r_eax = R32((u32)(0xa440c4u));
    /* 00439787: mov dword ptr [0xa43e70], eax */ W32((u32)(0xa43e70u), r_eax);
    /* 0043978c: mov eax, dword ptr [0xa440c8] */ r_eax = R32((u32)(0xa440c8u));
    /* 00439791: mov dword ptr [0xa43e74], eax */ W32((u32)(0xa43e74u), r_eax);
    /* 00439796: mov eax, dword ptr [0xa440d4] */ r_eax = R32((u32)(0xa440d4u));
    /* 0043979b: mov dword ptr [0xa44200], eax */ W32((u32)(0xa44200u), r_eax);
    /* 004397a0: mov eax, dword ptr [0xa440f0] */ r_eax = R32((u32)(0xa440f0u));
    /* 004397a5: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004397a8: mov dword ptr [0xa440f0], eax */ W32((u32)(0xa440f0u), r_eax);
    /* 004397ad: mov eax, dword ptr [0xa440f8] */ r_eax = R32((u32)(0xa440f8u));
    /* 004397b2: mov dword ptr [0xa43e78], eax */ W32((u32)(0xa43e78u), r_eax);
    /* 004397b7: mov eax, dword ptr [0xa440fc] */ r_eax = R32((u32)(0xa440fcu));
    /* 004397bc: mov dword ptr [0xa43e7c], eax */ W32((u32)(0xa43e7cu), r_eax);
    /* 004397c1: mov eax, dword ptr [0xa44100] */ r_eax = R32((u32)(0xa44100u));
    /* 004397c6: mov dword ptr [0xa43e80], eax */ W32((u32)(0xa43e80u), r_eax);
    /* 004397cb: mov eax, dword ptr [0xa4410c] */ r_eax = R32((u32)(0xa4410cu));
    /* 004397d0: mov dword ptr [0xa44204], eax */ W32((u32)(0xa44204u), r_eax);
    /* 004397d5: mov eax, dword ptr [0xa44128] */ r_eax = R32((u32)(0xa44128u));
    /* 004397da: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004397dd: mov dword ptr [0xa44128], eax */ W32((u32)(0xa44128u), r_eax);
    /* 004397e2: mov eax, dword ptr [0xa44130] */ r_eax = R32((u32)(0xa44130u));
    /* 004397e7: mov dword ptr [0xa43e84], eax */ W32((u32)(0xa43e84u), r_eax);
    /* 004397ec: mov eax, dword ptr [0xa44134] */ r_eax = R32((u32)(0xa44134u));
    /* 004397f1: mov dword ptr [0xa43e88], eax */ W32((u32)(0xa43e88u), r_eax);
    /* 004397f6: mov eax, dword ptr [0xa44138] */ r_eax = R32((u32)(0xa44138u));
    /* 004397fb: mov dword ptr [0xa43e8c], eax */ W32((u32)(0xa43e8cu), r_eax);
    /* 00439800: mov eax, dword ptr [0xa44144] */ r_eax = R32((u32)(0xa44144u));
    /* 00439805: mov dword ptr [0xa44208], eax */ W32((u32)(0xa44208u), r_eax);
    /* 0043980a: mov eax, dword ptr [0xa44160] */ r_eax = R32((u32)(0xa44160u));
    /* 0043980f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00439812: mov dword ptr [0xa44160], eax */ W32((u32)(0xa44160u), r_eax);
    /* 00439817: mov eax, dword ptr [0xa44168] */ r_eax = R32((u32)(0xa44168u));
    /* 0043981c: mov dword ptr [0xa43e90], eax */ W32((u32)(0xa43e90u), r_eax);
    /* 00439821: mov eax, dword ptr [0xa4416c] */ r_eax = R32((u32)(0xa4416cu));
    /* 00439826: mov dword ptr [0xa43e94], eax */ W32((u32)(0xa43e94u), r_eax);
    /* 0043982b: mov eax, dword ptr [0xa44170] */ r_eax = R32((u32)(0xa44170u));
    /* 00439830: mov dword ptr [0xa43e98], eax */ W32((u32)(0xa43e98u), r_eax);
    /* 00439835: mov eax, dword ptr [0xa4417c] */ r_eax = R32((u32)(0xa4417cu));
    /* 0043983a: mov dword ptr [0xa4420c], eax */ W32((u32)(0xa4420cu), r_eax);
    /* 0043983f: mov eax, dword ptr [0xa44198] */ r_eax = R32((u32)(0xa44198u));
    /* 00439844: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00439847: mov dword ptr [0xa44198], eax */ W32((u32)(0xa44198u), r_eax);
    /* 0043984c: mov eax, dword ptr [0xa441a0] */ r_eax = R32((u32)(0xa441a0u));
    /* 00439851: mov dword ptr [0xa43e9c], eax */ W32((u32)(0xa43e9cu), r_eax);
    /* 00439856: mov eax, dword ptr [0xa441a4] */ r_eax = R32((u32)(0xa441a4u));
    /* 0043985b: mov dword ptr [0xa43ea0], eax */ W32((u32)(0xa43ea0u), r_eax);
    /* 00439860: mov eax, dword ptr [0xa441a8] */ r_eax = R32((u32)(0xa441a8u));
    /* 00439865: mov dword ptr [0xa43ea4], eax */ W32((u32)(0xa43ea4u), r_eax);
    /* 0043986a: mov eax, dword ptr [0xa441b4] */ r_eax = R32((u32)(0xa441b4u));
    /* 0043986f: mov dword ptr [0xa44210], eax */ W32((u32)(0xa44210u), r_eax);
    /* 00439874: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00439875: ret  */ FN_RET(0x00439444); r_esp += 4; return;
}

void f_00439878(void) /* sub_439878 */
{
    FN_ENTER(0x00439878);
    /* 00439878: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
    /* 00439882: mov dword ptr [ecx + 0x120], 0x4000 */ W32((u32)(r_ecx+0x120u), 0x4000u);
    /* 0043988c: ret  */ FN_RET(0x00439878); r_esp += 4; return;
}

void f_00439890(void) /* sub_439890 */
{
    FN_ENTER(0x00439890);
    /* 00439890: mov dword ptr [ecx + 0x138], 0x41a00000 */ W32((u32)(r_ecx+0x138u), 0x41a00000u);
    /* 0043989a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043989c: mov dword ptr [ecx + 0x13c], 0 */ W32((u32)(r_ecx+0x13cu), 0x0u);
    /* 004398a6: mov dword ptr [ecx + 0x11c], eax */ W32((u32)(r_ecx+0x11cu), r_eax);
    /* 004398ac: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 004398b2: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004398b5: mov edx, dword ptr [0xa43e00] */ r_edx = R32((u32)(0xa43e00u));
    /* 004398bb: mov dword ptr [ecx + 0x150], 0x3f800000 */ W32((u32)(r_ecx+0x150u), 0x3f800000u);
    /* 004398c5: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 004398c8: mov edx, dword ptr [0xa43e04] */ r_edx = R32((u32)(0xa43e04u));
    /* 004398ce: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004398d1: mov edx, dword ptr [0xa43e08] */ r_edx = R32((u32)(0xa43e08u));
    /* 004398d7: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 004398da: mov edx, dword ptr [0xa441dc] */ r_edx = R32((u32)(0xa441dcu));
    /* 004398e0: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 004398e6: mov edx, dword ptr [0xa43e0c] */ r_edx = R32((u32)(0xa43e0cu));
    /* 004398ec: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 004398ef: mov edx, dword ptr [0xa43e10] */ r_edx = R32((u32)(0xa43e10u));
    /* 004398f5: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 004398f8: mov edx, dword ptr [0xa43e14] */ r_edx = R32((u32)(0xa43e14u));
    /* 004398fe: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00439901: mov edx, dword ptr [0xa441e0] */ r_edx = R32((u32)(0xa441e0u));
    /* 00439907: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0043990d: mov edx, dword ptr [0xa43e18] */ r_edx = R32((u32)(0xa43e18u));
    /* 00439913: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00439916: mov edx, dword ptr [0xa43e1c] */ r_edx = R32((u32)(0xa43e1cu));
    /* 0043991c: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0043991f: mov edx, dword ptr [0xa43e20] */ r_edx = R32((u32)(0xa43e20u));
    /* 00439925: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00439928: mov edx, dword ptr [0xa441e4] */ r_edx = R32((u32)(0xa441e4u));
    /* 0043992e: mov dword ptr [ecx + 0xe0], edx */ W32((u32)(r_ecx+0xe0u), r_edx);
    /* 00439934: mov edx, dword ptr [0xa43e24] */ r_edx = R32((u32)(0xa43e24u));
    /* 0043993a: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0043993d: mov edx, dword ptr [0xa43e28] */ r_edx = R32((u32)(0xa43e28u));
    /* 00439943: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00439946: mov edx, dword ptr [0xa43e2c] */ r_edx = R32((u32)(0xa43e2cu));
    /* 0043994c: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0043994f: mov edx, dword ptr [0xa441e8] */ r_edx = R32((u32)(0xa441e8u));
    /* 00439955: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 0043995b: mov edx, dword ptr [0xa43e30] */ r_edx = R32((u32)(0xa43e30u));
    /* 00439961: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00439964: mov edx, dword ptr [0xa43e34] */ r_edx = R32((u32)(0xa43e34u));
    /* 0043996a: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0043996d: mov edx, dword ptr [0xa43e38] */ r_edx = R32((u32)(0xa43e38u));
    /* 00439973: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00439976: mov edx, dword ptr [0xa441ec] */ r_edx = R32((u32)(0xa441ecu));
    /* 0043997c: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 00439982: mov edx, dword ptr [0xa43e3c] */ r_edx = R32((u32)(0xa43e3cu));
    /* 00439988: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0043998b: mov edx, dword ptr [0xa43e40] */ r_edx = R32((u32)(0xa43e40u));
    /* 00439991: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00439994: mov edx, dword ptr [0xa43e44] */ r_edx = R32((u32)(0xa43e44u));
    /* 0043999a: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0043999d: mov edx, dword ptr [0xa441f0] */ r_edx = R32((u32)(0xa441f0u));
    /* 004399a3: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 004399a9: mov edx, dword ptr [0xa43e48] */ r_edx = R32((u32)(0xa43e48u));
    /* 004399af: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004399b2: mov edx, dword ptr [0xa43e4c] */ r_edx = R32((u32)(0xa43e4cu));
    /* 004399b8: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 004399bb: mov edx, dword ptr [0xa43e50] */ r_edx = R32((u32)(0xa43e50u));
    /* 004399c1: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 004399c7: mov edx, dword ptr [0xa441f4] */ r_edx = R32((u32)(0xa441f4u));
    /* 004399cd: mov dword ptr [ecx + 0xf0], edx */ W32((u32)(r_ecx+0xf0u), r_edx);
    /* 004399d3: mov edx, dword ptr [0xa43e54] */ r_edx = R32((u32)(0xa43e54u));
    /* 004399d9: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 004399df: mov edx, dword ptr [0xa43e58] */ r_edx = R32((u32)(0xa43e58u));
    /* 004399e5: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 004399eb: mov edx, dword ptr [0xa43e5c] */ r_edx = R32((u32)(0xa43e5cu));
    /* 004399f1: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 004399f7: mov edx, dword ptr [0xa441f8] */ r_edx = R32((u32)(0xa441f8u));
    /* 004399fd: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 00439a03: mov edx, dword ptr [0xa43e60] */ r_edx = R32((u32)(0xa43e60u));
    /* 00439a09: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 00439a0f: mov edx, dword ptr [0xa43e64] */ r_edx = R32((u32)(0xa43e64u));
    /* 00439a15: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 00439a1b: mov edx, dword ptr [0xa43e68] */ r_edx = R32((u32)(0xa43e68u));
    /* 00439a21: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 00439a27: mov edx, dword ptr [0xa441fc] */ r_edx = R32((u32)(0xa441fcu));
    /* 00439a2d: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 00439a33: mov edx, dword ptr [0xa43e6c] */ r_edx = R32((u32)(0xa43e6cu));
    /* 00439a39: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 00439a3f: mov edx, dword ptr [0xa43e70] */ r_edx = R32((u32)(0xa43e70u));
    /* 00439a45: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00439a4b: mov edx, dword ptr [0xa43e74] */ r_edx = R32((u32)(0xa43e74u));
    /* 00439a51: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 00439a57: mov edx, dword ptr [0xa44200] */ r_edx = R32((u32)(0xa44200u));
    /* 00439a5d: mov dword ptr [ecx + 0xfc], edx */ W32((u32)(r_ecx+0xfcu), r_edx);
    /* 00439a63: mov edx, dword ptr [0xa43e78] */ r_edx = R32((u32)(0xa43e78u));
    /* 00439a69: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 00439a6f: mov edx, dword ptr [0xa43e7c] */ r_edx = R32((u32)(0xa43e7cu));
    /* 00439a75: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 00439a7b: mov edx, dword ptr [0xa43e80] */ r_edx = R32((u32)(0xa43e80u));
    /* 00439a81: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00439a87: mov edx, dword ptr [0xa44204] */ r_edx = R32((u32)(0xa44204u));
    /* 00439a8d: mov dword ptr [ecx + 0x100], edx */ W32((u32)(r_ecx+0x100u), r_edx);
    /* 00439a93: mov edx, dword ptr [0xa43e84] */ r_edx = R32((u32)(0xa43e84u));
    /* 00439a99: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00439a9f: mov edx, dword ptr [0xa43e88] */ r_edx = R32((u32)(0xa43e88u));
    /* 00439aa5: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00439aab: mov edx, dword ptr [0xa43e8c] */ r_edx = R32((u32)(0xa43e8cu));
    /* 00439ab1: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 00439ab7: mov edx, dword ptr [0xa44208] */ r_edx = R32((u32)(0xa44208u));
    /* 00439abd: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 00439ac3: mov edx, dword ptr [0xa43e90] */ r_edx = R32((u32)(0xa43e90u));
    /* 00439ac9: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 00439acf: mov edx, dword ptr [0xa43e94] */ r_edx = R32((u32)(0xa43e94u));
    /* 00439ad5: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 00439adb: mov edx, dword ptr [0xa43e98] */ r_edx = R32((u32)(0xa43e98u));
    /* 00439ae1: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 00439ae7: mov edx, dword ptr [0xa4420c] */ r_edx = R32((u32)(0xa4420cu));
    /* 00439aed: mov dword ptr [ecx + 0x108], edx */ W32((u32)(r_ecx+0x108u), r_edx);
    /* 00439af3: mov edx, dword ptr [0xa43e9c] */ r_edx = R32((u32)(0xa43e9cu));
    /* 00439af9: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00439aff: mov edx, dword ptr [0xa43ea0] */ r_edx = R32((u32)(0xa43ea0u));
    /* 00439b05: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00439b0b: mov edx, dword ptr [0xa43ea4] */ r_edx = R32((u32)(0xa43ea4u));
    /* 00439b11: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00439b17: mov edx, dword ptr [0xa44210] */ r_edx = R32((u32)(0xa44210u));
    /* 00439b1d: mov dword ptr [ecx + 0x10c], edx */ W32((u32)(r_ecx+0x10cu), r_edx);
    /* 00439b23: mov dword ptr [ecx + 0x14c], eax */ W32((u32)(r_ecx+0x14cu), r_eax);
    /* 00439b29: ret  */ FN_RET(0x00439890); r_esp += 4; return;
}

void f_00439b2c(void) /* sub_439B2C */
{
    FN_ENTER(0x00439b2c);
    /* 00439b2c: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00439b2f: mov edx, dword ptr [eax*4 + 0x8fd70c] */ r_edx = R32((u32)(r_eax*4+0x8fd70cu));
    /* 00439b36: mov dword ptr [ecx + 0x11c], edx */ W32((u32)(r_ecx+0x11cu), r_edx);
    /* 00439b3c: mov dword ptr [ecx + 0x120], 0x4000 */ W32((u32)(r_ecx+0x120u), 0x4000u);
    /* 00439b46: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00439b4d: ret  */ FN_RET(0x00439b2c); r_esp += 4; return;
}

void f_00439b50(void) /* sub_439B50 */
{
    FN_ENTER(0x00439b50);
    /* 00439b50: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00439b53: mov edx, dword ptr [eax*4 + 0x8fd70c] */ r_edx = R32((u32)(r_eax*4+0x8fd70cu));
    /* 00439b5a: mov dword ptr [ecx + 0x11c], edx */ W32((u32)(r_ecx+0x11cu), r_edx);
    /* 00439b60: mov dword ptr [ecx + 0x120], 0 */ W32((u32)(r_ecx+0x120u), 0x0u);
    /* 00439b6a: ret  */ FN_RET(0x00439b50); r_esp += 4; return;
}

void f_00439b6c(void) /* sub_439B6C */
{
    FN_ENTER(0x00439b6c);
    /* 00439b6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00439b6e: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 00439b74: mov dword ptr [ecx + 0x11c], eax */ W32((u32)(r_ecx+0x11cu), r_eax);
    /* 00439b7a: ret  */ FN_RET(0x00439b6c); r_esp += 4; return;
}

void f_00439b7c(void) /* sub_439B7C */
{
    FN_ENTER(0x00439b7c);
    /* 00439b7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439b7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00439b7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00439b81: call 0x439ba0 */ r_esp -= 4; W32(r_esp, 0x439b86u); f_00439ba0();
    /* 00439b86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00439b8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00439b8c: jne 0x439b92 */ if (!fZ) goto L_00439b92;
L_00439b8e:; BB(0x00439b8e);
    /* 00439b8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00439b8f: ret 4 */ FN_RET(0x00439b7c); r_esp += 8; return;
L_00439b92:; BB(0x00439b92);
    /* 00439b92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439b93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x439b98u); f_005c2f74();
    /* 00439b98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00439b99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00439b9a: ret 4 */ FN_RET(0x00439b7c); r_esp += 8; return;
}

void f_00439ba0(void) /* sub_439BA0 */
{
    FN_ENTER(0x00439ba0);
    /* 00439ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00439ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00439ba5: push 0x8ce040 */ { u32 v = 0x8ce040u; r_esp -= 4; W32(r_esp, v); }
    /* 00439baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00439bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439bb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00439bb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439bbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00439bbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00439bc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00439bc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00439bc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00439bca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00439bcd: mov dword ptr [ecx], 0xaf5170 */ W32((u32)(r_ecx), 0xaf5170u);
    /* 00439bd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00439bda: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x439bdfu); f_007ba1f0();
    /* 00439bdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439be2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00439be9: mov esp, ebp */ r_esp = r_ebp;
    /* 00439beb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439bec: ret  */ FN_RET(0x00439ba0); r_esp += 4; return;
}

void f_00439bf0(void) /* sub_439BF0 */
{
    FN_ENTER(0x00439bf0);
    /* 00439bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00439bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00439bf5: push 0x8ce068 */ { u32 v = 0x8ce068u; r_esp -= 4; W32(r_esp, v); }
    /* 00439bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00439c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00439c08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439c0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00439c0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00439c11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00439c14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00439c17: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00439c1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00439c23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x439c28u); f_005caba4();
    /* 00439c28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00439c29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00439c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c2e: je 0x439c67 */ if (fZ) goto L_00439c67;
L_00439c30:; BB(0x00439c30);
    /* 00439c30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00439c37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00439c3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439c41: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439c47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00439c4a: call 0x439c6c */ r_esp -= 4; W32(r_esp, 0x439c4fu); f_00439c6c();
    /* 00439c4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00439c52: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00439c59:; BB(0x00439c59);
    /* 00439c59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439c5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00439c63: mov esp, ebp */ r_esp = r_ebp;
    /* 00439c65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439c66: ret  */ FN_RET(0x00439bf0); r_esp += 4; return;
L_00439c67:; BB(0x00439c67);
    /* 00439c67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00439c69: jmp 0x439c59 */ goto L_00439c59;
}

void f_00439c6c(void) /* sub_439C6C */
{
    FN_ENTER(0x00439c6c);
    /* 00439c6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00439c6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00439c6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00439c71: push 0x8ce084 */ { u32 v = 0x8ce084u; r_esp -= 4; W32(r_esp, v); }
    /* 00439c76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00439c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00439c84: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439c87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00439c8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00439c8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00439c90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00439c93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00439c96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00439c99: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00439c9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00439c9f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x439ca4u); f_007ba278();
    /* 00439ca4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00439cab: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00439cae: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00439cb1: mov dword ptr [edi], 0xaf5170 */ W32((u32)(r_edi), 0xaf5170u);
    /* 00439cb7: mov eax, dword ptr [0x9a48dc] */ r_eax = R32((u32)(0x9a48dcu));
    /* 00439cbc: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00439cbf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00439cc1: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00439cc4: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00439cc7: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 00439cca: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00439ccd: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 00439cd0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x439cd5u); f_008587a5();
    /* 00439cd5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00439cd8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00439cdb: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00439cde: fdiv dword ptr [0x8fd850] */ ST(0) = ST(0) / R_F32((u32)(0x8fd850u));
    /* 00439ce4: fmul dword ptr [0x8fd84c] */ ST(0) = ST(0) * R_F32((u32)(0x8fd84cu));
    /* 00439cea: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00439ced: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00439cf0: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00439cf4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00439cf9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00439cfc: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00439cff: fistp dword ptr [edx + 0xac] */ W32((u32)(r_edx+0xacu), (u32)fx_int32(ST(0))); FPOP();
    /* 00439d05: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00439d08: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 00439d0b: add edx, 0x9c */ {  u32 a = r_edx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439d11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00439d14: call 0x782c1c */ r_esp -= 4; W32(r_esp, 0x439d19u); f_00782c1c();
    /* 00439d19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00439d1c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00439d1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d21: jne 0x439d2f */ if (!fZ) goto L_00439d2f;
L_00439d23:; BB(0x00439d23);
    /* 00439d23: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 00439d2d: jmp 0x439d4c */ goto L_00439d4c;
L_00439d2f:; BB(0x00439d2f);
    /* 00439d2f: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00439d35: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00439d38: fadd dword ptr [eax*4 + 0x8fd81c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fd81cu));
    /* 00439d3f: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 00439d42: mov dword ptr [edx + 0xa8], 2 */ W32((u32)(r_edx+0xa8u), 0x2u);
L_00439d4c:; BB(0x00439d4c);
    /* 00439d4c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x439d51u); f_008587a5();
    /* 00439d51: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00439d54: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00439d57: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00439d5a: fdiv dword ptr [0x8fd850] */ ST(0) = ST(0) / R_F32((u32)(0x8fd850u));
    /* 00439d60: fmul dword ptr [0x8fd848] */ ST(0) = ST(0) * R_F32((u32)(0x8fd848u));
    /* 00439d66: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00439d69: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00439d6d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00439d72: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00439d75: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00439d78: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00439d7b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00439d7e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00439d81: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00439d84: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x439d89u); f_008587a5();
    /* 00439d89: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00439d8c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00439d8f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00439d92: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00439d95: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00439d98: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00439d9b: fdiv dword ptr [0x8fd850] */ ST(0) = ST(0) / R_F32((u32)(0x8fd850u));
    /* 00439da1: fadd dword ptr [0x8fd844] */ ST(0) = ST(0) + R_F32((u32)(0x8fd844u));
    /* 00439da7: fmul dword ptr [0x8fd840] */ ST(0) = ST(0) * R_F32((u32)(0x8fd840u));
    /* 00439dad: fmul dword ptr [0x8fd83c] */ ST(0) = ST(0) * R_F32((u32)(0x8fd83cu));
    /* 00439db3: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 00439dbd: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00439dc0: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00439dc4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00439dc9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00439dcc: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00439dcf: fistp dword ptr [edx + 0x5c] */ W32((u32)(r_edx+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00439dd2: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00439dd5: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 00439ddf: mov eax, edx */ r_eax = r_edx;
    /* 00439de1: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 00439deb: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00439df5: mov dword ptr [edx + 0xb4], 0x3f800000 */ W32((u32)(r_edx+0xb4u), 0x3f800000u);
    /* 00439dff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00439e02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00439e09: mov esp, ebp */ r_esp = r_ebp;
    /* 00439e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00439e0c: ret 8 */ FN_RET(0x00439c6c); r_esp += 12; return;
}

void f_00439e10(void) /* sub_439E10 */
{
    FN_ENTER(0x00439e10);
    /* 00439e10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00439e11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439e12: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00439e15: mov esi, ecx */ r_esi = r_ecx;
    /* 00439e17: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00439e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e1f: je 0x43a0ca */ if (fZ) goto L_0043a0ca;
L_00439e25:; BB(0x00439e25);
    /* 00439e25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e28: je 0x43a092 */ if (fZ) goto L_0043a092;
L_00439e2e:; BB(0x00439e2e);
    /* 00439e2e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e31: jne 0x439ffb */ if (!fZ) goto L_00439ffb;
L_00439e37:; BB(0x00439e37);
    /* 00439e37: fld dword ptr [0x8fd810] */ FPUSH(R_F32((u32)(0x8fd810u)));
    /* 00439e3d: fadd dword ptr [esi + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x94u));
    /* 00439e43: fld dword ptr [0x8fd80c] */ FPUSH(R_F32((u32)(0x8fd80cu)));
    /* 00439e49: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00439e4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439e4d: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00439e50: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00439e53: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 00439e56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439e57: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00439e59: jb 0x439e5d */ if (fC) goto L_00439e5d;
L_00439e5b:; BB(0x00439e5b);
    /* 00439e5b: fst st(4) */ ST(4) = ST(0);
L_00439e5d:; BB(0x00439e5d);
    /* 00439e5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439e5f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00439e61: fst dword ptr [esi + 0x94] */ W_F32((u32)(r_esi+0x94u), ST(0));
    /* 00439e67: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00439e69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00439e6b: fst dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0));
    /* 00439e6e: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00439e70: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00439e72: fcomp dword ptr [0x8fd804] */ fx_compare(ST(0), R_F32((u32)(0x8fd804u))); FPOP();
    /* 00439e78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439e7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439e7b: jb 0x439e88 */ if (fC) goto L_00439e88;
L_00439e7d:; BB(0x00439e7d);
    /* 00439e7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439e7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439e81: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439e83: jmp 0x43a0a9 */ goto L_0043a0a9;
L_00439e88:; BB(0x00439e88);
    /* 00439e88: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00439e8a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00439e8f: fld dword ptr [0x8fd800] */ FPUSH(R_F32((u32)(0x8fd800u)));
    /* 00439e95: mov ebx, dword ptr [esi + 0xac] */ r_ebx = R32((u32)(r_esi+0xacu));
    /* 00439e9b: fadd dword ptr [ebx*4 + 0xa44240] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0xa44240u));
    /* 00439ea2: fld dword ptr [ebx*4 + 0x8fd81c] */ FPUSH(R_F32((u32)(r_ebx*4+0x8fd81cu)));
    /* 00439ea9: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 00439eab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439ead: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00439eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00439eb1: jle 0x43a174 */ if ((fZ||fS!=fO)) goto L_0043a174;
L_00439eb7:; BB(0x00439eb7);
    /* 00439eb7: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00439eb9: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00439ebb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00439ebd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00439ec1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00439ec5: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00439ec9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00439ecd: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00439ed1: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00439ed5: mov ebp, eax */ r_ebp = r_eax;
L_00439ed7:; BB(0x00439ed7);
    /* 00439ed7: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00439ede: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00439edf: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x439ee4u); f_0052135c();
    /* 00439ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00439ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ee7: je 0x439f50 */ if (fZ) goto L_00439f50;
L_00439ee9:; BB(0x00439ee9);
    /* 00439ee9: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00439eed: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00439ef0: fld dword ptr [edi + 0xe3c] */ FPUSH(R_F32((u32)(r_edi+0xe3cu)));
    /* 00439ef6: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 00439ef9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00439efb: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00439efd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439eff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439f00: jbe 0x43a181 */ if ((fC||fZ)) goto L_0043a181;
L_00439f06:; BB(0x00439f06);
    /* 00439f06: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00439f0a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00439f0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439f0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439f0f: jae 0x439f50 */ if (!fC) goto L_00439f50;
L_00439f11:; BB(0x00439f11);
    /* 00439f11: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00439f14: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00439f17: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00439f1a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00439f1e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00439f22: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00439f25: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00439f28: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x439f2du); f_0082f9c4();
    /* 00439f2d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00439f30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00439f31: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x439f36u); f_007828e4();
    /* 00439f36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00439f37: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 00439f3b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439f3d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439f3e: jae 0x439f50 */ if (!fC) goto L_00439f50;
L_00439f40:; BB(0x00439f40);
    /* 00439f40: mov edx, 1 */ r_edx = 0x1u;
    /* 00439f45: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00439f49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00439f4a: call 0x434060 */ r_esp -= 4; W32(r_esp, 0x439f4fu); f_00434060();
    /* 00439f4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00439f50:; BB(0x00439f50);
    /* 00439f50: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00439f53: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00439f55: jl 0x439ed7 */ if ((fS!=fO)) goto L_00439ed7;
L_00439f57:; BB(0x00439f57);
    /* 00439f57: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00439f5b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00439f5f: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00439f63: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00439f66: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
L_00439f69:; BB(0x00439f69);
    /* 00439f69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00439f6b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00439f6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439f6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439f70: jbe 0x439f81 */ if ((fC||fZ)) goto L_00439f81;
L_00439f72:; BB(0x00439f72);
    /* 00439f72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439f74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f76: je 0x43a0a9 */ if (fZ) goto L_0043a0a9;
L_00439f7c:; BB(0x00439f7c);
    /* 00439f7c: jmp 0x43a0c2 */ goto L_0043a0c2;
L_00439f81:; BB(0x00439f81);
    /* 00439f81: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00439f84: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00439f89: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00439f8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439f8d: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x439f92u); f_0043aaec();
    /* 00439f92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00439f95:; BB(0x00439f95);
    /* 00439f95: fld dword ptr [esi + 0x94] */ FPUSH(R_F32((u32)(r_esi+0x94u)));
    /* 00439f9b: fmul dword ptr [0x8fd7fc] */ ST(0) = ST(0) * R_F32((u32)(0x8fd7fcu));
    /* 00439fa1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00439fa4: fstp dword ptr [esi + 0x94] */ W_F32((u32)(r_esi+0x94u), ST(0)); FPOP();
    /* 00439faa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x439fafu); f_0082dcbc();
    /* 00439faf: fld dword ptr [0x8fd7f8] */ FPUSH(R_F32((u32)(0x8fd7f8u)));
    /* 00439fb5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00439fb7: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00439fba: fstp dword ptr [esi + 0x90] */ W_F32((u32)(r_esi+0x90u), ST(0)); FPOP();
    /* 00439fc0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x439fc5u); f_0082ddd8();
    /* 00439fc5: fld dword ptr [0x8fd7f8] */ FPUSH(R_F32((u32)(0x8fd7f8u)));
    /* 00439fcb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00439fcd: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 00439fd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439fd5: mov dword ptr [esi + 0xa8], 3 */ W32((u32)(r_esi+0xa8u), 0x3u);
    /* 00439fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439fe1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00439fe2: push 0x328 */ { u32 v = 0x328u; r_esp -= 4; W32(r_esp, v); }
    /* 00439fe7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x439fecu); f_00814298();
    /* 00439fec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00439fee: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x439ff3u); f_004d4288();
    /* 00439ff3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00439ff6: jmp 0x43a0a9 */ goto L_0043a0a9;
L_00439ffb:; BB(0x00439ffb);
    /* 00439ffb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ffe: jne 0x43a0a9 */ if (!fZ) goto L_0043a0a9;
L_0043a004:; BB(0x0043a004);
    /* 0043a004: fld dword ptr [0x8fd810] */ FPUSH(R_F32((u32)(0x8fd810u)));
    /* 0043a00a: fadd dword ptr [esi + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x94u));
    /* 0043a010: fld dword ptr [0x8fd80c] */ FPUSH(R_F32((u32)(0x8fd80cu)));
    /* 0043a016: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043a018: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a01a: mov ebx, dword ptr [esi + 0x5c] */ r_ebx = R32((u32)(r_esi+0x5cu));
    /* 0043a01d: add ebx, 0x1323 */ {  u32 a = r_ebx; u32 b = 0x1323u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a024: mov dword ptr [esi + 0x5c], ebx */ W32((u32)(r_esi+0x5cu), r_ebx);
    /* 0043a027: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0043a02a: lea edx, [esi + 0x90] */ r_edx = (u32)(r_esi+0x90u);
    /* 0043a030: jb 0x43a034 */ if (fC) goto L_0043a034;
L_0043a032:; BB(0x0043a032);
    /* 0043a032: fst st(1) */ ST(1) = ST(0);
L_0043a034:; BB(0x0043a034);
    /* 0043a034: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a036: fstp dword ptr [esi + 0x94] */ W_F32((u32)(r_esi+0x94u), ST(0)); FPOP();
    /* 0043a03c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x43a041u); f_0082ebac();
    /* 0043a041: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0043a047: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a04a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 0043a050: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a053: jl 0x43a0a9 */ if ((fS!=fO)) goto L_0043a0a9;
L_0043a055:; BB(0x0043a055);
    /* 0043a055: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0043a05b: fsub dword ptr [0x8fd808] */ ST(0) = ST(0) - R_F32((u32)(0x8fd808u));
    /* 0043a061: fcom dword ptr [0x8fd818] */ fx_compare(ST(0), R_F32((u32)(0x8fd818u))); 
    /* 0043a067: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a069: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a06a: jbe 0x43a074 */ if ((fC||fZ)) goto L_0043a074;
L_0043a06c:; BB(0x0043a06c);
    /* 0043a06c: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 0043a072: jmp 0x43a0a9 */ goto L_0043a0a9;
L_0043a074:; BB(0x0043a074);
    /* 0043a074: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a076: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 0043a07a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a07c: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 0043a082: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043a088: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 0043a08c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a08f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a091: ret  */ FN_RET(0x00439e10); r_esp += 4; return;
L_0043a092:; BB(0x0043a092);
    /* 0043a092: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0043a095: fsub dword ptr [0x8fd7f4] */ ST(0) = ST(0) - R_F32((u32)(0x8fd7f4u));
    /* 0043a09b: fcom dword ptr [0x8fd7f0] */ fx_compare(ST(0), R_F32((u32)(0x8fd7f0u))); 
    /* 0043a0a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a0a3: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0043a0a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a0a7: jb 0x43a0af */ if (fC) goto L_0043a0af;
L_0043a0a9:; BB(0x0043a0a9);
    /* 0043a0a9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a0ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a0ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a0ae: ret  */ FN_RET(0x00439e10); r_esp += 4; return;
L_0043a0af:; BB(0x0043a0af);
    /* 0043a0af: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0043a0b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043a0b8: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0043a0bc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a0bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a0c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a0c1: ret  */ FN_RET(0x00439e10); r_esp += 4; return;
L_0043a0c2:; BB(0x0043a0c2);
    /* 0043a0c2: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0043a0c5: jmp 0x439f95 */ goto L_00439f95;
L_0043a0ca:; BB(0x0043a0ca);
    /* 0043a0ca: fld dword ptr [0x8fd810] */ FPUSH(R_F32((u32)(0x8fd810u)));
    /* 0043a0d0: fadd dword ptr [esi + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x94u));
    /* 0043a0d6: fld dword ptr [0x8fd80c] */ FPUSH(R_F32((u32)(0x8fd80cu)));
    /* 0043a0dc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043a0de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a0e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a0e1: jb 0x43a0e5 */ if (fC) goto L_0043a0e5;
L_0043a0e3:; BB(0x0043a0e3);
    /* 0043a0e3: fst st(1) */ ST(1) = ST(0);
L_0043a0e5:; BB(0x0043a0e5);
    /* 0043a0e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a0e7: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0043a0ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043a0ec: fst dword ptr [esi + 0x94] */ W_F32((u32)(r_esi+0x94u), ST(0));
    /* 0043a0f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043a0f4: fcom dword ptr [0xa44258] */ fx_compare(ST(0), R_F32((u32)(0xa44258u))); 
    /* 0043a0fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a0fc: fst dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0));
    /* 0043a0ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a100: ja 0x43a188 */ if ((!fC&&!fZ)) goto L_0043a188;
L_0043a106:; BB(0x0043a106);
    /* 0043a106: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0043a109: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0043a10c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0043a110: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0043a114: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0043a11a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0043a11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043a120: mov dword ptr [esi + 0xa8], 1 */ W32((u32)(r_esi+0xa8u), 0x1u);
    /* 0043a12a: jge 0x43a15c */ if ((fS==fO)) goto L_0043a15c;
L_0043a12c:; BB(0x0043a12c);
    /* 0043a12c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a12f: jl 0x43a149 */ if ((fS!=fO)) goto L_0043a149;
L_0043a131:; BB(0x0043a131);
    /* 0043a131: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a134: jg 0x43a149 */ if ((!fZ&&fS==fO)) goto L_0043a149;
L_0043a136:; BB(0x0043a136);
    /* 0043a136: fld dword ptr [0x8fd814] */ FPUSH(R_F32((u32)(0x8fd814u)));
    /* 0043a13c: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0043a140: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0043a144: mov edx, 0x171 */ r_edx = 0x171u;
L_0043a149:; BB(0x0043a149);
    /* 0043a149: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0043a14d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a14e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a14f: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x43a154u); f_0043aaec();
    /* 0043a154: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a157: jmp 0x43a0a9 */ goto L_0043a0a9;
L_0043a15c:; BB(0x0043a15c);
    /* 0043a15c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a15f: jg 0x43a168 */ if ((!fZ&&fS==fO)) goto L_0043a168;
L_0043a161:; BB(0x0043a161);
    /* 0043a161: mov edx, 0x170 */ r_edx = 0x170u;
    /* 0043a166: jmp 0x43a149 */ goto L_0043a149;
L_0043a168:; BB(0x0043a168);
    /* 0043a168: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a16b: je 0x43a161 */ if (fZ) goto L_0043a161;
L_0043a16d:; BB(0x0043a16d);
    /* 0043a16d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a170: jne 0x43a12c */ if (!fZ) goto L_0043a12c;
L_0043a172:; BB(0x0043a172);
    /* 0043a172: jmp 0x43a136 */ goto L_0043a136;
L_0043a174:; BB(0x0043a174);
    /* 0043a174: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a176: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a178: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a17a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043a17c: jmp 0x439f69 */ goto L_00439f69;
L_0043a181:; BB(0x0043a181);
    /* 0043a181: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a183: jmp 0x439f50 */ goto L_00439f50;
L_0043a188:; BB(0x0043a188);
    /* 0043a188: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a18a: jmp 0x43a0a9 */ goto L_0043a0a9;
}

