#include "protos.h"

void f_006de13c(void) /* sub_6DE13C */
{
    FN_ENTER(0x006de13c);
    /* 006de13c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006de13d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006de13e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006de141: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006de143: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 006de14a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de14b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6de150u); f_007b4d18();
    /* 006de150: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006de151: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006de154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de156: je 0x6de29f */ if (fZ) goto L_006de29f;
L_006de15c:; BB(0x006de15c);
    /* 006de15c: movsx eax, word ptr [ebx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc6u));
    /* 006de163: mov esi, dword ptr [eax*8 + 0x96ca88] */ r_esi = R32((u32)(r_eax*8+0x96ca88u));
    /* 006de16a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006de16c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006de16e: jbe 0x6de1fe */ if ((fC||fZ)) goto L_006de1fe;
L_006de174:; BB(0x006de174);
    /* 006de174: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 006de178: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 006de17c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006de17f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006de181: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006de184: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006de186: mov ebp, edx */ r_ebp = r_edx;
L_006de188:; BB(0x006de188);
    /* 006de188: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 006de18b: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 006de18e: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 006de191: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006de194: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 006de197: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006de19b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006de19f: mov ecx, dword ptr [eax*8 + 0x96ca84] */ r_ecx = R32((u32)(r_eax*8+0x96ca84u));
    /* 006de1a6: mov ecx, dword ptr [ecx + esi + 4] */ r_ecx = R32((u32)(r_ecx+r_esi+0x4u));
    /* 006de1aa: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006de1ad: je 0x6de1bb */ if (fZ) goto L_006de1bb;
L_006de1af:; BB(0x006de1af);
    /* 006de1af: fld dword ptr [0x96c9a8] */ FPUSH(R_F32((u32)(0x96c9a8u)));
    /* 006de1b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006de1b7: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
L_006de1bb:; BB(0x006de1bb);
    /* 006de1bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006de1bd: mov ecx, dword ptr [ebx + 0x130] */ r_ecx = R32((u32)(r_ebx+0x130u));
    /* 006de1c3: mov ecx, dword ptr [ecx + ebp*4] */ r_ecx = R32((u32)(r_ecx+r_ebp*4));
    /* 006de1c6: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 006de1ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de1cc: je 0x6de1de */ if (fZ) goto L_006de1de;
L_006de1ce:; BB(0x006de1ce);
    /* 006de1ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006de1d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de1d2: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6de1d7u); f_00508db8();
    /* 006de1d7: movsx eax, word ptr [ebx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc6u));
L_006de1de:; BB(0x006de1de);
    /* 006de1de: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de1e1: je 0x6de270 */ if (fZ) goto L_006de270;
L_006de1e7:; BB(0x006de1e7);
    /* 006de1e7: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006de1ea: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006de1ed: cmp ebp, dword ptr [eax*8 + 0x96ca88] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*8+0x96ca88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006de1f4: jb 0x6de188 */ if (fC) goto L_006de188;
L_006de1f6:; BB(0x006de1f6);
    /* 006de1f6: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006de1fa: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_006de1fe:; BB(0x006de1fe);
    /* 006de1fe: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de201: je 0x6de21e */ if (fZ) goto L_006de21e;
L_006de203:; BB(0x006de203);
    /* 006de203: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006de205: call 0x6f0560 */ r_esp -= 4; W32(r_esp, 0x6de20au); f_006f0560();
    /* 006de20a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006de20c: call 0x6f053c */ r_esp -= 4; W32(r_esp, 0x6de211u); f_006f053c();
    /* 006de211: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006de213: call 0x6f06c4 */ r_esp -= 4; W32(r_esp, 0x6de218u); f_006f06c4();
    /* 006de218: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006de21b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006de21c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006de21d: ret  */ FN_RET(0x006de13c); r_esp += 4; return;
L_006de21e:; BB(0x006de21e);
    /* 006de21e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006de220: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006de222: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 006de225: push 0x18a */ { u32 v = 0x18au; r_esp -= 4; W32(r_esp, v); }
    /* 006de22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de22b: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6de230u); f_0050a984();
    /* 006de230: mov esi, eax */ r_esi = r_eax;
    /* 006de232: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de235: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de237: je 0x6de203 */ if (fZ) goto L_006de203;
L_006de239:; BB(0x006de239);
    /* 006de239: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006de23f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006de241: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6de246u); f_005b8610();
    /* 006de246: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006de24c: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 006de253: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 006de256: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 006de259: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 006de25d: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006de264: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006de26a: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 006de26e: jmp 0x6de203 */ goto L_006de203;
L_006de270:; BB(0x006de270);
    /* 006de270: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de273: jne 0x6de1e7 */ if (!fZ) goto L_006de1e7;
L_006de279:; BB(0x006de279);
    /* 006de279: mov ecx, dword ptr [ebx + 0x130] */ r_ecx = R32((u32)(r_ebx+0x130u));
    /* 006de27f: mov ecx, dword ptr [ecx + edi*2] */ r_ecx = R32((u32)(r_ecx+r_edi*2));
    /* 006de282: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de284: je 0x6de1e7 */ if (fZ) goto L_006de1e7;
L_006de28a:; BB(0x006de28a);
    /* 006de28a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006de28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de28e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6de293u); f_00508db8();
    /* 006de293: movsx eax, word ptr [ebx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc6u));
    /* 006de29a: jmp 0x6de1e7 */ goto L_006de1e7;
L_006de29f:; BB(0x006de29f);
    /* 006de29f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006de2a3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006de2a8: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006de2ac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006de2af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006de2b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006de2b1: ret  */ FN_RET(0x006de13c); r_esp += 4; return;
}

