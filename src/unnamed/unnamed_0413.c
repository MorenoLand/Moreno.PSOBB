#include "protos.h"

void f_00413060(void) /* sub_413060 */
{
    FN_ENTER(0x00413060);
    /* 00413060: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413063: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x413068u); f_007932e8();
    /* 00413068: mov dword ptr [esp], 0x8fab68 */ W32((u32)(r_esp), 0x8fab68u);
    /* 0041306f: mov eax, 0x8fab38 */ r_eax = 0x8fab38u;
    /* 00413074: mov edx, 0x9a3708 */ r_edx = 0x9a3708u;
    /* 00413079: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0041307d: mov dword ptr [esp + 0x20], 0x9a3728 */ W32((u32)(r_esp+0x20u), 0x9a3728u);
    /* 00413085: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00413089: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041308d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00413091: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00413095: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00413099: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041309d: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 004130a2: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004130a6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004130aa: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004130ae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004130b2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004130b6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004130ba: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004130be: mov ecx, dword ptr [esp + eax*4 + 0x20] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x20u));
    /* 004130c2: mov dword ptr [0xa3b0ac], ecx */ W32((u32)(0xa3b0acu), r_ecx);
    /* 004130c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004130c9: push dword ptr [esp + eax*4 + 4] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004130cd: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x4130d2u); f_0081a934();
    /* 004130d2: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004130d5: ret  */ FN_RET(0x00413060); r_esp += 4; return;
}

void f_004130d8(void) /* sub_4130D8 */
{
    FN_ENTER(0x004130d8);
    /* 004130d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004130d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004130da: mov esi, ecx */ r_esi = r_ecx;
    /* 004130dc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004130e0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004130e4: mov dword ptr [esi + 0xbc], 0xffffffff */ W32((u32)(r_esi+0xbcu), 0xffffffffu);
    /* 004130ee: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 004130f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004130f3: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004130f6: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004130f9: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 004130fc: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004130ff: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
    /* 00413102: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00413104: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0041310b: mov dword ptr [esi + 0x2c], edi */ W32((u32)(r_esi+0x2cu), r_edi);
    /* 0041310e: mov dword ptr [esi + 0xc0], ecx */ W32((u32)(r_esi+0xc0u), r_ecx);
    /* 00413114: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00413117: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0041311a: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 0041311d: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00413120: mov dword ptr [esi + 0x3c], edi */ W32((u32)(r_esi+0x3cu), r_edi);
    /* 00413123: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00413125: mov dword ptr [esi + 0x48], 2 */ W32((u32)(r_esi+0x48u), 0x2u);
    /* 0041312c: mov dword ptr [esi + 0x40], edi */ W32((u32)(r_esi+0x40u), r_edi);
    /* 0041312f: mov dword ptr [esi + 0xc4], ecx */ W32((u32)(r_esi+0xc4u), r_ecx);
    /* 00413135: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00413138: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0041313b: mov dword ptr [esi + 0x4c], edi */ W32((u32)(r_esi+0x4cu), r_edi);
    /* 0041313e: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00413141: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 00413144: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00413146: mov dword ptr [esi + 0x54], edi */ W32((u32)(r_esi+0x54u), r_edi);
    /* 00413149: mov dword ptr [esi + 0x5c], 3 */ W32((u32)(r_esi+0x5cu), 0x3u);
    /* 00413150: mov dword ptr [esi + 0xc8], ecx */ W32((u32)(r_esi+0xc8u), r_ecx);
    /* 00413156: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00413159: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0041315c: mov dword ptr [esi + 0x60], edi */ W32((u32)(r_esi+0x60u), r_edi);
    /* 0041315f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00413162: mov dword ptr [esi + 0x64], edi */ W32((u32)(r_esi+0x64u), r_edi);
    /* 00413165: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00413167: mov dword ptr [esi + 0x68], edi */ W32((u32)(r_esi+0x68u), r_edi);
    /* 0041316a: mov dword ptr [esi + 0xcc], ecx */ W32((u32)(r_esi+0xccu), r_ecx);
    /* 00413170: mov dword ptr [esi + 0x70], 4 */ W32((u32)(r_esi+0x70u), 0x4u);
    /* 00413177: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 0041317a: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0041317d: mov dword ptr [esi + 0x74], edi */ W32((u32)(r_esi+0x74u), r_edi);
    /* 00413180: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00413183: mov dword ptr [esi + 0x78], edi */ W32((u32)(r_esi+0x78u), r_edi);
    /* 00413186: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00413188: mov dword ptr [esi + 0x7c], edi */ W32((u32)(r_esi+0x7cu), r_edi);
    /* 0041318b: mov dword ptr [esi + 0xd0], ecx */ W32((u32)(r_esi+0xd0u), r_ecx);
    /* 00413191: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 00413197: mov dword ptr [esi + 0x84], 5 */ W32((u32)(r_esi+0x84u), 0x5u);
    /* 004131a1: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004131a4: mov dword ptr [esi + 0x88], edi */ W32((u32)(r_esi+0x88u), r_edi);
    /* 004131aa: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004131ad: mov dword ptr [esi + 0x8c], edi */ W32((u32)(r_esi+0x8cu), r_edi);
    /* 004131b3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004131b5: mov dword ptr [esi + 0x98], 6 */ W32((u32)(r_esi+0x98u), 0x6u);
    /* 004131bf: mov dword ptr [esi + 0x90], edi */ W32((u32)(r_esi+0x90u), r_edi);
    /* 004131c5: mov dword ptr [esi + 0xd4], ecx */ W32((u32)(r_esi+0xd4u), r_ecx);
    /* 004131cb: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 004131d1: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004131d4: mov dword ptr [esi + 0x9c], edi */ W32((u32)(r_esi+0x9cu), r_edi);
    /* 004131da: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004131dd: mov dword ptr [esi + 0xa0], edi */ W32((u32)(r_esi+0xa0u), r_edi);
    /* 004131e3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004131e5: mov dword ptr [esi + 0xac], 7 */ W32((u32)(r_esi+0xacu), 0x7u);
    /* 004131ef: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004131f5: mov dword ptr [esi + 0xd8], ecx */ W32((u32)(r_esi+0xd8u), r_ecx);
    /* 004131fb: mov dword ptr [esi + 0xa8], eax */ W32((u32)(r_esi+0xa8u), r_eax);
    /* 00413201: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00413204: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 0041320a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041320d: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 00413213: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00413215: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 0041321b: mov dword ptr [esi + 0xdc], ecx */ W32((u32)(r_esi+0xdcu), r_ecx);
    /* 00413221: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00413222: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413223: ret 8 */ FN_RET(0x004130d8); r_esp += 12; return;
}

