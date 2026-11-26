#include "protos.h"

void f_007560bb(void)
{
    FN_ENTER(0x007560bb);
    /* 007560bb: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007560be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007560c0: je 0x7560ce */ if (fZ) goto L_007560ce;
L_007560c2:; BB(0x007560c2);
    /* 007560c2: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7560c7u); f_0073d160();
    /* 007560c7: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_007560ce:; BB(0x007560ce);
    /* 007560ce: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 007560d1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007560d3: je 0x7560ea */ if (fZ) goto L_007560ea;
L_007560d5:; BB(0x007560d5);
    /* 007560d5: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007560d9: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007560df: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 007560e3: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
L_007560ea:; BB(0x007560ea);
    /* 007560ea: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 007560ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007560ef: je 0x7560fd */ if (fZ) goto L_007560fd;
L_007560f1:; BB(0x007560f1);
    /* 007560f1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7560f6u); f_007127b0();
    /* 007560f6: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_007560fd:; BB(0x007560fd);
    /* 007560fd: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00756100: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756102: je 0x7567b3 */ if (fZ) goto L_007567b3;
L_00756108:; BB(0x00756108);
    /* 00756108: mov ecx, esi */ r_ecx = r_esi;
    /* 0075610a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75610fu); f_00737d90();
    /* 0075610f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00756113: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0075611a: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00756120: mov ecx, esi */ r_ecx = r_esi;
    /* 00756122: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00756129: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0075612e: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x756133u); f_00737d70();
    /* 00756133: mov ecx, esi */ r_ecx = r_esi;
    /* 00756135: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x75613au); f_00737d1c();
    /* 0075613a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075613c: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x756141u); f_00737c94();
    /* 00756141: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00756147: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0075614a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075614c: jl 0x7561a7 */ if ((fS!=fO)) goto L_007561a7;
L_0075614e:; BB(0x0075614e);
    /* 0075614e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00756152: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00756156: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0075615a: mov esi, eax */ r_esi = r_eax;
    /* 0075615c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00756160:; BB(0x00756160);
    /* 00756160: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756161: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x756166u); f_0081364c();
    /* 00756166: mov ebx, eax */ r_ebx = r_eax;
    /* 00756168: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075616b: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075616e: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00756175: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00756178: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756179: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075617a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0075617e: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x756183u); f_0073791c();
    /* 00756183: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756186: jne 0x756194 */ if (!fZ) goto L_00756194;
L_00756188:; BB(0x00756188);
    /* 00756188: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0075618c: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075618e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00756191: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_00756194:; BB(0x00756194);
    /* 00756194: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00756197: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00756199: jge 0x756160 */ if ((fS==fO)) goto L_00756160;
L_0075619b:; BB(0x0075619b);
    /* 0075619b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075619f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007561a3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_007561a7:; BB(0x007561a7);
    /* 007561a7: mov ecx, esi */ r_ecx = r_esi;
    /* 007561a9: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x7561aeu); f_00737cdc();
    /* 007561ae: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007561b0: jle 0x75677b */ if ((fZ||fS!=fO)) goto L_0075677b;
L_007561b6:; BB(0x007561b6);
    /* 007561b6: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 007561b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007561bb: je 0x756752 */ if (fZ) goto L_00756752;
L_007561c1:; BB(0x007561c1);
    /* 007561c1: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007561c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007561c6: je 0x756730 */ if (fZ) goto L_00756730;
L_007561cc:; BB(0x007561cc);
    /* 007561cc: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007561cf: je 0x756724 */ if (fZ) goto L_00756724;
L_007561d5:; BB(0x007561d5);
    /* 007561d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007561d6: mov ecx, esi */ r_ecx = r_esi;
    /* 007561d8: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x7561ddu); f_00737c40();
L_007561dd:; BB(0x007561dd);
    /* 007561dd: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 007561e0: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 007561e7: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007561ed: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 007561f0: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 007561f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007561f9: je 0x756202 */ if (fZ) goto L_00756202;
L_007561fb:; BB(0x007561fb);
    /* 007561fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007561fd: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x756202u); f_00760acc();
L_00756202:; BB(0x00756202);
    /* 00756202: mov byte ptr [ebx + 0x1c], 8 */ W8((u32)(r_ebx+0x1cu), 0x8u);
    /* 00756206: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0075620d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756210: je 0x7562ee */ if (fZ) goto L_007562ee;
L_00756216:; BB(0x00756216);
    /* 00756216: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00756219: mov ecx, esi */ r_ecx = r_esi;
    /* 0075621b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756220u); f_00737d90();
    /* 00756220: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00756224: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0075622b: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00756231: mov ecx, esi */ r_ecx = r_esi;
    /* 00756233: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 0075623a: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0075623f: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x756244u); f_00737d70();
    /* 00756244: mov ecx, esi */ r_ecx = r_esi;
    /* 00756246: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x75624bu); f_00737d1c();
    /* 0075624b: mov ecx, esi */ r_ecx = r_esi;
    /* 0075624d: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x756252u); f_00737c94();
    /* 00756252: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00756258: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0075625b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075625d: jl 0x7562b8 */ if ((fS!=fO)) goto L_007562b8;
L_0075625f:; BB(0x0075625f);
    /* 0075625f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00756263: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00756267: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075626b: mov esi, eax */ r_esi = r_eax;
    /* 0075626d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00756271:; BB(0x00756271);
    /* 00756271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756272: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x756277u); f_0081364c();
    /* 00756277: mov ebx, eax */ r_ebx = r_eax;
    /* 00756279: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075627c: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075627f: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00756286: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00756289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075628a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075628b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075628f: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x756294u); f_0073791c();
    /* 00756294: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756297: jne 0x7562a5 */ if (!fZ) goto L_007562a5;
L_00756299:; BB(0x00756299);
    /* 00756299: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0075629d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075629f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007562a2: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_007562a5:; BB(0x007562a5);
    /* 007562a5: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007562a8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007562aa: jge 0x756271 */ if ((fS==fO)) goto L_00756271;
L_007562ac:; BB(0x007562ac);
    /* 007562ac: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007562b0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007562b4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_007562b8:; BB(0x007562b8);
    /* 007562b8: mov ecx, esi */ r_ecx = r_esi;
    /* 007562ba: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x7562bfu); f_00737cdc();
    /* 007562bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007562c1: jle 0x7566ec */ if ((fZ||fS!=fO)) goto L_007566ec;
L_007562c7:; BB(0x007562c7);
    /* 007562c7: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 007562ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562cc: je 0x7566c3 */ if (fZ) goto L_007566c3;
L_007562d2:; BB(0x007562d2);
    /* 007562d2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007562d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562d7: je 0x7566a1 */ if (fZ) goto L_007566a1;
L_007562dd:; BB(0x007562dd);
    /* 007562dd: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562e0: je 0x756695 */ if (fZ) goto L_00756695;
L_007562e6:; BB(0x007562e6);
    /* 007562e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007562e7: mov ecx, esi */ r_ecx = r_esi;
    /* 007562e9: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x7562eeu); f_00737c40();
L_007562ee:; BB(0x007562ee);
    /* 007562ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007562f0: call 0x756c2c */ r_esp -= 4; W32(r_esp, 0x7562f5u); f_00756c2c();
    /* 007562f5: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 007562f8: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 007562ff: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756302: je 0x756318 */ if (fZ) goto L_00756318;
L_00756304:; BB(0x00756304);
    /* 00756304: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00756307: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00756309: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x75630cu); call_ind(t); }
    /* 0075630c: mov byte ptr [ebx + 0x1c], 0x1c */ W8((u32)(r_ebx+0x1cu), 0x1cu);
    /* 00756310: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00756313: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756316: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756317: ret  */ FN_RET(0x007560bb); r_esp += 4; return;
L_00756318:; BB(0x00756318);
    /* 00756318: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075631b: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00756321:; BB(0x00756321);
    /* 00756321: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00756325: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00756328: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756329: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075632a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075632b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075632c: ret  */ FN_RET(0x007560bb); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x007560bb); r_esp += 4; return;
