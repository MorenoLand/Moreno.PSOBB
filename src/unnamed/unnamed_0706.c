#include "protos.h"

void f_007060ec(void) /* sub_7060EC */
{
    FN_ENTER(0x007060ec);
    /* 007060ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007060ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007060ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007060ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007060f0: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007060f5: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007060f8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007060fd: mov edx, 0x2c7 */ r_edx = 0x2c7u;
    /* 00706102: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00706105: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00706107: mov edi, 0x68c */ r_edi = 0x68cu;
    /* 0070610c: mov ebp, eax */ r_ebp = r_eax;
L_0070610e:; BB(0x0070610e);
    /* 0070610e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070610f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x706114u); f_0068d5a8();
    /* 00706114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706117: je 0x70614f */ if (fZ) goto L_0070614f;
L_00706119:; BB(0x00706119);
    /* 00706119: mov ecx, eax */ r_ecx = r_eax;
    /* 0070611b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x706120u); f_006936b4();
    /* 00706120: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706126: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00706128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706129: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070612c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706131u); f_00857dec();
    /* 00706131: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706134: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070613a: je 0x70615d */ if (fZ) goto L_0070615d;
L_0070613c:; BB(0x0070613c);
    /* 0070613c: mov word ptr [ebp + ebx*2], di */ W16((u32)(r_ebp+r_ebx*2), (u16)r_edi);
    /* 00706141: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706144: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706147: jge 0x706236 */ if ((fS==fO)) goto L_00706236;
L_0070614d:; BB(0x0070614d);
    /* 0070614d: jmp 0x70615d */ goto L_0070615d;
L_0070614f:; BB(0x0070614f);
    /* 0070614f: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706155: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 00706158: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070615a: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_0070615d:; BB(0x0070615d);
    /* 0070615d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706160: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706163: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706166: jl 0x70610e */ if ((fS!=fO)) goto L_0070610e;
L_00706168:; BB(0x00706168);
    /* 00706168: mov eax, ebp */ r_eax = r_ebp;
L_0070616a:; BB(0x0070616a);
    /* 0070616a: mov esi, dword ptr [0xa96ee0] */ r_esi = R32((u32)(0xa96ee0u));
    /* 00706170: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00706173: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 00706176: mov esi, 1 */ r_esi = 0x1u;
    /* 0070617b: mov edx, 0x2c4 */ r_edx = 0x2c4u;
    /* 00706180: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 00706183: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706186: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706188: jle 0x7061a2 */ if ((fZ||fS!=fO)) goto L_007061a2;
L_0070618a:; BB(0x0070618a);
    /* 0070618a: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 0070618d: lea edx, [eax + ebx*2 + 2] */ r_edx = (u32)(r_eax+r_ebx*2+0x2u);
L_00706191:; BB(0x00706191);
    /* 00706191: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 00706194: mov word ptr [edi + esi*2], bp */ W16((u32)(r_edi+r_esi*2), (u16)r_ebp);
    /* 00706198: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070619b: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070619e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007061a0: jb 0x706191 */ if (fC) goto L_00706191;
L_007061a2:; BB(0x007061a2);
    /* 007061a2: mov edx, 0x2c5 */ r_edx = 0x2c5u;
    /* 007061a7: mov word ptr [edi + esi*2], dx */ W16((u32)(r_edi+r_esi*2), (u16)r_edx);
    /* 007061ab: mov ecx, 0x2c6 */ r_ecx = 0x2c6u;
    /* 007061b0: mov edx, 0x2c7 */ r_edx = 0x2c7u;
    /* 007061b5: mov word ptr [edi + esi*2 + 2], cx */ W16((u32)(r_edi+r_esi*2+0x2u), (u16)r_ecx);
    /* 007061ba: mov word ptr [edi + esi*2 + 4], dx */ W16((u32)(r_edi+r_esi*2+0x4u), (u16)r_edx);
    /* 007061bf: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007061c2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007061c7: mov edi, dword ptr [0xa96ee0] */ r_edi = R32((u32)(0xa96ee0u));
    /* 007061cd: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007061d0: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 007061d3: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 007061d6: mov edi, 0x2c4 */ r_edi = 0x2c4u;
    /* 007061db: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 007061de: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 007061e1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007061e4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007061e6: jle 0x706209 */ if ((fZ||fS!=fO)) goto L_00706209;
L_007061e8:; BB(0x007061e8);
    /* 007061e8: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 007061eb: lea eax, [eax + ebx*2 + 2] */ r_eax = (u32)(r_eax+r_ebx*2+0x2u);
L_007061ef:; BB(0x007061ef);
    /* 007061ef: movsx ebx, word ptr [edi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 007061f2: mov word ptr [esi + ecx*2], bx */ W16((u32)(r_esi+r_ecx*2), (u16)r_ebx);
    /* 007061f6: mov ebp, edx */ r_ebp = r_edx;
    /* 007061f8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007061fb: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 007061ff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706202: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706205: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00706207: jb 0x7061ef */ if (fC) goto L_007061ef;
L_00706209:; BB(0x00706209);
    /* 00706209: mov eax, 0x2c7 */ r_eax = 0x2c7u;
    /* 0070620e: mov word ptr [esi + ecx*2], ax */ W16((u32)(r_esi+r_ecx*2), (u16)r_eax);
    /* 00706212: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00706215: mov edx, 0x2c8 */ r_edx = 0x2c8u;
    /* 0070621a: lea ebx, [ecx + 2] */ r_ebx = (u32)(r_ecx+0x2u);
    /* 0070621d: mov word ptr [esi + ecx*2 + 2], dx */ W16((u32)(r_esi+r_ecx*2+0x2u), (u16)r_edx);
    /* 00706222: mov esi, dword ptr [0xa96ee0] */ r_esi = R32((u32)(0xa96ee0u));
    /* 00706228: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0070622b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070622e: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00706231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706232: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706233: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706234: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706235: ret  */ FN_RET(0x007060ec); r_esp += 4; return;
L_00706236:; BB(0x00706236);
    /* 00706236: mov eax, ebp */ r_eax = r_ebp;
    /* 00706238: jmp 0x70616a */ goto L_0070616a;
}

void f_00706163(void)
{
    FN_ENTER(0x00706163);
    goto L_00706163;
L_0070610e:; BB(0x0070610e);
    /* 0070610e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070610f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x706114u); f_0068d5a8();
    /* 00706114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706115: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706117: je 0x70614f */ if (fZ) goto L_0070614f;
L_00706119:; BB(0x00706119);
    /* 00706119: mov ecx, eax */ r_ecx = r_eax;
    /* 0070611b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x706120u); f_006936b4();
    /* 00706120: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706126: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00706128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706129: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070612c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706131u); f_00857dec();
    /* 00706131: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706134: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070613a: je 0x70615d */ if (fZ) goto L_0070615d;
L_0070613c:; BB(0x0070613c);
    /* 0070613c: mov word ptr [ebp + ebx*2], di */ W16((u32)(r_ebp+r_ebx*2), (u16)r_edi);
    /* 00706141: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706144: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706147: jge 0x706236 */ if ((fS==fO)) goto L_00706236;
L_0070614d:; BB(0x0070614d);
    /* 0070614d: jmp 0x70615d */ goto L_0070615d;
L_0070614f:; BB(0x0070614f);
    /* 0070614f: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706155: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 00706158: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070615a: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_0070615d:; BB(0x0070615d);
    /* 0070615d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706160: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00706163:; BB(0x00706163);
    /* 00706163: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706166: jl 0x70610e */ if ((fS!=fO)) goto L_0070610e;
L_00706168:; BB(0x00706168);
    /* 00706168: mov eax, ebp */ r_eax = r_ebp;
L_0070616a:; BB(0x0070616a);
    /* 0070616a: mov esi, dword ptr [0xa96ee0] */ r_esi = R32((u32)(0xa96ee0u));
    /* 00706170: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00706173: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 00706176: mov esi, 1 */ r_esi = 0x1u;
    /* 0070617b: mov edx, 0x2c4 */ r_edx = 0x2c4u;
    /* 00706180: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 00706183: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706186: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706188: jle 0x7061a2 */ if ((fZ||fS!=fO)) goto L_007061a2;
L_0070618a:; BB(0x0070618a);
    /* 0070618a: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 0070618d: lea edx, [eax + ebx*2 + 2] */ r_edx = (u32)(r_eax+r_ebx*2+0x2u);
L_00706191:; BB(0x00706191);
    /* 00706191: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 00706194: mov word ptr [edi + esi*2], bp */ W16((u32)(r_edi+r_esi*2), (u16)r_ebp);
    /* 00706198: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070619b: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070619e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007061a0: jb 0x706191 */ if (fC) goto L_00706191;
L_007061a2:; BB(0x007061a2);
    /* 007061a2: mov edx, 0x2c5 */ r_edx = 0x2c5u;
    /* 007061a7: mov word ptr [edi + esi*2], dx */ W16((u32)(r_edi+r_esi*2), (u16)r_edx);
    /* 007061ab: mov ecx, 0x2c6 */ r_ecx = 0x2c6u;
    /* 007061b0: mov edx, 0x2c7 */ r_edx = 0x2c7u;
    /* 007061b5: mov word ptr [edi + esi*2 + 2], cx */ W16((u32)(r_edi+r_esi*2+0x2u), (u16)r_ecx);
    /* 007061ba: mov word ptr [edi + esi*2 + 4], dx */ W16((u32)(r_edi+r_esi*2+0x4u), (u16)r_edx);
    /* 007061bf: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007061c2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007061c7: mov edi, dword ptr [0xa96ee0] */ r_edi = R32((u32)(0xa96ee0u));
    /* 007061cd: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007061d0: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 007061d3: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 007061d6: mov edi, 0x2c4 */ r_edi = 0x2c4u;
    /* 007061db: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 007061de: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 007061e1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007061e4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007061e6: jle 0x706209 */ if ((fZ||fS!=fO)) goto L_00706209;
L_007061e8:; BB(0x007061e8);
    /* 007061e8: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 007061eb: lea eax, [eax + ebx*2 + 2] */ r_eax = (u32)(r_eax+r_ebx*2+0x2u);
L_007061ef:; BB(0x007061ef);
    /* 007061ef: movsx ebx, word ptr [edi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 007061f2: mov word ptr [esi + ecx*2], bx */ W16((u32)(r_esi+r_ecx*2), (u16)r_ebx);
    /* 007061f6: mov ebp, edx */ r_ebp = r_edx;
    /* 007061f8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007061fb: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 007061ff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706202: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706205: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00706207: jb 0x7061ef */ if (fC) goto L_007061ef;
L_00706209:; BB(0x00706209);
    /* 00706209: mov eax, 0x2c7 */ r_eax = 0x2c7u;
    /* 0070620e: mov word ptr [esi + ecx*2], ax */ W16((u32)(r_esi+r_ecx*2), (u16)r_eax);
    /* 00706212: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00706215: mov edx, 0x2c8 */ r_edx = 0x2c8u;
    /* 0070621a: lea ebx, [ecx + 2] */ r_ebx = (u32)(r_ecx+0x2u);
    /* 0070621d: mov word ptr [esi + ecx*2 + 2], dx */ W16((u32)(r_esi+r_ecx*2+0x2u), (u16)r_edx);
    /* 00706222: mov esi, dword ptr [0xa96ee0] */ r_esi = R32((u32)(0xa96ee0u));
    /* 00706228: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0070622b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070622e: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00706231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706232: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706233: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706234: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706235: ret  */ FN_RET(0x00706163); r_esp += 4; return;
L_00706236:; BB(0x00706236);
    /* 00706236: mov eax, ebp */ r_eax = r_ebp;
    /* 00706238: jmp 0x70616a */ goto L_0070616a;
}

void f_00706240(void) /* sub_706240 */
{
    FN_ENTER(0x00706240);
    /* 00706240: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00706244: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00706248: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0070624a: lea eax, [ecx + eax + 1] */ r_eax = (u32)(r_ecx+r_eax+0x1u);
    /* 0070624e: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706253: mov eax, 0 */ r_eax = 0x0u;
    /* 00706258: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0070625b: ret  */ FN_RET(0x00706240); r_esp += 4; return;
}

void f_0070625c(void) /* sub_70625C */
{
    FN_ENTER(0x0070625c);
    /* 0070625c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070625d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070625e: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 00706263: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00706267: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0070626b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0070626d: lea edi, [esi + 2] */ r_edi = (u32)(r_esi+0x2u);
    /* 00706270: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706276: jge 0x706281 */ if ((fS==fO)) goto L_00706281;
L_00706278:; BB(0x00706278);
    /* 00706278: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 0070627b: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0070627d: mov word ptr [ecx + esi*2], dx */ W16((u32)(r_ecx+r_esi*2), (u16)r_edx);
L_00706281:; BB(0x00706281);
    /* 00706281: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706282: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706283: ret  */ FN_RET(0x0070625c); r_esp += 4; return;
}

void f_00706284(void) /* sub_706284 */
{
    FN_ENTER(0x00706284);
    /* 00706284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706285: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706286: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706287: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0070628b: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0070628f: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00706292: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00706294: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00706297: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706299: jl 0x7062fe */ if ((fS!=fO)) goto L_007062fe;
L_0070629b:; BB(0x0070629b);
    /* 0070629b: lea edi, [ecx - 1] */ r_edi = (u32)(r_ecx+0xffffffffu);
    /* 0070629e: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007062a1: jl 0x7062eb */ if ((fS!=fO)) goto L_007062eb;
L_007062a3:; BB(0x007062a3);
    /* 007062a3: movzx edi, word ptr [esi + edx*2] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2));
    /* 007062a7: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062aa: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062ac:; BB(0x007062ac);
    /* 007062ac: movzx edi, word ptr [esi + edx*2 - 2] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0xfffffffeu));
    /* 007062b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062b4: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062b7: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062b9:; BB(0x007062b9);
    /* 007062b9: movzx edi, word ptr [esi + edx*2 - 4] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0xfffffffcu));
    /* 007062be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062c1: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062c4: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062c6:; BB(0x007062c6);
    /* 007062c6: movzx edi, word ptr [esi + edx*2 - 6] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0xfffffffau));
    /* 007062cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062ce: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062d1: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062d3:; BB(0x007062d3);
    /* 007062d3: movzx edi, word ptr [esi + edx*2 - 8] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0xfffffff8u));
    /* 007062d8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062db: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062de: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062e0:; BB(0x007062e0);
    /* 007062e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062e3: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007062e6: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007062e9: jge 0x7062a3 */ if ((fS==fO)) goto L_007062a3;
L_007062eb:; BB(0x007062eb);
    /* 007062eb: movzx edi, word ptr [esi + edx*2] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2));
    /* 007062ef: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007062f2: je 0x7062fe */ if (fZ) goto L_007062fe;
L_007062f4:; BB(0x007062f4);
    /* 007062f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007062f7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007062fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007062fc: jge 0x7062eb */ if ((fS==fO)) goto L_007062eb;
L_007062fe:; BB(0x007062fe);
    /* 007062fe: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706301: jle 0x70631c */ if ((fZ||fS!=fO)) goto L_0070631c;
L_00706303:; BB(0x00706303);
    /* 00706303: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 00706306: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070630b: jge 0x70631c */ if ((fS==fO)) goto L_0070631c;
L_0070630d:; BB(0x0070630d);
    /* 0070630d: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00706310: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00706313: mov edx, 0xa */ r_edx = 0xau;
    /* 00706318: mov word ptr [esi + ecx*2], dx */ W16((u32)(r_esi+r_ecx*2), (u16)r_edx);
L_0070631c:; BB(0x0070631c);
    /* 0070631c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070631d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070631e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070631f: ret  */ FN_RET(0x00706284); r_esp += 4; return;
}

