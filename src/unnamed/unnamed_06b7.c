#include "protos.h"

void f_006b7014(void)
{
    FN_ENTER(0x006b7014);
    /* 006b7014: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7019: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b701e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7023: movzx ecx, word ptr [eax + ecx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_ecx*4));
    /* 006b7027: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b702a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b702b: call 0x7b4930 */ r_esp -= 4; W32(r_esp, 0x6b7030u); f_007b4930();
    /* 006b7030: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7033: ret  */ FN_RET(0x006b7014); r_esp += 4; return;
}

void f_006b7034(void)
{
    FN_ENTER(0x006b7034);
    /* 006b7034: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7039: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b703e: movzx ecx, word ptr [eax + edx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4));
    /* 006b7042: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7043: call 0x7b494c */ r_esp -= 4; W32(r_esp, 0x6b7048u); f_007b494c();
    /* 006b7048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7049: ret  */ FN_RET(0x006b7034); r_esp += 4; return;
}

void f_006b704c(void)
{
    FN_ENTER(0x006b704c);
    /* 006b704c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7051: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7056: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7058: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b705b: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7060u); f_007b35e4();
    /* 006b7060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7063: ret  */ FN_RET(0x006b704c); r_esp += 4; return;
}

void f_006b7064(void)
{
    FN_ENTER(0x006b7064);
    /* 006b7064: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7069: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b706e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7070: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7073: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7078u); f_007b35e4();
    /* 006b7078: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b707b: ret  */ FN_RET(0x006b7064); r_esp += 4; return;
}

void f_006b707c(void)
{
    FN_ENTER(0x006b707c);
    /* 006b707c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7081: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7086: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7088: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b708b: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7090u); f_007b35e4();
    /* 006b7090: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7093: ret  */ FN_RET(0x006b707c); r_esp += 4; return;
}

void f_006b7094(void)
{
    FN_ENTER(0x006b7094);
    /* 006b7094: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7099: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b709e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b70a0: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b70a3: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b70a8u); f_007b35e4();
    /* 006b70a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b70ab: ret  */ FN_RET(0x006b7094); r_esp += 4; return;
}

void f_006b70ac(void)
{
    FN_ENTER(0x006b70ac);
    /* 006b70ac: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b70b1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b70b6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b70b8: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b70bb: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b70c0u); f_007b35e4();
    /* 006b70c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b70c3: ret  */ FN_RET(0x006b70ac); r_esp += 4; return;
}

void f_006b70c4(void)
{
    FN_ENTER(0x006b70c4);
    /* 006b70c4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b70c9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b70ce: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006b70d0: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b70d3: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b70d8u); f_007b35e4();
    /* 006b70d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b70db: ret  */ FN_RET(0x006b70c4); r_esp += 4; return;
}

void f_006b70dc(void)
{
    FN_ENTER(0x006b70dc);
    /* 006b70dc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b70e1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b70e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006b70e8: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b70eb: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b70f0u); f_007b35e4();
    /* 006b70f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b70f3: ret  */ FN_RET(0x006b70dc); r_esp += 4; return;
}

void f_006b70f4(void)
{
    FN_ENTER(0x006b70f4);
    /* 006b70f4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b70f9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b70fe: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7100: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7103: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7108u); f_007b35e4();
    /* 006b7108: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b710b: ret  */ FN_RET(0x006b70f4); r_esp += 4; return;
}

void f_006b710c(void)
{
    FN_ENTER(0x006b710c);
    /* 006b710c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7111: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7116: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7118: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b711b: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7120u); f_007b35e4();
    /* 006b7120: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7123: ret  */ FN_RET(0x006b710c); r_esp += 4; return;
}

void f_006b7124(void)
{
    FN_ENTER(0x006b7124);
    /* 006b7124: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7129: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b712e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7130: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7133: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7138u); f_007b35e4();
    /* 006b7138: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b713b: ret  */ FN_RET(0x006b7124); r_esp += 4; return;
}

void f_006b713c(void)
{
    FN_ENTER(0x006b713c);
    /* 006b713c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7141: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7146: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006b7148: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b714b: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7150u); f_007b35e4();
    /* 006b7150: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7153: ret  */ FN_RET(0x006b713c); r_esp += 4; return;
}

void f_006b7154(void)
{
    FN_ENTER(0x006b7154);
    /* 006b7154: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7159: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b715e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006b7160: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7163: call 0x7b35e4 */ r_esp -= 4; W32(r_esp, 0x6b7168u); f_007b35e4();
    /* 006b7168: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b716b: ret  */ FN_RET(0x006b7154); r_esp += 4; return;
}

void f_006b716c(void)
{
    FN_ENTER(0x006b716c);
    /* 006b716c: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 006b7173: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 006b717a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b717f: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 006b7184: ret  */ FN_RET(0x006b716c); r_esp += 4; return;
}

void f_006b7188(void)
{
    FN_ENTER(0x006b7188);
    /* 006b7188: call 0x50694c */ r_esp -= 4; W32(r_esp, 0x6b718du); f_0050694c();
    /* 006b718d: ret  */ FN_RET(0x006b7188); r_esp += 4; return;
}

void f_006b7190(void)
{
    FN_ENTER(0x006b7190);
    /* 006b7190: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7195: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b719a: movzx ecx, word ptr [eax + edx*4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4));
    /* 006b719e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b719f: call 0x7188b8 */ r_esp -= 4; W32(r_esp, 0x6b71a4u); f_007188b8();
    /* 006b71a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b71a5: ret  */ FN_RET(0x006b7190); r_esp += 4; return;
}

void f_006b71a8(void) /* sub_6B71A8 */
{
    FN_ENTER(0x006b71a8);
    /* 006b71a8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b71ab: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 006b71b0: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b71b6: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b71b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b71bc: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b71bf: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b71c2: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b71c5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b71c9: lea eax, [eax + 2] */ r_eax = (u32)(r_eax+0x2u);
    /* 006b71cc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b71cf: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b71d2: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 006b71d7: movzx eax, word ptr [edx + eax*4] */ r_eax = (u32)R16((u32)(r_edx+r_eax*4));
    /* 006b71db: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b71df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b71e0: call 0x662a0c */ r_esp -= 4; W32(r_esp, 0x6b71e5u); f_00662a0c();
    /* 006b71e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b71e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b71e8: je 0x6b7200 */ if (fZ) goto L_006b7200;
L_006b71ea:; BB(0x006b71ea);
    /* 006b71ea: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b71ed: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006b71f1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006b71f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b71f7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 006b71fa: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 006b71fd: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
L_006b7200:; BB(0x006b7200);
    /* 006b7200: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7203: ret  */ FN_RET(0x006b71a8); r_esp += 4; return;
}

void f_006b7204(void) /* sub_6B7204 */
{
    FN_ENTER(0x006b7204);
    /* 006b7204: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7207: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b720d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7212: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7215: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7218: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 006b721c: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b7220: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 006b7224: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006b7228: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 006b722c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b7230: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 006b7234: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b7238: mov eax, dword ptr [eax + edx*4 + 0x14] */ r_eax = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 006b723c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b7240: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b7243: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006b7247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7249: call 0x4d8610 */ r_esp -= 4; W32(r_esp, 0x6b724eu); f_004d8610();
    /* 006b724e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7251: ret  */ FN_RET(0x006b7204); r_esp += 4; return;
}

