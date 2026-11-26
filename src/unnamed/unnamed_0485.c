#include "protos.h"

void f_00485098(void) /* sub_485098 */
{
    FN_ENTER(0x00485098);
    /* 00485098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00485099: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048509c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048509e: fld dword ptr [0x900d44] */ FPUSH(R_F32((u32)(0x900d44u)));
    /* 004850a4: fadd dword ptr [ebx + 0xe0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe0u));
    /* 004850aa: fcom dword ptr [0x900bac] */ fx_compare(ST(0), R_F32((u32)(0x900bacu))); 
    /* 004850b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004850b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004850b3: jbe 0x4850c4 */ if ((fC||fZ)) goto L_004850c4;
L_004850b5:; BB(0x004850b5);
    /* 004850b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004850b7: mov eax, 0x438e0000 */ r_eax = 0x438e0000u;
    /* 004850bc: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 004850c2: jmp 0x4850ca */ goto L_004850ca;
L_004850c4:; BB(0x004850c4);
    /* 004850c4: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
L_004850ca:; BB(0x004850ca);
    /* 004850ca: fld dword ptr [0x900ba8] */ FPUSH(R_F32((u32)(0x900ba8u)));
    /* 004850d0: fadd dword ptr [ebx + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe4u));
    /* 004850d6: fld dword ptr [0x900ba4] */ FPUSH(R_F32((u32)(0x900ba4u)));
    /* 004850dc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004850de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004850e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004850e1: ja 0x4850ed */ if ((!fC&&!fZ)) goto L_004850ed;
L_004850e3:; BB(0x004850e3);
    /* 004850e3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004850e5: fstp dword ptr [ebx + 0xe4] */ W_F32((u32)(r_ebx+0xe4u), ST(0)); FPOP();
    /* 004850eb: jmp 0x4850f5 */ goto L_004850f5;
L_004850ed:; BB(0x004850ed);
    /* 004850ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004850ef: fstp dword ptr [ebx + 0xe4] */ W_F32((u32)(r_ebx+0xe4u), ST(0)); FPOP();
L_004850f5:; BB(0x004850f5);
    /* 004850f5: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 004850fb: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004850fe: je 0x485333 */ if (fZ) goto L_00485333;
L_00485104:; BB(0x00485104);
    /* 00485104: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485107: je 0x48513f */ if (fZ) goto L_0048513f;
L_00485109:; BB(0x00485109);
    /* 00485109: cmp eax, 0xee */ {  u32 a = r_eax; u32 b = 0xeeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048510e: jne 0x485124 */ if (!fZ) goto L_00485124;
L_00485110:; BB(0x00485110);
    /* 00485110: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485115: push 0x3de */ { u32 v = 0x3deu; r_esp -= 4; W32(r_esp, v); }
    /* 0048511a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48511fu); f_00814298();
    /* 0048511f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485122: jmp 0x485151 */ goto L_00485151;
L_00485124:; BB(0x00485124);
    /* 00485124: cmp eax, 0x11d */ {  u32 a = r_eax; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485129: jne 0x485151 */ if (!fZ) goto L_00485151;
L_0048512b:; BB(0x0048512b);
    /* 0048512b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048512d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048512e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048512f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485130: push 0x3df */ { u32 v = 0x3dfu; r_esp -= 4; W32(r_esp, v); }
    /* 00485135: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48513au); f_00814298();
    /* 0048513a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048513d: jmp 0x485151 */ goto L_00485151;
L_0048513f:; BB(0x0048513f);
    /* 0048513f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485144: push 0x3dd */ { u32 v = 0x3ddu; r_esp -= 4; W32(r_esp, v); }
    /* 00485149: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48514eu); f_00814298();
    /* 0048514e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00485151:; BB(0x00485151);
    /* 00485151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485156: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00485157: push 0x3db */ { u32 v = 0x3dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0048515c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x485161u); f_008144b0();
    /* 00485161: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485164: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 0048516a: cmp ecx, 0xb9 */ {  u32 a = r_ecx; u32 b = 0xb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485170: jne 0x48519d */ if (!fZ) goto L_0048519d;
L_00485172:; BB(0x00485172);
    /* 00485172: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485174: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00485179: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 0048517c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048517d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485182u); f_0050b7a4();
    /* 00485182: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485184: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00485189: lea eax, [ebx + 0x70] */ r_eax = (u32)(r_ebx+0x70u);
    /* 0048518c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048518d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485192u); f_0050b7a4();
    /* 00485192: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485195: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 0048519b: jmp 0x4851d0 */ goto L_004851d0;
L_0048519d:; BB(0x0048519d);
    /* 0048519d: cmp ecx, 0xed */ {  u32 a = r_ecx; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004851a3: jne 0x4851d0 */ if (!fZ) goto L_004851d0;
L_004851a5:; BB(0x004851a5);
    /* 004851a5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004851a7: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 004851ac: push 0x900d4c */ { u32 v = 0x900d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004851b1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4851b6u); f_0050b7a4();
    /* 004851b6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004851b8: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 004851bd: push 0x900d4c */ { u32 v = 0x900d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004851c2: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4851c7u); f_0050b7a4();
    /* 004851c7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004851ca: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_004851d0:; BB(0x004851d0);
    /* 004851d0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004851d4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004851d8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004851db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004851dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004851df: mov ebp, eax */ r_ebp = r_eax;
    /* 004851e1: mov esi, edx */ r_esi = r_edx;
L_004851e3:; BB(0x004851e3);
    /* 004851e3: cmp ecx, dword ptr [ebp + 0x900c80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x900c80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004851e9: jl 0x485238 */ if ((fS!=fO)) goto L_00485238;
L_004851eb:; BB(0x004851eb);
    /* 004851eb: cmp ecx, dword ptr [ebp + 0x900c84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x900c84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004851f1: jge 0x485238 */ if ((fS==fO)) goto L_00485238;
L_004851f3:; BB(0x004851f3);
    /* 004851f3: mov ecx, dword ptr [ebp + 0x900c8c] */ r_ecx = R32((u32)(r_ebp+0x900c8cu));
    /* 004851f9: mov eax, 0x900d4c */ r_eax = 0x900d4cu;
    /* 004851fe: cmp ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485201: je 0x485329 */ if (fZ) goto L_00485329;
L_00485207:; BB(0x00485207);
    /* 00485207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00485209: jl 0x485218 */ if ((fS!=fO)) goto L_00485218;
L_0048520b:; BB(0x0048520b);
    /* 0048520b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048520d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048520f: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00485212: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00485214: lea eax, [ebx + edi + 0x1c] */ r_eax = (u32)(r_ebx+r_edi+0x1cu);
L_00485218:; BB(0x00485218);
    /* 00485218: mov ecx, dword ptr [ebx + esi*4 + 0x80] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x80u));
    /* 0048521f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00485222: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485224: je 0x4852f0 */ if (fZ) goto L_004852f0;
L_0048522a:; BB(0x0048522a);
    /* 0048522a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048522b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x485230u); f_00508db8();
    /* 00485230: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485236: jmp 0x48525e */ goto L_0048525e;
L_00485238:; BB(0x00485238);
    /* 00485238: mov eax, dword ptr [ebx + esi*4 + 0x80] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x80u));
    /* 0048523f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00485242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485244: je 0x48525e */ if (fZ) goto L_0048525e;
L_00485246:; BB(0x00485246);
    /* 00485246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485247: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48524cu); f_005cdcc0();
    /* 0048524c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048524d: mov dword ptr [ebx + edi*2 + 0x80], 0 */ W32((u32)(r_ebx+r_edi*2+0x80u), 0x0u);
    /* 00485258: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_0048525e:; BB(0x0048525e);
    /* 0048525e: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00485261: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485264: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485267: jl 0x4851e3 */ if ((fS!=fO)) goto L_004851e3;
L_0048526d:; BB(0x0048526d);
    /* 0048526d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00485271: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00485275: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00485278: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048527b: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048527d:; BB(0x0048527d);
    /* 0048527d: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485280: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485282:; BB(0x00485282);
    /* 00485282: cmp ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485285: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485287:; BB(0x00485287);
    /* 00485287: cmp ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048528d: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048528f:; BB(0x0048528f);
    /* 0048528f: cmp ecx, 0xeb */ {  u32 a = r_ecx; u32 b = 0xebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485295: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485297:; BB(0x00485297);
    /* 00485297: cmp ecx, 0x122 */ {  u32 a = r_ecx; u32 b = 0x122u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048529d: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048529f:; BB(0x0048529f);
    /* 0048529f: cmp ecx, 0x136 */ {  u32 a = r_ecx; u32 b = 0x136u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852a5: jne 0x4852bc */ if (!fZ) goto L_004852bc;
L_004852a7:; BB(0x004852a7);
    /* 004852a7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004852a9: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004852ae: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4852b3u); f_006ff5f8();
    /* 004852b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004852b6: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_004852bc:; BB(0x004852bc);
    /* 004852bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004852bf: mov dword ptr [ebx + 0xe8], ecx */ W32((u32)(r_ebx+0xe8u), r_ecx);
    /* 004852c5: cmp ecx, 0x197 */ {  u32 a = r_ecx; u32 b = 0x197u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004852cb: jge 0x4852de */ if ((fS==fO)) goto L_004852de;
L_004852cd:; BB(0x004852cd);
    /* 004852cd: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004852d3: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 004852d9: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852dc: je 0x48534a */ if (fZ) goto L_0048534a;
L_004852de:; BB(0x004852de);
    /* 004852de: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004852e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004852e7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004852eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004852ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004852ef: ret  */ FN_RET(0x00485098); r_esp += 4; return;
L_004852f0:; BB(0x004852f0);
    /* 004852f0: push dword ptr [ebp + 0x900c88] */ { u32 v = R32((u32)(r_ebp+0x900c88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004852f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004852f7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4852fcu); f_00509590();
    /* 004852fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004852ff: mov dword ptr [ebx + edi*2 + 0x80], eax */ W32((u32)(r_ebx+r_edi*2+0x80u), r_eax);
    /* 00485306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485308: je 0x48531e */ if (fZ) goto L_0048531e;
L_0048530a:; BB(0x0048530a);
    /* 0048530a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048530c: mov ecx, eax */ r_ecx = r_eax;
    /* 0048530e: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x485313u); f_00508efc();
    /* 00485313: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485319: jmp 0x48525e */ goto L_0048525e;
L_0048531e:; BB(0x0048531e);
    /* 0048531e: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485324: jmp 0x48525e */ goto L_0048525e;
L_00485329:; BB(0x00485329);
    /* 00485329: mov eax, 0xa46cb8 */ r_eax = 0xa46cb8u;
    /* 0048532e: jmp 0x485218 */ goto L_00485218;
L_00485333:; BB(0x00485333);
    /* 00485333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485338: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048533d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x485342u); f_00814298();
    /* 00485342: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485345: jmp 0x485151 */ goto L_00485151;
L_0048534a:; BB(0x0048534a);
    /* 0048534a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048534d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048534e: ret  */ FN_RET(0x00485098); r_esp += 4; return;
}

void f_00485345(void)
{
    FN_ENTER(0x00485345);
    goto L_00485345;
L_00485151:; BB(0x00485151);
    /* 00485151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485156: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00485157: push 0x3db */ { u32 v = 0x3dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0048515c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x485161u); f_008144b0();
    /* 00485161: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485164: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 0048516a: cmp ecx, 0xb9 */ {  u32 a = r_ecx; u32 b = 0xb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485170: jne 0x48519d */ if (!fZ) goto L_0048519d;
L_00485172:; BB(0x00485172);
    /* 00485172: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485174: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00485179: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 0048517c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048517d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485182u); f_0050b7a4();
    /* 00485182: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485184: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00485189: lea eax, [ebx + 0x70] */ r_eax = (u32)(r_ebx+0x70u);
    /* 0048518c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048518d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485192u); f_0050b7a4();
    /* 00485192: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485195: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 0048519b: jmp 0x4851d0 */ goto L_004851d0;
L_0048519d:; BB(0x0048519d);
    /* 0048519d: cmp ecx, 0xed */ {  u32 a = r_ecx; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004851a3: jne 0x4851d0 */ if (!fZ) goto L_004851d0;
L_004851a5:; BB(0x004851a5);
    /* 004851a5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004851a7: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 004851ac: push 0x900d4c */ { u32 v = 0x900d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004851b1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4851b6u); f_0050b7a4();
    /* 004851b6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004851b8: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 004851bd: push 0x900d4c */ { u32 v = 0x900d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004851c2: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4851c7u); f_0050b7a4();
    /* 004851c7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004851ca: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_004851d0:; BB(0x004851d0);
    /* 004851d0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004851d4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004851d8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004851db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004851dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004851df: mov ebp, eax */ r_ebp = r_eax;
    /* 004851e1: mov esi, edx */ r_esi = r_edx;
L_004851e3:; BB(0x004851e3);
    /* 004851e3: cmp ecx, dword ptr [ebp + 0x900c80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x900c80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004851e9: jl 0x485238 */ if ((fS!=fO)) goto L_00485238;
L_004851eb:; BB(0x004851eb);
    /* 004851eb: cmp ecx, dword ptr [ebp + 0x900c84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x900c84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004851f1: jge 0x485238 */ if ((fS==fO)) goto L_00485238;
L_004851f3:; BB(0x004851f3);
    /* 004851f3: mov ecx, dword ptr [ebp + 0x900c8c] */ r_ecx = R32((u32)(r_ebp+0x900c8cu));
    /* 004851f9: mov eax, 0x900d4c */ r_eax = 0x900d4cu;
    /* 004851fe: cmp ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485201: je 0x485329 */ if (fZ) goto L_00485329;
L_00485207:; BB(0x00485207);
    /* 00485207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00485209: jl 0x485218 */ if ((fS!=fO)) goto L_00485218;
L_0048520b:; BB(0x0048520b);
    /* 0048520b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048520d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048520f: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00485212: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00485214: lea eax, [ebx + edi + 0x1c] */ r_eax = (u32)(r_ebx+r_edi+0x1cu);
L_00485218:; BB(0x00485218);
    /* 00485218: mov ecx, dword ptr [ebx + esi*4 + 0x80] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x80u));
    /* 0048521f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00485222: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485224: je 0x4852f0 */ if (fZ) goto L_004852f0;
L_0048522a:; BB(0x0048522a);
    /* 0048522a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048522b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x485230u); f_00508db8();
    /* 00485230: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485236: jmp 0x48525e */ goto L_0048525e;
L_00485238:; BB(0x00485238);
    /* 00485238: mov eax, dword ptr [ebx + esi*4 + 0x80] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x80u));
    /* 0048523f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00485242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485244: je 0x48525e */ if (fZ) goto L_0048525e;
L_00485246:; BB(0x00485246);
    /* 00485246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485247: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48524cu); f_005cdcc0();
    /* 0048524c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048524d: mov dword ptr [ebx + edi*2 + 0x80], 0 */ W32((u32)(r_ebx+r_edi*2+0x80u), 0x0u);
    /* 00485258: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_0048525e:; BB(0x0048525e);
    /* 0048525e: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00485261: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485264: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485267: jl 0x4851e3 */ if ((fS!=fO)) goto L_004851e3;
L_0048526d:; BB(0x0048526d);
    /* 0048526d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00485271: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00485275: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00485278: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048527b: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048527d:; BB(0x0048527d);
    /* 0048527d: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485280: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485282:; BB(0x00485282);
    /* 00485282: cmp ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485285: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485287:; BB(0x00485287);
    /* 00485287: cmp ecx, 0x8c */ {  u32 a = r_ecx; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048528d: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048528f:; BB(0x0048528f);
    /* 0048528f: cmp ecx, 0xeb */ {  u32 a = r_ecx; u32 b = 0xebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485295: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_00485297:; BB(0x00485297);
    /* 00485297: cmp ecx, 0x122 */ {  u32 a = r_ecx; u32 b = 0x122u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048529d: je 0x4852a7 */ if (fZ) goto L_004852a7;
L_0048529f:; BB(0x0048529f);
    /* 0048529f: cmp ecx, 0x136 */ {  u32 a = r_ecx; u32 b = 0x136u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852a5: jne 0x4852bc */ if (!fZ) goto L_004852bc;
L_004852a7:; BB(0x004852a7);
    /* 004852a7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004852a9: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004852ae: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4852b3u); f_006ff5f8();
    /* 004852b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004852b6: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
L_004852bc:; BB(0x004852bc);
    /* 004852bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004852bf: mov dword ptr [ebx + 0xe8], ecx */ W32((u32)(r_ebx+0xe8u), r_ecx);
    /* 004852c5: cmp ecx, 0x197 */ {  u32 a = r_ecx; u32 b = 0x197u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004852cb: jge 0x4852de */ if ((fS==fO)) goto L_004852de;
L_004852cd:; BB(0x004852cd);
    /* 004852cd: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004852d3: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 004852d9: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852dc: je 0x48534a */ if (fZ) goto L_0048534a;
L_004852de:; BB(0x004852de);
    /* 004852de: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004852e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004852e7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004852eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004852ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004852ef: ret  */ FN_RET(0x00485345); r_esp += 4; return;
L_004852f0:; BB(0x004852f0);
    /* 004852f0: push dword ptr [ebp + 0x900c88] */ { u32 v = R32((u32)(r_ebp+0x900c88u)); r_esp -= 4; W32(r_esp, v); }
    /* 004852f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004852f7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4852fcu); f_00509590();
    /* 004852fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004852ff: mov dword ptr [ebx + edi*2 + 0x80], eax */ W32((u32)(r_ebx+r_edi*2+0x80u), r_eax);
    /* 00485306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485308: je 0x48531e */ if (fZ) goto L_0048531e;
L_0048530a:; BB(0x0048530a);
    /* 0048530a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048530c: mov ecx, eax */ r_ecx = r_eax;
    /* 0048530e: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x485313u); f_00508efc();
    /* 00485313: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485319: jmp 0x48525e */ goto L_0048525e;
L_0048531e:; BB(0x0048531e);
    /* 0048531e: mov ecx, dword ptr [ebx + 0xe8] */ r_ecx = R32((u32)(r_ebx+0xe8u));
    /* 00485324: jmp 0x48525e */ goto L_0048525e;
L_00485329:; BB(0x00485329);
    /* 00485329: mov eax, 0xa46cb8 */ r_eax = 0xa46cb8u;
    /* 0048532e: jmp 0x485218 */ goto L_00485218;
L_00485345:; BB(0x00485345);
    /* 00485345: jmp 0x485151 */ goto L_00485151;
L_0048534a:; BB(0x0048534a);
    /* 0048534a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048534d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048534e: ret  */ FN_RET(0x00485345); r_esp += 4; return;
}

void f_00485350(void) /* sub_485350 */
{
    FN_ENTER(0x00485350);
    /* 00485350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485351: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485354: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00485356: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00485358: call 0x48544c */ r_esp -= 4; W32(r_esp, 0x48535du); f_0048544c();
    /* 0048535d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048535f: call 0x485494 */ r_esp -= 4; W32(r_esp, 0x485364u); f_00485494();
    /* 00485364: mov eax, dword ptr [ebp + 0xe8] */ r_eax = R32((u32)(r_ebp+0xe8u));
    /* 0048536a: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048536d: jge 0x48537b */ if ((fS==fO)) goto L_0048537b;
L_0048536f:; BB(0x0048536f);
    /* 0048536f: fld dword ptr [0x900d38] */ FPUSH(R_F32((u32)(0x900d38u)));
    /* 00485375: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00485379: jmp 0x4853c9 */ goto L_004853c9;
L_0048537b:; BB(0x0048537b);
    /* 0048537b: cmp eax, 0x8e */ {  u32 a = r_eax; u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485380: jge 0x48543d */ if ((fS==fO)) goto L_0048543d;
L_00485386:; BB(0x00485386);
    /* 00485386: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00485388: add eax, 0x8e */ {  u32 a = r_eax; u32 b = 0x8eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048538d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00485391: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00485395: fdiv dword ptr [0x900d40] */ ST(0) = ST(0) / R_F32((u32)(0x900d40u));
    /* 0048539b: fcom dword ptr [0x900d3c] */ fx_compare(ST(0), R_F32((u32)(0x900d3cu))); 
    /* 004853a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004853a3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004853a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004853a8: je 0x48543d */ if (fZ) goto L_0048543d;
L_004853ae:; BB(0x004853ae);
    /* 004853ae: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004853b2: fcomp dword ptr [0x900d38] */ fx_compare(ST(0), R_F32((u32)(0x900d38u))); FPOP();
    /* 004853b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004853ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004853bb: jae 0x4853c9 */ if (!fC) goto L_004853c9;
L_004853bd:; BB(0x004853bd);
    /* 004853bd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004853c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004853c4: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4853c9u); f_0048e3a4();
L_004853c9:; BB(0x004853c9);
    /* 004853c9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4853ceu); f_0082d7b0();
    /* 004853ce: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4853d3u); f_0082fa9c();
    /* 004853d3: mov ecx, 0x900d4c */ r_ecx = 0x900d4cu;
    /* 004853d8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4853ddu); f_0082d838();
    /* 004853dd: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004853e1: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004853e5: lea edx, [ebp + 0xa4] */ r_edx = (u32)(r_ebp+0xa4u);
    /* 004853eb: lea eax, [ebp + 0xbc] */ r_eax = (u32)(r_ebp+0xbcu);
    /* 004853f1: mov esi, eax */ r_esi = r_eax;
    /* 004853f3: mov edi, edx */ r_edi = r_edx;
L_004853f5:; BB(0x004853f5);
    /* 004853f5: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004853f8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4853fdu); f_00829cc8();
    /* 004853fd: push dword ptr [ebp + 0xe0] */ { u32 v = R32((u32)(r_ebp+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485403: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485406: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00485408: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x48540du); f_0083046c();
    /* 0048540d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485410: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00485413: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00485415: ja 0x4853f5 */ if ((!fC&&!fZ)) goto L_004853f5;
L_00485417:; BB(0x00485417);
    /* 00485417: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0048541b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0048541f: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x485424u); f_0082faac();
    /* 00485424: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485429u); f_0082da80();
    /* 00485429: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048542d: fcomp dword ptr [0x900d38] */ fx_compare(ST(0), R_F32((u32)(0x900d38u))); FPOP();
    /* 00485433: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485435: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485436: jae 0x48543d */ if (!fC) goto L_0048543d;
L_00485438:; BB(0x00485438);
    /* 00485438: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x48543du); f_005963d0();
L_0048543d:; BB(0x0048543d);
    /* 0048543d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048543f: call 0x485574 */ r_esp -= 4; W32(r_esp, 0x485444u); f_00485574();
    /* 00485444: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485447: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485448: ret  */ FN_RET(0x00485350); r_esp += 4; return;
}

void f_00485355(void)
{
    FN_ENTER(0x00485355);
    /* 00485355: jmp 0xf03120e5 */ UNSUP(0x00485355, "jump to code that was not decoded");
}

void f_00485441(void)
{
    FN_ENTER(0x00485441);
    /* 00485441: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00485443: add byte ptr [ebx - 0x3ca2e73c], al */ { u32 ad = (u32)(r_ebx+0xc35d18c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00485449: nop  */ ;
    /* 0048544a: nop  */ ;
    /* 0048544b: nop  */ ;
    /* 0048544c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048544d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048544f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x485454u); f_0082d7b0();
    /* 00485454: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485459u); f_0082fa9c();
    /* 00485459: mov ecx, 0x900d4c */ r_ecx = 0x900d4cu;
    /* 0048545e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485463u); f_0082d838();
    /* 00485463: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 00485469: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48546eu); f_00829cc8();
    /* 0048546e: push dword ptr [esi + 0xe0] */ { u32 v = R32((u32)(r_esi+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485474: push dword ptr [esi + 0xdc] */ { u32 v = R32((u32)(r_esi+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048547a: push dword ptr [esi + 0xd4] */ { u32 v = R32((u32)(r_esi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485480: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485485u); f_0083046c();
    /* 00485485: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485488: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48548du); f_0082faac();
    /* 0048548d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485492u); f_0082da80();
    /* 00485492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00485493: ret  */ FN_RET(0x00485441); r_esp += 4; return;
}

void f_0048544c(void) /* sub_48544C */
{
    FN_ENTER(0x0048544c);
    /* 0048544c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048544d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048544f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x485454u); f_0082d7b0();
    /* 00485454: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485459u); f_0082fa9c();
    /* 00485459: mov ecx, 0x900d4c */ r_ecx = 0x900d4cu;
    /* 0048545e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485463u); f_0082d838();
    /* 00485463: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 00485469: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48546eu); f_00829cc8();
    /* 0048546e: push dword ptr [esi + 0xe0] */ { u32 v = R32((u32)(r_esi+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485474: push dword ptr [esi + 0xdc] */ { u32 v = R32((u32)(r_esi+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048547a: push dword ptr [esi + 0xd4] */ { u32 v = R32((u32)(r_esi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485480: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485485u); f_0083046c();
    /* 00485485: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485488: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48548du); f_0082faac();
    /* 0048548d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485492u); f_0082da80();
    /* 00485492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00485493: ret  */ FN_RET(0x0048544c); r_esp += 4; return;
}

void f_00485452(void)
{
    FN_ENTER(0x00485452);
    /* 00485452: cmp al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a - b) & 0xffu;   }
    /* 00485454: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485459u); f_0082fa9c();
    /* 00485459: mov ecx, 0x900d4c */ r_ecx = 0x900d4cu;
    /* 0048545e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485463u); f_0082d838();
    /* 00485463: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 00485469: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48546eu); f_00829cc8();
    /* 0048546e: push dword ptr [esi + 0xe0] */ { u32 v = R32((u32)(r_esi+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485474: push dword ptr [esi + 0xdc] */ { u32 v = R32((u32)(r_esi+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048547a: push dword ptr [esi + 0xd4] */ { u32 v = R32((u32)(r_esi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485480: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485485u); f_0083046c();
    /* 00485485: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485488: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48548du); f_0082faac();
    /* 0048548d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485492u); f_0082da80();
    /* 00485492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00485493: ret  */ FN_RET(0x00485452); r_esp += 4; return;
}

void f_00485494(void) /* sub_485494 */
{
    FN_ENTER(0x00485494);
    /* 00485494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485495: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485498: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048549a: mov eax, dword ptr [ebp + 0xe8] */ r_eax = R32((u32)(r_ebp+0xe8u));
    /* 004854a0: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004854a3: jl 0x48556d */ if ((fS!=fO)) goto L_0048556d;
L_004854a9:; BB(0x004854a9);
    /* 004854a9: cmp eax, 0x8e */ {  u32 a = r_eax; u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004854ae: jl 0x4854bc */ if ((fS!=fO)) goto L_004854bc;
L_004854b0:; BB(0x004854b0);
    /* 004854b0: fld dword ptr [0x900d2c] */ FPUSH(R_F32((u32)(0x900d2cu)));
    /* 004854b6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004854ba: jmp 0x4854e0 */ goto L_004854e0;
L_004854bc:; BB(0x004854bc);
    /* 004854bc: add eax, -0x72 */ {  u32 a = r_eax; u32 b = 0xffffff8eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004854bf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004854c3: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004854c7: fdiv dword ptr [0x900d34] */ ST(0) = ST(0) / R_F32((u32)(0x900d34u));
    /* 004854cd: fcom dword ptr [0x900d30] */ fx_compare(ST(0), R_F32((u32)(0x900d30u))); 
    /* 004854d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004854d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004854d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004854da: je 0x48556d */ if (fZ) goto L_0048556d;
L_004854e0:; BB(0x004854e0);
    /* 004854e0: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 004854e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004854e5: je 0x48556d */ if (fZ) goto L_0048556d;
L_004854eb:; BB(0x004854eb);
    /* 004854eb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004854ef: fcomp dword ptr [0x900d2c] */ fx_compare(ST(0), R_F32((u32)(0x900d2cu))); FPOP();
    /* 004854f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004854f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004854f8: jae 0x485506 */ if (!fC) goto L_00485506;
L_004854fa:; BB(0x004854fa);
    /* 004854fa: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004854fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00485501: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x485506u); f_0048e3a4();
L_00485506:; BB(0x00485506);
    /* 00485506: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x48550bu); f_0082d7b0();
    /* 0048550b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485510u); f_0082fa9c();
    /* 00485510: mov ecx, 0x900d4c */ r_ecx = 0x900d4cu;
    /* 00485515: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x48551au); f_0082d838();
    /* 0048551a: mov ecx, dword ptr [ebp + 0xc0] */ r_ecx = R32((u32)(r_ebp+0xc0u));
    /* 00485520: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x485525u); f_00829cc8();
    /* 00485525: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 00485528: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x48552du); f_00588428();
    /* 0048552d: push dword ptr [ebp + 0xe0] */ { u32 v = R32((u32)(r_ebp+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485533: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485539: push dword ptr [ebp + 0xbc] */ { u32 v = R32((u32)(r_ebp+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048553f: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485544u); f_0083046c();
    /* 00485544: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485547: mov ecx, dword ptr [ebp + 0x7c] */ r_ecx = R32((u32)(r_ebp+0x7cu));
    /* 0048554a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x48554fu); f_00452050();
    /* 0048554f: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x485554u); f_0082faac();
    /* 00485554: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485559u); f_0082da80();
    /* 00485559: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048555d: fcomp dword ptr [0x900d2c] */ fx_compare(ST(0), R_F32((u32)(0x900d2cu))); FPOP();
    /* 00485563: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485565: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485566: jae 0x48556d */ if (!fC) goto L_0048556d;
L_00485568:; BB(0x00485568);
    /* 00485568: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x48556du); f_005963d0();
L_0048556d:; BB(0x0048556d);
    /* 0048556d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485570: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485571: ret  */ FN_RET(0x00485494); r_esp += 4; return;
}

void f_00485574(void) /* sub_485574 */
{
    FN_ENTER(0x00485574);
    /* 00485574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485575: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485578: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048557a: mov eax, dword ptr [ebp + 0xe8] */ r_eax = R32((u32)(r_ebp+0xe8u));
    /* 00485580: cmp eax, 0x181 */ {  u32 a = r_eax; u32 b = 0x181u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485585: jl 0x485660 */ if ((fS!=fO)) goto L_00485660;
L_0048558b:; BB(0x0048558b);
    /* 0048558b: cmp eax, 0x190 */ {  u32 a = r_eax; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485590: jl 0x48559e */ if ((fS!=fO)) goto L_0048559e;
L_00485592:; BB(0x00485592);
    /* 00485592: fld dword ptr [0x900d20] */ FPUSH(R_F32((u32)(0x900d20u)));
    /* 00485598: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0048559c: jmp 0x4855df */ goto L_004855df;
L_0048559e:; BB(0x0048559e);
    /* 0048559e: add eax, 0xfffffe7f */ {  u32 a = r_eax; u32 b = 0xfffffe7fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004855a3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004855a7: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004855ab: fdiv dword ptr [0x900d28] */ ST(0) = ST(0) / R_F32((u32)(0x900d28u));
    /* 004855b1: fcom dword ptr [0x900d24] */ fx_compare(ST(0), R_F32((u32)(0x900d24u))); 
    /* 004855b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004855b9: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004855bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004855be: je 0x485660 */ if (fZ) goto L_00485660;
L_004855c4:; BB(0x004855c4);
    /* 004855c4: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004855c8: fcomp dword ptr [0x900d20] */ fx_compare(ST(0), R_F32((u32)(0x900d20u))); FPOP();
    /* 004855ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004855d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004855d1: jae 0x4855df */ if (!fC) goto L_004855df;
L_004855d3:; BB(0x004855d3);
    /* 004855d3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004855d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004855da: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4855dfu); f_0048e3a4();
L_004855df:; BB(0x004855df);
    /* 004855df: mov ecx, dword ptr [ebp + 0xcc] */ r_ecx = R32((u32)(r_ebp+0xccu));
    /* 004855e5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4855eau); f_00829cc8();
    /* 004855ea: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4855efu); f_0082fa9c();
    /* 004855ef: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4855f4u); f_0082d7b0();
    /* 004855f4: lea ecx, [ebp + 0x4c] */ r_ecx = (u32)(r_ebp+0x4cu);
    /* 004855f7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4855fcu); f_0082d838();
    /* 004855fc: push dword ptr [ebp + 0xe4] */ { u32 v = R32((u32)(r_ebp+0xe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485602: push dword ptr [ebp + 0xd0] */ { u32 v = R32((u32)(r_ebp+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485608: push dword ptr [ebp + 0xc8] */ { u32 v = R32((u32)(r_ebp+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048560e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485613u); f_0083046c();
    /* 00485613: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485616: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48561bu); f_0082da80();
    /* 0048561b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x485620u); f_0082d7b0();
    /* 00485620: lea ecx, [ebp + 0x58] */ r_ecx = (u32)(r_ebp+0x58u);
    /* 00485623: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485628u); f_0082d838();
    /* 00485628: push dword ptr [ebp + 0xe4] */ { u32 v = R32((u32)(r_ebp+0xe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048562e: push dword ptr [ebp + 0xd0] */ { u32 v = R32((u32)(r_ebp+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485634: push dword ptr [ebp + 0xc8] */ { u32 v = R32((u32)(r_ebp+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048563a: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x48563fu); f_0083046c();
    /* 0048563f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485642: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485647u); f_0082da80();
    /* 00485647: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48564cu); f_0082faac();
    /* 0048564c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00485650: fcomp dword ptr [0x900d20] */ fx_compare(ST(0), R_F32((u32)(0x900d20u))); FPOP();
    /* 00485656: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485658: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485659: jae 0x485660 */ if (!fC) goto L_00485660;
L_0048565b:; BB(0x0048565b);
    /* 0048565b: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x485660u); f_005963d0();
L_00485660:; BB(0x00485660);
    /* 00485660: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485664: ret  */ FN_RET(0x00485574); r_esp += 4; return;
}

void f_00485668(void) /* sub_485668 */
{
    FN_ENTER(0x00485668);
    /* 00485668: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485669: mov ebp, esp */ r_ebp = r_esp;
    /* 0048566b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048566d: push 0x8cfa52 */ { u32 v = 0x8cfa52u; r_esp -= 4; W32(r_esp, v); }
    /* 00485672: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00485678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485679: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00485680: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485683: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00485686: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00485689: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0048568c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0048568f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485694: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0048569b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4856a0u); f_005caba4();
    /* 004856a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004856a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004856a6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004856a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004856ab: je 0x4858a2 */ if (fZ) goto L_004858a2;
L_004856b1:; BB(0x004856b1);
    /* 004856b1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004856b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004856bf: mov ecx, eax */ r_ecx = r_eax;
    /* 004856c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004856c4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004856c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004856c8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4856cdu); f_008193cc();
    /* 004856cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004856d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004856d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004856da: mov dword ptr [ecx], 0xaf8738 */ W32((u32)(r_ecx), 0xaf8738u);
    /* 004856e0: mov eax, dword ptr [0x9a68d4] */ r_eax = R32((u32)(0x9a68d4u));
    /* 004856e5: mov esi, dword ptr [0xa46fa0] */ r_esi = R32((u32)(0xa46fa0u));
    /* 004856eb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004856ee: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 004856f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004856f6:; BB(0x004856f6);
    /* 004856f6: mov eax, dword ptr [edi*4 + 0x9a7058] */ r_eax = R32((u32)(r_edi*4+0x9a7058u));
    /* 004856fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00485700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485701: mov ecx, esi */ r_ecx = r_esi;
    /* 00485703: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x485708u); f_005b8610();
    /* 00485708: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0048570b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048570d: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00485710: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00485712: mov ecx, esi */ r_ecx = r_esi;
    /* 00485714: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485717: mov dword ptr [ebx + edx + 0xa4], eax */ W32((u32)(r_ebx+r_edx+0xa4u), r_eax);
    /* 0048571e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00485721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485722: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x485727u); f_005b8624();
    /* 00485727: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048572a: mov dword ptr [ebx + edx + 0xa8], eax */ W32((u32)(r_ebx+r_edx+0xa8u), r_eax);
    /* 00485731: mov ecx, esi */ r_ecx = r_esi;
    /* 00485733: push dword ptr [edi*4 + 0x9a68d8] */ { u32 v = R32((u32)(r_edi*4+0x9a68d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048573a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48573fu); f_005b8638();
    /* 0048573f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485742: mov dword ptr [ebx + edx + 0xac], eax */ W32((u32)(r_ebx+r_edx+0xacu), r_eax);
    /* 00485749: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048574c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048574f: jl 0x4856f6 */ if ((fS!=fO)) goto L_004856f6;
L_00485751:; BB(0x00485751);
    /* 00485751: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00485753: mov ecx, esi */ r_ecx = r_esi;
    /* 00485755: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48575au); f_005b8610();
    /* 0048575a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048575d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048575f: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 00485765: mov ecx, esi */ r_ecx = r_esi;
    /* 00485767: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x48576cu); f_005b8624();
    /* 0048576c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048576f: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00485771: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00485777: mov ecx, esi */ r_ecx = r_esi;
    /* 00485779: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48577eu); f_005b8638();
    /* 0048577e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485781: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485783: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00485789: mov ecx, esi */ r_ecx = r_esi;
    /* 0048578b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x485790u); f_005b8610();
    /* 00485790: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485793: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485795: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0048579b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048579d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4857a2u); f_005b8624();
    /* 004857a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004857a5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004857a7: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 004857ad: mov ecx, esi */ r_ecx = r_esi;
    /* 004857af: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4857b4u); f_005b8638();
    /* 004857b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004857b7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004857b9: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 004857bf: mov ecx, esi */ r_ecx = r_esi;
    /* 004857c1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4857c6u); f_005b8610();
    /* 004857c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004857c9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004857cb: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 004857d1: mov ecx, esi */ r_ecx = r_esi;
    /* 004857d3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4857d8u); f_005b8624();
    /* 004857d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004857db: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004857dd: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 004857e3: mov ecx, esi */ r_ecx = r_esi;
    /* 004857e5: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4857eau); f_005b8638();
    /* 004857ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004857ed: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 004857f3: lea eax, [edx + 0x1c] */ r_eax = (u32)(r_edx+0x1cu);
    /* 004857f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004857f7: push 0x900be0 */ { u32 v = 0x900be0u; r_esp -= 4; W32(r_esp, v); }
    /* 004857fc: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x485801u); f_0058836c();
    /* 00485801: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485804: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485806: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00485809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048580b: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 00485811: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00485817: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 0048581d: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 00485823: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00485829: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0048582f: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00485835: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0048583b: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00485841: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x485846u); f_004d31f4();
    /* 00485846: push 0x900bc8 */ { u32 v = 0x900bc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048584b: mov eax, 0x900bbc */ r_eax = 0x900bbcu;
    /* 00485850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485852: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x485857u); f_004d681c();
    /* 00485857: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048585c: push 0x900bb0 */ { u32 v = 0x900bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485861: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x485866u); f_004d6770();
    /* 00485866: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485869: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048586c: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 00485876: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00485878: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0048587e: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 00485888: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0048588b:; BB(0x0048588b);
    /* 0048588b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048588e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00485891: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485894: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00485897: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048589e: mov esp, ebp */ r_esp = r_ebp;
    /* 004858a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004858a1: ret  */ FN_RET(0x00485668); r_esp += 4; return;
L_004858a2:; BB(0x004858a2);
    /* 004858a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004858a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004858a7: jmp 0x48588b */ goto L_0048588b;
}

void f_004858ac(void) /* sub_4858AC */
{
    FN_ENTER(0x004858ac);
    /* 004858ac: mov dword ptr [0xa46cb8], 0xc61c4000 */ W32((u32)(0xa46cb8u), 0xc61c4000u);
    /* 004858b6: mov dword ptr [0xa46cbc], 0x42480000 */ W32((u32)(0xa46cbcu), 0x42480000u);
    /* 004858c0: mov dword ptr [0xa46cc0], 0 */ W32((u32)(0xa46cc0u), 0x0u);
    /* 004858ca: ret  */ FN_RET(0x004858ac); r_esp += 4; return;
}

void f_004858cc(void) /* sub_4858CC */
{
    FN_ENTER(0x004858cc);
    /* 004858cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004858cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004858cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004858d1: push 0x8cfa6c */ { u32 v = 0x8cfa6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004858d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004858dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004858dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004858e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004858e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004858ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004858ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004858f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004858f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004858f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004858f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485900: mov eax, ecx */ r_eax = r_ecx;
    /* 00485902: mov dword ptr [eax], 0xaf87a0 */ W32((u32)(r_eax), 0xaf87a0u);
    /* 00485908: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0048590a:; BB(0x0048590a);
    /* 0048590a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048590d: mov eax, dword ptr [eax + esi*4 + 0xa0] */ r_eax = R32((u32)(r_eax+r_esi*4+0xa0u));
    /* 00485914: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00485917: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485919: je 0x485930 */ if (fZ) goto L_00485930;
L_0048591b:; BB(0x0048591b);
    /* 0048591b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048591c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x485921u); f_005cdcc0();
    /* 00485921: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00485922: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485925: mov dword ptr [eax + ebx*2 + 0xa0], 0 */ W32((u32)(r_eax+r_ebx*2+0xa0u), 0x0u);
L_00485930:; BB(0x00485930);
    /* 00485930: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485933: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485936: jl 0x48590a */ if ((fS!=fO)) goto L_0048590a;
L_00485938:; BB(0x00485938);
    /* 00485938: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x48593du); f_004d3250();
    /* 0048593d: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x485942u); f_0048ea5c();
    /* 00485942: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485945: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00485948: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048594a: je 0x48595b */ if (fZ) goto L_0048595b;
L_0048594c:; BB(0x0048594c);
    /* 0048594c: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x485951u); f_005883f0();
    /* 00485951: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485954: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_0048595b:; BB(0x0048595b);
    /* 0048595b: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00485961: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485963: je 0x485977 */ if (fZ) goto L_00485977;
L_00485965:; BB(0x00485965);
    /* 00485965: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x48596au); f_005883f0();
    /* 0048596a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048596d: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
L_00485977:; BB(0x00485977);
    /* 00485977: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0048597d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048597f: je 0x485993 */ if (fZ) goto L_00485993;
L_00485981:; BB(0x00485981);
    /* 00485981: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x485986u); f_005883f0();
    /* 00485986: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485989: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
L_00485993:; BB(0x00485993);
    /* 00485993: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048599a: mov ecx, eax */ r_ecx = r_eax;
    /* 0048599c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4859a1u); f_008171e8();
    /* 004859a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004859a4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004859a6: jne 0x4859c1 */ if (!fZ) goto L_004859c1;
L_004859a8:; BB(0x004859a8);
    /* 004859a8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004859ab: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004859ae: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004859b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004859b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004859bb: mov esp, ebp */ r_esp = r_ebp;
    /* 004859bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004859be: ret 4 */ FN_RET(0x004858cc); r_esp += 8; return;
L_004859c1:; BB(0x004859c1);
    /* 004859c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004859c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004859c5: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4859cau); f_005c2f74();
    /* 004859ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004859cb: jmp 0x4859a8 */ goto L_004859a8;
}

void f_004859d0(void) /* sub_4859D0 */
{
    FN_ENTER(0x004859d0);
    /* 004859d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004859d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004859d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004859d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004859d4: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004859d7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004859d9: fld dword ptr [0x900eb8] */ FPUSH(R_F32((u32)(0x900eb8u)));
    /* 004859df: fadd dword ptr [ebx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4cu));
    /* 004859e2: fcom dword ptr [0x900dd8] */ fx_compare(ST(0), R_F32((u32)(0x900dd8u))); 
    /* 004859e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004859ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004859eb: jbe 0x4859f9 */ if ((fC||fZ)) goto L_004859f9;
L_004859ed:; BB(0x004859ed);
    /* 004859ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004859ef: mov eax, 0x43f98000 */ r_eax = 0x43f98000u;
    /* 004859f4: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004859f7: jmp 0x4859fc */ goto L_004859fc;
L_004859f9:; BB(0x004859f9);
    /* 004859f9: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
L_004859fc:; BB(0x004859fc);
    /* 004859fc: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 004859ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a01: je 0x485e21 */ if (fZ) goto L_00485e21;
L_00485a07:; BB(0x00485a07);
    /* 00485a07: cmp eax, 0xae */ {  u32 a = r_eax; u32 b = 0xaeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a0c: je 0x485a33 */ if (fZ) goto L_00485a33;
L_00485a0e:; BB(0x00485a0e);
    /* 00485a0e: cmp eax, 0xcf */ {  u32 a = r_eax; u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a13: je 0x485a33 */ if (fZ) goto L_00485a33;
L_00485a15:; BB(0x00485a15);
    /* 00485a15: cmp eax, 0x23b */ {  u32 a = r_eax; u32 b = 0x23bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a1a: jne 0x485a48 */ if (!fZ) goto L_00485a48;
L_00485a1c:; BB(0x00485a1c);
    /* 00485a1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a21: push 0x3e4 */ { u32 v = 0x3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a26: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x485a2bu); f_00814298();
    /* 00485a2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485a2e: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485a31: jmp 0x485a48 */ goto L_00485a48;
L_00485a33:; BB(0x00485a33);
    /* 00485a33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a38: push 0x3e1 */ { u32 v = 0x3e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a3d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x485a42u); f_00814298();
    /* 00485a42: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485a45: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485a48:; BB(0x00485a48);
    /* 00485a48: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a4d: je 0x485e07 */ if (fZ) goto L_00485e07;
L_00485a53:; BB(0x00485a53);
    /* 00485a53: cmp eax, 0x1d7 */ {  u32 a = r_eax; u32 b = 0x1d7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485a58: jl 0x485a77 */ if ((fS!=fO)) goto L_00485a77;
L_00485a5a:; BB(0x00485a5a);
    /* 00485a5a: cmp eax, 0x23a */ {  u32 a = r_eax; u32 b = 0x23au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485a5f: jg 0x485a77 */ if ((!fZ&&fS==fO)) goto L_00485a77;
L_00485a61:; BB(0x00485a61);
    /* 00485a61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485a63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485a66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00485a67: push 0x3e3 */ { u32 v = 0x3e3u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a6c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x485a71u); f_008144b0();
    /* 00485a71: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485a74: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485a77:; BB(0x00485a77);
    /* 00485a77: cmp eax, 0xae */ {  u32 a = r_eax; u32 b = 0xaeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a7c: je 0x485b04 */ if (fZ) goto L_00485b04;
L_00485a82:; BB(0x00485a82);
    /* 00485a82: cmp eax, 0xcf */ {  u32 a = r_eax; u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a87: je 0x485b04 */ if (fZ) goto L_00485b04;
L_00485a89:; BB(0x00485a89);
    /* 00485a89: cmp eax, 0x1ac */ {  u32 a = r_eax; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485a8e: jne 0x485aab */ if (!fZ) goto L_00485aab;
L_00485a90:; BB(0x00485a90);
    /* 00485a90: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a92: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 00485a97: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
    /* 00485a9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00485a9b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485aa0u); f_0050b7a4();
    /* 00485aa0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485aa3: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485aa6: jmp 0x485b52 */ goto L_00485b52;
L_00485aab:; BB(0x00485aab);
    /* 00485aab: cmp eax, 0x23a */ {  u32 a = r_eax; u32 b = 0x23au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485ab0: jne 0x485aff */ if (!fZ) goto L_00485aff;
L_00485ab2:; BB(0x00485ab2);
    /* 00485ab2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00485ab5: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00485ab8: mov esi, dword ptr [ebx + 0x5c] */ r_esi = R32((u32)(r_ebx+0x5cu));
    /* 00485abb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00485abe: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00485ac1: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00485ac5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00485ac9: mov edx, 0x900ea4 */ r_edx = 0x900ea4u;
    /* 00485ace: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x485ad3u); f_0082ebac();
    /* 00485ad3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00485ad6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ad8: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00485add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485ade: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485ae3u); f_0050b7a4();
    /* 00485ae3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00485ae7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ae9: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 00485aee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485aef: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485af4u); f_0050b7a4();
    /* 00485af4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485af7: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485afa: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
    /* 00485afd: jmp 0x485b52 */ goto L_00485b52;
L_00485aff:; BB(0x00485aff);
    /* 00485aff: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
    /* 00485b02: jmp 0x485b52 */ goto L_00485b52;
L_00485b04:; BB(0x00485b04);
    /* 00485b04: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00485b08: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00485b0b: mov esi, dword ptr [ebx + 0x5c] */ r_esi = R32((u32)(r_ebx+0x5cu));
    /* 00485b0e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00485b12: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00485b15: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00485b19: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00485b1d: mov edx, 0x900e98 */ r_edx = 0x900e98u;
    /* 00485b22: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x485b27u); f_0082ebac();
    /* 00485b27: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00485b2b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485b2d: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 00485b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485b33: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485b38u); f_0050b7a4();
    /* 00485b38: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00485b3c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485b3e: push 0x22f */ { u32 v = 0x22fu; r_esp -= 4; W32(r_esp, v); }
    /* 00485b43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485b44: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485b49u); f_0050b7a4();
    /* 00485b49: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485b4c: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485b4f: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
L_00485b52:; BB(0x00485b52);
    /* 00485b52: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485b57: jl 0x485b73 */ if ((fS!=fO)) goto L_00485b73;
L_00485b59:; BB(0x00485b59);
    /* 00485b59: cmp eax, 0x1ba */ {  u32 a = r_eax; u32 b = 0x1bau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485b5e: jge 0x485b73 */ if ((fS==fO)) goto L_00485b73;
L_00485b60:; BB(0x00485b60);
    /* 00485b60: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485b62: push 0x22e */ { u32 v = 0x22eu; r_esp -= 4; W32(r_esp, v); }
    /* 00485b67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00485b68: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x485b6du); f_0050b7a4();
    /* 00485b6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485b70: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485b73:; BB(0x00485b73);
    /* 00485b73: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00485b77: lea edx, [ebx + 0x58] */ r_edx = (u32)(r_ebx+0x58u);
    /* 00485b7a: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00485b7e: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 00485b81: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00485b85: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00485b89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00485b8b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00485b8d: mov ebp, edx */ r_ebp = r_edx;
L_00485b8f:; BB(0x00485b8f);
    /* 00485b8f: cmp eax, dword ptr [esi + 0x900da8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x900da8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485b95: jl 0x485bc0 */ if ((fS!=fO)) goto L_00485bc0;
L_00485b97:; BB(0x00485b97);
    /* 00485b97: cmp eax, dword ptr [esi + 0x900dac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x900dacu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485b9d: jge 0x485bc0 */ if ((fS==fO)) goto L_00485bc0;
L_00485b9f:; BB(0x00485b9f);
    /* 00485b9f: mov ecx, dword ptr [ebx + ebp*4 + 0xa0] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0xa0u));
    /* 00485ba6: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00485baa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485bac: je 0x485d1f */ if (fZ) goto L_00485d1f;
L_00485bb2:; BB(0x00485bb2);
    /* 00485bb2: push dword ptr [esp + ebp*4 + 0x18] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485bb6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x485bbbu); f_00508db8();
    /* 00485bbb: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485bbe: jmp 0x485be4 */ goto L_00485be4;
L_00485bc0:; BB(0x00485bc0);
    /* 00485bc0: mov ecx, dword ptr [ebx + ebp*4 + 0xa0] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0xa0u));
    /* 00485bc7: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00485bcb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485bcd: je 0x485be4 */ if (fZ) goto L_00485be4;
L_00485bcf:; BB(0x00485bcf);
    /* 00485bcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485bd0: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x485bd5u); f_005cdcc0();
    /* 00485bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00485bd6: mov dword ptr [ebx + edi*2 + 0xa0], 0 */ W32((u32)(r_ebx+r_edi*2+0xa0u), 0x0u);
    /* 00485be1: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485be4:; BB(0x00485be4);
    /* 00485be4: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485be7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00485bea: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485bed: jl 0x485b8f */ if ((fS!=fO)) goto L_00485b8f;
L_00485bef:; BB(0x00485bef);
    /* 00485bef: cmp eax, 0x1ae */ {  u32 a = r_eax; u32 b = 0x1aeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485bf4: jl 0x485c9f */ if ((fS!=fO)) goto L_00485c9f;
L_00485bfa:; BB(0x00485bfa);
    /* 00485bfa: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00485bfe: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00485c02: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00485c08: mov esi, dword ptr [ebx + 0x88] */ r_esi = R32((u32)(r_ebx+0x88u));
    /* 00485c0e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00485c12: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00485c18: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00485c1c: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00485c20: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 00485c26: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00485c2a: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 00485c30: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00485c34: mov eax, dword ptr [ebx + 0x98] */ r_eax = R32((u32)(r_ebx+0x98u));
    /* 00485c3a: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00485c3e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00485c42: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00485c46: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00485c4a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00485c4e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00485c52: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00485c56: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x485c5bu); f_0082ebac();
    /* 00485c5b: fld dword ptr [0x900eb4] */ FPUSH(R_F32((u32)(0x900eb4u)));
    /* 00485c61: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00485c65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00485c67: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00485c6b: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 00485c71: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00485c75: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00485c77: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00485c79: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00485c7b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00485c7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00485c7f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00485c83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00485c85: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00485c89: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00485c8d: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00485c91: push 0x900d9c */ { u32 v = 0x900d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00485c96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485c97: call 0x4a053c */ r_esp -= 4; W32(r_esp, 0x485c9cu); f_004a053c();
    /* 00485c9c: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485c9f:; BB(0x00485c9f);
    /* 00485c9f: cmp eax, 0x23a */ {  u32 a = r_eax; u32 b = 0x23au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485ca4: je 0x485d55 */ if (fZ) goto L_00485d55;
L_00485caa:; BB(0x00485caa);
    /* 00485caa: cmp eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cad: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485caf:; BB(0x00485caf);
    /* 00485caf: cmp eax, 0x82 */ {  u32 a = r_eax; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cb4: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485cb6:; BB(0x00485cb6);
    /* 00485cb6: cmp eax, 0xb1 */ {  u32 a = r_eax; u32 b = 0xb1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cbb: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485cbd:; BB(0x00485cbd);
    /* 00485cbd: cmp eax, 0xcd */ {  u32 a = r_eax; u32 b = 0xcdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cc2: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485cc4:; BB(0x00485cc4);
    /* 00485cc4: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cc9: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485ccb:; BB(0x00485ccb);
    /* 00485ccb: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cd0: je 0x485cd9 */ if (fZ) goto L_00485cd9;
L_00485cd2:; BB(0x00485cd2);
    /* 00485cd2: cmp eax, 0x23c */ {  u32 a = r_eax; u32 b = 0x23cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485cd7: jne 0x485ceb */ if (!fZ) goto L_00485ceb;
L_00485cd9:; BB(0x00485cd9);
    /* 00485cd9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00485cdb: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485ce0: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x485ce5u); f_006ff5f8();
    /* 00485ce5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485ce8: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
L_00485ceb:; BB(0x00485ceb);
    /* 00485ceb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00485cee: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00485cf1: cmp eax, 0x2ca */ {  u32 a = r_eax; u32 b = 0x2cau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485cf6: jge 0x485d0a */ if ((fS==fO)) goto L_00485d0a;
L_00485cf8:; BB(0x00485cf8);
    /* 00485cf8: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00485cfb: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00485d01: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485d04: je 0x485e3b */ if (fZ) goto L_00485e3b;
L_00485d0a:; BB(0x00485d0a);
    /* 00485d0a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00485d0e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00485d13: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00485d17: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485d1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00485d1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485d1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00485d1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00485d1e: ret  */ FN_RET(0x004859d0); r_esp += 4; return;
L_00485d1f:; BB(0x00485d1f);
    /* 00485d1f: push dword ptr [esi + 0x900db0] */ { u32 v = R32((u32)(r_esi+0x900db0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485d25: push dword ptr [esp + ebp*4 + 0x1c] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00485d29: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x485d2eu); f_00509590();
    /* 00485d2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485d31: mov dword ptr [ebx + edi*2 + 0xa0], eax */ W32((u32)(r_ebx+r_edi*2+0xa0u), r_eax);
    /* 00485d38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485d3a: je 0x485d4d */ if (fZ) goto L_00485d4d;
L_00485d3c:; BB(0x00485d3c);
    /* 00485d3c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00485d3e: mov ecx, eax */ r_ecx = r_eax;
    /* 00485d40: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x485d45u); f_00508efc();
    /* 00485d45: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485d48: jmp 0x485be4 */ goto L_00485be4;
L_00485d4d:; BB(0x00485d4d);
    /* 00485d4d: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485d50: jmp 0x485be4 */ goto L_00485be4;
L_00485d55:; BB(0x00485d55);
    /* 00485d55: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 00485d5b: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 00485d5f: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00485d62: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00485d66: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 00485d69: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00485d6d: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00485d70: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00485d74: mov edx, 0x900ea4 */ r_edx = 0x900ea4u;
    /* 00485d79: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x485d7eu); f_0082ebac();
    /* 00485d7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485d80: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00485d82: jle 0x485dff */ if ((fZ||fS!=fO)) goto L_00485dff;
L_00485d84:; BB(0x00485d84);
    /* 00485d84: mov ebp, esi */ r_ebp = r_esi;
    /* 00485d86: mov esi, eax */ r_esi = r_eax;
L_00485d88:; BB(0x00485d88);
    /* 00485d88: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 00485d8f: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00485d96: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485d99: jne 0x485df0 */ if (!fZ) goto L_00485df0;
L_00485d9b:; BB(0x00485d9b);
    /* 00485d9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00485d9c: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x485da1u); f_0048df48();
    /* 00485da1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00485da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485da4: je 0x485df0 */ if (fZ) goto L_00485df0;
L_00485da6:; BB(0x00485da6);
    /* 00485da6: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 00485daa: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00485dad: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00485db1: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00485db4: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00485db8: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00485dbb: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00485dbf: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00485dc3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x485dc8u); f_0082f9c4();
    /* 00485dc8: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 00485dd0: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 00485dd4: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x485dd9u); f_0083173c();
    /* 00485dd9: fcomp dword ptr [0x900e94] */ fx_compare(ST(0), R_F32((u32)(0x900e94u))); FPOP();
    /* 00485ddf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485de1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485de2: ja 0x485df0 */ if ((!fC&&!fZ)) goto L_00485df0;
L_00485de4:; BB(0x00485de4);
    /* 00485de4: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00485de7: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00485ded: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00485df0:; BB(0x00485df0);
    /* 00485df0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485df3: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485df5: jl 0x485d88 */ if ((fS!=fO)) goto L_00485d88;
L_00485df7:; BB(0x00485df7);
    /* 00485df7: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485dfa: jmp 0x485caa */ goto L_00485caa;
L_00485dff:; BB(0x00485dff);
    /* 00485dff: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485e02: jmp 0x485caa */ goto L_00485caa;
L_00485e07:; BB(0x00485e07);
    /* 00485e07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e0c: push 0x3e2 */ { u32 v = 0x3e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e11: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x485e16u); f_00814298();
    /* 00485e16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e19: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485e1c: jmp 0x485a53 */ goto L_00485a53;
L_00485e21:; BB(0x00485e21);
    /* 00485e21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485e26: push 0x3e0 */ { u32 v = 0x3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00485e2b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x485e30u); f_00814298();
    /* 00485e30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485e33: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00485e36: jmp 0x485a48 */ goto L_00485a48;
L_00485e3b:; BB(0x00485e3b);
    /* 00485e3b: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485e3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00485e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485e40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00485e41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00485e42: ret  */ FN_RET(0x004859d0); r_esp += 4; return;
}

void f_00485e44(void) /* sub_485E44 */
{
    FN_ENTER(0x00485e44);
    /* 00485e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485e45: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485e48: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00485e4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00485e4c: call 0x48607c */ r_esp -= 4; W32(r_esp, 0x485e51u); f_0048607c();
    /* 00485e51: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00485e54: cmp edx, 0x101 */ {  u32 a = r_edx; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e5a: jle 0x485e9c */ if ((fZ||fS!=fO)) goto L_00485e9c;
L_00485e5c:; BB(0x00485e5c);
    /* 00485e5c: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e62: jge 0x485e9c */ if ((fS==fO)) goto L_00485e9c;
L_00485e64:; BB(0x00485e64);
    /* 00485e64: cmp edx, 0x10f */ {  u32 a = r_edx; u32 b = 0x10fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e6a: jl 0x485e74 */ if ((fS!=fO)) goto L_00485e74;
L_00485e6c:; BB(0x00485e6c);
    /* 00485e6c: cmp edx, 0x11d */ {  u32 a = r_edx; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e72: jle 0x485ee0 */ if ((fZ||fS!=fO)) goto L_00485ee0;
L_00485e74:; BB(0x00485e74);
    /* 00485e74: cmp edx, 0x101 */ {  u32 a = r_edx; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e7a: jle 0x485e88 */ if ((fZ||fS!=fO)) goto L_00485e88;
L_00485e7c:; BB(0x00485e7c);
    /* 00485e7c: cmp edx, 0x10f */ {  u32 a = r_edx; u32 b = 0x10fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e82: jl 0x486010 */ if ((fS!=fO)) goto L_00486010;
L_00485e88:; BB(0x00485e88);
    /* 00485e88: cmp edx, 0x11d */ {  u32 a = r_edx; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e8e: jle 0x485e9c */ if ((fZ||fS!=fO)) goto L_00485e9c;
L_00485e90:; BB(0x00485e90);
    /* 00485e90: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485e96: jl 0x48605f */ if ((fS!=fO)) goto L_0048605f;
L_00485e9c:; BB(0x00485e9c);
    /* 00485e9c: cmp edx, 0x11d */ {  u32 a = r_edx; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485ea2: jle 0x485ed4 */ if ((fZ||fS!=fO)) goto L_00485ed4;
L_00485ea4:; BB(0x00485ea4);
    /* 00485ea4: cmp edx, 0x1ac */ {  u32 a = r_edx; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485eaa: jge 0x485ed4 */ if ((fS==fO)) goto L_00485ed4;
L_00485eac:; BB(0x00485eac);
    /* 00485eac: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485eb2: jl 0x485ec0 */ if ((fS!=fO)) goto L_00485ec0;
L_00485eb4:; BB(0x00485eb4);
    /* 00485eb4: cmp edx, 0x1ac */ {  u32 a = r_edx; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485eba: jle 0x485f53 */ if ((fZ||fS!=fO)) goto L_00485f53;
L_00485ec0:; BB(0x00485ec0);
    /* 00485ec0: cmp edx, 0x11d */ {  u32 a = r_edx; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485ec6: jle 0x485ed4 */ if ((fZ||fS!=fO)) goto L_00485ed4;
L_00485ec8:; BB(0x00485ec8);
    /* 00485ec8: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485ece: jl 0x485fc5 */ if ((fS!=fO)) goto L_00485fc5;
L_00485ed4:; BB(0x00485ed4);
    /* 00485ed4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00485ed6: call 0x486140 */ r_esp -= 4; W32(r_esp, 0x485edbu); f_00486140();
    /* 00485edb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00485ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485edf: ret  */ FN_RET(0x00485e44); r_esp += 4; return;
L_00485ee0:; BB(0x00485ee0);
    /* 00485ee0: fld dword ptr [0x900e90] */ FPUSH(R_F32((u32)(0x900e90u)));
    /* 00485ee6: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00485eea:; BB(0x00485eea);
    /* 00485eea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x485eefu); f_0082d7b0();
    /* 00485eef: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485ef4u); f_0082fa9c();
    /* 00485ef4: lea ecx, [ebp + 0x58] */ r_ecx = (u32)(r_ebp+0x58u);
    /* 00485ef7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485efcu); f_0082d838();
    /* 00485efc: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00485eff: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x485f04u); f_00829cc8();
    /* 00485f04: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 00485f07: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x485f0cu); f_00588428();
    /* 00485f0c: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f0f: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f12: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f15: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485f1au); f_0083046c();
    /* 00485f1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485f1d: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 00485f20: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x485f25u); f_00452050();
    /* 00485f25: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x485f2au); f_0082faac();
    /* 00485f2a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485f2fu); f_0082da80();
    /* 00485f2f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00485f33: fcomp dword ptr [0x900e90] */ fx_compare(ST(0), R_F32((u32)(0x900e90u))); FPOP();
    /* 00485f39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485f3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485f3c: jb 0x485f46 */ if (fC) goto L_00485f46;
L_00485f3e:; BB(0x00485f3e);
    /* 00485f3e: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00485f41: jmp 0x485e9c */ goto L_00485e9c;
L_00485f46:; BB(0x00485f46);
    /* 00485f46: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x485f4bu); f_005963d0();
    /* 00485f4b: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 00485f4e: jmp 0x485e9c */ goto L_00485e9c;
L_00485f53:; BB(0x00485f53);
    /* 00485f53: fld dword ptr [0x900e90] */ FPUSH(R_F32((u32)(0x900e90u)));
    /* 00485f59: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00485f5d:; BB(0x00485f5d);
    /* 00485f5d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x485f62u); f_0082d7b0();
    /* 00485f62: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x485f67u); f_0082fa9c();
    /* 00485f67: lea ecx, [ebp + 0x58] */ r_ecx = (u32)(r_ebp+0x58u);
    /* 00485f6a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x485f6fu); f_0082d838();
    /* 00485f6f: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00485f72: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x485f77u); f_00829cc8();
    /* 00485f77: mov ecx, dword ptr [ebp + 0x80] */ r_ecx = R32((u32)(r_ebp+0x80u));
    /* 00485f7d: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x485f82u); f_00588428();
    /* 00485f82: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f85: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f88: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00485f8b: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x485f90u); f_0083046c();
    /* 00485f90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485f93: mov ecx, dword ptr [ebp + 0x80] */ r_ecx = R32((u32)(r_ebp+0x80u));
    /* 00485f99: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x485f9eu); f_00452050();
    /* 00485f9e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x485fa3u); f_0082faac();
    /* 00485fa3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x485fa8u); f_0082da80();
    /* 00485fa8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00485fac: fcomp dword ptr [0x900e90] */ fx_compare(ST(0), R_F32((u32)(0x900e90u))); FPOP();
    /* 00485fb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485fb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485fb5: jae 0x485ed4 */ if (!fC) goto L_00485ed4;
L_00485fbb:; BB(0x00485fbb);
    /* 00485fbb: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x485fc0u); f_005963d0();
    /* 00485fc0: jmp 0x485ed4 */ goto L_00485ed4;
L_00485fc5:; BB(0x00485fc5);
    /* 00485fc5: add edx, 0xfffffee3 */ {  u32 a = r_edx; u32 b = 0xfffffee3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00485fcb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00485fcf: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00485fd3: fdiv dword ptr [0x900e88] */ ST(0) = ST(0) / R_F32((u32)(0x900e88u));
    /* 00485fd9: fcom dword ptr [0x900e84] */ fx_compare(ST(0), R_F32((u32)(0x900e84u))); 
    /* 00485fdf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485fe1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00485fe5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485fe6: je 0x485ed4 */ if (fZ) goto L_00485ed4;
L_00485fec:; BB(0x00485fec);
    /* 00485fec: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00485ff0: fcomp dword ptr [0x900e90] */ fx_compare(ST(0), R_F32((u32)(0x900e90u))); FPOP();
    /* 00485ff6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00485ff8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00485ff9: jae 0x485f5d */ if (!fC) goto L_00485f5d;
L_00485fff:; BB(0x00485fff);
    /* 00485fff: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00486003: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00486006: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x48600bu); f_0048e3a4();
    /* 0048600b: jmp 0x485f5d */ goto L_00485f5d;
L_00486010:; BB(0x00486010);
    /* 00486010: lea eax, [edx - 0x101] */ r_eax = (u32)(r_edx+0xfffffeffu);
    /* 00486016: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0048601a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0048601e: fdiv dword ptr [0x900e8c] */ ST(0) = ST(0) / R_F32((u32)(0x900e8cu));
    /* 00486024: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00486028:; BB(0x00486028);
    /* 00486028: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0048602c: fcomp dword ptr [0x900e84] */ fx_compare(ST(0), R_F32((u32)(0x900e84u))); FPOP();
    /* 00486032: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486034: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486035: je 0x485e9c */ if (fZ) goto L_00485e9c;
L_0048603b:; BB(0x0048603b);
    /* 0048603b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0048603f: fcomp dword ptr [0x900e90] */ fx_compare(ST(0), R_F32((u32)(0x900e90u))); FPOP();
    /* 00486045: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00486047: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00486048: jae 0x485eea */ if (!fC) goto L_00485eea;
L_0048604e:; BB(0x0048604e);
    /* 0048604e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00486052: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00486055: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x48605au); f_0048e3a4();
    /* 0048605a: jmp 0x485eea */ goto L_00485eea;
L_0048605f:; BB(0x0048605f);
    /* 0048605f: mov eax, edx */ r_eax = r_edx;
    /* 00486061: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00486063: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00486068: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0048606c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00486070: fdiv dword ptr [0x900e88] */ ST(0) = ST(0) / R_F32((u32)(0x900e88u));
    /* 00486076: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0048607a: jmp 0x486028 */ goto L_00486028;
}

