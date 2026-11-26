#include "protos.h"

void f_006ae029(void)
{
    FN_ENTER(0x006ae029);
    /* 006ae029: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae02f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae034u); f_0068d5a8();
    /* 006ae034: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae037: je 0x6ae040 */ if (fZ) goto L_006ae040;
L_006ae039:; BB(0x006ae039);
    /* 006ae039: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae03b: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6ae040u); f_0068cda4();
L_006ae040:; BB(0x006ae040);
    /* 006ae040: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae043: add dword ptr [ecx + 0x3c], -1 */ { u32 ad = (u32)(r_ecx+0x3cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006ae047: call 0x6ae9f4 */ r_esp -= 4; W32(r_esp, 0x6ae04cu); f_006ae9f4();
    /* 006ae04c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae04e: je 0x6ae37b */ if (fZ) goto L_006ae37b;
L_006ae054:; BB(0x006ae054);
    /* 006ae054: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae057: call 0x6aea24 */ r_esp -= 4; W32(r_esp, 0x6ae05cu); f_006aea24();
    /* 006ae05c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ae061: mov word ptr [0xa94af4], ax */ W16((u32)(0xa94af4u), (u16)r_eax);
    /* 006ae067: mov word ptr [0xa94afc], ax */ W16((u32)(0xa94afcu), (u16)r_eax);
    /* 006ae06d: mov word ptr [0xa94b04], ax */ W16((u32)(0xa94b04u), (u16)r_eax);
    /* 006ae073: mov word ptr [0xa94b0c], ax */ W16((u32)(0xa94b0cu), (u16)r_eax);
    /* 006ae079: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ae07b: mov word ptr [0xa94af6], dx */ W16((u32)(0xa94af6u), (u16)r_edx);
    /* 006ae082: mov dword ptr [0xa94af8], edx */ W32((u32)(0xa94af8u), r_edx);
    /* 006ae088: mov word ptr [0xa94afe], dx */ W16((u32)(0xa94afeu), (u16)r_edx);
    /* 006ae08f: mov dword ptr [0xa94b00], edx */ W32((u32)(0xa94b00u), r_edx);
    /* 006ae095: mov word ptr [0xa94b06], dx */ W16((u32)(0xa94b06u), (u16)r_edx);
    /* 006ae09c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ae09e: mov dword ptr [0xa94b08], edx */ W32((u32)(0xa94b08u), r_edx);
    /* 006ae0a4: mov word ptr [0xa94b0e], dx */ W16((u32)(0xa94b0eu), (u16)r_edx);
    /* 006ae0ab: mov dword ptr [0xa94b10], edx */ W32((u32)(0xa94b10u), r_edx);
    /* 006ae0b1: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006ae0b6: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6ae0bbu); f_006a8f2c();
    /* 006ae0bb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ae0be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae0c1: je 0x6ae788 */ if (fZ) goto L_006ae788;
L_006ae0c7:; BB(0x006ae0c7);
    /* 006ae0c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006ae0c9:; BB(0x006ae0c9);
    /* 006ae0c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ae0ca: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae0cfu); f_0068d5a8();
    /* 006ae0cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae0d2: je 0x6ae0f0 */ if (fZ) goto L_006ae0f0;
L_006ae0d4:; BB(0x006ae0d4);
    /* 006ae0d4: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ae0d8: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006ae0e0: mov eax, dword ptr [eax + 0x898] */ r_eax = R32((u32)(r_eax+0x898u));
    /* 006ae0e6: mov dword ptr [ebx*8 + 0xa94af8], eax */ W32((u32)(r_ebx*8+0xa94af8u), r_eax);
    /* 006ae0ed: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006ae0f0:; BB(0x006ae0f0);
    /* 006ae0f0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ae0f3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae0f6: jl 0x6ae0c9 */ if ((fS!=fO)) goto L_006ae0c9;
L_006ae0f8:; BB(0x006ae0f8);
    /* 006ae0f8: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae0fb: jle 0x6ae209 */ if ((fZ||fS!=fO)) goto L_006ae209;
L_006ae101:; BB(0x006ae101);
    /* 006ae101: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ae103: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 006ae106: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ae109: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae10b: jle 0x6ae1ca */ if ((fZ||fS!=fO)) goto L_006ae1ca;
L_006ae111:; BB(0x006ae111);
    /* 006ae111: movzx eax, word ptr [esi*8 + 0xa94af4] */ r_eax = (u32)R16((u32)(r_esi*8+0xa94af4u));
    /* 006ae119: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae11e: je 0x6ae73f */ if (fZ) goto L_006ae73f;
L_006ae124:; BB(0x006ae124);
    /* 006ae124: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006ae127: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ae12a: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae12c: jge 0x6ae1bc */ if ((fS==fO)) goto L_006ae1bc;
L_006ae132:; BB(0x006ae132);
    /* 006ae132: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006ae135: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006ae138: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae13a: movzx eax, word ptr [eax + 0xa94af4] */ r_eax = (u32)R16((u32)(r_eax+0xa94af4u));
    /* 006ae141: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae146: je 0x6ae1b1 */ if (fZ) goto L_006ae1b1;
L_006ae148:; BB(0x006ae148);
    /* 006ae148: mov edi, dword ptr [esi*8 + 0xa94af8] */ r_edi = R32((u32)(r_esi*8+0xa94af8u));
    /* 006ae14f: cmp edi, dword ptr [edx*4 + 0xa94af8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx*4+0xa94af8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae156: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ae159: jge 0x6ae1b1 */ if ((fS==fO)) goto L_006ae1b1;
L_006ae15b:; BB(0x006ae15b);
    /* 006ae15b: movzx edi, word ptr [esi*8 + 0xa94af6] */ r_edi = (u32)R16((u32)(r_esi*8+0xa94af6u));
    /* 006ae163: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ae166: movzx ebx, word ptr [esi*8 + 0xa94af4] */ r_ebx = (u32)R16((u32)(r_esi*8+0xa94af4u));
    /* 006ae16e: mov word ptr [esi*8 + 0xa94af4], ax */ W16((u32)(r_esi*8+0xa94af4u), (u16)r_eax);
    /* 006ae176: movzx eax, word ptr [edx*4 + 0xa94af6] */ r_eax = (u32)R16((u32)(r_edx*4+0xa94af6u));
    /* 006ae17e: mov word ptr [esi*8 + 0xa94af6], ax */ W16((u32)(r_esi*8+0xa94af6u), (u16)r_eax);
    /* 006ae186: mov eax, dword ptr [ecx*8 + 0xa94af8] */ r_eax = R32((u32)(r_ecx*8+0xa94af8u));
    /* 006ae18d: mov dword ptr [esi*8 + 0xa94af8], eax */ W32((u32)(r_esi*8+0xa94af8u), r_eax);
    /* 006ae194: mov word ptr [ecx*8 + 0xa94af4], bx */ W16((u32)(r_ecx*8+0xa94af4u), (u16)r_ebx);
    /* 006ae19c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ae19f: mov word ptr [edx*4 + 0xa94af6], di */ W16((u32)(r_edx*4+0xa94af6u), (u16)r_edi);
    /* 006ae1a7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ae1aa: mov dword ptr [ecx*8 + 0xa94af8], edx */ W32((u32)(r_ecx*8+0xa94af8u), r_edx);
L_006ae1b1:; BB(0x006ae1b1);
    /* 006ae1b1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae1b4: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae1b6: jl 0x6ae132 */ if ((fS!=fO)) goto L_006ae132;
L_006ae1bc:; BB(0x006ae1bc);
    /* 006ae1bc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ae1bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ae1c2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae1c4: jl 0x6ae111 */ if ((fS!=fO)) goto L_006ae111;
L_006ae1ca:; BB(0x006ae1ca);
    /* 006ae1ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ae1cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae1ce: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae1d0: jle 0x6ae209 */ if ((fZ||fS!=fO)) goto L_006ae209;
L_006ae1d2:; BB(0x006ae1d2);
    /* 006ae1d2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ae1d5: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006ae1d8: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006ae1db: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ae1dd: mov word ptr [esi + 0xa94af6], dx */ W16((u32)(r_esi+0xa94af6u), (u16)r_edx);
    /* 006ae1e4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae1e6: jge 0x6ae202 */ if ((fS==fO)) goto L_006ae202;
L_006ae1e8:; BB(0x006ae1e8);
    /* 006ae1e8: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006ae1eb: mov edi, dword ptr [esi*4 + 0xa94af8] */ r_edi = R32((u32)(r_esi*4+0xa94af8u));
    /* 006ae1f2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae1f5: cmp edi, dword ptr [eax*4 + 0xa94b00] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*4+0xa94b00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae1fc: je 0x6ae205 */ if (fZ) goto L_006ae205;
L_006ae1fe:; BB(0x006ae1fe);
    /* 006ae1fe: mov edx, ecx */ r_edx = r_ecx;
    /* 006ae200: jmp 0x6ae205 */ goto L_006ae205;
L_006ae202:; BB(0x006ae202);
    /* 006ae202: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006ae205:; BB(0x006ae205);
    /* 006ae205: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae207: jl 0x6ae1d2 */ if ((fS!=fO)) goto L_006ae1d2;
L_006ae209:; BB(0x006ae209);
    /* 006ae209: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006ae20e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006ae210:; BB(0x006ae210);
    /* 006ae210: movzx eax, word ptr [esi*8 + 0xa94af4] */ r_eax = (u32)R16((u32)(r_esi*8+0xa94af4u));
    /* 006ae218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae219: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae21eu); f_0068d5a8();
    /* 006ae21e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae21f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae221: je 0x6ae233 */ if (fZ) goto L_006ae233;
L_006ae223:; BB(0x006ae223);
    /* 006ae223: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ae227: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae22d: je 0x6ae74a */ if (fZ) goto L_006ae74a;
L_006ae233:; BB(0x006ae233);
    /* 006ae233: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ae236: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae239: jl 0x6ae210 */ if ((fS!=fO)) goto L_006ae210;
L_006ae23b:; BB(0x006ae23b);
    /* 006ae23b: mov esi, 1 */ r_esi = 0x1u;
    /* 006ae240: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006ae242:; BB(0x006ae242);
    /* 006ae242: movzx eax, word ptr [edi*8 + 0xa94af4] */ r_eax = (u32)R16((u32)(r_edi*8+0xa94af4u));
    /* 006ae24a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae24b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae250u); f_0068d5a8();
    /* 006ae250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae253: je 0x6ae265 */ if (fZ) goto L_006ae265;
L_006ae255:; BB(0x006ae255);
    /* 006ae255: movsx eax, word ptr [edi*8 + 0xa94af6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi*8+0xa94af6u));
    /* 006ae25d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae25f: jne 0x6ae781 */ if (!fZ) goto L_006ae781;
L_006ae265:; BB(0x006ae265);
    /* 006ae265: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ae268: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae26b: jl 0x6ae242 */ if ((fS!=fO)) goto L_006ae242;
L_006ae26d:; BB(0x006ae26d);
    /* 006ae26d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae26f: jne 0x6ae301 */ if (!fZ) goto L_006ae301;
L_006ae275:; BB(0x006ae275);
    /* 006ae275: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae277: je 0x6ae757 */ if (fZ) goto L_006ae757;
L_006ae27d:; BB(0x006ae27d);
    /* 006ae27d: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae280: je 0x6ae2da */ if (fZ) goto L_006ae2da;
L_006ae282:; BB(0x006ae282);
    /* 006ae282: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae285: jne 0x6ae2ae */ if (!fZ) goto L_006ae2ae;
L_006ae287:; BB(0x006ae287);
    /* 006ae287: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006ae28c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006ae291: movzx ecx, word ptr [eax + 0x27c4] */ r_ecx = (u32)R16((u32)(r_eax+0x27c4u));
    /* 006ae298: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae29b: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae2a1: jl 0x6ae2a5 */ if ((fS!=fO)) goto L_006ae2a5;
L_006ae2a3:; BB(0x006ae2a3);
    /* 006ae2a3: mov ecx, edx */ r_ecx = r_edx;
L_006ae2a5:; BB(0x006ae2a5);
    /* 006ae2a5: mov word ptr [eax + 0x27c4], cx */ W16((u32)(r_eax+0x27c4u), (u16)r_ecx);
    /* 006ae2ac: jmp 0x6ae306 */ goto L_006ae306;
L_006ae2ae:; BB(0x006ae2ae);
    /* 006ae2ae: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006ae2b3: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae2b6: jne 0x6ae306 */ if (!fZ) goto L_006ae306;
L_006ae2b8:; BB(0x006ae2b8);
    /* 006ae2b8: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006ae2bd: movzx ecx, word ptr [eax + 0x27c6] */ r_ecx = (u32)R16((u32)(r_eax+0x27c6u));
    /* 006ae2c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae2c7: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae2cd: jl 0x6ae2d1 */ if ((fS!=fO)) goto L_006ae2d1;
L_006ae2cf:; BB(0x006ae2cf);
    /* 006ae2cf: mov ecx, edx */ r_ecx = r_edx;
L_006ae2d1:; BB(0x006ae2d1);
    /* 006ae2d1: mov word ptr [eax + 0x27c6], cx */ W16((u32)(r_eax+0x27c6u), (u16)r_ecx);
    /* 006ae2d8: jmp 0x6ae306 */ goto L_006ae306;
L_006ae2da:; BB(0x006ae2da);
    /* 006ae2da: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006ae2df: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006ae2e4: movzx ecx, word ptr [eax + 0x27c2] */ r_ecx = (u32)R16((u32)(r_eax+0x27c2u));
    /* 006ae2eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae2ee: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae2f4: jl 0x6ae2f8 */ if ((fS!=fO)) goto L_006ae2f8;
L_006ae2f6:; BB(0x006ae2f6);
    /* 006ae2f6: mov ecx, edx */ r_ecx = r_edx;
L_006ae2f8:; BB(0x006ae2f8);
    /* 006ae2f8: mov word ptr [eax + 0x27c2], cx */ W16((u32)(r_eax+0x27c2u), (u16)r_ecx);
    /* 006ae2ff: jmp 0x6ae306 */ goto L_006ae306;
L_006ae301:; BB(0x006ae301);
    /* 006ae301: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
L_006ae306:; BB(0x006ae306);
    /* 006ae306: movzx ecx, word ptr [eax + 0x27c8] */ r_ecx = (u32)R16((u32)(r_eax+0x27c8u));
    /* 006ae30d: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae310: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ae312: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae314: jg 0x6ae318 */ if ((!fZ&&fS==fO)) goto L_006ae318;
L_006ae316:; BB(0x006ae316);
    /* 006ae316: mov ecx, edx */ r_ecx = r_edx;
L_006ae318:; BB(0x006ae318);
    /* 006ae318: mov word ptr [eax + 0x27c8], cx */ W16((u32)(r_eax+0x27c8u), (u16)r_ecx);
    /* 006ae31f: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x6ae324u); f_006a758c();
    /* 006ae324: movzx eax, word ptr [0xa94af4] */ r_eax = (u32)R16((u32)(0xa94af4u));
    /* 006ae32b: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae331: jne 0x6ae34e */ if (!fZ) goto L_006ae34e;
L_006ae333:; BB(0x006ae333);
    /* 006ae333: push 0x969568 */ { u32 v = 0x969568u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae338: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6ae33du); f_00814f0c();
    /* 006ae33d: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae342: push -0x32 */ { u32 v = 0xffffffceu; r_esp -= 4; W32(r_esp, v); }
    /* 006ae344: call 0x6ad3d0 */ r_esp -= 4; W32(r_esp, 0x6ae349u); f_006ad3d0();
    /* 006ae349: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae34c: jmp 0x6ae367 */ goto L_006ae367;
L_006ae34e:; BB(0x006ae34e);
    /* 006ae34e: push 0x909948 */ { u32 v = 0x909948u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae353: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6ae358u); f_00814f0c();
    /* 006ae358: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae35d: push -0x32 */ { u32 v = 0xffffffceu; r_esp -= 4; W32(r_esp, v); }
    /* 006ae35f: call 0x6ad3d0 */ r_esp -= 4; W32(r_esp, 0x6ae364u); f_006ad3d0();
    /* 006ae364: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ae367:; BB(0x006ae367);
    /* 006ae367: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae36a: mov dword ptr [edx + 0x20], 4 */ W32((u32)(r_edx+0x20u), 0x4u);
    /* 006ae371: mov eax, 4 */ r_eax = 0x4u;
    /* 006ae376: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae37b:; BB(0x006ae37b);
    /* 006ae37b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae37e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006ae381: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae383: jle 0x6ae054 */ if ((fZ||fS!=fO)) goto L_006ae054;
L_006ae389:; BB(0x006ae389);
    /* 006ae389: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae38c: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae029); r_esp += 4; return;
L_006ae73f:; BB(0x006ae73f);
    /* 006ae73f: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 006ae742: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ae745: jmp 0x6ae1bc */ goto L_006ae1bc;
L_006ae74a:; BB(0x006ae74a);
    /* 006ae74a: movsx ebx, word ptr [esi*8 + 0xa94af6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi*8+0xa94af6u));
    /* 006ae752: jmp 0x6ae23b */ goto L_006ae23b;
L_006ae757:; BB(0x006ae757);
    /* 006ae757: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006ae75c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006ae761: movzx ecx, word ptr [eax + 0x27c0] */ r_ecx = (u32)R16((u32)(r_eax+0x27c0u));
    /* 006ae768: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae76b: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae771: jl 0x6ae775 */ if ((fS!=fO)) goto L_006ae775;
L_006ae773:; BB(0x006ae773);
    /* 006ae773: mov ecx, edx */ r_ecx = r_edx;
L_006ae775:; BB(0x006ae775);
    /* 006ae775: mov word ptr [eax + 0x27c0], cx */ W16((u32)(r_eax+0x27c0u), (u16)r_ecx);
    /* 006ae77c: jmp 0x6ae306 */ goto L_006ae306;
L_006ae781:; BB(0x006ae781);
    /* 006ae781: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ae783: jmp 0x6ae26d */ goto L_006ae26d;
L_006ae788:; BB(0x006ae788);
    /* 006ae788: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ae78a: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 006ae790: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006ae796: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006ae798:; BB(0x006ae798);
    /* 006ae798: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ae799: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae79eu); f_0068d5a8();
    /* 006ae79e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae79f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae7a1: je 0x6ae7c0 */ if (fZ) goto L_006ae7c0;
L_006ae7a3:; BB(0x006ae7a3);
    /* 006ae7a3: mov edx, dword ptr [eax + 0x900] */ r_edx = R32((u32)(r_eax+0x900u));
    /* 006ae7a9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae7ac: je 0x6ae80f */ if (fZ) goto L_006ae80f;
L_006ae7ae:; BB(0x006ae7ae);
    /* 006ae7ae: mov edx, 1 */ r_edx = 0x1u;
L_006ae7b3:; BB(0x006ae7b3);
    /* 006ae7b3: mov eax, dword ptr [eax + 0x898] */ r_eax = R32((u32)(r_eax+0x898u));
    /* 006ae7b9: add dword ptr [ebp + edx*4 - 0xc8], eax */ { u32 ad = (u32)(r_ebp+r_edx*4+0xffffff38u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006ae7c0:; BB(0x006ae7c0);
    /* 006ae7c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ae7c3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae7c6: jl 0x6ae798 */ if ((fS!=fO)) goto L_006ae798;
L_006ae7c8:; BB(0x006ae7c8);
    /* 006ae7c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006ae7ca:; BB(0x006ae7ca);
    /* 006ae7ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ae7cb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae7d0u); f_0068d5a8();
    /* 006ae7d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae7d3: je 0x6ae802 */ if (fZ) goto L_006ae802;
L_006ae7d5:; BB(0x006ae7d5);
    /* 006ae7d5: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ae7d9: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006ae7e1: mov eax, dword ptr [eax + 0x900] */ r_eax = R32((u32)(r_eax+0x900u));
    /* 006ae7e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae7ea: je 0x6ae813 */ if (fZ) goto L_006ae813;
L_006ae7ec:; BB(0x006ae7ec);
    /* 006ae7ec: mov eax, 1 */ r_eax = 0x1u;
L_006ae7f1:; BB(0x006ae7f1);
    /* 006ae7f1: mov eax, dword ptr [ebp + eax*4 - 0xc8] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffff38u));
    /* 006ae7f8: mov dword ptr [ebx*8 + 0xa94af8], eax */ W32((u32)(r_ebx*8+0xa94af8u), r_eax);
    /* 006ae7ff: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006ae802:; BB(0x006ae802);
    /* 006ae802: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ae805: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae808: jl 0x6ae7ca */ if ((fS!=fO)) goto L_006ae7ca;
L_006ae80a:; BB(0x006ae80a);
    /* 006ae80a: jmp 0x6ae101 */ goto L_006ae101;
L_006ae80f:; BB(0x006ae80f);
    /* 006ae80f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ae811: jmp 0x6ae7b3 */ goto L_006ae7b3;
L_006ae813:; BB(0x006ae813);
    /* 006ae813: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ae815: jmp 0x6ae7f1 */ goto L_006ae7f1;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae391(void)
{
    FN_ENTER(0x006ae391);
    /* 006ae391: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae397: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae39cu); f_0068d5a8();
    /* 006ae39c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae39d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae39f: je 0x6ae3a8 */ if (fZ) goto L_006ae3a8;
L_006ae3a1:; BB(0x006ae3a1);
    /* 006ae3a1: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae3a3: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6ae3a8u); f_0068cda4();
L_006ae3a8:; BB(0x006ae3a8);
    /* 006ae3a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae3ab: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006ae3ae: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ae3b1: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006ae3b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae3b6: jle 0x6ae817 */ if ((fZ||fS!=fO)) goto L_006ae817;
L_006ae3bc:; BB(0x006ae3bc);
    /* 006ae3bc: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae3bf: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae391); r_esp += 4; return;
L_006ae817:; BB(0x006ae817);
    /* 006ae817: mov edx, eax */ r_edx = r_eax;
    /* 006ae819: mov dword ptr [edx + 0x3c], 0x1c2 */ W32((u32)(r_edx+0x3cu), 0x1c2u);
    /* 006ae820: mov eax, 3 */ r_eax = 0x3u;
    /* 006ae825: mov dword ptr [edx + 0x20], 3 */ W32((u32)(r_edx+0x20u), 0x3u);
    /* 006ae82c: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae3c4(void)
{
    FN_ENTER(0x006ae3c4);
    /* 006ae3c4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae3ca: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae3cfu); f_0068d5a8();
    /* 006ae3cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae3d2: je 0x6ae3db */ if (fZ) goto L_006ae3db;
L_006ae3d4:; BB(0x006ae3d4);
    /* 006ae3d4: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae3d6: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6ae3dbu); f_0068cda4();
L_006ae3db:; BB(0x006ae3db);
    /* 006ae3db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae3de: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006ae3e1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ae3e4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006ae3e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ae3e9: jle 0x6ae831 */ if ((fZ||fS!=fO)) goto L_006ae831;
L_006ae3ef:; BB(0x006ae3ef);
    /* 006ae3ef: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae3f2: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae3c4); r_esp += 4; return;
L_006ae831:; BB(0x006ae831);
    /* 006ae831: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae833: call 0x6ae910 */ r_esp -= 4; W32(r_esp, 0x6ae838u); f_006ae910();
    /* 006ae838: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae83b: mov dword ptr [edx + 0x2c], 0x5a */ W32((u32)(r_edx+0x2cu), 0x5au);
    /* 006ae842: mov eax, 2 */ r_eax = 0x2u;
    /* 006ae847: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 006ae84e: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae3f7(void)
{
    FN_ENTER(0x006ae3f7);
    /* 006ae3f7: call 0x6ae8f8 */ r_esp -= 4; W32(r_esp, 0x6ae3fcu); f_006ae8f8();
    /* 006ae3fc: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006ae403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae404: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae409u); f_0068d5a8();
    /* 006ae409: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae40a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae40c: je 0x6ae417 */ if (fZ) goto L_006ae417;
L_006ae40e:; BB(0x006ae40e);
    /* 006ae40e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ae410: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae412: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6ae417u); f_006854a8();
L_006ae417:; BB(0x006ae417);
    /* 006ae417: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae41d: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6ae422u); f_00718078();
    /* 006ae422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae423: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6ae428u); f_00717d68();
    /* 006ae428: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae42e: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ae433u); f_00717f08();
    /* 006ae433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae439: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae43eu); f_0068d5a8();
    /* 006ae43e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae443: je 0x6ae45b */ if (fZ) goto L_006ae45b;
L_006ae445:; BB(0x006ae445);
    /* 006ae445: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006ae448: mov dword ptr [eax + 0x720], 0xe10 */ W32((u32)(r_eax+0x720u), 0xe10u);
    /* 006ae452: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ae458: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_006ae45b:; BB(0x006ae45b);
    /* 006ae45b: call 0x62f7e4 */ r_esp -= 4; W32(r_esp, 0x6ae460u); f_0062f7e4();
    /* 006ae460: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae466: call 0x80dda4 */ r_esp -= 4; W32(r_esp, 0x6ae46bu); f_0080dda4();
    /* 006ae46b: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae471: call 0x6bc9d8 */ r_esp -= 4; W32(r_esp, 0x6ae476u); f_006bc9d8();
    /* 006ae476: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae479: call 0x811a8c */ r_esp -= 4; W32(r_esp, 0x6ae47eu); f_00811a8c();
    /* 006ae47e: call 0x6b09e4 */ r_esp -= 4; W32(r_esp, 0x6ae483u); f_006b09e4();
    /* 006ae483: call 0x811ff8 */ r_esp -= 4; W32(r_esp, 0x6ae488u); f_00811ff8();
    /* 006ae488: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae48b: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 006ae492: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006ae494:; BB(0x006ae494);
    /* 006ae494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ae495: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae49au); f_0068d5a8();
    /* 006ae49a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae49b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae49d: je 0x6ae4ab */ if (fZ) goto L_006ae4ab;
L_006ae49f:; BB(0x006ae49f);
    /* 006ae49f: add eax, 0x89c */ {  u32 a = r_eax; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae4a4: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae4a6: call 0x6989c0 */ r_esp -= 4; W32(r_esp, 0x6ae4abu); f_006989c0();
L_006ae4ab:; BB(0x006ae4ab);
    /* 006ae4ab: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ae4ae: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae4b1: jl 0x6ae494 */ if ((fS!=fO)) goto L_006ae494;
L_006ae4b3:; BB(0x006ae4b3);
    /* 006ae4b3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae4b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ae4b7: mov dword ptr [0xa94b1c], eax */ W32((u32)(0xa94b1cu), r_eax);
    /* 006ae4bc: mov dword ptr [0xa94b18], eax */ W32((u32)(0xa94b18u), r_eax);
    /* 006ae4c1: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 006ae4c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ae4ccu); f_005caba4();
    /* 006ae4cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae4cd: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 006ae4d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae4d5: je 0x6ae4ff */ if (fZ) goto L_006ae4ff;
L_006ae4d7:; BB(0x006ae4d7);
    /* 006ae4d7: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 006ae4e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ae4e8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae4eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae4ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ae4ee: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae4f0: call 0x784370 */ r_esp -= 4; W32(r_esp, 0x6ae4f5u); f_00784370();
    /* 006ae4f5: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_006ae4ff:; BB(0x006ae4ff);
    /* 006ae4ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ae506: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae509: mov dword ptr [eax + 0x2c], 0x78 */ W32((u32)(r_eax+0x2cu), 0x78u);
    /* 006ae510: call 0x717e04 */ r_esp -= 4; W32(r_esp, 0x6ae515u); f_00717e04();
    /* 006ae515: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae51b: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ae520u); f_00717f08();
    /* 006ae520: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae526: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae529: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 006ae530: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae535u); f_0068d5a8();
    /* 006ae535: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae53a: je 0x6ae54e */ if (fZ) goto L_006ae54e;
L_006ae53c:; BB(0x006ae53c);
    /* 006ae53c: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae53e: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6ae543u); f_0068cda4();
    /* 006ae543: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae546: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae549: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae54e:; BB(0x006ae54e);
    /* 006ae54e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae551: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae554: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae3f7); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae559(void)
{
    FN_ENTER(0x006ae559);
    /* 006ae559: mov eax, ecx */ r_eax = r_ecx;
    /* 006ae55b: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae55e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae560: je 0x6ae571 */ if (fZ) goto L_006ae571;
L_006ae562:; BB(0x006ae562);
    /* 006ae562: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae567u); f_007127b0();
    /* 006ae567: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae56a: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae571:; BB(0x006ae571);
    /* 006ae571: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae574: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae576: je 0x6ae58f */ if (fZ) goto L_006ae58f;
L_006ae578:; BB(0x006ae578);
    /* 006ae578: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae57du); f_007127b0();
    /* 006ae57d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae580: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae587: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae589: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae58eu); f_00791748();
    /* 006ae58e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae58f:; BB(0x006ae58f);
    /* 006ae58f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae592: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006ae595: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae597: je 0x6ae5b0 */ if (fZ) goto L_006ae5b0;
L_006ae599:; BB(0x006ae599);
    /* 006ae599: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae59eu); f_007127b0();
    /* 006ae59e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae5a1: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 006ae5a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae5aa: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae5afu); f_00791748();
    /* 006ae5af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae5b0:; BB(0x006ae5b0);
    /* 006ae5b0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae5b6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae5bbu); f_0068d5a8();
    /* 006ae5bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae5bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5be: je 0x6ae5cc */ if (fZ) goto L_006ae5cc;
L_006ae5c0:; BB(0x006ae5c0);
    /* 006ae5c0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006ae5c3: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006ae5c9: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_006ae5cc:; BB(0x006ae5cc);
    /* 006ae5cc: call 0x717e04 */ r_esp -= 4; W32(r_esp, 0x6ae5d1u); f_00717e04();
    /* 006ae5d1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae5d7: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ae5dcu); f_00717f08();
    /* 006ae5dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae5dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae5e0: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae559); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae5e3(void)
{
    FN_ENTER(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ae5e3); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ae8f8(void) /* sub_6AE8F8 */
{
    FN_ENTER(0x006ae8f8);
    /* 006ae8f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ae8fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ae8fd: call 0x6ae910 */ r_esp -= 4; W32(r_esp, 0x6ae902u); f_006ae910();
    /* 006ae902: mov dword ptr [ebp + 0x468], 1 */ W32((u32)(r_ebp+0x468u), 0x1u);
    /* 006ae90c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae90d: ret  */ FN_RET(0x006ae8f8); r_esp += 4; return;
}

void f_006ae910(void) /* sub_6AE910 */
{
    FN_ENTER(0x006ae910);
    /* 006ae910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ae911: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ae912: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ae915: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ae917: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae91d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae922u); f_0068d5a8();
    /* 006ae922: mov ebp, eax */ r_ebp = r_eax;
    /* 006ae924: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae927: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae929: je 0x6ae9b5 */ if (fZ) goto L_006ae9b5;
L_006ae92f:; BB(0x006ae92f);
    /* 006ae92f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ae931: call 0x6ae9cc */ r_esp -= 4; W32(r_esp, 0x6ae936u); f_006ae9cc();
    /* 006ae936: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006ae93a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006ae93d: mov byte ptr [esp], 0x7d */ W8((u32)(r_esp), 0x7du);
    /* 006ae941: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 006ae946: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 006ae94b: mov byte ptr [esp + 7], bl */ W8((u32)(r_esp+0x7u), (u8)r_ebx);
    /* 006ae94f: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae955: mov byte ptr [esp + 6], bl */ W8((u32)(r_esp+0x6u), (u8)r_ebx);
    /* 006ae959: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006ae95d: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006ae961: mov byte ptr [esp + 4], 3 */ W8((u32)(r_esp+0x4u), 0x3u);
    /* 006ae966: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006ae96b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ae96f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ae973: je 0x6ae99d */ if (fZ) goto L_006ae99d;
L_006ae975:; BB(0x006ae975);
    /* 006ae975: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006ae97a: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x6ae97fu); f_006a8efc();
    /* 006ae97f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ae982: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae985: jne 0x6ae98b */ if (!fZ) goto L_006ae98b;
L_006ae987:; BB(0x006ae987);
    /* 006ae987: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ae989: jmp 0x6ae99d */ goto L_006ae99d;
L_006ae98b:; BB(0x006ae98b);
    /* 006ae98b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006ae990: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x6ae995u); f_006a8efc();
    /* 006ae995: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ae998: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae99b: je 0x6ae9bb */ if (fZ) goto L_006ae9bb;
L_006ae99d:; BB(0x006ae99d);
    /* 006ae99d: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006ae9a2: mov dword ptr [eax*4 + 0xa94aa0], ebx */ W32((u32)(r_eax*4+0xa94aa0u), r_ebx);
    /* 006ae9a9: mov byte ptr [esp + 7], bl */ W8((u32)(r_esp+0x7u), (u8)r_ebx);
    /* 006ae9ad: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ae9b0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6ae9b5u); f_008003e0();
L_006ae9b5:; BB(0x006ae9b5);
    /* 006ae9b5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ae9b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ae9b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae9ba: ret  */ FN_RET(0x006ae910); r_esp += 4; return;
L_006ae9bb:; BB(0x006ae9bb);
    /* 006ae9bb: mov eax, dword ptr [ebp + 0x82c] */ r_eax = R32((u32)(r_ebp+0x82cu));
    /* 006ae9c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae9c3: jne 0x6ae99d */ if (!fZ) goto L_006ae99d;
L_006ae9c5:; BB(0x006ae9c5);
    /* 006ae9c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ae9c7: jmp 0x6ae99d */ goto L_006ae99d;
}

void f_006ae9cc(void) /* sub_6AE9CC */
{
    FN_ENTER(0x006ae9cc);
    /* 006ae9cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ae9cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae9d3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae9d8u); f_0068d5a8();
    /* 006ae9d8: mov esi, eax */ r_esi = r_eax;
    /* 006ae9da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae9dd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae9df: je 0x6ae9f0 */ if (fZ) goto L_006ae9f0;
L_006ae9e1:; BB(0x006ae9e1);
    /* 006ae9e1: mov ecx, esi */ r_ecx = r_esi;
    /* 006ae9e3: call 0x691600 */ r_esp -= 4; W32(r_esp, 0x6ae9e8u); f_00691600();
    /* 006ae9e8: mov dword ptr [esi + 0x898], eax */ W32((u32)(r_esi+0x898u), r_eax);
    /* 006ae9ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ae9ef: ret  */ FN_RET(0x006ae9cc); r_esp += 4; return;
L_006ae9f0:; BB(0x006ae9f0);
    /* 006ae9f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae9f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ae9f3: ret  */ FN_RET(0x006ae9cc); r_esp += 4; return;
}

void f_006ae9f4(void) /* sub_6AE9F4 */
{
    FN_ENTER(0x006ae9f4);
    /* 006ae9f4: mov eax, dword ptr [0xa94b38] */ r_eax = R32((u32)(0xa94b38u));
    /* 006ae9f9: cmp eax, dword ptr [0xaae168] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ae9ff: jl 0x6aea12 */ if ((fS!=fO)) goto L_006aea12;
L_006aea01:; BB(0x006aea01);
    /* 006aea01: mov dword ptr [ecx + 0x468], 2 */ W32((u32)(r_ecx+0x468u), 0x2u);
    /* 006aea0b: mov eax, 2 */ r_eax = 0x2u;
    /* 006aea10: jmp 0x6aea18 */ goto L_006aea18;
L_006aea12:; BB(0x006aea12);
    /* 006aea12: mov eax, dword ptr [ecx + 0x468] */ r_eax = R32((u32)(r_ecx+0x468u));
L_006aea18:; BB(0x006aea18);
    /* 006aea18: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aea1b: mov eax, 0 */ r_eax = 0x0u;
    /* 006aea20: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006aea23: ret  */ FN_RET(0x006ae9f4); r_esp += 4; return;
}

void f_006aea24(void) /* sub_6AEA24 */
{
    FN_ENTER(0x006aea24);
    /* 006aea24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aea26: mov dword ptr [0xa94b38], eax */ W32((u32)(0xa94b38u), r_eax);
    /* 006aea2b: mov dword ptr [ecx + 0x468], eax */ W32((u32)(r_ecx+0x468u), r_eax);
    /* 006aea31: ret  */ FN_RET(0x006aea24); r_esp += 4; return;
}

void f_006aea34(void) /* sub_6AEA34 */
{
    FN_ENTER(0x006aea34);
    /* 006aea34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aea35: mov ebp, esp */ r_ebp = r_esp;
    /* 006aea37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006aea39: push 0x8ebcf6 */ { u32 v = 0x8ebcf6u; r_esp -= 4; W32(r_esp, v); }
    /* 006aea3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006aea44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aea45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006aea4c: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aea52: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006aea55: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006aea58: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006aea5b: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006aea5e: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006aea61: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006aea64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aea66: je 0x6aea76 */ if (fZ) goto L_006aea76;
L_006aea68:; BB(0x006aea68);
    /* 006aea68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aea6b: jne 0x6af10d */ if (!fZ) goto L_006af10d;
L_006aea71:; BB(0x006aea71);
    /* 006aea71: jmp 0x6aec4d */ goto L_006aec4d;
L_006aea76:; BB(0x006aea76);
    /* 006aea76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006aea78: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6aea7du); f_0061cdb0();
    /* 006aea7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aea7e: call 0x83ddcc */ r_esp -= 4; W32(r_esp, 0x6aea83u); f_0083ddcc();
    /* 006aea83: call 0x83b408 */ r_esp -= 4; W32(r_esp, 0x6aea88u); f_0083b408();
    /* 006aea88: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aea8b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006aea8e: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006aea95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aea96: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aea9bu); f_0068d5a8();
    /* 006aea9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aea9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aea9e: je 0x6aeaa7 */ if (fZ) goto L_006aeaa7;
L_006aeaa0:; BB(0x006aeaa0);
    /* 006aeaa0: mov ecx, eax */ r_ecx = r_eax;
    /* 006aeaa2: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6aeaa7u); f_00685514();
L_006aeaa7:; BB(0x006aeaa7);
    /* 006aeaa7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aeaad: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x6aeab2u); f_00718048();
    /* 006aeab2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aeab3: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6aeab8u); f_00717d48();
    /* 006aeab8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aeabe: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6aeac3u); f_00717ed8();
    /* 006aeac3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aeac9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aeaceu); f_0068d5a8();
    /* 006aeace: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aead1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aead3: je 0x6aeae1 */ if (fZ) goto L_006aeae1;
L_006aead5:; BB(0x006aead5);
    /* 006aead5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006aead8: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aeade: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_006aeae1:; BB(0x006aeae1);
    /* 006aeae1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aeae4: call 0x6aea24 */ r_esp -= 4; W32(r_esp, 0x6aeae9u); f_006aea24();
    /* 006aeae9: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6aeaeeu); f_00807ac0();
    /* 006aeaee: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeaf1: je 0x6af26d */ if (fZ) goto L_006af26d;
L_006aeaf7:; BB(0x006aeaf7);
    /* 006aeaf7: mov eax, 0x96957c */ r_eax = 0x96957cu;
    /* 006aeafc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_006aeaff:; BB(0x006aeaff);
    /* 006aeaff: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 006aeb09: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006aeb0b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6aeb10u); f_005caba4();
    /* 006aeb10: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006aeb13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aeb16: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 006aeb1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeb1e: je 0x6aeb69 */ if (fZ) goto L_006aeb69;
L_006aeb20:; BB(0x006aeb20);
    /* 006aeb20: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 006aeb2a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006aeb31: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aeb34: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006aeb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aeb38: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6aeb3du); f_008193cc();
    /* 006aeb3d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006aeb40: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006aeb43: mov dword ptr [edx], 0xb3a800 */ W32((u32)(r_edx), 0xb3a800u);
    /* 006aeb49: mov dword ptr [edx + 0x1c], 0x2d */ W32((u32)(r_edx+0x1cu), 0x2du);
    /* 006aeb50: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006aeb52: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006aeb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aeb56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aeb57: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6aeb5cu); f_00858900();
    /* 006aeb5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aeb5f: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_006aeb69:; BB(0x006aeb69);
    /* 006aeb69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006aeb70: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aeb73: mov byte ptr [eax + 0x460], 1 */ W8((u32)(r_eax+0x460u), 0x1u);
    /* 006aeb7a: movsx edx, word ptr [0xa94ad8] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94ad8u));
    /* 006aeb81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeb83: jne 0x6aeb8c */ if (!fZ) goto L_006aeb8c;
L_006aeb85:; BB(0x006aeb85);
    /* 006aeb85: mov byte ptr [eax + 0x460], 0 */ W8((u32)(r_eax+0x460u), 0x0u);
L_006aeb8c:; BB(0x006aeb8c);
    /* 006aeb8c: mov byte ptr [eax + 0x461], 1 */ W8((u32)(r_eax+0x461u), 0x1u);
    /* 006aeb93: movsx edx, word ptr [0xa94ada] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94adau));
    /* 006aeb9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeb9c: jne 0x6aeba5 */ if (!fZ) goto L_006aeba5;
L_006aeb9e:; BB(0x006aeb9e);
    /* 006aeb9e: mov byte ptr [eax + 0x461], 0 */ W8((u32)(r_eax+0x461u), 0x0u);
L_006aeba5:; BB(0x006aeba5);
    /* 006aeba5: mov byte ptr [eax + 0x462], 1 */ W8((u32)(r_eax+0x462u), 0x1u);
    /* 006aebac: movsx edx, word ptr [0xa94adc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94adcu));
    /* 006aebb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aebb5: jne 0x6aebbe */ if (!fZ) goto L_006aebbe;
L_006aebb7:; BB(0x006aebb7);
    /* 006aebb7: mov byte ptr [eax + 0x462], 0 */ W8((u32)(r_eax+0x462u), 0x0u);
L_006aebbe:; BB(0x006aebbe);
    /* 006aebbe: mov byte ptr [eax + 0x463], 1 */ W8((u32)(r_eax+0x463u), 0x1u);
    /* 006aebc5: movsx edx, word ptr [0xa94ade] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94adeu));
    /* 006aebcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aebce: jne 0x6aebd7 */ if (!fZ) goto L_006aebd7;
L_006aebd0:; BB(0x006aebd0);
    /* 006aebd0: mov byte ptr [eax + 0x463], 0 */ W8((u32)(r_eax+0x463u), 0x0u);
L_006aebd7:; BB(0x006aebd7);
    /* 006aebd7: mov byte ptr [eax + 0x464], 1 */ W8((u32)(r_eax+0x464u), 0x1u);
    /* 006aebde: movsx edx, word ptr [0xa94ae0] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94ae0u));
    /* 006aebe5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aebe7: jne 0x6aebf0 */ if (!fZ) goto L_006aebf0;
L_006aebe9:; BB(0x006aebe9);
    /* 006aebe9: mov byte ptr [eax + 0x464], 0 */ W8((u32)(r_eax+0x464u), 0x0u);
L_006aebf0:; BB(0x006aebf0);
    /* 006aebf0: mov byte ptr [eax + 0x465], 1 */ W8((u32)(r_eax+0x465u), 0x1u);
    /* 006aebf7: movsx edx, word ptr [0xa94ae2] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94ae2u));
    /* 006aebfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aec00: jne 0x6aec09 */ if (!fZ) goto L_006aec09;
L_006aec02:; BB(0x006aec02);
    /* 006aec02: mov byte ptr [eax + 0x465], 0 */ W8((u32)(r_eax+0x465u), 0x0u);
L_006aec09:; BB(0x006aec09);
    /* 006aec09: mov byte ptr [eax + 0x466], 1 */ W8((u32)(r_eax+0x466u), 0x1u);
    /* 006aec10: movsx edx, word ptr [0xa94ae4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94ae4u));
    /* 006aec17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aec19: jne 0x6aec22 */ if (!fZ) goto L_006aec22;
L_006aec1b:; BB(0x006aec1b);
    /* 006aec1b: mov byte ptr [eax + 0x466], 0 */ W8((u32)(r_eax+0x466u), 0x0u);
L_006aec22:; BB(0x006aec22);
    /* 006aec22: mov byte ptr [eax + 0x467], 1 */ W8((u32)(r_eax+0x467u), 0x1u);
    /* 006aec29: movsx edx, word ptr [0xa94ae6] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa94ae6u));
    /* 006aec30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aec32: jne 0x6aec3b */ if (!fZ) goto L_006aec3b;
L_006aec34:; BB(0x006aec34);
    /* 006aec34: mov byte ptr [eax + 0x467], 0 */ W8((u32)(r_eax+0x467u), 0x0u);
L_006aec3b:; BB(0x006aec3b);
    /* 006aec3b: mov eax, dword ptr [0xa94ad4] */ r_eax = R32((u32)(0xa94ad4u));
    /* 006aec40: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aec43: mov dword ptr [edx + 0x20], 1 */ W32((u32)(r_edx+0x20u), 0x1u);
    /* 006aec4a: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_006aec4d:; BB(0x006aec4d);
    /* 006aec4d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006aec52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aec55: jle 0x6af0dd */ if ((fZ||fS!=fO)) goto L_006af0dd;
L_006aec5b:; BB(0x006aec5b);
    /* 006aec5b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aec60: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6aec65u); f_006a8f2c();
    /* 006aec65: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aec68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aec6b: jne 0x6aecc9 */ if (!fZ) goto L_006aecc9;
L_006aec6d:; BB(0x006aec6d);
    /* 006aec6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aec6f: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006aec75: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 006aec7b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006aec7d:; BB(0x006aec7d);
    /* 006aec7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aec7e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aec83u); f_0068d5a8();
    /* 006aec83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aec84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aec86: je 0x6aeca5 */ if (fZ) goto L_006aeca5;
L_006aec88:; BB(0x006aec88);
    /* 006aec88: mov edx, dword ptr [eax + 0x900] */ r_edx = R32((u32)(r_eax+0x900u));
    /* 006aec8e: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006aec91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006aec93: jl 0x6aeca5 */ if ((fS!=fO)) goto L_006aeca5;
L_006aec95:; BB(0x006aec95);
    /* 006aec95: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aec98: jge 0x6aeca5 */ if ((fS==fO)) goto L_006aeca5;
L_006aec9a:; BB(0x006aec9a);
    /* 006aec9a: mov dword ptr [ebp + edx*4 - 0xc8], 1 */ W32((u32)(r_ebp+r_edx*4+0xffffff38u), 0x1u);
L_006aeca5:; BB(0x006aeca5);
    /* 006aeca5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006aeca8: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aecab: jl 0x6aec7d */ if ((fS!=fO)) goto L_006aec7d;
L_006aecad:; BB(0x006aecad);
    /* 006aecad: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006aecb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aecb5: je 0x6af0dd */ if (fZ) goto L_006af0dd;
L_006aecbb:; BB(0x006aecbb);
    /* 006aecbb: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 006aecc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aecc3: je 0x6af0dd */ if (fZ) goto L_006af0dd;
L_006aecc9:; BB(0x006aecc9);
    /* 006aecc9: call 0x83dde4 */ r_esp -= 4; W32(r_esp, 0x6aecceu); f_0083dde4();
    /* 006aecce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aeccf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aecd2: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aecd5: call 0x83ddac */ r_esp -= 4; W32(r_esp, 0x6aecdau); f_0083ddac();
    /* 006aecda: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006aecdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aecdd: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x6aece2u); f_0083ddc4();
    /* 006aece2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aece5: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 006aece8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006aeceb: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 006aecee: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006aecf1: fadd dword ptr [eax*4 + 0x969538] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x969538u));
    /* 006aecf8: fmul dword ptr [0x969558] */ ST(0) = ST(0) * R_F32((u32)(0x969558u));
    /* 006aecfe: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 006aed01: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 006aed05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006aed0a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006aed0d: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 006aed10: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 006aed13: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 006aed16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006aed18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006aed1b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006aed1e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006aed20: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006aed22: jg 0x6aed26 */ if ((!fZ&&fS==fO)) goto L_006aed26;
L_006aed24:; BB(0x006aed24);
    /* 006aed24: mov ebx, edx */ r_ebx = r_edx;
L_006aed26:; BB(0x006aed26);
    /* 006aed26: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006aed29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aed2a: call 0x717e28 */ r_esp -= 4; W32(r_esp, 0x6aed2fu); f_00717e28();
    /* 006aed2f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aed32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aed35: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006aed38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aed3a: jne 0x6aed7a */ if (!fZ) goto L_006aed7a;
L_006aed3c:; BB(0x006aed3c);
    /* 006aed3c: mov esi, eax */ r_esi = r_eax;
    /* 006aed3e: mov byte ptr [ebp - 0x7c], 0x7d */ W8((u32)(r_ebp+0xffffff84u), 0x7du);
    /* 006aed42: mov edx, 3 */ r_edx = 0x3u;
    /* 006aed47: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006aed4a: mov byte ptr [ebp - 0x7b], 6 */ W8((u32)(r_ebp+0xffffff85u), 0x6u);
    /* 006aed4e: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 006aed51: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006aed56: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006aed58: mov byte ptr [ebp - 0x75], al */ W8((u32)(r_ebp+0xffffff8bu), (u8)r_eax);
    /* 006aed5b: mov byte ptr [ebp - 0x76], al */ W8((u32)(r_ebp+0xffffff8au), (u8)r_eax);
    /* 006aed5e: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006aed61: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006aed64: mov byte ptr [ebp - 0x78], bl */ W8((u32)(r_ebp+0xffffff88u), (u8)r_ebx);
    /* 006aed67: mov byte ptr [ebp - 0x77], dl */ W8((u32)(r_ebp+0xffffff89u), (u8)r_edx);
    /* 006aed6a: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 006aed6d: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 006aed70: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6aed75u); f_008003e0();
    /* 006aed75: jmp 0x6af10d */ goto L_006af10d;
L_006aed7a:; BB(0x006aed7a);
    /* 006aed7a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006aed7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aed7e: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 006aed84: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006aed8a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006aed8c:; BB(0x006aed8c);
    /* 006aed8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aed8d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aed92u); f_0068d5a8();
    /* 006aed92: mov ebx, eax */ r_ebx = r_eax;
    /* 006aed94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aed97: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aed99: je 0x6aedf2 */ if (fZ) goto L_006aedf2;
L_006aed9b:; BB(0x006aed9b);
    /* 006aed9b: mov edx, dword ptr [esi*4 + 0xa94aa0] */ r_edx = R32((u32)(r_esi*4+0xa94aa0u));
    /* 006aeda2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeda4: je 0x6aedf2 */ if (fZ) goto L_006aedf2;
L_006aeda6:; BB(0x006aeda6);
    /* 006aeda6: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006aeda9: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aedaf: je 0x6aedd9 */ if (fZ) goto L_006aedd9;
L_006aedb1:; BB(0x006aedb1);
    /* 006aedb1: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aedb6: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x6aedbbu); f_006a8efc();
    /* 006aedbb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aedbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aedc1: je 0x6aedf2 */ if (fZ) goto L_006aedf2;
L_006aedc3:; BB(0x006aedc3);
    /* 006aedc3: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aedc8: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x6aedcdu); f_006a8efc();
    /* 006aedcd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aedd0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aedd3: je 0x6af25a */ if (fZ) goto L_006af25a;
L_006aedd9:; BB(0x006aedd9);
    /* 006aedd9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aeddc: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aede1: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6aede6u); f_006a8f2c();
    /* 006aede6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aede9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aedec: je 0x6af230 */ if (fZ) goto L_006af230;
L_006aedf2:; BB(0x006aedf2);
    /* 006aedf2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aedf5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aedf8: jl 0x6aed8c */ if ((fS!=fO)) goto L_006aed8c;
L_006aedfa:; BB(0x006aedfa);
    /* 006aedfa: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aedff: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6aee04u); f_006a8f2c();
    /* 006aee04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aee07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee0a: jne 0x6aee20 */ if (!fZ) goto L_006aee20;
L_006aee0c:; BB(0x006aee0c);
    /* 006aee0c: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 006aee12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee14: je 0x6aee25 */ if (fZ) goto L_006aee25;
L_006aee16:; BB(0x006aee16);
    /* 006aee16: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 006aee1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee1e: je 0x6aee25 */ if (fZ) goto L_006aee25;
L_006aee20:; BB(0x006aee20);
    /* 006aee20: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aee23: jg 0x6aee3b */ if ((!fZ&&fS==fO)) goto L_006aee3b;
L_006aee25:; BB(0x006aee25);
    /* 006aee25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee28: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006aee2b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006aee2e: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 006aee31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006aee33: jle 0x6af124 */ if ((fZ||fS!=fO)) goto L_006af124;
L_006aee39:; BB(0x006aee39);
    /* 006aee39: jmp 0x6aee45 */ goto L_006aee45;
L_006aee3b:; BB(0x006aee3b);
    /* 006aee3b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee3e: mov dword ptr [eax + 0x40], 0x12c */ W32((u32)(r_eax+0x40u), 0x12cu);
L_006aee45:; BB(0x006aee45);
    /* 006aee45: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee48: mov eax, dword ptr [eax + 0x468] */ r_eax = R32((u32)(r_eax+0x468u));
    /* 006aee4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee50: je 0x6aee70 */ if (fZ) goto L_006aee70;
L_006aee52:; BB(0x006aee52);
    /* 006aee52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee55: jne 0x6aee61 */ if (!fZ) goto L_006aee61;
L_006aee57:; BB(0x006aee57);
    /* 006aee57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee5a: call 0x6ae9f4 */ r_esp -= 4; W32(r_esp, 0x6aee5fu); f_006ae9f4();
    /* 006aee5f: jmp 0x6aee81 */ goto L_006aee81;
L_006aee61:; BB(0x006aee61);
    /* 006aee61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee64: jne 0x6aee81 */ if (!fZ) goto L_006aee81;
L_006aee66:; BB(0x006aee66);
    /* 006aee66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee69: call 0x6af27c */ r_esp -= 4; W32(r_esp, 0x6aee6eu); f_006af27c();
    /* 006aee6e: jmp 0x6aee81 */ goto L_006aee81;
L_006aee70:; BB(0x006aee70);
    /* 006aee70: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006aee75: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aee7b: je 0x6af04b */ if (fZ) goto L_006af04b;
L_006aee81:; BB(0x006aee81);
    /* 006aee81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aee84: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 006aee87: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006aee8a: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 006aee8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006aee8f: jle 0x6af21a */ if ((fZ||fS!=fO)) goto L_006af21a;
L_006aee95:; BB(0x006aee95);
    /* 006aee95: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006aee9a: mov word ptr [0xa94af4], ax */ W16((u32)(0xa94af4u), (u16)r_eax);
    /* 006aeea0: mov word ptr [0xa94afc], ax */ W16((u32)(0xa94afcu), (u16)r_eax);
    /* 006aeea6: mov word ptr [0xa94b04], ax */ W16((u32)(0xa94b04u), (u16)r_eax);
    /* 006aeeac: mov word ptr [0xa94b0c], ax */ W16((u32)(0xa94b0cu), (u16)r_eax);
    /* 006aeeb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006aeeb4: mov word ptr [0xa94af6], dx */ W16((u32)(0xa94af6u), (u16)r_edx);
    /* 006aeebb: mov dword ptr [0xa94af8], edx */ W32((u32)(0xa94af8u), r_edx);
    /* 006aeec1: mov word ptr [0xa94afe], dx */ W16((u32)(0xa94afeu), (u16)r_edx);
    /* 006aeec8: mov dword ptr [0xa94b00], edx */ W32((u32)(0xa94b00u), r_edx);
    /* 006aeece: mov word ptr [0xa94b06], dx */ W16((u32)(0xa94b06u), (u16)r_edx);
    /* 006aeed5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006aeed7: mov dword ptr [0xa94b08], edx */ W32((u32)(0xa94b08u), r_edx);
    /* 006aeedd: mov word ptr [0xa94b0e], dx */ W16((u32)(0xa94b0eu), (u16)r_edx);
    /* 006aeee4: mov dword ptr [0xa94b10], edx */ W32((u32)(0xa94b10u), r_edx);
    /* 006aeeea: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006aeeef: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6aeef4u); f_006a8f2c();
    /* 006aeef4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aeef7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aeefa: je 0x6af18e */ if (fZ) goto L_006af18e;
L_006aef00:; BB(0x006aef00);
    /* 006aef00: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006aef02:; BB(0x006aef02);
    /* 006aef02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aef03: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aef08u); f_0068d5a8();
    /* 006aef08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aef09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aef0b: je 0x6aef29 */ if (fZ) goto L_006aef29;
L_006aef0d:; BB(0x006aef0d);
    /* 006aef0d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006aef11: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006aef19: mov eax, dword ptr [eax + 0x898] */ r_eax = R32((u32)(r_eax+0x898u));
    /* 006aef1f: mov dword ptr [ebx*8 + 0xa94af8], eax */ W32((u32)(r_ebx*8+0xa94af8u), r_eax);
    /* 006aef26: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006aef29:; BB(0x006aef29);
    /* 006aef29: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aef2c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aef2f: jl 0x6aef02 */ if ((fS!=fO)) goto L_006aef02;
L_006aef31:; BB(0x006aef31);
    /* 006aef31: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aef34: jle 0x6af10d */ if ((fZ||fS!=fO)) goto L_006af10d;
L_006aef3a:; BB(0x006aef3a);
    /* 006aef3a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006aef3c: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 006aef3f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006aef42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006aef44: jle 0x6af003 */ if ((fZ||fS!=fO)) goto L_006af003;
L_006aef4a:; BB(0x006aef4a);
    /* 006aef4a: movzx eax, word ptr [esi*8 + 0xa94af4] */ r_eax = (u32)R16((u32)(r_esi*8+0xa94af4u));
    /* 006aef52: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aef57: je 0x6af183 */ if (fZ) goto L_006af183;
L_006aef5d:; BB(0x006aef5d);
    /* 006aef5d: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 006aef60: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006aef63: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aef65: jge 0x6aeff5 */ if ((fS==fO)) goto L_006aeff5;
L_006aef6b:; BB(0x006aef6b);
    /* 006aef6b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006aef6e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006aef71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006aef73: movzx eax, word ptr [eax + 0xa94af4] */ r_eax = (u32)R16((u32)(r_eax+0xa94af4u));
    /* 006aef7a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aef7f: je 0x6aefea */ if (fZ) goto L_006aefea;
L_006aef81:; BB(0x006aef81);
    /* 006aef81: mov edi, dword ptr [esi*8 + 0xa94af8] */ r_edi = R32((u32)(r_esi*8+0xa94af8u));
    /* 006aef88: cmp edi, dword ptr [edx*4 + 0xa94af8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx*4+0xa94af8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aef8f: jge 0x6aefea */ if ((fS==fO)) goto L_006aefea;
L_006aef91:; BB(0x006aef91);
    /* 006aef91: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 006aef94: movzx edi, word ptr [esi*8 + 0xa94af6] */ r_edi = (u32)R16((u32)(r_esi*8+0xa94af6u));
    /* 006aef9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006aef9f: movzx ebx, word ptr [esi*8 + 0xa94af4] */ r_ebx = (u32)R16((u32)(r_esi*8+0xa94af4u));
    /* 006aefa7: mov word ptr [esi*8 + 0xa94af4], ax */ W16((u32)(r_esi*8+0xa94af4u), (u16)r_eax);
    /* 006aefaf: movzx eax, word ptr [edx*4 + 0xa94af6] */ r_eax = (u32)R16((u32)(r_edx*4+0xa94af6u));
    /* 006aefb7: mov word ptr [esi*8 + 0xa94af6], ax */ W16((u32)(r_esi*8+0xa94af6u), (u16)r_eax);
    /* 006aefbf: mov eax, dword ptr [ecx*8 + 0xa94af8] */ r_eax = R32((u32)(r_ecx*8+0xa94af8u));
    /* 006aefc6: mov dword ptr [esi*8 + 0xa94af8], eax */ W32((u32)(r_esi*8+0xa94af8u), r_eax);
    /* 006aefcd: mov word ptr [ecx*8 + 0xa94af4], bx */ W16((u32)(r_ecx*8+0xa94af4u), (u16)r_ebx);
    /* 006aefd5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006aefd8: mov word ptr [edx*4 + 0xa94af6], di */ W16((u32)(r_edx*4+0xa94af6u), (u16)r_edi);
    /* 006aefe0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aefe3: mov dword ptr [ecx*8 + 0xa94af8], edx */ W32((u32)(r_ecx*8+0xa94af8u), r_edx);
L_006aefea:; BB(0x006aefea);
    /* 006aefea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006aefed: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aefef: jl 0x6aef6b */ if ((fS!=fO)) goto L_006aef6b;
L_006aeff5:; BB(0x006aeff5);
    /* 006aeff5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006aeff8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006aeffb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aeffd: jl 0x6aef4a */ if ((fS!=fO)) goto L_006aef4a;
L_006af003:; BB(0x006af003);
    /* 006af003: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006af005: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006af007: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006af009: jle 0x6af10d */ if ((fZ||fS!=fO)) goto L_006af10d;
L_006af00f:; BB(0x006af00f);
    /* 006af00f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006af012: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006af015: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006af018: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af01a: mov word ptr [esi + 0xa94af6], dx */ W16((u32)(r_esi+0xa94af6u), (u16)r_edx);
    /* 006af021: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af023: jge 0x6af03f */ if ((fS==fO)) goto L_006af03f;
L_006af025:; BB(0x006af025);
    /* 006af025: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006af028: mov edi, dword ptr [esi*4 + 0xa94af8] */ r_edi = R32((u32)(r_esi*4+0xa94af8u));
    /* 006af02f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006af032: cmp edi, dword ptr [eax*4 + 0xa94b00] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*4+0xa94b00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af039: je 0x6af042 */ if (fZ) goto L_006af042;
L_006af03b:; BB(0x006af03b);
    /* 006af03b: mov edx, ecx */ r_edx = r_ecx;
    /* 006af03d: jmp 0x6af042 */ goto L_006af042;
L_006af03f:; BB(0x006af03f);
    /* 006af03f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006af042:; BB(0x006af042);
    /* 006af042: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006af044: jl 0x6af00f */ if ((fS!=fO)) goto L_006af00f;
L_006af046:; BB(0x006af046);
    /* 006af046: jmp 0x6af10d */ goto L_006af10d;
L_006af04b:; BB(0x006af04b);
    /* 006af04b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006af04e: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 006af053: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006af055: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006af057: mov esi, edx */ r_esi = r_edx;
    /* 006af059: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af05b: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006af05e: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006af061: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_006af063:; BB(0x006af063);
    /* 006af063: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af066: lea edi, [eax + ebx] */ r_edi = (u32)(r_eax+r_ebx);
    /* 006af069: movsx ecx, byte ptr [edi + 0x460] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edi+0x460u));
    /* 006af070: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af072: je 0x6af0d0 */ if (fZ) goto L_006af0d0;
L_006af074:; BB(0x006af074);
    /* 006af074: movsx eax, word ptr [ebx*2 + 0xa94ad8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0xa94ad8u));
    /* 006af07c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af07e: jne 0x6af0d0 */ if (!fZ) goto L_006af0d0;
L_006af080:; BB(0x006af080);
    /* 006af080: mov byte ptr [edi + 0x460], 0 */ W8((u32)(r_edi+0x460u), 0x0u);
    /* 006af087: lea ecx, [ebp - 0x9c] */ r_ecx = (u32)(r_ebp+0xffffff64u);
    /* 006af08d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006af092: mov byte ptr [ebp - 0x9c], 0x7d */ W8((u32)(r_ebp+0xffffff64u), 0x7du);
    /* 006af099: mov byte ptr [ebp - 0x96], al */ W8((u32)(r_ebp+0xffffff6au), (u8)r_eax);
    /* 006af09f: mov byte ptr [ebp - 0x9b], 6 */ W8((u32)(r_ebp+0xffffff65u), 0x6u);
    /* 006af0a6: mov byte ptr [ebp - 0x95], al */ W8((u32)(r_ebp+0xffffff6bu), (u8)r_eax);
    /* 006af0ac: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 006af0b2: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006af0b8: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 006af0be: mov byte ptr [ebp - 0x98], 5 */ W8((u32)(r_ebp+0xffffff68u), 0x5u);
    /* 006af0c5: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 006af0cb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6af0d0u); f_008003e0();
L_006af0d0:; BB(0x006af0d0);
    /* 006af0d0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006af0d3: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af0d6: jl 0x6af063 */ if ((fS!=fO)) goto L_006af063;
L_006af0d8:; BB(0x006af0d8);
    /* 006af0d8: jmp 0x6aee81 */ goto L_006aee81;
L_006af0dd:; BB(0x006af0dd);
    /* 006af0dd: mov byte ptr [ebp - 0x64], 0x7d */ W8((u32)(r_ebp+0xffffff9cu), 0x7du);
    /* 006af0e1: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 006af0e4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006af0e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006af0eb: mov byte ptr [ebp - 0x63], 6 */ W8((u32)(r_ebp+0xffffff9du), 0x6u);
    /* 006af0ef: mov byte ptr [ebp - 0x5d], al */ W8((u32)(r_ebp+0xffffffa3u), (u8)r_eax);
    /* 006af0f2: mov byte ptr [ebp - 0x5e], al */ W8((u32)(r_ebp+0xffffffa2u), (u8)r_eax);
    /* 006af0f5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006af0f8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006af0fb: mov byte ptr [ebp - 0x5f], 5 */ W8((u32)(r_ebp+0xffffffa1u), 0x5u);
    /* 006af0ff: mov byte ptr [ebp - 0x60], dl */ W8((u32)(r_ebp+0xffffffa0u), (u8)r_edx);
    /* 006af102: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006af105: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006af108: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6af10du); f_008003e0();
L_006af10d:; BB(0x006af10d);
    /* 006af10d: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006af110: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006af113: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006af116: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006af119: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006af120: mov esp, ebp */ r_esp = r_ebp;
    /* 006af122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af123: ret  */ FN_RET(0x006aea34); r_esp += 4; return;
L_006af124:; BB(0x006af124);
    /* 006af124: mov esi, eax */ r_esi = r_eax;
    /* 006af126: mov byte ptr [ebp - 0xb4], 0x7d */ W8((u32)(r_ebp+0xffffff4cu), 0x7du);
    /* 006af12d: mov edx, 3 */ r_edx = 0x3u;
    /* 006af132: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006af135: mov byte ptr [ebp - 0xb3], 6 */ W8((u32)(r_ebp+0xffffff4du), 0x6u);
    /* 006af13c: lea ecx, [ebp - 0xb4] */ r_ecx = (u32)(r_ebp+0xffffff4cu);
    /* 006af142: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006af147: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006af149: mov byte ptr [ebp - 0xad], al */ W8((u32)(r_ebp+0xffffff53u), (u8)r_eax);
    /* 006af14f: mov byte ptr [ebp - 0xae], al */ W8((u32)(r_ebp+0xffffff52u), (u8)r_eax);
    /* 006af155: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 006af15b: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006af161: mov byte ptr [ebp - 0xb0], bl */ W8((u32)(r_ebp+0xffffff50u), (u8)r_ebx);
    /* 006af167: mov byte ptr [ebp - 0xaf], dl */ W8((u32)(r_ebp+0xffffff51u), (u8)r_edx);
    /* 006af16d: mov dword ptr [ebp - 0xac], ebx */ W32((u32)(r_ebp+0xffffff54u), r_ebx);
    /* 006af173: mov dword ptr [ebp - 0xa8], ebx */ W32((u32)(r_ebp+0xffffff58u), r_ebx);
    /* 006af179: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6af17eu); f_008003e0();
    /* 006af17e: jmp 0x6aee45 */ goto L_006aee45;
L_006af183:; BB(0x006af183);
    /* 006af183: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 006af186: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006af189: jmp 0x6aeff5 */ goto L_006aeff5;
L_006af18e:; BB(0x006af18e);
    /* 006af18e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af190: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006af196: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006af199: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006af19b:; BB(0x006af19b);
    /* 006af19b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af19c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af1a1u); f_0068d5a8();
    /* 006af1a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af1a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af1a4: je 0x6af1c3 */ if (fZ) goto L_006af1c3;
L_006af1a6:; BB(0x006af1a6);
    /* 006af1a6: mov edx, dword ptr [eax + 0x900] */ r_edx = R32((u32)(r_eax+0x900u));
    /* 006af1ac: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af1af: je 0x6af212 */ if (fZ) goto L_006af212;
L_006af1b1:; BB(0x006af1b1);
    /* 006af1b1: mov edx, 1 */ r_edx = 0x1u;
L_006af1b6:; BB(0x006af1b6);
    /* 006af1b6: mov eax, dword ptr [eax + 0x898] */ r_eax = R32((u32)(r_eax+0x898u));
    /* 006af1bc: add dword ptr [ebp + edx*4 - 0x84], eax */ { u32 ad = (u32)(r_ebp+r_edx*4+0xffffff7cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006af1c3:; BB(0x006af1c3);
    /* 006af1c3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af1c6: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af1c9: jl 0x6af19b */ if ((fS!=fO)) goto L_006af19b;
L_006af1cb:; BB(0x006af1cb);
    /* 006af1cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006af1cd:; BB(0x006af1cd);
    /* 006af1cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006af1ce: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6af1d3u); f_0068d5a8();
    /* 006af1d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006af1d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af1d6: je 0x6af205 */ if (fZ) goto L_006af205;
L_006af1d8:; BB(0x006af1d8);
    /* 006af1d8: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006af1dc: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006af1e4: mov eax, dword ptr [eax + 0x900] */ r_eax = R32((u32)(r_eax+0x900u));
    /* 006af1ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af1ed: je 0x6af216 */ if (fZ) goto L_006af216;
L_006af1ef:; BB(0x006af1ef);
    /* 006af1ef: mov eax, 1 */ r_eax = 0x1u;
L_006af1f4:; BB(0x006af1f4);
    /* 006af1f4: mov eax, dword ptr [ebp + eax*4 - 0x84] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffff7cu));
    /* 006af1fb: mov dword ptr [ebx*8 + 0xa94af8], eax */ W32((u32)(r_ebx*8+0xa94af8u), r_eax);
    /* 006af202: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006af205:; BB(0x006af205);
    /* 006af205: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006af208: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af20b: jl 0x6af1cd */ if ((fS!=fO)) goto L_006af1cd;
L_006af20d:; BB(0x006af20d);
    /* 006af20d: jmp 0x6aef3a */ goto L_006aef3a;
L_006af212:; BB(0x006af212);
    /* 006af212: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006af214: jmp 0x6af1b6 */ goto L_006af1b6;
L_006af216:; BB(0x006af216);
    /* 006af216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006af218: jmp 0x6af1f4 */ goto L_006af1f4;
L_006af21a:; BB(0x006af21a);
    /* 006af21a: mov ecx, eax */ r_ecx = r_eax;
    /* 006af21c: call 0x6ae910 */ r_esp -= 4; W32(r_esp, 0x6af221u); f_006ae910();
    /* 006af221: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006af224: mov dword ptr [eax + 0x58], 0x5a */ W32((u32)(r_eax+0x58u), 0x5au);
    /* 006af22b: jmp 0x6aee95 */ goto L_006aee95;
L_006af230:; BB(0x006af230);
    /* 006af230: mov edx, dword ptr [ebx + 0x900] */ r_edx = R32((u32)(r_ebx+0x900u));
    /* 006af236: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006af239: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006af23b: jl 0x6aedf2 */ if ((fS!=fO)) goto L_006aedf2;
L_006af241:; BB(0x006af241);
    /* 006af241: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006af244: jge 0x6aedf2 */ if ((fS==fO)) goto L_006aedf2;
L_006af24a:; BB(0x006af24a);
    /* 006af24a: mov dword ptr [ebp + edx*4 - 0xc0], 1 */ W32((u32)(r_ebp+r_edx*4+0xffffff40u), 0x1u);
    /* 006af255: jmp 0x6aedf2 */ goto L_006aedf2;
L_006af25a:; BB(0x006af25a);
    /* 006af25a: mov edx, dword ptr [ebx + 0x82c] */ r_edx = R32((u32)(r_ebx+0x82cu));
    /* 006af260: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006af262: je 0x6aedf2 */ if (fZ) goto L_006aedf2;
L_006af268:; BB(0x006af268);
    /* 006af268: jmp 0x6aedd9 */ goto L_006aedd9;
L_006af26d:; BB(0x006af26d);
    /* 006af26d: mov eax, 0x969570 */ r_eax = 0x969570u;
    /* 006af272: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006af275: jmp 0x6aeaff */ goto L_006aeaff;
}

