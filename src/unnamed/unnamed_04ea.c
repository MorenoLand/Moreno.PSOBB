#include "protos.h"

void f_004ea00c(void) /* sub_4EA00C */
{
    FN_ENTER(0x004ea00c);
    /* 004ea00c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ea00f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004ea013: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004ea017: call 0x4e9e84 */ r_esp -= 4; W32(r_esp, 0x4ea01cu); f_004e9e84();
    /* 004ea01c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004ea020: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004ea024: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 004ea027: movsx eax, word ptr [ecx + eax*4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*4));
    /* 004ea02b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ea02e: ret  */ FN_RET(0x004ea00c); r_esp += 4; return;
}

void f_004ea030(void) /* sub_4EA030 */
{
    FN_ENTER(0x004ea030);
    /* 004ea030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ea031: mov ebp, esp */ r_ebp = r_esp;
    /* 004ea033: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ea039: movzx eax, byte ptr [0xa721d0] */ r_eax = (u32)R8((u32)(0xa721d0u));
    /* 004ea040: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ea042: jne 0x4ea2d2 */ if (!fZ) goto L_004ea2d2;
L_004ea048:; BB(0x004ea048);
    /* 004ea048: mov dword ptr [0x9b8aa0], 0xc1000000 */ W32((u32)(0x9b8aa0u), 0xc1000000u);
    /* 004ea052: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea057: mov byte ptr [0xa721d0], al */ W8((u32)(0xa721d0u), (u8)r_eax);
    /* 004ea05c: mov dword ptr [0x9b8aa8], 0 */ W32((u32)(0x9b8aa8u), 0x0u);
    /* 004ea066: mov dword ptr [0x9b8aac], 0x41000000 */ W32((u32)(0x9b8aacu), 0x41000000u);
    /* 004ea070: mov dword ptr [0x9b8ab4], 0 */ W32((u32)(0x9b8ab4u), 0x0u);
    /* 004ea07a: mov dword ptr [0x9b8ab8], 0xc1000000 */ W32((u32)(0x9b8ab8u), 0xc1000000u);
    /* 004ea084: mov dword ptr [0x9b8ac0], 0 */ W32((u32)(0x9b8ac0u), 0x0u);
    /* 004ea08e: mov dword ptr [0x9b8ac4], 0x41000000 */ W32((u32)(0x9b8ac4u), 0x41000000u);
    /* 004ea098: mov dword ptr [0x9b8acc], 0 */ W32((u32)(0x9b8accu), 0x0u);
    /* 004ea0a2: mov dword ptr [0x9b8ad0], 0xc0f00000 */ W32((u32)(0x9b8ad0u), 0xc0f00000u);
    /* 004ea0ac: mov dword ptr [0x9b8ad8], 0 */ W32((u32)(0x9b8ad8u), 0x0u);
    /* 004ea0b6: mov dword ptr [0x9b8adc], 0x40f00000 */ W32((u32)(0x9b8adcu), 0x40f00000u);
    /* 004ea0c0: mov dword ptr [0x9b8ae4], 0 */ W32((u32)(0x9b8ae4u), 0x0u);
    /* 004ea0ca: mov dword ptr [0x9b8ae8], 0xc0f00000 */ W32((u32)(0x9b8ae8u), 0xc0f00000u);
    /* 004ea0d4: mov dword ptr [0x9b8af0], 0 */ W32((u32)(0x9b8af0u), 0x0u);
    /* 004ea0de: mov dword ptr [0x9b8af4], 0x40f00000 */ W32((u32)(0x9b8af4u), 0x40f00000u);
    /* 004ea0e8: mov dword ptr [0x9b8afc], 0 */ W32((u32)(0x9b8afcu), 0x0u);
    /* 004ea0f2: mov dword ptr [0x9b8b00], 0xc0f00000 */ W32((u32)(0x9b8b00u), 0xc0f00000u);
    /* 004ea0fc: mov dword ptr [0x9b8b08], 0 */ W32((u32)(0x9b8b08u), 0x0u);
    /* 004ea106: mov dword ptr [0x9b8b0c], 0x40f00000 */ W32((u32)(0x9b8b0cu), 0x40f00000u);
    /* 004ea110: mov dword ptr [0x9b8b14], 0 */ W32((u32)(0x9b8b14u), 0x0u);
    /* 004ea11a: mov dword ptr [0x9b8b18], 0xc0f00000 */ W32((u32)(0x9b8b18u), 0xc0f00000u);
    /* 004ea124: mov dword ptr [0x9b8b20], 0 */ W32((u32)(0x9b8b20u), 0x0u);
    /* 004ea12e: mov dword ptr [0x9b8b24], 0x40f00000 */ W32((u32)(0x9b8b24u), 0x40f00000u);
    /* 004ea138: mov dword ptr [0x9b8b2c], 0 */ W32((u32)(0x9b8b2cu), 0x0u);
    /* 004ea142: mov dword ptr [0x9b8b30], 0xc1000000 */ W32((u32)(0x9b8b30u), 0xc1000000u);
    /* 004ea14c: mov dword ptr [0x9b8b38], 0 */ W32((u32)(0x9b8b38u), 0x0u);
    /* 004ea156: mov dword ptr [0x9b8b3c], 0x41000000 */ W32((u32)(0x9b8b3cu), 0x41000000u);
    /* 004ea160: mov dword ptr [0x9b8b44], 0 */ W32((u32)(0x9b8b44u), 0x0u);
    /* 004ea16a: mov dword ptr [0x9b8b48], 0xc0f00000 */ W32((u32)(0x9b8b48u), 0xc0f00000u);
    /* 004ea174: mov dword ptr [0x9b8b50], 0 */ W32((u32)(0x9b8b50u), 0x0u);
    /* 004ea17e: mov dword ptr [0x9b8b54], 0x40f00000 */ W32((u32)(0x9b8b54u), 0x40f00000u);
    /* 004ea188: mov dword ptr [0x9b8b5c], 0 */ W32((u32)(0x9b8b5cu), 0x0u);
    /* 004ea192: mov dword ptr [0x9b8b60], 0xc0f00000 */ W32((u32)(0x9b8b60u), 0xc0f00000u);
    /* 004ea19c: mov dword ptr [0x9b8b68], 0 */ W32((u32)(0x9b8b68u), 0x0u);
    /* 004ea1a6: mov dword ptr [0x9b8b6c], 0x40f00000 */ W32((u32)(0x9b8b6cu), 0x40f00000u);
    /* 004ea1b0: mov dword ptr [0x9b8b74], 0 */ W32((u32)(0x9b8b74u), 0x0u);
    /* 004ea1ba: mov dword ptr [0x9b8b78], 0xc0f00000 */ W32((u32)(0x9b8b78u), 0xc0f00000u);
    /* 004ea1c4: mov dword ptr [0x9b8b80], 0 */ W32((u32)(0x9b8b80u), 0x0u);
    /* 004ea1ce: mov dword ptr [0x9b8b84], 0x40f00000 */ W32((u32)(0x9b8b84u), 0x40f00000u);
    /* 004ea1d8: mov dword ptr [0x9b8b8c], 0 */ W32((u32)(0x9b8b8cu), 0x0u);
    /* 004ea1e2: mov dword ptr [0x9b8b90], 0xc0f00000 */ W32((u32)(0x9b8b90u), 0xc0f00000u);
    /* 004ea1ec: mov dword ptr [0x9b8b98], 0 */ W32((u32)(0x9b8b98u), 0x0u);
    /* 004ea1f6: mov dword ptr [0x9b8b9c], 0x40f00000 */ W32((u32)(0x9b8b9cu), 0x40f00000u);
    /* 004ea200: mov dword ptr [0x9b8ba4], 0 */ W32((u32)(0x9b8ba4u), 0x0u);
    /* 004ea20a: mov dword ptr [0x9b8ba8], 0xc1000000 */ W32((u32)(0x9b8ba8u), 0xc1000000u);
    /* 004ea214: mov dword ptr [0x9b8bb0], 0 */ W32((u32)(0x9b8bb0u), 0x0u);
    /* 004ea21e: mov dword ptr [0x9b8bb4], 0x41000000 */ W32((u32)(0x9b8bb4u), 0x41000000u);
    /* 004ea228: mov dword ptr [0x9b8bbc], 0 */ W32((u32)(0x9b8bbcu), 0x0u);
    /* 004ea232: mov dword ptr [0x9b8bc0], 0xc0f00000 */ W32((u32)(0x9b8bc0u), 0xc0f00000u);
    /* 004ea23c: mov dword ptr [0x9b8bc8], 0 */ W32((u32)(0x9b8bc8u), 0x0u);
    /* 004ea246: mov dword ptr [0x9b8bcc], 0x40f00000 */ W32((u32)(0x9b8bccu), 0x40f00000u);
    /* 004ea250: mov dword ptr [0x9b8bd4], 0 */ W32((u32)(0x9b8bd4u), 0x0u);
    /* 004ea25a: mov dword ptr [0x9b8bd8], 0xc0f00000 */ W32((u32)(0x9b8bd8u), 0xc0f00000u);
    /* 004ea264: mov dword ptr [0x9b8be0], 0 */ W32((u32)(0x9b8be0u), 0x0u);
    /* 004ea26e: mov dword ptr [0x9b8be4], 0x40f00000 */ W32((u32)(0x9b8be4u), 0x40f00000u);
    /* 004ea278: mov dword ptr [0x9b8bec], 0 */ W32((u32)(0x9b8becu), 0x0u);
    /* 004ea282: mov dword ptr [0x9b8bf0], 0xc0f00000 */ W32((u32)(0x9b8bf0u), 0xc0f00000u);
    /* 004ea28c: mov dword ptr [0x9b8bf8], 0 */ W32((u32)(0x9b8bf8u), 0x0u);
    /* 004ea296: mov dword ptr [0x9b8bfc], 0x40f00000 */ W32((u32)(0x9b8bfcu), 0x40f00000u);
    /* 004ea2a0: mov dword ptr [0x9b8c04], 0 */ W32((u32)(0x9b8c04u), 0x0u);
    /* 004ea2aa: mov dword ptr [0x9b8c08], 0xc0f00000 */ W32((u32)(0x9b8c08u), 0xc0f00000u);
    /* 004ea2b4: mov dword ptr [0x9b8c10], 0 */ W32((u32)(0x9b8c10u), 0x0u);
    /* 004ea2be: mov dword ptr [0x9b8c14], 0x40f00000 */ W32((u32)(0x9b8c14u), 0x40f00000u);
    /* 004ea2c8: mov dword ptr [0x9b8c1c], 0 */ W32((u32)(0x9b8c1cu), 0x0u);
L_004ea2d2:; BB(0x004ea2d2);
    /* 004ea2d2: fld dword ptr [0x91d6a8] */ FPUSH(R_F32((u32)(0x91d6a8u)));
    /* 004ea2d8: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 004ea2db: fnstcw word ptr [ebp - 0x18] */ W16((u32)(r_ebp+0xffffffe8u), fcw);
    /* 004ea2de: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 004ea2e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea2e7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004ea2ea: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
    /* 004ea2ed: fistp qword ptr [ebp - 8] */ W64((u32)(r_ebp+0xfffffff8u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ea2f0: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 004ea2f3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ea2f6: mov dword ptr [ebp - 0x28], 0x9b8aa0 */ W32((u32)(r_ebp+0xffffffd8u), 0x9b8aa0u);
    /* 004ea2fd: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ea300: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004ea307: or eax, 0xffffa0 */ {  u32 a = r_eax; u32 b = 0xffffa0u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea30c: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004ea312: mov dword ptr [ebp - 0x1c], 0x20 */ W32((u32)(r_ebp+0xffffffe4u), 0x20u);
    /* 004ea319: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004ea31f: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004ea325: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004ea32b: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004ea331: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004ea337: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004ea33d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004ea343: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004ea349: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004ea34f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004ea352: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004ea355: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004ea358: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004ea35b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004ea35e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004ea361: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004ea364: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004ea367: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004ea36a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004ea36d: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004ea370: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004ea373: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004ea376: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004ea379: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004ea37c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004ea37f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004ea382: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ea385: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004ea388: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004ea38b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004ea38e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004ea391: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 004ea397: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004ea39a: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 004ea39d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea39f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea3a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea3a2: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x4ea3a7u); f_0082c07c();
    /* 004ea3a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ea3aa: movzx edx, byte ptr [0xa721d0] */ r_edx = (u32)R8((u32)(0xa721d0u));
    /* 004ea3b1: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ea3b4: jne 0x4ea3c9 */ if (!fZ) goto L_004ea3c9;
L_004ea3b6:; BB(0x004ea3b6);
    /* 004ea3b6: mov dword ptr [0xa721d4], 0xbdcccccd */ W32((u32)(0xa721d4u), 0xbdcccccdu);
    /* 004ea3c0: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ea3c3: mov byte ptr [0xa721d0], dl */ W8((u32)(0xa721d0u), (u8)r_edx);
L_004ea3c9:; BB(0x004ea3c9);
    /* 004ea3c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ea3cc: jne 0x4ea42f */ if (!fZ) goto L_004ea42f;
L_004ea3ce:; BB(0x004ea3ce);
    /* 004ea3ce: mov eax, dword ptr [0xa721d4] */ r_eax = R32((u32)(0xa721d4u));
    /* 004ea3d3: mov dword ptr [0xa721d8], 0xc0f00000 */ W32((u32)(0xa721d8u), 0xc0f00000u);
    /* 004ea3dd: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ea3e3: mov dword ptr [0xa721e0], eax */ W32((u32)(0xa721e0u), r_eax);
    /* 004ea3e8: mov dword ptr [0xa721e4], 0x40f00000 */ W32((u32)(0xa721e4u), 0x40f00000u);
    /* 004ea3f2: mov dword ptr [0xa721ec], eax */ W32((u32)(0xa721ecu), r_eax);
    /* 004ea3f7: mov dword ptr [0xa721f0], 0x40f00000 */ W32((u32)(0xa721f0u), 0x40f00000u);
    /* 004ea401: mov dword ptr [0xa721f4], 0x41700000 */ W32((u32)(0xa721f4u), 0x41700000u);
    /* 004ea40b: mov dword ptr [0xa721f8], eax */ W32((u32)(0xa721f8u), r_eax);
    /* 004ea410: mov dword ptr [0xa72204], eax */ W32((u32)(0xa72204u), r_eax);
    /* 004ea415: mov dword ptr [0xa721fc], 0xc0f00000 */ W32((u32)(0xa721fcu), 0xc0f00000u);
    /* 004ea41f: mov dword ptr [0xa72200], 0x41700000 */ W32((u32)(0xa72200u), 0x41700000u);
    /* 004ea429: mov byte ptr [0xa721d0], dl */ W8((u32)(0xa721d0u), (u8)r_edx);
L_004ea42f:; BB(0x004ea42f);
    /* 004ea42f: fld dword ptr [0x91d6a0] */ FPUSH(R_F32((u32)(0x91d6a0u)));
    /* 004ea435: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 004ea438: fnstcw word ptr [ebp - 0x18] */ W16((u32)(r_ebp+0xffffffe8u), fcw);
    /* 004ea43b: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 004ea43f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea444: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004ea447: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
    /* 004ea44a: fistp qword ptr [ebp - 8] */ W64((u32)(r_ebp+0xfffffff8u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ea44d: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 004ea450: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea452: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ea455: or eax, 0x404040 */ {  u32 a = r_eax; u32 b = 0x404040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea45a: mov dword ptr [0x9b8c3c], eax */ W32((u32)(0x9b8c3cu), r_eax);
    /* 004ea45f: mov dword ptr [0x9b8c38], eax */ W32((u32)(0x9b8c38u), r_eax);
    /* 004ea464: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea466: push 0x9b8c28 */ { u32 v = 0x9b8c28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea46b: call 0x82c0d8 */ r_esp -= 4; W32(r_esp, 0x4ea470u); f_0082c0d8();
    /* 004ea470: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ea473: mov esp, ebp */ r_esp = r_ebp;
    /* 004ea475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ea476: ret  */ FN_RET(0x004ea030); r_esp += 4; return;
}

void f_004ea4a4(void) /* sub_4EA4A4 */
{
    FN_ENTER(0x004ea4a4);
    /* 004ea4a4: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 004ea4a9: mov dword ptr [0xa7221c], 0x3f800000 */ W32((u32)(0xa7221cu), 0x3f800000u);
    /* 004ea4b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea4b5: je 0x4ea4cd */ if (fZ) goto L_004ea4cd;
L_004ea4b7:; BB(0x004ea4b7);
    /* 004ea4b7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea4ba: jl 0x4ea4c1 */ if ((fS!=fO)) goto L_004ea4c1;
L_004ea4bc:; BB(0x004ea4bc);
    /* 004ea4bc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea4bf: jle 0x4ea4cd */ if ((fZ||fS!=fO)) goto L_004ea4cd;
L_004ea4c1:; BB(0x004ea4c1);
    /* 004ea4c1: mov dword ptr [0xa72214], 1 */ W32((u32)(0xa72214u), 0x1u);
    /* 004ea4cb: jmp 0x4ea4d7 */ goto L_004ea4d7;
L_004ea4cd:; BB(0x004ea4cd);
    /* 004ea4cd: mov dword ptr [0xa72214], 0 */ W32((u32)(0xa72214u), 0x0u);
L_004ea4d7:; BB(0x004ea4d7);
    /* 004ea4d7: call 0x4f4098 */ r_esp -= 4; W32(r_esp, 0x4ea4dcu); f_004f4098();
    /* 004ea4dc: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea4e2: call 0x4f4654 */ r_esp -= 4; W32(r_esp, 0x4ea4e7u); f_004f4654();
    /* 004ea4e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea4e8: mov dword ptr [0xa72218], eax */ W32((u32)(0xa72218u), r_eax);
    /* 004ea4ed: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004ea4f2: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x4ea4f7u); f_0082aab8();
    /* 004ea4f7: push 0x9b8c20 */ { u32 v = 0x9b8c20u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea4fc: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 004ea501: push dword ptr [eax*4 + 0x9b75c0] */ { u32 v = R32((u32)(r_eax*4+0x9b75c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea508: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x4ea50du); f_00800bc0();
    /* 004ea50d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ea510: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x4ea515u); f_0082aac0();
    /* 004ea515: ret  */ FN_RET(0x004ea4a4); r_esp += 4; return;
}

void f_004ea518(void) /* sub_4EA518 */
{
    FN_ENTER(0x004ea518);
    /* 004ea518: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea519: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ea51b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ea51d: call 0x4ea53c */ r_esp -= 4; W32(r_esp, 0x4ea522u); f_004ea53c();
    /* 004ea522: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ea526: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ea528: jne 0x4ea52e */ if (!fZ) goto L_004ea52e;
L_004ea52a:; BB(0x004ea52a);
    /* 004ea52a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ea52b: ret 4 */ FN_RET(0x004ea518); r_esp += 8; return;
L_004ea52e:; BB(0x004ea52e);
    /* 004ea52e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea52f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ea534u); f_005c2f74();
    /* 004ea534: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea535: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ea536: ret 4 */ FN_RET(0x004ea518); r_esp += 8; return;
}

void f_004ea53c(void) /* sub_4EA53C */
{
    FN_ENTER(0x004ea53c);
    /* 004ea53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ea53d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ea53f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ea541: push 0x8d2834 */ { u32 v = 0x8d2834u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ea54c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ea54d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ea554: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ea557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ea55a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ea55d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ea560: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ea563: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ea566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ea569: mov dword ptr [ecx], 0xafd318 */ W32((u32)(r_ecx), 0xafd318u);
    /* 004ea56f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ea576: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4ea57bu); f_004d1f18();
    /* 004ea57b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ea57e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ea585: mov esp, ebp */ r_esp = r_ebp;
    /* 004ea587: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ea588: ret  */ FN_RET(0x004ea53c); r_esp += 4; return;
}

void f_004ea58c(void) /* sub_4EA58C */
{
    FN_ENTER(0x004ea58c);
    /* 004ea58c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ea58d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ea58f: mov ecx, edi */ r_ecx = r_edi;
    /* 004ea591: mov eax, dword ptr [0xa72238] */ r_eax = R32((u32)(0xa72238u));
    /* 004ea596: call dword ptr [eax*4 + 0x9b8c60] */ { u32 t = R32((u32)(r_eax*4+0x9b8c60u)); r_esp -= 4; W32(r_esp, 0x4ea59du); call_ind(t); }
    /* 004ea59d: mov ecx, edi */ r_ecx = r_edi;
    /* 004ea59f: call 0x4ea5a8 */ r_esp -= 4; W32(r_esp, 0x4ea5a4u); f_004ea5a8();
    /* 004ea5a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ea5a5: ret  */ FN_RET(0x004ea58c); r_esp += 4; return;
}

void f_004ea5a8(void) /* sub_4EA5A8 */
{
    FN_ENTER(0x004ea5a8);
    /* 004ea5a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ea5a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ea5aa: mov esi, ecx */ r_esi = r_ecx;
    /* 004ea5ac: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 004ea5af: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ea5b4u); f_0082dcbc();
    /* 004ea5b4: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 004ea5b7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ea5b9: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 004ea5bc: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 004ea5bf: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004ea5c2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ea5c7u); f_0082ddd8();
    /* 004ea5c7: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 004ea5ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ea5cc: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 004ea5cf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ea5d2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ea5d7u); f_0082dcbc();
    /* 004ea5d7: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 004ea5da: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 004ea5dd: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004ea5e0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ea5e5u); f_0082ddd8();
    /* 004ea5e5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ea5e8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ea5ea: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
    /* 004ea5ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea5ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ea5ef: ret  */ FN_RET(0x004ea5a8); r_esp += 4; return;
}

void f_004ea5f0(void) /* sub_4EA5F0 */
{
    FN_ENTER(0x004ea5f0);
    /* 004ea5f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ea5f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea5f2: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ea5f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ea5f7: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea5fd: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ea602u); f_004f3ecc();
    /* 004ea602: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea605: je 0x4ea62c */ if (fZ) goto L_004ea62c;
L_004ea607:; BB(0x004ea607);
    /* 004ea607: fld dword ptr [0xa72228] */ FPUSH(R_F32((u32)(0xa72228u)));
    /* 004ea60d: fadd dword ptr [ebx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4cu));
    /* 004ea610: fcom dword ptr [0x91d93c] */ fx_compare(ST(0), R_F32((u32)(0x91d93cu))); 
    /* 004ea616: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea618: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea619: jbe 0x4ea627 */ if ((fC||fZ)) goto L_004ea627;
L_004ea61b:; BB(0x004ea61b);
    /* 004ea61b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea61d: mov eax, 0x41a00000 */ r_eax = 0x41a00000u;
    /* 004ea622: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004ea625: jmp 0x4ea65f */ goto L_004ea65f;
L_004ea627:; BB(0x004ea627);
    /* 004ea627: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004ea62a: jmp 0x4ea65f */ goto L_004ea65f;
L_004ea62c:; BB(0x004ea62c);
    /* 004ea62c: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea632: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ea637u); f_004f3ecc();
    /* 004ea637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea63a: je 0x4ea65f */ if (fZ) goto L_004ea65f;
L_004ea63c:; BB(0x004ea63c);
    /* 004ea63c: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 004ea63f: fsub dword ptr [0xa72228] */ ST(0) = ST(0) - R_F32((u32)(0xa72228u));
    /* 004ea645: fcom dword ptr [0x91d940] */ fx_compare(ST(0), R_F32((u32)(0x91d940u))); 
    /* 004ea64b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea64d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea64e: jae 0x4ea65c */ if (!fC) goto L_004ea65c;
L_004ea650:; BB(0x004ea650);
    /* 004ea650: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea652: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ea657: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004ea65a: jmp 0x4ea65f */ goto L_004ea65f;
L_004ea65c:; BB(0x004ea65c);
    /* 004ea65c: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
L_004ea65f:; BB(0x004ea65f);
    /* 004ea65f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004ea663: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ea666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ea667: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea668: call 0x4f3ee0 */ r_esp -= 4; W32(r_esp, 0x4ea66du); f_004f3ee0();
    /* 004ea66d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ea670: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ea673: fcomp dword ptr [0x91d948] */ fx_compare(ST(0), R_F32((u32)(0x91d948u))); FPOP();
    /* 004ea679: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea67b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea67c: je 0x4ea807 */ if (fZ) goto L_004ea807;
L_004ea682:; BB(0x004ea682);
    /* 004ea682: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004ea686: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ea68bu); f_0082dcbc();
    /* 004ea68b: fild dword ptr [ebx + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x74u)));
    /* 004ea68e: fld dword ptr [0x91d944] */ FPUSH(R_F32((u32)(0x91d944u)));
    /* 004ea694: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 004ea697: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ea699: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ea69b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004ea69f: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004ea6a3: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004ea6a8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea6ad: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ea6b1: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004ea6b5: fistp dword ptr [ebx + 0x74] */ W32((u32)(r_ebx+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ea6b8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004ea6bc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ea6c1u); f_0082ddd8();
    /* 004ea6c1: fild dword ptr [ebx + 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x70u)));
    /* 004ea6c4: fld dword ptr [0x91d944] */ FPUSH(R_F32((u32)(0x91d944u)));
    /* 004ea6ca: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 004ea6cd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ea6cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ea6d1: mov ecx, dword ptr [0xa4d7f8] */ r_ecx = R32((u32)(0xa4d7f8u));
    /* 004ea6d7: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004ea6db: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004ea6e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea6e5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ea6e9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004ea6ed: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004ea6f1: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004ea6f5: mov eax, 0xffffd444 */ r_eax = 0xffffd444u;
    /* 004ea6fa: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004ea6fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea700: je 0x4ea71b */ if (fZ) goto L_004ea71b;
L_004ea702:; BB(0x004ea702);
    /* 004ea702: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 004ea705: movsx esi, byte ptr [ecx + 0x31] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx+0x31u));
    /* 004ea709: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea70c: je 0x4ea719 */ if (fZ) goto L_004ea719;
L_004ea70e:; BB(0x004ea70e);
    /* 004ea70e: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 004ea711: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea717: je 0x4ea71b */ if (fZ) goto L_004ea71b;
L_004ea719:; BB(0x004ea719);
    /* 004ea719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004ea71b:; BB(0x004ea71b);
    /* 004ea71b: cmp edx, 0x2bbc */ {  u32 a = r_edx; u32 b = 0x2bbcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea721: jle 0x4ea72c */ if ((fZ||fS!=fO)) goto L_004ea72c;
L_004ea723:; BB(0x004ea723);
    /* 004ea723: mov dword ptr [ebx + 0x70], 0x2bbc */ W32((u32)(r_ebx+0x70u), 0x2bbcu);
    /* 004ea72a: jmp 0x4ea735 */ goto L_004ea735;
L_004ea72c:; BB(0x004ea72c);
    /* 004ea72c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea72e: jg 0x4ea732 */ if ((!fZ&&fS==fO)) goto L_004ea732;
L_004ea730:; BB(0x004ea730);
    /* 004ea730: mov edx, eax */ r_edx = r_eax;
L_004ea732:; BB(0x004ea732);
    /* 004ea732: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
L_004ea735:; BB(0x004ea735);
    /* 004ea735: call 0x4f3fc0 */ r_esp -= 4; W32(r_esp, 0x4ea73au); f_004f3fc0();
    /* 004ea73a: fld dword ptr [0xa7222c] */ FPUSH(R_F32((u32)(0xa7222cu)));
    /* 004ea740: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ea742: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 004ea745: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 004ea748: call 0x4f3fe8 */ r_esp -= 4; W32(r_esp, 0x4ea74du); f_004f3fe8();
    /* 004ea74d: fld dword ptr [0xa7222c] */ FPUSH(R_F32((u32)(0xa7222cu)));
    /* 004ea753: fchs  */ ST(0) = -ST(0);
    /* 004ea755: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ea757: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 004ea75a: fcom dword ptr [0x91d938] */ fx_compare(ST(0), R_F32((u32)(0x91d938u))); 
    /* 004ea760: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea762: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea763: jbe 0x4ea771 */ if ((fC||fZ)) goto L_004ea771;
L_004ea765:; BB(0x004ea765);
    /* 004ea765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea767: mov eax, 0x42a00000 */ r_eax = 0x42a00000u;
    /* 004ea76c: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 004ea76f: jmp 0x4ea785 */ goto L_004ea785;
L_004ea771:; BB(0x004ea771);
    /* 004ea771: fld dword ptr [0x91d934] */ FPUSH(R_F32((u32)(0x91d934u)));
    /* 004ea777: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea779: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea77b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea77c: jb 0x4ea780 */ if (fC) goto L_004ea780;
L_004ea77e:; BB(0x004ea77e);
    /* 004ea77e: fst st(1) */ ST(1) = ST(0);
L_004ea780:; BB(0x004ea780);
    /* 004ea780: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea782: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
L_004ea785:; BB(0x004ea785);
    /* 004ea785: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004ea789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ea78a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ea78c: call 0x4f3ee0 */ r_esp -= 4; W32(r_esp, 0x4ea791u); f_004f3ee0();
    /* 004ea791: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ea794: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004ea798: fcomp dword ptr [0x91d948] */ fx_compare(ST(0), R_F32((u32)(0x91d948u))); FPOP();
    /* 004ea79e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea7a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea7a1: ja 0x4ea7f7 */ if ((!fC&&!fZ)) goto L_004ea7f7;
L_004ea7a3:; BB(0x004ea7a3);
    /* 004ea7a3: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 004ea7a8: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7ae: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7b4: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7ba: or eax, dword ptr [0xa0f684] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f684u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7c0: or eax, dword ptr [0xa0f688] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f688u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ea7c7: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ea7ccu); f_004f3ecc();
    /* 004ea7cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea7cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea7cf: jne 0x4ea7f7 */ if (!fZ) goto L_004ea7f7;
L_004ea7d1:; BB(0x004ea7d1);
    /* 004ea7d1: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 004ea7d7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ea7da: mov dword ptr [ebx + 0x84], eax */ W32((u32)(r_ebx+0x84u), r_eax);
    /* 004ea7e0: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea7e5: jle 0x4ea801 */ if ((fZ||fS!=fO)) goto L_004ea801;
L_004ea7e7:; BB(0x004ea7e7);
    /* 004ea7e7: mov dword ptr [0xa72238], 3 */ W32((u32)(0xa72238u), 0x3u);
    /* 004ea7f1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ea7f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ea7f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ea7f6: ret  */ FN_RET(0x004ea5f0); r_esp += 4; return;
L_004ea7f7:; BB(0x004ea7f7);
    /* 004ea7f7: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
L_004ea801:; BB(0x004ea801);
    /* 004ea801: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ea804: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ea805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ea806: ret  */ FN_RET(0x004ea5f0); r_esp += 4; return;
L_004ea807:; BB(0x004ea807);
    /* 004ea807: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea80d: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ea812u); f_004f3ecc();
    /* 004ea812: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea815: je 0x4ea827 */ if (fZ) goto L_004ea827;
L_004ea817:; BB(0x004ea817);
    /* 004ea817: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004ea81a: add eax, 0x444 */ {  u32 a = r_eax; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ea81f: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004ea822: jmp 0x4ea735 */ goto L_004ea735;
L_004ea827:; BB(0x004ea827);
    /* 004ea827: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ea82d: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4ea832u); f_004f3ecc();
    /* 004ea832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea833: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea835: je 0x4ea735 */ if (fZ) goto L_004ea735;
L_004ea83b:; BB(0x004ea83b);
    /* 004ea83b: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004ea83e: add eax, 0xfffffbbc */ {  u32 a = r_eax; u32 b = 0xfffffbbcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ea843: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004ea846: jmp 0x4ea735 */ goto L_004ea735;
}

void f_004ea84c(void) /* sub_4EA84C */
{
    FN_ENTER(0x004ea84c);
    /* 004ea84c: call 0x4ea854 */ r_esp -= 4; W32(r_esp, 0x4ea851u); f_004ea854();
    /* 004ea851: ret  */ FN_RET(0x004ea84c); r_esp += 4; return;
}

void f_004ea854(void) /* sub_4EA854 */
{
    FN_ENTER(0x004ea854);
    /* 004ea854: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ea855: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ea857: mov eax, dword ptr [0xa7256c] */ r_eax = R32((u32)(0xa7256cu));
    /* 004ea85c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ea85e: jge 0x4eb0bb */ if ((fS==fO)) goto L_004eb0bb;
L_004ea864:; BB(0x004ea864);
    /* 004ea864: mov edx, 2 */ r_edx = 0x2u;
L_004ea869:; BB(0x004ea869);
    /* 004ea869: cmp edx, dword ptr [ebx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea86c: jne 0x4ea877 */ if (!fZ) goto L_004ea877;
L_004ea86e:; BB(0x004ea86e);
    /* 004ea86e: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
    /* 004ea875: jmp 0x4ea891 */ goto L_004ea891;
L_004ea877:; BB(0x004ea877);
    /* 004ea877: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 004ea87a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ea87d: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ea880: jle 0x4ea88e */ if ((fZ||fS!=fO)) goto L_004ea88e;
L_004ea882:; BB(0x004ea882);
    /* 004ea882: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
    /* 004ea889: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 004ea88c: jmp 0x4ea891 */ goto L_004ea891;
L_004ea88e:; BB(0x004ea88e);
    /* 004ea88e: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
L_004ea891:; BB(0x004ea891);
    /* 004ea891: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004ea896: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ea898: je 0x4eb0e6 */ if (fZ) goto L_004eb0e6;
L_004ea89e:; BB(0x004ea89e);
    /* 004ea89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ea89f: call 0x4e68cc */ r_esp -= 4; W32(r_esp, 0x4ea8a4u); f_004e68cc();
    /* 004ea8a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ea8a5: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 004ea8a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea8aa: je 0x4eae10 */ if (fZ) goto L_004eae10;
L_004ea8b0:; BB(0x004ea8b0);
    /* 004ea8b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ea8b3: jne 0x4eab5c */ if (!fZ) goto L_004eab5c;
L_004ea8b9:; BB(0x004ea8b9);
    /* 004ea8b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea8bb: fld dword ptr [0x91d924] */ FPUSH(R_F32((u32)(0x91d924u)));
    /* 004ea8c1: fld dword ptr [0x91d880] */ FPUSH(R_F32((u32)(0x91d880u)));
    /* 004ea8c7: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 004ea8ca: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004ea8cc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ea8ce: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea8d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea8d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea8d3: jbe 0x4ea90d */ if ((fC||fZ)) goto L_004ea90d;
L_004ea8d5:; BB(0x004ea8d5);
    /* 004ea8d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea8d7: fld dword ptr [0x91d878] */ FPUSH(R_F32((u32)(0x91d878u)));
    /* 004ea8dd: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004ea8e3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea8e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea8e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea8e8: jbe 0x4ea902 */ if ((fC||fZ)) goto L_004ea902;
L_004ea8ea:; BB(0x004ea8ea);
    /* 004ea8ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea8ec: fld dword ptr [0x91d880] */ FPUSH(R_F32((u32)(0x91d880u)));
    /* 004ea8f2: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004ea8f7: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004ea8fd: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea902:; BB(0x004ea902);
    /* 004ea902: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004ea908: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea90d:; BB(0x004ea90d);
    /* 004ea90d: fld dword ptr [0x91d87c] */ FPUSH(R_F32((u32)(0x91d87cu)));
    /* 004ea913: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea915: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea917: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea918: jae 0x4ea956 */ if (!fC) goto L_004ea956;
L_004ea91a:; BB(0x004ea91a);
    /* 004ea91a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ea91c: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004ea922: fsub dword ptr [0x91d878] */ ST(0) = ST(0) - R_F32((u32)(0x91d878u));
    /* 004ea928: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea92a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ea92c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea92e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea930: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea931: jae 0x4ea94b */ if (!fC) goto L_004ea94b;
L_004ea933:; BB(0x004ea933);
    /* 004ea933: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea935: fld dword ptr [0x91d87c] */ FPUSH(R_F32((u32)(0x91d87cu)));
    /* 004ea93b: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004ea940: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004ea946: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea94b:; BB(0x004ea94b);
    /* 004ea94b: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004ea951: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea956:; BB(0x004ea956);
    /* 004ea956: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea958: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004ea95e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea960: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea962: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea963: jbe 0x4ea99b */ if ((fC||fZ)) goto L_004ea99b;
L_004ea965:; BB(0x004ea965);
    /* 004ea965: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ea967: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004ea96d: fsub dword ptr [0x91d878] */ ST(0) = ST(0) - R_F32((u32)(0x91d878u));
    /* 004ea973: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea975: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ea977: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea979: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea97b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea97c: jae 0x4ea993 */ if (!fC) goto L_004ea993;
L_004ea97e:; BB(0x004ea97e);
    /* 004ea97e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea980: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004ea986: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004ea98b: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004ea991: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea993:; BB(0x004ea993);
    /* 004ea993: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004ea999: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea99b:; BB(0x004ea99b);
    /* 004ea99b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea99d: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004ea9a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ea9a5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ea9a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea9a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea9aa: jae 0x4ea9e0 */ if (!fC) goto L_004ea9e0;
L_004ea9ac:; BB(0x004ea9ac);
    /* 004ea9ac: fld dword ptr [0x91d878] */ FPUSH(R_F32((u32)(0x91d878u)));
    /* 004ea9b2: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004ea9b8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ea9ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ea9bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea9be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ea9c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ea9c1: jbe 0x4ea9d8 */ if ((fC||fZ)) goto L_004ea9d8;
L_004ea9c3:; BB(0x004ea9c3);
    /* 004ea9c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea9c5: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004ea9cb: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004ea9d0: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004ea9d6: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea9d8:; BB(0x004ea9d8);
    /* 004ea9d8: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004ea9de: jmp 0x4ea9f2 */ goto L_004ea9f2;
L_004ea9e0:; BB(0x004ea9e0);
    /* 004ea9e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ea9e2: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004ea9e8: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
L_004ea9f2:; BB(0x004ea9f2);
    /* 004ea9f2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004ea9f4: fld dword ptr [0x91d920] */ FPUSH(R_F32((u32)(0x91d920u)));
    /* 004ea9fa: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 004ea9fd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004ea9ff: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 004eaa02: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004eaa04: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaa06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaa08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaa09: jbe 0x4eaa47 */ if ((fC||fZ)) goto L_004eaa47;
L_004eaa0b:; BB(0x004eaa0b);
    /* 004eaa0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa0d: fld dword ptr [0x91d878] */ FPUSH(R_F32((u32)(0x91d878u)));
    /* 004eaa13: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eaa19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaa1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaa1d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaa21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaa22: jbe 0x4eaa3c */ if ((fC||fZ)) goto L_004eaa3c;
L_004eaa24:; BB(0x004eaa24);
    /* 004eaa24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa26: fld dword ptr [0x91d880] */ FPUSH(R_F32((u32)(0x91d880u)));
    /* 004eaa2c: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004eaa31: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eaa37: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaa3c:; BB(0x004eaa3c);
    /* 004eaa3c: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eaa42: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaa47:; BB(0x004eaa47);
    /* 004eaa47: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eaa49: fld dword ptr [0x91d87c] */ FPUSH(R_F32((u32)(0x91d87cu)));
    /* 004eaa4f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaa51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaa53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaa54: jae 0x4eaa92 */ if (!fC) goto L_004eaa92;
L_004eaa56:; BB(0x004eaa56);
    /* 004eaa56: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eaa58: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004eaa5e: fsub dword ptr [0x91d878] */ ST(0) = ST(0) - R_F32((u32)(0x91d878u));
    /* 004eaa64: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaa66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaa68: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaa6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaa6d: jae 0x4eaa87 */ if (!fC) goto L_004eaa87;
L_004eaa6f:; BB(0x004eaa6f);
    /* 004eaa6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa71: fld dword ptr [0x91d87c] */ FPUSH(R_F32((u32)(0x91d87cu)));
    /* 004eaa77: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004eaa7c: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eaa82: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaa87:; BB(0x004eaa87);
    /* 004eaa87: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eaa8d: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaa92:; BB(0x004eaa92);
    /* 004eaa92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaa94: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eaa9a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaa9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaa9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaa9f: jbe 0x4eaad7 */ if ((fC||fZ)) goto L_004eaad7;
L_004eaaa1:; BB(0x004eaaa1);
    /* 004eaaa1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eaaa3: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004eaaa9: fsub dword ptr [0x91d878] */ ST(0) = ST(0) - R_F32((u32)(0x91d878u));
    /* 004eaaaf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaab1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaab3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaab5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaab7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaab8: jae 0x4eaacf */ if (!fC) goto L_004eaacf;
L_004eaaba:; BB(0x004eaaba);
    /* 004eaaba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaabc: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eaac2: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004eaac7: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eaacd: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaacf:; BB(0x004eaacf);
    /* 004eaacf: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eaad5: jmp 0x4eab2e */ goto L_004eab2e;
L_004eaad7:; BB(0x004eaad7);
    /* 004eaad7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaad9: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eaadf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaae1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004eaae3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaae5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaae6: jae 0x4eab1c */ if (!fC) goto L_004eab1c;
L_004eaae8:; BB(0x004eaae8);
    /* 004eaae8: fld dword ptr [0x91d878] */ FPUSH(R_F32((u32)(0x91d878u)));
    /* 004eaaee: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eaaf4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaaf6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaaf8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaafa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaafc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaafd: jbe 0x4eab14 */ if ((fC||fZ)) goto L_004eab14;
L_004eaaff:; BB(0x004eaaff);
    /* 004eaaff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eab01: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eab07: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004eab0c: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eab12: jmp 0x4eab2e */ goto L_004eab2e;
L_004eab14:; BB(0x004eab14);
    /* 004eab14: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eab1a: jmp 0x4eab2e */ goto L_004eab2e;
L_004eab1c:; BB(0x004eab1c);
    /* 004eab1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eab1e: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004eab24: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
L_004eab2e:; BB(0x004eab2e);
    /* 004eab2e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eab30: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004eab33: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eab38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eab3a: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eab3d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eab42u); f_007a8c74();
    /* 004eab42: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eab47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eab49: push dword ptr [ebx + 0x70] */ { u32 v = R32((u32)(r_ebx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eab4c: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eab4f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eab54u); f_007a8c74();
    /* 004eab54: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 004eab57: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eab5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eab5b: ret  */ FN_RET(0x004ea854); r_esp += 4; return;
L_004eab5c:; BB(0x004eab5c);
    /* 004eab5c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eab5f: jne 0x4eb0e4 */ if (!fZ) goto L_004eb0e4;
L_004eab65:; BB(0x004eab65);
    /* 004eab65: fld dword ptr [0x91d894] */ FPUSH(R_F32((u32)(0x91d894u)));
    /* 004eab6b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004eab6d: fld dword ptr [0x91d890] */ FPUSH(R_F32((u32)(0x91d890u)));
    /* 004eab73: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004eab75: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 004eab78: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004eab7a: fld dword ptr [0x91d88c] */ FPUSH(R_F32((u32)(0x91d88cu)));
    /* 004eab80: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004eab82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eab84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eab85: jae 0x4eabbf */ if (!fC) goto L_004eabbf;
L_004eab87:; BB(0x004eab87);
    /* 004eab87: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eab89: fld dword ptr [0x91d884] */ FPUSH(R_F32((u32)(0x91d884u)));
    /* 004eab8f: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004eab95: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004eab97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eab99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eab9a: jbe 0x4eabb4 */ if ((fC||fZ)) goto L_004eabb4;
L_004eab9c:; BB(0x004eab9c);
    /* 004eab9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eab9e: fld dword ptr [0x91d88c] */ FPUSH(R_F32((u32)(0x91d88cu)));
    /* 004eaba4: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004eaba9: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eabaf: jmp 0x4eacaa */ goto L_004eacaa;
L_004eabb4:; BB(0x004eabb4);
    /* 004eabb4: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eabba: jmp 0x4eacaa */ goto L_004eacaa;
L_004eabbf:; BB(0x004eabbf);
    /* 004eabbf: fld dword ptr [0x91d888] */ FPUSH(R_F32((u32)(0x91d888u)));
    /* 004eabc5: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eabc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eabc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eabca: jae 0x4eac0a */ if (!fC) goto L_004eac0a;
L_004eabcc:; BB(0x004eabcc);
    /* 004eabcc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004eabce: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004eabd4: fsub dword ptr [0x91d884] */ ST(0) = ST(0) - R_F32((u32)(0x91d884u));
    /* 004eabda: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eabdc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eabde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eabe0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eabe2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eabe3: jae 0x4eabfd */ if (!fC) goto L_004eabfd;
L_004eabe5:; BB(0x004eabe5);
    /* 004eabe5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eabe7: fld dword ptr [0x91d888] */ FPUSH(R_F32((u32)(0x91d888u)));
    /* 004eabed: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004eabf2: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eabf8: jmp 0x4eacaa */ goto L_004eacaa;
L_004eabfd:; BB(0x004eabfd);
    /* 004eabfd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eabff: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eac05: jmp 0x4eacaa */ goto L_004eacaa;
L_004eac0a:; BB(0x004eac0a);
    /* 004eac0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eac0c: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eac12: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eac14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eac16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eac17: jbe 0x4eac51 */ if ((fC||fZ)) goto L_004eac51;
L_004eac19:; BB(0x004eac19);
    /* 004eac19: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004eac1b: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004eac21: fsub dword ptr [0x91d884] */ ST(0) = ST(0) - R_F32((u32)(0x91d884u));
    /* 004eac27: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eac29: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eac2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eac2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eac2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eac30: jae 0x4eac47 */ if (!fC) goto L_004eac47;
L_004eac32:; BB(0x004eac32);
    /* 004eac32: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eac34: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eac3a: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004eac3f: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eac45: jmp 0x4eacaa */ goto L_004eacaa;
L_004eac47:; BB(0x004eac47);
    /* 004eac47: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eac49: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eac4f: jmp 0x4eacaa */ goto L_004eacaa;
L_004eac51:; BB(0x004eac51);
    /* 004eac51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eac53: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eac59: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eac5b: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 004eac5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eac5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eac60: jae 0x4eac98 */ if (!fC) goto L_004eac98;
L_004eac62:; BB(0x004eac62);
    /* 004eac62: fld dword ptr [0x91d884] */ FPUSH(R_F32((u32)(0x91d884u)));
    /* 004eac68: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004eac6e: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eac70: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eac72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eac74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eac76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eac77: jbe 0x4eac8e */ if ((fC||fZ)) goto L_004eac8e;
L_004eac79:; BB(0x004eac79);
    /* 004eac79: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eac7b: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eac81: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004eac86: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eac8c: jmp 0x4eacaa */ goto L_004eacaa;
L_004eac8e:; BB(0x004eac8e);
    /* 004eac8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eac90: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eac96: jmp 0x4eacaa */ goto L_004eacaa;
L_004eac98:; BB(0x004eac98);
    /* 004eac98: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eac9a: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004eaca0: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
L_004eacaa:; BB(0x004eacaa);
    /* 004eacaa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eacac: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 004eacaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eacb1: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 004eacb4: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004eacb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eacb8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eacba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eacbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eacbd: jbe 0x4eacfb */ if ((fC||fZ)) goto L_004eacfb;
L_004eacbf:; BB(0x004eacbf);
    /* 004eacbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eacc1: fld dword ptr [0x91d884] */ FPUSH(R_F32((u32)(0x91d884u)));
    /* 004eacc7: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eaccd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaccf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eacd1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eacd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eacd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eacd6: jbe 0x4eacf0 */ if ((fC||fZ)) goto L_004eacf0;
L_004eacd8:; BB(0x004eacd8);
    /* 004eacd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eacda: fld dword ptr [0x91d88c] */ FPUSH(R_F32((u32)(0x91d88cu)));
    /* 004eace0: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004eace5: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eaceb: jmp 0x4eade2 */ goto L_004eade2;
L_004eacf0:; BB(0x004eacf0);
    /* 004eacf0: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eacf6: jmp 0x4eade2 */ goto L_004eade2;
L_004eacfb:; BB(0x004eacfb);
    /* 004eacfb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eacfd: fld dword ptr [0x91d888] */ FPUSH(R_F32((u32)(0x91d888u)));
    /* 004ead03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ead05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ead07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ead08: jae 0x4ead46 */ if (!fC) goto L_004ead46;
L_004ead0a:; BB(0x004ead0a);
    /* 004ead0a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ead0c: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004ead12: fsub dword ptr [0x91d884] */ ST(0) = ST(0) - R_F32((u32)(0x91d884u));
    /* 004ead18: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ead1a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ead1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ead20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ead21: jae 0x4ead3b */ if (!fC) goto L_004ead3b;
L_004ead23:; BB(0x004ead23);
    /* 004ead23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead25: fld dword ptr [0x91d888] */ FPUSH(R_F32((u32)(0x91d888u)));
    /* 004ead2b: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004ead30: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004ead36: jmp 0x4eade2 */ goto L_004eade2;
L_004ead3b:; BB(0x004ead3b);
    /* 004ead3b: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004ead41: jmp 0x4eade2 */ goto L_004eade2;
L_004ead46:; BB(0x004ead46);
    /* 004ead46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead48: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004ead4e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ead50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ead52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ead53: jbe 0x4ead8b */ if ((fC||fZ)) goto L_004ead8b;
L_004ead55:; BB(0x004ead55);
    /* 004ead55: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ead57: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004ead5d: fsub dword ptr [0x91d884] */ ST(0) = ST(0) - R_F32((u32)(0x91d884u));
    /* 004ead63: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ead65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ead67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ead6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ead6c: jae 0x4ead83 */ if (!fC) goto L_004ead83;
L_004ead6e:; BB(0x004ead6e);
    /* 004ead6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead70: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004ead76: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004ead7b: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004ead81: jmp 0x4eade2 */ goto L_004eade2;
L_004ead83:; BB(0x004ead83);
    /* 004ead83: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004ead89: jmp 0x4eade2 */ goto L_004eade2;
L_004ead8b:; BB(0x004ead8b);
    /* 004ead8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ead8d: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004ead93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ead95: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ead97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ead99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ead9a: jae 0x4eadd0 */ if (!fC) goto L_004eadd0;
L_004ead9c:; BB(0x004ead9c);
    /* 004ead9c: fld dword ptr [0x91d884] */ FPUSH(R_F32((u32)(0x91d884u)));
    /* 004eada2: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eada8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eadaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eadac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eadae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eadb0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eadb1: jbe 0x4eadc8 */ if ((fC||fZ)) goto L_004eadc8;
L_004eadb3:; BB(0x004eadb3);
    /* 004eadb3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eadb5: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eadbb: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004eadc0: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eadc6: jmp 0x4eade2 */ goto L_004eade2;
L_004eadc8:; BB(0x004eadc8);
    /* 004eadc8: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eadce: jmp 0x4eade2 */ goto L_004eade2;
L_004eadd0:; BB(0x004eadd0);
    /* 004eadd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eadd2: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004eadd8: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
L_004eade2:; BB(0x004eade2);
    /* 004eade2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eade4: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004eade7: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eadec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eadee: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eadf1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eadf6u); f_007a8c74();
    /* 004eadf6: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eadfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eadfd: push dword ptr [ebx + 0x70] */ { u32 v = R32((u32)(r_ebx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eae00: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eae03: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eae08u); f_007a8c74();
    /* 004eae08: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 004eae0b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eae0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eae0f: ret  */ FN_RET(0x004ea854); r_esp += 4; return;
L_004eae10:; BB(0x004eae10);
    /* 004eae10: fld dword ptr [0x91d874] */ FPUSH(R_F32((u32)(0x91d874u)));
    /* 004eae16: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004eae18: fld dword ptr [0x91d870] */ FPUSH(R_F32((u32)(0x91d870u)));
    /* 004eae1e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004eae20: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 004eae23: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004eae25: fld dword ptr [0x91d86c] */ FPUSH(R_F32((u32)(0x91d86cu)));
    /* 004eae2b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004eae2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eae2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eae30: jae 0x4eae6a */ if (!fC) goto L_004eae6a;
L_004eae32:; BB(0x004eae32);
    /* 004eae32: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eae34: fld dword ptr [0x91d864] */ FPUSH(R_F32((u32)(0x91d864u)));
    /* 004eae3a: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004eae40: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004eae42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eae44: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eae45: jbe 0x4eae5f */ if ((fC||fZ)) goto L_004eae5f;
L_004eae47:; BB(0x004eae47);
    /* 004eae47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eae49: fld dword ptr [0x91d86c] */ FPUSH(R_F32((u32)(0x91d86cu)));
    /* 004eae4f: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004eae54: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eae5a: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eae5f:; BB(0x004eae5f);
    /* 004eae5f: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eae65: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eae6a:; BB(0x004eae6a);
    /* 004eae6a: fld dword ptr [0x91d868] */ FPUSH(R_F32((u32)(0x91d868u)));
    /* 004eae70: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eae72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eae74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eae75: jae 0x4eaeb5 */ if (!fC) goto L_004eaeb5;
L_004eae77:; BB(0x004eae77);
    /* 004eae77: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004eae79: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004eae7f: fsub dword ptr [0x91d864] */ ST(0) = ST(0) - R_F32((u32)(0x91d864u));
    /* 004eae85: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eae87: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eae89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eae8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eae8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eae8e: jae 0x4eaea8 */ if (!fC) goto L_004eaea8;
L_004eae90:; BB(0x004eae90);
    /* 004eae90: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eae92: fld dword ptr [0x91d868] */ FPUSH(R_F32((u32)(0x91d868u)));
    /* 004eae98: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004eae9d: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eaea3: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaea8:; BB(0x004eaea8);
    /* 004eaea8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eaeaa: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eaeb0: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaeb5:; BB(0x004eaeb5);
    /* 004eaeb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaeb7: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eaebd: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eaebf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaec1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaec2: jbe 0x4eaefc */ if ((fC||fZ)) goto L_004eaefc;
L_004eaec4:; BB(0x004eaec4);
    /* 004eaec4: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004eaec6: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 004eaecc: fsub dword ptr [0x91d864] */ ST(0) = ST(0) - R_F32((u32)(0x91d864u));
    /* 004eaed2: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eaed4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eaed6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaed8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaeda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaedb: jae 0x4eaef2 */ if (!fC) goto L_004eaef2;
L_004eaedd:; BB(0x004eaedd);
    /* 004eaedd: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eaedf: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eaee5: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004eaeea: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eaef0: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaef2:; BB(0x004eaef2);
    /* 004eaef2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eaef4: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eaefa: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaefc:; BB(0x004eaefc);
    /* 004eaefc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaefe: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eaf04: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eaf06: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 004eaf08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaf0a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaf0b: jae 0x4eaf43 */ if (!fC) goto L_004eaf43;
L_004eaf0d:; BB(0x004eaf0d);
    /* 004eaf0d: fld dword ptr [0x91d864] */ FPUSH(R_F32((u32)(0x91d864u)));
    /* 004eaf13: fadd dword ptr [ebx + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88u));
    /* 004eaf19: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004eaf1b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004eaf1d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaf1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaf21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaf22: jbe 0x4eaf39 */ if ((fC||fZ)) goto L_004eaf39;
L_004eaf24:; BB(0x004eaf24);
    /* 004eaf24: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eaf26: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eaf2c: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004eaf31: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 004eaf37: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaf39:; BB(0x004eaf39);
    /* 004eaf39: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eaf3b: fst dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0));
    /* 004eaf41: jmp 0x4eaf55 */ goto L_004eaf55;
L_004eaf43:; BB(0x004eaf43);
    /* 004eaf43: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004eaf45: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004eaf4b: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
L_004eaf55:; BB(0x004eaf55);
    /* 004eaf55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eaf57: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 004eaf5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaf5c: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 004eaf5f: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004eaf61: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eaf63: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaf65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaf67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaf68: jbe 0x4eafa6 */ if ((fC||fZ)) goto L_004eafa6;
L_004eaf6a:; BB(0x004eaf6a);
    /* 004eaf6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaf6c: fld dword ptr [0x91d864] */ FPUSH(R_F32((u32)(0x91d864u)));
    /* 004eaf72: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eaf78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaf7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eaf7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaf7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaf80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaf81: jbe 0x4eaf9b */ if ((fC||fZ)) goto L_004eaf9b;
L_004eaf83:; BB(0x004eaf83);
    /* 004eaf83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaf85: fld dword ptr [0x91d86c] */ FPUSH(R_F32((u32)(0x91d86cu)));
    /* 004eaf8b: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004eaf90: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eaf96: jmp 0x4eb08d */ goto L_004eb08d;
L_004eaf9b:; BB(0x004eaf9b);
    /* 004eaf9b: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eafa1: jmp 0x4eb08d */ goto L_004eb08d;
L_004eafa6:; BB(0x004eafa6);
    /* 004eafa6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eafa8: fld dword ptr [0x91d868] */ FPUSH(R_F32((u32)(0x91d868u)));
    /* 004eafae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eafb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eafb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eafb3: jae 0x4eaff1 */ if (!fC) goto L_004eaff1;
L_004eafb5:; BB(0x004eafb5);
    /* 004eafb5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eafb7: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004eafbd: fsub dword ptr [0x91d864] */ ST(0) = ST(0) - R_F32((u32)(0x91d864u));
    /* 004eafc3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eafc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eafc7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eafc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eafcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eafcc: jae 0x4eafe6 */ if (!fC) goto L_004eafe6;
L_004eafce:; BB(0x004eafce);
    /* 004eafce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eafd0: fld dword ptr [0x91d868] */ FPUSH(R_F32((u32)(0x91d868u)));
    /* 004eafd6: mov eax, 0x3bda740e */ r_eax = 0x3bda740eu;
    /* 004eafdb: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eafe1: jmp 0x4eb08d */ goto L_004eb08d;
L_004eafe6:; BB(0x004eafe6);
    /* 004eafe6: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eafec: jmp 0x4eb08d */ goto L_004eb08d;
L_004eaff1:; BB(0x004eaff1);
    /* 004eaff1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eaff3: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eaff9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eaffb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eaffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eaffe: jbe 0x4eb036 */ if ((fC||fZ)) goto L_004eb036;
L_004eb000:; BB(0x004eb000);
    /* 004eb000: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004eb002: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 004eb008: fsub dword ptr [0x91d864] */ ST(0) = ST(0) - R_F32((u32)(0x91d864u));
    /* 004eb00e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eb010: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eb012: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb014: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eb016: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eb017: jae 0x4eb02e */ if (!fC) goto L_004eb02e;
L_004eb019:; BB(0x004eb019);
    /* 004eb019: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb01b: fld dword ptr [0x91d930] */ FPUSH(R_F32((u32)(0x91d930u)));
    /* 004eb021: mov eax, 0xbdcccccd */ r_eax = 0xbdcccccdu;
    /* 004eb026: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eb02c: jmp 0x4eb08d */ goto L_004eb08d;
L_004eb02e:; BB(0x004eb02e);
    /* 004eb02e: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eb034: jmp 0x4eb08d */ goto L_004eb08d;
L_004eb036:; BB(0x004eb036);
    /* 004eb036: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb038: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eb03e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eb040: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004eb042: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eb044: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eb045: jae 0x4eb07b */ if (!fC) goto L_004eb07b;
L_004eb047:; BB(0x004eb047);
    /* 004eb047: fld dword ptr [0x91d864] */ FPUSH(R_F32((u32)(0x91d864u)));
    /* 004eb04d: fadd dword ptr [ebx + 0x8c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8cu));
    /* 004eb053: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eb055: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eb057: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb059: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eb05b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eb05c: jbe 0x4eb073 */ if ((fC||fZ)) goto L_004eb073;
L_004eb05e:; BB(0x004eb05e);
    /* 004eb05e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb060: fld dword ptr [0x91d92c] */ FPUSH(R_F32((u32)(0x91d92cu)));
    /* 004eb066: mov eax, 0xbbda740e */ r_eax = 0xbbda740eu;
    /* 004eb06b: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 004eb071: jmp 0x4eb08d */ goto L_004eb08d;
L_004eb073:; BB(0x004eb073);
    /* 004eb073: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 004eb079: jmp 0x4eb08d */ goto L_004eb08d;
L_004eb07b:; BB(0x004eb07b);
    /* 004eb07b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004eb07d: fld dword ptr [0x91d928] */ FPUSH(R_F32((u32)(0x91d928u)));
    /* 004eb083: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
L_004eb08d:; BB(0x004eb08d);
    /* 004eb08d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eb08f: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004eb092: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb099: push dword ptr [ebx + 0x74] */ { u32 v = R32((u32)(r_ebx+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb09c: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eb0a1u); f_007a8c74();
    /* 004eb0a1: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb0a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb0a8: push dword ptr [ebx + 0x70] */ { u32 v = R32((u32)(r_ebx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb0ab: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eb0ae: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4eb0b3u); f_007a8c74();
    /* 004eb0b3: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 004eb0b6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb0b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb0ba: ret  */ FN_RET(0x004ea854); r_esp += 4; return;
L_004eb0bb:; BB(0x004eb0bb);
    /* 004eb0bb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eb0be: jg 0x4eb0c7 */ if ((!fZ&&fS==fO)) goto L_004eb0c7;
L_004eb0c0:; BB(0x004eb0c0);
    /* 004eb0c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004eb0c2: jmp 0x4ea869 */ goto L_004ea869;
L_004eb0c7:; BB(0x004eb0c7);
    /* 004eb0c7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb0ca: je 0x4eb0c0 */ if (fZ) goto L_004eb0c0;
L_004eb0cc:; BB(0x004eb0cc);
    /* 004eb0cc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb0cf: je 0x4eb0da */ if (fZ) goto L_004eb0da;
L_004eb0d1:; BB(0x004eb0d1);
    /* 004eb0d1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb0d4: jne 0x4ea864 */ if (!fZ) goto L_004ea864;
L_004eb0da:; BB(0x004eb0da);
    /* 004eb0da: mov edx, 1 */ r_edx = 0x1u;
    /* 004eb0df: jmp 0x4ea869 */ goto L_004ea869;
L_004eb0e4:; BB(0x004eb0e4);
    /* 004eb0e4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004eb0e6:; BB(0x004eb0e6);
    /* 004eb0e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb0e7: ret  */ FN_RET(0x004ea854); r_esp += 4; return;
}

