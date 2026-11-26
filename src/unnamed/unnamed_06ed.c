#include "protos.h"

void f_006ed028(void) /* sub_6ED028 */
{
    FN_ENTER(0x006ed028);
    /* 006ed028: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ed029: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed02a: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed02d: mov esi, ecx */ r_esi = r_ecx;
    /* 006ed02f: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 006ed033: movzx eax, word ptr [esi + 0x7a] */ r_eax = (u32)R16((u32)(r_esi+0x7au));
    /* 006ed037: mov edx, dword ptr [eax*8 + 0x96dc70] */ r_edx = R32((u32)(r_eax*8+0x96dc70u));
    /* 006ed03e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ed040: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ed042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed043: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ed048u); f_008581c5();
    /* 006ed048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed049: mov dword ptr [esi + 0xf4], eax */ W32((u32)(r_esi+0xf4u), r_eax);
    /* 006ed04f: movsx eax, word ptr [esi + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x7au));
    /* 006ed053: mov ecx, dword ptr [eax*8 + 0x96dc70] */ r_ecx = R32((u32)(r_eax*8+0x96dc70u));
    /* 006ed05a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ed05c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ed05e: jbe 0x6ed1ae */ if ((fC||fZ)) goto L_006ed1ae;
L_006ed064:; BB(0x006ed064);
    /* 006ed064: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 006ed068: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 006ed06c: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 006ed070: mov ebp, edx */ r_ebp = r_edx;
L_006ed072:; BB(0x006ed072);
    /* 006ed072: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006ed076: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 006ed079: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 006ed07c: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 006ed07f: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006ed082: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006ed085: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006ed089: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006ed08d: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 006ed091: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed093: je 0x6ed0ac */ if (fZ) goto L_006ed0ac;
L_006ed095:; BB(0x006ed095);
    /* 006ed095: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 006ed099: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006ed09b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006ed09e: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 006ed0a1: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006ed0a5: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006ed0a8: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
L_006ed0ac:; BB(0x006ed0ac);
    /* 006ed0ac: mov eax, dword ptr [eax*8 + 0x96dc6c] */ r_eax = R32((u32)(r_eax*8+0x96dc6cu));
    /* 006ed0b3: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 006ed0b6: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006ed0ba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed0bc: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 006ed0bf: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ed0c1: push dword ptr [ebx + eax] */ { u32 v = R32((u32)(r_ebx+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed0c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ed0c5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6ed0cau); f_00509590();
    /* 006ed0ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed0cd: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006ed0d1: mov ecx, dword ptr [edi + 0xf4] */ r_ecx = R32((u32)(r_edi+0xf4u));
    /* 006ed0d7: mov dword ptr [ecx + ebp*4], eax */ W32((u32)(r_ecx+r_ebp*4), r_eax);
    /* 006ed0da: movsx eax, word ptr [edi + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ed0de: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 006ed0e2: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 006ed0e6: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006ed0e9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ed0eb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ed0ed: mov ecx, dword ptr [esi + 0x96dc6c] */ r_ecx = R32((u32)(r_esi+0x96dc6cu));
    /* 006ed0f3: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006ed0f7: mov ecx, dword ptr [ebx + ecx + 4] */ r_ecx = R32((u32)(r_ebx+r_ecx+0x4u));
    /* 006ed0fb: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ed0fe: je 0x6ed138 */ if (fZ) goto L_006ed138;
L_006ed100:; BB(0x006ed100);
    /* 006ed100: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006ed104: mov edi, dword ptr [edi + 0xf4] */ r_edi = R32((u32)(r_edi+0xf4u));
    /* 006ed10a: mov edx, dword ptr [edi + edx*2] */ r_edx = R32((u32)(r_edi+r_edx*2));
    /* 006ed10d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed10f: je 0x6ed138 */ if (fZ) goto L_006ed138;
L_006ed111:; BB(0x006ed111);
    /* 006ed111: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006ed115: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006ed119: mov esi, dword ptr [ebx + eax + 8] */ r_esi = R32((u32)(r_ebx+r_eax+0x8u));
    /* 006ed11d: mov dword ptr [edx + 0x44], esi */ W32((u32)(r_edx+0x44u), r_esi);
    /* 006ed120: mov dword ptr [edx + 0x48], esi */ W32((u32)(r_edx+0x48u), r_esi);
    /* 006ed123: movsx eax, word ptr [ecx + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x7au));
    /* 006ed127: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006ed12a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ed12c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ed12e: mov edi, dword ptr [esi + 0x96dc6c] */ r_edi = R32((u32)(r_esi+0x96dc6cu));
    /* 006ed134: mov ecx, dword ptr [ebx + edi + 4] */ r_ecx = R32((u32)(r_ebx+r_edi+0x4u));
L_006ed138:; BB(0x006ed138);
    /* 006ed138: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ed13b: je 0x6ed18f */ if (fZ) goto L_006ed18f;
L_006ed13d:; BB(0x006ed13d);
    /* 006ed13d: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006ed140: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed141: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ed147: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ed14cu); f_005b8610();
    /* 006ed14c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006ed150: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 006ed154: mov esi, dword ptr [0xa96680] */ r_esi = R32((u32)(0xa96680u));
    /* 006ed15a: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 006ed160: mov edi, dword ptr [ecx + ebx*2] */ r_edi = R32((u32)(r_ecx+r_ebx*2));
    /* 006ed163: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006ed166: movzx eax, word ptr [edi + 0x2c] */ r_eax = (u32)R16((u32)(r_edi+0x2cu));
    /* 006ed16a: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 006ed171: mov dword ptr [edi + 0x54], esi */ W32((u32)(r_edi+0x54u), r_esi);
    /* 006ed174: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ed179: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006ed180: mov word ptr [edi + 0x2c], ax */ W16((u32)(r_edi+0x2cu), (u16)r_eax);
    /* 006ed184: movsx eax, word ptr [edx + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7au));
    /* 006ed188: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006ed18b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ed18d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006ed18f:; BB(0x006ed18f);
    /* 006ed18f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ed192: cmp ebp, dword ptr [esi + 0x96dc70] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x96dc70u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ed198: jb 0x6ed072 */ if (fC) goto L_006ed072;
L_006ed19e:; BB(0x006ed19e);
    /* 006ed19e: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 006ed1a2: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 006ed1a6: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006ed1aa: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_006ed1ae:; BB(0x006ed1ae);
    /* 006ed1ae: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed1b1: je 0x6ed1bb */ if (fZ) goto L_006ed1bb;
L_006ed1b3:; BB(0x006ed1b3);
    /* 006ed1b3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed1b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed1b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ed1b8: ret 4 */ FN_RET(0x006ed028); r_esp += 8; return;
L_006ed1bb:; BB(0x006ed1bb);
    /* 006ed1bb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed1bd: je 0x6ed242 */ if (fZ) goto L_006ed242;
L_006ed1c3:; BB(0x006ed1c3);
    /* 006ed1c3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ed1c5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ed1c9: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006ed1cc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006ed1d0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 006ed1d3: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_006ed1d7:; BB(0x006ed1d7);
    /* 006ed1d7: fld dword ptr [0x96db7c] */ FPUSH(R_F32((u32)(0x96db7cu)));
    /* 006ed1dd: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 006ed1e1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006ed1e5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006ed1e9: push 0x1d6 */ { u32 v = 0x1d6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed1ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed1ef: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed1f4u); f_0050b510();
    /* 006ed1f4: mov esi, eax */ r_esi = r_eax;
    /* 006ed1f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed1f9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed1fb: je 0x6ed1b3 */ if (fZ) goto L_006ed1b3;
L_006ed1fd:; BB(0x006ed1fd);
    /* 006ed1fd: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ed203: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed205: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ed20au); f_005b8610();
    /* 006ed20a: mov ebx, eax */ r_ebx = r_eax;
    /* 006ed20c: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ed212: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed214: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6ed219u); f_005b8638();
    /* 006ed219: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ed21f: movzx ecx, word ptr [esi + 0x2c] */ r_ecx = (u32)R16((u32)(r_esi+0x2cu));
    /* 006ed223: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006ed22a: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 006ed22d: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 006ed230: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 006ed233: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed239: mov word ptr [esi + 0x2c], cx */ W16((u32)(r_esi+0x2cu), (u16)r_ecx);
    /* 006ed23d: jmp 0x6ed1b3 */ goto L_006ed1b3;
L_006ed242:; BB(0x006ed242);
    /* 006ed242: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006ed245: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006ed248: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006ed24b: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 006ed24e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ed252: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006ed256: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006ed25a: jmp 0x6ed1d7 */ goto L_006ed1d7;
}

void f_006ed260(void) /* sub_6ED260 */
{
    FN_ENTER(0x006ed260);
    /* 006ed260: mov dword ptr [0xa9683c], 0x3f800000 */ W32((u32)(0xa9683cu), 0x3f800000u);
    /* 006ed26a: mov dword ptr [0xa96840], 0x41000000 */ W32((u32)(0xa96840u), 0x41000000u);
    /* 006ed274: mov dword ptr [0xa96844], 0x3fc00000 */ W32((u32)(0xa96844u), 0x3fc00000u);
    /* 006ed27e: ret  */ FN_RET(0x006ed260); r_esp += 4; return;
}

void f_006ed280(void) /* sub_6ED280 */
{
    FN_ENTER(0x006ed280);
    /* 006ed280: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed281: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ed283: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ed285: call 0x6ed2a4 */ r_esp -= 4; W32(r_esp, 0x6ed28au); f_006ed2a4();
    /* 006ed28a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ed28e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed290: jne 0x6ed296 */ if (!fZ) goto L_006ed296;
L_006ed292:; BB(0x006ed292);
    /* 006ed292: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed293: ret 4 */ FN_RET(0x006ed280); r_esp += 8; return;
L_006ed296:; BB(0x006ed296);
    /* 006ed296: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed297: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ed29cu); f_005c2f74();
    /* 006ed29c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed29d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed29e: ret 4 */ FN_RET(0x006ed280); r_esp += 8; return;
}

void f_006ed2a4(void) /* sub_6ED2A4 */
{
    FN_ENTER(0x006ed2a4);
    /* 006ed2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed2a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed2a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed2a9: push 0x8ef640 */ { u32 v = 0x8ef640u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed2ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed2b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed2b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed2bc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed2bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed2c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ed2c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ed2c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ed2cb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ed2ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed2d1: mov dword ptr [ecx], 0xb3e058 */ W32((u32)(r_ecx), 0xb3e058u);
    /* 006ed2d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ed2de: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6ed2e3u); f_006de56c();
    /* 006ed2e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ed2e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ed2ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006ed2ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ed2f0: ret  */ FN_RET(0x006ed2a4); r_esp += 4; return;
}

void f_006ed2f4(void) /* sub_6ED2F4 */
{
    FN_ENTER(0x006ed2f4);
    /* 006ed2f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed2f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ed2f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ed2f9: call 0x6ed318 */ r_esp -= 4; W32(r_esp, 0x6ed2feu); f_006ed318();
    /* 006ed2fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ed302: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed304: jne 0x6ed30a */ if (!fZ) goto L_006ed30a;
L_006ed306:; BB(0x006ed306);
    /* 006ed306: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed307: ret 4 */ FN_RET(0x006ed2f4); r_esp += 8; return;
L_006ed30a:; BB(0x006ed30a);
    /* 006ed30a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed30b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ed310u); f_005c2f74();
    /* 006ed310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed311: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed312: ret 4 */ FN_RET(0x006ed2f4); r_esp += 8; return;
}

void f_006ed318(void) /* sub_6ED318 */
{
    FN_ENTER(0x006ed318);
    /* 006ed318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed319: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed31b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed31d: push 0x8ef65c */ { u32 v = 0x8ef65cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed330: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed336: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ed339: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ed33c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ed33f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ed342: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed345: mov dword ptr [ecx], 0xb3e078 */ W32((u32)(r_ecx), 0xb3e078u);
    /* 006ed34b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ed352: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ed357u); f_008171e8();
    /* 006ed357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ed35a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ed361: mov esp, ebp */ r_esp = r_ebp;
    /* 006ed363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ed364: ret  */ FN_RET(0x006ed318); r_esp += 4; return;
}

void f_006ed368(void) /* sub_6ED368 */
{
    FN_ENTER(0x006ed368);
    /* 006ed368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed369: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed36b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed36d: push 0x8ef684 */ { u32 v = 0x8ef684u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed380: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed386: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ed389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ed38c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ed38f: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed394: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ed39b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ed3a0u); f_005caba4();
    /* 006ed3a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed3a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ed3a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed3a6: je 0x6ed3d1 */ if (fZ) goto L_006ed3d1;
L_006ed3a8:; BB(0x006ed3a8);
    /* 006ed3a8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ed3af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ed3b6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed3b9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed3bc: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed3bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed3c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed3c5: call 0x6ed3e0 */ r_esp -= 4; W32(r_esp, 0x6ed3cau); f_006ed3e0();
    /* 006ed3ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ed3d1:; BB(0x006ed3d1);
    /* 006ed3d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ed3d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ed3db: mov esp, ebp */ r_esp = r_ebp;
    /* 006ed3dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ed3de: ret  */ FN_RET(0x006ed368); r_esp += 4; return;
}

void f_006ed3e0(void) /* sub_6ED3E0 */
{
    FN_ENTER(0x006ed3e0);
    /* 006ed3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed3e5: push 0x8ef6a0 */ { u32 v = 0x8ef6a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed3f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed3f8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed3fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed3fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ed401: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ed404: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ed407: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006ed40a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed40d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ed410: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ed413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed414: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ed417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed418: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed41b: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6ed420u); f_006de5f0();
    /* 006ed420: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ed427: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed42a: mov dword ptr [edi], 0xb3e058 */ W32((u32)(r_edi), 0xb3e058u);
    /* 006ed430: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 006ed436: mov esi, 0xb */ r_esi = 0xbu;
    /* 006ed43b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ed43d:; BB(0x006ed43d);
    /* 006ed43d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ed442: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006ed445: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ed447: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006ed44b: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006ed44e: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ed451: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006ed454: jne 0x6ed43d */ if (!fZ) goto L_006ed43d;
L_006ed456:; BB(0x006ed456);
    /* 006ed456: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 006ed460: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed463: mov eax, dword ptr [0x9cf9ac] */ r_eax = R32((u32)(0x9cf9acu));
    /* 006ed468: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ed46b: call 0x6ed698 */ r_esp -= 4; W32(r_esp, 0x6ed470u); f_006ed698();
    /* 006ed470: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed473: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ed476: mov dword ptr [edx + 0x148], 0 */ W32((u32)(r_edx+0x148u), 0x0u);
    /* 006ed480: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006ed482: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006ed485: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006ed488: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006ed48b: add edx, 0xec */ {  u32 a = r_edx; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ed491: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006ed493: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006ed496: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006ed499: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 006ed49c: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 006ed49f: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006ed4a2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006ed4a5: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006ed4a8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006ed4ab: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006ed4ae: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006ed4b1: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006ed4b4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006ed4b7: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006ed4ba: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006ed4bd: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006ed4c0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006ed4c3: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006ed4c6: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006ed4c9: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006ed4cc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006ed4cf: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006ed4d2: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006ed4d5: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006ed4d8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006ed4db: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006ed4de: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006ed4e1: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006ed4e4: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006ed4e7: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006ed4ea: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ed4ed: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006ed4f0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ed4f3: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006ed4f6: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006ed4f9: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006ed4fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006ed4ff: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006ed502: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006ed505: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006ed508: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006ed50b: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006ed50e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed511: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006ed514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed516: je 0x6ed523 */ if (fZ) goto L_006ed523;
L_006ed518:; BB(0x006ed518);
    /* 006ed518: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ed51c: mov word ptr [ecx + 0xb4], ax */ W16((u32)(r_ecx+0xb4u), (u16)r_eax);
L_006ed523:; BB(0x006ed523);
    /* 006ed523: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 006ed529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed52b: je 0x6ed53f */ if (fZ) goto L_006ed53f;
L_006ed52d:; BB(0x006ed52d);
    /* 006ed52d: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006ed533: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 006ed539: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006ed53c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006ed53f:; BB(0x006ed53f);
    /* 006ed53f: mov eax, dword ptr [ecx + 0x148] */ r_eax = R32((u32)(r_ecx+0x148u));
    /* 006ed545: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed548: je 0x6ed628 */ if (fZ) goto L_006ed628;
L_006ed54e:; BB(0x006ed54e);
    /* 006ed54e: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 006ed554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed556: je 0x6ed607 */ if (fZ) goto L_006ed607;
L_006ed55c:; BB(0x006ed55c);
    /* 006ed55c: movzx eax, word ptr [ecx + 0xf0] */ r_eax = (u32)R16((u32)(r_ecx+0xf0u));
    /* 006ed563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed564: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ed569u); f_007b4d18();
    /* 006ed569: mov ebx, eax */ r_ebx = r_eax;
    /* 006ed56b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed56c: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6ed571u); f_006ea700();
    /* 006ed571: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed576: jne 0x6ed580 */ if (!fZ) goto L_006ed580;
L_006ed578:; BB(0x006ed578);
    /* 006ed578: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed57b: jmp 0x6ed607 */ goto L_006ed607;
L_006ed580:; BB(0x006ed580);
    /* 006ed580: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed581: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6ed586u); f_006ea71c();
    /* 006ed586: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed589: jne 0x6ed590 */ if (!fZ) goto L_006ed590;
L_006ed58b:; BB(0x006ed58b);
    /* 006ed58b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed58e: jmp 0x6ed607 */ goto L_006ed607;
L_006ed590:; BB(0x006ed590);
    /* 006ed590: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed592: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 006ed598: mov ecx, dword ptr [ebx + 0x304] */ r_ecx = R32((u32)(r_ebx+0x304u));
    /* 006ed59e: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 006ed5a4: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006ed5a7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006ed5aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006ed5ad: lea ebx, [ebp - 0x30] */ r_ebx = (u32)(r_ebp+0xffffffd0u);
    /* 006ed5b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed5b1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed5b6u); f_0050b510();
    /* 006ed5b6: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 006ed5b9: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006ed5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed5bc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed5c1u); f_0050b510();
    /* 006ed5c1: mov ebx, eax */ r_ebx = r_eax;
    /* 006ed5c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed5c6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed5c8: jne 0x6ed5cf */ if (!fZ) goto L_006ed5cf;
L_006ed5ca:; BB(0x006ed5ca);
    /* 006ed5ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed5cd: jmp 0x6ed607 */ goto L_006ed607;
L_006ed5cf:; BB(0x006ed5cf);
    /* 006ed5cf: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ed5d5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed5d7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ed5dcu); f_005b8610();
    /* 006ed5dc: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ed5e2: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 006ed5e6: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 006ed5ed: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 006ed5f0: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 006ed5f7: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 006ed5fa: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed600: mov word ptr [ebx + 0x2c], cx */ W16((u32)(r_ebx+0x2cu), (u16)r_ecx);
    /* 006ed604: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006ed607:; BB(0x006ed607);
    /* 006ed607: call 0x6ed790 */ r_esp -= 4; W32(r_esp, 0x6ed60cu); f_006ed790();
    /* 006ed60c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed60f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed612: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ed615: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ed618: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ed61b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ed622: mov esp, ebp */ r_esp = r_ebp;
    /* 006ed624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ed625: ret 0x10 */ FN_RET(0x006ed3e0); r_esp += 20; return;
L_006ed628:; BB(0x006ed628);
    /* 006ed628: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006ed62a: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed62d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed62e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed633u); f_0050b510();
    /* 006ed633: mov ebx, eax */ r_ebx = r_eax;
    /* 006ed635: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed638: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed63a: je 0x6ed671 */ if (fZ) goto L_006ed671;
L_006ed63c:; BB(0x006ed63c);
    /* 006ed63c: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ed642: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed644: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ed649u); f_005b8610();
    /* 006ed649: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ed64f: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 006ed653: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 006ed65a: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 006ed65d: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 006ed664: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 006ed667: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed66d: mov word ptr [ebx + 0x2c], cx */ W16((u32)(r_ebx+0x2cu), (u16)r_ecx);
L_006ed671:; BB(0x006ed671);
    /* 006ed671: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed674: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 006ed676: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ed679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed67a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed67fu); f_0050b510();
    /* 006ed67f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed682: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed684: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ed687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed688: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ed68du); f_0050b510();
    /* 006ed68d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed690: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ed693: jmp 0x6ed607 */ goto L_006ed607;
}

void f_006ed698(void) /* sub_6ED698 */
{
    FN_ENTER(0x006ed698);
    /* 006ed698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ed699: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed69c: mov edi, ecx */ r_edi = r_ecx;
    /* 006ed69e: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ed6a2: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed6a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed6aa: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ed6afu); f_006ded14();
    /* 006ed6af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed6b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ed6b4: mov dword ptr [edi + 0x88], edx */ W32((u32)(r_edi+0x88u), r_edx);
    /* 006ed6ba: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ed6bd: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 006ed6c3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006ed6c6: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006ed6cc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ed6cf: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006ed6d5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006ed6d8: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 006ed6de: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006ed6e1: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006ed6e7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006ed6ea: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 006ed6f0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ed6f3: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 006ed6f9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006ed6fc: mov dword ptr [edi + 0xa8], edx */ W32((u32)(r_edi+0xa8u), r_edx);
    /* 006ed702: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006ed705: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 006ed70b: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006ed70e: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006ed714: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ed718: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ed71b: jl 0x6ed752 */ if ((fS!=fO)) goto L_006ed752;
L_006ed71d:; BB(0x006ed71d);
    /* 006ed71d: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ed722u); f_00687c48();
    /* 006ed722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed724: jne 0x6ed74e */ if (!fZ) goto L_006ed74e;
L_006ed726:; BB(0x006ed726);
    /* 006ed726: movsx ecx, word ptr [0x9cf728] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf728u));
    /* 006ed72d: movsx edx, word ptr [0x9cf72a] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf72au));
    /* 006ed734: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ed738: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ed73b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed73d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006ed740: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ed743: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006ed749: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed74c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ed74d: ret  */ FN_RET(0x006ed698); r_esp += 4; return;
L_006ed74e:; BB(0x006ed74e);
    /* 006ed74e: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
L_006ed752:; BB(0x006ed752);
    /* 006ed752: movsx edx, word ptr [edi + 0xac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xacu));
    /* 006ed759: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ed75c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ed760: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006ed764: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 006ed76a: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006ed770: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ed775u); f_00687c48();
    /* 006ed775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed777: je 0x6ed78b */ if (fZ) goto L_006ed78b;
L_006ed779:; BB(0x006ed779);
    /* 006ed779: fld dword ptr [edi + 0x88] */ FPUSH(R_F32((u32)(r_edi+0x88u)));
    /* 006ed77f: fmul dword ptr [0x9cf790] */ ST(0) = ST(0) * R_F32((u32)(0x9cf790u));
    /* 006ed785: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
L_006ed78b:; BB(0x006ed78b);
    /* 006ed78b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed78e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ed78f: ret  */ FN_RET(0x006ed698); r_esp += 4; return;
}

void f_006ed790(void) /* sub_6ED790 */
{
    FN_ENTER(0x006ed790);
    /* 006ed790: movsx eax, word ptr [ecx + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x7au));
    /* 006ed794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed796: je 0x6ed851 */ if (fZ) goto L_006ed851;
L_006ed79c:; BB(0x006ed79c);
    /* 006ed79c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed79f: je 0x6ed83b */ if (fZ) goto L_006ed83b;
L_006ed7a5:; BB(0x006ed7a5);
    /* 006ed7a5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ed7a8: jl 0x6ed83a */ if ((fS!=fO)) goto L_006ed83a;
L_006ed7ae:; BB(0x006ed7ae);
    /* 006ed7ae: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ed7b1: jle 0x6ed811 */ if ((fZ||fS!=fO)) goto L_006ed811;
L_006ed7b3:; BB(0x006ed7b3);
    /* 006ed7b3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed7b6: jne 0x6ed7e2 */ if (!fZ) goto L_006ed7e2;
L_006ed7b8:; BB(0x006ed7b8);
    /* 006ed7b8: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed7bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ed7bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7c0: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ed7cau); f_00814298();
    /* 006ed7ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed7cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed7cf: jl 0x6ed83a */ if ((fS!=fO)) goto L_006ed83a;
L_006ed7d1:; BB(0x006ed7d1);
    /* 006ed7d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7d3: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7d9: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ed7deu); f_00814664();
    /* 006ed7de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed7e1: ret  */ FN_RET(0x006ed790); r_esp += 4; return;
L_006ed7e2:; BB(0x006ed7e2);
    /* 006ed7e2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ed7e5: jne 0x6ed83a */ if (!fZ) goto L_006ed83a;
L_006ed7e7:; BB(0x006ed7e7);
    /* 006ed7e7: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed7ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ed7ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7ef: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed7f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ed7f9u); f_00814298();
    /* 006ed7f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed7fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed7fe: jl 0x6ed83a */ if ((fS!=fO)) goto L_006ed83a;
L_006ed800:; BB(0x006ed800);
    /* 006ed800: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed802: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed808: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ed80du); f_00814664();
    /* 006ed80d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed810: ret  */ FN_RET(0x006ed790); r_esp += 4; return;
L_006ed811:; BB(0x006ed811);
    /* 006ed811: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed814: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ed816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed819: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed81e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ed823u); f_00814298();
    /* 006ed823: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed828: jl 0x6ed83a */ if ((fS!=fO)) goto L_006ed83a;
L_006ed82a:; BB(0x006ed82a);
    /* 006ed82a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed82c: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed832: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ed837u); f_00814664();
    /* 006ed837: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006ed83a:; BB(0x006ed83a);
    /* 006ed83a: ret  */ FN_RET(0x006ed790); r_esp += 4; return;
L_006ed83b:; BB(0x006ed83b);
    /* 006ed83b: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed83e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ed840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed842: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed843: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed848: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ed84du); f_00814298();
    /* 006ed84d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed850: ret  */ FN_RET(0x006ed790); r_esp += 4; return;
L_006ed851:; BB(0x006ed851);
    /* 006ed851: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ed854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ed856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed858: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed859: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed85e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ed863u); f_00814298();
    /* 006ed863: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed868: jl 0x6ed83a */ if ((fS!=fO)) goto L_006ed83a;
L_006ed86a:; BB(0x006ed86a);
    /* 006ed86a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed86c: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed872: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ed877u); f_00814664();
    /* 006ed877: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed87a: ret  */ FN_RET(0x006ed790); r_esp += 4; return;
}

void f_006ed87c(void) /* sub_6ED87C */
{
    FN_ENTER(0x006ed87c);
    /* 006ed87c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed87d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed87f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed881: push 0x8ef6c8 */ { u32 v = 0x8ef6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed886: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed88c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed88d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed894: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed897: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed89a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ed89d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ed8a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ed8a3: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed8a8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ed8af: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ed8b4u); f_005caba4();
    /* 006ed8b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ed8b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ed8b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ed8ba: je 0x6ed8e5 */ if (fZ) goto L_006ed8e5;
L_006ed8bc:; BB(0x006ed8bc);
    /* 006ed8bc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ed8c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ed8ca: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed8cd: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed8d0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed8d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed8d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed8d9: call 0x6ed8f4 */ r_esp -= 4; W32(r_esp, 0x6ed8deu); f_006ed8f4();
    /* 006ed8de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ed8e5:; BB(0x006ed8e5);
    /* 006ed8e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ed8e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ed8ef: mov esp, ebp */ r_esp = r_ebp;
    /* 006ed8f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ed8f2: ret  */ FN_RET(0x006ed87c); r_esp += 4; return;
}

void f_006ed8f4(void) /* sub_6ED8F4 */
{
    FN_ENTER(0x006ed8f4);
    /* 006ed8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ed8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ed8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed8f9: push 0x8ef6e4 */ { u32 v = 0x8ef6e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ed904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ed90c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ed90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ed912: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ed915: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ed918: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ed91b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed91e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed921: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed924: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed927: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ed92a: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6ed92fu); f_006de5f0();
    /* 006ed92f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ed936: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed939: mov dword ptr [edi], 0xb3e058 */ W32((u32)(r_edi), 0xb3e058u);
    /* 006ed93f: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 006ed945: mov esi, 0xb */ r_esi = 0xbu;
    /* 006ed94a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ed94c:; BB(0x006ed94c);
    /* 006ed94c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ed951: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006ed954: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ed956: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006ed95a: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006ed95d: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ed960: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006ed963: jne 0x6ed94c */ if (!fZ) goto L_006ed94c;
L_006ed965:; BB(0x006ed965);
    /* 006ed965: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 006ed96f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed972: mov eax, dword ptr [0x9cf9ac] */ r_eax = R32((u32)(0x9cf9acu));
    /* 006ed977: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ed97a: call 0x6ed698 */ r_esp -= 4; W32(r_esp, 0x6ed97fu); f_006ed698();
    /* 006ed97f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ed982: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 006ed988: mov dword ptr [ecx + 0xec], 0 */ W32((u32)(r_ecx+0xecu), 0x0u);
    /* 006ed992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed994: mov dword ptr [ecx + 0x148], 1 */ W32((u32)(r_ecx+0x148u), 0x1u);
    /* 006ed99e: je 0x6ed9b2 */ if (fZ) goto L_006ed9b2;
L_006ed9a0:; BB(0x006ed9a0);
    /* 006ed9a0: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006ed9a6: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 006ed9ac: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006ed9af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ed9b2:; BB(0x006ed9b2);
    /* 006ed9b2: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006ed9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed9b7: je 0x6ed9c4 */ if (fZ) goto L_006ed9c4;
L_006ed9b9:; BB(0x006ed9b9);
    /* 006ed9b9: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ed9bd: mov word ptr [ecx + 0xb4], ax */ W16((u32)(r_ecx+0xb4u), (u16)r_eax);
L_006ed9c4:; BB(0x006ed9c4);
    /* 006ed9c4: mov eax, dword ptr [ecx + 0x148] */ r_eax = R32((u32)(r_ecx+0x148u));
    /* 006ed9ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed9cd: je 0x6edaad */ if (fZ) goto L_006edaad;
L_006ed9d3:; BB(0x006ed9d3);
    /* 006ed9d3: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 006ed9d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed9db: je 0x6eda8c */ if (fZ) goto L_006eda8c;
L_006ed9e1:; BB(0x006ed9e1);
    /* 006ed9e1: movzx eax, word ptr [ecx + 0xf0] */ r_eax = (u32)R16((u32)(r_ecx+0xf0u));
    /* 006ed9e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ed9e9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ed9eeu); f_007b4d18();
    /* 006ed9ee: mov ebx, eax */ r_ebx = r_eax;
    /* 006ed9f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed9f1: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6ed9f6u); f_006ea700();
    /* 006ed9f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ed9f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ed9fb: jne 0x6eda05 */ if (!fZ) goto L_006eda05;
L_006ed9fd:; BB(0x006ed9fd);
    /* 006ed9fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eda00: jmp 0x6eda8c */ goto L_006eda8c;
L_006eda05:; BB(0x006eda05);
    /* 006eda05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eda06: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6eda0bu); f_006ea71c();
    /* 006eda0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eda0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eda0e: jne 0x6eda15 */ if (!fZ) goto L_006eda15;
L_006eda10:; BB(0x006eda10);
    /* 006eda10: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eda13: jmp 0x6eda8c */ goto L_006eda8c;
L_006eda15:; BB(0x006eda15);
    /* 006eda15: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 006eda17: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 006eda1d: mov ecx, dword ptr [ebx + 0x304] */ r_ecx = R32((u32)(r_ebx+0x304u));
    /* 006eda23: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 006eda29: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006eda2c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006eda2f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006eda32: lea ebx, [ebp - 0x2c] */ r_ebx = (u32)(r_ebp+0xffffffd4u);
    /* 006eda35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eda36: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6eda3bu); f_0050b510();
    /* 006eda3b: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 006eda3e: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006eda40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eda41: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6eda46u); f_0050b510();
    /* 006eda46: mov ebx, eax */ r_ebx = r_eax;
    /* 006eda48: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eda4b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eda4d: jne 0x6eda54 */ if (!fZ) goto L_006eda54;
L_006eda4f:; BB(0x006eda4f);
    /* 006eda4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eda52: jmp 0x6eda8c */ goto L_006eda8c;
L_006eda54:; BB(0x006eda54);
    /* 006eda54: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006eda5a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006eda5c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6eda61u); f_005b8610();
    /* 006eda61: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006eda67: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 006eda6b: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 006eda72: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 006eda75: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 006eda7c: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 006eda7f: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006eda85: mov word ptr [ebx + 0x2c], cx */ W16((u32)(r_ebx+0x2cu), (u16)r_ecx);
    /* 006eda89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006eda8c:; BB(0x006eda8c);
    /* 006eda8c: call 0x6ed790 */ r_esp -= 4; W32(r_esp, 0x6eda91u); f_006ed790();
    /* 006eda91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eda94: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006eda97: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eda9a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006eda9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006edaa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006edaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 006edaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edaaa: ret 0x10 */ FN_RET(0x006ed8f4); r_esp += 20; return;
L_006edaad:; BB(0x006edaad);
    /* 006edaad: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006edaaf: add ecx, 0x7c */ {  u32 a = r_ecx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006edab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006edab3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6edab8u); f_0050b510();
    /* 006edab8: mov ebx, eax */ r_ebx = r_eax;
    /* 006edaba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edabd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edabf: je 0x6edaf6 */ if (fZ) goto L_006edaf6;
L_006edac1:; BB(0x006edac1);
    /* 006edac1: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006edac7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006edac9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6edaceu); f_005b8610();
    /* 006edace: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006edad4: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 006edad8: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 006edadf: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 006edae2: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 006edae9: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 006edaec: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006edaf2: mov word ptr [ebx + 0x2c], cx */ W16((u32)(r_ebx+0x2cu), (u16)r_ecx);
L_006edaf6:; BB(0x006edaf6);
    /* 006edaf6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006edaf9: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 006edafb: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006edafe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edaff: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6edb04u); f_0050b510();
    /* 006edb04: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006edb07: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 006edb09: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006edb0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edb0d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6edb12u); f_0050b510();
    /* 006edb12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edb15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006edb18: jmp 0x6eda8c */ goto L_006eda8c;
}

void f_006edb20(void) /* sub_6EDB20 */
{
    FN_ENTER(0x006edb20);
    /* 006edb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edb21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006edb22: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006edb24: mov eax, dword ptr [ebp + 0xe8] */ r_eax = R32((u32)(r_ebp+0xe8u));
    /* 006edb2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edb2c: je 0x6edbb2 */ if (fZ) goto L_006edbb2;
L_006edb32:; BB(0x006edb32);
    /* 006edb32: movzx eax, word ptr [ebp + 0xb4] */ r_eax = (u32)R16((u32)(r_ebp+0xb4u));
    /* 006edb39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edb3a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6edb3fu); f_007b4d18();
    /* 006edb3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006edb40: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 006edb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edb45: je 0x6edbc2 */ if (fZ) goto L_006edbc2;
L_006edb47:; BB(0x006edb47);
    /* 006edb47: mov eax, dword ptr [ebp + 0x148] */ r_eax = R32((u32)(r_ebp+0x148u));
    /* 006edb4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edb50: je 0x6edba4 */ if (fZ) goto L_006edba4;
L_006edb52:; BB(0x006edb52);
    /* 006edb52: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 006edb58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edb5a: jne 0x6edb6c */ if (!fZ) goto L_006edb6c;
L_006edb5c:; BB(0x006edb5c);
    /* 006edb5c: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006edb60: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edb65: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006edb69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006edb6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edb6b: ret  */ FN_RET(0x006edb20); r_esp += 4; return;
L_006edb6c:; BB(0x006edb6c);
    /* 006edb6c: movzx eax, word ptr [ebp + 0xf0] */ r_eax = (u32)R16((u32)(r_ebp+0xf0u));
    /* 006edb73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edb74: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6edb79u); f_007b4d18();
    /* 006edb79: mov ebx, eax */ r_ebx = r_eax;
    /* 006edb7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006edb7c: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6edb81u); f_006ea700();
    /* 006edb81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edb84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edb86: je 0x6edba1 */ if (fZ) goto L_006edba1;
L_006edb88:; BB(0x006edb88);
    /* 006edb88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006edb89: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6edb8eu); f_006ea71c();
    /* 006edb8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006edb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edb91: je 0x6edba1 */ if (fZ) goto L_006edba1;
L_006edb93:; BB(0x006edb93);
    /* 006edb93: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006edb99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006edb9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006edb9c: call 0x6edbd4 */ r_esp -= 4; W32(r_esp, 0x6edba1u); f_006edbd4();
L_006edba1:; BB(0x006edba1);
    /* 006edba1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006edba2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edba3: ret  */ FN_RET(0x006edb20); r_esp += 4; return;
L_006edba4:; BB(0x006edba4);
    /* 006edba4: lea eax, [ebp + 0x7c] */ r_eax = (u32)(r_ebp+0x7cu);
    /* 006edba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edba8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006edbaa: call 0x6edbd4 */ r_esp -= 4; W32(r_esp, 0x6edbafu); f_006edbd4();
    /* 006edbaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006edbb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edbb1: ret  */ FN_RET(0x006edb20); r_esp += 4; return;
L_006edbb2:; BB(0x006edbb2);
    /* 006edbb2: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006edbb6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edbbb: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006edbbf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006edbc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edbc1: ret  */ FN_RET(0x006edb20); r_esp += 4; return;
L_006edbc2:; BB(0x006edbc2);
    /* 006edbc2: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006edbc6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edbcb: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006edbcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006edbd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edbd1: ret  */ FN_RET(0x006edb20); r_esp += 4; return;
}

void f_006edbd4(void) /* sub_6EDBD4 */
{
    FN_ENTER(0x006edbd4);
    /* 006edbd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edbd5: mov ebp, esp */ r_ebp = r_esp;
    /* 006edbd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006edbd9: push 0x8ef736 */ { u32 v = 0x8ef736u; r_esp -= 4; W32(r_esp, v); }
    /* 006edbde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006edbe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edbe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006edbec: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006edbef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006edbf2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006edbf5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006edbf8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006edbfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006edbfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006edc00: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006edc03: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 006edc06: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006edc09: mov dword ptr [ecx + 0x80], ebx */ W32((u32)(r_ecx+0x80u), r_ebx);
    /* 006edc0f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006edc12: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006edc18: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006edc1b: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 006edc1e: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 006edc21: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 006edc24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006edc27: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 006edc2a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006edc2d: je 0x6edc48 */ if (fZ) goto L_006edc48;
L_006edc2f:; BB(0x006edc2f);
    /* 006edc2f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006edc32: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006edc35: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006edc38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006edc3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006edc42: mov esp, ebp */ r_esp = r_ebp;
    /* 006edc44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edc45: ret 4 */ FN_RET(0x006edbd4); r_esp += 8; return;
L_006edc48:; BB(0x006edc48);
    /* 006edc48: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006edc4f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006edc51: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6edc56u); f_005caba4();
    /* 006edc56: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006edc59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edc5c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006edc5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edc61: je 0x6ede33 */ if (fZ) goto L_006ede33;
L_006edc67:; BB(0x006edc67);
    /* 006edc67: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006edc6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006edc75: mov ecx, eax */ r_ecx = r_eax;
    /* 006edc77: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006edc7a: mov edi, dword ptr [0xaca334] */ r_edi = R32((u32)(0xaca334u));
    /* 006edc80: movsx edx, word ptr [ebx + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006edc84: movsx esi, word ptr [ebx + 0x78] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006edc88: lea eax, [ebx + 0x7c] */ r_eax = (u32)(r_ebx+0x7cu);
    /* 006edc8b: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006edc8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006edc8f: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006edc92: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006edc95: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006edc98: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 006edc9b: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 006edc9e: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 006edca1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6edca6u); f_008193cc();
    /* 006edca6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006edcad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006edcb0: mov dword ptr [eax], 0xb3e078 */ W32((u32)(r_eax), 0xb3e078u);
    /* 006edcb6: movzx ecx, word ptr [ebp - 0x5c] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffa4u));
    /* 006edcba: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 006edcbd: mov dword ptr [eax + 0x60], 1 */ W32((u32)(r_eax+0x60u), 0x1u);
    /* 006edcc4: mov word ptr [eax + 0x20], cx */ W16((u32)(r_eax+0x20u), (u16)r_ecx);
    /* 006edcc8: mov edx, 0xa */ r_edx = 0xau;
    /* 006edccd: mov word ptr [eax + 0x22], dx */ W16((u32)(r_eax+0x22u), (u16)r_edx);
    /* 006edcd1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 006edcd4: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 006edcd6: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 006edcd9: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006edcdc: fadd dword ptr [0x96dda4] */ ST(0) = ST(0) + R_F32((u32)(0x96dda4u));
    /* 006edce2: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 006edce5: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 006edce8: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 006edceb: fst dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0));
    /* 006edcee: fadd dword ptr [0x96dda0] */ ST(0) = ST(0) + R_F32((u32)(0x96dda0u));
    /* 006edcf4: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 006edcf7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006edcf9: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 006edcfc: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 006edcff: mov dword ptr [eax + 0x34], 0x3f99999a */ W32((u32)(r_eax+0x34u), 0x3f99999au);
    /* 006edd06: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006edd09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006edd0b: mov dword ptr [eax + 0x38], 0x3f99999a */ W32((u32)(r_eax+0x38u), 0x3f99999au);
    /* 006edd12: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 006edd15: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 006edd18: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 006edd1b: mov dword ptr [eax + 0x3c], 0x3f99999a */ W32((u32)(r_eax+0x3cu), 0x3f99999au);
    /* 006edd22: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 006edd25: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006edd27: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006edd29: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
    /* 006edd30: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006edd32: mov dword ptr [eax + 0x4c], 0x3f800000 */ W32((u32)(r_eax+0x4cu), 0x3f800000u);
    /* 006edd39: mov dword ptr [eax + 0x50], 0x3f800000 */ W32((u32)(r_eax+0x50u), 0x3f800000u);
    /* 006edd40: mov dword ptr [eax + 0x54], 0x3f800000 */ W32((u32)(r_eax+0x54u), 0x3f800000u);
    /* 006edd47: mov eax, dword ptr [ecx + 0x96dd70] */ r_eax = R32((u32)(r_ecx+0x96dd70u));
    /* 006edd4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006edd4f: jbe 0x6eddda */ if ((fC||fZ)) goto L_006eddda;
L_006edd55:; BB(0x006edd55);
    /* 006edd55: mov eax, dword ptr [ecx + 0x96dd6c] */ r_eax = R32((u32)(r_ecx+0x96dd6cu));
    /* 006edd5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006edd5d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006edd60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006edd62: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006edd65: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006edd67: mov ecx, dword ptr [esi + eax + 4] */ r_ecx = R32((u32)(r_esi+r_eax+0x4u));
    /* 006edd6b: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edd71: je 0x6edd78 */ if (fZ) goto L_006edd78;
L_006edd73:; BB(0x006edd73);
    /* 006edd73: mov edx, 0x2000 */ r_edx = 0x2000u;
L_006edd78:; BB(0x006edd78);
    /* 006edd78: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006edd7b: je 0x6edd92 */ if (fZ) goto L_006edd92;
L_006edd7d:; BB(0x006edd7d);
    /* 006edd7d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006edd80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edd81: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006edd84: lea edi, [ecx + 0x28] */ r_edi = (u32)(r_ecx+0x28u);
    /* 006edd87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006edd88: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6edd8du); f_0050b7a4();
    /* 006edd8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edd90: jmp 0x6edda2 */ goto L_006edda2;
L_006edd92:; BB(0x006edd92);
    /* 006edd92: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006edd95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edd96: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006edd99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006edd9a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6edd9fu); f_0050b7a4();
    /* 006edd9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006edda2:; BB(0x006edda2);
    /* 006edda2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edda4: je 0x6eddbe */ if (fZ) goto L_006eddbe;
L_006edda6:; BB(0x006edda6);
    /* 006edda6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006edda9: movzx ecx, word ptr [edx + 0x20] */ r_ecx = (u32)R16((u32)(r_edx+0x20u));
    /* 006eddad: mov edi, dword ptr [ecx*8 + 0x96dd6c] */ r_edi = R32((u32)(r_ecx*8+0x96dd6cu));
    /* 006eddb4: mov esi, dword ptr [esi + edi + 8] */ r_esi = R32((u32)(r_esi+r_edi+0x8u));
    /* 006eddb8: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 006eddbb: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
L_006eddbe:; BB(0x006eddbe);
    /* 006eddbe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eddc1: movzx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)R16((u32)(r_eax+0x20u));
    /* 006eddc5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eddc8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eddca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eddcc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eddce: cmp ebx, dword ptr [ecx + 0x96dd70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x96dd70u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006eddd4: jb 0x6edd55 */ if (fC) goto L_006edd55;
L_006eddda:; BB(0x006eddda);
    /* 006eddda: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006edde1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006edde3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6edde8u); f_005caba4();
    /* 006edde8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006eddeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eddee: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006eddf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eddf3: je 0x6edf5a */ if (fZ) goto L_006edf5a;
L_006eddf9:; BB(0x006eddf9);
    /* 006eddf9: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006ede00: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006ede07: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ede0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ede0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ede0e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006ede10: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x6ede15u); f_00504b58();
    /* 006ede15: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006ede1c:; BB(0x006ede1c);
    /* 006ede1c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ede1f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ede22: mov dword ptr [edx + 0x40], 0x3ff33333 */ W32((u32)(r_edx+0x40u), 0x3ff33333u);
    /* 006ede29: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006ede2c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006ede33:; BB(0x006ede33);
    /* 006ede33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ede3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ede3d: movsx eax, word ptr [eax + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ede41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ede43: je 0x6edf25 */ if (fZ) goto L_006edf25;
L_006ede49:; BB(0x006ede49);
    /* 006ede49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ede4c: je 0x6edf0b */ if (fZ) goto L_006edf0b;
L_006ede52:; BB(0x006ede52);
    /* 006ede52: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ede55: jl 0x6edebb */ if ((fS!=fO)) goto L_006edebb;
L_006ede57:; BB(0x006ede57);
    /* 006ede57: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ede5a: jle 0x6ede8f */ if ((fZ||fS!=fO)) goto L_006ede8f;
L_006ede5c:; BB(0x006ede5c);
    /* 006ede5c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ede5f: jne 0x6eded8 */ if (!fZ) goto L_006eded8;
L_006ede61:; BB(0x006ede61);
    /* 006ede61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ede64: lea ecx, [eax + 0x7c] */ r_ecx = (u32)(r_eax+0x7cu);
    /* 006ede67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ede69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede6c: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006ede71: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ede76u); f_00814298();
    /* 006ede76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ede79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ede7b: jl 0x6edebb */ if ((fS!=fO)) goto L_006edebb;
L_006ede7d:; BB(0x006ede7d);
    /* 006ede7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ede7f: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ede84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ede85: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ede8au); f_00814664();
    /* 006ede8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ede8d: jmp 0x6edebb */ goto L_006edebb;
L_006ede8f:; BB(0x006ede8f);
    /* 006ede8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ede92: lea ecx, [eax + 0x7c] */ r_ecx = (u32)(r_eax+0x7cu);
    /* 006ede95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ede97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ede9a: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006ede9f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6edea4u); f_00814298();
    /* 006edea4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006edea9: jl 0x6edebb */ if ((fS!=fO)) goto L_006edebb;
L_006edeab:; BB(0x006edeab);
    /* 006edeab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006edead: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006edeb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edeb3: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6edeb8u); f_00814664();
    /* 006edeb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006edebb:; BB(0x006edebb);
    /* 006edebb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006edebe: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x6edec3u); f_006deadc();
    /* 006edec3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006edec6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006edeca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006edecf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006eded3: jmp 0x6edc2f */ goto L_006edc2f;
L_006eded8:; BB(0x006eded8);
    /* 006eded8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ededb: jne 0x6edebb */ if (!fZ) goto L_006edebb;
L_006ededd:; BB(0x006ededd);
    /* 006ededd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006edee0: lea ecx, [eax + 0x7c] */ r_ecx = (u32)(r_eax+0x7cu);
    /* 006edee3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006edee5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edee6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edee7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006edee8: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006edeed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6edef2u); f_00814298();
    /* 006edef2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006edef7: jl 0x6edebb */ if ((fS!=fO)) goto L_006edebb;
L_006edef9:; BB(0x006edef9);
    /* 006edef9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006edefb: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006edf00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edf01: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6edf06u); f_00814664();
    /* 006edf06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edf09: jmp 0x6edebb */ goto L_006edebb;
L_006edf0b:; BB(0x006edf0b);
    /* 006edf0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006edf0e: lea ecx, [eax + 0x7c] */ r_ecx = (u32)(r_eax+0x7cu);
    /* 006edf11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006edf13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf16: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006edf1b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6edf20u); f_00814298();
    /* 006edf20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edf23: jmp 0x6edebb */ goto L_006edebb;
L_006edf25:; BB(0x006edf25);
    /* 006edf25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006edf28: lea ecx, [eax + 0x7c] */ r_ecx = (u32)(r_eax+0x7cu);
    /* 006edf2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006edf2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006edf30: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006edf35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6edf3au); f_00814298();
    /* 006edf3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edf3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006edf3f: jl 0x6edebb */ if ((fS!=fO)) goto L_006edebb;
L_006edf45:; BB(0x006edf45);
    /* 006edf45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006edf47: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006edf4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edf4d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6edf52u); f_00814664();
    /* 006edf52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edf55: jmp 0x6edebb */ goto L_006edebb;
L_006edf5a:; BB(0x006edf5a);
    /* 006edf5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006edf5c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006edf5f: jmp 0x6ede1c */ goto L_006ede1c;
}

void f_006edf64(void) /* sub_6EDF64 */
{
    FN_ENTER(0x006edf64);
    /* 006edf64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edf65: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006edf68: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006edf6e: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006edf72: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006edf75: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 006edf7c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006edf80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006edf82: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006edf84: push dword ptr [ecx + 0xb8] */ { u32 v = R32((u32)(r_ecx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006edf8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edf8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006edf8d: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006edf90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006edf92: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6edf95u); call_ind(t); }
    /* 006edf95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006edf97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006edf9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edf9b: ret 4 */ FN_RET(0x006edf64); r_esp += 8; return;
}

void f_006edfa0(void) /* sub_6EDFA0 */
{
    FN_ENTER(0x006edfa0);
    /* 006edfa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006edfa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edfa2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006edfa5: mov edi, ecx */ r_edi = r_ecx;
    /* 006edfa7: mov eax, dword ptr [edi + 0x148] */ r_eax = R32((u32)(r_edi+0x148u));
    /* 006edfad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edfb0: je 0x6ee069 */ if (fZ) goto L_006ee069;
L_006edfb6:; BB(0x006edfb6);
    /* 006edfb6: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 006edfbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edfbe: jne 0x6edfc8 */ if (!fZ) goto L_006edfc8;
L_006edfc0:; BB(0x006edfc0);
    /* 006edfc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006edfc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006edfc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006edfc5: ret 4 */ FN_RET(0x006edfa0); r_esp += 8; return;
L_006edfc8:; BB(0x006edfc8);
    /* 006edfc8: movzx eax, word ptr [edi + 0xf0] */ r_eax = (u32)R16((u32)(r_edi+0xf0u));
    /* 006edfcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006edfd0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6edfd5u); f_007b4d18();
    /* 006edfd5: mov ebp, eax */ r_ebp = r_eax;
    /* 006edfd7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edfd8: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6edfddu); f_006ea700();
    /* 006edfdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006edfe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edfe2: je 0x6ee061 */ if (fZ) goto L_006ee061;
L_006edfe4:; BB(0x006edfe4);
    /* 006edfe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006edfe5: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6edfeau); f_006ea71c();
    /* 006edfea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006edfeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006edfed: je 0x6ee061 */ if (fZ) goto L_006ee061;
L_006edfef:; BB(0x006edfef);
    /* 006edfef: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 006edff5: mov ecx, dword ptr [ebp + 0x304] */ r_ecx = R32((u32)(r_ebp+0x304u));
    /* 006edffb: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 006ee001: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ee004: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006ee008: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006ee00c: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 006ee00f: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee011: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee012: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ee017u); f_0050b510();
    /* 006ee017: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006ee01b: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006ee01d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee01e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ee023u); f_0050b510();
    /* 006ee023: mov ebp, eax */ r_ebp = r_eax;
    /* 006ee025: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee028: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee02a: je 0x6ee061 */ if (fZ) goto L_006ee061;
L_006ee02c:; BB(0x006ee02c);
    /* 006ee02c: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ee032: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee034: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ee039u); f_005b8610();
    /* 006ee039: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ee03f: movzx ecx, word ptr [ebp + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 006ee043: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 006ee04a: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 006ee04d: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 006ee054: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 006ee057: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee05d: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
L_006ee061:; BB(0x006ee061);
    /* 006ee061: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ee064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee065: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ee066: ret 4 */ FN_RET(0x006edfa0); r_esp += 8; return;
L_006ee069:; BB(0x006ee069);
    /* 006ee069: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006ee06b: add edi, 0x7c */ {  u32 a = r_edi; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ee06e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee06f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ee074u); f_0050b510();
    /* 006ee074: mov ebp, eax */ r_ebp = r_eax;
    /* 006ee076: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee079: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee07b: je 0x6ee0b2 */ if (fZ) goto L_006ee0b2;
L_006ee07d:; BB(0x006ee07d);
    /* 006ee07d: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ee083: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee085: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ee08au); f_005b8610();
    /* 006ee08a: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ee090: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 006ee097: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 006ee09a: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 006ee09d: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 006ee0a1: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 006ee0a8: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ee0ae: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
L_006ee0b2:; BB(0x006ee0b2);
    /* 006ee0b2: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0b5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ee0bau); f_0050b510();
    /* 006ee0ba: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0bd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ee0c2u); f_0050b510();
    /* 006ee0c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee0c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ee0c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee0c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ee0ca: ret 4 */ FN_RET(0x006edfa0); r_esp += 8; return;
}