void f_00413228(void) /* sub_413228 */
{
    FN_ENTER(0x00413228);
    /* 00413228: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00413229: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041322b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041322d: call 0x41324c */ r_esp -= 4; W32(r_esp, 0x413232u); f_0041324c();
    /* 00413232: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00413236: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413238: jne 0x41323e */ if (!fZ) goto L_0041323e;
L_0041323a:; BB(0x0041323a);
    /* 0041323a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041323b: ret 4 */ FN_RET(0x00413228); r_esp += 8; return;
L_0041323e:; BB(0x0041323e);
    /* 0041323e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041323f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x413244u); f_005c2f74();
    /* 00413244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00413246: ret 4 */ FN_RET(0x00413228); r_esp += 8; return;
}

void f_00413233(void)
{
    FN_ENTER(0x00413233);
    /* 00413233: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413234: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00413236: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413238: jne 0x41323e */ if (!fZ) goto L_0041323e;
L_0041323a:; BB(0x0041323a);
    /* 0041323a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041323b: ret 4 */ FN_RET(0x00413233); r_esp += 8; return;
L_0041323e:; BB(0x0041323e);
    /* 0041323e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041323f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x413244u); f_005c2f74();
    /* 00413244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413245: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00413246: ret 4 */ FN_RET(0x00413233); r_esp += 8; return;
}

void f_0041324c(void) /* sub_41324C */
{
    FN_ENTER(0x0041324c);
    /* 0041324c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041324d: mov ebp, esp */ r_ebp = r_esp;
    /* 0041324f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413251: push 0x8ccec8 */ { u32 v = 0x8ccec8u; r_esp -= 4; W32(r_esp, v); }
    /* 00413256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041325c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041325d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00413264: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041326a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0041326d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00413270: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00413273: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00413276: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413279: mov dword ptr [ecx], 0xaf32b8 */ W32((u32)(r_ecx), 0xaf32b8u);
    /* 0041327f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00413286: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x41328bu); f_008171e8();
    /* 0041328b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041328e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00413295: mov esp, ebp */ r_esp = r_ebp;
    /* 00413297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413298: ret  */ FN_RET(0x0041324c); r_esp += 4; return;
}

void f_0041329c(void) /* sub_41329C */
{
    FN_ENTER(0x0041329c);
    /* 0041329c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041329d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041329e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041329f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004132a0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004132a3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004132a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004132a7: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004132ab: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004132af: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4132b4u); f_008193cc();
    /* 004132b4: fld dword ptr [0x8fabb0] */ FPUSH(R_F32((u32)(0x8fabb0u)));
    /* 004132ba: fld dword ptr [0x8fabac] */ FPUSH(R_F32((u32)(0x8fabacu)));
    /* 004132c0: fld dword ptr [0x8faba8] */ FPUSH(R_F32((u32)(0x8faba8u)));
    /* 004132c6: mov dword ptr [ebp], 0xaf32b8 */ W32((u32)(r_ebp), 0xaf32b8u);
    /* 004132cd: mov eax, dword ptr [0x9a3734] */ r_eax = R32((u32)(0x9a3734u));
    /* 004132d2: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 004132d5: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 004132d7: mov dword ptr [ebp + 0x7c], edi */ W32((u32)(r_ebp+0x7cu), r_edi);
    /* 004132da: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004132dd: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 004132e0: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 004132e3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004132e6: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 004132e9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004132ec: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004132ef: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 004132f1: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004132f3: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 004132f6: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 004132f9: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 004132fb: mov eax, dword ptr [0xa3b0ac] */ r_eax = R32((u32)(0xa3b0acu));
    /* 00413300: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00413303: mov dword ptr [0xa3b0b4], eax */ W32((u32)(0xa3b0b4u), r_eax);
    /* 00413308: mov dword ptr [ebp + 0x68], esi */ W32((u32)(r_ebp+0x68u), r_esi);
    /* 0041330b: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0041330e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00413310: fst dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0));
    /* 00413313: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00413315: fst dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0));
    /* 00413318: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0041331a: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0041331c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0041331e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00413320: fstp dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 00413323: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00413328: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041332a: mov dword ptr [ebp + 0x80], ebx */ W32((u32)(r_ebp+0x80u), r_ebx);
    /* 00413330: mov eax, edi */ r_eax = r_edi;
    /* 00413332: mov dword ptr [ebp + 0x84], 0xffffffff */ W32((u32)(r_ebp+0x84u), 0xffffffffu);
    /* 0041333c: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0041333e: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00413341: mov dword ptr [ebp + 0x74], 0x40000000 */ W32((u32)(r_ebp+0x74u), 0x40000000u);
    /* 00413348: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041334a: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0041334d: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 00413350: mov dword ptr [ebp + 0x78], 0x40000000 */ W32((u32)(r_ebp+0x78u), 0x40000000u);
    /* 00413357: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00413359: lea eax, [edi + edx] */ r_eax = (u32)(r_edi+r_edx);
    /* 0041335c: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0041335f: mov dword ptr [ebp + 0x28], esi */ W32((u32)(r_ebp+0x28u), r_esi);
    /* 00413362: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00413365: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00413369: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0041336d: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0041336f: fld dword ptr [0x8faba0] */ FPUSH(R_F32((u32)(0x8faba0u)));
    /* 00413375: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00413377: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00413379: fst dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0));
    /* 0041337c: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0041337e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00413380: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00413382: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00413384: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00413386: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00413389: fld dword ptr [0x8faba4] */ FPUSH(R_F32((u32)(0x8faba4u)));
    /* 0041338f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00413391: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00413393: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00413396: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041339a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0041339e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004133a0: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004133a2: lea eax, [edi + edx + 1] */ r_eax = (u32)(r_edi+r_edx+0x1u);
    /* 004133a6: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 004133a9: fld dword ptr [0x8fab9c] */ FPUSH(R_F32((u32)(0x8fab9cu)));
    /* 004133af: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 004133b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004133b3: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 004133b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004133b7: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 004133ba: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004133be: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004133c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004133c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004133c6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004133c8: mov eax, ebp */ r_eax = r_ebp;
    /* 004133ca: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 004133cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004133d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004133d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004133d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004133d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004133d4: ret 8 */ FN_RET(0x0041329c); r_esp += 12; return;
}

void f_004133d8(void) /* sub_4133D8 */
{
    FN_ENTER(0x004133d8);
    /* 004133d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004133db: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 004133e1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004133e4: jge 0x4133ef */ if ((fS==fO)) goto L_004133ef;
L_004133e6:; BB(0x004133e6);
    /* 004133e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004133e9: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
L_004133ef:; BB(0x004133ef);
    /* 004133ef: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 004133f2: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004133f5: fld dword ptr [ecx + 0x70] */ FPUSH(R_F32((u32)(r_ecx+0x70u)));
    /* 004133f8: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 004133fb: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 004133fe: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00413401: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00413403: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 00413405: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00413407: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00413409: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041340b: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0041340d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041340f: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00413411: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00413414: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00413417: fmul dword ptr [0x8fab98] */ ST(0) = ST(0) * R_F32((u32)(0x8fab98u));
    /* 0041341d: fadd dword ptr [0x8fab94] */ ST(0) = ST(0) + R_F32((u32)(0x8fab94u));
    /* 00413423: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00413425: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00413427: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00413429: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0041342b: fst dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0));
    /* 0041342e: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00413431: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00413433: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00413435: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 00413438: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041343a: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0041343d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041343f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00413441: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 00413444: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00413446: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 00413449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041344c: ret  */ FN_RET(0x004133d8); r_esp += 4; return;
}

