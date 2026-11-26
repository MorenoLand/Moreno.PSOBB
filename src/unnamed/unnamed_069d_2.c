#include "protos.h"

void f_0069ded9(void)
{
    FN_ENTER(0x0069ded9);
    /* 0069ded9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dedb: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dedd: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69dee2u); f_0069c6c0();
    /* 0069dee2: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069ded9); r_esp += 4; return;
}

void f_0069dee7(void)
{
    FN_ENTER(0x0069dee7);
    /* 0069dee7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dee9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069deeb: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69def0u); f_0069c988();
    /* 0069def0: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dee7); r_esp += 4; return;
}

void f_0069def5(void)
{
    FN_ENTER(0x0069def5);
    /* 0069def5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069def7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069def9: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69defeu); f_0069cd20();
    /* 0069defe: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069def5); r_esp += 4; return;
}

void f_0069df03(void)
{
    FN_ENTER(0x0069df03);
    /* 0069df03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df05: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df07: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69df0cu); f_0069d1e4();
    /* 0069df0c: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df03); r_esp += 4; return;
}

void f_0069df11(void)
{
    FN_ENTER(0x0069df11);
    /* 0069df11: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df13: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df15: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69df1au); f_0069d43c();
    /* 0069df1a: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df11); r_esp += 4; return;
}

void f_0069df1f(void)
{
    FN_ENTER(0x0069df1f);
    /* 0069df1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df21: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df23: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69df28u); f_0069d8f4();
    /* 0069df28: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df1f); r_esp += 4; return;
}

void f_0069df2d(void)
{
    FN_ENTER(0x0069df2d);
    /* 0069df2d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df31: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69df36u); f_0069dd60();
    /* 0069df36: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df2d); r_esp += 4; return;
}

void f_0069df3b(void)
{
    FN_ENTER(0x0069df3b);
    /* 0069df3b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df3f: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69df44u); f_0069e15c();
    /* 0069df44: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df3b); r_esp += 4; return;
}

void f_0069df49(void)
{
    FN_ENTER(0x0069df49);
    /* 0069df49: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df4b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df4d: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69df52u); f_0069e718();
    /* 0069df52: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df49); r_esp += 4; return;
}

void f_0069df57(void)
{
    FN_ENTER(0x0069df57);
    /* 0069df57: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df59: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df5b: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69df60u); f_0069ebc8();
    /* 0069df60: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df57); r_esp += 4; return;
}

void f_0069df65(void)
{
    FN_ENTER(0x0069df65);
    /* 0069df65: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df67: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df69: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69df6eu); f_0069ef04();
    /* 0069df6e: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df65); r_esp += 4; return;
}

void f_0069df70(void)
{
    FN_ENTER(0x0069df70);
    /* 0069df70: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df72: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df74: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69df79u); f_0069f148();
    /* 0069df79: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df70); r_esp += 4; return;
}

void f_0069df7b(void)
{
    FN_ENTER(0x0069df7b);
    /* 0069df7b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df7d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df7f: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69df84u); f_0069f384();
    /* 0069df84: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df7b); r_esp += 4; return;
}

void f_0069df86(void)
{
    FN_ENTER(0x0069df86);
    /* 0069df86: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df88: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df8a: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69df8fu); f_0069f648();
    /* 0069df8f: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df86); r_esp += 4; return;
}

void f_0069df91(void)
{
    FN_ENTER(0x0069df91);
    /* 0069df91: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df93: mov ecx, edi */ r_ecx = r_edi;
    /* 0069df95: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69df9au); f_0069fe2c();
    /* 0069df9a: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df91); r_esp += 4; return;
}

void f_0069df9c(void)
{
    FN_ENTER(0x0069df9c);
    /* 0069df9c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069df9e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfa0: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69dfa5u); f_006a0624();
    /* 0069dfa5: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069df9c); r_esp += 4; return;
}

void f_0069dfa7(void)
{
    FN_ENTER(0x0069dfa7);
    /* 0069dfa7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfa9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfab: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69dfb0u); f_006a0994();
    /* 0069dfb0: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfa7); r_esp += 4; return;
}

void f_0069dfb2(void)
{
    FN_ENTER(0x0069dfb2);
    /* 0069dfb2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfb4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfb6: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69dfbbu); f_006a0eb8();
    /* 0069dfbb: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfb2); r_esp += 4; return;
}

void f_0069dfbd(void)
{
    FN_ENTER(0x0069dfbd);
    /* 0069dfbd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfbf: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfc1: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69dfc6u); f_006a139c();
    /* 0069dfc6: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfbd); r_esp += 4; return;
}

void f_0069dfc8(void)
{
    FN_ENTER(0x0069dfc8);
    /* 0069dfc8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfca: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfcc: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69dfd1u); f_006a1a60();
    /* 0069dfd1: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfc8); r_esp += 4; return;
}

void f_0069dfd3(void)
{
    FN_ENTER(0x0069dfd3);
    /* 0069dfd3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfd5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfd7: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69dfdcu); f_0069b93c();
    /* 0069dfdc: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfd3); r_esp += 4; return;
}

void f_0069dfde(void)
{
    FN_ENTER(0x0069dfde);
    /* 0069dfde: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dfe0: mov ecx, edi */ r_ecx = r_edi;
    /* 0069dfe2: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69dfe7u); f_006a1ac0();
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfde); r_esp += 4; return;
}

void f_0069dfe7(void)
{
    FN_ENTER(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069dfe7); r_esp += 4; return;
}

void f_0069dff4(void) /* sub_69DFF4 */
{
    FN_ENTER(0x0069dff4);
    /* 0069dff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069dff5: mov edi, ecx */ r_edi = r_ecx;
    /* 0069dff7: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069dffe: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069e001: mov dword ptr [edi + 0x348], 0x10 */ W32((u32)(r_edi+0x348u), 0x10u);
    /* 0069e00b: ja 0x69e136 */ if ((!fC&&!fZ)) goto L_0069e136;
L_0069e011:; BB(0x0069e011);
    /* 0069e011: mov eax, dword ptr [eax*4 + 0x93d000] */ r_eax = R32((u32)(r_eax*4+0x93d000u));
    /* 0069e018: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069dff4); r_esp += 4; return;
}

