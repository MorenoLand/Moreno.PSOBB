#include "protos.h"

void f_006871f0(void) /* sub_6871F0 */
{
    FN_ENTER(0x006871f0);
    /* 006871f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006871f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006871f2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006871f4: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006871f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006871fa: call 0x696454 */ r_esp -= 4; W32(r_esp, 0x6871ffu); f_00696454();
    /* 006871ff: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00687202: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00687206: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0068720a: mov word ptr [ebp + 0x2e], dx */ W16((u32)(r_ebp+0x2eu), (u16)r_edx);
    /* 0068720e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00687211: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00687214: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00687217: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 0068721a: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0068721d: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00687220: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00687223: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 00687226: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 0068722a: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00687231: movzx eax, word ptr [ebx + 0x22] */ r_eax = (u32)R16((u32)(r_ebx+0x22u));
    /* 00687235: mov word ptr [ebp + 0x334], ax */ W16((u32)(r_ebp+0x334u), (u16)r_eax);
    /* 0068723c: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 0068723f: mov dword ptr [ebp + 0xeb0], eax */ W32((u32)(r_ebp+0xeb0u), r_eax);
    /* 00687245: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 00687248: mov dword ptr [ebp + 0xeb4], eax */ W32((u32)(r_ebp+0xeb4u), r_eax);
    /* 0068724e: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 00687251: mov dword ptr [ebp + 0x8fc], eax */ W32((u32)(r_ebp+0x8fcu), r_eax);
    /* 00687257: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 0068725a: mov dword ptr [ebp + 0x900], eax */ W32((u32)(r_ebp+0x900u), r_eax);
    /* 00687260: movzx eax, word ptr [ebx + 0x78] */ r_eax = (u32)R16((u32)(r_ebx+0x78u));
    /* 00687264: mov word ptr [ebp + 0x904], ax */ W16((u32)(r_ebp+0x904u), (u16)r_eax);
    /* 0068726b: movzx eax, word ptr [ebx + 0x7a] */ r_eax = (u32)R16((u32)(r_ebx+0x7au));
    /* 0068726f: mov word ptr [ebp + 0x906], ax */ W16((u32)(r_ebp+0x906u), (u16)r_eax);
    /* 00687276: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 00687279: mov dword ptr [ebp + 0x908], eax */ W32((u32)(r_ebp+0x908u), r_eax);
    /* 0068727f: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00687285: mov dword ptr [ebp + 0x90c], eax */ W32((u32)(r_ebp+0x90cu), r_eax);
    /* 0068728b: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00687291: mov dword ptr [ebp + 0x910], eax */ W32((u32)(r_ebp+0x910u), r_eax);
    /* 00687297: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0068729d: mov dword ptr [ebp + 0x914], eax */ W32((u32)(r_ebp+0x914u), r_eax);
    /* 006872a3: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006872a9: mov dword ptr [ebp + 0x918], eax */ W32((u32)(r_ebp+0x918u), r_eax);
    /* 006872af: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 006872b5: mov dword ptr [ebp + 0x91c], eax */ W32((u32)(r_ebp+0x91cu), r_eax);
    /* 006872bb: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 006872c1: mov dword ptr [ebp + 0x92c], eax */ W32((u32)(r_ebp+0x92cu), r_eax);
    /* 006872c7: movzx eax, word ptr [ebx + 0x98] */ r_eax = (u32)R16((u32)(r_ebx+0x98u));
    /* 006872ce: mov word ptr [ebp + 0x808], ax */ W16((u32)(r_ebp+0x808u), (u16)r_eax);
    /* 006872d5: movzx eax, word ptr [ebx + 0x9a] */ r_eax = (u32)R16((u32)(r_ebx+0x9au));
    /* 006872dc: mov word ptr [ebp + 0x80a], ax */ W16((u32)(r_ebp+0x80au), (u16)r_eax);
    /* 006872e3: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 006872e9: mov dword ptr [ebp + 0x80c], eax */ W32((u32)(r_ebp+0x80cu), r_eax);
    /* 006872ef: mov eax, dword ptr [ebx + 0xa0] */ r_eax = R32((u32)(r_ebx+0xa0u));
    /* 006872f5: mov dword ptr [ebp + 0x810], eax */ W32((u32)(r_ebp+0x810u), r_eax);
    /* 006872fb: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00687301: mov dword ptr [ebp + 0x814], eax */ W32((u32)(r_ebp+0x814u), r_eax);
    /* 00687307: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 0068730d: mov dword ptr [ebp + 0x818], eax */ W32((u32)(r_ebp+0x818u), r_eax);
    /* 00687313: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00687319: mov dword ptr [ebp + 0x3ec], eax */ W32((u32)(r_ebp+0x3ecu), r_eax);
    /* 0068731f: mov eax, dword ptr [ebx + 0x4a8] */ r_eax = R32((u32)(r_ebx+0x4a8u));
    /* 00687325: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0068732b: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00687331: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 00687337: mov ebx, dword ptr [ebx + 0x64] */ r_ebx = R32((u32)(r_ebx+0x64u));
    /* 0068733a: mov dword ptr [ebp + 0x3c8], ebx */ W32((u32)(r_ebp+0x3c8u), r_ebx);
    /* 00687340: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687342: ret 4 */ FN_RET(0x006871f0); r_esp += 8; return;
}

void f_00687348(void) /* sub_687348 */
{
    FN_ENTER(0x00687348);
    /* 00687348: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687349: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068734a: mov esi, ecx */ r_esi = r_ecx;
    /* 0068734c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00687350: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00687354: mov word ptr [esi + 0x2c0], ax */ W16((u32)(r_esi+0x2c0u), (u16)r_eax);
    /* 0068735b: movzx edx, word ptr [edi + 0x26] */ r_edx = (u32)R16((u32)(r_edi+0x26u));
    /* 0068735f: mov word ptr [esi + 0x2c2], dx */ W16((u32)(r_esi+0x2c2u), (u16)r_edx);
    /* 00687366: movzx eax, byte ptr [edi + 0x243] */ r_eax = (u32)R8((u32)(r_edi+0x243u));
    /* 0068736d: mov byte ptr [esi + 0x384], al */ W8((u32)(r_esi+0x384u), (u8)r_eax);
    /* 00687373: movzx eax, byte ptr [edi + 0x25f] */ r_eax = (u32)R8((u32)(r_edi+0x25fu));
    /* 0068737a: mov byte ptr [esi + 0x385], al */ W8((u32)(r_esi+0x385u), (u8)r_eax);
    /* 00687380: movzx eax, byte ptr [edi + 0x27b] */ r_eax = (u32)R8((u32)(r_edi+0x27bu));
    /* 00687387: mov byte ptr [esi + 0x386], al */ W8((u32)(r_esi+0x386u), (u8)r_eax);
    /* 0068738d: movzx eax, byte ptr [edi + 0x297] */ r_eax = (u32)R8((u32)(r_edi+0x297u));
    /* 00687394: mov byte ptr [esi + 0x387], al */ W8((u32)(r_esi+0x387u), (u8)r_eax);
    /* 0068739a: movzx eax, byte ptr [edi + 0x2b3] */ r_eax = (u32)R8((u32)(r_edi+0x2b3u));
    /* 006873a1: mov byte ptr [esi + 0x388], al */ W8((u32)(r_esi+0x388u), (u8)r_eax);
    /* 006873a7: lea eax, [edi + 0x138] */ r_eax = (u32)(r_edi+0x138u);
    /* 006873ad: mov ecx, esi */ r_ecx = r_esi;
    /* 006873af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006873b0: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x6873b5u); f_006960e4();
    /* 006873b5: movzx eax, word ptr [edi + 0x22] */ r_eax = (u32)R16((u32)(r_edi+0x22u));
    /* 006873b9: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 006873c0: mov ecx, esi */ r_ecx = r_esi;
    /* 006873c2: call 0x6873cc */ r_esp -= 4; W32(r_esp, 0x6873c7u); f_006873cc();
    /* 006873c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006873c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006873c9: ret 4 */ FN_RET(0x00687348); r_esp += 8; return;
}

