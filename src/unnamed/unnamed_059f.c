#include "protos.h"

void f_0059f064(void) /* sub_59F064 */
{
    FN_ENTER(0x0059f064);
    /* 0059f064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f066: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f069: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059f06b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0059f06f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f072: je 0x59f390 */ if (fZ) goto L_0059f390;
L_0059f078:; BB(0x0059f078);
    /* 0059f078: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f07b: je 0x59f333 */ if (fZ) goto L_0059f333;
L_0059f081:; BB(0x0059f081);
    /* 0059f081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f083: jne 0x59f33e */ if (!fZ) goto L_0059f33e;
L_0059f089:; BB(0x0059f089);
    /* 0059f089: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f08b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x59f090u); f_0078730c();
    /* 0059f090: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059f096: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f099: jne 0x59f210 */ if (!fZ) goto L_0059f210;
L_0059f09f:; BB(0x0059f09f);
    /* 0059f09f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f0a1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f0a6u); f_007aa094();
    /* 0059f0a6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0059f0ac: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059f0ae: je 0x59f0c4 */ if (fZ) goto L_0059f0c4;
L_0059f0b0:; BB(0x0059f0b0);
    /* 0059f0b0: mov dword ptr [ebp + 0x430], 0 */ W32((u32)(r_ebp+0x430u), 0x0u);
    /* 0059f0ba: mov dword ptr [ebp + 0x42c], 2 */ W32((u32)(r_ebp+0x42cu), 0x2u);
L_0059f0c4:; BB(0x0059f0c4);
    /* 0059f0c4: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f0c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f0cb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59f0d0u); f_007aaa30();
    /* 0059f0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f0d2: je 0x59f33e */ if (fZ) goto L_0059f33e;
L_0059f0d8:; BB(0x0059f0d8);
    /* 0059f0d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f0da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f0dfu); f_007aa094();
    /* 0059f0df: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0059f0e4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x59f0e9u); f_0082d990();
    /* 0059f0e9: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0059f0ec: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59f0f1u); f_0082d838();
    /* 0059f0f1: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0059f0f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f0f6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59f0fbu); f_0082d8bc();
    /* 0059f0fb: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x59f100u); f_0082fa9c();
    /* 0059f100: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f105: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f107: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x59f10cu); f_007aaab8();
    /* 0059f10c: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x59f111u); f_0082faac();
    /* 0059f111: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59f116u); f_0082da80();
    /* 0059f116: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 0059f11c: add ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f122: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x59f127u); f_0082d990();
    /* 0059f127: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0059f12f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0059f133: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f135: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0059f13d: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0059f145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f146: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0059f14a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x59f14fu); f_00830aa0();
    /* 0059f14f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59f154u); f_0082da80();
    /* 0059f154: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0059f15a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f15c: je 0x59f1a8 */ if (fZ) goto L_0059f1a8;
L_0059f15e:; BB(0x0059f15e);
    /* 0059f15e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059f161: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 0059f167: mov ebx, dword ptr [ebp + 0x3a0] */ r_ebx = R32((u32)(r_ebp+0x3a0u));
    /* 0059f16d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f170: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 0059f176: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0059f17a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059f17e: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0059f184: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59f189u); f_0082f9c4();
    /* 0059f189: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059f18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f18d: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0059f193: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f195: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f198: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x59f19du); f_00771858();
    /* 0059f19d: mov edx, dword ptr [ebp + 0x31c] */ r_edx = R32((u32)(r_ebp+0x31cu));
    /* 0059f1a3: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0059f1a6: jmp 0x59f1b3 */ goto L_0059f1b3;
L_0059f1a8:; BB(0x0059f1a8);
    /* 0059f1a8: mov eax, dword ptr [ebp + 0x31c] */ r_eax = R32((u32)(r_ebp+0x31cu));
    /* 0059f1ae: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 0059f1b1: mov eax, ebx */ r_eax = r_ebx;
L_0059f1b3:; BB(0x0059f1b3);
    /* 0059f1b3: mov edx, ebx */ r_edx = r_ebx;
    /* 0059f1b5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0059f1b8: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059f1ba: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0059f1bc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f1be: jge 0x59f201 */ if ((fS==fO)) goto L_0059f201;
L_0059f1c0:; BB(0x0059f1c0);
    /* 0059f1c0: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0059f1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f1c8: je 0x59f201 */ if (fZ) goto L_0059f201;
L_0059f1ca:; BB(0x0059f1ca);
    /* 0059f1ca: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0059f1cf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f1d2: je 0x59f34d */ if (fZ) goto L_0059f34d;
L_0059f1d8:; BB(0x0059f1d8);
    /* 0059f1d8: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059f1de: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 0059f1e5: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f1e8: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59f1edu); f_00520e3c();
    /* 0059f1ed: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0059f1f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1f4: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x59f1f9u); f_006e46ac();
    /* 0059f1f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f1fc: jmp 0x59f33e */ goto L_0059f33e;
L_0059f201:; BB(0x0059f201);
    /* 0059f201: mov dword ptr [ebp + 0x42c], 3 */ W32((u32)(r_ebp+0x42cu), 0x3u);
    /* 0059f20b: jmp 0x59f33e */ goto L_0059f33e;
L_0059f210:; BB(0x0059f210);
    /* 0059f210: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f213: jne 0x59f23c */ if (!fZ) goto L_0059f23c;
L_0059f215:; BB(0x0059f215);
    /* 0059f215: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 0059f21b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059f21e: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 0059f224: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f227: jl 0x59f33e */ if ((fS!=fO)) goto L_0059f33e;
L_0059f22d:; BB(0x0059f22d);
    /* 0059f22d: mov dword ptr [ebp + 0x42c], 3 */ W32((u32)(r_ebp+0x42cu), 0x3u);
    /* 0059f237: jmp 0x59f33e */ goto L_0059f33e;
L_0059f23c:; BB(0x0059f23c);
    /* 0059f23c: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0059f242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f244: je 0x59f37a */ if (fZ) goto L_0059f37a;
L_0059f24a:; BB(0x0059f24a);
    /* 0059f24a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f24c: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f252: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f254: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f25a: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f260: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x59f265u); f_00771c8c();
    /* 0059f265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f267: je 0x59f2c4 */ if (fZ) goto L_0059f2c4;
L_0059f269:; BB(0x0059f269);
    /* 0059f269: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f26f: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f275: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f277: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f27d: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x59f282u); f_00771f1c();
    /* 0059f282: fld dword ptr [0x929d64] */ FPUSH(R_F32((u32)(0x929d64u)));
    /* 0059f288: fadd dword ptr [ebp + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x304u));
    /* 0059f28e: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 0059f294: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 0059f29a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f29c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f29f: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x59f2a4u); f_00772358();
    /* 0059f2a4: mov ebx, eax */ r_ebx = r_eax;
    /* 0059f2a6: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f2a9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059f2ac: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0059f2b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f2b4: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f2b7: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x59f2bau); call_ind(t); }
    /* 0059f2ba: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0059f2bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f2bf: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x59f2c2u); call_ind(t); }
    /* 0059f2c2: jmp 0x59f305 */ goto L_0059f305;
L_0059f2c4:; BB(0x0059f2c4);
    /* 0059f2c4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059f2c7: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 0059f2cd: mov ebx, dword ptr [ebp + 0x3a0] */ r_ebx = R32((u32)(r_ebp+0x3a0u));
    /* 0059f2d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f2d6: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 0059f2dc: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0059f2e0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059f2e4: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0059f2ea: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x59f2efu); f_0082f9c4();
    /* 0059f2ef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059f2f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2f3: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0059f2f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f2fb: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f2fe: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x59f303u); f_00771858();
    /* 0059f303: mov ebx, eax */ r_ebx = r_eax;
L_0059f305:; BB(0x0059f305);
    /* 0059f305: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f30b: jge 0x59f325 */ if ((fS==fO)) goto L_0059f325;
L_0059f30d:; BB(0x0059f30d);
    /* 0059f30d: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 0059f317: mov eax, 8 */ r_eax = 0x8u;
    /* 0059f31c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059f323: jmp 0x59f33e */ goto L_0059f33e;
L_0059f325:; BB(0x0059f325);
    /* 0059f325: mov eax, 0xa */ r_eax = 0xau;
    /* 0059f32a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059f331: jmp 0x59f33e */ goto L_0059f33e;
L_0059f333:; BB(0x0059f333);
    /* 0059f333: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059f339: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f33c: je 0x59f385 */ if (fZ) goto L_0059f385;
L_0059f33e:; BB(0x0059f33e);
    /* 0059f33e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f340: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x59f345u); f_007b6880();
    /* 0059f345: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f348: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059f349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f34a: ret 4 */ FN_RET(0x0059f064); r_esp += 8; return;
L_0059f34d:; BB(0x0059f34d);
    /* 0059f34d: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0059f353: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 0059f35a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f35d: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59f362u); f_00520e3c();
    /* 0059f362: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 0059f366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f367: lea edx, [ebp + 0x39c] */ r_edx = (u32)(r_ebp+0x39cu);
    /* 0059f36d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f36e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f36f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f370: call 0x6ed87c */ r_esp -= 4; W32(r_esp, 0x59f375u); f_006ed87c();
    /* 0059f375: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f378: jmp 0x59f33e */ goto L_0059f33e;
L_0059f37a:; BB(0x0059f37a);
    /* 0059f37a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f37c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f37e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f383u); f_0051f62c();
    /* 0059f383: jmp 0x59f33e */ goto L_0059f33e;
L_0059f385:; BB(0x0059f385);
    /* 0059f385: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f387: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f389: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f38eu); f_0051f62c();
    /* 0059f38e: jmp 0x59f33e */ goto L_0059f33e;
L_0059f390:; BB(0x0059f390);
    /* 0059f390: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f392: mov eax, 0xa */ r_eax = 0xau;
    /* 0059f397: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059f39e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f3a0: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59f3a5u); f_0051f664();
    /* 0059f3a5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059f3a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f3aa: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59f3b0u); call_ind(t); }
    /* 0059f3b0: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059f3b6: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f3b9: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f3be: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059f3c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f3c6: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x59f3cbu); f_005213d8();
    /* 0059f3cb: mov dword ptr [ebp + 0x42c], 0 */ W32((u32)(r_ebp+0x42cu), 0x0u);
    /* 0059f3d5: jmp 0x59f33e */ goto L_0059f33e;
}

