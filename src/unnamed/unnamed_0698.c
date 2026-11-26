#include "protos.h"

void f_00698034(void) /* sub_698034 */
{
    FN_ENTER(0x00698034);
    /* 00698034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698036: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698039: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0069803d: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00698041: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00698045: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00698049: mov edx, edi */ r_edx = r_edi;
    /* 0069804b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069804f: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00698053: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00698057: mov eax, esi */ r_eax = r_esi;
    /* 00698059: call 0x698088 */ r_esp -= 4; W32(r_esp, 0x69805eu); f_00698088();
    /* 0069805e: movzx ecx, word ptr [edi + 0x2bc] */ r_ecx = (u32)R16((u32)(r_edi+0x2bcu));
    /* 00698065: mov word ptr [esi + 0x16], cx */ W16((u32)(r_esi+0x16u), (u16)r_ecx);
    /* 00698069: movzx edx, word ptr [edi + 0x2be] */ r_edx = (u32)R16((u32)(r_edi+0x2beu));
    /* 00698070: mov word ptr [esi + 0x18], dx */ W16((u32)(r_esi+0x18u), (u16)r_edx);
    /* 00698074: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698077: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698078: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698079: ret  */ FN_RET(0x00698034); r_esp += 4; return;
}

void f_0069807c(void) /* sub_69807C */
{
    FN_ENTER(0x0069807c);
    /* 0069807c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00698080: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00698084: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00698088: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698089: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069808a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069808b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069808e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00698090: mov esi, eax */ r_esi = r_eax;
    /* 00698092: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00698096: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0069809a: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0069809e: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006980a2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006980a4: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 006980a7: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 006980ab: add edi, dword ptr [ecx + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006980ae: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 006980b1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006980b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006980b5: jg 0x6980b9 */ if ((!fZ&&fS==fO)) goto L_006980b9;
L_006980b7:; BB(0x006980b7);
    /* 006980b7: mov eax, edi */ r_eax = r_edi;
L_006980b9:; BB(0x006980b9);
    /* 006980b9: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 006980bd: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 006980c1: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 006980c5: movsx edi, word ptr [edx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 006980c9: movsx edx, word ptr [ebp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 006980cd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006980cf: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006980d2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006980d5: fmul dword ptr [0x93ca14] */ ST(0) = ST(0) * R_F32((u32)(0x93ca14u));
    /* 006980db: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006980df: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006980e4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006980e9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006980ed: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006980f1: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006980f5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006980f9: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006980fd: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
    /* 00698101: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00698105: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 00698108: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069810a: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0069810d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069810f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698111: jg 0x698115 */ if ((!fZ&&fS==fO)) goto L_00698115;
L_00698113:; BB(0x00698113);
    /* 00698113: mov edi, edx */ r_edi = r_edx;
L_00698115:; BB(0x00698115);
    /* 00698115: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 00698119: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0069811d: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 00698121: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00698125: mov word ptr [esi + 0xc], dx */ W16((u32)(r_esi+0xcu), (u16)r_edx);
    /* 00698129: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0069812d: mov word ptr [esi + 0xe], dx */ W16((u32)(r_esi+0xeu), (u16)r_edx);
    /* 00698131: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 00698135: mov word ptr [esi + 0x10], dx */ W16((u32)(r_esi+0x10u), (u16)r_edx);
    /* 00698139: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0069813d: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
    /* 00698141: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 00698145: mov word ptr [esi + 0x14], dx */ W16((u32)(r_esi+0x14u), (u16)r_edx);
    /* 00698149: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069814c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069814d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069814e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069814f: ret  */ FN_RET(0x0069807c); r_esp += 4; return;
}

void f_00698088(void)
{
    FN_ENTER(0x00698088);
    /* 00698088: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698089: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069808a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069808b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069808e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00698090: mov esi, eax */ r_esi = r_eax;
    /* 00698092: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00698096: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0069809a: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0069809e: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006980a2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006980a4: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 006980a7: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 006980ab: add edi, dword ptr [ecx + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006980ae: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 006980b1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006980b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006980b5: jg 0x6980b9 */ if ((!fZ&&fS==fO)) goto L_006980b9;
L_006980b7:; BB(0x006980b7);
    /* 006980b7: mov eax, edi */ r_eax = r_edi;
L_006980b9:; BB(0x006980b9);
    /* 006980b9: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 006980bd: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 006980c1: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 006980c5: movsx edi, word ptr [edx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 006980c9: movsx edx, word ptr [ebp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 006980cd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006980cf: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006980d2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006980d5: fmul dword ptr [0x93ca14] */ ST(0) = ST(0) * R_F32((u32)(0x93ca14u));
    /* 006980db: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006980df: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006980e4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006980e9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006980ed: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006980f1: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006980f5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006980f9: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006980fd: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
    /* 00698101: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00698105: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 00698108: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069810a: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0069810d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069810f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698111: jg 0x698115 */ if ((!fZ&&fS==fO)) goto L_00698115;
L_00698113:; BB(0x00698113);
    /* 00698113: mov edi, edx */ r_edi = r_edx;
L_00698115:; BB(0x00698115);
    /* 00698115: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 00698119: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0069811d: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 00698121: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00698125: mov word ptr [esi + 0xc], dx */ W16((u32)(r_esi+0xcu), (u16)r_edx);
    /* 00698129: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0069812d: mov word ptr [esi + 0xe], dx */ W16((u32)(r_esi+0xeu), (u16)r_edx);
    /* 00698131: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 00698135: mov word ptr [esi + 0x10], dx */ W16((u32)(r_esi+0x10u), (u16)r_edx);
    /* 00698139: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0069813d: mov word ptr [esi + 0x12], dx */ W16((u32)(r_esi+0x12u), (u16)r_edx);
    /* 00698141: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 00698145: mov word ptr [esi + 0x14], dx */ W16((u32)(r_esi+0x14u), (u16)r_edx);
    /* 00698149: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069814c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069814d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069814e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069814f: ret  */ FN_RET(0x00698088); r_esp += 4; return;
}

void f_00698150(void) /* sub_698150 */
{
    FN_ENTER(0x00698150);
    /* 00698150: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698151: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698152: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00698156: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069815a: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0069815d: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 00698160: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00698162: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00698166: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 00698169: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 0069816d: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00698171: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00698173: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 00698177: movzx esi, word ptr [edx + 4] */ r_esi = (u32)R16((u32)(r_edx+0x4u));
    /* 0069817b: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 0069817f: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00698181: mov word ptr [eax + 4], di */ W16((u32)(r_eax+0x4u), (u16)r_edi);
    /* 00698185: movzx esi, word ptr [edx + 6] */ r_esi = (u32)R16((u32)(r_edx+0x6u));
    /* 00698189: movzx edi, word ptr [ecx + 6] */ r_edi = (u32)R16((u32)(r_ecx+0x6u));
    /* 0069818d: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069818f: mov word ptr [eax + 6], di */ W16((u32)(r_eax+0x6u), (u16)r_edi);
    /* 00698193: movzx esi, word ptr [edx + 8] */ r_esi = (u32)R16((u32)(r_edx+0x8u));
    /* 00698197: movzx edi, word ptr [ecx + 8] */ r_edi = (u32)R16((u32)(r_ecx+0x8u));
    /* 0069819b: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069819d: mov word ptr [eax + 8], di */ W16((u32)(r_eax+0x8u), (u16)r_edi);
    /* 006981a1: movzx esi, word ptr [edx + 0xa] */ r_esi = (u32)R16((u32)(r_edx+0xau));
    /* 006981a5: movzx edi, word ptr [ecx + 0xa] */ r_edi = (u32)R16((u32)(r_ecx+0xau));
    /* 006981a9: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006981ab: mov word ptr [eax + 0xa], di */ W16((u32)(r_eax+0xau), (u16)r_edi);
    /* 006981af: movzx esi, word ptr [edx + 0x16] */ r_esi = (u32)R16((u32)(r_edx+0x16u));
    /* 006981b3: movzx edi, word ptr [ecx + 0x16] */ r_edi = (u32)R16((u32)(r_ecx+0x16u));
    /* 006981b7: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006981b9: mov word ptr [eax + 0x16], di */ W16((u32)(r_eax+0x16u), (u16)r_edi);
    /* 006981bd: movzx edx, word ptr [edx + 0x18] */ r_edx = (u32)R16((u32)(r_edx+0x18u));
    /* 006981c1: movzx ecx, word ptr [ecx + 0x18] */ r_ecx = (u32)R16((u32)(r_ecx+0x18u));
    /* 006981c5: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006981c7: mov word ptr [eax + 0x18], cx */ W16((u32)(r_eax+0x18u), (u16)r_ecx);
    /* 006981cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006981cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006981cd: ret  */ FN_RET(0x00698150); r_esp += 4; return;
}