void f_00687369(void)
{
    FN_ENTER(0x00687369);
    /* 00687369: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068736a: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068736c: add byte ptr [eax + 0x38486], cl */ { u32 ad = (u32)(r_eax+0x38486u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00687372: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00687374: mov dh, 0x87 */ r_edx = (r_edx & 0xffff00ffu) | (((0x87u) & 0xffu) << 8);
    /* 00687376: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687377: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00687379: add byte ptr [eax + 0x38586], cl */ { u32 ad = (u32)(r_eax+0x38586u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068737f: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fP = !__builtin_parity(r & 0xffu); }
    /* 00687381: mov dh, 0x87 */ r_edx = (r_edx & 0xffff00ffu) | (((0x87u) & 0xffu) << 8);
    /* 00687383: jnp 0x687387 */ if (!fP) goto L_00687387;
L_00687385:; BB(0x00687385);
    /* 00687385: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00687387:; BB(0x00687387);
    /* 00687387: mov byte ptr [esi + 0x386], al */ W8((u32)(r_esi+0x386u), (u8)r_eax);
    /* 0068738d: movzx eax, byte ptr [edi + 0x297] */ r_eax = (u32)R8((u32)(r_edi+0x297u));
    /* 00687394: mov byte ptr [esi + 0x387], al */ W8((u32)(r_esi+0x387u), (u8)r_eax);
    /* 0068739a: movzx eax, byte ptr [edi + 0x2b3] */ r_eax = (u32)R8((u32)(r_edi+0x2b3u));
    /* 006873a1: mov byte ptr [esi + 0x388], al */ W8((u32)(r_esi+0x388u), (u8)r_eax);
    /* 006873a7: lea eax, [edi + 0x138] */ r_eax = (u32)(r_edi+0x138u);
    /* 006873ad: mov ecx, esi */ r_ecx = r_esi;
    /* 006873af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006873b0: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x6873b5u); f_006960e4();
    /* 006873b5: movzx eax, word ptr [edi + 0x22] */ r_eax = (u32)R16((u32)(r_edi+0x22u));
    /* 006873b9: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 006873c0: mov ecx, esi */ r_ecx = r_esi;
    /* 006873c2: call 0x6873cc */ r_esp -= 4; W32(r_esp, 0x6873c7u); f_006873cc();
    /* 006873c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006873c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006873c9: ret 4 */ FN_RET(0x00687369); r_esp += 8; return;
}

void f_006873cc(void) /* sub_6873CC */
{
    FN_ENTER(0x006873cc);
    /* 006873cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006873cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006873d0: mov edi, ecx */ r_edi = r_ecx;
    /* 006873d2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006873d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006873d7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006873df: je 0x6873f8 */ if (fZ) goto L_006873f8;
L_006873e1:; BB(0x006873e1);
    /* 006873e1: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
    /* 006873e8: mov ecx, edi */ r_ecx = r_edi;
    /* 006873ea: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006873ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006873f0: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x6873f5u); f_0068749c();
    /* 006873f5: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_006873f8:; BB(0x006873f8);
    /* 006873f8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006873fa: je 0x687413 */ if (fZ) goto L_00687413;
L_006873fc:; BB(0x006873fc);
    /* 006873fc: mov dword ptr [esp], 0x10 */ W32((u32)(r_esp), 0x10u);
    /* 00687403: mov ecx, edi */ r_ecx = r_edi;
    /* 00687405: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687409: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0068740b: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x687410u); f_0068749c();
    /* 00687410: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_00687413:; BB(0x00687413);
    /* 00687413: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687415: je 0x68742e */ if (fZ) goto L_0068742e;
L_00687417:; BB(0x00687417);
    /* 00687417: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0068741e: mov ecx, edi */ r_ecx = r_edi;
    /* 00687420: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687424: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00687426: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x68742bu); f_0068749c();
    /* 0068742b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_0068742e:; BB(0x0068742e);
    /* 0068742e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687430: je 0x687449 */ if (fZ) goto L_00687449;
L_00687432:; BB(0x00687432);
    /* 00687432: mov dword ptr [esp], 0x11 */ W32((u32)(r_esp), 0x11u);
    /* 00687439: mov ecx, edi */ r_ecx = r_edi;
    /* 0068743b: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068743f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00687441: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x687446u); f_0068749c();
    /* 00687446: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_00687449:; BB(0x00687449);
    /* 00687449: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068744b: je 0x687464 */ if (fZ) goto L_00687464;
L_0068744d:; BB(0x0068744d);
    /* 0068744d: mov dword ptr [esp], 0x12 */ W32((u32)(r_esp), 0x12u);
    /* 00687454: mov ecx, edi */ r_ecx = r_edi;
    /* 00687456: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068745a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0068745c: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x687461u); f_0068749c();
    /* 00687461: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_00687464:; BB(0x00687464);
    /* 00687464: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687466: je 0x68747f */ if (fZ) goto L_0068747f;
L_00687468:; BB(0x00687468);
    /* 00687468: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 0068746f: mov ecx, edi */ r_ecx = r_edi;
    /* 00687471: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687475: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00687477: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x68747cu); f_0068749c();
    /* 0068747c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_0068747f:; BB(0x0068747f);
    /* 0068747f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687481: je 0x687497 */ if (fZ) goto L_00687497;
L_00687483:; BB(0x00687483);
    /* 00687483: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 0068748a: mov ecx, edi */ r_ecx = r_edi;
    /* 0068748c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687490: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00687492: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x687497u); f_0068749c();
L_00687497:; BB(0x00687497);
    /* 00687497: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068749a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068749b: ret  */ FN_RET(0x006873cc); r_esp += 4; return;
}

void f_00687467(void)
{
    FN_ENTER(0x00687467);
    /* 00687467: pop ss */ UNSUP(0x00687467, "pop ss");
    /* 00687468: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 0068746f: mov ecx, edi */ r_ecx = r_edi;
    /* 00687471: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687475: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00687477: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x68747cu); f_0068749c();
    /* 0068747c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0068747f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687481: je 0x687497 */ if (fZ) goto L_00687497;
L_00687483:; BB(0x00687483);
    /* 00687483: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 0068748a: mov ecx, edi */ r_ecx = r_edi;
    /* 0068748c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687490: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00687492: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x687497u); f_0068749c();
L_00687497:; BB(0x00687497);
    /* 00687497: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068749a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068749b: ret  */ FN_RET(0x00687467); r_esp += 4; return;
}

void f_0068749c(void) /* sub_68749C */
{
    FN_ENTER(0x0068749c);
    /* 0068749c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006874a0: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 006874a3: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006874a6: ja 0x68751b */ if ((!fC&&!fZ)) goto L_0068751b;
L_006874a8:; BB(0x006874a8);
    /* 006874a8: mov eax, dword ptr [edx*4 + 0x93c538] */ r_eax = R32((u32)(r_edx*4+0x93c538u));
    /* 006874af: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x0068749c); r_esp += 12; return;
}

void f_006874b1(void)
{
    FN_ENTER(0x006874b1);
    /* 006874b1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874b3: call dword ptr [eax + 0xc4] */ { u32 t = R32((u32)(r_eax+0xc4u)); r_esp -= 4; W32(r_esp, 0x6874b9u); call_ind(t); }
    /* 006874b9: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874b1); r_esp += 12; return;
}

void f_006874bb(void)
{
    FN_ENTER(0x006874bb);
    /* 006874bb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874bd: call dword ptr [eax + 0xc0] */ { u32 t = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, 0x6874c3u); call_ind(t); }
    /* 006874c3: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874bb); r_esp += 12; return;
}

void f_006874c5(void)
{
    FN_ENTER(0x006874c5);
    /* 006874c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874c7: call dword ptr [eax + 0xbc] */ { u32 t = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, 0x6874cdu); call_ind(t); }
    /* 006874cd: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874c5); r_esp += 12; return;
}

void f_006874cf(void)
{
    FN_ENTER(0x006874cf);
    /* 006874cf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874d1: call dword ptr [eax + 0xb8] */ { u32 t = R32((u32)(r_eax+0xb8u)); r_esp -= 4; W32(r_esp, 0x6874d7u); call_ind(t); }
    /* 006874d7: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874cf); r_esp += 12; return;
}

void f_006874d9(void)
{
    FN_ENTER(0x006874d9);
    /* 006874d9: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006874dd: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006874e1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874e3: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x6874e9u); call_ind(t); }
    /* 006874e9: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874d9); r_esp += 12; return;
}

void f_006874eb(void)
{
    FN_ENTER(0x006874eb);
    /* 006874eb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006874ef: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006874f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874f5: call dword ptr [eax + 0xd4] */ { u32 t = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, 0x6874fbu); call_ind(t); }
    /* 006874fb: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874eb); r_esp += 12; return;
}

void f_006874fd(void)
{
    FN_ENTER(0x006874fd);
    /* 006874fd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006874ff: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x687505u); call_ind(t); }
    /* 00687505: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x006874fd); r_esp += 12; return;
}

void f_00687507(void)
{
    FN_ENTER(0x00687507);
    /* 00687507: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00687509: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x68750fu); call_ind(t); }
    /* 0068750f: jmp 0x68751b */ goto L_0068751b;
L_0068751b:; BB(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x00687507); r_esp += 12; return;
}

