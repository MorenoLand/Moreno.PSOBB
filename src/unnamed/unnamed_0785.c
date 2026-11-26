#include "protos.h"

void f_00785000(void)
{
    FN_ENTER(0x00785000);
    /* 00785000: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00785007: push 0x78519c */ { u32 v = 0x78519cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078500c: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785012: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00785015: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x78501au); f_00788938();
    /* 0078501a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00785021: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00785024: mov dword ptr [eax + 0x1c], 2 */ W32((u32)(r_eax+0x1cu), 0x2u);
    /* 0078502b: jmp 0x7850f6 */ goto L_007850f6;
L_007850f6:; BB(0x007850f6);
    /* 007850f6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007850f9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007850fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007850ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00785106: mov esp, ebp */ r_esp = r_ebp;
    /* 00785108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785109: ret  */ FN_RET(0x00785000); r_esp += 4; return;
}

void f_0078510c(void) /* sub_78510C */
{
    FN_ENTER(0x0078510c);
    /* 0078510c: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x785111u); f_0083adbc();
    /* 00785111: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x785116u); f_007becd4();
    /* 00785116: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x78511bu); f_007bfba0();
    /* 0078511b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00785120: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x785125u); f_0061cdb0();
    /* 00785125: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0078512a: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x78512fu); f_0081745c();
    /* 0078512f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00785134: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x785139u); f_00817604();
    /* 00785139: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0078513e: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x785143u); f_00818f80();
    /* 00785143: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x785148u); f_005ba748();
    /* 00785148: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x78514du); f_00814168();
    /* 0078514d: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x785152u); f_007bfedc();
    /* 00785152: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00785155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785157: je 0x78515e */ if (fZ) goto L_0078515e;
L_00785159:; BB(0x00785159);
    /* 00785159: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x78515eu); f_007a6174();
L_0078515e:; BB(0x0078515e);
    /* 0078515e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x785163u); f_006dc358();
    /* 00785163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785165: je 0x78516f */ if (fZ) goto L_0078516f;
L_00785167:; BB(0x00785167);
    /* 00785167: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00785169: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x78516eu); f_007a60dc();
    /* 0078516e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078516f:; BB(0x0078516f);
    /* 0078516f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x785174u); f_0080030c();
    /* 00785174: ret  */ FN_RET(0x0078510c); r_esp += 4; return;
}

void f_00785178(void) /* sub_785178 */
{
    FN_ENTER(0x00785178);
    /* 00785178: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x78517du); f_00815434();
    /* 0078517d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00785182: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x785187u); f_00818560();
    /* 00785187: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00785189: push 0x9f9940 */ { u32 v = 0x9f9940u; r_esp -= 4; W32(r_esp, v); }
    /* 0078518e: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x785193u); f_0078b0a0();
    /* 00785193: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00785196: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x78519bu); f_0080030c();
    /* 0078519b: ret  */ FN_RET(0x00785178); r_esp += 4; return;
}

void f_0078519c(void) /* sub_78519C */
{
    FN_ENTER(0x0078519c);
    /* 0078519c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007851a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007851a2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007851a6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007851ab: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007851af: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7851b4u); f_007a618c();
    /* 007851b4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 007851b6: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7851bbu); f_007a60dc();
    /* 007851bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007851be: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7851c3u); f_00815434();
    /* 007851c3: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x7851c8u); f_008153a4();
    /* 007851c8: ret  */ FN_RET(0x0078519c); r_esp += 4; return;
}

void f_007851cc(void) /* sub_7851CC */
{
    FN_ENTER(0x007851cc);
    /* 007851cc: mov eax, 0x8c */ r_eax = 0x8cu;
    /* 007851d1: ret  */ FN_RET(0x007851cc); r_esp += 4; return;
}

void f_007851d4(void) /* sub_7851D4 */
{
    FN_ENTER(0x007851d4);
    /* 007851d4: mov dword ptr [0xa9c1e8], 0x3f800000 */ W32((u32)(0xa9c1e8u), 0x3f800000u);
    /* 007851de: mov dword ptr [0xa9c1ec], 0x41000000 */ W32((u32)(0xa9c1ecu), 0x41000000u);
    /* 007851e8: mov dword ptr [0xa9c1f0], 0x3fc00000 */ W32((u32)(0xa9c1f0u), 0x3fc00000u);
    /* 007851f2: ret  */ FN_RET(0x007851d4); r_esp += 4; return;
}

void f_007851f4(void) /* sub_7851F4 */
{
    FN_ENTER(0x007851f4);
    /* 007851f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007851f5: mov ebp, esp */ r_ebp = r_esp;
    /* 007851f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007851f9: push 0x8f4846 */ { u32 v = 0x8f4846u; r_esp -= 4; W32(r_esp, v); }
    /* 007851fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00785204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078520c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078520f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00785212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00785215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00785218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078521b: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785221: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00785224: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x785229u); f_008193cc();
    /* 00785229: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00785230: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00785233: mov dword ptr [edx], 0xb44a28 */ W32((u32)(r_edx), 0xb44a28u);
    /* 00785239: mov eax, dword ptr [0x9f99b0] */ r_eax = R32((u32)(0x9f99b0u));
    /* 0078523e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00785241: call 0x5ca4b8 */ r_esp -= 4; W32(r_esp, 0x785246u); f_005ca4b8();
    /* 00785246: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00785248: call 0x806fa0 */ r_esp -= 4; W32(r_esp, 0x78524du); f_00806fa0();
    /* 0078524d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078524e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x785253u); f_006dc358();
    /* 00785253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785255: jne 0x785263 */ if (!fZ) goto L_00785263;
L_00785257:; BB(0x00785257);
    /* 00785257: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078525a: mov dword ptr [eax + 0x24], 0x1e */ W32((u32)(r_eax+0x24u), 0x1eu);
    /* 00785261: jmp 0x785272 */ goto L_00785272;
L_00785263:; BB(0x00785263);
    /* 00785263: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785266: jne 0x785272 */ if (!fZ) goto L_00785272;
L_00785268:; BB(0x00785268);
    /* 00785268: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078526b: mov dword ptr [eax + 0x24], 0x19 */ W32((u32)(r_eax+0x24u), 0x19u);
L_00785272:; BB(0x00785272);
    /* 00785272: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00785279: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078527e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x785283u); f_005caba4();
    /* 00785283: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785284: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00785287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785289: je 0x7852ae */ if (fZ) goto L_007852ae;
L_0078528b:; BB(0x0078528b);
    /* 0078528b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00785292: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00785299: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078529f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007852a2: call 0x786120 */ r_esp -= 4; W32(r_esp, 0x7852a7u); f_00786120();
    /* 007852a7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_007852ae:; BB(0x007852ae);
    /* 007852ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007852b5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007852bc: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 007852c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7852c6u); f_005caba4();
    /* 007852c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007852c7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007852ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007852cc: je 0x7852ee */ if (fZ) goto L_007852ee;
L_007852ce:; BB(0x007852ce);
    /* 007852ce: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007852d5: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007852dc: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007852df: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007852e2: call 0x7855c4 */ r_esp -= 4; W32(r_esp, 0x7852e7u); f_007855c4();
    /* 007852e7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007852ee:; BB(0x007852ee);
    /* 007852ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007852f5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007852fc: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00785301: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x785306u); f_005caba4();
    /* 00785306: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785307: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0078530a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078530c: je 0x78532e */ if (fZ) goto L_0078532e;
L_0078530e:; BB(0x0078530e);
    /* 0078530e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00785315: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0078531c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078531f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00785322: call 0x785b88 */ r_esp -= 4; W32(r_esp, 0x785327u); f_00785b88();
    /* 00785327: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0078532e:; BB(0x0078532e);
    /* 0078532e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00785335: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00785338: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078533a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078533c: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0078533f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00785342: mov dword ptr [0xa9c1f8], edx */ W32((u32)(0xa9c1f8u), r_edx);
    /* 00785348: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0078534b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x785350u); f_005caba4();
    /* 00785350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785351: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00785354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785356: je 0x7853ef */ if (fZ) goto L_007853ef;
L_0078535c:; BB(0x0078535c);
    /* 0078535c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00785363: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0078536a: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078536d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00785370: call 0x411050 */ r_esp -= 4; W32(r_esp, 0x785375u); f_00411050();
    /* 00785375: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00785378: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0078537f:; BB(0x0078537f);
    /* 0078537f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00785382: mov dword ptr [eax + 0x70c], ecx */ W32((u32)(r_eax+0x70cu), r_ecx);
    /* 00785388: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078538f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785391: je 0x7853a5 */ if (fZ) goto L_007853a5;
L_00785393:; BB(0x00785393);
    /* 00785393: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00785396: fmul dword ptr [0x979d64] */ ST(0) = ST(0) * R_F32((u32)(0x979d64u));
    /* 0078539c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078539d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007853a0: call 0x41137c */ r_esp -= 4; W32(r_esp, 0x7853a5u); f_0041137c();
L_007853a5:; BB(0x007853a5);
    /* 007853a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007853ac: push 0x197c */ { u32 v = 0x197cu; r_esp -= 4; W32(r_esp, v); }
    /* 007853b1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7853b6u); f_005caba4();
    /* 007853b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007853b7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007853ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007853bc: je 0x7853de */ if (fZ) goto L_007853de;
L_007853be:; BB(0x007853be);
    /* 007853be: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007853c5: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 007853cc: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007853cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007853d2: call 0x409100 */ r_esp -= 4; W32(r_esp, 0x7853d7u); f_00409100();
    /* 007853d7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007853de:; BB(0x007853de);
    /* 007853de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007853e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007853e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007853eb: mov esp, ebp */ r_esp = r_ebp;
    /* 007853ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007853ee: ret  */ FN_RET(0x007851f4); r_esp += 4; return;
L_007853ef:; BB(0x007853ef);
    /* 007853ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007853f1: jmp 0x78537f */ goto L_0078537f;
}

