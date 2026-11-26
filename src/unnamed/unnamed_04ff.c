#include "protos.h"

void f_004ff0c0(void) /* sub_4FF0C0 */
{
    FN_ENTER(0x004ff0c0);
    /* 004ff0c0: mov dword ptr [0xa727b0], 0x3f800000 */ W32((u32)(0xa727b0u), 0x3f800000u);
    /* 004ff0ca: mov dword ptr [0xa727b4], 0x41000000 */ W32((u32)(0xa727b4u), 0x41000000u);
    /* 004ff0d4: mov dword ptr [0xa727b8], 0x3fc00000 */ W32((u32)(0xa727b8u), 0x3fc00000u);
    /* 004ff0de: ret  */ FN_RET(0x004ff0c0); r_esp += 4; return;
}

void f_004ff0e0(void) /* sub_4FF0E0 */
{
    FN_ENTER(0x004ff0e0);
    /* 004ff0e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0e5: mov esi, ecx */ r_esi = r_ecx;
    /* 004ff0e7: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 004ff0ec: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 004ff0ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff0f1: je 0x4ff2f0 */ if (fZ) goto L_004ff2f0;
L_004ff0f7:; BB(0x004ff0f7);
    /* 004ff0f7: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff0fa: mov ecx, esi */ r_ecx = r_esi;
    /* 004ff0fc: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4ff101u); f_004f7fb0();
    /* 004ff101: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 004ff104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff106: je 0x4ff2d6 */ if (fZ) goto L_004ff2d6;
L_004ff10c:; BB(0x004ff10c);
    /* 004ff10c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004ff10f: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 004ff112: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 004ff115: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 004ff118: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004ff11b: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
L_004ff11e:; BB(0x004ff11e);
    /* 004ff11e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff120: mov dword ptr [0xa727c0], eax */ W32((u32)(0xa727c0u), r_eax);
    /* 004ff125: mov dword ptr [esi + 0xf0], eax */ W32((u32)(r_esi+0xf0u), r_eax);
    /* 004ff12b: mov ecx, esi */ r_ecx = r_esi;
    /* 004ff12d: call 0x4fdcb0 */ r_esp -= 4; W32(r_esp, 0x4ff132u); f_004fdcb0();
    /* 004ff132: mov dword ptr [esi + 0x98], 1 */ W32((u32)(r_esi+0x98u), 0x1u);
    /* 004ff13c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff13e: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 004ff144: mov dword ptr [esi + 0xa0], eax */ W32((u32)(r_esi+0xa0u), r_eax);
    /* 004ff14a: mov dword ptr [esi + 0xa4], eax */ W32((u32)(r_esi+0xa4u), r_eax);
    /* 004ff150: mov dword ptr [esi + 0xa8], eax */ W32((u32)(r_esi+0xa8u), r_eax);
    /* 004ff156: mov dword ptr [esi + 0xac], eax */ W32((u32)(r_esi+0xacu), r_eax);
    /* 004ff15c: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004ff162: mov dword ptr [esi + 0xec], eax */ W32((u32)(r_esi+0xecu), r_eax);
    /* 004ff168: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 004ff16e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff16f: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 004ff175: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ff177: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4ff17cu); f_00810160();
    /* 004ff17c: mov ebp, eax */ r_ebp = r_eax;
    /* 004ff17e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff17f: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4ff184u); f_008123d8();
    /* 004ff184: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ff187: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ff189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ff18b: jle 0x4ff1a3 */ if ((fZ||fS!=fO)) goto L_004ff1a3;
L_004ff18d:; BB(0x004ff18d);
    /* 004ff18d: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004ff191: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff194: je 0x4ff199 */ if (fZ) goto L_004ff199;
L_004ff196:; BB(0x004ff196);
    /* 004ff196: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004ff199:; BB(0x004ff199);
    /* 004ff199: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ff19c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ff19f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff1a1: jl 0x4ff18d */ if ((fS!=fO)) goto L_004ff18d;
L_004ff1a3:; BB(0x004ff1a3);
    /* 004ff1a3: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff1a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004ff1ab:; BB(0x004ff1ab);
    /* 004ff1ab: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004ff1ae: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff1b1: je 0x4ff1b6 */ if (fZ) goto L_004ff1b6;
L_004ff1b3:; BB(0x004ff1b3);
    /* 004ff1b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004ff1b6:; BB(0x004ff1b6);
    /* 004ff1b6: movsx ebp, word ptr [ecx + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004ff1ba: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004ff1bd: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff1c0: je 0x4ff1c5 */ if (fZ) goto L_004ff1c5;
L_004ff1c2:; BB(0x004ff1c2);
    /* 004ff1c2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004ff1c5:; BB(0x004ff1c5);
    /* 004ff1c5: movsx ebp, word ptr [eax + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004ff1c9: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff1cc: je 0x4ff1d1 */ if (fZ) goto L_004ff1d1;
L_004ff1ce:; BB(0x004ff1ce);
    /* 004ff1ce: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004ff1d1:; BB(0x004ff1d1);
    /* 004ff1d1: movsx ebp, word ptr [eax + 0x88] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004ff1d8: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff1db: je 0x4ff1e0 */ if (fZ) goto L_004ff1e0;
L_004ff1dd:; BB(0x004ff1dd);
    /* 004ff1dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004ff1e0:; BB(0x004ff1e0);
    /* 004ff1e0: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 004ff1e6: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ff1e9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff1ef: jl 0x4ff1ab */ if ((fS!=fO)) goto L_004ff1ab;
L_004ff1f1:; BB(0x004ff1f1);
    /* 004ff1f1: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004ff1f7: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 004ff1fa: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004ff1fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ff1ff: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004ff201: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004ff204: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff205: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4ff20au); f_00810160();
    /* 004ff20a: mov ebx, eax */ r_ebx = r_eax;
    /* 004ff20c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff20d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4ff212u); f_008123d8();
    /* 004ff212: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ff215: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ff217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ff219: jle 0x4ff23b */ if ((fZ||fS!=fO)) goto L_004ff23b;
L_004ff21b:; BB(0x004ff21b);
    /* 004ff21b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_004ff21e:; BB(0x004ff21e);
    /* 004ff21e: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004ff221: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff224: je 0x4ff231 */ if (fZ) goto L_004ff231;
L_004ff226:; BB(0x004ff226);
    /* 004ff226: movsx edi, word ptr [ebx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004ff22a: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff22c: jne 0x4ff231 */ if (!fZ) goto L_004ff231;
L_004ff22e:; BB(0x004ff22e);
    /* 004ff22e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004ff231:; BB(0x004ff231);
    /* 004ff231: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ff234: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ff237: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff239: jl 0x4ff21e */ if ((fS!=fO)) goto L_004ff21e;
L_004ff23b:; BB(0x004ff23b);
    /* 004ff23b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff241: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004ff244: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004ff246:; BB(0x004ff246);
    /* 004ff246: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004ff249: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff24c: je 0x4ff259 */ if (fZ) goto L_004ff259;
L_004ff24e:; BB(0x004ff24e);
    /* 004ff24e: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004ff252: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff254: jne 0x4ff259 */ if (!fZ) goto L_004ff259;
L_004ff256:; BB(0x004ff256);
    /* 004ff256: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004ff259:; BB(0x004ff259);
    /* 004ff259: movsx edi, word ptr [ecx + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004ff25d: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004ff260: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff263: je 0x4ff270 */ if (fZ) goto L_004ff270;
L_004ff265:; BB(0x004ff265);
    /* 004ff265: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004ff269: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff26b: jne 0x4ff270 */ if (!fZ) goto L_004ff270;
L_004ff26d:; BB(0x004ff26d);
    /* 004ff26d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004ff270:; BB(0x004ff270);
    /* 004ff270: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004ff273: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ff276: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff27c: jl 0x4ff246 */ if ((fS!=fO)) goto L_004ff246;
L_004ff27e:; BB(0x004ff27e);
    /* 004ff27e: mov dword ptr [esi + 0x44], ebp */ W32((u32)(r_esi+0x44u), r_ebp);
    /* 004ff281: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4ff286u); f_00807ac0();
    /* 004ff286: mov edx, dword ptr [eax*4 + 0xa06be0] */ r_edx = R32((u32)(r_eax*4+0xa06be0u));
    /* 004ff28d: mov dword ptr [esi + 0xf4], 0 */ W32((u32)(r_esi+0xf4u), 0x0u);
    /* 004ff297: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff299: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff29b: je 0x4ff2b2 */ if (fZ) goto L_004ff2b2;
L_004ff29d:; BB(0x004ff29d);
    /* 004ff29d: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004ff2a0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff2a2: je 0x4ff2b2 */ if (fZ) goto L_004ff2b2;
L_004ff2a4:; BB(0x004ff2a4);
    /* 004ff2a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff2a7: mov dword ptr [esi + 0xf4], eax */ W32((u32)(r_esi+0xf4u), r_eax);
    /* 004ff2ad: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004ff2b0: jne 0x4ff29d */ if (!fZ) goto L_004ff29d;
L_004ff2b2:; BB(0x004ff2b2);
    /* 004ff2b2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2b4: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2b6: lea edx, [esi + 0x60] */ r_edx = (u32)(r_esi+0x60u);
    /* 004ff2b9: lea eax, [esi + 0x78] */ r_eax = (u32)(r_esi+0x78u);
    /* 004ff2bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2c0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff2c5u); f_0061cdb0();
    /* 004ff2c5: mov eax, 1 */ r_eax = 0x1u;
    /* 004ff2ca: mov word ptr [esi + 0x5c], ax */ W16((u32)(r_esi+0x5cu), (u16)r_eax);
    /* 004ff2ce: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff2d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff2d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff2d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ff2d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff2d5: ret  */ FN_RET(0x004ff0e0); r_esp += 4; return;
L_004ff2d6:; BB(0x004ff2d6);
    /* 004ff2d6: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 004ff2dd: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
    /* 004ff2e4: mov dword ptr [esi + 0x50], 0 */ W32((u32)(r_esi+0x50u), 0x0u);
    /* 004ff2eb: jmp 0x4ff11e */ goto L_004ff11e;
L_004ff2f0:; BB(0x004ff2f0);
    /* 004ff2f0: push 0x91e9a8 */ { u32 v = 0x91e9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff2f5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff2fau); f_0061cdb0();
    /* 004ff2fa: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004ff2fe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ff303: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004ff307: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff30a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff30b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff30c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ff30d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff30e: ret  */ FN_RET(0x004ff0e0); r_esp += 4; return;
}

