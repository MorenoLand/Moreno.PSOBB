#include "protos.h"

void f_004d80a4(void) /* sub_4D80A4 */
{
    FN_ENTER(0x004d80a4);
    /* 004d80a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d80a5: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d80a8: mov edi, ecx */ r_edi = r_ecx;
    /* 004d80aa: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d80afu); f_00807ac0();
    /* 004d80af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d80b2: je 0x4d827f */ if (fZ) goto L_004d827f;
L_004d80b8:; BB(0x004d80b8);
    /* 004d80b8: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d80bb: je 0x4d820e */ if (fZ) goto L_004d820e;
L_004d80c1:; BB(0x004d80c1);
    /* 004d80c1: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d80c4: je 0x4d819f */ if (fZ) goto L_004d819f;
L_004d80ca:; BB(0x004d80ca);
    /* 004d80ca: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 004d80d0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d80d2: jne 0x4d815b */ if (!fZ) goto L_004d815b;
L_004d80d8:; BB(0x004d80d8);
    /* 004d80d8: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x4d80ddu); f_007917b8();
    /* 004d80dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004d80e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d80e3: je 0x4d8169 */ if (fZ) goto L_004d8169;
L_004d80e9:; BB(0x004d80e9);
    /* 004d80e9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004d80eb: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004d80ee: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004d80f1: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d80f7: mov ecx, edi */ r_ecx = r_edi;
    /* 004d80f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d80fa: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x4d80fdu); call_ind(t); }
    /* 004d80fd: mov edx, dword ptr [0x9acedc] */ r_edx = R32((u32)(0x9acedcu));
    /* 004d8103: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 004d810d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d8110: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d8112: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d8114: mov edx, dword ptr [eax*8 + 0x9ace70] */ r_edx = R32((u32)(r_eax*8+0x9ace70u));
    /* 004d811b: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 004d8121: mov edx, dword ptr [eax*8 + 0x9ace74] */ r_edx = R32((u32)(r_eax*8+0x9ace74u));
    /* 004d8128: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 004d812e: mov edx, dword ptr [eax*8 + 0x9ace60] */ r_edx = R32((u32)(r_eax*8+0x9ace60u));
    /* 004d8135: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 004d813b: mov edx, dword ptr [eax*8 + 0x9ace64] */ r_edx = R32((u32)(r_eax*8+0x9ace64u));
    /* 004d8142: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 004d8148: mov eax, dword ptr [eax*8 + 0x9ace68] */ r_eax = R32((u32)(r_eax*8+0x9ace68u));
    /* 004d814f: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
    /* 004d8155: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
L_004d815b:; BB(0x004d815b);
    /* 004d815b: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d815e: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
L_004d8164:; BB(0x004d8164);
    /* 004d8164: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d8167: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8168: ret  */ FN_RET(0x004d80a4); r_esp += 4; return;
L_004d8169:; BB(0x004d8169);
    /* 004d8169: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d816e: call 0x7c0108 */ r_esp -= 4; W32(r_esp, 0x4d8173u); f_007c0108();
    /* 004d8173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8176: je 0x4d8182 */ if (fZ) goto L_004d8182;
L_004d8178:; BB(0x004d8178);
    /* 004d8178: call 0x4d83e4 */ r_esp -= 4; W32(r_esp, 0x4d817du); f_004d83e4();
    /* 004d817d: jmp 0x4d80e9 */ goto L_004d80e9;
L_004d8182:; BB(0x004d8182);
    /* 004d8182: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8187: call 0x7c0108 */ r_esp -= 4; W32(r_esp, 0x4d818cu); f_007c0108();
    /* 004d818c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d818d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d818f: je 0x4d80e9 */ if (fZ) goto L_004d80e9;
L_004d8195:; BB(0x004d8195);
    /* 004d8195: call 0x4d83b8 */ r_esp -= 4; W32(r_esp, 0x4d819au); f_004d83b8();
    /* 004d819a: jmp 0x4d80e9 */ goto L_004d80e9;
L_004d819f:; BB(0x004d819f);
    /* 004d819f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004d81a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d81a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d81a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d81a8: call 0x4cbce8 */ r_esp -= 4; W32(r_esp, 0x4d81adu); f_004cbce8();
    /* 004d81ad: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d81b3: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 004d81b8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d81bdu); f_0068d5a8();
    /* 004d81bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d81c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81c2: je 0x4d81cd */ if (fZ) goto L_004d81cd;
L_004d81c4:; BB(0x004d81c4);
    /* 004d81c4: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 004d81c7: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004d81cd:; BB(0x004d81cd);
    /* 004d81cd: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d81d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81d6: je 0x4d81eb */ if (fZ) goto L_004d81eb;
L_004d81d8:; BB(0x004d81d8);
    /* 004d81d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81db: je 0x4d81eb */ if (fZ) goto L_004d81eb;
L_004d81dd:; BB(0x004d81dd);
    /* 004d81dd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81e0: je 0x4d81eb */ if (fZ) goto L_004d81eb;
L_004d81e2:; BB(0x004d81e2);
    /* 004d81e2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81e5: jne 0x4d8164 */ if (!fZ) goto L_004d8164;
L_004d81eb:; BB(0x004d81eb);
    /* 004d81eb: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d81f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d81f4: je 0x4d8164 */ if (fZ) goto L_004d8164;
L_004d81fa:; BB(0x004d81fa);
    /* 004d81fa: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004d81fe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d8201: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8204: call 0x4d8354 */ r_esp -= 4; W32(r_esp, 0x4d8209u); f_004d8354();
    /* 004d8209: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d820c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d820d: ret  */ FN_RET(0x004d80a4); r_esp += 4; return;
L_004d820e:; BB(0x004d820e);
    /* 004d820e: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004d8212: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d8216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8217: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8218: call 0x4a6ee4 */ r_esp -= 4; W32(r_esp, 0x4d821du); f_004a6ee4();
    /* 004d821d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8223: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 004d8228: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d822du); f_0068d5a8();
    /* 004d822d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8232: je 0x4d823d */ if (fZ) goto L_004d823d;
L_004d8234:; BB(0x004d8234);
    /* 004d8234: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 004d8237: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004d823d:; BB(0x004d823d);
    /* 004d823d: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d8244: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8246: je 0x4d825b */ if (fZ) goto L_004d825b;
L_004d8248:; BB(0x004d8248);
    /* 004d8248: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d824b: je 0x4d825b */ if (fZ) goto L_004d825b;
L_004d824d:; BB(0x004d824d);
    /* 004d824d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8250: je 0x4d825b */ if (fZ) goto L_004d825b;
L_004d8252:; BB(0x004d8252);
    /* 004d8252: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8255: jne 0x4d8164 */ if (!fZ) goto L_004d8164;
L_004d825b:; BB(0x004d825b);
    /* 004d825b: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d8262: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8264: je 0x4d8164 */ if (fZ) goto L_004d8164;
L_004d826a:; BB(0x004d826a);
    /* 004d826a: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004d826e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d8272: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8274: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8275: call 0x4d8354 */ r_esp -= 4; W32(r_esp, 0x4d827au); f_004d8354();
    /* 004d827a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d827d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d827e: ret  */ FN_RET(0x004d80a4); r_esp += 4; return;
L_004d827f:; BB(0x004d827f);
    /* 004d827f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004d8283: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004d8287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8288: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8289: call 0x42380c */ r_esp -= 4; W32(r_esp, 0x4d828eu); f_0042380c();
    /* 004d828e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8294: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 004d8299: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d829eu); f_0068d5a8();
    /* 004d829e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d82a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82a3: je 0x4d82ae */ if (fZ) goto L_004d82ae;
L_004d82a5:; BB(0x004d82a5);
    /* 004d82a5: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 004d82a8: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004d82ae:; BB(0x004d82ae);
    /* 004d82ae: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d82b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82b7: je 0x4d82c8 */ if (fZ) goto L_004d82c8;
L_004d82b9:; BB(0x004d82b9);
    /* 004d82b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82bc: je 0x4d82c8 */ if (fZ) goto L_004d82c8;
L_004d82be:; BB(0x004d82be);
    /* 004d82be: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82c1: je 0x4d82c8 */ if (fZ) goto L_004d82c8;
L_004d82c3:; BB(0x004d82c3);
    /* 004d82c3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82c6: jne 0x4d82e3 */ if (!fZ) goto L_004d82e3;
L_004d82c8:; BB(0x004d82c8);
    /* 004d82c8: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d82cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d82d1: je 0x4d82e3 */ if (fZ) goto L_004d82e3;
L_004d82d3:; BB(0x004d82d3);
    /* 004d82d3: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004d82d7: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004d82db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d82dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d82dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d82de: call 0x4d8354 */ r_esp -= 4; W32(r_esp, 0x4d82e3u); f_004d8354();
L_004d82e3:; BB(0x004d82e3);
    /* 004d82e3: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004d82e7: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004d82eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d82ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d82ed: call 0x42380c */ r_esp -= 4; W32(r_esp, 0x4d82f2u); f_0042380c();
    /* 004d82f2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d82f8: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 004d82fd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d8302u); f_0068d5a8();
    /* 004d8302: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8307: je 0x4d8312 */ if (fZ) goto L_004d8312;
L_004d8309:; BB(0x004d8309);
    /* 004d8309: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 004d830c: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004d8312:; BB(0x004d8312);
    /* 004d8312: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d8319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d831b: je 0x4d8330 */ if (fZ) goto L_004d8330;
L_004d831d:; BB(0x004d831d);
    /* 004d831d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8320: je 0x4d8330 */ if (fZ) goto L_004d8330;
L_004d8322:; BB(0x004d8322);
    /* 004d8322: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8325: je 0x4d8330 */ if (fZ) goto L_004d8330;
L_004d8327:; BB(0x004d8327);
    /* 004d8327: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d832a: jne 0x4d8164 */ if (!fZ) goto L_004d8164;
L_004d8330:; BB(0x004d8330);
    /* 004d8330: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d8337: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8339: je 0x4d8164 */ if (fZ) goto L_004d8164;
L_004d833f:; BB(0x004d833f);
    /* 004d833f: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004d8343: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004d8347: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d834a: call 0x4d8354 */ r_esp -= 4; W32(r_esp, 0x4d834fu); f_004d8354();
    /* 004d834f: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d8352: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8353: ret  */ FN_RET(0x004d80a4); r_esp += 4; return;
}