void f_0059f1ea(void)
{
    FN_ENTER(0x0059f1ea);
    /* 0059f1ea: sbb al, 0xf8 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf8u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059f1ec: dec dword ptr [ebp + 0x501c2454] */ { u32 ad = (u32)(r_ebp+0x501c2454u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0059f1f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1f4: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x59f1f9u); f_006e46ac();
    /* 0059f1f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f1fc: jmp 0x59f33e */ goto L_0059f33e;
L_0059f33e:; BB(0x0059f33e);
    /* 0059f33e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f340: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x59f345u); f_007b6880();
    /* 0059f345: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f348: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059f349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f34a: ret 4 */ FN_RET(0x0059f1ea); r_esp += 8; return;
}

void f_0059f3dc(void) /* sub_59F3DC */
{
    FN_ENTER(0x0059f3dc);
    /* 0059f3dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f3de: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f3e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0059f3e3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0059f3e7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f3ea: je 0x59f601 */ if (fZ) goto L_0059f601;
L_0059f3f0:; BB(0x0059f3f0);
    /* 0059f3f0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f3f3: je 0x59f5f9 */ if (fZ) goto L_0059f5f9;
L_0059f3f9:; BB(0x0059f3f9);
    /* 0059f3f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f3fb: jne 0x59f5e5 */ if (!fZ) goto L_0059f5e5;
L_0059f401:; BB(0x0059f401);
    /* 0059f401: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0059f407: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f409: je 0x59f4f3 */ if (fZ) goto L_0059f4f3;
L_0059f40f:; BB(0x0059f40f);
    /* 0059f40f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f412: jne 0x59f4d5 */ if (!fZ) goto L_0059f4d5;
L_0059f418:; BB(0x0059f418);
    /* 0059f418: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0059f41e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059f421: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 0059f427: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f42a: jl 0x59f4c3 */ if ((fS!=fO)) goto L_0059f4c3;
L_0059f430:; BB(0x0059f430);
    /* 0059f430: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f433: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059f439: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f43c: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059f442: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0059f445: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 0059f44f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f450: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f453: push 0x929d2c */ { u32 v = 0x929d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f458: push dword ptr [0xa7476c] */ { u32 v = R32((u32)(0xa7476cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f45e: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x59f463u); f_00578aa0();
    /* 0059f463: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f466: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0059f469: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0059f46c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0059f46f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f472: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0059f475: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059f479: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059f47d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59f482u); f_0082dcbc();
    /* 0059f482: fld dword ptr [0x929d5c] */ FPUSH(R_F32((u32)(0x929d5cu)));
    /* 0059f488: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059f48a: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0059f48d: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0059f490: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059f493: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59f498u); f_0082ddd8();
    /* 0059f498: fld dword ptr [0x929d5c] */ FPUSH(R_F32((u32)(0x929d5cu)));
    /* 0059f49e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059f4a0: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0059f4a4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059f4a8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059f4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4ac: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x59f4b1u); f_005787d0();
    /* 0059f4b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4b6: push 0x247 */ { u32 v = 0x247u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4bb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59f4c0u); f_00814298();
    /* 0059f4c0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059f4c3:; BB(0x0059f4c3);
    /* 0059f4c3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059f4c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f4c7: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59f4cdu); call_ind(t); }
    /* 0059f4cd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f4d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f4d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f4d2: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f4d5:; BB(0x0059f4d5);
    /* 0059f4d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f4d8: jne 0x59f5f9 */ if (!fZ) goto L_0059f5f9;
L_0059f4de:; BB(0x0059f4de);
    /* 0059f4de: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0059f4e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f4e7: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0059f4eb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f4ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f4ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f4f0: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f4f3:; BB(0x0059f4f3);
    /* 0059f4f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f4f5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f4fau); f_007aa094();
    /* 0059f4fa: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f4ff: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f501: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59f506u); f_007aaa30();
    /* 0059f506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f508: jne 0x59f51a */ if (!fZ) goto L_0059f51a;
L_0059f50a:; BB(0x0059f50a);
    /* 0059f50a: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f50f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f511: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59f516u); f_007aaa30();
    /* 0059f516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f518: je 0x59f52f */ if (fZ) goto L_0059f52f;
L_0059f51a:; BB(0x0059f51a);
    /* 0059f51a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059f51d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f51f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f521: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f522: push 0x243 */ { u32 v = 0x243u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f527: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59f52cu); f_00814298();
    /* 0059f52c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059f52f:; BB(0x0059f52f);
    /* 0059f52f: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0059f535: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059f537: je 0x59f58d */ if (fZ) goto L_0059f58d;
L_0059f539:; BB(0x0059f539);
    /* 0059f539: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
    /* 0059f543: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0059f547: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059f54a: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 0059f554: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0059f55c: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 0059f564: mov dword ptr [esp + 0x14], 0x41a00000 */ W32((u32)(r_esp+0x14u), 0x41a00000u);
    /* 0059f56c: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f571: call 0x782b3c */ r_esp -= 4; W32(r_esp, 0x59f576u); f_00782b3c();
    /* 0059f576: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0059f57a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f57c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f57d: call 0x5788b8 */ r_esp -= 4; W32(r_esp, 0x59f582u); f_005788b8();
    /* 0059f582: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f585: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f589: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f58a: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f58d:; BB(0x0059f58d);
    /* 0059f58d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f592: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f594: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59f599u); f_007aaa30();
    /* 0059f599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f59b: je 0x59f5b4 */ if (fZ) goto L_0059f5b4;
L_0059f59d:; BB(0x0059f59d);
    /* 0059f59d: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059f5a3: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f5a6: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059f5ac: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f5af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f5b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f5b1: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f5b4:; BB(0x0059f5b4);
    /* 0059f5b4: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f5b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f5bb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59f5c0u); f_007aaa30();
    /* 0059f5c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f5c2: je 0x59f5f9 */ if (fZ) goto L_0059f5f9;
L_0059f5c4:; BB(0x0059f5c4);
    /* 0059f5c4: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059f5ca: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 0059f5d4: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f5d7: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059f5dd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f5e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f5e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f5e2: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f5e5:; BB(0x0059f5e5);
    /* 0059f5e5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f5e8: jne 0x59f5f9 */ if (!fZ) goto L_0059f5f9;
L_0059f5ea:; BB(0x0059f5ea);
    /* 0059f5ea: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059f5f0: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f5f3: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
L_0059f5f9:; BB(0x0059f5f9);
    /* 0059f5f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f5fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f5fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f5fe: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
L_0059f601:; BB(0x0059f601);
    /* 0059f601: mov eax, 5 */ r_eax = 0x5u;
    /* 0059f606: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0059f60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f60f: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x59f614u); f_0051f894();
    /* 0059f614: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059f616: mov ecx, edi */ r_ecx = r_edi;
    /* 0059f618: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x59f61eu); call_ind(t); }
    /* 0059f61e: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059f624: mov dword ptr [edi + 0x42c], 0 */ W32((u32)(r_edi+0x42cu), 0x0u);
    /* 0059f62e: and eax, 0xfffffff0 */ {  u32 a = r_eax; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f631: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059f637: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f63a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f63b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059f63c: ret 4 */ FN_RET(0x0059f3dc); r_esp += 8; return;
}

void f_0059f640(void) /* sub_59F640 */
{
    FN_ENTER(0x0059f640);
    /* 0059f640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f641: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f644: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059f646: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0059f64a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f64d: je 0x59f748 */ if (fZ) goto L_0059f748;
L_0059f653:; BB(0x0059f653);
    /* 0059f653: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f656: je 0x59f6fd */ if (fZ) goto L_0059f6fd;
L_0059f65c:; BB(0x0059f65c);
    /* 0059f65c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f65e: jne 0x59f6e3 */ if (!fZ) goto L_0059f6e3;
L_0059f664:; BB(0x0059f664);
    /* 0059f664: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f666: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f66bu); f_007aa094();
    /* 0059f66b: mov eax, dword ptr [ebp + 0x30c] */ r_eax = R32((u32)(r_ebp+0x30cu));
    /* 0059f671: mov edx, dword ptr [ebp + 0x310] */ r_edx = R32((u32)(r_ebp+0x310u));
    /* 0059f677: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f67a: mov eax, dword ptr [ebp + 0x314] */ r_eax = R32((u32)(r_ebp+0x314u));
    /* 0059f680: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059f684: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0059f688: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059f68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f68c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x59f691u); f_007828e4();
    /* 0059f691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059f692: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f695: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059f699: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059f69d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0059f6a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f6a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f6a6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059f6aa: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x59f6afu); f_005209d4();
    /* 0059f6af: fld dword ptr [0x929d20] */ FPUSH(R_F32((u32)(0x929d20u)));
    /* 0059f6b5: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 0059f6bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059f6bd: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 0059f6c3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059f6c6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0059f6c8: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 0059f6ce: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 0059f6d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f6d6: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59f6dcu); call_ind(t); }
    /* 0059f6dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f6df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f6e0: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
L_0059f6e3:; BB(0x0059f6e3);
    /* 0059f6e3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f6e6: jne 0x59f71f */ if (!fZ) goto L_0059f71f;
L_0059f6e8:; BB(0x0059f6e8);
    /* 0059f6e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f6ea: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x59f6efu); f_0051f81c();
    /* 0059f6ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f6f1: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x59f6f6u); f_00520be8();
    /* 0059f6f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f6f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f6fa: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
L_0059f6fd:; BB(0x0059f6fd);
    /* 0059f6fd: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0059f703: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059f705: je 0x59f71f */ if (fZ) goto L_0059f71f;
L_0059f707:; BB(0x0059f707);
    /* 0059f707: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0059f70d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f710: je 0x59f726 */ if (fZ) goto L_0059f726;
L_0059f712:; BB(0x0059f712);
    /* 0059f712: push dword ptr [ebp + 0x380] */ { u32 v = R32((u32)(r_ebp+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059f718: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f71a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f71fu); f_0051f62c();
L_0059f71f:; BB(0x0059f71f);
    /* 0059f71f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f723: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
L_0059f726:; BB(0x0059f726);
    /* 0059f726: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f728: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59f72du); f_007751b0();
    /* 0059f72d: fcomp dword ptr [ebp + 0x3e8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e8u))); FPOP();
    /* 0059f733: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059f735: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059f736: ja 0x59f712 */ if ((!fC&&!fZ)) goto L_0059f712;
L_0059f738:; BB(0x0059f738);
    /* 0059f738: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f73a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f73c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f741u); f_0051f62c();
    /* 0059f741: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f745: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
L_0059f748:; BB(0x0059f748);
    /* 0059f748: mov eax, 4 */ r_eax = 0x4u;
    /* 0059f74d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059f754: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f756: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f75bu); f_007aa094();
    /* 0059f75b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f75d: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x59f762u); f_00520bdc();
    /* 0059f762: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0059f765: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f769: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f76a: push 0x246 */ { u32 v = 0x246u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f76f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59f774u); f_00814298();
    /* 0059f774: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f777: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f77a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f77b: ret 4 */ FN_RET(0x0059f640); r_esp += 8; return;
}

void f_0059f780(void) /* sub_59F780 */
{
    FN_ENTER(0x0059f780);
    /* 0059f780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059f781: mov esi, ecx */ r_esi = r_ecx;
    /* 0059f783: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059f787: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f78a: je 0x59f7f0 */ if (fZ) goto L_0059f7f0;
L_0059f78c:; BB(0x0059f78c);
    /* 0059f78c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f78f: je 0x59f7bb */ if (fZ) goto L_0059f7bb;
L_0059f791:; BB(0x0059f791);
    /* 0059f791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059f793: jne 0x59f7ec */ if (!fZ) goto L_0059f7ec;
L_0059f795:; BB(0x0059f795);
    /* 0059f795: add dword ptr [esi + 0x42c], 1 */ { u32 ad = (u32)(r_esi+0x42cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059f79c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f79e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f7a3u); f_007aa094();
    /* 0059f7a3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059f7a5: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f7a7: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59f7adu); call_ind(t); }
    /* 0059f7ad: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059f7af: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f7b1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59f7b7u); call_ind(t); }
    /* 0059f7b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f7b8: ret 4 */ FN_RET(0x0059f780); r_esp += 8; return;
L_0059f7bb:; BB(0x0059f7bb);
    /* 0059f7bb: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f7c2: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x59f7c7u); f_00520ea0();
    /* 0059f7c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f7c9: jne 0x59f7e3 */ if (!fZ) goto L_0059f7e3;
L_0059f7cb:; BB(0x0059f7cb);
    /* 0059f7cb: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0059f7d1: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059f7d4: jl 0x59f7ec */ if ((fS!=fO)) goto L_0059f7ec;
L_0059f7d6:; BB(0x0059f7d6);
    /* 0059f7d6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f7da: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f7dfu); f_0051f62c();
    /* 0059f7df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f7e0: ret 4 */ FN_RET(0x0059f780); r_esp += 8; return;
L_0059f7e3:; BB(0x0059f7e3);
    /* 0059f7e3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7e5: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f7e7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59f7ecu); f_0051f62c();
L_0059f7ec:; BB(0x0059f7ec);
    /* 0059f7ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f7ed: ret 4 */ FN_RET(0x0059f780); r_esp += 8; return;
L_0059f7f0:; BB(0x0059f7f0);
    /* 0059f7f0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f7f2: mov eax, 9 */ r_eax = 0x9u;
    /* 0059f7f7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0059f7fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f800: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59f805u); f_0051f664();
    /* 0059f805: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059f80b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0059f80d: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f810: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059f816: mov ecx, esi */ r_ecx = r_esi;
    /* 0059f818: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x59f81eu); call_ind(t); }
    /* 0059f81e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059f820: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0059f826: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0059f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059f82d: ret 4 */ FN_RET(0x0059f780); r_esp += 8; return;
}

void f_0059f830(void) /* sub_59F830 */
{
    FN_ENTER(0x0059f830);
    /* 0059f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059f831: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059f834: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059f836: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0059f83a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f83d: je 0x59fcfc */ if (fZ) goto L_0059fcfc;
L_0059f843:; BB(0x0059f843);
    /* 0059f843: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f846: je 0x59fbb8 */ if (fZ) goto L_0059fbb8;
L_0059f84c:; BB(0x0059f84c);
    /* 0059f84c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f84e: jne 0x59fba2 */ if (!fZ) goto L_0059fba2;
L_0059f854:; BB(0x0059f854);
    /* 0059f854: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059f85a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f85c: jne 0x59f8c7 */ if (!fZ) goto L_0059f8c7;
L_0059f85e:; BB(0x0059f85e);
    /* 0059f85e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f860: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59f865u); f_007aa094();
    /* 0059f865: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0059f86b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059f86d: je 0x59f8ac */ if (fZ) goto L_0059f8ac;
L_0059f86f:; BB(0x0059f86f);
    /* 0059f86f: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059f875: mov edx, dword ptr [ebp + 0x40c] */ r_edx = R32((u32)(r_ebp+0x40cu));
    /* 0059f87b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f87e: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059f884: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 0059f88a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x59f88du); call_ind(t); }
    /* 0059f88d: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 0059f897: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0059f89a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f89d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f89f: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8a4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59f8a9u); f_00814298();
    /* 0059f8a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059f8ac:; BB(0x0059f8ac);
    /* 0059f8ac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059f8af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f8b1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59f8b7u); call_ind(t); }
    /* 0059f8b7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059f8ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f8bc: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59f8c2u); call_ind(t); }
    /* 0059f8c2: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059f8c7:; BB(0x0059f8c7);
    /* 0059f8c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f8ca: jne 0x59fbc7 */ if (!fZ) goto L_0059fbc7;
L_0059f8d0:; BB(0x0059f8d0);
    /* 0059f8d0: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0059f8d6: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 0059f8dc: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59f8dfu); call_ind(t); }
    /* 0059f8df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f8e1: je 0x59fbc7 */ if (fZ) goto L_0059fbc7;
L_0059f8e7:; BB(0x0059f8e7);
    /* 0059f8e7: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f8ec: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059f8f2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f8f5: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059f8fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f8fd: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x59f902u); f_00520ea0();
    /* 0059f902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f904: je 0x59fb96 */ if (fZ) goto L_0059fb96;
L_0059f90a:; BB(0x0059f90a);
    /* 0059f90a: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0059f910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f912: je 0x59fbc7 */ if (fZ) goto L_0059fbc7;
L_0059f918:; BB(0x0059f918);
    /* 0059f918: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f91a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59f91fu); f_007751b0();
    /* 0059f91f: fld dword ptr [0x929d14] */ FPUSH(R_F32((u32)(0x929d14u)));
    /* 0059f925: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0059f927: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0059f92b: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0059f930: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f935: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0059f939: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0059f93d: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059f941: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0059f945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059f947: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0059f94b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059f94e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059f951: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59f956u); f_007751b0();
    /* 0059f956: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0059f958: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0059f95b: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0059f95f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0059f964: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f969: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0059f96d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0059f971: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059f975: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0059f979: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0059f97d: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0059f980: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f982: jg 0x59f98c */ if ((!fZ&&fS==fO)) goto L_0059f98c;
L_0059f984:; BB(0x0059f984);
    /* 0059f984: mov edx, eax */ r_edx = r_eax;
    /* 0059f986: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059f98a: jmp 0x59f990 */ goto L_0059f990;
L_0059f98c:; BB(0x0059f98c);
    /* 0059f98c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_0059f990:; BB(0x0059f990);
    /* 0059f990: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0059f994: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f996: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0059f99a: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0059f99e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f9a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059f9a2: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0059f9a6: mov edi, eax */ r_edi = r_eax;
L_0059f9a8:; BB(0x0059f9a8);
    /* 0059f9a8: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0059f9ae: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0059f9b1: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 0059f9b4: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0059f9b7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0059f9bb: mov edx, dword ptr [esp + edi*4] */ r_edx = R32((u32)(r_esp+r_edi*4));
    /* 0059f9be: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0059f9c2: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 0059f9c5: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0059f9c8: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0059f9cc: lea ecx, [edx + ebx + 0x4000] */ r_ecx = (u32)(r_edx+r_ebx+0x4000u);
    /* 0059f9d3: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0059f9d7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59f9dcu); f_0082ddd8();
    /* 0059f9dc: fmul dword ptr [0x929d08] */ ST(0) = ST(0) * R_F32((u32)(0x929d08u));
    /* 0059f9e2: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0059f9e6: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0059f9ea: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0059f9ee: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59f9f3u); f_0082dcbc();
    /* 0059f9f3: fmul dword ptr [0x929d10] */ ST(0) = ST(0) * R_F32((u32)(0x929d10u));
    /* 0059f9f9: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0059f9fd: fld dword ptr [0x929d0c] */ FPUSH(R_F32((u32)(0x929d0cu)));
    /* 0059fa03: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0059fa07: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0059fa0b: mov esi, dword ptr [ebp + 0x398] */ r_esi = R32((u32)(r_ebp+0x398u));
    /* 0059fa11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059fa13: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0059fa17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059fa19: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0059fa1d: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0059fa21: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059fa23: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0059fa25: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0059fa28: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0059fa2c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059fa2e: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0059fa30: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0059fa33: mov esi, dword ptr [ebp + 0xa4] */ r_esi = R32((u32)(r_ebp+0xa4u));
    /* 0059fa39: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0059fa3c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0059fa40: mov dword ptr [esi + 0x18], 0x9d01 */ W32((u32)(r_esi+0x18u), 0x9d01u);
    /* 0059fa47: mov ebx, dword ptr [ebp + 0x38] */ r_ebx = R32((u32)(r_ebp+0x38u));
    /* 0059fa4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059fa4c: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0059fa4f: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0059fa53: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0059fa56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059fa58: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0059fa5b: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0059fa5f: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 0059fa62: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0059fa65: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0059fa69: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x59fa6eu); f_007b51c4();
    /* 0059fa6e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0059fa71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fa73: call dword ptr [edx + 0x16c] */ { u32 t = R32((u32)(r_edx+0x16cu)); r_esp -= 4; W32(r_esp, 0x59fa79u); call_ind(t); }
    /* 0059fa79: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0059fa7c: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fa82: je 0x59faa0 */ if (fZ) goto L_0059faa0;
L_0059fa84:; BB(0x0059fa84);
    /* 0059fa84: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 0059fa8a: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0059fa8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fa8f: call 0x578c98 */ r_esp -= 4; W32(r_esp, 0x59fa94u); f_00578c98();
    /* 0059fa94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059fa95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fa97: je 0x59fc48 */ if (fZ) goto L_0059fc48;
L_0059fa9d:; BB(0x0059fa9d);
    /* 0059fa9d: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
L_0059faa0:; BB(0x0059faa0);
    /* 0059faa0: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059faa6: je 0x59fabe */ if (fZ) goto L_0059fabe;
L_0059faa8:; BB(0x0059faa8);
    /* 0059faa8: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0059faac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059faad: call 0x578c98 */ r_esp -= 4; W32(r_esp, 0x59fab2u); f_00578c98();
    /* 0059fab2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059fab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fab5: je 0x59fc2d */ if (fZ) goto L_0059fc2d;
L_0059fabb:; BB(0x0059fabb);
    /* 0059fabb: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
L_0059fabe:; BB(0x0059fabe);
    /* 0059fabe: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fac4: je 0x59fad1 */ if (fZ) goto L_0059fad1;
L_0059fac6:; BB(0x0059fac6);
    /* 0059fac6: mov edx, 1 */ r_edx = 0x1u;
    /* 0059facb: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0059facf: jmp 0x59fad7 */ goto L_0059fad7;
L_0059fad1:; BB(0x0059fad1);
    /* 0059fad1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059fad3: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
L_0059fad7:; BB(0x0059fad7);
    /* 0059fad7: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0059fadb: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0059fade: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0059fae2: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0059fae5: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 0059fae8: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x59faedu); f_007b51c4();
    /* 0059faed: mov edx, dword ptr [0x9c0124] */ r_edx = R32((u32)(0x9c0124u));
    /* 0059faf3: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0059faf5: mov ebx, dword ptr [0x9c0128] */ r_ebx = R32((u32)(0x9c0128u));
    /* 0059fafb: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0059fafe: mov edx, dword ptr [0x9c012c] */ r_edx = R32((u32)(0x9c012cu));
    /* 0059fb04: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0059fb07: mov edx, dword ptr [0x9c0130] */ r_edx = R32((u32)(0x9c0130u));
    /* 0059fb0d: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0059fb10: mov edx, dword ptr [0x9c0134] */ r_edx = R32((u32)(0x9c0134u));
    /* 0059fb16: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0059fb19: mov edx, dword ptr [0x9c0138] */ r_edx = R32((u32)(0x9c0138u));
    /* 0059fb1f: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 0059fb22: mov edx, dword ptr [0x9c013c] */ r_edx = R32((u32)(0x9c013cu));
    /* 0059fb28: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0059fb2b: mov edx, dword ptr [0x9c0140] */ r_edx = R32((u32)(0x9c0140u));
    /* 0059fb31: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 0059fb34: mov edx, dword ptr [0x9c0144] */ r_edx = R32((u32)(0x9c0144u));
    /* 0059fb3a: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 0059fb3d: mov edx, dword ptr [0x9c0148] */ r_edx = R32((u32)(0x9c0148u));
    /* 0059fb43: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0059fb46: mov edx, dword ptr [0x9c014c] */ r_edx = R32((u32)(0x9c014cu));
    /* 0059fb4c: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0059fb4f: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0059fb53: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0059fb56: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0059fb5a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb5c: jne 0x59fb7e */ if (!fZ) goto L_0059fb7e;
L_0059fb5e:; BB(0x0059fb5e);
    /* 0059fb5e: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0059fb62: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb68: mov ebx, dword ptr [ebp + 0x398] */ r_ebx = R32((u32)(r_ebp+0x398u));
    /* 0059fb6e: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059fb71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fb72: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x59fb77u); f_0077fffc();
    /* 0059fb77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fb7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fb7c: je 0x59fbce */ if (fZ) goto L_0059fbce;
L_0059fb7e:; BB(0x0059fb7e);
    /* 0059fb7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059fb81: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059fb84: jl 0x59f9a8 */ if ((fS!=fO)) goto L_0059f9a8;
L_0059fb8a:; BB(0x0059fb8a);
    /* 0059fb8a: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0059fb8e: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0059fb92: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_0059fb96:; BB(0x0059fb96);
    /* 0059fb96: mov dword ptr [ebp + 0x42c], 2 */ W32((u32)(r_ebp+0x42cu), 0x2u);
    /* 0059fba0: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fba2:; BB(0x0059fba2);
    /* 0059fba2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fba5: jne 0x59fbc7 */ if (!fZ) goto L_0059fbc7;
L_0059fba7:; BB(0x0059fba7);
    /* 0059fba7: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059fbad: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059fbb0: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059fbb6: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fbb8:; BB(0x0059fbb8);
    /* 0059fbb8: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059fbbe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fbc1: je 0x59fc63 */ if (fZ) goto L_0059fc63;
L_0059fbc7:; BB(0x0059fbc7);
    /* 0059fbc7: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059fbca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059fbcb: ret 4 */ FN_RET(0x0059f830); r_esp += 8; return;
L_0059fbce:; BB(0x0059fbce);
    /* 0059fbce: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0059fbd2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbd4: lea edx, [ebp + 0x128] */ r_edx = (u32)(r_ebp+0x128u);
    /* 0059fbda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbdc: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x59fbe1u); f_007806dc();
    /* 0059fbe1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fbe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fbe6: je 0x59fb7e */ if (fZ) goto L_0059fb7e;
L_0059fbe8:; BB(0x0059fbe8);
    /* 0059fbe8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0059fbec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fbed: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x59fbf2u); f_00807cac();
    /* 0059fbf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059fbf3: movsx edx, word ptr [ebp + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 0059fbf7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fbf9: jne 0x59fb7e */ if (!fZ) goto L_0059fb7e;
L_0059fbfb:; BB(0x0059fbfb);
    /* 0059fbfb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0059fbff: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0059fc03: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0059fc07: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0059fc0b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0059fc0f: add eax, 0xc000 */ {  u32 a = r_eax; u32 b = 0xc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059fc14: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0059fc17: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0059fc1b: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0059fc1e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059fc22: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0059fc25: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0059fc28: jmp 0x59fb96 */ goto L_0059fb96;
L_0059fc2d:; BB(0x0059fc2d);
    /* 0059fc2d: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0059fc31: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0059fc35: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0059fc38: mov dword ptr [ebp + 0x3c], esi */ W32((u32)(r_ebp+0x3cu), r_esi);
    /* 0059fc3b: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 0059fc3e: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x59fc43u); f_007b51c4();
    /* 0059fc43: jmp 0x59fb7e */ goto L_0059fb7e;
L_0059fc48:; BB(0x0059fc48);
    /* 0059fc48: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0059fc4c: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0059fc50: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0059fc53: mov dword ptr [ebp + 0x3c], esi */ W32((u32)(r_ebp+0x3cu), r_esi);
    /* 0059fc56: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 0059fc59: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x59fc5eu); f_007b51c4();
    /* 0059fc5e: jmp 0x59fb7e */ goto L_0059fb7e;
L_0059fc63:; BB(0x0059fc63);
    /* 0059fc63: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059fc69: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fc6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fc70: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059fc75: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 0059fc7f: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059fc85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fc87: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x59fc8cu); f_007b52c4();
    /* 0059fc8c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fc8e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59fc93u); f_007751b0();
    /* 0059fc93: fcomp dword ptr [ebp + 0x3e0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e0u))); FPOP();
    /* 0059fc99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059fc9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059fc9c: ja 0x59fcee */ if ((!fC&&!fZ)) goto L_0059fcee;
L_0059fc9e:; BB(0x0059fc9e);
    /* 0059fc9e: mov eax, dword ptr [ebp + 0x3f8] */ r_eax = R32((u32)(r_ebp+0x3f8u));
    /* 0059fca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059fca6: jle 0x59fce0 */ if ((fZ||fS!=fO)) goto L_0059fce0;
L_0059fca8:; BB(0x0059fca8);
    /* 0059fca8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fcaa: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59fcafu); f_007751b0();
    /* 0059fcaf: mov edx, dword ptr [ebp + 0x3d0] */ r_edx = R32((u32)(r_ebp+0x3d0u));
    /* 0059fcb5: mov edx, dword ptr [edx*4 + 0xa74744] */ r_edx = R32((u32)(r_edx*4+0xa74744u));
    /* 0059fcbc: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 0059fcbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059fcc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059fcc2: jbe 0x59fcd2 */ if ((fC||fZ)) goto L_0059fcd2;
L_0059fcc4:; BB(0x0059fcc4);
    /* 0059fcc4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fcc8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59fccdu); f_0051f62c();
    /* 0059fccd: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fcd2:; BB(0x0059fcd2);
    /* 0059fcd2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcd4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fcd6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59fcdbu); f_0051f62c();
    /* 0059fcdb: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fce0:; BB(0x0059fce0);
    /* 0059fce0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fce2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fce4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59fce9u); f_0051f62c();
    /* 0059fce9: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fcee:; BB(0x0059fcee);
    /* 0059fcee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fcf0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fcf2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59fcf7u); f_0051f62c();
    /* 0059fcf7: jmp 0x59fbc7 */ goto L_0059fbc7;
L_0059fcfc:; BB(0x0059fcfc);
    /* 0059fcfc: mov eax, 0xc */ r_eax = 0xcu;
    /* 0059fd01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd02: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059fd09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fd0b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59fd10u); f_0051f664();
    /* 0059fd10: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059fd13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fd15: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x59fd1bu); call_ind(t); }
    /* 0059fd1b: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059fd21: mov dword ptr [ebp + 0x42c], 0 */ W32((u32)(r_ebp+0x42cu), 0x0u);
    /* 0059fd2b: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059fd2e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059fd31: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059fd37: jmp 0x59fbc7 */ goto L_0059fbc7;
}

void f_0059fd3c(void) /* sub_59FD3C */
{
    FN_ENTER(0x0059fd3c);
    /* 0059fd3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fd3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059fd3f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059fd43: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd46: je 0x59fe6e */ if (fZ) goto L_0059fe6e;
L_0059fd4c:; BB(0x0059fd4c);
    /* 0059fd4c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd4f: je 0x59fde8 */ if (fZ) goto L_0059fde8;
L_0059fd55:; BB(0x0059fd55);
    /* 0059fd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059fd57: jne 0x59fe09 */ if (!fZ) goto L_0059fe09;
L_0059fd5d:; BB(0x0059fd5d);
    /* 0059fd5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fd5f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59fd64u); f_007aa094();
    /* 0059fd64: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0059fd6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd6c: je 0x59fda0 */ if (fZ) goto L_0059fda0;
L_0059fd6e:; BB(0x0059fd6e);
    /* 0059fd6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd71: jne 0x59fd7c */ if (!fZ) goto L_0059fd7c;
L_0059fd73:; BB(0x0059fd73);
    /* 0059fd73: add dword ptr [ebx + 0x430], 1 */ { u32 ad = (u32)(r_ebx+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0059fd7a: jmp 0x59fdda */ goto L_0059fdda;
L_0059fd7c:; BB(0x0059fd7c);
    /* 0059fd7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd7f: jne 0x59fdda */ if (!fZ) goto L_0059fdda;
L_0059fd81:; BB(0x0059fd81);
    /* 0059fd81: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0059fd87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059fd8a: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 0059fd90: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd93: je 0x59fe46 */ if (fZ) goto L_0059fe46;
L_0059fd99:; BB(0x0059fd99);
    /* 0059fd99: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fd9c: je 0x59fe0d */ if (fZ) goto L_0059fe0d;
L_0059fd9e:; BB(0x0059fd9e);
    /* 0059fd9e: jmp 0x59fdda */ goto L_0059fdda;
L_0059fda0:; BB(0x0059fda0);
    /* 0059fda0: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0059fda6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059fda8: je 0x59fdda */ if (fZ) goto L_0059fdda;
L_0059fdaa:; BB(0x0059fdaa);
    /* 0059fdaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fdac: call 0x59feb4 */ r_esp -= 4; W32(r_esp, 0x59fdb1u); f_0059feb4();
    /* 0059fdb1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x59fdb6u); f_00520e6c();
    /* 0059fdb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fdb8: je 0x59fdc6 */ if (fZ) goto L_0059fdc6;
L_0059fdba:; BB(0x0059fdba);
    /* 0059fdba: mov dword ptr [ebx + 0x42c], 2 */ W32((u32)(r_ebx+0x42cu), 0x2u);
    /* 0059fdc4: jmp 0x59fdd0 */ goto L_0059fdd0;
L_0059fdc6:; BB(0x0059fdc6);
    /* 0059fdc6: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
L_0059fdd0:; BB(0x0059fdd0);
    /* 0059fdd0: mov dword ptr [ebx + 0x430], 0 */ W32((u32)(r_ebx+0x430u), 0x0u);
L_0059fdda:; BB(0x0059fdda);
    /* 0059fdda: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059fddc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fdde: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59fde4u); call_ind(t); }
    /* 0059fde4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059fde5: ret 4 */ FN_RET(0x0059fd3c); r_esp += 8; return;
L_0059fde8:; BB(0x0059fde8);
    /* 0059fde8: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0059fdee: mov eax, dword ptr [eax*4 + 0xa74744] */ r_eax = R32((u32)(r_eax*4+0xa74744u));
    /* 0059fdf5: mov edx, dword ptr [ebx + 0x430] */ r_edx = R32((u32)(r_ebx+0x430u));
    /* 0059fdfb: cmp edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059fdfe: jle 0x59fe09 */ if ((fZ||fS!=fO)) goto L_0059fe09;
L_0059fe00:; BB(0x0059fe00);
    /* 0059fe00: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fe04: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59fe09u); f_0051f62c();
L_0059fe09:; BB(0x0059fe09);
    /* 0059fe09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059fe0a: ret 4 */ FN_RET(0x0059fd3c); r_esp += 8; return;
L_0059fe0d:; BB(0x0059fe0d);
    /* 0059fe0d: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0059fe13: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 0059fe1a: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059fe1d: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59fe22u); f_00520e3c();
    /* 0059fe22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe23: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059fe26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe28: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x59fe2du); f_006e2634();
    /* 0059fe2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fe30: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
    /* 0059fe3a: mov dword ptr [ebx + 0x430], 0 */ W32((u32)(r_ebx+0x430u), 0x0u);
    /* 0059fe44: jmp 0x59fdda */ goto L_0059fdda;
L_0059fe46:; BB(0x0059fe46);
    /* 0059fe46: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0059fe4c: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 0059fe53: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059fe56: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59fe5bu); f_00520e3c();
    /* 0059fe5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe5c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0059fe5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe61: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x59fe66u); f_006f0984();
    /* 0059fe66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059fe69: jmp 0x59fdda */ goto L_0059fdda;
L_0059fe6e:; BB(0x0059fe6e);
    /* 0059fe6e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059fe70: mov eax, 8 */ r_eax = 0x8u;
    /* 0059fe75: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059fe7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fe7e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59fe83u); f_0051f664();
    /* 0059fe83: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059fe85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059fe87: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59fe8du); call_ind(t); }
    /* 0059fe8d: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059fe93: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059fe96: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059fe99: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059fe9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059fea1: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 0059fea7: mov dword ptr [ebx + 0x430], edx */ W32((u32)(r_ebx+0x430u), r_edx);
    /* 0059fead: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059feae: ret 4 */ FN_RET(0x0059fd3c); r_esp += 8; return;
}

void f_0059feb4(void) /* sub_59FEB4 */
{
    FN_ENTER(0x0059feb4);
    /* 0059feb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059feb5: mov edi, ecx */ r_edi = r_ecx;
    /* 0059feb7: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059febd: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 0059fec4: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059fec7: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x59feccu); f_00520e3c();
    /* 0059fecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059fecd: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059fed0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059fed1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059fed2: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x59fed7u); f_006eeeb4();
    /* 0059fed7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059feda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059fedb: ret  */ FN_RET(0x0059feb4); r_esp += 4; return;
}

void f_0059fedc(void) /* sub_59FEDC */
{
    FN_ENTER(0x0059fedc);
    /* 0059fedc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059fedd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059fedf: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059fee3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fee6: je 0x59ff7d */ if (fZ) goto L_0059ff7d;
L_0059feec:; BB(0x0059feec);
    /* 0059feec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059feef: je 0x59ff65 */ if (fZ) goto L_0059ff65;
L_0059fef1:; BB(0x0059fef1);
    /* 0059fef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059fef3: jne 0x59ff4d */ if (!fZ) goto L_0059ff4d;
L_0059fef5:; BB(0x0059fef5);
    /* 0059fef5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059fef7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59fefcu); f_007aa094();
    /* 0059fefc: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059ff02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ff04: jne 0x59ff1c */ if (!fZ) goto L_0059ff1c;
L_0059ff06:; BB(0x0059ff06);
    /* 0059ff06: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0059ff0c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059ff0e: je 0x59ff3e */ if (fZ) goto L_0059ff3e;
L_0059ff10:; BB(0x0059ff10);
    /* 0059ff10: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 0059ff1a: jmp 0x59ff3e */ goto L_0059ff3e;
L_0059ff1c:; BB(0x0059ff1c);
    /* 0059ff1c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ff1f: jne 0x59ff3e */ if (!fZ) goto L_0059ff3e;
L_0059ff21:; BB(0x0059ff21);
    /* 0059ff21: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0059ff27: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 0059ff2d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59ff30u); call_ind(t); }
    /* 0059ff30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ff32: je 0x59ff3e */ if (fZ) goto L_0059ff3e;
L_0059ff34:; BB(0x0059ff34);
    /* 0059ff34: mov dword ptr [ebp + 0x42c], 2 */ W32((u32)(r_ebp+0x42cu), 0x2u);
L_0059ff3e:; BB(0x0059ff3e);
    /* 0059ff3e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059ff41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ff43: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59ff49u); call_ind(t); }
    /* 0059ff49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ff4a: ret 4 */ FN_RET(0x0059fedc); r_esp += 8; return;
L_0059ff4d:; BB(0x0059ff4d);
    /* 0059ff4d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ff50: jne 0x59ff79 */ if (!fZ) goto L_0059ff79;
L_0059ff52:; BB(0x0059ff52);
    /* 0059ff52: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059ff58: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ff5b: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059ff61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ff62: ret 4 */ FN_RET(0x0059fedc); r_esp += 8; return;
L_0059ff65:; BB(0x0059ff65);
    /* 0059ff65: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0059ff6b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ff6e: jne 0x59ff79 */ if (!fZ) goto L_0059ff79;
L_0059ff70:; BB(0x0059ff70);
    /* 0059ff70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ff74: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59ff79u); f_0051f62c();
L_0059ff79:; BB(0x0059ff79);
    /* 0059ff79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ff7a: ret 4 */ FN_RET(0x0059fedc); r_esp += 8; return;
L_0059ff7d:; BB(0x0059ff7d);
    /* 0059ff7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ff7f: mov eax, 8 */ r_eax = 0x8u;
    /* 0059ff84: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059ff8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ff8d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59ff92u); f_0051f664();
    /* 0059ff92: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0059ff95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059ff97: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x59ff9du); call_ind(t); }
    /* 0059ff9d: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0059ffa3: mov edx, dword ptr [ebp + 0x40c] */ r_edx = R32((u32)(r_ebp+0x40cu));
    /* 0059ffa9: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ffac: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ffaf: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0059ffb5: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 0059ffbb: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x59ffbeu); call_ind(t); }
    /* 0059ffbe: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 0059ffc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ffc9: ret 4 */ FN_RET(0x0059fedc); r_esp += 8; return;
}

void f_0059ffcc(void) /* sub_59FFCC */
{
    FN_ENTER(0x0059ffcc);
    /* 0059ffcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ffcd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ffd0: mov edi, ecx */ r_edi = r_ecx;
    /* 0059ffd2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0059ffd6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ffd9: je 0x5a01fd */ if (fZ) goto L_005a01fd;
L_0059ffdf:; BB(0x0059ffdf);
    /* 0059ffdf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ffe2: je 0x5a0125 */ if (fZ) goto L_005a0125;
L_0059ffe8:; BB(0x0059ffe8);
    /* 0059ffe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ffea: jne 0x5a0108 */ if (!fZ) goto L_005a0108;
L_0059fff0:; BB(0x0059fff0);
    /* 0059fff0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059fff2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59fff7u); f_007aa094();
    /* 0059fff7: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0059fffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ffff: je 0x5a0094 */ if (fZ) goto L_005a0094;
L_005a0005:; BB(0x005a0005);
    /* 005a0005: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0008: jne 0x5a005c */ if (!fZ) goto L_005a005c;
L_005a000a:; BB(0x005a000a);
    /* 005a000a: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a0010: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a0016: fcomp dword ptr [0x929cfc] */ fx_compare(ST(0), R_F32((u32)(0x929cfcu))); FPOP();
    /* 005a001c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a001e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a001f: jb 0x5a003c */ if (fC) goto L_005a003c;
L_005a0021:; BB(0x005a0021);
    /* 005a0021: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0023: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a002d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a002f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a0035u); call_ind(t); }
    /* 005a0035: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0037: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a003cu); f_005a0304();
L_005a003c:; BB(0x005a003c);
    /* 005a003c: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0042: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0048: mov ecx, edi */ r_ecx = r_edi;
    /* 005a004a: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0050: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a0055u); f_005209d4();
    /* 005a0055: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0059: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a005c:; BB(0x005a005c);
    /* 005a005c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a005f: jne 0x5a0130 */ if (!fZ) goto L_005a0130;
L_005a0065:; BB(0x005a0065);
    /* 005a0065: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a006b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a006d: je 0x5a0079 */ if (fZ) goto L_005a0079;
L_005a006f:; BB(0x005a006f);
    /* 005a006f: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
L_005a0079:; BB(0x005a0079);
    /* 005a0079: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a007b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a007d: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0083u); call_ind(t); }
    /* 005a0083: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0085: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0087: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a008du); call_ind(t); }
    /* 005a008d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0091: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a0094:; BB(0x005a0094);
    /* 005a0094: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0099: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a009f: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a00a2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a00a7u); f_007a8c74();
    /* 005a00a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a00aa: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a00b0: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a00b6: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005a00b9: fcomp dword ptr [0x929cf8] */ fx_compare(ST(0), R_F32((u32)(0x929cf8u))); FPOP();
    /* 005a00bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a00c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a00c2: jb 0x5a00ed */ if (fC) goto L_005a00ed;
L_005a00c4:; BB(0x005a00c4);
    /* 005a00c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00c6: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
    /* 005a00d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00d2: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x5a00d8u); call_ind(t); }
    /* 005a00d8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005a00db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a00dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e0: push 0x242 */ { u32 v = 0x242u; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a00eau); f_00814298();
    /* 005a00ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a00ed:; BB(0x005a00ed);
    /* 005a00ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00f1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a00f7u); call_ind(t); }
    /* 005a00f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00fb: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0101u); call_ind(t); }
    /* 005a0101: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0104: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0105: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a0108:; BB(0x005a0108);
    /* 005a0108: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a010b: jne 0x5a0130 */ if (!fZ) goto L_005a0130;
L_005a010d:; BB(0x005a010d);
    /* 005a010d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a010f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0111: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a0117u); call_ind(t); }
    /* 005a0117: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0119: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5a011eu); f_00520be8();
    /* 005a011e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0121: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0122: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a0125:; BB(0x005a0125);
    /* 005a0125: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a012b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a012e: je 0x5a0137 */ if (fZ) goto L_005a0137;
L_005a0130:; BB(0x005a0130);
    /* 005a0130: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0133: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0134: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a0137:; BB(0x005a0137);
    /* 005a0137: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005a013d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a013f: jne 0x5a0163 */ if (!fZ) goto L_005a0163;
L_005a0141:; BB(0x005a0141);
    /* 005a0141: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0143: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a0148u); f_007751b0();
    /* 005a0148: fcomp dword ptr [edi + 0x3e4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3e4u))); FPOP();
    /* 005a014e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0150: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0151: ja 0x5a0163 */ if ((!fC&&!fZ)) goto L_005a0163;
L_005a0153:; BB(0x005a0153);
    /* 005a0153: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0155: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0157: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a015cu); f_0051f62c();
    /* 005a015c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a015f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0160: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a0163:; BB(0x005a0163);
    /* 005a0163: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0165: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a016au); f_007751b0();
    /* 005a016a: fcomp dword ptr [edi + 0x3e0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3e0u))); FPOP();
    /* 005a0170: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0172: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0173: ja 0x5a01cb */ if ((!fC&&!fZ)) goto L_005a01cb;
L_005a0175:; BB(0x005a0175);
    /* 005a0175: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 005a017b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a017d: jle 0x5a01bb */ if ((fZ||fS!=fO)) goto L_005a01bb;
L_005a017f:; BB(0x005a017f);
    /* 005a017f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0181: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a0186u); f_007751b0();
    /* 005a0186: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 005a018c: mov edx, dword ptr [edx*4 + 0xa74744] */ r_edx = R32((u32)(r_edx*4+0xa74744u));
    /* 005a0193: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 005a0196: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0198: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0199: jbe 0x5a01ab */ if ((fC||fZ)) goto L_005a01ab;
L_005a019b:; BB(0x005a019b);
    /* 005a019b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a019d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a019f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a01a4u); f_0051f62c();
    /* 005a01a4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a01a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a01a8: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a01ab:; BB(0x005a01ab);
    /* 005a01ab: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a01ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005a01af: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a01b4u); f_0051f62c();
    /* 005a01b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a01b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a01b8: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a01bb:; BB(0x005a01bb);
    /* 005a01bb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a01bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005a01bf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a01c4u); f_0051f62c();
    /* 005a01c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a01c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a01c8: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a01cb:; BB(0x005a01cb);
    /* 005a01cb: mov ecx, edi */ r_ecx = r_edi;
    /* 005a01cd: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a01d2u); f_007751b0();
    /* 005a01d2: fcomp dword ptr [edi + 0x3ec] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3ecu))); FPOP();
    /* 005a01d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a01da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a01db: ja 0x5a01ed */ if ((!fC&&!fZ)) goto L_005a01ed;
L_005a01dd:; BB(0x005a01dd);
    /* 005a01dd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a01df: mov ecx, edi */ r_ecx = r_edi;
    /* 005a01e1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a01e6u); f_0051f62c();
    /* 005a01e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a01e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a01ea: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a01ed:; BB(0x005a01ed);
    /* 005a01ed: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a01ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005a01f1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a01f6u); f_0051f62c();
    /* 005a01f6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a01f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a01fa: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
L_005a01fd:; BB(0x005a01fd);
    /* 005a01fd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a01ff: mov eax, 3 */ r_eax = 0x3u;
    /* 005a0204: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a020b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a020d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a0212u); f_0051f664();
    /* 005a0212: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0214: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0216: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a021cu); call_ind(t); }
    /* 005a021c: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a0222: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005a0224: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0229: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a022c: mov dword ptr [edi + 0x3f4], 0 */ W32((u32)(r_edi+0x3f4u), 0x0u);
    /* 005a0236: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a023c: mov ecx, edi */ r_ecx = r_edi;
    /* 005a023e: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
    /* 005a0248: call dword ptr [edx + 0x1a8] */ { u32 t = R32((u32)(r_edx+0x1a8u)); r_esp -= 4; W32(r_esp, 0x5a024eu); call_ind(t); }
    /* 005a024e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0250: je 0x5a02f5 */ if (fZ) goto L_005a02f5;
L_005a0256:; BB(0x005a0256);
    /* 005a0256: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0258: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a025du); f_005213d8();
    /* 005a025d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a025f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a0264u); f_00521410();
    /* 005a0264: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a026a: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a0270: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a0272: fmul qword ptr [0x929be8] */ ST(0) = ST(0) * R_F64((u32)(0x929be8u));
    /* 005a0278: fdiv qword ptr [0x929be0] */ ST(0) = ST(0) / R_F64((u32)(0x929be0u));
    /* 005a027e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a0281: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a0285: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a028a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a028e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a0292: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a0296: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a0299: mov ecx, edi */ r_ecx = r_edi;
    /* 005a029b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005a029f: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 005a02a5: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a02aa: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a02af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a02b0: call 0x59ddc0 */ r_esp -= 4; W32(r_esp, 0x5a02b5u); f_0059ddc0();
    /* 005a02b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a02b7: jne 0x5a02f5 */ if (!fZ) goto L_005a02f5;
L_005a02b9:; BB(0x005a02b9);
    /* 005a02b9: fld dword ptr [0x929cf4] */ FPUSH(R_F32((u32)(0x929cf4u)));
    /* 005a02bf: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a02c5: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a02cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a02cd: fchs  */ ST(0) = -ST(0);
    /* 005a02cf: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 005a02d5: mov dword ptr [edi + 0x42c], 0 */ W32((u32)(r_edi+0x42cu), 0x0u);
    /* 005a02df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a02e1: fdiv dword ptr [0xa74714] */ ST(0) = ST(0) / R_F32((u32)(0xa74714u));
    /* 005a02e7: fstp dword ptr [edi + 0x438] */ W_F32((u32)(r_edi+0x438u), ST(0)); FPOP();
    /* 005a02ed: fchs  */ ST(0) = -ST(0);
    /* 005a02ef: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
L_005a02f5:; BB(0x005a02f5);
    /* 005a02f5: mov ecx, edi */ r_ecx = r_edi;
    /* 005a02f7: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5a02fcu); f_00520bdc();
    /* 005a02fc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a02ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0300: ret 4 */ FN_RET(0x0059ffcc); r_esp += 8; return;
}

