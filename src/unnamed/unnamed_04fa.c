#include "protos.h"

void f_004fa18c(void) /* sub_4FA18C */
{
    FN_ENTER(0x004fa18c);
    /* 004fa18c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa18d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa18e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa18f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa190: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fa192: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 004fa198: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa199: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa19eu); f_008101d0();
    /* 004fa19e: mov ebp, eax */ r_ebp = r_eax;
    /* 004fa1a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1a1: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa1a6u); f_008123e4();
    /* 004fa1a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa1a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa1ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa1ad: jle 0x4fa219 */ if ((fZ||fS!=fO)) goto L_004fa219;
L_004fa1af:; BB(0x004fa1af);
    /* 004fa1af: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa1b2: jl 0x4fa206 */ if ((fS!=fO)) goto L_004fa206;
L_004fa1b4:; BB(0x004fa1b4);
    /* 004fa1b4: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa1b8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa1bb: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa1c1:; BB(0x004fa1c1);
    /* 004fa1c1: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa1c4: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa1c8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa1cb: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa1d1:; BB(0x004fa1d1);
    /* 004fa1d1: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa1d4: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa1d8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa1db: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa1e1:; BB(0x004fa1e1);
    /* 004fa1e1: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa1e4: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa1e8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa1eb: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa1ed:; BB(0x004fa1ed);
    /* 004fa1ed: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa1f0: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa1f4: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa1f7: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa1f9:; BB(0x004fa1f9);
    /* 004fa1f9: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa1fc: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa1ff: lea esi, [eax - 6] */ r_esi = (u32)(r_eax+0xfffffffau);
    /* 004fa202: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa204: jle 0x4fa1b4 */ if ((fZ||fS!=fO)) goto L_004fa1b4;
L_004fa206:; BB(0x004fa206);
    /* 004fa206: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa20a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa20d: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa20f:; BB(0x004fa20f);
    /* 004fa20f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa212: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa215: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa217: jl 0x4fa206 */ if ((fS!=fO)) goto L_004fa206;
L_004fa219:; BB(0x004fa219);
    /* 004fa219: mov ebp, dword ptr [0xa727a0] */ r_ebp = R32((u32)(0xa727a0u));
    /* 004fa21f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa221:; BB(0x004fa221);
    /* 004fa221: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa225: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa228: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa22a:; BB(0x004fa22a);
    /* 004fa22a: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa22d: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa231: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa234: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa236:; BB(0x004fa236);
    /* 004fa236: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa239: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa23d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa240: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa242:; BB(0x004fa242);
    /* 004fa242: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa245: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa249: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa24c: je 0x4fa25e */ if (fZ) goto L_004fa25e;
L_004fa24e:; BB(0x004fa24e);
    /* 004fa24e: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa251: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa254: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa25a: jl 0x4fa221 */ if ((fS!=fO)) goto L_004fa221;
L_004fa25c:; BB(0x004fa25c);
    /* 004fa25c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004fa25e:; BB(0x004fa25e);
    /* 004fa25e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fa260: je 0x4fa49e */ if (fZ) goto L_004fa49e;
L_004fa266:; BB(0x004fa266);
    /* 004fa266: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa268: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fa26du); f_007ba8d0();
    /* 004fa26d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa26e: mov word ptr [ebx + 0xbe], ax */ W16((u32)(r_ebx+0xbeu), (u16)r_eax);
    /* 004fa275: lea edx, [ebx + 0xb8] */ r_edx = (u32)(r_ebx+0xb8u);
    /* 004fa27b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa27c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fa27e: call 0x4f88d4 */ r_esp -= 4; W32(r_esp, 0x4fa283u); f_004f88d4();
    /* 004fa283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fa285: je 0x4fa49e */ if (fZ) goto L_004fa49e;
L_004fa28b:; BB(0x004fa28b);
    /* 004fa28b: mov edx, dword ptr [ebx + 0xfc] */ r_edx = R32((u32)(r_ebx+0xfcu));
    /* 004fa291: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 004fa294: mov word ptr [ebp], si */ W16((u32)(r_ebp), (u16)r_esi);
    /* 004fa298: movzx edi, word ptr [ebx + 0xb8] */ r_edi = (u32)R16((u32)(r_ebx+0xb8u));
    /* 004fa29f: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 004fa2a3: movzx edx, word ptr [ebx + 0xba] */ r_edx = (u32)R16((u32)(r_ebx+0xbau));
    /* 004fa2aa: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 004fa2ae: movzx edx, word ptr [ebx + 0xbc] */ r_edx = (u32)R16((u32)(r_ebx+0xbcu));
    /* 004fa2b5: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 004fa2b9: movzx edx, word ptr [ebx + 0xbe] */ r_edx = (u32)R16((u32)(r_ebx+0xbeu));
    /* 004fa2c0: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 004fa2c4: movzx edx, word ptr [ebx + 0xc0] */ r_edx = (u32)R16((u32)(r_ebx+0xc0u));
    /* 004fa2cb: mov word ptr [ebp + 0xc], dx */ W16((u32)(r_ebp+0xcu), (u16)r_edx);
    /* 004fa2cf: movzx edx, word ptr [ebx + 0xc2] */ r_edx = (u32)R16((u32)(r_ebx+0xc2u));
    /* 004fa2d6: mov word ptr [ebp + 0xe], dx */ W16((u32)(r_ebp+0xeu), (u16)r_edx);
    /* 004fa2da: movzx edx, word ptr [ebx + 0xc4] */ r_edx = (u32)R16((u32)(r_ebx+0xc4u));
    /* 004fa2e1: mov word ptr [ebp + 0x10], dx */ W16((u32)(r_ebp+0x10u), (u16)r_edx);
    /* 004fa2e5: movzx edx, word ptr [ebx + 0xc6] */ r_edx = (u32)R16((u32)(r_ebx+0xc6u));
    /* 004fa2ec: mov word ptr [ebp + 0x12], dx */ W16((u32)(r_ebp+0x12u), (u16)r_edx);
    /* 004fa2f0: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 004fa2f6: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 004fa2f9: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 004fa2ff: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 004fa302: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 004fa308: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 004fa30b: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 004fa311: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 004fa314: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 004fa31a: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004fa31d: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 004fa323: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 004fa326: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 004fa32c: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 004fa32f: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 004fa335: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004fa338: mov edx, dword ptr [ebx + 0xe8] */ r_edx = R32((u32)(r_ebx+0xe8u));
    /* 004fa33e: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 004fa341: mov edx, dword ptr [ebx + 0xec] */ r_edx = R32((u32)(r_ebx+0xecu));
    /* 004fa347: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 004fa34a: mov edx, dword ptr [ebx + 0xf0] */ r_edx = R32((u32)(r_ebx+0xf0u));
    /* 004fa350: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 004fa353: movzx edx, word ptr [ebx + 0xf4] */ r_edx = (u32)R16((u32)(r_ebx+0xf4u));
    /* 004fa35a: mov word ptr [ebp + 0x40], dx */ W16((u32)(r_ebp+0x40u), (u16)r_edx);
    /* 004fa35e: movzx edx, word ptr [ebx + 0xf6] */ r_edx = (u32)R16((u32)(r_ebx+0xf6u));
    /* 004fa365: mov word ptr [ebp + 0x42], dx */ W16((u32)(r_ebp+0x42u), (u16)r_edx);
    /* 004fa369: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004fa36c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fa36e: mov word ptr [ebp + 0xc], dx */ W16((u32)(r_ebp+0xcu), (u16)r_edx);
    /* 004fa372: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 004fa378: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004fa37b: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 004fa37f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa381: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 004fa385: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa38b: mov dword ptr [eax + 0x80], ebp */ W32((u32)(r_eax+0x80u), r_ebp);
    /* 004fa391: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa393: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa398u); f_008101d0();
    /* 004fa398: mov esi, eax */ r_esi = r_eax;
    /* 004fa39a: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa3a0: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa3a5u); f_008123e4();
    /* 004fa3a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa3a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa3aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa3ac: jle 0x4fa3c3 */ if ((fZ||fS!=fO)) goto L_004fa3c3;
L_004fa3ae:; BB(0x004fa3ae);
    /* 004fa3ae: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fa3b1: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3b4: je 0x4fa3b9 */ if (fZ) goto L_004fa3b9;
L_004fa3b6:; BB(0x004fa3b6);
    /* 004fa3b6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa3b9:; BB(0x004fa3b9);
    /* 004fa3b9: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa3bc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa3bf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa3c1: jl 0x4fa3ae */ if ((fS!=fO)) goto L_004fa3ae;
L_004fa3c3:; BB(0x004fa3c3);
    /* 004fa3c3: mov esi, dword ptr [0xa727a0] */ r_esi = R32((u32)(0xa727a0u));
    /* 004fa3c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa3cb:; BB(0x004fa3cb);
    /* 004fa3cb: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fa3ce: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3d1: je 0x4fa3d6 */ if (fZ) goto L_004fa3d6;
L_004fa3d3:; BB(0x004fa3d3);
    /* 004fa3d3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa3d6:; BB(0x004fa3d6);
    /* 004fa3d6: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
    /* 004fa3d9: movsx esi, word ptr [esi + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x48u));
    /* 004fa3dd: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3e0: je 0x4fa3e5 */ if (fZ) goto L_004fa3e5;
L_004fa3e2:; BB(0x004fa3e2);
    /* 004fa3e2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa3e5:; BB(0x004fa3e5);
    /* 004fa3e5: movsx esi, word ptr [eax + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004fa3e9: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3ec: je 0x4fa3f1 */ if (fZ) goto L_004fa3f1;
L_004fa3ee:; BB(0x004fa3ee);
    /* 004fa3ee: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa3f1:; BB(0x004fa3f1);
    /* 004fa3f1: movsx esi, word ptr [eax + 0x90] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004fa3f8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3fb: je 0x4fa400 */ if (fZ) goto L_004fa400;
L_004fa3fd:; BB(0x004fa3fd);
    /* 004fa3fd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa400:; BB(0x004fa400);
    /* 004fa400: lea esi, [eax + 0xd8] */ r_esi = (u32)(r_eax+0xd8u);
    /* 004fa406: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa409: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa40f: jl 0x4fa3cb */ if ((fS!=fO)) goto L_004fa3cb;
L_004fa411:; BB(0x004fa411);
    /* 004fa411: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa417: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fa41a: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fa41d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004fa41f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fa421: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa426u); f_008101d0();
    /* 004fa426: mov ebp, eax */ r_ebp = r_eax;
    /* 004fa428: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa42e: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa433u); f_008123e4();
    /* 004fa433: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa436: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa438: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa43a: jle 0x4fa45a */ if ((fZ||fS!=fO)) goto L_004fa45a;
L_004fa43c:; BB(0x004fa43c);
    /* 004fa43c: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa440: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa443: je 0x4fa450 */ if (fZ) goto L_004fa450;
L_004fa445:; BB(0x004fa445);
    /* 004fa445: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa449: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa44b: jne 0x4fa450 */ if (!fZ) goto L_004fa450;
L_004fa44d:; BB(0x004fa44d);
    /* 004fa44d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa450:; BB(0x004fa450);
    /* 004fa450: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa453: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa456: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa458: jl 0x4fa43c */ if ((fS!=fO)) goto L_004fa43c;
L_004fa45a:; BB(0x004fa45a);
    /* 004fa45a: mov ebp, dword ptr [0xa727a0] */ r_ebp = R32((u32)(0xa727a0u));
    /* 004fa460: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa462:; BB(0x004fa462);
    /* 004fa462: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa466: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa469: je 0x4fa476 */ if (fZ) goto L_004fa476;
L_004fa46b:; BB(0x004fa46b);
    /* 004fa46b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa46f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa471: jne 0x4fa476 */ if (!fZ) goto L_004fa476;
L_004fa473:; BB(0x004fa473);
    /* 004fa473: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa476:; BB(0x004fa476);
    /* 004fa476: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 004fa479: movsx ebp, word ptr [ebp + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x48u));
    /* 004fa47d: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa480: je 0x4fa48d */ if (fZ) goto L_004fa48d;
L_004fa482:; BB(0x004fa482);
    /* 004fa482: movsx ebp, word ptr [eax + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fa486: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa488: jne 0x4fa48d */ if (!fZ) goto L_004fa48d;
L_004fa48a:; BB(0x004fa48a);
    /* 004fa48a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa48d:; BB(0x004fa48d);
    /* 004fa48d: lea ebp, [eax + 0x48] */ r_ebp = (u32)(r_eax+0x48u);
    /* 004fa490: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa493: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fa499: jl 0x4fa462 */ if ((fS!=fO)) goto L_004fa462;
L_004fa49b:; BB(0x004fa49b);
    /* 004fa49b: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
L_004fa49e:; BB(0x004fa49e);
    /* 004fa49e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa49f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa4a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa4a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa4a2: ret  */ FN_RET(0x004fa18c); r_esp += 4; return;
}