void f_004d8354(void) /* sub_4D8354 */
{
    FN_ENTER(0x004d8354);
    /* 004d8354: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8355: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8356: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8357: mov edi, ecx */ r_edi = r_ecx;
    /* 004d8359: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004d835d: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004d8361: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 004d8367: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004d8369: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d836d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d8370: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
    /* 004d8376: mov ecx, edi */ r_ecx = r_edi;
    /* 004d8378: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x4d837bu); call_ind(t); }
    /* 004d837b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004d837d: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 004d8383: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004d8386: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 004d838c: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 004d838f: mov dword ptr [edi + 0xf0], esi */ W32((u32)(r_edi+0xf0u), r_esi);
    /* 004d8395: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004d8397: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 004d839d: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004d83a0: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 004d83a6: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 004d83a9: mov dword ptr [edi + 0xe4], ebx */ W32((u32)(r_edi+0xe4u), r_ebx);
    /* 004d83af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d83b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d83b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d83b2: ret 0xc */ FN_RET(0x004d8354); r_esp += 16; return;
}

void f_004d83b8(void) /* sub_4D83B8 */
{
    FN_ENTER(0x004d83b8);
    /* 004d83b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d83b9: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d83be: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d83c1: call 0x4d83cc */ r_esp -= 4; W32(r_esp, 0x4d83c6u); f_004d83cc();
    /* 004d83c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d83c7: ret  */ FN_RET(0x004d83b8); r_esp += 4; return;
}

void f_004d83cc(void) /* sub_4D83CC */
{
    FN_ENTER(0x004d83cc);
    /* 004d83cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d83ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d83d0: jge 0x4d83d4 */ if ((fS==fO)) goto L_004d83d4;
L_004d83d2:; BB(0x004d83d2);
    /* 004d83d2: mov eax, edx */ r_eax = r_edx;
L_004d83d4:; BB(0x004d83d4);
    /* 004d83d4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d83d7: jl 0x4d83de */ if ((fS!=fO)) goto L_004d83de;
L_004d83d9:; BB(0x004d83d9);
    /* 004d83d9: mov eax, 4 */ r_eax = 0x4u;
L_004d83de:; BB(0x004d83de);
    /* 004d83de: mov dword ptr [0x9acedc], eax */ W32((u32)(0x9acedcu), r_eax);
    /* 004d83e3: ret  */ FN_RET(0x004d83cc); r_esp += 4; return;
}

void f_004d83e4(void) /* sub_4D83E4 */
{
    FN_ENTER(0x004d83e4);
    /* 004d83e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d83e5: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d83ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d83ed: call 0x4d83cc */ r_esp -= 4; W32(r_esp, 0x4d83f2u); f_004d83cc();
    /* 004d83f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d83f3: ret  */ FN_RET(0x004d83e4); r_esp += 4; return;
}

void f_004d83f4(void) /* sub_4D83F4 */
{
    FN_ENTER(0x004d83f4);
    /* 004d83f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d83f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d83f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d83f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d83f8: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d83ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8401: jne 0x4d846d */ if (!fZ) goto L_004d846d;
L_004d8403:; BB(0x004d8403);
    /* 004d8403: mov ebp, dword ptr [eax*4 + 0xa48a00] */ r_ebp = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d840a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d840d: mov dword ptr [ebp + 0x100], 1 */ W32((u32)(r_ebp+0x100u), 0x1u);
    /* 004d8417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8419: je 0x4d846d */ if (fZ) goto L_004d846d;
L_004d841b:; BB(0x004d841b);
    /* 004d841b: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 004d841e: lea ebx, [esi + 0x6000] */ r_ebx = (u32)(r_esi+0x6000u);
    /* 004d8424: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8425: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8428: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4d842du); f_007a9018();
    /* 004d842d: mov edi, eax */ r_edi = r_eax;
    /* 004d842f: add esi, 0xffffa000 */ {  u32 a = r_esi; u32 b = 0xffffa000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d8435: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8436: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8439: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4d843eu); f_007a9018();
    /* 004d843e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8441: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8443: jle 0x4d8449 */ if ((fZ||fS!=fO)) goto L_004d8449;
L_004d8445:; BB(0x004d8445);
    /* 004d8445: mov edi, esi */ r_edi = r_esi;
    /* 004d8447: jmp 0x4d844d */ goto L_004d844d;
L_004d8449:; BB(0x004d8449);
    /* 004d8449: mov edi, ebx */ r_edi = r_ebx;
    /* 004d844b: mov ebx, esi */ r_ebx = r_esi;
L_004d844d:; BB(0x004d844d);
    /* 004d844d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d844e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d8450: call 0x4d847c */ r_esp -= 4; W32(r_esp, 0x4d8455u); f_004d847c();
    /* 004d8455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8457: jne 0x4d8461 */ if (!fZ) goto L_004d8461;
L_004d8459:; BB(0x004d8459);
    /* 004d8459: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 004d845c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d845d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d845e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d845f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8460: ret  */ FN_RET(0x004d83f4); r_esp += 4; return;
L_004d8461:; BB(0x004d8461);
    /* 004d8461: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8462: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d8464: call 0x4d847c */ r_esp -= 4; W32(r_esp, 0x4d8469u); f_004d847c();
    /* 004d8469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d846b: je 0x4d8472 */ if (fZ) goto L_004d8472;
L_004d846d:; BB(0x004d846d);
    /* 004d846d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d846e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d846f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d8470: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8471: ret  */ FN_RET(0x004d83f4); r_esp += 4; return;
L_004d8472:; BB(0x004d8472);
    /* 004d8472: mov dword ptr [ebp + 0x30], ebx */ W32((u32)(r_ebp+0x30u), r_ebx);
    /* 004d8475: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d8476: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8477: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d8478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8479: ret  */ FN_RET(0x004d83f4); r_esp += 4; return;
}

void f_004d847c(void) /* sub_4D847C */
{
    FN_ENTER(0x004d847c);
    /* 004d847c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d847d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d8480: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d8482: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d8488: fld dword ptr [0x909738] */ FPUSH(R_F32((u32)(0x909738u)));
    /* 004d848e: fadd dword ptr [ebp + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xe4u));
    /* 004d8494: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d849a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d849d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 004d84a3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004d84a7: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 004d84ad: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d84b1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d84b5: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 004d84bb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d84c0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d84c4: mov eax, dword ptr [ebp + 0xe0] */ r_eax = R32((u32)(r_ebp+0xe0u));
    /* 004d84ca: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d84ce: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d84d3u); f_0082d990();
    /* 004d84d3: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004d84d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d84d9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d84deu); f_0082d8bc();
    /* 004d84de: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d84e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d84e3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004d84e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d84e9: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d84eeu); f_00830aa0();
    /* 004d84ee: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d84f3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d84f8u); f_0082eb80();
    /* 004d84f8: fld dword ptr [0x909734] */ FPUSH(R_F32((u32)(0x909734u)));
    /* 004d84fe: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004d8501: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004d8504: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004d8507: mov ebp, dword ptr [ecx + 0x40] */ r_ebp = R32((u32)(r_ecx+0x40u));
    /* 004d850a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d850e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004d8512: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004d8516: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d851a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004d851e: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 004d8522: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 004d8526: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004d852a: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 004d852e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004d8532: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004d8536: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004d853a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004d853d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d8541: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8548: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d854du); f_0077fffc();
    /* 004d854d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8552: je 0x4d8560 */ if (fZ) goto L_004d8560;
L_004d8554:; BB(0x004d8554);
    /* 004d8554: mov eax, 1 */ r_eax = 0x1u;
    /* 004d8559: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d855c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d855d: ret 4 */ FN_RET(0x004d847c); r_esp += 8; return;
L_004d8560:; BB(0x004d8560);
    /* 004d8560: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d8565: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004d8569: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004d856e: add eax, 0x184 */ {  u32 a = r_eax; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d8573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8575: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d857au); f_0077fffc();
    /* 004d857a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d857d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d857f: je 0x4d858d */ if (fZ) goto L_004d858d;
L_004d8581:; BB(0x004d8581);
    /* 004d8581: mov eax, 1 */ r_eax = 0x1u;
    /* 004d8586: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d8589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d858a: ret 4 */ FN_RET(0x004d847c); r_esp += 8; return;
L_004d858d:; BB(0x004d858d);
    /* 004d858d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d858f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d8592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8593: ret 4 */ FN_RET(0x004d847c); r_esp += 8; return;
}