L_00756695:; BB(0x00756695);
    /* 00756695: mov ecx, esi */ r_ecx = r_esi;
    /* 00756697: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x75669cu); f_00737da4();
    /* 0075669c: jmp 0x7562ee */ goto L_007562ee;
L_007566a1:; BB(0x007566a1);
    /* 007566a1: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 007566a6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7566abu); f_0073ec50();
    /* 007566ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007566ad: push 0x9740a0 */ { u32 v = 0x9740a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007566b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007566b3: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7566b8u); f_0073a8dc();
    /* 007566b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007566bb: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 007566be: jmp 0x7562dd */ goto L_007562dd;
L_007566c3:; BB(0x007566c3);
    /* 007566c3: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 007566c8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7566cdu); f_0073ec50();
    /* 007566cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007566cf: push 0x9740a8 */ { u32 v = 0x9740a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007566d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007566d5: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7566dau); f_0073a8dc();
    /* 007566da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007566dd: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 007566e4: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 007566e7: jmp 0x7562d2 */ goto L_007562d2;
L_007566ec:; BB(0x007566ec);
    /* 007566ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007566ee: mov ecx, esi */ r_ecx = r_esi;
    /* 007566f0: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x7566f5u); f_00737840();
    /* 007566f5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 007566f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007566fa: je 0x756708 */ if (fZ) goto L_00756708;
L_007566fc:; BB(0x007566fc);
    /* 007566fc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756701u); f_007127b0();
    /* 00756701: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_00756708:; BB(0x00756708);
    /* 00756708: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075670b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075670d: je 0x7562dd */ if (fZ) goto L_007562dd;
L_00756713:; BB(0x00756713);
    /* 00756713: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756718u); f_007127b0();
    /* 00756718: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0075671f: jmp 0x7562dd */ goto L_007562dd;
L_00756724:; BB(0x00756724);
    /* 00756724: mov ecx, esi */ r_ecx = r_esi;
    /* 00756726: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x75672bu); f_00737da4();
    /* 0075672b: jmp 0x7561dd */ goto L_007561dd;
L_00756730:; BB(0x00756730);
    /* 00756730: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00756735: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75673au); f_0073ec50();
    /* 0075673a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075673c: push 0x974090 */ { u32 v = 0x974090u; r_esp -= 4; W32(r_esp, v); }
    /* 00756741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756742: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x756747u); f_0073a8dc();
    /* 00756747: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075674a: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0075674d: jmp 0x7561cc */ goto L_007561cc;
L_00756752:; BB(0x00756752);
    /* 00756752: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 00756757: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75675cu); f_0073ec50();
    /* 0075675c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075675e: push 0x974098 */ { u32 v = 0x974098u; r_esp -= 4; W32(r_esp, v); }
    /* 00756763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756764: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x756769u); f_0073a8dc();
    /* 00756769: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075676c: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00756773: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00756776: jmp 0x7561c1 */ goto L_007561c1;
L_0075677b:; BB(0x0075677b);
    /* 0075677b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075677d: mov ecx, esi */ r_ecx = r_esi;
    /* 0075677f: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x756784u); f_00737840();
    /* 00756784: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00756787: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756789: je 0x756797 */ if (fZ) goto L_00756797;
L_0075678b:; BB(0x0075678b);
    /* 0075678b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756790u); f_007127b0();
    /* 00756790: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_00756797:; BB(0x00756797);
    /* 00756797: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075679a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075679c: je 0x7561cc */ if (fZ) goto L_007561cc;
L_007567a2:; BB(0x007567a2);
    /* 007567a2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7567a7u); f_007127b0();
    /* 007567a7: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 007567ae: jmp 0x7561cc */ goto L_007561cc;
L_007567b3:; BB(0x007567b3);
    /* 007567b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007567b5: call 0x756ca0 */ r_esp -= 4; W32(r_esp, 0x7567bau); f_00756ca0();
    /* 007567ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007567bc: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 007567bf: mov ecx, eax */ r_ecx = r_eax;
    /* 007567c1: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x7567c6u); f_00737840();
    /* 007567c6: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 007567c9: jmp 0x756108 */ goto L_00756108;
}

void f_00756206(void)
{
    FN_ENTER(0x00756206);
    /* 00756206: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0075620d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756210: je 0x7562ee */ if (fZ) goto L_007562ee;
L_00756216:; BB(0x00756216);
    /* 00756216: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00756219: mov ecx, esi */ r_ecx = r_esi;
    /* 0075621b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756220u); f_00737d90();
    /* 00756220: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00756224: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0075622b: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00756231: mov ecx, esi */ r_ecx = r_esi;
    /* 00756233: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 0075623a: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0075623f: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x756244u); f_00737d70();
    /* 00756244: mov ecx, esi */ r_ecx = r_esi;
    /* 00756246: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x75624bu); f_00737d1c();
    /* 0075624b: mov ecx, esi */ r_ecx = r_esi;
    /* 0075624d: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x756252u); f_00737c94();
    /* 00756252: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00756258: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0075625b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075625d: jl 0x7562b8 */ if ((fS!=fO)) goto L_007562b8;
L_0075625f:; BB(0x0075625f);
    /* 0075625f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00756263: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00756267: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0075626b: mov esi, eax */ r_esi = r_eax;
    /* 0075626d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00756271:; BB(0x00756271);
    /* 00756271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756272: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x756277u); f_0081364c();
    /* 00756277: mov ebx, eax */ r_ebx = r_eax;
    /* 00756279: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075627c: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075627f: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00756286: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00756289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075628a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075628b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0075628f: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x756294u); f_0073791c();
    /* 00756294: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756297: jne 0x7562a5 */ if (!fZ) goto L_007562a5;
L_00756299:; BB(0x00756299);
    /* 00756299: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0075629d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075629f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007562a2: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_007562a5:; BB(0x007562a5);
    /* 007562a5: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007562a8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007562aa: jge 0x756271 */ if ((fS==fO)) goto L_00756271;
L_007562ac:; BB(0x007562ac);
    /* 007562ac: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007562b0: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007562b4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_007562b8:; BB(0x007562b8);
    /* 007562b8: mov ecx, esi */ r_ecx = r_esi;
    /* 007562ba: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x7562bfu); f_00737cdc();
    /* 007562bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007562c1: jle 0x7566ec */ if ((fZ||fS!=fO)) goto L_007566ec;
L_007562c7:; BB(0x007562c7);
    /* 007562c7: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 007562ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562cc: je 0x7566c3 */ if (fZ) goto L_007566c3;
L_007562d2:; BB(0x007562d2);
    /* 007562d2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007562d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562d7: je 0x7566a1 */ if (fZ) goto L_007566a1;
L_007562dd:; BB(0x007562dd);
    /* 007562dd: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007562e0: je 0x756695 */ if (fZ) goto L_00756695;
L_007562e6:; BB(0x007562e6);
    /* 007562e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007562e7: mov ecx, esi */ r_ecx = r_esi;
    /* 007562e9: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x7562eeu); f_00737c40();
L_007562ee:; BB(0x007562ee);
    /* 007562ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007562f0: call 0x756c2c */ r_esp -= 4; W32(r_esp, 0x7562f5u); f_00756c2c();
    /* 007562f5: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 007562f8: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 007562ff: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756302: je 0x756318 */ if (fZ) goto L_00756318;
L_00756304:; BB(0x00756304);
    /* 00756304: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00756307: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00756309: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x75630cu); call_ind(t); }
    /* 0075630c: mov byte ptr [ebx + 0x1c], 0x1c */ W8((u32)(r_ebx+0x1cu), 0x1cu);
    /* 00756310: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00756313: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756316: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756317: ret  */ FN_RET(0x00756206); r_esp += 4; return;
L_00756318:; BB(0x00756318);
    /* 00756318: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075631b: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00756321:; BB(0x00756321);
    /* 00756321: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00756325: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00756328: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756329: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075632a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075632b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075632c: ret  */ FN_RET(0x00756206); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00756206); r_esp += 4; return;
