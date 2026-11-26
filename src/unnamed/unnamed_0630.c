#include "protos.h"

void f_00630000(void)
{
    FN_ENTER(0x00630000);
    /* 00630000: les edx, ptr [eax] */ UNSUP(0x00630000, "les edx, ptr [eax]");
    /* 00630002: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630003: ret  */ FN_RET(0x00630000); r_esp += 4; return;
}

void f_00630020(void)
{
    FN_ENTER(0x00630020);
    /* 00630020: lea eax, [eax] */ r_eax = (u32)(r_eax);
    /* 00630022: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00630024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630025: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63002au); f_0050b510();
    /* 0063002a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063002d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063002e: ret  */ FN_RET(0x00630020); r_esp += 4; return;
}

void f_00630025(void)
{
    FN_ENTER(0x00630025);
    /* 00630025: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63002au); f_0050b510();
    /* 0063002a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063002d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063002e: ret  */ FN_RET(0x00630025); r_esp += 4; return;
}

void f_00630054(void) /* sub_630054 */
{
    FN_ENTER(0x00630054);
    /* 00630054: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630055: mov edi, ecx */ r_edi = r_ecx;
    /* 00630057: mov eax, 3 */ r_eax = 0x3u;
    /* 0063005c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00630063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630054); r_esp += 4; return;
}

void f_0063005f(void)
{
    FN_ENTER(0x0063005f);
    /* 0063005f: add eax, dword ptr cs:[eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630062: add byte ptr [edx + 1], ch */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00630065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x0063005f); r_esp += 4; return;
}

void f_00630061(void)
{
    FN_ENTER(0x00630061);
    /* 00630061: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00630063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630061); r_esp += 4; return;
}

void f_00630062(void)
{
    FN_ENTER(0x00630062);
    /* 00630062: add byte ptr [edx + 1], ch */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00630065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630062); r_esp += 4; return;
}

void f_00630064(void)
{
    FN_ENTER(0x00630064);
    /* 00630064: add dword ptr [edx], ebp */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630064); r_esp += 4; return;
}

void f_00630065(void)
{
    FN_ENTER(0x00630065);
    /* 00630065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630067: mov ecx, edi */ r_ecx = r_edi;
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630065); r_esp += 4; return;
}