void f_004ff310(void) /* sub_4FF310 */
{
    FN_ENTER(0x004ff310);
    /* 004ff310: mov dword ptr [0xa727bc], 0 */ W32((u32)(0xa727bcu), 0x0u);
    /* 004ff31a: push 0x4400 */ { u32 v = 0x4400u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff31f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ff324u); f_008581c5();
    /* 004ff324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff325: mov dword ptr [0xa727bc], eax */ W32((u32)(0xa727bcu), r_eax);
    /* 004ff32a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff32c: jne 0x4ff32f */ if (!fZ) goto L_004ff32f;
L_004ff32e:; BB(0x004ff32e);
    /* 004ff32e: ret  */ FN_RET(0x004ff310); r_esp += 4; return;
L_004ff32f:; BB(0x004ff32f);
    /* 004ff32f: push 0x4400 */ { u32 v = 0x4400u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff334: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff337: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x4ff33cu); f_0086b5cc();
    /* 004ff33c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ff33f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004ff341:; BB(0x004ff341);
    /* 004ff341: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff347: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004ff34c: mov word ptr [eax + ecx], dx */ W16((u32)(r_eax+r_ecx), (u16)r_edx);
    /* 004ff350: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff356: mov word ptr [eax + ecx + 0x44], dx */ W16((u32)(r_eax+r_ecx+0x44u), (u16)r_edx);
    /* 004ff35b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff361: mov word ptr [eax + ecx + 0x88], dx */ W16((u32)(r_eax+r_ecx+0x88u), (u16)r_edx);
    /* 004ff369: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004ff36f: mov word ptr [eax + ecx + 0xcc], dx */ W16((u32)(r_eax+r_ecx+0xccu), (u16)r_edx);
    /* 004ff377: add eax, 0x110 */ {  u32 a = r_eax; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff37c: cmp eax, 0x4400 */ {  u32 a = r_eax; u32 b = 0x4400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff381: jl 0x4ff341 */ if ((fS!=fO)) goto L_004ff341;
L_004ff383:; BB(0x004ff383);
    /* 004ff383: jmp 0x4ff32e */ goto L_004ff32e;
}

void f_004ff388(void) /* sub_4FF388 */
{
    FN_ENTER(0x004ff388);
    /* 004ff388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff389: mov edi, ecx */ r_edi = r_ecx;
    /* 004ff38b: mov edx, dword ptr [edi + 0x13c] */ r_edx = R32((u32)(r_edi+0x13cu));
    /* 004ff391: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff393: mov dword ptr [edi + 0x114], eax */ W32((u32)(r_edi+0x114u), r_eax);
    /* 004ff399: mov dword ptr [edi + 0x118], eax */ W32((u32)(r_edi+0x118u), r_eax);
    /* 004ff39f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff3a1: je 0x4ff3ba */ if (fZ) goto L_004ff3ba;
L_004ff3a3:; BB(0x004ff3a3);
    /* 004ff3a3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ff3a7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ff3ac: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ff3b0: mov dword ptr [edi + 0x13c], 0 */ W32((u32)(r_edi+0x13cu), 0x0u);
L_004ff3ba:; BB(0x004ff3ba);
    /* 004ff3ba: mov eax, dword ptr [edi + 0x100] */ r_eax = R32((u32)(r_edi+0x100u));
    /* 004ff3c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff3c2: je 0x4ff3d9 */ if (fZ) goto L_004ff3d9;
L_004ff3c4:; BB(0x004ff3c4);
    /* 004ff3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff3c5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ff3cau); f_00857e98();
    /* 004ff3ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff3cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff3cd: mov dword ptr [edi + 0x100], eax */ W32((u32)(r_edi+0x100u), r_eax);
    /* 004ff3d3: mov dword ptr [edi + 0x104], eax */ W32((u32)(r_edi+0x104u), r_eax);
L_004ff3d9:; BB(0x004ff3d9);
    /* 004ff3d9: mov ecx, edi */ r_ecx = r_edi;
    /* 004ff3db: call 0x4f83cc */ r_esp -= 4; W32(r_esp, 0x4ff3e0u); f_004f83cc();
    /* 004ff3e0: mov edx, dword ptr [0xa727c0] */ r_edx = R32((u32)(0xa727c0u));
    /* 004ff3e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff3e8: je 0x4ff401 */ if (fZ) goto L_004ff401;
L_004ff3ea:; BB(0x004ff3ea);
    /* 004ff3ea: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ff3ee: mov dword ptr [0xa727c0], 0 */ W32((u32)(0xa727c0u), 0x0u);
    /* 004ff3f8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff3fd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004ff401:; BB(0x004ff401);
    /* 004ff401: mov byte ptr [0xa727c4], 0 */ W8((u32)(0xa727c4u), 0x0u);
    /* 004ff408: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff409: ret  */ FN_RET(0x004ff388); r_esp += 4; return;
}

void f_004ff40c(void) /* sub_4FF40C */
{
    FN_ENTER(0x004ff40c);
    /* 004ff40c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff40d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff40f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff411: call 0x4ff430 */ r_esp -= 4; W32(r_esp, 0x4ff416u); f_004ff430();
    /* 004ff416: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ff41a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff41c: jne 0x4ff422 */ if (!fZ) goto L_004ff422;
L_004ff41e:; BB(0x004ff41e);
    /* 004ff41e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff41f: ret 4 */ FN_RET(0x004ff40c); r_esp += 8; return;
L_004ff422:; BB(0x004ff422);
    /* 004ff422: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff423: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ff428u); f_00857e98();
    /* 004ff428: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff429: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff42a: ret 4 */ FN_RET(0x004ff40c); r_esp += 8; return;
}

void f_004ff430(void) /* sub_4FF430 */
{
    FN_ENTER(0x004ff430);
    /* 004ff430: mov dword ptr [ecx], 0xafe2dc */ W32((u32)(r_ecx), 0xafe2dcu);
    /* 004ff436: ret  */ FN_RET(0x004ff430); r_esp += 4; return;
}

void f_004ff438(void) /* sub_4FF438 */
{
    FN_ENTER(0x004ff438);
    /* 004ff438: mov dword ptr [ecx], 0xafe2dc */ W32((u32)(r_ecx), 0xafe2dcu);
    /* 004ff43e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff440: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ff443: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004ff446: mov eax, ecx */ r_eax = r_ecx;
    /* 004ff448: ret  */ FN_RET(0x004ff438); r_esp += 4; return;
}

void f_004ff44c(void) /* sub_4FF44C */
{
    FN_ENTER(0x004ff44c);
    /* 004ff44c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff44d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff44f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff451: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x4ff456u); f_004ff470();
    /* 004ff456: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ff45a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff45c: jne 0x4ff462 */ if (!fZ) goto L_004ff462;
L_004ff45e:; BB(0x004ff45e);
    /* 004ff45e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff45f: ret 4 */ FN_RET(0x004ff44c); r_esp += 8; return;
L_004ff462:; BB(0x004ff462);
    /* 004ff462: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff463: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ff468u); f_00857e98();
    /* 004ff468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff46a: ret 4 */ FN_RET(0x004ff44c); r_esp += 8; return;
}

void f_004ff470(void) /* sub_4FF470 */
{
    FN_ENTER(0x004ff470);
    /* 004ff470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff471: mov ebp, esp */ r_ebp = r_esp;
    /* 004ff473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ff475: push 0x8d3420 */ { u32 v = 0x8d3420u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff47a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ff480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff481: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ff488: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff48b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ff48e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ff491: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ff494: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ff497: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ff49a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ff49d: mov dword ptr [ecx], 0xafe320 */ W32((u32)(r_ecx), 0xafe320u);
    /* 004ff4a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ff4aa: call 0x4ff430 */ r_esp -= 4; W32(r_esp, 0x4ff4afu); f_004ff430();
    /* 004ff4af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ff4b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ff4b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004ff4bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff4bc: ret  */ FN_RET(0x004ff470); r_esp += 4; return;
}

void f_004ff4c0(void) /* sub_4FF4C0 */
{
    FN_ENTER(0x004ff4c0);
    /* 004ff4c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff4c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff4c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff4c5: call 0x4ff438 */ r_esp -= 4; W32(r_esp, 0x4ff4cau); f_004ff438();
    /* 004ff4ca: mov dword ptr [ebx], 0xafe320 */ W32((u32)(r_ebx), 0xafe320u);
    /* 004ff4d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff4d2: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004ff4d5: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 004ff4d8: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004ff4db: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004ff4de: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004ff4e1: mov eax, ebx */ r_eax = r_ebx;
    /* 004ff4e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff4e4: ret  */ FN_RET(0x004ff4c0); r_esp += 4; return;
}

void f_004ff4e8(void) /* sub_4FF4E8 */
{
    FN_ENTER(0x004ff4e8);
    /* 004ff4e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff4e9: mov edi, ecx */ r_edi = r_ecx;
    /* 004ff4eb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ff4ef: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004ff4f3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ff4f7: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004ff4fa: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff4fd: mov edx, 8 */ r_edx = 0x8u;
    /* 004ff502: jg 0x4ff506 */ if ((!fZ&&fS==fO)) goto L_004ff506;
L_004ff504:; BB(0x004ff504);
    /* 004ff504: mov edx, ecx */ r_edx = r_ecx;
L_004ff506:; BB(0x004ff506);
    /* 004ff506: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004ff50b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff50e: jg 0x4ff512 */ if ((!fZ&&fS==fO)) goto L_004ff512;
L_004ff510:; BB(0x004ff510);
    /* 004ff510: mov edx, ecx */ r_edx = r_ecx;
L_004ff512:; BB(0x004ff512);
    /* 004ff512: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 004ff515: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff518: mov ecx, 7 */ r_ecx = 0x7u;
    /* 004ff51d: jg 0x4ff521 */ if ((!fZ&&fS==fO)) goto L_004ff521;
L_004ff51f:; BB(0x004ff51f);
    /* 004ff51f: mov ecx, eax */ r_ecx = r_eax;
L_004ff521:; BB(0x004ff521);
    /* 004ff521: mov eax, 1 */ r_eax = 0x1u;
    /* 004ff526: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff529: jg 0x4ff52d */ if ((!fZ&&fS==fO)) goto L_004ff52d;
L_004ff52b:; BB(0x004ff52b);
    /* 004ff52b: mov ecx, eax */ r_ecx = r_eax;
L_004ff52d:; BB(0x004ff52d);
    /* 004ff52d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff52e: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 004ff531: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004ff535: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004ff538: lea edx, [edi + 0xc] */ r_edx = (u32)(r_edi+0xcu);
    /* 004ff53b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff53c: push 0x91edf8 */ { u32 v = 0x91edf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff542: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4ff547u); f_00858bf5();
    /* 004ff547: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004ff54a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff54d: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 004ff550: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff553: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff554: ret 0xc */ FN_RET(0x004ff4e8); r_esp += 16; return;
}

void f_004ff558(void) /* sub_4FF558 */
{
    FN_ENTER(0x004ff558);
    /* 004ff558: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 004ff55b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004ff561: ret  */ FN_RET(0x004ff558); r_esp += 4; return;
}

void f_004ff564(void) /* sub_4FF564 */
{
    FN_ENTER(0x004ff564);
    /* 004ff564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff565: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff566: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004ff56a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff56c: je 0x4ff59c */ if (fZ) goto L_004ff59c;
L_004ff56e:; BB(0x004ff56e);
    /* 004ff56e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004ff571: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ff573: mov edi, edx */ r_edi = r_edx;
    /* 004ff575: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ff577: jl 0x4ff5ac */ if ((fS!=fO)) goto L_004ff5ac;
L_004ff579:; BB(0x004ff579);
    /* 004ff579: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004ff57c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff57e: jl 0x4ff585 */ if ((fS!=fO)) goto L_004ff585;
L_004ff580:; BB(0x004ff580);
    /* 004ff580: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 004ff583: mov edi, edx */ r_edi = r_edx;
L_004ff585:; BB(0x004ff585);
    /* 004ff585: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff588: jne 0x4ff599 */ if (!fZ) goto L_004ff599;
L_004ff58a:; BB(0x004ff58a);
    /* 004ff58a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ff58c: jle 0x4ff5a1 */ if ((fZ||fS!=fO)) goto L_004ff5a1;
L_004ff58e:; BB(0x004ff58e);
    /* 004ff58e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff591: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004ff594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff595: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff596: ret 4 */ FN_RET(0x004ff564); r_esp += 8; return;
L_004ff599:; BB(0x004ff599);
    /* 004ff599: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
L_004ff59c:; BB(0x004ff59c);
    /* 004ff59c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff59d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff59e: ret 4 */ FN_RET(0x004ff564); r_esp += 8; return;
L_004ff5a1:; BB(0x004ff5a1);
    /* 004ff5a1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff5a4: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004ff5a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff5a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff5a9: ret 4 */ FN_RET(0x004ff564); r_esp += 8; return;
L_004ff5ac:; BB(0x004ff5ac);
    /* 004ff5ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ff5ae: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ff5b0: jmp 0x4ff585 */ goto L_004ff585;
}

void f_004ff5b4(void) /* sub_4FF5B4 */
{
    FN_ENTER(0x004ff5b4);
    /* 004ff5b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff5b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff5b6: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff5b9: mov edi, ecx */ r_edi = r_ecx;
    /* 004ff5bb: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 004ff5bf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff5c1: je 0x4ff61d */ if (fZ) goto L_004ff61d;
L_004ff5c3:; BB(0x004ff5c3);
    /* 004ff5c3: fld qword ptr [0x91ede8] */ FPUSH(R_F64((u32)(0x91ede8u)));
    /* 004ff5c9: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004ff5cc: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004ff5cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004ff5d1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff5d3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff5d5: jge 0x4ff5ed */ if ((fS==fO)) goto L_004ff5ed;
L_004ff5d7:; BB(0x004ff5d7);
    /* 004ff5d7: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004ff5da: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004ff5de: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004ff5e2: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ff5e6: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x4ff5ebu); f_0084d1d4();
    /* 004ff5eb: jmp 0x4ff604 */ goto L_004ff604;
L_004ff5ed:; BB(0x004ff5ed);
    /* 004ff5ed: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004ff5f0: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff5f3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004ff5f7: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004ff5fb: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ff5ff: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x4ff604u); f_0084d1d4();
L_004ff604:; BB(0x004ff604);
    /* 004ff604: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004ff607: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 004ff60b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004ff60f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ff611: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 004ff613: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004ff615: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff619: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff61a: ret 4 */ FN_RET(0x004ff5b4); r_esp += 8; return;
L_004ff61d:; BB(0x004ff61d);
    /* 004ff61d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff620: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff621: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff622: ret 4 */ FN_RET(0x004ff5b4); r_esp += 8; return;
}

void f_004ff628(void) /* sub_4FF628 */
{
    FN_ENTER(0x004ff628);
    /* 004ff628: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff62b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004ff62f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ff632: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 004ff635: or eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ff639: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ff63c: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 004ff63f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004ff641: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ff645: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004ff649: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff64eu); f_0061cdb0();
    /* 004ff64e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff651: ret 0xc */ FN_RET(0x004ff628); r_esp += 16; return;
}

void f_004ff654(void) /* sub_4FF654 */
{
    FN_ENTER(0x004ff654);
    /* 004ff654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff655: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff658: mov edi, ecx */ r_edi = r_ecx;
    /* 004ff65a: lea edx, [edi + 0xc] */ r_edx = (u32)(r_edi+0xcu);
    /* 004ff65d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004ff661: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ff664: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004ff667: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004ff669: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ff66d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004ff671: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4ff676u); f_00858bf5();
    /* 004ff676: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004ff679: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 004ff67c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff67e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff680: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff683: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 004ff686: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff688: jge 0x4ff6a7 */ if ((fS==fO)) goto L_004ff6a7;
L_004ff68a:; BB(0x004ff68a);
    /* 004ff68a: mov edi, eax */ r_edi = r_eax;
    /* 004ff68c: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004ff68e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ff691: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff694: jl 0x4ff6a0 */ if ((fS!=fO)) goto L_004ff6a0;
L_004ff696:; BB(0x004ff696);
    /* 004ff696: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004ff699:; BB(0x004ff699);
    /* 004ff699: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff69c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff69e: jle 0x4ff699 */ if ((fZ||fS!=fO)) goto L_004ff699;
L_004ff6a0:; BB(0x004ff6a0);
    /* 004ff6a0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff6a3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff6a5: jl 0x4ff6a0 */ if ((fS!=fO)) goto L_004ff6a0;
L_004ff6a7:; BB(0x004ff6a7);
    /* 004ff6a7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff6aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ff6ab: ret 0x10 */ FN_RET(0x004ff654); r_esp += 20; return;
}

void f_004ff6b0(void) /* sub_4FF6B0 */
{
    FN_ENTER(0x004ff6b0);
    /* 004ff6b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff6b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff6b5: call 0x4ff6d4 */ r_esp -= 4; W32(r_esp, 0x4ff6bau); f_004ff6d4();
    /* 004ff6ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ff6be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff6c0: jne 0x4ff6c6 */ if (!fZ) goto L_004ff6c6;
L_004ff6c2:; BB(0x004ff6c2);
    /* 004ff6c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff6c3: ret 4 */ FN_RET(0x004ff6b0); r_esp += 8; return;
L_004ff6c6:; BB(0x004ff6c6);
    /* 004ff6c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6c7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ff6ccu); f_00857e98();
    /* 004ff6cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff6cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff6ce: ret 4 */ FN_RET(0x004ff6b0); r_esp += 8; return;
}

void f_004ff6d4(void) /* sub_4FF6D4 */
{
    FN_ENTER(0x004ff6d4);
    /* 004ff6d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ff6d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6d9: push 0x8d343c */ { u32 v = 0x8d343cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ff6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff6e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ff6ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff6ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ff6f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ff6f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ff6f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ff6fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ff6fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ff701: mov dword ptr [ecx], 0xafe388 */ W32((u32)(r_ecx), 0xafe388u);
    /* 004ff707: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ff70e: call 0x4ff430 */ r_esp -= 4; W32(r_esp, 0x4ff713u); f_004ff430();
    /* 004ff713: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ff716: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ff71d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ff71f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff720: ret  */ FN_RET(0x004ff6d4); r_esp += 4; return;
}

void f_004ff724(void) /* sub_4FF724 */
{
    FN_ENTER(0x004ff724);
    /* 004ff724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff725: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff727: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff729: call 0x4ff748 */ r_esp -= 4; W32(r_esp, 0x4ff72eu); f_004ff748();
    /* 004ff72e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ff732: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff734: jne 0x4ff73a */ if (!fZ) goto L_004ff73a;
L_004ff736:; BB(0x004ff736);
    /* 004ff736: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff737: ret 4 */ FN_RET(0x004ff724); r_esp += 8; return;
L_004ff73a:; BB(0x004ff73a);
    /* 004ff73a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff73b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ff740u); f_00857e98();
    /* 004ff740: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ff741: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff742: ret 4 */ FN_RET(0x004ff724); r_esp += 8; return;
}

void f_004ff748(void) /* sub_4FF748 */
{
    FN_ENTER(0x004ff748);
    /* 004ff748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff749: mov ebp, esp */ r_ebp = r_esp;
    /* 004ff74b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ff74d: push 0x8d3458 */ { u32 v = 0x8d3458u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ff758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ff760: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ff766: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ff769: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ff76c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ff76f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ff772: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ff775: mov dword ptr [ecx], 0xafe3a0 */ W32((u32)(r_ecx), 0xafe3a0u);
    /* 004ff77b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ff782: call 0x4ff430 */ r_esp -= 4; W32(r_esp, 0x4ff787u); f_004ff430();
    /* 004ff787: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ff78a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ff791: mov esp, ebp */ r_esp = r_ebp;
    /* 004ff793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff794: ret  */ FN_RET(0x004ff748); r_esp += 4; return;
}

void f_004ff798(void) /* sub_4FF798 */
{
    FN_ENTER(0x004ff798);
    /* 004ff798: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ff799: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ff79b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ff79d: call 0x4ff438 */ r_esp -= 4; W32(r_esp, 0x4ff7a2u); f_004ff438();
    /* 004ff7a2: mov dword ptr [ebp], 0xafe388 */ W32((u32)(r_ebp), 0xafe388u);
    /* 004ff7a9: mov eax, ebp */ r_eax = r_ebp;
    /* 004ff7ab: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 004ff7b2: mov dword ptr [ebp + 0x10], 8 */ W32((u32)(r_ebp+0x10u), 0x8u);
    /* 004ff7b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff7ba: ret  */ FN_RET(0x004ff798); r_esp += 4; return;
}

void f_004ff7bc(void) /* sub_4FF7BC */
{
    FN_ENTER(0x004ff7bc);
    /* 004ff7bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ff7c0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ff7c4: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004ff7c7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff7ca: mov eax, 8 */ r_eax = 0x8u;
    /* 004ff7cf: jg 0x4ff7d3 */ if ((!fZ&&fS==fO)) goto L_004ff7d3;
L_004ff7d1:; BB(0x004ff7d1);
    /* 004ff7d1: mov eax, edx */ r_eax = r_edx;
L_004ff7d3:; BB(0x004ff7d3);
    /* 004ff7d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ff7d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ff7d7: jg 0x4ff7db */ if ((!fZ&&fS==fO)) goto L_004ff7db;
L_004ff7d9:; BB(0x004ff7d9);
    /* 004ff7d9: mov eax, edx */ r_eax = r_edx;
L_004ff7db:; BB(0x004ff7db);
    /* 004ff7db: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 004ff7de: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff7e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff7e5: push 0x91ee10 */ { u32 v = 0x91ee10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff7ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff7eb: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4ff7f0u); f_00858bf5();
    /* 004ff7f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff7f3: ret 8 */ FN_RET(0x004ff7bc); r_esp += 12; return;
}

void f_004ff7f8(void) /* sub_4FF7F8 */
{
    FN_ENTER(0x004ff7f8);
    /* 004ff7f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ff7fc: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff7ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff801: jl 0x4ff819 */ if ((fS!=fO)) goto L_004ff819;
L_004ff803:; BB(0x004ff803);
    /* 004ff803: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004ff806: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff808: jge 0x4ff810 */ if ((fS==fO)) goto L_004ff810;
L_004ff80a:; BB(0x004ff80a);
    /* 004ff80a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004ff80d: ret 4 */ FN_RET(0x004ff7f8); r_esp += 8; return;
L_004ff810:; BB(0x004ff810);
    /* 004ff810: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff813: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004ff816: ret 4 */ FN_RET(0x004ff7f8); r_esp += 8; return;
L_004ff819:; BB(0x004ff819);
    /* 004ff819: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004ff820: ret 4 */ FN_RET(0x004ff7f8); r_esp += 8; return;
}

void f_004ff824(void) /* sub_4FF824 */
{
    FN_ENTER(0x004ff824);
    /* 004ff824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff825: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff828: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff82a: fild dword ptr [ebx + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x8u)));
    /* 004ff82d: fld qword ptr [0x91ee08] */ FPUSH(R_F64((u32)(0x91ee08u)));
    /* 004ff833: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004ff836: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ff83a: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x4ff83fu); f_0084d1d4();
    /* 004ff83f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004ff842: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004ff846: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004ff84b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ff850: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ff854: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ff858: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ff85c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ff860: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004ff864: imul eax, dword ptr [esp + 0x30] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x30u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ff869: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ff86b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff86e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff86f: ret 4 */ FN_RET(0x004ff824); r_esp += 8; return;
}

void f_004ff874(void) /* sub_4FF874 */
{
    FN_ENTER(0x004ff874);
    /* 004ff874: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004ff878: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004ff87b: lea eax, [ecx + 0x14] */ r_eax = (u32)(r_ecx+0x14u);
    /* 004ff87e: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004ff881: or edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ff885: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff888: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff889: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff88eu); f_0061cdb0();
    /* 004ff88e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff891: ret 0xc */ FN_RET(0x004ff874); r_esp += 16; return;
}

void f_004ff894(void) /* sub_4FF894 */
{
    FN_ENTER(0x004ff894);
    /* 004ff894: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ff895: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ff898: mov esi, ecx */ r_esi = r_ecx;
    /* 004ff89a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 004ff89d: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004ff8a0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004ff8a3: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff8a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff8a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff8a7: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4ff8acu); f_00858bf5();
    /* 004ff8ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ff8af: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004ff8b2: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 004ff8b5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff8b7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff8b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff8bc: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 004ff8bf: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff8c1: jge 0x4ff8e0 */ if ((fS==fO)) goto L_004ff8e0;
L_004ff8c3:; BB(0x004ff8c3);
    /* 004ff8c3: mov esi, eax */ r_esi = r_eax;
    /* 004ff8c5: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ff8c7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ff8ca: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff8cd: jl 0x4ff8d9 */ if ((fS!=fO)) goto L_004ff8d9;
L_004ff8cf:; BB(0x004ff8cf);
    /* 004ff8cf: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004ff8d2:; BB(0x004ff8d2);
    /* 004ff8d2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff8d5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff8d7: jle 0x4ff8d2 */ if ((fZ||fS!=fO)) goto L_004ff8d2;
L_004ff8d9:; BB(0x004ff8d9);
    /* 004ff8d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff8dc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff8de: jl 0x4ff8d9 */ if ((fS!=fO)) goto L_004ff8d9;
L_004ff8e0:; BB(0x004ff8e0);
    /* 004ff8e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff8e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ff8e4: ret 0x10 */ FN_RET(0x004ff894); r_esp += 20; return;
}

void f_004ff8e8(void) /* sub_4FF8E8 */
{
    FN_ENTER(0x004ff8e8);
    /* 004ff8e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff8e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff8eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ff8ed: call 0x4ff438 */ r_esp -= 4; W32(r_esp, 0x4ff8f2u); f_004ff438();
    /* 004ff8f2: mov dword ptr [ebx], 0xafe3a0 */ W32((u32)(r_ebx), 0xafe3a0u);
    /* 004ff8f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff8fa: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 004ff8fd: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004ff900: mov dword ptr [ebx + 0x10], 8 */ W32((u32)(r_ebx+0x10u), 0x8u);
    /* 004ff907: mov eax, ebx */ r_eax = r_ebx;
    /* 004ff909: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff90a: ret  */ FN_RET(0x004ff8e8); r_esp += 4; return;
}

void f_004ff90c(void) /* sub_4FF90C */
{
    FN_ENTER(0x004ff90c);
    /* 004ff90c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ff910: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ff914: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004ff917: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff91a: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004ff921: mov eax, 8 */ r_eax = 0x8u;
    /* 004ff926: jg 0x4ff92a */ if ((!fZ&&fS==fO)) goto L_004ff92a;
L_004ff928:; BB(0x004ff928);
    /* 004ff928: mov eax, edx */ r_eax = r_edx;
L_004ff92a:; BB(0x004ff92a);
    /* 004ff92a: mov edx, 1 */ r_edx = 0x1u;
    /* 004ff92f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff932: jg 0x4ff936 */ if ((!fZ&&fS==fO)) goto L_004ff936;
L_004ff934:; BB(0x004ff934);
    /* 004ff934: mov eax, edx */ r_eax = r_edx;
L_004ff936:; BB(0x004ff936);
    /* 004ff936: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 004ff939: ret 8 */ FN_RET(0x004ff90c); r_esp += 12; return;
}

void f_004ff93c(void) /* sub_4FF93C */
{
    FN_ENTER(0x004ff93c);
    /* 004ff93c: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 004ff93f: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004ff945: ret  */ FN_RET(0x004ff93c); r_esp += 4; return;
}

void f_004ff948(void) /* sub_4FF948 */
{
    FN_ENTER(0x004ff948);
    /* 004ff948: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004ff94c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff94e: je 0x4ff96c */ if (fZ) goto L_004ff96c;
L_004ff950:; BB(0x004ff950);
    /* 004ff950: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004ff953: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff957: jl 0x4ff96f */ if ((fS!=fO)) goto L_004ff96f;
L_004ff959:; BB(0x004ff959);
    /* 004ff959: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004ff95c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff95e: jge 0x4ff966 */ if ((fS==fO)) goto L_004ff966;
L_004ff960:; BB(0x004ff960);
    /* 004ff960: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004ff963: ret 4 */ FN_RET(0x004ff948); r_esp += 8; return;
L_004ff966:; BB(0x004ff966);
    /* 004ff966: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff969: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_004ff96c:; BB(0x004ff96c);
    /* 004ff96c: ret 4 */ FN_RET(0x004ff948); r_esp += 8; return;
L_004ff96f:; BB(0x004ff96f);
    /* 004ff96f: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 004ff976: ret 4 */ FN_RET(0x004ff948); r_esp += 8; return;
}

void f_004ff97c(void) /* sub_4FF97C */
{
    FN_ENTER(0x004ff97c);
    /* 004ff97c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff97d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ff97f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004ff983: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff985: jne 0x4ff98b */ if (!fZ) goto L_004ff98b;
L_004ff987:; BB(0x004ff987);
    /* 004ff987: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff988: ret 4 */ FN_RET(0x004ff97c); r_esp += 8; return;
L_004ff98b:; BB(0x004ff98b);
    /* 004ff98b: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004ff98e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ff990: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff992: mov eax, 1 */ r_eax = 0x1u;
    /* 004ff997: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ff999: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ff99c: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004ff99f: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ff9a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff9a2: ret 4 */ FN_RET(0x004ff97c); r_esp += 8; return;
}

void f_004ff9ac(void) /* sub_4FF9AC */
{
    FN_ENTER(0x004ff9ac);
    /* 004ff9ac: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004ff9af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ff9b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ff9b3: jle 0x4ff9cb */ if ((fZ||fS!=fO)) goto L_004ff9cb;
L_004ff9b5:; BB(0x004ff9b5);
    /* 004ff9b5: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff9b8: jl 0x4ff9c4 */ if ((fS!=fO)) goto L_004ff9c4;
L_004ff9ba:; BB(0x004ff9ba);
    /* 004ff9ba: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
L_004ff9bd:; BB(0x004ff9bd);
    /* 004ff9bd: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff9c0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ff9c2: jle 0x4ff9bd */ if ((fZ||fS!=fO)) goto L_004ff9bd;
L_004ff9c4:; BB(0x004ff9c4);
    /* 004ff9c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ff9c7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff9c9: jl 0x4ff9c4 */ if ((fS!=fO)) goto L_004ff9c4;
L_004ff9cb:; BB(0x004ff9cb);
    /* 004ff9cb: ret 0x10 */ FN_RET(0x004ff9ac); r_esp += 20; return;
}

void f_004ff9d0(void) /* sub_4FF9D0 */
{
    FN_ENTER(0x004ff9d0);
    /* 004ff9d0: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004ff9d5: mov dword ptr [0xa727cc], eax */ W32((u32)(0xa727ccu), r_eax);
    /* 004ff9da: ret  */ FN_RET(0x004ff9d0); r_esp += 4; return;
}

void f_004ff9dc(void)
{
    FN_ENTER(0x004ff9dc);
    /* 004ff9dc: mov eax, dword ptr [0xa0f668] */ r_eax = R32((u32)(0xa0f668u));
    /* 004ff9e1: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 004ff9e7: mov ecx, dword ptr [0xa0f66c] */ r_ecx = R32((u32)(0xa0f66cu));
    /* 004ff9ed: mov dword ptr [0xa727f8], eax */ W32((u32)(0xa727f8u), r_eax);
    /* 004ff9f2: mov eax, dword ptr [0xa0f670] */ r_eax = R32((u32)(0xa0f670u));
    /* 004ff9f7: mov dword ptr [0xa727d4], 0x3f800000 */ W32((u32)(0xa727d4u), 0x3f800000u);
    /* 004ffa01: mov dword ptr [0xa727d8], 0x41000000 */ W32((u32)(0xa727d8u), 0x41000000u);
    /* 004ffa0b: mov dword ptr [0xa727f4], edx */ W32((u32)(0xa727f4u), r_edx);
    /* 004ffa11: mov dword ptr [0xa727f0], ecx */ W32((u32)(0xa727f0u), r_ecx);
    /* 004ffa17: mov dword ptr [0xa727dc], 0x3fc00000 */ W32((u32)(0xa727dcu), 0x3fc00000u);
    /* 004ffa21: mov dword ptr [0xa727ec], eax */ W32((u32)(0xa727ecu), r_eax);
    /* 004ffa26: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 004ffa2b: mov dword ptr [0xa727e8], eax */ W32((u32)(0xa727e8u), r_eax);
    /* 004ffa30: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
    /* 004ffa35: mov dword ptr [0xa727e4], eax */ W32((u32)(0xa727e4u), r_eax);
    /* 004ffa3a: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004ffa3f: mov dword ptr [0xa727e0], eax */ W32((u32)(0xa727e0u), r_eax);
    /* 004ffa44: ret  */ FN_RET(0x004ff9dc); r_esp += 4; return;
}

void f_004ffa48(void) /* sub_4FFA48 */
{
    FN_ENTER(0x004ffa48);
    /* 004ffa48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ffa4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ffa4d: call 0x4ffa6c */ r_esp -= 4; W32(r_esp, 0x4ffa52u); f_004ffa6c();
    /* 004ffa52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ffa56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ffa58: jne 0x4ffa5e */ if (!fZ) goto L_004ffa5e;
L_004ffa5a:; BB(0x004ffa5a);
    /* 004ffa5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ffa5b: ret 4 */ FN_RET(0x004ffa48); r_esp += 8; return;
L_004ffa5e:; BB(0x004ffa5e);
    /* 004ffa5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ffa64u); f_005c2f74();
    /* 004ffa64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ffa65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ffa66: ret 4 */ FN_RET(0x004ffa48); r_esp += 8; return;
}

void f_004ffa6c(void) /* sub_4FFA6C */
{
    FN_ENTER(0x004ffa6c);
    /* 004ffa6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa6d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ffa6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa71: push 0x8d3474 */ { u32 v = 0x8d3474u; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ffa7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffa7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ffa84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffa87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ffa8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ffa8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ffa90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ffa93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ffa96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ffa99: mov dword ptr [ecx], 0xafe480 */ W32((u32)(r_ecx), 0xafe480u);
    /* 004ffa9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ffaa6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ffaabu); f_008171e8();
    /* 004ffaab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ffaae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ffab5: mov esp, ebp */ r_esp = r_ebp;
    /* 004ffab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffab8: ret  */ FN_RET(0x004ffa6c); r_esp += 4; return;
}

void f_004ffabc(void) /* sub_4FFABC */
{
    FN_ENTER(0x004ffabc);
    /* 004ffabc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffabd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ffabf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ffac1: call 0x4ffae0 */ r_esp -= 4; W32(r_esp, 0x4ffac6u); f_004ffae0();
    /* 004ffac6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ffaca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ffacc: jne 0x4ffad2 */ if (!fZ) goto L_004ffad2;
L_004fface:; BB(0x004fface);
    /* 004fface: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ffacf: ret 4 */ FN_RET(0x004ffabc); r_esp += 8; return;
L_004ffad2:; BB(0x004ffad2);
    /* 004ffad2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffad3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ffad8u); f_005c2f74();
    /* 004ffad8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ffad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ffada: ret 4 */ FN_RET(0x004ffabc); r_esp += 8; return;
}

void f_004ffae0(void) /* sub_4FFAE0 */
{
    FN_ENTER(0x004ffae0);
    /* 004ffae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffae1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ffae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ffae5: push 0x8d3490 */ { u32 v = 0x8d3490u; r_esp -= 4; W32(r_esp, v); }
    /* 004ffaea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ffaf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffaf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ffaf8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffafb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ffafe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ffb01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ffb04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ffb07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ffb0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ffb0d: mov dword ptr [ecx], 0xafe490 */ W32((u32)(r_ecx), 0xafe490u);
    /* 004ffb13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ffb1a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x4ffb1fu); f_007ba1f0();
    /* 004ffb1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ffb22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ffb29: mov esp, ebp */ r_esp = r_ebp;
    /* 004ffb2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffb2c: ret  */ FN_RET(0x004ffae0); r_esp += 4; return;
}

void f_004ffb30(void) /* sub_4FFB30 */
{
    FN_ENTER(0x004ffb30);
    /* 004ffb30: movsx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1du));
    /* 004ffb34: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ffb37: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 004ffb3a: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 004ffb3d: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ffb40: jl 0x4ffb4f */ if ((fS!=fO)) goto L_004ffb4f;
L_004ffb42:; BB(0x004ffb42);
    /* 004ffb42: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ffb46: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ffb4b: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_004ffb4f:; BB(0x004ffb4f);
    /* 004ffb4f: ret  */ FN_RET(0x004ffb30); r_esp += 4; return;
}

void f_004ffb50(void) /* sub_4FFB50 */
{
    FN_ENTER(0x004ffb50);
    /* 004ffb50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ffb51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffb52: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffb55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ffb57: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004ffb5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ffb5e: jne 0x4ffb66 */ if (!fZ) goto L_004ffb66;
L_004ffb60:; BB(0x004ffb60);
    /* 004ffb60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ffb63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffb64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ffb65: ret  */ FN_RET(0x004ffb50); r_esp += 4; return;
L_004ffb66:; BB(0x004ffb66);
    /* 004ffb66: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004ffb6b: mov esi, dword ptr [eax + 0x194] */ r_esi = R32((u32)(r_eax+0x194u));
    /* 004ffb71: add esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ffb77: mov ecx, esi */ r_ecx = r_esi;
    /* 004ffb79: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ffb7eu); f_0082dcbc();
    /* 004ffb7e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ffb81: mov dword ptr [esp + 4], 0xbf800000 */ W32((u32)(r_esp+0x4u), 0xbf800000u);
    /* 004ffb89: mov ecx, esi */ r_ecx = r_esi;
    /* 004ffb8b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ffb90u); f_0082ddd8();
    /* 004ffb90: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ffb94: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4ffb99u); f_0082dbac();
    /* 004ffb99: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x4ffb9eu); f_007a902c();
    /* 004ffb9e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ffba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffba2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ffba4: call 0x4ffbc4 */ r_esp -= 4; W32(r_esp, 0x4ffba9u); f_004ffbc4();
    /* 004ffba9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ffbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffbad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ffbaf: call 0x4ffdcc */ r_esp -= 4; W32(r_esp, 0x4ffbb4u); f_004ffdcc();
    /* 004ffbb4: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4ffbb9u); f_007a9044();
    /* 004ffbb9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4ffbbeu); f_0082dab0();
    /* 004ffbbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ffbc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffbc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ffbc3: ret  */ FN_RET(0x004ffb50); r_esp += 4; return;
}

void f_004ffbc4(void) /* sub_4FFBC4 */
{
    FN_ENTER(0x004ffbc4);
    /* 004ffbc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ffbc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffbc6: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffbc9: mov esi, ecx */ r_esi = r_ecx;
    /* 004ffbcb: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004ffbcf: movsx eax, byte ptr [esi + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1du));
    /* 004ffbd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ffbd5: je 0x4ffc13 */ if (fZ) goto L_004ffc13;
L_004ffbd7:; BB(0x004ffbd7);
    /* 004ffbd7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ffbda: je 0x4ffc13 */ if (fZ) goto L_004ffc13;
L_004ffbdc:; BB(0x004ffbdc);
    /* 004ffbdc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ffbdf: je 0x4ffbe6 */ if (fZ) goto L_004ffbe6;
L_004ffbe1:; BB(0x004ffbe1);
    /* 004ffbe1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ffbe4: jne 0x4ffbf6 */ if (!fZ) goto L_004ffbf6;
L_004ffbe6:; BB(0x004ffbe6);
    /* 004ffbe6: fld dword ptr [0x91ee70] */ FPUSH(R_F32((u32)(0x91ee70u)));
    /* 004ffbec: fld dword ptr [0x91ee78] */ FPUSH(R_F32((u32)(0x91ee78u)));
    /* 004ffbf2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffbf4: jmp 0x4ffc1f */ goto L_004ffc1f;
L_004ffbf6:; BB(0x004ffbf6);
    /* 004ffbf6: fld dword ptr [0x91ee78] */ FPUSH(R_F32((u32)(0x91ee78u)));
    /* 004ffbfc: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ffbff: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ffc03: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004ffc07: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ffc09: fdiv dword ptr [0x91ee74] */ ST(0) = ST(0) / R_F32((u32)(0x91ee74u));
    /* 004ffc0f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004ffc11: jmp 0x4ffc1f */ goto L_004ffc1f;
L_004ffc13:; BB(0x004ffc13);
    /* 004ffc13: fld dword ptr [0x91ee78] */ FPUSH(R_F32((u32)(0x91ee78u)));
    /* 004ffc19: fld dword ptr [0x91ee78] */ FPUSH(R_F32((u32)(0x91ee78u)));
L_004ffc1f:; BB(0x004ffc1f);
    /* 004ffc1f: fmul dword ptr [0x91ee6c] */ ST(0) = ST(0) * R_F32((u32)(0x91ee6cu));
    /* 004ffc25: fld dword ptr [0xa72808] */ FPUSH(R_F32((u32)(0xa72808u)));
    /* 004ffc2b: fld dword ptr [0xa7280c] */ FPUSH(R_F32((u32)(0xa7280cu)));
    /* 004ffc31: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 004ffc34: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004ffc36: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004ffc38: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004ffc3a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004ffc3c: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004ffc3f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 004ffc41: fsubr dword ptr [esi + 0x20] */ ST(0) = R_F32((u32)(r_esi+0x20u)) - ST(0);
    /* 004ffc44: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004ffc47: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004ffc49: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 004ffc4d: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004ffc50: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 004ffc52: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004ffc54: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004ffc58: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 004ffc5a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004ffc5c: fsubr dword ptr [esi + 0x28] */ ST(0) = R_F32((u32)(r_esi+0x28u)) - ST(0);
    /* 004ffc5f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004ffc61: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004ffc63: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 004ffc65: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004ffc68: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004ffc6a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ffc6e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ffc70: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 004ffc72: fld dword ptr [0xa72810] */ FPUSH(R_F32((u32)(0xa72810u)));
    /* 004ffc78: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ffc7a: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 004ffc7d: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004ffc7f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ffc81: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004ffc85: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004ffc88: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004ffc8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffc8c: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004ffc90: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004ffc95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ffc9a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ffc9e: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004ffca2: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ffca6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ffcaa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ffcac: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 004ffcb0: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004ffcb4: or ebp, 0xffffff */ {  u32 a = r_ebp; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004ffcba: call 0x4ffcec */ r_esp -= 4; W32(r_esp, 0x4ffcbfu); f_004ffcec();
    /* 004ffcbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ffcc1: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x4ffcc6u); f_00829d68();
    /* 004ffcc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ffcc8: call 0x82b374 */ r_esp -= 4; W32(r_esp, 0x4ffccdu); f_0082b374();
    /* 004ffccd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ffcce: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004ffcd2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ffcd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffcd6: mov ecx, esi */ r_ecx = r_esi;
    /* 004ffcd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffcda: call 0x4ffcf8 */ r_esp -= 4; W32(r_esp, 0x4ffcdfu); f_004ffcf8();
    /* 004ffcdf: call 0x82b2e8 */ r_esp -= 4; W32(r_esp, 0x4ffce4u); f_0082b2e8();
    /* 004ffce4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ffce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffce8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ffce9: ret 4 */ FN_RET(0x004ffbc4); r_esp += 8; return;
}

void f_004ffcec(void) /* sub_4FFCEC */
{
    FN_ENTER(0x004ffcec);
    /* 004ffcec: mov ecx, dword ptr [0xa72814] */ r_ecx = R32((u32)(0xa72814u));
    /* 004ffcf2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4ffcf7u); f_00829cc8();
    /* 004ffcf7: ret  */ FN_RET(0x004ffcec); r_esp += 4; return;
}

void f_004ffcf8(void) /* sub_4FFCF8 */
{
    FN_ENTER(0x004ffcf8);
    /* 004ffcf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ffcf9: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffcfc: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 004ffd00: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004ffd02: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004ffd06: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 004ffd0a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ffd0d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004ffd10: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004ffd14: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 004ffd17: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004ffd1b: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004ffd1f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004ffd27: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004ffd2f: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004ffd31: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 004ffd35: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004ffd38: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 004ffd3b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004ffd3f: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 004ffd42: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 004ffd4a: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 004ffd4e: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 004ffd56: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 004ffd5a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004ffd5c: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004ffd5e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004ffd62: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004ffd65: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004ffd69: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004ffd6c: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 004ffd6f: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 004ffd73: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004ffd77: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 004ffd7f: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 004ffd87: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004ffd89: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004ffd8b: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004ffd8f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004ffd92: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 004ffd95: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004ffd99: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004ffd9c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ffd9f: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 004ffda2: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004ffda6: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 004ffdaa: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 004ffdb2: mov dword ptr [esp + 0x58], 0x3f800000 */ W32((u32)(r_esp+0x58u), 0x3f800000u);
    /* 004ffdba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ffdbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffdbd: call 0x82b3c4 */ r_esp -= 4; W32(r_esp, 0x4ffdc2u); f_0082b3c4();
    /* 004ffdc2: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ffdc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffdc6: ret 0xc */ FN_RET(0x004ffcf8); r_esp += 16; return;
}

void f_004ffdcc(void) /* sub_4FFDCC */
{
    FN_ENTER(0x004ffdcc);
    /* 004ffdcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ffdcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ffdce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffdcf: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffdd2: mov edi, ecx */ r_edi = r_ecx;
    /* 004ffdd4: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004ffdd8: movsx eax, byte ptr [edi + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1du));
    /* 004ffddc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ffdde: jne 0x4ffdf2 */ if (!fZ) goto L_004ffdf2;
L_004ffde0:; BB(0x004ffde0);
    /* 004ffde0: fld dword ptr [0x91ee60] */ FPUSH(R_F32((u32)(0x91ee60u)));
    /* 004ffde6: fld dword ptr [0x91ee5c] */ FPUSH(R_F32((u32)(0x91ee5cu)));
    /* 004ffdec: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ffdee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffdf0: jmp 0x4ffe2c */ goto L_004ffe2c;
L_004ffdf2:; BB(0x004ffdf2);
    /* 004ffdf2: jle 0x4ffe0c */ if ((fZ||fS!=fO)) goto L_004ffe0c;
L_004ffdf4:; BB(0x004ffdf4);
    /* 004ffdf4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ffdf7: jg 0x4ffe0c */ if ((!fZ&&fS==fO)) goto L_004ffe0c;
L_004ffdf9:; BB(0x004ffdf9);
    /* 004ffdf9: fld dword ptr [0x91ee60] */ FPUSH(R_F32((u32)(0x91ee60u)));
    /* 004ffdff: fld dword ptr [0x91ee5c] */ FPUSH(R_F32((u32)(0x91ee5cu)));
    /* 004ffe05: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
    /* 004ffe08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffe0a: jmp 0x4ffe2c */ goto L_004ffe2c;
L_004ffe0c:; BB(0x004ffe0c);
    /* 004ffe0c: fld dword ptr [0x91ee5c] */ FPUSH(R_F32((u32)(0x91ee5cu)));
    /* 004ffe12: mov esi, 3 */ r_esi = 0x3u;
    /* 004ffe17: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ffe1a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ffe1e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004ffe22: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ffe24: fdiv dword ptr [0x91ee58] */ ST(0) = ST(0) / R_F32((u32)(0x91ee58u));
    /* 004ffe2a: fadd st(1) */ ST(0) = ST(0) + ST(1);
L_004ffe2c:; BB(0x004ffe2c);
    /* 004ffe2c: fmul dword ptr [0x91ee54] */ ST(0) = ST(0) * R_F32((u32)(0x91ee54u));
    /* 004ffe32: fld dword ptr [0xa72808] */ FPUSH(R_F32((u32)(0xa72808u)));
    /* 004ffe38: fmul dword ptr [edi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x2cu));
    /* 004ffe3b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004ffe3d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ffe3f: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004ffe42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffe44: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004ffe47: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004ffe49: fsubr dword ptr [edi + 0x20] */ ST(0) = R_F32((u32)(r_edi+0x20u)) - ST(0);
    /* 004ffe4c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004ffe4f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004ffe51: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 004ffe55: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004ffe57: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004ffe5a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004ffe5c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ffe60: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004ffe64: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004ffe68: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ffe6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ffe6c: fsubr dword ptr [edi + 0x28] */ ST(0) = R_F32((u32)(r_edi+0x28u)) - ST(0);
    /* 004ffe6f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004ffe73: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004ffe77: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004ffe7c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ffe81: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ffe85: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004ffe89: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ffe8d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ffe91: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 004ffe95: or ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004ffe9b: call 0x4ffcec */ r_esp -= 4; W32(r_esp, 0x4ffea0u); f_004ffcec();
    /* 004ffea0: movzx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)R8((u32)(r_edi+0x1cu));
    /* 004ffea4: add esi, dword ptr [eax*4 + 0x91ee24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*4+0x91ee24u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ffeab: mov ecx, esi */ r_ecx = r_esi;
    /* 004ffead: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x4ffeb2u); f_00829d68();
    /* 004ffeb2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ffeb4: call 0x82b374 */ r_esp -= 4; W32(r_esp, 0x4ffeb9u); f_0082b374();
    /* 004ffeb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ffeba: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004ffebe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ffec1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffec2: mov ecx, edi */ r_ecx = r_edi;
    /* 004ffec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ffec5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ffec6: call 0x4ffcf8 */ r_esp -= 4; W32(r_esp, 0x4ffecbu); f_004ffcf8();
    /* 004ffecb: call 0x82b2e8 */ r_esp -= 4; W32(r_esp, 0x4ffed0u); f_0082b2e8();
    /* 004ffed0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ffed3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ffed4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ffed5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ffed6: ret 4 */ FN_RET(0x004ffdcc); r_esp += 8; return;
}

void f_004ffedc(void) /* sub_4FFEDC */
{
    FN_ENTER(0x004ffedc);
    /* 004ffedc: mov ecx, dword ptr [0xa72814] */ r_ecx = R32((u32)(0xa72814u));
    /* 004ffee2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ffee4: je 0x4fff01 */ if (fZ) goto L_004fff01;
L_004ffee6:; BB(0x004ffee6);
    /* 004ffee6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4ffeebu); f_00829de0();
    /* 004ffeeb: push dword ptr [0xa72814] */ { u32 v = R32((u32)(0xa72814u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ffef1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4ffef6u); f_0082e960();
    /* 004ffef6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ffef7: mov dword ptr [0xa72814], 0 */ W32((u32)(0xa72814u), 0x0u);
L_004fff01:; BB(0x004fff01);
    /* 004fff01: ret  */ FN_RET(0x004ffedc); r_esp += 4; return;
}

void f_004fff04(void)
{
    FN_ENTER(0x004fff04);
    /* 004fff04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fff05: mov ebp, esp */ r_ebp = r_esp;
    /* 004fff07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fff09: push 0x8d34b8 */ { u32 v = 0x8d34b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fff0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fff14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fff15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fff1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fff1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fff22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004fff25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004fff28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004fff2b: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 004fff30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fff37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fff3cu); f_005caba4();
    /* 004fff3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fff3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fff40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fff42: je 0x4fff7b */ if (fZ) goto L_004fff7b;
L_004fff44:; BB(0x004fff44);
    /* 004fff44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004fff4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fff52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fff55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fff5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fff5e: call 0x4fff80 */ r_esp -= 4; W32(r_esp, 0x4fff63u); f_004fff80();
    /* 004fff63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fff66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004fff6d:; BB(0x004fff6d);
    /* 004fff6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fff70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fff77: mov esp, ebp */ r_esp = r_ebp;
    /* 004fff79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fff7a: ret  */ FN_RET(0x004fff04); r_esp += 4; return;
L_004fff7b:; BB(0x004fff7b);
    /* 004fff7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fff7d: jmp 0x4fff6d */ goto L_004fff6d;
}

void f_004fff65(void)
{
    FN_ENTER(0x004fff65);
    goto L_004fff65;
L_004fff2e:; BB(0x004fff2e);
    /* 004fff2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004fff30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fff37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4fff3cu); f_005caba4();
    /* 004fff3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fff3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fff40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fff42: je 0x4fff7b */ if (fZ) goto L_004fff7b;
L_004fff44:; BB(0x004fff44);
    /* 004fff44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004fff4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fff52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fff55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fff5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fff5e: call 0x4fff80 */ r_esp -= 4; W32(r_esp, 0x4fff63u); f_004fff80();
    /* 004fff63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004fff65:; BB(0x004fff65);
    /* 004fff65: loopne 0x4fff2e */ r_ecx--; if (r_ecx && !fZ) goto L_004fff2e;
    /* 004fff66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004fff67: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fff68: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 004fff6a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004fff6c: add byte ptr [ebx - 0x769b0bb3], cl */ { u32 ad = (u32)(r_ebx+0x8964f44du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_004fff6d:; BB(0x004fff6d);
    /* 004fff6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fff70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fff72: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fff77: mov esp, ebp */ r_esp = r_ebp;
    /* 004fff79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fff7a: ret  */ FN_RET(0x004fff65); r_esp += 4; return;
L_004fff7b:; BB(0x004fff7b);
    /* 004fff7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fff7d: jmp 0x4fff6d */ goto L_004fff6d;
}

void f_004fff80(void) /* sub_4FFF80 */
{
    FN_ENTER(0x004fff80);
    /* 004fff80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fff81: mov ebp, esp */ r_ebp = r_esp;
    /* 004fff83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fff85: push 0x8d34d4 */ { u32 v = 0x8d34d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fff8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fff90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fff91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004fff98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fff9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004fff9e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004fffa1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004fffa4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004fffa7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fffaa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fffad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004fffb0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fffb3: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x4fffb8u); f_007ba278();
    /* 004fffb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fffbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fffc2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fffc5: mov dword ptr [ecx], 0xafe490 */ W32((u32)(r_ecx), 0xafe490u);
    /* 004fffcb: mov eax, dword ptr [0x9b9364] */ r_eax = R32((u32)(0x9b9364u));
    /* 004fffd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fffd1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004fffd4: call dword ptr [0xafe4a4] */ { u32 t = R32((u32)(0xafe4a4u)); r_esp -= 4; W32(r_esp, 0x4fffdau); call_ind(t); }
    /* 004fffda: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fffdd: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 004fffe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fffea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ffff1: mov esp, ebp */ r_esp = r_ebp;
    /* 004ffff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ffff4: ret 8 */ FN_RET(0x004fff80); r_esp += 12; return;
}

void f_004ffff8(void) /* sub_4FFFF8 */
{
    FN_ENTER(0x004ffff8);
    /* 004ffff8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ffff9: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ffffc: mov esi, ecx */ r_esi = r_ecx;
    /* 004ffffe: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 00500004: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00500007: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 0050000d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050000f: jle 0x500016 */ if ((fZ||fS!=fO)) goto L_00500016;
L_00500011:; BB(0x00500011);
    /* 00500011: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500014: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00500015: ret  */ FN_RET(0x004ffff8); r_esp += 4; return;
L_00500016:; BB(0x00500016);
    /* 00500016: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50001bu); f_008587a5();
    /* 0050001b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050001e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00500021: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500027: fmul dword ptr [0x91ee50] */ ST(0) = ST(0) * R_F32((u32)(0x91ee50u));
    /* 0050002d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050002f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00500033: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500038: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050003d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00500041: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500045: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500049: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050004d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x004ffff8); r_esp += 4; return;
}