L_00756695:; BB(0x00756695);
    /* 00756695: mov ecx, esi */ r_ecx = r_esi;
    /* 00756697: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x75669cu); f_00737da4();
    /* 0075669c: jmp 0x7562ee */ goto L_007562ee;
L_007566a1:; BB(0x007566a1);
    /* 007566a1: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 007566a6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7566abu); f_0073ec50();
    /* 007566ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007566ad: push 0x9740a0 */ { u32 v = 0x9740a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007566b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007566b3: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7566b8u); f_0073a8dc();
    /* 007566b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007566bb: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 007566be: jmp 0x7562dd */ goto L_007562dd;
L_007566c3:; BB(0x007566c3);
    /* 007566c3: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 007566c8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7566cdu); f_0073ec50();
    /* 007566cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007566cf: push 0x9740a8 */ { u32 v = 0x9740a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007566d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007566d5: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7566dau); f_0073a8dc();
    /* 007566da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007566dd: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 007566e4: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 007566e7: jmp 0x7562d2 */ goto L_007562d2;
L_007566ec:; BB(0x007566ec);
    /* 007566ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007566ee: mov ecx, esi */ r_ecx = r_esi;
    /* 007566f0: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x7566f5u); f_00737840();
    /* 007566f5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 007566f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007566fa: je 0x756708 */ if (fZ) goto L_00756708;
L_007566fc:; BB(0x007566fc);
    /* 007566fc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756701u); f_007127b0();
    /* 00756701: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_00756708:; BB(0x00756708);
    /* 00756708: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075670b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075670d: je 0x7562dd */ if (fZ) goto L_007562dd;
L_00756713:; BB(0x00756713);
    /* 00756713: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756718u); f_007127b0();
    /* 00756718: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0075671f: jmp 0x7562dd */ goto L_007562dd;
}

void f_0075632d(void)
{
    FN_ENTER(0x0075632d);
    /* 0075632d: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00756330: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756332: je 0x756340 */ if (fZ) goto L_00756340;
L_00756334:; BB(0x00756334);
    /* 00756334: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756339u); f_007127b0();
    /* 00756339: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_00756340:; BB(0x00756340);
    /* 00756340: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00756343: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756345: je 0x7567e8 */ if (fZ) goto L_007567e8;
L_0075634b:; BB(0x0075634b);
    /* 0075634b: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0075634e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756350: je 0x7567ce */ if (fZ) goto L_007567ce;
L_00756356:; BB(0x00756356);
    /* 00756356: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075635d: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00756363: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0075636a: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0075636d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075636f: je 0x756378 */ if (fZ) goto L_00756378;
L_00756371:; BB(0x00756371);
    /* 00756371: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756373: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x756378u); f_00760acc();
L_00756378:; BB(0x00756378);
    /* 00756378: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 0075637c: lea edx, [ebx + 0x28] */ r_edx = (u32)(r_ebx+0x28u);
    /* 0075637f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756380: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00756383: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00756386: call 0x747da0 */ r_esp -= 4; W32(r_esp, 0x75638bu); f_00747da0();
    /* 0075638b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075638e: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00756391: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00756398: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075639b: je 0x7563a9 */ if (fZ) goto L_007563a9;
L_0075639d:; BB(0x0075639d);
    /* 0075639d: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 007563a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007563a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007563a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007563a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007563a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007563a8: ret  */ FN_RET(0x0075632d); r_esp += 4; return;
L_007563a9:; BB(0x007563a9);
    /* 007563a9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007563ac: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007563b2:; BB(0x007563b2);
    /* 007563b2: mov dword ptr [ebx + 0x30], 0xffffffff */ W32((u32)(r_ebx+0x30u), 0xffffffffu);
    /* 007563b9: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7563beu); f_007365f4();
    /* 007563be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007563bf: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x7563c4u); f_00781dd4();
    /* 007563c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007563c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007563c7: je 0x7563ce */ if (fZ) goto L_007563ce;
L_007563c9:; BB(0x007563c9);
    /* 007563c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007563cb: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
L_007563ce:; BB(0x007563ce);
    /* 007563ce: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 007563d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007563d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007563d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007563d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007563d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007563d9: ret  */ FN_RET(0x0075632d); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x0075632d); r_esp += 4; return;
L_007567ce:; BB(0x007567ce);
    /* 007567ce: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7567d3u); f_007365f4();
    /* 007567d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007567d4: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007567d7: call 0x747d80 */ r_esp -= 4; W32(r_esp, 0x7567dcu); f_00747d80();
    /* 007567dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007567dd: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 007567e0: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 007567e3: jmp 0x756356 */ goto L_00756356;
L_007567e8:; BB(0x007567e8);
    /* 007567e8: call 0x747d6c */ r_esp -= 4; W32(r_esp, 0x7567edu); f_00747d6c();
    /* 007567ed: mov ecx, eax */ r_ecx = r_eax;
    /* 007567ef: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 007567f2: jmp 0x75634b */ goto L_0075634b;
}

void f_0075637c(void)
{
    FN_ENTER(0x0075637c);
    /* 0075637c: lea edx, [ebx + 0x28] */ r_edx = (u32)(r_ebx+0x28u);
    /* 0075637f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756380: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00756383: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00756386: call 0x747da0 */ r_esp -= 4; W32(r_esp, 0x75638bu); f_00747da0();
    /* 0075638b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075638e: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00756391: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00756398: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075639b: je 0x7563a9 */ if (fZ) goto L_007563a9;
L_0075639d:; BB(0x0075639d);
    /* 0075639d: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 007563a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007563a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007563a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007563a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007563a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007563a8: ret  */ FN_RET(0x0075637c); r_esp += 4; return;
L_007563a9:; BB(0x007563a9);
    /* 007563a9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007563ac: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007563b2:; BB(0x007563b2);
    /* 007563b2: mov dword ptr [ebx + 0x30], 0xffffffff */ W32((u32)(r_ebx+0x30u), 0xffffffffu);
    /* 007563b9: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7563beu); f_007365f4();
    /* 007563be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007563bf: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x7563c4u); f_00781dd4();
    /* 007563c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007563c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007563c7: je 0x7563ce */ if (fZ) goto L_007563ce;
L_007563c9:; BB(0x007563c9);
    /* 007563c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007563cb: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
L_007563ce:; BB(0x007563ce);
    /* 007563ce: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 007563d2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007563d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007563d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007563d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007563d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007563d9: ret  */ FN_RET(0x0075637c); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x0075637c); r_esp += 4; return;
}

