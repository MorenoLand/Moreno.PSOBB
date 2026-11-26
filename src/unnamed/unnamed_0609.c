#include "protos.h"

void f_00609010(void) /* sub_609010 */
{
    FN_ENTER(0x00609010);
    /* 00609010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609011: mov ebp, esp */ r_ebp = r_esp;
    /* 00609013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609015: push 0x8df280 */ { u32 v = 0x8df280u; r_esp -= 4; W32(r_esp, v); }
    /* 0060901a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609021: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609028: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060902b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060902e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609031: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609034: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609037: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060903a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060903d: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x609042u); f_00606c28();
    /* 00609042: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609049: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060904c: mov dword ptr [ecx], 0xb1eaa0 */ W32((u32)(r_ecx), 0xb1eaa0u);
    /* 00609052: mov eax, dword ptr [0xa8e4c4] */ r_eax = R32((u32)(0xa8e4c4u));
    /* 00609057: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609059: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0060905b: push 0x92f470 */ { u32 v = 0x92f470u; r_esp -= 4; W32(r_esp, v); }
    /* 00609060: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x609065u); f_007aa624();
    /* 00609065: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609068: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0060906e: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 00609072: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609078: mov word ptr [eax + 0xa], cx */ W16((u32)(r_eax+0xau), (u16)r_ecx);
    /* 0060907c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060907f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609082: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609089: mov esp, ebp */ r_esp = r_ebp;
    /* 0060908b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060908c: ret 4 */ FN_RET(0x00609010); r_esp += 8; return;
}

void f_00609090(void) /* sub_609090 */
{
    FN_ENTER(0x00609090);
    /* 00609090: mov eax, dword ptr [0xa8e798] */ r_eax = R32((u32)(0xa8e798u));
    /* 00609095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609097: je 0x6090a3 */ if (fZ) goto L_006090a3;
L_00609099:; BB(0x00609099);
    /* 00609099: mov dword ptr [0xa8e798], 0 */ W32((u32)(0xa8e798u), 0x0u);
L_006090a3:; BB(0x006090a3);
    /* 006090a3: ret  */ FN_RET(0x00609090); r_esp += 4; return;
}

void f_006090a4(void) /* sub_6090A4 */
{
    FN_ENTER(0x006090a4);
    /* 006090a4: mov dword ptr [0xa8e78c], 0x3f800000 */ W32((u32)(0xa8e78cu), 0x3f800000u);
    /* 006090ae: mov dword ptr [0xa8e790], 0x41000000 */ W32((u32)(0xa8e790u), 0x41000000u);
    /* 006090b8: mov dword ptr [0xa8e794], 0x3fc00000 */ W32((u32)(0xa8e794u), 0x3fc00000u);
    /* 006090c2: ret  */ FN_RET(0x006090a4); r_esp += 4; return;
}

void f_006090c4(void) /* sub_6090C4 */
{
    FN_ENTER(0x006090c4);
    /* 006090c4: mov eax, dword ptr [0xa9428c] */ r_eax = R32((u32)(0xa9428cu));
    /* 006090c9: mov dword ptr [0xa8e798], eax */ W32((u32)(0xa8e798u), r_eax);
    /* 006090ce: ret  */ FN_RET(0x006090c4); r_esp += 4; return;
}

void f_006090d0(void) /* sub_6090D0 */
{
    FN_ENTER(0x006090d0);
    /* 006090d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006090d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006090d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006090d5: call 0x6090f4 */ r_esp -= 4; W32(r_esp, 0x6090dau); f_006090f4();
    /* 006090da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006090de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006090e0: jne 0x6090e6 */ if (!fZ) goto L_006090e6;
L_006090e2:; BB(0x006090e2);
    /* 006090e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006090e3: ret 4 */ FN_RET(0x006090d0); r_esp += 8; return;
L_006090e6:; BB(0x006090e6);
    /* 006090e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006090e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6090ecu); f_005c2f74();
    /* 006090ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006090ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006090ee: ret 4 */ FN_RET(0x006090d0); r_esp += 8; return;
}

void f_006090f4(void) /* sub_6090F4 */
{
    FN_ENTER(0x006090f4);
    /* 006090f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006090f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006090f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006090f9: push 0x8df29c */ { u32 v = 0x8df29cu; r_esp -= 4; W32(r_esp, v); }
    /* 006090fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060910c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060910f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060911b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060911e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609121: mov dword ptr [ecx], 0xb1ece0 */ W32((u32)(r_ecx), 0xb1ece0u);
    /* 00609127: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060912e: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x609133u); f_00608fc0();
    /* 00609133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609136: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060913d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060913f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609140: ret  */ FN_RET(0x006090f4); r_esp += 4; return;
}

void f_00609144(void) /* sub_609144 */
{
    FN_ENTER(0x00609144);
    /* 00609144: mov ecx, dword ptr [0xa8e7a0] */ r_ecx = R32((u32)(0xa8e7a0u));
    /* 0060914a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060914c: je 0x609161 */ if (fZ) goto L_00609161;
L_0060914e:; BB(0x0060914e);
    /* 0060914e: je 0x609157 */ if (fZ) goto L_00609157;
L_00609150:; BB(0x00609150);
    /* 00609150: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609152: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x609157u); f_004066a8();
L_00609157:; BB(0x00609157);
    /* 00609157: mov dword ptr [0xa8e7a0], 0 */ W32((u32)(0xa8e7a0u), 0x0u);
L_00609161:; BB(0x00609161);
    /* 00609161: ret  */ FN_RET(0x00609144); r_esp += 4; return;
}