void f_006981d0(void) /* sub_6981D0 */
{
    FN_ENTER(0x006981d0);
    /* 006981d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006981d4: mov edx, dword ptr [eax + 0x2b4] */ r_edx = R32((u32)(r_eax+0x2b4u));
    /* 006981da: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 006981dd: fmul dword ptr [0x93ca10] */ ST(0) = ST(0) * R_F32((u32)(0x93ca10u));
    /* 006981e3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006981e6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006981e8: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 006981eb: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 006981ee: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006981f1: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006981f4: ret 4 */ FN_RET(0x006981d0); r_esp += 8; return;
}

void f_006981f8(void) /* sub_6981F8 */
{
    FN_ENTER(0x006981f8);
    /* 006981f8: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006981fb: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006981ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698201: jl 0x69820e */ if ((fS!=fO)) goto L_0069820e;
L_00698203:; BB(0x00698203);
    /* 00698203: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00698206: mov eax, 1 */ r_eax = 0x1u;
    /* 0069820b: ret 4 */ FN_RET(0x006981f8); r_esp += 8; return;
L_0069820e:; BB(0x0069820e);
    /* 0069820e: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00698215: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698217: ret 4 */ FN_RET(0x006981f8); r_esp += 8; return;
}

void f_0069821c(void) /* sub_69821C */
{
    FN_ENTER(0x0069821c);
    /* 0069821c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069821d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069821e: mov edi, ecx */ r_edi = r_ecx;
    /* 00698220: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00698224: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00698226: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00698228: je 0x698231 */ if (fZ) goto L_00698231;
L_0069822a:; BB(0x0069822a);
    /* 0069822a: mov eax, 1 */ r_eax = 0x1u;
    /* 0069822f: jmp 0x698233 */ goto L_00698233;
L_00698231:; BB(0x00698231);
    /* 00698231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00698233:; BB(0x00698233);
    /* 00698233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698235: je 0x69823c */ if (fZ) goto L_0069823c;
L_00698237:; BB(0x00698237);
    /* 00698237: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698238: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698239: ret 4 */ FN_RET(0x0069821c); r_esp += 8; return;
L_0069823c:; BB(0x0069823c);
    /* 0069823c: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 00698242: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x698247u); f_007ba980();
    /* 00698247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698249: call 0x8114b0 */ r_esp -= 4; W32(r_esp, 0x69824eu); f_008114b0();
    /* 0069824e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698251: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698253: je 0x698291 */ if (fZ) goto L_00698291;
L_00698255:; BB(0x00698255);
    /* 00698255: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00698257: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069825a: je 0x698263 */ if (fZ) goto L_00698263;
L_0069825c:; BB(0x0069825c);
    /* 0069825c: mov eax, 1 */ r_eax = 0x1u;
    /* 00698261: jmp 0x698265 */ goto L_00698265;
L_00698263:; BB(0x00698263);
    /* 00698263: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00698265:; BB(0x00698265);
    /* 00698265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698267: je 0x69827a */ if (fZ) goto L_0069827a;
L_00698269:; BB(0x00698269);
    /* 00698269: mov dword ptr [edi + 4], 0x5a */ W32((u32)(r_edi+0x4u), 0x5au);
    /* 00698270: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698273: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00698275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698276: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698277: ret 4 */ FN_RET(0x0069821c); r_esp += 8; return;
L_0069827a:; BB(0x0069827a);
    /* 0069827a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069827c: call 0x6982bc */ r_esp -= 4; W32(r_esp, 0x698281u); f_006982bc();
    /* 00698281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698283: jne 0x6982ab */ if (!fZ) goto L_006982ab;
L_00698285:; BB(0x00698285);
    /* 00698285: mov ecx, edi */ r_ecx = r_edi;
    /* 00698287: call 0x6982d8 */ r_esp -= 4; W32(r_esp, 0x69828cu); f_006982d8();
    /* 0069828c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069828d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069828e: ret 4 */ FN_RET(0x0069821c); r_esp += 8; return;
L_00698291:; BB(0x00698291);
    /* 00698291: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00698293: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00698295: je 0x69829e */ if (fZ) goto L_0069829e;
L_00698297:; BB(0x00698297);
    /* 00698297: mov eax, 1 */ r_eax = 0x1u;
    /* 0069829c: jmp 0x6982a0 */ goto L_006982a0;
L_0069829e:; BB(0x0069829e);
    /* 0069829e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006982a0:; BB(0x006982a0);
    /* 006982a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006982a2: jne 0x6982ab */ if (!fZ) goto L_006982ab;
L_006982a4:; BB(0x006982a4);
    /* 006982a4: mov ecx, edi */ r_ecx = r_edi;
    /* 006982a6: call 0x6982b0 */ r_esp -= 4; W32(r_esp, 0x6982abu); f_006982b0();
L_006982ab:; BB(0x006982ab);
    /* 006982ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006982ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006982ad: ret 4 */ FN_RET(0x0069821c); r_esp += 8; return;
}

void f_006982b0(void) /* sub_6982B0 */
{
    FN_ENTER(0x006982b0);
    /* 006982b0: or dword ptr [ecx], 1 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006982b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006982b5: call 0x814c5c */ r_esp -= 4; W32(r_esp, 0x6982bau); f_00814c5c();
    /* 006982ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006982bb: ret  */ FN_RET(0x006982b0); r_esp += 4; return;
}

void f_006982bc(void) /* sub_6982BC */
{
    FN_ENTER(0x006982bc);
    /* 006982bc: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006982bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006982c1: jl 0x6982cd */ if ((fS!=fO)) goto L_006982cd;
L_006982c3:; BB(0x006982c3);
    /* 006982c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006982c6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006982c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006982cb: jl 0x6982d3 */ if ((fS!=fO)) goto L_006982d3;
L_006982cd:; BB(0x006982cd);
    /* 006982cd: mov eax, 1 */ r_eax = 0x1u;
    /* 006982d2: ret  */ FN_RET(0x006982bc); r_esp += 4; return;
L_006982d3:; BB(0x006982d3);
    /* 006982d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006982d5: ret  */ FN_RET(0x006982bc); r_esp += 4; return;
}

void f_006982d8(void) /* sub_6982D8 */
{
    FN_ENTER(0x006982d8);
    /* 006982d8: and dword ptr [ecx], 0xfffffffe */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006982db: mov dword ptr [ecx + 4], 0xffffffff */ W32((u32)(r_ecx+0x4u), 0xffffffffu);
    /* 006982e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006982e4: call 0x814c5c */ r_esp -= 4; W32(r_esp, 0x6982e9u); f_00814c5c();
    /* 006982e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006982ea: ret  */ FN_RET(0x006982d8); r_esp += 4; return;
}

void f_006982ec(void) /* sub_6982EC */
{
    FN_ENTER(0x006982ec);
    /* 006982ec: mov dword ptr [ecx + 0x1c], 0x3f800000 */ W32((u32)(r_ecx+0x1cu), 0x3f800000u);
    /* 006982f3: mov dword ptr [ecx + 0x20], 0x3f800000 */ W32((u32)(r_ecx+0x20u), 0x3f800000u);
    /* 006982fa: mov dword ptr [ecx + 0x24], 0x3f800000 */ W32((u32)(r_ecx+0x24u), 0x3f800000u);
    /* 00698301: mov dword ptr [ecx + 0x28], 0x3f800000 */ W32((u32)(r_ecx+0x28u), 0x3f800000u);
    /* 00698308: ret  */ FN_RET(0x006982ec); r_esp += 4; return;
}

void f_0069830c(void) /* sub_69830C */
{
    FN_ENTER(0x0069830c);
    /* 0069830c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00698311: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00698313: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00698319: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0069831e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00698321: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00698324: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 00698329: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0069832c: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 00698331: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00698334: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 00698339: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0069833c: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 00698341: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00698344: ret  */ FN_RET(0x0069830c); r_esp += 4; return;
}

void f_00698348(void) /* sub_698348 */
{
    FN_ENTER(0x00698348);
    /* 00698348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698349: mov esi, ecx */ r_esi = r_ecx;
    /* 0069834b: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0069834d: call 0x82d6f0 */ r_esp -= 4; W32(r_esp, 0x698352u); f_0082d6f0();
    /* 00698352: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00698355: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00698358: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x69835du); f_0082d6fc();
    /* 0069835d: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00698360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698361: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x698366u); f_0082d710();
    /* 00698366: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698369: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069836a: ret  */ FN_RET(0x00698348); r_esp += 4; return;
}

void f_0069836c(void) /* sub_69836C */
{
    FN_ENTER(0x0069836c);
    /* 0069836c: mov dword ptr [ecx + 0x1c], 0x3f800000 */ W32((u32)(r_ecx+0x1cu), 0x3f800000u);
    /* 00698373: ret  */ FN_RET(0x0069836c); r_esp += 4; return;
}