void f_007853f4(void) /* sub_7853F4 */
{
    FN_ENTER(0x007853f4);
    /* 007853f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007853f5: mov ebp, esp */ r_ebp = r_esp;
    /* 007853f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007853f9: push 0x8f4886 */ { u32 v = 0x8f4886u; r_esp -= 4; W32(r_esp, v); }
    /* 007853fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00785404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785405: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078540c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078540f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00785412: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00785415: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00785418: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078541b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078541d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078541e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078541f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785420: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x785425u); f_0082acd8();
    /* 00785425: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00785428: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x78542du); f_007bebe8();
    /* 0078542d: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 00785432: call 0x794034 */ r_esp -= 4; W32(r_esp, 0x785437u); f_00794034();
    /* 00785437: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0078543e: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00785443: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x785448u); f_005caba4();
    /* 00785448: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078544b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0078544e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785450: je 0x785475 */ if (fZ) goto L_00785475;
L_00785452:; BB(0x00785452);
    /* 00785452: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00785459: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00785460: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785466: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00785469: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x78546eu); f_004d3408();
    /* 0078546e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00785475:; BB(0x00785475);
    /* 00785475: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078547c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00785483: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00785485: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0078548c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00785493: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078549a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007854a1: mov dword ptr [ebp - 0x28], 0xc2c80000 */ W32((u32)(r_ebp+0xffffffd8u), 0xc2c80000u);
    /* 007854a8: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x7854adu); f_004d30fc();
    /* 007854ad: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 007854b0: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 007854b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007854b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007854b5: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x7854bau); f_004d33c0();
    /* 007854ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007854bd: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x7854c2u); f_005b9380();
    /* 007854c2: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 007854c4: push 0x9f9940 */ { u32 v = 0x9f9940u; r_esp -= 4; W32(r_esp, v); }
    /* 007854c9: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7854ceu); f_0078b184();
    /* 007854ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007854d0: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7854d5u); f_007a6198();
    /* 007854d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007854d7: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7854dcu); f_007a618c();
    /* 007854dc: push 0x979304 */ { u32 v = 0x979304u; r_esp -= 4; W32(r_esp, v); }
    /* 007854e1: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x7854e6u); f_00814afc();
    /* 007854e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007854e9: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7854eeu); f_008013bc();
    /* 007854ee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007854f5: push 0x710 */ { u32 v = 0x710u; r_esp -= 4; W32(r_esp, v); }
    /* 007854fa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7854ffu); f_005caba4();
    /* 007854ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785500: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00785503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785505: je 0x785524 */ if (fZ) goto L_00785524;
L_00785507:; BB(0x00785507);
    /* 00785507: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078550e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00785515: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00785518: call 0x7851f4 */ r_esp -= 4; W32(r_esp, 0x78551du); f_007851f4();
    /* 0078551d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00785524:; BB(0x00785524);
    /* 00785524: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078552b: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x785530u); f_0080030c();
    /* 00785530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00785533: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078553a: mov esp, ebp */ r_esp = r_ebp;
    /* 0078553c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078553d: ret  */ FN_RET(0x007853f4); r_esp += 4; return;
}

void f_00785540(void) /* sub_785540 */
{
    FN_ENTER(0x00785540);
    /* 00785540: mov dword ptr [0xa9c1f4], 1 */ W32((u32)(0xa9c1f4u), 0x1u);
    /* 0078554a: call 0x7853f4 */ r_esp -= 4; W32(r_esp, 0x78554fu); f_007853f4();
    /* 0078554f: ret  */ FN_RET(0x00785540); r_esp += 4; return;
}

void f_00785550(void) /* sub_785550 */
{
    FN_ENTER(0x00785550);
    /* 00785550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00785551: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00785553: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00785555: call 0x785574 */ r_esp -= 4; W32(r_esp, 0x78555au); f_00785574();
    /* 0078555a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078555e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785560: jne 0x785566 */ if (!fZ) goto L_00785566;
L_00785562:; BB(0x00785562);
    /* 00785562: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00785563: ret 4 */ FN_RET(0x00785550); r_esp += 8; return;
L_00785566:; BB(0x00785566);
    /* 00785566: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00785567: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78556cu); f_005c2f74();
    /* 0078556c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078556d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078556e: ret 4 */ FN_RET(0x00785550); r_esp += 8; return;
}

