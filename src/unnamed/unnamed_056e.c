#include "protos.h"

void f_0056e6f8(void) /* sub_56E6F8 */
{
    FN_ENTER(0x0056e6f8);
    /* 0056e6f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6fa: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e6fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056e6ff: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 0056e706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e707: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x56e70cu); f_00578c74();
    /* 0056e70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e70d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e70e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e710: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x56e715u); f_007706b0();
    /* 0056e715: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e717: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56e71cu); f_00770738();
    /* 0056e71c: mov ebx, eax */ r_ebx = r_eax;
    /* 0056e71e: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0056e724: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e726: je 0x56e8d6 */ if (fZ) goto L_0056e8d6;
L_0056e72c:; BB(0x0056e72c);
    /* 0056e72c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e72f: jne 0x56e898 */ if (!fZ) goto L_0056e898;
L_0056e735:; BB(0x0056e735);
    /* 0056e735: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e737: je 0x56e9d1 */ if (fZ) goto L_0056e9d1;
L_0056e73d:; BB(0x0056e73d);
    /* 0056e73d: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 0056e743: mov dword ptr [ebp + 0x398], edx */ W32((u32)(r_ebp+0x398u), r_edx);
    /* 0056e749: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0056e74f: mov dword ptr [ebp + 0x39c], edx */ W32((u32)(r_ebp+0x39cu), r_edx);
    /* 0056e755: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 0056e75b: mov dword ptr [ebp + 0x3a0], edx */ W32((u32)(r_ebp+0x3a0u), r_edx);
    /* 0056e761: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 0056e767: mov dword ptr [ebp + 0x2a4], edx */ W32((u32)(r_ebp+0x2a4u), r_edx);
    /* 0056e76d: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0056e773: mov dword ptr [ebp + 0x2a8], edx */ W32((u32)(r_ebp+0x2a8u), r_edx);
    /* 0056e779: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0056e77f: mov ebx, dword ptr [ebp + 0x358] */ r_ebx = R32((u32)(r_ebp+0x358u));
    /* 0056e785: mov dword ptr [ebp + 0x2ac], eax */ W32((u32)(r_ebp+0x2acu), r_eax);
    /* 0056e78b: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e78e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e790: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x56e795u); f_00772358();
    /* 0056e795: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0056e79b: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0056e7a1: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e7a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e7a6: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e7ac: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e7b2: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e7b8: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056e7bb: call 0x52bfd4 */ r_esp -= 4; W32(r_esp, 0x56e7c0u); f_0052bfd4();
    /* 0056e7c0: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 0056e7c6: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0056e7cc: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0056e7cf: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0056e7d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e7d7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56e7dcu); f_007aa094();
    /* 0056e7dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e7e2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56e7e7u); f_00772b44();
    /* 0056e7e7: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056e7ee: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e7f1: je 0x56e994 */ if (fZ) goto L_0056e994;
L_0056e7f7:; BB(0x0056e7f7);
    /* 0056e7f7: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0056e7fc: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056e7fe: jne 0x56e84b */ if (!fZ) goto L_0056e84b;
L_0056e800:; BB(0x0056e800);
    /* 0056e800: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e802: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x56e807u); f_0052cac0();
    /* 0056e807: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056e80a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e80b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e80d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0056e810: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e812: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e818u); call_ind(t); }
    /* 0056e818: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056e81b: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e821: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e826u); f_0050b510();
    /* 0056e826: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e829: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056e82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e82d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e82f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0056e832: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e834: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e83au); call_ind(t); }
    /* 0056e83a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056e83d: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e843: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e848u); f_0050b510();
    /* 0056e848: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e84b:; BB(0x0056e84b);
    /* 0056e84b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e84d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56e852u); f_007b6880();
    /* 0056e852: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0056e858: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056e85b: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e861: je 0x56e873 */ if (fZ) goto L_0056e873;
L_0056e863:; BB(0x0056e863);
    /* 0056e863: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 0056e86d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e870: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056e871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e872: ret  */ FN_RET(0x0056e6f8); r_esp += 4; return;
L_0056e873:; BB(0x0056e873);
    /* 0056e873: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0056e879: fcomp dword ptr [ebp + 0x3a8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3a8u))); FPOP();
    /* 0056e87f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056e881: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056e882: jb 0x56e98e */ if (fC) goto L_0056e98e;
L_0056e888:; BB(0x0056e888);
    /* 0056e888: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 0056e892: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056e896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e897: ret  */ FN_RET(0x0056e6f8); r_esp += 4; return;
L_0056e898:; BB(0x0056e898);
    /* 0056e898: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e89b: jne 0x56e98e */ if (!fZ) goto L_0056e98e;
L_0056e8a1:; BB(0x0056e8a1);
    /* 0056e8a1: mov edx, dword ptr [ebp + 0x380] */ r_edx = R32((u32)(r_ebp+0x380u));
    /* 0056e8a7: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056e8ad: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056e8af: jne 0x56e98e */ if (!fZ) goto L_0056e98e;
L_0056e8b5:; BB(0x0056e8b5);
    /* 0056e8b5: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056e8bc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e8be: je 0x56e98e */ if (fZ) goto L_0056e98e;
L_0056e8c4:; BB(0x0056e8c4);
    /* 0056e8c4: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0056e8ca: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
    /* 0056e8d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e8d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056e8d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e8d5: ret  */ FN_RET(0x0056e6f8); r_esp += 4; return;
L_0056e8d6:; BB(0x0056e8d6);
    /* 0056e8d6: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0056e8dc: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056e8df: and edx, 0xffc7ffff */ {  u32 a = r_edx; u32 b = 0xffc7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056e8e5: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0056e8e8: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0056e8eb: and edx, 0xfbfbfeff */ {  u32 a = r_edx; u32 b = 0xfbfbfeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056e8f1: mov dword ptr [ebp + 0x3a4], 0 */ W32((u32)(r_ebp+0x3a4u), 0x0u);
    /* 0056e8fb: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0056e8fe: mov edx, 1 */ r_edx = 0x1u;
    /* 0056e903: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0056e90a: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056e911: mov dword ptr [ebp + 0x3ac], 0 */ W32((u32)(r_ebp+0x3acu), 0x0u);
    /* 0056e91b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e91e: je 0x56e9e2 */ if (fZ) goto L_0056e9e2;
L_0056e924:; BB(0x0056e924);
    /* 0056e924: mov dword ptr [ebp + 0x3a8], 0x42f00000 */ W32((u32)(r_ebp+0x3a8u), 0x42f00000u);
    /* 0056e92e: add dword ptr [ebp + 0x3bc], 1 */ { u32 ad = (u32)(r_ebp+0x3bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0056e935:; BB(0x0056e935);
    /* 0056e935: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e93a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e93c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56e941u); f_007879b8();
    /* 0056e941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e942: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e944: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56e949u); f_007879b8();
    /* 0056e949: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e94b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0056e94e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056e950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e954: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56e959u); f_00814298();
    /* 0056e959: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e95c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e95e: je 0x56e984 */ if (fZ) goto L_0056e984;
L_0056e960:; BB(0x0056e960);
    /* 0056e960: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 0056e966: mov dword ptr [ebp + 0x2a4], edx */ W32((u32)(r_ebp+0x2a4u), r_edx);
    /* 0056e96c: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0056e972: mov dword ptr [ebp + 0x2a8], edx */ W32((u32)(r_ebp+0x2a8u), r_edx);
    /* 0056e978: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0056e97e: mov dword ptr [ebp + 0x2ac], eax */ W32((u32)(r_ebp+0x2acu), r_eax);
L_0056e984:; BB(0x0056e984);
    /* 0056e984: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
L_0056e98e:; BB(0x0056e98e);
    /* 0056e98e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056e992: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e993: ret  */ FN_RET(0x0056e6f8); r_esp += 4; return;
L_0056e994:; BB(0x0056e994);
    /* 0056e994: fld dword ptr [0x926824] */ FPUSH(R_F32((u32)(0x926824u)));
    /* 0056e99a: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0056e9a0: fld dword ptr [ebp + 0x3ac] */ FPUSH(R_F32((u32)(r_ebp+0x3acu)));
    /* 0056e9a6: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 0056e9a9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056e9ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056e9ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056e9ae: jae 0x56e9bd */ if (!fC) goto L_0056e9bd;
L_0056e9b0:; BB(0x0056e9b0);
    /* 0056e9b0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0056e9b2: fstp dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0)); FPOP();
    /* 0056e9b8: jmp 0x56e7f7 */ goto L_0056e7f7;
L_0056e9bd:; BB(0x0056e9bd);
    /* 0056e9bd: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0056e9bf: fstp dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0)); FPOP();
    /* 0056e9c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e9c7: call 0x56e9f8 */ r_esp -= 4; W32(r_esp, 0x56e9ccu); f_0056e9f8();
    /* 0056e9cc: jmp 0x56e7f7 */ goto L_0056e7f7;
L_0056e9d1:; BB(0x0056e9d1);
    /* 0056e9d1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056e9d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056e9d6: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x56e9dcu); call_ind(t); }
    /* 0056e9dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e9df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056e9e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e9e1: ret  */ FN_RET(0x0056e6f8); r_esp += 4; return;
L_0056e9e2:; BB(0x0056e9e2);
    /* 0056e9e2: mov edx, dword ptr [0xa73edc] */ r_edx = R32((u32)(0xa73edcu));
    /* 0056e9e8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056e9ea: mov dword ptr [ebp + 0x3a8], edx */ W32((u32)(r_ebp+0x3a8u), r_edx);
    /* 0056e9f0: jmp 0x56e935 */ goto L_0056e935;
}

void f_0056e98d(void)
{
    FN_ENTER(0x0056e98d);
    /* 0056e98d: add byte ptr [ebx + 0x5d5b0cc4], al */ { u32 ad = (u32)(r_ebx+0x5d5b0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0056e993: ret  */ FN_RET(0x0056e98d); r_esp += 4; return;
}

void f_0056e9f8(void) /* sub_56E9F8 */
{
    FN_ENTER(0x0056e9f8);
    /* 0056e9f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e9fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9fd: push 0x8d6e28 */ { u32 v = 0x8d6e28u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056ea08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056ea10: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ea13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056ea16: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0056ea19: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0056ea1c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0056ea1f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056ea22: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x56ea27u); f_0052cac0();
    /* 0056ea27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ea2a: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0056ea2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056ea30: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea32: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56ea38u); call_ind(t); }
    /* 0056ea38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ea3b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56ea40u); f_007751b0();
    /* 0056ea40: fmul dword ptr [0x926810] */ ST(0) = ST(0) * R_F32((u32)(0x926810u));
    /* 0056ea46: fsub dword ptr [0x92681c] */ ST(0) = ST(0) - R_F32((u32)(0x92681cu));
    /* 0056ea4c: fmul dword ptr [0x926818] */ ST(0) = ST(0) * R_F32((u32)(0x926818u));
    /* 0056ea52: fdiv dword ptr [0x926814] */ ST(0) = ST(0) / R_F32((u32)(0x926814u));
    /* 0056ea58: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0056ea5f: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0056ea62: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0056ea66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056ea6b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0056ea6e: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0056ea71: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056ea74: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0056ea77: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056ea7a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056ea7d: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ea82: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56ea87u); f_005caba4();
    /* 0056ea87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056ea88: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056ea8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ea8d: je 0x56eabb */ if (fZ) goto L_0056eabb;
L_0056ea8f:; BB(0x0056ea8f);
    /* 0056ea8f: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0056ea96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ea9d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056eaa0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056eaa3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056eaa6: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0056eaa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaaa: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056eaad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaaf: call 0x56ff84 */ r_esp -= 4; W32(r_esp, 0x56eab4u); f_0056ff84();
    /* 0056eab4: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0056eabb:; BB(0x0056eabb);
    /* 0056eabb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056eac2: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0056eac5: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056eacb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56ead0u); f_0050b510();
    /* 0056ead0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ead3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ead6: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eadb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56eae0u); f_007879b8();
    /* 0056eae0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056eae3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056eae6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056eae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056eaec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56eaf1u); f_00814298();
    /* 0056eaf1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056eaf4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056eaf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056eafa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056eb01: mov esp, ebp */ r_esp = r_ebp;
    /* 0056eb03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056eb04: ret  */ FN_RET(0x0056e9f8); r_esp += 4; return;
}

void f_0056eb08(void) /* sub_56EB08 */
{
    FN_ENTER(0x0056eb08);
    /* 0056eb08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb0c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056eb0f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056eb11: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056eb18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb1a: je 0x56eb88 */ if (fZ) goto L_0056eb88;
L_0056eb1c:; BB(0x0056eb1c);
    /* 0056eb1c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb1f: je 0x56eb88 */ if (fZ) goto L_0056eb88;
L_0056eb21:; BB(0x0056eb21);
    /* 0056eb21: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb24: jne 0x56f103 */ if (!fZ) goto L_0056f103;
L_0056eb2a:; BB(0x0056eb2a);
    /* 0056eb2a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb2c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056eb2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056eb30: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x56eb33u); call_ind(t); }
    /* 0056eb33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb35: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056eb3b:; BB(0x0056eb3b);
    /* 0056eb3b: fld dword ptr [0x92680c] */ FPUSH(R_F32((u32)(0x92680cu)));
    /* 0056eb41: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0056eb47: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0056eb49: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eb4c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056eb4f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056eb57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056eb59: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x56eb5eu); f_007714cc();
    /* 0056eb5e: movzx edx, word ptr [ebx + 0x340] */ r_edx = (u32)R16((u32)(r_ebx+0x340u));
    /* 0056eb65: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb6b: jne 0x56eb77 */ if (!fZ) goto L_0056eb77;
L_0056eb6d:; BB(0x0056eb6d);
    /* 0056eb6d: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056eb74: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
L_0056eb77:; BB(0x0056eb77);
    /* 0056eb77: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb7d: je 0x56f10b */ if (fZ) goto L_0056f10b;
L_0056eb83:; BB(0x0056eb83);
    /* 0056eb83: jmp 0x56f103 */ goto L_0056f103;
L_0056eb88:; BB(0x0056eb88);
    /* 0056eb88: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb8a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056eb8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056eb8e: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x56eb91u); call_ind(t); }
    /* 0056eb91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb93: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056eb99:; BB(0x0056eb99);
    /* 0056eb99: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0056eb9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056eba2: mov dword ptr [0xa73e60], 0xffff */ W32((u32)(0xa73e60u), 0xffffu);
    /* 0056ebac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056ebae: mov dword ptr [0xa73e64], 0 */ W32((u32)(0xa73e64u), 0x0u);
    /* 0056ebb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056ebba: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056ebbc: je 0x56ebc4 */ if (fZ) goto L_0056ebc4;
L_0056ebbe:; BB(0x0056ebbe);
    /* 0056ebbe: add esi, dword ptr [0xaae164] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0056ebc4:; BB(0x0056ebc4);
    /* 0056ebc4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0056ebc6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056ebc8: jle 0x56ecc3 */ if ((fZ||fS!=fO)) goto L_0056ecc3;
L_0056ebce:; BB(0x0056ebce);
    /* 0056ebce: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0056ebd2: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0056ebd6:; BB(0x0056ebd6);
    /* 0056ebd6: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0056ebdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056ebde: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x56ebe3u); f_006ea71c();
    /* 0056ebe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056ebe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ebe6: je 0x56ecb0 */ if (fZ) goto L_0056ecb0;
L_0056ebec:; BB(0x0056ebec);
    /* 0056ebec: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ebee: je 0x56ecb0 */ if (fZ) goto L_0056ecb0;
L_0056ebf4:; BB(0x0056ebf4);
    /* 0056ebf4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056ebf7: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ebfc: jne 0x56ecb0 */ if (!fZ) goto L_0056ecb0;
L_0056ec02:; BB(0x0056ec02);
    /* 0056ec02: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0056ec06: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0056ec0c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0056ec10: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 0056ec16: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0056ec1c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0056ec20: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0056ec26: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0056ec2a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56ec2fu); f_0082f9c4();
    /* 0056ec2f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0056ec33: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056ec35: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0056ec39: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056ec3b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0056ec3d: fcom dword ptr [0x926804] */ fx_compare(ST(0), R_F32((u32)(0x926804u))); 
    /* 0056ec43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ec45: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0056ec49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ec4a: jae 0x56ecb0 */ if (!fC) goto L_0056ecb0;
L_0056ec4c:; BB(0x0056ec4c);
    /* 0056ec4c: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0056ec52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ec53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ec55: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x56ec5au); f_00771e14();
    /* 0056ec5a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec5d: je 0x56ecb0 */ if (fZ) goto L_0056ecb0;
L_0056ec5f:; BB(0x0056ec5f);
    /* 0056ec5f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0056ec63: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0056ec67: fstp dword ptr [eax*8 + 0xa73e64] */ W_F32((u32)(r_eax*8+0xa73e64u), ST(0)); FPOP();
    /* 0056ec6e: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0056ec72: mov dword ptr [eax*8 + 0xa73e60], edi */ W32((u32)(r_eax*8+0xa73e60u), r_edi);
    /* 0056ec79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056ec7b: jle 0x56ec9c */ if ((fZ||fS!=fO)) goto L_0056ec9c;
L_0056ec7d:; BB(0x0056ec7d);
    /* 0056ec7d: mov edx, eax */ r_edx = r_eax;
    /* 0056ec7f: fld dword ptr [edx*8 + 0xa73e64] */ FPUSH(R_F32((u32)(r_edx*8+0xa73e64u)));
    /* 0056ec86: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0056ec8a: fcomp dword ptr [edi*8 + 0xa73e64] */ fx_compare(ST(0), R_F32((u32)(r_edi*8+0xa73e64u))); FPOP();
    /* 0056ec91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ec93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ec94: jbe 0x56ec9c */ if ((fC||fZ)) goto L_0056ec9c;
L_0056ec96:; BB(0x0056ec96);
    /* 0056ec96: mov eax, edx */ r_eax = r_edx;
    /* 0056ec98: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_0056ec9c:; BB(0x0056ec9c);
    /* 0056ec9c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0056eca0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056eca3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056eca7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ecaa: jge 0x56f139 */ if ((fS==fO)) goto L_0056f139;
L_0056ecb0:; BB(0x0056ecb0);
    /* 0056ecb0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056ecb3: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ecb5: jl 0x56ebd6 */ if ((fS!=fO)) goto L_0056ebd6;
L_0056ecbb:; BB(0x0056ecbb);
    /* 0056ecbb: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0056ecbf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_0056ecc3:; BB(0x0056ecc3);
    /* 0056ecc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ecc5: jne 0x56ed16 */ if (!fZ) goto L_0056ed16;
L_0056ecc7:; BB(0x0056ecc7);
    /* 0056ecc7: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0056eccc: mov eax, 0xa73e60 */ r_eax = 0xa73e60u;
    /* 0056ecd1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0056ecd3: mov ebp, 0xa73e68 */ r_ebp = 0xa73e68u;
    /* 0056ecd8: mov esi, 0xa73e70 */ r_esi = 0xa73e70u;
    /* 0056ecdd: mov dword ptr [0xa73e64], 0 */ W32((u32)(0xa73e64u), 0x0u);
    /* 0056ece7: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0056ecea: mov edi, 0xa73e78 */ r_edi = 0xa73e78u;
    /* 0056ecef: mov dword ptr [0xa73e6c], 0 */ W32((u32)(0xa73e6cu), 0x0u);
    /* 0056ecf9: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0056ecfb: mov dword ptr [0xa73e74], 0 */ W32((u32)(0xa73e74u), 0x0u);
    /* 0056ed05: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0056ed07: mov dword ptr [0xa73e7c], 0 */ W32((u32)(0xa73e7cu), 0x0u);
    /* 0056ed11: jmp 0x56ef11 */ goto L_0056ef11;
L_0056ed16:; BB(0x0056ed16);
    /* 0056ed16: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ed19: jne 0x56ee26 */ if (!fZ) goto L_0056ee26;
L_0056ed1f:; BB(0x0056ed1f);
    /* 0056ed1f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056ed21: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ed24: jge 0x56f144 */ if ((fS==fO)) goto L_0056f144;
L_0056ed2a:; BB(0x0056ed2a);
    /* 0056ed2a: mov edx, ecx */ r_edx = r_ecx;
    /* 0056ed2c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056ed2e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056ed31: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ed34: jl 0x56ede4 */ if ((fS!=fO)) goto L_0056ede4;
L_0056ed3a:; BB(0x0056ed3a);
    /* 0056ed3a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0056ed3d: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0056ed40: lea esi, [ebp + 2] */ r_esi = (u32)(r_ebp+0x2u);
    /* 0056ed43: lea edi, [ebp + 3] */ r_edi = (u32)(r_ebp+0x3u);
    /* 0056ed46: mov ebx, eax */ r_ebx = r_eax;
L_0056ed48:; BB(0x0056ed48);
    /* 0056ed48: mov eax, ebp */ r_eax = r_ebp;
    /* 0056ed4a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ed4b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ed4b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ed4b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ed4d: mov eax, dword ptr [edx*8 + 0xa73e60] */ r_eax = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ed54: mov dword ptr [ebp*8 + 0xa73e60], eax */ W32((u32)(r_ebp*8+0xa73e60u), r_eax);
    /* 0056ed5b: mov edx, dword ptr [edx*8 + 0xa73e64] */ r_edx = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ed62: mov dword ptr [ebp*8 + 0xa73e64], edx */ W32((u32)(r_ebp*8+0xa73e64u), r_edx);
    /* 0056ed69: mov eax, ebx */ r_eax = r_ebx;
    /* 0056ed6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ed6c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ed6c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ed6c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ed6e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056ed71: mov eax, dword ptr [edx*8 + 0xa73e60] */ r_eax = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ed78: mov dword ptr [ebp*8 + 0xa73e68], eax */ W32((u32)(r_ebp*8+0xa73e68u), r_eax);
    /* 0056ed7f: mov edx, dword ptr [edx*8 + 0xa73e64] */ r_edx = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ed86: mov dword ptr [ebp*8 + 0xa73e6c], edx */ W32((u32)(r_ebp*8+0xa73e6cu), r_edx);
    /* 0056ed8d: mov eax, esi */ r_eax = r_esi;
    /* 0056ed8f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ed90: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ed90, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ed90, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ed92: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056ed95: mov eax, dword ptr [edx*8 + 0xa73e60] */ r_eax = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ed9c: mov dword ptr [ebp*8 + 0xa73e70], eax */ W32((u32)(r_ebp*8+0xa73e70u), r_eax);
    /* 0056eda3: mov edx, dword ptr [edx*8 + 0xa73e64] */ r_edx = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056edaa: mov dword ptr [ebp*8 + 0xa73e74], edx */ W32((u32)(r_ebp*8+0xa73e74u), r_edx);
    /* 0056edb1: mov eax, edi */ r_eax = r_edi;
    /* 0056edb3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056edb4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056edb4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056edb4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056edb6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056edb9: mov eax, dword ptr [edx*8 + 0xa73e60] */ r_eax = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056edc0: mov dword ptr [ebp*8 + 0xa73e78], eax */ W32((u32)(r_ebp*8+0xa73e78u), r_eax);
    /* 0056edc7: mov edx, dword ptr [edx*8 + 0xa73e64] */ r_edx = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056edce: mov dword ptr [ebp*8 + 0xa73e7c], edx */ W32((u32)(r_ebp*8+0xa73e7cu), r_edx);
    /* 0056edd5: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056edd8: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056eddb: jl 0x56ed48 */ if ((fS!=fO)) goto L_0056ed48;
L_0056ede1:; BB(0x0056ede1);
    /* 0056ede1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0056ede4:; BB(0x0056ede4);
    /* 0056ede4: mov eax, ebp */ r_eax = r_ebp;
    /* 0056ede6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056ede7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056ede7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056ede7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056ede9: mov esi, dword ptr [edx*8 + 0xa73e60] */ r_esi = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056edf0: mov dword ptr [ebp*8 + 0xa73e60], esi */ W32((u32)(r_ebp*8+0xa73e60u), r_esi);
    /* 0056edf7: mov edi, dword ptr [edx*8 + 0xa73e64] */ r_edi = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056edfe: mov dword ptr [ebp*8 + 0xa73e64], edi */ W32((u32)(r_ebp*8+0xa73e64u), r_edi);
    /* 0056ee05: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056ee08: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ee0b: jl 0x56ede4 */ if ((fS!=fO)) goto L_0056ede4;
L_0056ee0d:; BB(0x0056ee0d);
    /* 0056ee0d: mov eax, 0xa73e60 */ r_eax = 0xa73e60u;
    /* 0056ee12: mov ebp, 0xa73e68 */ r_ebp = 0xa73e68u;
    /* 0056ee17: mov esi, 0xa73e70 */ r_esi = 0xa73e70u;
    /* 0056ee1c: mov edi, 0xa73e78 */ r_edi = 0xa73e78u;
    /* 0056ee21: jmp 0x56ef11 */ goto L_0056ef11;
L_0056ee26:; BB(0x0056ee26);
    /* 0056ee26: mov eax, ecx */ r_eax = r_ecx;
    /* 0056ee28: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ee2b: jge 0x56f1bf */ if ((fS==fO)) goto L_0056f1bf;
L_0056ee31:; BB(0x0056ee31);
    /* 0056ee31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056ee33: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0056ee35: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056ee38: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ee3b: jl 0x56eed9 */ if ((fS!=fO)) goto L_0056eed9;
L_0056ee41:; BB(0x0056ee41);
    /* 0056ee41: mov ebp, dword ptr [edx*8 + 0xa73e60] */ r_ebp = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ee48: mov dword ptr [eax*8 + 0xa73e60], ebp */ W32((u32)(r_eax*8+0xa73e60u), r_ebp);
    /* 0056ee4f: mov esi, dword ptr [edx*8 + 0xa73e64] */ r_esi = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ee56: mov dword ptr [eax*8 + 0xa73e64], esi */ W32((u32)(r_eax*8+0xa73e64u), r_esi);
    /* 0056ee5d: mov edi, dword ptr [edx*8 + 0xa73e60] */ r_edi = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ee64: mov dword ptr [eax*8 + 0xa73e68], edi */ W32((u32)(r_eax*8+0xa73e68u), r_edi);
    /* 0056ee6b: mov ebp, dword ptr [edx*8 + 0xa73e64] */ r_ebp = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ee72: mov dword ptr [eax*8 + 0xa73e6c], ebp */ W32((u32)(r_eax*8+0xa73e6cu), r_ebp);
    /* 0056ee79: mov ebp, dword ptr [edx*8 + 0xa73e60] */ r_ebp = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ee80: mov dword ptr [eax*8 + 0xa73e70], ebp */ W32((u32)(r_eax*8+0xa73e70u), r_ebp);
    /* 0056ee87: mov ebp, dword ptr [edx*8 + 0xa73e64] */ r_ebp = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ee8e: mov dword ptr [eax*8 + 0xa73e74], ebp */ W32((u32)(r_eax*8+0xa73e74u), r_ebp);
    /* 0056ee95: mov ebp, dword ptr [edx*8 + 0xa73e60] */ r_ebp = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ee9c: mov dword ptr [eax*8 + 0xa73e78], ebp */ W32((u32)(r_eax*8+0xa73e78u), r_ebp);
    /* 0056eea3: mov ebp, dword ptr [edx*8 + 0xa73e64] */ r_ebp = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056eeaa: mov dword ptr [eax*8 + 0xa73e7c], ebp */ W32((u32)(r_eax*8+0xa73e7cu), r_ebp);
    /* 0056eeb1: mov ebp, dword ptr [edx*8 + 0xa73e60] */ r_ebp = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056eeb8: mov dword ptr [eax*8 + 0xa73e80], ebp */ W32((u32)(r_eax*8+0xa73e80u), r_ebp);
    /* 0056eebf: mov ebp, dword ptr [edx*8 + 0xa73e64] */ r_ebp = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056eec6: mov dword ptr [eax*8 + 0xa73e84], ebp */ W32((u32)(r_eax*8+0xa73e84u), r_ebp);
    /* 0056eecd: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056eed0: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056eed3: jl 0x56ee41 */ if ((fS!=fO)) goto L_0056ee41;
L_0056eed9:; BB(0x0056eed9);
    /* 0056eed9: mov ebp, dword ptr [edx*8 + 0xa73e60] */ r_ebp = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056eee0: mov dword ptr [eax*8 + 0xa73e60], ebp */ W32((u32)(r_eax*8+0xa73e60u), r_ebp);
    /* 0056eee7: mov esi, dword ptr [edx*8 + 0xa73e64] */ r_esi = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056eeee: mov dword ptr [eax*8 + 0xa73e64], esi */ W32((u32)(r_eax*8+0xa73e64u), r_esi);
    /* 0056eef5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056eef8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056eefb: jl 0x56eed9 */ if ((fS!=fO)) goto L_0056eed9;
L_0056eefd:; BB(0x0056eefd);
    /* 0056eefd: mov eax, 0xa73e60 */ r_eax = 0xa73e60u;
    /* 0056ef02: mov ebp, 0xa73e68 */ r_ebp = 0xa73e68u;
    /* 0056ef07: mov esi, 0xa73e70 */ r_esi = 0xa73e70u;
    /* 0056ef0c: mov edi, 0xa73e78 */ r_edi = 0xa73e78u;
L_0056ef11:; BB(0x0056ef11);
    /* 0056ef11: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0056ef15: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0056ef19: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0056ef1d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0056ef21: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0056ef25: mov dword ptr [ebx + 0x3d4], ecx */ W32((u32)(r_ebx+0x3d4u), r_ecx);
    /* 0056ef2b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0056ef2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0056ef30:; BB(0x0056ef30);
    /* 0056ef30: lea ebp, [edx + 1] */ r_ebp = (u32)(r_edx+0x1u);
    /* 0056ef33: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0056ef35: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ef38: jge 0x56ef95 */ if ((fS==fO)) goto L_0056ef95;
L_0056ef3a:; BB(0x0056ef3a);
    /* 0056ef3a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0056ef3d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056ef3f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0056ef41:; BB(0x0056ef41);
    /* 0056ef41: fld dword ptr [edx*8 + 0xa73e64] */ FPUSH(R_F32((u32)(r_edx*8+0xa73e64u)));
    /* 0056ef48: fcomp dword ptr [ebx*8 + 0xa73e64] */ fx_compare(ST(0), R_F32((u32)(r_ebx*8+0xa73e64u))); FPOP();
    /* 0056ef4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ef51: mov esi, dword ptr [edx*8 + 0xa73e64] */ r_esi = R32((u32)(r_edx*8+0xa73e64u));
    /* 0056ef58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ef59: jbe 0x56ef8a */ if ((fC||fZ)) goto L_0056ef8a;
L_0056ef5b:; BB(0x0056ef5b);
    /* 0056ef5b: mov eax, dword ptr [edx*8 + 0xa73e60] */ r_eax = R32((u32)(r_edx*8+0xa73e60u));
    /* 0056ef62: mov edi, dword ptr [ecx + 0xa73e60] */ r_edi = R32((u32)(r_ecx+0xa73e60u));
    /* 0056ef68: mov dword ptr [edx*8 + 0xa73e60], edi */ W32((u32)(r_edx*8+0xa73e60u), r_edi);
    /* 0056ef6f: mov edi, dword ptr [ebx*8 + 0xa73e64] */ r_edi = R32((u32)(r_ebx*8+0xa73e64u));
    /* 0056ef76: mov dword ptr [edx*8 + 0xa73e64], edi */ W32((u32)(r_edx*8+0xa73e64u), r_edi);
    /* 0056ef7d: mov dword ptr [ecx + 0xa73e60], eax */ W32((u32)(r_ecx+0xa73e60u), r_eax);
    /* 0056ef83: mov dword ptr [ebx*8 + 0xa73e64], esi */ W32((u32)(r_ebx*8+0xa73e64u), r_esi);
L_0056ef8a:; BB(0x0056ef8a);
    /* 0056ef8a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056ef8d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056ef90: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ef93: jl 0x56ef41 */ if ((fS!=fO)) goto L_0056ef41;
L_0056ef95:; BB(0x0056ef95);
    /* 0056ef95: mov edx, ebp */ r_edx = r_ebp;
    /* 0056ef97: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ef9a: jl 0x56ef30 */ if ((fS!=fO)) goto L_0056ef30;
L_0056ef9c:; BB(0x0056ef9c);
    /* 0056ef9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0056efa0: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0056efa4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0056efa8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0056efac: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056efae: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0056efb2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0056efb5: mov dword ptr [ebx + 0x3c4], eax */ W32((u32)(r_ebx+0x3c4u), r_eax);
    /* 0056efbb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0056efbe: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0056efc4: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0056efc6: mov dword ptr [ebx + 0x3cc], ebp */ W32((u32)(r_ebx+0x3ccu), r_ebp);
    /* 0056efcc: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0056efce: mov dword ptr [ebx + 0x3d0], esi */ W32((u32)(r_ebx+0x3d0u), r_esi);
    /* 0056efd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056efd6: jle 0x56f15d */ if ((fZ||fS!=fO)) goto L_0056f15d;
L_0056efdc:; BB(0x0056efdc);
    /* 0056efdc: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 0056efe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056efe4: je 0x56f09a */ if (fZ) goto L_0056f09a;
L_0056efea:; BB(0x0056efea);
    /* 0056efea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056efed: jne 0x56f040 */ if (!fZ) goto L_0056f040;
L_0056efef:; BB(0x0056efef);
    /* 0056efef: movzx eax, word ptr [ebx + 0x3c8] */ r_eax = (u32)R16((u32)(r_ebx+0x3c8u));
    /* 0056eff6: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056effb: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056f002: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f008:; BB(0x0056f008);
    /* 0056f008: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056f00e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056f010: jne 0x56f02e */ if (!fZ) goto L_0056f02e;
L_0056f012:; BB(0x0056f012);
    /* 0056f012: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056f019: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f01c: je 0x56f02e */ if (fZ) goto L_0056f02e;
L_0056f01e:; BB(0x0056f01e);
    /* 0056f01e: mov dword ptr [ebx + 0x37c], 9 */ W32((u32)(r_ebx+0x37cu), 0x9u);
    /* 0056f028: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_0056f02e:; BB(0x0056f02e);
    /* 0056f02e: mov dword ptr [ebx + 0x380], 2 */ W32((u32)(r_ebx+0x380u), 0x2u);
    /* 0056f038: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056f03b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056f03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f03d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f03e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056f03f: ret  */ FN_RET(0x0056eb08); r_esp += 4; return;
L_0056f040:; BB(0x0056f040);
    /* 0056f040: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f043: jne 0x56f103 */ if (!fZ) goto L_0056f103;
L_0056f049:; BB(0x0056f049);
    /* 0056f049: movzx eax, word ptr [ebx + 0x3c4] */ r_eax = (u32)R16((u32)(r_ebx+0x3c4u));
    /* 0056f050: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f055: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056f05c: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f062:; BB(0x0056f062);
    /* 0056f062: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056f068: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056f06a: jne 0x56f088 */ if (!fZ) goto L_0056f088;
L_0056f06c:; BB(0x0056f06c);
    /* 0056f06c: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056f073: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f076: je 0x56f088 */ if (fZ) goto L_0056f088;
L_0056f078:; BB(0x0056f078);
    /* 0056f078: mov dword ptr [ebx + 0x37c], 9 */ W32((u32)(r_ebx+0x37cu), 0x9u);
    /* 0056f082: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_0056f088:; BB(0x0056f088);
    /* 0056f088: mov dword ptr [ebx + 0x380], 2 */ W32((u32)(r_ebx+0x380u), 0x2u);
    /* 0056f092: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056f095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f097: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f098: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056f099: ret  */ FN_RET(0x0056eb08); r_esp += 4; return;
L_0056f09a:; BB(0x0056f09a);
    /* 0056f09a: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0056f0a1: cmp eax, dword ptr [ebx + 0x3b8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f0a7: jg 0x56f0be */ if ((!fZ&&fS==fO)) goto L_0056f0be;
L_0056f0a9:; BB(0x0056f0a9);
    /* 0056f0a9: movzx eax, word ptr [ebx + 0x3d0] */ r_eax = (u32)R16((u32)(r_ebx+0x3d0u));
    /* 0056f0b0: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056f0b7: mov edx, 9 */ r_edx = 0x9u;
    /* 0056f0bc: jmp 0x56f0d1 */ goto L_0056f0d1;
L_0056f0be:; BB(0x0056f0be);
    /* 0056f0be: movzx eax, word ptr [ebx + 0x3c8] */ r_eax = (u32)R16((u32)(r_ebx+0x3c8u));
    /* 0056f0c5: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056f0cc: mov edx, 1 */ r_edx = 0x1u;
L_0056f0d1:; BB(0x0056f0d1);
    /* 0056f0d1: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f0d6: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f0d8:; BB(0x0056f0d8);
    /* 0056f0d8: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056f0de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056f0e0: jne 0x56f0f9 */ if (!fZ) goto L_0056f0f9;
L_0056f0e2:; BB(0x0056f0e2);
    /* 0056f0e2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056f0e9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f0eb: je 0x56f0f9 */ if (fZ) goto L_0056f0f9;
L_0056f0ed:; BB(0x0056f0ed);
    /* 0056f0ed: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0056f0f3: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
L_0056f0f9:; BB(0x0056f0f9);
    /* 0056f0f9: mov dword ptr [ebx + 0x380], 2 */ W32((u32)(r_ebx+0x380u), 0x2u);
L_0056f103:; BB(0x0056f103);
    /* 0056f103: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056f106: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056f107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f108: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f109: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056f10a: ret  */ FN_RET(0x0056eb08); r_esp += 4; return;
L_0056f10b:; BB(0x0056f10b);
    /* 0056f10b: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056f111: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056f113: jne 0x56f103 */ if (!fZ) goto L_0056f103;
L_0056f115:; BB(0x0056f115);
    /* 0056f115: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056f11c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f11f: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f121:; BB(0x0056f121);
    /* 0056f121: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 0056f12b: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0056f131: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056f134: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056f135: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f136: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f137: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056f138: ret  */ FN_RET(0x0056eb08); r_esp += 4; return;
L_0056f139:; BB(0x0056f139);
    /* 0056f139: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0056f13d: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f13f: jmp 0x56ecc3 */ goto L_0056ecc3;
L_0056f144:; BB(0x0056f144);
    /* 0056f144: mov eax, 0xa73e60 */ r_eax = 0xa73e60u;
    /* 0056f149: mov ebp, 0xa73e68 */ r_ebp = 0xa73e68u;
    /* 0056f14e: mov esi, 0xa73e70 */ r_esi = 0xa73e70u;
    /* 0056f153: mov edi, 0xa73e78 */ r_edi = 0xa73e78u;
    /* 0056f158: jmp 0x56ef11 */ goto L_0056ef11;
L_0056f15d:; BB(0x0056f15d);
    /* 0056f15d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f15f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056f161: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056f163: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x56f166u); call_ind(t); }
    /* 0056f166: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f168: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f16a:; BB(0x0056f16a);
    /* 0056f16a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0056f16d: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0056f170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f172: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x56f177u); f_0078ea50();
    /* 0056f177: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f17a: fcomp dword ptr [0x926800] */ fx_compare(ST(0), R_F32((u32)(0x926800u))); FPOP();
    /* 0056f180: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056f182: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056f183: jbe 0x56f103 */ if ((fC||fZ)) goto L_0056f103;
L_0056f189:; BB(0x0056f189);
    /* 0056f189: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056f18f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056f191: jne 0x56f103 */ if (!fZ) goto L_0056f103;
L_0056f197:; BB(0x0056f197);
    /* 0056f197: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056f19e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f1a1: je 0x56f103 */ if (fZ) goto L_0056f103;
L_0056f1a7:; BB(0x0056f1a7);
    /* 0056f1a7: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 0056f1b1: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0056f1b7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056f1ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056f1bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f1bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056f1bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056f1be: ret  */ FN_RET(0x0056eb08); r_esp += 4; return;
L_0056f1bf:; BB(0x0056f1bf);
    /* 0056f1bf: mov eax, 0xa73e60 */ r_eax = 0xa73e60u;
    /* 0056f1c4: mov ebp, 0xa73e68 */ r_ebp = 0xa73e68u;
    /* 0056f1c9: mov esi, 0xa73e70 */ r_esi = 0xa73e70u;
    /* 0056f1ce: mov edi, 0xa73e78 */ r_edi = 0xa73e78u;
    /* 0056f1d3: jmp 0x56ef11 */ goto L_0056ef11;
}