void f_00609164(void)
{
    FN_ENTER(0x00609164);
    /* 00609164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609165: mov ebp, esp */ r_ebp = r_esp;
    /* 00609167: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609169: push 0x8df2de */ { u32 v = 0x8df2deu; r_esp -= 4; W32(r_esp, v); }
    /* 0060916e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609175: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060917c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060917f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609182: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609185: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609188: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060918b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060918d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609199u); f_005caba4();
    /* 00609199: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060919a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060919d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060919f: je 0x609227 */ if (fZ) goto L_00609227;
L_006091a5:; BB(0x006091a5);
    /* 006091a5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006091ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006091b3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 006091b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006091bc: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6091c1u); f_00787a4c();
    /* 006091c1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006091c4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006091cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006091ce:; BB(0x006091ce);
    /* 006091ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006091d5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006091dc: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006091e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6091e6u); f_005caba4();
    /* 006091e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006091e7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006091ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006091ec: je 0x609223 */ if (fZ) goto L_00609223;
L_006091ee:; BB(0x006091ee);
    /* 006091ee: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006091f5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006091fc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006091ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00609202: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609206: call 0x609230 */ r_esp -= 4; W32(r_esp, 0x60920bu); f_00609230();
    /* 0060920b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060920e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00609215:; BB(0x00609215);
    /* 00609215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609218: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060921f: mov esp, ebp */ r_esp = r_ebp;
    /* 00609221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609222: ret  */ FN_RET(0x00609164); r_esp += 4; return;
L_00609223:; BB(0x00609223);
    /* 00609223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609225: jmp 0x609215 */ goto L_00609215;
L_00609227:; BB(0x00609227);
    /* 00609227: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609229: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060922c: jmp 0x6091ce */ goto L_006091ce;
}