void f_004fa4a4(void) /* sub_4FA4A4 */
{
    FN_ENTER(0x004fa4a4);
    /* 004fa4a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4a9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004fa4ac: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa4ae: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa4b4: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa4b9u); f_008101d0();
    /* 004fa4b9: mov ebp, eax */ r_ebp = r_eax;
    /* 004fa4bb: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa4c1: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa4c6u); f_008123e4();
    /* 004fa4c6: mov ecx, eax */ r_ecx = r_eax;
    /* 004fa4c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4cb: fld dword ptr [0x91e9a0] */ FPUSH(R_F32((u32)(0x91e9a0u)));
    /* 004fa4d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa4d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa4d5: jle 0x4fa518 */ if ((fZ||fS!=fO)) goto L_004fa518;
L_004fa4d7:; BB(0x004fa4d7);
    /* 004fa4d7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004fa4da:; BB(0x004fa4da);
    /* 004fa4da: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa4de: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa4e1: je 0x4fa50e */ if (fZ) goto L_004fa50e;
L_004fa4e3:; BB(0x004fa4e3);
    /* 004fa4e3: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 004fa4e6: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 004fa4e9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa4eb: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 004fa4ee: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 004fa4f1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa4f3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa4f5: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004fa4f8: fsub dword ptr [ebp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x1cu));
    /* 004fa4fb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa4fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa4ff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fa501: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fa503: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fa504: jae 0x4fa7e0 */ if (!fC) goto L_004fa7e0;
L_004fa50a:; BB(0x004fa50a);
    /* 004fa50a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fa50c: mov ebx, ebp */ r_ebx = r_ebp;
L_004fa50e:; BB(0x004fa50e);
    /* 004fa50e: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa511: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa514: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa516: jl 0x4fa4da */ if ((fS!=fO)) goto L_004fa4da;
L_004fa518:; BB(0x004fa518);
    /* 004fa518: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fa51e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004fa521: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa523:; BB(0x004fa523);
    /* 004fa523: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fa526: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa529: je 0x4fa556 */ if (fZ) goto L_004fa556;
L_004fa52b:; BB(0x004fa52b);
    /* 004fa52b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 004fa52e: fsub dword ptr [ecx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x14u));
    /* 004fa531: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa533: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004fa536: fsub dword ptr [ecx + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x18u));
    /* 004fa539: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa53b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa53d: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004fa540: fsub dword ptr [ecx + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x1cu));
    /* 004fa543: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa545: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa547: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fa549: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fa54b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fa54c: jae 0x4fa7e7 */ if (!fC) goto L_004fa7e7;
L_004fa552:; BB(0x004fa552);
    /* 004fa552: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fa554: mov ebx, ecx */ r_ebx = r_ecx;
L_004fa556:; BB(0x004fa556);
    /* 004fa556: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fa559: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa55c: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa562: jl 0x4fa523 */ if ((fS!=fO)) goto L_004fa523;
L_004fa564:; BB(0x004fa564);
    /* 004fa564: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fa566: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fa568: je 0x4fa7ba */ if (fZ) goto L_004fa7ba;
L_004fa56e:; BB(0x004fa56e);
    /* 004fa56e: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fa571: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fa573: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fa578u); f_00807ac0();
    /* 004fa578: mov eax, dword ptr [eax*4 + 0x9fba60] */ r_eax = R32((u32)(r_eax*4+0x9fba60u));
    /* 004fa57f: mov ebp, eax */ r_ebp = r_eax;
    /* 004fa581: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa583: je 0x4fa5a0 */ if (fZ) goto L_004fa5a0;
L_004fa585:; BB(0x004fa585);
    /* 004fa585: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa589: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa58c: je 0x4fa5a0 */ if (fZ) goto L_004fa5a0;
L_004fa58e:; BB(0x004fa58e);
    /* 004fa58e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa590: je 0x4fa7cf */ if (fZ) goto L_004fa7cf;
L_004fa596:; BB(0x004fa596);
    /* 004fa596: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa599: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa59c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa59e: jne 0x4fa585 */ if (!fZ) goto L_004fa585;
L_004fa5a0:; BB(0x004fa5a0);
    /* 004fa5a0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004fa5a2:; BB(0x004fa5a2);
    /* 004fa5a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fa5a4: je 0x4fa7ba */ if (fZ) goto L_004fa7ba;
L_004fa5aa:; BB(0x004fa5aa);
    /* 004fa5aa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fa5ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5af: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 004fa5b3: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 004fa5ba: movzx ecx, word ptr [ebx + 6] */ r_ecx = (u32)R16((u32)(r_ebx+0x6u));
    /* 004fa5be: mov word ptr [eax + 0xba], cx */ W16((u32)(r_eax+0xbau), (u16)r_ecx);
    /* 004fa5c5: movzx esi, word ptr [ebx + 8] */ r_esi = (u32)R16((u32)(r_ebx+0x8u));
    /* 004fa5c9: mov word ptr [eax + 0xbc], si */ W16((u32)(r_eax+0xbcu), (u16)r_esi);
    /* 004fa5d0: movzx edi, word ptr [ebx + 0xa] */ r_edi = (u32)R16((u32)(r_ebx+0xau));
    /* 004fa5d4: mov word ptr [eax + 0xbe], di */ W16((u32)(r_eax+0xbeu), (u16)r_edi);
    /* 004fa5db: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 004fa5df: mov word ptr [eax + 0xc0], dx */ W16((u32)(r_eax+0xc0u), (u16)r_edx);
    /* 004fa5e6: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 004fa5ea: mov word ptr [eax + 0xc2], dx */ W16((u32)(r_eax+0xc2u), (u16)r_edx);
    /* 004fa5f1: movzx edx, word ptr [ebx + 0x10] */ r_edx = (u32)R16((u32)(r_ebx+0x10u));
    /* 004fa5f5: mov word ptr [eax + 0xc4], dx */ W16((u32)(r_eax+0xc4u), (u16)r_edx);
    /* 004fa5fc: movzx edx, word ptr [ebx + 0x12] */ r_edx = (u32)R16((u32)(r_ebx+0x12u));
    /* 004fa600: mov word ptr [eax + 0xc6], dx */ W16((u32)(r_eax+0xc6u), (u16)r_edx);
    /* 004fa607: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fa60a: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 004fa610: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fa613: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 004fa619: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fa61c: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 004fa622: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fa625: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 004fa62b: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fa62e: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004fa634: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fa637: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 004fa63d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fa640: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 004fa646: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fa649: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 004fa64f: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fa652: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 004fa658: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fa65b: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004fa661: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fa664: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 004fa66a: movzx edx, word ptr [ebx + 0x40] */ r_edx = (u32)R16((u32)(r_ebx+0x40u));
    /* 004fa66e: mov word ptr [eax + 0xf4], dx */ W16((u32)(r_eax+0xf4u), (u16)r_edx);
    /* 004fa675: movzx edx, word ptr [ebx + 0x42] */ r_edx = (u32)R16((u32)(r_ebx+0x42u));
    /* 004fa679: mov word ptr [eax + 0xf6], dx */ W16((u32)(r_eax+0xf6u), (u16)r_edx);
    /* 004fa680: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fa685u); f_007ba8d0();
    /* 004fa685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa686: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fa689: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 004fa68f: mov esi, dword ptr [edx + 0xcc] */ r_esi = R32((u32)(r_edx+0xccu));
    /* 004fa695: mov edi, dword ptr [edx + 0xd0] */ r_edi = R32((u32)(r_edx+0xd0u));
    /* 004fa69b: mov word ptr [edx + 0xbe], ax */ W16((u32)(r_edx+0xbeu), (u16)r_eax);
    /* 004fa6a2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fa6a7: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004fa6ae: mov eax, dword ptr [0xa727a4] */ r_eax = R32((u32)(0xa727a4u));
    /* 004fa6b3: mov dword ptr [0xa727a4], 0 */ W32((u32)(0xa727a4u), 0x0u);
    /* 004fa6bd: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fa6c0: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 004fa6c3: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 004fa6c6: mov dword ptr [edx + 0xfc], ebp */ W32((u32)(r_edx+0xfcu), r_ebp);
    /* 004fa6cc: movzx ebp, word ptr [eax + 8] */ r_ebp = (u32)R16((u32)(r_eax+0x8u));
    /* 004fa6d0: or ebp, 0xffff0001 */ {  u32 a = r_ebp; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa6d6: mov word ptr [eax + 8], bp */ W16((u32)(r_eax+0x8u), (u16)r_ebp);
    /* 004fa6da: movsx ebp, word ptr [ebx + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fa6de: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 004fa6e1: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fa6e5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa6e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa6e9: jle 0x4fa70c */ if ((fZ||fS!=fO)) goto L_004fa70c;
L_004fa6eb:; BB(0x004fa6eb);
    /* 004fa6eb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004fa6ee:; BB(0x004fa6ee);
    /* 004fa6ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6ef: mov ecx, esi */ r_ecx = r_esi;
    /* 004fa6f1: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fa6f6u); f_004f7fb0();
    /* 004fa6f6: cmp ebp, dword ptr [eax] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6f8: je 0x4fa7c0 */ if (fZ) goto L_004fa7c0;
L_004fa6fe:; BB(0x004fa6fe);
    /* 004fa6fe: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 004fa701: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fa705: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa708: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa70a: jl 0x4fa6ee */ if ((fS!=fO)) goto L_004fa6ee;
L_004fa70c:; BB(0x004fa70c);
    /* 004fa70c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa70f: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fa711: jg 0x4fa7ba */ if ((!fZ&&fS==fO)) goto L_004fa7ba;
L_004fa717:; BB(0x004fa717);
    /* 004fa717: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004fa71a: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa720: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 004fa723: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fa726: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 004fa729: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004fa72c: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 004fa72f: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 004fa732: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 004fa735: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004fa737: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fa739: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa73eu); f_008101d0();
    /* 004fa73e: mov edi, eax */ r_edi = r_eax;
    /* 004fa740: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa746: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa74bu); f_008123e4();
    /* 004fa74b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa74e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa752: jle 0x4fa771 */ if ((fZ||fS!=fO)) goto L_004fa771;
L_004fa754:; BB(0x004fa754);
    /* 004fa754: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fa757: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa75a: je 0x4fa767 */ if (fZ) goto L_004fa767;
L_004fa75c:; BB(0x004fa75c);
    /* 004fa75c: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fa760: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa762: jne 0x4fa767 */ if (!fZ) goto L_004fa767;
L_004fa764:; BB(0x004fa764);
    /* 004fa764: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa767:; BB(0x004fa767);
    /* 004fa767: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fa76a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa76d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa76f: jl 0x4fa754 */ if ((fS!=fO)) goto L_004fa754;
L_004fa771:; BB(0x004fa771);
    /* 004fa771: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fa777: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa779:; BB(0x004fa779);
    /* 004fa779: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fa77c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa77f: je 0x4fa78c */ if (fZ) goto L_004fa78c;
L_004fa781:; BB(0x004fa781);
    /* 004fa781: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fa785: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa787: jne 0x4fa78c */ if (!fZ) goto L_004fa78c;
L_004fa789:; BB(0x004fa789);
    /* 004fa789: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa78c:; BB(0x004fa78c);
    /* 004fa78c: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fa78f: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fa793: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa796: je 0x4fa7a3 */ if (fZ) goto L_004fa7a3;
L_004fa798:; BB(0x004fa798);
    /* 004fa798: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fa79c: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa79e: jne 0x4fa7a3 */ if (!fZ) goto L_004fa7a3;
L_004fa7a0:; BB(0x004fa7a0);
    /* 004fa7a0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa7a3:; BB(0x004fa7a3);
    /* 004fa7a3: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004fa7a6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa7a9: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fa7af: jl 0x4fa779 */ if ((fS!=fO)) goto L_004fa779;
L_004fa7b1:; BB(0x004fa7b1);
    /* 004fa7b1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fa7b4: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 004fa7b7: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
L_004fa7ba:; BB(0x004fa7ba);
    /* 004fa7ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa7bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa7bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa7bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa7be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa7bf: ret  */ FN_RET(0x004fa4a4); r_esp += 4; return;
L_004fa7c0:; BB(0x004fa7c0);
    /* 004fa7c0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fa7c3: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004fa7c6: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004fa7ca: jmp 0x4fa70c */ goto L_004fa70c;
L_004fa7cf:; BB(0x004fa7cf);
    /* 004fa7cf: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fa7d2: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 004fa7d5: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004fa7db: jmp 0x4fa5a2 */ goto L_004fa5a2;
L_004fa7e0:; BB(0x004fa7e0);
    /* 004fa7e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fa7e2: jmp 0x4fa50e */ goto L_004fa50e;
L_004fa7e7:; BB(0x004fa7e7);
    /* 004fa7e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fa7e9: jmp 0x4fa556 */ goto L_004fa556;
}

void f_004fa5a0(void)
{
    FN_ENTER(0x004fa5a0);
    /* 004fa5a0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa5a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fa5a4: je 0x4fa7ba */ if (fZ) goto L_004fa7ba;
L_004fa5aa:; BB(0x004fa5aa);
    /* 004fa5aa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fa5ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5af: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 004fa5b3: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 004fa5ba: movzx ecx, word ptr [ebx + 6] */ r_ecx = (u32)R16((u32)(r_ebx+0x6u));
    /* 004fa5be: mov word ptr [eax + 0xba], cx */ W16((u32)(r_eax+0xbau), (u16)r_ecx);
    /* 004fa5c5: movzx esi, word ptr [ebx + 8] */ r_esi = (u32)R16((u32)(r_ebx+0x8u));
    /* 004fa5c9: mov word ptr [eax + 0xbc], si */ W16((u32)(r_eax+0xbcu), (u16)r_esi);
    /* 004fa5d0: movzx edi, word ptr [ebx + 0xa] */ r_edi = (u32)R16((u32)(r_ebx+0xau));
    /* 004fa5d4: mov word ptr [eax + 0xbe], di */ W16((u32)(r_eax+0xbeu), (u16)r_edi);
    /* 004fa5db: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 004fa5df: mov word ptr [eax + 0xc0], dx */ W16((u32)(r_eax+0xc0u), (u16)r_edx);
    /* 004fa5e6: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 004fa5ea: mov word ptr [eax + 0xc2], dx */ W16((u32)(r_eax+0xc2u), (u16)r_edx);
    /* 004fa5f1: movzx edx, word ptr [ebx + 0x10] */ r_edx = (u32)R16((u32)(r_ebx+0x10u));
    /* 004fa5f5: mov word ptr [eax + 0xc4], dx */ W16((u32)(r_eax+0xc4u), (u16)r_edx);
    /* 004fa5fc: movzx edx, word ptr [ebx + 0x12] */ r_edx = (u32)R16((u32)(r_ebx+0x12u));
    /* 004fa600: mov word ptr [eax + 0xc6], dx */ W16((u32)(r_eax+0xc6u), (u16)r_edx);
    /* 004fa607: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fa60a: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 004fa610: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fa613: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 004fa619: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fa61c: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 004fa622: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fa625: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 004fa62b: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fa62e: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004fa634: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fa637: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 004fa63d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fa640: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 004fa646: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fa649: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 004fa64f: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fa652: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 004fa658: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fa65b: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004fa661: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fa664: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 004fa66a: movzx edx, word ptr [ebx + 0x40] */ r_edx = (u32)R16((u32)(r_ebx+0x40u));
    /* 004fa66e: mov word ptr [eax + 0xf4], dx */ W16((u32)(r_eax+0xf4u), (u16)r_edx);
    /* 004fa675: movzx edx, word ptr [ebx + 0x42] */ r_edx = (u32)R16((u32)(r_ebx+0x42u));
    /* 004fa679: mov word ptr [eax + 0xf6], dx */ W16((u32)(r_eax+0xf6u), (u16)r_edx);
    /* 004fa680: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fa685u); f_007ba8d0();
    /* 004fa685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa686: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fa689: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 004fa68f: mov esi, dword ptr [edx + 0xcc] */ r_esi = R32((u32)(r_edx+0xccu));
    /* 004fa695: mov edi, dword ptr [edx + 0xd0] */ r_edi = R32((u32)(r_edx+0xd0u));
    /* 004fa69b: mov word ptr [edx + 0xbe], ax */ W16((u32)(r_edx+0xbeu), (u16)r_eax);
    /* 004fa6a2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fa6a7: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004fa6ae: mov eax, dword ptr [0xa727a4] */ r_eax = R32((u32)(0xa727a4u));
    /* 004fa6b3: mov dword ptr [0xa727a4], 0 */ W32((u32)(0xa727a4u), 0x0u);
    /* 004fa6bd: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004fa6c0: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 004fa6c3: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 004fa6c6: mov dword ptr [edx + 0xfc], ebp */ W32((u32)(r_edx+0xfcu), r_ebp);
    /* 004fa6cc: movzx ebp, word ptr [eax + 8] */ r_ebp = (u32)R16((u32)(r_eax+0x8u));
    /* 004fa6d0: or ebp, 0xffff0001 */ {  u32 a = r_ebp; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa6d6: mov word ptr [eax + 8], bp */ W16((u32)(r_eax+0x8u), (u16)r_ebp);
    /* 004fa6da: movsx ebp, word ptr [ebx + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fa6de: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 004fa6e1: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fa6e5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa6e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa6e9: jle 0x4fa70c */ if ((fZ||fS!=fO)) goto L_004fa70c;
L_004fa6eb:; BB(0x004fa6eb);
    /* 004fa6eb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004fa6ee:; BB(0x004fa6ee);
    /* 004fa6ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6ef: mov ecx, esi */ r_ecx = r_esi;
    /* 004fa6f1: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fa6f6u); f_004f7fb0();
    /* 004fa6f6: cmp ebp, dword ptr [eax] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6f8: je 0x4fa7c0 */ if (fZ) goto L_004fa7c0;
L_004fa6fe:; BB(0x004fa6fe);
    /* 004fa6fe: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 004fa701: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fa705: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa708: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa70a: jl 0x4fa6ee */ if ((fS!=fO)) goto L_004fa6ee;
L_004fa70c:; BB(0x004fa70c);
    /* 004fa70c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa70f: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fa711: jg 0x4fa7ba */ if ((!fZ&&fS==fO)) goto L_004fa7ba;
L_004fa717:; BB(0x004fa717);
    /* 004fa717: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004fa71a: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa720: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 004fa723: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fa726: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 004fa729: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004fa72c: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 004fa72f: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 004fa732: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 004fa735: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004fa737: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fa739: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa73eu); f_008101d0();
    /* 004fa73e: mov edi, eax */ r_edi = r_eax;
    /* 004fa740: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa746: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa74bu); f_008123e4();
    /* 004fa74b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa74e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa752: jle 0x4fa771 */ if ((fZ||fS!=fO)) goto L_004fa771;
L_004fa754:; BB(0x004fa754);
    /* 004fa754: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fa757: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa75a: je 0x4fa767 */ if (fZ) goto L_004fa767;
L_004fa75c:; BB(0x004fa75c);
    /* 004fa75c: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fa760: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa762: jne 0x4fa767 */ if (!fZ) goto L_004fa767;
L_004fa764:; BB(0x004fa764);
    /* 004fa764: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa767:; BB(0x004fa767);
    /* 004fa767: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fa76a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa76d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa76f: jl 0x4fa754 */ if ((fS!=fO)) goto L_004fa754;
L_004fa771:; BB(0x004fa771);
    /* 004fa771: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fa777: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa779:; BB(0x004fa779);
    /* 004fa779: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fa77c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa77f: je 0x4fa78c */ if (fZ) goto L_004fa78c;
L_004fa781:; BB(0x004fa781);
    /* 004fa781: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fa785: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa787: jne 0x4fa78c */ if (!fZ) goto L_004fa78c;
L_004fa789:; BB(0x004fa789);
    /* 004fa789: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa78c:; BB(0x004fa78c);
    /* 004fa78c: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fa78f: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fa793: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa796: je 0x4fa7a3 */ if (fZ) goto L_004fa7a3;
L_004fa798:; BB(0x004fa798);
    /* 004fa798: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fa79c: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa79e: jne 0x4fa7a3 */ if (!fZ) goto L_004fa7a3;
L_004fa7a0:; BB(0x004fa7a0);
    /* 004fa7a0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa7a3:; BB(0x004fa7a3);
    /* 004fa7a3: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004fa7a6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa7a9: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fa7af: jl 0x4fa779 */ if ((fS!=fO)) goto L_004fa779;
L_004fa7b1:; BB(0x004fa7b1);
    /* 004fa7b1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fa7b4: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 004fa7b7: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
L_004fa7ba:; BB(0x004fa7ba);
    /* 004fa7ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa7bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa7bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa7bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa7be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa7bf: ret  */ FN_RET(0x004fa5a0); r_esp += 4; return;
L_004fa7c0:; BB(0x004fa7c0);
    /* 004fa7c0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fa7c3: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004fa7c6: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004fa7ca: jmp 0x4fa70c */ goto L_004fa70c;
}

void f_004fa7f0(void) /* sub_4FA7F0 */
{
    FN_ENTER(0x004fa7f0);
    /* 004fa7f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7f4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa7f7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fa7f9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa7fb: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa801: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa806u); f_008101d0();
    /* 004fa806: mov esi, eax */ r_esi = r_eax;
    /* 004fa808: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa80e: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa813u); f_008123e4();
    /* 004fa813: mov ecx, eax */ r_ecx = r_eax;
    /* 004fa815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa818: fld dword ptr [0x91e99c] */ FPUSH(R_F32((u32)(0x91e99cu)));
    /* 004fa81e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa820: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa822: jle 0x4fa861 */ if ((fZ||fS!=fO)) goto L_004fa861;
L_004fa824:; BB(0x004fa824);
    /* 004fa824: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fa827: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa82a: je 0x4fa857 */ if (fZ) goto L_004fa857;
L_004fa82c:; BB(0x004fa82c);
    /* 004fa82c: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 004fa82f: fsub dword ptr [esi + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x14u));
    /* 004fa832: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa834: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 004fa837: fsub dword ptr [esi + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x18u));
    /* 004fa83a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa83c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa83e: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 004fa841: fsub dword ptr [esi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x1cu));
    /* 004fa844: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa846: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa848: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fa84a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fa84c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fa84d: jae 0x4fad97 */ if (!fC) goto L_004fad97;
L_004fa853:; BB(0x004fa853);
    /* 004fa853: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fa855: mov ebp, esi */ r_ebp = r_esi;
L_004fa857:; BB(0x004fa857);
    /* 004fa857: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa85a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa85d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa85f: jl 0x4fa824 */ if ((fS!=fO)) goto L_004fa824;
L_004fa861:; BB(0x004fa861);
    /* 004fa861: mov esi, dword ptr [0xa727a0] */ r_esi = R32((u32)(0xa727a0u));
    /* 004fa867: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa869:; BB(0x004fa869);
    /* 004fa869: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fa86c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa86f: je 0x4fa89c */ if (fZ) goto L_004fa89c;
L_004fa871:; BB(0x004fa871);
    /* 004fa871: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 004fa874: fsub dword ptr [esi + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x14u));
    /* 004fa877: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa879: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 004fa87c: fsub dword ptr [esi + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x18u));
    /* 004fa87f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa881: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa883: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 004fa886: fsub dword ptr [esi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x1cu));
    /* 004fa889: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fa88b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fa88d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fa88f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fa891: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fa892: jae 0x4fad9e */ if (!fC) goto L_004fad9e;
L_004fa898:; BB(0x004fa898);
    /* 004fa898: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fa89a: mov ebp, esi */ r_ebp = r_esi;
L_004fa89c:; BB(0x004fa89c);
    /* 004fa89c: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fa89f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa8a2: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa8a8: jl 0x4fa869 */ if ((fS!=fO)) goto L_004fa869;
L_004fa8aa:; BB(0x004fa8aa);
    /* 004fa8aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fa8ac: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8ae: je 0x4fac51 */ if (fZ) goto L_004fac51;
L_004fa8b4:; BB(0x004fa8b4);
    /* 004fa8b4: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa8b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fa8ba: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fa8bfu); f_00807ac0();
    /* 004fa8bf: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 004fa8c6: mov eax, edx */ r_eax = r_edx;
    /* 004fa8c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8ca: je 0x4fa8e6 */ if (fZ) goto L_004fa8e6;
L_004fa8cc:; BB(0x004fa8cc);
    /* 004fa8cc: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 004fa8cf: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8d2: je 0x4fa8e6 */ if (fZ) goto L_004fa8e6;
L_004fa8d4:; BB(0x004fa8d4);
    /* 004fa8d4: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8d6: je 0x4fad89 */ if (fZ) goto L_004fad89;
L_004fa8dc:; BB(0x004fa8dc);
    /* 004fa8dc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fa8df: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fa8e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8e4: jne 0x4fa8cc */ if (!fZ) goto L_004fa8cc;
L_004fa8e6:; BB(0x004fa8e6);
    /* 004fa8e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fa8e8:; BB(0x004fa8e8);
    /* 004fa8e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8ea: je 0x4fac65 */ if (fZ) goto L_004fac65;
L_004fa8f0:; BB(0x004fa8f0);
    /* 004fa8f0: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 004fa8f4: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004fa8fb: movzx edx, word ptr [ebp + 6] */ r_edx = (u32)R16((u32)(r_ebp+0x6u));
    /* 004fa8ff: mov word ptr [ebx + 0xba], dx */ W16((u32)(r_ebx+0xbau), (u16)r_edx);
    /* 004fa906: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 004fa90a: mov word ptr [ebx + 0xbc], dx */ W16((u32)(r_ebx+0xbcu), (u16)r_edx);
    /* 004fa911: movzx edx, word ptr [ebp + 0xa] */ r_edx = (u32)R16((u32)(r_ebp+0xau));
    /* 004fa915: mov word ptr [ebx + 0xbe], dx */ W16((u32)(r_ebx+0xbeu), (u16)r_edx);
    /* 004fa91c: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 004fa920: mov word ptr [ebx + 0xc0], dx */ W16((u32)(r_ebx+0xc0u), (u16)r_edx);
    /* 004fa927: movzx edx, word ptr [ebp + 0xe] */ r_edx = (u32)R16((u32)(r_ebp+0xeu));
    /* 004fa92b: mov word ptr [ebx + 0xc2], dx */ W16((u32)(r_ebx+0xc2u), (u16)r_edx);
    /* 004fa932: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 004fa936: mov word ptr [ebx + 0xc4], dx */ W16((u32)(r_ebx+0xc4u), (u16)r_edx);
    /* 004fa93d: movzx edx, word ptr [ebp + 0x12] */ r_edx = (u32)R16((u32)(r_ebp+0x12u));
    /* 004fa941: mov word ptr [ebx + 0xc6], dx */ W16((u32)(r_ebx+0xc6u), (u16)r_edx);
    /* 004fa948: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 004fa94b: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 004fa951: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 004fa954: mov dword ptr [ebx + 0xcc], edi */ W32((u32)(r_ebx+0xccu), r_edi);
    /* 004fa95a: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004fa95d: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 004fa963: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004fa966: mov dword ptr [ebx + 0xd4], ecx */ W32((u32)(r_ebx+0xd4u), r_ecx);
    /* 004fa96c: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004fa96f: mov dword ptr [ebx + 0xd8], ecx */ W32((u32)(r_ebx+0xd8u), r_ecx);
    /* 004fa975: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 004fa978: mov dword ptr [ebx + 0xdc], ecx */ W32((u32)(r_ebx+0xdcu), r_ecx);
    /* 004fa97e: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004fa981: mov dword ptr [ebx + 0xe0], ecx */ W32((u32)(r_ebx+0xe0u), r_ecx);
    /* 004fa987: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004fa98a: mov dword ptr [ebx + 0xe4], ecx */ W32((u32)(r_ebx+0xe4u), r_ecx);
    /* 004fa990: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 004fa993: mov dword ptr [ebx + 0xe8], ecx */ W32((u32)(r_ebx+0xe8u), r_ecx);
    /* 004fa999: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004fa99c: mov dword ptr [ebx + 0xec], ecx */ W32((u32)(r_ebx+0xecu), r_ecx);
    /* 004fa9a2: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 004fa9a5: mov dword ptr [ebx + 0xf0], ecx */ W32((u32)(r_ebx+0xf0u), r_ecx);
    /* 004fa9ab: movzx ecx, word ptr [ebp + 0x40] */ r_ecx = (u32)R16((u32)(r_ebp+0x40u));
    /* 004fa9af: mov word ptr [ebx + 0xf4], cx */ W16((u32)(r_ebx+0xf4u), (u16)r_ecx);
    /* 004fa9b6: movzx ecx, word ptr [ebp + 0x42] */ r_ecx = (u32)R16((u32)(r_ebp+0x42u));
    /* 004fa9ba: mov word ptr [ebx + 0xf6], cx */ W16((u32)(r_ebx+0xf6u), (u16)r_ecx);
    /* 004fa9c1: mov dword ptr [ebx + 0x1c], esi */ W32((u32)(r_ebx+0x1cu), r_esi);
    /* 004fa9c4: mov dword ptr [ebx + 0x20], edi */ W32((u32)(r_ebx+0x20u), r_edi);
    /* 004fa9c7: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004fa9ca: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004fa9d0: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 004fa9d6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004fa9da: mov dword ptr [0xa727a4], 0 */ W32((u32)(0xa727a4u), 0x0u);
    /* 004fa9e4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fa9e9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004fa9ed: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa9f1: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 004fa9f4: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fa9f8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fa9fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa9fc: jle 0x4faa1c */ if ((fZ||fS!=fO)) goto L_004faa1c;
L_004fa9fe:; BB(0x004fa9fe);
    /* 004fa9fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa9ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004faa01: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4faa06u); f_004f7fb0();
    /* 004faa06: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa08: je 0x4fac59 */ if (fZ) goto L_004fac59;
L_004faa0e:; BB(0x004faa0e);
    /* 004faa0e: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 004faa11: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004faa15: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004faa18: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faa1a: jl 0x4fa9fe */ if ((fS!=fO)) goto L_004fa9fe;
L_004faa1c:; BB(0x004faa1c);
    /* 004faa1c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004faa1f: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faa21: jg 0x4faae9 */ if ((!fZ&&fS==fO)) goto L_004faae9;
L_004faa27:; BB(0x004faa27);
    /* 004faa27: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 004faa2a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004faa2d: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004faa30: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004faa33: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 004faa36: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004faa39: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004faa3c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004faa3e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004faa42: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004faa44: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004faa4a: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4faa4fu); f_008101d0();
    /* 004faa4f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004faa53: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004faa59: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4faa5eu); f_008123e4();
    /* 004faa5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faa61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004faa63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004faa65: jle 0x4faa9a */ if ((fZ||fS!=fO)) goto L_004faa9a;
L_004faa67:; BB(0x004faa67);
    /* 004faa67: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004faa6b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004faa6f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004faa72: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_004faa76:; BB(0x004faa76);
    /* 004faa76: movsx ebp, word ptr [ecx] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004faa79: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa7c: je 0x4faa89 */ if (fZ) goto L_004faa89;
L_004faa7e:; BB(0x004faa7e);
    /* 004faa7e: movsx ebp, word ptr [ecx + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004faa82: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa84: jne 0x4faa89 */ if (!fZ) goto L_004faa89;
L_004faa86:; BB(0x004faa86);
    /* 004faa86: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004faa89:; BB(0x004faa89);
    /* 004faa89: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004faa8c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004faa8f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faa91: jl 0x4faa76 */ if ((fS!=fO)) goto L_004faa76;
L_004faa93:; BB(0x004faa93);
    /* 004faa93: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 004faa97: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004faa9a:; BB(0x004faa9a);
    /* 004faa9a: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004faaa0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004faaa3: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004faaa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004faaa9:; BB(0x004faaa9);
    /* 004faaa9: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004faaac: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faaaf: je 0x4faabc */ if (fZ) goto L_004faabc;
L_004faab1:; BB(0x004faab1);
    /* 004faab1: movsx ecx, word ptr [edx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004faab5: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faab7: jne 0x4faabc */ if (!fZ) goto L_004faabc;
L_004faab9:; BB(0x004faab9);
    /* 004faab9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004faabc:; BB(0x004faabc);
    /* 004faabc: lea ecx, [edx + 0x48] */ r_ecx = (u32)(r_edx+0x48u);
    /* 004faabf: movsx edx, word ptr [edx + 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x48u));
    /* 004faac3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faac6: je 0x4faad3 */ if (fZ) goto L_004faad3;
L_004faac8:; BB(0x004faac8);
    /* 004faac8: movsx edx, word ptr [ecx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004faacc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faace: jne 0x4faad3 */ if (!fZ) goto L_004faad3;
L_004faad0:; BB(0x004faad0);
    /* 004faad0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004faad3:; BB(0x004faad3);
    /* 004faad3: lea edx, [ecx + 0x48] */ r_edx = (u32)(r_ecx+0x48u);
    /* 004faad6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004faad9: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faade: jl 0x4faaa9 */ if ((fS!=fO)) goto L_004faaa9;
L_004faae0:; BB(0x004faae0);
    /* 004faae0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004faae3: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 004faae6: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
L_004faae9:; BB(0x004faae9);
    /* 004faae9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004faaee: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 004faaf2: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004faaf8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004faafa: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4faaffu); f_008101d0();
    /* 004faaff: mov edi, eax */ r_edi = r_eax;
    /* 004fab01: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fab07: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fab0cu); f_008123e4();
    /* 004fab0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fab0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fab11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fab13: jle 0x4fab2a */ if ((fZ||fS!=fO)) goto L_004fab2a;
L_004fab15:; BB(0x004fab15);
    /* 004fab15: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fab18: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab1b: je 0x4fab20 */ if (fZ) goto L_004fab20;
L_004fab1d:; BB(0x004fab1d);
    /* 004fab1d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fab20:; BB(0x004fab20);
    /* 004fab20: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fab23: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fab26: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fab28: jl 0x4fab15 */ if ((fS!=fO)) goto L_004fab15;
L_004fab2a:; BB(0x004fab2a);
    /* 004fab2a: mov edi, dword ptr [0xa727a0] */ r_edi = R32((u32)(0xa727a0u));
    /* 004fab30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fab32:; BB(0x004fab32);
    /* 004fab32: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fab35: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab38: je 0x4fab3d */ if (fZ) goto L_004fab3d;
L_004fab3a:; BB(0x004fab3a);
    /* 004fab3a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fab3d:; BB(0x004fab3d);
    /* 004fab3d: lea eax, [edi + 0x48] */ r_eax = (u32)(r_edi+0x48u);
    /* 004fab40: movsx edi, word ptr [edi + 0x48] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x48u));
    /* 004fab44: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab47: je 0x4fab4c */ if (fZ) goto L_004fab4c;
L_004fab49:; BB(0x004fab49);
    /* 004fab49: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fab4c:; BB(0x004fab4c);
    /* 004fab4c: movsx edi, word ptr [eax + 0x48] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004fab50: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab53: je 0x4fab58 */ if (fZ) goto L_004fab58;
L_004fab55:; BB(0x004fab55);
    /* 004fab55: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fab58:; BB(0x004fab58);
    /* 004fab58: movsx edi, word ptr [eax + 0x90] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004fab5f: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab62: je 0x4fab67 */ if (fZ) goto L_004fab67;
L_004fab64:; BB(0x004fab64);
    /* 004fab64: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fab67:; BB(0x004fab67);
    /* 004fab67: lea edi, [eax + 0xd8] */ r_edi = (u32)(r_eax+0xd8u);
    /* 004fab6d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fab70: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fab76: jl 0x4fab32 */ if ((fS!=fO)) goto L_004fab32;
L_004fab78:; BB(0x004fab78);
    /* 004fab78: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fab7e: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fab81: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 004fab84: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004fab86: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fab88: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fab8du); f_008101d0();
    /* 004fab8d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004fab91: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fab97: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fab9cu); f_008123e4();
    /* 004fab9c: mov ecx, eax */ r_ecx = r_eax;
    /* 004fab9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faba1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004faba3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004faba5: jle 0x4fabce */ if ((fZ||fS!=fO)) goto L_004fabce;
L_004faba7:; BB(0x004faba7);
    /* 004faba7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004fabab: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_004fabae:; BB(0x004fabae);
    /* 004fabae: movsx ebx, word ptr [edx] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fabb1: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabb4: je 0x4fabc1 */ if (fZ) goto L_004fabc1;
L_004fabb6:; BB(0x004fabb6);
    /* 004fabb6: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fabba: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabbc: jne 0x4fabc1 */ if (!fZ) goto L_004fabc1;
L_004fabbe:; BB(0x004fabbe);
    /* 004fabbe: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fabc1:; BB(0x004fabc1);
    /* 004fabc1: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fabc4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fabc7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fabc9: jl 0x4fabae */ if ((fS!=fO)) goto L_004fabae;
L_004fabcb:; BB(0x004fabcb);
    /* 004fabcb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004fabce:; BB(0x004fabce);
    /* 004fabce: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fabd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fabd6:; BB(0x004fabd6);
    /* 004fabd6: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fabd9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabdc: je 0x4fabe9 */ if (fZ) goto L_004fabe9;
L_004fabde:; BB(0x004fabde);
    /* 004fabde: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fabe2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabe4: jne 0x4fabe9 */ if (!fZ) goto L_004fabe9;
L_004fabe6:; BB(0x004fabe6);
    /* 004fabe6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fabe9:; BB(0x004fabe9);
    /* 004fabe9: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fabec: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fabf0: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabf3: je 0x4fac00 */ if (fZ) goto L_004fac00;
L_004fabf5:; BB(0x004fabf5);
    /* 004fabf5: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fabf9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fabfb: jne 0x4fac00 */ if (!fZ) goto L_004fac00;
L_004fabfd:; BB(0x004fabfd);
    /* 004fabfd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fac00:; BB(0x004fac00);
    /* 004fac00: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004fac03: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fac06: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fac0c: jl 0x4fabd6 */ if ((fS!=fO)) goto L_004fabd6;
L_004fac0e:; BB(0x004fac0e);
    /* 004fac0e: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 004fac11: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fac16: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac1c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fac21u); f_004f80e0();
    /* 004fac21: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac24: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fac2c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fac31u); f_004f80e0();
    /* 004fac31: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac34: push dword ptr [0xaca35c] */ { u32 v = R32((u32)(0xaca35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fac3c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fac41u); f_004f80e0();
    /* 004fac41: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac44: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fac4c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fac51u); f_004f80e0();
L_004fac51:; BB(0x004fac51);
    /* 004fac51: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fac54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fac55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fac56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fac57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fac58: ret  */ FN_RET(0x004fa7f0); r_esp += 4; return;
L_004fac59:; BB(0x004fac59);
    /* 004fac59: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 004fac5c: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fac60: jmp 0x4faa1c */ goto L_004faa1c;
L_004fac65:; BB(0x004fac65);
    /* 004fac65: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fac6a: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 004fac6e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac74: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fac76: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fac7bu); f_008101d0();
    /* 004fac7b: mov esi, eax */ r_esi = r_eax;
    /* 004fac7d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fac83: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fac88u); f_008123e4();
    /* 004fac88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fac8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fac8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fac8f: jle 0x4faca6 */ if ((fZ||fS!=fO)) goto L_004faca6;
L_004fac91:; BB(0x004fac91);
    /* 004fac91: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fac94: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fac97: je 0x4fac9c */ if (fZ) goto L_004fac9c;
L_004fac99:; BB(0x004fac99);
    /* 004fac99: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fac9c:; BB(0x004fac9c);
    /* 004fac9c: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fac9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004faca2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faca4: jl 0x4fac91 */ if ((fS!=fO)) goto L_004fac91;
L_004faca6:; BB(0x004faca6);
    /* 004faca6: mov esi, dword ptr [0xa727a0] */ r_esi = R32((u32)(0xa727a0u));
    /* 004facac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004facae:; BB(0x004facae);
    /* 004facae: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004facb1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004facb4: je 0x4facb9 */ if (fZ) goto L_004facb9;
L_004facb6:; BB(0x004facb6);
    /* 004facb6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004facb9:; BB(0x004facb9);
    /* 004facb9: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
    /* 004facbc: movsx esi, word ptr [esi + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x48u));
    /* 004facc0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004facc3: je 0x4facc8 */ if (fZ) goto L_004facc8;
L_004facc5:; BB(0x004facc5);
    /* 004facc5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004facc8:; BB(0x004facc8);
    /* 004facc8: movsx esi, word ptr [eax + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004faccc: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faccf: je 0x4facd4 */ if (fZ) goto L_004facd4;
L_004facd1:; BB(0x004facd1);
    /* 004facd1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004facd4:; BB(0x004facd4);
    /* 004facd4: movsx esi, word ptr [eax + 0x90] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004facdb: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004facde: je 0x4face3 */ if (fZ) goto L_004face3;
L_004face0:; BB(0x004face0);
    /* 004face0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004face3:; BB(0x004face3);
    /* 004face3: lea esi, [eax + 0xd8] */ r_esi = (u32)(r_eax+0xd8u);
    /* 004face9: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004facec: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004facf2: jl 0x4facae */ if ((fS!=fO)) goto L_004facae;
L_004facf4:; BB(0x004facf4);
    /* 004facf4: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004facfa: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004facfd: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fad00: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004fad02: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fad04: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fad09u); f_008101d0();
    /* 004fad09: mov ebp, eax */ r_ebp = r_eax;
    /* 004fad0b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fad11: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fad16u); f_008123e4();
    /* 004fad16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fad19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fad1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fad1d: jle 0x4fad3d */ if ((fZ||fS!=fO)) goto L_004fad3d;
L_004fad1f:; BB(0x004fad1f);
    /* 004fad1f: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fad23: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad26: je 0x4fad33 */ if (fZ) goto L_004fad33;
L_004fad28:; BB(0x004fad28);
    /* 004fad28: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fad2c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad2e: jne 0x4fad33 */ if (!fZ) goto L_004fad33;
L_004fad30:; BB(0x004fad30);
    /* 004fad30: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fad33:; BB(0x004fad33);
    /* 004fad33: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fad36: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fad39: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fad3b: jl 0x4fad1f */ if ((fS!=fO)) goto L_004fad1f;
L_004fad3d:; BB(0x004fad3d);
    /* 004fad3d: mov ebp, dword ptr [0xa727a0] */ r_ebp = R32((u32)(0xa727a0u));
    /* 004fad43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fad45:; BB(0x004fad45);
    /* 004fad45: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fad49: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad4c: je 0x4fad59 */ if (fZ) goto L_004fad59;
L_004fad4e:; BB(0x004fad4e);
    /* 004fad4e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fad52: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad54: jne 0x4fad59 */ if (!fZ) goto L_004fad59;
L_004fad56:; BB(0x004fad56);
    /* 004fad56: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fad59:; BB(0x004fad59);
    /* 004fad59: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 004fad5c: movsx ebp, word ptr [ebp + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x48u));
    /* 004fad60: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad63: je 0x4fad70 */ if (fZ) goto L_004fad70;
L_004fad65:; BB(0x004fad65);
    /* 004fad65: movsx ebp, word ptr [eax + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fad69: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad6b: jne 0x4fad70 */ if (!fZ) goto L_004fad70;
L_004fad6d:; BB(0x004fad6d);
    /* 004fad6d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fad70:; BB(0x004fad70);
    /* 004fad70: lea ebp, [eax + 0x48] */ r_ebp = (u32)(r_eax+0x48u);
    /* 004fad73: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fad76: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fad7c: jl 0x4fad45 */ if ((fS!=fO)) goto L_004fad45;
L_004fad7e:; BB(0x004fad7e);
    /* 004fad7e: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 004fad81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fad84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fad85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fad86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fad87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fad88: ret  */ FN_RET(0x004fa7f0); r_esp += 4; return;
L_004fad89:; BB(0x004fad89);
    /* 004fad89: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 004fad8c: mov dword ptr [ebx + 0x104], edx */ W32((u32)(r_ebx+0x104u), r_edx);
    /* 004fad92: jmp 0x4fa8e8 */ goto L_004fa8e8;
L_004fad97:; BB(0x004fad97);
    /* 004fad97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fad99: jmp 0x4fa857 */ goto L_004fa857;
L_004fad9e:; BB(0x004fad9e);
    /* 004fad9e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fada0: jmp 0x4fa89c */ goto L_004fa89c;
}

void f_004fada8(void) /* sub_4FADA8 */
{
    FN_ENTER(0x004fada8);
    /* 004fada8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fada9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fadaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fadab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fadac: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fadaf: mov edi, ecx */ r_edi = r_ecx;
    /* 004fadb1: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fadb6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4fadbbu); f_0082e940();
    /* 004fadbb: mov esi, eax */ r_esi = r_eax;
    /* 004fadbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fadc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fadc2: je 0x4fb0e4 */ if (fZ) goto L_004fb0e4;
L_004fadc8:; BB(0x004fadc8);
    /* 004fadc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fadc9: lea edx, [edi + 0x11c] */ r_edx = (u32)(r_edi+0x11cu);
    /* 004fadcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fadd0: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4fadd5u); f_005b9ec4();
    /* 004fadd5: mov edx, eax */ r_edx = r_eax;
    /* 004fadd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fadda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004faddc: jle 0x4fafb8 */ if ((fZ||fS!=fO)) goto L_004fafb8;
L_004fade2:; BB(0x004fade2);
    /* 004fade2: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004fade7: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004fade9: mov ebp, esi */ r_ebp = r_esi;
    /* 004fadeb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004faded: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004fadf0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fadf2: jle 0x4fafb8 */ if ((fZ||fS!=fO)) goto L_004fafb8;
L_004fadf8:; BB(0x004fadf8);
    /* 004fadf8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004fadfc: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004fae00: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_004fae03:; BB(0x004fae03);
    /* 004fae03: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fae09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fae0a: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fae0fu); f_008101d0();
    /* 004fae0f: mov esi, eax */ r_esi = r_eax;
    /* 004fae11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fae12: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fae17u); f_008123e4();
    /* 004fae17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fae1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fae1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fae1e: jle 0x4fae80 */ if ((fZ||fS!=fO)) goto L_004fae80;
L_004fae20:; BB(0x004fae20);
    /* 004fae20: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fae23: jl 0x4fae6e */ if ((fS!=fO)) goto L_004fae6e;
L_004fae25:; BB(0x004fae25);
    /* 004fae25: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
L_004fae28:; BB(0x004fae28);
    /* 004fae28: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae2b: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae2e: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae34:; BB(0x004fae34);
    /* 004fae34: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae37: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae3a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae3d: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae43:; BB(0x004fae43);
    /* 004fae43: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae46: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae49: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae4c: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae4e:; BB(0x004fae4e);
    /* 004fae4e: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae51: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae54: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae57: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae59:; BB(0x004fae59);
    /* 004fae59: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae5c: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae5f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae62: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae64:; BB(0x004fae64);
    /* 004fae64: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fae67: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae6a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fae6c: jle 0x4fae28 */ if ((fZ||fS!=fO)) goto L_004fae28;
L_004fae6e:; BB(0x004fae6e);
    /* 004fae6e: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae71: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae74: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae76:; BB(0x004fae76);
    /* 004fae76: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fae79: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae7c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fae7e: jl 0x4fae6e */ if ((fS!=fO)) goto L_004fae6e;
L_004fae80:; BB(0x004fae80);
    /* 004fae80: mov esi, dword ptr [0xa727a0] */ r_esi = R32((u32)(0xa727a0u));
    /* 004fae86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fae88:; BB(0x004fae88);
    /* 004fae88: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae8b: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae8e: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae90:; BB(0x004fae90);
    /* 004fae90: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae93: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fae96: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae99: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae9b:; BB(0x004fae9b);
    /* 004fae9b: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fae9e: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004faea1: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faea4: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004faea6:; BB(0x004faea6);
    /* 004faea6: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004faea9: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004faeac: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faeaf: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004faeb1:; BB(0x004faeb1);
    /* 004faeb1: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004faeb4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004faeb7: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004faebd: jl 0x4fae88 */ if ((fS!=fO)) goto L_004fae88;
L_004faebf:; BB(0x004faebf);
    /* 004faebf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004faec1:; BB(0x004faec1);
    /* 004faec1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faec3: je 0x4faf9f */ if (fZ) goto L_004faf9f;
L_004faec9:; BB(0x004faec9);
    /* 004faec9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004faecc: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 004faecf: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004faed1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004faed4: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004faed7: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004faeda: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004faedd: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004faee0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004faee3: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004faee6: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004faee9: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004faeec: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004faeef: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004faef2: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004faef5: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004faef8: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004faefb: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004faefe: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004faf01: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004faf04: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 004faf07: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004faf0a: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 004faf0d: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004faf10: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004faf13: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004faf16: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 004faf19: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004faf1c: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004faf1f: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004faf22: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004faf25: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004faf28: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004faf2b: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004faf2e: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 004faf31: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004faf34: mov ecx, esi */ r_ecx = r_esi;
    /* 004faf36: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4faf3bu); f_0061cdb0();
    /* 004faf3b: movsx edx, word ptr [esi + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004faf3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf40: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4faf45u); f_00807ac8();
    /* 004faf45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004faf46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf48: je 0x4fb14c */ if (fZ) goto L_004fb14c;
L_004faf4e:; BB(0x004faf4e);
    /* 004faf4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf51: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004faf54: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004faf57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004faf58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004faf59: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004faf5d: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4faf62u); f_004f7fc0();
    /* 004faf62: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4faf67u); f_00807ac0();
    /* 004faf67: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 004faf6e: mov edi, edx */ r_edi = r_edx;
    /* 004faf70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf72: je 0x4faf8c */ if (fZ) goto L_004faf8c;
L_004faf74:; BB(0x004faf74);
    /* 004faf74: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004faf77: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf7a: je 0x4faf8c */ if (fZ) goto L_004faf8c;
L_004faf7c:; BB(0x004faf7c);
    /* 004faf7c: cmp ax, word ptr [esi] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esi)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004faf7f: je 0x4fb0f8 */ if (fZ) goto L_004fb0f8;
L_004faf85:; BB(0x004faf85);
    /* 004faf85: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004faf88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf8a: jne 0x4faf74 */ if (!fZ) goto L_004faf74;
L_004faf8c:; BB(0x004faf8c);
    /* 004faf8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004faf8e:; BB(0x004faf8e);
    /* 004faf8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf90: je 0x4fb0ec */ if (fZ) goto L_004fb0ec;
L_004faf96:; BB(0x004faf96);
    /* 004faf96: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 004faf99: mov dword ptr [eax + 0x80], esi */ W32((u32)(r_eax+0x80u), r_esi);
L_004faf9f:; BB(0x004faf9f);
    /* 004faf9f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004fafa3: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fafa6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fafa9: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fafab: jl 0x4fae03 */ if ((fS!=fO)) goto L_004fae03;
L_004fafb1:; BB(0x004fafb1);
    /* 004fafb1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004fafb5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004fafb8:; BB(0x004fafb8);
    /* 004fafb8: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fafbe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fafc0: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fafc5u); f_008101d0();
    /* 004fafc5: mov ebp, eax */ r_ebp = r_eax;
    /* 004fafc7: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fafcd: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fafd2u); f_008123e4();
    /* 004fafd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fafd5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fafd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fafd9: jle 0x4faff1 */ if ((fZ||fS!=fO)) goto L_004faff1;
L_004fafdb:; BB(0x004fafdb);
    /* 004fafdb: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fafdf: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fafe2: je 0x4fafe7 */ if (fZ) goto L_004fafe7;
L_004fafe4:; BB(0x004fafe4);
    /* 004fafe4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fafe7:; BB(0x004fafe7);
    /* 004fafe7: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fafea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fafed: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fafef: jl 0x4fafdb */ if ((fS!=fO)) goto L_004fafdb;
L_004faff1:; BB(0x004faff1);
    /* 004faff1: mov ebp, dword ptr [0xa727a0] */ r_ebp = R32((u32)(0xa727a0u));
    /* 004faff7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004faff9:; BB(0x004faff9);
    /* 004faff9: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004faffd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb000: je 0x4fb005 */ if (fZ) goto L_004fb005;
L_004fb002:; BB(0x004fb002);
    /* 004fb002: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fb005:; BB(0x004fb005);
    /* 004fb005: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 004fb008: movsx ebp, word ptr [ebp + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x48u));
    /* 004fb00c: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb00f: je 0x4fb014 */ if (fZ) goto L_004fb014;
L_004fb011:; BB(0x004fb011);
    /* 004fb011: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fb014:; BB(0x004fb014);
    /* 004fb014: movsx ebp, word ptr [edx + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x48u));
    /* 004fb018: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb01b: je 0x4fb020 */ if (fZ) goto L_004fb020;
L_004fb01d:; BB(0x004fb01d);
    /* 004fb01d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fb020:; BB(0x004fb020);
    /* 004fb020: movsx ebp, word ptr [edx + 0x90] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x90u));
    /* 004fb027: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb02a: je 0x4fb02f */ if (fZ) goto L_004fb02f;
L_004fb02c:; BB(0x004fb02c);
    /* 004fb02c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fb02f:; BB(0x004fb02f);
    /* 004fb02f: lea ebp, [edx + 0xd8] */ r_ebp = (u32)(r_edx+0xd8u);
    /* 004fb035: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb038: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb03e: jl 0x4faff9 */ if ((fS!=fO)) goto L_004faff9;
L_004fb040:; BB(0x004fb040);
    /* 004fb040: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 004fb043: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
    /* 004fb046: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004fb048: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004fb04c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fb04e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb054: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fb059u); f_008101d0();
    /* 004fb059: mov ebx, eax */ r_ebx = r_eax;
    /* 004fb05b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fb061: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fb066u); f_008123e4();
    /* 004fb066: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb069: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fb06d: jle 0x4fb096 */ if ((fZ||fS!=fO)) goto L_004fb096;
L_004fb06f:; BB(0x004fb06f);
    /* 004fb06f: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004fb073: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_004fb076:; BB(0x004fb076);
    /* 004fb076: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fb079: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb07c: je 0x4fb089 */ if (fZ) goto L_004fb089;
L_004fb07e:; BB(0x004fb07e);
    /* 004fb07e: movsx edi, word ptr [ebx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fb082: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb084: jne 0x4fb089 */ if (!fZ) goto L_004fb089;
L_004fb086:; BB(0x004fb086);
    /* 004fb086: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb089:; BB(0x004fb089);
    /* 004fb089: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fb08c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb08f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb091: jl 0x4fb076 */ if ((fS!=fO)) goto L_004fb076;
L_004fb093:; BB(0x004fb093);
    /* 004fb093: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004fb096:; BB(0x004fb096);
    /* 004fb096: mov ebx, dword ptr [0xa727a0] */ r_ebx = R32((u32)(0xa727a0u));
    /* 004fb09c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004fb0a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004fb0a2:; BB(0x004fb0a2);
    /* 004fb0a2: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fb0a5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb0a8: je 0x4fb0b5 */ if (fZ) goto L_004fb0b5;
L_004fb0aa:; BB(0x004fb0aa);
    /* 004fb0aa: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fb0ae: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb0b0: jne 0x4fb0b5 */ if (!fZ) goto L_004fb0b5;
L_004fb0b2:; BB(0x004fb0b2);
    /* 004fb0b2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb0b5:; BB(0x004fb0b5);
    /* 004fb0b5: lea edx, [ebx + 0x48] */ r_edx = (u32)(r_ebx+0x48u);
    /* 004fb0b8: movsx ebx, word ptr [ebx + 0x48] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x48u));
    /* 004fb0bc: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb0bf: je 0x4fb0cc */ if (fZ) goto L_004fb0cc;
L_004fb0c1:; BB(0x004fb0c1);
    /* 004fb0c1: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fb0c5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb0c7: jne 0x4fb0cc */ if (!fZ) goto L_004fb0cc;
L_004fb0c9:; BB(0x004fb0c9);
    /* 004fb0c9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fb0cc:; BB(0x004fb0cc);
    /* 004fb0cc: lea ebx, [edx + 0x48] */ r_ebx = (u32)(r_edx+0x48u);
    /* 004fb0cf: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb0d2: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb0d8: jl 0x4fb0a2 */ if ((fS!=fO)) goto L_004fb0a2;
L_004fb0da:; BB(0x004fb0da);
    /* 004fb0da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb0db: mov dword ptr [edi + 0x44], ebp */ W32((u32)(r_edi+0x44u), r_ebp);
    /* 004fb0de: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4fb0e3u); f_0082e960();
    /* 004fb0e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fb0e4:; BB(0x004fb0e4);
    /* 004fb0e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fb0e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fb0e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb0e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fb0ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fb0eb: ret  */ FN_RET(0x004fada8); r_esp += 4; return;
L_004fb0ec:; BB(0x004fb0ec);
    /* 004fb0ec: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
    /* 004fb0f3: jmp 0x4faf9f */ goto L_004faf9f;
L_004fb0f8:; BB(0x004fb0f8);
    /* 004fb0f8: movsx edx, word ptr [esi + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 004fb0fc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004fb100: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb102: jne 0x4fb10b */ if (!fZ) goto L_004fb10b;
L_004fb104:; BB(0x004fb104);
    /* 004fb104: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 004fb107: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_004fb10b:; BB(0x004fb10b);
    /* 004fb10b: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 004fb10e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb10f: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fb114u); f_007ba8d0();
    /* 004fb114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb115: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004fb119: mov word ptr [esi + 0xa], ax */ W16((u32)(r_esi+0xau), (u16)r_eax);
    /* 004fb11d: mov eax, dword ptr [0xab02b0] */ r_eax = R32((u32)(0xab02b0u));
    /* 004fb122: lea edx, [eax + edx + 1] */ r_edx = (u32)(r_eax+r_edx+0x1u);
    /* 004fb126: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb12c: jle 0x4fb135 */ if ((fZ||fS!=fO)) goto L_004fb135;
L_004fb12e:; BB(0x004fb12e);
    /* 004fb12e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fb133: jmp 0x4fb13b */ goto L_004fb13b;
L_004fb135:; BB(0x004fb135);
    /* 004fb135: mov dword ptr [0xab02b0], edx */ W32((u32)(0xab02b0u), r_edx);
L_004fb13b:; BB(0x004fb13b);
    /* 004fb13b: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 004fb13f: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 004fb142: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb143: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x4fb146u); call_ind(t); }
    /* 004fb146: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb147: jmp 0x4faf8e */ goto L_004faf8e;
L_004fb14c:; BB(0x004fb14c);
    /* 004fb14c: push 0x91ecb4 */ { u32 v = 0x91ecb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb151: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fb156u); f_0061cdb0();
    /* 004fb156: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fb157: jmp 0x4faf9f */ goto L_004faf9f;
}