void f_006b7254(void) /* sub_6B7254 */
{
    FN_ENTER(0x006b7254);
    /* 006b7254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7255: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7258: movzx ecx, word ptr [0xa954cc] */ r_ecx = (u32)R16((u32)(0xa954ccu));
    /* 006b725f: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b7265: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b726a: mov ebp, dword ptr [eax + edx*4] */ r_ebp = R32((u32)(r_eax+r_edx*4));
    /* 006b726d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006b7270: mov ebp, dword ptr [eax + edx*4 + 4] */ r_ebp = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 006b7274: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006b7278: mov eax, dword ptr [eax + edx*4 + 8] */ r_eax = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 006b727c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b7280: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7285: call 0x4d865c */ r_esp -= 4; W32(r_esp, 0x6b728au); f_004d865c();
    /* 006b728a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b728d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b728e: ret  */ FN_RET(0x006b7254); r_esp += 4; return;
}

void f_006b7290(void) /* sub_6B7290 */
{
    FN_ENTER(0x006b7290);
    /* 006b7290: call 0x4d869c */ r_esp -= 4; W32(r_esp, 0x6b7295u); f_004d869c();
    /* 006b7295: ret  */ FN_RET(0x006b7290); r_esp += 4; return;
}

void f_006b7298(void)
{
    FN_ENTER(0x006b7298);
    /* 006b7298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7299: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b729a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b72a0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b72a5u); f_0068d5a8();
    /* 006b72a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b72a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b72a8: je 0x6b73aa */ if (fZ) goto L_006b73aa;
L_006b72ae:; BB(0x006b72ae);
    /* 006b72ae: mov ecx, eax */ r_ecx = r_eax;
    /* 006b72b0: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6b72b5u); f_00694780();
    /* 006b72b5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006b72b8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006b72bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b72bd: mov ecx, dword ptr [edx*8 + 0xaae75c] */ r_ecx = R32((u32)(r_edx*8+0xaae75cu));
    /* 006b72c4: movzx edx, byte ptr [0xa95584] */ r_edx = (u32)R8((u32)(0xa95584u));
    /* 006b72cb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b72ce: jne 0x6b7379 */ if (!fZ) goto L_006b7379;
L_006b72d4:; BB(0x006b72d4);
    /* 006b72d4: mov ebx, dword ptr [0xa0f684] */ r_ebx = R32((u32)(0xa0f684u));
    /* 006b72da: mov edi, dword ptr [0xa0f688] */ r_edi = R32((u32)(0xa0f688u));
    /* 006b72e0: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 006b72e5: mov dword ptr [0x9ce420], ebx */ W32((u32)(0x9ce420u), r_ebx);
    /* 006b72eb: mov ebx, dword ptr [0xa0f67c] */ r_ebx = R32((u32)(0xa0f67cu));
    /* 006b72f1: mov dword ptr [0x9ce428], edi */ W32((u32)(0x9ce428u), r_edi);
    /* 006b72f7: mov edi, dword ptr [0xa0f698] */ r_edi = R32((u32)(0xa0f698u));
    /* 006b72fd: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006b7303: mov dword ptr [0x9ce430], eax */ W32((u32)(0x9ce430u), r_eax);
    /* 006b7308: mov dword ptr [0x9ce438], ebx */ W32((u32)(0x9ce438u), r_ebx);
    /* 006b730e: mov ebx, dword ptr [0xa0f680] */ r_ebx = R32((u32)(0xa0f680u));
    /* 006b7314: mov dword ptr [0x9ce440], ebx */ W32((u32)(0x9ce440u), r_ebx);
    /* 006b731a: mov ebx, dword ptr [0xa0f68c] */ r_ebx = R32((u32)(0xa0f68cu));
    /* 006b7320: mov dword ptr [0x9ce448], ebx */ W32((u32)(0x9ce448u), r_ebx);
    /* 006b7326: mov ebx, dword ptr [0xa0f670] */ r_ebx = R32((u32)(0xa0f670u));
    /* 006b732c: mov dword ptr [0x9ce450], ebx */ W32((u32)(0x9ce450u), r_ebx);
    /* 006b7332: mov ebx, dword ptr [0xa0f66c] */ r_ebx = R32((u32)(0xa0f66cu));
    /* 006b7338: mov dword ptr [0x9ce458], ebx */ W32((u32)(0x9ce458u), r_ebx);
    /* 006b733e: mov ebx, dword ptr [0xa0f668] */ r_ebx = R32((u32)(0xa0f668u));
    /* 006b7344: mov dword ptr [0x9ce460], ebx */ W32((u32)(0x9ce460u), r_ebx);
    /* 006b734a: mov ebx, dword ptr [0xa0f664] */ r_ebx = R32((u32)(0xa0f664u));
    /* 006b7350: mov dword ptr [0x9ce468], ebx */ W32((u32)(0x9ce468u), r_ebx);
    /* 006b7356: mov ebx, dword ptr [0xa0f674] */ r_ebx = R32((u32)(0xa0f674u));
    /* 006b735c: mov dword ptr [0x9ce470], edi */ W32((u32)(0x9ce470u), r_edi);
    /* 006b7362: mov dword ptr [0x9ce478], ebx */ W32((u32)(0x9ce478u), r_ebx);
    /* 006b7368: mov dword ptr [0x9ce480], eax */ W32((u32)(0x9ce480u), r_eax);
    /* 006b736d: mov dword ptr [0x9ce488], edi */ W32((u32)(0x9ce488u), r_edi);
    /* 006b7373: mov byte ptr [0xa95584], dl */ W8((u32)(0xa95584u), (u8)r_edx);
L_006b7379:; BB(0x006b7379);
    /* 006b7379: mov ebx, 0x9ce420 */ r_ebx = 0x9ce420u;
    /* 006b737e: mov edx, 0x9ce490 */ r_edx = 0x9ce490u;
    /* 006b7383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b7385: mov edi, 0x9ce420 */ r_edi = 0x9ce420u;
    /* 006b738a: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b738c: jae 0x6b739c */ if (!fC) goto L_006b739c;
L_006b738e:; BB(0x006b738e);
    /* 006b738e: test dword ptr [ebx], ecx */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7390: je 0x6b7395 */ if (fZ) goto L_006b7395;
L_006b7392:; BB(0x006b7392);
    /* 006b7392: or eax, dword ptr [ebx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006b7395:; BB(0x006b7395);
    /* 006b7395: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b7398: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b739a: jb 0x6b738e */ if (fC) goto L_006b738e;
L_006b739c:; BB(0x006b739c);
    /* 006b739c: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b73a2: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b73a7: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b73aa:; BB(0x006b73aa);
    /* 006b73aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b73ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b73ac: ret  */ FN_RET(0x006b7298); r_esp += 4; return;
}