void f_006091a0(void)
{
    FN_ENTER(0x006091a0);
    /* 006091a0: test byte ptr [edx - 0x39000000], al */ {  u32 a = R8((u32)(r_edx+0xc7000000u)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 006091a6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006091a7: rol byte ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 006091a9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006091ab: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006091ad: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006091ae: cld  */ rt_df = 0;
    /* 006091af: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006091b1: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006091b3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 006091b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006091bc: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6091c1u); f_00787a4c();
    /* 006091c1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006091c4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006091cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006091ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006091d5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006091dc: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006091e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6091e6u); f_005caba4();
    /* 006091e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006091e7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006091ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006091ec: je 0x609223 */ if (fZ) goto L_00609223;
L_006091ee:; BB(0x006091ee);
    /* 006091ee: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006091f5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006091fc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006091ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00609202: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609206: call 0x609230 */ r_esp -= 4; W32(r_esp, 0x60920bu); f_00609230();
    /* 0060920b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060920e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00609215:; BB(0x00609215);
    /* 00609215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609218: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060921f: mov esp, ebp */ r_esp = r_ebp;
    /* 00609221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609222: ret  */ FN_RET(0x006091a0); r_esp += 4; return;
L_00609223:; BB(0x00609223);
    /* 00609223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609225: jmp 0x609215 */ goto L_00609215;
}

void f_00609230(void) /* sub_609230 */
{
    FN_ENTER(0x00609230);
    /* 00609230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609231: mov ebp, esp */ r_ebp = r_esp;
    /* 00609233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609235: push 0x8df2f8 */ { u32 v = 0x8df2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060923a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609241: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609248: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060924b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060924e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609251: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609254: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609257: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060925a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060925d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00609260: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609263: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x609268u); f_00609010();
    /* 00609268: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060926f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609272: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00609275: mov dword ptr [ecx], 0xb1ece0 */ W32((u32)(r_ecx), 0xb1ece0u);
    /* 0060927b: mov eax, dword ptr [0x9c4120] */ r_eax = R32((u32)(0x9c4120u));
    /* 00609280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609281: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00609284: call dword ptr [0xb1ee2c] */ { u32 t = R32((u32)(0xb1ee2cu)); r_esp -= 4; W32(r_esp, 0x60928au); call_ind(t); }
    /* 0060928a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060928d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00609290: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00609293: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00609296: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060929c: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006092a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006092a5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006092ab: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 006092b1: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 006092b7: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006092bd: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006092c3: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006092c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006092cc: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006092d2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006092d5: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006092db: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006092de: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006092e4: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006092e7: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006092ed: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006092f0: mov edx, dword ptr [0xa8e7a0] */ r_edx = R32((u32)(0xa8e7a0u));
    /* 006092f6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 006092fc: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006092ff: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00609302: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00609308: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060930b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060930e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x609313u); f_00606bc8();
    /* 00609313: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609316: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609319: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060931c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060931f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609322: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609329: mov esp, ebp */ r_esp = r_ebp;
    /* 0060932b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060932c: ret 8 */ FN_RET(0x00609230); r_esp += 12; return;
}

void f_00609330(void) /* sub_609330 */
{
    FN_ENTER(0x00609330);
    /* 00609330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609331: mov ebp, esp */ r_ebp = r_esp;
    /* 00609333: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609335: push 0x8df320 */ { u32 v = 0x8df320u; r_esp -= 4; W32(r_esp, v); }
    /* 0060933a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609341: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609348: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060934b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060934e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609351: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609354: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609357: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060935c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00609363: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x609368u); f_008581c5();
    /* 00609368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609369: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060936c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060936e: je 0x6093af */ if (fZ) goto L_006093af;
L_00609370:; BB(0x00609370);
    /* 00609370: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00609377: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060937e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609381: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609386: push 0x9c4110 */ { u32 v = 0x9c4110u; r_esp -= 4; W32(r_esp, v); }
    /* 0060938b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060938d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x609392u); f_005b7a84();
    /* 00609392: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609395: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060939c:; BB(0x0060939c);
    /* 0060939c: mov dword ptr [0xa8e7a0], eax */ W32((u32)(0xa8e7a0u), r_eax);
    /* 006093a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006093a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006093ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006093ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006093ae: ret  */ FN_RET(0x00609330); r_esp += 4; return;
L_006093af:; BB(0x006093af);
    /* 006093af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006093b1: jmp 0x60939c */ goto L_0060939c;
}

void f_006093b4(void) /* sub_6093B4 */
{
    FN_ENTER(0x006093b4);
    /* 006093b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006093b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006093b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006093b9: call 0x6093d8 */ r_esp -= 4; W32(r_esp, 0x6093beu); f_006093d8();
    /* 006093be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006093c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006093c4: jne 0x6093ca */ if (!fZ) goto L_006093ca;
L_006093c6:; BB(0x006093c6);
    /* 006093c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006093c7: ret 4 */ FN_RET(0x006093b4); r_esp += 8; return;
L_006093ca:; BB(0x006093ca);
    /* 006093ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006093cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6093d0u); f_005c2f74();
    /* 006093d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006093d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006093d2: ret 4 */ FN_RET(0x006093b4); r_esp += 8; return;
}

void f_006093d8(void) /* sub_6093D8 */
{
    FN_ENTER(0x006093d8);
    /* 006093d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006093d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006093db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006093dd: push 0x8df33c */ { u32 v = 0x8df33cu; r_esp -= 4; W32(r_esp, v); }
    /* 006093e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006093e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006093e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006093f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006093f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006093f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006093f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006093fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006093ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00609402: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609405: mov dword ptr [ecx], 0xb1ef20 */ W32((u32)(r_ecx), 0xb1ef20u);
    /* 0060940b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00609412: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x609417u); f_00608fc0();
    /* 00609417: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060941a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609421: mov esp, ebp */ r_esp = r_ebp;
    /* 00609423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609424: ret  */ FN_RET(0x006093d8); r_esp += 4; return;
}

void f_00609428(void) /* sub_609428 */
{
    FN_ENTER(0x00609428);
    /* 00609428: mov ecx, dword ptr [0xa8e7ac] */ r_ecx = R32((u32)(0xa8e7acu));
    /* 0060942e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609430: je 0x609445 */ if (fZ) goto L_00609445;
L_00609432:; BB(0x00609432);
    /* 00609432: je 0x60943b */ if (fZ) goto L_0060943b;
L_00609434:; BB(0x00609434);
    /* 00609434: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609436: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60943bu); f_004066a8();
L_0060943b:; BB(0x0060943b);
    /* 0060943b: mov dword ptr [0xa8e7ac], 0 */ W32((u32)(0xa8e7acu), 0x0u);
L_00609445:; BB(0x00609445);
    /* 00609445: ret  */ FN_RET(0x00609428); r_esp += 4; return;
}

void f_00609448(void)
{
    FN_ENTER(0x00609448);
    /* 00609448: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609449: mov ebp, esp */ r_ebp = r_esp;
    /* 0060944b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060944d: push 0x8df37e */ { u32 v = 0x8df37eu; r_esp -= 4; W32(r_esp, v); }
    /* 00609452: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609459: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609460: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609463: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609466: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609469: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060946c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060946f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00609471: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609478: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60947du); f_005caba4();
    /* 0060947d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060947e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00609481: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609483: je 0x60950b */ if (fZ) goto L_0060950b;
L_00609489:; BB(0x00609489);
    /* 00609489: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00609490: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609497: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060949d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006094a0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6094a5u); f_00787a4c();
    /* 006094a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006094a8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006094af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006094b2:; BB(0x006094b2);
    /* 006094b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006094b9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006094c0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006094c5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6094cau); f_005caba4();
    /* 006094ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006094cb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006094ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006094d0: je 0x609507 */ if (fZ) goto L_00609507;
L_006094d2:; BB(0x006094d2);
    /* 006094d2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006094d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006094e0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006094e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006094e6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006094e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006094ea: call 0x609514 */ r_esp -= 4; W32(r_esp, 0x6094efu); f_00609514();
    /* 006094ef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006094f2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006094f9:; BB(0x006094f9);
    /* 006094f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006094fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609503: mov esp, ebp */ r_esp = r_ebp;
    /* 00609505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609506: ret  */ FN_RET(0x00609448); r_esp += 4; return;
L_00609507:; BB(0x00609507);
    /* 00609507: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609509: jmp 0x6094f9 */ goto L_006094f9;
L_0060950b:; BB(0x0060950b);
    /* 0060950b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060950d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609510: jmp 0x6094b2 */ goto L_006094b2;
}

void f_00609460(void)
{
    FN_ENTER(0x00609460);
    /* 00609460: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609463: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609466: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609469: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060946c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060946f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00609471: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609478: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60947du); f_005caba4();
    /* 0060947d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060947e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00609481: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609483: je 0x60950b */ if (fZ) goto L_0060950b;
L_00609489:; BB(0x00609489);
    /* 00609489: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00609490: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609497: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060949d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006094a0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6094a5u); f_00787a4c();
    /* 006094a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006094a8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006094af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006094b2:; BB(0x006094b2);
    /* 006094b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006094b9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006094c0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006094c5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6094cau); f_005caba4();
    /* 006094ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006094cb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006094ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006094d0: je 0x609507 */ if (fZ) goto L_00609507;
L_006094d2:; BB(0x006094d2);
    /* 006094d2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006094d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006094e0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006094e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006094e6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006094e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006094ea: call 0x609514 */ r_esp -= 4; W32(r_esp, 0x6094efu); f_00609514();
    /* 006094ef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006094f2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006094f9:; BB(0x006094f9);
    /* 006094f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006094fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609503: mov esp, ebp */ r_esp = r_ebp;
    /* 00609505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609506: ret  */ FN_RET(0x00609460); r_esp += 4; return;
L_00609507:; BB(0x00609507);
    /* 00609507: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609509: jmp 0x6094f9 */ goto L_006094f9;
L_0060950b:; BB(0x0060950b);
    /* 0060950b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060950d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609510: jmp 0x6094b2 */ goto L_006094b2;
}

void f_00609514(void) /* sub_609514 */
{
    FN_ENTER(0x00609514);
    /* 00609514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609515: mov ebp, esp */ r_ebp = r_esp;
    /* 00609517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609519: push 0x8df398 */ { u32 v = 0x8df398u; r_esp -= 4; W32(r_esp, v); }
    /* 0060951e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609525: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060952c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060952f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609532: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609535: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609538: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060953b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060953e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609541: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00609544: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609547: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x60954cu); f_00609010();
    /* 0060954c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609553: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609556: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00609559: mov dword ptr [ecx], 0xb1ef20 */ W32((u32)(r_ecx), 0xb1ef20u);
    /* 0060955f: mov eax, dword ptr [0x9c413c] */ r_eax = R32((u32)(0x9c413cu));
    /* 00609564: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609565: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00609568: call dword ptr [0xb1f06c] */ { u32 t = R32((u32)(0xb1f06cu)); r_esp -= 4; W32(r_esp, 0x60956eu); call_ind(t); }
    /* 0060956e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609571: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00609574: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00609577: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060957a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00609580: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00609586: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609589: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060958f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00609595: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060959b: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006095a1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006095a7: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006095ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006095b0: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006095b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006095b9: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006095bf: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006095c2: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006095c8: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006095cb: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006095d1: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006095d4: mov edx, dword ptr [0xa8e7ac] */ r_edx = R32((u32)(0xa8e7acu));
    /* 006095da: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 006095e0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006095e3: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006095e6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 006095ec: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006095ef: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006095f2: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x6095f7u); f_00606bc8();
    /* 006095f7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006095fa: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006095fd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00609600: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00609603: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609606: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060960d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060960f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609610: ret 8 */ FN_RET(0x00609514); r_esp += 12; return;
}

void f_00609614(void) /* sub_609614 */
{
    FN_ENTER(0x00609614);
    /* 00609614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609615: mov ebp, esp */ r_ebp = r_esp;
    /* 00609617: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609619: push 0x8df3c0 */ { u32 v = 0x8df3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060961e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609625: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060962c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060962f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609632: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609635: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609638: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060963b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00609640: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00609647: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60964cu); f_008581c5();
    /* 0060964c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060964d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00609650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609652: je 0x609693 */ if (fZ) goto L_00609693;
L_00609654:; BB(0x00609654);
    /* 00609654: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060965b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609662: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060966a: push 0x9c412c */ { u32 v = 0x9c412cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060966f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609671: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x609676u); f_005b7a84();
    /* 00609676: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609679: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00609680:; BB(0x00609680);
    /* 00609680: mov dword ptr [0xa8e7ac], eax */ W32((u32)(0xa8e7acu), r_eax);
    /* 00609685: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609688: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060968f: mov esp, ebp */ r_esp = r_ebp;
    /* 00609691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609692: ret  */ FN_RET(0x00609614); r_esp += 4; return;
L_00609693:; BB(0x00609693);
    /* 00609693: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609695: jmp 0x609680 */ goto L_00609680;
}

void f_00609698(void) /* sub_609698 */
{
    FN_ENTER(0x00609698);
    /* 00609698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609699: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060969b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060969d: call 0x6096bc */ r_esp -= 4; W32(r_esp, 0x6096a2u); f_006096bc();
    /* 006096a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006096a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006096a8: jne 0x6096ae */ if (!fZ) goto L_006096ae;
L_006096aa:; BB(0x006096aa);
    /* 006096aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006096ab: ret 4 */ FN_RET(0x00609698); r_esp += 8; return;
L_006096ae:; BB(0x006096ae);
    /* 006096ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006096af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6096b4u); f_005c2f74();
    /* 006096b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006096b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006096b6: ret 4 */ FN_RET(0x00609698); r_esp += 8; return;
}

void f_006096bc(void) /* sub_6096BC */
{
    FN_ENTER(0x006096bc);
    /* 006096bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006096bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006096bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006096c1: push 0x8df3dc */ { u32 v = 0x8df3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006096c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006096cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006096cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006096d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006096d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006096da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006096dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006096e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006096e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006096e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006096e9: mov dword ptr [ecx], 0xb1f160 */ W32((u32)(r_ecx), 0xb1f160u);
    /* 006096ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006096f6: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x6096fbu); f_00608fc0();
    /* 006096fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006096fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609705: mov esp, ebp */ r_esp = r_ebp;
    /* 00609707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609708: ret  */ FN_RET(0x006096bc); r_esp += 4; return;
}

void f_0060970c(void) /* sub_60970C */
{
    FN_ENTER(0x0060970c);
    /* 0060970c: mov ecx, dword ptr [0xa8e7b8] */ r_ecx = R32((u32)(0xa8e7b8u));
    /* 00609712: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609714: je 0x609729 */ if (fZ) goto L_00609729;
L_00609716:; BB(0x00609716);
    /* 00609716: je 0x60971f */ if (fZ) goto L_0060971f;
L_00609718:; BB(0x00609718);
    /* 00609718: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060971a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60971fu); f_004066a8();
L_0060971f:; BB(0x0060971f);
    /* 0060971f: mov dword ptr [0xa8e7b8], 0 */ W32((u32)(0xa8e7b8u), 0x0u);
L_00609729:; BB(0x00609729);
    /* 00609729: ret  */ FN_RET(0x0060970c); r_esp += 4; return;
}

void f_0060972c(void)
{
    FN_ENTER(0x0060972c);
    /* 0060972c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060972d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060972f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609731: push 0x8df41e */ { u32 v = 0x8df41eu; r_esp -= 4; W32(r_esp, v); }
    /* 00609736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060973c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060973d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609744: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060974a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060974d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609750: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609753: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00609755: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060975c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609761u); f_005caba4();
    /* 00609761: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609762: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00609765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609767: je 0x6097ef */ if (fZ) goto L_006097ef;
L_0060976d:; BB(0x0060976d);
    /* 0060976d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00609774: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060977b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609781: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00609784: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x609789u); f_00787a4c();
    /* 00609789: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060978c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609793: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00609796:; BB(0x00609796);
    /* 00609796: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060979d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006097a4: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006097a9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6097aeu); f_005caba4();
    /* 006097ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006097af: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006097b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006097b4: je 0x6097eb */ if (fZ) goto L_006097eb;
L_006097b6:; BB(0x006097b6);
    /* 006097b6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006097bd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006097c4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006097c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006097ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006097cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006097ce: call 0x6097f8 */ r_esp -= 4; W32(r_esp, 0x6097d3u); f_006097f8();
    /* 006097d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006097d6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006097dd:; BB(0x006097dd);
    /* 006097dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006097e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006097e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006097e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006097ea: ret  */ FN_RET(0x0060972c); r_esp += 4; return;
L_006097eb:; BB(0x006097eb);
    /* 006097eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006097ed: jmp 0x6097dd */ goto L_006097dd;
L_006097ef:; BB(0x006097ef);
    /* 006097ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006097f1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006097f4: jmp 0x609796 */ goto L_00609796;
}

void f_006097f8(void) /* sub_6097F8 */
{
    FN_ENTER(0x006097f8);
    /* 006097f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006097f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006097fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006097fd: push 0x8df438 */ { u32 v = 0x8df438u; r_esp -= 4; W32(r_esp, v); }
    /* 00609802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609810: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609816: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609819: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060981c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060981f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00609822: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609825: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00609828: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060982b: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x609830u); f_00609010();
    /* 00609830: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609837: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060983a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060983d: mov dword ptr [ecx], 0xb1f160 */ W32((u32)(r_ecx), 0xb1f160u);
    /* 00609843: mov eax, dword ptr [0x9c4158] */ r_eax = R32((u32)(0x9c4158u));
    /* 00609848: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609849: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060984c: call dword ptr [0xb1f2ac] */ { u32 t = R32((u32)(0xb1f2acu)); r_esp -= 4; W32(r_esp, 0x609852u); call_ind(t); }
    /* 00609852: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609855: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00609858: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060985b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060985e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00609864: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060986a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060986d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00609873: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00609879: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060987f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00609885: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060988b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00609891: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609894: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060989a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060989d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006098a3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006098a6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006098ac: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006098af: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006098b5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006098b8: mov edx, dword ptr [0xa8e7b8] */ r_edx = R32((u32)(0xa8e7b8u));
    /* 006098be: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 006098c4: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006098c7: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006098ca: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 006098d0: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006098d3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006098d6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x6098dbu); f_00606bc8();
    /* 006098db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006098de: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006098e1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006098e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006098e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006098ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006098f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006098f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006098f4: ret 8 */ FN_RET(0x006097f8); r_esp += 12; return;
}

void f_006098f8(void) /* sub_6098F8 */
{
    FN_ENTER(0x006098f8);
    /* 006098f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006098f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006098fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006098fd: push 0x8df460 */ { u32 v = 0x8df460u; r_esp -= 4; W32(r_esp, v); }
    /* 00609902: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609909: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609910: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609913: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609916: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609919: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060991c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060991f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00609924: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060992b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x609930u); f_008581c5();
    /* 00609930: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609931: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00609934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609936: je 0x609977 */ if (fZ) goto L_00609977;
L_00609938:; BB(0x00609938);
    /* 00609938: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060993f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609946: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060994c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060994d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060994e: push 0x9c4148 */ { u32 v = 0x9c4148u; r_esp -= 4; W32(r_esp, v); }
    /* 00609953: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609955: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60995au); f_005b7a84();
    /* 0060995a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060995d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00609964:; BB(0x00609964);
    /* 00609964: mov dword ptr [0xa8e7b8], eax */ W32((u32)(0xa8e7b8u), r_eax);
    /* 00609969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060996c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609973: mov esp, ebp */ r_esp = r_ebp;
    /* 00609975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609976: ret  */ FN_RET(0x006098f8); r_esp += 4; return;
L_00609977:; BB(0x00609977);
    /* 00609977: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609979: jmp 0x609964 */ goto L_00609964;
}

void f_0060997c(void) /* sub_60997C */
{
    FN_ENTER(0x0060997c);
    /* 0060997c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060997d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060997f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00609981: call 0x6099a0 */ r_esp -= 4; W32(r_esp, 0x609986u); f_006099a0();
    /* 00609986: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060998a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060998c: jne 0x609992 */ if (!fZ) goto L_00609992;
L_0060998e:; BB(0x0060998e);
    /* 0060998e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060998f: ret 4 */ FN_RET(0x0060997c); r_esp += 8; return;
L_00609992:; BB(0x00609992);
    /* 00609992: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609993: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x609998u); f_005c2f74();
    /* 00609998: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609999: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060999a: ret 4 */ FN_RET(0x0060997c); r_esp += 8; return;
}

void f_006099a0(void) /* sub_6099A0 */
{
    FN_ENTER(0x006099a0);
    /* 006099a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006099a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006099a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006099a5: push 0x8df47c */ { u32 v = 0x8df47cu; r_esp -= 4; W32(r_esp, v); }
    /* 006099aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006099b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006099b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006099b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006099bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006099be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006099c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006099c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006099c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006099ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006099cd: mov dword ptr [ecx], 0xb1f3a0 */ W32((u32)(r_ecx), 0xb1f3a0u);
    /* 006099d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006099da: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x6099dfu); f_00608fc0();
    /* 006099df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006099e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006099e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006099eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006099ec: ret  */ FN_RET(0x006099a0); r_esp += 4; return;
}

void f_006099f0(void) /* sub_6099F0 */
{
    FN_ENTER(0x006099f0);
    /* 006099f0: mov ecx, dword ptr [0xa8e7c4] */ r_ecx = R32((u32)(0xa8e7c4u));
    /* 006099f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006099f8: je 0x609a0d */ if (fZ) goto L_00609a0d;
L_006099fa:; BB(0x006099fa);
    /* 006099fa: je 0x609a03 */ if (fZ) goto L_00609a03;
L_006099fc:; BB(0x006099fc);
    /* 006099fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006099fe: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x609a03u); f_004066a8();
L_00609a03:; BB(0x00609a03);
    /* 00609a03: mov dword ptr [0xa8e7c4], 0 */ W32((u32)(0xa8e7c4u), 0x0u);
L_00609a0d:; BB(0x00609a0d);
    /* 00609a0d: ret  */ FN_RET(0x006099f0); r_esp += 4; return;
}

void f_00609a10(void)
{
    FN_ENTER(0x00609a10);
    /* 00609a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00609a13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609a15: push 0x8df4be */ { u32 v = 0x8df4beu; r_esp -= 4; W32(r_esp, v); }
    /* 00609a1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609a21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609a28: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609a2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609a2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609a31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609a34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609a37: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00609a39: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609a40: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609a45u); f_005caba4();
    /* 00609a45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609a46: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00609a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609a4b: je 0x609ad3 */ if (fZ) goto L_00609ad3;
L_00609a51:; BB(0x00609a51);
    /* 00609a51: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00609a58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609a5f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609a65: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00609a68: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x609a6du); f_00787a4c();
    /* 00609a6d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00609a70: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609a77: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00609a7a:; BB(0x00609a7a);
    /* 00609a7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00609a81: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00609a88: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609a8d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609a92u); f_005caba4();
    /* 00609a92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609a93: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00609a96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609a98: je 0x609acf */ if (fZ) goto L_00609acf;
L_00609a9a:; BB(0x00609a9a);
    /* 00609a9a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00609aa1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00609aa8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609aab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00609aae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609ab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609ab2: call 0x609adc */ r_esp -= 4; W32(r_esp, 0x609ab7u); f_00609adc();
    /* 00609ab7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609aba: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00609ac1:; BB(0x00609ac1);
    /* 00609ac1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609ac4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609acb: mov esp, ebp */ r_esp = r_ebp;
    /* 00609acd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609ace: ret  */ FN_RET(0x00609a10); r_esp += 4; return;
L_00609acf:; BB(0x00609acf);
    /* 00609acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609ad1: jmp 0x609ac1 */ goto L_00609ac1;
L_00609ad3:; BB(0x00609ad3);
    /* 00609ad3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609ad5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609ad8: jmp 0x609a7a */ goto L_00609a7a;
}

void f_00609adc(void) /* sub_609ADC */
{
    FN_ENTER(0x00609adc);
    /* 00609adc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609add: mov ebp, esp */ r_ebp = r_esp;
    /* 00609adf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609ae1: push 0x8df4d8 */ { u32 v = 0x8df4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00609ae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609aed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609af4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609af7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609afa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609afd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609b00: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609b03: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00609b06: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609b09: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00609b0c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609b0f: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x609b14u); f_00609010();
    /* 00609b14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609b1b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609b1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00609b21: mov dword ptr [ecx], 0xb1f3a0 */ W32((u32)(r_ecx), 0xb1f3a0u);
    /* 00609b27: mov eax, dword ptr [0x9c4174] */ r_eax = R32((u32)(0x9c4174u));
    /* 00609b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609b2d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00609b30: call dword ptr [0xb1f4ec] */ { u32 t = R32((u32)(0xb1f4ecu)); r_esp -= 4; W32(r_esp, 0x609b36u); call_ind(t); }
    /* 00609b36: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609b39: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00609b3c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00609b3f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00609b42: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00609b48: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00609b4e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609b51: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00609b57: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00609b5d: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00609b63: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00609b69: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00609b6f: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00609b75: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609b78: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00609b7e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609b81: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00609b87: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00609b8a: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00609b90: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00609b93: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00609b99: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00609b9c: mov edx, dword ptr [0xa8e7c4] */ r_edx = R32((u32)(0xa8e7c4u));
    /* 00609ba2: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00609ba8: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00609bab: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00609bae: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00609bb4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00609bb7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00609bba: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x609bbfu); f_00606bc8();
    /* 00609bbf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609bc2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609bc5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00609bc8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00609bcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609bce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609bd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00609bd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609bd8: ret 8 */ FN_RET(0x00609adc); r_esp += 12; return;
}

void f_00609bdc(void) /* sub_609BDC */
{
    FN_ENTER(0x00609bdc);
    /* 00609bdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609bdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00609bdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609be1: push 0x8df500 */ { u32 v = 0x8df500u; r_esp -= 4; W32(r_esp, v); }
    /* 00609be6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609bec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609bed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609bf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609bf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609bfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609bfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609c00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609c03: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00609c08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00609c0f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x609c14u); f_008581c5();
    /* 00609c14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609c15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00609c18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609c1a: je 0x609c5b */ if (fZ) goto L_00609c5b;
L_00609c1c:; BB(0x00609c1c);
    /* 00609c1c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00609c23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609c2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609c2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609c2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609c32: push 0x9c4164 */ { u32 v = 0x9c4164u; r_esp -= 4; W32(r_esp, v); }
    /* 00609c37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609c39: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x609c3eu); f_005b7a84();
    /* 00609c3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609c41: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00609c48:; BB(0x00609c48);
    /* 00609c48: mov dword ptr [0xa8e7c4], eax */ W32((u32)(0xa8e7c4u), r_eax);
    /* 00609c4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609c50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609c57: mov esp, ebp */ r_esp = r_ebp;
    /* 00609c59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609c5a: ret  */ FN_RET(0x00609bdc); r_esp += 4; return;
L_00609c5b:; BB(0x00609c5b);
    /* 00609c5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609c5d: jmp 0x609c48 */ goto L_00609c48;
}

void f_00609c60(void) /* sub_609C60 */
{
    FN_ENTER(0x00609c60);
    /* 00609c60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609c61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00609c63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00609c65: call 0x609c84 */ r_esp -= 4; W32(r_esp, 0x609c6au); f_00609c84();
    /* 00609c6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00609c6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609c70: jne 0x609c76 */ if (!fZ) goto L_00609c76;
L_00609c72:; BB(0x00609c72);
    /* 00609c72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00609c73: ret 4 */ FN_RET(0x00609c60); r_esp += 8; return;
L_00609c76:; BB(0x00609c76);
    /* 00609c76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609c77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x609c7cu); f_005c2f74();
    /* 00609c7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609c7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00609c7e: ret 4 */ FN_RET(0x00609c60); r_esp += 8; return;
}

void f_00609c84(void) /* sub_609C84 */
{
    FN_ENTER(0x00609c84);
    /* 00609c84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609c85: mov ebp, esp */ r_ebp = r_esp;
    /* 00609c87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609c89: push 0x8df51c */ { u32 v = 0x8df51cu; r_esp -= 4; W32(r_esp, v); }
    /* 00609c8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609c95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609c9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609c9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609ca2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609ca5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609ca8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609cab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00609cae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609cb1: mov dword ptr [ecx], 0xb1f5e0 */ W32((u32)(r_ecx), 0xb1f5e0u);
    /* 00609cb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00609cbe: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x609cc3u); f_00608fc0();
    /* 00609cc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609cc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609ccd: mov esp, ebp */ r_esp = r_ebp;
    /* 00609ccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609cd0: ret  */ FN_RET(0x00609c84); r_esp += 4; return;
}

void f_00609cd4(void) /* sub_609CD4 */
{
    FN_ENTER(0x00609cd4);
    /* 00609cd4: mov ecx, dword ptr [0xa8e7d0] */ r_ecx = R32((u32)(0xa8e7d0u));
    /* 00609cda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609cdc: je 0x609cf1 */ if (fZ) goto L_00609cf1;
L_00609cde:; BB(0x00609cde);
    /* 00609cde: je 0x609ce7 */ if (fZ) goto L_00609ce7;
L_00609ce0:; BB(0x00609ce0);
    /* 00609ce0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609ce2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x609ce7u); f_004066a8();
L_00609ce7:; BB(0x00609ce7);
    /* 00609ce7: mov dword ptr [0xa8e7d0], 0 */ W32((u32)(0xa8e7d0u), 0x0u);
L_00609cf1:; BB(0x00609cf1);
    /* 00609cf1: ret  */ FN_RET(0x00609cd4); r_esp += 4; return;
}

void f_00609cf4(void)
{
    FN_ENTER(0x00609cf4);
    /* 00609cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609cf5: mov ebp, esp */ r_ebp = r_esp;
    /* 00609cf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609cf9: push 0x8df55e */ { u32 v = 0x8df55eu; r_esp -= 4; W32(r_esp, v); }
    /* 00609cfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609d05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609d0c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609d0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609d12: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609d15: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609d18: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609d1b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00609d1d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609d24: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609d29u); f_005caba4();
    /* 00609d29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609d2a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00609d2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609d2f: je 0x609db7 */ if (fZ) goto L_00609db7;
L_00609d35:; BB(0x00609d35);
    /* 00609d35: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00609d3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609d43: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609d49: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00609d4c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x609d51u); f_00787a4c();
    /* 00609d51: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00609d54: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00609d5b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00609d5e:; BB(0x00609d5e);
    /* 00609d5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00609d65: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00609d6c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609d71: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x609d76u); f_005caba4();
    /* 00609d76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609d77: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00609d7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609d7c: je 0x609db3 */ if (fZ) goto L_00609db3;
L_00609d7e:; BB(0x00609d7e);
    /* 00609d7e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00609d85: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00609d8c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609d8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00609d92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609d96: call 0x609dc0 */ r_esp -= 4; W32(r_esp, 0x609d9bu); f_00609dc0();
    /* 00609d9b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609d9e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00609da5:; BB(0x00609da5);
    /* 00609da5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609da8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609daf: mov esp, ebp */ r_esp = r_ebp;
    /* 00609db1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609db2: ret  */ FN_RET(0x00609cf4); r_esp += 4; return;
L_00609db3:; BB(0x00609db3);
    /* 00609db3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609db5: jmp 0x609da5 */ goto L_00609da5;
L_00609db7:; BB(0x00609db7);
    /* 00609db7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609db9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609dbc: jmp 0x609d5e */ goto L_00609d5e;
}

void f_00609dc0(void) /* sub_609DC0 */
{
    FN_ENTER(0x00609dc0);
    /* 00609dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00609dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609dc5: push 0x8df578 */ { u32 v = 0x8df578u; r_esp -= 4; W32(r_esp, v); }
    /* 00609dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609dd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609dd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609ddb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609dde: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609de1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609de4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609de7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00609dea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00609ded: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00609df0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00609df3: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x609df8u); f_00609010();
    /* 00609df8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609dff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609e02: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00609e05: mov dword ptr [ecx], 0xb1f5e0 */ W32((u32)(r_ecx), 0xb1f5e0u);
    /* 00609e0b: mov eax, dword ptr [0x9c4190] */ r_eax = R32((u32)(0x9c4190u));
    /* 00609e10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609e11: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00609e14: call dword ptr [0xb1f72c] */ { u32 t = R32((u32)(0xb1f72cu)); r_esp -= 4; W32(r_esp, 0x609e1au); call_ind(t); }
    /* 00609e1a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609e1d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00609e20: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00609e23: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00609e26: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00609e2c: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00609e32: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609e35: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00609e3b: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00609e41: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00609e47: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00609e4d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00609e53: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00609e59: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609e5c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00609e62: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609e65: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00609e6b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00609e6e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00609e74: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00609e77: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00609e7d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00609e80: mov edx, dword ptr [0xa8e7d0] */ r_edx = R32((u32)(0xa8e7d0u));
    /* 00609e86: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00609e8c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00609e8f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00609e92: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00609e98: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00609e9b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00609e9e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x609ea3u); f_00606bc8();
    /* 00609ea3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00609ea6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609ea9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00609eac: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00609eaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609eb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609eb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00609ebb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609ebc: ret 8 */ FN_RET(0x00609dc0); r_esp += 12; return;
}

void f_00609ec0(void) /* sub_609EC0 */
{
    FN_ENTER(0x00609ec0);
    /* 00609ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00609ec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609ec5: push 0x8df5a0 */ { u32 v = 0x8df5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00609eca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609ed1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609ed8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609edb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609ede: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609ee1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609ee4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609ee7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00609eec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00609ef3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x609ef8u); f_008581c5();
    /* 00609ef8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609ef9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00609efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609efe: je 0x609f3f */ if (fZ) goto L_00609f3f;
L_00609f00:; BB(0x00609f00);
    /* 00609f00: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00609f07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609f0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609f11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609f16: push 0x9c4180 */ { u32 v = 0x9c4180u; r_esp -= 4; W32(r_esp, v); }
    /* 00609f1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609f1d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x609f22u); f_005b7a84();
    /* 00609f22: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609f25: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00609f2c:; BB(0x00609f2c);
    /* 00609f2c: mov dword ptr [0xa8e7d0], eax */ W32((u32)(0xa8e7d0u), r_eax);
    /* 00609f31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609f34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609f3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00609f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609f3e: ret  */ FN_RET(0x00609ec0); r_esp += 4; return;
L_00609f3f:; BB(0x00609f3f);
    /* 00609f3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609f41: jmp 0x609f2c */ goto L_00609f2c;
}

void f_00609f44(void) /* sub_609F44 */
{
    FN_ENTER(0x00609f44);
    /* 00609f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609f45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00609f47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00609f49: call 0x609f68 */ r_esp -= 4; W32(r_esp, 0x609f4eu); f_00609f68();
    /* 00609f4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00609f52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609f54: jne 0x609f5a */ if (!fZ) goto L_00609f5a;
L_00609f56:; BB(0x00609f56);
    /* 00609f56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00609f57: ret 4 */ FN_RET(0x00609f44); r_esp += 8; return;
L_00609f5a:; BB(0x00609f5a);
    /* 00609f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00609f5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x609f60u); f_005c2f74();
    /* 00609f60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00609f61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00609f62: ret 4 */ FN_RET(0x00609f44); r_esp += 8; return;
}

void f_00609f68(void) /* sub_609F68 */
{
    FN_ENTER(0x00609f68);
    /* 00609f68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609f69: mov ebp, esp */ r_ebp = r_esp;
    /* 00609f6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609f6d: push 0x8df5bc */ { u32 v = 0x8df5bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00609f72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609f79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609f80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609f83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609f86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00609f89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00609f8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00609f8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00609f92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00609f95: mov dword ptr [ecx], 0xb1f820 */ W32((u32)(r_ecx), 0xb1f820u);
    /* 00609f9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00609fa2: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x609fa7u); f_00608fc0();
    /* 00609fa7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609faa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609fb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00609fb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609fb4: ret  */ FN_RET(0x00609f68); r_esp += 4; return;
}

void f_00609fb8(void) /* sub_609FB8 */
{
    FN_ENTER(0x00609fb8);
    /* 00609fb8: mov ecx, dword ptr [0xa8e7dc] */ r_ecx = R32((u32)(0xa8e7dcu));
    /* 00609fbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00609fc0: je 0x609fd5 */ if (fZ) goto L_00609fd5;
L_00609fc2:; BB(0x00609fc2);
    /* 00609fc2: je 0x609fcb */ if (fZ) goto L_00609fcb;
L_00609fc4:; BB(0x00609fc4);
    /* 00609fc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00609fc6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x609fcbu); f_004066a8();
L_00609fcb:; BB(0x00609fcb);
    /* 00609fcb: mov dword ptr [0xa8e7dc], 0 */ W32((u32)(0xa8e7dcu), 0x0u);
L_00609fd5:; BB(0x00609fd5);
    /* 00609fd5: ret  */ FN_RET(0x00609fb8); r_esp += 4; return;
}

void f_00609fd8(void)
{
    FN_ENTER(0x00609fd8);
    /* 00609fd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609fd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00609fdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00609fdd: push 0x8df5fe */ { u32 v = 0x8df5feu; r_esp -= 4; W32(r_esp, v); }
    /* 00609fe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00609fe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609fe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00609ff0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609ff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00609ff6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00609ff9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00609ffc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00609fff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a001: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a008: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a00du); f_005caba4();
    /* 0060a00d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a00e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060a011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a013: je 0x60a09b */ if (fZ) goto L_0060a09b;
L_0060a019:; BB(0x0060a019);
    /* 0060a019: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060a020: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a027: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a02d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a030: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60a035u); f_00787a4c();
    /* 0060a035: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060a038: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060a03f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060a042:; BB(0x0060a042);
    /* 0060a042: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060a049: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060a050: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a055: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60a05au); f_005caba4();
    /* 0060a05a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060a05b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060a05e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a060: je 0x60a097 */ if (fZ) goto L_0060a097;
L_0060a062:; BB(0x0060a062);
    /* 0060a062: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060a069: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060a070: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060a073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060a076: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a07a: call 0x60a0a4 */ r_esp -= 4; W32(r_esp, 0x60a07fu); f_0060a0a4();
    /* 0060a07f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060a082: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060a089:; BB(0x0060a089);
    /* 0060a089: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a08c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060a093: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a096: ret  */ FN_RET(0x00609fd8); r_esp += 4; return;
L_0060a097:; BB(0x0060a097);
    /* 0060a097: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060a099: jmp 0x60a089 */ goto L_0060a089;
L_0060a09b:; BB(0x0060a09b);
    /* 0060a09b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a09d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060a0a0: jmp 0x60a042 */ goto L_0060a042;
}