void f_004d8598(void) /* sub_4D8598 */
{
    FN_ENTER(0x004d8598);
    /* 004d8598: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d859f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d85a1: jne 0x4d85ae */ if (!fZ) goto L_004d85ae;
L_004d85a3:; BB(0x004d85a3);
    /* 004d85a3: mov eax, dword ptr [eax*4 + 0xa48a00] */ r_eax = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d85aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d85ac: jne 0x4d85af */ if (!fZ) goto L_004d85af;
L_004d85ae:; BB(0x004d85ae);
    /* 004d85ae: ret  */ FN_RET(0x004d8598); r_esp += 4; return;
L_004d85af:; BB(0x004d85af);
    /* 004d85af: mov dword ptr [eax + 0x104], 1 */ W32((u32)(r_eax+0x104u), 0x1u);
    /* 004d85b9: ret  */ FN_RET(0x004d8598); r_esp += 4; return;
}

void f_004d85bc(void) /* sub_4D85BC */
{
    FN_ENTER(0x004d85bc);
    /* 004d85bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d85bd: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 004d85c2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d85c8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d85cdu); f_0068d5a8();
    /* 004d85cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d85ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d85d0: je 0x4d85db */ if (fZ) goto L_004d85db;
L_004d85d2:; BB(0x004d85d2);
    /* 004d85d2: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 004d85d5: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004d85db:; BB(0x004d85db);
    /* 004d85db: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d85e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d85e4: je 0x4d85f5 */ if (fZ) goto L_004d85f5;
L_004d85e6:; BB(0x004d85e6);
    /* 004d85e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d85e9: je 0x4d85f5 */ if (fZ) goto L_004d85f5;
L_004d85eb:; BB(0x004d85eb);
    /* 004d85eb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d85ee: je 0x4d85f5 */ if (fZ) goto L_004d85f5;
L_004d85f0:; BB(0x004d85f0);
    /* 004d85f0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d85f3: jne 0x4d860e */ if (!fZ) goto L_004d860e;
L_004d85f5:; BB(0x004d85f5);
    /* 004d85f5: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d85fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d85fe: je 0x4d860e */ if (fZ) goto L_004d860e;
L_004d8600:; BB(0x004d8600);
    /* 004d8600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8601: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8605: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8609: call 0x4d8354 */ r_esp -= 4; W32(r_esp, 0x4d860eu); f_004d8354();
L_004d860e:; BB(0x004d860e);
    /* 004d860e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d860f: ret  */ FN_RET(0x004d85bc); r_esp += 4; return;
}

void f_004d8610(void) /* sub_4D8610 */
{
    FN_ENTER(0x004d8610);
    /* 004d8610: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d8614: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004d8618: movzx ecx, byte ptr [0xa48b74] */ r_ecx = (u32)R8((u32)(0xa48b74u));
    /* 004d861f: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8625: mov byte ptr [0xa48b74], cl */ W8((u32)(0xa48b74u), (u8)r_ecx);
    /* 004d862b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004d862d: mov dword ptr [0xa48b68], ecx */ W32((u32)(0xa48b68u), r_ecx);
    /* 004d8633: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d8636: mov dword ptr [0xa48b6c], ecx */ W32((u32)(0xa48b6cu), r_ecx);
    /* 004d863c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004d863f: mov dword ptr [0xa48b70], eax */ W32((u32)(0xa48b70u), r_eax);
    /* 004d8644: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004d8646: mov dword ptr [0xa48b5c], eax */ W32((u32)(0xa48b5cu), r_eax);
    /* 004d864b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004d864e: mov dword ptr [0xa48b60], eax */ W32((u32)(0xa48b60u), r_eax);
    /* 004d8653: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004d8656: mov dword ptr [0xa48b64], eax */ W32((u32)(0xa48b64u), r_eax);
    /* 004d865b: ret  */ FN_RET(0x004d8610); r_esp += 4; return;
}