void f_006b73b0(void)
{
    FN_ENTER(0x006b73b0);
    /* 006b73b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b73b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b73b2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b73b8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b73bdu); f_0068d5a8();
    /* 006b73bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b73be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b73c0: je 0x6b74c2 */ if (fZ) goto L_006b74c2;
L_006b73c6:; BB(0x006b73c6);
    /* 006b73c6: mov ecx, eax */ r_ecx = r_eax;
    /* 006b73c8: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6b73cdu); f_00694780();
    /* 006b73cd: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006b73d0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006b73d3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b73d5: mov ecx, dword ptr [edx*8 + 0xaae764] */ r_ecx = R32((u32)(r_edx*8+0xaae764u));
    /* 006b73dc: movzx edx, byte ptr [0xa95584] */ r_edx = (u32)R8((u32)(0xa95584u));
    /* 006b73e3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006b73e6: jne 0x6b7491 */ if (!fZ) goto L_006b7491;
L_006b73ec:; BB(0x006b73ec);
    /* 006b73ec: mov ebx, dword ptr [0xa0f684] */ r_ebx = R32((u32)(0xa0f684u));
    /* 006b73f2: mov edi, dword ptr [0xa0f688] */ r_edi = R32((u32)(0xa0f688u));
    /* 006b73f8: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 006b73fd: mov dword ptr [0x9ce420], ebx */ W32((u32)(0x9ce420u), r_ebx);
    /* 006b7403: mov ebx, dword ptr [0xa0f67c] */ r_ebx = R32((u32)(0xa0f67cu));
    /* 006b7409: mov dword ptr [0x9ce428], edi */ W32((u32)(0x9ce428u), r_edi);
    /* 006b740f: mov edi, dword ptr [0xa0f698] */ r_edi = R32((u32)(0xa0f698u));
    /* 006b7415: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006b741b: mov dword ptr [0x9ce430], eax */ W32((u32)(0x9ce430u), r_eax);
    /* 006b7420: mov dword ptr [0x9ce438], ebx */ W32((u32)(0x9ce438u), r_ebx);
    /* 006b7426: mov ebx, dword ptr [0xa0f680] */ r_ebx = R32((u32)(0xa0f680u));
    /* 006b742c: mov dword ptr [0x9ce440], ebx */ W32((u32)(0x9ce440u), r_ebx);
    /* 006b7432: mov ebx, dword ptr [0xa0f68c] */ r_ebx = R32((u32)(0xa0f68cu));
    /* 006b7438: mov dword ptr [0x9ce448], ebx */ W32((u32)(0x9ce448u), r_ebx);
    /* 006b743e: mov ebx, dword ptr [0xa0f670] */ r_ebx = R32((u32)(0xa0f670u));
    /* 006b7444: mov dword ptr [0x9ce450], ebx */ W32((u32)(0x9ce450u), r_ebx);
    /* 006b744a: mov ebx, dword ptr [0xa0f66c] */ r_ebx = R32((u32)(0xa0f66cu));
    /* 006b7450: mov dword ptr [0x9ce458], ebx */ W32((u32)(0x9ce458u), r_ebx);
    /* 006b7456: mov ebx, dword ptr [0xa0f668] */ r_ebx = R32((u32)(0xa0f668u));
    /* 006b745c: mov dword ptr [0x9ce460], ebx */ W32((u32)(0x9ce460u), r_ebx);
    /* 006b7462: mov ebx, dword ptr [0xa0f664] */ r_ebx = R32((u32)(0xa0f664u));
    /* 006b7468: mov dword ptr [0x9ce468], ebx */ W32((u32)(0x9ce468u), r_ebx);
    /* 006b746e: mov ebx, dword ptr [0xa0f674] */ r_ebx = R32((u32)(0xa0f674u));
    /* 006b7474: mov dword ptr [0x9ce470], edi */ W32((u32)(0x9ce470u), r_edi);
    /* 006b747a: mov dword ptr [0x9ce478], ebx */ W32((u32)(0x9ce478u), r_ebx);
    /* 006b7480: mov dword ptr [0x9ce480], eax */ W32((u32)(0x9ce480u), r_eax);
    /* 006b7485: mov dword ptr [0x9ce488], edi */ W32((u32)(0x9ce488u), r_edi);
    /* 006b748b: mov byte ptr [0xa95584], dl */ W8((u32)(0xa95584u), (u8)r_edx);
L_006b7491:; BB(0x006b7491);
    /* 006b7491: mov ebx, 0x9ce420 */ r_ebx = 0x9ce420u;
    /* 006b7496: mov edx, 0x9ce490 */ r_edx = 0x9ce490u;
    /* 006b749b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b749d: mov edi, 0x9ce420 */ r_edi = 0x9ce420u;
    /* 006b74a2: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b74a4: jae 0x6b74b4 */ if (!fC) goto L_006b74b4;
L_006b74a6:; BB(0x006b74a6);
    /* 006b74a6: test dword ptr [ebx], ecx */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b74a8: je 0x6b74ad */ if (fZ) goto L_006b74ad;
L_006b74aa:; BB(0x006b74aa);
    /* 006b74aa: or eax, dword ptr [ebx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006b74ad:; BB(0x006b74ad);
    /* 006b74ad: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b74b0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b74b2: jb 0x6b74a6 */ if (fC) goto L_006b74a6;
L_006b74b4:; BB(0x006b74b4);
    /* 006b74b4: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b74ba: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b74bf: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b74c2:; BB(0x006b74c2);
    /* 006b74c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b74c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b74c4: ret  */ FN_RET(0x006b73b0); r_esp += 4; return;
}

void f_006b74c8(void) /* sub_6B74C8 */
{
    FN_ENTER(0x006b74c8);
    /* 006b74c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b74c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b74ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b74cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b74cc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b74cf: mov ebx, dword ptr [0xa954cc] */ r_ebx = R32((u32)(0xa954ccu));
    /* 006b74d5: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b74db: fld dword ptr [0xa954d4] */ FPUSH(R_F32((u32)(0xa954d4u)));
    /* 006b74e1: mov ecx, dword ptr [0xa954d8] */ r_ecx = R32((u32)(0xa954d8u));
    /* 006b74e7: mov ebp, dword ptr [0xa954dc] */ r_ebp = R32((u32)(0xa954dcu));
    /* 006b74ed: movzx edi, word ptr [0xa954e0] */ r_edi = (u32)R16((u32)(0xa954e0u));
    /* 006b74f4: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b74f9: mov esi, dword ptr [0xa954a8] */ r_esi = R32((u32)(0xa954a8u));
    /* 006b74ff: add esi, dword ptr [eax + edi*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edi*4)); u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006b7502: je 0x6b759b */ if (fZ) goto L_006b759b;
L_006b7508:; BB(0x006b7508);
    /* 006b7508: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006b750a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b750c: jle 0x6b7524 */ if ((fZ||fS!=fO)) goto L_006b7524;
L_006b750e:; BB(0x006b750e);
    /* 006b750e: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7511: jl 0x6b751d */ if ((fS!=fO)) goto L_006b751d;
L_006b7513:; BB(0x006b7513);
    /* 006b7513: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_006b7516:; BB(0x006b7516);
    /* 006b7516: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b7519: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b751b: jle 0x6b7516 */ if ((fZ||fS!=fO)) goto L_006b7516;
L_006b751d:; BB(0x006b751d);
    /* 006b751d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b7520: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7522: jl 0x6b751d */ if ((fS!=fO)) goto L_006b751d;
L_006b7524:; BB(0x006b7524);
    /* 006b7524: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b7528: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b752d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b7532: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b7536: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b753a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b753e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b7542: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006b7546: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b754a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b754b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b754c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b754d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b754e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b754f: call 0x7be414 */ r_esp -= 4; W32(r_esp, 0x6b7554u); f_007be414();
    /* 006b7554: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7557: mov edi, dword ptr [0xa954b0] */ r_edi = R32((u32)(0xa954b0u));
    /* 006b755d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006b7560: mov dword ptr [edi + ebp*4], edx */ W32((u32)(r_edi+r_ebp*4), r_edx);
    /* 006b7563: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b7565: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b7567: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006b756b: mov dword ptr [edi + ebp*4 + 4], ecx */ W32((u32)(r_edi+r_ebp*4+0x4u), r_ecx);
    /* 006b756f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006b7573: mov dword ptr [edi + ebp*4 + 8], esi */ W32((u32)(r_edi+r_ebp*4+0x8u), r_esi);
    /* 006b7577: mov dword ptr [edi + ebp*4 + 0xc], eax */ W32((u32)(r_edi+r_ebp*4+0xcu), r_eax);
    /* 006b757b: jle 0x6b7593 */ if ((fZ||fS!=fO)) goto L_006b7593;
L_006b757d:; BB(0x006b757d);
    /* 006b757d: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7580: jl 0x6b758c */ if ((fS!=fO)) goto L_006b758c;
L_006b7582:; BB(0x006b7582);
    /* 006b7582: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_006b7585:; BB(0x006b7585);
    /* 006b7585: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b7588: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b758a: jle 0x6b7585 */ if ((fZ||fS!=fO)) goto L_006b7585;
L_006b758c:; BB(0x006b758c);
    /* 006b758c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b758f: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7591: jl 0x6b758c */ if ((fS!=fO)) goto L_006b758c;
L_006b7593:; BB(0x006b7593);
    /* 006b7593: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7597: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b7598: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b7599: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b759a: ret  */ FN_RET(0x006b74c8); r_esp += 4; return;
L_006b759b:; BB(0x006b759b);
    /* 006b759b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b759d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b75a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b75a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b75a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b75a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b75a4: ret  */ FN_RET(0x006b74c8); r_esp += 4; return;
}