void f_007563da(void)
{
    FN_ENTER(0x007563da);
    /* 007563da: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 007563dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007563df: je 0x7563ed */ if (fZ) goto L_007563ed;
L_007563e1:; BB(0x007563e1);
    /* 007563e1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7563e6u); f_007127b0();
    /* 007563e6: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_007563ed:; BB(0x007563ed);
    /* 007563ed: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 007563f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007563f2: je 0x756400 */ if (fZ) goto L_00756400;
L_007563f4:; BB(0x007563f4);
    /* 007563f4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7563f9u); f_007127b0();
    /* 007563f9: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_00756400:; BB(0x00756400);
    /* 00756400: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00756403: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756405: je 0x756413 */ if (fZ) goto L_00756413;
L_00756407:; BB(0x00756407);
    /* 00756407: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75640cu); f_0073d160();
    /* 0075640c: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_00756413:; BB(0x00756413);
    /* 00756413: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 00756416: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756418: je 0x75642f */ if (fZ) goto L_0075642f;
L_0075641a:; BB(0x0075641a);
    /* 0075641a: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0075641e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00756424: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00756428: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
L_0075642f:; BB(0x0075642f);
    /* 0075642f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00756432: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756434: je 0x756442 */ if (fZ) goto L_00756442;
L_00756436:; BB(0x00756436);
    /* 00756436: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75643bu); f_007127b0();
    /* 0075643b: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
L_00756442:; BB(0x00756442);
    /* 00756442: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 00756445: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756447: je 0x756455 */ if (fZ) goto L_00756455;
L_00756449:; BB(0x00756449);
    /* 00756449: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75644eu); f_007127b0();
    /* 0075644e: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_00756455:; BB(0x00756455);
    /* 00756455: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00756458: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075645a: je 0x756468 */ if (fZ) goto L_00756468;
L_0075645c:; BB(0x0075645c);
    /* 0075645c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756461u); f_007127b0();
    /* 00756461: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
L_00756468:; BB(0x00756468);
    /* 00756468: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0075646b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075646d: je 0x7567f7 */ if (fZ) goto L_007567f7;
L_00756473:; BB(0x00756473);
    /* 00756473: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0075647a: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00756480: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00756483: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0075648a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075648c: je 0x756495 */ if (fZ) goto L_00756495;
L_0075648e:; BB(0x0075648e);
    /* 0075648e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756490: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x756495u); f_00760acc();
L_00756495:; BB(0x00756495);
    /* 00756495: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
    /* 00756499: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 0075649c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007564a3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007564a6: je 0x7564bc */ if (fZ) goto L_007564bc;
L_007564a8:; BB(0x007564a8);
    /* 007564a8: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 007564ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007564ad: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x7564b0u); call_ind(t); }
    /* 007564b0: mov byte ptr [ebx + 0x1c], 0x1c */ W8((u32)(r_ebx+0x1cu), 0x1cu);
    /* 007564b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564bb: ret  */ FN_RET(0x007563da); r_esp += 4; return;
L_007564bc:; BB(0x007564bc);
    /* 007564bc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007564bf: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007564c1:; BB(0x007564c1);
    /* 007564c1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7564c6u); f_007365f4();
    /* 007564c6: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x007563da); r_esp += 4; return;
L_007567f7:; BB(0x007567f7);
    /* 007567f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007567f9: call 0x756cf4 */ r_esp -= 4; W32(r_esp, 0x7567feu); f_00756cf4();
    /* 007567fe: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00756801: jmp 0x756473 */ goto L_00756473;
}

void f_00756499(void)
{
    FN_ENTER(0x00756499);
    /* 00756499: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 0075649c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007564a3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007564a6: je 0x7564bc */ if (fZ) goto L_007564bc;
L_007564a8:; BB(0x007564a8);
    /* 007564a8: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 007564ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007564ad: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x7564b0u); call_ind(t); }
    /* 007564b0: mov byte ptr [ebx + 0x1c], 0x1c */ W8((u32)(r_ebx+0x1cu), 0x1cu);
    /* 007564b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564bb: ret  */ FN_RET(0x00756499); r_esp += 4; return;
L_007564bc:; BB(0x007564bc);
    /* 007564bc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007564bf: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007564c1:; BB(0x007564c1);
    /* 007564c1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7564c6u); f_007365f4();
    /* 007564c6: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00756499); r_esp += 4; return;
}

void f_007564c9(void)
{
    FN_ENTER(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x007564c9); r_esp += 4; return;
}

void f_007564fa(void)
{
    FN_ENTER(0x007564fa);
    /* 007564fa: cmc  */ fC = !fC;
    UNSUP(0x007564fb, "falls out of decoded code");
}

void f_00756808(void) /* sub_756808 */
{
    FN_ENTER(0x00756808);
    /* 00756808: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756809: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075680a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075680b: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075680e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075680f: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x756814u); f_0073cd8c();
    /* 00756814: mov esi, eax */ r_esi = r_eax;
    /* 00756816: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00756818: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75681du); f_0079317c();
    /* 0075681d: mov ebp, eax */ r_ebp = r_eax;
    /* 0075681f: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00756824: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756829u); f_0079317c();
    /* 00756829: mov ebx, eax */ r_ebx = r_eax;
    /* 0075682b: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00756830: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756835u); f_0073ec50();
    /* 00756835: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756838: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075683d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075683e: mov ecx, esi */ r_ecx = r_esi;
    /* 00756840: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756842: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x756847u); f_0073cfec();
    /* 00756847: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756849: mov ecx, esi */ r_ecx = r_esi;
    /* 0075684b: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x756850u); f_0073d148();
    /* 00756850: mov ecx, esi */ r_ecx = r_esi;
    /* 00756852: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x756857u); f_0073d170();
    /* 00756857: mov eax, esi */ r_eax = r_esi;
    /* 00756859: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075685a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075685b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075685c: ret  */ FN_RET(0x00756808); r_esp += 4; return;
}

void f_00756854(void)
{
    FN_ENTER(0x00756854);
    /* 00756854: imul edi, esi, 0x5bc68bff */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x5bc68bffu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0075685a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075685b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075685c: ret  */ FN_RET(0x00756854); r_esp += 4; return;
}

void f_00756860(void) /* sub_756860 */
{
    FN_ENTER(0x00756860);
    /* 00756860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756861: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00756866: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75686bu); f_0073ec50();
    /* 0075686b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075686d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075686e: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x756873u); f_00735708();
    /* 00756873: mov esi, eax */ r_esi = r_eax;
    /* 00756875: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 0075687a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75687fu); f_0079317c();
    /* 0075687f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756882: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756884: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756886: mov ecx, esi */ r_ecx = r_esi;
    /* 00756888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756889: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75688eu); f_00735c90();
    /* 0075688e: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 00756893: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756898u); f_0079317c();
    /* 00756898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756899: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075689b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075689d: mov ecx, esi */ r_ecx = r_esi;
    /* 0075689f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007568a0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7568a5u); f_00735c90();
    /* 007568a5: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x7568aau); f_0077a584();
    /* 007568aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007568ac: jne 0x7568b7 */ if (!fZ) goto L_007568b7;
L_007568ae:; BB(0x007568ae);
    /* 007568ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007568b0: mov ecx, esi */ r_ecx = r_esi;
    /* 007568b2: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7568b7u); f_00736510();
L_007568b7:; BB(0x007568b7);
    /* 007568b7: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007568bc: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007568c3: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007568c9: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007568d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007568d2: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7568d7u); f_00736138();
    /* 007568d7: mov eax, esi */ r_eax = r_esi;
    /* 007568d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007568da: ret  */ FN_RET(0x00756860); r_esp += 4; return;
}