void f_00413450(void) /* sub_413450 */
{
    FN_ENTER(0x00413450);
    /* 00413450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00413451: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00413453: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00413458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041345a: jne 0x41345e */ if (!fZ) goto L_0041345e;
L_0041345c:; BB(0x0041345c);
    /* 0041345c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041345d: ret  */ FN_RET(0x00413450); r_esp += 4; return;
L_0041345e:; BB(0x0041345e);
    /* 0041345e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00413460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413462: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x413467u); f_0082acfc();
    /* 00413467: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00413469: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041346b: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x413470u); f_0082acfc();
    /* 00413470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413473: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x413478u); f_0082dbac();
    /* 00413478: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041347a: call 0x41349c */ r_esp -= 4; W32(r_esp, 0x41347fu); f_0041349c();
    /* 0041347f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x413484u); f_0082dab0();
    /* 00413484: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00413486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413488: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x41348du); f_0082acfc();
    /* 0041348d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041348f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413491: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x413496u); f_0082acfc();
    /* 00413496: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00413499: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041349a: ret  */ FN_RET(0x00413450); r_esp += 4; return;
}

void f_0041349c(void) /* sub_41349C */
{
    FN_ENTER(0x0041349c);
    /* 0041349c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041349d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041349f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004134a4: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x4134a9u); f_0082bb30();
    /* 004134a9: mov ecx, dword ptr [0xa3b0b4] */ r_ecx = R32((u32)(0xa3b0b4u));
    /* 004134af: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4134b4u); f_00829cc8();
    /* 004134b4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004134b7: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 004134bd: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4134c2u); f_0082bb60();
    /* 004134c2: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004134c7: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004134ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004134cc: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4134d1u); f_0082b440();
    /* 004134d1: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4134d6u); f_004ac444();
    /* 004134d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004134d7: ret  */ FN_RET(0x0041349c); r_esp += 4; return;
}

void f_004134d8(void) /* sub_4134D8 */
{
    FN_ENTER(0x004134d8);
    /* 004134d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004134d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004134db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004134dd: call 0x4134fc */ r_esp -= 4; W32(r_esp, 0x4134e2u); f_004134fc();
    /* 004134e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004134e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004134e8: jne 0x4134ee */ if (!fZ) goto L_004134ee;
L_004134ea:; BB(0x004134ea);
    /* 004134ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004134eb: ret 4 */ FN_RET(0x004134d8); r_esp += 8; return;
L_004134ee:; BB(0x004134ee);
    /* 004134ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004134ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4134f4u); f_005c2f74();
    /* 004134f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004134f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004134f6: ret 4 */ FN_RET(0x004134d8); r_esp += 8; return;
}