void f_006b75a8(void) /* sub_6B75A8 */
{
    FN_ENTER(0x006b75a8);
    /* 006b75a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b75a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b75aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b75ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b75ac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b75af: mov ebx, dword ptr [0xa954cc] */ r_ebx = R32((u32)(0xa954ccu));
    /* 006b75b5: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b75bb: fld dword ptr [0xa954d4] */ FPUSH(R_F32((u32)(0xa954d4u)));
    /* 006b75c1: mov ecx, dword ptr [0xa954d8] */ r_ecx = R32((u32)(0xa954d8u));
    /* 006b75c7: mov ebp, dword ptr [0xa954dc] */ r_ebp = R32((u32)(0xa954dcu));
    /* 006b75cd: movzx edi, word ptr [0xa954e0] */ r_edi = (u32)R16((u32)(0xa954e0u));
    /* 006b75d4: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b75d9: mov esi, dword ptr [0xa954a8] */ r_esi = R32((u32)(0xa954a8u));
    /* 006b75df: add esi, dword ptr [eax + edi*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edi*4)); u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006b75e2: je 0x6b767d */ if (fZ) goto L_006b767d;
L_006b75e8:; BB(0x006b75e8);
    /* 006b75e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006b75ea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b75ec: jle 0x6b7604 */ if ((fZ||fS!=fO)) goto L_006b7604;
L_006b75ee:; BB(0x006b75ee);
    /* 006b75ee: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b75f1: jl 0x6b75fd */ if ((fS!=fO)) goto L_006b75fd;
L_006b75f3:; BB(0x006b75f3);
    /* 006b75f3: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_006b75f6:; BB(0x006b75f6);
    /* 006b75f6: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b75f9: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b75fb: jle 0x6b75f6 */ if ((fZ||fS!=fO)) goto L_006b75f6;
L_006b75fd:; BB(0x006b75fd);
    /* 006b75fd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b7600: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7602: jl 0x6b75fd */ if ((fS!=fO)) goto L_006b75fd;
L_006b7604:; BB(0x006b7604);
    /* 006b7604: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b7608: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b760d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b7612: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b7616: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b761a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b761e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b7622: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006b7626: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7629: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006b762b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b762c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b762d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b762e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b762f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7630: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7631: call 0x7be8ec */ r_esp -= 4; W32(r_esp, 0x6b7636u); f_007be8ec();
    /* 006b7636: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7639: mov edi, dword ptr [0xa954b0] */ r_edi = R32((u32)(0xa954b0u));
    /* 006b763f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006b7642: mov dword ptr [edi + ebp*4], edx */ W32((u32)(r_edi+r_ebp*4), r_edx);
    /* 006b7645: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b7647: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b7649: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006b764d: mov dword ptr [edi + ebp*4 + 4], ecx */ W32((u32)(r_edi+r_ebp*4+0x4u), r_ecx);
    /* 006b7651: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006b7655: mov dword ptr [edi + ebp*4 + 8], esi */ W32((u32)(r_edi+r_ebp*4+0x8u), r_esi);
    /* 006b7659: mov dword ptr [edi + ebp*4 + 0xc], eax */ W32((u32)(r_edi+r_ebp*4+0xcu), r_eax);
    /* 006b765d: jle 0x6b7675 */ if ((fZ||fS!=fO)) goto L_006b7675;
L_006b765f:; BB(0x006b765f);
    /* 006b765f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7662: jl 0x6b766e */ if ((fS!=fO)) goto L_006b766e;
L_006b7664:; BB(0x006b7664);
    /* 006b7664: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
L_006b7667:; BB(0x006b7667);
    /* 006b7667: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b766a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b766c: jle 0x6b7667 */ if ((fZ||fS!=fO)) goto L_006b7667;
L_006b766e:; BB(0x006b766e);
    /* 006b766e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b7671: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b7673: jl 0x6b766e */ if ((fS!=fO)) goto L_006b766e;
L_006b7675:; BB(0x006b7675);
    /* 006b7675: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7678: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7679: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b767a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b767b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b767c: ret  */ FN_RET(0x006b75a8); r_esp += 4; return;
L_006b767d:; BB(0x006b767d);
    /* 006b767d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b767f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7682: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b7684: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b7685: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7686: ret  */ FN_RET(0x006b75a8); r_esp += 4; return;
}

void f_006b7688(void) /* sub_6B7688 */
{
    FN_ENTER(0x006b7688);
    /* 006b7688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7689: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b768a: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b768f: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b7694: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006b7699: mov ebx, dword ptr [0xa954b0] */ r_ebx = R32((u32)(0xa954b0u));
    /* 006b769f: movzx edx, word ptr [ebx + edx*4] */ r_edx = (u32)R16((u32)(r_ebx+r_edx*4));
    /* 006b76a3: mov ecx, dword ptr [ebx + ecx*4] */ r_ecx = R32((u32)(r_ebx+r_ecx*4));
    /* 006b76a6: mov ebx, dword ptr [0xa954ac] */ r_ebx = R32((u32)(0xa954acu));
    /* 006b76ac: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b76af: mov ecx, dword ptr [0xa954a8] */ r_ecx = R32((u32)(0xa954a8u));
    /* 006b76b5: add ecx, dword ptr [ebx + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_eax*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b76b8: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b76bb: je 0x6b76c8 */ if (fZ) goto L_006b76c8;
L_006b76bd:; BB(0x006b76bd);
    /* 006b76bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b76be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b76bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b76c0: call 0x7b44bc */ r_esp -= 4; W32(r_esp, 0x6b76c5u); f_007b44bc();
    /* 006b76c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006b76c8:; BB(0x006b76c8);
    /* 006b76c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b76c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b76ca: ret  */ FN_RET(0x006b7688); r_esp += 4; return;
}

void f_006b76cc(void)
{
    FN_ENTER(0x006b76cc);
    /* 006b76cc: mov edx, dword ptr [0xaca360] */ r_edx = R32((u32)(0xaca360u));
    /* 006b76d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b76d4: je 0x6b76e1 */ if (fZ) goto L_006b76e1;
L_006b76d6:; BB(0x006b76d6);
    /* 006b76d6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b76da: xor eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b76dd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b76e1:; BB(0x006b76e1);
    /* 006b76e1: ret  */ FN_RET(0x006b76cc); r_esp += 4; return;
}

void f_006b76e4(void)
{
    FN_ENTER(0x006b76e4);
    /* 006b76e4: mov edx, dword ptr [0xaca360] */ r_edx = R32((u32)(0xaca360u));
    /* 006b76ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b76ec: je 0x6b76fb */ if (fZ) goto L_006b76fb;
L_006b76ee:; BB(0x006b76ee);
    /* 006b76ee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b76f2: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b76f7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b76fb:; BB(0x006b76fb);
    /* 006b76fb: ret  */ FN_RET(0x006b76e4); r_esp += 4; return;
}

void f_006b76fc(void)
{
    FN_ENTER(0x006b76fc);
    /* 006b76fc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006b7701: call 0x81804c */ r_esp -= 4; W32(r_esp, 0x6b7706u); f_0081804c();
    /* 006b7706: ret  */ FN_RET(0x006b76fc); r_esp += 4; return;
}