void f_007568dc(void) /* sub_7568DC */
{
    FN_ENTER(0x007568dc);
    /* 007568dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007568dd: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 007568e2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7568e7u); f_0073ec50();
    /* 007568e7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007568e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007568ea: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x7568efu); f_00735708();
    /* 007568ef: mov edi, eax */ r_edi = r_eax;
    /* 007568f1: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 007568f6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7568fbu); f_0079317c();
    /* 007568fb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007568fe: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00756900: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756902: mov ecx, edi */ r_ecx = r_edi;
    /* 00756904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756905: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75690au); f_00735c90();
    /* 0075690a: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0075690f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756914u); f_0079317c();
    /* 00756914: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756915: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00756917: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756919: mov ecx, edi */ r_ecx = r_edi;
    /* 0075691b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075691c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756921u); f_00735c90();
    /* 00756921: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756926: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 0075692d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00756933: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 0075693a: mov ecx, edi */ r_ecx = r_edi;
    /* 0075693c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x756941u); f_00736138();
    /* 00756941: mov eax, edi */ r_eax = r_edi;
    /* 00756943: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756944: ret  */ FN_RET(0x007568dc); r_esp += 4; return;
}

void f_00756948(void) /* sub_756948 */
{
    FN_ENTER(0x00756948);
    /* 00756948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00756949: push 0xa7 */ { u32 v = 0xa7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075694e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756953u); f_0073ec50();
    /* 00756953: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00756955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756956: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x75695bu); f_00735708();
    /* 0075695b: mov edi, eax */ r_edi = r_eax;
    /* 0075695d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756960: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x756965u); f_0077a584();
    /* 00756965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756967: je 0x756993 */ if (fZ) goto L_00756993;
L_00756969:; BB(0x00756969);
    /* 00756969: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 0075696e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756973u); f_0079317c();
    /* 00756973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756974: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00756976: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756978: mov ecx, edi */ r_ecx = r_edi;
    /* 0075697a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075697b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756980u); f_00735c90();
    /* 00756980: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x756985u); f_0077a5b0();
    /* 00756985: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00756987: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756989: mov ecx, edi */ r_ecx = r_edi;
    /* 0075698b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075698c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756991u); f_00735c90();
    /* 00756991: jmp 0x7569bb */ goto L_007569bb;
L_00756993:; BB(0x00756993);
    /* 00756993: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 00756998: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75699du); f_0079317c();
    /* 0075699d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075699e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007569a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007569a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007569a2: mov ecx, edi */ r_ecx = r_edi;
    /* 007569a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007569a5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7569aau); f_00735c90();
    /* 007569aa: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x7569afu); f_0077a5b0();
    /* 007569af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007569b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007569b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007569b3: mov ecx, edi */ r_ecx = r_edi;
    /* 007569b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007569b6: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7569bbu); f_00735ee0();
L_007569bb:; BB(0x007569bb);
    /* 007569bb: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007569c0: mov ecx, edi */ r_ecx = r_edi;
    /* 007569c2: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 007569c9: or edx, 0xffff00c0 */ {  u32 a = r_edx; u32 b = 0xffff00c0u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007569cf: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 007569d6: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007569db: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7569e0u); f_007361d0();
    /* 007569e0: mov eax, edi */ r_eax = r_edi;
    /* 007569e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007569e3: ret  */ FN_RET(0x00756948); r_esp += 4; return;
}

void f_007569e4(void) /* sub_7569E4 */
{
    FN_ENTER(0x007569e4);
    /* 007569e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007569e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007569e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007569e7: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007569ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007569eb: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7569f0u); f_0073cd8c();
    /* 007569f0: mov esi, eax */ r_esi = r_eax;
    /* 007569f2: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 007569f4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7569f9u); f_0079317c();
    /* 007569f9: mov ebp, eax */ r_ebp = r_eax;
    /* 007569fb: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 007569fd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756a02u); f_0079317c();
    /* 00756a02: mov ebx, eax */ r_ebx = r_eax;
    /* 00756a04: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a09: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756a0eu); f_0073ec50();
    /* 00756a0e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756a11: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a17: mov ecx, esi */ r_ecx = r_esi;
    /* 00756a19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a1b: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x756a20u); f_0073cfec();
    /* 00756a20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a22: mov ecx, esi */ r_ecx = r_esi;
    /* 00756a24: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x756a29u); f_0073d148();
    /* 00756a29: mov ecx, esi */ r_ecx = r_esi;
    /* 00756a2b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x756a30u); f_0073d170();
    /* 00756a30: mov eax, esi */ r_eax = r_esi;
    /* 00756a32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756a33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756a34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756a35: ret  */ FN_RET(0x007569e4); r_esp += 4; return;
}

void f_00756a38(void) /* sub_756A38 */
{
    FN_ENTER(0x00756a38);
    /* 00756a38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00756a3b: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00756a3e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756a43u); f_00737d90();
    /* 00756a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a44: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x756a49u); f_00781dd4();
    /* 00756a49: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00756a4c: call 0x827f28 */ r_esp -= 4; W32(r_esp, 0x756a51u); f_00827f28();
    /* 00756a51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00756a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756a55: ret  */ FN_RET(0x00756a38); r_esp += 4; return;
}

void f_00756a58(void) /* sub_756A58 */
{
    FN_ENTER(0x00756a58);
    /* 00756a58: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00756a5c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00756a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00756a61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a65: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x756a6au); f_0073cd8c();
    /* 00756a6a: mov edi, eax */ r_edi = r_eax;
    /* 00756a6c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a6e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756a73u); f_0079317c();
    /* 00756a73: mov ebp, eax */ r_ebp = r_eax;
    /* 00756a75: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a77: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756a7cu); f_0079317c();
    /* 00756a7c: mov ebx, eax */ r_ebx = r_eax;
    /* 00756a7e: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756a88u); f_0073ec50();
    /* 00756a88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756a8b: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a91: mov ecx, edi */ r_ecx = r_edi;
    /* 00756a93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a95: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x756a9au); f_0073cfec();
    /* 00756a9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00756a9e: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x756aa3u); f_0073d148();
    /* 00756aa3: mov ecx, edi */ r_ecx = r_edi;
    /* 00756aa5: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x756aaau); f_0073d170();
    /* 00756aaa: mov eax, edi */ r_eax = r_edi;
    /* 00756aac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756aad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756aae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756aaf: ret  */ FN_RET(0x00756a58); r_esp += 4; return;
}