void f_00698374(void) /* sub_698374 */
{
    FN_ENTER(0x00698374);
    /* 00698374: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698375: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698376: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698377: mov edi, ecx */ r_edi = r_ecx;
    /* 00698379: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0069837c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069837d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698382u); f_0068d5a8();
    /* 00698382: mov esi, eax */ r_esi = r_eax;
    /* 00698384: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698387: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698389: je 0x6984c7 */ if (fZ) goto L_006984c7;
L_0069838f:; BB(0x0069838f);
    /* 0069838f: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00698392: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698394: je 0x69847a */ if (fZ) goto L_0069847a;
L_0069839a:; BB(0x0069839a);
    /* 0069839a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069839d: jne 0x6983ef */ if (!fZ) goto L_006983ef;
L_0069839f:; BB(0x0069839f);
    /* 0069839f: fld dword ptr [0x93c9ec] */ FPUSH(R_F32((u32)(0x93c9ecu)));
    /* 006983a5: fadd dword ptr [esi + 0x6fc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x6fcu));
    /* 006983ab: fcom dword ptr [0x93ca08] */ fx_compare(ST(0), R_F32((u32)(0x93ca08u))); 
    /* 006983b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006983b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006983b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006983b7: jb 0x6983e2 */ if (fC) goto L_006983e2;
L_006983b9:; BB(0x006983b9);
    /* 006983b9: fld dword ptr [0x93c9fc] */ FPUSH(R_F32((u32)(0x93c9fcu)));
    /* 006983bf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006983c2: mov ecx, esi */ r_ecx = r_esi;
    /* 006983c4: mov dword ptr [edi + 4], 2 */ W32((u32)(r_edi+0x4u), 0x2u);
    /* 006983cb: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 006983d1: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006983d7: mov dword ptr [esi + 0x33c], edx */ W32((u32)(r_esi+0x33cu), r_edx);
    /* 006983dd: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x6983e2u); f_00693240();
L_006983e2:; BB(0x006983e2);
    /* 006983e2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006983e5: fstp dword ptr [esi + 0x6fc] */ W_F32((u32)(r_esi+0x6fcu), ST(0)); FPOP();
    /* 006983eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006983ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006983ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006983ee: ret  */ FN_RET(0x00698374); r_esp += 4; return;
L_006983ef:; BB(0x006983ef);
    /* 006983ef: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006983f2: jne 0x6984c7 */ if (!fZ) goto L_006984c7;
L_006983f8:; BB(0x006983f8);
    /* 006983f8: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 006983fe: test edx, 0x300000 */ {  u32 a = r_edx; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698404: jne 0x6984c7 */ if (!fZ) goto L_006984c7;
L_0069840a:; BB(0x0069840a);
    /* 0069840a: mov ecx, esi */ r_ecx = r_esi;
    /* 0069840c: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x698411u); f_00688e9c();
    /* 00698411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698413: jne 0x698423 */ if (!fZ) goto L_00698423;
L_00698415:; BB(0x00698415);
    /* 00698415: mov dword ptr [esi + 0x6fc], 0x3f800000 */ W32((u32)(r_esi+0x6fcu), 0x3f800000u);
    /* 0069841f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698420: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698421: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698422: ret  */ FN_RET(0x00698374); r_esp += 4; return;
L_00698423:; BB(0x00698423);
    /* 00698423: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 00698429: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0069842c: je 0x698436 */ if (fZ) goto L_00698436;
L_0069842e:; BB(0x0069842e);
    /* 0069842e: fld dword ptr [0x93ca00] */ FPUSH(R_F32((u32)(0x93ca00u)));
    /* 00698434: jmp 0x698449 */ goto L_00698449;
L_00698436:; BB(0x00698436);
    /* 00698436: test dl, 0x1e */ {  u32 a = (u8)r_edx; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00698439: je 0x698443 */ if (fZ) goto L_00698443;
L_0069843b:; BB(0x0069843b);
    /* 0069843b: fld dword ptr [0x93c9f8] */ FPUSH(R_F32((u32)(0x93c9f8u)));
    /* 00698441: jmp 0x698449 */ goto L_00698449;
L_00698443:; BB(0x00698443);
    /* 00698443: fld dword ptr [0x93c9fc] */ FPUSH(R_F32((u32)(0x93c9fcu)));
L_00698449:; BB(0x00698449);
    /* 00698449: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069844b: fld dword ptr [esi + 0x6fc] */ FPUSH(R_F32((u32)(r_esi+0x6fcu)));
    /* 00698451: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00698453: fmul dword ptr [0x93c9f4] */ ST(0) = ST(0) * R_F32((u32)(0x93c9f4u));
    /* 00698459: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0069845b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069845d: fabs  */ ST(0) = fabsl(ST(0));
    /* 0069845f: fcomp dword ptr [0x93c9f0] */ fx_compare(ST(0), R_F32((u32)(0x93c9f0u))); FPOP();
    /* 00698465: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698467: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00698468: jae 0x69846e */ if (!fC) goto L_0069846e;
L_0069846a:; BB(0x0069846a);
    /* 0069846a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069846c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_0069846e:; BB(0x0069846e);
    /* 0069846e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00698470: fstp dword ptr [esi + 0x6fc] */ W_F32((u32)(r_esi+0x6fcu), ST(0)); FPOP();
    /* 00698476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698477: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698479: ret  */ FN_RET(0x00698374); r_esp += 4; return;
L_0069847a:; BB(0x0069847a);
    /* 0069847a: mov edx, dword ptr [esi + 0xdf0] */ r_edx = R32((u32)(r_esi+0xdf0u));
    /* 00698480: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698482: jne 0x6984c7 */ if (!fZ) goto L_006984c7;
L_00698484:; BB(0x00698484);
    /* 00698484: mov ecx, esi */ r_ecx = r_esi;
    /* 00698486: call 0x6928a8 */ r_esp -= 4; W32(r_esp, 0x69848bu); f_006928a8();
    /* 0069848b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069848d: jne 0x6984c7 */ if (!fZ) goto L_006984c7;
L_0069848f:; BB(0x0069848f);
    /* 0069848f: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 00698495: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069849b: je 0x6984a4 */ if (fZ) goto L_006984a4;
L_0069849d:; BB(0x0069849d);
    /* 0069849d: mov edx, 1 */ r_edx = 0x1u;
    /* 006984a2: jmp 0x6984a6 */ goto L_006984a6;
L_006984a4:; BB(0x006984a4);
    /* 006984a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006984a6:; BB(0x006984a6);
    /* 006984a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006984a8: je 0x6984c7 */ if (fZ) goto L_006984c7;
L_006984aa:; BB(0x006984aa);
    /* 006984aa: mov ecx, esi */ r_ecx = r_esi;
    /* 006984ac: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x6984b1u); f_006877b0();
    /* 006984b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006984b3: je 0x6984c7 */ if (fZ) goto L_006984c7;
L_006984b5:; BB(0x006984b5);
    /* 006984b5: movsx edx, word ptr [edi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 006984b9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006984bc: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 006984c0: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006984c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006984c5: jl 0x6984cb */ if ((fS!=fO)) goto L_006984cb;
L_006984c7:; BB(0x006984c7);
    /* 006984c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006984c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006984c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006984ca: ret  */ FN_RET(0x00698374); r_esp += 4; return;
L_006984cb:; BB(0x006984cb);
    /* 006984cb: mov edx, dword ptr [0xa48a9c] */ r_edx = R32((u32)(0xa48a9cu));
    /* 006984d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006984d3: je 0x6984ea */ if (fZ) goto L_006984ea;
L_006984d5:; BB(0x006984d5);
    /* 006984d5: mov dword ptr [esi + 0x6fc], 0x3f800000 */ W32((u32)(r_esi+0x6fcu), 0x3f800000u);
    /* 006984df: mov dword ptr [edi + 4], 2 */ W32((u32)(r_edi+0x4u), 0x2u);
    /* 006984e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006984e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006984e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006984e9: ret  */ FN_RET(0x00698374); r_esp += 4; return;
L_006984ea:; BB(0x006984ea);
    /* 006984ea: mov dword ptr [edi + 4], 1 */ W32((u32)(r_edi+0x4u), 0x1u);
    /* 006984f1: mov ecx, esi */ r_ecx = r_esi;
    /* 006984f3: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x6984f8u); f_00693240();
    /* 006984f8: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006984fb: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698501: jne 0x69850d */ if (!fZ) goto L_0069850d;
L_00698503:; BB(0x00698503);
    /* 00698503: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00698506: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698507: call 0x5cbb04 */ r_esp -= 4; W32(r_esp, 0x69850cu); f_005cbb04();
    /* 0069850c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0069850d:; BB(0x0069850d);
    /* 0069850d: mov dword ptr [esi + 0x6fc], 0 */ W32((u32)(r_esi+0x6fcu), 0x0u);
    /* 00698517: mov ecx, esi */ r_ecx = r_esi;
    /* 00698519: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69851eu); f_0069357c();
    /* 0069851e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069851f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698520: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698521: ret  */ FN_RET(0x00698374); r_esp += 4; return;
}

void f_00698524(void) /* sub_698524 */
{
    FN_ENTER(0x00698524);
    /* 00698524: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00698527: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0069852a: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0069852c: ret  */ FN_RET(0x00698524); r_esp += 4; return;
}

void f_00698530(void) /* sub_698530 */
{
    FN_ENTER(0x00698530);
    /* 00698530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698531: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00698532: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698535: mov edi, ecx */ r_edi = r_ecx;
    /* 00698537: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0069853b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0069853e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069853f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00698542: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00698544: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00698546: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x69854cu); call_ind(t); }
    /* 0069854c: fld dword ptr [0x93c9e8] */ FPUSH(R_F32((u32)(0x93c9e8u)));
    /* 00698552: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00698556: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00698559: fld dword ptr [0x93c9e4] */ FPUSH(R_F32((u32)(0x93c9e4u)));
    /* 0069855f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00698561: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698563: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00698564: fld dword ptr [0x93c9e0] */ FPUSH(R_F32((u32)(0x93c9e0u)));
    /* 0069856a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069856c: ja 0x698570 */ if ((!fC&&!fZ)) goto L_00698570;
L_0069856e:; BB(0x0069856e);
    /* 0069856e: fst st(2) */ ST(2) = ST(0);
L_00698570:; BB(0x00698570);
    /* 00698570: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00698572: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00698574: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698576: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00698577: jb 0x69857b */ if (fC) goto L_0069857b;
L_00698579:; BB(0x00698579);
    /* 00698579: fst st(1) */ ST(1) = ST(0);
L_0069857b:; BB(0x0069857b);
    /* 0069857b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069857d: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00698580: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698583: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00698584: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698585: ret 4 */ FN_RET(0x00698530); r_esp += 8; return;
}

void f_00698588(void) /* sub_698588 */
{
    FN_ENTER(0x00698588);
    /* 00698588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698589: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069858b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069858f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00698591: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x698596u); f_008193cc();
    /* 00698596: mov dword ptr [ebx], 0xb398b8 */ W32((u32)(r_ebx), 0xb398b8u);
    /* 0069859c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006985a1: mov word ptr [ebx + 0x1e], dx */ W16((u32)(r_ebx+0x1eu), (u16)r_edx);
    /* 006985a5: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 006985ac: mov word ptr [ebx + 0x1c], dx */ W16((u32)(r_ebx+0x1cu), (u16)r_edx);
    /* 006985b0: mov eax, dword ptr [0x9cb9cc] */ r_eax = R32((u32)(0x9cb9ccu));
    /* 006985b5: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006985b8: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006985bd: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 006985c1: mov eax, ebx */ r_eax = r_ebx;
    /* 006985c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006985c4: ret 8 */ FN_RET(0x00698588); r_esp += 12; return;
}

void f_006985c8(void) /* sub_6985C8 */
{
    FN_ENTER(0x006985c8);
    /* 006985c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006985c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006985ca: mov esi, ecx */ r_esi = r_ecx;
    /* 006985cc: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 006985cf: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x6985d4u); f_0069862c();
    /* 006985d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006985d6: jne 0x6985db */ if (!fZ) goto L_006985db;
L_006985d8:; BB(0x006985d8);
    /* 006985d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006985d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006985da: ret  */ FN_RET(0x006985c8); r_esp += 4; return;
L_006985db:; BB(0x006985db);
    /* 006985db: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 006985de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006985e0: call 0x68c0b4 */ r_esp -= 4; W32(r_esp, 0x6985e5u); f_0068c0b4();
    /* 006985e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006985e7: jne 0x6985ec */ if (!fZ) goto L_006985ec;
L_006985e9:; BB(0x006985e9);
    /* 006985e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006985ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006985eb: ret  */ FN_RET(0x006985c8); r_esp += 4; return;
L_006985ec:; BB(0x006985ec);
    /* 006985ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006985ee: call 0x68c160 */ r_esp -= 4; W32(r_esp, 0x6985f3u); f_0068c160();
    /* 006985f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006985f5: je 0x6985e9 */ if (fZ) goto L_006985e9;
L_006985f7:; BB(0x006985f7);
    /* 006985f7: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 006985fd: movzx edx, word ptr [eax + 0x108c] */ r_edx = (u32)R16((u32)(r_eax+0x108cu));
    /* 00698604: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698605: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69860au); f_007b4d18();
    /* 0069860a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069860b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069860d: je 0x6985e9 */ if (fZ) goto L_006985e9;
L_0069860f:; BB(0x0069860f);
    /* 0069860f: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00698613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698614: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00698616: mov ecx, eax */ r_ecx = r_eax;
    /* 00698618: call dword ptr [ebp + 0x2c] */ { u32 t = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, 0x69861bu); call_ind(t); }
    /* 0069861b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0069861f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698624: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00698628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00698629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069862a: ret  */ FN_RET(0x006985c8); r_esp += 4; return;
}

void f_0069862c(void) /* sub_69862C */
{
    FN_ENTER(0x0069862c);
    /* 0069862c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069862d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069862f: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00698632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698633: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698638u); f_0068d5a8();
    /* 00698638: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698639: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0069863c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069863e: je 0x698647 */ if (fZ) goto L_00698647;
L_00698640:; BB(0x00698640);
    /* 00698640: mov eax, 1 */ r_eax = 0x1u;
    /* 00698645: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698646: ret  */ FN_RET(0x0069862c); r_esp += 4; return;
L_00698647:; BB(0x00698647);
    /* 00698647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698649: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069864a: ret  */ FN_RET(0x0069862c); r_esp += 4; return;
}

void f_00698678(void) /* sub_698678 */
{
    FN_ENTER(0x00698678);
    /* 00698678: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698679: mov edi, ecx */ r_edi = r_ecx;
    /* 0069867b: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0069867e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069867f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698684u); f_0068d5a8();
    /* 00698684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698687: je 0x698691 */ if (fZ) goto L_00698691;
L_00698689:; BB(0x00698689);
    /* 00698689: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0069868c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069868f: jne 0x698693 */ if (!fZ) goto L_00698693;
L_00698691:; BB(0x00698691);
    /* 00698691: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698692: ret  */ FN_RET(0x00698678); r_esp += 4; return;
L_00698693:; BB(0x00698693);
    /* 00698693: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 0069869a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069869c: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x6986a1u); f_00692804();
    /* 006986a1: mov eax, 4 */ r_eax = 0x4u;
    /* 006986a6: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006986aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006986ab: ret  */ FN_RET(0x00698678); r_esp += 4; return;
}

void f_006986ac(void) /* sub_6986AC */
{
    FN_ENTER(0x006986ac);
    /* 006986ac: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006986b1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006986b5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006986b9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006986bc: mov dword ptr [eax*4 + 0xa94140], 1 */ W32((u32)(r_eax*4+0xa94140u), 0x1u);
    /* 006986c7: mov dword ptr [eax*4 + 0xa94144], edx */ W32((u32)(r_eax*4+0xa94144u), r_edx);
    /* 006986ce: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006986d2: mov dword ptr [eax*4 + 0xa94148], edx */ W32((u32)(r_eax*4+0xa94148u), r_edx);
    /* 006986d9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006986dd: mov dword ptr [eax*4 + 0xa9414c], edx */ W32((u32)(r_eax*4+0xa9414cu), r_edx);
    /* 006986e4: mov dword ptr [eax*4 + 0xa94150], ecx */ W32((u32)(r_eax*4+0xa94150u), r_ecx);
    /* 006986eb: ret  */ FN_RET(0x006986ac); r_esp += 4; return;
}

void f_006986ec(void) /* sub_6986EC */
{
    FN_ENTER(0x006986ec);
    /* 006986ec: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006986f1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006986f5: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006986f9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006986fc: mov dword ptr [eax*4 + 0xa94140], 1 */ W32((u32)(r_eax*4+0xa94140u), 0x1u);
    /* 00698707: mov dword ptr [eax*4 + 0xa94144], edx */ W32((u32)(r_eax*4+0xa94144u), r_edx);
    /* 0069870e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00698710: mov dword ptr [eax*4 + 0xa94148], edx */ W32((u32)(r_eax*4+0xa94148u), r_edx);
    /* 00698717: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0069871a: mov dword ptr [eax*4 + 0xa9414c], edx */ W32((u32)(r_eax*4+0xa9414cu), r_edx);
    /* 00698721: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00698724: mov dword ptr [eax*4 + 0xa94150], edx */ W32((u32)(r_eax*4+0xa94150u), r_edx);
    /* 0069872b: ret  */ FN_RET(0x006986ec); r_esp += 4; return;
}

void f_0069872c(void) /* sub_69872C */
{
    FN_ENTER(0x0069872c);
    /* 0069872c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00698730: movsx edx, byte ptr [eax + ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 00698734: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698736: jle 0x69873d */ if ((fZ||fS!=fO)) goto L_0069873d;
L_00698738:; BB(0x00698738);
    /* 00698738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069873a: ret 4 */ FN_RET(0x0069872c); r_esp += 8; return;
L_0069873d:; BB(0x0069873d);
    /* 0069873d: mov eax, 1 */ r_eax = 0x1u;
    /* 00698742: ret 4 */ FN_RET(0x0069872c); r_esp += 8; return;
}

void f_00698748(void) /* sub_698748 */
{
    FN_ENTER(0x00698748);
    /* 00698748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698749: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069874a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069874b: movsx edx, byte ptr [esp + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x14u));
    /* 00698750: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698752: mov ebx, eax */ r_ebx = r_eax;
    /* 00698754: mov esi, edx */ r_esi = r_edx;
    /* 00698756: mov edi, ecx */ r_edi = r_ecx;
L_00698758:; BB(0x00698758);
    /* 00698758: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698759: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069875a: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069875e: call 0x698790 */ r_esp -= 4; W32(r_esp, 0x698763u); f_00698790();
    /* 00698763: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698766: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00698769: cmp al, byte ptr [ebx + edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebx+r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0069876c: jg 0x69877d */ if ((!fZ&&fS==fO)) goto L_0069877d;
L_0069876e:; BB(0x0069876e);
    /* 0069876e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00698771: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00698774: jge 0x698785 */ if ((fS==fO)) goto L_00698785;
L_00698776:; BB(0x00698776);
    /* 00698776: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698779: je 0x69876e */ if (fZ) goto L_0069876e;
L_0069877b:; BB(0x0069877b);
    /* 0069877b: jmp 0x698758 */ goto L_00698758;
L_0069877d:; BB(0x0069877d);
    /* 0069877d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069877f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698780: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698781: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698782: ret 8 */ FN_RET(0x00698748); r_esp += 12; return;
L_00698785:; BB(0x00698785);
    /* 00698785: mov eax, 1 */ r_eax = 0x1u;
    /* 0069878a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069878b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069878c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069878d: ret 8 */ FN_RET(0x00698748); r_esp += 12; return;
}

void f_00698790(void) /* sub_698790 */
{
    FN_ENTER(0x00698790);
    /* 00698790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698791: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00698795: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00698797: lea ecx, [ecx + 1] */ r_ecx = (u32)(r_ecx+0x1u);
    /* 0069879a: movsx eax, byte ptr [esp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 0069879f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006987a3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987a6: je 0x6988df */ if (fZ) goto L_006988df;
L_006987ac:; BB(0x006987ac);
    /* 006987ac: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987af: je 0x69887c */ if (fZ) goto L_0069887c;
L_006987b5:; BB(0x006987b5);
    /* 006987b5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987b8: jne 0x69881a */ if (!fZ) goto L_0069881a;
L_006987ba:; BB(0x006987ba);
    /* 006987ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987bc: je 0x6987fe */ if (fZ) goto L_006987fe;
L_006987be:; BB(0x006987be);
    /* 006987be: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987c1: jne 0x6987dc */ if (!fZ) goto L_006987dc;
L_006987c3:; BB(0x006987c3);
    /* 006987c3: mov eax, 0x2e8ba2e9 */ r_eax = 0x2e8ba2e9u;
    /* 006987c8: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006987ca: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006987cd: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006987cf: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006987d1: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006987d4: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 006987d7: jmp 0x6988cd */ goto L_006988cd;
L_006987dc:; BB(0x006987dc);
    /* 006987dc: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006987df: jne 0x6988cd */ if (!fZ) goto L_006988cd;
L_006987e5:; BB(0x006987e5);
    /* 006987e5: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 006987ea: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006987ec: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006987ef: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006987f1: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006987f3: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006987f6: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 006987f9: jmp 0x6988cd */ goto L_006988cd;
L_006987fe:; BB(0x006987fe);
    /* 006987fe: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 00698803: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00698805: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698807: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069880a: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069880d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069880f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698812: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00698815: jmp 0x6988cd */ goto L_006988cd;
L_0069881a:; BB(0x0069881a);
    /* 0069881a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069881d: jne 0x6988cd */ if (!fZ) goto L_006988cd;
L_00698823:; BB(0x00698823);
    /* 00698823: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698825: je 0x698866 */ if (fZ) goto L_00698866;
L_00698827:; BB(0x00698827);
    /* 00698827: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069882a: jne 0x698846 */ if (!fZ) goto L_00698846;
L_0069882c:; BB(0x0069882c);
    /* 0069882c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00698831: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00698833: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698836: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698839: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069883b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069883e: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00698841: jmp 0x6988cd */ goto L_006988cd;
L_00698846:; BB(0x00698846);
    /* 00698846: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698849: jne 0x6988cd */ if (!fZ) goto L_006988cd;
L_0069884f:; BB(0x0069884f);
    /* 0069884f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00698854: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00698856: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698859: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069885c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069885e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698861: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00698864: jmp 0x6988cd */ goto L_006988cd;
L_00698866:; BB(0x00698866);
    /* 00698866: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0069886b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069886d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698870: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698872: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00698874: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698877: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 0069887a: jmp 0x6988cd */ goto L_006988cd;
L_0069887c:; BB(0x0069887c);
    /* 0069887c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069887e: je 0x6988b6 */ if (fZ) goto L_006988b6;
L_00698880:; BB(0x00698880);
    /* 00698880: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698883: jne 0x69889b */ if (!fZ) goto L_0069889b;
L_00698885:; BB(0x00698885);
    /* 00698885: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0069888a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069888c: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069888f: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698891: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00698893: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698896: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00698899: jmp 0x6988cd */ goto L_006988cd;
L_0069889b:; BB(0x0069889b);
    /* 0069889b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069889e: jne 0x6988cd */ if (!fZ) goto L_006988cd;
L_006988a0:; BB(0x006988a0);
    /* 006988a0: mov eax, 0x2e8ba2e9 */ r_eax = 0x2e8ba2e9u;
    /* 006988a5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006988a7: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006988aa: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006988ac: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006988ae: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006988b1: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 006988b4: jmp 0x6988cd */ goto L_006988cd;
L_006988b6:; BB(0x006988b6);
    /* 006988b6: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 006988bb: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006988bd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006988bf: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006988c2: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006988c5: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006988c7: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006988ca: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
L_006988cd:; BB(0x006988cd);
    /* 006988cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006988cf: jl 0x6988d6 */ if ((fS!=fO)) goto L_006988d6;
L_006988d1:; BB(0x006988d1);
    /* 006988d1: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006988d4: jle 0x6988db */ if ((fZ||fS!=fO)) goto L_006988db;
L_006988d6:; BB(0x006988d6);
    /* 006988d6: mov edi, 0x14 */ r_edi = 0x14u;
L_006988db:; BB(0x006988db);
    /* 006988db: mov eax, edi */ r_eax = r_edi;
    /* 006988dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006988de: ret  */ FN_RET(0x00698790); r_esp += 4; return;
L_006988df:; BB(0x006988df);
    /* 006988df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006988e1: je 0x698906 */ if (fZ) goto L_00698906;
L_006988e3:; BB(0x006988e3);
    /* 006988e3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006988e6: je 0x6988ed */ if (fZ) goto L_006988ed;
L_006988e8:; BB(0x006988e8);
    /* 006988e8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006988eb: jne 0x6988cd */ if (!fZ) goto L_006988cd;
L_006988ed:; BB(0x006988ed);
    /* 006988ed: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 006988f2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006988f4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006988f6: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006988f9: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006988fc: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006988fe: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698901: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00698904: jmp 0x6988cd */ goto L_006988cd;
L_00698906:; BB(0x00698906);
    /* 00698906: mov eax, 0x2e8ba2e9 */ r_eax = 0x2e8ba2e9u;
    /* 0069890b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069890d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698910: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698912: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00698914: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698917: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 0069891a: jmp 0x6988cd */ goto L_006988cd;
}

void f_0069891c(void) /* sub_69891C */
{
    FN_ENTER(0x0069891c);
    /* 0069891c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069891d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069891e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069891f: movsx edx, byte ptr [esp + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x14u));
    /* 00698924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698926: mov ebx, eax */ r_ebx = r_eax;
    /* 00698928: mov esi, edx */ r_esi = r_edx;
    /* 0069892a: mov edi, ecx */ r_edi = r_ecx;
L_0069892c:; BB(0x0069892c);
    /* 0069892c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069892d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069892e: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00698932: call 0x698790 */ r_esp -= 4; W32(r_esp, 0x698937u); f_00698790();
    /* 00698937: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069893a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069893b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069893d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069893e: call 0x6989a0 */ r_esp -= 4; W32(r_esp, 0x698943u); f_006989a0();
    /* 00698943: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00698946: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00698949: jl 0x69892c */ if ((fS!=fO)) goto L_0069892c;
L_0069894b:; BB(0x0069894b);
    /* 0069894b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069894c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069894d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069894e: ret 8 */ FN_RET(0x0069891c); r_esp += 12; return;
}

void f_00698954(void) /* sub_698954 */
{
    FN_ENTER(0x00698954);
    /* 00698954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698955: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 0069895a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069895e: movzx ebx, byte ptr [eax + ecx] */ r_ebx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00698962: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00698964: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00698967: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698969: jl 0x698977 */ if ((fS!=fO)) goto L_00698977;
L_0069896b:; BB(0x0069896b);
    /* 0069896b: mov byte ptr [eax + ecx], dl */ W8((u32)(r_eax+r_ecx), (u8)r_edx);
    /* 0069896e: mov eax, 1 */ r_eax = 0x1u;
    /* 00698973: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698974: ret 8 */ FN_RET(0x00698954); r_esp += 12; return;
L_00698977:; BB(0x00698977);
    /* 00698977: mov byte ptr [eax + ecx], 0 */ W8((u32)(r_eax+r_ecx), 0x0u);
    /* 0069897b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069897d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069897e: ret 8 */ FN_RET(0x00698954); r_esp += 12; return;
}

void f_00698984(void) /* sub_698984 */
{
    FN_ENTER(0x00698984);
    /* 00698984: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00698988: movsx edx, byte ptr [eax + ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 0069898c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069898e: jl 0x698995 */ if ((fS!=fO)) goto L_00698995;
L_00698990:; BB(0x00698990);
    /* 00698990: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00698993: jle 0x69899b */ if ((fZ||fS!=fO)) goto L_0069899b;
L_00698995:; BB(0x00698995);
    /* 00698995: mov byte ptr [eax + ecx], 0 */ W8((u32)(r_eax+r_ecx), 0x0u);
    /* 00698999: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0069899b:; BB(0x0069899b);
    /* 0069899b: mov eax, edx */ r_eax = r_edx;
    /* 0069899d: ret 4 */ FN_RET(0x00698984); r_esp += 8; return;
}

void f_006989a0(void) /* sub_6989A0 */
{
    FN_ENTER(0x006989a0);
    /* 006989a0: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006989a5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006989a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006989ab: jl 0x6989b2 */ if ((fS!=fO)) goto L_006989b2;
L_006989ad:; BB(0x006989ad);
    /* 006989ad: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006989b0: jle 0x6989b7 */ if ((fZ||fS!=fO)) goto L_006989b7;
L_006989b2:; BB(0x006989b2);
    /* 006989b2: mov eax, 0x14 */ r_eax = 0x14u;
L_006989b7:; BB(0x006989b7);
    /* 006989b7: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
    /* 006989ba: ret 8 */ FN_RET(0x006989a0); r_esp += 12; return;
}

void f_006989c0(void) /* sub_6989C0 */
{
    FN_ENTER(0x006989c0);
    /* 006989c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006989c2: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 006989c4: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 006989c7: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 006989ca: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 006989cd: ret  */ FN_RET(0x006989c0); r_esp += 4; return;
}

void f_006989d0(void) /* sub_6989D0 */
{
    FN_ENTER(0x006989d0);
    /* 006989d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006989d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006989d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006989d5: call 0x6989c0 */ r_esp -= 4; W32(r_esp, 0x6989dau); f_006989c0();
    /* 006989da: mov eax, ebp */ r_eax = r_ebp;
    /* 006989dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006989dd: ret  */ FN_RET(0x006989d0); r_esp += 4; return;
}

void f_006989e0(void) /* sub_6989E0 */
{
    FN_ENTER(0x006989e0);
    /* 006989e0: mov eax, dword ptr [0xa94300] */ r_eax = R32((u32)(0xa94300u));
    /* 006989e5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006989e7: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006989ee: ret  */ FN_RET(0x006989e0); r_esp += 4; return;
}

void f_006989f0(void) /* sub_6989F0 */
{
    FN_ENTER(0x006989f0);
    /* 006989f0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006989f4: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006989fa: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006989ff: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 00698a05: ret  */ FN_RET(0x006989f0); r_esp += 4; return;
}

void f_00698a08(void) /* sub_698A08 */
{
    FN_ENTER(0x00698a08);
    /* 00698a08: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00698a0d: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00698a10: ja 0x698b6f */ if ((!fC&&!fZ)) goto L_00698b6f;
L_00698a16:; BB(0x00698a16);
    /* 00698a16: mov eax, dword ptr [eax*4 + 0x93ca60] */ r_eax = R32((u32)(r_eax*4+0x93ca60u));
    /* 00698a1d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a08); r_esp += 12; return;
}

void f_00698a1f(void)
{
    FN_ENTER(0x00698a1f);
    /* 00698a1f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a25: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x698a2au); f_0069bdf0();
    /* 00698a2a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a1f); r_esp += 12; return;
}

void f_00698a2f(void)
{
    FN_ENTER(0x00698a2f);
    /* 00698a2f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a35: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x698a3au); f_0069c6c0();
    /* 00698a3a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a2f); r_esp += 12; return;
}

void f_00698a3f(void)
{
    FN_ENTER(0x00698a3f);
    /* 00698a3f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a45: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x698a4au); f_0069c988();
    /* 00698a4a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a3f); r_esp += 12; return;
}

void f_00698a4f(void)
{
    FN_ENTER(0x00698a4f);
    /* 00698a4f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a55: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x698a5au); f_0069cd20();
    /* 00698a5a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a4f); r_esp += 12; return;
}

void f_00698a5f(void)
{
    FN_ENTER(0x00698a5f);
    /* 00698a5f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a65: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x698a6au); f_0069d1e4();
    /* 00698a6a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a5f); r_esp += 12; return;
}

void f_00698a6f(void)
{
    FN_ENTER(0x00698a6f);
    /* 00698a6f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a75: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x698a7au); f_0069d43c();
    /* 00698a7a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a6f); r_esp += 12; return;
}

void f_00698a7f(void)
{
    FN_ENTER(0x00698a7f);
    /* 00698a7f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a85: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x698a8au); f_0069d8f4();
    /* 00698a8a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a7f); r_esp += 12; return;
}

void f_00698a8f(void)
{
    FN_ENTER(0x00698a8f);
    /* 00698a8f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698a94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698a95: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x698a9au); f_0069dd60();
    /* 00698a9a: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a8f); r_esp += 12; return;
}

void f_00698a9f(void)
{
    FN_ENTER(0x00698a9f);
    /* 00698a9f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698aa5: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x698aaau); f_0069e15c();
    /* 00698aaa: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698a9f); r_esp += 12; return;
}

void f_00698aaf(void)
{
    FN_ENTER(0x00698aaf);
    /* 00698aaf: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698ab5: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x698abau); f_0069e718();
    /* 00698aba: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698aaf); r_esp += 12; return;
}

void f_00698abf(void)
{
    FN_ENTER(0x00698abf);
    /* 00698abf: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698ac5: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x698acau); f_0069ebc8();
    /* 00698aca: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698abf); r_esp += 12; return;
}

void f_00698acf(void)
{
    FN_ENTER(0x00698acf);
    /* 00698acf: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698ad5: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x698adau); f_0069ef04();
    /* 00698ada: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698acf); r_esp += 12; return;
}

void f_00698adf(void)
{
    FN_ENTER(0x00698adf);
    /* 00698adf: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698ae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698ae5: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x698aeau); f_0069f148();
    /* 00698aea: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698adf); r_esp += 12; return;
}

void f_00698aef(void)
{
    FN_ENTER(0x00698aef);
    /* 00698aef: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698af5: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x698afau); f_0069f384();
    /* 00698afa: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698aef); r_esp += 12; return;
}

void f_00698afc(void)
{
    FN_ENTER(0x00698afc);
    /* 00698afc: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b02: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x698b07u); f_0069f648();
    /* 00698b07: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698afc); r_esp += 12; return;
}

void f_00698b09(void)
{
    FN_ENTER(0x00698b09);
    /* 00698b09: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b0f: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x698b14u); f_0069fe2c();
    /* 00698b14: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b09); r_esp += 12; return;
}

void f_00698b11(void)
{
    FN_ENTER(0x00698b11);
    /* 00698b11: jae 0x698b13 */ if (!fC) goto L_00698b13;
L_00698b13:; BB(0x00698b13);
    /* 00698b13: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00698b15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698b16: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b1c: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x698b21u); f_006a0624();
    /* 00698b21: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b11); r_esp += 12; return;
}

void f_00698b16(void)
{
    FN_ENTER(0x00698b16);
    /* 00698b16: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b1c: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x698b21u); f_006a0624();
    /* 00698b21: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b16); r_esp += 12; return;
}

void f_00698b23(void)
{
    FN_ENTER(0x00698b23);
    /* 00698b23: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b29: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x698b2eu); f_006a0994();
    /* 00698b2e: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b23); r_esp += 12; return;
}

void f_00698b30(void)
{
    FN_ENTER(0x00698b30);
    /* 00698b30: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b36: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x698b3bu); f_006a0eb8();
    /* 00698b3b: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b30); r_esp += 12; return;
}

void f_00698b3d(void)
{
    FN_ENTER(0x00698b3d);
    /* 00698b3d: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b43: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x698b48u); f_006a139c();
    /* 00698b48: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b3d); r_esp += 12; return;
}

void f_00698b4a(void)
{
    FN_ENTER(0x00698b4a);
    /* 00698b4a: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b50: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x698b55u); f_006a1a60();
    /* 00698b55: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b4a); r_esp += 12; return;
}

void f_00698b57(void)
{
    FN_ENTER(0x00698b57);
    /* 00698b57: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b5d: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x698b62u); f_0069b93c();
    /* 00698b62: jmp 0x698b6f */ goto L_00698b6f;
L_00698b6f:; BB(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b57); r_esp += 12; return;
}

void f_00698b64(void)
{
    FN_ENTER(0x00698b64);
    /* 00698b64: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698b6a: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x698b6fu); f_006a1ac0();
    /* 00698b6f: ret 8 */ FN_RET(0x00698b64); r_esp += 12; return;
}

void f_00698b6f(void)
{
    FN_ENTER(0x00698b6f);
    /* 00698b6f: ret 8 */ FN_RET(0x00698b6f); r_esp += 12; return;
}

void f_00698b74(void) /* sub_698B74 */
{
    FN_ENTER(0x00698b74);
    /* 00698b74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698b75: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698b78: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00698b7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00698b7e: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00698b83: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00698b8b: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00698b90: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00698b95: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00698b9d: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 00698ba2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00698baa: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00698baf: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 00698bb3: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 00698bb8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00698bbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00698bbd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00698bc0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00698bc3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00698bc7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00698bca: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00698bce: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00698bd1: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00698bd5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00698bd8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00698bdc: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00698bdf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00698be3: call 0x6a9b68 */ r_esp -= 4; W32(r_esp, 0x698be8u); f_006a9b68();
    /* 00698be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698bea: je 0x698cc8 */ if (fZ) goto L_00698cc8;
L_00698bf0:; BB(0x00698bf0);
    /* 00698bf0: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00698bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698bf6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698bfbu); f_0068d5a8();
    /* 00698bfb: mov esi, eax */ r_esi = r_eax;
    /* 00698bfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698c00: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c02: je 0x698cc8 */ if (fZ) goto L_00698cc8;
L_00698c08:; BB(0x00698c08);
    /* 00698c08: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00698c0c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00698c10: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00698c13: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698c17: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 00698c1a: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00698c1d: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698c22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698c24: jl 0x698c39 */ if ((fS!=fO)) goto L_00698c39;
L_00698c26:; BB(0x00698c26);
    /* 00698c26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698c27: mov dword ptr [esi + 0x3f0], edx */ W32((u32)(r_esi+0x3f0u), r_edx);
    /* 00698c2d: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x698c32u); f_0080c2dc();
    /* 00698c32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698c33: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
L_00698c39:; BB(0x00698c39);
    /* 00698c39: movsx edx, word ptr [esp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00698c3e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698c3f: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 00698c42: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x698c47u); f_00693468();
    /* 00698c47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c4a: je 0x698cc8 */ if (fZ) goto L_00698cc8;
L_00698c4c:; BB(0x00698c4c);
    /* 00698c4c: mov ecx, dword ptr [esi + 0x328] */ r_ecx = R32((u32)(r_esi+0x328u));
    /* 00698c52: test ecx, 0x8100 */ {  u32 a = r_ecx; u32 b = 0x8100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c58: jne 0x698c81 */ if (!fZ) goto L_00698c81;
L_00698c5a:; BB(0x00698c5a);
    /* 00698c5a: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c60: je 0x698c6e */ if (fZ) goto L_00698c6e;
L_00698c62:; BB(0x00698c62);
    /* 00698c62: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00698c69: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698c6c: jle 0x698c81 */ if ((fZ||fS!=fO)) goto L_00698c81;
L_00698c6e:; BB(0x00698c6e);
    /* 00698c6e: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c74: je 0x698c86 */ if (fZ) goto L_00698c86;
L_00698c76:; BB(0x00698c76);
    /* 00698c76: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00698c7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c7f: jne 0x698c86 */ if (!fZ) goto L_00698c86;
L_00698c81:; BB(0x00698c81);
    /* 00698c81: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698c84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698c85: ret  */ FN_RET(0x00698b74); r_esp += 4; return;
L_00698c86:; BB(0x00698c86);
    /* 00698c86: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00698c8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698c8d: jl 0x698c97 */ if ((fS!=fO)) goto L_00698c97;
L_00698c8f:; BB(0x00698c8f);
    /* 00698c8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698c90: mov ecx, esi */ r_ecx = r_esi;
    /* 00698c92: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x698c97u); f_007ba924();
L_00698c97:; BB(0x00698c97);
    /* 00698c97: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00698c9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698c9e: jne 0x698cae */ if (!fZ) goto L_00698cae;
L_00698ca0:; BB(0x00698ca0);
    /* 00698ca0: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00698ca3: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00698ca9: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00698cac: jmp 0x698cbf */ goto L_00698cbf;
L_00698cae:; BB(0x00698cae);
    /* 00698cae: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698cb1: jne 0x698cbf */ if (!fZ) goto L_00698cbf;
L_00698cb3:; BB(0x00698cb3);
    /* 00698cb3: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00698cb6: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00698cbc: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_00698cbf:; BB(0x00698cbf);
    /* 00698cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698cc1: mov ecx, esi */ r_ecx = r_esi;
    /* 00698cc3: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x698cc8u); f_006a1ac0();
L_00698cc8:; BB(0x00698cc8);
    /* 00698cc8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698ccb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698ccc: ret  */ FN_RET(0x00698b74); r_esp += 4; return;
}

void f_00698cd0(void) /* sub_698CD0 */
{
    FN_ENTER(0x00698cd0);
    /* 00698cd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698cd1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698cd4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00698cd8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00698cda: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00698cdf: mov byte ptr [esp], 0x3f */ W8((u32)(r_esp), 0x3fu);
    /* 00698ce3: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00698ce8: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00698ced: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 00698cf2: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 00698cf7: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00698cfc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00698cff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00698d01: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00698d04: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00698d07: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00698d0b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00698d0e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00698d12: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00698d15: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00698d19: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00698d1c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00698d20: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00698d23: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00698d27: call 0x6a9b68 */ r_esp -= 4; W32(r_esp, 0x698d2cu); f_006a9b68();
    /* 00698d2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698d2e: je 0x698dd5 */ if (fZ) goto L_00698dd5;
L_00698d34:; BB(0x00698d34);
    /* 00698d34: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00698d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698d3a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698d3fu); f_0068d5a8();
    /* 00698d3f: mov ebx, eax */ r_ebx = r_eax;
    /* 00698d41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698d44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698d46: je 0x698dd5 */ if (fZ) goto L_00698dd5;
L_00698d4c:; BB(0x00698d4c);
    /* 00698d4c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00698d50: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00698d54: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00698d57: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698d5b: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00698d5e: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00698d61: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 00698d67: or edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00698d6d: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 00698d73: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00698d78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698d7a: jl 0x698d8f */ if ((fS!=fO)) goto L_00698d8f;
L_00698d7c:; BB(0x00698d7c);
    /* 00698d7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d7d: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 00698d83: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x698d88u); f_0080c2dc();
    /* 00698d88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698d89: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
L_00698d8f:; BB(0x00698d8f);
    /* 00698d8f: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00698d94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698d96: jl 0x698da0 */ if ((fS!=fO)) goto L_00698da0;
L_00698d98:; BB(0x00698d98);
    /* 00698d98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00698d9b: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x698da0u); f_007ba924();
L_00698da0:; BB(0x00698da0);
    /* 00698da0: movsx edx, word ptr [esp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00698da5: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00698da8: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00698dad: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698db0: jne 0x698dc0 */ if (!fZ) goto L_00698dc0;
L_00698db2:; BB(0x00698db2);
    /* 00698db2: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00698db5: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00698dbb: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00698dbe: jmp 0x698dcc */ goto L_00698dcc;
L_00698dc0:; BB(0x00698dc0);
    /* 00698dc0: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00698dc3: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00698dc9: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00698dcc:; BB(0x00698dcc);
    /* 00698dcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698dce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00698dd0: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x698dd5u); f_006a1ac0();
L_00698dd5:; BB(0x00698dd5);
    /* 00698dd5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698dd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698dd9: ret  */ FN_RET(0x00698cd0); r_esp += 4; return;
}

void f_00698ddc(void) /* sub_698DDC */
{
    FN_ENTER(0x00698ddc);
    /* 00698ddc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698ddd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698de0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00698de4: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00698dec: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00698df4: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00698dfc: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 00698e00: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 00698e05: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00698e07: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00698e0a: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00698e0d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00698e11: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00698e14: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00698e18: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00698e1b: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00698e1e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00698e22: call 0x6a9bac */ r_esp -= 4; W32(r_esp, 0x698e27u); f_006a9bac();
    /* 00698e27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698e29: je 0x698e7c */ if (fZ) goto L_00698e7c;
L_00698e2b:; BB(0x00698e2b);
    /* 00698e2b: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00698e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698e31: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698e36u); f_0068d5a8();
    /* 00698e36: mov edi, eax */ r_edi = r_eax;
    /* 00698e38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698e3b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698e3d: je 0x698e7c */ if (fZ) goto L_00698e7c;
L_00698e3f:; BB(0x00698e3f);
    /* 00698e3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698e40: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x698e45u); f_00693468();
    /* 00698e45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698e48: je 0x698e7c */ if (fZ) goto L_00698e7c;
L_00698e4a:; BB(0x00698e4a);
    /* 00698e4a: mov edx, dword ptr [edi + 0x328] */ r_edx = R32((u32)(r_edi+0x328u));
    /* 00698e50: test dl, 0x1e */ {  u32 a = (u8)r_edx; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00698e53: je 0x698e7c */ if (fZ) goto L_00698e7c;
L_00698e55:; BB(0x00698e55);
    /* 00698e55: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00698e59: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00698e5d: mov dword ptr [edi + 0x404], edx */ W32((u32)(r_edi+0x404u), r_edx);
    /* 00698e63: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00698e67: mov dword ptr [edi + 0x40c], ecx */ W32((u32)(r_edi+0x40cu), r_ecx);
    /* 00698e6d: mov dword ptr [edi + 0x6c4], edx */ W32((u32)(r_edi+0x6c4u), r_edx);
    /* 00698e73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698e75: mov ecx, edi */ r_ecx = r_edi;
    /* 00698e77: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x698e7cu); f_0069b93c();
L_00698e7c:; BB(0x00698e7c);
    /* 00698e7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698e7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698e80: ret  */ FN_RET(0x00698ddc); r_esp += 4; return;
}

void f_00698e84(void) /* sub_698E84 */
{
    FN_ENTER(0x00698e84);
    /* 00698e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698e85: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698e88: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00698e8c: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00698e94: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00698e9c: mov byte ptr [esp], 0x42 */ W8((u32)(r_esp), 0x42u);
    /* 00698ea0: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00698ea5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00698ea7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00698eaa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00698ead: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00698eb1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00698eb4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00698eb8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00698ebb: call 0x6a9bac */ r_esp -= 4; W32(r_esp, 0x698ec0u); f_006a9bac();
    /* 00698ec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698ec2: je 0x698f0b */ if (fZ) goto L_00698f0b;
L_00698ec4:; BB(0x00698ec4);
    /* 00698ec4: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00698ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698eca: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698ecfu); f_0068d5a8();
    /* 00698ecf: mov ebx, eax */ r_ebx = r_eax;
    /* 00698ed1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698ed4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698ed6: je 0x698f0b */ if (fZ) goto L_00698f0b;
L_00698ed8:; BB(0x00698ed8);
    /* 00698ed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698ed9: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x698edeu); f_00693468();
    /* 00698ede: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698ee1: je 0x698f0b */ if (fZ) goto L_00698f0b;
L_00698ee3:; BB(0x00698ee3);
    /* 00698ee3: mov edx, dword ptr [ebx + 0x328] */ r_edx = R32((u32)(r_ebx+0x328u));
    /* 00698ee9: test dl, 0x1e */ {  u32 a = (u8)r_edx; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00698eec: je 0x698f0b */ if (fZ) goto L_00698f0b;
L_00698eee:; BB(0x00698eee);
    /* 00698eee: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00698ef2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00698ef6: mov dword ptr [ebx + 0x404], edx */ W32((u32)(r_ebx+0x404u), r_edx);
    /* 00698efc: mov dword ptr [ebx + 0x40c], ecx */ W32((u32)(r_ebx+0x40cu), r_ecx);
    /* 00698f02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698f04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00698f06: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x698f0bu); f_006a139c();
L_00698f0b:; BB(0x00698f0b);
    /* 00698f0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698f0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698f0f: ret  */ FN_RET(0x00698e84); r_esp += 4; return;
}

void f_00698f10(void) /* sub_698F10 */
{
    FN_ENTER(0x00698f10);
    /* 00698f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f11: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698f14: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00698f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698f1a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00698f1f: mov byte ptr [esp], 0x43 */ W8((u32)(r_esp), 0x43u);
    /* 00698f23: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00698f28: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00698f2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00698f2f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00698f32: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00698f35: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00698f39: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00698f3c: call 0x6a9bd8 */ r_esp -= 4; W32(r_esp, 0x698f41u); f_006a9bd8();
    /* 00698f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f43: je 0x698fa2 */ if (fZ) goto L_00698fa2;
L_00698f45:; BB(0x00698f45);
    /* 00698f45: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00698f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698f4b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x698f50u); f_0068d5a8();
    /* 00698f50: mov edi, eax */ r_edi = r_eax;
    /* 00698f52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698f55: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f57: je 0x698fa2 */ if (fZ) goto L_00698fa2;
L_00698f59:; BB(0x00698f59);
    /* 00698f59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f5a: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x698f5fu); f_00693468();
    /* 00698f5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f62: je 0x698fa2 */ if (fZ) goto L_00698fa2;
L_00698f64:; BB(0x00698f64);
    /* 00698f64: mov ecx, edi */ r_ecx = r_edi;
    /* 00698f66: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x698f6bu); f_0068a3fc();
    /* 00698f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f6d: je 0x698fa2 */ if (fZ) goto L_00698fa2;
L_00698f6f:; BB(0x00698f6f);
    /* 00698f6f: mov edx, dword ptr [edi + 0x328] */ r_edx = R32((u32)(r_edi+0x328u));
    /* 00698f75: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f7b: je 0x698f82 */ if (fZ) goto L_00698f82;
L_00698f7d:; BB(0x00698f7d);
    /* 00698f7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698f80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698f81: ret  */ FN_RET(0x00698f10); r_esp += 4; return;
L_00698f82:; BB(0x00698f82);
    /* 00698f82: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00698f87: mov word ptr [edi + 0x8a4], dx */ W16((u32)(r_edi+0x8a4u), (u16)r_edx);
    /* 00698f8e: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00698f93: mov dword ptr [edi + 0x3fc], edx */ W32((u32)(r_edi+0x3fcu), r_edx);
    /* 00698f99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698f9b: mov ecx, edi */ r_ecx = r_edi;
    /* 00698f9d: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x698fa2u); f_006a0eb8();
L_00698fa2:; BB(0x00698fa2);
    /* 00698fa2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00698fa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698fa6: ret  */ FN_RET(0x00698f10); r_esp += 4; return;
}

void f_00698fa8(void) /* sub_698FA8 */
{
    FN_ENTER(0x00698fa8);
    /* 00698fa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698fa9: mov esi, ecx */ r_esi = r_ecx;
    /* 00698fab: push dword ptr [esi + 0x3fc] */ { u32 v = R32((u32)(r_esi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00698fb1: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00698fb4: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x698fb9u); f_007a8cb8();
    /* 00698fb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698fbc: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00698fbf: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00698fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698fc8: je 0x69904e */ if (fZ) goto L_0069904e;
L_00698fce:; BB(0x00698fce);
    /* 00698fce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698fd1: je 0x699026 */ if (fZ) goto L_00699026;
L_00698fd3:; BB(0x00698fd3);
    /* 00698fd3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698fd6: je 0x698ff4 */ if (fZ) goto L_00698ff4;
L_00698fd8:; BB(0x00698fd8);
    /* 00698fd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00698fdb: jne 0x699007 */ if (!fZ) goto L_00699007;
L_00698fdd:; BB(0x00698fdd);
    /* 00698fdd: mov ecx, esi */ r_ecx = r_esi;
    /* 00698fdf: call 0x699058 */ r_esp -= 4; W32(r_esp, 0x698fe4u); f_00699058();
    /* 00698fe4: mov ecx, esi */ r_ecx = r_esi;
    /* 00698fe6: call 0x699384 */ r_esp -= 4; W32(r_esp, 0x698febu); f_00699384();
    /* 00698feb: mov ecx, esi */ r_ecx = r_esi;
    /* 00698fed: call 0x69941c */ r_esp -= 4; W32(r_esp, 0x698ff2u); f_0069941c();
    /* 00698ff2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698ff3: ret  */ FN_RET(0x00698fa8); r_esp += 4; return;
L_00698ff4:; BB(0x00698ff4);
    /* 00698ff4: mov edx, dword ptr [esi + 0x8bc] */ r_edx = R32((u32)(r_esi+0x8bcu));
    /* 00698ffa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698ffd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00698fff: jl 0x699009 */ if ((fS!=fO)) goto L_00699009;
L_00699001:; BB(0x00699001);
    /* 00699001: mov dword ptr [esi + 0x8bc], edx */ W32((u32)(r_esi+0x8bcu), r_edx);
L_00699007:; BB(0x00699007);
    /* 00699007: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699008: ret  */ FN_RET(0x00698fa8); r_esp += 4; return;
L_00699009:; BB(0x00699009);
    /* 00699009: mov eax, 3 */ r_eax = 0x3u;
    /* 0069900e: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00699015: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0069901b: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069901e: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 00699024: jmp 0x699001 */ goto L_00699001;
L_00699026:; BB(0x00699026);
    /* 00699026: mov ecx, esi */ r_ecx = r_esi;
    /* 00699028: call 0x7aa484 */ r_esp -= 4; W32(r_esp, 0x69902du); f_007aa484();
    /* 0069902d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069902f: je 0x699007 */ if (fZ) goto L_00699007;
L_00699031:; BB(0x00699031);
    /* 00699031: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 00699037: mov eax, 2 */ r_eax = 0x2u;
    /* 0069903c: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00699043: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699046: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069904c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069904d: ret  */ FN_RET(0x00698fa8); r_esp += 4; return;
L_0069904e:; BB(0x0069904e);
    /* 0069904e: mov ecx, esi */ r_ecx = r_esi;
    /* 00699050: call 0x6a2ad4 */ r_esp -= 4; W32(r_esp, 0x699055u); f_006a2ad4();
    /* 00699055: jmp 0x699026 */ goto L_00699026;
}