void f_006b7708(void)
{
    FN_ENTER(0x006b7708);
    /* 006b7708: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006b770d: call 0x817ea8 */ r_esp -= 4; W32(r_esp, 0x6b7712u); f_00817ea8();
    /* 006b7712: ret  */ FN_RET(0x006b7708); r_esp += 4; return;
}

void f_006b7714(void) /* sub_6B7714 */
{
    FN_ENTER(0x006b7714);
    /* 006b7714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7715: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7718: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b771d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7721: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b7726u); f_0080ca60();
    /* 006b7726: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b772b: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b772e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b7732: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b7735: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7738: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b773b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b773f: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b7742: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7745: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b7748: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b774c: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b774f: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7752: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b7755: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b7759: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b775c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b775f: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b7762: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 006b7765: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b7767: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b776b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b776f: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b7771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7773: call 0x661fc8 */ r_esp -= 4; W32(r_esp, 0x6b7778u); f_00661fc8();
    /* 006b7778: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b777b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b777d: je 0x6b7791 */ if (fZ) goto L_006b7791;
L_006b777f:; BB(0x006b777f);
    /* 006b777f: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7785: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 006b778a: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b778e: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b7791:; BB(0x006b7791);
    /* 006b7791: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7794: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7795: ret  */ FN_RET(0x006b7714); r_esp += 4; return;
}

void f_006b7798(void) /* sub_6B7798 */
{
    FN_ENTER(0x006b7798);
    /* 006b7798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7799: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b779c: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b77a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b77a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b77a5: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b77aau); f_0080ca60();
    /* 006b77aa: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b77af: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b77b2: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b77b6: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b77b9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b77bc: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b77bf: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b77c3: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b77c6: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b77c9: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b77cc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b77d0: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b77d3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b77d6: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b77d9: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b77dd: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b77e0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b77e3: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b77e6: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 006b77e9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b77eb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b77ef: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b77f3: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b77f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b77f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b77f7: call 0x6621b0 */ r_esp -= 4; W32(r_esp, 0x6b77fcu); f_006621b0();
    /* 006b77fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b77ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7801: je 0x6b7815 */ if (fZ) goto L_006b7815;
L_006b7803:; BB(0x006b7803);
    /* 006b7803: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7809: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 006b780e: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b7812: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b7815:; BB(0x006b7815);
    /* 006b7815: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7818: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7819: ret  */ FN_RET(0x006b7798); r_esp += 4; return;
}

void f_006b781c(void) /* sub_6B781C */
{
    FN_ENTER(0x006b781c);
    /* 006b781c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b781d: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7820: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b7825: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7829: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b782eu); f_0080ca60();
    /* 006b782e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7833: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b7836: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b783a: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b783d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7840: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b7843: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b7847: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b784a: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b784d: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b7850: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b7854: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b7857: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b785a: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b785d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b7861: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b7864: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7867: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b786a: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 006b786d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b786f: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b7873: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b7877: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b7879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b787a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b787b: call 0x662474 */ r_esp -= 4; W32(r_esp, 0x6b7880u); f_00662474();
    /* 006b7880: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7883: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7885: je 0x6b7899 */ if (fZ) goto L_006b7899;
L_006b7887:; BB(0x006b7887);
    /* 006b7887: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b788d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 006b7892: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b7896: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b7899:; BB(0x006b7899);
    /* 006b7899: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b789c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b789d: ret  */ FN_RET(0x006b781c); r_esp += 4; return;
}

void f_006b78a0(void) /* sub_6B78A0 */
{
    FN_ENTER(0x006b78a0);
    /* 006b78a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b78a1: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b78a4: movzx esi, byte ptr [esp + 0x44] */ r_esi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b78a9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b78ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b78ad: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b78b2u); f_0080ca60();
    /* 006b78b2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b78b7: fild dword ptr [eax + esi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_esi*4)));
    /* 006b78ba: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b78be: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 006b78c1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b78c4: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b78c7: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b78cb: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 006b78ce: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b78d1: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b78d4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b78d8: lea edx, [esi + 3] */ r_edx = (u32)(r_esi+0x3u);
    /* 006b78db: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b78de: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b78e1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b78e5: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 006b78e8: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b78eb: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b78ee: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b78f2: lea edx, [esi + 5] */ r_edx = (u32)(r_esi+0x5u);
    /* 006b78f5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b78f8: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b78fb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b78ff: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b7903: lea esi, [esi + esi] */ r_esi = (u32)(r_esi+r_esi);
    /* 006b7906: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b7908: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b790a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b790b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b790c: call 0x6625cc */ r_esp -= 4; W32(r_esp, 0x6b7911u); f_006625cc();
    /* 006b7911: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7916: je 0x6b792a */ if (fZ) goto L_006b792a;
L_006b7918:; BB(0x006b7918);
    /* 006b7918: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b791e: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 006b7923: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b7927: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b792a:; BB(0x006b792a);
    /* 006b792a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b792d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b792e: ret  */ FN_RET(0x006b78a0); r_esp += 4; return;
}

void f_006b7930(void) /* sub_6B7930 */
{
    FN_ENTER(0x006b7930);
    /* 006b7930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7932: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7935: movzx ebp, byte ptr [esp + 0x48] */ r_ebp = (u32)R8((u32)(r_esp+0x48u));
    /* 006b793a: movzx edi, byte ptr [esp + 0x4c] */ r_edi = (u32)R8((u32)(r_esp+0x4cu));
    /* 006b793f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b7942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7943: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b7948u); f_0080ca60();
    /* 006b7948: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b794d: fild dword ptr [eax + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebp*4)));
    /* 006b7950: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b7954: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 006b7957: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b795a: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b795d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b7961: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 006b7964: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7967: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b796a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b796e: lea edx, [ebp + 3] */ r_edx = (u32)(r_ebp+0x3u);
    /* 006b7971: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b7975: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7978: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b797b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b797f: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 006b7982: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7985: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b7988: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b798c: lea ebp, [ebp + 5] */ r_ebp = (u32)(r_ebp+0x5u);
    /* 006b798f: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b7995: fild dword ptr [eax + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebp*4)));
    /* 006b7998: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b799c: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006b799f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b79a1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b79a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b79a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b79a5: call 0x6622f4 */ r_esp -= 4; W32(r_esp, 0x6b79aau); f_006622f4();
    /* 006b79aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b79ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b79af: je 0x6b79be */ if (fZ) goto L_006b79be;
L_006b79b1:; BB(0x006b79b1);
    /* 006b79b1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b79b7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b79bb: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
L_006b79be:; BB(0x006b79be);
    /* 006b79be: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b79c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b79c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b79c3: ret  */ FN_RET(0x006b7930); r_esp += 4; return;
}