void f_006de2b4(void) /* sub_6DE2B4 */
{
    FN_ENTER(0x006de2b4);
    /* 006de2b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006de2b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006de2b6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006de2b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006de2bb: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006de2bf: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006de2c3: movzx edi, word ptr [ebx + 0x134] */ r_edi = (u32)R16((u32)(r_ebx+0x134u));
    /* 006de2ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006de2cc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de2ce: jne 0x6de2d5 */ if (!fZ) goto L_006de2d5;
L_006de2d0:; BB(0x006de2d0);
    /* 006de2d0: mov eax, 1 */ r_eax = 0x1u;
L_006de2d5:; BB(0x006de2d5);
    /* 006de2d5: movzx edi, word ptr [ebx + 0x136] */ r_edi = (u32)R16((u32)(r_ebx+0x136u));
    /* 006de2dc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de2de: jne 0x6de2e5 */ if (!fZ) goto L_006de2e5;
L_006de2e0:; BB(0x006de2e0);
    /* 006de2e0: mov eax, 1 */ r_eax = 0x1u;
L_006de2e5:; BB(0x006de2e5);
    /* 006de2e5: movzx edi, word ptr [ebx + 0x138] */ r_edi = (u32)R16((u32)(r_ebx+0x138u));
    /* 006de2ec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de2ee: jne 0x6de2f5 */ if (!fZ) goto L_006de2f5;
L_006de2f0:; BB(0x006de2f0);
    /* 006de2f0: mov eax, 1 */ r_eax = 0x1u;
L_006de2f5:; BB(0x006de2f5);
    /* 006de2f5: movzx edi, word ptr [ebx + 0x13a] */ r_edi = (u32)R16((u32)(r_ebx+0x13au));
    /* 006de2fc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de2fe: jne 0x6de305 */ if (!fZ) goto L_006de305;
L_006de300:; BB(0x006de300);
    /* 006de300: mov eax, 1 */ r_eax = 0x1u;
L_006de305:; BB(0x006de305);
    /* 006de305: movzx edi, word ptr [ebx + 0x13c] */ r_edi = (u32)R16((u32)(r_ebx+0x13cu));
    /* 006de30c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de30e: jne 0x6de315 */ if (!fZ) goto L_006de315;
L_006de310:; BB(0x006de310);
    /* 006de310: mov eax, 1 */ r_eax = 0x1u;
L_006de315:; BB(0x006de315);
    /* 006de315: movzx edi, word ptr [ebx + 0x13e] */ r_edi = (u32)R16((u32)(r_ebx+0x13eu));
    /* 006de31c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de31e: jne 0x6de325 */ if (!fZ) goto L_006de325;
L_006de320:; BB(0x006de320);
    /* 006de320: mov eax, 1 */ r_eax = 0x1u;
L_006de325:; BB(0x006de325);
    /* 006de325: movzx edi, word ptr [ebx + 0x140] */ r_edi = (u32)R16((u32)(r_ebx+0x140u));
    /* 006de32c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de32e: jne 0x6de335 */ if (!fZ) goto L_006de335;
L_006de330:; BB(0x006de330);
    /* 006de330: mov eax, 1 */ r_eax = 0x1u;
L_006de335:; BB(0x006de335);
    /* 006de335: movzx edi, word ptr [ebx + 0x142] */ r_edi = (u32)R16((u32)(r_ebx+0x142u));
    /* 006de33c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de33e: jne 0x6de345 */ if (!fZ) goto L_006de345;
L_006de340:; BB(0x006de340);
    /* 006de340: mov eax, 1 */ r_eax = 0x1u;
L_006de345:; BB(0x006de345);
    /* 006de345: movzx edi, word ptr [ebx + 0x144] */ r_edi = (u32)R16((u32)(r_ebx+0x144u));
    /* 006de34c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de34e: jne 0x6de355 */ if (!fZ) goto L_006de355;
L_006de350:; BB(0x006de350);
    /* 006de350: mov eax, 1 */ r_eax = 0x1u;
L_006de355:; BB(0x006de355);
    /* 006de355: movzx edi, word ptr [ebx + 0x146] */ r_edi = (u32)R16((u32)(r_ebx+0x146u));
    /* 006de35c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de35e: jne 0x6de365 */ if (!fZ) goto L_006de365;
L_006de360:; BB(0x006de360);
    /* 006de360: mov eax, 1 */ r_eax = 0x1u;
L_006de365:; BB(0x006de365);
    /* 006de365: movzx edi, word ptr [ebx + 0x148] */ r_edi = (u32)R16((u32)(r_ebx+0x148u));
    /* 006de36c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de36e: jne 0x6de375 */ if (!fZ) goto L_006de375;
L_006de370:; BB(0x006de370);
    /* 006de370: mov eax, 1 */ r_eax = 0x1u;
L_006de375:; BB(0x006de375);
    /* 006de375: movzx edi, word ptr [ebx + 0x14a] */ r_edi = (u32)R16((u32)(r_ebx+0x14au));
    /* 006de37c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de37e: jne 0x6de385 */ if (!fZ) goto L_006de385;
L_006de380:; BB(0x006de380);
    /* 006de380: mov eax, 1 */ r_eax = 0x1u;
L_006de385:; BB(0x006de385);
    /* 006de385: movzx edi, word ptr [ebx + 0x14c] */ r_edi = (u32)R16((u32)(r_ebx+0x14cu));
    /* 006de38c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de38e: jne 0x6de395 */ if (!fZ) goto L_006de395;
L_006de390:; BB(0x006de390);
    /* 006de390: mov eax, 1 */ r_eax = 0x1u;
L_006de395:; BB(0x006de395);
    /* 006de395: movzx edi, word ptr [ebx + 0x14e] */ r_edi = (u32)R16((u32)(r_ebx+0x14eu));
    /* 006de39c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de39e: jne 0x6de3a5 */ if (!fZ) goto L_006de3a5;
L_006de3a0:; BB(0x006de3a0);
    /* 006de3a0: mov eax, 1 */ r_eax = 0x1u;
L_006de3a5:; BB(0x006de3a5);
    /* 006de3a5: movzx edi, word ptr [ebx + 0x150] */ r_edi = (u32)R16((u32)(r_ebx+0x150u));
    /* 006de3ac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3ae: jne 0x6de3b5 */ if (!fZ) goto L_006de3b5;
L_006de3b0:; BB(0x006de3b0);
    /* 006de3b0: mov eax, 1 */ r_eax = 0x1u;
L_006de3b5:; BB(0x006de3b5);
    /* 006de3b5: movzx edi, word ptr [ebx + 0x152] */ r_edi = (u32)R16((u32)(r_ebx+0x152u));
    /* 006de3bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3be: jne 0x6de3c5 */ if (!fZ) goto L_006de3c5;
L_006de3c0:; BB(0x006de3c0);
    /* 006de3c0: mov eax, 1 */ r_eax = 0x1u;
L_006de3c5:; BB(0x006de3c5);
    /* 006de3c5: movzx edi, word ptr [ebx + 0x154] */ r_edi = (u32)R16((u32)(r_ebx+0x154u));
    /* 006de3cc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3ce: jne 0x6de3d5 */ if (!fZ) goto L_006de3d5;
L_006de3d0:; BB(0x006de3d0);
    /* 006de3d0: mov eax, 1 */ r_eax = 0x1u;
L_006de3d5:; BB(0x006de3d5);
    /* 006de3d5: movzx edi, word ptr [ebx + 0x156] */ r_edi = (u32)R16((u32)(r_ebx+0x156u));
    /* 006de3dc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3de: jne 0x6de3e5 */ if (!fZ) goto L_006de3e5;
L_006de3e0:; BB(0x006de3e0);
    /* 006de3e0: mov eax, 1 */ r_eax = 0x1u;
L_006de3e5:; BB(0x006de3e5);
    /* 006de3e5: movzx edi, word ptr [ebx + 0x158] */ r_edi = (u32)R16((u32)(r_ebx+0x158u));
    /* 006de3ec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3ee: jne 0x6de3f5 */ if (!fZ) goto L_006de3f5;
L_006de3f0:; BB(0x006de3f0);
    /* 006de3f0: mov eax, 1 */ r_eax = 0x1u;
L_006de3f5:; BB(0x006de3f5);
    /* 006de3f5: movzx edi, word ptr [ebx + 0x15a] */ r_edi = (u32)R16((u32)(r_ebx+0x15au));
    /* 006de3fc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de3fe: jne 0x6de405 */ if (!fZ) goto L_006de405;
L_006de400:; BB(0x006de400);
    /* 006de400: mov eax, 1 */ r_eax = 0x1u;
L_006de405:; BB(0x006de405);
    /* 006de405: movzx edi, word ptr [ebx + 0x15c] */ r_edi = (u32)R16((u32)(r_ebx+0x15cu));
    /* 006de40c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de40e: jne 0x6de415 */ if (!fZ) goto L_006de415;
L_006de410:; BB(0x006de410);
    /* 006de410: mov eax, 1 */ r_eax = 0x1u;
L_006de415:; BB(0x006de415);
    /* 006de415: movzx edi, word ptr [ebx + 0x15e] */ r_edi = (u32)R16((u32)(r_ebx+0x15eu));
    /* 006de41c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de41e: jne 0x6de425 */ if (!fZ) goto L_006de425;
L_006de420:; BB(0x006de420);
    /* 006de420: mov eax, 1 */ r_eax = 0x1u;
L_006de425:; BB(0x006de425);
    /* 006de425: movzx edi, word ptr [ebx + 0x160] */ r_edi = (u32)R16((u32)(r_ebx+0x160u));
    /* 006de42c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de42e: jne 0x6de435 */ if (!fZ) goto L_006de435;
L_006de430:; BB(0x006de430);
    /* 006de430: mov eax, 1 */ r_eax = 0x1u;
L_006de435:; BB(0x006de435);
    /* 006de435: movzx edi, word ptr [ebx + 0x162] */ r_edi = (u32)R16((u32)(r_ebx+0x162u));
    /* 006de43c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de43e: jne 0x6de445 */ if (!fZ) goto L_006de445;
L_006de440:; BB(0x006de440);
    /* 006de440: mov eax, 1 */ r_eax = 0x1u;
L_006de445:; BB(0x006de445);
    /* 006de445: movzx edi, word ptr [ebx + 0x164] */ r_edi = (u32)R16((u32)(r_ebx+0x164u));
    /* 006de44c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de44e: jne 0x6de455 */ if (!fZ) goto L_006de455;
L_006de450:; BB(0x006de450);
    /* 006de450: mov eax, 1 */ r_eax = 0x1u;
L_006de455:; BB(0x006de455);
    /* 006de455: movzx edi, word ptr [ebx + 0x166] */ r_edi = (u32)R16((u32)(r_ebx+0x166u));
    /* 006de45c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de45e: jne 0x6de465 */ if (!fZ) goto L_006de465;
L_006de460:; BB(0x006de460);
    /* 006de460: mov eax, 1 */ r_eax = 0x1u;
L_006de465:; BB(0x006de465);
    /* 006de465: movzx edi, word ptr [ebx + 0x168] */ r_edi = (u32)R16((u32)(r_ebx+0x168u));
    /* 006de46c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de46e: jne 0x6de475 */ if (!fZ) goto L_006de475;
L_006de470:; BB(0x006de470);
    /* 006de470: mov eax, 1 */ r_eax = 0x1u;
L_006de475:; BB(0x006de475);
    /* 006de475: movzx edi, word ptr [ebx + 0x16a] */ r_edi = (u32)R16((u32)(r_ebx+0x16au));
    /* 006de47c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de47e: jne 0x6de485 */ if (!fZ) goto L_006de485;
L_006de480:; BB(0x006de480);
    /* 006de480: mov eax, 1 */ r_eax = 0x1u;
L_006de485:; BB(0x006de485);
    /* 006de485: movzx edi, word ptr [ebx + 0x16c] */ r_edi = (u32)R16((u32)(r_ebx+0x16cu));
    /* 006de48c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de48e: jne 0x6de495 */ if (!fZ) goto L_006de495;
L_006de490:; BB(0x006de490);
    /* 006de490: mov eax, 1 */ r_eax = 0x1u;
L_006de495:; BB(0x006de495);
    /* 006de495: movzx edi, word ptr [ebx + 0x16e] */ r_edi = (u32)R16((u32)(r_ebx+0x16eu));
    /* 006de49c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de49e: jne 0x6de4a5 */ if (!fZ) goto L_006de4a5;
L_006de4a0:; BB(0x006de4a0);
    /* 006de4a0: mov eax, 1 */ r_eax = 0x1u;
L_006de4a5:; BB(0x006de4a5);
    /* 006de4a5: movzx edi, word ptr [ebx + 0x170] */ r_edi = (u32)R16((u32)(r_ebx+0x170u));
    /* 006de4ac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de4ae: jne 0x6de4b5 */ if (!fZ) goto L_006de4b5;
L_006de4b0:; BB(0x006de4b0);
    /* 006de4b0: mov eax, 1 */ r_eax = 0x1u;
L_006de4b5:; BB(0x006de4b5);
    /* 006de4b5: movzx edi, word ptr [ebx + 0x172] */ r_edi = (u32)R16((u32)(r_ebx+0x172u));
    /* 006de4bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de4be: jne 0x6de4c5 */ if (!fZ) goto L_006de4c5;
L_006de4c0:; BB(0x006de4c0);
    /* 006de4c0: mov eax, 1 */ r_eax = 0x1u;
L_006de4c5:; BB(0x006de4c5);
    /* 006de4c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de4c7: jne 0x6de51f */ if (!fZ) goto L_006de51f;
L_006de4c9:; BB(0x006de4c9);
    /* 006de4c9: mov eax, dword ptr [ebx + 0x174] */ r_eax = R32((u32)(r_ebx+0x174u));
    /* 006de4cf: mov word ptr [ebx + eax*2 + 0x134], dx */ W16((u32)(r_ebx+r_eax*2+0x134u), (u16)r_edx);
    /* 006de4d7: mov eax, dword ptr [ebx + 0x174] */ r_eax = R32((u32)(r_ebx+0x174u));
    /* 006de4dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006de4e0: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006de4e3: jl 0x6de4f1 */ if ((fS!=fO)) goto L_006de4f1;
L_006de4e5:; BB(0x006de4e5);
    /* 006de4e5: mov dword ptr [ebx + 0x174], 0x1f */ W32((u32)(r_ebx+0x174u), 0x1fu);
    /* 006de4ef: jmp 0x6de4f7 */ goto L_006de4f7;
L_006de4f1:; BB(0x006de4f1);
    /* 006de4f1: mov dword ptr [ebx + 0x174], eax */ W32((u32)(r_ebx+0x174u), r_eax);
L_006de4f7:; BB(0x006de4f7);
    /* 006de4f7: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 006de4fd: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006de4ff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006de503: mov dword ptr [esp], 0x13 */ W32((u32)(r_esp), 0x13u);
    /* 006de50a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006de50c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006de50e: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006de514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de515: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 006de517: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006de51a: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x6de51du); call_ind(t); }
    /* 006de51d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006de51f:; BB(0x006de51f);
    /* 006de51f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006de522: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006de523: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006de524: ret 4 */ FN_RET(0x006de2b4); r_esp += 8; return;
}