void f_00706320(void) /* sub_706320 */
{
    FN_ENTER(0x00706320);
    /* 00706320: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00706325: cmp eax, 0x2c9 */ {  u32 a = r_eax; u32 b = 0x2c9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070632a: jl 0x70633a */ if ((fS!=fO)) goto L_0070633a;
L_0070632c:; BB(0x0070632c);
    /* 0070632c: cmp eax, 0x552 */ {  u32 a = r_eax; u32 b = 0x552u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706331: jg 0x70633a */ if ((!fZ&&fS==fO)) goto L_0070633a;
L_00706333:; BB(0x00706333);
    /* 00706333: lea eax, [eax - 0x2c9] */ r_eax = (u32)(r_eax+0xfffffd37u);
    /* 00706339: ret  */ FN_RET(0x00706320); r_esp += 4; return;
L_0070633a:; BB(0x0070633a);
    /* 0070633a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070633c: ret  */ FN_RET(0x00706320); r_esp += 4; return;
}

void f_00706340(void) /* sub_706340 */
{
    FN_ENTER(0x00706340);
    /* 00706340: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00706345: cmp eax, 0x5fa */ {  u32 a = r_eax; u32 b = 0x5fau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070634a: jl 0x70635a */ if ((fS!=fO)) goto L_0070635a;
L_0070634c:; BB(0x0070634c);
    /* 0070634c: cmp eax, 0x682 */ {  u32 a = r_eax; u32 b = 0x682u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706351: jg 0x70635a */ if ((!fZ&&fS==fO)) goto L_0070635a;
L_00706353:; BB(0x00706353);
    /* 00706353: lea eax, [eax - 0x5fa] */ r_eax = (u32)(r_eax+0xfffffa06u);
    /* 00706359: ret  */ FN_RET(0x00706340); r_esp += 4; return;
L_0070635a:; BB(0x0070635a);
    /* 0070635a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070635c: ret  */ FN_RET(0x00706340); r_esp += 4; return;
}

void f_00706360(void) /* sub_706360 */
{
    FN_ENTER(0x00706360);
    /* 00706360: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706361: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706362: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706363: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706365: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00706369: movsx ebx, word ptr [esi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0070636c: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070636f: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00706373: jle 0x706455 */ if ((fZ||fS!=fO)) goto L_00706455;
L_00706379:; BB(0x00706379);
    /* 00706379: movsx edi, word ptr [esi + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 0070637d: mov eax, edi */ r_eax = r_edi;
    /* 0070637f: call 0x706475 */ r_esp -= 4; W32(r_esp, 0x706384u); f_00706475();
    /* 00706384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706386: je 0x7063ed */ if (fZ) goto L_007063ed;
L_00706388:; BB(0x00706388);
    /* 00706388: mov edx, 4 */ r_edx = 0x4u;
    /* 0070638d: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00706391: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706394: jle 0x7063a0 */ if ((fZ||fS!=fO)) goto L_007063a0;
L_00706396:; BB(0x00706396);
    /* 00706396: movzx edx, word ptr [esi + 0xa] */ r_edx = (u32)R16((u32)(r_esi+0xau));
    /* 0070639a: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0070639e: jmp 0x7063be */ goto L_007063be;
L_007063a0:; BB(0x007063a0);
    /* 007063a0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007063a3: jle 0x7063b5 */ if ((fZ||fS!=fO)) goto L_007063b5;
L_007063a5:; BB(0x007063a5);
    /* 007063a5: movsx edx, word ptr [esi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 007063a9: cmp edx, 0x685 */ {  u32 a = r_edx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007063af: je 0x706461 */ if (fZ) goto L_00706461;
L_007063b5:; BB(0x007063b5);
    /* 007063b5: mov edx, 0x2c4 */ r_edx = 0x2c4u;
    /* 007063ba: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_007063be:; BB(0x007063be);
    /* 007063be: mov word ptr [ebp + 6], di */ W16((u32)(r_ebp+0x6u), (u16)r_edi);
    /* 007063c2: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007063c6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 007063ca: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007063cd: jle 0x7063e2 */ if ((fZ||fS!=fO)) goto L_007063e2;
L_007063cf:; BB(0x007063cf);
    /* 007063cf: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007063d3: mov word ptr [ebp + 0xa], ax */ W16((u32)(r_ebp+0xau), (u16)r_eax);
    /* 007063d7: mov edx, 4 */ r_edx = 0x4u;
    /* 007063dc: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 007063e0: jmp 0x706455 */ goto L_00706455;
L_007063e2:; BB(0x007063e2);
    /* 007063e2: mov eax, 3 */ r_eax = 0x3u;
    /* 007063e7: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 007063eb: jmp 0x706455 */ goto L_00706455;
L_007063ed:; BB(0x007063ed);
    /* 007063ed: mov eax, 5 */ r_eax = 0x5u;
    /* 007063f2: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 007063f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007063f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007063fa: jle 0x70644e */ if ((fZ||fS!=fO)) goto L_0070644e;
L_007063fc:; BB(0x007063fc);
    /* 007063fc: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007063ff: jl 0x70643d */ if ((fS!=fO)) goto L_0070643d;
L_00706401:; BB(0x00706401);
    /* 00706401: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_00706404:; BB(0x00706404);
    /* 00706404: movzx ecx, word ptr [esi + edx*2 + 4] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0x4u));
    /* 00706409: mov word ptr [ebp + edx*2 + 4], cx */ W16((u32)(r_ebp+r_edx*2+0x4u), (u16)r_ecx);
    /* 0070640e: movzx edi, word ptr [esi + edx*2 + 6] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0x6u));
    /* 00706413: mov word ptr [ebp + edx*2 + 6], di */ W16((u32)(r_ebp+r_edx*2+0x6u), (u16)r_edi);
    /* 00706418: movzx ecx, word ptr [esi + edx*2 + 8] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0x8u));
    /* 0070641d: mov word ptr [ebp + edx*2 + 8], cx */ W16((u32)(r_ebp+r_edx*2+0x8u), (u16)r_ecx);
    /* 00706422: movzx ecx, word ptr [esi + edx*2 + 0xa] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0xau));
    /* 00706427: mov word ptr [ebp + edx*2 + 0xa], cx */ W16((u32)(r_ebp+r_edx*2+0xau), (u16)r_ecx);
    /* 0070642c: movzx ecx, word ptr [esi + edx*2 + 0xc] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0xcu));
    /* 00706431: mov word ptr [ebp + edx*2 + 0xc], cx */ W16((u32)(r_ebp+r_edx*2+0xcu), (u16)r_ecx);
    /* 00706436: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706439: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070643b: jle 0x706404 */ if ((fZ||fS!=fO)) goto L_00706404;
L_0070643d:; BB(0x0070643d);
    /* 0070643d: movzx eax, word ptr [esi + edx*2 + 4] */ r_eax = (u32)R16((u32)(r_esi+r_edx*2+0x4u));
    /* 00706442: mov word ptr [ebp + edx*2 + 4], ax */ W16((u32)(r_ebp+r_edx*2+0x4u), (u16)r_eax);
    /* 00706447: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070644a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070644c: jl 0x70643d */ if ((fS!=fO)) goto L_0070643d;
L_0070644e:; BB(0x0070644e);
    /* 0070644e: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00706451: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
L_00706455:; BB(0x00706455);
    /* 00706455: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00706458: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0070645b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070645c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070645d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070645e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070645f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706460: ret  */ FN_RET(0x00706360); r_esp += 4; return;
L_00706461:; BB(0x00706461);
    /* 00706461: mov edx, 0x698 */ r_edx = 0x698u;
    /* 00706466: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0070646a: jmp 0x7063be */ goto L_007063be;
}

void f_00706372(void)
{
    FN_ENTER(0x00706372);
    /* 00706372: sbb al, 0xf */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00706374: mov ds, esp */ UNSUP(0x00706374, "mov ds, esp");
    /* 00706376: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00706378: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0070637a: mov edi, 0xc78b067e */ r_edi = 0xc78b067eu;
    /* 0070637f: call 0x706475 */ r_esp -= 4; W32(r_esp, 0x706384u); f_00706475();
    /* 00706384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706386: je 0x7063ed */ if (fZ) goto L_007063ed;
L_00706388:; BB(0x00706388);
    /* 00706388: mov edx, 4 */ r_edx = 0x4u;
    /* 0070638d: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00706391: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706394: jle 0x7063a0 */ if ((fZ||fS!=fO)) goto L_007063a0;
L_00706396:; BB(0x00706396);
    /* 00706396: movzx edx, word ptr [esi + 0xa] */ r_edx = (u32)R16((u32)(r_esi+0xau));
    /* 0070639a: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0070639e: jmp 0x7063be */ goto L_007063be;
L_007063a0:; BB(0x007063a0);
    /* 007063a0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007063a3: jle 0x7063b5 */ if ((fZ||fS!=fO)) goto L_007063b5;
L_007063a5:; BB(0x007063a5);
    /* 007063a5: movsx edx, word ptr [esi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 007063a9: cmp edx, 0x685 */ {  u32 a = r_edx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007063af: je 0x706461 */ if (fZ) goto L_00706461;
L_007063b5:; BB(0x007063b5);
    /* 007063b5: mov edx, 0x2c4 */ r_edx = 0x2c4u;
    /* 007063ba: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_007063be:; BB(0x007063be);
    /* 007063be: mov word ptr [ebp + 6], di */ W16((u32)(r_ebp+0x6u), (u16)r_edi);
    /* 007063c2: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007063c6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 007063ca: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007063cd: jle 0x7063e2 */ if ((fZ||fS!=fO)) goto L_007063e2;
L_007063cf:; BB(0x007063cf);
    /* 007063cf: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007063d3: mov word ptr [ebp + 0xa], ax */ W16((u32)(r_ebp+0xau), (u16)r_eax);
    /* 007063d7: mov edx, 4 */ r_edx = 0x4u;
    /* 007063dc: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 007063e0: jmp 0x706455 */ goto L_00706455;
L_007063e2:; BB(0x007063e2);
    /* 007063e2: mov eax, 3 */ r_eax = 0x3u;
    /* 007063e7: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 007063eb: jmp 0x706455 */ goto L_00706455;
L_007063ed:; BB(0x007063ed);
    /* 007063ed: mov eax, 5 */ r_eax = 0x5u;
    /* 007063f2: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 007063f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007063f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007063fa: jle 0x70644e */ if ((fZ||fS!=fO)) goto L_0070644e;
L_007063fc:; BB(0x007063fc);
    /* 007063fc: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007063ff: jl 0x70643d */ if ((fS!=fO)) goto L_0070643d;
L_00706401:; BB(0x00706401);
    /* 00706401: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_00706404:; BB(0x00706404);
    /* 00706404: movzx ecx, word ptr [esi + edx*2 + 4] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0x4u));
    /* 00706409: mov word ptr [ebp + edx*2 + 4], cx */ W16((u32)(r_ebp+r_edx*2+0x4u), (u16)r_ecx);
    /* 0070640e: movzx edi, word ptr [esi + edx*2 + 6] */ r_edi = (u32)R16((u32)(r_esi+r_edx*2+0x6u));
    /* 00706413: mov word ptr [ebp + edx*2 + 6], di */ W16((u32)(r_ebp+r_edx*2+0x6u), (u16)r_edi);
    /* 00706418: movzx ecx, word ptr [esi + edx*2 + 8] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0x8u));
    /* 0070641d: mov word ptr [ebp + edx*2 + 8], cx */ W16((u32)(r_ebp+r_edx*2+0x8u), (u16)r_ecx);
    /* 00706422: movzx ecx, word ptr [esi + edx*2 + 0xa] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0xau));
    /* 00706427: mov word ptr [ebp + edx*2 + 0xa], cx */ W16((u32)(r_ebp+r_edx*2+0xau), (u16)r_ecx);
    /* 0070642c: movzx ecx, word ptr [esi + edx*2 + 0xc] */ r_ecx = (u32)R16((u32)(r_esi+r_edx*2+0xcu));
    /* 00706431: mov word ptr [ebp + edx*2 + 0xc], cx */ W16((u32)(r_ebp+r_edx*2+0xcu), (u16)r_ecx);
    /* 00706436: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706439: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070643b: jle 0x706404 */ if ((fZ||fS!=fO)) goto L_00706404;
L_0070643d:; BB(0x0070643d);
    /* 0070643d: movzx eax, word ptr [esi + edx*2 + 4] */ r_eax = (u32)R16((u32)(r_esi+r_edx*2+0x4u));
    /* 00706442: mov word ptr [ebp + edx*2 + 4], ax */ W16((u32)(r_ebp+r_edx*2+0x4u), (u16)r_eax);
    /* 00706447: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070644a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070644c: jl 0x70643d */ if ((fS!=fO)) goto L_0070643d;
L_0070644e:; BB(0x0070644e);
    /* 0070644e: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00706451: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
L_00706455:; BB(0x00706455);
    /* 00706455: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00706458: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0070645b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070645c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070645d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070645e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070645f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706460: ret  */ FN_RET(0x00706372); r_esp += 4; return;
L_00706461:; BB(0x00706461);
    /* 00706461: mov edx, 0x698 */ r_edx = 0x698u;
    /* 00706466: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0070646a: jmp 0x7063be */ goto L_007063be;
}

void f_00706470(void) /* sub_706470 */
{
    FN_ENTER(0x00706470);
    /* 00706470: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00706475: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00706478: cmp eax, 0x5ac */ {  u32 a = r_eax; u32 b = 0x5acu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070647d: jl 0x70648c */ if ((fS!=fO)) goto L_0070648c;
L_0070647f:; BB(0x0070647f);
    /* 0070647f: cmp eax, 0x5f9 */ {  u32 a = r_eax; u32 b = 0x5f9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706484: jg 0x70648c */ if ((!fZ&&fS==fO)) goto L_0070648c;
L_00706486:; BB(0x00706486);
    /* 00706486: mov eax, 1 */ r_eax = 0x1u;
    /* 0070648b: ret  */ FN_RET(0x00706470); r_esp += 4; return;
L_0070648c:; BB(0x0070648c);
    /* 0070648c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070648e: ret  */ FN_RET(0x00706470); r_esp += 4; return;
}

void f_00706475(void) /* sub_706475 */
{
    FN_ENTER(0x00706475);
    /* 00706475: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00706478: cmp eax, 0x5ac */ {  u32 a = r_eax; u32 b = 0x5acu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070647d: jl 0x70648c */ if ((fS!=fO)) goto L_0070648c;
L_0070647f:; BB(0x0070647f);
    /* 0070647f: cmp eax, 0x5f9 */ {  u32 a = r_eax; u32 b = 0x5f9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706484: jg 0x70648c */ if ((!fZ&&fS==fO)) goto L_0070648c;
L_00706486:; BB(0x00706486);
    /* 00706486: mov eax, 1 */ r_eax = 0x1u;
    /* 0070648b: ret  */ FN_RET(0x00706475); r_esp += 4; return;
L_0070648c:; BB(0x0070648c);
    /* 0070648c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070648e: ret  */ FN_RET(0x00706475); r_esp += 4; return;
}

void f_00706490(void) /* sub_706490 */
{
    FN_ENTER(0x00706490);
    /* 00706490: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706492: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00706495: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00706499: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0070649d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007064a1: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 007064a5: mov eax, ebx */ r_eax = r_ebx;
    /* 007064a7: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007064ab: call 0x7064e5 */ r_esp -= 4; W32(r_esp, 0x7064b0u); f_007064e5();
    /* 007064b0: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 007064b3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007064b6: jle 0x7064d2 */ if ((fZ||fS!=fO)) goto L_007064d2;
L_007064b8:; BB(0x007064b8);
    /* 007064b8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007064bc: mov edx, edi */ r_edx = r_edi;
    /* 007064be: call 0x7069c0 */ r_esp -= 4; W32(r_esp, 0x7064c3u); f_007069c0();
    /* 007064c3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007064c7: movsx eax, word ptr [ebx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 007064cb: mov ecx, edi */ r_ecx = r_edi;
    /* 007064cd: call 0x706b6d */ r_esp -= 4; W32(r_esp, 0x7064d2u); f_00706b6d();
L_007064d2:; BB(0x007064d2);
    /* 007064d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007064d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007064d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007064d7: ret  */ FN_RET(0x00706490); r_esp += 4; return;
}

void f_007064d8(void) /* sub_7064D8 */
{
    FN_ENTER(0x007064d8);
    /* 007064d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007064dc: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 007064e1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007064e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007064e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007064e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007064e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007064eb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007064ed: mov edi, edx */ r_edi = r_edx;
    /* 007064ef: mov ebp, eax */ r_ebp = r_eax;
    /* 007064f1: mov eax, edi */ r_eax = r_edi;
    /* 007064f3: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x7064f8u); f_0070651d();
    /* 007064f8: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007064fc: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00706500: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00706504: mov ecx, eax */ r_ecx = r_eax;
    /* 00706506: mov eax, ebp */ r_eax = r_ebp;
    /* 00706508: mov edx, edi */ r_edx = r_edi;
    /* 0070650a: call 0x706569 */ r_esp -= 4; W32(r_esp, 0x70650fu); f_00706569();
    /* 0070650f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706512: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706514: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706515: ret  */ FN_RET(0x007064d8); r_esp += 4; return;
}

void f_007064e5(void) /* sub_7064E5 */
{
    FN_ENTER(0x007064e5);
    /* 007064e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007064e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007064e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007064e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007064eb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007064ed: mov edi, edx */ r_edi = r_edx;
    /* 007064ef: mov ebp, eax */ r_ebp = r_eax;
    /* 007064f1: mov eax, edi */ r_eax = r_edi;
    /* 007064f3: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x7064f8u); f_0070651d();
    /* 007064f8: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007064fc: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00706500: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00706504: mov ecx, eax */ r_ecx = r_eax;
    /* 00706506: mov eax, ebp */ r_eax = r_ebp;
    /* 00706508: mov edx, edi */ r_edx = r_edi;
    /* 0070650a: call 0x706569 */ r_esp -= 4; W32(r_esp, 0x70650fu); f_00706569();
    /* 0070650f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706512: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706514: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706515: ret  */ FN_RET(0x007064e5); r_esp += 4; return;
}

void f_00706518(void) /* sub_706518 */
{
    FN_ENTER(0x00706518);
    /* 00706518: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0070651d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00706520: cmp eax, 0x68c */ {  u32 a = r_eax; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706525: jl 0x70653c */ if ((fS!=fO)) goto L_0070653c;
L_00706527:; BB(0x00706527);
    /* 00706527: cmp eax, 0x697 */ {  u32 a = r_eax; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070652c: jg 0x70653c */ if ((!fZ&&fS==fO)) goto L_0070653c;
L_0070652e:; BB(0x0070652e);
    /* 0070652e: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706534: mov eax, dword ptr [edx + eax*4 - 0x1a30] */ r_eax = R32((u32)(r_edx+r_eax*4+0xffffe5d0u));
    /* 0070653b: ret  */ FN_RET(0x00706518); r_esp += 4; return;
L_0070653c:; BB(0x0070653c);
    /* 0070653c: cmp eax, 0x698 */ {  u32 a = r_eax; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706541: je 0x706557 */ if (fZ) goto L_00706557;
L_00706543:; BB(0x00706543);
    /* 00706543: mov edx, dword ptr [0xa96ec8] */ r_edx = R32((u32)(0xa96ec8u));
    /* 00706549: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 0070654f: movsx eax, word ptr [edx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*2));
    /* 00706553: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00706556: ret  */ FN_RET(0x00706518); r_esp += 4; return;
L_00706557:; BB(0x00706557);
    /* 00706557: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706559: ret  */ FN_RET(0x00706518); r_esp += 4; return;
}

void f_0070651d(void) /* sub_70651D */
{
    FN_ENTER(0x0070651d);
    /* 0070651d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00706520: cmp eax, 0x68c */ {  u32 a = r_eax; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706525: jl 0x70653c */ if ((fS!=fO)) goto L_0070653c;
L_00706527:; BB(0x00706527);
    /* 00706527: cmp eax, 0x697 */ {  u32 a = r_eax; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070652c: jg 0x70653c */ if ((!fZ&&fS==fO)) goto L_0070653c;
L_0070652e:; BB(0x0070652e);
    /* 0070652e: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00706534: mov eax, dword ptr [edx + eax*4 - 0x1a30] */ r_eax = R32((u32)(r_edx+r_eax*4+0xffffe5d0u));
    /* 0070653b: ret  */ FN_RET(0x0070651d); r_esp += 4; return;
L_0070653c:; BB(0x0070653c);
    /* 0070653c: cmp eax, 0x698 */ {  u32 a = r_eax; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706541: je 0x706557 */ if (fZ) goto L_00706557;
L_00706543:; BB(0x00706543);
    /* 00706543: mov edx, dword ptr [0xa96ec8] */ r_edx = R32((u32)(0xa96ec8u));
    /* 00706549: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 0070654f: movsx eax, word ptr [edx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*2));
    /* 00706553: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00706556: ret  */ FN_RET(0x0070651d); r_esp += 4; return;
L_00706557:; BB(0x00706557);
    /* 00706557: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706559: ret  */ FN_RET(0x0070651d); r_esp += 4; return;
}

void f_00706553(void)
{
    FN_ENTER(0x00706553);
    /* 00706553: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00706556: ret  */ FN_RET(0x00706553); r_esp += 4; return;
}

void f_0070655c(void) /* sub_70655C */
{
    FN_ENTER(0x0070655c);
    /* 0070655c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00706560: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00706565: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00706569: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070656c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070656f: mov edi, ecx */ r_edi = r_ecx;
    /* 00706571: mov esi, eax */ r_esi = r_eax;
    /* 00706573: mov eax, edx */ r_eax = r_edx;
    /* 00706575: call 0x706831 */ r_esp -= 4; W32(r_esp, 0x70657au); f_00706831();
    /* 0070657a: mov ebp, eax */ r_ebp = r_eax;
    /* 0070657c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070657f: je 0x7067cb */ if (fZ) goto L_007067cb;
L_00706585:; BB(0x00706585);
    /* 00706585: mov ecx, esi */ r_ecx = r_esi;
    /* 00706587: call 0x70811c */ r_esp -= 4; W32(r_esp, 0x70658cu); f_0070811c();
    /* 0070658c: mov esi, dword ptr [ebp*4 + 0x96e714] */ r_esi = R32((u32)(r_ebp*4+0x96e714u));
    /* 00706593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706595: jle 0x7067cb */ if ((fZ||fS!=fO)) goto L_007067cb;
L_0070659b:; BB(0x0070659b);
    /* 0070659b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0070659f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007065a0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007065a2: jl 0x7065a6 */ if ((fS!=fO)) goto L_007065a6;
L_007065a4:; BB(0x007065a4);
    /* 007065a4: mov esi, eax */ r_esi = r_eax;
L_007065a6:; BB(0x007065a6);
    /* 007065a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007065a7: call 0x8162d8 */ r_esp -= 4; W32(r_esp, 0x7065acu); f_008162d8();
    /* 007065ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007065af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065b1: je 0x706697 */ if (fZ) goto L_00706697;
L_007065b7:; BB(0x007065b7);
    /* 007065b7: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065ba: je 0x70668c */ if (fZ) goto L_0070668c;
L_007065c0:; BB(0x007065c0);
    /* 007065c0: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c3: je 0x706631 */ if (fZ) goto L_00706631;
L_007065c5:; BB(0x007065c5);
    /* 007065c5: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c8: jne 0x706601 */ if (!fZ) goto L_00706601;
L_007065ca:; BB(0x007065ca);
    /* 007065ca: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ce: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065d2: mov eax, edi */ r_eax = r_edi;
    /* 007065d4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065d9u); f_007067f0();
    /* 007065d9: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065dd: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065e1: mov eax, 0x96ea2c */ r_eax = 0x96ea2cu;
    /* 007065e6: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065ebu); f_007067f0();
    /* 007065eb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ef: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065f3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007065f7: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065fcu); f_007067f0();
    /* 007065fc: jmp 0x706685 */ goto L_00706685;
L_00706601:; BB(0x00706601);
    /* 00706601: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706604: jl 0x706685 */ if ((fS!=fO)) goto L_00706685;
L_0070660a:; BB(0x0070660a);
    /* 0070660a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070660d: jg 0x706685 */ if ((!fZ&&fS==fO)) goto L_00706685;
L_0070660f:; BB(0x0070660f);
    /* 0070660f: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706613: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706617: mov eax, edi */ r_eax = r_edi;
    /* 00706619: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70661eu); f_007067f0();
    /* 0070661e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706622: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706626: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070662a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70662fu); f_007067f0();
    /* 0070662f: jmp 0x706685 */ goto L_00706685;
L_00706631:; BB(0x00706631);
    /* 00706631: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706635: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706639: mov eax, edi */ r_eax = r_edi;
    /* 0070663b: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706640u); f_007067f0();
    /* 00706640: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00706644: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00706646: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00706649: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070664f: jge 0x706658 */ if ((fS==fO)) goto L_00706658;
L_00706651:; BB(0x00706651);
    /* 00706651: mov edx, 1 */ r_edx = 0x1u;
    /* 00706656: jmp 0x70665a */ goto L_0070665a;
L_00706658:; BB(0x00706658);
    /* 00706658: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0070665a:; BB(0x0070665a);
    /* 0070665a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070665c: je 0x706674 */ if (fZ) goto L_00706674;
L_0070665e:; BB(0x0070665e);
    /* 0070665e: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706662: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 00706666: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00706669: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070666b: mov ebp, 0x2b */ r_ebp = 0x2bu;
    /* 00706670: mov word ptr [esi + eax*2], bp */ W16((u32)(r_esi+r_eax*2), (u16)r_ebp);
L_00706674:; BB(0x00706674);
    /* 00706674: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706678: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070667c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00706680: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706685u); f_007067f0();
L_00706685:; BB(0x00706685);
    /* 00706685: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070668a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070668b: ret  */ FN_RET(0x0070655c); r_esp += 4; return;
L_0070668c:; BB(0x0070668c);
    /* 0070668c: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 00706692: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706695: je 0x7066eb */ if (fZ) goto L_007066eb;
L_00706697:; BB(0x00706697);
    /* 00706697: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0070669b: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070669f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007066a3: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066a8u); f_007067f0();
    /* 007066a8: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 007066ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007066b0: je 0x7066da */ if (fZ) goto L_007066da;
L_007066b2:; BB(0x007066b2);
    /* 007066b2: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007066b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007066b8: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007066bb: cmp ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007066c1: jge 0x7066da */ if ((fS==fO)) goto L_007066da;
L_007066c3:; BB(0x007066c3);
    /* 007066c3: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 007066c7: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007066ca: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007066cd: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066d1: mov esi, 0x20 */ r_esi = 0x20u;
    /* 007066d6: mov word ptr [edx + eax*2], si */ W16((u32)(r_edx+r_eax*2), (u16)r_esi);
L_007066da:; BB(0x007066da);
    /* 007066da: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066de: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007066e2: mov eax, edi */ r_eax = r_edi;
    /* 007066e4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066e9u); f_007067f0();
    /* 007066e9: jmp 0x706685 */ goto L_00706685;
L_007066eb:; BB(0x007066eb);
    /* 007066eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007066ec: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066f1u); f_00858009();
    /* 007066f1: mov ebp, eax */ r_ebp = r_eax;
    /* 007066f3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007066f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007066f8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066fdu); f_00858009();
    /* 007066fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706700: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706704: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00706706: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0070670a: lea eax, [eax + ebp + 1] */ r_eax = (u32)(r_eax+r_ebp+0x1u);
    /* 0070670e: lea edx, [esi + eax + 1] */ r_edx = (u32)(r_esi+r_eax+0x1u);
    /* 00706712: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706718: jge 0x706685 */ if ((fS==fO)) goto L_00706685;
L_0070671e:; BB(0x0070671e);
    /* 0070671e: mov esi, ebp */ r_esi = r_ebp;
    /* 00706720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00706722: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 00706725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706727: jle 0x70674f */ if ((fZ||fS!=fO)) goto L_0070674f;
L_00706729:; BB(0x00706729);
    /* 00706729: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
L_0070672d:; BB(0x0070672d);
    /* 0070672d: movzx ebx, word ptr [edi + ecx*2] */ r_ebx = (u32)R16((u32)(r_edi+r_ecx*2));
    /* 00706731: movzx eax, word ptr [edi + ecx*2 + 2] */ r_eax = (u32)R16((u32)(r_edi+r_ecx*2+0x2u));
    /* 00706736: cmp ebx, 0x4a */ {  u32 a = r_ebx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706739: je 0x7067be */ if (fZ) goto L_007067be;
L_0070673f:; BB(0x0070673f);
    /* 0070673f: cmp ebx, 0x6a */ {  u32 a = r_ebx; u32 b = 0x6au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706742: je 0x7067be */ if (fZ) goto L_007067be;
L_00706744:; BB(0x00706744);
    /* 00706744: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706747: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706749: jl 0x70672d */ if ((fS!=fO)) goto L_0070672d;
L_0070674b:; BB(0x0070674b);
    /* 0070674b: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
L_0070674f:; BB(0x0070674f);
    /* 0070674f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706751: je 0x70676e */ if (fZ) goto L_0070676e;
L_00706753:; BB(0x00706753);
    /* 00706753: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00706757: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706759: add edx, dword ptr [esp + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070675d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00706760: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706765u); f_00857dec();
    /* 00706765: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706768: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070676c: add dword ptr [edx], esi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070676e:; BB(0x0070676e);
    /* 0070676e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706772: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706776: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070677a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70677fu); f_007067f0();
    /* 0070677f: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00706783: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706787: call 0x706904 */ r_esp -= 4; W32(r_esp, 0x70678cu); f_00706904();
    /* 0070678c: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0070678e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706790: jle 0x706685 */ if ((fZ||fS!=fO)) goto L_00706685;
L_00706796:; BB(0x00706796);
    /* 00706796: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070679a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0070679c: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007067a7: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007067a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007067aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007067ab: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7067b0u); f_00857dec();
    /* 007067b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007067b3: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007067b7: add dword ptr [edx], ebp */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007067b9: jmp 0x706685 */ goto L_00706685;
L_007067be:; BB(0x007067be);
    /* 007067be: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007067c1: jne 0x706744 */ if (!fZ) goto L_00706744;
L_007067c3:; BB(0x007067c3);
    /* 007067c3: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 007067c7: mov esi, ecx */ r_esi = r_ecx;
    /* 007067c9: jmp 0x70674f */ goto L_0070674f;
L_007067cb:; BB(0x007067cb);
    /* 007067cb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067cf: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007067d3: mov eax, edi */ r_eax = r_edi;
    /* 007067d5: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7067dau); f_007067f0();
    /* 007067da: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007067dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007067de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007067df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007067e0: ret  */ FN_RET(0x0070655c); r_esp += 4; return;
}

void f_00706565(void)
{
    FN_ENTER(0x00706565);
    /* 00706565: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00706569: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070656c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070656f: mov edi, ecx */ r_edi = r_ecx;
    /* 00706571: mov esi, eax */ r_esi = r_eax;
    /* 00706573: mov eax, edx */ r_eax = r_edx;
    /* 00706575: call 0x706831 */ r_esp -= 4; W32(r_esp, 0x70657au); f_00706831();
    /* 0070657a: mov ebp, eax */ r_ebp = r_eax;
    /* 0070657c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070657f: je 0x7067cb */ if (fZ) goto L_007067cb;
L_00706585:; BB(0x00706585);
    /* 00706585: mov ecx, esi */ r_ecx = r_esi;
    /* 00706587: call 0x70811c */ r_esp -= 4; W32(r_esp, 0x70658cu); f_0070811c();
    /* 0070658c: mov esi, dword ptr [ebp*4 + 0x96e714] */ r_esi = R32((u32)(r_ebp*4+0x96e714u));
    /* 00706593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706595: jle 0x7067cb */ if ((fZ||fS!=fO)) goto L_007067cb;
L_0070659b:; BB(0x0070659b);
    /* 0070659b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0070659f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007065a0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007065a2: jl 0x7065a6 */ if ((fS!=fO)) goto L_007065a6;
L_007065a4:; BB(0x007065a4);
    /* 007065a4: mov esi, eax */ r_esi = r_eax;
L_007065a6:; BB(0x007065a6);
    /* 007065a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007065a7: call 0x8162d8 */ r_esp -= 4; W32(r_esp, 0x7065acu); f_008162d8();
    /* 007065ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007065af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065b1: je 0x706697 */ if (fZ) goto L_00706697;
L_007065b7:; BB(0x007065b7);
    /* 007065b7: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065ba: je 0x70668c */ if (fZ) goto L_0070668c;
L_007065c0:; BB(0x007065c0);
    /* 007065c0: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c3: je 0x706631 */ if (fZ) goto L_00706631;
L_007065c5:; BB(0x007065c5);
    /* 007065c5: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c8: jne 0x706601 */ if (!fZ) goto L_00706601;
L_007065ca:; BB(0x007065ca);
    /* 007065ca: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ce: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065d2: mov eax, edi */ r_eax = r_edi;
    /* 007065d4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065d9u); f_007067f0();
    /* 007065d9: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065dd: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065e1: mov eax, 0x96ea2c */ r_eax = 0x96ea2cu;
    /* 007065e6: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065ebu); f_007067f0();
    /* 007065eb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ef: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065f3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007065f7: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065fcu); f_007067f0();
    /* 007065fc: jmp 0x706685 */ goto L_00706685;
L_00706601:; BB(0x00706601);
    /* 00706601: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706604: jl 0x706685 */ if ((fS!=fO)) goto L_00706685;
L_0070660a:; BB(0x0070660a);
    /* 0070660a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070660d: jg 0x706685 */ if ((!fZ&&fS==fO)) goto L_00706685;
L_0070660f:; BB(0x0070660f);
    /* 0070660f: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706613: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706617: mov eax, edi */ r_eax = r_edi;
    /* 00706619: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70661eu); f_007067f0();
    /* 0070661e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706622: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706626: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070662a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70662fu); f_007067f0();
    /* 0070662f: jmp 0x706685 */ goto L_00706685;
L_00706631:; BB(0x00706631);
    /* 00706631: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706635: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706639: mov eax, edi */ r_eax = r_edi;
    /* 0070663b: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706640u); f_007067f0();
    /* 00706640: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00706644: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00706646: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00706649: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070664f: jge 0x706658 */ if ((fS==fO)) goto L_00706658;
L_00706651:; BB(0x00706651);
    /* 00706651: mov edx, 1 */ r_edx = 0x1u;
    /* 00706656: jmp 0x70665a */ goto L_0070665a;
L_00706658:; BB(0x00706658);
    /* 00706658: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0070665a:; BB(0x0070665a);
    /* 0070665a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070665c: je 0x706674 */ if (fZ) goto L_00706674;
L_0070665e:; BB(0x0070665e);
    /* 0070665e: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706662: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 00706666: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00706669: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070666b: mov ebp, 0x2b */ r_ebp = 0x2bu;
    /* 00706670: mov word ptr [esi + eax*2], bp */ W16((u32)(r_esi+r_eax*2), (u16)r_ebp);
L_00706674:; BB(0x00706674);
    /* 00706674: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706678: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070667c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00706680: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706685u); f_007067f0();
L_00706685:; BB(0x00706685);
    /* 00706685: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070668a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070668b: ret  */ FN_RET(0x00706565); r_esp += 4; return;
L_0070668c:; BB(0x0070668c);
    /* 0070668c: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 00706692: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706695: je 0x7066eb */ if (fZ) goto L_007066eb;
L_00706697:; BB(0x00706697);
    /* 00706697: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0070669b: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070669f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007066a3: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066a8u); f_007067f0();
    /* 007066a8: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 007066ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007066b0: je 0x7066da */ if (fZ) goto L_007066da;
L_007066b2:; BB(0x007066b2);
    /* 007066b2: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007066b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007066b8: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007066bb: cmp ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007066c1: jge 0x7066da */ if ((fS==fO)) goto L_007066da;
L_007066c3:; BB(0x007066c3);
    /* 007066c3: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 007066c7: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007066ca: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007066cd: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066d1: mov esi, 0x20 */ r_esi = 0x20u;
    /* 007066d6: mov word ptr [edx + eax*2], si */ W16((u32)(r_edx+r_eax*2), (u16)r_esi);
L_007066da:; BB(0x007066da);
    /* 007066da: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066de: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007066e2: mov eax, edi */ r_eax = r_edi;
    /* 007066e4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066e9u); f_007067f0();
    /* 007066e9: jmp 0x706685 */ goto L_00706685;
L_007066eb:; BB(0x007066eb);
    /* 007066eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007066ec: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066f1u); f_00858009();
    /* 007066f1: mov ebp, eax */ r_ebp = r_eax;
    /* 007066f3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007066f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007066f8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066fdu); f_00858009();
    /* 007066fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706700: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706704: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00706706: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0070670a: lea eax, [eax + ebp + 1] */ r_eax = (u32)(r_eax+r_ebp+0x1u);
    /* 0070670e: lea edx, [esi + eax + 1] */ r_edx = (u32)(r_esi+r_eax+0x1u);
    /* 00706712: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706718: jge 0x706685 */ if ((fS==fO)) goto L_00706685;
L_0070671e:; BB(0x0070671e);
    /* 0070671e: mov esi, ebp */ r_esi = r_ebp;
    /* 00706720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00706722: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 00706725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706727: jle 0x70674f */ if ((fZ||fS!=fO)) goto L_0070674f;
L_00706729:; BB(0x00706729);
    /* 00706729: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
L_0070672d:; BB(0x0070672d);
    /* 0070672d: movzx ebx, word ptr [edi + ecx*2] */ r_ebx = (u32)R16((u32)(r_edi+r_ecx*2));
    /* 00706731: movzx eax, word ptr [edi + ecx*2 + 2] */ r_eax = (u32)R16((u32)(r_edi+r_ecx*2+0x2u));
    /* 00706736: cmp ebx, 0x4a */ {  u32 a = r_ebx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706739: je 0x7067be */ if (fZ) goto L_007067be;
L_0070673f:; BB(0x0070673f);
    /* 0070673f: cmp ebx, 0x6a */ {  u32 a = r_ebx; u32 b = 0x6au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706742: je 0x7067be */ if (fZ) goto L_007067be;
L_00706744:; BB(0x00706744);
    /* 00706744: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706747: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706749: jl 0x70672d */ if ((fS!=fO)) goto L_0070672d;
L_0070674b:; BB(0x0070674b);
    /* 0070674b: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
L_0070674f:; BB(0x0070674f);
    /* 0070674f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706751: je 0x70676e */ if (fZ) goto L_0070676e;
L_00706753:; BB(0x00706753);
    /* 00706753: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00706757: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706759: add edx, dword ptr [esp + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070675d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00706760: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706765u); f_00857dec();
    /* 00706765: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706768: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070676c: add dword ptr [edx], esi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070676e:; BB(0x0070676e);
    /* 0070676e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706772: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706776: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070677a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70677fu); f_007067f0();
    /* 0070677f: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00706783: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706787: call 0x706904 */ r_esp -= 4; W32(r_esp, 0x70678cu); f_00706904();
    /* 0070678c: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0070678e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706790: jle 0x706685 */ if ((fZ||fS!=fO)) goto L_00706685;
L_00706796:; BB(0x00706796);
    /* 00706796: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070679a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0070679c: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007067a7: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007067a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007067aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007067ab: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7067b0u); f_00857dec();
    /* 007067b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007067b3: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007067b7: add dword ptr [edx], ebp */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007067b9: jmp 0x706685 */ goto L_00706685;
L_007067be:; BB(0x007067be);
    /* 007067be: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007067c1: jne 0x706744 */ if (!fZ) goto L_00706744;
L_007067c3:; BB(0x007067c3);
    /* 007067c3: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 007067c7: mov esi, ecx */ r_esi = r_ecx;
    /* 007067c9: jmp 0x70674f */ goto L_0070674f;
L_007067cb:; BB(0x007067cb);
    /* 007067cb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067cf: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007067d3: mov eax, edi */ r_eax = r_edi;
    /* 007067d5: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7067dau); f_007067f0();
    /* 007067da: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007067dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007067de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007067df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007067e0: ret  */ FN_RET(0x00706565); r_esp += 4; return;
}

void f_00706569(void) /* sub_706569 */
{
    FN_ENTER(0x00706569);
    /* 00706569: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070656b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070656c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070656f: mov edi, ecx */ r_edi = r_ecx;
    /* 00706571: mov esi, eax */ r_esi = r_eax;
    /* 00706573: mov eax, edx */ r_eax = r_edx;
    /* 00706575: call 0x706831 */ r_esp -= 4; W32(r_esp, 0x70657au); f_00706831();
    /* 0070657a: mov ebp, eax */ r_ebp = r_eax;
    /* 0070657c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070657f: je 0x7067cb */ if (fZ) goto L_007067cb;
L_00706585:; BB(0x00706585);
    /* 00706585: mov ecx, esi */ r_ecx = r_esi;
    /* 00706587: call 0x70811c */ r_esp -= 4; W32(r_esp, 0x70658cu); f_0070811c();
    /* 0070658c: mov esi, dword ptr [ebp*4 + 0x96e714] */ r_esi = R32((u32)(r_ebp*4+0x96e714u));
    /* 00706593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706595: jle 0x7067cb */ if ((fZ||fS!=fO)) goto L_007067cb;
L_0070659b:; BB(0x0070659b);
    /* 0070659b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0070659f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007065a0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007065a2: jl 0x7065a6 */ if ((fS!=fO)) goto L_007065a6;
L_007065a4:; BB(0x007065a4);
    /* 007065a4: mov esi, eax */ r_esi = r_eax;
L_007065a6:; BB(0x007065a6);
    /* 007065a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007065a7: call 0x8162d8 */ r_esp -= 4; W32(r_esp, 0x7065acu); f_008162d8();
    /* 007065ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007065af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065b1: je 0x706697 */ if (fZ) goto L_00706697;
L_007065b7:; BB(0x007065b7);
    /* 007065b7: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065ba: je 0x70668c */ if (fZ) goto L_0070668c;
L_007065c0:; BB(0x007065c0);
    /* 007065c0: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c3: je 0x706631 */ if (fZ) goto L_00706631;
L_007065c5:; BB(0x007065c5);
    /* 007065c5: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007065c8: jne 0x706601 */ if (!fZ) goto L_00706601;
L_007065ca:; BB(0x007065ca);
    /* 007065ca: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ce: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065d2: mov eax, edi */ r_eax = r_edi;
    /* 007065d4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065d9u); f_007067f0();
    /* 007065d9: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065dd: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065e1: mov eax, 0x96ea2c */ r_eax = 0x96ea2cu;
    /* 007065e6: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065ebu); f_007067f0();
    /* 007065eb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007065ef: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007065f3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007065f7: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7065fcu); f_007067f0();
    /* 007065fc: jmp 0x706685 */ goto L_00706685;
L_00706601:; BB(0x00706601);
    /* 00706601: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706604: jl 0x706685 */ if ((fS!=fO)) goto L_00706685;
L_0070660a:; BB(0x0070660a);
    /* 0070660a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070660d: jg 0x706685 */ if ((!fZ&&fS==fO)) goto L_00706685;
L_0070660f:; BB(0x0070660f);
    /* 0070660f: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706613: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706617: mov eax, edi */ r_eax = r_edi;
    /* 00706619: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70661eu); f_007067f0();
    /* 0070661e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706622: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706626: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070662a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70662fu); f_007067f0();
    /* 0070662f: jmp 0x706685 */ goto L_00706685;
L_00706631:; BB(0x00706631);
    /* 00706631: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706635: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706639: mov eax, edi */ r_eax = r_edi;
    /* 0070663b: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706640u); f_007067f0();
    /* 00706640: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00706644: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00706646: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00706649: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070664f: jge 0x706658 */ if ((fS==fO)) goto L_00706658;
L_00706651:; BB(0x00706651);
    /* 00706651: mov edx, 1 */ r_edx = 0x1u;
    /* 00706656: jmp 0x70665a */ goto L_0070665a;
L_00706658:; BB(0x00706658);
    /* 00706658: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0070665a:; BB(0x0070665a);
    /* 0070665a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070665c: je 0x706674 */ if (fZ) goto L_00706674;
L_0070665e:; BB(0x0070665e);
    /* 0070665e: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706662: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 00706666: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00706669: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070666b: mov ebp, 0x2b */ r_ebp = 0x2bu;
    /* 00706670: mov word ptr [esi + eax*2], bp */ W16((u32)(r_esi+r_eax*2), (u16)r_ebp);
L_00706674:; BB(0x00706674);
    /* 00706674: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706678: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070667c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00706680: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706685u); f_007067f0();
L_00706685:; BB(0x00706685);
    /* 00706685: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070668a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070668b: ret  */ FN_RET(0x00706569); r_esp += 4; return;
L_0070668c:; BB(0x0070668c);
    /* 0070668c: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 00706692: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706695: je 0x7066eb */ if (fZ) goto L_007066eb;
L_00706697:; BB(0x00706697);
    /* 00706697: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0070669b: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0070669f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007066a3: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066a8u); f_007067f0();
    /* 007066a8: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 007066ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007066b0: je 0x7066da */ if (fZ) goto L_007066da;
L_007066b2:; BB(0x007066b2);
    /* 007066b2: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007066b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007066b8: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007066bb: cmp ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007066c1: jge 0x7066da */ if ((fS==fO)) goto L_007066da;
L_007066c3:; BB(0x007066c3);
    /* 007066c3: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 007066c7: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007066ca: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007066cd: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066d1: mov esi, 0x20 */ r_esi = 0x20u;
    /* 007066d6: mov word ptr [edx + eax*2], si */ W16((u32)(r_edx+r_eax*2), (u16)r_esi);
L_007066da:; BB(0x007066da);
    /* 007066da: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007066de: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007066e2: mov eax, edi */ r_eax = r_edi;
    /* 007066e4: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7066e9u); f_007067f0();
    /* 007066e9: jmp 0x706685 */ goto L_00706685;
L_007066eb:; BB(0x007066eb);
    /* 007066eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007066ec: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066f1u); f_00858009();
    /* 007066f1: mov ebp, eax */ r_ebp = r_eax;
    /* 007066f3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007066f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007066f8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7066fdu); f_00858009();
    /* 007066fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706700: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706704: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00706706: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0070670a: lea eax, [eax + ebp + 1] */ r_eax = (u32)(r_eax+r_ebp+0x1u);
    /* 0070670e: lea edx, [esi + eax + 1] */ r_edx = (u32)(r_esi+r_eax+0x1u);
    /* 00706712: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706718: jge 0x706685 */ if ((fS==fO)) goto L_00706685;
L_0070671e:; BB(0x0070671e);
    /* 0070671e: mov esi, ebp */ r_esi = r_ebp;
    /* 00706720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00706722: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 00706725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706727: jle 0x70674f */ if ((fZ||fS!=fO)) goto L_0070674f;
L_00706729:; BB(0x00706729);
    /* 00706729: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
L_0070672d:; BB(0x0070672d);
    /* 0070672d: movzx ebx, word ptr [edi + ecx*2] */ r_ebx = (u32)R16((u32)(r_edi+r_ecx*2));
    /* 00706731: movzx eax, word ptr [edi + ecx*2 + 2] */ r_eax = (u32)R16((u32)(r_edi+r_ecx*2+0x2u));
    /* 00706736: cmp ebx, 0x4a */ {  u32 a = r_ebx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706739: je 0x7067be */ if (fZ) goto L_007067be;
L_0070673f:; BB(0x0070673f);
    /* 0070673f: cmp ebx, 0x6a */ {  u32 a = r_ebx; u32 b = 0x6au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706742: je 0x7067be */ if (fZ) goto L_007067be;
L_00706744:; BB(0x00706744);
    /* 00706744: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706747: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706749: jl 0x70672d */ if ((fS!=fO)) goto L_0070672d;
L_0070674b:; BB(0x0070674b);
    /* 0070674b: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
L_0070674f:; BB(0x0070674f);
    /* 0070674f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706751: je 0x70676e */ if (fZ) goto L_0070676e;
L_00706753:; BB(0x00706753);
    /* 00706753: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00706757: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706759: add edx, dword ptr [esp + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070675d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070675f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00706760: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706765u); f_00857dec();
    /* 00706765: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706768: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070676c: add dword ptr [edx], esi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070676e:; BB(0x0070676e);
    /* 0070676e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00706772: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00706776: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070677a: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x70677fu); f_007067f0();
    /* 0070677f: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00706783: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00706787: call 0x706904 */ r_esp -= 4; W32(r_esp, 0x70678cu); f_00706904();
    /* 0070678c: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0070678e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706790: jle 0x706685 */ if ((fZ||fS!=fO)) goto L_00706685;
L_00706796:; BB(0x00706796);
    /* 00706796: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0070679a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0070679c: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007067a5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007067a7: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007067a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007067aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007067ab: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7067b0u); f_00857dec();
    /* 007067b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007067b3: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007067b7: add dword ptr [edx], ebp */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007067b9: jmp 0x706685 */ goto L_00706685;
L_007067be:; BB(0x007067be);
    /* 007067be: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007067c1: jne 0x706744 */ if (!fZ) goto L_00706744;
L_007067c3:; BB(0x007067c3);
    /* 007067c3: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 007067c7: mov esi, ecx */ r_esi = r_ecx;
    /* 007067c9: jmp 0x70674f */ goto L_0070674f;
L_007067cb:; BB(0x007067cb);
    /* 007067cb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 007067cf: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 007067d3: mov eax, edi */ r_eax = r_edi;
    /* 007067d5: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x7067dau); f_007067f0();
    /* 007067da: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007067dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007067de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007067df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007067e0: ret  */ FN_RET(0x00706569); r_esp += 4; return;
}

void f_007067e4(void) /* sub_7067E4 */
{
    FN_ENTER(0x007067e4);
    /* 007067e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007067e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007067ec: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007067f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007067f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007067f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007067f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007067f6: mov esi, edx */ r_esi = r_edx;
    /* 007067f8: mov ebp, eax */ r_ebp = r_eax;
    /* 007067fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007067fc: je 0x706827 */ if (fZ) goto L_00706827;
L_007067fe:; BB(0x007067fe);
    /* 007067fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067ff: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x706804u); f_00858009();
    /* 00706804: mov ebx, eax */ r_ebx = r_eax;
    /* 00706806: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706809: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0070680b: lea eax, [ebx + edx + 1] */ r_eax = (u32)(r_ebx+r_edx+0x1u);
    /* 0070680f: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706814: jge 0x706827 */ if ((fS==fO)) goto L_00706827;
L_00706816:; BB(0x00706816);
    /* 00706816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706817: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706818: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070681a: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070681c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070681d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706822u); f_00857dec();
    /* 00706822: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706825: add dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00706827:; BB(0x00706827);
    /* 00706827: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706829: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070682a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070682b: ret  */ FN_RET(0x007067e4); r_esp += 4; return;
}

void f_007067f0(void) /* sub_7067F0 */
{
    FN_ENTER(0x007067f0);
    /* 007067f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007067f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007067f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007067f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007067f6: mov esi, edx */ r_esi = r_edx;
    /* 007067f8: mov ebp, eax */ r_ebp = r_eax;
    /* 007067fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007067fc: je 0x706827 */ if (fZ) goto L_00706827;
L_007067fe:; BB(0x007067fe);
    /* 007067fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007067ff: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x706804u); f_00858009();
    /* 00706804: mov ebx, eax */ r_ebx = r_eax;
    /* 00706806: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706809: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0070680b: lea eax, [ebx + edx + 1] */ r_eax = (u32)(r_ebx+r_edx+0x1u);
    /* 0070680f: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706814: jge 0x706827 */ if ((fS==fO)) goto L_00706827;
L_00706816:; BB(0x00706816);
    /* 00706816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706817: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706818: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070681a: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070681c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070681d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x706822u); f_00857dec();
    /* 00706822: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706825: add dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00706827:; BB(0x00706827);
    /* 00706827: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706829: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070682a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070682b: ret  */ FN_RET(0x007067f0); r_esp += 4; return;
}

void f_0070682c(void) /* sub_70682C */
{
    FN_ENTER(0x0070682c);
    /* 0070682c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00706831: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706832: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706833: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706834: mov esi, eax */ r_esi = r_eax;
    /* 00706836: movsx ebp, si */ r_ebp = (u32)(i32)(i16)(u16)r_esi;
    /* 00706839: cmp ebp, 0x2e4 */ {  u32 a = r_ebp; u32 b = 0x2e4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070683f: je 0x70689c */ if (fZ) goto L_0070689c;
L_00706841:; BB(0x00706841);
    /* 00706841: mov eax, esi */ r_eax = r_esi;
    /* 00706843: call 0x7068b1 */ r_esp -= 4; W32(r_esp, 0x706848u); f_007068b1();
    /* 00706848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070684a: je 0x706855 */ if (fZ) goto L_00706855;
L_0070684c:; BB(0x0070684c);
    /* 0070684c: mov eax, 1 */ r_eax = 0x1u;
    /* 00706851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706853: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706854: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_00706855:; BB(0x00706855);
    /* 00706855: mov eax, esi */ r_eax = r_esi;
    /* 00706857: call 0x7068d1 */ r_esp -= 4; W32(r_esp, 0x70685cu); f_007068d1();
    /* 0070685c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070685e: jne 0x706881 */ if (!fZ) goto L_00706881;
L_00706860:; BB(0x00706860);
    /* 00706860: cmp ebp, 0x4f3 */ {  u32 a = r_ebp; u32 b = 0x4f3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706866: je 0x706893 */ if (fZ) goto L_00706893;
L_00706868:; BB(0x00706868);
    /* 00706868: cmp ebp, 0x635 */ {  u32 a = r_ebp; u32 b = 0x635u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070686e: je 0x70688a */ if (fZ) goto L_0070688a;
L_00706870:; BB(0x00706870);
    /* 00706870: cmp ebp, 0x650 */ {  u32 a = r_ebp; u32 b = 0x650u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706876: je 0x7068a2 */ if (fZ) goto L_007068a2;
L_00706878:; BB(0x00706878);
    /* 00706878: mov eax, 7 */ r_eax = 0x7u;
    /* 0070687d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070687e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070687f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706880: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_00706881:; BB(0x00706881);
    /* 00706881: mov eax, 2 */ r_eax = 0x2u;
    /* 00706886: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706888: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706889: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_0070688a:; BB(0x0070688a);
    /* 0070688a: mov eax, 4 */ r_eax = 0x4u;
    /* 0070688f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706892: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_00706893:; BB(0x00706893);
    /* 00706893: mov eax, 3 */ r_eax = 0x3u;
    /* 00706898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070689a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070689b: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_0070689c:; BB(0x0070689c);
    /* 0070689c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070689e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070689f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007068a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007068a1: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
L_007068a2:; BB(0x007068a2);
    /* 007068a2: mov eax, 5 */ r_eax = 0x5u;
    /* 007068a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007068a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007068a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007068aa: ret  */ FN_RET(0x0070682c); r_esp += 4; return;
}

void f_00706831(void) /* sub_706831 */
{
    FN_ENTER(0x00706831);
    /* 00706831: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706832: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706833: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706834: mov esi, eax */ r_esi = r_eax;
    /* 00706836: movsx ebp, si */ r_ebp = (u32)(i32)(i16)(u16)r_esi;
    /* 00706839: cmp ebp, 0x2e4 */ {  u32 a = r_ebp; u32 b = 0x2e4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070683f: je 0x70689c */ if (fZ) goto L_0070689c;
L_00706841:; BB(0x00706841);
    /* 00706841: mov eax, esi */ r_eax = r_esi;
    /* 00706843: call 0x7068b1 */ r_esp -= 4; W32(r_esp, 0x706848u); f_007068b1();
    /* 00706848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070684a: je 0x706855 */ if (fZ) goto L_00706855;
L_0070684c:; BB(0x0070684c);
    /* 0070684c: mov eax, 1 */ r_eax = 0x1u;
    /* 00706851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706853: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706854: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_00706855:; BB(0x00706855);
    /* 00706855: mov eax, esi */ r_eax = r_esi;
    /* 00706857: call 0x7068d1 */ r_esp -= 4; W32(r_esp, 0x70685cu); f_007068d1();
    /* 0070685c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070685e: jne 0x706881 */ if (!fZ) goto L_00706881;
L_00706860:; BB(0x00706860);
    /* 00706860: cmp ebp, 0x4f3 */ {  u32 a = r_ebp; u32 b = 0x4f3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706866: je 0x706893 */ if (fZ) goto L_00706893;
L_00706868:; BB(0x00706868);
    /* 00706868: cmp ebp, 0x635 */ {  u32 a = r_ebp; u32 b = 0x635u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070686e: je 0x70688a */ if (fZ) goto L_0070688a;
L_00706870:; BB(0x00706870);
    /* 00706870: cmp ebp, 0x650 */ {  u32 a = r_ebp; u32 b = 0x650u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706876: je 0x7068a2 */ if (fZ) goto L_007068a2;
L_00706878:; BB(0x00706878);
    /* 00706878: mov eax, 7 */ r_eax = 0x7u;
    /* 0070687d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070687e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070687f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706880: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_00706881:; BB(0x00706881);
    /* 00706881: mov eax, 2 */ r_eax = 0x2u;
    /* 00706886: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706888: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706889: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_0070688a:; BB(0x0070688a);
    /* 0070688a: mov eax, 4 */ r_eax = 0x4u;
    /* 0070688f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706892: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_00706893:; BB(0x00706893);
    /* 00706893: mov eax, 3 */ r_eax = 0x3u;
    /* 00706898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070689a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070689b: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_0070689c:; BB(0x0070689c);
    /* 0070689c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070689e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070689f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007068a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007068a1: ret  */ FN_RET(0x00706831); r_esp += 4; return;
L_007068a2:; BB(0x007068a2);
    /* 007068a2: mov eax, 5 */ r_eax = 0x5u;
    /* 007068a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007068a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007068a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007068aa: ret  */ FN_RET(0x00706831); r_esp += 4; return;
}

void f_007068b1(void) /* sub_7068B1 */
{
    FN_ENTER(0x007068b1);
    /* 007068b1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007068b4: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007068b9: jl 0x7068c8 */ if ((fS!=fO)) goto L_007068c8;
L_007068bb:; BB(0x007068bb);
    /* 007068bb: cmp eax, 0x395 */ {  u32 a = r_eax; u32 b = 0x395u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007068c0: jg 0x7068c8 */ if ((!fZ&&fS==fO)) goto L_007068c8;
L_007068c2:; BB(0x007068c2);
    /* 007068c2: mov eax, 1 */ r_eax = 0x1u;
    /* 007068c7: ret  */ FN_RET(0x007068b1); r_esp += 4; return;
L_007068c8:; BB(0x007068c8);
    /* 007068c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007068ca: ret  */ FN_RET(0x007068b1); r_esp += 4; return;
}

void f_007068d1(void) /* sub_7068D1 */
{
    FN_ENTER(0x007068d1);
    /* 007068d1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007068d4: cmp eax, 0x45d */ {  u32 a = r_eax; u32 b = 0x45du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007068d9: jl 0x7068f6 */ if ((fS!=fO)) goto L_007068f6;
L_007068db:; BB(0x007068db);
    /* 007068db: cmp eax, 0x46f */ {  u32 a = r_eax; u32 b = 0x46fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007068e0: jg 0x7068f6 */ if ((!fZ&&fS==fO)) goto L_007068f6;
L_007068e2:; BB(0x007068e2);
    /* 007068e2: cmp eax, 0x46d */ {  u32 a = r_eax; u32 b = 0x46du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007068e7: je 0x7068f6 */ if (fZ) goto L_007068f6;
L_007068e9:; BB(0x007068e9);
    /* 007068e9: cmp eax, 0x46e */ {  u32 a = r_eax; u32 b = 0x46eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007068ee: je 0x7068f6 */ if (fZ) goto L_007068f6;
L_007068f0:; BB(0x007068f0);
    /* 007068f0: mov eax, 1 */ r_eax = 0x1u;
    /* 007068f5: ret  */ FN_RET(0x007068d1); r_esp += 4; return;
L_007068f6:; BB(0x007068f6);
    /* 007068f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007068f8: ret  */ FN_RET(0x007068d1); r_esp += 4; return;
}

void f_007068fc(void) /* sub_7068FC */
{
    FN_ENTER(0x007068fc);
    /* 007068fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00706900: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00706904: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706906: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706907: mov esi, edx */ r_esi = r_edx;
    /* 00706909: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0070690b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070690d: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 00706910: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706912: jl 0x706977 */ if ((fS!=fO)) goto L_00706977;
L_00706914:; BB(0x00706914);
    /* 00706914: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00706917: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070691a: jl 0x706964 */ if ((fS!=fO)) goto L_00706964;
L_0070691c:; BB(0x0070691c);
    /* 0070691c: movzx edi, word ptr [eax + ecx*2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00706920: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706923: je 0x706977 */ if (fZ) goto L_00706977;
L_00706925:; BB(0x00706925);
    /* 00706925: movzx edi, word ptr [eax + ecx*2 - 2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 0070692a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070692d: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706930: je 0x706977 */ if (fZ) goto L_00706977;
L_00706932:; BB(0x00706932);
    /* 00706932: movzx edi, word ptr [eax + ecx*2 - 4] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 00706937: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070693a: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070693d: je 0x706977 */ if (fZ) goto L_00706977;
L_0070693f:; BB(0x0070693f);
    /* 0070693f: movzx edi, word ptr [eax + ecx*2 - 6] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffau));
    /* 00706944: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706947: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070694a: je 0x706977 */ if (fZ) goto L_00706977;
L_0070694c:; BB(0x0070694c);
    /* 0070694c: movzx edi, word ptr [eax + ecx*2 - 8] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffff8u));
    /* 00706951: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706954: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706957: je 0x706977 */ if (fZ) goto L_00706977;
L_00706959:; BB(0x00706959);
    /* 00706959: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070695c: add ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070695f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706962: jge 0x70691c */ if ((fS==fO)) goto L_0070691c;
L_00706964:; BB(0x00706964);
    /* 00706964: movzx edi, word ptr [eax + ecx*2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00706968: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070696b: je 0x706977 */ if (fZ) goto L_00706977;
L_0070696d:; BB(0x0070696d);
    /* 0070696d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706970: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706975: jge 0x706964 */ if ((fS==fO)) goto L_00706964;
L_00706977:; BB(0x00706977);
    /* 00706977: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070697a: jle 0x706999 */ if ((fZ||fS!=fO)) goto L_00706999;
L_0070697c:; BB(0x0070697c);
    /* 0070697c: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070697f: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706985: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_00706987:; BB(0x00706987);
    /* 00706987: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 0070698a: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0070698c: mov edx, 0xa */ r_edx = 0xau;
    /* 00706991: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
    /* 00706995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706997: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706998: ret  */ FN_RET(0x007068fc); r_esp += 4; return;
L_00706999:; BB(0x00706999);
    /* 00706999: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070699c: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007069a2: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_007069a4:; BB(0x007069a4);
    /* 007069a4: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 007069a7: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 007069a9: mov edx, 0x20 */ r_edx = 0x20u;
    /* 007069ae: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
L_007069b2:; BB(0x007069b2);
    /* 007069b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007069b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007069b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007069b5: ret  */ FN_RET(0x007068fc); r_esp += 4; return;
}

void f_00706904(void) /* sub_706904 */
{
    FN_ENTER(0x00706904);
    /* 00706904: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706906: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706907: mov esi, edx */ r_esi = r_edx;
    /* 00706909: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0070690b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070690d: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 00706910: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706912: jl 0x706977 */ if ((fS!=fO)) goto L_00706977;
L_00706914:; BB(0x00706914);
    /* 00706914: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00706917: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070691a: jl 0x706964 */ if ((fS!=fO)) goto L_00706964;
L_0070691c:; BB(0x0070691c);
    /* 0070691c: movzx edi, word ptr [eax + ecx*2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00706920: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706923: je 0x706977 */ if (fZ) goto L_00706977;
L_00706925:; BB(0x00706925);
    /* 00706925: movzx edi, word ptr [eax + ecx*2 - 2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 0070692a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070692d: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706930: je 0x706977 */ if (fZ) goto L_00706977;
L_00706932:; BB(0x00706932);
    /* 00706932: movzx edi, word ptr [eax + ecx*2 - 4] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 00706937: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070693a: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070693d: je 0x706977 */ if (fZ) goto L_00706977;
L_0070693f:; BB(0x0070693f);
    /* 0070693f: movzx edi, word ptr [eax + ecx*2 - 6] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffau));
    /* 00706944: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706947: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070694a: je 0x706977 */ if (fZ) goto L_00706977;
L_0070694c:; BB(0x0070694c);
    /* 0070694c: movzx edi, word ptr [eax + ecx*2 - 8] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffff8u));
    /* 00706951: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706954: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706957: je 0x706977 */ if (fZ) goto L_00706977;
L_00706959:; BB(0x00706959);
    /* 00706959: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070695c: add ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070695f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706962: jge 0x70691c */ if ((fS==fO)) goto L_0070691c;
L_00706964:; BB(0x00706964);
    /* 00706964: movzx edi, word ptr [eax + ecx*2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00706968: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070696b: je 0x706977 */ if (fZ) goto L_00706977;
L_0070696d:; BB(0x0070696d);
    /* 0070696d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706970: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706975: jge 0x706964 */ if ((fS==fO)) goto L_00706964;
L_00706977:; BB(0x00706977);
    /* 00706977: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070697a: jle 0x706999 */ if ((fZ||fS!=fO)) goto L_00706999;
L_0070697c:; BB(0x0070697c);
    /* 0070697c: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070697f: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706985: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_00706987:; BB(0x00706987);
    /* 00706987: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 0070698a: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0070698c: mov edx, 0xa */ r_edx = 0xau;
    /* 00706991: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
    /* 00706995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706997: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706998: ret  */ FN_RET(0x00706904); r_esp += 4; return;
L_00706999:; BB(0x00706999);
    /* 00706999: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070699c: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007069a2: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_007069a4:; BB(0x007069a4);
    /* 007069a4: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 007069a7: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 007069a9: mov edx, 0x20 */ r_edx = 0x20u;
    /* 007069ae: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
L_007069b2:; BB(0x007069b2);
    /* 007069b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007069b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007069b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007069b5: ret  */ FN_RET(0x00706904); r_esp += 4; return;
}

void f_00706969(void)
{
    FN_ENTER(0x00706969);
    goto L_00706969;
L_00706964:; BB(0x00706964);
    /* 00706964: movzx edi, word ptr [eax + ecx*2] */ r_edi = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00706968: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00706969:; BB(0x00706969);
    /* 00706969: dec dword ptr [edx] */ { u32 ad = (u32)(r_edx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0070696b: je 0x706977 */ if (fZ) goto L_00706977;
L_0070696d:; BB(0x0070696d);
    /* 0070696d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00706970: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706975: jge 0x706964 */ if ((fS==fO)) goto L_00706964;
L_00706977:; BB(0x00706977);
    /* 00706977: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070697a: jle 0x706999 */ if ((fZ||fS!=fO)) goto L_00706999;
L_0070697c:; BB(0x0070697c);
    /* 0070697c: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070697f: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706985: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_00706987:; BB(0x00706987);
    /* 00706987: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 0070698a: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0070698c: mov edx, 0xa */ r_edx = 0xau;
    /* 00706991: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
    /* 00706995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706996: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706997: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706998: ret  */ FN_RET(0x00706969); r_esp += 4; return;
L_00706999:; BB(0x00706999);
    /* 00706999: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 0070699c: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007069a2: jge 0x7069b2 */ if ((fS==fO)) goto L_007069b2;
L_007069a4:; BB(0x007069a4);
    /* 007069a4: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 007069a7: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 007069a9: mov edx, 0x20 */ r_edx = 0x20u;
    /* 007069ae: mov word ptr [eax + ebp*2], dx */ W16((u32)(r_eax+r_ebp*2), (u16)r_edx);
L_007069b2:; BB(0x007069b2);
    /* 007069b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007069b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007069b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007069b5: ret  */ FN_RET(0x00706969); r_esp += 4; return;
}

void f_007069b8(void) /* sub_7069B8 */
{
    FN_ENTER(0x007069b8);
    /* 007069b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007069bc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007069c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007069c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007069c2: mov ebp, edx */ r_ebp = r_edx;
    /* 007069c4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007069c7: lea esi, [ecx + 4] */ r_esi = (u32)(r_ecx+0x4u);
    /* 007069ca: cmp esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007069d0: jge 0x7069f5 */ if ((fS==fO)) goto L_007069f5;
L_007069d2:; BB(0x007069d2);
    /* 007069d2: mov esi, 0xa */ r_esi = 0xau;
    /* 007069d7: mov word ptr [eax + ecx*2], si */ W16((u32)(r_eax+r_ecx*2), (u16)r_esi);
    /* 007069db: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 007069de: mov esi, 0x3e */ r_esi = 0x3eu;
    /* 007069e3: mov word ptr [eax + ecx*2 + 2], si */ W16((u32)(r_eax+r_ecx*2+0x2u), (u16)r_esi);
    /* 007069e8: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007069eb: mov esi, 0x20 */ r_esi = 0x20u;
    /* 007069f0: mov word ptr [eax + edx*2 + 2], si */ W16((u32)(r_eax+r_edx*2+0x2u), (u16)r_esi);
L_007069f5:; BB(0x007069f5);
    /* 007069f5: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 007069f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007069f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007069fa: ret  */ FN_RET(0x007069b8); r_esp += 4; return;
}

void f_007069c0(void) /* sub_7069C0 */
{
    FN_ENTER(0x007069c0);
    /* 007069c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007069c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007069c2: mov ebp, edx */ r_ebp = r_edx;
    /* 007069c4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007069c7: lea esi, [ecx + 4] */ r_esi = (u32)(r_ecx+0x4u);
    /* 007069ca: cmp esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007069d0: jge 0x7069f5 */ if ((fS==fO)) goto L_007069f5;
L_007069d2:; BB(0x007069d2);
    /* 007069d2: mov esi, 0xa */ r_esi = 0xau;
    /* 007069d7: mov word ptr [eax + ecx*2], si */ W16((u32)(r_eax+r_ecx*2), (u16)r_esi);
    /* 007069db: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 007069de: mov esi, 0x3e */ r_esi = 0x3eu;
    /* 007069e3: mov word ptr [eax + ecx*2 + 2], si */ W16((u32)(r_eax+r_ecx*2+0x2u), (u16)r_esi);
    /* 007069e8: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007069eb: mov esi, 0x20 */ r_esi = 0x20u;
    /* 007069f0: mov word ptr [eax + edx*2 + 2], si */ W16((u32)(r_eax+r_edx*2+0x2u), (u16)r_esi);
L_007069f5:; BB(0x007069f5);
    /* 007069f5: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 007069f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007069f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007069fa: ret  */ FN_RET(0x007069c0); r_esp += 4; return;
}

void f_007069fc(void) /* sub_7069FC */
{
    FN_ENTER(0x007069fc);
    /* 007069fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007069fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007069fe: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00706a01: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00706a06: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00706a0a: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00706a0e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706a11: mov eax, 0 */ r_eax = 0x0u;
    /* 00706a16: jg 0x706a1a */ if ((!fZ&&fS==fO)) goto L_00706a1a;
L_00706a18:; BB(0x00706a18);
    /* 00706a18: mov ecx, edi */ r_ecx = r_edi;
L_00706a1a:; BB(0x00706a1a);
    /* 00706a1a: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00706a1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00706a1f: jle 0x706b24 */ if ((fZ||fS!=fO)) goto L_00706b24;
L_00706a25:; BB(0x00706a25);
    /* 00706a25: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00706a29: mov ebp, eax */ r_ebp = r_eax;
    /* 00706a2b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00706a2f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00706a33: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00706a37: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00706a3b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00706a3f: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_00706a43:; BB(0x00706a43);
    /* 00706a43: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00706a47: movsx eax, word ptr [edi + ebp*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+r_ebp*2+0x4u));
    /* 00706a4c: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706a51u); f_0070651d();
    /* 00706a51: mov edx, esi */ r_edx = r_esi;
    /* 00706a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00706a55: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706a5au); f_007067f0();
    /* 00706a5a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00706a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00706a5e: lea edi, [edx - 1] */ r_edi = (u32)(r_edx+0xffffffffu);
    /* 00706a61: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706a63: jl 0x706ac8 */ if ((fS!=fO)) goto L_00706ac8;
L_00706a65:; BB(0x00706a65);
    /* 00706a65: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00706a68: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706a6b: jl 0x706ab5 */ if ((fS!=fO)) goto L_00706ab5;
L_00706a6d:; BB(0x00706a6d);
    /* 00706a6d: movzx ecx, word ptr [esi + edi*2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2));
    /* 00706a71: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a74: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a76:; BB(0x00706a76);
    /* 00706a76: movzx ecx, word ptr [esi + edi*2 - 2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffeu));
    /* 00706a7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a7e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a81: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a83:; BB(0x00706a83);
    /* 00706a83: movzx ecx, word ptr [esi + edi*2 - 4] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffcu));
    /* 00706a88: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a8b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a8e: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a90:; BB(0x00706a90);
    /* 00706a90: movzx ecx, word ptr [esi + edi*2 - 6] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffau));
    /* 00706a95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a98: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a9b: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a9d:; BB(0x00706a9d);
    /* 00706a9d: movzx ecx, word ptr [esi + edi*2 - 8] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffff8u));
    /* 00706aa2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706aa5: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706aa8: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706aaa:; BB(0x00706aaa);
    /* 00706aaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706aad: add edi, -5 */ {  u32 a = r_edi; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706ab0: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706ab3: jge 0x706a6d */ if ((fS==fO)) goto L_00706a6d;
L_00706ab5:; BB(0x00706ab5);
    /* 00706ab5: movzx ecx, word ptr [esi + edi*2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2));
    /* 00706ab9: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706abc: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706abe:; BB(0x00706abe);
    /* 00706abe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706ac1: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706ac4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706ac6: jge 0x706ab5 */ if ((fS==fO)) goto L_00706ab5;
L_00706ac8:; BB(0x00706ac8);
    /* 00706ac8: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706acb: jle 0x706ae8 */ if ((fZ||fS!=fO)) goto L_00706ae8;
L_00706acd:; BB(0x00706acd);
    /* 00706acd: lea edi, [edx + 2] */ r_edi = (u32)(r_edx+0x2u);
    /* 00706ad0: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706ad6: jge 0x706b01 */ if ((fS==fO)) goto L_00706b01;
L_00706ad8:; BB(0x00706ad8);
    /* 00706ad8: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00706adb: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00706add: mov edi, 0xa */ r_edi = 0xau;
    /* 00706ae2: mov word ptr [esi + edx*2], di */ W16((u32)(r_esi+r_edx*2), (u16)r_edi);
    /* 00706ae6: jmp 0x706b01 */ goto L_00706b01;
L_00706ae8:; BB(0x00706ae8);
    /* 00706ae8: lea edi, [edx + 2] */ r_edi = (u32)(r_edx+0x2u);
    /* 00706aeb: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706af1: jge 0x706b01 */ if ((fS==fO)) goto L_00706b01;
L_00706af3:; BB(0x00706af3);
    /* 00706af3: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00706af6: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00706af8: mov edi, 0x20 */ r_edi = 0x20u;
    /* 00706afd: mov word ptr [esi + edx*2], di */ W16((u32)(r_esi+r_edx*2), (u16)r_edi);
L_00706b01:; BB(0x00706b01);
    /* 00706b01: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00706b05: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00706b08: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706b0a: jl 0x706a43 */ if ((fS!=fO)) goto L_00706a43;
L_00706b10:; BB(0x00706b10);
    /* 00706b10: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00706b14: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00706b18: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00706b1c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00706b20: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_00706b24:; BB(0x00706b24);
    /* 00706b24: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00706b28: movsx eax, word ptr [ebp + ecx*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*2+0x2u));
    /* 00706b2d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00706b31: call 0x706b6d */ r_esp -= 4; W32(r_esp, 0x706b36u); f_00706b6d();
    /* 00706b36: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706b39: jle 0x706b59 */ if ((fZ||fS!=fO)) goto L_00706b59;
L_00706b3b:; BB(0x00706b3b);
    /* 00706b3b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00706b3f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00706b43: call 0x7069c0 */ r_esp -= 4; W32(r_esp, 0x706b48u); f_007069c0();
    /* 00706b48: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00706b4c: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00706b50: movsx eax, word ptr [ebp + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00706b54: call 0x706b6d */ r_esp -= 4; W32(r_esp, 0x706b59u); f_00706b6d();
L_00706b59:; BB(0x00706b59);
    /* 00706b59: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706b5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706b5e: ret  */ FN_RET(0x007069fc); r_esp += 4; return;
}

void f_00706a80(void)
{
    FN_ENTER(0x00706a80);
    goto L_00706a80;
L_00706a43:; BB(0x00706a43);
    /* 00706a43: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00706a47: movsx eax, word ptr [edi + ebp*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+r_ebp*2+0x4u));
    /* 00706a4c: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706a51u); f_0070651d();
    /* 00706a51: mov edx, esi */ r_edx = r_esi;
    /* 00706a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00706a55: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706a5au); f_007067f0();
    /* 00706a5a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00706a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00706a5e: lea edi, [edx - 1] */ r_edi = (u32)(r_edx+0xffffffffu);
    /* 00706a61: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706a63: jl 0x706ac8 */ if ((fS!=fO)) goto L_00706ac8;
L_00706a65:; BB(0x00706a65);
    /* 00706a65: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00706a68: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706a6b: jl 0x706ab5 */ if ((fS!=fO)) goto L_00706ab5;
L_00706a6d:; BB(0x00706a6d);
    /* 00706a6d: movzx ecx, word ptr [esi + edi*2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2));
    /* 00706a71: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a74: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a76:; BB(0x00706a76);
    /* 00706a76: movzx ecx, word ptr [esi + edi*2 - 2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffeu));
    /* 00706a7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a7e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00706a80:; BB(0x00706a80);
    /* 00706a80: or dh, byte ptr [ebp + eax*2 + 0xf] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_ebp+r_eax*2+0xfu)); u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fO = 0; }
    /* 00706a81: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a83:; BB(0x00706a83);
    /* 00706a83: movzx ecx, word ptr [esi + edi*2 - 4] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffcu));
L_00706a84:; BB(0x00706a84);
    /* 00706a84: mov bh, 0x4c */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x4cu) & 0xffu) << 8);
    /* 00706a86: jle 0x706a84 */ if ((fZ||fS!=fO)) goto L_00706a84;
L_00706a88:; BB(0x00706a88);
    /* 00706a88: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a8b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a8e: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a90:; BB(0x00706a90);
    /* 00706a90: movzx ecx, word ptr [esi + edi*2 - 6] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffffau));
    /* 00706a95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706a98: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706a9b: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706a9d:; BB(0x00706a9d);
    /* 00706a9d: movzx ecx, word ptr [esi + edi*2 - 8] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2+0xfffffff8u));
    /* 00706aa2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706aa5: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706aa8: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706aaa:; BB(0x00706aaa);
    /* 00706aaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706aad: add edi, -5 */ {  u32 a = r_edi; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706ab0: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706ab3: jge 0x706a6d */ if ((fS==fO)) goto L_00706a6d;
L_00706ab5:; BB(0x00706ab5);
    /* 00706ab5: movzx ecx, word ptr [esi + edi*2] */ r_ecx = (u32)R16((u32)(r_esi+r_edi*2));
    /* 00706ab9: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706abc: je 0x706ac8 */ if (fZ) goto L_00706ac8;
L_00706abe:; BB(0x00706abe);
    /* 00706abe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706ac1: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00706ac4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706ac6: jge 0x706ab5 */ if ((fS==fO)) goto L_00706ab5;
L_00706ac8:; BB(0x00706ac8);
    /* 00706ac8: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706acb: jle 0x706ae8 */ if ((fZ||fS!=fO)) goto L_00706ae8;
L_00706acd:; BB(0x00706acd);
    /* 00706acd: lea edi, [edx + 2] */ r_edi = (u32)(r_edx+0x2u);
    /* 00706ad0: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706ad6: jge 0x706b01 */ if ((fS==fO)) goto L_00706b01;
L_00706ad8:; BB(0x00706ad8);
    /* 00706ad8: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00706adb: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00706add: mov edi, 0xa */ r_edi = 0xau;
    /* 00706ae2: mov word ptr [esi + edx*2], di */ W16((u32)(r_esi+r_edx*2), (u16)r_edi);
    /* 00706ae6: jmp 0x706b01 */ goto L_00706b01;
L_00706ae8:; BB(0x00706ae8);
    /* 00706ae8: lea edi, [edx + 2] */ r_edi = (u32)(r_edx+0x2u);
    /* 00706aeb: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706af1: jge 0x706b01 */ if ((fS==fO)) goto L_00706b01;
L_00706af3:; BB(0x00706af3);
    /* 00706af3: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00706af6: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00706af8: mov edi, 0x20 */ r_edi = 0x20u;
    /* 00706afd: mov word ptr [esi + edx*2], di */ W16((u32)(r_esi+r_edx*2), (u16)r_edi);
L_00706b01:; BB(0x00706b01);
    /* 00706b01: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00706b05: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00706b08: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706b0a: jl 0x706a43 */ if ((fS!=fO)) goto L_00706a43;
L_00706b10:; BB(0x00706b10);
    /* 00706b10: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00706b14: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00706b18: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00706b1c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00706b20: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00706b24: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00706b28: movsx eax, word ptr [ebp + ecx*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*2+0x2u));
    /* 00706b2d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00706b31: call 0x706b6d */ r_esp -= 4; W32(r_esp, 0x706b36u); f_00706b6d();
    /* 00706b36: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706b39: jle 0x706b59 */ if ((fZ||fS!=fO)) goto L_00706b59;
L_00706b3b:; BB(0x00706b3b);
    /* 00706b3b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00706b3f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00706b43: call 0x7069c0 */ r_esp -= 4; W32(r_esp, 0x706b48u); f_007069c0();
    /* 00706b48: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00706b4c: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00706b50: movsx eax, word ptr [ebp + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00706b54: call 0x706b6d */ r_esp -= 4; W32(r_esp, 0x706b59u); f_00706b6d();
L_00706b59:; BB(0x00706b59);
    /* 00706b59: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706b5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706b5e: ret  */ FN_RET(0x00706a80); r_esp += 4; return;
}

void f_00706b60(void) /* sub_706B60 */
{
    FN_ENTER(0x00706b60);
    /* 00706b60: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00706b65: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00706b69: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00706b6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706b6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706b6f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00706b72: mov edi, ecx */ r_edi = r_ecx;
    /* 00706b74: mov esi, edx */ r_esi = r_edx;
    /* 00706b76: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706b7bu); f_0070651d();
    /* 00706b7b: mov edx, esi */ r_edx = r_esi;
    /* 00706b7d: mov ecx, edi */ r_ecx = r_edi;
    /* 00706b7f: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706b84u); f_007067f0();
    /* 00706b84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706b87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706b88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706b89: ret  */ FN_RET(0x00706b60); r_esp += 4; return;
}

void f_00706b6d(void) /* sub_706B6D */
{
    FN_ENTER(0x00706b6d);
    /* 00706b6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706b6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706b6f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00706b72: mov edi, ecx */ r_edi = r_ecx;
    /* 00706b74: mov esi, edx */ r_esi = r_edx;
    /* 00706b76: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706b7bu); f_0070651d();
    /* 00706b7b: mov edx, esi */ r_edx = r_esi;
    /* 00706b7d: mov ecx, edi */ r_ecx = r_edi;
    /* 00706b7f: call 0x7067f0 */ r_esp -= 4; W32(r_esp, 0x706b84u); f_007067f0();
    /* 00706b84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706b87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706b88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706b89: ret  */ FN_RET(0x00706b6d); r_esp += 4; return;
}

void f_00706b8c(void) /* sub_706B8C */
{
    FN_ENTER(0x00706b8c);
    /* 00706b8c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00706b91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706b92: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x706b97u); f_0068d5a8();
    /* 00706b97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706b9a: je 0x706baa */ if (fZ) goto L_00706baa;
L_00706b9c:; BB(0x00706b9c);
    /* 00706b9c: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 00706ba2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00706ba4: jne 0x706baa */ if (!fZ) goto L_00706baa;
L_00706ba6:; BB(0x00706ba6);
    /* 00706ba6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706ba8: jne 0x706bad */ if (!fZ) goto L_00706bad;
L_00706baa:; BB(0x00706baa);
    /* 00706baa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706bac: ret  */ FN_RET(0x00706b8c); r_esp += 4; return;
L_00706bad:; BB(0x00706bad);
    /* 00706bad: mov eax, 2 */ r_eax = 0x2u;
    /* 00706bb2: ret  */ FN_RET(0x00706b8c); r_esp += 4; return;
}

void f_00706bb4(void) /* sub_706BB4 */
{
    FN_ENTER(0x00706bb4);
    /* 00706bb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706bb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706bb6: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00706bbb: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00706bbf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00706bc3: call 0x705540 */ r_esp -= 4; W32(r_esp, 0x706bc8u); f_00705540();
    /* 00706bc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706bcb: je 0x706be3 */ if (fZ) goto L_00706be3;
L_00706bcd:; BB(0x00706bcd);
    /* 00706bcd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706bcf: jl 0x706bde */ if ((fS!=fO)) goto L_00706bde;
L_00706bd1:; BB(0x00706bd1);
    /* 00706bd1: cmp ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706bd4: jge 0x706bde */ if ((fS==fO)) goto L_00706bde;
L_00706bd6:; BB(0x00706bd6);
    /* 00706bd6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00706bd8: movsx ebx, word ptr [eax + ebp*2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebp*2));
    /* 00706bdc: jmp 0x706be3 */ goto L_00706be3;
L_00706bde:; BB(0x00706bde);
    /* 00706bde: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00706be3:; BB(0x00706be3);
    /* 00706be3: mov eax, ebx */ r_eax = r_ebx;
    /* 00706be5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706be7: ret  */ FN_RET(0x00706bb4); r_esp += 4; return;
}

void f_00706be8(void) /* sub_706BE8 */
{
    FN_ENTER(0x00706be8);
    /* 00706be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706be9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706bea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706beb: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00706bf0: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00706bf4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00706bf8: call 0x706c24 */ r_esp -= 4; W32(r_esp, 0x706bfdu); f_00706c24();
    /* 00706bfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706bff: je 0x706c17 */ if (fZ) goto L_00706c17;
L_00706c01:; BB(0x00706c01);
    /* 00706c01: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c03: jl 0x706c12 */ if ((fS!=fO)) goto L_00706c12;
L_00706c05:; BB(0x00706c05);
    /* 00706c05: cmp ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706c08: jge 0x706c12 */ if ((fS==fO)) goto L_00706c12;
L_00706c0a:; BB(0x00706c0a);
    /* 00706c0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00706c0c: movsx ebx, word ptr [eax + ebp*2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebp*2));
    /* 00706c10: jmp 0x706c17 */ goto L_00706c17;
L_00706c12:; BB(0x00706c12);
    /* 00706c12: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00706c17:; BB(0x00706c17);
    /* 00706c17: mov eax, ebx */ r_eax = r_ebx;
    /* 00706c19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706c1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706c1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706c1c: ret  */ FN_RET(0x00706be8); r_esp += 4; return;
}

void f_00706c20(void) /* sub_706C20 */
{
    FN_ENTER(0x00706c20);
    /* 00706c20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00706c24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706c26: jl 0x706c30 */ if ((fS!=fO)) goto L_00706c30;
L_00706c28:; BB(0x00706c28);
    /* 00706c28: cmp eax, dword ptr [0xa96ec0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ec0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706c2e: jl 0x706c33 */ if ((fS!=fO)) goto L_00706c33;
L_00706c30:; BB(0x00706c30);
    /* 00706c30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c32: ret  */ FN_RET(0x00706c20); r_esp += 4; return;
L_00706c33:; BB(0x00706c33);
    /* 00706c33: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c39: add eax, dword ptr [0xa96ecc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96eccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706c3f: ret  */ FN_RET(0x00706c20); r_esp += 4; return;
}

void f_00706c24(void)
{
    FN_ENTER(0x00706c24);
    /* 00706c24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00706c26: jl 0x706c30 */ if ((fS!=fO)) goto L_00706c30;
L_00706c28:; BB(0x00706c28);
    /* 00706c28: cmp eax, dword ptr [0xa96ec0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ec0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00706c2e: jl 0x706c33 */ if ((fS!=fO)) goto L_00706c33;
L_00706c30:; BB(0x00706c30);
    /* 00706c30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c32: ret  */ FN_RET(0x00706c24); r_esp += 4; return;
L_00706c33:; BB(0x00706c33);
    /* 00706c33: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00706c39: add eax, dword ptr [0xa96ecc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96eccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706c3f: ret  */ FN_RET(0x00706c24); r_esp += 4; return;
}

void f_00706c40(void) /* sub_706C40 */
{
    FN_ENTER(0x00706c40);
    /* 00706c40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00706c44: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 00706c48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c4a: je 0x706c57 */ if (fZ) goto L_00706c57;
L_00706c4c:; BB(0x00706c4c);
    /* 00706c4c: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706c52: call 0x700c5c */ r_esp -= 4; W32(r_esp, 0x706c57u); f_00700c5c();
L_00706c57:; BB(0x00706c57);
    /* 00706c57: ret 4 */ FN_RET(0x00706c40); r_esp += 8; return;
}

void f_00706c5c(void) /* sub_706C5C */
{
    FN_ENTER(0x00706c5c);
    /* 00706c5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00706c60: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 00706c64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c66: je 0x706c73 */ if (fZ) goto L_00706c73;
L_00706c68:; BB(0x00706c68);
    /* 00706c68: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706c6e: call 0x700cac */ r_esp -= 4; W32(r_esp, 0x706c73u); f_00700cac();
L_00706c73:; BB(0x00706c73);
    /* 00706c73: ret 4 */ FN_RET(0x00706c5c); r_esp += 8; return;
}

void f_00706c78(void) /* sub_706C78 */
{
    FN_ENTER(0x00706c78);
    /* 00706c78: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00706c7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706c7d: je 0x706c90 */ if (fZ) goto L_00706c90;
L_00706c7f:; BB(0x00706c7f);
    /* 00706c7f: mov eax, dword ptr [0xa96dc8] */ r_eax = R32((u32)(0xa96dc8u));
    /* 00706c84: mov edx, dword ptr [0x96e518] */ r_edx = R32((u32)(0x96e518u));
    /* 00706c8a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00706c8d: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
L_00706c90:; BB(0x00706c90);
    /* 00706c90: ret  */ FN_RET(0x00706c78); r_esp += 4; return;
}

void f_00706c94(void) /* sub_706C94 */
{
    FN_ENTER(0x00706c94);
    /* 00706c94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706c95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706c96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706c97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00706c99: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 00706c9f: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 00706ca5: mov dword ptr [ebx + 0xa8], 2 */ W32((u32)(r_ebx+0xa8u), 0x2u);
    /* 00706caf: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00706cb1: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 00706cb7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00706cba: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 00706cc0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00706cc3: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 00706cc9: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00706ccc: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 00706cd2: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00706cd5: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 00706cdb: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00706cde: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 00706ce4: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00706ce7: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00706ced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706cef: je 0x706cff */ if (fZ) goto L_00706cff;
L_00706cf1:; BB(0x00706cf1);
    /* 00706cf1: lea eax, [ebx + 0xc4] */ r_eax = (u32)(r_ebx+0xc4u);
    /* 00706cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706cf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00706cfa: call 0x706d8c */ r_esp -= 4; W32(r_esp, 0x706cffu); f_00706d8c();
L_00706cff:; BB(0x00706cff);
    /* 00706cff: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00706d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d07: je 0x706d18 */ if (fZ) goto L_00706d18;
L_00706d09:; BB(0x00706d09);
    /* 00706d09: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d0eu); f_007127b0();
    /* 00706d0e: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
L_00706d18:; BB(0x00706d18);
    /* 00706d18: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00706d1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d20: je 0x706d31 */ if (fZ) goto L_00706d31;
L_00706d22:; BB(0x00706d22);
    /* 00706d22: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d27u); f_007127b0();
    /* 00706d27: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
L_00706d31:; BB(0x00706d31);
    /* 00706d31: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 00706d34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d36: je 0x706d44 */ if (fZ) goto L_00706d44;
L_00706d38:; BB(0x00706d38);
    /* 00706d38: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d3du); f_007127b0();
    /* 00706d3d: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
L_00706d44:; BB(0x00706d44);
    /* 00706d44: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 00706d47: lea eax, [ebx + 0x7c] */ r_eax = (u32)(r_ebx+0x7cu);
    /* 00706d4a: mov ebp, eax */ r_ebp = r_eax;
    /* 00706d4c: mov esi, edx */ r_esi = r_edx;
L_00706d4e:; BB(0x00706d4e);
    /* 00706d4e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00706d50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d52: je 0x706d5f */ if (fZ) goto L_00706d5f;
L_00706d54:; BB(0x00706d54);
    /* 00706d54: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d59u); f_007127b0();
    /* 00706d59: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00706d5f:; BB(0x00706d5f);
    /* 00706d5f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d62: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00706d64: ja 0x706d4e */ if ((!fC&&!fZ)) goto L_00706d4e;
L_00706d66:; BB(0x00706d66);
    /* 00706d66: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00706d69: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706d6c: mov esi, eax */ r_esi = r_eax;
L_00706d6e:; BB(0x00706d6e);
    /* 00706d6e: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 00706d71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d73: je 0x706d81 */ if (fZ) goto L_00706d81;
L_00706d75:; BB(0x00706d75);
    /* 00706d75: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d7au); f_007127b0();
    /* 00706d7a: mov dword ptr [esi - 4], 0 */ W32((u32)(r_esi+0xfffffffcu), 0x0u);
L_00706d81:; BB(0x00706d81);
    /* 00706d81: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d84: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706d86: jbe 0x706d6e */ if ((fC||fZ)) goto L_00706d6e;
L_00706d88:; BB(0x00706d88);
    /* 00706d88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706d8b: ret  */ FN_RET(0x00706c94); r_esp += 4; return;
}

void f_00706d43(void)
{
    FN_ENTER(0x00706d43);
    goto L_00706d43;
L_00706cd6:; BB(0x00706cd6);
    /* 00706cd6: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00706cd7: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00706cd9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00706cdb: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00706cde: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 00706ce4: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00706ce7: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00706ced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706cef: je 0x706cff */ if (fZ) goto L_00706cff;
L_00706cf1:; BB(0x00706cf1);
    /* 00706cf1: lea eax, [ebx + 0xc4] */ r_eax = (u32)(r_ebx+0xc4u);
    /* 00706cf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706cf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00706cfa: call 0x706d8c */ r_esp -= 4; W32(r_esp, 0x706cffu); f_00706d8c();
L_00706cff:; BB(0x00706cff);
    /* 00706cff: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00706d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d07: je 0x706d18 */ if (fZ) goto L_00706d18;
L_00706d09:; BB(0x00706d09);
    /* 00706d09: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d0eu); f_007127b0();
    /* 00706d0e: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
L_00706d18:; BB(0x00706d18);
    /* 00706d18: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00706d1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d20: je 0x706d31 */ if (fZ) goto L_00706d31;
L_00706d22:; BB(0x00706d22);
    /* 00706d22: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d27u); f_007127b0();
    /* 00706d27: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
L_00706d31:; BB(0x00706d31);
    /* 00706d31: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 00706d34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d36: je 0x706d44 */ if (fZ) goto L_00706d44;
L_00706d38:; BB(0x00706d38);
    /* 00706d38: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d3du); f_007127b0();
    /* 00706d3d: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
L_00706d43:; BB(0x00706d43);
    /* 00706d43: add byte ptr [ebp + 0x438d6453], cl */ { u32 ad = (u32)(r_ebp+0x438d6453u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
L_00706d44:; BB(0x00706d44);
    /* 00706d44: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 00706d47: lea eax, [ebx + 0x7c] */ r_eax = (u32)(r_ebx+0x7cu);
    /* 00706d49: jl 0x706cd6 */ if ((fS!=fO)) goto L_00706cd6;
    /* 00706d4a: mov ebp, eax */ r_ebp = r_eax;
L_00706d4b:; BB(0x00706d4b);
    /* 00706d4b: call 0xefc5fdb */ r_esp -= 4; W32(r_esp, 0x706d50u); f_0efc5fdb();
    /* 00706d4c: mov esi, edx */ r_esi = r_edx;
L_00706d4e:; BB(0x00706d4e);
    /* 00706d4e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00706d50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d52: je 0x706d5f */ if (fZ) goto L_00706d5f;
L_00706d54:; BB(0x00706d54);
    /* 00706d54: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d59u); f_007127b0();
    /* 00706d59: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00706d5f:; BB(0x00706d5f);
    /* 00706d5f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d62: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00706d64: ja 0x706d4e */ if ((!fC&&!fZ)) goto L_00706d4e;
L_00706d66:; BB(0x00706d66);
    /* 00706d66: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00706d69: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706d6c: mov esi, eax */ r_esi = r_eax;
L_00706d6e:; BB(0x00706d6e);
    /* 00706d6e: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 00706d71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d73: je 0x706d81 */ if (fZ) goto L_00706d81;
L_00706d75:; BB(0x00706d75);
    /* 00706d75: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d7au); f_007127b0();
    /* 00706d7a: mov dword ptr [esi - 4], 0 */ W32((u32)(r_esi+0xfffffffcu), 0x0u);
L_00706d81:; BB(0x00706d81);
    /* 00706d81: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d84: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706d86: jbe 0x706d6e */ if ((fC||fZ)) goto L_00706d6e;
L_00706d88:; BB(0x00706d88);
    /* 00706d88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706d8b: ret  */ FN_RET(0x00706d43); r_esp += 4; return;
}

void f_00706d63(void)
{
    FN_ENTER(0x00706d63);
    goto L_00706d63;
L_00706d4e:; BB(0x00706d4e);
    /* 00706d4e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00706d50: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d52: je 0x706d5f */ if (fZ) goto L_00706d5f;
L_00706d54:; BB(0x00706d54);
    /* 00706d54: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d59u); f_007127b0();
    /* 00706d59: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00706d5f:; BB(0x00706d5f);
    /* 00706d5f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d62: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
L_00706d63:; BB(0x00706d63);
    /* 00706d63: out dx, al */ UNSUP(0x00706d63, "out dx, al");
    /* 00706d64: ja 0x706d4e */ if ((!fC&&!fZ)) goto L_00706d4e;
L_00706d66:; BB(0x00706d66);
    /* 00706d66: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00706d69: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706d6c: mov esi, eax */ r_esi = r_eax;
L_00706d6e:; BB(0x00706d6e);
    /* 00706d6e: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 00706d71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706d73: je 0x706d81 */ if (fZ) goto L_00706d81;
L_00706d75:; BB(0x00706d75);
    /* 00706d75: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706d7au); f_007127b0();
    /* 00706d7a: mov dword ptr [esi - 4], 0 */ W32((u32)(r_esi+0xfffffffcu), 0x0u);
L_00706d81:; BB(0x00706d81);
    /* 00706d81: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706d84: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706d86: jbe 0x706d6e */ if ((fC||fZ)) goto L_00706d6e;
L_00706d88:; BB(0x00706d88);
    /* 00706d88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706d8b: ret  */ FN_RET(0x00706d63); r_esp += 4; return;
}

void f_00706d8c(void) /* sub_706D8C */
{
    FN_ENTER(0x00706d8c);
    /* 00706d8c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00706d91: mov word ptr [0xa96ed8], ax */ W16((u32)(0xa96ed8u), (u16)r_eax);
    /* 00706d97: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00706d9b: call 0x705454 */ r_esp -= 4; W32(r_esp, 0x706da0u); f_00705454();
    /* 00706da0: ret 4 */ FN_RET(0x00706d8c); r_esp += 8; return;
}

void f_00706da4(void) /* sub_706DA4 */
{
    FN_ENTER(0x00706da4);
    /* 00706da4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706da5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706da6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706da7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00706da9: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00706daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706db1: mov dword ptr [ebx + 0xa8], 3 */ W32((u32)(r_ebx+0xa8u), 0x3u);
    /* 00706dbb: je 0x706dcc */ if (fZ) goto L_00706dcc;
L_00706dbd:; BB(0x00706dbd);
    /* 00706dbd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706dc2u); f_007127b0();
    /* 00706dc2: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
L_00706dcc:; BB(0x00706dcc);
    /* 00706dcc: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00706dd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706dd4: je 0x706de5 */ if (fZ) goto L_00706de5;
L_00706dd6:; BB(0x00706dd6);
    /* 00706dd6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706ddbu); f_007127b0();
    /* 00706ddb: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
L_00706de5:; BB(0x00706de5);
    /* 00706de5: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 00706de8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706dea: je 0x706df8 */ if (fZ) goto L_00706df8;
L_00706dec:; BB(0x00706dec);
    /* 00706dec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706df1u); f_007127b0();
    /* 00706df1: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
L_00706df8:; BB(0x00706df8);
    /* 00706df8: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 00706dfb: lea eax, [ebx + 0x7c] */ r_eax = (u32)(r_ebx+0x7cu);
    /* 00706dfe: mov ebp, eax */ r_ebp = r_eax;
    /* 00706e00: mov esi, edx */ r_esi = r_edx;
L_00706e02:; BB(0x00706e02);
    /* 00706e02: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00706e04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706e06: je 0x706e13 */ if (fZ) goto L_00706e13;
L_00706e08:; BB(0x00706e08);
    /* 00706e08: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706e0du); f_007127b0();
    /* 00706e0d: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00706e13:; BB(0x00706e13);
    /* 00706e13: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706e16: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00706e18: ja 0x706e02 */ if ((!fC&&!fZ)) goto L_00706e02;
L_00706e1a:; BB(0x00706e1a);
    /* 00706e1a: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00706e1d: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00706e20: mov esi, eax */ r_esi = r_eax;
L_00706e22:; BB(0x00706e22);
    /* 00706e22: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 00706e25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706e27: je 0x706e35 */ if (fZ) goto L_00706e35;
L_00706e29:; BB(0x00706e29);
    /* 00706e29: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x706e2eu); f_007127b0();
    /* 00706e2e: mov dword ptr [esi - 4], 0 */ W32((u32)(r_esi+0xfffffffcu), 0x0u);
L_00706e35:; BB(0x00706e35);
    /* 00706e35: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00706e38: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706e3a: jbe 0x706e22 */ if ((fC||fZ)) goto L_00706e22;
L_00706e3c:; BB(0x00706e3c);
    /* 00706e3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706e3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00706e3f: ret  */ FN_RET(0x00706da4); r_esp += 4; return;
}

void f_00706e40(void) /* sub_706E40 */
{
    FN_ENTER(0x00706e40);
    /* 00706e40: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00706e44: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00706e47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706e49: lea eax, [eax + eax + 0x9d05e0] */ r_eax = (u32)(r_eax+r_eax+0x9d05e0u);
    /* 00706e50: ret 4 */ FN_RET(0x00706e40); r_esp += 8; return;
}

void f_00706e54(void) /* sub_706E54 */
{
    FN_ENTER(0x00706e54);
    /* 00706e54: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00706e59: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00706e5c: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00706e62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706e63: call 0x6ffb1c */ r_esp -= 4; W32(r_esp, 0x706e68u); f_006ffb1c();
    /* 00706e68: ret  */ FN_RET(0x00706e54); r_esp += 4; return;
}

void f_00706e6c(void) /* sub_706E6C */
{
    FN_ENTER(0x00706e6c);
    /* 00706e6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706e6d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00706e6f: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 00706e72: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00706e77: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00706e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706e7a: call 0x6ffb1c */ r_esp -= 4; W32(r_esp, 0x706e7fu); f_006ffb1c();
    /* 00706e7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706e81: jne 0x706e95 */ if (!fZ) goto L_00706e95;
L_00706e83:; BB(0x00706e83);
    /* 00706e83: mov eax, dword ptr [ebp + 0x94] */ r_eax = R32((u32)(r_ebp+0x94u));
    /* 00706e89: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706e8f: jne 0x706e95 */ if (!fZ) goto L_00706e95;
L_00706e91:; BB(0x00706e91);
    /* 00706e91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706e93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706e94: ret  */ FN_RET(0x00706e6c); r_esp += 4; return;
L_00706e95:; BB(0x00706e95);
    /* 00706e95: mov eax, 1 */ r_eax = 0x1u;
    /* 00706e9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706e9b: ret  */ FN_RET(0x00706e6c); r_esp += 4; return;
}

void f_00706e9c(void) /* sub_706E9C */
{
    FN_ENTER(0x00706e9c);
    /* 00706e9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706e9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706e9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706e9f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00706ea2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00706ea4: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00706ea8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00706eab: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00706eae: mov ecx, dword ptr [ebp + edx*4 + 0x24] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x24u));
    /* 00706eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706eb3: call 0x700f5c */ r_esp -= 4; W32(r_esp, 0x706eb8u); f_00700f5c();
    /* 00706eb8: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00706ebb: mov ecx, dword ptr [ebp + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x24u));
    /* 00706ebf: call 0x700f78 */ r_esp -= 4; W32(r_esp, 0x706ec4u); f_00700f78();
    /* 00706ec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706ec6: je 0x706f5f */ if (fZ) goto L_00706f5f;
L_00706ecc:; BB(0x00706ecc);
    /* 00706ecc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706ece: jne 0x706ee6 */ if (!fZ) goto L_00706ee6;
L_00706ed0:; BB(0x00706ed0);
    /* 00706ed0: mov edx, dword ptr [0x96e570] */ r_edx = R32((u32)(0x96e570u));
    /* 00706ed6: mov edi, dword ptr [0x96e574] */ r_edi = R32((u32)(0x96e574u));
    /* 00706edc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00706ee0: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00706ee4: jmp 0x706efa */ goto L_00706efa;
L_00706ee6:; BB(0x00706ee6);
    /* 00706ee6: mov edx, dword ptr [0x96e578] */ r_edx = R32((u32)(0x96e578u));
    /* 00706eec: mov edi, dword ptr [0xa96d7c] */ r_edi = R32((u32)(0xa96d7cu));
    /* 00706ef2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00706ef6: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
L_00706efa:; BB(0x00706efa);
    /* 00706efa: mov edx, dword ptr [0x96e528] */ r_edx = R32((u32)(0x96e528u));
    /* 00706f00: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00706f04: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00706f08: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00706f0c: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 00706f10: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00706f14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00706f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706f17: push dword ptr [0xa96d84] */ { u32 v = R32((u32)(0xa96d84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00706f1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706f1f: call 0x700a80 */ r_esp -= 4; W32(r_esp, 0x706f24u); f_00700a80();
    /* 00706f24: mov edi, eax */ r_edi = r_eax;
    /* 00706f26: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00706f29: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706f2b: je 0x706f5f */ if (fZ) goto L_00706f5f;
L_00706f2d:; BB(0x00706f2d);
    /* 00706f2d: push dword ptr [0xa96d50] */ { u32 v = R32((u32)(0xa96d50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706f33: mov ecx, edi */ r_ecx = r_edi;
    /* 00706f35: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x706f3au); f_00712624();
    /* 00706f3a: mov ecx, edi */ r_ecx = r_edi;
    /* 00706f3c: call 0x700c30 */ r_esp -= 4; W32(r_esp, 0x706f41u); f_00700c30();
    /* 00706f41: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00706f44: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 00706f47: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00706f4b: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706f51: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 00706f54: mov ecx, edi */ r_ecx = r_edi;
    /* 00706f56: call 0x700cac */ r_esp -= 4; W32(r_esp, 0x706f5bu); f_00700cac();
    /* 00706f5b: mov dword ptr [ebp + ebx*4 + 0x74], edi */ W32((u32)(r_ebp+r_ebx*4+0x74u), r_edi);
L_00706f5f:; BB(0x00706f5f);
    /* 00706f5f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706f62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00706f63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706f64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706f65: ret 4 */ FN_RET(0x00706e9c); r_esp += 8; return;
}

void f_00706f68(void) /* sub_706F68 */
{
    FN_ENTER(0x00706f68);
    /* 00706f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706f6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706f6b: mov ebp, dword ptr [ecx + 0x6c] */ r_ebp = R32((u32)(r_ecx+0x6cu));
    /* 00706f6e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00706f70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706f72: je 0x706f82 */ if (fZ) goto L_00706f82;
L_00706f74:; BB(0x00706f74);
    /* 00706f74: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00706f79: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706f7eu); f_0070651d();
    /* 00706f7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706f80: jne 0x706f8a */ if (!fZ) goto L_00706f8a;
L_00706f82:; BB(0x00706f82);
    /* 00706f82: mov eax, edi */ r_eax = r_edi;
    /* 00706f84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706f86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706f87: ret 4 */ FN_RET(0x00706f68); r_esp += 8; return;
L_00706f8a:; BB(0x00706f8a);
    /* 00706f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706f8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706f8d: call 0x700c14 */ r_esp -= 4; W32(r_esp, 0x706f92u); f_00700c14();
    /* 00706f92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706f94: call 0x700c30 */ r_esp -= 4; W32(r_esp, 0x706f99u); f_00700c30();
    /* 00706f99: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706f9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706fa1: call 0x700cac */ r_esp -= 4; W32(r_esp, 0x706fa6u); f_00700cac();
    /* 00706fa6: mov edi, 1 */ r_edi = 0x1u;
    /* 00706fab: jmp 0x706f82 */ goto L_00706f82;
}

void f_00706f6e(void)
{
    FN_ENTER(0x00706f6e);
    /* 00706f6e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00706f70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706f72: je 0x706f82 */ if (fZ) goto L_00706f82;
L_00706f74:; BB(0x00706f74);
    /* 00706f74: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00706f79: call 0x70651d */ r_esp -= 4; W32(r_esp, 0x706f7eu); f_0070651d();
    /* 00706f7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00706f80: jne 0x706f8a */ if (!fZ) goto L_00706f8a;
L_00706f82:; BB(0x00706f82);
    /* 00706f82: mov eax, edi */ r_eax = r_edi;
    /* 00706f84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00706f86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00706f87: ret 4 */ FN_RET(0x00706f6e); r_esp += 8; return;
L_00706f8a:; BB(0x00706f8a);
    /* 00706f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00706f8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706f8d: call 0x700c14 */ r_esp -= 4; W32(r_esp, 0x706f92u); f_00700c14();
    /* 00706f92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706f94: call 0x700c30 */ r_esp -= 4; W32(r_esp, 0x706f99u); f_00700c30();
    /* 00706f99: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00706f9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00706fa1: call 0x700cac */ r_esp -= 4; W32(r_esp, 0x706fa6u); f_00700cac();
    /* 00706fa6: mov edi, 1 */ r_edi = 0x1u;
    /* 00706fab: jmp 0x706f82 */ goto L_00706f82;
}

void f_00706fb0(void) /* sub_706FB0 */
{
    FN_ENTER(0x00706fb0);
    /* 00706fb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00706fb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00706fb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00706fb5: mov esi, ecx */ r_esi = r_ecx;
    /* 00706fb7: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00706fba: mov ecx, dword ptr [esi + eax*4 + 0x24] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x24u));
    /* 00706fbe: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x706fc3u); f_00700f98();
    /* 00706fc3: mov ebp, eax */ r_ebp = r_eax;
    /* 00706fc5: movsx ebx, bp */ r_ebx = (u32)(i32)(i16)(u16)r_ebp;
    /* 00706fc8: cmp ebx, dword ptr [esi + 0x9c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00706fce: je 0x707060 */ if (fZ) goto L_00707060;
L_00706fd4:; BB(0x00706fd4);
    /* 00706fd4: mov edx, dword ptr [esi + 0x98] */ r_edx = R32((u32)(r_esi+0x98u));
    /* 00706fda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706fdc: jne 0x707013 */ if (!fZ) goto L_00707013;
L_00706fde:; BB(0x00706fde);
    /* 00706fde: mov eax, ebp */ r_eax = r_ebp;
    /* 00706fe0: call 0x70706d */ r_esp -= 4; W32(r_esp, 0x706fe5u); f_0070706d();
    /* 00706fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00706fe7: je 0x707003 */ if (fZ) goto L_00707003;
L_00706fe9:; BB(0x00706fe9);
    /* 00706fe9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00706fea: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
    /* 00706ff0: mov ecx, edi */ r_ecx = r_edi;
    /* 00706ff2: call 0x7080d0 */ r_esp -= 4; W32(r_esp, 0x706ff7u); f_007080d0();
    /* 00706ff7: mov dword ptr [esi + 0x98], 1 */ W32((u32)(r_esi+0x98u), 0x1u);
    /* 00707001: jmp 0x707052 */ goto L_00707052;
L_00707003:; BB(0x00707003);
    /* 00707003: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707004: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
    /* 0070700a: mov ecx, edi */ r_ecx = r_edi;
    /* 0070700c: call 0x708108 */ r_esp -= 4; W32(r_esp, 0x707011u); f_00708108();
    /* 00707011: jmp 0x707052 */ goto L_00707052;
L_00707013:; BB(0x00707013);
    /* 00707013: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707016: jne 0x70704c */ if (!fZ) goto L_0070704c;
L_00707018:; BB(0x00707018);
    /* 00707018: mov eax, ebp */ r_eax = r_ebp;
    /* 0070701a: call 0x70706d */ r_esp -= 4; W32(r_esp, 0x70701fu); f_0070706d();
    /* 0070701f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707021: je 0x707033 */ if (fZ) goto L_00707033;
L_00707023:; BB(0x00707023);
    /* 00707023: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707024: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
    /* 0070702a: mov ecx, edi */ r_ecx = r_edi;
    /* 0070702c: call 0x708108 */ r_esp -= 4; W32(r_esp, 0x707031u); f_00708108();
    /* 00707031: jmp 0x707052 */ goto L_00707052;
L_00707033:; BB(0x00707033);
    /* 00707033: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
    /* 00707039: mov ecx, edi */ r_ecx = r_edi;
    /* 0070703b: call 0x7080ec */ r_esp -= 4; W32(r_esp, 0x707040u); f_007080ec();
    /* 00707040: mov dword ptr [esi + 0x98], 0 */ W32((u32)(r_esi+0x98u), 0x0u);
    /* 0070704a: jmp 0x707052 */ goto L_00707052;
L_0070704c:; BB(0x0070704c);
    /* 0070704c: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
L_00707052:; BB(0x00707052);
    /* 00707052: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707053: mov ecx, esi */ r_ecx = r_esi;
    /* 00707055: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x70705au); f_007070ac();
    /* 0070705a: mov dword ptr [esi + 0x9c], ebx */ W32((u32)(r_esi+0x9cu), r_ebx);
L_00707060:; BB(0x00707060);
    /* 00707060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00707061: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707063: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707065: ret  */ FN_RET(0x00706fb0); r_esp += 4; return;
}