void f_00687511(void)
{
    FN_ENTER(0x00687511);
    /* 00687511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687513: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00687515: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x68751bu); call_ind(t); }
    /* 0068751b: ret 8 */ FN_RET(0x00687511); r_esp += 12; return;
}

void f_0068751b(void)
{
    FN_ENTER(0x0068751b);
    /* 0068751b: ret 8 */ FN_RET(0x0068751b); r_esp += 12; return;
}

void f_00687520(void) /* sub_687520 */
{
    FN_ENTER(0x00687520);
    /* 00687520: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687521: mov edi, ecx */ r_edi = r_ecx;
    /* 00687523: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00687527: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0068752a: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0068752d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00687530: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00687533: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00687536: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 00687539: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0068753c: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0068753f: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 00687542: mov ecx, edi */ r_ecx = r_edi;
    /* 00687544: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x687549u); f_0077a1f4();
    /* 00687549: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0068754c: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0068754f: mov dword ptr [edi + 0x788], eax */ W32((u32)(r_edi+0x788u), r_eax);
    /* 00687555: mov dword ptr [edi + 0x78c], edx */ W32((u32)(r_edi+0x78cu), r_edx);
    /* 0068755b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068755c: ret 4 */ FN_RET(0x00687520); r_esp += 8; return;
}

void f_00687560(void) /* sub_687560 */
{
    FN_ENTER(0x00687560);
    /* 00687560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687561: mov esi, ecx */ r_esi = r_ecx;
    /* 00687563: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00687567: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068756a: add eax, dword ptr [0xa94250] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa94250u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00687570: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 00687576: mov ecx, esi */ r_ecx = r_esi;
    /* 00687578: call 0x6875a0 */ r_esp -= 4; W32(r_esp, 0x68757du); f_006875a0();
    /* 0068757d: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 00687583: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00687587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687588: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068758a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x68758du); call_ind(t); }
    /* 0068758d: mov ecx, esi */ r_ecx = r_esi;
    /* 0068758f: call 0x687610 */ r_esp -= 4; W32(r_esp, 0x687594u); f_00687610();
    /* 00687594: mov ecx, esi */ r_ecx = r_esi;
    /* 00687596: call 0x687684 */ r_esp -= 4; W32(r_esp, 0x68759bu); f_00687684();
    /* 0068759b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068759c: ret 4 */ FN_RET(0x00687560); r_esp += 8; return;
}

void f_006875a0(void) /* sub_6875A0 */
{
    FN_ENTER(0x006875a0);
    /* 006875a0: movsx eax, byte ptr [ecx + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x961u));
    /* 006875a7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006875aa: ja 0x68760d */ if ((!fC&&!fZ)) goto L_0068760d;
L_006875ac:; BB(0x006875ac);
    /* 006875ac: mov eax, dword ptr [eax*4 + 0x93c584] */ r_eax = R32((u32)(r_eax*4+0x93c584u));
    /* 006875b3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875a0); r_esp += 4; return;
}

void f_006875b5(void)
{
    FN_ENTER(0x006875b5);
    /* 006875b5: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006875bb: mov dword ptr [eax + 4], 5 */ W32((u32)(r_eax+0x4u), 0x5u);
    /* 006875c2: jmp 0x68760d */ goto L_0068760d;
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875b5); r_esp += 4; return;
}

void f_006875c4(void)
{
    FN_ENTER(0x006875c4);
    /* 006875c4: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006875ca: mov dword ptr [eax + 4], 3 */ W32((u32)(r_eax+0x4u), 0x3u);
    /* 006875d1: jmp 0x68760d */ goto L_0068760d;
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875c4); r_esp += 4; return;
}

void f_006875d3(void)
{
    FN_ENTER(0x006875d3);
    /* 006875d3: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006875d9: mov dword ptr [eax + 4], 4 */ W32((u32)(r_eax+0x4u), 0x4u);
    /* 006875e0: jmp 0x68760d */ goto L_0068760d;
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875d3); r_esp += 4; return;
}

void f_006875e2(void)
{
    FN_ENTER(0x006875e2);
    /* 006875e2: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006875e8: mov dword ptr [eax + 4], 2 */ W32((u32)(r_eax+0x4u), 0x2u);
    /* 006875ef: jmp 0x68760d */ goto L_0068760d;
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875e2); r_esp += 4; return;
}

void f_006875f1(void)
{
    FN_ENTER(0x006875f1);
    /* 006875f1: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006875f7: mov dword ptr [eax + 4], 1 */ W32((u32)(r_eax+0x4u), 0x1u);
    /* 006875fe: jmp 0x68760d */ goto L_0068760d;
L_0068760d:; BB(0x0068760d);
    /* 0068760d: ret  */ FN_RET(0x006875f1); r_esp += 4; return;
}

void f_00687600(void)
{
    FN_ENTER(0x00687600);
    /* 00687600: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 00687606: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0068760d: ret  */ FN_RET(0x00687600); r_esp += 4; return;
}

void f_00687610(void) /* sub_687610 */
{
    FN_ENTER(0x00687610);
    /* 00687610: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687611: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687612: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687613: mov edi, ecx */ r_edi = r_ecx;
    /* 00687615: mov ebp, dword ptr [edi + 0x38c] */ r_ebp = R32((u32)(r_edi+0x38cu));
    /* 0068761b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068761d: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x687622u); f_00687660();
    /* 00687622: mov ebx, eax */ r_ebx = r_eax;
    /* 00687624: mov ecx, edi */ r_ecx = r_edi;
    /* 00687626: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x68762bu); f_00687670();
    /* 0068762b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068762e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00687631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687632: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00687634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687635: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x687638u); call_ind(t); }
    /* 00687638: mov ebp, eax */ r_ebp = r_eax;
    /* 0068763a: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 00687640: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00687642: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x687648u); call_ind(t); }
    /* 00687648: mov ebx, eax */ r_ebx = r_eax;
    /* 0068764a: mov ecx, edi */ r_ecx = r_edi;
    /* 0068764c: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x687651u); f_0069d1bc();
    /* 00687651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687652: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687653: mov ecx, edi */ r_ecx = r_edi;
    /* 00687655: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687656: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x68765bu); f_007aa624();
    /* 0068765b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068765c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068765d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068765e: ret  */ FN_RET(0x00687610); r_esp += 4; return;
}

void f_00687660(void) /* sub_687660 */
{
    FN_ENTER(0x00687660);
    /* 00687660: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00687666: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687669: call 0x6a7b64 */ r_esp -= 4; W32(r_esp, 0x68766eu); f_006a7b64();
    /* 0068766e: ret  */ FN_RET(0x00687660); r_esp += 4; return;
}

void f_00687670(void) /* sub_687670 */
{
    FN_ENTER(0x00687670);
    /* 00687670: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00687676: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687679: call 0x6a7b80 */ r_esp -= 4; W32(r_esp, 0x68767eu); f_006a7b80();
    /* 0068767e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00687681: ret  */ FN_RET(0x00687670); r_esp += 4; return;
}

