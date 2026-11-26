#include "protos.h"

void f_007491e8(void) /* sub_7491E8 */
{
    FN_ENTER(0x007491e8);
    /* 007491e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007491e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007491ea: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007491ec: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007491f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007491f1: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7491f6u); f_00719140();
    /* 007491f6: mov edi, eax */ r_edi = r_eax;
    /* 007491f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007491fb: movzx edx, byte ptr [ebx + 0x60] */ r_edx = (u32)R8((u32)(r_ebx+0x60u));
    /* 007491ff: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00749202: jne 0x749253 */ if (!fZ) goto L_00749253;
L_00749204:; BB(0x00749204);
    /* 00749204: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749206: call 0x749298 */ r_esp -= 4; W32(r_esp, 0x74920bu); f_00749298();
    /* 0074920b: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00749210: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749217: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 0074921a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074921c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074921e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00749220: lea edi, [edi + edi + 0xaae75c] */ r_edi = (u32)(r_edi+r_edi+0xaae75cu);
    /* 00749227: mov ecx, edi */ r_ecx = r_edi;
    /* 00749229: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74922eu); f_007c1160();
    /* 0074922e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749230: je 0x749239 */ if (fZ) goto L_00749239;
L_00749232:; BB(0x00749232);
    /* 00749232: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749234: call 0x74940c */ r_esp -= 4; W32(r_esp, 0x749239u); f_0074940c();
L_00749239:; BB(0x00749239);
    /* 00749239: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 0074923e: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749241: mov ecx, edi */ r_ecx = r_edi;
    /* 00749243: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x749248u); f_007c1160();
    /* 00749248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074924a: je 0x749253 */ if (fZ) goto L_00749253;
L_0074924c:; BB(0x0074924c);
    /* 0074924c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074924e: call 0x74943c */ r_esp -= 4; W32(r_esp, 0x749253u); f_0074943c();
L_00749253:; BB(0x00749253);
    /* 00749253: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749255: call 0x74946c */ r_esp -= 4; W32(r_esp, 0x74925au); f_0074946c();
    /* 0074925a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074925c: call 0x7497f0 */ r_esp -= 4; W32(r_esp, 0x749261u); f_007497f0();
    /* 00749261: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749263: call 0x748e90 */ r_esp -= 4; W32(r_esp, 0x749268u); f_00748e90();
    /* 00749268: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 0074926b: fcomp dword ptr [0x9736e0] */ fx_compare(ST(0), R_F32((u32)(0x9736e0u))); FPOP();
    /* 00749271: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00749273: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00749274: jb 0x74927e */ if (fC) goto L_0074927e;
L_00749276:; BB(0x00749276);
    /* 00749276: mov ecx, dword ptr [ebx + 0x6c] */ r_ecx = R32((u32)(r_ebx+0x6cu));
    /* 00749279: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x74927eu); f_00761388();
L_0074927e:; BB(0x0074927e);
    /* 0074927e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749280: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x749285u); f_00710db4();
    /* 00749285: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 00749288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749289: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074928b: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x749290u); f_0072a5ec();
    /* 00749290: add word ptr [ebx + 0x66], 1 */ { u32 ad = (u32)(r_ebx+0x66u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00749295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749296: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749297: ret  */ FN_RET(0x007491e8); r_esp += 4; return;
}

void f_00749298(void) /* sub_749298 */
{
    FN_ENTER(0x00749298);
    /* 00749298: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749299: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074929a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074929c: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007492a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007492a1: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7492a6u); f_00719140();
    /* 007492a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007492a7: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007492aa: mov ebp, dword ptr [edx + 0x3c] */ r_ebp = R32((u32)(r_edx+0x3cu));
    /* 007492ad: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007492b0: movsx edx, byte ptr [ebx + 0x63] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x63u));
    /* 007492b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007492b6: jle 0x7493fc */ if ((fZ||fS!=fO)) goto L_007493fc;
L_007492bc:; BB(0x007492bc);
    /* 007492bc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007492bf: mov byte ptr [ebx + 0x63], dl */ W8((u32)(r_ebx+0x63u), (u8)r_edx);
    /* 007492c2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007492c7: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 007492ca: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
L_007492cd:; BB(0x007492cd);
    /* 007492cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007492cf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007492d1: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 007492d4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007492d6: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 007492db: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007492e1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007492e3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007492e5: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007492eb: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007492f1: lea ebp, [ebp + ebp + 0xaae75c] */ r_ebp = (u32)(r_ebp+r_ebp+0xaae75cu);
    /* 007492f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007492f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007492fb: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x749300u); f_007c09fc();
    /* 00749300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749302: jne 0x749344 */ if (!fZ) goto L_00749344;
L_00749304:; BB(0x00749304);
    /* 00749304: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00749306: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074930a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074930b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x749310u); f_007be19c();
    /* 00749310: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749315: je 0x74931e */ if (fZ) goto L_0074931e;
L_00749317:; BB(0x00749317);
    /* 00749317: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 0074931c: jmp 0x749323 */ goto L_00749323;
L_0074931e:; BB(0x0074931e);
    /* 0074931e: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_00749323:; BB(0x00749323);
    /* 00749323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749324: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749326: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74932bu); f_007c1160();
    /* 0074932b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074932d: jne 0x749344 */ if (!fZ) goto L_00749344;
L_0074932f:; BB(0x0074932f);
    /* 0074932f: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x749334u); f_00791b48();
    /* 00749334: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00749336: mov ecx, eax */ r_ecx = r_eax;
    /* 00749338: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x74933du); f_0078fd68();
    /* 0074933d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074933f: jne 0x749344 */ if (!fZ) goto L_00749344;
L_00749341:; BB(0x00749341);
    /* 00749341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00749343: ret  */ FN_RET(0x00749298); r_esp += 4; return;
L_00749344:; BB(0x00749344);
    /* 00749344: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00749346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749349: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074934e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x749353u); f_00814298();
    /* 00749353: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00749355: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00749359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074935a: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x74935fu); f_007be19c();
    /* 0074935f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749364: je 0x74936d */ if (fZ) goto L_0074936d;
L_00749366:; BB(0x00749366);
    /* 00749366: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 0074936b: jmp 0x749372 */ goto L_00749372;
L_0074936d:; BB(0x0074936d);
    /* 0074936d: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_00749372:; BB(0x00749372);
    /* 00749372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749373: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749375: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74937au); f_007c1160();
    /* 0074937a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074937c: jne 0x749390 */ if (!fZ) goto L_00749390;
L_0074937e:; BB(0x0074937e);
    /* 0074937e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x749383u); f_00791b48();
    /* 00749383: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00749385: mov ecx, eax */ r_ecx = r_eax;
    /* 00749387: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x74938cu); f_0078fd68();
    /* 0074938c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074938e: je 0x7493a0 */ if (fZ) goto L_007493a0;
L_00749390:; BB(0x00749390);
    /* 00749390: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 00749394: mov byte ptr [ebx + 0x63], 3 */ W8((u32)(r_ebx+0x63u), 0x3u);
    /* 00749398: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074939a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074939d: mov byte ptr [ebx + 0x62], al */ W8((u32)(r_ebx+0x62u), (u8)r_eax);
L_007493a0:; BB(0x007493a0);
    /* 007493a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007493a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007493a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007493a6: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007493ac: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7493b1u); f_007c09fc();
    /* 007493b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007493b3: je 0x7493b9 */ if (fZ) goto L_007493b9;
L_007493b5:; BB(0x007493b5);
    /* 007493b5: add byte ptr [ebx + 0x61], 1 */ { u32 ad = (u32)(r_ebx+0x61u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_007493b9:; BB(0x007493b9);
    /* 007493b9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007493bb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007493bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007493bf: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007493c5: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7493cau); f_007c09fc();
    /* 007493ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007493cc: jne 0x7493d4 */ if (!fZ) goto L_007493d4;
L_007493ce:; BB(0x007493ce);
    /* 007493ce: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 007493d2: jmp 0x7493de */ goto L_007493de;
L_007493d4:; BB(0x007493d4);
    /* 007493d4: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 007493d8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007493db: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
L_007493de:; BB(0x007493de);
    /* 007493de: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007493e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007493e3: jge 0x7493ee */ if ((fS==fO)) goto L_007493ee;
L_007493e5:; BB(0x007493e5);
    /* 007493e5: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007493e8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007493eb: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
L_007493ee:; BB(0x007493ee);
    /* 007493ee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007493f1: jl 0x7493f9 */ if ((fS!=fO)) goto L_007493f9;
L_007493f3:; BB(0x007493f3);
    /* 007493f3: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007493f6: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
L_007493f9:; BB(0x007493f9);
    /* 007493f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007493fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007493fb: ret  */ FN_RET(0x00749298); r_esp += 4; return;
L_007493fc:; BB(0x007493fc);
    /* 007493fc: mov edx, 0xff666666 */ r_edx = 0xff666666u;
    /* 00749401: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00749404: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00749407: jmp 0x7492cd */ goto L_007492cd;
}

void f_0074940c(void) /* sub_74940C */
{
    FN_ENTER(0x0074940c);
    /* 0074940c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074940d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074940f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00749411: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749414: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00749419: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74941eu); f_00814298();
    /* 0074941e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749421: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00749423: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00749427: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 0074942a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074942f: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00749432: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x749437u); f_00760acc();
    /* 00749437: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749438: ret  */ FN_RET(0x0074940c); r_esp += 4; return;
}

void f_0074943c(void) /* sub_74943C */
{
    FN_ENTER(0x0074943c);
    /* 0074943c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074943d: mov edi, ecx */ r_edi = r_ecx;
    /* 0074943f: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00749443: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749445: je 0x749449 */ if (fZ) goto L_00749449;
L_00749447:; BB(0x00749447);
    /* 00749447: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749448: ret  */ FN_RET(0x0074943c); r_esp += 4; return;
L_00749449:; BB(0x00749449);
    /* 00749449: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074944b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074944c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074944d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074944e: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00749453: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x749458u); f_00814298();
    /* 00749458: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0074945c: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749461: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00749464: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00749467: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749468: ret  */ FN_RET(0x0074943c); r_esp += 4; return;
}

void f_0074946c(void) /* sub_74946C */
{
    FN_ENTER(0x0074946c);
    /* 0074946c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074946d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074946e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074946f: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00749472: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00749474: movsx eax, byte ptr [ebp + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x62u));
    /* 00749478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074947a: jle 0x7497e5 */ if ((fZ||fS!=fO)) goto L_007497e5;
L_00749480:; BB(0x00749480);
    /* 00749480: mov esi, 0x13300 */ r_esi = 0x13300u;
L_00749485:; BB(0x00749485);
    /* 00749485: mov ebx, dword ptr [ebp + 0x68] */ r_ebx = R32((u32)(r_ebp+0x68u));
    /* 00749488: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074948a: je 0x7494ab */ if (fZ) goto L_007494ab;
L_0074948c:; BB(0x0074948c);
    /* 0074948c: mov eax, esi */ r_eax = r_esi;
    /* 0074948e: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00749490: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00749493: cmp edx, 0xc00 */ {  u32 a = r_edx; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00749499: jge 0x7494a2 */ if ((fS==fO)) goto L_007494a2;
L_0074949b:; BB(0x0074949b);
    /* 0074949b: mov ebx, esi */ r_ebx = r_esi;
    /* 0074949d: mov dword ptr [ebp + 0x68], esi */ W32((u32)(r_ebp+0x68u), r_esi);
    /* 007494a0: jmp 0x7494ab */ goto L_007494ab;
L_007494a2:; BB(0x007494a2);
    /* 007494a2: add ebx, 0xc00 */ {  u32 a = r_ebx; u32 b = 0xc00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007494a8: mov dword ptr [ebp + 0x68], ebx */ W32((u32)(r_ebp+0x68u), r_ebx);
L_007494ab:; BB(0x007494ab);
    /* 007494ab: test ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007494b1: je 0x749584 */ if (fZ) goto L_00749584;
L_007494b7:; BB(0x007494b7);
    /* 007494b7: mov byte ptr [ebp + 0x64], 0 */ W8((u32)(r_ebp+0x64u), 0x0u);
    /* 007494bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007494bd: mov byte ptr [ebp + 0x65], 1 */ W8((u32)(r_ebp+0x65u), 0x1u);
    /* 007494c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7494c6u); f_0082dcbc();
    /* 007494c6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007494ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007494cc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7494d1u); f_0082ddd8();
    /* 007494d1: fmul dword ptr [0x973528] */ ST(0) = ST(0) * R_F32((u32)(0x973528u));
    /* 007494d7: fadd dword ptr [0x97352c] */ ST(0) = ST(0) + R_F32((u32)(0x97352cu));
    /* 007494dd: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007494e1: fmul dword ptr [0x973520] */ ST(0) = ST(0) * R_F32((u32)(0x973520u));
    /* 007494e7: fadd dword ptr [0x973524] */ ST(0) = ST(0) + R_F32((u32)(0x973524u));
    /* 007494ed: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 007494f0: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 007494f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007494f5: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007494f8: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 007494fb: lea eax, [ebx - 0x7300] */ r_eax = (u32)(r_ebx+0xffff8d00u);
    /* 00749501: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749506: jne 0x7496b7 */ if (!fZ) goto L_007496b7;
L_0074950c:; BB(0x0074950c);
    /* 0074950c: mov dword ptr [esi + 0x18], 0x3f19999a */ W32((u32)(r_esi+0x18u), 0x3f19999au);
    /* 00749513: mov dword ptr [esi + 0x2c], 0xffffffff */ W32((u32)(r_esi+0x2cu), 0xffffffffu);
L_0074951a:; BB(0x0074951a);
    /* 0074951a: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 0074951d: lea ebx, [esi + 0x8000] */ r_ebx = (u32)(r_esi+0x8000u);
    /* 00749523: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749525: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x74952au); f_0082dcbc();
    /* 0074952a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0074952e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749530: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x749535u); f_0082ddd8();
    /* 00749535: fmul dword ptr [0x973518] */ ST(0) = ST(0) * R_F32((u32)(0x973518u));
    /* 0074953b: fadd dword ptr [0x97351c] */ ST(0) = ST(0) + R_F32((u32)(0x97351cu));
    /* 00749541: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00749545: fmul dword ptr [0x973510] */ ST(0) = ST(0) * R_F32((u32)(0x973510u));
    /* 0074954b: fadd dword ptr [0x973514] */ ST(0) = ST(0) + R_F32((u32)(0x973514u));
    /* 00749551: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00749554: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00749556: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749558: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0074955b: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0074955e: lea eax, [esi + 0xd00] */ r_eax = (u32)(r_esi+0xd00u);
    /* 00749564: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749569: jne 0x749651 */ if (!fZ) goto L_00749651;
L_0074956f:; BB(0x0074956f);
    /* 0074956f: mov dword ptr [ebx + 0x18], 0x3f19999a */ W32((u32)(r_ebx+0x18u), 0x3f19999au);
    /* 00749576: mov dword ptr [ebx + 0x2c], 0xffffffff */ W32((u32)(r_ebx+0x2cu), 0xffffffffu);
    /* 0074957d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00749580: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00749582: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749583: ret  */ FN_RET(0x0074946c); r_esp += 4; return;
L_00749584:; BB(0x00749584);
    /* 00749584: mov byte ptr [ebp + 0x64], 1 */ W8((u32)(r_ebp+0x64u), 0x1u);
    /* 00749588: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074958e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749590: mov byte ptr [ebp + 0x65], 0 */ W8((u32)(r_ebp+0x65u), 0x0u);
    /* 00749594: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x749599u); f_0082dcbc();
    /* 00749599: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0074959d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074959f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7495a4u); f_0082ddd8();
    /* 007495a4: fmul dword ptr [0x973548] */ ST(0) = ST(0) * R_F32((u32)(0x973548u));
    /* 007495aa: fadd dword ptr [0x97354c] */ ST(0) = ST(0) + R_F32((u32)(0x97354cu));
    /* 007495b0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007495b4: fmul dword ptr [0x973540] */ ST(0) = ST(0) * R_F32((u32)(0x973540u));
    /* 007495ba: fadd dword ptr [0x973544] */ ST(0) = ST(0) + R_F32((u32)(0x973544u));
    /* 007495c0: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 007495c3: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 007495c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007495c8: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007495cb: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 007495ce: lea eax, [ebx - 0x7300] */ r_eax = (u32)(r_ebx+0xffff8d00u);
    /* 007495d4: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007495d9: jne 0x749781 */ if (!fZ) goto L_00749781;
L_007495df:; BB(0x007495df);
    /* 007495df: mov dword ptr [esi + 0x18], 0x3f19999a */ W32((u32)(r_esi+0x18u), 0x3f19999au);
    /* 007495e6: mov dword ptr [esi + 0x2c], 0xffffffff */ W32((u32)(r_esi+0x2cu), 0xffffffffu);
L_007495ed:; BB(0x007495ed);
    /* 007495ed: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 007495f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007495f2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7495f7u); f_0082dcbc();
    /* 007495f7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007495fb: mov ecx, esi */ r_ecx = r_esi;
    /* 007495fd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x749602u); f_0082ddd8();
    /* 00749602: fmul dword ptr [0x973538] */ ST(0) = ST(0) * R_F32((u32)(0x973538u));
    /* 00749608: fadd dword ptr [0x97353c] */ ST(0) = ST(0) + R_F32((u32)(0x97353cu));
    /* 0074960e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00749612: fmul dword ptr [0x973530] */ ST(0) = ST(0) * R_F32((u32)(0x973530u));
    /* 00749618: fadd dword ptr [0x973534] */ ST(0) = ST(0) + R_F32((u32)(0x973534u));
    /* 0074961e: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00749621: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00749623: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749625: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00749628: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0074962b: lea eax, [esi - 0x7300] */ r_eax = (u32)(r_esi+0xffff8d00u);
    /* 00749631: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749636: jne 0x74971b */ if (!fZ) goto L_0074971b;
L_0074963c:; BB(0x0074963c);
    /* 0074963c: mov dword ptr [ebx + 0x18], 0x3f19999a */ W32((u32)(r_ebx+0x18u), 0x3f19999au);
    /* 00749643: mov dword ptr [ebx + 0x2c], 0xffffffff */ W32((u32)(r_ebx+0x2cu), 0xffffffffu);
    /* 0074964a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074964d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074964e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074964f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749650: ret  */ FN_RET(0x0074946c); r_esp += 4; return;
L_00749651:; BB(0x00749651);
    /* 00749651: add esi, 0xffffcd00 */ {  u32 a = r_esi; u32 b = 0xffffcd00u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00749657: mov ecx, esi */ r_ecx = r_esi;
    /* 00749659: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x74965eu); f_0082ddd8();
    /* 0074965e: fld dword ptr [0x9736d4] */ FPUSH(R_F32((u32)(0x9736d4u)));
    /* 00749664: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00749666: fadd dword ptr [0x9736d8] */ ST(0) = ST(0) + R_F32((u32)(0x9736d8u));
    /* 0074966c: fmul dword ptr [0x9736d0] */ ST(0) = ST(0) * R_F32((u32)(0x9736d0u));
    /* 00749672: mov dword ptr [ebx + 0x18], 0x3dcccccd */ W32((u32)(r_ebx+0x18u), 0x3dcccccdu);
    /* 00749679: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0074967c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00749680: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749685: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00749689: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0074968d: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749691: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00749694: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 00749699: mov ecx, edx */ r_ecx = r_edx;
    /* 0074969b: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0074969e: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007496a4: mov eax, edx */ r_eax = r_edx;
    /* 007496a6: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007496a9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007496ab: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007496ad: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 007496b0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007496b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007496b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007496b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007496b6: ret  */ FN_RET(0x0074946c); r_esp += 4; return;
L_007496b7:; BB(0x007496b7);
    /* 007496b7: add ebx, 0xffff4d00 */ {  u32 a = r_ebx; u32 b = 0xffff4d00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007496bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007496bf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7496c4u); f_0082ddd8();
    /* 007496c4: fld dword ptr [0x9736d4] */ FPUSH(R_F32((u32)(0x9736d4u)));
    /* 007496ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007496cc: fadd dword ptr [0x9736d8] */ ST(0) = ST(0) + R_F32((u32)(0x9736d8u));
    /* 007496d2: fmul dword ptr [0x9736d0] */ ST(0) = ST(0) * R_F32((u32)(0x9736d0u));
    /* 007496d8: mov dword ptr [esi + 0x18], 0x3dcccccd */ W32((u32)(r_esi+0x18u), 0x3dcccccdu);
    /* 007496df: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007496e2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007496e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007496eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007496ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007496f3: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007496f7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007496fa: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 007496ff: mov ebx, edx */ r_ebx = r_edx;
    /* 00749701: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00749704: or ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0074970a: mov eax, edx */ r_eax = r_edx;
    /* 0074970c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0074970f: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00749711: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00749713: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 00749716: jmp 0x74951a */ goto L_0074951a;
L_0074971b:; BB(0x0074971b);
    /* 0074971b: add esi, 0xffff4d00 */ {  u32 a = r_esi; u32 b = 0xffff4d00u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00749721: mov ecx, esi */ r_ecx = r_esi;
    /* 00749723: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x749728u); f_0082ddd8();
    /* 00749728: fld dword ptr [0x9736d4] */ FPUSH(R_F32((u32)(0x9736d4u)));
    /* 0074972e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00749730: fadd dword ptr [0x9736d8] */ ST(0) = ST(0) + R_F32((u32)(0x9736d8u));
    /* 00749736: fmul dword ptr [0x9736d0] */ ST(0) = ST(0) * R_F32((u32)(0x9736d0u));
    /* 0074973c: mov dword ptr [ebx + 0x18], 0x3dcccccd */ W32((u32)(r_ebx+0x18u), 0x3dcccccdu);
    /* 00749743: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00749746: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0074974a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074974f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00749753: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00749757: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0074975b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0074975e: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 00749763: mov ecx, edx */ r_ecx = r_edx;
    /* 00749765: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00749768: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0074976e: mov eax, edx */ r_eax = r_edx;
    /* 00749770: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00749773: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00749775: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00749777: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 0074977a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074977d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074977e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074977f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749780: ret  */ FN_RET(0x0074946c); r_esp += 4; return;
L_00749781:; BB(0x00749781);
    /* 00749781: add ebx, 0xffff4d00 */ {  u32 a = r_ebx; u32 b = 0xffff4d00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00749787: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00749789: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x74978eu); f_0082ddd8();
    /* 0074978e: fld dword ptr [0x9736d4] */ FPUSH(R_F32((u32)(0x9736d4u)));
    /* 00749794: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00749796: fadd dword ptr [0x9736d8] */ ST(0) = ST(0) + R_F32((u32)(0x9736d8u));
    /* 0074979c: fmul dword ptr [0x9736d0] */ ST(0) = ST(0) * R_F32((u32)(0x9736d0u));
    /* 007497a2: mov dword ptr [esi + 0x18], 0x3dcccccd */ W32((u32)(r_esi+0x18u), 0x3dcccccdu);
    /* 007497a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007497ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007497b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007497b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007497b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007497bd: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007497c1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007497c4: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 007497c9: mov ebx, edx */ r_ebx = r_edx;
    /* 007497cb: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 007497ce: or ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 007497d4: mov eax, edx */ r_eax = r_edx;
    /* 007497d6: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007497d9: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 007497db: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 007497dd: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 007497e0: jmp 0x7495ed */ goto L_007495ed;
L_007497e5:; BB(0x007497e5);
    /* 007497e5: mov esi, 0xb300 */ r_esi = 0xb300u;
    /* 007497ea: jmp 0x749485 */ goto L_00749485;
}

void f_007497f0(void) /* sub_7497F0 */
{
    FN_ENTER(0x007497f0);
    /* 007497f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007497f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007497f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007497f3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007497f6: fld dword ptr [0x9736c8] */ FPUSH(R_F32((u32)(0x9736c8u)));
    /* 007497fc: fld dword ptr [0x9736c4] */ FPUSH(R_F32((u32)(0x9736c4u)));
    /* 00749802: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00749805: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00749808: fld dword ptr [0x9736c0] */ FPUSH(R_F32((u32)(0x9736c0u)));
    /* 0074980e: fld dword ptr [0x9736bc] */ FPUSH(R_F32((u32)(0x9736bcu)));
    /* 00749814: fld dword ptr [0x9736b8] */ FPUSH(R_F32((u32)(0x9736b8u)));
    /* 0074981a: fld dword ptr [0x9736b4] */ FPUSH(R_F32((u32)(0x9736b4u)));
    /* 00749820: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00749823: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 00749826: fld dword ptr [0x9736b0] */ FPUSH(R_F32((u32)(0x9736b0u)));
    /* 0074982c: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0074982f: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00749831: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00749834: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00749837: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 00749839: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0074983c: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0074983f: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00749841: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00749844: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749847: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00749849: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0074984c: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0074984f: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00749852: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 00749856: movzx esi, byte ptr [edx + 0x2c] */ r_esi = (u32)R8((u32)(r_edx+0x2cu));
    /* 0074985a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0074985d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00749860: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00749863: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00749866: fadd dword ptr [esi*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x973660u));
    /* 0074986d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0074986f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00749873: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749878: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074987d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749881: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00749885: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749889: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0074988d: movzx esi, byte ptr [esp + 0x18] */ r_esi = (u32)R8((u32)(r_esp+0x18u));
    /* 00749892: mov edi, esi */ r_edi = r_esi;
    /* 00749894: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00749897: or edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0074989d: mov eax, esi */ r_eax = r_esi;
    /* 0074989f: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007498a2: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007498a4: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007498a6: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 007498a9: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007498ac: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007498af: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 007498b2: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 007498b5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007498b7: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007498ba: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 007498bd: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007498bf: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 007498c2: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 007498c5: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 007498c7: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 007498ca: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 007498cd: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 007498cf: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 007498d2: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007498d5: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007498d8: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 007498dc: movzx esi, byte ptr [edx + 0x2c] */ r_esi = (u32)R8((u32)(r_edx+0x2cu));
    /* 007498e0: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007498e3: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007498e7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007498eb: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 007498ee: fadd dword ptr [esi*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x973660u));
    /* 007498f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007498f7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007498fb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749900: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749905: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749909: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0074990d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749911: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00749915: movzx esi, byte ptr [esp + 0x18] */ r_esi = (u32)R8((u32)(r_esp+0x18u));
    /* 0074991a: mov edi, esi */ r_edi = r_esi;
    /* 0074991c: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0074991f: or edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00749925: mov eax, esi */ r_eax = r_esi;
    /* 00749927: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0074992a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0074992c: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0074992e: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 00749931: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00749934: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00749937: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0074993a: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0074993d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0074993f: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00749942: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00749945: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00749947: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0074994a: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0074994d: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0074994f: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00749952: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749955: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00749957: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0074995a: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0074995d: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00749960: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 00749964: movzx ebx, byte ptr [edx + 0x2c] */ r_ebx = (u32)R8((u32)(r_edx+0x2cu));
    /* 00749968: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0074996b: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0074996f: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00749973: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00749976: fadd dword ptr [ebx*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x973660u));
    /* 0074997d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0074997f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00749983: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749988: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074998d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749991: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00749995: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749999: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0074999d: movzx ebx, byte ptr [esp + 0x18] */ r_ebx = (u32)R8((u32)(r_esp+0x18u));
    /* 007499a2: mov esi, ebx */ r_esi = r_ebx;
    /* 007499a4: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 007499a7: or esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007499ad: mov eax, ebx */ r_eax = r_ebx;
    /* 007499af: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007499b2: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007499b4: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007499b6: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 007499b9: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007499bc: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 007499be: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 007499c1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007499c4: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 007499c7: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 007499c9: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 007499cb: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007499ce: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 007499d1: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 007499d3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007499d5: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 007499d8: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 007499db: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007499dd: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 007499e0: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 007499e3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007499e5: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 007499e8: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007499eb: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007499ee: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 007499f2: movzx edx, byte ptr [esi + 0x2c] */ r_edx = (u32)R8((u32)(r_esi+0x2cu));
    /* 007499f6: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007499f9: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007499fd: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00749a01: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00749a04: fadd dword ptr [edx*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x973660u));
    /* 00749a0b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00749a0d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00749a11: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749a16: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749a1b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749a1f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00749a23: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749a27: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00749a2b: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00749a30: mov edi, edx */ r_edi = r_edx;
    /* 00749a32: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00749a35: or edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00749a3b: mov eax, edx */ r_eax = r_edx;
    /* 00749a3d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00749a40: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00749a42: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00749a44: mov dword ptr [esi + 0x2c], edi */ W32((u32)(r_esi+0x2cu), r_edi);
    /* 00749a47: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00749a4a: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00749a4d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00749a50: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00749a53: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00749a55: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00749a58: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00749a5b: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00749a5d: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00749a60: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749a63: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00749a65: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00749a68: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749a6b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00749a6d: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00749a70: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00749a73: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00749a76: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 00749a7a: movzx edx, byte ptr [edi + 0x2c] */ r_edx = (u32)R8((u32)(r_edi+0x2cu));
    /* 00749a7e: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00749a81: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00749a85: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00749a89: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00749a8c: fadd dword ptr [edx*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x973660u));
    /* 00749a93: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00749a95: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00749a99: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749a9e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749aa3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749aa7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00749aab: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749aaf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00749ab3: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00749ab8: mov esi, edx */ r_esi = r_edx;
    /* 00749aba: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00749abd: or esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749ac3: mov eax, edx */ r_eax = r_edx;
    /* 00749ac5: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00749ac8: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749aca: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749acc: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 00749acf: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00749ad2: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00749ad5: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 00749ad8: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00749adb: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00749add: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00749adf: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00749ae2: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00749ae5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00749ae7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00749ae9: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00749aec: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749aef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00749af1: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00749af4: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 00749af7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00749af9: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00749afc: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00749aff: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00749b02: movzx eax, byte ptr [ebx + 0x2c] */ r_eax = (u32)R8((u32)(r_ebx+0x2cu));
    /* 00749b06: movzx ebx, byte ptr [edx + 0x2c] */ r_ebx = (u32)R8((u32)(r_edx+0x2cu));
    /* 00749b0a: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00749b0d: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00749b11: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00749b15: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00749b18: fadd dword ptr [ebx*4 + 0x973660] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x973660u));
    /* 00749b1f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00749b21: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00749b25: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00749b2a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00749b2f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00749b33: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00749b37: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00749b3b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00749b3f: movzx ebx, byte ptr [esp + 0x18] */ r_ebx = (u32)R8((u32)(r_esp+0x18u));
    /* 00749b44: mov esi, ebx */ r_esi = r_ebx;
    /* 00749b46: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00749b49: or esi, 0xff000000 */ {  u32 a = r_esi; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749b4f: mov eax, ebx */ r_eax = r_ebx;
    /* 00749b51: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00749b54: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749b56: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00749b58: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 00749b5b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00749b5e: movsx eax, byte ptr [ecx + 0x64] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x64u));
    /* 00749b62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749b64: jne 0x749b71 */ if (!fZ) goto L_00749b71;
L_00749b66:; BB(0x00749b66);
    /* 00749b66: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00749b69: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00749b6c: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00749b6f: jmp 0x749b79 */ goto L_00749b79;
L_00749b71:; BB(0x00749b71);
    /* 00749b71: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00749b74: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00749b77: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
L_00749b79:; BB(0x00749b79);
    /* 00749b79: fld dword ptr [0x9736ac] */ FPUSH(R_F32((u32)(0x9736acu)));
    /* 00749b7f: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00749b82: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00749b85: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 00749b89: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00749b8d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00749b91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749b92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749b93: call 0x7100a8 */ r_esp -= 4; W32(r_esp, 0x749b98u); f_007100a8();
    /* 00749b98: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00749b9c: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 00749b9f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00749ba3: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00749ba7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749ba9: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00749bac: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00749baf: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00749bb5: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00749bb8: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00749bbb: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 00749bbe: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 00749bc1: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 00749bc5: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 00749bc9: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00749bcf: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00749bd3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00749bd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749bd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749bd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749bd9: ret  */ FN_RET(0x007497f0); r_esp += 4; return;
}

void f_00749bdc(void) /* sub_749BDC */
{
    FN_ENTER(0x00749bdc);
    /* 00749bdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749bdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749bde: mov esi, ecx */ r_esi = r_ecx;
    /* 00749be0: mov ecx, esi */ r_ecx = r_esi;
    /* 00749be2: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x749be7u); f_00712644();
    /* 00749be7: mov edi, eax */ r_edi = r_eax;
    /* 00749be9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749bea: mov ecx, esi */ r_ecx = r_esi;
    /* 00749bec: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x749bf1u); f_00710f80();
    /* 00749bf1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749bf2: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00749bf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749bf6: mov ecx, esi */ r_ecx = r_esi;
    /* 00749bf8: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x749bfdu); f_0072a648();
    /* 00749bfd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749bfe: mov ecx, esi */ r_ecx = r_esi;
    /* 00749c00: call 0x749c14 */ r_esp -= 4; W32(r_esp, 0x749c05u); f_00749c14();
    /* 00749c05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749c06: mov ecx, dword ptr [esi + 0x6c] */ r_ecx = R32((u32)(r_esi+0x6cu));
    /* 00749c09: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x749c0eu); f_00761390();
    /* 00749c0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749c0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749c10: ret  */ FN_RET(0x00749bdc); r_esp += 4; return;
}

void f_00749c14(void) /* sub_749C14 */
{
    FN_ENTER(0x00749c14);
    /* 00749c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749c15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749c16: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00749c19: mov edi, ecx */ r_edi = r_ecx;
    /* 00749c1b: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00749c1f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00749c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749c23: mov ecx, edi */ r_ecx = r_edi;
    /* 00749c25: call 0x749d28 */ r_esp -= 4; W32(r_esp, 0x749c2au); f_00749d28();
    /* 00749c2a: movzx edi, word ptr [edi + 0x66] */ r_edi = (u32)R16((u32)(r_edi+0x66u));
    /* 00749c2e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00749c31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00749c33: jl 0x749d20 */ if ((fS!=fO)) goto L_00749d20;
L_00749c39:; BB(0x00749c39);
    /* 00749c39: fld dword ptr [0x9736a4] */ FPUSH(R_F32((u32)(0x9736a4u)));
    /* 00749c3f: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00749c42: fdivr dword ptr [0x9736a8] */ ST(0) = R_F32((u32)(0x9736a8u)) / ST(0);
    /* 00749c48: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00749c4c: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00749c4f: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x749c54u); f_007a902c();
    /* 00749c54: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00749c59: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x749c5eu); f_0082bb30();
    /* 00749c5e: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00749c64: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x749c69u); f_00829cc8();
    /* 00749c69: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 00749c6e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00749c73: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x749c78u); f_0082bb60();
    /* 00749c78: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00749c7b: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00749c7e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00749c82: fld dword ptr [0x9736a0] */ FPUSH(R_F32((u32)(0x9736a0u)));
    /* 00749c88: fld dword ptr [0x97369c] */ FPUSH(R_F32((u32)(0x97369cu)));
    /* 00749c8e: fld dword ptr [0x973698] */ FPUSH(R_F32((u32)(0x973698u)));
    /* 00749c94: fld dword ptr [0x973694] */ FPUSH(R_F32((u32)(0x973694u)));
    /* 00749c9a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00749c9c: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00749ca0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00749ca2: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00749ca5: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00749ca9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00749cab: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00749cad: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00749caf: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00749cb3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00749cb5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00749cb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749cb9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00749cbd: fld dword ptr [edi*8 + 0x973560] */ FPUSH(R_F32((u32)(r_edi*8+0x973560u)));
    /* 00749cc4: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00749cc6: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00749cca: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00749cce: mov ecx, esi */ r_ecx = r_esi;
    /* 00749cd0: fld dword ptr [edi*8 + 0x973564] */ FPUSH(R_F32((u32)(r_edi*8+0x973564u)));
    /* 00749cd7: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00749cd9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00749cdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749cdf: fadd dword ptr [edi*8 + 0x973560] */ ST(0) = ST(0) + R_F32((u32)(r_edi*8+0x973560u));
    /* 00749ce6: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00749ce8: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00749cec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749cee: fadd dword ptr [edi*8 + 0x973564] */ ST(0) = ST(0) + R_F32((u32)(r_edi*8+0x973564u));
    /* 00749cf5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00749cf7: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00749cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749cfc: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x749d01u); f_0071ba34();
    /* 00749d01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749d03: je 0x749d16 */ if (fZ) goto L_00749d16;
L_00749d05:; BB(0x00749d05);
    /* 00749d05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749d06: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00749d0a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00749d0d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00749d11: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x749d16u); f_0082b440();
L_00749d16:; BB(0x00749d16);
    /* 00749d16: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x749d1bu); f_004ac444();
    /* 00749d1b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x749d20u); f_007a9044();
L_00749d20:; BB(0x00749d20);
    /* 00749d20: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00749d23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749d24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749d25: ret 4 */ FN_RET(0x00749c14); r_esp += 8; return;
}

void f_00749d28(void) /* sub_749D28 */
{
    FN_ENTER(0x00749d28);
    /* 00749d28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749d29: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00749d2c: movsx edx, byte ptr [ecx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 00749d30: movsx eax, byte ptr [ecx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x62u));
    /* 00749d34: movsx ebx, byte ptr [ecx + 0x64] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ecx+0x64u));
    /* 00749d38: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749d3a: jne 0x749d48 */ if (!fZ) goto L_00749d48;
L_00749d3c:; BB(0x00749d3c);
    /* 00749d3c: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00749d3f: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00749d41: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00749d43: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 00749d46: jmp 0x749d56 */ goto L_00749d56;
L_00749d48:; BB(0x00749d48);
    /* 00749d48: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00749d4a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00749d4d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00749d4f: lea eax, [edx + ebx + 3] */ r_eax = (u32)(r_edx+r_ebx+0x3u);
    /* 00749d53: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
L_00749d56:; BB(0x00749d56);
    /* 00749d56: movzx ebx, byte ptr [eax + 0x9736ec] */ r_ebx = (u32)R8((u32)(r_eax+0x9736ecu));
    /* 00749d5d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00749d61: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00749d64: mov edx, dword ptr [ecx + ebx*4] */ r_edx = R32((u32)(r_ecx+r_ebx*4));
    /* 00749d67: call 0x749d7c */ r_esp -= 4; W32(r_esp, 0x749d6cu); f_00749d7c();
    /* 00749d6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00749d6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749d70: ret 4 */ FN_RET(0x00749d28); r_esp += 8; return;
}

void f_00749d74(void) /* sub_749D74 */
{
    FN_ENTER(0x00749d74);
    /* 00749d74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00749d78: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00749d7c: fld dword ptr [0x973690] */ FPUSH(R_F32((u32)(0x973690u)));
    /* 00749d82: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00749d85: fld dword ptr [0x97368c] */ FPUSH(R_F32((u32)(0x97368cu)));
    /* 00749d8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749d8d: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00749d8f: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00749d92: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00749d95: ret  */ FN_RET(0x00749d74); r_esp += 4; return;
}

void f_00749d7c(void) /* sub_749D7C */
{
    FN_ENTER(0x00749d7c);
    /* 00749d7c: fld dword ptr [0x973690] */ FPUSH(R_F32((u32)(0x973690u)));
    /* 00749d82: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00749d85: fld dword ptr [0x97368c] */ FPUSH(R_F32((u32)(0x97368cu)));
    /* 00749d8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00749d8d: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00749d8f: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00749d92: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00749d95: ret  */ FN_RET(0x00749d7c); r_esp += 4; return;
}

void f_00749d98(void) /* sub_749D98 */
{
    FN_ENTER(0x00749d98);
    /* 00749d98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749d9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749d9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749d9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749d9d: mov edi, ecx */ r_edi = r_ecx;
    /* 00749d9f: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00749da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749da4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x749da9u); f_0068d5a8();
    /* 00749da9: mov esi, eax */ r_esi = r_eax;
    /* 00749dab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749dae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749db0: je 0x749e35 */ if (fZ) goto L_00749e35;
L_00749db6:; BB(0x00749db6);
    /* 00749db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00749db8: mov ecx, esi */ r_ecx = r_esi;
    /* 00749dba: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x749dbfu); f_006893f0();
    /* 00749dbf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00749dc2: mov edx, eax */ r_edx = r_eax;
    /* 00749dc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749dc6: je 0x749e35 */ if (fZ) goto L_00749e35;
L_00749dc8:; BB(0x00749dc8);
    /* 00749dc8: movsx edx, byte ptr [edi + 0x62] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x62u));
    /* 00749dcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749dcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00749dcf: call 0x749e6c */ r_esp -= 4; W32(r_esp, 0x749dd4u); f_00749e6c();
    /* 00749dd4: movsx edx, byte ptr [edi + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00749dd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749dd9: mov ebp, eax */ r_ebp = r_eax;
    /* 00749ddb: mov ecx, edi */ r_ecx = r_edi;
    /* 00749ddd: call 0x749e84 */ r_esp -= 4; W32(r_esp, 0x749de2u); f_00749e84();
    /* 00749de2: mov ebx, eax */ r_ebx = r_eax;
    /* 00749de4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749de6: jne 0x749df0 */ if (!fZ) goto L_00749df0;
L_00749de8:; BB(0x00749de8);
    /* 00749de8: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00749deb: lea edx, [edx + 4] */ r_edx = (u32)(r_edx+0x4u);
    /* 00749dee: jmp 0x749df6 */ goto L_00749df6;
L_00749df0:; BB(0x00749df0);
    /* 00749df0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00749df3: lea edx, [edx + 0x3c] */ r_edx = (u32)(r_edx+0x3cu);
L_00749df6:; BB(0x00749df6);
    /* 00749df6: movzx eax, byte ptr [edx + ebx*4] */ r_eax = (u32)R8((u32)(r_edx+r_ebx*4));
    /* 00749dfa: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00749dfe: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 00749e01: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749e03: jne 0x749e3d */ if (!fZ) goto L_00749e3d;
L_00749e05:; BB(0x00749e05);
    /* 00749e05: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749e07: jne 0x749e0f */ if (!fZ) goto L_00749e0f;
L_00749e09:; BB(0x00749e09);
    /* 00749e09: add dword ptr [esp], 4 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00749e0d: jmp 0x749e13 */ goto L_00749e13;
L_00749e0f:; BB(0x00749e0f);
    /* 00749e0f: add dword ptr [esp], 0x3c */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00749e13:; BB(0x00749e13);
    /* 00749e13: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00749e16: movzx eax, byte ptr [edx + ebx*4 + 1] */ r_eax = (u32)R8((u32)(r_edx+r_ebx*4+0x1u));
    /* 00749e1b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00749e1f: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 00749e23: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749e25: jne 0x749e3d */ if (!fZ) goto L_00749e3d;
L_00749e27:; BB(0x00749e27);
    /* 00749e27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749e29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e2b: mov ecx, esi */ r_ecx = r_esi;
    /* 00749e2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749e2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e30: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749e35u); f_0068cde0();
L_00749e35:; BB(0x00749e35);
    /* 00749e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00749e36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00749e38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749e39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749e3a: ret 4 */ FN_RET(0x00749d98); r_esp += 8; return;
L_00749e3d:; BB(0x00749e3d);
    /* 00749e3d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00749e41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e42: mov ecx, edi */ r_ecx = r_edi;
    /* 00749e44: call 0x749eac */ r_esp -= 4; W32(r_esp, 0x749e49u); f_00749eac();
    /* 00749e49: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00749e4d: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00749e50: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 00749e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749e55: mov ecx, esi */ r_ecx = r_esi;
    /* 00749e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749e58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749e59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749e5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00749e5c: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749e61u); f_0068cde0();
    /* 00749e61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00749e62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749e63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00749e64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749e65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00749e66: ret 4 */ FN_RET(0x00749d98); r_esp += 8; return;
}

void f_00749e6c(void) /* sub_749E6C */
{
    FN_ENTER(0x00749e6c);
    /* 00749e6c: movsx eax, byte ptr [ecx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x62u));
    /* 00749e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749e72: jne 0x749e79 */ if (!fZ) goto L_00749e79;
L_00749e74:; BB(0x00749e74);
    /* 00749e74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749e76: ret 4 */ FN_RET(0x00749e6c); r_esp += 8; return;
L_00749e79:; BB(0x00749e79);
    /* 00749e79: mov eax, 1 */ r_eax = 0x1u;
    /* 00749e7e: ret 4 */ FN_RET(0x00749e6c); r_esp += 8; return;
}

void f_00749e84(void) /* sub_749E84 */
{
    FN_ENTER(0x00749e84);
    /* 00749e84: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 00749e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749e8b: jne 0x749e95 */ if (!fZ) goto L_00749e95;
L_00749e8d:; BB(0x00749e8d);
    /* 00749e8d: mov eax, 2 */ r_eax = 0x2u;
    /* 00749e92: ret 4 */ FN_RET(0x00749e84); r_esp += 8; return;
L_00749e95:; BB(0x00749e95);
    /* 00749e95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00749e98: jne 0x749ea2 */ if (!fZ) goto L_00749ea2;
L_00749e9a:; BB(0x00749e9a);
    /* 00749e9a: mov eax, 1 */ r_eax = 0x1u;
    /* 00749e9f: ret 4 */ FN_RET(0x00749e84); r_esp += 8; return;
L_00749ea2:; BB(0x00749ea2);
    /* 00749ea2: mov eax, 3 */ r_eax = 0x3u;
    /* 00749ea7: ret 4 */ FN_RET(0x00749e84); r_esp += 8; return;
}

void f_00749eac(void) /* sub_749EAC */
{
    FN_ENTER(0x00749eac);
    /* 00749eac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749ead: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749eae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749eaf: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00749eb3: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 00749eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749eb8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x749ebdu); f_0068d5a8();
    /* 00749ebd: mov ebp, eax */ r_ebp = r_eax;
    /* 00749ebf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749ec2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749ec4: je 0x749fc7 */ if (fZ) goto L_00749fc7;
L_00749eca:; BB(0x00749eca);
    /* 00749eca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00749ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749ece: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x749ed3u); f_006893f0();
    /* 00749ed3: mov ebx, eax */ r_ebx = r_eax;
    /* 00749ed5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00749ed7: je 0x749fc7 */ if (fZ) goto L_00749fc7;
L_00749edd:; BB(0x00749edd);
    /* 00749edd: movzx eax, byte ptr [ebx + 8] */ r_eax = (u32)R8((u32)(r_ebx+0x8u));
    /* 00749ee1: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 00749ee4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749ee6: jne 0x749f06 */ if (!fZ) goto L_00749f06;
L_00749ee8:; BB(0x00749ee8);
    /* 00749ee8: movzx ecx, byte ptr [ebx + 9] */ r_ecx = (u32)R8((u32)(r_ebx+0x9u));
    /* 00749eec: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00749ef0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749ef2: jne 0x749f06 */ if (!fZ) goto L_00749f06;
L_00749ef4:; BB(0x00749ef4);
    /* 00749ef4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749ef6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749ef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749ef8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749efa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00749efc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749efd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749efe: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749f03u); f_0068cde0();
    /* 00749f03: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_00749f06:; BB(0x00749f06);
    /* 00749f06: movzx eax, byte ptr [ebx + 0x10] */ r_eax = (u32)R8((u32)(r_ebx+0x10u));
    /* 00749f0a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f0c: jne 0x749f2c */ if (!fZ) goto L_00749f2c;
L_00749f0e:; BB(0x00749f0e);
    /* 00749f0e: movzx ecx, byte ptr [ebx + 0x11] */ r_ecx = (u32)R8((u32)(r_ebx+0x11u));
    /* 00749f12: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00749f16: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f18: jne 0x749f2c */ if (!fZ) goto L_00749f2c;
L_00749f1a:; BB(0x00749f1a);
    /* 00749f1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749f1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749f20: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00749f22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f24: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749f29u); f_0068cde0();
    /* 00749f29: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_00749f2c:; BB(0x00749f2c);
    /* 00749f2c: movzx eax, byte ptr [ebx + 0xc] */ r_eax = (u32)R8((u32)(r_ebx+0xcu));
    /* 00749f30: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f32: jne 0x749f52 */ if (!fZ) goto L_00749f52;
L_00749f34:; BB(0x00749f34);
    /* 00749f34: movzx ecx, byte ptr [ebx + 0xd] */ r_ecx = (u32)R8((u32)(r_ebx+0xdu));
    /* 00749f38: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00749f3c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f3e: jne 0x749f52 */ if (!fZ) goto L_00749f52;
L_00749f40:; BB(0x00749f40);
    /* 00749f40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749f46: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00749f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f4a: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749f4fu); f_0068cde0();
    /* 00749f4f: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_00749f52:; BB(0x00749f52);
    /* 00749f52: movzx eax, byte ptr [ebx + 0x40] */ r_eax = (u32)R8((u32)(r_ebx+0x40u));
    /* 00749f56: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f58: jne 0x749f7c */ if (!fZ) goto L_00749f7c;
L_00749f5a:; BB(0x00749f5a);
    /* 00749f5a: movzx ecx, byte ptr [ebx + 0x41] */ r_ecx = (u32)R8((u32)(r_ebx+0x41u));
    /* 00749f5e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00749f62: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f64: jne 0x749f7c */ if (!fZ) goto L_00749f7c;
L_00749f66:; BB(0x00749f66);
    /* 00749f66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00749f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749f6a: mov edx, 1 */ r_edx = 0x1u;
    /* 00749f6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749f74: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749f79u); f_0068cde0();
    /* 00749f79: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_00749f7c:; BB(0x00749f7c);
    /* 00749f7c: movzx eax, byte ptr [ebx + 0x48] */ r_eax = (u32)R8((u32)(r_ebx+0x48u));
    /* 00749f80: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f82: jne 0x749fa3 */ if (!fZ) goto L_00749fa3;
L_00749f84:; BB(0x00749f84);
    /* 00749f84: movzx ecx, byte ptr [ebx + 0x49] */ r_ecx = (u32)R8((u32)(r_ebx+0x49u));
    /* 00749f88: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00749f8c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749f8e: jne 0x749fa3 */ if (!fZ) goto L_00749fa3;
L_00749f90:; BB(0x00749f90);
    /* 00749f90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749f92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749f96: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00749f98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00749f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749f9b: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749fa0u); f_0068cde0();
    /* 00749fa0: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_00749fa3:; BB(0x00749fa3);
    /* 00749fa3: movzx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)R8((u32)(r_ebx+0x44u));
    /* 00749fa7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00749fa9: jne 0x749fc7 */ if (!fZ) goto L_00749fc7;
L_00749fab:; BB(0x00749fab);
    /* 00749fab: movzx edx, byte ptr [ebx + 0x45] */ r_edx = (u32)R8((u32)(r_ebx+0x45u));
    /* 00749faf: movzx esi, word ptr [esi + 2] */ r_esi = (u32)R16((u32)(r_esi+0x2u));
    /* 00749fb3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00749fb5: jne 0x749fc7 */ if (!fZ) goto L_00749fc7;
L_00749fb7:; BB(0x00749fb7);
    /* 00749fb7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00749fb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749fba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749fbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00749fbd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00749fbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00749fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749fc2: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x749fc7u); f_0068cde0();
L_00749fc7:; BB(0x00749fc7);
    /* 00749fc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00749fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00749fc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00749fca: ret 4 */ FN_RET(0x00749eac); r_esp += 8; return;
}

void f_00749fd0(void) /* sub_749FD0 */
{
    FN_ENTER(0x00749fd0);
    /* 00749fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749fd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749fd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00749fd4: mov edi, ecx */ r_edi = r_ecx;
    /* 00749fd6: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00749fda: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00749fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749fdf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x749fe4u); f_0068d5a8();
    /* 00749fe4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00749fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749fe7: je 0x74a03f */ if (fZ) goto L_0074a03f;
L_00749fe9:; BB(0x00749fe9);
    /* 00749fe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00749feb: mov ecx, eax */ r_ecx = r_eax;
    /* 00749fed: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x749ff2u); f_006893f0();
    /* 00749ff2: mov ebp, eax */ r_ebp = r_eax;
    /* 00749ff4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749ff6: je 0x74a03f */ if (fZ) goto L_0074a03f;
L_00749ff8:; BB(0x00749ff8);
    /* 00749ff8: movsx edx, byte ptr [edi + 0x62] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x62u));
    /* 00749ffc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749ffd: mov ecx, edi */ r_ecx = r_edi;
    /* 00749fff: call 0x749e6c */ r_esp -= 4; W32(r_esp, 0x74a004u); f_00749e6c();
    /* 0074a004: movsx edx, byte ptr [edi + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 0074a008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a009: mov ebx, eax */ r_ebx = r_eax;
    /* 0074a00b: mov ecx, edi */ r_ecx = r_edi;
    /* 0074a00d: call 0x749e84 */ r_esp -= 4; W32(r_esp, 0x74a012u); f_00749e84();
    /* 0074a012: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a014: jne 0x74a01b */ if (!fZ) goto L_0074a01b;
L_0074a016:; BB(0x0074a016);
    /* 0074a016: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 0074a019: jmp 0x74a01e */ goto L_0074a01e;
L_0074a01b:; BB(0x0074a01b);
    /* 0074a01b: lea edx, [ebp + 0x3c] */ r_edx = (u32)(r_ebp+0x3cu);
L_0074a01e:; BB(0x0074a01e);
    /* 0074a01e: movzx edx, byte ptr [edx + eax*4] */ r_edx = (u32)R8((u32)(r_edx+r_eax*4));
    /* 0074a022: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 0074a025: jne 0x74a02c */ if (!fZ) goto L_0074a02c;
L_0074a027:; BB(0x0074a027);
    /* 0074a027: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a02a: jmp 0x74a02f */ goto L_0074a02f;
L_0074a02c:; BB(0x0074a02c);
    /* 0074a02c: add ebp, 0x3c */ {  u32 a = r_ebp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0074a02f:; BB(0x0074a02f);
    /* 0074a02f: movzx eax, byte ptr [ebp + eax*4 + 1] */ r_eax = (u32)R8((u32)(r_ebp+r_eax*4+0x1u));
    /* 0074a034: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 0074a038: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a039: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a03a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074a03b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a03c: ret 4 */ FN_RET(0x00749fd0); r_esp += 8; return;
L_0074a03f:; BB(0x0074a03f);
    /* 0074a03f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a041: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0074a044: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 0074a048: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a04a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074a04b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a04c: ret 4 */ FN_RET(0x00749fd0); r_esp += 8; return;
}