void f_006b79c4(void) /* sub_6B79C4 */
{
    FN_ENTER(0x006b79c4);
    /* 006b79c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b79c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b79c6: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b79c9: movzx edi, byte ptr [esp + 0x48] */ r_edi = (u32)R8((u32)(r_esp+0x48u));
    /* 006b79ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b79d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b79d2: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b79d7u); f_0080ca60();
    /* 006b79d7: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b79dc: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b79df: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b79e3: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 006b79e6: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b79e9: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b79ec: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b79f0: lea edx, [edi + 2] */ r_edx = (u32)(r_edi+0x2u);
    /* 006b79f3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b79f6: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b79f9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b79fd: lea ecx, [edi + 3] */ r_ecx = (u32)(r_edi+0x3u);
    /* 006b7a00: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7a03: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b7a06: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b7a0a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b7a0e: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b7a11: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7a14: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b7a17: lea ebx, [edi + 6] */ r_ebx = (u32)(r_edi+0x6u);
    /* 006b7a1a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b7a1e: lea edx, [edi + 5] */ r_edx = (u32)(r_edi+0x5u);
    /* 006b7a21: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b7a24: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b7a27: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b7a2b: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006b7a2e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b7a30: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b7a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7a34: call 0x662798 */ r_esp -= 4; W32(r_esp, 0x6b7a39u); f_00662798();
    /* 006b7a39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7a3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7a3e: je 0x6b7a81 */ if (fZ) goto L_006b7a81;
L_006b7a40:; BB(0x006b7a40);
    /* 006b7a40: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7a46: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b7a49: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b7a4c: lea ecx, [edi + 7] */ r_ecx = (u32)(r_edi+0x7u);
    /* 006b7a4f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7a52: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b7a55: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 006b7a5a: lea edi, [edi + 8] */ r_edi = (u32)(r_edi+0x8u);
    /* 006b7a5d: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b7a63: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b7a66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b7a68: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 006b7a6e: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 006b7a74: fstp dword ptr [eax + 0xc8] */ W_F32((u32)(r_eax+0xc8u), ST(0)); FPOP();
    /* 006b7a7a: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b7a7e: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b7a81:; BB(0x006b7a81);
    /* 006b7a81: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7a84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7a85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7a86: ret  */ FN_RET(0x006b79c4); r_esp += 4; return;
}

void f_006b7a88(void)
{
    FN_ENTER(0x006b7a88);
    /* 006b7a88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7a89: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7a8e: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b7a93: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7a98: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b7a9b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7a9e: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7aa1: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7aa4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7aa5: ret  */ FN_RET(0x006b7a88); r_esp += 4; return;
}

void f_006b7aa8(void) /* sub_6B7AA8 */
{
    FN_ENTER(0x006b7aa8);
    /* 006b7aa8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7aab: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b7ab0: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 006b7ab5: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b7abb: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 006b7abe: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b7ac1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b7ac5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b7aca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b7ace: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b7ad2: fistp dword ptr [ecx + edx*4] */ W32((u32)(r_ecx+r_edx*4), (u32)fx_int32(ST(0))); FPOP();
    /* 006b7ad5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b7ad8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7adb: ret  */ FN_RET(0x006b7aa8); r_esp += 4; return;
}

void f_006b7adc(void)
{
    FN_ENTER(0x006b7adc);
    /* 006b7adc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7add: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7ae2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7ae7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7aea: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7aed: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7af0: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b7af5: fadd dword ptr [eax + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx*4));
    /* 006b7af8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7afb: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7afe: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7b01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7b02: ret  */ FN_RET(0x006b7adc); r_esp += 4; return;
}

void f_006b7b04(void)
{
    FN_ENTER(0x006b7b04);
    /* 006b7b04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7b05: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7b0a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7b0f: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7b12: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7b15: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7b18: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 006b7b1c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7b1f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7b22: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7b25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7b26: ret  */ FN_RET(0x006b7b04); r_esp += 4; return;
}

void f_006b7b28(void)
{
    FN_ENTER(0x006b7b28);
    /* 006b7b28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7b29: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7b2e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7b33: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7b36: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7b39: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7b3c: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b7b41: fsub dword ptr [eax + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_ecx*4));
    /* 006b7b44: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7b47: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7b4a: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7b4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7b4e: ret  */ FN_RET(0x006b7b28); r_esp += 4; return;
}

void f_006b7b50(void)
{
    FN_ENTER(0x006b7b50);
    /* 006b7b50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7b51: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7b56: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7b5b: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7b5e: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7b61: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7b64: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 006b7b68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7b6b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7b6e: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7b72: ret  */ FN_RET(0x006b7b50); r_esp += 4; return;
}

void f_006b7b74(void)
{
    FN_ENTER(0x006b7b74);
    /* 006b7b74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7b75: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7b7a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7b7f: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7b82: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7b85: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7b88: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b7b8d: fmul dword ptr [eax + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ecx*4));
    /* 006b7b90: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7b93: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7b96: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7b99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7b9a: ret  */ FN_RET(0x006b7b74); r_esp += 4; return;
}

void f_006b7b9c(void)
{
    FN_ENTER(0x006b7b9c);
    /* 006b7b9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7b9d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7ba2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7ba7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7baa: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7bad: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7bb0: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 006b7bb4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7bb7: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7bba: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7bbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7bbe: ret  */ FN_RET(0x006b7b9c); r_esp += 4; return;
}

void f_006b7bc0(void)
{
    FN_ENTER(0x006b7bc0);
    /* 006b7bc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7bc1: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7bc6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7bcb: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7bce: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7bd1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7bd4: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006b7bd9: fdiv dword ptr [eax + ecx*4] */ ST(0) = ST(0) / R_F32((u32)(r_eax+r_ecx*4));
    /* 006b7bdc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7bdf: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7be2: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7be5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7be6: ret  */ FN_RET(0x006b7bc0); r_esp += 4; return;
}

void f_006b7be8(void)
{
    FN_ENTER(0x006b7be8);
    /* 006b7be8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7be9: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7bee: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7bf3: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b7bf6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b7bf9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006b7bfc: fdiv dword ptr [esp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xcu));
    /* 006b7c00: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7c03: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006b7c06: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b7c09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7c0a: ret  */ FN_RET(0x006b7be8); r_esp += 4; return;
}

void f_006b7c0c(void)
{
    FN_ENTER(0x006b7c0c);
    /* 006b7c0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c0e: movzx edi, byte ptr [0xa954cc] */ r_edi = (u32)R8((u32)(0xa954ccu));
    /* 006b7c15: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b7c1b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6b7c20u); f_0082dcbc();
    /* 006b7c20: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7c26: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7c29: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b7c2c: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b7c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7c30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7c31: ret  */ FN_RET(0x006b7c0c); r_esp += 4; return;
}

void f_006b7c34(void)
{
    FN_ENTER(0x006b7c34);
    /* 006b7c34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c36: movzx edi, byte ptr [0xa954cc] */ r_edi = (u32)R8((u32)(0xa954ccu));
    /* 006b7c3d: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b7c43: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6b7c48u); f_0082ddd8();
    /* 006b7c48: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7c4e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7c51: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b7c54: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006b7c57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7c59: ret  */ FN_RET(0x006b7c34); r_esp += 4; return;
}

void f_006b7c5c(void) /* sub_6B7C5C */
{
    FN_ENTER(0x006b7c5c);
    /* 006b7c5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7c5e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7c61: movzx esi, byte ptr [0xa954cc] */ r_esi = (u32)R8((u32)(0xa954ccu));
    /* 006b7c68: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b7c6e: mov ecx, edi */ r_ecx = r_edi;
    /* 006b7c70: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6b7c75u); f_0082dcbc();
    /* 006b7c75: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b7c79: mov ecx, edi */ r_ecx = r_edi;
    /* 006b7c7b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6b7c80u); f_0082ddd8();
    /* 006b7c80: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006b7c84: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006b7c86: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7c8c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b7c8f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b7c92: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 006b7c95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7c98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b7c99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7c9a: ret  */ FN_RET(0x006b7c5c); r_esp += 4; return;
}

void f_006b7c9c(void) /* sub_6B7C9C */
{
    FN_ENTER(0x006b7c9c);
    /* 006b7c9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7c9f: movzx edx, byte ptr [0xa954cc] */ r_edx = (u32)R8((u32)(0xa954ccu));
    /* 006b7ca6: fld dword ptr [0xa954d0] */ FPUSH(R_F32((u32)(0xa954d0u)));
    /* 006b7cac: fld dword ptr [0xa954d4] */ FPUSH(R_F32((u32)(0xa954d4u)));
    /* 006b7cb2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006b7cb4: fmul qword ptr [0x969900] */ ST(0) = ST(0) * R_F64((u32)(0x969900u));
    /* 006b7cba: fdiv qword ptr [0x9698f8] */ ST(0) = ST(0) / R_F64((u32)(0x9698f8u));
    /* 006b7cc0: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b7cc6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b7cc9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b7ccd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b7cd2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b7cd6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b7cda: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b7cde: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b7ce1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b7ce5: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 006b7ce8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7ceb: ret  */ FN_RET(0x006b7c9c); r_esp += 4; return;
}