void f_00687684(void) /* sub_687684 */
{
    FN_ENTER(0x00687684);
    /* 00687684: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687685: mov esi, ecx */ r_esi = r_ecx;
    /* 00687687: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x68768cu); f_00807d60();
    /* 0068768c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068768e: jne 0x687699 */ if (!fZ) goto L_00687699;
L_00687690:; BB(0x00687690);
    /* 00687690: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687692: mov ecx, esi */ r_ecx = r_esi;
    /* 00687694: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x687699u); f_00687d30();
L_00687699:; BB(0x00687699);
    /* 00687699: mov ecx, esi */ r_ecx = r_esi;
    /* 0068769b: call 0x687610 */ r_esp -= 4; W32(r_esp, 0x6876a0u); f_00687610();
    /* 006876a0: mov ecx, esi */ r_ecx = r_esi;
    /* 006876a2: call 0x6876b0 */ r_esp -= 4; W32(r_esp, 0x6876a7u); f_006876b0();
    /* 006876a7: mov ecx, esi */ r_ecx = r_esi;
    /* 006876a9: call 0x6876e8 */ r_esp -= 4; W32(r_esp, 0x6876aeu); f_006876e8();
    /* 006876ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006876af: ret  */ FN_RET(0x00687684); r_esp += 4; return;
}

