#include "protos.h"

void f_0080b060(void) /* sub_80B060 */
{
    FN_ENTER(0x0080b060);
    /* 0080b060: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080b063: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080b068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b06a: je 0x80b34b */ if (fZ) goto L_0080b34b;
L_0080b070:; BB(0x0080b070);
    /* 0080b070: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080b076: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b078: je 0x80b34b */ if (fZ) goto L_0080b34b;
L_0080b07e:; BB(0x0080b07e);
    /* 0080b07e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0080b081: movsx ecx, word ptr [ecx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080b085: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080b087: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b089: jle 0x80b34b */ if ((fZ||fS!=fO)) goto L_0080b34b;
L_0080b08f:; BB(0x0080b08f);
    /* 0080b08f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0080b093: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0080b097: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0080b09b: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0080b09f:; BB(0x0080b09f);
    /* 0080b09f: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 0080b0a2: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 0080b0a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b0a7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b0a9: jle 0x80b1e3 */ if ((fZ||fS!=fO)) goto L_0080b1e3;
L_0080b0af:; BB(0x0080b0af);
    /* 0080b0af: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0080b0b3:; BB(0x0080b0b3);
    /* 0080b0b3: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0080b0b6: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b0bc: je 0x80b155 */ if (fZ) goto L_0080b155;
L_0080b0c2:; BB(0x0080b0c2);
    /* 0080b0c2: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080b0c7: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0080b0ca: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b0cc: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0080b0d0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b0d2: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0080b0d6: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b0d9: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b0dc: je 0x80b118 */ if (fZ) goto L_0080b118;
L_0080b0de:; BB(0x0080b0de);
    /* 0080b0de: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080b0e1:; BB(0x0080b0e1);
    /* 0080b0e1: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b0e7: jne 0x80b44a */ if (!fZ) goto L_0080b44a;
L_0080b0ed:; BB(0x0080b0ed);
    /* 0080b0ed: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b0f3: je 0x80b442 */ if (fZ) goto L_0080b442;
L_0080b0f9:; BB(0x0080b0f9);
    /* 0080b0f9: movsx ebp, word ptr [eax + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b0fd: lea edx, [ebp] */ r_edx = (u32)(r_ebp);
    /* 0080b100: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b103: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b105: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0080b107: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b109: lea eax, [eax + ebp + 4] */ r_eax = (u32)(r_eax+r_ebp+0x4u);
    /* 0080b10d: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b110: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b113: jne 0x80b0e1 */ if (!fZ) goto L_0080b0e1;
L_0080b115:; BB(0x0080b115);
    /* 0080b115: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b118:; BB(0x0080b118);
    /* 0080b118: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0080b11c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b11e: jle 0x80b14f */ if ((fZ||fS!=fO)) goto L_0080b14f;
L_0080b120:; BB(0x0080b120);
    /* 0080b120: movzx ebp, word ptr [esi] */ r_ebp = (u32)R16((u32)(r_esi));
    /* 0080b123: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080b127: mov ebx, eax */ r_ebx = r_eax;
    /* 0080b129: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080b12c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_0080b130:; BB(0x0080b130);
    /* 0080b130: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0080b133: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b135: je 0x80b408 */ if (fZ) goto L_0080b408;
L_0080b13b:; BB(0x0080b13b);
    /* 0080b13b: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b13e: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b141: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080b144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b146: jg 0x80b130 */ if ((!fZ&&fS==fO)) goto L_0080b130;
L_0080b148:; BB(0x0080b148);
    /* 0080b148: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080b14c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b14f:; BB(0x0080b14f);
    /* 0080b14f: and edi, 0xffffffdf */ {  u32 a = r_edi; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b152: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
L_0080b155:; BB(0x0080b155);
    /* 0080b155: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b15b: je 0x80b1d0 */ if (fZ) goto L_0080b1d0;
L_0080b15d:; BB(0x0080b15d);
    /* 0080b15d: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080b162: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0080b165: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b168: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b16b: je 0x80b1ca */ if (fZ) goto L_0080b1ca;
L_0080b16d:; BB(0x0080b16d);
    /* 0080b16d: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b170: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080b173:; BB(0x0080b173);
    /* 0080b173: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b179: je 0x80b190 */ if (fZ) goto L_0080b190;
L_0080b17b:; BB(0x0080b17b);
    /* 0080b17b: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b17f: lea edx, [esi] */ r_edx = (u32)(r_esi);
    /* 0080b181: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b184: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b186: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080b188: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b18a: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080b18e: jmp 0x80b1bf */ goto L_0080b1bf;
L_0080b190:; BB(0x0080b190);
    /* 0080b190: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b196: je 0x80b400 */ if (fZ) goto L_0080b400;
L_0080b19c:; BB(0x0080b19c);
    /* 0080b19c: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0080b1a0: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080b1a4: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b1a6: je 0x80b3d5 */ if (fZ) goto L_0080b3d5;
L_0080b1ac:; BB(0x0080b1ac);
    /* 0080b1ac: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b1b0: lea edx, [esi] */ r_edx = (u32)(r_esi);
    /* 0080b1b2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b1b5: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b1b7: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080b1b9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b1bb: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080b1bf:; BB(0x0080b1bf);
    /* 0080b1bf: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b1c2: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b1c5: jne 0x80b173 */ if (!fZ) goto L_0080b173;
L_0080b1c7:; BB(0x0080b1c7);
    /* 0080b1c7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b1ca:; BB(0x0080b1ca);
    /* 0080b1ca: and edi, 0xffffffbf */ {  u32 a = r_edi; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b1cd: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
L_0080b1d0:; BB(0x0080b1d0);
    /* 0080b1d0: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b1d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b1d6: cmp ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b1d9: jl 0x80b0b3 */ if ((fS!=fO)) goto L_0080b0b3;
L_0080b1df:; BB(0x0080b1df);
    /* 0080b1df: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_0080b1e3:; BB(0x0080b1e3);
    /* 0080b1e3: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 0080b1e6: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 0080b1e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b1eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b1ed: jle 0x80b323 */ if ((fZ||fS!=fO)) goto L_0080b323;
L_0080b1f3:; BB(0x0080b1f3);
    /* 0080b1f3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0080b1f7:; BB(0x0080b1f7);
    /* 0080b1f7: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 0080b1fa: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b200: je 0x80b299 */ if (fZ) goto L_0080b299;
L_0080b206:; BB(0x0080b206);
    /* 0080b206: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080b20b: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0080b20e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b210: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080b214: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b216: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0080b21a: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b21d: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b220: je 0x80b25c */ if (fZ) goto L_0080b25c;
L_0080b222:; BB(0x0080b222);
    /* 0080b222: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080b225:; BB(0x0080b225);
    /* 0080b225: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b22b: jne 0x80b3be */ if (!fZ) goto L_0080b3be;
L_0080b231:; BB(0x0080b231);
    /* 0080b231: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b237: je 0x80b3b6 */ if (fZ) goto L_0080b3b6;
L_0080b23d:; BB(0x0080b23d);
    /* 0080b23d: movsx ebp, word ptr [eax + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b241: lea edx, [ebp] */ r_edx = (u32)(r_ebp);
    /* 0080b244: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b247: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b249: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0080b24b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b24d: lea eax, [eax + ebp + 4] */ r_eax = (u32)(r_eax+r_ebp+0x4u);
    /* 0080b251: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b254: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b257: jne 0x80b225 */ if (!fZ) goto L_0080b225;
L_0080b259:; BB(0x0080b259);
    /* 0080b259: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b25c:; BB(0x0080b25c);
    /* 0080b25c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080b260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b262: jle 0x80b293 */ if ((fZ||fS!=fO)) goto L_0080b293;
L_0080b264:; BB(0x0080b264);
    /* 0080b264: movzx ebp, word ptr [esi] */ r_ebp = (u32)R16((u32)(r_esi));
    /* 0080b267: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0080b26b: mov ebx, eax */ r_ebx = r_eax;
    /* 0080b26d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080b270: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_0080b274:; BB(0x0080b274);
    /* 0080b274: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0080b277: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b279: je 0x80b37c */ if (fZ) goto L_0080b37c;
L_0080b27f:; BB(0x0080b27f);
    /* 0080b27f: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b282: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b285: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080b288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b28a: jg 0x80b274 */ if ((!fZ&&fS==fO)) goto L_0080b274;
L_0080b28c:; BB(0x0080b28c);
    /* 0080b28c: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0080b290: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b293:; BB(0x0080b293);
    /* 0080b293: and edi, 0xffffffdf */ {  u32 a = r_edi; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b296: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
L_0080b299:; BB(0x0080b299);
    /* 0080b299: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b29f: je 0x80b310 */ if (fZ) goto L_0080b310;
L_0080b2a1:; BB(0x0080b2a1);
    /* 0080b2a1: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080b2a6: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 0080b2a9: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b2ac: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b2af: je 0x80b30a */ if (fZ) goto L_0080b30a;
L_0080b2b1:; BB(0x0080b2b1);
    /* 0080b2b1: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b2b4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080b2b7:; BB(0x0080b2b7);
    /* 0080b2b7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b2bd: je 0x80b2d4 */ if (fZ) goto L_0080b2d4;
L_0080b2bf:; BB(0x0080b2bf);
    /* 0080b2bf: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b2c3: lea edx, [esi] */ r_edx = (u32)(r_esi);
    /* 0080b2c5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b2c8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b2ca: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080b2cc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b2ce: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080b2d2: jmp 0x80b2ff */ goto L_0080b2ff;
L_0080b2d4:; BB(0x0080b2d4);
    /* 0080b2d4: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b2da: je 0x80b377 */ if (fZ) goto L_0080b377;
L_0080b2e0:; BB(0x0080b2e0);
    /* 0080b2e0: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0080b2e4: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080b2e8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b2ea: je 0x80b34f */ if (fZ) goto L_0080b34f;
L_0080b2ec:; BB(0x0080b2ec);
    /* 0080b2ec: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080b2f0: lea edx, [esi] */ r_edx = (u32)(r_esi);
    /* 0080b2f2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080b2f5: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b2f7: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080b2f9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b2fb: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080b2ff:; BB(0x0080b2ff);
    /* 0080b2ff: movsx esi, word ptr [eax] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b302: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b305: jne 0x80b2b7 */ if (!fZ) goto L_0080b2b7;
L_0080b307:; BB(0x0080b307);
    /* 0080b307: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080b30a:; BB(0x0080b30a);
    /* 0080b30a: and edi, 0xffffffbf */ {  u32 a = r_edi; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b30d: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
L_0080b310:; BB(0x0080b310);
    /* 0080b310: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b313: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b316: cmp ecx, dword ptr [edx + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b319: jl 0x80b1f7 */ if ((fS!=fO)) goto L_0080b1f7;
L_0080b31f:; BB(0x0080b31f);
    /* 0080b31f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_0080b323:; BB(0x0080b323);
    /* 0080b323: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080b329: movsx ebx, word ptr [ecx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080b32d: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b330: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080b333: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b335: jl 0x80b09f */ if ((fS!=fO)) goto L_0080b09f;
L_0080b33b:; BB(0x0080b33b);
    /* 0080b33b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0080b33f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080b343: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0080b347: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_0080b34b:; BB(0x0080b34b);
    /* 0080b34b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080b34e: ret  */ FN_RET(0x0080b060); r_esp += 4; return;
L_0080b34f:; BB(0x0080b34f);
    /* 0080b34f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b352: movsx edi, word ptr [ebp + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0080b356: cmp di, word ptr [eax + 6] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080b35a: jl 0x80b364 */ if ((fS!=fO)) goto L_0080b364;
L_0080b35c:; BB(0x0080b35c);
    /* 0080b35c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080b35e: mov word ptr [ebp + 6], si */ W16((u32)(r_ebp+0x6u), (u16)r_esi);
    /* 0080b362: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0080b364:; BB(0x0080b364);
    /* 0080b364: movzx esi, word ptr [eax + edi*4 + 8] */ r_esi = (u32)R16((u32)(r_eax+r_edi*4+0x8u));
    /* 0080b369: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 0080b36d: movsx eax, word ptr [eax + edi*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_edi*4+0xau));
    /* 0080b372: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0080b375: jmp 0x80b310 */ goto L_0080b310;
L_0080b377:; BB(0x0080b377);
    /* 0080b377: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b37a: jmp 0x80b30a */ goto L_0080b30a;
L_0080b37c:; BB(0x0080b37c);
    /* 0080b37c: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0080b380: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080b384: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b387: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0080b38a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080b38e: movzx ebp, word ptr [eax + 2] */ r_ebp = (u32)R16((u32)(r_eax+0x2u));
    /* 0080b392: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 0080b396: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0080b399: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0080b39c: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0080b39f: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0080b3a2: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0080b3a5: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 0080b3a8: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080b3ab: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0080b3ae: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 0080b3b1: jmp 0x80b299 */ goto L_0080b299;
L_0080b3b6:; BB(0x0080b3b6);
    /* 0080b3b6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b3b9: jmp 0x80b293 */ goto L_0080b293;
L_0080b3be:; BB(0x0080b3be);
    /* 0080b3be: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b3c1: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080b3c5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080b3c9: lea eax, [eax + 8] */ r_eax = (u32)(r_eax+0x8u);
    /* 0080b3cc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0080b3d0: jmp 0x80b25c */ goto L_0080b25c;
L_0080b3d5:; BB(0x0080b3d5);
    /* 0080b3d5: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b3d8: movsx edi, word ptr [ebp + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0080b3dc: cmp di, word ptr [eax + 6] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080b3e0: jl 0x80b3ea */ if ((fS!=fO)) goto L_0080b3ea;
L_0080b3e2:; BB(0x0080b3e2);
    /* 0080b3e2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080b3e4: mov word ptr [ebp + 6], si */ W16((u32)(r_ebp+0x6u), (u16)r_esi);
    /* 0080b3e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0080b3ea:; BB(0x0080b3ea);
    /* 0080b3ea: movzx esi, word ptr [eax + edi*4 + 8] */ r_esi = (u32)R16((u32)(r_eax+r_edi*4+0x8u));
    /* 0080b3ef: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 0080b3f3: movsx eax, word ptr [eax + edi*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_edi*4+0xau));
    /* 0080b3f8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0080b3fb: jmp 0x80b1d0 */ goto L_0080b1d0;
L_0080b400:; BB(0x0080b400);
    /* 0080b400: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b403: jmp 0x80b1ca */ goto L_0080b1ca;
L_0080b408:; BB(0x0080b408);
    /* 0080b408: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080b40c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080b410: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b413: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0080b416: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080b41a: movzx ebp, word ptr [eax + 2] */ r_ebp = (u32)R16((u32)(r_eax+0x2u));
    /* 0080b41e: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 0080b422: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0080b425: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0080b428: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0080b42b: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0080b42e: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0080b431: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 0080b434: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080b437: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0080b43a: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0080b43d: jmp 0x80b155 */ goto L_0080b155;
L_0080b442:; BB(0x0080b442);
    /* 0080b442: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b445: jmp 0x80b14f */ goto L_0080b14f;
L_0080b44a:; BB(0x0080b44a);
    /* 0080b44a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080b44d: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080b451: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0080b455: lea eax, [eax + 8] */ r_eax = (u32)(r_eax+0x8u);
    /* 0080b458: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0080b45c: jmp 0x80b118 */ goto L_0080b118;
}

void f_0080b464(void) /* sub_80B464 */
{
    FN_ENTER(0x0080b464);
    /* 0080b464: mov eax, dword ptr [0xaafc8c] */ r_eax = R32((u32)(0xaafc8cu));
    /* 0080b469: call dword ptr [eax*4 + 0xa11498] */ { u32 t = R32((u32)(r_eax*4+0xa11498u)); r_esp -= 4; W32(r_esp, 0x80b470u); call_ind(t); }
    /* 0080b470: ret  */ FN_RET(0x0080b464); r_esp += 4; return;
}

void f_0080b474(void) /* sub_80B474 */
{
    FN_ENTER(0x0080b474);
    /* 0080b474: mov eax, dword ptr [0xaafc8c] */ r_eax = R32((u32)(0xaafc8cu));
    /* 0080b479: call dword ptr [eax*4 + 0xa114a0] */ { u32 t = R32((u32)(r_eax*4+0xa114a0u)); r_esp -= 4; W32(r_esp, 0x80b480u); call_ind(t); }
    /* 0080b480: ret  */ FN_RET(0x0080b474); r_esp += 4; return;
}

void f_0080b484(void) /* sub_80B484 */
{
    FN_ENTER(0x0080b484);
    /* 0080b484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b485: mov ebp, esp */ r_ebp = r_esp;
    /* 0080b487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080b489: push 0x8f726c */ { u32 v = 0x8f726cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080b48e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080b494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080b495: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080b49c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080b49f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080b4a2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0080b4a5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0080b4a8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0080b4ab: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0080b4ae: mov eax, dword ptr [0xaafc50] */ r_eax = R32((u32)(0xaafc50u));
    /* 0080b4b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080b4b5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0080b4b8:; BB(0x0080b4b8);
    /* 0080b4b8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0080b4bf: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80b4c6u); f_005caba4();
    /* 0080b4c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080b4c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0080b4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b4cc: je 0x80b4fc */ if (fZ) goto L_0080b4fc;
L_0080b4ce:; BB(0x0080b4ce);
    /* 0080b4ce: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0080b4d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080b4dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b4df: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080b4e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080b4e5: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080b4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4e9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b4ec: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b4ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4f0: call 0x500a74 */ r_esp -= 4; W32(r_esp, 0x80b4f5u); f_00500a74();
    /* 0080b4f5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0080b4fc:; BB(0x0080b4fc);
    /* 0080b4fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080b503: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b506: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080b509: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b50c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080b50f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080b511: jge 0x80b4b8 */ if ((fS==fO)) goto L_0080b4b8;
L_0080b513:; BB(0x0080b513);
    /* 0080b513: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080b516: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080b519: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080b51c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080b51f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080b526: mov esp, ebp */ r_esp = r_ebp;
    /* 0080b528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080b529: ret  */ FN_RET(0x0080b484); r_esp += 4; return;
}

void f_0080b4e4(void)
{
    FN_ENTER(0x0080b4e4);
    goto L_0080b4e4;
L_0080b4b8:; BB(0x0080b4b8);
    /* 0080b4b8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0080b4bf: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80b4c6u); f_005caba4();
    /* 0080b4c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080b4c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0080b4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b4cc: je 0x80b4fc */ if (fZ) goto L_0080b4fc;
L_0080b4ce:; BB(0x0080b4ce);
    /* 0080b4ce: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0080b4d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080b4dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b4df: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080b4e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_0080b4e4:; BB(0x0080b4e4);
    /* 0080b4e4: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0080b4e5: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080b4e6: mov edi, 0x72ff5002 */ r_edi = 0x72ff5002u;
    /* 0080b4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4e9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b4eb: or bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = 0; }
    /* 0080b4ec: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b4ed: jb 0x80b4f3 */ if (fC) goto L_0080b4f3;
L_0080b4ef:; BB(0x0080b4ef);
    /* 0080b4ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b4f0: call 0x500a74 */ r_esp -= 4; W32(r_esp, 0x80b4f5u); f_00500a74();
L_0080b4f3:; BB(0x0080b4f3);
    /* 0080b4f3: iretd  */ UNSUP(0x0080b4f3, "iretd ");
    /* 0080b4f4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080b4f5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0080b4f6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b4f7: aam 0 */ UNSUP(0x0080b4f7, "aam 0");
    /* 0080b4f9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0080b4fb: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0080b4fc:; BB(0x0080b4fc);
    /* 0080b4fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080b4fd: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b4fe: cld  */ rt_df = 0;
    UNSUP(0x0080b4ff, "falls out of decoded code");
    /* 0080b503: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b506: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080b509: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080b50c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080b50f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080b511: jge 0x80b4b8 */ if ((fS==fO)) goto L_0080b4b8;
L_0080b513:; BB(0x0080b513);
    /* 0080b513: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080b516: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080b519: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080b51c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080b51f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080b526: mov esp, ebp */ r_esp = r_ebp;
    /* 0080b528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080b529: ret  */ FN_RET(0x0080b4e4); r_esp += 4; return;
}

void f_0080b52c(void) /* sub_80B52C */
{
    FN_ENTER(0x0080b52c);
    /* 0080b52c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b52d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b52e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b52f: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080b535: mov dword ptr [0xaafc8c], 0xffffffff */ W32((u32)(0xaafc8cu), 0xffffffffu);
    /* 0080b53f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080b541: mov dword ptr [0xaafc78], eax */ W32((u32)(0xaafc78u), r_eax);
    /* 0080b546: mov dword ptr [0xaafc74], eax */ W32((u32)(0xaafc74u), r_eax);
    /* 0080b54b: mov dword ptr [0xaafc70], eax */ W32((u32)(0xaafc70u), r_eax);
    /* 0080b550: mov dword ptr [0xaafc68], eax */ W32((u32)(0xaafc68u), r_eax);
    /* 0080b555: mov dword ptr [0xaafc6c], eax */ W32((u32)(0xaafc6cu), r_eax);
    /* 0080b55a: mov dword ptr [0xaafc4c], eax */ W32((u32)(0xaafc4cu), r_eax);
    /* 0080b55f: mov dword ptr [0xaafc48], eax */ W32((u32)(0xaafc48u), r_eax);
    /* 0080b564: mov dword ptr [0xaafc64], eax */ W32((u32)(0xaafc64u), r_eax);
    /* 0080b569: mov dword ptr [0xaafc60], eax */ W32((u32)(0xaafc60u), r_eax);
    /* 0080b56e: mov dword ptr [0xaafc5c], eax */ W32((u32)(0xaafc5cu), r_eax);
    /* 0080b573: mov dword ptr [0xaafc54], eax */ W32((u32)(0xaafc54u), r_eax);
    /* 0080b578: mov dword ptr [0xaafc58], eax */ W32((u32)(0xaafc58u), r_eax);
    /* 0080b57d: mov dword ptr [0xaafc44], eax */ W32((u32)(0xaafc44u), r_eax);
    /* 0080b582: mov dword ptr [0xaafc40], eax */ W32((u32)(0xaafc40u), r_eax);
    /* 0080b587: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0080b58b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b58c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b592: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x80b597u); f_0080bf28();
    /* 0080b597: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b59a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b59d: je 0x80b9b5 */ if (fZ) goto L_0080b9b5;
L_0080b5a3:; BB(0x0080b5a3);
    /* 0080b5a3: push dword ptr [0xa114c8] */ { u32 v = R32((u32)(0xa114c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b5a9: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80b5aeu); f_005ba214();
    /* 0080b5ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080b5af: mov eax, esi */ r_eax = r_esi;
    /* 0080b5b1: call 0x80a128 */ r_esp -= 4; W32(r_esp, 0x80b5b6u); f_0080a128();
    /* 0080b5b6: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080b5bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b5be: je 0x80b630 */ if (fZ) goto L_0080b630;
L_0080b5c0:; BB(0x0080b5c0);
    /* 0080b5c0: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0080b5c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b5c5: je 0x80b630 */ if (fZ) goto L_0080b630;
L_0080b5c7:; BB(0x0080b5c7);
    /* 0080b5c7: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80b5ccu); f_00482a28();
    /* 0080b5cc: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080b5cf: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b5d2: je 0x80b5fe */ if (fZ) goto L_0080b5fe;
L_0080b5d4:; BB(0x0080b5d4);
    /* 0080b5d4: mov edx, dword ptr [0xaafc98] */ r_edx = R32((u32)(0xaafc98u));
    /* 0080b5da: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0080b5de: push 0x97f1f8 */ { u32 v = 0x97f1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b5e3: push dword ptr [ebp + edx*8] */ { u32 v = R32((u32)(r_ebp+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b5e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b5e8: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80b5edu); f_0078e574();
    /* 0080b5ed: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080b5f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b5f2: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80b5f7u); f_005b9328();
    /* 0080b5f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b5fc: jg 0x80b61a */ if ((!fZ&&fS==fO)) goto L_0080b61a;
L_0080b5fe:; BB(0x0080b5fe);
    /* 0080b5fe: mov edx, dword ptr [0xaafc98] */ r_edx = R32((u32)(0xaafc98u));
    /* 0080b604: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0080b608: push 0x97f200 */ { u32 v = 0x97f200u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b60d: push dword ptr [ebp + edx*8] */ { u32 v = R32((u32)(r_ebp+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b612: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80b617u); f_0078e574();
    /* 0080b617: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080b61a:; BB(0x0080b61a);
    /* 0080b61a: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080b620: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0080b624: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b627: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b628: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x80b62du); f_0081a7d8();
    /* 0080b62d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080b630:; BB(0x0080b630);
    /* 0080b630: mov eax, esi */ r_eax = r_esi;
    /* 0080b632: call 0x80a3c0 */ r_esp -= 4; W32(r_esp, 0x80b637u); f_0080a3c0();
    /* 0080b637: mov eax, esi */ r_eax = r_esi;
    /* 0080b639: call 0x80a5a4 */ r_esp -= 4; W32(r_esp, 0x80b63eu); f_0080a5a4();
    /* 0080b63e: mov eax, esi */ r_eax = r_esi;
    /* 0080b640: call 0x80a4c8 */ r_esp -= 4; W32(r_esp, 0x80b645u); f_0080a4c8();
    /* 0080b645: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080b647: mov dword ptr [0xaafc4c], edx */ W32((u32)(0xaafc4cu), r_edx);
    /* 0080b64d: mov dword ptr [0xaafc44], edx */ W32((u32)(0xaafc44u), r_edx);
    /* 0080b653: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80b658u); f_00482a28();
    /* 0080b658: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080b65b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b65e: je 0x80b99d */ if (fZ) goto L_0080b99d;
L_0080b664:; BB(0x0080b664);
    /* 0080b664: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080b668: push 0x97f258 */ { u32 v = 0x97f258u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b66d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b66e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b66f: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80b674u); f_0078e574();
    /* 0080b674: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080b677:; BB(0x0080b677);
    /* 0080b677: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080b67b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b67c: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80b681u); f_005b9328();
    /* 0080b681: mov edi, eax */ r_edi = r_eax;
    /* 0080b683: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b686: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80b68bu); f_0080a640();
    /* 0080b68b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b68d: je 0x80b6e0 */ if (fZ) goto L_0080b6e0;
L_0080b68f:; BB(0x0080b68f);
    /* 0080b68f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b691: jle 0x80b874 */ if ((fZ||fS!=fO)) goto L_0080b874;
L_0080b697:; BB(0x0080b697);
    /* 0080b697: cmp edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080b69d: jbe 0x80b6a7 */ if ((fC||fZ)) goto L_0080b6a7;
L_0080b69f:; BB(0x0080b69f);
    /* 0080b69f: mov ebp, dword ptr [0xaafc4c] */ r_ebp = R32((u32)(0xaafc4cu));
    /* 0080b6a5: jmp 0x80b71b */ goto L_0080b71b;
L_0080b6a7:; BB(0x0080b6a7);
    /* 0080b6a7: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6ac: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80b6b1u); f_0082e940();
    /* 0080b6b1: mov ebp, eax */ r_ebp = r_eax;
    /* 0080b6b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b6b6: mov dword ptr [0xaafc4c], ebp */ W32((u32)(0xaafc4cu), r_ebp);
    /* 0080b6bc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b6be: je 0x80b71b */ if (fZ) goto L_0080b71b;
L_0080b6c0:; BB(0x0080b6c0);
    /* 0080b6c0: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080b6c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6c6: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80b6cbu); f_005b9910();
    /* 0080b6cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b6ce: mov ebp, dword ptr [0xaafc4c] */ r_ebp = R32((u32)(0xaafc4cu));
    /* 0080b6d4: mov dword ptr [0xaafc44], 0x100 */ W32((u32)(0xaafc44u), 0x100u);
    /* 0080b6de: jmp 0x80b71b */ goto L_0080b71b;
L_0080b6e0:; BB(0x0080b6e0);
    /* 0080b6e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b6e2: jle 0x80b715 */ if ((fZ||fS!=fO)) goto L_0080b715;
L_0080b6e4:; BB(0x0080b6e4);
    /* 0080b6e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6e5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80b6eau); f_0082e940();
    /* 0080b6ea: mov ebp, eax */ r_ebp = r_eax;
    /* 0080b6ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b6ef: mov dword ptr [0xaafc4c], ebp */ W32((u32)(0xaafc4cu), r_ebp);
    /* 0080b6f5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b6f7: je 0x80b71b */ if (fZ) goto L_0080b71b;
L_0080b6f9:; BB(0x0080b6f9);
    /* 0080b6f9: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080b6fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b6ff: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80b704u); f_005b9910();
    /* 0080b704: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b707: mov ebp, dword ptr [0xaafc4c] */ r_ebp = R32((u32)(0xaafc4cu));
    /* 0080b70d: mov dword ptr [0xaafc44], edi */ W32((u32)(0xaafc44u), r_edi);
    /* 0080b713: jmp 0x80b71b */ goto L_0080b71b;
L_0080b715:; BB(0x0080b715);
    /* 0080b715: mov ebp, dword ptr [0xaafc4c] */ r_ebp = R32((u32)(0xaafc4cu));
L_0080b71b:; BB(0x0080b71b);
    /* 0080b71b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b71d: je 0x80b72c */ if (fZ) goto L_0080b72c;
L_0080b71f:; BB(0x0080b71f);
    /* 0080b71f: movsx edx, byte ptr [ebp + 2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x2u));
    /* 0080b723: cmp edx, 0x31 */ {  u32 a = r_edx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b726: je 0x80b88a */ if (fZ) goto L_0080b88a;
L_0080b72c:; BB(0x0080b72c);
    /* 0080b72c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080b72e: mov dword ptr [0xaafc48], edx */ W32((u32)(0xaafc48u), r_edx);
    /* 0080b734: mov dword ptr [0xaafc40], edx */ W32((u32)(0xaafc40u), r_edx);
    /* 0080b73a: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x80b73fu); f_0078b208();
    /* 0080b73f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b742: jg 0x80b835 */ if ((!fZ&&fS==fO)) goto L_0080b835;
L_0080b748:; BB(0x0080b748);
    /* 0080b748: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 0080b74c: push 0x97f268 */ { u32 v = 0x97f268u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b751: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b753: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80b758u); f_0078e574();
    /* 0080b758: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0080b75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080b75d: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80b762u); f_005b9328();
    /* 0080b762: mov ebp, eax */ r_ebp = r_eax;
    /* 0080b764: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b767: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80b76cu); f_0080a640();
    /* 0080b76c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b76e: je 0x80b7c1 */ if (fZ) goto L_0080b7c1;
L_0080b770:; BB(0x0080b770);
    /* 0080b770: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b772: jle 0x80b87f */ if ((fZ||fS!=fO)) goto L_0080b87f;
L_0080b778:; BB(0x0080b778);
    /* 0080b778: cmp ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080b77e: jbe 0x80b788 */ if ((fC||fZ)) goto L_0080b788;
L_0080b780:; BB(0x0080b780);
    /* 0080b780: mov esi, dword ptr [0xaafc48] */ r_esi = R32((u32)(0xaafc48u));
    /* 0080b786: jmp 0x80b7fc */ goto L_0080b7fc;
L_0080b788:; BB(0x0080b788);
    /* 0080b788: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b78d: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80b792u); f_0082e940();
    /* 0080b792: mov esi, eax */ r_esi = r_eax;
    /* 0080b794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b797: mov dword ptr [0xaafc48], esi */ W32((u32)(0xaafc48u), r_esi);
    /* 0080b79d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b79f: je 0x80b7fc */ if (fZ) goto L_0080b7fc;
L_0080b7a1:; BB(0x0080b7a1);
    /* 0080b7a1: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 0080b7a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b7a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b7a7: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80b7acu); f_005b9910();
    /* 0080b7ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b7af: mov esi, dword ptr [0xaafc48] */ r_esi = R32((u32)(0xaafc48u));
    /* 0080b7b5: mov dword ptr [0xaafc40], 0x100 */ W32((u32)(0xaafc40u), 0x100u);
    /* 0080b7bf: jmp 0x80b7fc */ goto L_0080b7fc;
L_0080b7c1:; BB(0x0080b7c1);
    /* 0080b7c1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b7c3: jle 0x80b7f6 */ if ((fZ||fS!=fO)) goto L_0080b7f6;
L_0080b7c5:; BB(0x0080b7c5);
    /* 0080b7c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b7c6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80b7cbu); f_0082e940();
    /* 0080b7cb: mov esi, eax */ r_esi = r_eax;
    /* 0080b7cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b7d0: mov dword ptr [0xaafc48], esi */ W32((u32)(0xaafc48u), r_esi);
    /* 0080b7d6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b7d8: je 0x80b7fc */ if (fZ) goto L_0080b7fc;
L_0080b7da:; BB(0x0080b7da);
    /* 0080b7da: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 0080b7de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b7df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b7e0: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80b7e5u); f_005b9910();
    /* 0080b7e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b7e8: mov esi, dword ptr [0xaafc48] */ r_esi = R32((u32)(0xaafc48u));
    /* 0080b7ee: mov dword ptr [0xaafc40], ebp */ W32((u32)(0xaafc40u), r_ebp);
    /* 0080b7f4: jmp 0x80b7fc */ goto L_0080b7fc;
L_0080b7f6:; BB(0x0080b7f6);
    /* 0080b7f6: mov esi, dword ptr [0xaafc48] */ r_esi = R32((u32)(0xaafc48u));
L_0080b7fc:; BB(0x0080b7fc);
    /* 0080b7fc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b7fe: je 0x80b835 */ if (fZ) goto L_0080b835;
L_0080b800:; BB(0x0080b800);
    /* 0080b800: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 0080b803: call 0x80a60c */ r_esp -= 4; W32(r_esp, 0x80b808u); f_0080a60c();
    /* 0080b808: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0080b80b: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0080b80e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080b810: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b812: jle 0x80b835 */ if ((fZ||fS!=fO)) goto L_0080b835;
L_0080b814:; BB(0x0080b814);
    /* 0080b814: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 0080b817: mov edi, ebp */ r_edi = r_ebp;
    /* 0080b819: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b81f: sar edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080b822: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0080b825: or edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b827: mov word ptr [ecx], di */ W16((u32)(r_ecx), (u16)r_edi);
    /* 0080b82a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b82d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b830: cmp edx, dword ptr [esi + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b833: jl 0x80b814 */ if ((fS!=fO)) goto L_0080b814;
L_0080b835:; BB(0x0080b835);
    /* 0080b835: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080b83a: mov byte ptr [0xaafc88], 1 */ W8((u32)(0xaafc88u), 0x1u);
    /* 0080b841: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080b843: mov dword ptr [0xaafc80], edx */ W32((u32)(0xaafc80u), r_edx);
    /* 0080b849: mov dword ptr [0xaafc7c], 0 */ W32((u32)(0xaafc7cu), 0x0u);
    /* 0080b853: mov dword ptr [0xaafc3c], edx */ W32((u32)(0xaafc3cu), r_edx);
    /* 0080b859: mov dword ptr [0xaafc38], edx */ W32((u32)(0xaafc38u), r_edx);
    /* 0080b85f: mov dword ptr [0xaafc34], edx */ W32((u32)(0xaafc34u), r_edx);
    /* 0080b865: call 0x807448 */ r_esp -= 4; W32(r_esp, 0x80b86au); f_00807448();
    /* 0080b86a: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080b870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080b871: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080b872: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080b873: ret  */ FN_RET(0x0080b52c); r_esp += 4; return;
L_0080b874:; BB(0x0080b874);
    /* 0080b874: mov ebp, dword ptr [0xaafc4c] */ r_ebp = R32((u32)(0xaafc4cu));
    /* 0080b87a: jmp 0x80b71b */ goto L_0080b71b;
L_0080b87f:; BB(0x0080b87f);
    /* 0080b87f: mov esi, dword ptr [0xaafc48] */ r_esi = R32((u32)(0xaafc48u));
    /* 0080b885: jmp 0x80b7fc */ goto L_0080b7fc;
L_0080b88a:; BB(0x0080b88a);
    /* 0080b88a: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 0080b88d: call 0x80a60c */ r_esp -= 4; W32(r_esp, 0x80b892u); f_0080a60c();
    /* 0080b892: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0080b895: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0080b898: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0080b89b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b89d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0080b8a0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080b8a2: lea eax, [ebp + eax + 8] */ r_eax = (u32)(r_ebp+r_eax+0x8u);
    /* 0080b8a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080b8a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b8aa: jle 0x80b72c */ if ((fZ||fS!=fO)) goto L_0080b72c;
L_0080b8b0:; BB(0x0080b8b0);
    /* 0080b8b0: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0080b8b4: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 0080b8b8: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
L_0080b8bc:; BB(0x0080b8bc);
    /* 0080b8bc: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0080b8be: mov edi, esi */ r_edi = r_esi;
    /* 0080b8c0: and edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b8c6: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080b8c9: mov ebx, esi */ r_ebx = r_esi;
    /* 0080b8cb: and ebx, 0xff0000 */ {  u32 a = r_ebx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b8d1: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080b8d4: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b8d6: mov ebx, esi */ r_ebx = r_esi;
    /* 0080b8d8: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0080b8db: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b8e1: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0080b8e4: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b8e6: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b8e8: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0080b8eb: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 0080b8ed: mov edi, esi */ r_edi = r_esi;
    /* 0080b8ef: and edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080b8f5: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080b8f8: mov ebx, esi */ r_ebx = r_esi;
    /* 0080b8fa: and ebx, 0xff0000 */ {  u32 a = r_ebx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b900: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080b903: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b905: mov ebx, esi */ r_ebx = r_esi;
    /* 0080b907: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0080b90a: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b910: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0080b913: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b915: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0080b917: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0080b91a: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 0080b91d: mov ebx, esi */ r_ebx = r_esi;
    /* 0080b91f: and ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b925: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080b928: mov eax, esi */ r_eax = r_esi;
    /* 0080b92a: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080b92f: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080b932: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b934: mov eax, esi */ r_eax = r_esi;
    /* 0080b936: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0080b939: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080b93e: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0080b941: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b943: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b945: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 0080b948: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b94a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080b94c: jle 0x80b981 */ if ((fZ||fS!=fO)) goto L_0080b981;
L_0080b94e:; BB(0x0080b94e);
    /* 0080b94e: mov edi, dword ptr [esp + 0x7c] */ r_edi = R32((u32)(r_esp+0x7cu));
    /* 0080b952: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
L_0080b956:; BB(0x0080b956);
    /* 0080b956: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0080b959: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b95b: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080b95d: movzx eax, word ptr [esi + ebx*2] */ r_eax = (u32)R16((u32)(r_esi+r_ebx*2));
    /* 0080b961: mov ebp, eax */ r_ebp = r_eax;
    /* 0080b963: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0080b966: and ebp, 0xff00 */ {  u32 a = r_ebp; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b96c: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0080b96f: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0080b971: mov word ptr [esi + ebx*2], bp */ W16((u32)(r_esi+r_ebx*2), (u16)r_ebp);
    /* 0080b975: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080b978: cmp ebx, dword ptr [ecx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b97b: jl 0x80b956 */ if ((fS!=fO)) goto L_0080b956;
L_0080b97d:; BB(0x0080b97d);
    /* 0080b97d: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
L_0080b981:; BB(0x0080b981);
    /* 0080b981: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b984: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080b987: cmp edx, dword ptr [ebp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080b98a: jl 0x80b8bc */ if ((fS!=fO)) goto L_0080b8bc;
L_0080b990:; BB(0x0080b990);
    /* 0080b990: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 0080b994: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 0080b998: jmp 0x80b72c */ goto L_0080b72c;
L_0080b99d:; BB(0x0080b99d);
    /* 0080b99d: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080b9a1: push 0x97f260 */ { u32 v = 0x97f260u; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9a8: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80b9adu); f_0078e574();
    /* 0080b9ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b9b0: jmp 0x80b677 */ goto L_0080b677;
L_0080b9b5:; BB(0x0080b9b5);
    /* 0080b9b5: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080b9b9: call 0x80bee8 */ r_esp -= 4; W32(r_esp, 0x80b9beu); f_0080bee8();
    /* 0080b9be: mov ebp, eax */ r_ebp = r_eax;
    /* 0080b9c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080b9c3: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0080b9c7: mov esi, dword ptr [ebp + edx*8 + 4] */ r_esi = R32((u32)(r_ebp+r_edx*8+0x4u));
    /* 0080b9cb: mov dword ptr [0xaafc98], edx */ W32((u32)(0xaafc98u), r_edx);
    /* 0080b9d1: jmp 0x80b5a3 */ goto L_0080b5a3;
}

void f_0080b9d8(void) /* sub_80B9D8 */
{
    FN_ENTER(0x0080b9d8);
    /* 0080b9d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080b9db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080b9dd: call 0x80b9fc */ r_esp -= 4; W32(r_esp, 0x80b9e2u); f_0080b9fc();
    /* 0080b9e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080b9e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080b9e8: jne 0x80b9ee */ if (!fZ) goto L_0080b9ee;
L_0080b9ea:; BB(0x0080b9ea);
    /* 0080b9ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080b9eb: ret 4 */ FN_RET(0x0080b9d8); r_esp += 8; return;
L_0080b9ee:; BB(0x0080b9ee);
    /* 0080b9ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x80b9f4u); f_005c2f74();
    /* 0080b9f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080b9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080b9f6: ret 4 */ FN_RET(0x0080b9d8); r_esp += 8; return;
}

void f_0080b9fc(void) /* sub_80B9FC */
{
    FN_ENTER(0x0080b9fc);
    /* 0080b9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080b9fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0080b9ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ba01: push 0x8f7288 */ { u32 v = 0x8f7288u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ba06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080ba0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ba0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080ba14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ba17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080ba1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080ba1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080ba20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080ba23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080ba26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ba29: mov dword ptr [ecx], 0xb476a0 */ W32((u32)(r_ecx), 0xb476a0u);
    /* 0080ba2f: mov dword ptr [0xaafcc4], 0 */ W32((u32)(0xaafcc4u), 0x0u);
    /* 0080ba39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080ba40: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x80ba45u); f_007ba1f0();
    /* 0080ba45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080ba48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080ba4f: mov esp, ebp */ r_esp = r_ebp;
    /* 0080ba51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ba52: ret  */ FN_RET(0x0080b9fc); r_esp += 4; return;
}

void f_0080ba54(void) /* sub_80BA54 */
{
    FN_ENTER(0x0080ba54);
    /* 0080ba54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ba55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ba58: mov edi, ecx */ r_edi = r_ecx;
    /* 0080ba5a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x80ba5fu); f_00807ac0();
    /* 0080ba5f: mov edx, eax */ r_edx = r_eax;
    /* 0080ba61: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 0080ba67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ba69: je 0x80baa4 */ if (fZ) goto L_0080baa4;
L_0080ba6b:; BB(0x0080ba6b);
    /* 0080ba6b: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 0080ba71: fadd dword ptr [edi + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x9cu));
    /* 0080ba77: fst dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0));
    /* 0080ba7d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0080ba80: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080ba83: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080ba86: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0080ba89: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080ba8c: fadd dword ptr [eax*4 + 0x97f270] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97f270u));
    /* 0080ba93: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0080ba95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080ba97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080ba98: jae 0x80baa4 */ if (!fC) goto L_0080baa4;
L_0080ba9a:; BB(0x0080ba9a);
    /* 0080ba9a: mov dword ptr [edi + 0xa0], 0 */ W32((u32)(r_edi+0xa0u), 0x0u);
L_0080baa4:; BB(0x0080baa4);
    /* 0080baa4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080baa6: jle 0x80bab6 */ if ((fZ||fS!=fO)) goto L_0080bab6;
L_0080baa8:; BB(0x0080baa8);
    /* 0080baa8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080baab: jg 0x80bab6 */ if ((!fZ&&fS==fO)) goto L_0080bab6;
L_0080baad:; BB(0x0080baad);
    /* 0080baad: add dword ptr [edi + 0x60], 1 */ { u32 ad = (u32)(r_edi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080bab1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080bab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080bab5: ret  */ FN_RET(0x0080ba54); r_esp += 4; return;
L_0080bab6:; BB(0x0080bab6);
    /* 0080bab6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bab7: call 0x807e4c */ r_esp -= 4; W32(r_esp, 0x80babcu); f_00807e4c();
    /* 0080babc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080babd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080babf: je 0x80bae3 */ if (fZ) goto L_0080bae3;
L_0080bac1:; BB(0x0080bac1);
    /* 0080bac1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bac7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x80baccu); f_0068d5a8();
    /* 0080bacc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080bacd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bacf: je 0x80bae3 */ if (fZ) goto L_0080bae3;
L_0080bad1:; BB(0x0080bad1);
    /* 0080bad1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0080bad4: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0080bad7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0080bada: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0080badd: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0080bae0: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
L_0080bae3:; BB(0x0080bae3);
    /* 0080bae3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080bae6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080bae7: ret  */ FN_RET(0x0080ba54); r_esp += 4; return;
}

void f_0080bae8(void) /* sub_80BAE8 */
{
    FN_ENTER(0x0080bae8);
    /* 0080bae8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bae9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080baeb: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x80baf0u); f_00520db8();
    /* 0080baf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080baf2: jne 0x80bb7d */ if (!fZ) goto L_0080bb7d;
L_0080baf8:; BB(0x0080baf8);
    /* 0080baf8: mov eax, dword ptr [0xa114d0] */ r_eax = R32((u32)(0xa114d0u));
    /* 0080bafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080baff: je 0x80bb7d */ if (fZ) goto L_0080bb7d;
L_0080bb01:; BB(0x0080bb01);
    /* 0080bb01: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x80bb06u); f_0082dbac();
    /* 0080bb06: mov ecx, dword ptr [0xaafcbc] */ r_ecx = R32((u32)(0xaafcbcu));
    /* 0080bb0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bb0e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x80bb13u); f_005b8624();
    /* 0080bb13: mov ecx, eax */ r_ecx = r_eax;
    /* 0080bb15: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x80bb1au); f_00829cc8();
    /* 0080bb1a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x80bb1fu); f_0082d7b0();
    /* 0080bb1f: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0080bb22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080bb24: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x80bb29u); f_0082d8bc();
    /* 0080bb29: call 0x807e3c */ r_esp -= 4; W32(r_esp, 0x80bb2eu); f_00807e3c();
    /* 0080bb2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bb30: je 0x80bb42 */ if (fZ) goto L_0080bb42;
L_0080bb32:; BB(0x0080bb32);
    /* 0080bb32: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bb35: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bb38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080bb3a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bb3d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x80bb42u); f_00830b74();
L_0080bb42:; BB(0x0080bb42);
    /* 0080bb42: push 0x3f75c28f */ { u32 v = 0x3f75c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bb47: push 0x3f75c28f */ { u32 v = 0x3f75c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bb4c: push 0x3f75c28f */ { u32 v = 0x3f75c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bb51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080bb53: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x80bb58u); f_0082fa0c();
    /* 0080bb58: mov edx, dword ptr [ebx + 0x94] */ r_edx = R32((u32)(r_ebx+0x94u));
    /* 0080bb5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bb60: je 0x80bb7f */ if (fZ) goto L_0080bb7f;
L_0080bb62:; BB(0x0080bb62);
    /* 0080bb62: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bb68: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 0080bb6e: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x80bb73u); f_0083bd00();
L_0080bb73:; BB(0x0080bb73);
    /* 0080bb73: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x80bb78u); f_0082da80();
    /* 0080bb78: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x80bb7du); f_0082dab0();
L_0080bb7d:; BB(0x0080bb7d);
    /* 0080bb7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bb7e: ret  */ FN_RET(0x0080bae8); r_esp += 4; return;
L_0080bb7f:; BB(0x0080bb7f);
    /* 0080bb7f: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 0080bb85: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x80bb8au); f_00831758();
    /* 0080bb8a: jmp 0x80bb73 */ goto L_0080bb73;
}

void f_0080bb8c(void) /* sub_80BB8C */
{
    FN_ENTER(0x0080bb8c);
    /* 0080bb8c: mov ecx, dword ptr [0xaafcbc] */ r_ecx = R32((u32)(0xaafcbcu));
    /* 0080bb92: mov dword ptr [0xa114d0], 1 */ W32((u32)(0xa114d0u), 0x1u);
    /* 0080bb9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bb9e: je 0x80bbb3 */ if (fZ) goto L_0080bbb3;
L_0080bba0:; BB(0x0080bba0);
    /* 0080bba0: je 0x80bba9 */ if (fZ) goto L_0080bba9;
L_0080bba2:; BB(0x0080bba2);
    /* 0080bba2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bba4: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x80bba9u); f_004066a8();
L_0080bba9:; BB(0x0080bba9);
    /* 0080bba9: mov dword ptr [0xaafcbc], 0 */ W32((u32)(0xaafcbcu), 0x0u);
L_0080bbb3:; BB(0x0080bbb3);
    /* 0080bbb3: mov dword ptr [0xaafcc4], 0 */ W32((u32)(0xaafcc4u), 0x0u);
    /* 0080bbbd: ret  */ FN_RET(0x0080bb8c); r_esp += 4; return;
}

void f_0080bbc0(void) /* sub_80BBC0 */
{
    FN_ENTER(0x0080bbc0);
    /* 0080bbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080bbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0080bbc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bbc5: push 0x8f72b0 */ { u32 v = 0x8f72b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bbca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080bbd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080bbd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080bbd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080bbdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080bbde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080bbe1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080bbe4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080bbe7: mov eax, dword ptr [0xaafcbc] */ r_eax = R32((u32)(0xaafcbcu));
    /* 0080bbec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bbee: je 0x80bc36 */ if (fZ) goto L_0080bc36;
L_0080bbf0:; BB(0x0080bbf0);
    /* 0080bbf0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0080bbf7: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bbfc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80bc01u); f_005caba4();
    /* 0080bc01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080bc02: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0080bc05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bc07: je 0x80bc4e */ if (fZ) goto L_0080bc4e;
L_0080bc09:; BB(0x0080bc09);
    /* 0080bc09: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0080bc10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080bc17: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bc1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bc20: call 0x80bc54 */ r_esp -= 4; W32(r_esp, 0x80bc25u); f_0080bc54();
    /* 0080bc25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bc28: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0080bc2f:; BB(0x0080bc2f);
    /* 0080bc2f: mov dword ptr [0xaafcc4], eax */ W32((u32)(0xaafcc4u), r_eax);
    /* 0080bc34: jmp 0x80bc40 */ goto L_0080bc40;
L_0080bc36:; BB(0x0080bc36);
    /* 0080bc36: mov dword ptr [0xaafcc4], 0 */ W32((u32)(0xaafcc4u), 0x0u);
L_0080bc40:; BB(0x0080bc40);
    /* 0080bc40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080bc43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080bc4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0080bc4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080bc4d: ret  */ FN_RET(0x0080bbc0); r_esp += 4; return;
L_0080bc4e:; BB(0x0080bc4e);
    /* 0080bc4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bc50: jmp 0x80bc2f */ goto L_0080bc2f;
}

void f_0080bc54(void) /* sub_80BC54 */
{
    FN_ENTER(0x0080bc54);
    /* 0080bc54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080bc55: mov ebp, esp */ r_ebp = r_esp;
    /* 0080bc57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bc59: push 0x8f72cc */ { u32 v = 0x8f72ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bc5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080bc64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080bc65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080bc6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080bc6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080bc72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080bc75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080bc78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080bc7b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bc7e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080bc81: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x80bc86u); f_007ba278();
    /* 0080bc86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080bc8d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bc90: mov dword ptr [edx], 0xb476a0 */ W32((u32)(r_edx), 0xb476a0u);
    /* 0080bc96: mov eax, dword ptr [0xa114cc] */ r_eax = R32((u32)(0xa114ccu));
    /* 0080bc9b: mov ecx, dword ptr [0xaafcbc] */ r_ecx = R32((u32)(0xaafcbcu));
    /* 0080bca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bca3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080bca6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x80bcabu); f_005b8610();
    /* 0080bcab: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bcae: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 0080bcb4: mov eax, dword ptr [0xaafcb8] */ r_eax = R32((u32)(0xaafcb8u));
    /* 0080bcb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bcbb: jne 0x80bcc9 */ if (!fZ) goto L_0080bcc9;
L_0080bcbd:; BB(0x0080bcbd);
    /* 0080bcbd: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
    /* 0080bcc7: jmp 0x80bcdf */ goto L_0080bcdf;
L_0080bcc9:; BB(0x0080bcc9);
    /* 0080bcc9: mov ecx, dword ptr [0xaafcbc] */ r_ecx = R32((u32)(0xaafcbcu));
    /* 0080bccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bcd1: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x80bcd6u); f_005b8638();
    /* 0080bcd6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bcd9: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
L_0080bcdf:; BB(0x0080bcdf);
    /* 0080bcdf: mov ecx, dword ptr [0xaafcbc] */ r_ecx = R32((u32)(0xaafcbcu));
    /* 0080bce5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bce7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x80bcecu); f_005b8624();
    /* 0080bcec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080bcef: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 0080bcf5: mov eax, edx */ r_eax = r_edx;
    /* 0080bcf7: mov dword ptr [edx + 0x9c], 0x3dcccccd */ W32((u32)(r_edx+0x9cu), 0x3dcccccdu);
    /* 0080bd01: mov dword ptr [edx + 0xa0], 0 */ W32((u32)(r_edx+0xa0u), 0x0u);
    /* 0080bd0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080bd0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080bd15: mov esp, ebp */ r_esp = r_ebp;
    /* 0080bd17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080bd18: ret 4 */ FN_RET(0x0080bc54); r_esp += 8; return;
}

void f_0080bd1c(void) /* sub_80BD1C */
{
    FN_ENTER(0x0080bd1c);
    /* 0080bd1c: mov dword ptr [0xaafcac], 0x3f800000 */ W32((u32)(0xaafcacu), 0x3f800000u);
    /* 0080bd26: mov dword ptr [0xaafcb0], 0x41000000 */ W32((u32)(0xaafcb0u), 0x41000000u);
    /* 0080bd30: mov dword ptr [0xaafcb4], 0x3fc00000 */ W32((u32)(0xaafcb4u), 0x3fc00000u);
    /* 0080bd3a: ret  */ FN_RET(0x0080bd1c); r_esp += 4; return;
}

void f_0080bd3c(void) /* sub_80BD3C */
{
    FN_ENTER(0x0080bd3c);
    /* 0080bd3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080bd3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0080bd3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080bd41: push 0x8f72f4 */ { u32 v = 0x8f72f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bd46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080bd4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080bd4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080bd54: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080bd57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080bd5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0080bd5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0080bd60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0080bd63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080bd65: mov dword ptr [0xaafcc4], eax */ W32((u32)(0xaafcc4u), r_eax);
    /* 0080bd6a: mov dword ptr [0xaafcbc], eax */ W32((u32)(0xaafcbcu), r_eax);
    /* 0080bd6f: mov dword ptr [0xaafcb8], eax */ W32((u32)(0xaafcb8u), r_eax);
    /* 0080bd74: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 0080bd7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bd7b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bd81: call 0x80bf14 */ r_esp -= 4; W32(r_esp, 0x80bd86u); f_0080bf14();
    /* 0080bd86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080bd89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bd8b: jne 0x80bd9e */ if (!fZ) goto L_0080bd9e;
L_0080bd8d:; BB(0x0080bd8d);
    /* 0080bd8d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080bd90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080bd93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080bd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0080bd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080bd9d: ret  */ FN_RET(0x0080bd3c); r_esp += 4; return;
L_0080bd9e:; BB(0x0080bd9e);
    /* 0080bd9e: push dword ptr [ebp - 0x84] */ { u32 v = R32((u32)(r_ebp+0xffffff7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bda4: call 0x80bee8 */ r_esp -= 4; W32(r_esp, 0x80bda9u); f_0080bee8();
    /* 0080bda9: mov ebx, eax */ r_ebx = r_eax;
    /* 0080bdab: push 0x97f298 */ { u32 v = 0x97f298u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bdb0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0080bdb3: push dword ptr [ebx + edx*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bdb7: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0080bdba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bdbb: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80bdc0u); f_0078e574();
    /* 0080bdc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080bdc3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80bdc8u); f_006dc358();
    /* 0080bdc8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bdcb: je 0x80beb0 */ if (fZ) goto L_0080beb0;
L_0080bdd1:; BB(0x0080bdd1);
    /* 0080bdd1: push 0x97f2a8 */ { u32 v = 0x97f2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bdd6: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0080bdd9: push dword ptr [ebx + edx*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bddd: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0080bde0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bde1: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80bde6u); f_0078e574();
    /* 0080bde6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080bde9:; BB(0x0080bde9);
    /* 0080bde9: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0080bdec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080bdee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080bdef: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x80bdf4u); f_00708238();
    /* 0080bdf4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080bdf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bdf9: je 0x80bd8d */ if (fZ) goto L_0080bd8d;
L_0080bdfb:; BB(0x0080bdfb);
    /* 0080bdfb: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0080bdfe: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0080be01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be02: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x80be07u); f_0086db40();
    /* 0080be07: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0080be0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080be0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be0d: call 0x708238 */ r_esp -= 4; W32(r_esp, 0x80be12u); f_00708238();
    /* 0080be12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080be15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080be17: je 0x80be32 */ if (fZ) goto L_0080be32;
L_0080be19:; BB(0x0080be19);
    /* 0080be19: mov dword ptr [0xaafcb8], 1 */ W32((u32)(0xaafcb8u), 0x1u);
    /* 0080be23: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 0080be26: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0080be29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be2a: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x80be2fu); f_0086db40();
    /* 0080be2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080be30: jmp 0x80be39 */ goto L_0080be39;
L_0080be32:; BB(0x0080be32);
    /* 0080be32: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0080be39:; BB(0x0080be39);
    /* 0080be39: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0080be3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080be40: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0080be43: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080be46: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0080be49: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80be4eu); f_008581c5();
    /* 0080be4e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080be51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080be54: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0080be57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080be59: je 0x80bea9 */ if (fZ) goto L_0080bea9;
L_0080be5b:; BB(0x0080be5b);
    /* 0080be5b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0080be62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080be69: mov ecx, eax */ r_ecx = r_eax;
    /* 0080be6b: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 0080be6e: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 0080be71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080be73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080be76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080be77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080be78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080be7a: call 0x5b74ec */ r_esp -= 4; W32(r_esp, 0x80be7fu); f_005b74ec();
    /* 0080be7f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0080be86:; BB(0x0080be86);
    /* 0080be86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080be89: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080be8c: mov dword ptr [0xaafcbc], eax */ W32((u32)(0xaafcbcu), r_eax);
    /* 0080be91: mov dword ptr [0xa114d0], 1 */ W32((u32)(0xa114d0u), 0x1u);
    /* 0080be9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080be9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080bea5: mov esp, ebp */ r_esp = r_ebp;
    /* 0080bea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080bea8: ret  */ FN_RET(0x0080bd3c); r_esp += 4; return;
L_0080bea9:; BB(0x0080bea9);
    /* 0080bea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080beab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080beae: jmp 0x80be86 */ goto L_0080be86;
L_0080beb0:; BB(0x0080beb0);
    /* 0080beb0: push 0x97f2a0 */ { u32 v = 0x97f2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080beb5: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0080beb8: push dword ptr [ebx + edx*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bebc: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0080bebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bec0: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80bec5u); f_0078e574();
    /* 0080bec5: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0080bec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bec9: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80beceu); f_005b9328();
    /* 0080bece: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080bed1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080bed3: jle 0x80bdd1 */ if ((fZ||fS!=fO)) goto L_0080bdd1;
L_0080bed9:; BB(0x0080bed9);
    /* 0080bed9: jmp 0x80bde9 */ goto L_0080bde9;
}

void f_0080bee0(void) /* sub_80BEE0 */
{
    FN_ENTER(0x0080bee0);
    /* 0080bee0: call 0x80c9f0 */ r_esp -= 4; W32(r_esp, 0x80bee5u); f_0080c9f0();
    /* 0080bee5: ret  */ FN_RET(0x0080bee0); r_esp += 4; return;
}

void f_0080bee8(void) /* sub_80BEE8 */
{
    FN_ENTER(0x0080bee8);
    /* 0080bee8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bee9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080beed: cmp ebx, 0x2e */ {  u32 a = r_ebx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080bef0: jle 0x80bef6 */ if ((fZ||fS!=fO)) goto L_0080bef6;
L_0080bef2:; BB(0x0080bef2);
    /* 0080bef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bef4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bef5: ret  */ FN_RET(0x0080bee8); r_esp += 4; return;
L_0080bef6:; BB(0x0080bef6);
    /* 0080bef6: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x80befbu); f_0078b220();
    /* 0080befb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080befd: je 0x80bf08 */ if (fZ) goto L_0080bf08;
L_0080beff:; BB(0x0080beff);
    /* 0080beff: mov eax, dword ptr [ebx*8 + 0xa114e0] */ r_eax = R32((u32)(r_ebx*8+0xa114e0u));
    /* 0080bf06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf07: ret  */ FN_RET(0x0080bee8); r_esp += 4; return;
L_0080bf08:; BB(0x0080bf08);
    /* 0080bf08: mov eax, dword ptr [ebx*8 + 0xa116e0] */ r_eax = R32((u32)(r_ebx*8+0xa116e0u));
    /* 0080bf0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf10: ret  */ FN_RET(0x0080bee8); r_esp += 4; return;
}

void f_0080bf14(void) /* sub_80BF14 */
{
    FN_ENTER(0x0080bf14);
    /* 0080bf14: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080bf17: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080bf1b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080bf1f: call 0x80bf30 */ r_esp -= 4; W32(r_esp, 0x80bf24u); f_0080bf30();
    /* 0080bf24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080bf27: ret  */ FN_RET(0x0080bf14); r_esp += 4; return;
}

void f_0080bf28(void) /* sub_80BF28 */
{
    FN_ENTER(0x0080bf28);
    /* 0080bf28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080bf2c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0080bf30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bf31: mov ecx, edx */ r_ecx = r_edx;
    /* 0080bf33: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080bf36: jle 0x80bf3c */ if ((fZ||fS!=fO)) goto L_0080bf3c;
L_0080bf38:; BB(0x0080bf38);
    /* 0080bf38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bf3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf3b: ret  */ FN_RET(0x0080bf28); r_esp += 4; return;
L_0080bf3c:; BB(0x0080bf3c);
    /* 0080bf3c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080bf3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080bf41: mov ebx, dword ptr [edx + eax*8 + 0xaafce0] */ r_ebx = R32((u32)(r_edx+r_eax*8+0xaafce0u));
    /* 0080bf48: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0080bf4a: mov ebx, dword ptr [edx + eax*8 + 0xaafce4] */ r_ebx = R32((u32)(r_edx+r_eax*8+0xaafce4u));
    /* 0080bf51: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0080bf54: mov eax, dword ptr [edx + eax*8 + 0xaafce8] */ r_eax = R32((u32)(r_edx+r_eax*8+0xaafce8u));
    /* 0080bf5b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0080bf5e: mov eax, 1 */ r_eax = 0x1u;
    /* 0080bf63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf64: ret  */ FN_RET(0x0080bf28); r_esp += 4; return;
}

void f_0080bf30(void) /* sub_80BF30 */
{
    FN_ENTER(0x0080bf30);
    /* 0080bf30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bf31: mov ecx, edx */ r_ecx = r_edx;
    /* 0080bf33: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080bf36: jle 0x80bf3c */ if ((fZ||fS!=fO)) goto L_0080bf3c;
L_0080bf38:; BB(0x0080bf38);
    /* 0080bf38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080bf3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf3b: ret  */ FN_RET(0x0080bf30); r_esp += 4; return;
L_0080bf3c:; BB(0x0080bf3c);
    /* 0080bf3c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080bf3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080bf41: mov ebx, dword ptr [edx + eax*8 + 0xaafce0] */ r_ebx = R32((u32)(r_edx+r_eax*8+0xaafce0u));
    /* 0080bf48: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0080bf4a: mov ebx, dword ptr [edx + eax*8 + 0xaafce4] */ r_ebx = R32((u32)(r_edx+r_eax*8+0xaafce4u));
    /* 0080bf51: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0080bf54: mov eax, dword ptr [edx + eax*8 + 0xaafce8] */ r_eax = R32((u32)(r_edx+r_eax*8+0xaafce8u));
    /* 0080bf5b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0080bf5e: mov eax, 1 */ r_eax = 0x1u;
    /* 0080bf63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080bf64: ret  */ FN_RET(0x0080bf30); r_esp += 4; return;
}

void f_0080bf68(void) /* sub_80BF68 */
{
    FN_ENTER(0x0080bf68);
    /* 0080bf68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080bf69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080bf6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080bf6b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080bf6e: push dword ptr [0xaafdb8] */ { u32 v = R32((u32)(0xaafdb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080bf74: mov esi, 0xaafce0 */ r_esi = 0xaafce0u;
    /* 0080bf79: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x80bf7eu); f_0080c79c();
    /* 0080bf7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080bf7f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x80bf84u); f_007a61a4();
    /* 0080bf84: mov ebx, eax */ r_ebx = r_eax;
    /* 0080bf86: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80bf8bu); f_006dc358();
    /* 0080bf8b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bf8e: jne 0x80bf95 */ if (!fZ) goto L_0080bf95;
L_0080bf90:; BB(0x0080bf90);
    /* 0080bf90: mov ebx, 0xb */ r_ebx = 0xbu;
L_0080bf95:; BB(0x0080bf95);
    /* 0080bf95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080bf97: mov edi, ebx */ r_edi = r_ebx;
    /* 0080bf99: mov ebx, eax */ r_ebx = r_eax;
L_0080bf9b:; BB(0x0080bf9b);
    /* 0080bf9b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080bf9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080bf9f: jl 0x80c116 */ if ((fS!=fO)) goto L_0080c116;
L_0080bfa5:; BB(0x0080bfa5);
    /* 0080bfa5: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080bfa8: jne 0x80c023 */ if (!fZ) goto L_0080c023;
L_0080bfaa:; BB(0x0080bfaa);
    /* 0080bfaa: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80bfafu); f_008587a5();
    /* 0080bfaf: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080bfb1: fild dword ptr [edx*8 + 0x97f700] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f700u)));
    /* 0080bfb8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080bfbb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0080bfbe: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080bfc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080bfc6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080bfca: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080bfcf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080bfd4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080bfd8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080bfdc: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080bfdf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080bfe3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80bfe8u); f_008587a5();
    /* 0080bfe8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080bfea: fild dword ptr [edx*8 + 0x97f704] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f704u)));
    /* 0080bff1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080bff5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080bff9: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080bfff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c001: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c005: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c00a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c00f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c013: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c017: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c01a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c01e: jmp 0x80c116 */ goto L_0080c116;
L_0080c023:; BB(0x0080c023);
    /* 0080c023: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c026: jne 0x80c0a0 */ if (!fZ) goto L_0080c0a0;
L_0080c028:; BB(0x0080c028);
    /* 0080c028: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c02du); f_008587a5();
    /* 0080c02d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c02f: fild dword ptr [edx*8 + 0x97f580] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f580u)));
    /* 0080c036: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c03a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c03e: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080c044: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c046: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c04a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c04f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c054: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c058: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c05c: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c05f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c063: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c068u); f_008587a5();
    /* 0080c068: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c06a: fild dword ptr [edx*8 + 0x97f584] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f584u)));
    /* 0080c071: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c075: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c079: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080c07f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c081: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c085: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c08a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c08f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c093: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c097: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c09a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c09e: jmp 0x80c116 */ goto L_0080c116;
L_0080c0a0:; BB(0x0080c0a0);
    /* 0080c0a0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c0a5u); f_008587a5();
    /* 0080c0a5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c0a7: fild dword ptr [edx*8 + 0x97f700] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f700u)));
    /* 0080c0ae: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c0b2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c0b6: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080c0bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c0be: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c0c2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c0c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c0cc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c0d0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c0d4: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c0d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c0db: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c0e0u); f_008587a5();
    /* 0080c0e0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c0e2: fild dword ptr [edx*8 + 0x97f704] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f704u)));
    /* 0080c0e9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c0ed: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c0f1: fdiv dword ptr [0x97f880] */ ST(0) = ST(0) / R_F32((u32)(0x97f880u));
    /* 0080c0f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c0f9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c0fd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c102: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c107: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c10b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c10f: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c112: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
L_0080c116:; BB(0x0080c116);
    /* 0080c116: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080c119: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c11c: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c11f: jl 0x80bf9b */ if ((fS!=fO)) goto L_0080bf9b;
L_0080c125:; BB(0x0080c125);
    /* 0080c125: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c128: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080c129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080c12a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080c12b: ret  */ FN_RET(0x0080bf68); r_esp += 4; return;
}