void f_006b7cec(void) /* sub_6B7CEC */
{
    FN_ENTER(0x006b7cec);
    /* 006b7cec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7ced: movzx ebx, byte ptr [0xa954d0] */ r_ebx = (u32)R8((u32)(0xa954d0u));
    /* 006b7cf4: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7cfa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7cffu); f_0068d5a8();
    /* 006b7cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7d02: je 0x6b7d14 */ if (fZ) goto L_006b7d14;
L_006b7d04:; BB(0x006b7d04);
    /* 006b7d04: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7d06: call 0x691dfc */ r_esp -= 4; W32(r_esp, 0x6b7d0bu); f_00691dfc();
    /* 006b7d0b: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7d11: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
L_006b7d14:; BB(0x006b7d14);
    /* 006b7d14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7d15: ret  */ FN_RET(0x006b7cec); r_esp += 4; return;
}

void f_006b7d18(void) /* sub_6B7D18 */
{
    FN_ENTER(0x006b7d18);
    /* 006b7d18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d1b: movzx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b7d20: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7d25: movzx edx, word ptr [eax + ebx*4] */ r_edx = (u32)R16((u32)(r_eax+r_ebx*4));
    /* 006b7d29: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 006b7d2c: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7d2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d30: movzx ebp, byte ptr [eax + ecx*4] */ r_ebp = (u32)R8((u32)(r_eax+r_ecx*4));
    /* 006b7d34: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b7d37: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7d3a: movzx esi, byte ptr [eax + ecx*4] */ r_esi = (u32)R8((u32)(r_eax+r_ecx*4));
    /* 006b7d3e: lea ecx, [ebx + 3] */ r_ecx = (u32)(r_ebx+0x3u);
    /* 006b7d41: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b7d44: movzx ebx, byte ptr [eax + ecx*4] */ r_ebx = (u32)R8((u32)(r_eax+r_ecx*4));
    /* 006b7d48: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7d4du); f_0068d5a8();
    /* 006b7d4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7d4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7d50: je 0x6b7d6c */ if (fZ) goto L_006b7d6c;
L_006b7d52:; BB(0x006b7d52);
    /* 006b7d52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d55: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d59: call 0x68fb9c */ r_esp -= 4; W32(r_esp, 0x6b7d5eu); f_0068fb9c();
    /* 006b7d5e: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7d64: movzx ecx, byte ptr [esp + 0x14] */ r_ecx = (u32)R8((u32)(r_esp+0x14u));
    /* 006b7d69: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006b7d6c:; BB(0x006b7d6c);
    /* 006b7d6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b7d6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b7d6f: ret  */ FN_RET(0x006b7d18); r_esp += 4; return;
}

void f_006b7d70(void)
{
    FN_ENTER(0x006b7d70);
    /* 006b7d70: movzx edx, word ptr [0xa954cc] */ r_edx = (u32)R16((u32)(0xa954ccu));
    /* 006b7d77: movzx eax, word ptr [0xa954d0] */ r_eax = (u32)R16((u32)(0xa954d0u));
    /* 006b7d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d80: call 0x6aa01c */ r_esp -= 4; W32(r_esp, 0x6b7d85u); f_006aa01c();
    /* 006b7d85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7d88: ret  */ FN_RET(0x006b7d70); r_esp += 4; return;
}

void f_006b7d8c(void)
{
    FN_ENTER(0x006b7d8c);
    /* 006b7d8c: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7d94: call 0x6a9ee0 */ r_esp -= 4; W32(r_esp, 0x6b7d99u); f_006a9ee0();
    /* 006b7d99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7d9a: ret  */ FN_RET(0x006b7d8c); r_esp += 4; return;
}

void f_006b7d9c(void)
{
    FN_ENTER(0x006b7d9c);
    /* 006b7d9c: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7da4: call 0x6a9f90 */ r_esp -= 4; W32(r_esp, 0x6b7da9u); f_006a9f90();
    /* 006b7da9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7daa: ret  */ FN_RET(0x006b7d9c); r_esp += 4; return;
}

void f_006b7dac(void)
{
    FN_ENTER(0x006b7dac);
    /* 006b7dac: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7db4: call 0x6a9f34 */ r_esp -= 4; W32(r_esp, 0x6b7db9u); f_006a9f34();
    /* 006b7db9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7dba: ret  */ FN_RET(0x006b7dac); r_esp += 4; return;
}

void f_006b7dbc(void)
{
    FN_ENTER(0x006b7dbc);
    /* 006b7dbc: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7dc4: call 0x6a9fbc */ r_esp -= 4; W32(r_esp, 0x6b7dc9u); f_006a9fbc();
    /* 006b7dc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7dca: ret  */ FN_RET(0x006b7dbc); r_esp += 4; return;
}

void f_006b7dcc(void) /* sub_6B7DCC */
{
    FN_ENTER(0x006b7dcc);
    /* 006b7dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7dcd: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7dd4: movzx ebx, byte ptr [0xa954d0] */ r_ebx = (u32)R8((u32)(0xa954d0u));
    /* 006b7ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7ddc: call 0x6a9f60 */ r_esp -= 4; W32(r_esp, 0x6b7de1u); f_006a9f60();
    /* 006b7de1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7de7: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006b7dea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7deb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7dec: ret  */ FN_RET(0x006b7dcc); r_esp += 4; return;
}

void f_006b7df0(void) /* sub_6B7DF0 */
{
    FN_ENTER(0x006b7df0);
    /* 006b7df0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7df1: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7df8: movzx ebx, byte ptr [0xa954d4] */ r_ebx = (u32)R8((u32)(0xa954d4u));
    /* 006b7dff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e00: call 0x6a9fe8 */ r_esp -= 4; W32(r_esp, 0x6b7e05u); f_006a9fe8();
    /* 006b7e05: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b7e0b: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006b7e0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7e0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b7e10: ret  */ FN_RET(0x006b7df0); r_esp += 4; return;
}

void f_006b7e14(void)
{
    FN_ENTER(0x006b7e14);
    /* 006b7e14: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7e1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e1c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7e21u); f_0068d5a8();
    /* 006b7e21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7e22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7e24: je 0x6b7e2d */ if (fZ) goto L_006b7e2d;
L_006b7e26:; BB(0x006b7e26);
    /* 006b7e26: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7e28: call 0x691e10 */ r_esp -= 4; W32(r_esp, 0x6b7e2du); f_00691e10();
L_006b7e2d:; BB(0x006b7e2d);
    /* 006b7e2d: ret  */ FN_RET(0x006b7e14); r_esp += 4; return;
}

void f_006b7e30(void)
{
    FN_ENTER(0x006b7e30);
    /* 006b7e30: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b7e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e38: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7e3du); f_0068d5a8();
    /* 006b7e3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7e40: je 0x6b7e49 */ if (fZ) goto L_006b7e49;
L_006b7e42:; BB(0x006b7e42);
    /* 006b7e42: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7e44: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x6b7e49u); f_00691e2c();
L_006b7e49:; BB(0x006b7e49);
    /* 006b7e49: ret  */ FN_RET(0x006b7e30); r_esp += 4; return;
}