void f_006876b0(void) /* sub_6876B0 */
{
    FN_ENTER(0x006876b0);
    /* 006876b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006876b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006876b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6876b8u); f_0082d7b0();
    /* 006876b8: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006876bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006876bd: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x6876c2u); f_008316b4();
    /* 006876c2: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006876c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006876c7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6876ccu); f_0082d8bc();
    /* 006876cc: push dword ptr [ebx + 0xe0] */ { u32 v = R32((u32)(r_ebx+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006876d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006876d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006876d6: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006876dc: call 0x7aab2c */ r_esp -= 4; W32(r_esp, 0x6876e1u); f_007aab2c();
    /* 006876e1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6876e6u); f_0082da80();
    /* 006876e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006876e7: ret  */ FN_RET(0x006876b0); r_esp += 4; return;
}

void f_006876e8(void) /* sub_6876E8 */
{
    FN_ENTER(0x006876e8);
    /* 006876e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006876e9: mov edi, ecx */ r_edi = r_ecx;
    /* 006876eb: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006876f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006876f5: jne 0x6877a6 */ if (!fZ) goto L_006877a6;
L_006876fb:; BB(0x006876fb);
    /* 006876fb: mov ecx, edi */ r_ecx = r_edi;
    /* 006876fd: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x687702u); f_006877b0();
    /* 00687702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687704: je 0x6877a4 */ if (fZ) goto L_006877a4;
L_0068770a:; BB(0x0068770a);
    /* 0068770a: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00687710: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00687713: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00687716: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0068771c: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687722: je 0x687776 */ if (fZ) goto L_00687776;
L_00687724:; BB(0x00687724);
    /* 00687724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687726: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00687728: mov ecx, edi */ r_ecx = r_edi;
    /* 0068772a: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68772fu); f_00698a08();
    /* 0068772f: mov eax, dword ptr [edi + 0x92c] */ r_eax = R32((u32)(r_edi+0x92cu));
    /* 00687735: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687737: je 0x68774d */ if (fZ) goto L_0068774d;
L_00687739:; BB(0x00687739);
    /* 00687739: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0068773f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00687741: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x687744u); call_ind(t); }
    /* 00687744: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0068774b: jmp 0x687754 */ goto L_00687754;
L_0068774d:; BB(0x0068774d);
    /* 0068774d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068774f: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x687754u); f_0069cb24();
L_00687754:; BB(0x00687754);
    /* 00687754: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0068775a: mov dword ptr [edi + 0x6dc], 0x3f800000 */ W32((u32)(r_edi+0x6dcu), 0x3f800000u);
    /* 00687764: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00687767: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0068776d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068776e: call 0x697988 */ r_esp -= 4; W32(r_esp, 0x687773u); f_00697988();
    /* 00687773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00687774: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687775: ret  */ FN_RET(0x006876e8); r_esp += 4; return;
L_00687776:; BB(0x00687776);
    /* 00687776: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68777bu); f_0068be84();
    /* 0068777b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068777d: je 0x687799 */ if (fZ) goto L_00687799;
L_0068777f:; BB(0x0068777f);
    /* 0068777f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00687785: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068778a: je 0x687799 */ if (fZ) goto L_00687799;
L_0068778c:; BB(0x0068778c);
    /* 0068778c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068778e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00687790: mov ecx, edi */ r_ecx = r_edi;
    /* 00687792: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x687797u); f_00698a08();
    /* 00687797: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687798: ret  */ FN_RET(0x006876e8); r_esp += 4; return;
L_00687799:; BB(0x00687799);
    /* 00687799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068779b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068779d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068779f: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6877a4u); f_00698a08();
L_006877a4:; BB(0x006877a4);
    /* 006877a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006877a5: ret  */ FN_RET(0x006876e8); r_esp += 4; return;
L_006877a6:; BB(0x006877a6);
    /* 006877a6: mov ecx, edi */ r_ecx = r_edi;
    /* 006877a8: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x6877adu); f_0069d554();
    /* 006877ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006877ae: ret  */ FN_RET(0x006876e8); r_esp += 4; return;
}

void f_006877b0(void) /* sub_6877B0 */
{
    FN_ENTER(0x006877b0);
    /* 006877b0: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 006877b6: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006877bc: mov eax, 0 */ r_eax = 0x0u;
    /* 006877c1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006877c4: ret  */ FN_RET(0x006877b0); r_esp += 4; return;
}

void f_006877c8(void) /* sub_6877C8 */
{
    FN_ENTER(0x006877c8);
    /* 006877c8: mov dword ptr [ecx + 0x634], 0 */ W32((u32)(r_ecx+0x634u), 0x0u);
    /* 006877d2: ret 4 */ FN_RET(0x006877c8); r_esp += 8; return;
}

void f_006877d8(void) /* sub_6877D8 */
{
    FN_ENTER(0x006877d8);
    /* 006877d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006877d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006877da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006877db: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006877de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006877e0: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006877e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006877e6: mov dword ptr [ebx + 0xdf4], 0 */ W32((u32)(r_ebx+0xdf4u), 0x0u);
    /* 006877f0: call 0x68600c */ r_esp -= 4; W32(r_esp, 0x6877f5u); f_0068600c();
    /* 006877f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006877f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006877f9: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x6877feu); f_00687d30();
    /* 006877fe: mov esi, edi */ r_esi = r_edi;
    /* 00687800: mov edi, dword ptr [edi + 0x15c] */ r_edi = R32((u32)(r_edi+0x15cu));
    /* 00687806: add esi, 0x160 */ {  u32 a = r_esi; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0068780c: je 0x68789a */ if (fZ) goto L_0068789a;
L_00687812:; BB(0x00687812);
    /* 00687812: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687814: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00687816: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x68781bu); f_00687d30();
    /* 0068781b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068781d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068781f: jle 0x687888 */ if ((fZ||fS!=fO)) goto L_00687888;
L_00687821:; BB(0x00687821);
    /* 00687821: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00687825: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00687829: mov ebx, eax */ r_ebx = r_eax;
L_0068782b:; BB(0x0068782b);
    /* 0068782b: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0068782e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068782f: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x687834u); f_005c3a80();
    /* 00687834: mov edi, eax */ r_edi = r_eax;
    /* 00687836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687839: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068783b: je 0x687876 */ if (fZ) goto L_00687876;
L_0068783d:; BB(0x0068783d);
    /* 0068783d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068783e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00687842: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x687847u); f_00687904();
    /* 00687847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687849: je 0x687876 */ if (fZ) goto L_00687876;
L_0068784b:; BB(0x0068784b);
    /* 0068784b: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0068784e: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00687851: je 0x687876 */ if (fZ) goto L_00687876;
L_00687853:; BB(0x00687853);
    /* 00687853: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00687855: mov ecx, edi */ r_ecx = r_edi;
    /* 00687857: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68785au); call_ind(t); }
    /* 0068785a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0068785d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00687861: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 00687867: mov edx, eax */ r_edx = r_eax;
    /* 00687869: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0068786c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068786d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x687872u); f_0069792c();
    /* 00687872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687874: je 0x6878b6 */ if (fZ) goto L_006878b6;
L_00687876:; BB(0x00687876);
    /* 00687876: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068787a: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068787d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687880: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00687882: jl 0x68782b */ if ((fS!=fO)) goto L_0068782b;
L_00687884:; BB(0x00687884);
    /* 00687884: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00687888:; BB(0x00687888);
    /* 00687888: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x68788du); f_00807d60();
    /* 0068788d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068788f: jne 0x68789a */ if (!fZ) goto L_0068789a;
L_00687891:; BB(0x00687891);
    /* 00687891: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00687895: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x68789au); f_00687d30();
L_0068789a:; BB(0x0068789a);
    /* 0068789a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0068789e: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006878a1: add eax, dword ptr [0xa9424c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9424cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006878a7: mov dword ptr [ebx + 0xebc], eax */ W32((u32)(r_ebx+0xebcu), r_eax);
    /* 006878ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006878b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006878b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006878b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006878b3: ret 4 */ FN_RET(0x006877d8); r_esp += 8; return;
L_006878b6:; BB(0x006878b6);
    /* 006878b6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006878b8: mov ecx, edi */ r_ecx = r_edi;
    /* 006878ba: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6878bdu); call_ind(t); }
    /* 006878bd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006878c0: mov edx, eax */ r_edx = r_eax;
    /* 006878c2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006878c6: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006878c9: mov dword ptr [eax + edx*4 + 0xdf8], edi */ W32((u32)(r_eax+r_edx*4+0xdf8u), r_edi);
    /* 006878d0: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006878d6: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006878dc: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
    /* 006878e2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006878e4: mov ecx, edi */ r_ecx = r_edi;
    /* 006878e6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x6878e9u); call_ind(t); }
    /* 006878e9: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006878ed: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 006878f3: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006878f9: mov dword ptr [ecx + 0x33c], edx */ W32((u32)(r_ecx+0x33cu), r_edx);
    /* 006878ff: jmp 0x687876 */ goto L_00687876;
}

void f_00687904(void) /* sub_687904 */
{
    FN_ENTER(0x00687904);
    /* 00687904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687905: mov ebp, esp */ r_ebp = r_esp;
    /* 00687907: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00687909: push 0x8eb24a */ { u32 v = 0x8eb24au; r_esp -= 4; W32(r_esp, v); }
    /* 0068790e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00687914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687915: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0068791c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068791f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00687922: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00687925: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00687928: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0068792b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068792e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00687931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687933: je 0x6879ff */ if (fZ) goto L_006879ff;
L_00687939:; BB(0x00687939);
    /* 00687939: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068793c: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00687943: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687946: je 0x687b97 */ if (fZ) goto L_00687b97;
L_0068794c:; BB(0x0068794c);
    /* 0068794c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068794f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687950: call 0x687c70 */ r_esp -= 4; W32(r_esp, 0x687955u); f_00687c70();
    /* 00687955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687957: jne 0x68796b */ if (!fZ) goto L_0068796b;
L_00687959:; BB(0x00687959);
    /* 00687959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068795b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068795e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00687965: mov esp, ebp */ r_esp = r_ebp;
    /* 00687967: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687968: ret 4 */ FN_RET(0x00687904); r_esp += 8; return;
L_0068796b:; BB(0x0068796b);
    /* 0068796b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068796e: movzx ecx, byte ptr [eax + 0xf2] */ r_ecx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00687975: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00687977: jl 0x6879ff */ if ((fS!=fO)) goto L_006879ff;
L_0068797d:; BB(0x0068797d);
    /* 0068797d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00687980: jle 0x687a6b */ if ((fZ||fS!=fO)) goto L_00687a6b;
L_00687986:; BB(0x00687986);
    /* 00687986: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687989: jne 0x6879ff */ if (!fZ) goto L_006879ff;
L_0068798b:; BB(0x0068798b);
    /* 0068798b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068798e: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00687995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687996: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00687997: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x68799cu); f_005c502c();
    /* 0068799c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068799f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006879a1: je 0x687a17 */ if (fZ) goto L_00687a17;
L_006879a3:; BB(0x006879a3);
    /* 006879a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006879a6: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 006879a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006879aa: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6879afu); f_005c425c();
    /* 006879af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006879b2: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 006879b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006879b6: mov ecx, dword ptr [edx + 0xdf4] */ r_ecx = R32((u32)(r_edx+0xdf4u));
    /* 006879bc: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6879c1u); f_006a4e50();
    /* 006879c1: mov esi, eax */ r_esi = r_eax;
    /* 006879c3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006879c5: je 0x687b29 */ if (fZ) goto L_00687b29;
L_006879cb:; BB(0x006879cb);
    /* 006879cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006879ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006879d0: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6879d6u); call_ind(t); }
    /* 006879d6: mov ebx, eax */ r_ebx = r_eax;
    /* 006879d8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006879da: jne 0x6879e1 */ if (!fZ) goto L_006879e1;
L_006879dc:; BB(0x006879dc);
    /* 006879dc: mov ebx, 1 */ r_ebx = 0x1u;
L_006879e1:; BB(0x006879e1);
    /* 006879e1: mov ecx, esi */ r_ecx = r_esi;
    /* 006879e3: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6879e8u); f_006a60dc();
    /* 006879e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006879ea: je 0x6879f7 */ if (fZ) goto L_006879f7;
L_006879ec:; BB(0x006879ec);
    /* 006879ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006879ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006879ef: mov ecx, eax */ r_ecx = r_eax;
    /* 006879f1: call dword ptr [edx + 0x90] */ { u32 t = R32((u32)(r_edx+0x90u)); r_esp -= 4; W32(r_esp, 0x6879f7u); call_ind(t); }
L_006879f7:; BB(0x006879f7);
    /* 006879f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006879fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006879fc: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x6879ffu); call_ind(t); }
L_006879ff:; BB(0x006879ff);
    /* 006879ff: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00687a02: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00687a05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687a07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00687a0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00687a11: mov esp, ebp */ r_esp = r_ebp;
    /* 00687a13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687a14: ret 4 */ FN_RET(0x00687904); r_esp += 8; return;
L_00687a17:; BB(0x00687a17);
    /* 00687a17: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00687a1e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00687a20: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x687a25u); f_005caba4();
    /* 00687a25: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687a28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687a2b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00687a2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687a30: je 0x687b83 */ if (fZ) goto L_00687b83;
L_00687a36:; BB(0x00687a36);
    /* 00687a36: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00687a3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00687a44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687a47: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687a4a: mov edx, dword ptr [eax + 0xdf4] */ r_edx = R32((u32)(r_eax+0xdf4u));
    /* 00687a50: push dword ptr [edx + 0x1c4] */ { u32 v = R32((u32)(r_edx+0x1c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687a56: call 0x6a3d24 */ r_esp -= 4; W32(r_esp, 0x687a5bu); f_006a3d24();
    /* 00687a5b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00687a62:; BB(0x00687a62);
    /* 00687a62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00687a69: jmp 0x687abd */ goto L_00687abd;
L_00687a6b:; BB(0x00687a6b);
    /* 00687a6b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00687a72: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00687a74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x687a79u); f_005caba4();
    /* 00687a79: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687a7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687a7f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00687a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687a84: je 0x687b8d */ if (fZ) goto L_00687b8d;
L_00687a8a:; BB(0x00687a8a);
    /* 00687a8a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00687a91: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00687a98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687a9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687a9e: mov edx, dword ptr [eax + 0xdf4] */ r_edx = R32((u32)(r_eax+0xdf4u));
    /* 00687aa4: push dword ptr [edx + 0x1c4] */ { u32 v = R32((u32)(r_edx+0x1c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687aaa: call 0x6a3d24 */ r_esp -= 4; W32(r_esp, 0x687aafu); f_006a3d24();
    /* 00687aaf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00687ab6:; BB(0x00687ab6);
    /* 00687ab6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00687abd:; BB(0x00687abd);
    /* 00687abd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687ac2: je 0x6879ff */ if (fZ) goto L_006879ff;
L_00687ac8:; BB(0x00687ac8);
    /* 00687ac8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00687acb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687acf: call 0x6a3de4 */ r_esp -= 4; W32(r_esp, 0x687ad4u); f_006a3de4();
    /* 00687ad4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687ad7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687ada: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00687adc: mov edx, dword ptr [eax + 0xdf4] */ r_edx = R32((u32)(r_eax+0xdf4u));
    /* 00687ae2: add word ptr [edx + 0x1c], 1 */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00687ae7: call 0x5c4f94 */ r_esp -= 4; W32(r_esp, 0x687aecu); f_005c4f94();
    /* 00687aec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687aef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687af2: mov edx, dword ptr [eax + 0xdf4] */ r_edx = R32((u32)(r_eax+0xdf4u));
    /* 00687af8: push dword ptr [edx + 0x1c8] */ { u32 v = R32((u32)(r_edx+0x1c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687afe: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x687b03u); f_008172d4();
    /* 00687b03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687b06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687b09: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00687b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687b0e: call 0x5c4f2c */ r_esp -= 4; W32(r_esp, 0x687b13u); f_005c4f2c();
    /* 00687b13: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687b16: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00687b19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00687b1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00687b23: mov esp, ebp */ r_esp = r_ebp;
    /* 00687b25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687b26: ret 4 */ FN_RET(0x00687904); r_esp += 8; return;
L_00687b29:; BB(0x00687b29);
    /* 00687b29: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00687b30: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00687b32: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x687b37u); f_005caba4();
    /* 00687b37: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687b3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687b3d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00687b40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687b42: je 0x687b7c */ if (fZ) goto L_00687b7c;
L_00687b44:; BB(0x00687b44);
    /* 00687b44: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00687b4b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00687b52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687b55: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687b58: mov edx, dword ptr [eax + 0xdf4] */ r_edx = R32((u32)(r_eax+0xdf4u));
    /* 00687b5e: push dword ptr [edx + 0x1c4] */ { u32 v = R32((u32)(r_edx+0x1c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687b64: call 0x6a3d24 */ r_esp -= 4; W32(r_esp, 0x687b69u); f_006a3d24();
    /* 00687b69: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00687b70:; BB(0x00687b70);
    /* 00687b70: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00687b77: jmp 0x687abd */ goto L_00687abd;
L_00687b7c:; BB(0x00687b7c);
    /* 00687b7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687b7e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687b81: jmp 0x687b70 */ goto L_00687b70;
L_00687b83:; BB(0x00687b83);
    /* 00687b83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687b85: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687b88: jmp 0x687a62 */ goto L_00687a62;
L_00687b8d:; BB(0x00687b8d);
    /* 00687b8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687b8f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00687b92: jmp 0x687ab6 */ goto L_00687ab6;
L_00687b97:; BB(0x00687b97);
    /* 00687b97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687b9a: call 0x5c4f78 */ r_esp -= 4; W32(r_esp, 0x687b9fu); f_005c4f78();
    /* 00687b9f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00687ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687ba3: call 0x770d30 */ r_esp -= 4; W32(r_esp, 0x687ba8u); f_00770d30();
    /* 00687ba8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687bab: call 0x5c4f78 */ r_esp -= 4; W32(r_esp, 0x687bb0u); f_005c4f78();
    /* 00687bb0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00687bb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687bb4: call 0x687bf8 */ r_esp -= 4; W32(r_esp, 0x687bb9u); f_00687bf8();
    /* 00687bb9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00687bbc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00687bbe: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x687bc1u); call_ind(t); }
    /* 00687bc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00687bc4: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x687bc9u); f_006877b0();
    /* 00687bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687bcb: je 0x687be5 */ if (fZ) goto L_00687be5;
L_00687bcd:; BB(0x00687bcd);
    /* 00687bcd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00687bd0: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00687bd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687bd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687bd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687bd8: push 0x571 */ { u32 v = 0x571u; r_esp -= 4; W32(r_esp, v); }
    /* 00687bdd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x687be2u); f_00814298();
    /* 00687be2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00687be5:; BB(0x00687be5);
    /* 00687be5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687be7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00687bea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00687bf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00687bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687bf4: ret 4 */ FN_RET(0x00687904); r_esp += 8; return;
}

void f_00687bf8(void) /* sub_687BF8 */
{
    FN_ENTER(0x00687bf8);
    /* 00687bf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687bf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687bfa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00687bfd: mov esi, ecx */ r_esi = r_ecx;
    /* 00687bff: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00687c03: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00687c0a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687c0d: jne 0x687c21 */ if (!fZ) goto L_00687c21;
L_00687c0f:; BB(0x00687c0f);
    /* 00687c0f: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00687c14: call 0x6a8f4c */ r_esp -= 4; W32(r_esp, 0x687c19u); f_006a8f4c();
    /* 00687c19: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00687c1c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687c1f: je 0x687c29 */ if (fZ) goto L_00687c29;
L_00687c21:; BB(0x00687c21);
    /* 00687c21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00687c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687c25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687c26: ret 4 */ FN_RET(0x00687bf8); r_esp += 8; return;
L_00687c29:; BB(0x00687c29);
    /* 00687c29: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x687c2eu); f_00687c48();
    /* 00687c2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687c30: je 0x687c21 */ if (fZ) goto L_00687c21;
L_00687c32:; BB(0x00687c32);
    /* 00687c32: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00687c35: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00687c38: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 00687c3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00687c41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687c42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687c43: ret 4 */ FN_RET(0x00687bf8); r_esp += 8; return;
}

void f_00687c48(void) /* sub_687C48 */
{
    FN_ENTER(0x00687c48);
    /* 00687c48: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00687c4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687c50: je 0x687c55 */ if (fZ) goto L_00687c55;
L_00687c52:; BB(0x00687c52);
    /* 00687c52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687c54: ret  */ FN_RET(0x00687c48); r_esp += 4; return;
L_00687c55:; BB(0x00687c55);
    /* 00687c55: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00687c5a: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x687c5fu); f_006a8eb0();
    /* 00687c5f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00687c62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00687c65: je 0x687c6a */ if (fZ) goto L_00687c6a;
L_00687c67:; BB(0x00687c67);
    /* 00687c67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687c69: ret  */ FN_RET(0x00687c48); r_esp += 4; return;
L_00687c6a:; BB(0x00687c6a);
    /* 00687c6a: mov eax, 1 */ r_eax = 0x1u;
    /* 00687c6f: ret  */ FN_RET(0x00687c48); r_esp += 4; return;
}

void f_00687c70(void) /* sub_687C70 */
{
    FN_ENTER(0x00687c70);
    /* 00687c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687c71: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00687c74: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00687c76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00687c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687c7a: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00687c7e: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x687c83u); f_005c425c();
    /* 00687c83: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00687c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687c87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00687c89: call 0x687c98 */ r_esp -= 4; W32(r_esp, 0x687c8eu); f_00687c98();
    /* 00687c8e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00687c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687c92: ret 4 */ FN_RET(0x00687c70); r_esp += 8; return;
}

void f_00687c98(void) /* sub_687C98 */
{
    FN_ENTER(0x00687c98);
    /* 00687c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687c99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687c9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687c9b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00687c9d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00687ca1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00687ca3: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x687ca8u); f_005d24b0();
    /* 00687ca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687caa: je 0x687cfa */ if (fZ) goto L_00687cfa;
L_00687cac:; BB(0x00687cac);
    /* 00687cac: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 00687caf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687cb2: je 0x687d11 */ if (fZ) goto L_00687d11;
L_00687cb4:; BB(0x00687cb4);
    /* 00687cb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687cb5: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 00687cbb: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x687cc0u); f_006a4e50();
    /* 00687cc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687cc2: je 0x687cfa */ if (fZ) goto L_00687cfa;
L_00687cc4:; BB(0x00687cc4);
    /* 00687cc4: mov ecx, eax */ r_ecx = r_eax;
    /* 00687cc6: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x687ccbu); f_006a60dc();
    /* 00687ccb: mov ebp, eax */ r_ebp = r_eax;
    /* 00687ccd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687ccf: je 0x687cf2 */ if (fZ) goto L_00687cf2;
L_00687cd1:; BB(0x00687cd1);
    /* 00687cd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00687cd3: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x687cd8u); f_005c5064();
    /* 00687cd8: mov edi, eax */ r_edi = r_eax;
    /* 00687cda: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00687cdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00687cdf: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x687ce5u); call_ind(t); }
    /* 00687ce5: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00687ce7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00687ce9: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x687ceeu); f_005d29b0();
    /* 00687cee: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00687cf0: jge 0x687d22 */ if ((fS==fO)) goto L_00687d22;
L_00687cf2:; BB(0x00687cf2);
    /* 00687cf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687cf4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687cf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687cf7: ret 4 */ FN_RET(0x00687c98); r_esp += 8; return;
L_00687cfa:; BB(0x00687cfa);
    /* 00687cfa: mov eax, dword ptr [ebp + 0xdf4] */ r_eax = R32((u32)(r_ebp+0xdf4u));
    /* 00687d00: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 00687d04: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00687d07: jl 0x687d22 */ if ((fS!=fO)) goto L_00687d22;
L_00687d09:; BB(0x00687d09);
    /* 00687d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687d0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687d0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687d0e: ret 4 */ FN_RET(0x00687c98); r_esp += 8; return;
L_00687d11:; BB(0x00687d11);
    /* 00687d11: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00687d17: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00687d1a: cmp edx, 0xf423f */ {  u32 a = r_edx; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00687d20: jge 0x687cf2 */ if ((fS==fO)) goto L_00687cf2;
L_00687d22:; BB(0x00687d22);
    /* 00687d22: mov eax, 1 */ r_eax = 0x1u;
    /* 00687d27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687d29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687d2a: ret 4 */ FN_RET(0x00687c98); r_esp += 8; return;
}

void f_00687d30(void) /* sub_687D30 */
{
    FN_ENTER(0x00687d30);
    /* 00687d30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687d31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687d32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687d34: mov edi, ecx */ r_edi = r_ecx;
    /* 00687d36: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 00687d3c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687d3f: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00687d44: call 0x6a7b80 */ r_esp -= 4; W32(r_esp, 0x687d49u); f_006a7b80();
    /* 00687d49: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00687d4b: je 0x687d7e */ if (fZ) goto L_00687d7e;
L_00687d4d:; BB(0x00687d4d);
    /* 00687d4d: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00687d52: call 0x7a62f4 */ r_esp -= 4; W32(r_esp, 0x687d57u); f_007a62f4();
    /* 00687d57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687d59: je 0x687d7e */ if (fZ) goto L_00687d7e;
L_00687d5b:; BB(0x00687d5b);
    /* 00687d5b: mov ebp, dword ptr [edi + 0x38c] */ r_ebp = R32((u32)(r_edi+0x38cu));
    /* 00687d61: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00687d65: mov ecx, edi */ r_ecx = r_edi;
    /* 00687d67: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x687d6cu); f_00687660();
    /* 00687d6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687d6e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00687d71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00687d73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687d74: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x687d77u); call_ind(t); }
    /* 00687d77: mov ecx, edi */ r_ecx = r_edi;
    /* 00687d79: call 0x687d88 */ r_esp -= 4; W32(r_esp, 0x687d7eu); f_00687d88();
L_00687d7e:; BB(0x00687d7e);
    /* 00687d7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00687d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687d82: ret 4 */ FN_RET(0x00687d30); r_esp += 8; return;
}

void f_00687d88(void) /* sub_687D88 */
{
    FN_ENTER(0x00687d88);
    /* 00687d88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687d89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00687d8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687d8b: mov edi, ecx */ r_edi = r_ecx;
    /* 00687d8d: mov esi, dword ptr [edi + 0x38c] */ r_esi = R32((u32)(r_edi+0x38cu));
    /* 00687d93: mov ecx, edi */ r_ecx = r_edi;
    /* 00687d95: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x687d9au); f_00687660();
    /* 00687d9a: mov ebx, eax */ r_ebx = r_eax;
    /* 00687d9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00687d9e: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x687da3u); f_00687670();
    /* 00687da3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00687da5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00687da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687da9: mov ecx, esi */ r_ecx = r_esi;
    /* 00687dab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00687dac: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x687dafu); call_ind(t); }
    /* 00687daf: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 00687db5: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 00687dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687dbd: mov ecx, edi */ r_ecx = r_edi;
    /* 00687dbf: call 0x7a9e24 */ r_esp -= 4; W32(r_esp, 0x687dc4u); f_007a9e24();
    /* 00687dc4: movsx ebx, word ptr [edi + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 00687dcb: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 00687dd1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687dd3: mov eax, dword ptr [edx + ebx*8 + 8] */ r_eax = R32((u32)(r_edx+r_ebx*8+0x8u));
    /* 00687dd7: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 00687ddd: movzx esi, word ptr [edx + ebx*8] */ r_esi = (u32)R16((u32)(r_edx+r_ebx*8));
    /* 00687de1: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 00687de7: mov word ptr [edi + 0xf4], si */ W16((u32)(r_edi+0xf4u), (u16)r_esi);
    /* 00687dee: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00687df1: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00687df4: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00687df7: fadd dword ptr [esi*4 + 0x93c670] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x93c670u));
    /* 00687dfe: mov esi, dword ptr [edi + 0xb0] */ r_esi = R32((u32)(r_edi+0xb0u));
    /* 00687e04: fst dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0));
    /* 00687e0a: and esi, 0xfffffffb */ {  u32 a = r_esi; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00687e0d: mov dword ptr [edi + 0xb0], esi */ W32((u32)(r_edi+0xb0u), r_esi);
    /* 00687e13: mov edx, dword ptr [edx + ebx*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 00687e17: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00687e1d: mov dword ptr [edi + 0xb4], edx */ W32((u32)(r_edi+0xb4u), r_edx);
    /* 00687e23: je 0x687e3b */ if (fZ) goto L_00687e3b;
L_00687e25:; BB(0x00687e25);
    /* 00687e25: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00687e27: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00687e2b: or edx, 0xffff0080 */ {  u32 a = r_edx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00687e31: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 00687e35: fld dword ptr [edi + 0xc4] */ FPUSH(R_F32((u32)(r_edi+0xc4u)));
L_00687e3b:; BB(0x00687e3b);
    /* 00687e3b: fcomp dword ptr [edi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xc0u))); FPOP();
    /* 00687e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00687e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00687e44: ja 0x687e50 */ if ((!fC&&!fZ)) goto L_00687e50;
L_00687e46:; BB(0x00687e46);
    /* 00687e46: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
L_00687e50:; BB(0x00687e50);
    /* 00687e50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00687e51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00687e52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687e53: ret  */ FN_RET(0x00687d88); r_esp += 4; return;
}

void f_00687e54(void) /* sub_687E54 */
{
    FN_ENTER(0x00687e54);
    /* 00687e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687e55: mov edi, ecx */ r_edi = r_ecx;
    /* 00687e57: mov ecx, edi */ r_ecx = r_edi;
    /* 00687e59: call 0x696038 */ r_esp -= 4; W32(r_esp, 0x687e5eu); f_00696038();
    /* 00687e5e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00687e64: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00687e69: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 00687e6f: add edi, 0x70c */ {  u32 a = r_edi; u32 b = 0x70cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00687e75: mov ecx, edi */ r_ecx = r_edi;
    /* 00687e77: call 0x698678 */ r_esp -= 4; W32(r_esp, 0x687e7cu); f_00698678();
    /* 00687e7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687e7d: ret 4 */ FN_RET(0x00687e54); r_esp += 8; return;
}

void f_00687e80(void) /* sub_687E80 */
{
    FN_ENTER(0x00687e80);
    /* 00687e80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00687e84: movzx edx, byte ptr [eax + 0x2cf] */ r_edx = (u32)R8((u32)(r_eax+0x2cfu));
    /* 00687e8b: mov byte ptr [ecx + 0x344], dl */ W8((u32)(r_ecx+0x344u), (u8)r_edx);
    /* 00687e91: movzx edx, byte ptr [eax + 0x2eb] */ r_edx = (u32)R8((u32)(r_eax+0x2ebu));
    /* 00687e98: mov byte ptr [ecx + 0x345], dl */ W8((u32)(r_ecx+0x345u), (u8)r_edx);
    /* 00687e9e: movzx eax, byte ptr [eax + 0x307] */ r_eax = (u32)R8((u32)(r_eax+0x307u));
    /* 00687ea5: mov byte ptr [ecx + 0x346], al */ W8((u32)(r_ecx+0x346u), (u8)r_eax);
    /* 00687eab: ret 4 */ FN_RET(0x00687e80); r_esp += 8; return;
}

void f_00687eb0(void) /* sub_687EB0 */
{
    FN_ENTER(0x00687eb0);
    /* 00687eb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00687eb1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00687eb5: movzx eax, byte ptr [edx + 0x1d3] */ r_eax = (u32)R8((u32)(r_edx+0x1d3u));
    /* 00687ebc: movzx edi, byte ptr [edx + 0x1ef] */ r_edi = (u32)R8((u32)(r_edx+0x1efu));
    /* 00687ec3: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00687ec6: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00687ecc: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00687ece: movzx edi, byte ptr [edx + 0x20b] */ r_edi = (u32)R8((u32)(r_edx+0x20bu));
    /* 00687ed5: movzx edx, byte ptr [edx + 0x227] */ r_edx = (u32)R8((u32)(r_edx+0x227u));
    /* 00687edc: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00687edf: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00687ee5: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00687ee7: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00687eea: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00687eec: mov dword ptr [ecx + 0x454], eax */ W32((u32)(r_ecx+0x454u), r_eax);
    /* 00687ef2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00687ef3: ret 4 */ FN_RET(0x00687eb0); r_esp += 8; return;
}

void f_00687ef8(void) /* sub_687EF8 */
{
    FN_ENTER(0x00687ef8);
    /* 00687ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00687ef9: mov ebp, esp */ r_ebp = r_esp;
    /* 00687efb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00687efd: push 0x8eb270 */ { u32 v = 0x8eb270u; r_esp -= 4; W32(r_esp, v); }
    /* 00687f02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00687f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687f09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00687f10: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00687f13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00687f16: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00687f19: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00687f1c: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00687f1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00687f21: mov eax, dword ptr [0xa94248] */ r_eax = R32((u32)(0xa94248u));
    /* 00687f26: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00687f29: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00687f2c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00687f2f: mov dword ptr [0xa94248], eax */ W32((u32)(0xa94248u), r_eax);
    /* 00687f34: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00687f37: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00687f3a: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00687f3d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00687f40: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00687f42: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00687f45: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00687f48: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00687f4b: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00687f4e: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00687f51: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_00687f54:; BB(0x00687f54);
    /* 00687f54: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687f5a: je 0x6880c5 */ if (fZ) goto L_006880c5;
L_00687f60:; BB(0x00687f60);
    /* 00687f60: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00687f62: jl 0x687f69 */ if ((fS!=fO)) goto L_00687f69;
L_00687f64:; BB(0x00687f64);
    /* 00687f64: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00687f67: jl 0x687f6d */ if ((fS!=fO)) goto L_00687f6d;
L_00687f69:; BB(0x00687f69);
    /* 00687f69: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00687f6b: jmp 0x687f74 */ goto L_00687f74;
L_00687f6d:; BB(0x00687f6d);
    /* 00687f6d: mov ecx, dword ptr [ebx*4 + 0xa94254] */ r_ecx = R32((u32)(r_ebx*4+0xa94254u));
L_00687f74:; BB(0x00687f74);
    /* 00687f74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687f76: je 0x687f84 */ if (fZ) goto L_00687f84;
L_00687f78:; BB(0x00687f78);
    /* 00687f78: mov dword ptr [ebp + ebx*4 - 0x6c], ecx */ W32((u32)(r_ebp+r_ebx*4+0xffffff94u), r_ecx);
    /* 00687f7c: je 0x687f84 */ if (fZ) goto L_00687f84;
L_00687f7e:; BB(0x00687f7e);
    /* 00687f7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00687f80: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00687f82: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x687f84u); call_ind(t); }
L_00687f84:; BB(0x00687f84);
    /* 00687f84: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687f87: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00687f8a: jl 0x687f54 */ if ((fS!=fO)) goto L_00687f54;
L_00687f8c:; BB(0x00687f8c);
    /* 00687f8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00687f8e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00687f91:; BB(0x00687f91);
    /* 00687f91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00687f94: mov edx, dword ptr [ebp + eax*4 - 0x6c] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffff94u));
    /* 00687f98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687f9a: je 0x688085 */ if (fZ) goto L_00688085;
L_00687fa0:; BB(0x00687fa0);
    /* 00687fa0: mov edx, eax */ r_edx = r_eax;
    /* 00687fa2: mov esi, dword ptr [0xa94af0] */ r_esi = R32((u32)(0xa94af0u));
    /* 00687fa8: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00687faf: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00687fb2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00687fb5: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00687fb8: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00687fbd: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00687fc0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fc2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fc4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fc6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fc8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fca: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00687fcc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00687fcf: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00687fd2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687fd4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00687fd6: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00687fd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x687fdeu); f_005caba4();
    /* 00687fde: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00687fe1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00687fe4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00687fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00687fe9: je 0x6880bb */ if (fZ) goto L_006880bb;
L_00687fef:; BB(0x00687fef);
    /* 00687fef: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00687ff6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00687ffd: mov eax, ebx */ r_eax = r_ebx;
    /* 00687fff: mov ebx, esi */ r_ebx = r_esi;
    /* 00688001: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00688004: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00688007: lea edx, [ebx + eax + 0xc] */ r_edx = (u32)(r_ebx+r_eax+0xcu);
    /* 0068800b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068800e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068800f: push dword ptr [ebx + esi*8] */ { u32 v = R32((u32)(r_ebx+r_esi*8)); r_esp -= 4; W32(r_esp, v); }
    /* 00688012: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00688013: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 00688019: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x68801eu); f_006862e8();
    /* 0068801e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00688025:; BB(0x00688025);
    /* 00688025: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068802c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068802f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688032: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00688035: mov eax, dword ptr [edx + ebx*8 + 4] */ r_eax = R32((u32)(r_edx+r_ebx*8+0x4u));
    /* 00688039: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0068803b: mov dword ptr [ecx + 0xeb0], eax */ W32((u32)(r_ecx+0xeb0u), r_eax);
    /* 00688041: mov esi, dword ptr [edx + ebx*8 + 8] */ r_esi = R32((u32)(r_edx+r_ebx*8+0x8u));
    /* 00688045: mov dword ptr [ecx + 0xeb4], esi */ W32((u32)(r_ecx+0xeb4u), r_esi);
    /* 0068804b: call dword ptr [edi + 0x18] */ { u32 t = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, 0x68804eu); call_ind(t); }
    /* 0068804e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00688051: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00688054: mov eax, dword ptr [ecx + ebx*8 + 0x4ec] */ r_eax = R32((u32)(r_ecx+r_ebx*8+0x4ecu));
    /* 0068805b: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 00688061: mov edx, dword ptr [ecx + ebx*8 + 0x4f0] */ r_edx = R32((u32)(r_ecx+r_ebx*8+0x4f0u));
    /* 00688068: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068806b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068806c: mov dword ptr [edi + 0x420], edx */ W32((u32)(r_edi+0x420u), r_edx);
    /* 00688072: mov esi, dword ptr [ecx + ebx*8 + 0x4f4] */ r_esi = R32((u32)(r_ecx+r_ebx*8+0x4f4u));
    /* 00688079: mov dword ptr [edi + 0x424], esi */ W32((u32)(r_edi+0x424u), r_esi);
    /* 0068807f: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x688084u); f_00718108();
    /* 00688084: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00688085:; BB(0x00688085);
    /* 00688085: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00688088: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068808b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068808e: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00688091: jl 0x687f91 */ if ((fS!=fO)) goto L_00687f91;
L_00688097:; BB(0x00688097);
    /* 00688097: mov eax, dword ptr [0xa94248] */ r_eax = R32((u32)(0xa94248u));
    /* 0068809c: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0068809f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006880a2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006880a5: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006880a8: mov dword ptr [0xa94248], eax */ W32((u32)(0xa94248u), r_eax);
    /* 006880ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006880b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006880b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006880b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006880ba: ret  */ FN_RET(0x00687ef8); r_esp += 4; return;
L_006880bb:; BB(0x006880bb);
    /* 006880bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006880bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006880c0: jmp 0x688025 */ goto L_00688025;
L_006880c5:; BB(0x006880c5);
    /* 006880c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006880c7: jmp 0x687f74 */ goto L_00687f74;
}