void f_00630066(void)
{
    FN_ENTER(0x00630066);
    /* 00630066: add byte ptr [ebx + 0x5256e8cf], cl */ { u32 ad = (u32)(r_ebx+0x5256e8cfu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0063006c: sbb byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630066); r_esp += 4; return;
}

void f_00630069(void)
{
    FN_ENTER(0x00630069);
    /* 00630069: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63006eu); f_007b52c4();
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x00630069); r_esp += 4; return;
}

void f_0063006e(void)
{
    FN_ENTER(0x0063006e);
    /* 0063006e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630071: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x0063006e); r_esp += 4; return;
}

void f_0063006f(void)
{
    FN_ENTER(0x0063006f);
    /* 0063006f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00630070: xor byte ptr [0xfffbffff], ah */ { u32 ad = (u32)(0xfffbffffu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a ^ b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630076: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00630079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063007a: ret  */ FN_RET(0x0063006f); r_esp += 4; return;
}

void f_00630073(void)
{
    FN_ENTER(0x00630073);
}

void f_0063007a(void)
{
    FN_ENTER(0x0063007a);
    /* 0063007a: ret  */ FN_RET(0x0063007a); r_esp += 4; return;
}

void f_0063007c(void) /* sub_63007C */
{
    FN_ENTER(0x0063007c);
    /* 0063007c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063007d: mov edi, ecx */ r_edi = r_ecx;
    /* 0063007f: mov eax, 2 */ r_eax = 0x2u;
    /* 00630084: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063008b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063008d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063008f: mov ecx, edi */ r_ecx = r_edi;
    /* 00630091: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x630096u); f_007b52c4();
    /* 00630096: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00630099: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063009e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006300a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006300a2: ret  */ FN_RET(0x0063007c); r_esp += 4; return;
}

void f_006300a4(void) /* sub_6300A4 */
{
    FN_ENTER(0x006300a4);
    /* 006300a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006300a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006300a9: push 0x8e36c8 */ { u32 v = 0x8e36c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006300ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006300b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006300bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006300bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006300c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006300c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006300c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006300cb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006300d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006300d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6300dcu); f_008581c5();
    /* 006300dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006300dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006300e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006300e2: je 0x630123 */ if (fZ) goto L_00630123;
L_006300e4:; BB(0x006300e4);
    /* 006300e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006300eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006300f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006300f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006300f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300fa: push 0x9c6048 */ { u32 v = 0x9c6048u; r_esp -= 4; W32(r_esp, v); }
    /* 006300ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630101: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x630106u); f_005b7a84();
    /* 00630106: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630109: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00630110:; BB(0x00630110);
    /* 00630110: mov dword ptr [0xa8ef98], eax */ W32((u32)(0xa8ef98u), r_eax);
    /* 00630115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00630121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630122: ret  */ FN_RET(0x006300a4); r_esp += 4; return;
L_00630123:; BB(0x00630123);
    /* 00630123: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630125: jmp 0x630110 */ goto L_00630110;
}

void f_00630128(void) /* sub_630128 */
{
    FN_ENTER(0x00630128);
    /* 00630128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630129: mov ebp, esp */ r_ebp = r_esp;
    /* 0063012b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063012d: push 0x8e36f0 */ { u32 v = 0x8e36f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630132: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630139: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630140: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630143: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630146: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00630149: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0063014c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0063014f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00630152: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00630159: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0063015e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x630163u); f_005caba4();
    /* 00630163: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00630166: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630169: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063016c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063016e: je 0x6301e1 */ if (fZ) goto L_006301e1;
L_00630170:; BB(0x00630170);
    /* 00630170: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00630177: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063017e: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00630185: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630188: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063018b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063018c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063018d: call 0x62ee14 */ r_esp -= 4; W32(r_esp, 0x630192u); f_0062ee14();
    /* 00630192: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00630199:; BB(0x00630199);
    /* 00630199: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063019c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063019e: je 0x6301ca */ if (fZ) goto L_006301ca;
L_006301a0:; BB(0x006301a0);
    /* 006301a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006301a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006301a6: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006301a9: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006301ac: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 006301af: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 006301b2: mov esi, dword ptr [eax + 0x58] */ r_esi = R32((u32)(r_eax+0x58u));
    /* 006301b5: mov dword ptr [edx + 0x58], esi */ W32((u32)(r_edx+0x58u), r_esi);
    /* 006301b8: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 006301bb: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 006301be: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006301c1: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006301c4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006301c7: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
L_006301ca:; BB(0x006301ca);
    /* 006301ca: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006301cd: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006301d0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006301d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006301d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006301dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006301df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006301e0: ret  */ FN_RET(0x00630128); r_esp += 4; return;
L_006301e1:; BB(0x006301e1);
    /* 006301e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006301e3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006301e6: jmp 0x630199 */ goto L_00630199;
}

void f_006301e8(void) /* sub_6301E8 */
{
    FN_ENTER(0x006301e8);
    /* 006301e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006301e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006301eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006301ed: call 0x62f050 */ r_esp -= 4; W32(r_esp, 0x6301f2u); f_0062f050();
    /* 006301f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006301f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006301f8: jne 0x6301fe */ if (!fZ) goto L_006301fe;
L_006301fa:; BB(0x006301fa);
    /* 006301fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006301fb: ret 4 */ FN_RET(0x006301e8); r_esp += 8; return;
L_006301fe:; BB(0x006301fe);
    /* 006301fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006301ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x630204u); f_005c2f74();
    /* 00630204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630205: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630206: ret 4 */ FN_RET(0x006301e8); r_esp += 8; return;
}

void f_0063020c(void) /* sub_63020C */
{
    FN_ENTER(0x0063020c);
    /* 0063020c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063020d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063020f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00630211: call 0x62f950 */ r_esp -= 4; W32(r_esp, 0x630216u); f_0062f950();
    /* 00630216: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063021a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063021c: jne 0x630222 */ if (!fZ) goto L_00630222;
L_0063021e:; BB(0x0063021e);
    /* 0063021e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063021f: ret 4 */ FN_RET(0x0063020c); r_esp += 8; return;
L_00630222:; BB(0x00630222);
    /* 00630222: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630223: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x630228u); f_005c2f74();
    /* 00630228: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063022a: ret 4 */ FN_RET(0x0063020c); r_esp += 8; return;
}

void f_00630230(void) /* sub_630230 */
{
    FN_ENTER(0x00630230);
    /* 00630230: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630231: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00630233: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00630235: call 0x630254 */ r_esp -= 4; W32(r_esp, 0x63023au); f_00630254();
    /* 0063023a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063023e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630240: jne 0x630246 */ if (!fZ) goto L_00630246;
L_00630242:; BB(0x00630242);
    /* 00630242: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630243: ret 4 */ FN_RET(0x00630230); r_esp += 8; return;
L_00630246:; BB(0x00630246);
    /* 00630246: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630247: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63024cu); f_005c2f74();
    /* 0063024c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063024d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063024e: ret 4 */ FN_RET(0x00630230); r_esp += 8; return;
}

void f_00630254(void) /* sub_630254 */
{
    FN_ENTER(0x00630254);
    /* 00630254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630255: mov ebp, esp */ r_ebp = r_esp;
    /* 00630257: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630259: push 0x8e370c */ { u32 v = 0x8e370cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063025e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630265: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063026c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063026f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630272: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00630275: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00630278: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063027b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063027e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630285: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630288: mov dword ptr [eax], 0xb2a820 */ W32((u32)(r_eax), 0xb2a820u);
    /* 0063028e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063028f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x630294u); f_007b4e84();
    /* 00630294: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630295: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630298: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63029du); f_007b9c8c();
    /* 0063029d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006302a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006302a7: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x6302acu); f_0062ee7c();
    /* 006302ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006302af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006302b6: mov esp, ebp */ r_esp = r_ebp;
    /* 006302b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006302b9: ret  */ FN_RET(0x00630254); r_esp += 4; return;
}

void f_006302bc(void)
{
    FN_ENTER(0x006302bc);
    /* 006302bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006302bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006302bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006302c1: push 0x8e3734 */ { u32 v = 0x8e3734u; r_esp -= 4; W32(r_esp, v); }
    /* 006302c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006302cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006302cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006302d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006302d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006302da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006302dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006302e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006302e3: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 006302e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006302ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6302f4u); f_005caba4();
    /* 006302f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006302f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006302f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302fa: je 0x630333 */ if (fZ) goto L_00630333;
L_006302fc:; BB(0x006302fc);
    /* 006302fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00630303: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063030a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063030d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630313: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630316: call 0x630338 */ r_esp -= 4; W32(r_esp, 0x63031bu); f_00630338();
    /* 0063031b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063031e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00630325:; BB(0x00630325);
    /* 00630325: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630328: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063032f: mov esp, ebp */ r_esp = r_ebp;
    /* 00630331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630332: ret  */ FN_RET(0x006302bc); r_esp += 4; return;
L_00630333:; BB(0x00630333);
    /* 00630333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630335: jmp 0x630325 */ goto L_00630325;
}

void f_00630338(void) /* sub_630338 */
{
    FN_ENTER(0x00630338);
    /* 00630338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630339: mov ebp, esp */ r_ebp = r_esp;
    /* 0063033b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063033d: push 0x8e3750 */ { u32 v = 0x8e3750u; r_esp -= 4; W32(r_esp, v); }
    /* 00630342: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630349: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630350: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630353: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630356: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00630359: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063035c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063035f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00630362: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630365: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00630368: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063036b: call 0x62ed74 */ r_esp -= 4; W32(r_esp, 0x630370u); f_0062ed74();
    /* 00630370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630377: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063037a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063037d: mov dword ptr [ecx], 0xb2a820 */ W32((u32)(r_ecx), 0xb2a820u);
    /* 00630383: mov eax, dword ptr [0x9c6098] */ r_eax = R32((u32)(0x9c6098u));
    /* 00630388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630389: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063038c: call dword ptr [0xb2a834] */ { u32 t = R32((u32)(0xb2a834u)); r_esp -= 4; W32(r_esp, 0x630392u); call_ind(t); }
    /* 00630392: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630395: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00630398: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0063039b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0063039e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006303a4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006303aa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006303ad: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006303b3: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 006303b9: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 006303bf: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006303c5: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006303cb: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006303d1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006303d4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006303da: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006303dd: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006303e3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006303e6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006303ec: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006303ef: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006303f5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006303f8: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x6303fdu); f_0077a1f4();
    /* 006303fd: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630403: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630405: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63040au); f_005b8610();
    /* 0063040a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063040d: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630413: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630415: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00630418: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63041du); f_005b8624();
    /* 0063041d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630420: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630426: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630428: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0063042b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630430u); f_005b8610();
    /* 00630430: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630433: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630439: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063043b: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 00630441: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630446u); f_005b8624();
    /* 00630446: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630449: fld dword ptr [0x932d18] */ FPUSH(R_F32((u32)(0x932d18u)));
    /* 0063044f: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00630455: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0063045b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063045d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00630464: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0063046a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0063046c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063046e: mov esi, 5 */ r_esi = 0x5u;
    /* 00630473: mov edi, 0 */ r_edi = 0x0u;
    /* 00630478: jg 0x63047c */ if ((!fZ&&fS==fO)) goto L_0063047c;
L_0063047a:; BB(0x0063047a);
    /* 0063047a: mov edx, ebx */ r_edx = r_ebx;
L_0063047c:; BB(0x0063047c);
    /* 0063047c: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 00630482: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00630485: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00630488: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063048b: jl 0x63048f */ if ((fS!=fO)) goto L_0063048f;
L_0063048d:; BB(0x0063048d);
    /* 0063048d: mov eax, esi */ r_eax = r_esi;
L_0063048f:; BB(0x0063048f);
    /* 0063048f: mov esi, dword ptr [ecx + 0x8c] */ r_esi = R32((u32)(r_ecx+0x8cu));
    /* 00630495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630497: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0063049c: jg 0x6304a0 */ if ((!fZ&&fS==fO)) goto L_006304a0;
L_0063049e:; BB(0x0063049e);
    /* 0063049e: mov eax, edi */ r_eax = r_edi;
L_006304a0:; BB(0x006304a0);
    /* 006304a0: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 006304a6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006304a8: jg 0x6304ac */ if ((!fZ&&fS==fO)) goto L_006304ac;
L_006304aa:; BB(0x006304aa);
    /* 006304aa: mov esi, ebx */ r_esi = r_ebx;
L_006304ac:; BB(0x006304ac);
    /* 006304ac: mov dword ptr [ecx + 0x8c], esi */ W32((u32)(r_ecx+0x8cu), r_esi);
    /* 006304b2: fild dword ptr [0xa9cd68] */ FPUSH((long double)(i32)R32((u32)(0xa9cd68u)));
    /* 006304b8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 006304ba: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006304bc: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 006304c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006304c4: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304c7: je 0x630560 */ if (fZ) goto L_00630560;
L_006304cd:; BB(0x006304cd);
    /* 006304cd: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
L_006304d3:; BB(0x006304d3);
    /* 006304d3: fld dword ptr [0x932d10] */ FPUSH(R_F32((u32)(0x932d10u)));
    /* 006304d9: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 006304dc: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 006304df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006304e1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006304e3: fadd dword ptr [0x932d0c] */ ST(0) = ST(0) + R_F32((u32)(0x932d0cu));
    /* 006304e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006304eb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006304ed: fadd dword ptr [0x932d08] */ ST(0) = ST(0) + R_F32((u32)(0x932d08u));
    /* 006304f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006304f5: fstp dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0)); FPOP();
    /* 006304fb: fstp dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0)); FPOP();
    /* 00630501: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 00630507: call 0x62df24 */ r_esp -= 4; W32(r_esp, 0x63050cu); f_0062df24();
    /* 0063050c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063050f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00630514: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00630517: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 0063051e: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00630524: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630526: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00630529: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 0063052e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x630533u); f_007b9a88();
    /* 00630533: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630536: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63053bu); f_007b999c();
    /* 0063053b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063053c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063053f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x630544u); f_007b4f54();
    /* 00630544: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630547: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063054a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063054d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00630550: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630553: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063055a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063055c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063055d: ret 8 */ FN_RET(0x00630338); r_esp += 12; return;
L_00630560:; BB(0x00630560);
    /* 00630560: fld dword ptr [0x932d14] */ FPUSH(R_F32((u32)(0x932d14u)));
    /* 00630566: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630568: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 0063056e: jmp 0x6304d3 */ goto L_006304d3;
}

void f_00630574(void) /* sub_630574 */
{
    FN_ENTER(0x00630574);
    /* 00630574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630575: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00630577: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00630579: call 0x630598 */ r_esp -= 4; W32(r_esp, 0x63057eu); f_00630598();
    /* 0063057e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00630582: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630584: jne 0x63058a */ if (!fZ) goto L_0063058a;
L_00630586:; BB(0x00630586);
    /* 00630586: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630587: ret 4 */ FN_RET(0x00630574); r_esp += 8; return;
L_0063058a:; BB(0x0063058a);
    /* 0063058a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063058b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x630590u); f_005c2f74();
    /* 00630590: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630591: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630592: ret 4 */ FN_RET(0x00630574); r_esp += 8; return;
}

void f_00630598(void) /* sub_630598 */
{
    FN_ENTER(0x00630598);
    /* 00630598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630599: mov ebp, esp */ r_ebp = r_esp;
    /* 0063059b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063059d: push 0x8e376c */ { u32 v = 0x8e376cu; r_esp -= 4; W32(r_esp, v); }
    /* 006305a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006305a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006305a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006305b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006305b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006305b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006305b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006305bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006305bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006305c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006305c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006305cc: mov dword ptr [eax], 0xb2aa20 */ W32((u32)(r_eax), 0xb2aa20u);
    /* 006305d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006305d3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6305d8u); f_007b4e84();
    /* 006305d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006305d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006305dc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6305e1u); f_007b9c8c();
    /* 006305e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006305e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006305eb: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x6305f0u); f_0062ee7c();
    /* 006305f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006305f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006305fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006305fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006305fd: ret  */ FN_RET(0x00630598); r_esp += 4; return;
}

void f_00630600(void) /* sub_630600 */
{
    FN_ENTER(0x00630600);
    /* 00630600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630601: mov esi, ecx */ r_esi = r_ecx;
    /* 00630603: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630609: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063060e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063060f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x630614u); f_0050b510();
    /* 00630614: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 00630619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063061a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63061fu); f_0050b510();
    /* 0063061f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630622: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630623: ret  */ FN_RET(0x00630600); r_esp += 4; return;
}

void f_00630624(void)
{
    FN_ENTER(0x00630624);
    /* 00630624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630625: mov ebp, esp */ r_ebp = r_esp;
    /* 00630627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630629: push 0x8e3794 */ { u32 v = 0x8e3794u; r_esp -= 4; W32(r_esp, v); }
    /* 0063062e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063063c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063063f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00630645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00630648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063064b: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 00630650: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00630657: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63065cu); f_005caba4();
    /* 0063065c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063065d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00630660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630662: je 0x63069b */ if (fZ) goto L_0063069b;
L_00630664:; BB(0x00630664);
    /* 00630664: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063066b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630672: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630675: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063067b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063067e: call 0x6306a0 */ r_esp -= 4; W32(r_esp, 0x630683u); f_006306a0();
    /* 00630683: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630686: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063068d:; BB(0x0063068d);
    /* 0063068d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630697: mov esp, ebp */ r_esp = r_ebp;
    /* 00630699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063069a: ret  */ FN_RET(0x00630624); r_esp += 4; return;
L_0063069b:; BB(0x0063069b);
    /* 0063069b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063069d: jmp 0x63068d */ goto L_0063068d;
}

void f_006306a0(void) /* sub_6306A0 */
{
    FN_ENTER(0x006306a0);
    /* 006306a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006306a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006306a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006306a5: push 0x8e37b0 */ { u32 v = 0x8e37b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006306aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006306b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006306b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006306b8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006306bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006306be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006306c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006306c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006306c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006306ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006306cd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006306d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006306d3: call 0x62ed74 */ r_esp -= 4; W32(r_esp, 0x6306d8u); f_0062ed74();
    /* 006306d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006306df: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006306e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006306e5: mov dword ptr [ecx], 0xb2aa20 */ W32((u32)(r_ecx), 0xb2aa20u);
    /* 006306eb: mov eax, dword ptr [0x9c609c] */ r_eax = R32((u32)(0x9c609cu));
    /* 006306f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006306f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006306f4: call dword ptr [0xb2aa34] */ { u32 t = R32((u32)(0xb2aa34u)); r_esp -= 4; W32(r_esp, 0x6306fau); call_ind(t); }
    /* 006306fa: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006306fd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00630700: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00630703: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00630706: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0063070c: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00630712: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630715: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0063071b: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00630721: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00630727: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0063072d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00630733: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00630739: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063073c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00630742: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630745: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0063074b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0063074e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00630754: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00630757: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0063075d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00630760: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x630765u); f_0077a1f4();
    /* 00630765: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0063076b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063076d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630772u); f_005b8610();
    /* 00630772: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630775: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0063077b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063077d: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00630780: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630785u); f_005b8624();
    /* 00630785: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630788: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0063078e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00630790: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00630793: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630798u); f_005b8610();
    /* 00630798: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063079b: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 006307a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006307a3: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 006307a9: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6307aeu); f_005b8624();
    /* 006307ae: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006307b1: fld dword ptr [0x932d2c] */ FPUSH(R_F32((u32)(0x932d2cu)));
    /* 006307b7: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 006307bd: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 006307c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006307c5: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 006307cc: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006307d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006307d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006307d6: mov esi, 0x12 */ r_esi = 0x12u;
    /* 006307db: mov edi, 0xf */ r_edi = 0xfu;
    /* 006307e0: jg 0x6307e4 */ if ((!fZ&&fS==fO)) goto L_006307e4;
L_006307e2:; BB(0x006307e2);
    /* 006307e2: mov edx, ebx */ r_edx = r_ebx;
L_006307e4:; BB(0x006307e4);
    /* 006307e4: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 006307ea: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006307ed: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 006307f0: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006307f3: jl 0x6307f7 */ if ((fS!=fO)) goto L_006307f7;
L_006307f5:; BB(0x006307f5);
    /* 006307f5: mov eax, esi */ r_eax = r_esi;
L_006307f7:; BB(0x006307f7);
    /* 006307f7: mov esi, dword ptr [ecx + 0x8c] */ r_esi = R32((u32)(r_ecx+0x8cu));
    /* 006307fd: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630800: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00630805: jg 0x630809 */ if ((!fZ&&fS==fO)) goto L_00630809;
L_00630807:; BB(0x00630807);
    /* 00630807: mov eax, edi */ r_eax = r_edi;
L_00630809:; BB(0x00630809);
    /* 00630809: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 0063080f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630811: jg 0x630815 */ if ((!fZ&&fS==fO)) goto L_00630815;
L_00630813:; BB(0x00630813);
    /* 00630813: mov esi, ebx */ r_esi = r_ebx;
L_00630815:; BB(0x00630815);
    /* 00630815: mov dword ptr [ecx + 0x8c], esi */ W32((u32)(r_ecx+0x8cu), r_esi);
    /* 0063081b: fild dword ptr [0xa9cd68] */ FPUSH((long double)(i32)R32((u32)(0xa9cd68u)));
    /* 00630821: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00630823: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00630825: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 0063082b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0063082d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630830: je 0x6308c9 */ if (fZ) goto L_006308c9;
L_00630836:; BB(0x00630836);
    /* 00630836: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
L_0063083c:; BB(0x0063083c);
    /* 0063083c: fld dword ptr [0x932d24] */ FPUSH(R_F32((u32)(0x932d24u)));
    /* 00630842: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00630845: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 00630848: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063084a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0063084c: fadd dword ptr [0x932d20] */ ST(0) = ST(0) + R_F32((u32)(0x932d20u));
    /* 00630852: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00630854: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630856: fadd dword ptr [0x932d1c] */ ST(0) = ST(0) + R_F32((u32)(0x932d1cu));
    /* 0063085c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063085e: fstp dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0)); FPOP();
    /* 00630864: fstp dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0)); FPOP();
    /* 0063086a: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 00630870: call 0x62df24 */ r_esp -= 4; W32(r_esp, 0x630875u); f_0062df24();
    /* 00630875: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630878: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063087d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00630880: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 00630887: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0063088d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063088f: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00630892: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 00630897: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63089cu); f_007b9a88();
    /* 0063089c: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063089f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6308a4u); f_007b999c();
    /* 006308a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006308a5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006308a8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6308adu); f_007b4f54();
    /* 006308ad: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006308b0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006308b3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006308b6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006308b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006308bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006308c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006308c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006308c6: ret 8 */ FN_RET(0x006306a0); r_esp += 12; return;
L_006308c9:; BB(0x006308c9);
    /* 006308c9: fld dword ptr [0x932d28] */ FPUSH(R_F32((u32)(0x932d28u)));
    /* 006308cf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006308d1: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 006308d7: jmp 0x63083c */ goto L_0063083c;
}

void f_006308dc(void) /* sub_6308DC */
{
    FN_ENTER(0x006308dc);
    /* 006308dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006308dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006308df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006308e1: call 0x630900 */ r_esp -= 4; W32(r_esp, 0x6308e6u); f_00630900();
    /* 006308e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006308ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006308ec: jne 0x6308f2 */ if (!fZ) goto L_006308f2;
L_006308ee:; BB(0x006308ee);
    /* 006308ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006308ef: ret 4 */ FN_RET(0x006308dc); r_esp += 8; return;
L_006308f2:; BB(0x006308f2);
    /* 006308f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006308f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6308f8u); f_005c2f74();
    /* 006308f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006308f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006308fa: ret 4 */ FN_RET(0x006308dc); r_esp += 8; return;
}

void f_00630900(void) /* sub_630900 */
{
    FN_ENTER(0x00630900);
    /* 00630900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630901: mov ebp, esp */ r_ebp = r_esp;
    /* 00630903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630905: push 0x8e37cc */ { u32 v = 0x8e37ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0063090a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630911: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630918: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063091b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063091e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00630921: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00630924: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00630927: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063092a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630931: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630934: mov dword ptr [eax], 0xb2ac20 */ W32((u32)(r_eax), 0xb2ac20u);
    /* 0063093a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063093b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x630940u); f_007b4e84();
    /* 00630940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630941: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630944: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x630949u); f_007b9c8c();
    /* 00630949: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00630950: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630953: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x630958u); f_0062ee7c();
    /* 00630958: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063095b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630962: mov esp, ebp */ r_esp = r_ebp;
    /* 00630964: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630965: ret  */ FN_RET(0x00630900); r_esp += 4; return;
}

void f_00630968(void) /* sub_630968 */
{
    FN_ENTER(0x00630968);
    /* 00630968: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630969: mov esi, ecx */ r_esi = r_ecx;
    /* 0063096b: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630971: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 00630976: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630977: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63097cu); f_0050b510();
    /* 0063097c: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 00630981: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630982: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x630987u); f_0050b510();
    /* 00630987: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063098a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063098b: ret  */ FN_RET(0x00630968); r_esp += 4; return;
}

void f_0063098c(void)
{
    FN_ENTER(0x0063098c);
    /* 0063098c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063098d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063098f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630991: push 0x8e37f4 */ { u32 v = 0x8e37f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063099c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063099d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006309a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006309a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006309aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006309ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006309b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006309b3: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 006309b8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006309bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6309c4u); f_005caba4();
    /* 006309c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006309c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006309c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309ca: je 0x630a03 */ if (fZ) goto L_00630a03;
L_006309cc:; BB(0x006309cc);
    /* 006309cc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006309d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006309da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006309dd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006309e3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006309e6: call 0x630a08 */ r_esp -= 4; W32(r_esp, 0x6309ebu); f_00630a08();
    /* 006309eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006309ee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006309f5:; BB(0x006309f5);
    /* 006309f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006309f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006309ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00630a01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630a02: ret  */ FN_RET(0x0063098c); r_esp += 4; return;
L_00630a03:; BB(0x00630a03);
    /* 00630a03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630a05: jmp 0x6309f5 */ goto L_006309f5;
}

void f_00630a08(void) /* sub_630A08 */
{
    FN_ENTER(0x00630a08);
    /* 00630a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630a09: mov ebp, esp */ r_ebp = r_esp;
    /* 00630a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630a0d: push 0x8e3810 */ { u32 v = 0x8e3810u; r_esp -= 4; W32(r_esp, v); }
    /* 00630a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630a20: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630a26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00630a29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00630a2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00630a2f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00630a32: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630a35: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00630a38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00630a3b: call 0x62ed74 */ r_esp -= 4; W32(r_esp, 0x630a40u); f_0062ed74();
    /* 00630a40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630a47: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630a4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630a4d: mov dword ptr [ecx], 0xb2ac20 */ W32((u32)(r_ecx), 0xb2ac20u);
    /* 00630a53: mov eax, dword ptr [0x9c60a0] */ r_eax = R32((u32)(0x9c60a0u));
    /* 00630a58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630a59: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00630a5c: call dword ptr [0xb2ac34] */ { u32 t = R32((u32)(0xb2ac34u)); r_esp -= 4; W32(r_esp, 0x630a62u); call_ind(t); }
    /* 00630a62: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630a65: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00630a68: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00630a6b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00630a6e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00630a74: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00630a7a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630a7d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00630a83: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00630a89: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00630a8f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00630a95: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00630a9b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00630aa1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630aa4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00630aaa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630aad: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00630ab3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00630ab6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00630abc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00630abf: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00630ac5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00630ac8: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x630acdu); f_0077a1f4();
    /* 00630acd: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630ad3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00630ad5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630adau); f_005b8610();
    /* 00630ada: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630add: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630ae3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00630ae5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00630ae8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630aedu); f_005b8624();
    /* 00630aed: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630af0: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630af6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00630af8: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00630afb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630b00u); f_005b8610();
    /* 00630b00: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630b03: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630b09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00630b0b: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 00630b11: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630b16u); f_005b8624();
    /* 00630b16: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630b19: fld dword ptr [0x932d40] */ FPUSH(R_F32((u32)(0x932d40u)));
    /* 00630b1f: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00630b25: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 00630b2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630b2d: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00630b34: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00630b3a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00630b3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630b3e: mov esi, 8 */ r_esi = 0x8u;
    /* 00630b43: mov edi, 6 */ r_edi = 0x6u;
    /* 00630b48: jg 0x630b4c */ if ((!fZ&&fS==fO)) goto L_00630b4c;
L_00630b4a:; BB(0x00630b4a);
    /* 00630b4a: mov edx, ebx */ r_edx = r_ebx;
L_00630b4c:; BB(0x00630b4c);
    /* 00630b4c: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 00630b52: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00630b55: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00630b58: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630b5b: jl 0x630b5f */ if ((fS!=fO)) goto L_00630b5f;
L_00630b5d:; BB(0x00630b5d);
    /* 00630b5d: mov eax, esi */ r_eax = r_esi;
L_00630b5f:; BB(0x00630b5f);
    /* 00630b5f: mov esi, dword ptr [ecx + 0x8c] */ r_esi = R32((u32)(r_ecx+0x8cu));
    /* 00630b65: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630b68: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00630b6d: jg 0x630b71 */ if ((!fZ&&fS==fO)) goto L_00630b71;
L_00630b6f:; BB(0x00630b6f);
    /* 00630b6f: mov eax, edi */ r_eax = r_edi;
L_00630b71:; BB(0x00630b71);
    /* 00630b71: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00630b77: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630b79: jg 0x630b7d */ if ((!fZ&&fS==fO)) goto L_00630b7d;
L_00630b7b:; BB(0x00630b7b);
    /* 00630b7b: mov esi, ebx */ r_esi = r_ebx;
L_00630b7d:; BB(0x00630b7d);
    /* 00630b7d: mov dword ptr [ecx + 0x8c], esi */ W32((u32)(r_ecx+0x8cu), r_esi);
    /* 00630b83: fild dword ptr [0xa9cd68] */ FPUSH((long double)(i32)R32((u32)(0xa9cd68u)));
    /* 00630b89: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00630b8b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00630b8d: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 00630b93: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630b95: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630b98: je 0x630c31 */ if (fZ) goto L_00630c31;
L_00630b9e:; BB(0x00630b9e);
    /* 00630b9e: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
L_00630ba4:; BB(0x00630ba4);
    /* 00630ba4: fld dword ptr [0x932d38] */ FPUSH(R_F32((u32)(0x932d38u)));
    /* 00630baa: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00630bad: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 00630bb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00630bb2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00630bb4: fadd dword ptr [0x932d34] */ ST(0) = ST(0) + R_F32((u32)(0x932d34u));
    /* 00630bba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00630bbc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630bbe: fadd dword ptr [0x932d30] */ ST(0) = ST(0) + R_F32((u32)(0x932d30u));
    /* 00630bc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00630bc6: fstp dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0)); FPOP();
    /* 00630bcc: fstp dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0)); FPOP();
    /* 00630bd2: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 00630bd8: call 0x62df24 */ r_esp -= 4; W32(r_esp, 0x630bddu); f_0062df24();
    /* 00630bdd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630be0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00630be5: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00630be8: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 00630bef: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00630bf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630bf7: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00630bfa: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 00630bff: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x630c04u); f_007b9a88();
    /* 00630c04: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630c07: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x630c0cu); f_007b999c();
    /* 00630c0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630c0d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630c10: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x630c15u); f_007b4f54();
    /* 00630c15: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630c18: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630c1b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00630c1e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00630c21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630c24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630c2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00630c2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630c2e: ret 8 */ FN_RET(0x00630a08); r_esp += 12; return;
L_00630c31:; BB(0x00630c31);
    /* 00630c31: fld dword ptr [0x932d3c] */ FPUSH(R_F32((u32)(0x932d3cu)));
    /* 00630c37: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630c39: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 00630c3f: jmp 0x630ba4 */ goto L_00630ba4;
}

void f_00630c44(void) /* sub_630C44 */
{
    FN_ENTER(0x00630c44);
    /* 00630c44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630c45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00630c47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00630c49: call 0x630c68 */ r_esp -= 4; W32(r_esp, 0x630c4eu); f_00630c68();
    /* 00630c4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00630c52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630c54: jne 0x630c5a */ if (!fZ) goto L_00630c5a;
L_00630c56:; BB(0x00630c56);
    /* 00630c56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630c57: ret 4 */ FN_RET(0x00630c44); r_esp += 8; return;
L_00630c5a:; BB(0x00630c5a);
    /* 00630c5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00630c5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x630c60u); f_005c2f74();
    /* 00630c60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630c61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00630c62: ret 4 */ FN_RET(0x00630c44); r_esp += 8; return;
}

void f_00630c68(void) /* sub_630C68 */
{
    FN_ENTER(0x00630c68);
    /* 00630c68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630c69: mov ebp, esp */ r_ebp = r_esp;
    /* 00630c6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630c6d: push 0x8e382c */ { u32 v = 0x8e382cu; r_esp -= 4; W32(r_esp, v); }
    /* 00630c72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630c78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630c79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630c80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630c83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630c86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00630c89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00630c8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00630c8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00630c92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630c99: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630c9c: mov dword ptr [eax], 0xb2ae20 */ W32((u32)(r_eax), 0xb2ae20u);
    /* 00630ca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630ca3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x630ca8u); f_007b4e84();
    /* 00630ca8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630ca9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630cac: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x630cb1u); f_007b9c8c();
    /* 00630cb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00630cb8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630cbb: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x630cc0u); f_0062ee7c();
    /* 00630cc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630cc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630cca: mov esp, ebp */ r_esp = r_ebp;
    /* 00630ccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630ccd: ret  */ FN_RET(0x00630c68); r_esp += 4; return;
}

void f_00630cd0(void) /* sub_630CD0 */
{
    FN_ENTER(0x00630cd0);
    /* 00630cd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630cd1: mov esi, ecx */ r_esi = r_ecx;
    /* 00630cd3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x630cd8u); f_00807ac0();
    /* 00630cd8: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00630cdb: ja 0x630da5 */ if ((!fC&&!fZ)) goto L_00630da5;
L_00630ce1:; BB(0x00630ce1);
    /* 00630ce1: mov eax, dword ptr [eax*4 + 0x932d60] */ r_eax = R32((u32)(r_eax*4+0x932d60u));
    /* 00630ce8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00630da5:; BB(0x00630da5);
    /* 00630da5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630da6: ret  */ FN_RET(0x00630cd0); r_esp += 4; return;
}

void f_00630cea(void)
{
    FN_ENTER(0x00630cea);
    /* 00630cea: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630ced: jmp 0x630d09 */ goto L_00630d09;
L_00630d09:; BB(0x00630d09);
    /* 00630d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0e: push 0x4f9 */ { u32 v = 0x4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d13: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d18u); f_00814298();
    /* 00630d18: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d1c: ret  */ FN_RET(0x00630cea); r_esp += 4; return;
}

void f_00630cef(void)
{
    FN_ENTER(0x00630cef);
    /* 00630cef: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630cf2: jmp 0x630d09 */ goto L_00630d09;
L_00630d09:; BB(0x00630d09);
    /* 00630d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0e: push 0x4f9 */ { u32 v = 0x4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d13: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d18u); f_00814298();
    /* 00630d18: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d1c: ret  */ FN_RET(0x00630cef); r_esp += 4; return;
}

void f_00630cf4(void)
{
    FN_ENTER(0x00630cf4);
    /* 00630cf4: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630cf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630cfb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630cfc: push 0x4d5 */ { u32 v = 0x4d5u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d01: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d06u); f_00814298();
    /* 00630d06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d0e: push 0x4f9 */ { u32 v = 0x4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d13: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d18u); f_00814298();
    /* 00630d18: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d1c: ret  */ FN_RET(0x00630cf4); r_esp += 4; return;
}

void f_00630d1d(void)
{
    FN_ENTER(0x00630d1d);
    /* 00630d1d: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d25: push 0x4ac */ { u32 v = 0x4acu; r_esp -= 4; W32(r_esp, v); }
    /* 00630d2a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d2fu); f_00814298();
    /* 00630d2f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d33: ret  */ FN_RET(0x00630d1d); r_esp += 4; return;
}

void f_00630d34(void)
{
    FN_ENTER(0x00630d34);
    /* 00630d34: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d3b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d3c: push 0x495 */ { u32 v = 0x495u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d41: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d46u); f_00814298();
    /* 00630d46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d4a: ret  */ FN_RET(0x00630d34); r_esp += 4; return;
}

void f_00630d4b(void)
{
    FN_ENTER(0x00630d4b);
    /* 00630d4b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d53: push 0x482 */ { u32 v = 0x482u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d58: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d5du); f_00814298();
    /* 00630d5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d61: ret  */ FN_RET(0x00630d4b); r_esp += 4; return;
}

void f_00630d62(void)
{
    FN_ENTER(0x00630d62);
    /* 00630d62: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d6a: push 0x463 */ { u32 v = 0x463u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d74u); f_00814298();
    /* 00630d74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d78: ret  */ FN_RET(0x00630d62); r_esp += 4; return;
}

void f_00630d79(void)
{
    FN_ENTER(0x00630d79);
    /* 00630d79: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d81: push 0x44b */ { u32 v = 0x44bu; r_esp -= 4; W32(r_esp, v); }
    /* 00630d86: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630d8bu); f_00814298();
    /* 00630d8b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630d8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630d8f: ret  */ FN_RET(0x00630d79); r_esp += 4; return;
}

void f_00630d90(void)
{
    FN_ENTER(0x00630d90);
    /* 00630d90: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00630d93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630d97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630d98: push 0x432 */ { u32 v = 0x432u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d9d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x630da2u); f_00814298();
    /* 00630da2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630da5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630da6: ret  */ FN_RET(0x00630d90); r_esp += 4; return;
}

void f_00630da5(void)
{
    FN_ENTER(0x00630da5);
    /* 00630da5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00630da6: ret  */ FN_RET(0x00630da5); r_esp += 4; return;
}

void f_00630da8(void) /* sub_630DA8 */
{
    FN_ENTER(0x00630da8);
    /* 00630da8: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00630dad: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630db4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x630db9u); f_0050b510();
    /* 00630db9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630dbc: ret  */ FN_RET(0x00630da8); r_esp += 4; return;
}

void f_00630dc0(void)
{
    FN_ENTER(0x00630dc0);
    /* 00630dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00630dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630dc5: push 0x8e3854 */ { u32 v = 0x8e3854u; r_esp -= 4; W32(r_esp, v); }
    /* 00630dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630dd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630dd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630ddb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630dde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00630de1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00630de4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00630de7: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 00630dec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00630df3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x630df8u); f_005caba4();
    /* 00630df8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630df9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00630dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630dfe: je 0x630e37 */ if (fZ) goto L_00630e37;
L_00630e00:; BB(0x00630e00);
    /* 00630e00: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00630e07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630e0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630e11: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630e17: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630e1a: call 0x630e3c */ r_esp -= 4; W32(r_esp, 0x630e1fu); f_00630e3c();
    /* 00630e1f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630e22: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00630e29:; BB(0x00630e29);
    /* 00630e29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630e2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630e33: mov esp, ebp */ r_esp = r_ebp;
    /* 00630e35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630e36: ret  */ FN_RET(0x00630dc0); r_esp += 4; return;
L_00630e37:; BB(0x00630e37);
    /* 00630e37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630e39: jmp 0x630e29 */ goto L_00630e29;
}

void f_00630e3c(void) /* sub_630E3C */
{
    FN_ENTER(0x00630e3c);
    /* 00630e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630e3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00630e3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630e41: push 0x8e3870 */ { u32 v = 0x8e3870u; r_esp -= 4; W32(r_esp, v); }
    /* 00630e46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630e4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00630e54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630e57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00630e5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00630e5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00630e60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00630e63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00630e66: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00630e69: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00630e6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00630e6f: call 0x62ed74 */ r_esp -= 4; W32(r_esp, 0x630e74u); f_0062ed74();
    /* 00630e74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630e7b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630e7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630e81: mov dword ptr [ecx], 0xb2ae20 */ W32((u32)(r_ecx), 0xb2ae20u);
    /* 00630e87: mov eax, dword ptr [0x9c60a4] */ r_eax = R32((u32)(0x9c60a4u));
    /* 00630e8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630e8d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00630e90: call dword ptr [0xb2ae34] */ { u32 t = R32((u32)(0xb2ae34u)); r_esp -= 4; W32(r_esp, 0x630e96u); call_ind(t); }
    /* 00630e96: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630e99: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00630e9c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00630e9f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00630ea2: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00630ea8: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00630eae: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630eb1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00630eb7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00630ebd: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00630ec3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00630ec9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00630ecf: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00630ed5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630ed8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00630ede: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630ee1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00630ee7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00630eea: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00630ef0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00630ef3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00630ef9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00630efc: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x630f01u); f_0077a1f4();
    /* 00630f01: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630f07: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f09: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630f0eu); f_005b8610();
    /* 00630f0e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630f11: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630f17: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f19: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00630f1c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630f21u); f_005b8624();
    /* 00630f21: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630f24: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630f2a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f2c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00630f2f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x630f34u); f_005b8610();
    /* 00630f34: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630f37: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 00630f3d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f3f: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 00630f45: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x630f4au); f_005b8624();
    /* 00630f4a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00630f4d: fld dword ptr [0x932de8] */ FPUSH(R_F32((u32)(0x932de8u)));
    /* 00630f53: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00630f59: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 00630f5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630f61: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00630f68: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00630f6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00630f70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630f72: mov esi, 5 */ r_esi = 0x5u;
    /* 00630f77: mov edi, 0 */ r_edi = 0x0u;
    /* 00630f7c: jg 0x630f80 */ if ((!fZ&&fS==fO)) goto L_00630f80;
L_00630f7e:; BB(0x00630f7e);
    /* 00630f7e: mov edx, ebx */ r_edx = r_ebx;
L_00630f80:; BB(0x00630f80);
    /* 00630f80: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 00630f86: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00630f89: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00630f8c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630f8f: jl 0x630f93 */ if ((fS!=fO)) goto L_00630f93;
L_00630f91:; BB(0x00630f91);
    /* 00630f91: mov eax, esi */ r_eax = r_esi;
L_00630f93:; BB(0x00630f93);
    /* 00630f93: mov esi, dword ptr [ecx + 0x8c] */ r_esi = R32((u32)(r_ecx+0x8cu));
    /* 00630f99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630f9b: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00630fa0: jg 0x630fa4 */ if ((!fZ&&fS==fO)) goto L_00630fa4;
L_00630fa2:; BB(0x00630fa2);
    /* 00630fa2: mov eax, edi */ r_eax = r_edi;
L_00630fa4:; BB(0x00630fa4);
    /* 00630fa4: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00630faa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00630fac: jg 0x630fb0 */ if ((!fZ&&fS==fO)) goto L_00630fb0;
L_00630fae:; BB(0x00630fae);
    /* 00630fae: mov esi, ebx */ r_esi = r_ebx;
L_00630fb0:; BB(0x00630fb0);
    /* 00630fb0: mov dword ptr [ecx + 0x8c], esi */ W32((u32)(r_ecx+0x8cu), r_esi);
    /* 00630fb6: fild dword ptr [0xa9cd68] */ FPUSH((long double)(i32)R32((u32)(0xa9cd68u)));
    /* 00630fbc: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00630fbe: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00630fc0: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 00630fc6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630fc8: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630fcb: je 0x631064 */ if (fZ) goto L_00631064;
L_00630fd1:; BB(0x00630fd1);
    /* 00630fd1: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
L_00630fd7:; BB(0x00630fd7);
    /* 00630fd7: fld dword ptr [0x932de0] */ FPUSH(R_F32((u32)(0x932de0u)));
    /* 00630fdd: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00630fe0: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 00630fe3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00630fe5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00630fe7: fadd dword ptr [0x932ddc] */ ST(0) = ST(0) + R_F32((u32)(0x932ddcu));
    /* 00630fed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00630fef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00630ff1: fadd dword ptr [0x932dd8] */ ST(0) = ST(0) + R_F32((u32)(0x932dd8u));
    /* 00630ff7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00630ff9: fstp dword ptr [ecx + 0x354] */ W_F32((u32)(r_ecx+0x354u), ST(0)); FPOP();
    /* 00630fff: fstp dword ptr [ecx + 0x358] */ W_F32((u32)(r_ecx+0x358u), ST(0)); FPOP();
    /* 00631005: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 0063100b: call 0x62df24 */ r_esp -= 4; W32(r_esp, 0x631010u); f_0062df24();
    /* 00631010: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00631013: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00631018: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0063101b: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 00631022: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00631028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063102a: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0063102d: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 00631032: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x631037u); f_007b9a88();
    /* 00631037: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063103a: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63103fu); f_007b999c();
    /* 0063103f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631040: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00631043: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x631048u); f_007b4f54();
    /* 00631048: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063104b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063104e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00631051: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631054: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631057: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063105e: mov esp, ebp */ r_esp = r_ebp;
    /* 00631060: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631061: ret 8 */ FN_RET(0x00630e3c); r_esp += 12; return;
L_00631064:; BB(0x00631064);
    /* 00631064: fld dword ptr [0x932de4] */ FPUSH(R_F32((u32)(0x932de4u)));
    /* 0063106a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0063106c: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 00631072: jmp 0x630fd7 */ goto L_00630fd7;
}