void f_004134fc(void) /* sub_4134FC */
{
    FN_ENTER(0x004134fc);
    /* 004134fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004134fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004134ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413501: push 0x8ccee4 */ { u32 v = 0x8ccee4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041350c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041350d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00413514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041351a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0041351d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00413520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00413523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00413526: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413529: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0041352c: mov dword ptr [ecx], 0xaf3370 */ W32((u32)(r_ecx), 0xaf3370u);
    /* 00413532: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413534: je 0x41354d */ if (fZ) goto L_0041354d;
L_00413536:; BB(0x00413536);
    /* 00413536: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413539: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041353d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413542: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00413546: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0041354d:; BB(0x0041354d);
    /* 0041354d: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00413550: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413552: je 0x41356b */ if (fZ) goto L_0041356b;
L_00413554:; BB(0x00413554);
    /* 00413554: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413557: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041355b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413560: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00413564: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0041356b:; BB(0x0041356b);
    /* 0041356b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0041356e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413570: je 0x413589 */ if (fZ) goto L_00413589;
L_00413572:; BB(0x00413572);
    /* 00413572: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413575: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00413579: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041357e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00413582: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00413589:; BB(0x00413589);
    /* 00413589: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0041358c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041358e: je 0x4135a7 */ if (fZ) goto L_004135a7;
L_00413590:; BB(0x00413590);
    /* 00413590: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413593: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00413597: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041359c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004135a0: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_004135a7:; BB(0x004135a7);
    /* 004135a7: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004135aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004135ac: je 0x4135c5 */ if (fZ) goto L_004135c5;
L_004135ae:; BB(0x004135ae);
    /* 004135ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004135b1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004135b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004135ba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004135be: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_004135c5:; BB(0x004135c5);
    /* 004135c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004135cc: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4135d1u); f_008171e8();
    /* 004135d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004135d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004135db: mov esp, ebp */ r_esp = r_ebp;
    /* 004135dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004135de: ret  */ FN_RET(0x004134fc); r_esp += 4; return;
}

void f_004135e0(void) /* sub_4135E0 */
{
    FN_ENTER(0x004135e0);
    /* 004135e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004135e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004135e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004135e5: push 0x8ccfa2 */ { u32 v = 0x8ccfa2u; r_esp -= 4; W32(r_esp, v); }
    /* 004135ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004135f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004135f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004135f8: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004135fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004135fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00413601: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00413604: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00413607: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041360a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041360d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x413612u); f_008193cc();
    /* 00413612: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00413619: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041361c: mov dword ptr [ecx], 0xaf3370 */ W32((u32)(r_ecx), 0xaf3370u);
    /* 00413622: mov eax, dword ptr [0x9a376c] */ r_eax = R32((u32)(0x9a376cu));
    /* 00413627: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0041362a: call 0x41445c */ r_esp -= 4; W32(r_esp, 0x41362fu); f_0041445c();
    /* 0041362f: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00413636: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00413638: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41363du); f_005caba4();
    /* 0041363d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041363e: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00413641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413643: je 0x413664 */ if (fZ) goto L_00413664;
L_00413645:; BB(0x00413645);
    /* 00413645: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0041364c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00413653: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00413656: mov ecx, eax */ r_ecx = r_eax;
    /* 00413658: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x41365du); f_004010b0();
    /* 0041365d: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00413664:; BB(0x00413664);
    /* 00413664: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041366b: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00413672: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00413674: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x413679u); f_005caba4();
    /* 00413679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041367a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0041367d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041367f: je 0x4136a0 */ if (fZ) goto L_004136a0;
L_00413681:; BB(0x00413681);
    /* 00413681: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00413688: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041368f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00413692: mov ecx, eax */ r_ecx = r_eax;
    /* 00413694: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x413699u); f_004012cc();
    /* 00413699: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004136a0:; BB(0x004136a0);
    /* 004136a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004136a7: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 004136ae: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 004136b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4136b8u); f_005caba4();
    /* 004136b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004136b9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004136bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136be: je 0x4136e1 */ if (fZ) goto L_004136e1;
L_004136c0:; BB(0x004136c0);
    /* 004136c0: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 004136c7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004136ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004136d0: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004136d3: mov ecx, eax */ r_ecx = r_eax;
    /* 004136d5: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x4136dau); f_00415154();
    /* 004136da: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004136e1:; BB(0x004136e1);
    /* 004136e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004136e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004136ea: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004136ed: call 0x401504 */ r_esp -= 4; W32(r_esp, 0x4136f2u); f_00401504();
    /* 004136f2: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004136f5: call 0x4029a8 */ r_esp -= 4; W32(r_esp, 0x4136fau); f_004029a8();
    /* 004136fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004136fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004136fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004136ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413700: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00413703: call 0x406ab4 */ r_esp -= 4; W32(r_esp, 0x413708u); f_00406ab4();
    /* 00413708: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041370b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00413712: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00413715: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00413717: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41371cu); f_005caba4();
    /* 0041371c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041371f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413722: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00413725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413727: je 0x413896 */ if (fZ) goto L_00413896;
L_0041372d:; BB(0x0041372d);
    /* 0041372d: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00413734: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0041373b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041373e: mov ecx, eax */ r_ecx = r_eax;
    /* 00413740: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x413745u); f_0040b72c();
    /* 00413745: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0041374c:; BB(0x0041374c);
    /* 0041374c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041374f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00413752: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00413755: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041375c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041375e: push 0x8fac30 */ { u32 v = 0x8fac30u; r_esp -= 4; W32(r_esp, v); }
    /* 00413763: push 0x8fac10 */ { u32 v = 0x8fac10u; r_esp -= 4; W32(r_esp, v); }
    /* 00413768: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413769: call 0x4121f0 */ r_esp -= 4; W32(r_esp, 0x41376eu); f_004121f0();
    /* 0041376e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00413771: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00413778: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0041377b: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00413780: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x413785u); f_005caba4();
    /* 00413785: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00413788: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041378b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041378e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413790: je 0x41388c */ if (fZ) goto L_0041388c;
L_00413796:; BB(0x00413796);
    /* 00413796: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0041379d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004137a4: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004137a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004137a9: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x4137aeu); f_0041571c();
    /* 004137ae: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004137b5:; BB(0x004137b5);
    /* 004137b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004137bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004137bf: mov dword ptr [ebp - 0x44], 0x431c0000 */ W32((u32)(r_ebp+0xffffffbcu), 0x431c0000u);
    /* 004137c6: mov dword ptr [ebp - 0x40], 0x43d28000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43d28000u);
    /* 004137cd: mov dword ptr [ebp - 0x3c], 0x43958000 */ W32((u32)(r_ebp+0xffffffc4u), 0x43958000u);
    /* 004137d4: mov dword ptr [ebp - 0x38], 0x43d28000 */ W32((u32)(r_ebp+0xffffffc8u), 0x43d28000u);
    /* 004137db: mov dword ptr [ebp - 0x34], 0x43d80000 */ W32((u32)(r_ebp+0xffffffccu), 0x43d80000u);
    /* 004137e2: mov dword ptr [ebp - 0x30], 0x43d28000 */ W32((u32)(r_ebp+0xffffffd0u), 0x43d28000u);
    /* 004137e9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004137ec: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 004137f2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004137f5: push 0x19d44 */ { u32 v = 0x19d44u; r_esp -= 4; W32(r_esp, v); }
    /* 004137fa: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00413800: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00413803: mov dword ptr [eax + 0x8c], ebx */ W32((u32)(r_eax+0x8cu), r_ebx);
    /* 00413809: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041380c: mov dword ptr [eax + 0x90], esi */ W32((u32)(r_eax+0x90u), r_esi);
    /* 00413812: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00413815: mov dword ptr [eax + 0x94], edi */ W32((u32)(r_eax+0x94u), r_edi);
    /* 0041381b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041381e: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 00413824: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0041382b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x413830u); f_005caba4();
    /* 00413830: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00413833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413836: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00413839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041383b: je 0x413885 */ if (fZ) goto L_00413885;
L_0041383d:; BB(0x0041383d);
    /* 0041383d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00413844: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0041384b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041384d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041384f: push 0xa46b80 */ { u32 v = 0xa46b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00413854: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00413857: call 0x481ff0 */ r_esp -= 4; W32(r_esp, 0x41385cu); f_00481ff0();
    /* 0041385c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00413863:; BB(0x00413863);
    /* 00413863: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00413866: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413869: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041386c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041386f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413872: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 00413875: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413878: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041387f: mov esp, ebp */ r_esp = r_ebp;
    /* 00413881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413882: ret 4 */ FN_RET(0x004135e0); r_esp += 8; return;
L_00413885:; BB(0x00413885);
    /* 00413885: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413887: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041388a: jmp 0x413863 */ goto L_00413863;
L_0041388c:; BB(0x0041388c);
    /* 0041388c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041388e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00413891: jmp 0x4137b5 */ goto L_004137b5;
L_00413896:; BB(0x00413896);
    /* 00413896: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413898: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041389b: jmp 0x41374c */ goto L_0041374c;
}

void f_00413840(void)
{
    FN_ENTER(0x00413840);
    /* 00413840: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00413842: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00413844: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0041384b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041384d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041384f: push 0xa46b80 */ { u32 v = 0xa46b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00413854: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00413857: call 0x481ff0 */ r_esp -= 4; W32(r_esp, 0x41385cu); f_00481ff0();
    /* 0041385c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00413863: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00413866: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413869: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041386c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041386f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413872: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 00413875: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413878: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041387f: mov esp, ebp */ r_esp = r_ebp;
    /* 00413881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413882: ret 4 */ FN_RET(0x00413840); r_esp += 8; return;
}

void f_004138a0(void) /* sub_4138A0 */
{
    FN_ENTER(0x004138a0);
    /* 004138a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004138a1: mov edi, ecx */ r_edi = r_ecx;
    /* 004138a3: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x4138a8u); f_0081e1f4();
    /* 004138a8: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004138ab: mov ecx, edi */ r_ecx = r_edi;
    /* 004138ad: call dword ptr [eax*4 + 0x9a3738] */ { u32 t = R32((u32)(r_eax*4+0x9a3738u)); r_esp -= 4; W32(r_esp, 0x4138b4u); call_ind(t); }
    /* 004138b4: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004138b7: cmp eax, dword ptr [edi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004138ba: je 0x4138c3 */ if (fZ) goto L_004138c3;
L_004138bc:; BB(0x004138bc);
    /* 004138bc: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
L_004138c3:; BB(0x004138c3);
    /* 004138c3: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004138c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004138c7: ret  */ FN_RET(0x004138a0); r_esp += 4; return;
}

void f_004138c8(void) /* sub_4138C8 */
{
    FN_ENTER(0x004138c8);
    /* 004138c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004138c9: mov esi, ecx */ r_esi = r_ecx;
    /* 004138cb: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 004138ce: call 0x4121bc */ r_esp -= 4; W32(r_esp, 0x4138d3u); f_004121bc();
    /* 004138d3: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 004138d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004138da: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 004138dd: mov dword ptr [eax + 0x100], 1 */ W32((u32)(r_eax+0x100u), 0x1u);
    /* 004138e7: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 004138ea: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4138efu); f_0040b7b4();
    /* 004138ef: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 004138f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004138f6: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 004138f9: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x4138feu); f_0040b7b4();
    /* 004138fe: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00413901: mov dword ptr [esi + 0x54], 0xffffffff */ W32((u32)(r_esi+0x54u), 0xffffffffu);
    /* 00413908: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041390a: je 0x413918 */ if (fZ) goto L_00413918;
L_0041390c:; BB(0x0041390c);
    /* 0041390c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x413911u); f_007127b0();
    /* 00413911: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
L_00413918:; BB(0x00413918);
    /* 00413918: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0041391b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041391d: je 0x41392b */ if (fZ) goto L_0041392b;
L_0041391f:; BB(0x0041391f);
    /* 0041391f: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413924u); f_0073d160();
    /* 00413924: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
L_0041392b:; BB(0x0041392b);
    /* 0041392b: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0041392e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413930: je 0x41393e */ if (fZ) goto L_0041393e;
L_00413932:; BB(0x00413932);
    /* 00413932: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413937u); f_0073d160();
    /* 00413937: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
L_0041393e:; BB(0x0041393e);
    /* 0041393e: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00413941: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413943: je 0x413951 */ if (fZ) goto L_00413951;
L_00413945:; BB(0x00413945);
    /* 00413945: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x41394au); f_0073d160();
    /* 0041394a: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
L_00413951:; BB(0x00413951);
    /* 00413951: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 00413954: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413956: je 0x413964 */ if (fZ) goto L_00413964;
L_00413958:; BB(0x00413958);
    /* 00413958: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x41395du); f_0073d160();
    /* 0041395d: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
L_00413964:; BB(0x00413964);
    /* 00413964: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00413967: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413969: je 0x413977 */ if (fZ) goto L_00413977;
L_0041396b:; BB(0x0041396b);
    /* 0041396b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x413970u); f_007127b0();
    /* 00413970: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
L_00413977:; BB(0x00413977);
    /* 00413977: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0041397a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041397c: je 0x41398a */ if (fZ) goto L_0041398a;
L_0041397e:; BB(0x0041397e);
    /* 0041397e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x413983u); f_007127b0();
    /* 00413983: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
L_0041398a:; BB(0x0041398a);
    /* 0041398a: mov edx, dword ptr [esi + 0x50] */ r_edx = R32((u32)(r_esi+0x50u));
    /* 0041398d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041398f: je 0x4139a5 */ if (fZ) goto L_004139a5;
L_00413991:; BB(0x00413991);
    /* 00413991: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00413995: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041399a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041399e: mov dword ptr [esi + 0x50], 0 */ W32((u32)(r_esi+0x50u), 0x0u);
L_004139a5:; BB(0x004139a5);
    /* 004139a5: mov eax, dword ptr [0xa3ae6c] */ r_eax = R32((u32)(0xa3ae6cu));
    /* 004139aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004139ac: je 0x4139f8 */ if (fZ) goto L_004139f8;
L_004139ae:; BB(0x004139ae);
    /* 004139ae: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 004139b1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004139b4: jl 0x4139f8 */ if ((fS!=fO)) goto L_004139f8;
L_004139b6:; BB(0x004139b6);
    /* 004139b6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004139b9: jg 0x4139f8 */ if ((!fZ&&fS==fO)) goto L_004139f8;
L_004139bb:; BB(0x004139bb);
    /* 004139bb: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 004139be: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004139c1: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 004139c4: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004139c7: jle 0x4139f8 */ if ((fZ||fS!=fO)) goto L_004139f8;
L_004139c9:; BB(0x004139c9);
    /* 004139c9: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004139ce: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004139d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004139d5: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x4139dau); f_0040e234();
    /* 004139da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004139db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004139dd: je 0x4139f8 */ if (fZ) goto L_004139f8;
L_004139df:; BB(0x004139df);
    /* 004139df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004139e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004139e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004139e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004139e4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 004139e9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4139eeu); f_00814298();
    /* 004139ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004139f1: call 0x81e298 */ r_esp -= 4; W32(r_esp, 0x4139f6u); f_0081e298();
    /* 004139f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004139f7: ret  */ FN_RET(0x004138c8); r_esp += 4; return;
L_004139f8:; BB(0x004139f8);
    /* 004139f8: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 004139fb: call 0x482264 */ r_esp -= 4; W32(r_esp, 0x413a00u); f_00482264();
    /* 00413a00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413a02: je 0x413a31 */ if (fZ) goto L_00413a31;
L_00413a04:; BB(0x00413a04);
    /* 00413a04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a06: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413a08: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413a0du); f_00792fe8();
    /* 00413a0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a13: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00413a16: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413a1bu); f_0040b7b4();
    /* 00413a1b: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a22: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00413a25: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413a2au); f_0040b7b4();
    /* 00413a2a: mov dword ptr [esi + 0x20], 4 */ W32((u32)(r_esi+0x20u), 0x4u);
L_00413a31:; BB(0x00413a31);
    /* 00413a31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00413a32: ret  */ FN_RET(0x004138c8); r_esp += 4; return;
}

void f_00413a34(void) /* sub_413A34 */
{
    FN_ENTER(0x00413a34);
    /* 00413a34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00413a35: mov edi, ecx */ r_edi = r_ecx;
    /* 00413a37: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00413a3c: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413a3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a3f: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x413a44u); f_0040e234();
    /* 00413a44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413a45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413a47: je 0x413a6c */ if (fZ) goto L_00413a6c;
L_00413a49:; BB(0x00413a49);
    /* 00413a49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a4e: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a53: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x413a58u); f_00814298();
    /* 00413a58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413a5b: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 00413a5e: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 00413a65: call 0x4822cc */ r_esp -= 4; W32(r_esp, 0x413a6au); f_004822cc();
    /* 00413a6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413a6b: ret  */ FN_RET(0x00413a34); r_esp += 4; return;
L_00413a6c:; BB(0x00413a6c);
    /* 00413a6c: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 00413a73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413a74: ret  */ FN_RET(0x00413a34); r_esp += 4; return;
}

void f_00413a78(void) /* sub_413A78 */
{
    FN_ENTER(0x00413a78);
    /* 00413a78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00413a79: mov edi, ecx */ r_edi = r_ecx;
    /* 00413a7b: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00413a80: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413a82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a83: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x413a88u); f_0040e234();
    /* 00413a88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413a89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413a8b: je 0x413ab0 */ if (fZ) goto L_00413ab0;
L_00413a8d:; BB(0x00413a8d);
    /* 00413a8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a92: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00413a97: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x413a9cu); f_00814298();
    /* 00413a9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413a9f: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 00413aa2: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 00413aa9: call 0x4822cc */ r_esp -= 4; W32(r_esp, 0x413aaeu); f_004822cc();
    /* 00413aae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413aaf: ret  */ FN_RET(0x00413a78); r_esp += 4; return;
L_00413ab0:; BB(0x00413ab0);
    /* 00413ab0: call 0x6c40d4 */ r_esp -= 4; W32(r_esp, 0x413ab5u); f_006c40d4();
    /* 00413ab5: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 00413abc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413abd: ret  */ FN_RET(0x00413a78); r_esp += 4; return;
}

void f_00413ac0(void) /* sub_413AC0 */
{
    FN_ENTER(0x00413ac0);
    /* 00413ac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00413ac1: mov esi, ecx */ r_esi = r_ecx;
    /* 00413ac3: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00413ac8: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413acb: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x413ad0u); f_0040e234();
    /* 00413ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413ad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ad3: je 0x413af8 */ if (fZ) goto L_00413af8;
L_00413ad5:; BB(0x00413ad5);
    /* 00413ad5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ada: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00413adf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x413ae4u); f_00814298();
    /* 00413ae4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ae7: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00413aea: mov dword ptr [esi + 0x20], 0xb */ W32((u32)(r_esi+0x20u), 0xbu);
    /* 00413af1: call 0x4822cc */ r_esp -= 4; W32(r_esp, 0x413af6u); f_004822cc();
    /* 00413af6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00413af7: ret  */ FN_RET(0x00413ac0); r_esp += 4; return;
L_00413af8:; BB(0x00413af8);
    /* 00413af8: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00413afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413aff: jne 0x413b08 */ if (!fZ) goto L_00413b08;
L_00413b01:; BB(0x00413b01);
    /* 00413b01: mov dword ptr [esi + 0x20], 4 */ W32((u32)(r_esi+0x20u), 0x4u);
L_00413b08:; BB(0x00413b08);
    /* 00413b08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00413b09: ret  */ FN_RET(0x00413ac0); r_esp += 4; return;
}

void f_00413b0c(void) /* sub_413B0C */
{
    FN_ENTER(0x00413b0c);
    /* 00413b0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00413b0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00413b0f: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00413b14: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413b16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413b17: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x413b1cu); f_0040e234();
    /* 00413b1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b1f: je 0x413b44 */ if (fZ) goto L_00413b44;
L_00413b21:; BB(0x00413b21);
    /* 00413b21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413b26: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00413b2b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x413b30u); f_00814298();
    /* 00413b30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413b33: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 00413b36: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 00413b3d: call 0x4822cc */ r_esp -= 4; W32(r_esp, 0x413b42u); f_004822cc();
    /* 00413b42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413b43: ret  */ FN_RET(0x00413b0c); r_esp += 4; return;
L_00413b44:; BB(0x00413b44);
    /* 00413b44: push 0x8fac10 */ { u32 v = 0x8fac10u; r_esp -= 4; W32(r_esp, v); }
    /* 00413b49: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00413b4c: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x413b51u); f_00412094();
    /* 00413b51: push 0x8fac18 */ { u32 v = 0x8fac18u; r_esp -= 4; W32(r_esp, v); }
    /* 00413b56: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00413b59: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x413b5eu); f_00412094();
    /* 00413b5e: push 0x8fac20 */ { u32 v = 0x8fac20u; r_esp -= 4; W32(r_esp, v); }
    /* 00413b63: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00413b66: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x413b6bu); f_00412094();
    /* 00413b6b: push 0x8fac28 */ { u32 v = 0x8fac28u; r_esp -= 4; W32(r_esp, v); }
    /* 00413b70: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00413b73: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x413b78u); f_00412094();
    /* 00413b78: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 00413b7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413b80: ret  */ FN_RET(0x00413b0c); r_esp += 4; return;
}

void f_00413b84(void) /* sub_413B84 */
{
    FN_ENTER(0x00413b84);
    /* 00413b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00413b85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413b86: mov edi, ecx */ r_edi = r_ecx;
    /* 00413b88: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00413b8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b8d: je 0x413b9b */ if (fZ) goto L_00413b9b;
L_00413b8f:; BB(0x00413b8f);
    /* 00413b8f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x413b94u); f_007127b0();
    /* 00413b94: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_00413b9b:; BB(0x00413b9b);
    /* 00413b9b: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00413b9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ba0: je 0x413bae */ if (fZ) goto L_00413bae;
L_00413ba2:; BB(0x00413ba2);
    /* 00413ba2: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413ba7u); f_0073d160();
    /* 00413ba7: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_00413bae:; BB(0x00413bae);
    /* 00413bae: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 00413bb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bb3: je 0x413bc1 */ if (fZ) goto L_00413bc1;
L_00413bb5:; BB(0x00413bb5);
    /* 00413bb5: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413bbau); f_0073d160();
    /* 00413bba: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
L_00413bc1:; BB(0x00413bc1);
    /* 00413bc1: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 00413bc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bc6: je 0x413bd4 */ if (fZ) goto L_00413bd4;
L_00413bc8:; BB(0x00413bc8);
    /* 00413bc8: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413bcdu); f_0073d160();
    /* 00413bcd: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
L_00413bd4:; BB(0x00413bd4);
    /* 00413bd4: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 00413bd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bd9: je 0x413be7 */ if (fZ) goto L_00413be7;
L_00413bdb:; BB(0x00413bdb);
    /* 00413bdb: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x413be0u); f_0073d160();
    /* 00413be0: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
L_00413be7:; BB(0x00413be7);
    /* 00413be7: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 00413bea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bec: je 0x413c02 */ if (fZ) goto L_00413c02;
L_00413bee:; BB(0x00413bee);
    /* 00413bee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00413bf2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413bf7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00413bfb: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
L_00413c02:; BB(0x00413c02);
    /* 00413c02: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00413c07: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00413c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413c0a: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x413c0fu); f_0040e234();
    /* 00413c0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413c10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c12: je 0x413c38 */ if (fZ) goto L_00413c38;
L_00413c14:; BB(0x00413c14);
    /* 00413c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00413c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413c17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413c19: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00413c1e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x413c23u); f_00814298();
    /* 00413c23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413c26: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 00413c29: mov dword ptr [edi + 0x20], 0xb */ W32((u32)(r_edi+0x20u), 0xbu);
    /* 00413c30: call 0x4822cc */ r_esp -= 4; W32(r_esp, 0x413c35u); f_004822cc();
    /* 00413c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413c36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413c37: ret  */ FN_RET(0x00413b84); r_esp += 4; return;
L_00413c38:; BB(0x00413c38);
    /* 00413c38: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00413c3b: mov ebp, dword ptr [edx + 0x44] */ r_ebp = R32((u32)(r_edx+0x44u));
    /* 00413c3e: cmp ebp, dword ptr [edi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c41: je 0x413ce1 */ if (fZ) goto L_00413ce1;
L_00413c47:; BB(0x00413c47);
    /* 00413c47: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413c48: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00413c4b: mov dword ptr [eax + 0x100], 1 */ W32((u32)(r_eax+0x100u), 0x1u);
    /* 00413c55: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x413c5au); f_006c44d0();
    /* 00413c5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413c5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c5d: je 0x413cb2 */ if (fZ) goto L_00413cb2;
L_00413c5f:; BB(0x00413c5f);
    /* 00413c5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413c60: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x413c65u); f_006c1a80();
    /* 00413c65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413c66: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00413c69: mov dword ptr [eax + 0x100], 2 */ W32((u32)(r_eax+0x100u), 0x2u);
    /* 00413c73: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 00413c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c7a: je 0x413cb2 */ if (fZ) goto L_00413cb2;
L_00413c7c:; BB(0x00413c7c);
    /* 00413c7c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00413c7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00413c80: je 0x413cb2 */ if (fZ) goto L_00413cb2;
L_00413c82:; BB(0x00413c82);
    /* 00413c82: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00413c84: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413c86: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413c8bu); f_00792fe8();
    /* 00413c8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413c91: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00413c94: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413c99u); f_0040b7b4();
    /* 00413c99: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413c9b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413c9d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413ca2u); f_00792fe8();
    /* 00413ca2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ca6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ca8: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00413cab: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413cb0u); f_0040b7b4();
    /* 00413cb0: jmp 0x413cd8 */ goto L_00413cd8;
L_00413cb2:; BB(0x00413cb2);
    /* 00413cb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413cb4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413cb6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413cbbu); f_00792fe8();
    /* 00413cbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413cc1: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00413cc4: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413cc9u); f_0040b7b4();
    /* 00413cc9: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00413cce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413cd0: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00413cd3: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x413cd8u); f_0040b7b4();
L_00413cd8:; BB(0x00413cd8);
    /* 00413cd8: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00413cdb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00413cde: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
L_00413ce1:; BB(0x00413ce1);
    /* 00413ce1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00413ce4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00413ce7: je 0x413cec */ if (fZ) goto L_00413cec;
L_00413ce9:; BB(0x00413ce9);
    /* 00413ce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413cea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413ceb: ret  */ FN_RET(0x00413b84); r_esp += 4; return;
L_00413cec:; BB(0x00413cec);
    /* 00413cec: mov ebp, dword ptr [edx + 0x44] */ r_ebp = R32((u32)(r_edx+0x44u));
    /* 00413cef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413cf0: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x413cf5u); f_006c1a80();
    /* 00413cf5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413cf6: call 0x6c1ba4 */ r_esp -= 4; W32(r_esp, 0x413cfbu); f_006c1ba4();
    /* 00413cfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d00: je 0x413d1b */ if (fZ) goto L_00413d1b;
L_00413d02:; BB(0x00413d02);
    /* 00413d02: push 0x8fac00 */ { u32 v = 0x8fac00u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d07: mov ecx, edi */ r_ecx = r_edi;
    /* 00413d09: call 0x413d3c */ r_esp -= 4; W32(r_esp, 0x413d0eu); f_00413d3c();
    /* 00413d0e: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 00413d15: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00413d18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413d19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413d1a: ret  */ FN_RET(0x00413b84); r_esp += 4; return;
L_00413d1b:; BB(0x00413d1b);
    /* 00413d1b: mov ecx, dword ptr [0xa3a900] */ r_ecx = R32((u32)(0xa3a900u));
    /* 00413d21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d23: push 0x8fac08 */ { u32 v = 0x8fac08u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d28: call 0x40287c */ r_esp -= 4; W32(r_esp, 0x413d2du); f_0040287c();
    /* 00413d2d: mov dword ptr [edi + 0x20], 8 */ W32((u32)(r_edi+0x20u), 0x8u);
    /* 00413d34: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00413d37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413d38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413d39: ret  */ FN_RET(0x00413b84); r_esp += 4; return;
}

void f_00413d3c(void) /* sub_413D3C */
{
    FN_ENTER(0x00413d3c);
    /* 00413d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413d3d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00413d3f: call 0x413f00 */ r_esp -= 4; W32(r_esp, 0x413d44u); f_00413f00();
    /* 00413d44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d46: je 0x413ea1 */ if (fZ) goto L_00413ea1;
L_00413d4c:; BB(0x00413d4c);
    /* 00413d4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d4f: je 0x413e35 */ if (fZ) goto L_00413e35;
L_00413d55:; BB(0x00413d55);
    /* 00413d55: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d58: jne 0x413dd2 */ if (!fZ) goto L_00413dd2;
L_00413d5a:; BB(0x00413d5a);
    /* 00413d5a: mov eax, 4 */ r_eax = 0x4u;
    /* 00413d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413d61: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00413d65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413d66: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x413d6bu); f_007354fc();
    /* 00413d6b: mov ebp, eax */ r_ebp = r_eax;
    /* 00413d6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d6f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413d71: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413d76u); f_00792fe8();
    /* 00413d76: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413d79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d7b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413d80: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413d85u); f_00735c90();
    /* 00413d85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d87: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413d89: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413d8eu); f_00792fe8();
    /* 00413d8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413d91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d93: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413d97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413d98: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413d9du); f_00735c90();
    /* 00413d9d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413d9f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413da1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413da6u); f_00792fe8();
    /* 00413da6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413da9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00413dab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413dad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413db0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413db5u); f_00735c90();
    /* 00413db5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413db7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413db9: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413dbeu); f_00792fe8();
    /* 00413dbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413dc1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413dc3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413dc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413dc8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413dcdu); f_00735c90();
    /* 00413dcd: jmp 0x413e8d */ goto L_00413e8d;
L_00413dd2:; BB(0x00413dd2);
    /* 00413dd2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413dd5: jne 0x413e8d */ if (!fZ) goto L_00413e8d;
L_00413ddb:; BB(0x00413ddb);
    /* 00413ddb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ddd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ddf: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00413de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413de4: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x413de9u); f_007354fc();
    /* 00413de9: mov ebp, eax */ r_ebp = r_eax;
    /* 00413deb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ded: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413def: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413df4u); f_00792fe8();
    /* 00413df4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413df7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413df9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413dfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413dfe: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e03u); f_00735c90();
    /* 00413e03: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e05: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e07: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413e0cu); f_00792fe8();
    /* 00413e0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413e0f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e11: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e16: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e1bu); f_00735c90();
    /* 00413e1b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e1d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e1f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413e24u); f_00792fe8();
    /* 00413e24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413e27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e29: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e2e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e33u); f_00735c90();
    /* 00413e33: jmp 0x413e8d */ goto L_00413e8d;
L_00413e35:; BB(0x00413e35);
    /* 00413e35: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e37: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e39: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00413e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e3e: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x413e43u); f_007354fc();
    /* 00413e43: mov ebp, eax */ r_ebp = r_eax;
    /* 00413e45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e47: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e49: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413e4eu); f_00792fe8();
    /* 00413e4e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413e51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e53: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e58: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e5du); f_00735c90();
    /* 00413e5d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e5f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e61: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413e66u); f_00792fe8();
    /* 00413e66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413e69: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e70: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e75u); f_00735c90();
    /* 00413e75: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00413e77: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e79: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413e7eu); f_00792fe8();
    /* 00413e7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413e81: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413e85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e88: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413e8du); f_00735c90();
L_00413e8d:; BB(0x00413e8d);
    /* 00413e8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e8f: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x413e94u); f_0073608c();
    /* 00413e94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413e96: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x413e9bu); f_00736458();
    /* 00413e9b: mov eax, ebp */ r_eax = r_ebp;
    /* 00413e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413e9e: ret 4 */ FN_RET(0x00413d3c); r_esp += 8; return;
L_00413ea1:; BB(0x00413ea1);
    /* 00413ea1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ea3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ea5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00413ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413eaa: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x413eafu); f_007354fc();
    /* 00413eaf: mov ebp, eax */ r_ebp = r_eax;
    /* 00413eb1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00413eb3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413eb5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413ebau); f_00792fe8();
    /* 00413eba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ebd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ebf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ec1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ec4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413ec9u); f_00735c90();
    /* 00413ec9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ecb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ecd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413ed2u); f_00792fe8();
    /* 00413ed2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ed5: mov edx, 6 */ r_edx = 0x6u;
    /* 00413eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413edb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413edc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413edf: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413ee4u); f_00735c90();
    /* 00413ee4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ee6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ee8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x413eedu); f_00792fe8();
    /* 00413eed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ef0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ef2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00413ef4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00413ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413ef7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x413efcu); f_00735c90();
    /* 00413efc: jmp 0x413e8d */ goto L_00413e8d;
}

void f_00413f00(void) /* sub_413F00 */
{
    FN_ENTER(0x00413f00);
    /* 00413f00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00413f01: mov edi, ecx */ r_edi = r_ecx;
    /* 00413f03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413f05: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x413f0au); f_006c1bcc();
    /* 00413f0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00413f0b: mov eax, dword ptr [eax + 0x39c] */ r_eax = R32((u32)(r_eax+0x39cu));
    /* 00413f11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413f13: je 0x413f1c */ if (fZ) goto L_00413f1c;
L_00413f15:; BB(0x00413f15);
    /* 00413f15: mov eax, 1 */ r_eax = 0x1u;
    /* 00413f1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413f1b: ret  */ FN_RET(0x00413f00); r_esp += 4; return;
L_00413f1c:; BB(0x00413f1c);
    /* 00413f1c: mov ecx, edi */ r_ecx = r_edi;
    /* 00413f1e: call 0x413f38 */ r_esp -= 4; W32(r_esp, 0x413f23u); f_00413f38();
    /* 00413f23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413f25: je 0x413f2e */ if (fZ) goto L_00413f2e;
L_00413f27:; BB(0x00413f27);
    /* 00413f27: mov eax, 2 */ r_eax = 0x2u;
    /* 00413f2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413f2d: ret  */ FN_RET(0x00413f00); r_esp += 4; return;
L_00413f2e:; BB(0x00413f2e);
    /* 00413f2e: mov eax, 3 */ r_eax = 0x3u;
    /* 00413f33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00413f34: ret  */ FN_RET(0x00413f00); r_esp += 4; return;
}

void f_00413f38(void) /* sub_413F38 */
{
    FN_ENTER(0x00413f38);
    /* 00413f38: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 00413f3d: mov edx, dword ptr [eax + 0xaec] */ r_edx = R32((u32)(r_eax+0xaecu));
    /* 00413f43: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413f46: je 0x413f4e */ if (fZ) goto L_00413f4e;
L_00413f48:; BB(0x00413f48);
    /* 00413f48: mov eax, 1 */ r_eax = 0x1u;
    /* 00413f4d: ret  */ FN_RET(0x00413f38); r_esp += 4; return;
L_00413f4e:; BB(0x00413f4e);
    /* 00413f4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00413f50: ret  */ FN_RET(0x00413f38); r_esp += 4; return;
}

void f_00413f54(void) /* sub_413F54 */
{
    FN_ENTER(0x00413f54);
    /* 00413f54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413f55: mov ebp, esp */ r_ebp = r_esp;
    /* 00413f57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413f59: push 0x8ccfc8 */ { u32 v = 0x8ccfc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00413f5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00413f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413f65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00413f6c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413f6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00413f72: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00413f75: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00413f78: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00413f7b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00413f7e: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00413f81: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00413f88: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00413f8a: je 0x4140dc */ if (fZ) goto L_004140dc;
L_00413f90:; BB(0x00413f90);
    /* 00413f90: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x413f95u); f_007365f4();
    /* 00413f95: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413f98: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00413f9b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00413f9e: ja 0x4140f7 */ if ((!fC&&!fZ)) goto L_004140f7;
L_00413fa4:; BB(0x00413fa4);
    /* 00413fa4: mov eax, dword ptr [eax*4 + 0x8fabb8] */ r_eax = R32((u32)(r_eax*4+0x8fabb8u));
    /* 00413fab: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004140dc:; BB(0x004140dc);
    /* 004140dc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004140de: je 0x4140f7 */ if (fZ) goto L_004140f7;
L_004140e0:; BB(0x004140e0);
    /* 004140e0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004140e3: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004140e6: mov dword ptr [eax + 0x1f0], 1 */ W32((u32)(r_eax+0x1f0u), 0x1u);
    /* 004140f0: mov dword ptr [edx + 0x20], 5 */ W32((u32)(r_edx+0x20u), 0x5u);
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00413f54); r_esp += 4; return;
}

void f_00413fad(void)
{
    FN_ENTER(0x00413fad);
    /* 00413fad: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00413fb4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00413fb6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x413fbbu); f_005caba4();
    /* 00413fbb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00413fbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413fc1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00413fc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413fc6: je 0x414105 */ if (fZ) goto L_00414105;
L_00413fcc:; BB(0x00413fcc);
    /* 00413fcc: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00413fd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00413fda: mov ecx, eax */ r_ecx = r_eax;
    /* 00413fdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413fde: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00413fe4: call 0x409d28 */ r_esp -= 4; W32(r_esp, 0x413fe9u); f_00409d28();
    /* 00413fe9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00413ff0:; BB(0x00413ff0);
    /* 00413ff0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413ff3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413ff6: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00413ff9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00414000: mov ecx, dword ptr [0xa3a900] */ r_ecx = R32((u32)(0xa3a900u));
    /* 00414006: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00414008: push 0x8fabf0 */ { u32 v = 0x8fabf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041400d: call 0x402954 */ r_esp -= 4; W32(r_esp, 0x414012u); f_00402954();
    /* 00414012: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00414015: mov dword ptr [edx + 0x20], 7 */ W32((u32)(r_edx+0x20u), 0x7u);
    /* 0041401c: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0041401f: jmp 0x4140f7 */ goto L_004140f7;
L_004140f7:; BB(0x004140f7);
    /* 004140f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004140fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00414101: mov esp, ebp */ r_esp = r_ebp;
    /* 00414103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414104: ret  */ FN_RET(0x00413fad); r_esp += 4; return;
L_00414105:; BB(0x00414105);
    /* 00414105: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00414107: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041410a: jmp 0x413ff0 */ goto L_00413ff0;
}