void f_006b7e4c(void)
{
    FN_ENTER(0x006b7e4c);
    /* 006b7e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 006b7e4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e51: push 0x8ebf48 */ { u32 v = 0x8ebf48u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b7e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b7e64: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7e67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b7e6a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006b7e6d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006b7e70: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006b7e73: fild dword ptr [0xa954d0] */ FPUSH((long double)(i32)R32((u32)(0xa954d0u)));
    /* 006b7e79: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b7e7e: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006b7e81: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006b7e88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b7e8b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7e8d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b7e92u); f_005caba4();
    /* 006b7e92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7e93: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006b7e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7e98: je 0x6b7ed2 */ if (fZ) goto L_006b7ed2;
L_006b7e9a:; BB(0x006b7e9a);
    /* 006b7e9a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006b7ea1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b7ea8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b7eab: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006b7eae: mov edx, dword ptr [0xaca374] */ r_edx = R32((u32)(0xaca374u));
    /* 006b7eb4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b7eb7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7eba: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b7ebe: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 006b7ec2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b7ec6: call 0x66edf4 */ r_esp -= 4; W32(r_esp, 0x6b7ecbu); f_0066edf4();
    /* 006b7ecb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006b7ed2:; BB(0x006b7ed2);
    /* 006b7ed2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b7ed5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b7edc: mov esp, ebp */ r_esp = r_ebp;
    /* 006b7ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b7edf: ret  */ FN_RET(0x006b7e4c); r_esp += 4; return;
}

void f_006b7ee0(void)
{
    FN_ENTER(0x006b7ee0);
    /* 006b7ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7ee1: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b7ee7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7eed: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7ef2u); f_0068d5a8();
    /* 006b7ef2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7ef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b7ef5: je 0x6b7f01 */ if (fZ) goto L_006b7f01;
L_006b7ef7:; BB(0x006b7ef7);
    /* 006b7ef7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7ef9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b7efa: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7efc: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6b7f01u); f_0068ee54();
L_006b7f01:; BB(0x006b7f01);
    /* 006b7f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b7f02: ret  */ FN_RET(0x006b7ee0); r_esp += 4; return;
}

void f_006b7f04(void) /* sub_6B7F04 */
{
    FN_ENTER(0x006b7f04);
    /* 006b7f04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7f05: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7f08: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b7f0e: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7f14: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6b7f19u); f_005c5528();
    /* 006b7f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7f1c: je 0x6b7fa1 */ if (fZ) goto L_006b7fa1;
L_006b7f22:; BB(0x006b7f22);
    /* 006b7f22: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b7f25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7f26: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7f28: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b7f2du); f_005c425c();
    /* 006b7f2d: movzx edx, byte ptr [esp] */ r_edx = (u32)R8((u32)(r_esp));
    /* 006b7f31: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7f36: mov dword ptr [eax + edi*4], edx */ W32((u32)(r_eax+r_edi*4), r_edx);
    /* 006b7f39: movzx ecx, byte ptr [esp + 1] */ r_ecx = (u32)R8((u32)(r_esp+0x1u));
    /* 006b7f3e: mov dword ptr [eax + edi*4 + 4], ecx */ W32((u32)(r_eax+r_edi*4+0x4u), r_ecx);
    /* 006b7f42: movzx edx, byte ptr [esp + 2] */ r_edx = (u32)R8((u32)(r_esp+0x2u));
    /* 006b7f47: mov dword ptr [eax + edi*4 + 8], edx */ W32((u32)(r_eax+r_edi*4+0x8u), r_edx);
    /* 006b7f4b: movzx edx, byte ptr [esp + 3] */ r_edx = (u32)R8((u32)(r_esp+0x3u));
    /* 006b7f50: mov dword ptr [eax + edi*4 + 0xc], edx */ W32((u32)(r_eax+r_edi*4+0xcu), r_edx);
    /* 006b7f54: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b7f59: mov dword ptr [eax + edi*4 + 0x10], edx */ W32((u32)(r_eax+r_edi*4+0x10u), r_edx);
    /* 006b7f5d: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 006b7f62: mov dword ptr [eax + edi*4 + 0x14], edx */ W32((u32)(r_eax+r_edi*4+0x14u), r_edx);
    /* 006b7f66: movzx edx, byte ptr [esp + 6] */ r_edx = (u32)R8((u32)(r_esp+0x6u));
    /* 006b7f6b: mov dword ptr [eax + edi*4 + 0x18], edx */ W32((u32)(r_eax+r_edi*4+0x18u), r_edx);
    /* 006b7f6f: movsx edx, byte ptr [esp + 7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 006b7f74: mov dword ptr [eax + edi*4 + 0x1c], edx */ W32((u32)(r_eax+r_edi*4+0x1cu), r_edx);
    /* 006b7f78: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b7f7d: mov dword ptr [eax + edi*4 + 0x20], edx */ W32((u32)(r_eax+r_edi*4+0x20u), r_edx);
    /* 006b7f81: movsx edx, byte ptr [esp + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x9u));
    /* 006b7f86: mov dword ptr [eax + edi*4 + 0x24], edx */ W32((u32)(r_eax+r_edi*4+0x24u), r_edx);
    /* 006b7f8a: movzx edx, byte ptr [esp + 0xa] */ r_edx = (u32)R8((u32)(r_esp+0xau));
    /* 006b7f8f: mov dword ptr [eax + edi*4 + 0x28], edx */ W32((u32)(r_eax+r_edi*4+0x28u), r_edx);
    /* 006b7f93: movsx edx, byte ptr [esp + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0xbu));
    /* 006b7f98: mov dword ptr [eax + edi*4 + 0x2c], edx */ W32((u32)(r_eax+r_edi*4+0x2cu), r_edx);
    /* 006b7f9c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7f9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7fa0: ret  */ FN_RET(0x006b7f04); r_esp += 4; return;
L_006b7fa1:; BB(0x006b7fa1);
    /* 006b7fa1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b7fa6: mov dword ptr [eax + edi*4], 0xffffffff */ W32((u32)(r_eax+r_edi*4), 0xffffffffu);
    /* 006b7fad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b7fb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b7fb1: ret  */ FN_RET(0x006b7f04); r_esp += 4; return;
}

void f_006b7fb4(void) /* sub_6B7FB4 */
{
    FN_ENTER(0x006b7fb4);
    /* 006b7fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fb6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b7fb9: mov edi, dword ptr [0xa954cc] */ r_edi = R32((u32)(0xa954ccu));
    /* 006b7fbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fc0: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6b7fc5u); f_005c5528();
    /* 006b7fc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b7fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7fc8: je 0x6b8015 */ if (fZ) goto L_006b8015;
L_006b7fca:; BB(0x006b7fca);
    /* 006b7fca: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b7fcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fce: mov ecx, eax */ r_ecx = r_eax;
    /* 006b7fd0: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b7fd5u); f_005c425c();
    /* 006b7fd5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b7fdb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b7fe0u); f_0068d5a8();
    /* 006b7fe0: mov ebx, eax */ r_ebx = r_eax;
    /* 006b7fe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b7fe5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b7fe7: je 0x6b8015 */ if (fZ) goto L_006b8015;
L_006b7fe9:; BB(0x006b7fe9);
    /* 006b7fe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b7feb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b7fee: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6b7ff3u); f_0068ee54();
    /* 006b7ff3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b7ff6: call 0x5d2a5c */ r_esp -= 4; W32(r_esp, 0x6b7ffbu); f_005d2a5c();
    /* 006b7ffb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b7ffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b7fff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b8001: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6b8006u); f_0068ec44();
    /* 006b8006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b8008: jle 0x6b8015 */ if ((fZ||fS!=fO)) goto L_006b8015;
L_006b800a:; BB(0x006b800a);
    /* 006b800a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b800d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b800e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b8010: call 0x68f3cc */ r_esp -= 4; W32(r_esp, 0x6b8015u); f_0068f3cc();
L_006b8015:; BB(0x006b8015);
    /* 006b8015: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b8018: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b8019: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b801a: ret  */ FN_RET(0x006b7fb4); r_esp += 4; return;
}