void f_006de528(void) /* sub_6DE528 */
{
    FN_ENTER(0x006de528);
    /* 006de528: mov dword ptr [0xa963d0], 0x3f800000 */ W32((u32)(0xa963d0u), 0x3f800000u);
    /* 006de532: mov dword ptr [0xa963d4], 0x41000000 */ W32((u32)(0xa963d4u), 0x41000000u);
    /* 006de53c: mov dword ptr [0xa963d8], 0x3fc00000 */ W32((u32)(0xa963d8u), 0x3fc00000u);
    /* 006de546: ret  */ FN_RET(0x006de528); r_esp += 4; return;
}

void f_006de548(void) /* sub_6DE548 */
{
    FN_ENTER(0x006de548);
    /* 006de548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006de549: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006de54b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006de54d: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6de552u); f_006de56c();
    /* 006de552: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006de556: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006de558: jne 0x6de55e */ if (!fZ) goto L_006de55e;
L_006de55a:; BB(0x006de55a);
    /* 006de55a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006de55b: ret 4 */ FN_RET(0x006de548); r_esp += 8; return;
L_006de55e:; BB(0x006de55e);
    /* 006de55e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006de55f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6de564u); f_005c2f74();
    /* 006de564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006de565: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006de566: ret 4 */ FN_RET(0x006de548); r_esp += 8; return;
}

void f_006de56c(void) /* sub_6DE56C */
{
    FN_ENTER(0x006de56c);
    /* 006de56c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006de56d: mov ebp, esp */ r_ebp = r_esp;
    /* 006de56f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006de571: push 0x8ee644 */ { u32 v = 0x8ee644u; r_esp -= 4; W32(r_esp, v); }
    /* 006de576: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006de57c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de57d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006de584: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006de587: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006de58a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006de58d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006de590: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006de593: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006de596: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006de59d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de5a0: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 006de5a6: mov dword ptr [eax], 0xb3cec8 */ W32((u32)(r_eax), 0xb3cec8u);
    /* 006de5ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de5ae: je 0x6de5b8 */ if (fZ) goto L_006de5b8;
L_006de5b0:; BB(0x006de5b0);
    /* 006de5b0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6de5b5u); f_007b9c8c();
    /* 006de5b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006de5b8:; BB(0x006de5b8);
    /* 006de5b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006de5bf: mov ecx, eax */ r_ecx = r_eax;
    /* 006de5c1: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x6de5c6u); f_005017b0();
    /* 006de5c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006de5c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006de5d0: mov esp, ebp */ r_esp = r_ebp;
    /* 006de5d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006de5d3: ret  */ FN_RET(0x006de56c); r_esp += 4; return;
}

void f_006de5d4(void) /* sub_6DE5D4 */
{
    FN_ENTER(0x006de5d4);
    /* 006de5d4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006de5d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006de5dc: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 006de5de: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006de5e1: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 006de5e3: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 006de5e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006de5e9: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 006de5ec: ret 8 */ FN_RET(0x006de5d4); r_esp += 12; return;
}