void f_00785574(void) /* sub_785574 */
{
    FN_ENTER(0x00785574);
    /* 00785574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00785575: mov ebp, esp */ r_ebp = r_esp;
    /* 00785577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00785579: push 0x8f48a0 */ { u32 v = 0x8f48a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078557e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00785584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078558c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078558f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00785592: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00785595: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00785598: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078559b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078559e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007855a1: mov dword ptr [ecx], 0xb44a60 */ W32((u32)(r_ecx), 0xb44a60u);
    /* 007855a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007855ae: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7855b3u); f_008171e8();
    /* 007855b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007855b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007855bd: mov esp, ebp */ r_esp = r_ebp;
    /* 007855bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007855c0: ret  */ FN_RET(0x00785574); r_esp += 4; return;
}

void f_007855c4(void) /* sub_7855C4 */
{
    FN_ENTER(0x007855c4);
    /* 007855c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007855c5: mov esi, ecx */ r_esi = r_ecx;
    /* 007855c7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007855cb: mov ecx, esi */ r_ecx = r_esi;
    /* 007855cd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7855d2u); f_008193cc();
    /* 007855d2: mov dword ptr [esi], 0xb44a60 */ W32((u32)(r_esi), 0xb44a60u);
    /* 007855d8: mov eax, dword ptr [0x9f9cc8] */ r_eax = R32((u32)(0x9f9cc8u));
    /* 007855dd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007855e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007855e2: mov dword ptr [esi + 0x1c], 0xffffffff */ W32((u32)(r_esi+0x1cu), 0xffffffffu);
    /* 007855e9: mov dword ptr [0xa9c204], edx */ W32((u32)(0xa9c204u), r_edx);
    /* 007855ef: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 007855f2: mov dword ptr [esi + 0x20], 0xff */ W32((u32)(r_esi+0x20u), 0xffu);
    /* 007855f9: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 007855fc: mov ecx, esi */ r_ecx = r_esi;
    /* 007855fe: call 0x785630 */ r_esp -= 4; W32(r_esp, 0x785603u); f_00785630();
    /* 00785603: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x785608u); f_006dc358();
    /* 00785608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078560a: jne 0x785618 */ if (!fZ) goto L_00785618;
L_0078560c:; BB(0x0078560c);
    /* 0078560c: mov dword ptr [esi + 0xec], 0x1e */ W32((u32)(r_esi+0xecu), 0x1eu);
    /* 00785616: jmp 0x785627 */ goto L_00785627;
L_00785618:; BB(0x00785618);
    /* 00785618: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078561b: jne 0x785627 */ if (!fZ) goto L_00785627;
L_0078561d:; BB(0x0078561d);
    /* 0078561d: mov dword ptr [esi + 0xec], 0x19 */ W32((u32)(r_esi+0xecu), 0x19u);
L_00785627:; BB(0x00785627);
    /* 00785627: mov eax, esi */ r_eax = r_esi;
    /* 00785629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078562a: ret 4 */ FN_RET(0x007855c4); r_esp += 8; return;
}

void f_00785630(void) /* sub_785630 */
{
    FN_ENTER(0x00785630);
    /* 00785630: mov dword ptr [ecx + 0x2c], 0x43640000 */ W32((u32)(r_ecx+0x2cu), 0x43640000u);
    /* 00785637: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0078563e: mov dword ptr [ecx + 0x34], 0x44200000 */ W32((u32)(r_ecx+0x34u), 0x44200000u);
    /* 00785645: mov dword ptr [ecx + 0x38], 0x43f00000 */ W32((u32)(r_ecx+0x38u), 0x43f00000u);
    /* 0078564c: mov dword ptr [ecx + 0x3c], 0x3e480000 */ W32((u32)(r_ecx+0x3cu), 0x3e480000u);
    /* 00785653: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0078565a: mov dword ptr [ecx + 0x44], 0x3f800000 */ W32((u32)(r_ecx+0x44u), 0x3f800000u);
    /* 00785661: mov dword ptr [ecx + 0x48], 0x3f700000 */ W32((u32)(r_ecx+0x48u), 0x3f700000u);
    /* 00785668: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 0078566f: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00785676: mov dword ptr [ecx + 0x54], 0x42c80000 */ W32((u32)(r_ecx+0x54u), 0x42c80000u);
    /* 0078567d: mov dword ptr [ecx + 0x58], 0x43f00000 */ W32((u32)(r_ecx+0x58u), 0x43f00000u);
    /* 00785684: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 0078568b: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00785692: mov dword ptr [ecx + 0x64], 0x3e480000 */ W32((u32)(r_ecx+0x64u), 0x3e480000u);
    /* 00785699: mov dword ptr [ecx + 0x68], 0x3f700000 */ W32((u32)(r_ecx+0x68u), 0x3f700000u);
    /* 007856a0: mov dword ptr [ecx + 0x6c], 0x43640000 */ W32((u32)(r_ecx+0x6cu), 0x43640000u);
    /* 007856a7: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 007856ae: mov dword ptr [ecx + 0x74], 0x44200000 */ W32((u32)(r_ecx+0x74u), 0x44200000u);
    /* 007856b5: mov dword ptr [ecx + 0x78], 0x43f00000 */ W32((u32)(r_ecx+0x78u), 0x43f00000u);
    /* 007856bc: mov dword ptr [ecx + 0x7c], 0x3e480000 */ W32((u32)(r_ecx+0x7cu), 0x3e480000u);
    /* 007856c3: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 007856cd: mov dword ptr [ecx + 0x84], 0x3f800000 */ W32((u32)(r_ecx+0x84u), 0x3f800000u);
    /* 007856d7: mov dword ptr [ecx + 0x88], 0x3f700000 */ W32((u32)(r_ecx+0x88u), 0x3f700000u);
    /* 007856e1: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 007856eb: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 007856f5: mov dword ptr [ecx + 0x94], 0x42c80000 */ W32((u32)(r_ecx+0x94u), 0x42c80000u);
    /* 007856ff: mov dword ptr [ecx + 0x98], 0x43f00000 */ W32((u32)(r_ecx+0x98u), 0x43f00000u);
    /* 00785709: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 00785713: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
    /* 0078571d: mov dword ptr [ecx + 0xa4], 0x3e480000 */ W32((u32)(r_ecx+0xa4u), 0x3e480000u);
    /* 00785727: mov dword ptr [ecx + 0xa8], 0x3f700000 */ W32((u32)(r_ecx+0xa8u), 0x3f700000u);
    /* 00785731: mov dword ptr [ecx + 0xac], 0x439e0000 */ W32((u32)(r_ecx+0xacu), 0x439e0000u);
    /* 0078573b: mov dword ptr [ecx + 0xb0], 0x42000000 */ W32((u32)(r_ecx+0xb0u), 0x42000000u);
    /* 00785745: mov dword ptr [ecx + 0xb4], 0x441a0000 */ W32((u32)(r_ecx+0xb4u), 0x441a0000u);
    /* 0078574f: mov dword ptr [ecx + 0xb8], 0x43a60000 */ W32((u32)(r_ecx+0xb8u), 0x43a60000u);
    /* 00785759: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
    /* 00785763: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 0078576d: mov dword ptr [ecx + 0xc4], 0x3f800000 */ W32((u32)(r_ecx+0xc4u), 0x3f800000u);
    /* 00785777: mov dword ptr [ecx + 0xc8], 0x3f800000 */ W32((u32)(r_ecx+0xc8u), 0x3f800000u);
    /* 00785781: mov dword ptr [ecx + 0xcc], 0x439e0000 */ W32((u32)(r_ecx+0xccu), 0x439e0000u);
    /* 0078578b: mov dword ptr [ecx + 0xd0], 0x43140000 */ W32((u32)(r_ecx+0xd0u), 0x43140000u);
    /* 00785795: mov dword ptr [ecx + 0xd4], 0x441a0000 */ W32((u32)(r_ecx+0xd4u), 0x441a0000u);
    /* 0078579f: mov dword ptr [ecx + 0xd8], 0x43e00000 */ W32((u32)(r_ecx+0xd8u), 0x43e00000u);
    /* 007857a9: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
    /* 007857b3: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
    /* 007857bd: mov dword ptr [ecx + 0xe4], 0x3f800000 */ W32((u32)(r_ecx+0xe4u), 0x3f800000u);
    /* 007857c7: mov dword ptr [ecx + 0xe8], 0x3f800000 */ W32((u32)(r_ecx+0xe8u), 0x3f800000u);
    /* 007857d1: ret  */ FN_RET(0x00785630); r_esp += 4; return;
}

void f_007857d4(void) /* sub_7857D4 */
{
    FN_ENTER(0x007857d4);
    /* 007857d4: call 0x7857dc */ r_esp -= 4; W32(r_esp, 0x7857d9u); f_007857dc();
    /* 007857d9: ret  */ FN_RET(0x007857d4); r_esp += 4; return;
}

void f_007857dc(void) /* sub_7857DC */
{
    FN_ENTER(0x007857dc);
    /* 007857dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007857dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007857de: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007857e0: mov eax, dword ptr [0xa9c204] */ r_eax = R32((u32)(0xa9c204u));
    /* 007857e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007857e7: je 0x7858a5 */ if (fZ) goto L_007858a5;
L_007857ed:; BB(0x007857ed);
    /* 007857ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007857f0: je 0x7858d4 */ if (fZ) goto L_007858d4;
L_007857f6:; BB(0x007857f6);
    /* 007857f6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007857f9: je 0x7858a8 */ if (fZ) goto L_007858a8;
L_007857ff:; BB(0x007857ff);
    /* 007857ff: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785802: je 0x78586d */ if (fZ) goto L_0078586d;
L_00785804:; BB(0x00785804);
    /* 00785804: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785807: jne 0x78585e */ if (!fZ) goto L_0078585e;
L_00785809:; BB(0x00785809);
    /* 00785809: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 0078580c: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 00785812: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00785815: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00785818: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078581a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078581c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078581e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785820: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785822: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785824: jg 0x78582c */ if ((!fZ&&fS==fO)) goto L_0078582c;
L_00785826:; BB(0x00785826);
    /* 00785826: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 00785829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078582a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078582b: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_0078582c:; BB(0x0078582c);
    /* 0078582c: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0078582f: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00785836: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785839: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078583c: jg 0x78584e */ if ((!fZ&&fS==fO)) goto L_0078584e;
L_0078583e:; BB(0x0078583e);
    /* 0078583e: mov dword ptr [0xa9c204], 1 */ W32((u32)(0xa9c204u), 0x1u);
    /* 00785848: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0078584b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078584c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078584d: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_0078584e:; BB(0x0078584e);
    /* 0078584e: mov eax, 5 */ r_eax = 0x5u;
    /* 00785853: mov dword ptr [0xa9c204], eax */ W32((u32)(0xa9c204u), r_eax);
    /* 00785858: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0078585b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078585c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078585d: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_0078585e:; BB(0x0078585e);
    /* 0078585e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785861: jne 0x7858a5 */ if (!fZ) goto L_007858a5;
L_00785863:; BB(0x00785863);
    /* 00785863: mov dword ptr [ebp + 0x28], 5 */ W32((u32)(r_ebp+0x28u), 0x5u);
    /* 0078586a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078586b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078586c: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_0078586d:; BB(0x0078586d);
    /* 0078586d: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 00785870: mov edx, dword ptr [ebp + 0xec] */ r_edx = R32((u32)(r_ebp+0xecu));
    /* 00785876: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00785879: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 0078587c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0078587f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00785882: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785884: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785886: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785888: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0078588a: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078588c: jle 0x7858a5 */ if ((fZ||fS!=fO)) goto L_007858a5;
L_0078588e:; BB(0x0078588e);
    /* 0078588e: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785891: mov dword ptr [0xa9c204], 4 */ W32((u32)(0xa9c204u), 0x4u);
    /* 0078589b: call 0x408eb0 */ r_esp -= 4; W32(r_esp, 0x7858a0u); f_00408eb0();
    /* 007858a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007858a1: add dword ptr [ebp + 0x24], 1 */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007858a5:; BB(0x007858a5);
    /* 007858a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007858a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007858a7: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_007858a8:; BB(0x007858a8);
    /* 007858a8: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 007858ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007858ae: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007858b1: mov ebp, dword ptr [ebp + 0xec] */ r_ebp = R32((u32)(r_ebp+0xecu));
    /* 007858b7: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007858bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007858bd: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007858bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007858c1: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007858c3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007858c5: jle 0x7858a5 */ if ((fZ||fS!=fO)) goto L_007858a5;
L_007858c7:; BB(0x007858c7);
    /* 007858c7: mov dword ptr [0xa9c204], 3 */ W32((u32)(0xa9c204u), 0x3u);
    /* 007858d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007858d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007858d3: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
L_007858d4:; BB(0x007858d4);
    /* 007858d4: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 007858d7: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 007858dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007858e0: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 007858e3: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007858e6: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007858e8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007858ea: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007858ec: jle 0x7858a5 */ if ((fZ||fS!=fO)) goto L_007858a5;
L_007858ee:; BB(0x007858ee);
    /* 007858ee: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007858f1: mov dword ptr [0xa9c204], 2 */ W32((u32)(0xa9c204u), 0x2u);
    /* 007858fb: call 0x408eb0 */ r_esp -= 4; W32(r_esp, 0x785900u); f_00408eb0();
    /* 00785900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785901: add dword ptr [ebp + 0x24], 1 */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00785905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785906: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785907: ret  */ FN_RET(0x007857dc); r_esp += 4; return;
}

void f_00785908(void) /* sub_785908 */
{
    FN_ENTER(0x00785908);
    /* 00785908: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00785909: mov esi, ecx */ r_esi = r_ecx;
    /* 0078590b: mov eax, dword ptr [0xa9c204] */ r_eax = R32((u32)(0xa9c204u));
    /* 00785910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785912: jne 0x785916 */ if (!fZ) goto L_00785916;
L_00785914:; BB(0x00785914);
    /* 00785914: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785915: ret  */ FN_RET(0x00785908); r_esp += 4; return;
L_00785916:; BB(0x00785916);
    /* 00785916: mov ecx, esi */ r_ecx = r_esi;
    /* 00785918: call 0x785930 */ r_esp -= 4; W32(r_esp, 0x78591du); f_00785930();
    /* 0078591d: mov ecx, esi */ r_ecx = r_esi;
    /* 0078591f: call 0x78596c */ r_esp -= 4; W32(r_esp, 0x785924u); f_0078596c();
    /* 00785924: mov ecx, esi */ r_ecx = r_esi;
    /* 00785926: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x78592bu); f_0061cdb0();
    /* 0078592b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078592c: ret  */ FN_RET(0x00785908); r_esp += 4; return;
}

void f_00785930(void) /* sub_785930 */
{
    FN_ENTER(0x00785930);
    /* 00785930: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00785935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785937: jl 0x78596b */ if ((fS!=fO)) goto L_0078596b;
L_00785939:; BB(0x00785939);
    /* 00785939: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078593c: jle 0x785960 */ if ((fZ||fS!=fO)) goto L_00785960;
L_0078593e:; BB(0x0078593e);
    /* 0078593e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785941: jne 0x78594f */ if (!fZ) goto L_0078594f;
L_00785943:; BB(0x00785943);
    /* 00785943: mov ecx, dword ptr [0xa9c200] */ r_ecx = R32((u32)(0xa9c200u));
    /* 00785949: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78594eu); f_00829cc8();
    /* 0078594e: ret  */ FN_RET(0x00785930); r_esp += 4; return;
L_0078594f:; BB(0x0078594f);
    /* 0078594f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785952: jne 0x78596b */ if (!fZ) goto L_0078596b;
L_00785954:; BB(0x00785954);
    /* 00785954: mov ecx, dword ptr [0xa9c200] */ r_ecx = R32((u32)(0xa9c200u));
    /* 0078595a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78595fu); f_00829cc8();
    /* 0078595f: ret  */ FN_RET(0x00785930); r_esp += 4; return;
L_00785960:; BB(0x00785960);
    /* 00785960: mov ecx, dword ptr [0xa9c200] */ r_ecx = R32((u32)(0xa9c200u));
    /* 00785966: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78596bu); f_00829cc8();
L_0078596b:; BB(0x0078596b);
    /* 0078596b: ret  */ FN_RET(0x00785930); r_esp += 4; return;
}

void f_0078596c(void) /* sub_78596C */
{
    FN_ENTER(0x0078596c);
    /* 0078596c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078596d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078596f: mov eax, dword ptr [0xa9c204] */ r_eax = R32((u32)(0xa9c204u));
    /* 00785974: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785977: je 0x785a6b */ if (fZ) goto L_00785a6b;
L_0078597d:; BB(0x0078597d);
    /* 0078597d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785980: je 0x785a0a */ if (fZ) goto L_00785a0a;
L_00785986:; BB(0x00785986);
    /* 00785986: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785989: je 0x785a6b */ if (fZ) goto L_00785a6b;
L_0078598f:; BB(0x0078598f);
    /* 0078598f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785992: jl 0x785a6b */ if ((fS!=fO)) goto L_00785a6b;
L_00785998:; BB(0x00785998);
    /* 00785998: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078599b: jg 0x785a6b */ if ((!fZ&&fS==fO)) goto L_00785a6b;
L_007859a1:; BB(0x007859a1);
    /* 007859a1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007859a6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7859abu); f_0082bb30();
    /* 007859ab: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007859ae: lea ecx, [eax + eax + 3] */ r_ecx = (u32)(r_eax+r_eax+0x3u);
    /* 007859b2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007859b7: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7859bcu); f_0082bb60();
    /* 007859bc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7859c1u); f_004ac444();
    /* 007859c1: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x7859c6u); f_007a93d8();
    /* 007859c6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007859cb: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7859d0u); f_0082bb30();
    /* 007859d0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007859d5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007859da: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7859dfu); f_0082bb60();
    /* 007859df: push 0x3f666666 */ { u32 v = 0x3f666666u; r_esp -= 4; W32(r_esp, v); }
    /* 007859e4: lea ecx, [ebp + 0x6c] */ r_ecx = (u32)(r_ebp+0x6cu);
    /* 007859e7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7859ecu); f_0082b440();
    /* 007859ec: push 0x3f666666 */ { u32 v = 0x3f666666u; r_esp -= 4; W32(r_esp, v); }
    /* 007859f1: add ebp, 0x8c */ {  u32 a = r_ebp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007859f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007859f9: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7859feu); f_0082b440();
    /* 007859fe: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x785a03u); f_004ac444();
    /* 00785a03: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x785a08u); f_007a9318();
    /* 00785a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785a09: ret  */ FN_RET(0x0078596c); r_esp += 4; return;
L_00785a0a:; BB(0x00785a0a);
    /* 00785a0a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00785a0f: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x785a14u); f_0082bb30();
    /* 00785a14: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00785a17: lea ecx, [eax + eax + 2] */ r_ecx = (u32)(r_eax+r_eax+0x2u);
    /* 00785a1b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00785a20: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x785a25u); f_0082bb60();
    /* 00785a25: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x785a2au); f_004ac444();
    /* 00785a2a: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x785a2fu); f_007a93d8();
    /* 00785a2f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00785a34: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x785a39u); f_0082bb30();
    /* 00785a39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00785a3b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00785a40: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x785a45u); f_0082bb60();
    /* 00785a45: push 0x3f666666 */ { u32 v = 0x3f666666u; r_esp -= 4; W32(r_esp, v); }
    /* 00785a4a: lea ecx, [ebp + 0x2c] */ r_ecx = (u32)(r_ebp+0x2cu);
    /* 00785a4d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x785a52u); f_0082b440();
    /* 00785a52: push 0x3f666666 */ { u32 v = 0x3f666666u; r_esp -= 4; W32(r_esp, v); }
    /* 00785a57: add ebp, 0x4c */ {  u32 a = r_ebp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00785a5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00785a5c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x785a61u); f_0082b440();
    /* 00785a61: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x785a66u); f_004ac444();
    /* 00785a66: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x785a6bu); f_007a9318();
L_00785a6b:; BB(0x00785a6b);
    /* 00785a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785a6c: ret  */ FN_RET(0x0078596c); r_esp += 4; return;
}

void f_00785a70(void) /* sub_785A70 */
{
    FN_ENTER(0x00785a70);
    /* 00785a70: mov ecx, dword ptr [0xa9c200] */ r_ecx = R32((u32)(0xa9c200u));
    /* 00785a76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785a78: je 0x785a89 */ if (fZ) goto L_00785a89;
L_00785a7a:; BB(0x00785a7a);
    /* 00785a7a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x785a7fu); f_00829de0();
    /* 00785a7f: mov dword ptr [0xa9c200], 0 */ W32((u32)(0xa9c200u), 0x0u);
L_00785a89:; BB(0x00785a89);
    /* 00785a89: ret  */ FN_RET(0x00785a70); r_esp += 4; return;
}

void f_00785a8c(void) /* sub_785A8C */
{
    FN_ENTER(0x00785a8c);
    /* 00785a8c: mov eax, dword ptr [0xa9c1f4] */ r_eax = R32((u32)(0xa9c1f4u));
    /* 00785a91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785a93: jne 0x785af8 */ if (!fZ) goto L_00785af8;
L_00785a95:; BB(0x00785a95);
    /* 00785a95: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00785a9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785a9c: jl 0x785b10 */ if ((fS!=fO)) goto L_00785b10;
L_00785a9e:; BB(0x00785a9e);
    /* 00785a9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00785aa1: jle 0x785adf */ if ((fZ||fS!=fO)) goto L_00785adf;
L_00785aa3:; BB(0x00785aa3);
    /* 00785aa3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785aa6: jne 0x785ac1 */ if (!fZ) goto L_00785ac1;
L_00785aa8:; BB(0x00785aa8);
    /* 00785aa8: mov eax, 0x9f9cb0 */ r_eax = 0x9f9cb0u;
    /* 00785aad: mov dword ptr [0xa9c200], eax */ W32((u32)(0xa9c200u), r_eax);
    /* 00785ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785ab3: push 0x97a0e8 */ { u32 v = 0x97a0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00785ab8: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x785abdu); f_0081a7d8();
    /* 00785abd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00785ac0: ret  */ FN_RET(0x00785a8c); r_esp += 4; return;
L_00785ac1:; BB(0x00785ac1);
    /* 00785ac1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785ac4: jne 0x785b10 */ if (!fZ) goto L_00785b10;
L_00785ac6:; BB(0x00785ac6);
    /* 00785ac6: mov eax, 0x9f9cb8 */ r_eax = 0x9f9cb8u;
    /* 00785acb: mov dword ptr [0xa9c200], eax */ W32((u32)(0xa9c200u), r_eax);
    /* 00785ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785ad1: push 0x97a0fc */ { u32 v = 0x97a0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00785ad6: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x785adbu); f_0081a7d8();
    /* 00785adb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00785ade: ret  */ FN_RET(0x00785a8c); r_esp += 4; return;
L_00785adf:; BB(0x00785adf);
    /* 00785adf: mov eax, 0x9f9ca8 */ r_eax = 0x9f9ca8u;
    /* 00785ae4: mov dword ptr [0xa9c200], eax */ W32((u32)(0xa9c200u), r_eax);
    /* 00785ae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785aea: push 0x97a0d4 */ { u32 v = 0x97a0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00785aef: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x785af4u); f_0081a7d8();
    /* 00785af4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00785af7: ret  */ FN_RET(0x00785a8c); r_esp += 4; return;
L_00785af8:; BB(0x00785af8);
    /* 00785af8: mov eax, 0x9f9cc0 */ r_eax = 0x9f9cc0u;
    /* 00785afd: mov dword ptr [0xa9c200], eax */ W32((u32)(0xa9c200u), r_eax);
    /* 00785b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785b03: push 0x97a0bc */ { u32 v = 0x97a0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00785b08: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x785b0du); f_0081a7d8();
    /* 00785b0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00785b10:; BB(0x00785b10);
    /* 00785b10: ret  */ FN_RET(0x00785a8c); r_esp += 4; return;
}

void f_00785b14(void) /* sub_785B14 */
{
    FN_ENTER(0x00785b14);
    /* 00785b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00785b15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00785b17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00785b19: call 0x785b38 */ r_esp -= 4; W32(r_esp, 0x785b1eu); f_00785b38();
    /* 00785b1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00785b22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00785b24: jne 0x785b2a */ if (!fZ) goto L_00785b2a;
L_00785b26:; BB(0x00785b26);
    /* 00785b26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00785b27: ret 4 */ FN_RET(0x00785b14); r_esp += 8; return;
L_00785b2a:; BB(0x00785b2a);
    /* 00785b2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00785b2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x785b30u); f_005c2f74();
    /* 00785b30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00785b31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00785b32: ret 4 */ FN_RET(0x00785b14); r_esp += 8; return;
}

void f_00785b38(void) /* sub_785B38 */
{
    FN_ENTER(0x00785b38);
    /* 00785b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00785b39: mov ebp, esp */ r_ebp = r_esp;
    /* 00785b3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00785b3d: push 0x8f48bc */ { u32 v = 0x8f48bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00785b42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00785b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00785b49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00785b50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00785b53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00785b56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00785b59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00785b5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00785b5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00785b62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00785b65: mov dword ptr [ecx], 0xb44a98 */ W32((u32)(r_ecx), 0xb44a98u);
    /* 00785b6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00785b72: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x785b77u); f_008171e8();
    /* 00785b77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00785b7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00785b81: mov esp, ebp */ r_esp = r_ebp;
    /* 00785b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785b84: ret  */ FN_RET(0x00785b38); r_esp += 4; return;
}

void f_00785b88(void) /* sub_785B88 */
{
    FN_ENTER(0x00785b88);
    /* 00785b88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00785b89: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00785b8c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00785b8e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785b92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00785b94: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x785b99u); f_008193cc();
    /* 00785b99: mov dword ptr [ebp], 0xb44a98 */ W32((u32)(r_ebp), 0xb44a98u);
    /* 00785ba0: mov eax, dword ptr [0x9f9d00] */ r_eax = R32((u32)(0x9f9d00u));
    /* 00785ba5: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00785ba8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00785baa: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 00785bb1: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00785bb4: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00785bb7: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00785bba: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 00785bc1: mov dword ptr [ebp + 0x30], 0x43640000 */ W32((u32)(r_ebp+0x30u), 0x43640000u);
    /* 00785bc8: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 00785bcf: mov dword ptr [ebp + 0x38], 0x44200000 */ W32((u32)(r_ebp+0x38u), 0x44200000u);
    /* 00785bd6: mov dword ptr [ebp + 0x3c], 0x43f00000 */ W32((u32)(r_ebp+0x3cu), 0x43f00000u);
    /* 00785bdd: mov dword ptr [ebp + 0x40], 0x3e480000 */ W32((u32)(r_ebp+0x40u), 0x3e480000u);
    /* 00785be4: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 00785beb: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
    /* 00785bf2: mov dword ptr [ebp + 0x4c], 0x3f700000 */ W32((u32)(r_ebp+0x4cu), 0x3f700000u);
    /* 00785bf9: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00785c00: mov dword ptr [ebp + 0x54], 0 */ W32((u32)(r_ebp+0x54u), 0x0u);
    /* 00785c07: mov dword ptr [ebp + 0x58], 0x42c80000 */ W32((u32)(r_ebp+0x58u), 0x42c80000u);
    /* 00785c0e: mov dword ptr [ebp + 0x5c], 0x43f00000 */ W32((u32)(r_ebp+0x5cu), 0x43f00000u);
    /* 00785c15: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00785c1c: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
    /* 00785c23: mov dword ptr [ebp + 0x68], 0x3e480000 */ W32((u32)(r_ebp+0x68u), 0x3e480000u);
    /* 00785c2a: mov dword ptr [ebp + 0x6c], 0x3f700000 */ W32((u32)(r_ebp+0x6cu), 0x3f700000u);
    /* 00785c31: mov dword ptr [ebp + 0x70], 0x41200000 */ W32((u32)(r_ebp+0x70u), 0x41200000u);
    /* 00785c38: mov dword ptr [ebp + 0x74], 0 */ W32((u32)(r_ebp+0x74u), 0x0u);
    /* 00785c3f: mov dword ptr [ebp + 0x78], 0x43aa0000 */ W32((u32)(r_ebp+0x78u), 0x43aa0000u);
    /* 00785c46: mov dword ptr [ebp + 0x7c], 0x43f00000 */ W32((u32)(r_ebp+0x7cu), 0x43f00000u);
    /* 00785c4d: mov dword ptr [ebp + 0x80], 0 */ W32((u32)(r_ebp+0x80u), 0x0u);
    /* 00785c57: mov dword ptr [ebp + 0x84], 0 */ W32((u32)(r_ebp+0x84u), 0x0u);
    /* 00785c61: mov dword ptr [ebp + 0x88], 0x3f800000 */ W32((u32)(r_ebp+0x88u), 0x3f800000u);
    /* 00785c6b: mov dword ptr [ebp + 0x8c], 0x3f800000 */ W32((u32)(r_ebp+0x8cu), 0x3f800000u);
    /* 00785c75: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x785c7au); f_006dc358();
    /* 00785c7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785c7c: jne 0x785c8f */ if (!fZ) goto L_00785c8f;
L_00785c7e:; BB(0x00785c7e);
    /* 00785c7e: mov dword ptr [ebp + 0x90], 0x1e */ W32((u32)(r_ebp+0x90u), 0x1eu);
    /* 00785c88: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00785c8d: jmp 0x785cab */ goto L_00785cab;
L_00785c8f:; BB(0x00785c8f);
    /* 00785c8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00785c92: jne 0x785ca5 */ if (!fZ) goto L_00785ca5;
L_00785c94:; BB(0x00785c94);
    /* 00785c94: mov dword ptr [ebp + 0x90], 0x19 */ W32((u32)(r_ebp+0x90u), 0x19u);
    /* 00785c9e: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00785ca3: jmp 0x785cab */ goto L_00785cab;
L_00785ca5:; BB(0x00785ca5);
    /* 00785ca5: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
L_00785cab:; BB(0x00785cab);
    /* 00785cab: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00785cae: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00785cb1: fmul dword ptr [0x97a150] */ ST(0) = ST(0) * R_F32((u32)(0x97a150u));
    /* 00785cb7: fst dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0));
    /* 00785cbd: mov eax, ebp */ r_eax = r_ebp;
    /* 00785cbf: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 00785cc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00785cc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785cc9: ret 4 */ FN_RET(0x00785b88); r_esp += 8; return;
}

void f_00785ccc(void) /* sub_785CCC */
{
    FN_ENTER(0x00785ccc);
    /* 00785ccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00785ccd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00785cce: mov edi, ecx */ r_edi = r_ecx;
    /* 00785cd0: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00785cd3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785cd6: ja 0x785fb1 */ if ((!fC&&!fZ)) goto L_00785fb1;
L_00785cdc:; BB(0x00785cdc);
    /* 00785cdc: mov eax, dword ptr [eax*4 + 0x97a110] */ r_eax = R32((u32)(r_eax*4+0x97a110u));
    /* 00785ce3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00785fb1:; BB(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785ccc); r_esp += 4; return;
}

void f_00785ce5(void)
{
    FN_ENTER(0x00785ce5);
    /* 00785ce5: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785ceb: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785cee: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 00785cf4: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785cf6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785cf8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785cfa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785cfc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785cfd: jae 0x785d0f */ if (!fC) goto L_00785d0f;
L_00785cff:; BB(0x00785cff);
    /* 00785cff: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785d05: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00785d07: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785d09: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785d0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785d0e: ret  */ FN_RET(0x00785ce5); r_esp += 4; return;
L_00785d0f:; BB(0x00785d0f);
    /* 00785d0f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00785d11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785d13: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 00785d1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785d1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785d1c: ret  */ FN_RET(0x00785ce5); r_esp += 4; return;
}

void f_00785d1d(void)
{
    FN_ENTER(0x00785d1d);
    /* 00785d1d: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785d23: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785d29: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785d2c: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 00785d32: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785d34: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785d36: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00785d38: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785d3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785d3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785d3d: jbe 0x785d47 */ if ((fC||fZ)) goto L_00785d47;
L_00785d3f:; BB(0x00785d3f);
    /* 00785d3f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785d41: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00785d43: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785d45: jmp 0x785d53 */ goto L_00785d53;
L_00785d47:; BB(0x00785d47);
    /* 00785d47: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00785d49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785d4b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785d4d: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
L_00785d53:; BB(0x00785d53);
    /* 00785d53: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 00785d56: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00785d5c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785d5f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00785d62: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785d64: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00785d66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785d68: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785d6a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785d6c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785d6e: jg 0x785d79 */ if ((!fZ&&fS==fO)) goto L_00785d79;
L_00785d70:; BB(0x00785d70);
    /* 00785d70: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785d73: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 00785d76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785d77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785d78: ret  */ FN_RET(0x00785d1d); r_esp += 4; return;
L_00785d79:; BB(0x00785d79);
    /* 00785d79: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785d7b: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 00785d82: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00785d87: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00785d8a: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
    /* 00785d91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785d92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785d93: ret  */ FN_RET(0x00785d1d); r_esp += 4; return;
}

void f_00785d94(void)
{
    FN_ENTER(0x00785d94);
    /* 00785d94: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785d9a: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785d9d: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 00785da3: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785da5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785da7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785da9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785dab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785dac: jae 0x785dba */ if (!fC) goto L_00785dba;
L_00785dae:; BB(0x00785dae);
    /* 00785dae: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785db4: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00785db6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785db8: jmp 0x785dc4 */ goto L_00785dc4;
L_00785dba:; BB(0x00785dba);
    /* 00785dba: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00785dbc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785dbe: fld dword ptr [0x97a148] */ FPUSH(R_F32((u32)(0x97a148u)));
L_00785dc4:; BB(0x00785dc4);
    /* 00785dc4: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00785dc7: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00785dcd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785dd0: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00785dd3: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00785dd6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785dd8: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00785dda: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785ddc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785dde: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00785de0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785de2: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785de4: jg 0x785dec */ if ((!fZ&&fS==fO)) goto L_00785dec;
L_00785de6:; BB(0x00785de6);
    /* 00785de6: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785de9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785dea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785deb: ret  */ FN_RET(0x00785d94); r_esp += 4; return;
L_00785dec:; BB(0x00785dec);
    /* 00785dec: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00785def: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785df2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785df5: jg 0x785e07 */ if ((!fZ&&fS==fO)) goto L_00785e07;
L_00785df7:; BB(0x00785df7);
    /* 00785df7: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785dfa: mov dword ptr [edi + 0x1c], 6 */ W32((u32)(r_edi+0x1cu), 0x6u);
    /* 00785e01: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00785e04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785e05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785e06: ret  */ FN_RET(0x00785d94); r_esp += 4; return;
L_00785e07:; BB(0x00785e07);
    /* 00785e07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785e09: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 00785e10: mov dword ptr [edi + 0x24], 5 */ W32((u32)(r_edi+0x24u), 0x5u);
    /* 00785e17: mov dword ptr [edi + 0x1c], 7 */ W32((u32)(r_edi+0x1cu), 0x7u);
    /* 00785e1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785e1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785e20: ret  */ FN_RET(0x00785d94); r_esp += 4; return;
}

void f_00785e21(void)
{
    FN_ENTER(0x00785e21);
    /* 00785e21: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785e27: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785e2d: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785e30: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 00785e36: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785e38: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785e3a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00785e3c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785e3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785e40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785e41: jbe 0x785e4e */ if ((fC||fZ)) goto L_00785e4e;
L_00785e43:; BB(0x00785e43);
    /* 00785e43: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785e45: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00785e47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785e49: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785e4c: jmp 0x785e5c */ goto L_00785e5c;
L_00785e4e:; BB(0x00785e4e);
    /* 00785e4e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00785e50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785e52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785e54: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00785e59: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
L_00785e5c:; BB(0x00785e5c);
    /* 00785e5c: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00785e5f: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00785e65: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785e68: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00785e6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785e6d: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00785e70: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785e72: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785e74: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785e76: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785e78: jle 0x785fb1 */ if ((fZ||fS!=fO)) goto L_00785fb1;
L_00785e7e:; BB(0x00785e7e);
    /* 00785e7e: mov dword ptr [edi + 0x1c], 5 */ W32((u32)(r_edi+0x1cu), 0x5u);
    /* 00785e85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785e87: ret  */ FN_RET(0x00785e21); r_esp += 4; return;
L_00785fb1:; BB(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785e21); r_esp += 4; return;
}

void f_00785e88(void)
{
    FN_ENTER(0x00785e88);
    /* 00785e88: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785e8e: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785e91: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 00785e97: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785e99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785e9b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785e9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785e9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785ea0: jae 0x785eb1 */ if (!fC) goto L_00785eb1;
L_00785ea2:; BB(0x00785ea2);
    /* 00785ea2: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785ea8: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00785eaa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785eac: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 00785eaf: jmp 0x785ebc */ goto L_00785ebc;
L_00785eb1:; BB(0x00785eb1);
    /* 00785eb1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00785eb3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785eb5: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
L_00785ebc:; BB(0x00785ebc);
    /* 00785ebc: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00785ebf: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00785ec5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785ec8: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00785ecb: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00785ece: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00785ed0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785ed2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785ed4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785ed6: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785ed8: jle 0x785fb1 */ if ((fZ||fS!=fO)) goto L_00785fb1;
L_00785ede:; BB(0x00785ede);
    /* 00785ede: mov dword ptr [edi + 0x1c], 4 */ W32((u32)(r_edi+0x1cu), 0x4u);
    /* 00785ee5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785ee6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785ee7: ret  */ FN_RET(0x00785e88); r_esp += 4; return;
L_00785fb1:; BB(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785e88); r_esp += 4; return;
}

void f_00785ee8(void)
{
    FN_ENTER(0x00785ee8);
    /* 00785ee8: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00785eeb: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00785ef1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785ef4: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00785ef7: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00785efa: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00785efc: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785efe: jle 0x785fb1 */ if ((fZ||fS!=fO)) goto L_00785fb1;
L_00785f04:; BB(0x00785f04);
    /* 00785f04: mov dword ptr [edi + 0x1c], 3 */ W32((u32)(r_edi+0x1cu), 0x3u);
    /* 00785f0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785f0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785f0d: ret  */ FN_RET(0x00785ee8); r_esp += 4; return;
L_00785fb1:; BB(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785ee8); r_esp += 4; return;
}

void f_00785f0e(void)
{
    FN_ENTER(0x00785f0e);
    /* 00785f0e: fld dword ptr [0x97a14c] */ FPUSH(R_F32((u32)(0x97a14cu)));
    /* 00785f14: fld dword ptr [0x97a144] */ FPUSH(R_F32((u32)(0x97a144u)));
    /* 00785f1a: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 00785f1d: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 00785f23: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00785f25: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00785f27: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00785f29: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00785f2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785f2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785f2e: jbe 0x785f61 */ if ((fC||fZ)) goto L_00785f61;
L_00785f30:; BB(0x00785f30);
    /* 00785f30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00785f32: fdivr st(2) */ ST(0) = ST(2) / ST(0);
    /* 00785f34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00785f36: fld dword ptr [0x97a140] */ FPUSH(R_F32((u32)(0x97a140u)));
    /* 00785f3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00785f3e: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 00785f41: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00785f43: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00785f45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00785f47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785f49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00785f4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00785f4c: jbe 0x785f5b */ if ((fC||fZ)) goto L_00785f5b;
L_00785f4e:; BB(0x00785f4e);
    /* 00785f4e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785f50: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00785f55: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00785f58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785f59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785f5a: ret  */ FN_RET(0x00785f0e); r_esp += 4; return;
L_00785f5b:; BB(0x00785f5b);
    /* 00785f5b: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 00785f5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785f5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785f60: ret  */ FN_RET(0x00785f0e); r_esp += 4; return;
L_00785f61:; BB(0x00785f61);
    /* 00785f61: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00785f63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00785f65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00785f67: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
    /* 00785f6e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00785f73: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00785f76: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00785f7b: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00785f7e: mov esi, 1 */ r_esi = 0x1u;
    /* 00785f83: mov dword ptr [0xa9c218], esi */ W32((u32)(0xa9c218u), r_esi);
    /* 00785f89: mov dword ptr [0xa9c204], esi */ W32((u32)(0xa9c204u), r_esi);
    /* 00785f8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785f90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785f91: ret  */ FN_RET(0x00785f0e); r_esp += 4; return;
}

void f_00785f92(void)
{
    FN_ENTER(0x00785f92);
    /* 00785f92: mov esi, dword ptr [0xa9c1f8] */ r_esi = R32((u32)(0xa9c1f8u));
    /* 00785f98: call 0x7851cc */ r_esp -= 4; W32(r_esp, 0x785f9du); f_007851cc();
    /* 00785f9d: mov edx, dword ptr [edi + 0x90] */ r_edx = R32((u32)(r_edi+0x90u));
    /* 00785fa3: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00785fa6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00785fa8: jbe 0x785fb1 */ if ((fC||fZ)) goto L_00785fb1;
L_00785faa:; BB(0x00785faa);
    /* 00785faa: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
L_00785fb1:; BB(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785f92); r_esp += 4; return;
}

void f_00785fb1(void)
{
    FN_ENTER(0x00785fb1);
    /* 00785fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00785fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00785fb3: ret  */ FN_RET(0x00785fb1); r_esp += 4; return;
}

void f_00785fb4(void) /* sub_785FB4 */
{
    FN_ENTER(0x00785fb4);
    /* 00785fb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00785fb5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00785fb8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00785fba: mov ecx, 0x9f9cf8 */ r_ecx = 0x9f9cf8u;
    /* 00785fbf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x785fc4u); f_00829cc8();
    /* 00785fc4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00785fc9: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x785fceu); f_0082bb30();
    /* 00785fce: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 00785fd1: fmul dword ptr [0x97a13c] */ ST(0) = ST(0) * R_F32((u32)(0x97a13cu));
    /* 00785fd7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00785fda: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00785fde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00785fe3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00785fe7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00785feb: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00785fef: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00785ff2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00785ff7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00785ffb: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00785ffe: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00786004: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x786009u); f_0082bb60();
    /* 00786009: push 0x3f7ae148 */ { u32 v = 0x3f7ae148u; r_esp -= 4; W32(r_esp, v); }
    /* 0078600e: lea ecx, [ebx + 0x30] */ r_ecx = (u32)(r_ebx+0x30u);
    /* 00786011: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x786016u); f_0082b440();
    /* 00786016: push 0x3f7ae148 */ { u32 v = 0x3f7ae148u; r_esp -= 4; W32(r_esp, v); }
    /* 0078601b: lea ecx, [ebx + 0x50] */ r_ecx = (u32)(r_ebx+0x50u);
    /* 0078601e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x786023u); f_0082b440();
    /* 00786023: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00786026: fmul dword ptr [0x97a13c] */ ST(0) = ST(0) * R_F32((u32)(0x97a13cu));
    /* 0078602c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078602f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00786033: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786038: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078603c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786040: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00786044: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00786047: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00786049: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0078604d: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00786050: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00786056: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78605bu); f_0082bb60();
    /* 0078605b: push 0x3f7d70a4 */ { u32 v = 0x3f7d70a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00786060: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00786063: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00786065: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78606au); f_0082b440();
    /* 0078606a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78606fu); f_004ac444();
    /* 0078606f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786072: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786073: ret  */ FN_RET(0x00785fb4); r_esp += 4; return;
}