void f_00756a60(void)
{
    FN_ENTER(0x00756a60);
    /* 00756a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00756a61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a65: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x756a6au); f_0073cd8c();
    /* 00756a6a: mov edi, eax */ r_edi = r_eax;
    /* 00756a6c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a6e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756a73u); f_0079317c();
    /* 00756a73: mov ebp, eax */ r_ebp = r_eax;
    /* 00756a75: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a77: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756a7cu); f_0079317c();
    /* 00756a7c: mov ebx, eax */ r_ebx = r_eax;
    /* 00756a7e: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a83: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756a88u); f_0073ec50();
    /* 00756a88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756a8b: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756a91: mov ecx, edi */ r_ecx = r_edi;
    /* 00756a93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756a94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756a95: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x756a9au); f_0073cfec();
    /* 00756a9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756a9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00756a9e: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x756aa3u); f_0073d148();
    /* 00756aa3: mov ecx, edi */ r_ecx = r_edi;
    /* 00756aa5: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x756aaau); f_0073d170();
    /* 00756aaa: mov eax, edi */ r_eax = r_edi;
    /* 00756aac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756aad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756aae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756aaf: ret  */ FN_RET(0x00756a60); r_esp += 4; return;
}

void f_00756ab0(void) /* sub_756AB0 */
{
    FN_ENTER(0x00756ab0);
    /* 00756ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00756ab3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00756ab5: push 0x8f2ff4 */ { u32 v = 0x8f2ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00756aba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00756ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756ac1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00756ac8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00756acb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00756ace: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00756ad1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00756ad4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00756ad7: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ad9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00756ae0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x756ae5u); f_005caba4();
    /* 00756ae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756ae6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00756ae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756aeb: je 0x756b64 */ if (fZ) goto L_00756b64;
L_00756aed:; BB(0x00756aed);
    /* 00756aed: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00756af4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00756afb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00756b01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00756b04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b06: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b08: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b0d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00756b13: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x756b18u); f_0078eba4();
    /* 00756b18: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00756b1b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00756b22:; BB(0x00756b22);
    /* 00756b22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00756b29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756b2b: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x756b30u); f_0078ed3c();
    /* 00756b30: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 00756b35: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756b3au); f_0073ec50();
    /* 00756b3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756b3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756b3e: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x756b43u); f_0078ed84();
    /* 00756b43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756b45: call 0x78ee8c */ r_esp -= 4; W32(r_esp, 0x756b4au); f_0078ee8c();
    /* 00756b4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756b4c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x756b51u); f_0061cdb0();
    /* 00756b51: mov eax, ebx */ r_eax = r_ebx;
    /* 00756b53: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00756b56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00756b59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00756b60: mov esp, ebp */ r_esp = r_ebp;
    /* 00756b62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756b63: ret  */ FN_RET(0x00756ab0); r_esp += 4; return;
L_00756b64:; BB(0x00756b64);
    /* 00756b64: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00756b66: jmp 0x756b22 */ goto L_00756b22;
}

void f_00756b68(void) /* sub_756B68 */
{
    FN_ENTER(0x00756b68);
    /* 00756b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756b69: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b6e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756b73u); f_0073ec50();
    /* 00756b73: mov ebp, eax */ r_ebp = r_eax;
    /* 00756b75: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b77: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756b7cu); f_0079317c();
    /* 00756b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756b7d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756b80: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x756b85u); f_00735460();
    /* 00756b85: mov ebp, eax */ r_ebp = r_eax;
    /* 00756b87: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756b8a: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756b8fu); f_007a61a4();
    /* 00756b8f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756b92: je 0x756bfe */ if (fZ) goto L_00756bfe;
L_00756b94:; BB(0x00756b94);
    /* 00756b94: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00756b99: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756b9eu); f_0079317c();
    /* 00756b9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756b9f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00756ba1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ba3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756ba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756ba6: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756babu); f_00735ee0();
    /* 00756bab: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00756bad: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756bb2u); f_0079317c();
    /* 00756bb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756bb3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00756bb5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756bb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756bba: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756bbfu); f_00735ee0();
L_00756bbf:; BB(0x00756bbf);
    /* 00756bbf: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00756bc1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756bc6u); f_0079317c();
    /* 00756bc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756bc7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00756bc9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756bcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756bcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756bce: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756bd3u); f_00735c90();
    /* 00756bd3: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756bd8: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 00756bdf: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00756be5: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 00756bec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756bee: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x756bf3u); f_00736138();
    /* 00756bf3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756bf5: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x756bfau); f_00736458();
    /* 00756bfa: mov eax, ebp */ r_eax = r_ebp;
    /* 00756bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756bfd: ret  */ FN_RET(0x00756b68); r_esp += 4; return;
L_00756bfe:; BB(0x00756bfe);
    /* 00756bfe: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c03: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756c08u); f_0079317c();
    /* 00756c08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756c09: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00756c0b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756c0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756c10: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756c15u); f_00735c90();
    /* 00756c15: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00756c17: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756c1cu); f_0079317c();
    /* 00756c1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756c1d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00756c1f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00756c23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756c24: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756c29u); f_00735c90();
    /* 00756c29: jmp 0x756bbf */ goto L_00756bbf;
}