void f_004d865c(void) /* sub_4D865C */
{
    FN_ENTER(0x004d865c);
    /* 004d865c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d8660: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 004d8665: movzx ecx, byte ptr [0xa48b74] */ r_ecx = (u32)R8((u32)(0xa48b74u));
    /* 004d866c: or ecx, 0xffffff02 */ {  u32 a = r_ecx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8672: mov byte ptr [0xa48b74], cl */ W8((u32)(0xa48b74u), (u8)r_ecx);
    /* 004d8678: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004d867a: mov dword ptr [0xa48b68], ecx */ W32((u32)(0xa48b68u), r_ecx);
    /* 004d8680: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d8683: mov dword ptr [0xa48b6c], ecx */ W32((u32)(0xa48b6cu), r_ecx);
    /* 004d8689: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004d868c: mov dword ptr [0xa48b70], eax */ W32((u32)(0xa48b70u), r_eax);
    /* 004d8691: mov word ptr [0x9aced8], dx */ W16((u32)(0x9aced8u), (u16)r_edx);
    /* 004d8698: ret  */ FN_RET(0x004d865c); r_esp += 4; return;
}

void f_004d869c(void) /* sub_4D869C */
{
    FN_ENTER(0x004d869c);
    /* 004d869c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d86a2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004d86a7: mov byte ptr [0xa48b74], 0 */ W8((u32)(0xa48b74u), 0x0u);
    /* 004d86ae: mov word ptr [0x9aced8], ax */ W16((u32)(0x9aced8u), (u16)r_eax);
    /* 004d86b4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d86b9u); f_0068d5a8();
    /* 004d86b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d86bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d86bc: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x4d86c1u); f_004d2fb4();
    /* 004d86c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d86c4: ret  */ FN_RET(0x004d869c); r_esp += 4; return;
}

void f_004d86f4(void) /* sub_4D86F4 */
{
    FN_ENTER(0x004d86f4);
    /* 004d86f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d86f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d86f6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d86f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d86fb: mov eax, dword ptr [0x9acedc] */ r_eax = R32((u32)(0x9acedcu));
    /* 004d8700: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004d8707: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d870a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d870c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d8714: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004d8716: mov eax, dword ptr [edx*8 + 0x9ace68] */ r_eax = R32((u32)(r_edx*8+0x9ace68u));
    /* 004d871d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d8721: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8727: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d872cu); f_0068d5a8();
    /* 004d872c: mov edi, eax */ r_edi = r_eax;
    /* 004d872e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8731: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d8736u); f_00807ac0();
    /* 004d8736: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8738: je 0x4d87c4 */ if (fZ) goto L_004d87c4;
L_004d873e:; BB(0x004d873e);
    /* 004d873e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004d8741: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8747: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004d874a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d874f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d8754u); f_0082d990();
    /* 004d8754: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004d8757: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d8759: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d875eu); f_0082d8bc();
    /* 004d875e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004d8761: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8762: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004d8766: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d8768: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d876du); f_00830aa0();
    /* 004d876d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d8772: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d8777u); f_0082eb80();
    /* 004d8777: mov edx, dword ptr [0x9acedc] */ r_edx = R32((u32)(0x9acedcu));
    /* 004d877d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004d8781: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004d8784: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004d8787: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d878a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d878c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d878e: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004d8791: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d8794: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004d8797: fadd dword ptr [eax*8 + 0x9ace70] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x9ace70u));
    /* 004d879e: fst dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0));
    /* 004d87a1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004d87a3: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004d87a6: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 004d87aa: mov edi, dword ptr [edi + 0x40] */ r_edi = R32((u32)(r_edi+0x40u));
    /* 004d87ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d87af: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 004d87b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d87b4: fst dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0));
    /* 004d87b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d87b9: fst dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0));
    /* 004d87bc: mov dword ptr [ebx + 0x50], edi */ W32((u32)(r_ebx+0x50u), r_edi);
    /* 004d87bf: jmp 0x4d88c2 */ goto L_004d88c2;
L_004d87c4:; BB(0x004d87c4);
    /* 004d87c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d87c6: je 0x4d887d */ if (fZ) goto L_004d887d;
L_004d87cc:; BB(0x004d87cc);
    /* 004d87cc: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d87cf: je 0x4d887d */ if (fZ) goto L_004d887d;
L_004d87d5:; BB(0x004d87d5);
    /* 004d87d5: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d87d8: jne 0x4d8825 */ if (!fZ) goto L_004d8825;
L_004d87da:; BB(0x004d87da);
    /* 004d87da: mov eax, dword ptr [0x9acb4c] */ r_eax = R32((u32)(0x9acb4cu));
    /* 004d87df: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004d87e2: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004d87e5: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 004d87e8: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 004d87eb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004d87ee: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004d87f1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004d87f4: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d87f7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004d87fa: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004d87fd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d8800: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004d8803: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004d8806: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004d8809: push dword ptr [eax + 0x44] */ { u32 v = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d880c: push dword ptr [eax + 0x40] */ { u32 v = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d880f: call 0x83ac80 */ r_esp -= 4; W32(r_esp, 0x4d8814u); f_0083ac80();
    /* 004d8814: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8817: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d881a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d881d: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 004d8820: jmp 0x4d88c2 */ goto L_004d88c2;
L_004d8825:; BB(0x004d8825);
    /* 004d8825: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8828: jne 0x4d8872 */ if (!fZ) goto L_004d8872;
L_004d882a:; BB(0x004d882a);
    /* 004d882a: mov eax, dword ptr [0x9acb4c] */ r_eax = R32((u32)(0x9acb4cu));
    /* 004d882f: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004d8832: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004d8835: mov edi, dword ptr [eax + 0x4c] */ r_edi = R32((u32)(r_eax+0x4cu));
    /* 004d8838: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 004d883b: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004d883e: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004d8841: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004d8844: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d8847: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004d884a: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004d884d: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004d8850: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004d8853: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004d8856: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004d8859: push dword ptr [eax + 0x68] */ { u32 v = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d885c: push dword ptr [eax + 0x64] */ { u32 v = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d885f: call 0x83ac80 */ r_esp -= 4; W32(r_esp, 0x4d8864u); f_0083ac80();
    /* 004d8864: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8867: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d886a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d886d: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 004d8870: jmp 0x4d88c2 */ goto L_004d88c2;
L_004d8872:; BB(0x004d8872);
    /* 004d8872: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d8875: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d8878: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 004d887b: jmp 0x4d88c2 */ goto L_004d88c2;
L_004d887d:; BB(0x004d887d);
    /* 004d887d: mov eax, dword ptr [0x9acb4c] */ r_eax = R32((u32)(0x9acb4cu));
    /* 004d8882: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004d8884: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004d8887: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 004d888a: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 004d888d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004d8890: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004d8893: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004d8896: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004d8899: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004d889c: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004d889f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004d88a2: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004d88a5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004d88a8: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004d88ab: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d88ae: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d88b1: call 0x83ac80 */ r_esp -= 4; W32(r_esp, 0x4d88b6u); f_0083ac80();
    /* 004d88b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d88b9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004d88bc: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004d88bf: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
L_004d88c2:; BB(0x004d88c2);
    /* 004d88c2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d88c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d88c7: fchs  */ ST(0) = -ST(0);
    /* 004d88c9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d88cc: fchs  */ ST(0) = -ST(0);
    /* 004d88ce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d88d2: fchs  */ ST(0) = -ST(0);
    /* 004d88d4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d88d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d88da: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4d88dfu); f_00830b74();
    /* 004d88df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d88e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d88e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d88e4: ret  */ FN_RET(0x004d86f4); r_esp += 4; return;
}

void f_004d88e8(void) /* sub_4D88E8 */
{
    FN_ENTER(0x004d88e8);
    /* 004d88e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d88e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d88eb: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004d88f0: mov dword ptr [ebp + 0x38], 5 */ W32((u32)(r_ebp+0x38u), 0x5u);
    /* 004d88f7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d88fa: je 0x4d89b5 */ if (fZ) goto L_004d89b5;
L_004d8900:; BB(0x004d8900);
    /* 004d8900: mov dword ptr [ebp + 0x58], 0x3f2b851f */ W32((u32)(r_ebp+0x58u), 0x3f2b851fu);
L_004d8907:; BB(0x004d8907);
    /* 004d8907: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d890d: lea eax, [edx + 0x178] */ r_eax = (u32)(r_edx+0x178u);
    /* 004d8913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8914: add edx, 0x184 */ {  u32 a = r_edx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d891a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d891b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4d8920u); f_007a9180();
    /* 004d8920: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8923: fcomp dword ptr [0x9096e4] */ fx_compare(ST(0), R_F32((u32)(0x9096e4u))); FPOP();
    /* 004d8929: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d892b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d892c: jb 0x4d893f */ if (fC) goto L_004d893f;
L_004d892e:; BB(0x004d892e);
    /* 004d892e: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 004d8934: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d8937: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
    /* 004d893d: jmp 0x4d894e */ goto L_004d894e;
L_004d893f:; BB(0x004d893f);
    /* 004d893f: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 004d8945: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d8948: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
L_004d894e:; BB(0x004d894e);
    /* 004d894e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d8950: call 0x4d235c */ r_esp -= 4; W32(r_esp, 0x4d8955u); f_004d235c();
    /* 004d8955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8957: jne 0x4d896a */ if (!fZ) goto L_004d896a;
L_004d8959:; BB(0x004d8959);
    /* 004d8959: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 004d895f: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d8962: mov dword ptr [ebp + 0xfc], eax */ W32((u32)(r_ebp+0xfcu), r_eax);
    /* 004d8968: jmp 0x4d89ab */ goto L_004d89ab;
L_004d896a:; BB(0x004d896a);
    /* 004d896a: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d8970: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004d8973: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8979: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d897c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d897d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d897e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4d8983u); f_007a9180();
    /* 004d8983: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8986: fcomp dword ptr [0x9096e0] */ fx_compare(ST(0), R_F32((u32)(0x9096e0u))); FPOP();
    /* 004d898c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d898e: mov edx, dword ptr [ebp + 0xfc] */ r_edx = R32((u32)(r_ebp+0xfcu));
    /* 004d8994: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d8997: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d8998: jbe 0x4d89a2 */ if ((fC||fZ)) goto L_004d89a2;
L_004d899a:; BB(0x004d899a);
    /* 004d899a: mov dword ptr [ebp + 0xfc], edx */ W32((u32)(r_ebp+0xfcu), r_edx);
    /* 004d89a0: jmp 0x4d89ab */ goto L_004d89ab;
L_004d89a2:; BB(0x004d89a2);
    /* 004d89a2: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d89a5: mov dword ptr [ebp + 0xfc], edx */ W32((u32)(r_ebp+0xfcu), r_edx);
L_004d89ab:; BB(0x004d89ab);
    /* 004d89ab: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004d89ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d89b0: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x4d89b3u); call_ind(t); }
    /* 004d89b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d89b4: ret  */ FN_RET(0x004d88e8); r_esp += 4; return;
L_004d89b5:; BB(0x004d89b5);
    /* 004d89b5: mov dword ptr [ebp + 0x58], 0x3f0f5c29 */ W32((u32)(r_ebp+0x58u), 0x3f0f5c29u);
    /* 004d89bc: jmp 0x4d8907 */ goto L_004d8907;
}

void f_004d89c4(void) /* sub_4D89C4 */
{
    FN_ENTER(0x004d89c4);
    /* 004d89c4: mov dword ptr [0xa48b7c], 0x3f800000 */ W32((u32)(0xa48b7cu), 0x3f800000u);
    /* 004d89ce: mov dword ptr [0xa48b80], 0x41000000 */ W32((u32)(0xa48b80u), 0x41000000u);
    /* 004d89d8: mov dword ptr [0xa48b84], 0x3fc00000 */ W32((u32)(0xa48b84u), 0x3fc00000u);
    /* 004d89e2: ret  */ FN_RET(0x004d89c4); r_esp += 4; return;
}

void f_004d89e4(void) /* sub_4D89E4 */
{
    FN_ENTER(0x004d89e4);
    /* 004d89e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d89e5: mov ebp, esp */ r_ebp = r_esp;
    /* 004d89e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d89e9: push 0x8d2108 */ { u32 v = 0x8d2108u; r_esp -= 4; W32(r_esp, v); }
    /* 004d89ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d89f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d89f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d89fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d89ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d8a02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d8a05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d8a08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d8a0b: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d8a17: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d8a1cu); f_005caba4();
    /* 004d8a1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8a1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d8a20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8a22: je 0x4d8a55 */ if (fZ) goto L_004d8a55;
L_004d8a24:; BB(0x004d8a24);
    /* 004d8a24: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d8a2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d8a32: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8a35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d8a38: call 0x4d8aac */ r_esp -= 4; W32(r_esp, 0x4d8a3du); f_004d8aac();
    /* 004d8a3d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d8a40: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d8a47:; BB(0x004d8a47);
    /* 004d8a47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d8a4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d8a51: mov esp, ebp */ r_esp = r_ebp;
    /* 004d8a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8a54: ret  */ FN_RET(0x004d89e4); r_esp += 4; return;
L_004d8a55:; BB(0x004d8a55);
    /* 004d8a55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8a57: jmp 0x4d8a47 */ goto L_004d8a47;
}

void f_004d8a5c(void) /* sub_4D8A5C */
{
    FN_ENTER(0x004d8a5c);
    /* 004d8a5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a5d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d8a5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a61: push 0x8d2124 */ { u32 v = 0x8d2124u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d8a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8a6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d8a74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d8a77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d8a7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d8a7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d8a80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d8a83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d8a86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d8a89: mov dword ptr [ecx], 0xafcb18 */ W32((u32)(r_ecx), 0xafcb18u);
    /* 004d8a8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d8a96: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d8a9bu); f_008171e8();
    /* 004d8a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d8a9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d8aa5: mov esp, ebp */ r_esp = r_ebp;
    /* 004d8aa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8aa8: ret  */ FN_RET(0x004d8a5c); r_esp += 4; return;
}

void f_004d8aac(void) /* sub_4D8AAC */
{
    FN_ENTER(0x004d8aac);
    /* 004d8aac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8aad: mov edi, ecx */ r_edi = r_ecx;
    /* 004d8aaf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8ab3: mov ecx, edi */ r_ecx = r_edi;
    /* 004d8ab5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d8abau); f_008193cc();
    /* 004d8aba: mov dword ptr [edi], 0xafcb18 */ W32((u32)(r_edi), 0xafcb18u);
    /* 004d8ac0: mov edx, dword ptr [0x9acee0] */ r_edx = R32((u32)(0x9acee0u));
    /* 004d8ac6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004d8ac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8acb: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004d8ace: mov dword ptr [edi + 0x120], eax */ W32((u32)(r_edi+0x120u), r_eax);
    /* 004d8ad4: mov eax, edi */ r_eax = r_edi;
    /* 004d8ad6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8ad7: ret 4 */ FN_RET(0x004d8aac); r_esp += 8; return;
}

void f_004d8adc(void) /* sub_4D8ADC */
{
    FN_ENTER(0x004d8adc);
    /* 004d8adc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8add: call 0x6cb2c0 */ r_esp -= 4; W32(r_esp, 0x4d8ae2u); f_006cb2c0();
    /* 004d8ae2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8ae5: je 0x4d8aeb */ if (fZ) goto L_004d8aeb;
L_004d8ae7:; BB(0x004d8ae7);
    /* 004d8ae7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8ae9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8aea: ret  */ FN_RET(0x004d8adc); r_esp += 4; return;
L_004d8aeb:; BB(0x004d8aeb);
    /* 004d8aeb: mov eax, dword ptr [0xa48c28] */ r_eax = R32((u32)(0xa48c28u));
    /* 004d8af0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8af2: je 0x4d8af8 */ if (fZ) goto L_004d8af8;
L_004d8af4:; BB(0x004d8af4);
    /* 004d8af4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8af7: ret  */ FN_RET(0x004d8adc); r_esp += 4; return;
L_004d8af8:; BB(0x004d8af8);
    /* 004d8af8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8afe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d8b03u); f_0068d5a8();
    /* 004d8b03: mov edi, eax */ r_edi = r_eax;
    /* 004d8b05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8b08: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b0a: je 0x4d8b7b */ if (fZ) goto L_004d8b7b;
L_004d8b0c:; BB(0x004d8b0c);
    /* 004d8b0c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d8b11u); f_00807ac0();
    /* 004d8b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b13: je 0x4d8b3f */ if (fZ) goto L_004d8b3f;
L_004d8b15:; BB(0x004d8b15);
    /* 004d8b15: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b18: je 0x4d8b3f */ if (fZ) goto L_004d8b3f;
L_004d8b1a:; BB(0x004d8b1a);
    /* 004d8b1a: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b1d: jne 0x4d8b5c */ if (!fZ) goto L_004d8b5c;
L_004d8b1f:; BB(0x004d8b1f);
    /* 004d8b1f: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004d8b22: fcomp dword ptr [0x9097b8] */ fx_compare(ST(0), R_F32((u32)(0x9097b8u))); FPOP();
    /* 004d8b28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d8b2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d8b2b: jbe 0x4d8b3b */ if ((fC||fZ)) goto L_004d8b3b;
L_004d8b2d:; BB(0x004d8b2d);
    /* 004d8b2d: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004d8b30: fcomp dword ptr [0x9097b4] */ fx_compare(ST(0), R_F32((u32)(0x9097b4u))); FPOP();
    /* 004d8b36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d8b38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d8b39: ja 0x4d8b5c */ if ((!fC&&!fZ)) goto L_004d8b5c;
L_004d8b3b:; BB(0x004d8b3b);
    /* 004d8b3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8b3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8b3e: ret  */ FN_RET(0x004d8adc); r_esp += 4; return;
L_004d8b3f:; BB(0x004d8b3f);
    /* 004d8b3f: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004d8b42: fcom dword ptr [0x9097b0] */ fx_compare(ST(0), R_F32((u32)(0x9097b0u))); 
    /* 004d8b48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d8b4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d8b4b: ja 0x4d8b51 */ if ((!fC&&!fZ)) goto L_004d8b51;
L_004d8b4d:; BB(0x004d8b4d);
    /* 004d8b4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d8b4f: jmp 0x4d8b7b */ goto L_004d8b7b;
L_004d8b51:; BB(0x004d8b51);
    /* 004d8b51: fcomp dword ptr [0x9097ac] */ fx_compare(ST(0), R_F32((u32)(0x9097acu))); FPOP();
    /* 004d8b57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d8b59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d8b5a: jae 0x4d8b7b */ if (!fC) goto L_004d8b7b;
L_004d8b5c:; BB(0x004d8b5c);
    /* 004d8b5c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d8b62: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d8b67u); f_0068d5a8();
    /* 004d8b67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8b68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b6a: je 0x4d8b7b */ if (fZ) goto L_004d8b7b;
L_004d8b6c:; BB(0x004d8b6c);
    /* 004d8b6c: mov eax, dword ptr [eax + 0xdf4] */ r_eax = R32((u32)(r_eax+0xdf4u));
    /* 004d8b72: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 004d8b76: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d8b79: jge 0x4d8b7f */ if ((fS==fO)) goto L_004d8b7f;
L_004d8b7b:; BB(0x004d8b7b);
    /* 004d8b7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8b7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8b7e: ret  */ FN_RET(0x004d8adc); r_esp += 4; return;
L_004d8b7f:; BB(0x004d8b7f);
    /* 004d8b7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004d8b84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8b85: ret  */ FN_RET(0x004d8adc); r_esp += 4; return;
}

void f_004d8b88(void) /* sub_4D8B88 */
{
    FN_ENTER(0x004d8b88);
    /* 004d8b88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8b89: mov edi, ecx */ r_edi = r_ecx;
    /* 004d8b8b: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004d8b8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8b90: jne 0x4d8b9d */ if (!fZ) goto L_004d8b9d;
L_004d8b92:; BB(0x004d8b92);
    /* 004d8b92: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4d8b97u); f_00719914();
    /* 004d8b97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8b99: jne 0x4d8bc3 */ if (!fZ) goto L_004d8bc3;
L_004d8b9b:; BB(0x004d8b9b);
    /* 004d8b9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8b9c: ret  */ FN_RET(0x004d8b88); r_esp += 4; return;
L_004d8b9d:; BB(0x004d8b9d);
    /* 004d8b9d: mov ecx, edi */ r_ecx = r_edi;
    /* 004d8b9f: call 0x4d8adc */ r_esp -= 4; W32(r_esp, 0x4d8ba4u); f_004d8adc();
    /* 004d8ba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8ba6: jne 0x4d8bc1 */ if (!fZ) goto L_004d8bc1;
L_004d8ba8:; BB(0x004d8ba8);
    /* 004d8ba8: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 004d8bab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4d8bb0u); f_007127b0();
    /* 004d8bb0: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 004d8bb7: mov dword ptr [edi + 0x120], 0x1e */ W32((u32)(r_edi+0x120u), 0x1eu);
L_004d8bc1:; BB(0x004d8bc1);
    /* 004d8bc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8bc2: ret  */ FN_RET(0x004d8b88); r_esp += 4; return;
L_004d8bc3:; BB(0x004d8bc3);
    /* 004d8bc3: mov ecx, edi */ r_ecx = r_edi;
    /* 004d8bc5: call 0x4d8adc */ r_esp -= 4; W32(r_esp, 0x4d8bcau); f_004d8adc();
    /* 004d8bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8bcc: je 0x4d8be3 */ if (fZ) goto L_004d8be3;
L_004d8bce:; BB(0x004d8bce);
    /* 004d8bce: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 004d8bd4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d8bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d8bd9: jl 0x4d8bff */ if ((fS!=fO)) goto L_004d8bff;
L_004d8bdb:; BB(0x004d8bdb);
    /* 004d8bdb: mov dword ptr [edi + 0x120], eax */ W32((u32)(r_edi+0x120u), r_eax);
    /* 004d8be1: jmp 0x4d8bf2 */ goto L_004d8bf2;
L_004d8be3:; BB(0x004d8be3);
    /* 004d8be3: mov dword ptr [edi + 0x120], 0x1e */ W32((u32)(r_edi+0x120u), 0x1eu);
    /* 004d8bed: mov eax, 0x1e */ r_eax = 0x1eu;
L_004d8bf2:; BB(0x004d8bf2);
    /* 004d8bf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8bf4: jne 0x4d8bc1 */ if (!fZ) goto L_004d8bc1;
L_004d8bf6:; BB(0x004d8bf6);
    /* 004d8bf6: mov ecx, edi */ r_ecx = r_edi;
    /* 004d8bf8: call 0x4d8c10 */ r_esp -= 4; W32(r_esp, 0x4d8bfdu); f_004d8c10();
    /* 004d8bfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8bfe: ret  */ FN_RET(0x004d8b88); r_esp += 4; return;
L_004d8bff:; BB(0x004d8bff);
    /* 004d8bff: mov dword ptr [edi + 0x120], 0 */ W32((u32)(r_edi+0x120u), 0x0u);
    /* 004d8c09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d8c0b: jmp 0x4d8bf2 */ goto L_004d8bf2;
}

void f_004d8c10(void) /* sub_4D8C10 */
{
    FN_ENTER(0x004d8c10);
    /* 004d8c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c12: mov edi, ecx */ r_edi = r_ecx;
    /* 004d8c14: movzx eax, byte ptr [0xa48b78] */ r_eax = (u32)R8((u32)(0xa48b78u));
    /* 004d8c1b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d8c1d: jne 0x4d8c3d */ if (!fZ) goto L_004d8c3d;
L_004d8c1f:; BB(0x004d8c1f);
    /* 004d8c1f: mov dword ptr [0xa48b88], 0x43930000 */ W32((u32)(0xa48b88u), 0x43930000u);
    /* 004d8c29: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d8c2e: mov byte ptr [0xa48b78], al */ W8((u32)(0xa48b78u), (u8)r_eax);
    /* 004d8c33: mov dword ptr [0xa48b8c], 0x42b40000 */ W32((u32)(0xa48b8cu), 0x42b40000u);
L_004d8c3d:; BB(0x004d8c3d);
    /* 004d8c3d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c3f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4d8c44u); f_0073ec50();
    /* 004d8c44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c46: push 0xa48b88 */ { u32 v = 0xa48b88u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c4c: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4d8c51u); f_0073a8dc();
    /* 004d8c51: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8c54: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004d8c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8c59: je 0x4d8c9a */ if (fZ) goto L_004d8c9a;
L_004d8c5b:; BB(0x004d8c5b);
    /* 004d8c5b: push 0x47891c00 */ { u32 v = 0x47891c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c60: mov ecx, eax */ r_ecx = r_eax;
    /* 004d8c62: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4d8c67u); f_00712624();
    /* 004d8c67: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004d8c6c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8c6f: je 0x4d8c9d */ if (fZ) goto L_004d8c9d;
L_004d8c71:; BB(0x004d8c71);
    /* 004d8c71: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c73: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4d8c78u); f_007930dc();
    /* 004d8c78: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c7b: lea esi, [edi + 0x20] */ r_esi = (u32)(r_edi+0x20u);
    /* 004d8c7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c7f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4d8c84u); f_00857dec();
    /* 004d8c84: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8c87: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 004d8c8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d8c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c8d: mov word ptr [edi + 0x11e], ax */ W16((u32)(r_edi+0x11eu), (u16)r_eax);
    /* 004d8c94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8c95: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4d8c9au); f_0073ae38();
L_004d8c9a:; BB(0x004d8c9a);
    /* 004d8c9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d8c9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d8c9c: ret  */ FN_RET(0x004d8c10); r_esp += 4; return;
L_004d8c9d:; BB(0x004d8c9d);
    /* 004d8c9d: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ca2: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ca7: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 004d8caa: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x4d8cafu); f_0070f5a4();
    /* 004d8caf: jmp 0x4d8c71 */ goto L_004d8c71;
}

void f_004d8cb4(void) /* sub_4D8CB4 */
{
    FN_ENTER(0x004d8cb4);
    /* 004d8cb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8cb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d8cb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d8cb9: call 0x4d8a5c */ r_esp -= 4; W32(r_esp, 0x4d8cbeu); f_004d8a5c();
    /* 004d8cbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d8cc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8cc4: jne 0x4d8cca */ if (!fZ) goto L_004d8cca;
L_004d8cc6:; BB(0x004d8cc6);
    /* 004d8cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d8cc7: ret 4 */ FN_RET(0x004d8cb4); r_esp += 8; return;
L_004d8cca:; BB(0x004d8cca);
    /* 004d8cca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ccb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d8cd0u); f_005c2f74();
    /* 004d8cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8cd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d8cd2: ret 4 */ FN_RET(0x004d8cb4); r_esp += 8; return;
}

void f_004d8cd8(void) /* sub_4D8CD8 */
{
    FN_ENTER(0x004d8cd8);
    /* 004d8cd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8cd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d8cdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d8cdd: call 0x4d8cfc */ r_esp -= 4; W32(r_esp, 0x4d8ce2u); f_004d8cfc();
    /* 004d8ce2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d8ce6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8ce8: jne 0x4d8cee */ if (!fZ) goto L_004d8cee;
L_004d8cea:; BB(0x004d8cea);
    /* 004d8cea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d8ceb: ret 4 */ FN_RET(0x004d8cd8); r_esp += 8; return;
L_004d8cee:; BB(0x004d8cee);
    /* 004d8cee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8cef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d8cf4u); f_005c2f74();
    /* 004d8cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8cf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d8cf6: ret 4 */ FN_RET(0x004d8cd8); r_esp += 8; return;
}

void f_004d8cfc(void) /* sub_4D8CFC */
{
    FN_ENTER(0x004d8cfc);
    /* 004d8cfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d8cfd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d8cff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8d01: push 0x8d2140 */ { u32 v = 0x8d2140u; r_esp -= 4; W32(r_esp, v); }
    /* 004d8d06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d8d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d8d0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d8d14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d8d17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d8d1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d8d1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d8d20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d8d23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d8d26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d8d2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d8d30: mov dword ptr [eax], 0xafcba0 */ W32((u32)(r_eax), 0xafcba0u);
    /* 004d8d36: call 0x4deec0 */ r_esp -= 4; W32(r_esp, 0x4d8d3bu); f_004deec0();
    /* 004d8d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d8d3d: mov dword ptr [0xa48fdc], eax */ W32((u32)(0xa48fdcu), r_eax);
    /* 004d8d42: mov dword ptr [0xa49120], eax */ W32((u32)(0xa49120u), r_eax);
    /* 004d8d47: mov edi, 0xa48be0 */ r_edi = 0xa48be0u;
    /* 004d8d4c: mov dword ptr [0xa49264], eax */ W32((u32)(0xa49264u), r_eax);
    /* 004d8d51: mov dword ptr [0xa493a8], eax */ W32((u32)(0xa493a8u), r_eax);
    /* 004d8d56: mov esi, 0x9b06c0 */ r_esi = 0x9b06c0u;
    /* 004d8d5b: mov ecx, 0x91c */ r_ecx = 0x91cu;
    /* 004d8d60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8d61: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004d8d64: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004d8d66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8d67: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004d8d6a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004d8d6c: mov dword ptr [0xa49510], 0 */ W32((u32)(0xa49510u), 0x0u);
    /* 004d8d76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d8d7d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d8d80: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d8d85u); f_008171e8();
    /* 004d8d85: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d8d88: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d8d8b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d8d8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d8d91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d8d98: mov esp, ebp */ r_esp = r_ebp;
    /* 004d8d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8d9b: ret  */ FN_RET(0x004d8cfc); r_esp += 4; return;
}

void f_004d8d80(void)
{
    FN_ENTER(0x004d8d80);
    /* 004d8d80: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d8d85u); f_008171e8();
    /* 004d8d85: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d8d88: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d8d8b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d8d8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d8d91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d8d98: mov esp, ebp */ r_esp = r_ebp;
    /* 004d8d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d8d9b: ret  */ FN_RET(0x004d8d80); r_esp += 4; return;
}

void f_004d8d9c(void) /* sub_4D8D9C */
{
    FN_ENTER(0x004d8d9c);
    /* 004d8d9c: call 0x4d8dc0 */ r_esp -= 4; W32(r_esp, 0x4d8da1u); f_004d8dc0();
    /* 004d8da1: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004d8da5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d8da7: jl 0x4d8db7 */ if ((fS!=fO)) goto L_004d8db7;
L_004d8da9:; BB(0x004d8da9);
    /* 004d8da9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d8dad: cmp eax, 0x8c9f */ {  u32 a = r_eax; u32 b = 0x8c9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d8db2: jg 0x4d8db7 */ if ((!fZ&&fS==fO)) goto L_004d8db7;
L_004d8db4:; BB(0x004d8db4);
    /* 004d8db4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8db6: ret  */ FN_RET(0x004d8d9c); r_esp += 4; return;
L_004d8db7:; BB(0x004d8db7);
    /* 004d8db7: mov eax, 1 */ r_eax = 0x1u;
    /* 004d8dbc: ret  */ FN_RET(0x004d8d9c); r_esp += 4; return;
}

void f_004d8dc0(void) /* sub_4D8DC0 */
{
    FN_ENTER(0x004d8dc0);
    /* 004d8dc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8dc1: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004d8dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d8dc8: je 0x4d8de2 */ if (fZ) goto L_004d8de2;
L_004d8dca:; BB(0x004d8dca);
    /* 004d8dca: mov eax, dword ptr [0xa48bf0] */ r_eax = R32((u32)(0xa48bf0u));
    /* 004d8dcf: call 0x4d9608 */ r_esp -= 4; W32(r_esp, 0x4d8dd4u); f_004d9608();
    /* 004d8dd4: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d8dd7: jl 0x4d8de2 */ if ((fS!=fO)) goto L_004d8de2;
L_004d8dd9:; BB(0x004d8dd9);
    /* 004d8dd9: cmp eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d8dde: jg 0x4d8de2 */ if ((!fZ&&fS==fO)) goto L_004d8de2;
L_004d8de0:; BB(0x004d8de0);
    /* 004d8de0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8de1: ret  */ FN_RET(0x004d8dc0); r_esp += 4; return;
L_004d8de2:; BB(0x004d8de2);
    /* 004d8de2: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 004d8de7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8de8: ret  */ FN_RET(0x004d8dc0); r_esp += 4; return;
}

void f_004d8dec(void) /* sub_4D8DEC */
{
    FN_ENTER(0x004d8dec);
    /* 004d8dec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d8dee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d8def: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d8df0: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d8df3: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 004d8df7: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 004d8dfc: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d8e00: call 0x4d9218 */ r_esp -= 4; W32(r_esp, 0x4d8e05u); f_004d9218();
    /* 004d8e05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8e07: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8e0c: call 0x4da47c */ r_esp -= 4; W32(r_esp, 0x4d8e11u); f_004da47c();
    /* 004d8e11: mov ebp, eax */ r_ebp = r_eax;
    /* 004d8e13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8e16: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8e18: je 0x4d9012 */ if (fZ) goto L_004d9012;
L_004d8e1e:; BB(0x004d8e1e);
    /* 004d8e1e: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8e23: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d8e28u); f_006c1bd4();
    /* 004d8e28: mov ebx, eax */ r_ebx = r_eax;
    /* 004d8e2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8e2d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d8e32: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d8e37u); f_004d91f8();
    /* 004d8e37: mov esi, dword ptr [0xa48be0] */ r_esi = R32((u32)(0xa48be0u));
    /* 004d8e3d: mov edx, dword ptr [eax*4 + 0x90982c] */ r_edx = R32((u32)(r_eax*4+0x90982cu));
    /* 004d8e44: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8e46: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8e48: lea ecx, [edx + ebx + 0x27dc] */ r_ecx = (u32)(r_edx+r_ebx+0x27dcu);
    /* 004d8e4f: mov eax, dword ptr [ecx + esi*4 + 4] */ r_eax = R32((u32)(r_ecx+r_esi*4+0x4u));
    /* 004d8e53: call 0x4d9608 */ r_esp -= 4; W32(r_esp, 0x4d8e58u); f_004d9608();
    /* 004d8e58: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004d8e5a: add ebp, dword ptr [esp + 0x78] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d8e5e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d8e63: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d8e68u); f_004d91f8();
    /* 004d8e68: mov edi, dword ptr [eax*4 + 0x909820] */ r_edi = R32((u32)(r_eax*4+0x909820u));
    /* 004d8e6f: lea edx, [edi + edi*4] */ r_edx = (u32)(r_edi+r_edi*4);
    /* 004d8e72: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8e74: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d8e76: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004d8e79: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d8e7b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d8e7d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d8e7f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004d8e81: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d8e86: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d8e8bu); f_004d91f8();
    /* 004d8e8b: imul edx, dword ptr [eax*4 + 0x909814], 0x8c9f */ { i64 t = (i64)(i32)R32((u32)(r_eax*4+0x909814u)) * (i64)(i32)0x8c9fu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004d8e96: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d8e98: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 004d8e9c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ea1: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d8ea6u); f_006c1bd4();
    /* 004d8ea6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d8ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8ea9: je 0x4d91e4 */ if (fZ) goto L_004d91e4;
L_004d8eaf:; BB(0x004d8eaf);
    /* 004d8eaf: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8eb1: jl 0x4d8ebb */ if ((fS!=fO)) goto L_004d8ebb;
L_004d8eb3:; BB(0x004d8eb3);
    /* 004d8eb3: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 004d8eb7: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8eb9: jle 0x4d8ec9 */ if ((fZ||fS!=fO)) goto L_004d8ec9;
L_004d8ebb:; BB(0x004d8ebb);
    /* 004d8ebb: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 004d8ec0: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d8ec4: jmp 0x4d8fe3 */ goto L_004d8fe3;
L_004d8ec9:; BB(0x004d8ec9);
    /* 004d8ec9: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d8ece: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d8ed3u); f_006c1bd4();
    /* 004d8ed3: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004d8ed7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d8eda: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d8edf: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d8ee4u); f_004d91f8();
    /* 004d8ee4: mov edx, dword ptr [eax*4 + 0x909808] */ r_edx = R32((u32)(r_eax*4+0x909808u));
    /* 004d8eeb: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 004d8eef: mov edx, dword ptr [0xa48fc0] */ r_edx = R32((u32)(0xa48fc0u));
    /* 004d8ef5: mov ecx, 2 */ r_ecx = 0x2u;
    /* 004d8efa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8efc: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004d8f00: je 0x4d8f3a */ if (fZ) goto L_004d8f3a;
L_004d8f02:; BB(0x004d8f02);
    /* 004d8f02: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f04: jl 0x4d8f3a */ if ((fS!=fO)) goto L_004d8f3a;
L_004d8f06:; BB(0x004d8f06);
    /* 004d8f06: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f08: jl 0x4d91d6 */ if ((fS!=fO)) goto L_004d91d6;
L_004d8f0e:; BB(0x004d8f0e);
    /* 004d8f0e: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 004d8f12: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f14: jg 0x4d91d6 */ if ((!fZ&&fS==fO)) goto L_004d91d6;
L_004d8f1a:; BB(0x004d8f1a);
    /* 004d8f1a: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 004d8f1e: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 004d8f22: mov edx, dword ptr [edx + ecx*8 + 0x28d0] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x28d0u));
    /* 004d8f29: test dword ptr [0xa48fc4], edx */ {  u32 a = R32((u32)(0xa48fc4u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8f2f: mov esi, 3 */ r_esi = 0x3u;
    /* 004d8f34: je 0x4d8fd7 */ if (fZ) goto L_004d8fd7;
L_004d8f3a:; BB(0x004d8f3a);
    /* 004d8f3a: mov edx, 1 */ r_edx = 0x1u;
    /* 004d8f3f: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d8f43: mov edx, dword ptr [0xa48fa4] */ r_edx = R32((u32)(0xa48fa4u));
    /* 004d8f49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8f4b: je 0x4d8f86 */ if (fZ) goto L_004d8f86;
L_004d8f4d:; BB(0x004d8f4d);
    /* 004d8f4d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f4f: jl 0x4d8f86 */ if ((fS!=fO)) goto L_004d8f86;
L_004d8f51:; BB(0x004d8f51);
    /* 004d8f51: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f53: jl 0x4d91d6 */ if ((fS!=fO)) goto L_004d91d6;
L_004d8f59:; BB(0x004d8f59);
    /* 004d8f59: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 004d8f5d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f5f: jg 0x4d91d6 */ if ((!fZ&&fS==fO)) goto L_004d91d6;
L_004d8f65:; BB(0x004d8f65);
    /* 004d8f65: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f68: jge 0x4d8f6f */ if ((fS==fO)) goto L_004d8f6f;
L_004d8f6a:; BB(0x004d8f6a);
    /* 004d8f6a: mov esi, 2 */ r_esi = 0x2u;
L_004d8f6f:; BB(0x004d8f6f);
    /* 004d8f6f: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 004d8f73: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 004d8f77: mov edx, dword ptr [edx + ecx*8 + 0x28d0] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x28d0u));
    /* 004d8f7e: test dword ptr [0xa48fa8], edx */ {  u32 a = R32((u32)(0xa48fa8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8f84: je 0x4d8fd7 */ if (fZ) goto L_004d8fd7;
L_004d8f86:; BB(0x004d8f86);
    /* 004d8f86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d8f88: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d8f8c: mov edx, dword ptr [0xa48f88] */ r_edx = R32((u32)(0xa48f88u));
    /* 004d8f92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8f94: je 0x4d8fce */ if (fZ) goto L_004d8fce;
L_004d8f96:; BB(0x004d8f96);
    /* 004d8f96: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f98: jl 0x4d8fce */ if ((fS!=fO)) goto L_004d8fce;
L_004d8f9a:; BB(0x004d8f9a);
    /* 004d8f9a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8f9c: jl 0x4d91d6 */ if ((fS!=fO)) goto L_004d91d6;
L_004d8fa2:; BB(0x004d8fa2);
    /* 004d8fa2: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 004d8fa6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d8fa8: jg 0x4d91d6 */ if ((!fZ&&fS==fO)) goto L_004d91d6;
L_004d8fae:; BB(0x004d8fae);
    /* 004d8fae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d8fb0: jg 0x4d8fb7 */ if ((!fZ&&fS==fO)) goto L_004d8fb7;
L_004d8fb2:; BB(0x004d8fb2);
    /* 004d8fb2: mov esi, 1 */ r_esi = 0x1u;
L_004d8fb7:; BB(0x004d8fb7);
    /* 004d8fb7: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 004d8fbb: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 004d8fbf: mov edi, dword ptr [edx + ecx*8 + 0x28d0] */ r_edi = R32((u32)(r_edx+r_ecx*8+0x28d0u));
    /* 004d8fc6: test dword ptr [0xa48f8c], edi */ {  u32 a = R32((u32)(0xa48f8cu)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d8fcc: je 0x4d8fd7 */ if (fZ) goto L_004d8fd7;
L_004d8fce:; BB(0x004d8fce);
    /* 004d8fce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004d8fd3: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
L_004d8fd7:; BB(0x004d8fd7);
    /* 004d8fd7: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 004d8fdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d8fdd: jl 0x4d91c8 */ if ((fS!=fO)) goto L_004d91c8;
L_004d8fe3:; BB(0x004d8fe3);
    /* 004d8fe3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d8fe8: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d8fedu); f_004d91f8();
    /* 004d8fed: mov edi, dword ptr [eax*4 + 0x9097fc] */ r_edi = R32((u32)(r_eax*4+0x9097fcu));
    /* 004d8ff4: mov eax, dword ptr [ebx + edi*8 + 0x28d4] */ r_eax = R32((u32)(r_ebx+r_edi*8+0x28d4u));
    /* 004d8ffb: call 0x4d9668 */ r_esp -= 4; W32(r_esp, 0x4d9000u); f_004d9668();
    /* 004d9000: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d9002: jge 0x4d9012 */ if ((fS==fO)) goto L_004d9012;
L_004d9004:; BB(0x004d9004);
    /* 004d9004: mov eax, esi */ r_eax = r_esi;
    /* 004d9006: call 0x4d9580 */ r_esp -= 4; W32(r_esp, 0x4d900bu); f_004d9580();
    /* 004d900b: mov dword ptr [ebx + edi*8 + 0x28d4], eax */ W32((u32)(r_ebx+r_edi*8+0x28d4u), r_eax);
L_004d9012:; BB(0x004d9012);
    /* 004d9012: mov edi, dword ptr [0xa48be0] */ r_edi = R32((u32)(0xa48be0u));
    /* 004d9018: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004d901e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004d9022: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9024: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004d9028: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004d9030: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d9032: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 004d9035: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004d9038: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 004d903c: lea ebx, [ebx + ebx*8 + 0xa48fe0] */ r_ebx = (u32)(r_ebx+r_ebx*8+0xa48fe0u);
    /* 004d9043: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d9048: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d904du); f_004d91f8();
    /* 004d904d: mov esi, dword ptr [eax*4 + 0x9097f0] */ r_esi = R32((u32)(r_eax*4+0x9097f0u));
    /* 004d9054: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d9056: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d9058: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d905a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d905f: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d9064u); f_004d91f8();
    /* 004d9064: mov edx, dword ptr [eax*4 + 0x9097e4] */ r_edx = R32((u32)(r_eax*4+0x9097e4u));
    /* 004d906b: mov eax, dword ptr [esi + edi*4 + 4] */ r_eax = R32((u32)(r_esi+r_edi*4+0x4u));
    /* 004d906f: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 004d9073: call 0x4d9608 */ r_esp -= 4; W32(r_esp, 0x4d9078u); f_004d9608();
    /* 004d9078: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d907c: lea esi, [esp + 0x14] */ r_esi = (u32)(r_esp+0x14u);
    /* 004d9080: add ebx, 0x10c */ {  u32 a = r_ebx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d9086: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d9088: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 004d908b: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004d908f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9091: jne 0x4d9185 */ if (!fZ) goto L_004d9185;
L_004d9097:; BB(0x004d9097);
    /* 004d9097: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d9099: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
L_004d909c:; BB(0x004d909c);
    /* 004d909c: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 004d90a0: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 004d90a4: mov eax, dword ptr [edx + ecx*8 + 0xa490d8] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xa490d8u));
    /* 004d90ab: call 0x4d9668 */ r_esp -= 4; W32(r_esp, 0x4d90b0u); f_004d9668();
    /* 004d90b0: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004d90b4: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d90b9: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4d90beu); f_006c1bd4();
    /* 004d90be: mov ebx, eax */ r_ebx = r_eax;
    /* 004d90c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d90c3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d90c8: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4d90cdu); f_004d91f8();
    /* 004d90cd: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 004d90d1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004d90d5: lea esi, [esp + 0x34] */ r_esi = (u32)(r_esp+0x34u);
    /* 004d90d9: lea ecx, [ebx + 0x28e8] */ r_ecx = (u32)(r_ebx+0x28e8u);
    /* 004d90df: mov edi, dword ptr [eax*4 + 0x9097d8] */ r_edi = R32((u32)(r_eax*4+0x9097d8u));
    /* 004d90e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d90e8: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 004d90eb: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 004d90ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d90f1: jne 0x4d9130 */ if (!fZ) goto L_004d9130;
L_004d90f3:; BB(0x004d90f3);
    /* 004d90f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d90f5: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
L_004d90f8:; BB(0x004d90f8);
    /* 004d90f8: mov eax, dword ptr [ebx + edi*8 + 0x28d4] */ r_eax = R32((u32)(r_ebx+r_edi*8+0x28d4u));
    /* 004d90ff: call 0x4d9668 */ r_esp -= 4; W32(r_esp, 0x4d9104u); f_004d9668();
    /* 004d9104: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004d9108: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004d910c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d910d: call 0x4dd11c */ r_esp -= 4; W32(r_esp, 0x4d9112u); f_004dd11c();
    /* 004d9112: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d9113: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9115: jne 0x4d9124 */ if (!fZ) goto L_004d9124;
L_004d9117:; BB(0x004d9117);
    /* 004d9117: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004d911c: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d911f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d9120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9121: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d9122: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d9123: ret  */ FN_RET(0x004d8dec); r_esp += 4; return;
L_004d9124:; BB(0x004d9124);
    /* 004d9124: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004d9128: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d912b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d912c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d912d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d912e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d912f: ret  */ FN_RET(0x004d8dec); r_esp += 4; return;
L_004d9130:; BB(0x004d9130);
    /* 004d9130: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 004d9134: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d9136: mov ecx, edx */ r_ecx = r_edx;
L_004d9138:; BB(0x004d9138);
    /* 004d9138: xor ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d913b: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 004d913e: jmp 0x4d9152 */ goto L_004d9152;
L_004d9140:; BB(0x004d9140);
    /* 004d9140: movzx edx, word ptr [esi - 2] */ r_edx = (u32)R16((u32)(r_esi+0xfffffffeu));
    /* 004d9144: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 004d9147: xor ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d914a: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 004d914d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d914f: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
L_004d9152:; BB(0x004d9152);
    /* 004d9152: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d9155: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d9158: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d915b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d915e: jge 0x4d9177 */ if ((fS==fO)) goto L_004d9177;
L_004d9160:; BB(0x004d9160);
    /* 004d9160: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 004d9164: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9166: je 0x4d916e */ if (fZ) goto L_004d916e;
L_004d9168:; BB(0x004d9168);
    /* 004d9168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d916a: je 0x4d9138 */ if (fZ) goto L_004d9138;
L_004d916c:; BB(0x004d916c);
    /* 004d916c: jmp 0x4d9140 */ goto L_004d9140;
L_004d916e:; BB(0x004d916e);
    /* 004d916e: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 004d9172: jmp 0x4d90f3 */ goto L_004d90f3;
L_004d9177:; BB(0x004d9177);
    /* 004d9177: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 004d917b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d917d: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 004d9180: jmp 0x4d90f8 */ goto L_004d90f8;
L_004d9185:; BB(0x004d9185);
    /* 004d9185: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9188: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 004d918b: jmp 0x4d919f */ goto L_004d919f;
L_004d918d:; BB(0x004d918d);
    /* 004d918d: movzx edx, word ptr [esi - 2] */ r_edx = (u32)R16((u32)(r_esi+0xfffffffeu));
    /* 004d9191: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 004d9194: xor eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d9197: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004d919a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d919c: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
L_004d919f:; BB(0x004d919f);
    /* 004d919f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d91a2: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d91a5: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d91a8: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d91ab: jge 0x4d91be */ if ((fS==fO)) goto L_004d91be;
L_004d91ad:; BB(0x004d91ad);
    /* 004d91ad: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 004d91b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d91b2: je 0x4d9097 */ if (fZ) goto L_004d9097;
L_004d91b8:; BB(0x004d91b8);
    /* 004d91b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d91ba: je 0x4d9185 */ if (fZ) goto L_004d9185;
L_004d91bc:; BB(0x004d91bc);
    /* 004d91bc: jmp 0x4d918d */ goto L_004d918d;
L_004d91be:; BB(0x004d91be);
    /* 004d91be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d91c0: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 004d91c3: jmp 0x4d909c */ goto L_004d909c;
L_004d91c8:; BB(0x004d91c8);
    /* 004d91c8: mov edx, 0xfffffffe */ r_edx = 0xfffffffeu;
    /* 004d91cd: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d91d1: jmp 0x4d8fe3 */ goto L_004d8fe3;
L_004d91d6:; BB(0x004d91d6);
    /* 004d91d6: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 004d91db: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d91df: jmp 0x4d8fe3 */ goto L_004d8fe3;
L_004d91e4:; BB(0x004d91e4);
    /* 004d91e4: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 004d91e9: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004d91ed: jmp 0x4d8fe3 */ goto L_004d8fe3;
}