void f_006de5f0(void) /* sub_6DE5F0 */
{
    FN_ENTER(0x006de5f0);
    /* 006de5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006de5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006de5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006de5f5: push 0x8ee67a */ { u32 v = 0x8ee67au; r_esp -= 4; W32(r_esp, v); }
    /* 006de5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006de600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de601: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006de608: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006de60b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006de60e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006de611: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006de614: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006de617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006de61a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006de61d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006de620: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006de623: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006de626: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006de629: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006de62c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006de62f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006de632: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x6de637u); f_00501860();
    /* 006de637: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006de63e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006de641: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006de644: mov dword ptr [eax], 0xb3cec8 */ W32((u32)(r_eax), 0xb3cec8u);
    /* 006de64a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006de64f: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
    /* 006de656: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006de658: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006de65b: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 006de65e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006de661: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 006de664: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006de667: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 006de66a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006de66c: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 006de66f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006de672: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 006de678: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006de67b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006de67e: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 006de684: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006de686: mov dword ptr [eax + 0x3c], 0x3f800000 */ W32((u32)(r_eax+0x3cu), 0x3f800000u);
    /* 006de68d: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 006de690: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 006de696: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de699: mov dword ptr [eax + 0x40], 0x3f800000 */ W32((u32)(r_eax+0x40u), 0x3f800000u);
    /* 006de6a0: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006de6a3: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006de6a8: mov dword ptr [eax + 0x44], 0x3f800000 */ W32((u32)(r_eax+0x44u), 0x3f800000u);
    /* 006de6af: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006de6b2: jl 0x6de6b6 */ if ((fS!=fO)) goto L_006de6b6;
L_006de6b4:; BB(0x006de6b4);
    /* 006de6b4: mov ecx, edx */ r_ecx = r_edx;
L_006de6b6:; BB(0x006de6b6);
    /* 006de6b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006de6b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006de6ba: jg 0x6de6be */ if ((!fZ&&fS==fO)) goto L_006de6be;
L_006de6bc:; BB(0x006de6bc);
    /* 006de6bc: mov ecx, edx */ r_ecx = r_edx;
L_006de6be:; BB(0x006de6be);
    /* 006de6be: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006de6c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de6c2: mov word ptr [eax + 0x78], dx */ W16((u32)(r_eax+0x78u), (u16)r_edx);
    /* 006de6c6: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6de6cbu); f_006e1cec();
    /* 006de6cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006de6cc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006de6cf: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006de6d2: mov dword ptr [ecx + 0x2c], 0x3e4ccccd */ W32((u32)(r_ecx+0x2cu), 0x3e4ccccdu);
    /* 006de6d9: mov word ptr [ecx + 0x7a], ax */ W16((u32)(r_ecx+0x7au), (u16)r_eax);
    /* 006de6dd: mov dword ptr [ecx + 0x30], 0x3f800000 */ W32((u32)(r_ecx+0x30u), 0x3f800000u);
    /* 006de6e4: mov dword ptr [ecx + 0x34], 0x3f800000 */ W32((u32)(r_ecx+0x34u), 0x3f800000u);
    /* 006de6eb: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 006de6f2: mov dword ptr [ecx + 0x64], 0x40400000 */ W32((u32)(r_ecx+0x64u), 0x40400000u);
    /* 006de6f9: mov dword ptr [ecx + 0x70], 0x43160000 */ W32((u32)(r_ecx+0x70u), 0x43160000u);
    /* 006de700: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 006de70a: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 006de714: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 006de71e: mov dword ptr [ecx + 0xc8], 0x41200000 */ W32((u32)(r_ecx+0xc8u), 0x41200000u);
    /* 006de728: mov dword ptr [ecx + 0xcc], 0x3f800000 */ W32((u32)(r_ecx+0xccu), 0x3f800000u);
    /* 006de732: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 006de73c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006de740: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006de743: jl 0x6de751 */ if ((fS!=fO)) goto L_006de751;
L_006de745:; BB(0x006de745);
    /* 006de745: mov dword ptr [ecx + 0xd4], 0x40007 */ W32((u32)(r_ecx+0xd4u), 0x40007u);
    /* 006de74f: jmp 0x6de771 */ goto L_006de771;
L_006de751:; BB(0x006de751);
    /* 006de751: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006de757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de759: je 0x6de767 */ if (fZ) goto L_006de767;
L_006de75b:; BB(0x006de75b);
    /* 006de75b: mov dword ptr [ecx + 0xd4], 0x40007 */ W32((u32)(r_ecx+0xd4u), 0x40007u);
    /* 006de765: jmp 0x6de771 */ goto L_006de771;
L_006de767:; BB(0x006de767);
    /* 006de767: mov dword ptr [ecx + 0xd4], 0x40107 */ W32((u32)(r_ecx+0xd4u), 0x40107u);
L_006de771:; BB(0x006de771);
    /* 006de771: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006de778: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006de77d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6de782u); f_005caba4();
    /* 006de782: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006de785: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de788: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006de78b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de78d: je 0x6de7f3 */ if (fZ) goto L_006de7f3;
L_006de78f:; BB(0x006de78f);
    /* 006de78f: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006de796: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006de79d: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006de7a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006de7a2: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6de7a7u); f_007b4b48();
    /* 006de7a7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006de7ae:; BB(0x006de7ae);
    /* 006de7ae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006de7b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006de7b4: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 006de7ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006de7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006de7c3: je 0x6de7d8 */ if (fZ) goto L_006de7d8;
L_006de7c5:; BB(0x006de7c5);
    /* 006de7c5: mov ecx, eax */ r_ecx = r_eax;
    /* 006de7c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006de7c9: add edx, 0xbc */ {  u32 a = r_edx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006de7cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de7d0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6de7d5u); f_007b9a88();
    /* 006de7d5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006de7d8:; BB(0x006de7d8);
    /* 006de7d8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006de7db: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006de7de: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006de7e1: mov eax, edx */ r_eax = r_edx;
    /* 006de7e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006de7e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006de7ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006de7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006de7f0: ret 0x10 */ FN_RET(0x006de5f0); r_esp += 20; return;
L_006de7f3:; BB(0x006de7f3);
    /* 006de7f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006de7f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006de7f8: jmp 0x6de7ae */ goto L_006de7ae;
}

void f_006de7fc(void) /* sub_6DE7FC */
{
    FN_ENTER(0x006de7fc);
    /* 006de7fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006de7fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006de7ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006de801: push 0x8ee6ae */ { u32 v = 0x8ee6aeu; r_esp -= 4; W32(r_esp, v); }
    /* 006de806: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006de80c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006de80d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006de814: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006de817: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006de81a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006de81d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006de820: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006de823: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006de826: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006de829: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006de82c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006de82f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006de832: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006de835: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006de838: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x6de83du); f_00501860();
    /* 006de83d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006de844: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006de847: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006de84a: mov dword ptr [eax], 0xb3cec8 */ W32((u32)(r_eax), 0xb3cec8u);
    /* 006de850: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006de855: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
    /* 006de85c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006de85e: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006de861: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 006de864: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006de867: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 006de86a: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006de86d: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 006de870: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006de872: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 006de878: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 006de87f: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 006de882: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006de885: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 006de88f: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006de892: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006de897: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006de89a: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 006de8a4: mov dword ptr [eax + 0x3c], 0x3f800000 */ W32((u32)(r_eax+0x3cu), 0x3f800000u);
    /* 006de8ab: mov dword ptr [eax + 0x40], 0x3f800000 */ W32((u32)(r_eax+0x40u), 0x3f800000u);
    /* 006de8b2: mov dword ptr [eax + 0x44], 0x3f800000 */ W32((u32)(r_eax+0x44u), 0x3f800000u);
    /* 006de8b9: jl 0x6de8bd */ if ((fS!=fO)) goto L_006de8bd;
L_006de8bb:; BB(0x006de8bb);
    /* 006de8bb: mov ecx, edx */ r_ecx = r_edx;
L_006de8bd:; BB(0x006de8bd);
    /* 006de8bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006de8bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006de8c1: jg 0x6de8c5 */ if ((!fZ&&fS==fO)) goto L_006de8c5;
L_006de8c3:; BB(0x006de8c3);
    /* 006de8c3: mov ecx, edx */ r_ecx = r_edx;
L_006de8c5:; BB(0x006de8c5);
    /* 006de8c5: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006de8c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de8c9: mov word ptr [eax + 0x78], dx */ W16((u32)(r_eax+0x78u), (u16)r_edx);
    /* 006de8cd: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6de8d2u); f_006e1cec();
    /* 006de8d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006de8d3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006de8d6: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006de8d9: mov dword ptr [ecx + 0x2c], 0x3e4ccccd */ W32((u32)(r_ecx+0x2cu), 0x3e4ccccdu);
    /* 006de8e0: mov word ptr [ecx + 0x7a], ax */ W16((u32)(r_ecx+0x7au), (u16)r_eax);
    /* 006de8e4: mov dword ptr [ecx + 0x30], 0x3f800000 */ W32((u32)(r_ecx+0x30u), 0x3f800000u);
    /* 006de8eb: mov dword ptr [ecx + 0x34], 0x3f800000 */ W32((u32)(r_ecx+0x34u), 0x3f800000u);
    /* 006de8f2: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 006de8f9: mov dword ptr [ecx + 0x64], 0x40400000 */ W32((u32)(r_ecx+0x64u), 0x40400000u);
    /* 006de900: mov dword ptr [ecx + 0x70], 0x43160000 */ W32((u32)(r_ecx+0x70u), 0x43160000u);
    /* 006de907: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 006de911: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 006de91b: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 006de925: mov dword ptr [ecx + 0xc8], 0x41200000 */ W32((u32)(r_ecx+0xc8u), 0x41200000u);
    /* 006de92f: mov dword ptr [ecx + 0xcc], 0x3f800000 */ W32((u32)(r_ecx+0xccu), 0x3f800000u);
    /* 006de939: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 006de943: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006de947: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006de94a: jl 0x6de958 */ if ((fS!=fO)) goto L_006de958;
L_006de94c:; BB(0x006de94c);
    /* 006de94c: mov dword ptr [ecx + 0xd4], 0x40007 */ W32((u32)(r_ecx+0xd4u), 0x40007u);
    /* 006de956: jmp 0x6de978 */ goto L_006de978;
L_006de958:; BB(0x006de958);
    /* 006de958: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006de95e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de960: je 0x6de96e */ if (fZ) goto L_006de96e;
L_006de962:; BB(0x006de962);
    /* 006de962: mov dword ptr [ecx + 0xd4], 0x40007 */ W32((u32)(r_ecx+0xd4u), 0x40007u);
    /* 006de96c: jmp 0x6de978 */ goto L_006de978;
L_006de96e:; BB(0x006de96e);
    /* 006de96e: mov dword ptr [ecx + 0xd4], 0x40107 */ W32((u32)(r_ecx+0xd4u), 0x40107u);
L_006de978:; BB(0x006de978);
    /* 006de978: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006de97f: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006de984: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6de989u); f_005caba4();
    /* 006de989: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006de98c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de98f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006de992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de994: je 0x6de9fa */ if (fZ) goto L_006de9fa;
L_006de996:; BB(0x006de996);
    /* 006de996: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006de99d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006de9a4: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006de9a7: mov ecx, eax */ r_ecx = r_eax;
    /* 006de9a9: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6de9aeu); f_007b4b48();
    /* 006de9ae: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006de9b5:; BB(0x006de9b5);
    /* 006de9b5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006de9b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006de9bb: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 006de9c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006de9c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006de9ca: je 0x6de9df */ if (fZ) goto L_006de9df;
L_006de9cc:; BB(0x006de9cc);
    /* 006de9cc: mov ecx, eax */ r_ecx = r_eax;
    /* 006de9ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006de9d0: add edx, 0xbc */ {  u32 a = r_edx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006de9d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de9d7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6de9dcu); f_007b9a88();
    /* 006de9dc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
L_006de9df:; BB(0x006de9df);
    /* 006de9df: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006de9e2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006de9e5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de9e8: mov eax, edx */ r_eax = r_edx;
    /* 006de9ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006de9ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006de9f4: mov esp, ebp */ r_esp = r_ebp;
    /* 006de9f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006de9f7: ret 0xc */ FN_RET(0x006de7fc); r_esp += 16; return;
L_006de9fa:; BB(0x006de9fa);
    /* 006de9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006de9fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006de9ff: jmp 0x6de9b5 */ goto L_006de9b5;
}