void f_00756c2c(void) /* sub_756C2C */
{
    FN_ENTER(0x00756c2c);
    /* 00756c2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756c2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756c2e: mov esi, ecx */ r_esi = r_ecx;
    /* 00756c30: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00756c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00756c35: je 0x756c9b */ if (fZ) goto L_00756c9b;
L_00756c37:; BB(0x00756c37);
    /* 00756c37: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00756c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00756c3c: je 0x756c9b */ if (fZ) goto L_00756c9b;
L_00756c3e:; BB(0x00756c3e);
    /* 00756c3e: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00756c41: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756c46u); f_00737d90();
    /* 00756c46: cmp eax, dword ptr [esi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00756c49: jne 0x756c4e */ if (!fZ) goto L_00756c4e;
L_00756c4b:; BB(0x00756c4b);
    /* 00756c4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756c4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756c4d: ret  */ FN_RET(0x00756c2c); r_esp += 4; return;
L_00756c4e:; BB(0x00756c4e);
    /* 00756c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756c4f: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00756c52: call 0x813670 */ r_esp -= 4; W32(r_esp, 0x756c57u); f_00813670();
    /* 00756c57: mov ebp, eax */ r_ebp = r_eax;
    /* 00756c59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756c5c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00756c5e: je 0x756c9b */ if (fZ) goto L_00756c9b;
L_00756c60:; BB(0x00756c60);
    /* 00756c60: push 0x482 */ { u32 v = 0x482u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c65: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00756c68: lea edx, [ebp + 0x60] */ r_edx = (u32)(r_ebp+0x60u);
    /* 00756c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756c6c: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x756c71u); f_0073ae38();
    /* 00756c71: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c76: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756c7bu); f_0079317c();
    /* 00756c7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756c7c: push 0x482 */ { u32 v = 0x482u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756c82: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00756c85: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x756c8au); f_0073ae38();
    /* 00756c8a: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 00756c8f: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00756c92: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00756c95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756c96: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x756c9bu); f_0073ae38();
L_00756c9b:; BB(0x00756c9b);
    /* 00756c9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756c9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756c9d: ret  */ FN_RET(0x00756c2c); r_esp += 4; return;
}

void f_00756ca0(void) /* sub_756CA0 */
{
    FN_ENTER(0x00756ca0);
    /* 00756ca0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756ca1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00756ca3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ca8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756cadu); f_0073ec50();
    /* 00756cad: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00756cb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756cb2: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00756cb4: push 0x9740d0 */ { u32 v = 0x9740d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756cba: call 0x7368fc */ r_esp -= 4; W32(r_esp, 0x756cbfu); f_007368fc();
    /* 00756cbf: mov ebx, eax */ r_ebx = r_eax;
    /* 00756cc1: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00756cc3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756cc8u); f_0079317c();
    /* 00756cc8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756ccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756ccc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756cce: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x756cd3u); f_00737ae4();
    /* 00756cd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756cd5: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x756cdau); f_00737b8c();
    /* 00756cda: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00756ce1: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00756ce7: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00756cee: mov eax, ebx */ r_eax = r_ebx;
    /* 00756cf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756cf1: ret  */ FN_RET(0x00756ca0); r_esp += 4; return;
}

void f_00756cf4(void) /* sub_756CF4 */
{
    FN_ENTER(0x00756cf4);
    /* 00756cf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756cf5: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 00756cf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756cfb: je 0x756db8 */ if (fZ) goto L_00756db8;
L_00756d01:; BB(0x00756d01);
    /* 00756d01: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d06: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756d0bu); f_0073ec50();
    /* 00756d0b: mov esi, eax */ r_esi = r_eax;
    /* 00756d0d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d0f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756d14u); f_0079317c();
    /* 00756d14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756d15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756d18: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x756d1du); f_00735460();
    /* 00756d1d: mov esi, eax */ r_esi = r_eax;
    /* 00756d1f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756d22: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756d27u); f_007a61a4();
    /* 00756d27: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756d2a: je 0x756ec1 */ if (fZ) goto L_00756ec1;
L_00756d30:; BB(0x00756d30);
    /* 00756d30: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00756d32: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756d37u); f_0079317c();
    /* 00756d37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756d38: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d3a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d3c: mov ecx, esi */ r_ecx = r_esi;
    /* 00756d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756d3f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756d44u); f_00735ee0();
L_00756d44:; BB(0x00756d44);
    /* 00756d44: mov edx, dword ptr [0xab59b8] */ r_edx = R32((u32)(0xab59b8u));
    /* 00756d4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00756d4c: jle 0x756ea5 */ if ((fZ||fS!=fO)) goto L_00756ea5;
L_00756d52:; BB(0x00756d52);
    /* 00756d52: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00756d57: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756d5cu); f_0079317c();
    /* 00756d5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756d5d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d5f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d61: mov ecx, esi */ r_ecx = r_esi;
    /* 00756d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756d64: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756d69u); f_00735c90();
L_00756d69:; BB(0x00756d69);
    /* 00756d69: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756d6eu); f_007a61a4();
    /* 00756d6e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756d71: je 0x756e89 */ if (fZ) goto L_00756e89;
L_00756d77:; BB(0x00756d77);
    /* 00756d77: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00756d7c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756d81u); f_0079317c();
    /* 00756d81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756d82: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00756d84: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756d86: mov ecx, esi */ r_ecx = r_esi;
    /* 00756d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756d89: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756d8eu); f_00735ee0();
L_00756d8e:; BB(0x00756d8e);
    /* 00756d8e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756d93u); f_007a61a4();
    /* 00756d93: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756d96: je 0x756e70 */ if (fZ) goto L_00756e70;
L_00756d9c:; BB(0x00756d9c);
    /* 00756d9c: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00756da1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756da6u); f_0079317c();
    /* 00756da6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756da7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00756da9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756dab: mov ecx, esi */ r_ecx = r_esi;
    /* 00756dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756dae: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756db3u); f_00735ee0();
    /* 00756db3: jmp 0x756e45 */ goto L_00756e45;
L_00756db8:; BB(0x00756db8);
    /* 00756db8: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756dbd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x756dc2u); f_0073ec50();
    /* 00756dc2: mov esi, eax */ r_esi = r_eax;
    /* 00756dc4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00756dc6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756dcbu); f_0079317c();
    /* 00756dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756dcc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756dce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00756dcf: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x756dd4u); f_00735460();
    /* 00756dd4: mov esi, eax */ r_esi = r_eax;
    /* 00756dd6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00756dd9: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756ddeu); f_007a61a4();
    /* 00756dde: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756de1: je 0x756f12 */ if (fZ) goto L_00756f12;
L_00756de7:; BB(0x00756de7);
    /* 00756de7: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00756de9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756deeu); f_0079317c();
    /* 00756dee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756def: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756df1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756df3: mov ecx, esi */ r_ecx = r_esi;
    /* 00756df5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756df6: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756dfbu); f_00735ee0();
L_00756dfb:; BB(0x00756dfb);
    /* 00756dfb: mov edx, dword ptr [0xab59b8] */ r_edx = R32((u32)(0xab59b8u));
    /* 00756e01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00756e03: jle 0x756ef6 */ if ((fZ||fS!=fO)) goto L_00756ef6;
L_00756e09:; BB(0x00756e09);
    /* 00756e09: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00756e0e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756e13u); f_0079317c();
    /* 00756e13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756e14: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e16: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e18: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756e1b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756e20u); f_00735c90();
L_00756e20:; BB(0x00756e20);
    /* 00756e20: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x756e25u); f_007a61a4();
    /* 00756e25: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756e28: je 0x756eda */ if (fZ) goto L_00756eda;
L_00756e2e:; BB(0x00756e2e);
    /* 00756e2e: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00756e33: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756e38u); f_0079317c();
    /* 00756e38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756e39: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e3d: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756e40: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756e45u); f_00735ee0();
L_00756e45:; BB(0x00756e45);
    /* 00756e45: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e4a: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00756e51: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00756e57: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00756e5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e60: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x756e65u); f_00736138();
    /* 00756e65: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e67: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x756e6cu); f_00736458();
    /* 00756e6c: mov eax, esi */ r_eax = r_esi;
    /* 00756e6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756e6f: ret  */ FN_RET(0x00756cf4); r_esp += 4; return;
L_00756e70:; BB(0x00756e70);
    /* 00756e70: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00756e75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756e7au); f_0079317c();
    /* 00756e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756e7b: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756e82: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756e87u); f_00735c90();
    /* 00756e87: jmp 0x756e45 */ goto L_00756e45;
L_00756e89:; BB(0x00756e89);
    /* 00756e89: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00756e8e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756e93u); f_0079317c();
    /* 00756e93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756e94: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00756e96: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e98: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756e9b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756ea0u); f_00735c90();
    /* 00756ea0: jmp 0x756d8e */ goto L_00756d8e;
L_00756ea5:; BB(0x00756ea5);
    /* 00756ea5: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00756eaa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756eafu); f_0079317c();
    /* 00756eaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756eb0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00756eb2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756eb4: mov ecx, esi */ r_ecx = r_esi;
    /* 00756eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756eb7: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756ebcu); f_00735ee0();
    /* 00756ebc: jmp 0x756d69 */ goto L_00756d69;
L_00756ec1:; BB(0x00756ec1);
    /* 00756ec1: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00756ec3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756ec8u); f_0079317c();
    /* 00756ec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756ec9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ecb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00756ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756ed0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756ed5u); f_00735c90();
    /* 00756ed5: jmp 0x756d44 */ goto L_00756d44;
L_00756eda:; BB(0x00756eda);
    /* 00756eda: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00756edf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756ee4u); f_0079317c();
    /* 00756ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756ee5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ee7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ee9: mov ecx, esi */ r_ecx = r_esi;
    /* 00756eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756eec: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756ef1u); f_00735c90();
    /* 00756ef1: jmp 0x756e45 */ goto L_00756e45;
L_00756ef6:; BB(0x00756ef6);
    /* 00756ef6: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00756efb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756f00u); f_0079317c();
    /* 00756f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756f01: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00756f03: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756f05: mov ecx, esi */ r_ecx = r_esi;
    /* 00756f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756f08: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x756f0du); f_00735ee0();
    /* 00756f0d: jmp 0x756e20 */ goto L_00756e20;
L_00756f12:; BB(0x00756f12);
    /* 00756f12: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00756f14: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756f19u); f_0079317c();
    /* 00756f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756f1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00756f1c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756f1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00756f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756f21: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756f26u); f_00735c90();
    /* 00756f26: jmp 0x756dfb */ goto L_00756dfb;
}

void f_00756e69(void)
{
    FN_ENTER(0x00756e69);
    goto L_00756e69;
L_00756e45:; BB(0x00756e45);
    /* 00756e45: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e4a: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00756e51: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00756e57: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00756e5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e60: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x756e65u); f_00736138();
    /* 00756e65: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e67: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x756e6cu); f_00736458();
L_00756e69:; BB(0x00756e69);
    /* 00756e69: cmc  */ fC = !fC;
    /* 00756e6a: std  */ rt_df = 1;
    /* 00756e6b: dec dword ptr [ebx + 0x68c35ec6] */ { u32 ad = (u32)(r_ebx+0x68c35ec6u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00756e6c: mov eax, esi */ r_eax = r_esi;
    /* 00756e6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756e6f: ret  */ FN_RET(0x00756e69); r_esp += 4; return;
    /* 00756e71: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00756e73: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00756e75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x756e7au); f_0079317c();
    /* 00756e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756e7b: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00756e7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756e82: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x756e87u); f_00735c90();
    /* 00756e87: jmp 0x756e45 */ goto L_00756e45;
}

void f_00756f2c(void) /* sub_756F2C */
{
    FN_ENTER(0x00756f2c);
    /* 00756f2c: mov dword ptr [0xa9acb4], 0x3f800000 */ W32((u32)(0xa9acb4u), 0x3f800000u);
    /* 00756f36: mov dword ptr [0xa9acb8], 0x41000000 */ W32((u32)(0xa9acb8u), 0x41000000u);
    /* 00756f40: mov dword ptr [0xa9acbc], 0x3fc00000 */ W32((u32)(0xa9acbcu), 0x3fc00000u);
    /* 00756f4a: ret  */ FN_RET(0x00756f2c); r_esp += 4; return;
}

void f_00756f4c(void) /* sub_756F4C */
{
    FN_ENTER(0x00756f4c);
    /* 00756f4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756f4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00756f4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756f51: call 0x756f70 */ r_esp -= 4; W32(r_esp, 0x756f56u); f_00756f70();
    /* 00756f56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00756f5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00756f5c: jne 0x756f62 */ if (!fZ) goto L_00756f62;
L_00756f5e:; BB(0x00756f5e);
    /* 00756f5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756f5f: ret 4 */ FN_RET(0x00756f4c); r_esp += 8; return;
L_00756f62:; BB(0x00756f62);
    /* 00756f62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00756f63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x756f68u); f_005c2f74();
    /* 00756f68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00756f69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756f6a: ret 4 */ FN_RET(0x00756f4c); r_esp += 8; return;
}

void f_00756f70(void) /* sub_756F70 */
{
    FN_ENTER(0x00756f70);
    /* 00756f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00756f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00756f75: push 0x8f3010 */ { u32 v = 0x8f3010u; r_esp -= 4; W32(r_esp, v); }
    /* 00756f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00756f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756f81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00756f88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00756f8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00756f8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00756f91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00756f94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00756f97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00756f9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00756fa1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00756fa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00756fa7: mov dword ptr [eax], 0xb42858 */ W32((u32)(r_eax), 0xb42858u);
    /* 00756fad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756faf: je 0x756fc0 */ if (fZ) goto L_00756fc0;
L_00756fb1:; BB(0x00756fb1);
    /* 00756fb1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756fb6u); f_007127b0();
    /* 00756fb6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00756fb9: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00756fc0:; BB(0x00756fc0);
    /* 00756fc0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00756fc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756fc5: je 0x756fd6 */ if (fZ) goto L_00756fd6;
L_00756fc7:; BB(0x00756fc7);
    /* 00756fc7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756fccu); f_007127b0();
    /* 00756fcc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00756fcf: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00756fd6:; BB(0x00756fd6);
    /* 00756fd6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00756fdd: mov ecx, eax */ r_ecx = r_eax;
    /* 00756fdf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x756fe4u); f_008171e8();
    /* 00756fe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00756fe7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00756fee: mov esp, ebp */ r_esp = r_ebp;
    /* 00756ff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756ff1: ret  */ FN_RET(0x00756f70); r_esp += 4; return;
}

void f_00756ff4(void) /* sub_756FF4 */
{
    FN_ENTER(0x00756ff4);
    /* 00756ff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756ff5: mov ebp, esp */ r_ebp = r_esp;
    /* 00756ff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00756ff9: push 0x8f3046 */ { u32 v = 0x8f3046u; r_esp -= 4; W32(r_esp, v); }
    /* 00756ffe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00757004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00757005: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075700c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075700f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00757012: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00757015: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00757018: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075701b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075701e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00757021: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00757024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00757025: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00757028: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075702b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x757030u); f_008193cc();
    /* 00757030: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00757037: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075703a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075703d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00757040: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00757043: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00757046: mov dword ptr [ecx], 0xb42858 */ W32((u32)(r_ecx), 0xb42858u);
    /* 0075704c: call 0x7570f4 */ r_esp -= 4; W32(r_esp, 0x757051u); f_007570f4();
    /* 00757051: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00757054: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075705b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0075705e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00757060: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x757065u); f_005caba4();
    /* 00757065: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00757068: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075706b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075706e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00757070: je 0x7570ea */ if (fZ) goto L_007570ea;
L_00757072:; BB(0x00757072);
    /* 00757072: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00757079: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00757080: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00757083: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00757086: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00757089: call 0x757574 */ r_esp -= 4; W32(r_esp, 0x75708eu); f_00757574();
    /* 0075708e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00757095:; BB(0x00757095);
    /* 00757095: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00757098: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075709b: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0075709e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007570a5: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 007570aa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007570ad: jle 0x7570d8 */ if ((fZ||fS!=fO)) goto L_007570d8;
L_007570af:; BB(0x007570af);
    /* 007570af: push 0x3f570a3d */ { u32 v = 0x3f570a3du; r_esp -= 4; W32(r_esp, v); }
    /* 007570b4: push 0x3f570a3d */ { u32 v = 0x3f570a3du; r_esp -= 4; W32(r_esp, v); }
    /* 007570b9: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 007570bc: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x7570c1u); f_0070f5a4();
    /* 007570c1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007570c4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007570c7: mov dword ptr [edx + 0x6c], 0x3f570a3d */ W32((u32)(r_edx+0x6cu), 0x3f570a3du);
    /* 007570ce: mov dword ptr [edx + 0x70], 0x3f570a3d */ W32((u32)(r_edx+0x70u), 0x3f570a3du);
    /* 007570d5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_007570d8:; BB(0x007570d8);
    /* 007570d8: mov eax, edx */ r_eax = r_edx;
    /* 007570da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007570dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007570e4: mov esp, ebp */ r_esp = r_ebp;
    /* 007570e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007570e7: ret 8 */ FN_RET(0x00756ff4); r_esp += 12; return;
L_007570ea:; BB(0x007570ea);
    /* 007570ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007570ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007570ef: jmp 0x757095 */ goto L_00757095;
}