void f_006dea04(void) /* sub_6DEA04 */
{
    FN_ENTER(0x006dea04);
    /* 006dea04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dea05: mov esi, ecx */ r_esi = r_ecx;
    /* 006dea07: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 006dea0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dea0c: jne 0x6dea1e */ if (!fZ) goto L_006dea1e;
L_006dea0e:; BB(0x006dea0e);
    /* 006dea0e: mov ecx, esi */ r_ecx = r_esi;
    /* 006dea10: call 0x6dea2c */ r_esp -= 4; W32(r_esp, 0x6dea15u); f_006dea2c();
    /* 006dea15: mov ecx, esi */ r_ecx = r_esi;
    /* 006dea17: call 0x6dea44 */ r_esp -= 4; W32(r_esp, 0x6dea1cu); f_006dea44();
    /* 006dea1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dea1d: ret  */ FN_RET(0x006dea04); r_esp += 4; return;
L_006dea1e:; BB(0x006dea1e);
    /* 006dea1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dea21: jne 0x6dea2a */ if (!fZ) goto L_006dea2a;
L_006dea23:; BB(0x006dea23);
    /* 006dea23: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006dea25: mov ecx, esi */ r_ecx = r_esi;
    /* 006dea27: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6dea2au); call_ind(t); }
L_006dea2a:; BB(0x006dea2a);
    /* 006dea2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dea2b: ret  */ FN_RET(0x006dea04); r_esp += 4; return;
}

void f_006dea2c(void) /* sub_6DEA2C */
{
    FN_ENTER(0x006dea2c);
    /* 006dea2c: lea eax, [ecx + 0x20] */ r_eax = (u32)(r_ecx+0x20u);
    /* 006dea2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dea30: lea edx, [ecx + 0x7c] */ r_edx = (u32)(r_ecx+0x7cu);
    /* 006dea33: push dword ptr [ecx + 0x64] */ { u32 v = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dea36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dea37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dea38: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x6dea3du); f_007a8f28();
    /* 006dea3d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006dea3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dea42: ret  */ FN_RET(0x006dea2c); r_esp += 4; return;
}

void f_006dea44(void) /* sub_6DEA44 */
{
    FN_ENTER(0x006dea44);
    /* 006dea44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dea45: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dea48: mov edi, ecx */ r_edi = r_ecx;
    /* 006dea4a: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 006dea4d: fsub dword ptr [edi + 0x7c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x7cu));
    /* 006dea50: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 006dea53: fsub dword ptr [edi + 0x80] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x80u));
    /* 006dea59: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 006dea5c: fsub dword ptr [edi + 0x84] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x84u));
    /* 006dea62: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006dea64: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006dea67: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006dea6b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006dea6f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006dea72: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6dea77u); f_0083173c();
    /* 006dea77: fcomp dword ptr [edi + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x64u))); FPOP();
    /* 006dea7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006dea7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006dea7d: ja 0x6dea83 */ if ((!fC&&!fZ)) goto L_006dea83;
L_006dea7f:; BB(0x006dea7f);
    /* 006dea7f: add dword ptr [edi + 0x6c], 1 */ { u32 ad = (u32)(r_edi+0x6cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006dea83:; BB(0x006dea83);
    /* 006dea83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dea86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dea87: ret  */ FN_RET(0x006dea44); r_esp += 4; return;
}

void f_006dea88(void) /* sub_6DEA88 */
{
    FN_ENTER(0x006dea88);
    /* 006dea88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dea89: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dea8c: mov esi, ecx */ r_esi = r_ecx;
    /* 006dea8e: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 006dea91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dea93: mov dword ptr [esp], 0x42480000 */ W32((u32)(r_esp), 0x42480000u);
    /* 006dea9a: mov dword ptr [esp + 4], 0x42480000 */ W32((u32)(r_esp+0x4u), 0x42480000u);
    /* 006deaa2: mov dword ptr [esp + 8], 0x42480000 */ W32((u32)(r_esp+0x8u), 0x42480000u);
    /* 006deaaa: je 0x6deac6 */ if (fZ) goto L_006deac6;
L_006deaac:; BB(0x006deaac);
    /* 006deaac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006deaaf: jne 0x6deac6 */ if (!fZ) goto L_006deac6;
L_006deab1:; BB(0x006deab1);
    /* 006deab1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006deab4: push 0x40300000 */ { u32 v = 0x40300000u; r_esp -= 4; W32(r_esp, v); }
    /* 006deab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006deaba: lea edx, [esi + 0x3c] */ r_edx = (u32)(r_esi+0x3cu);
    /* 006deabd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006deabe: call 0x501bb0 */ r_esp -= 4; W32(r_esp, 0x6deac3u); f_00501bb0();
    /* 006deac3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006deac6:; BB(0x006deac6);
    /* 006deac6: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 006deac9: lea eax, [esi + 0x2c] */ r_eax = (u32)(r_esi+0x2cu);
    /* 006deacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006deacd: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dead0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dead1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6dead6u); f_0061cdb0();
    /* 006dead6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dead9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006deada: ret  */ FN_RET(0x006dea88); r_esp += 4; return;
}

void f_006deadc(void) /* sub_6DEADC */
{
    FN_ENTER(0x006deadc);
    /* 006deadc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006deadd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006deae0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006deae2: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006deae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006deaea: je 0x6deb80 */ if (fZ) goto L_006deb80;
L_006deaf0:; BB(0x006deaf0);
    /* 006deaf0: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006deaf3: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006deaf7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006deafa: jge 0x6deb22 */ if ((fS==fO)) goto L_006deb22;
L_006deafc:; BB(0x006deafc);
    /* 006deafc: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006deb02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006deb04: je 0x6deb14 */ if (fZ) goto L_006deb14;
L_006deb06:; BB(0x006deb06);
    /* 006deb06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb08: call 0x6eb0e8 */ r_esp -= 4; W32(r_esp, 0x6deb0du); f_006eb0e8();
    /* 006deb0d: mov edx, eax */ r_edx = r_eax;
    /* 006deb0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006deb12: jmp 0x6deb2e */ goto L_006deb2e;
L_006deb14:; BB(0x006deb14);
    /* 006deb14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb16: call 0x6eb354 */ r_esp -= 4; W32(r_esp, 0x6deb1bu); f_006eb354();
    /* 006deb1b: mov edx, eax */ r_edx = r_eax;
    /* 006deb1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006deb20: jmp 0x6deb2e */ goto L_006deb2e;
L_006deb22:; BB(0x006deb22);
    /* 006deb22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb24: call 0x6eb0e8 */ r_esp -= 4; W32(r_esp, 0x6deb29u); f_006eb0e8();
    /* 006deb29: mov edx, eax */ r_edx = r_eax;
    /* 006deb2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006deb2e:; BB(0x006deb2e);
    /* 006deb2e: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006deb34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006deb36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006deb38: jle 0x6deb7b */ if ((fZ||fS!=fO)) goto L_006deb7b;
L_006deb3a:; BB(0x006deb3a);
    /* 006deb3a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006deb3e: mov esi, edx */ r_esi = r_edx;
    /* 006deb40: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006deb43: mov edi, ebx */ r_edi = r_ebx;
    /* 006deb45: mov ebx, eax */ r_ebx = r_eax;
L_006deb47:; BB(0x006deb47);
    /* 006deb47: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006deb4a: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6deb4fu); f_006ea71c();
    /* 006deb4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006deb50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006deb52: je 0x6deb69 */ if (fZ) goto L_006deb69;
L_006deb54:; BB(0x006deb54);
    /* 006deb54: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 006deb57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006deb58: mov eax, dword ptr [esi + ebx*4 + 0x40] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x40u));
    /* 006deb5c: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 006deb62: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006deb64: mov ecx, edi */ r_ecx = r_edi;
    /* 006deb66: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6deb69u); call_ind(t); }
L_006deb69:; BB(0x006deb69);
    /* 006deb69: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006deb6c: cmp ebx, dword ptr [esi + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006deb72: jl 0x6deb47 */ if ((fS!=fO)) goto L_006deb47;
L_006deb74:; BB(0x006deb74);
    /* 006deb74: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006deb78: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006deb7b:; BB(0x006deb7b);
    /* 006deb7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006deb7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006deb7f: ret  */ FN_RET(0x006deadc); r_esp += 4; return;
L_006deb80:; BB(0x006deb80);
    /* 006deb80: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006deb84: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006deb89: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006deb8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006deb90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006deb91: ret  */ FN_RET(0x006deadc); r_esp += 4; return;
}

void f_006deb94(void) /* sub_6DEB94 */
{
    FN_ENTER(0x006deb94);
    /* 006deb94: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006deb97: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 006deb9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006deb9d: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 006deba0: mov dword ptr [ecx + 0x6c], 1 */ W32((u32)(r_ecx+0x6cu), 0x1u);
    /* 006deba7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006debaa: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006debad: fcomp dword ptr [ecx + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x70u))); FPOP();
    /* 006debb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006debb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006debb3: jbe 0x6debc2 */ if ((fC||fZ)) goto L_006debc2;
L_006debb5:; BB(0x006debb5);
    /* 006debb5: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006debb9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006debbe: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006debc2:; BB(0x006debc2);
    /* 006debc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006debc5: ret  */ FN_RET(0x006deb94); r_esp += 4; return;
}

void f_006debc8(void) /* sub_6DEBC8 */
{
    FN_ENTER(0x006debc8);
    /* 006debc8: mov dword ptr [0xa963e0], 0x3f800000 */ W32((u32)(0xa963e0u), 0x3f800000u);
    /* 006debd2: mov dword ptr [0xa963e4], 0x41000000 */ W32((u32)(0xa963e4u), 0x41000000u);
    /* 006debdc: mov dword ptr [0xa963e8], 0x3fc00000 */ W32((u32)(0xa963e8u), 0x3fc00000u);
    /* 006debe6: ret  */ FN_RET(0x006debc8); r_esp += 4; return;
}

void f_006debe8(void) /* sub_6DEBE8 */
{
    FN_ENTER(0x006debe8);
    /* 006debe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006debe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006debeb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006debed: call 0x6dec0c */ r_esp -= 4; W32(r_esp, 0x6debf2u); f_006dec0c();
    /* 006debf2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006debf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006debf8: jne 0x6debfe */ if (!fZ) goto L_006debfe;
L_006debfa:; BB(0x006debfa);
    /* 006debfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006debfb: ret 4 */ FN_RET(0x006debe8); r_esp += 8; return;
L_006debfe:; BB(0x006debfe);
    /* 006debfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006debff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dec04u); f_005c2f74();
    /* 006dec04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dec05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dec06: ret 4 */ FN_RET(0x006debe8); r_esp += 8; return;
}

void f_006dec0c(void) /* sub_6DEC0C */
{
    FN_ENTER(0x006dec0c);
    /* 006dec0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dec0d: mov ebp, esp */ r_ebp = r_esp;
    /* 006dec0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dec11: push 0x8ee6c8 */ { u32 v = 0x8ee6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006dec16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dec1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dec1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dec24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dec27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dec2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dec2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dec30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dec33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dec36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dec39: mov dword ptr [ecx], 0xb3d008 */ W32((u32)(r_ecx), 0xb3d008u);
    /* 006dec3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dec46: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6dec4bu); f_008171e8();
    /* 006dec4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dec4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dec55: mov esp, ebp */ r_esp = r_ebp;
    /* 006dec57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dec58: ret  */ FN_RET(0x006dec0c); r_esp += 4; return;
}

void f_006dec5c(void) /* sub_6DEC5C */
{
    FN_ENTER(0x006dec5c);
    /* 006dec5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dec5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dec5e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dec61: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 006dec65: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 006dec69: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006dec6b: jl 0x6decfd */ if ((fS!=fO)) goto L_006decfd;
L_006dec71:; BB(0x006dec71);
    /* 006dec71: cmp edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dec74: jg 0x6decfd */ if ((!fZ&&fS==fO)) goto L_006decfd;
L_006dec7a:; BB(0x006dec7a);
    /* 006dec7a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006dec7c: jl 0x6decfd */ if ((fS!=fO)) goto L_006decfd;
L_006dec82:; BB(0x006dec82);
    /* 006dec82: cmp esi, 0x1d */ {  u32 a = r_esi; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dec85: jg 0x6decfd */ if ((!fZ&&fS==fO)) goto L_006decfd;
L_006dec87:; BB(0x006dec87);
    /* 006dec87: cmp esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dec8a: jl 0x6decb8 */ if ((fS!=fO)) goto L_006decb8;
L_006dec8c:; BB(0x006dec8c);
    /* 006dec8c: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dec91u); f_00687c48();
    /* 006dec91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dec93: jne 0x6decb8 */ if (!fZ) goto L_006decb8;
L_006dec95:; BB(0x006dec95);
    /* 006dec95: movsx ecx, word ptr [edi*4 + 0x9cf720] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi*4+0x9cf720u));
    /* 006dec9d: movsx edi, word ptr [edi*4 + 0x9cf722] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi*4+0x9cf722u));
    /* 006deca5: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006deca8: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006decaa: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006decae: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006decb2: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006decb6: jmp 0x6decf3 */ goto L_006decf3;
L_006decb8:; BB(0x006decb8);
    /* 006decb8: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006decbd: mov eax, edi */ r_eax = r_edi;
    /* 006decbf: mov edx, esi */ r_edx = r_esi;
    /* 006decc1: call 0x6ded21 */ r_esp -= 4; W32(r_esp, 0x6decc6u); f_006ded21();
    /* 006decc6: movsx ecx, word ptr [eax + 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x24u));
    /* 006decca: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006deccd: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006decd1: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 006decd5: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 006decd7: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006decdb: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dece0u); f_00687c48();
    /* 006dece0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dece2: je 0x6decf3 */ if (fZ) goto L_006decf3;
L_006dece4:; BB(0x006dece4);
    /* 006dece4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006dece8: fmul dword ptr [edi*8 + 0x9cf780] */ ST(0) = ST(0) * R_F32((u32)(r_edi*8+0x9cf780u));
    /* 006decef: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_006decf3:; BB(0x006decf3);
    /* 006decf3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006decf7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006decfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006decfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006decfc: ret  */ FN_RET(0x006dec5c); r_esp += 4; return;
L_006decfd:; BB(0x006decfd);
    /* 006decfd: push 0x96d018 */ { u32 v = 0x96d018u; r_esp -= 4; W32(r_esp, v); }
    /* 006ded02: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ded07u); f_0061cdb0();
    /* 006ded07: fld dword ptr [0x96ce88] */ FPUSH(R_F32((u32)(0x96ce88u)));
    /* 006ded0d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ded10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ded11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ded12: ret  */ FN_RET(0x006dec5c); r_esp += 4; return;
}

void f_006ded14(void) /* sub_6DED14 */
{
    FN_ENTER(0x006ded14);
    /* 006ded14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ded18: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006ded1c: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 006ded21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ded22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ded23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ded24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ded25: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ded28: mov edi, ecx */ r_edi = r_ecx;
    /* 006ded2a: mov ebx, edx */ r_ebx = r_edx;
    /* 006ded2c: mov ebp, eax */ r_ebp = r_eax;
    /* 006ded2e: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ded31: mov esi, 0xf */ r_esi = 0xfu;
    /* 006ded36: mov eax, 0 */ r_eax = 0x0u;
    /* 006ded3b: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006ded3f: jge 0x6ded43 */ if ((fS==fO)) goto L_006ded43;
L_006ded41:; BB(0x006ded41);
    /* 006ded41: mov esi, ebx */ r_esi = r_ebx;
L_006ded43:; BB(0x006ded43);
    /* 006ded43: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ded45: jge 0x6ded49 */ if ((fS==fO)) goto L_006ded49;
L_006ded47:; BB(0x006ded47);
    /* 006ded47: mov ebx, eax */ r_ebx = r_eax;
L_006ded49:; BB(0x006ded49);
    /* 006ded49: mov eax, 0x1d */ r_eax = 0x1du;
    /* 006ded4e: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ded51: jle 0x6ded55 */ if ((fZ||fS!=fO)) goto L_006ded55;
L_006ded53:; BB(0x006ded53);
    /* 006ded53: mov ebx, eax */ r_ebx = r_eax;
L_006ded55:; BB(0x006ded55);
    /* 006ded55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded57: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded59: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5d: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5f: mov eax, dword ptr [ecx*4 + 0x9cf3c0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c0u));
    /* 006ded66: mov dword ptr [0xa96650], eax */ W32((u32)(0xa96650u), r_eax);
    /* 006ded6b: mov eax, dword ptr [ecx*4 + 0x9cf3c4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c4u));
    /* 006ded72: mov dword ptr [0xa96654], eax */ W32((u32)(0xa96654u), r_eax);
    /* 006ded77: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ded7a: mov eax, dword ptr [ecx*4 + 0x9cf3c8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c8u));
    /* 006ded81: mov dword ptr [0xa96658], eax */ W32((u32)(0xa96658u), r_eax);
    /* 006ded86: mov eax, dword ptr [ecx*4 + 0x9cf3cc] */ r_eax = R32((u32)(r_ecx*4+0x9cf3ccu));
    /* 006ded8d: mov dword ptr [0xa9665c], eax */ W32((u32)(0xa9665cu), r_eax);
    /* 006ded92: mov eax, dword ptr [ecx*4 + 0x9cf3d0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d0u));
    /* 006ded99: mov dword ptr [0xa96660], eax */ W32((u32)(0xa96660u), r_eax);
    /* 006ded9e: mov eax, dword ptr [ecx*4 + 0x9cf3d4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d4u));
    /* 006deda5: mov dword ptr [0xa96664], eax */ W32((u32)(0xa96664u), r_eax);
    /* 006dedaa: mov eax, dword ptr [ecx*4 + 0x9cf3d8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d8u));
    /* 006dedb1: mov dword ptr [0xa96668], eax */ W32((u32)(0xa96668u), r_eax);
    /* 006dedb6: mov eax, dword ptr [ecx*4 + 0x9cf3dc] */ r_eax = R32((u32)(r_ecx*4+0x9cf3dcu));
    /* 006dedbd: mov dword ptr [0xa9666c], eax */ W32((u32)(0xa9666cu), r_eax);
    /* 006dedc2: mov eax, dword ptr [ecx*4 + 0x9cf3e0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e0u));
    /* 006dedc9: mov dword ptr [0xa96670], eax */ W32((u32)(0xa96670u), r_eax);
    /* 006dedce: mov eax, dword ptr [ecx*4 + 0x9cf3e4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e4u));
    /* 006dedd5: mov dword ptr [0xa96674], eax */ W32((u32)(0xa96674u), r_eax);
    /* 006dedda: mov eax, dword ptr [ecx*4 + 0x9cf3e8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e8u));
    /* 006dede1: mov dword ptr [0xa96678], eax */ W32((u32)(0xa96678u), r_eax);
    /* 006dede6: je 0x6dee4e */ if (fZ) goto L_006dee4e;
L_006dede8:; BB(0x006dede8);
    /* 006dede8: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dedeb: je 0x6dee4e */ if (fZ) goto L_006dee4e;
L_006deded:; BB(0x006deded);
    /* 006deded: movsx eax, word ptr [0xa96660] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dedf4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006dedf8: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 006dedfc: movzx eax, byte ptr [0xa96673] */ r_eax = (u32)R8((u32)(0xa96673u));
    /* 006dee03: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006dee07: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dee0b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006dee0f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dee13: fdiv dword ptr [0x96ce84] */ ST(0) = ST(0) / R_F32((u32)(0x96ce84u));
    /* 006dee19: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006dee1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006dee1d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dee21: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dee26: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dee2b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dee2f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dee33: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dee37: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dee3b: cmp ebp, 0x12 */ {  u32 a = r_ebp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006dee3e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dee42: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
    /* 006dee48: ja 0x6e067d */ if ((!fC&&!fZ)) goto L_006e067d;
L_006dee4e:; BB(0x006dee4e);
    /* 006dee4e: mov eax, dword ptr [ebp*4 + 0x96cb60] */ r_eax = R32((u32)(r_ebp*4+0x96cb60u));
    /* 006dee55: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006e067d:; BB(0x006e067d);
    /* 006e067d: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0683: movsx ebp, word ptr [0xa96670] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa96670u));
    /* 006e068a: movsx ecx, word ptr [0xa96662] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006ded14); r_esp += 4; return;
}

void f_006ded21(void) /* sub_6DED21 */
{
    FN_ENTER(0x006ded21);
    /* 006ded21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ded22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ded23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ded24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ded25: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ded28: mov edi, ecx */ r_edi = r_ecx;
    /* 006ded2a: mov ebx, edx */ r_ebx = r_edx;
    /* 006ded2c: mov ebp, eax */ r_ebp = r_eax;
    /* 006ded2e: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ded31: mov esi, 0xf */ r_esi = 0xfu;
    /* 006ded36: mov eax, 0 */ r_eax = 0x0u;
    /* 006ded3b: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006ded3f: jge 0x6ded43 */ if ((fS==fO)) goto L_006ded43;
L_006ded41:; BB(0x006ded41);
    /* 006ded41: mov esi, ebx */ r_esi = r_ebx;
L_006ded43:; BB(0x006ded43);
    /* 006ded43: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ded45: jge 0x6ded49 */ if ((fS==fO)) goto L_006ded49;
L_006ded47:; BB(0x006ded47);
    /* 006ded47: mov ebx, eax */ r_ebx = r_eax;
L_006ded49:; BB(0x006ded49);
    /* 006ded49: mov eax, 0x1d */ r_eax = 0x1du;
    /* 006ded4e: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ded51: jle 0x6ded55 */ if ((fZ||fS!=fO)) goto L_006ded55;
L_006ded53:; BB(0x006ded53);
    /* 006ded53: mov ebx, eax */ r_ebx = r_eax;
L_006ded55:; BB(0x006ded55);
    /* 006ded55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded57: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded59: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5d: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006ded5f: mov eax, dword ptr [ecx*4 + 0x9cf3c0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c0u));
    /* 006ded66: mov dword ptr [0xa96650], eax */ W32((u32)(0xa96650u), r_eax);
    /* 006ded6b: mov eax, dword ptr [ecx*4 + 0x9cf3c4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c4u));
    /* 006ded72: mov dword ptr [0xa96654], eax */ W32((u32)(0xa96654u), r_eax);
    /* 006ded77: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ded7a: mov eax, dword ptr [ecx*4 + 0x9cf3c8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3c8u));
    /* 006ded81: mov dword ptr [0xa96658], eax */ W32((u32)(0xa96658u), r_eax);
    /* 006ded86: mov eax, dword ptr [ecx*4 + 0x9cf3cc] */ r_eax = R32((u32)(r_ecx*4+0x9cf3ccu));
    /* 006ded8d: mov dword ptr [0xa9665c], eax */ W32((u32)(0xa9665cu), r_eax);
    /* 006ded92: mov eax, dword ptr [ecx*4 + 0x9cf3d0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d0u));
    /* 006ded99: mov dword ptr [0xa96660], eax */ W32((u32)(0xa96660u), r_eax);
    /* 006ded9e: mov eax, dword ptr [ecx*4 + 0x9cf3d4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d4u));
    /* 006deda5: mov dword ptr [0xa96664], eax */ W32((u32)(0xa96664u), r_eax);
    /* 006dedaa: mov eax, dword ptr [ecx*4 + 0x9cf3d8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3d8u));
    /* 006dedb1: mov dword ptr [0xa96668], eax */ W32((u32)(0xa96668u), r_eax);
    /* 006dedb6: mov eax, dword ptr [ecx*4 + 0x9cf3dc] */ r_eax = R32((u32)(r_ecx*4+0x9cf3dcu));
    /* 006dedbd: mov dword ptr [0xa9666c], eax */ W32((u32)(0xa9666cu), r_eax);
    /* 006dedc2: mov eax, dword ptr [ecx*4 + 0x9cf3e0] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e0u));
    /* 006dedc9: mov dword ptr [0xa96670], eax */ W32((u32)(0xa96670u), r_eax);
    /* 006dedce: mov eax, dword ptr [ecx*4 + 0x9cf3e4] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e4u));
    /* 006dedd5: mov dword ptr [0xa96674], eax */ W32((u32)(0xa96674u), r_eax);
    /* 006dedda: mov eax, dword ptr [ecx*4 + 0x9cf3e8] */ r_eax = R32((u32)(r_ecx*4+0x9cf3e8u));
    /* 006dede1: mov dword ptr [0xa96678], eax */ W32((u32)(0xa96678u), r_eax);
    /* 006dede6: je 0x6dee4e */ if (fZ) goto L_006dee4e;
L_006dede8:; BB(0x006dede8);
    /* 006dede8: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dedeb: je 0x6dee4e */ if (fZ) goto L_006dee4e;
L_006deded:; BB(0x006deded);
    /* 006deded: movsx eax, word ptr [0xa96660] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dedf4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006dedf8: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 006dedfc: movzx eax, byte ptr [0xa96673] */ r_eax = (u32)R8((u32)(0xa96673u));
    /* 006dee03: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006dee07: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dee0b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006dee0f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dee13: fdiv dword ptr [0x96ce84] */ ST(0) = ST(0) / R_F32((u32)(0x96ce84u));
    /* 006dee19: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006dee1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006dee1d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dee21: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dee26: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dee2b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dee2f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dee33: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dee37: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dee3b: cmp ebp, 0x12 */ {  u32 a = r_ebp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006dee3e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dee42: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
    /* 006dee48: ja 0x6e067d */ if ((!fC&&!fZ)) goto L_006e067d;
L_006dee4e:; BB(0x006dee4e);
    /* 006dee4e: mov eax, dword ptr [ebp*4 + 0x96cb60] */ r_eax = R32((u32)(r_ebp*4+0x96cb60u));
    /* 006dee55: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006e067d:; BB(0x006e067d);
    /* 006e067d: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0683: movsx ebp, word ptr [0xa96670] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa96670u));
    /* 006e068a: movsx ecx, word ptr [0xa96662] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006ded21); r_esp += 4; return;
}

void f_006dee57(void)
{
    FN_ENTER(0x006dee57);
    /* 006dee57: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dee5c: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dee5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dee60: movsx edi, word ptr [0xa96676] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006dee67: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dee69: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006dee6c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dee6e: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dee71: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006dee75: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006dee79: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dee7d: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006dee83: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dee89: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dee8eu); f_00687c48();
    /* 006dee8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dee90: je 0x6deed0 */ if (fZ) goto L_006deed0;
L_006dee92:; BB(0x006dee92);
    /* 006dee92: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dee99: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dee9d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006deea1: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006deea8: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006deeac: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006deeb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006deeb6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006deeba: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006deebe: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006deec2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006deec6: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006deeca: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006deed0:; BB(0x006deed0);
    /* 006deed0: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006deed3: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6deed8u); f_006e06d0();
    /* 006deed8: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006deedf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006deee1: mov eax, edx */ r_eax = r_edx;
    /* 006deee3: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6deee8u); f_006e06d0();
    /* 006deee8: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006deeef: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006deef2: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006deef9: movsx edi, word ptr [0xa9667a] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa9667au));
    /* 006def00: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006def07: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006def0b: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006def0f: fmul dword ptr [0x96ce80] */ ST(0) = ST(0) * R_F32((u32)(0x96ce80u));
    /* 006def15: fdiv dword ptr [0x96ce7c] */ ST(0) = ST(0) / R_F32((u32)(0x96ce7cu));
    /* 006def1b: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006def1e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006def23: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006def25: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006def29: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006def2e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006def33: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006def37: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006def3b: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006def3f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006def43: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006def46: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006def48: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006def4a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006def4d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006def51: imul edx, dword ptr [esp + 0x2c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x2cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006def56: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006def58: add edx, dword ptr [0xa96668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006def5e: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006def60: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006def63: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006def6a: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dee57); r_esp += 4; return;
}

void f_006def6f(void)
{
    FN_ENTER(0x006def6f);
    /* 006def6f: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006def75: movsx ebp, word ptr [0xa96670] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa96670u));
    /* 006def7c: movsx ecx, word ptr [0xa96662] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006def83: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006def6f); r_esp += 4; return;
}

void f_006def88(void)
{
    FN_ENTER(0x006def88);
    /* 006def88: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006def8e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006def92: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006def95: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006def98: jge 0x6df0c2 */ if ((fS==fO)) goto L_006df0c2;
L_006def9e:; BB(0x006def9e);
    /* 006def9e: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006defa1: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006defa4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006defa6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006defa8: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006defaf: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006defb2: jne 0x6defc3 */ if (!fZ) goto L_006defc3;
L_006defb4:; BB(0x006defb4);
    /* 006defb4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006defb8: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006defbf: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006defc3:; BB(0x006defc3);
    /* 006defc3: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006defcb: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006defce: jne 0x6defdf */ if (!fZ) goto L_006defdf;
L_006defd0:; BB(0x006defd0);
    /* 006defd0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006defd4: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006defdb: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006defdf:; BB(0x006defdf);
    /* 006defdf: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006defe7: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006defea: jne 0x6deffb */ if (!fZ) goto L_006deffb;
L_006defec:; BB(0x006defec);
    /* 006defec: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006deff0: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006deff7: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006deffb:; BB(0x006deffb);
    /* 006deffb: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006df003: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df006: jne 0x6df017 */ if (!fZ) goto L_006df017;
L_006df008:; BB(0x006df008);
    /* 006df008: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df00c: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006df013: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df017:; BB(0x006df017);
    /* 006df017: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006df01f: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df022: jne 0x6df033 */ if (!fZ) goto L_006df033;
L_006df024:; BB(0x006df024);
    /* 006df024: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df028: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006df02f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df033:; BB(0x006df033);
    /* 006df033: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006df03b: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df03e: jne 0x6df04f */ if (!fZ) goto L_006df04f;
L_006df040:; BB(0x006df040);
    /* 006df040: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df044: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006df04b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df04f:; BB(0x006df04f);
    /* 006df04f: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006df057: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df05a: jne 0x6df06b */ if (!fZ) goto L_006df06b;
L_006df05c:; BB(0x006df05c);
    /* 006df05c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df060: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006df067: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df06b:; BB(0x006df06b);
    /* 006df06b: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006df073: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df076: jne 0x6df087 */ if (!fZ) goto L_006df087;
L_006df078:; BB(0x006df078);
    /* 006df078: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df07c: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006df083: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df087:; BB(0x006df087);
    /* 006df087: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006df08f: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df092: jne 0x6df0a3 */ if (!fZ) goto L_006df0a3;
L_006df094:; BB(0x006df094);
    /* 006df094: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df098: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006df09f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df0a3:; BB(0x006df0a3);
    /* 006df0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006df0a4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6df0a9u); f_0068d5a8();
    /* 006df0a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006df0aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df0ac: je 0x6df0c2 */ if (fZ) goto L_006df0c2;
L_006df0ae:; BB(0x006df0ae);
    /* 006df0ae: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006df0b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006df0b1: mov ecx, eax */ r_ecx = r_eax;
    /* 006df0b3: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6df0b8u); f_0068c3dc();
    /* 006df0b8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df0bc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006df0be: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df0c2:; BB(0x006df0c2);
    /* 006df0c2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df0c6: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006df0cc: fmul dword ptr [0xa96658] */ ST(0) = ST(0) * R_F32((u32)(0xa96658u));
    /* 006df0d2: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df0d8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6df0ddu); f_00687c48();
    /* 006df0dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df0df: je 0x6df11f */ if (fZ) goto L_006df11f;
L_006df0e1:; BB(0x006df0e1);
    /* 006df0e1: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006df0e8: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006df0ec: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df0f0: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006df0f7: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006df0fb: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006df100: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006df105: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006df109: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006df10d: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006df111: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006df115: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006df119: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006df11f:; BB(0x006df11f);
    /* 006df11f: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006df122: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df127u); f_006e06d0();
    /* 006df127: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df12e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df130: mov eax, edx */ r_eax = r_edx;
    /* 006df132: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df137u); f_006e06d0();
    /* 006df137: movzx edi, word ptr [0xa96678] */ r_edi = (u32)R16((u32)(0xa96678u));
    /* 006df13e: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df141: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006df148: add word ptr [0xa96664], di */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006df14f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006df152: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006df157: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df159: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006df15c: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006df15e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df160: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006df163: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006df165: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006df167: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006df16a: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006df171: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006df173: jg 0x6df187 */ if ((!fZ&&fS==fO)) goto L_006df187;
L_006df175:; BB(0x006df175);
    /* 006df175: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df17b: mov byte ptr [0xa96672], 0 */ W8((u32)(0xa96672u), 0x0u);
    /* 006df182: jmp 0x6e0691 */ goto L_006e0691;
L_006df187:; BB(0x006df187);
    /* 006df187: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df18d: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006def88); r_esp += 4; return;
}

