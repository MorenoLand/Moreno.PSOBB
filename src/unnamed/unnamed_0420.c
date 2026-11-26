#include "protos.h"

void f_00420000(void)
{
    FN_ENTER(0x00420000);
    /* 00420000: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00420001: fadd dword ptr [ecx + 0x678] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x678u));
    /* 00420007: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420009: fadd dword ptr [ecx + 0x67c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x67cu));
    /* 0042000f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420012: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420016: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042001b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042001f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x00420000); r_esp += 4; return;
}

void f_00420001(void)
{
    FN_ENTER(0x00420001);
    /* 00420001: fadd dword ptr [ecx + 0x678] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x678u));
    /* 00420007: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420009: fadd dword ptr [ecx + 0x67c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x67cu));
    /* 0042000f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420012: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420016: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042001b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042001f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x00420001); r_esp += 4; return;
}

void f_00420004(void)
{
    FN_ENTER(0x00420004);
    /* 00420004: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00420005: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00420007: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420009: fadd dword ptr [ecx + 0x67c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x67cu));
    /* 0042000f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420012: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420016: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042001b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042001f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x00420004); r_esp += 4; return;
}

void f_00420009(void)
{
    FN_ENTER(0x00420009);
    /* 00420009: fadd dword ptr [ecx + 0x67c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x67cu));
    /* 0042000f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420012: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420016: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042001b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042001f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x00420009); r_esp += 4; return;
}

void f_00420020(void)
{
    FN_ENTER(0x00420020);
    /* 00420020: insb byte ptr es:[edi], dx */ UNSUP(0x00420020, "insb byte ptr es:[edi], dx");
    /* 00420021: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x00420020); r_esp += 4; return;
}

void f_0042004f(void)
{
    FN_ENTER(0x0042004f);
    /* 0042004f: mov dword ptr [esi + eax], ebp */ W32((u32)(r_esi+r_eax), r_ebp);
    /* 00420053: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00420055: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00420056: fadd dword ptr [ecx + 0x674] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x674u));
    /* 0042005c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042005e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420061: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420065: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042006a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042006e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420072: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420076: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00420079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042007b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0042007f: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420085: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420088: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042008b: ret  */ FN_RET(0x0042004f); r_esp += 4; return;
}

void f_0042006b(void)
{
    FN_ENTER(0x0042006b);
    /* 0042006b: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042006c: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042006e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420072: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420076: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00420079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042007b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0042007f: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420085: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420088: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042008b: ret  */ FN_RET(0x0042006b); r_esp += 4; return;
}

void f_00420085(void)
{
    FN_ENTER(0x00420085);
    /* 00420085: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420088: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042008b: ret  */ FN_RET(0x00420085); r_esp += 4; return;
}

void f_0042008c(void) /* sub_42008C */
{
    FN_ENTER(0x0042008c);
    /* 0042008c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042008d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042008e: mov edi, ecx */ r_edi = r_ecx;
    /* 00420090: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00420094: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00420097: ja 0x4201bf */ if ((!fC&&!fZ)) goto L_004201bf;
L_0042009d:; BB(0x0042009d);
    /* 0042009d: mov eax, dword ptr [eax*4 + 0x8fb574] */ r_eax = R32((u32)(r_eax*4+0x8fb574u));
    /* 004200a4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004201bf:; BB(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x0042008c); r_esp += 8; return;
}

void f_004200a6(void)
{
    FN_ENTER(0x004200a6);
    /* 004200a6: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 004200ac: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004200af: jl 0x4201bf */ if ((fS!=fO)) goto L_004201bf;
L_004200b5:; BB(0x004200b5);
    /* 004200b5: mov ebp, dword ptr [edi + 0x684] */ r_ebp = R32((u32)(r_edi+0x684u));
    /* 004200bb: cmp ebp, 0x32 */ {  u32 a = r_ebp; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004200be: jge 0x4200dc */ if ((fS==fO)) goto L_004200dc;
L_004200c0:; BB(0x004200c0);
    /* 004200c0: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4200c5u); f_00420a44();
    /* 004200c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200c7: jne 0x4200d0 */ if (!fZ) goto L_004200d0;
L_004200c9:; BB(0x004200c9);
    /* 004200c9: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 004200ce: jmp 0x4200f9 */ goto L_004200f9;
L_004200d0:; BB(0x004200d0);
    /* 004200d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200d3: jne 0x4200f9 */ if (!fZ) goto L_004200f9;
L_004200d5:; BB(0x004200d5);
    /* 004200d5: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 004200da: jmp 0x4200f9 */ goto L_004200f9;
L_004200dc:; BB(0x004200dc);
    /* 004200dc: add ebp, -0x32 */ {  u32 a = r_ebp; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004200df: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4200e4u); f_00420a44();
    /* 004200e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200e6: jne 0x4200ef */ if (!fZ) goto L_004200ef;
L_004200e8:; BB(0x004200e8);
    /* 004200e8: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 004200ed: jmp 0x4200f9 */ goto L_004200f9;
L_004200ef:; BB(0x004200ef);
    /* 004200ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200f2: jne 0x4200f9 */ if (!fZ) goto L_004200f9;
L_004200f4:; BB(0x004200f4);
    /* 004200f4: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_004200f9:; BB(0x004200f9);
    /* 004200f9: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
L_004200ff:; BB(0x004200ff);
    /* 004200ff: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00420102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00420105: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420108: jne 0x4201c4 */ if (!fZ) goto L_004201c4;
L_0042010e:; BB(0x0042010e);
    /* 0042010e: mov dword ptr [edi + 0x684], 0 */ W32((u32)(r_edi+0x684u), 0x0u);
    /* 00420118: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042011a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0042011c: jmp 0x4200ff */ goto L_004200ff;
L_004201bf:; BB(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x004200a6); r_esp += 8; return;
L_004201c4:; BB(0x004201c4);
    /* 004201c4: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004201c7: je 0x4201dc */ if (fZ) goto L_004201dc;
L_004201c9:; BB(0x004201c9);
    /* 004201c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004201ca: mov dword ptr [edi + 0x684], ecx */ W32((u32)(r_edi+0x684u), r_ecx);
    /* 004201d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004201d2: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4201d7u); f_0041a808();
    /* 004201d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201d9: ret 4 */ FN_RET(0x004200a6); r_esp += 8; return;
L_004201dc:; BB(0x004201dc);
    /* 004201dc: mov dword ptr [edi + 0x684], 0x32 */ W32((u32)(r_edi+0x684u), 0x32u);
    /* 004201e6: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004201eb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004201ed: jmp 0x4200ff */ goto L_004200ff;
}

void f_004200bc(void)
{
    FN_ENTER(0x004200bc);
    /* 004200bc: std  */ rt_df = 1;
    /* 004200bd: xor bh, byte ptr [ebp + 0x1c] */ {  u32 a = (u8)(r_ebx>>8); u32 b = R8((u32)(r_ebp+0x1cu)); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004200c0: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4200c5u); f_00420a44();
    /* 004200c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200c7: jne 0x4200d0 */ if (!fZ) goto L_004200d0;
L_004200c9:; BB(0x004200c9);
    /* 004200c9: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 004200ce: jmp 0x4200f9 */ goto L_004200f9;
L_004200d0:; BB(0x004200d0);
    /* 004200d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004200d3: jne 0x4200f9 */ if (!fZ) goto L_004200f9;
L_004200d5:; BB(0x004200d5);
    /* 004200d5: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 004200da: jmp 0x4200f9 */ goto L_004200f9;
L_004200f9:; BB(0x004200f9);
    /* 004200f9: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
L_004200ff:; BB(0x004200ff);
    /* 004200ff: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00420102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00420105: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420108: jne 0x4201c4 */ if (!fZ) goto L_004201c4;
L_0042010e:; BB(0x0042010e);
    /* 0042010e: mov dword ptr [edi + 0x684], 0 */ W32((u32)(r_edi+0x684u), 0x0u);
    /* 00420118: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042011a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0042011c: jmp 0x4200ff */ goto L_004200ff;
L_004201c4:; BB(0x004201c4);
    /* 004201c4: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004201c7: je 0x4201dc */ if (fZ) goto L_004201dc;
L_004201c9:; BB(0x004201c9);
    /* 004201c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004201ca: mov dword ptr [edi + 0x684], ecx */ W32((u32)(r_edi+0x684u), r_ecx);
    /* 004201d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004201d2: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4201d7u); f_0041a808();
    /* 004201d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201d9: ret 4 */ FN_RET(0x004200bc); r_esp += 8; return;
L_004201dc:; BB(0x004201dc);
    /* 004201dc: mov dword ptr [edi + 0x684], 0x32 */ W32((u32)(r_edi+0x684u), 0x32u);
    /* 004201e6: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004201eb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004201ed: jmp 0x4200ff */ goto L_004200ff;
}

void f_0042011e(void)
{
    FN_ENTER(0x0042011e);
    /* 0042011e: mov ecx, edi */ r_ecx = r_edi;
    /* 00420120: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x420125u); f_00419ff0();
    /* 00420125: jmp 0x4201bf */ goto L_004201bf;
L_004201bf:; BB(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x0042011e); r_esp += 8; return;
}

void f_0042012a(void)
{
    FN_ENTER(0x0042012a);
    /* 0042012a: mov ecx, edi */ r_ecx = r_edi;
    /* 0042012c: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x420131u); f_0041a004();
    /* 00420131: jmp 0x4201bf */ goto L_004201bf;
L_004201bf:; BB(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x0042012a); r_esp += 8; return;
}

void f_00420136(void)
{
    FN_ENTER(0x00420136);
    /* 00420136: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00420138: mov ecx, edi */ r_ecx = r_edi;
    /* 0042013a: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x420140u); call_ind(t); }
    /* 00420140: jmp 0x4201bf */ goto L_004201bf;
L_004201bf:; BB(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x00420136); r_esp += 8; return;
}

void f_00420142(void)
{
    FN_ENTER(0x00420142);
    /* 00420142: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00420144: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00420149: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00420150: mov ecx, edi */ r_ecx = r_edi;
    /* 00420152: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x420158u); call_ind(t); }
    /* 00420158: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 00420162: mov ecx, edi */ r_ecx = r_edi;
    /* 00420164: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x420169u); f_0041b0bc();
    /* 00420169: push 0x8fc300 */ { u32 v = 0x8fc300u; r_esp -= 4; W32(r_esp, v); }
    /* 0042016e: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00420174: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00420179: and eax, 0xfffffd7f */ {  u32 a = r_eax; u32 b = 0xfffffd7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042017e: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00420184: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x420189u); f_00814f0c();
    /* 00420189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042018a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0042018c: mov ecx, edi */ r_ecx = r_edi;
    /* 0042018e: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x420194u); call_ind(t); }
    /* 00420194: mov dword ptr [edi + 0x86c], 0 */ W32((u32)(r_edi+0x86cu), 0x0u);
    /* 0042019e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042019f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201a0: ret 4 */ FN_RET(0x00420142); r_esp += 8; return;
}

void f_004201a3(void)
{
    FN_ENTER(0x004201a3);
    /* 004201a3: mov ecx, edi */ r_ecx = r_edi;
    /* 004201a5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4201aau); f_007aa094();
    /* 004201aa: add dword ptr [edi + 0x86c], 1 */ { u32 ad = (u32)(r_edi+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004201b1: mov ecx, edi */ r_ecx = r_edi;
    /* 004201b3: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x4201b8u); f_0041ebc0();
    /* 004201b8: mov ecx, edi */ r_ecx = r_edi;
    /* 004201ba: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x4201bfu); f_0041c768();
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x004201a3); r_esp += 8; return;
}

void f_004201bf(void)
{
    FN_ENTER(0x004201bf);
    /* 004201bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004201c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004201c1: ret 4 */ FN_RET(0x004201bf); r_esp += 8; return;
}

void f_004201f4(void) /* sub_4201F4 */
{
    FN_ENTER(0x004201f4);
    /* 004201f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004201f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004201f6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004201f9: mov esi, ecx */ r_esi = r_ecx;
    /* 004201fb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004201ff: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00420202: ja 0x420392 */ if ((!fC&&!fZ)) goto L_00420392;
L_00420208:; BB(0x00420208);
    /* 00420208: mov eax, dword ptr [eax*4 + 0x8fb5a4] */ r_eax = R32((u32)(r_eax*4+0x8fb5a4u));
    /* 0042020f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x004201f4); r_esp += 8; return;
}

void f_00420211(void)
{
    FN_ENTER(0x00420211);
    /* 00420211: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00420217: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00420219: je 0x420392 */ if (fZ) goto L_00420392;
L_0042021f:; BB(0x0042021f);
    /* 0042021f: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 00420225: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420228: jge 0x420246 */ if ((fS==fO)) goto L_00420246;
L_0042022a:; BB(0x0042022a);
    /* 0042022a: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42022fu); f_00420a44();
    /* 0042022f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420231: jne 0x42023a */ if (!fZ) goto L_0042023a;
L_00420233:; BB(0x00420233);
    /* 00420233: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00420238: jmp 0x420263 */ goto L_00420263;
L_0042023a:; BB(0x0042023a);
    /* 0042023a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042023d: jne 0x420263 */ if (!fZ) goto L_00420263;
L_0042023f:; BB(0x0042023f);
    /* 0042023f: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00420244: jmp 0x420263 */ goto L_00420263;
L_00420246:; BB(0x00420246);
    /* 00420246: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00420249: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42024eu); f_00420a44();
    /* 0042024e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420250: jne 0x420259 */ if (!fZ) goto L_00420259;
L_00420252:; BB(0x00420252);
    /* 00420252: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00420257: jmp 0x420263 */ goto L_00420263;
L_00420259:; BB(0x00420259);
    /* 00420259: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042025c: jne 0x420263 */ if (!fZ) goto L_00420263;
L_0042025e:; BB(0x0042025e);
    /* 0042025e: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00420263:; BB(0x00420263);
    /* 00420263: mov ecx, dword ptr [esi + 0x684] */ r_ecx = R32((u32)(r_esi+0x684u));
L_00420269:; BB(0x00420269);
    /* 00420269: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 0042026c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042026f: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420272: jne 0x42039a */ if (!fZ) goto L_0042039a;
L_00420278:; BB(0x00420278);
    /* 00420278: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 00420282: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00420284: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00420286: jmp 0x420269 */ goto L_00420269;
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x00420211); r_esp += 8; return;
L_0042039a:; BB(0x0042039a);
    /* 0042039a: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042039d: je 0x4203b5 */ if (fZ) goto L_004203b5;
L_0042039f:; BB(0x0042039f);
    /* 0042039f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004203a0: mov dword ptr [esi + 0x684], ecx */ W32((u32)(r_esi+0x684u), r_ecx);
    /* 004203a6: mov ecx, esi */ r_ecx = r_esi;
    /* 004203a8: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4203adu); f_0041a808();
    /* 004203ad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004203b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004203b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004203b2: ret 4 */ FN_RET(0x00420211); r_esp += 8; return;
L_004203b5:; BB(0x004203b5);
    /* 004203b5: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 004203bf: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004203c4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004203c6: jmp 0x420269 */ goto L_00420269;
}

void f_00420288(void)
{
    FN_ENTER(0x00420288);
    /* 00420288: mov ecx, esi */ r_ecx = r_esi;
    /* 0042028a: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x42028fu); f_00419ff0();
    /* 0042028f: jmp 0x420392 */ goto L_00420392;
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x00420288); r_esp += 8; return;
}

void f_00420294(void)
{
    FN_ENTER(0x00420294);
    /* 00420294: mov ecx, esi */ r_ecx = r_esi;
    /* 00420296: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x42029bu); f_0041a004();
    /* 0042029b: jmp 0x420392 */ goto L_00420392;
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x00420294); r_esp += 8; return;
}

void f_004202a0(void)
{
    FN_ENTER(0x004202a0);
    /* 004202a0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004202a2: mov ecx, esi */ r_ecx = r_esi;
    /* 004202a4: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4202aau); call_ind(t); }
    /* 004202aa: jmp 0x420392 */ goto L_00420392;
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x004202a0); r_esp += 8; return;
}

void f_004202af(void)
{
    FN_ENTER(0x004202af);
    /* 004202af: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004202b1: mov eax, 2 */ r_eax = 0x2u;
    /* 004202b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004202bd: mov ecx, esi */ r_ecx = r_esi;
    /* 004202bf: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4202c5u); call_ind(t); }
    /* 004202c5: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004202cf: mov ecx, esi */ r_ecx = r_esi;
    /* 004202d1: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x4202d6u); f_00419130();
    /* 004202d6: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004202dc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004202de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004202e3: and eax, 0xfffffd7f */ {  u32 a = r_eax; u32 b = 0xfffffd7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004202e8: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004202ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004202f0: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4202f6u); call_ind(t); }
    /* 004202f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004202f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004202fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004202fb: ret 4 */ FN_RET(0x004202af); r_esp += 8; return;
}

void f_004202c0(void)
{
    FN_ENTER(0x004202c0);
    /* 004202c0: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 004202c1: test byte ptr [ecx], al */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 004202c3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004202c5: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004202cf: mov ecx, esi */ r_ecx = r_esi;
    /* 004202d1: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x4202d6u); f_00419130();
    /* 004202d6: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004202dc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004202de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004202e3: and eax, 0xfffffd7f */ {  u32 a = r_eax; u32 b = 0xfffffd7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004202e8: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004202ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004202f0: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4202f6u); call_ind(t); }
    /* 004202f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004202f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004202fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004202fb: ret 4 */ FN_RET(0x004202c0); r_esp += 8; return;
}

void f_004202fe(void)
{
    FN_ENTER(0x004202fe);
    /* 004202fe: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00420304: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00420306: je 0x420392 */ if (fZ) goto L_00420392;
L_0042030c:; BB(0x0042030c);
    /* 0042030c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042030e: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00420310: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00420312: mov ecx, esi */ r_ecx = r_esi;
    /* 00420314: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42031au); call_ind(t); }
    /* 0042031a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0042031e: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 00420324: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00420328: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0042032d: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00420332: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00420337: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0042033e: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00420343: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 00420348: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042034c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042034f: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 00420355: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0042035b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042035f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00420363: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x420368u); f_008003e0();
    /* 00420368: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042036b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042036c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042036d: ret 4 */ FN_RET(0x004202fe); r_esp += 8; return;
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x004202fe); r_esp += 8; return;
}

void f_00420370(void)
{
    FN_ENTER(0x00420370);
    /* 00420370: mov ecx, esi */ r_ecx = r_esi;
    /* 00420372: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x420377u); f_007aa094();
    /* 00420377: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042037c: mov ecx, esi */ r_ecx = r_esi;
    /* 0042037e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x420383u); f_007aaa30();
    /* 00420383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420385: je 0x420392 */ if (fZ) goto L_00420392;
L_00420387:; BB(0x00420387);
    /* 00420387: push 0x8fc300 */ { u32 v = 0x8fc300u; r_esp -= 4; W32(r_esp, v); }
    /* 0042038c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x420391u); f_00814f0c();
    /* 00420391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00420392:; BB(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x00420370); r_esp += 8; return;
}

void f_00420392(void)
{
    FN_ENTER(0x00420392);
    /* 00420392: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420397: ret 4 */ FN_RET(0x00420392); r_esp += 8; return;
}

void f_004203cc(void) /* sub_4203CC */
{
    FN_ENTER(0x004203cc);
    /* 004203cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004203cd: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004203d0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004203d2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004203d6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004203d9: ja 0x4206b4 */ if ((!fC&&!fZ)) goto L_004206b4;
L_004203df:; BB(0x004203df);
    /* 004203df: mov eax, dword ptr [eax*4 + 0x8fb5d4] */ r_eax = R32((u32)(r_eax*4+0x8fb5d4u));
    /* 004203e6: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x004203cc); r_esp += 8; return;
}

void f_004203e8(void)
{
    FN_ENTER(0x004203e8);
    /* 004203e8: mov eax, dword ptr [ebp + 0x86c] */ r_eax = R32((u32)(r_ebp+0x86cu));
    /* 004203ee: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004203f3: jl 0x420419 */ if ((fS!=fO)) goto L_00420419;
L_004203f5:; BB(0x004203f5);
    /* 004203f5: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004203fb: mov eax, dword ptr [ebp + 0x6ec] */ r_eax = R32((u32)(r_ebp+0x6ecu));
    /* 00420401: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420403: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420406: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x42040bu); f_004c6c54();
    /* 0042040b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042040d: je 0x420419 */ if (fZ) goto L_00420419;
L_0042040f:; BB(0x0042040f);
    /* 0042040f: mov dword ptr [ebp + 0x86c], 0x1c2 */ W32((u32)(r_ebp+0x86cu), 0x1c2u);
L_00420419:; BB(0x00420419);
    /* 00420419: mov eax, dword ptr [ebp + 0x870] */ r_eax = R32((u32)(r_ebp+0x870u));
    /* 0042041f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420422: jne 0x4206b4 */ if (!fZ) goto L_004206b4;
L_00420428:; BB(0x00420428);
    /* 00420428: jmp 0x4206bb */ goto L_004206bb;
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x004203e8); r_esp += 8; return;
L_004206bb:; BB(0x004206bb);
    /* 004206bb: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004206c1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004206c3: je 0x4206b4 */ if (fZ) goto L_004206b4;
L_004206c5:; BB(0x004206c5);
    /* 004206c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004206c7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004206c9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004206cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004206ce: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4206d4u); call_ind(t); }
    /* 004206d4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004206d8: mov byte ptr [esp + 0xc], 0x12 */ W8((u32)(r_esp+0xcu), 0x12u);
    /* 004206dd: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004206e2: mov byte ptr [esp + 0xd], 5 */ W8((u32)(r_esp+0xdu), 0x5u);
    /* 004206e7: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004206ec: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 004206f2: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004206f7: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 004206fc: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00420700: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00420707: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0042070b: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 00420711: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 00420717: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0042071b: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0042071f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x420724u); f_008003e0();
    /* 00420724: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420728: ret 4 */ FN_RET(0x004203e8); r_esp += 8; return;
}

void f_0042042d(void)
{
    FN_ENTER(0x0042042d);
    /* 0042042d: mov eax, dword ptr [ebp + 0x870] */ r_eax = R32((u32)(r_ebp+0x870u));
    /* 00420433: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420436: jne 0x4206b4 */ if (!fZ) goto L_004206b4;
L_0042043c:; BB(0x0042043c);
    /* 0042043c: jmp 0x42072b */ goto L_0042072b;
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x0042042d); r_esp += 8; return;
L_0042072b:; BB(0x0042072b);
    /* 0042072b: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00420731: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00420733: je 0x4206b4 */ if (fZ) goto L_004206b4;
L_00420739:; BB(0x00420739);
    /* 00420739: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042073b: call 0x4207c4 */ r_esp -= 4; W32(r_esp, 0x420740u); f_004207c4();
    /* 00420740: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420744: ret 4 */ FN_RET(0x0042042d); r_esp += 8; return;
}

void f_00420441(void)
{
    FN_ENTER(0x00420441);
    /* 00420441: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420443: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x420448u); f_00419ff0();
    /* 00420448: jmp 0x4206b4 */ goto L_004206b4;
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x00420441); r_esp += 8; return;
}

void f_0042044d(void)
{
    FN_ENTER(0x0042044d);
    /* 0042044d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042044f: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x420454u); f_0041a004();
    /* 00420454: jmp 0x4206b4 */ goto L_004206b4;
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x0042044d); r_esp += 8; return;
}

void f_00420459(void)
{
    FN_ENTER(0x00420459);
    /* 00420459: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0042045e: movsx ecx, word ptr [ebp + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 00420465: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00420467: mov eax, ecx */ r_eax = r_ecx;
    /* 00420469: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0042046c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0042046f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00420471: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00420474: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0042047b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042047d: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00420480: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420482: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420484: jg 0x42048f */ if ((!fZ&&fS==fO)) goto L_0042048f;
L_00420486:; BB(0x00420486);
    /* 00420486: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00420488: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0042048b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042048d: jle 0x420486 */ if ((fZ||fS!=fO)) goto L_00420486;
L_0042048f:; BB(0x0042048f);
    /* 0042048f: mov word ptr [ebp + 0x688], cx */ W16((u32)(r_ebp+0x688u), (u16)r_ecx);
    /* 00420496: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 0042049c: call 0x42620c */ r_esp -= 4; W32(r_esp, 0x4204a1u); f_0042620c();
    /* 004204a1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004204a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004204a5: ret 4 */ FN_RET(0x00420459); r_esp += 8; return;
}

void f_004204a8(void)
{
    FN_ENTER(0x004204a8);
    /* 004204a8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004204ab: mov eax, 8 */ r_eax = 0x8u;
    /* 004204b0: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004204b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004204b9: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4204bfu); call_ind(t); }
    /* 004204bf: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 004204c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004204cb: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x4204d0u); f_00419130();
    /* 004204d0: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004204d6: or eax, 0x680 */ {  u32 a = r_eax; u32 b = 0x680u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004204db: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004204e0: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004204e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004204e8: mov dword ptr [ebp + 0x86c], edx */ W32((u32)(r_ebp+0x86cu), r_edx);
    /* 004204ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004204ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004204f0: mov dword ptr [ebp + 0x870], edx */ W32((u32)(r_ebp+0x870u), r_edx);
    /* 004204f6: add ebp, 0x644 */ {  u32 a = r_ebp; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004204fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004204fd: push 0x31a */ { u32 v = 0x31au; r_esp -= 4; W32(r_esp, v); }
    /* 00420502: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x420507u); f_00814298();
    /* 00420507: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042050a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042050d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042050e: ret 4 */ FN_RET(0x004204a8); r_esp += 8; return;
}

void f_00420511(void)
{
    FN_ENTER(0x00420511);
    /* 00420511: mov eax, dword ptr [ebp + 0x870] */ r_eax = R32((u32)(r_ebp+0x870u));
    /* 00420517: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042051a: jne 0x4206b4 */ if (!fZ) goto L_004206b4;
L_00420520:; BB(0x00420520);
    /* 00420520: jmp 0x420747 */ goto L_00420747;
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x00420511); r_esp += 8; return;
L_00420747:; BB(0x00420747);
    /* 00420747: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0042074d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042074f: je 0x4206b4 */ if (fZ) goto L_004206b4;
L_00420755:; BB(0x00420755);
    /* 00420755: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00420757: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00420759: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0042075c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042075e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x420764u); call_ind(t); }
    /* 00420764: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00420768: mov byte ptr [esp + 0x20], 0x12 */ W8((u32)(r_esp+0x20u), 0x12u);
    /* 0042076d: mov edx, 0x17 */ r_edx = 0x17u;
    /* 00420772: mov byte ptr [esp + 0x21], 5 */ W8((u32)(r_esp+0x21u), 0x5u);
    /* 00420777: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0042077c: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 00420782: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 00420787: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 0042078c: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00420790: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00420797: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0042079b: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 004207a1: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 004207a7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004207ab: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 004207af: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4207b4u); f_008003e0();
    /* 004207b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004207b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004207b8: ret 4 */ FN_RET(0x00420511); r_esp += 8; return;
}

void f_00420525(void)
{
    FN_ENTER(0x00420525);
    /* 00420525: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420527: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42052cu); f_007aa094();
    /* 0042052c: mov eax, dword ptr [ebp + 0x870] */ r_eax = R32((u32)(r_ebp+0x870u));
    /* 00420532: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420534: je 0x420643 */ if (fZ) goto L_00420643;
L_0042053a:; BB(0x0042053a);
    /* 0042053a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042053d: jne 0x42059a */ if (!fZ) goto L_0042059a;
L_0042053f:; BB(0x0042053f);
    /* 0042053f: lea edx, [ebp + 0x644] */ r_edx = (u32)(r_ebp+0x644u);
    /* 00420545: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420549: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042054a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042054b: push 0x326 */ { u32 v = 0x326u; r_esp -= 4; W32(r_esp, v); }
    /* 00420550: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x420555u); f_008144b0();
    /* 00420555: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420558: mov eax, dword ptr [ebp + 0x86c] */ r_eax = R32((u32)(r_ebp+0x86cu));
    /* 0042055e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420561: mov dword ptr [ebp + 0x86c], eax */ W32((u32)(r_ebp+0x86cu), r_eax);
    /* 00420567: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042056c: jl 0x4206b4 */ if ((fS!=fO)) goto L_004206b4;
L_00420572:; BB(0x00420572);
    /* 00420572: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 00420578: mov dword ptr [ebp + 0x870], 2 */ W32((u32)(r_ebp+0x870u), 0x2u);
    /* 00420582: mov eax, 0xa */ r_eax = 0xau;
    /* 00420587: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0042058e: call 0x42620c */ r_esp -= 4; W32(r_esp, 0x420593u); f_0042620c();
    /* 00420593: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420597: ret 4 */ FN_RET(0x00420525); r_esp += 8; return;
L_0042059a:; BB(0x0042059a);
    /* 0042059a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042059d: jne 0x4206b4 */ if (!fZ) goto L_004206b4;
L_004205a3:; BB(0x004205a3);
    /* 004205a3: fld dword ptr [0x8fbcd8] */ FPUSH(R_F32((u32)(0x8fbcd8u)));
    /* 004205a9: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004205ac: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004205b0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4205b5u); f_0082dcbc();
    /* 004205b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004205b8: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004205bb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4205c0u); f_0082ddd8();
    /* 004205c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004205c4: mov eax, dword ptr [ebp + 0x768] */ r_eax = R32((u32)(r_ebp+0x768u));
    /* 004205ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004205cc: je 0x4205f5 */ if (fZ) goto L_004205f5;
L_004205ce:; BB(0x004205ce);
    /* 004205ce: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004205d1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004205d5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004205d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004205db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004205de: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004205e2: mov dword ptr [esp + 8], 0x3f666666 */ W32((u32)(r_esp+0x8u), 0x3f666666u);
    /* 004205ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004205ec: call 0x41c79c */ r_esp -= 4; W32(r_esp, 0x4205f1u); f_0041c79c();
    /* 004205f1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_004205f5:; BB(0x004205f5);
    /* 004205f5: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004205fb: fcom dword ptr [0x8fbcd4] */ fx_compare(ST(0), R_F32((u32)(0x8fbcd4u))); 
    /* 00420601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00420603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00420604: jb 0x4207bb */ if (fC) goto L_004207bb;
L_0042060a:; BB(0x0042060a);
    /* 0042060a: fcomp dword ptr [0x8fbcd0] */ fx_compare(ST(0), R_F32((u32)(0x8fbcd0u))); FPOP();
    /* 00420610: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00420612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00420613: ja 0x4206b4 */ if ((!fC&&!fZ)) goto L_004206b4;
L_00420619:; BB(0x00420619);
    /* 00420619: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042061c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420620: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420624: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00420628: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042062a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042062d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00420631: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00420635: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420637: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x42063cu); f_0052069c();
    /* 0042063c: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042063f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420640: ret 4 */ FN_RET(0x00420525); r_esp += 8; return;
L_00420643:; BB(0x00420643);
    /* 00420643: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420648: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042064a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42064fu); f_007aaa30();
    /* 0042064f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420651: je 0x42065c */ if (fZ) goto L_0042065c;
L_00420653:; BB(0x00420653);
    /* 00420653: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420655: call 0x420e90 */ r_esp -= 4; W32(r_esp, 0x42065au); f_00420e90();
    /* 0042065a: jmp 0x42068c */ goto L_0042068c;
L_0042065c:; BB(0x0042065c);
    /* 0042065c: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420661: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420663: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x420668u); f_007aaa30();
    /* 00420668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042066a: je 0x420675 */ if (fZ) goto L_00420675;
L_0042066c:; BB(0x0042066c);
    /* 0042066c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042066e: call 0x420c74 */ r_esp -= 4; W32(r_esp, 0x420673u); f_00420c74();
    /* 00420673: jmp 0x42068c */ goto L_0042068c;
L_00420675:; BB(0x00420675);
    /* 00420675: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042067a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042067c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x420681u); f_007aaa30();
    /* 00420681: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420683: je 0x42068c */ if (fZ) goto L_0042068c;
L_00420685:; BB(0x00420685);
    /* 00420685: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00420687: call 0x420a58 */ r_esp -= 4; W32(r_esp, 0x42068cu); f_00420a58();
L_0042068c:; BB(0x0042068c);
    /* 0042068c: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00420693: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420696: je 0x4206b4 */ if (fZ) goto L_004206b4;
L_00420698:; BB(0x00420698);
    /* 00420698: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042069b: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004206a1: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004206a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004206a5: call 0x4ce228 */ r_esp -= 4; W32(r_esp, 0x4206aau); f_004ce228();
    /* 004206aa: mov dword ptr [ebp + 0x870], 1 */ W32((u32)(r_ebp+0x870u), 0x1u);
L_004206b4:; BB(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x00420525); r_esp += 8; return;
L_004207bb:; BB(0x004207bb);
    /* 004207bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004207bd: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004207c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004207c1: ret 4 */ FN_RET(0x00420525); r_esp += 8; return;
}

void f_004206b4(void)
{
    FN_ENTER(0x004206b4);
    /* 004206b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004206b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004206b8: ret 4 */ FN_RET(0x004206b4); r_esp += 8; return;
}

void f_00420780(void)
{
    FN_ENTER(0x00420780);
    /* 00420780: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00420782: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 00420787: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 0042078c: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00420790: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00420797: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0042079b: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 004207a1: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 004207a7: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004207ab: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 004207af: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4207b4u); f_008003e0();
    /* 004207b4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004207b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004207b8: ret 4 */ FN_RET(0x00420780); r_esp += 8; return;
}

void f_004207c4(void) /* sub_4207C4 */
{
    FN_ENTER(0x004207c4);
    /* 004207c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004207c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004207c6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004207c8: mov eax, dword ptr [ebx + 0x768] */ r_eax = R32((u32)(r_ebx+0x768u));
    /* 004207ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004207d0: je 0x42083b */ if (fZ) goto L_0042083b;
L_004207d2:; BB(0x004207d2);
    /* 004207d2: mov edi, dword ptr [ebx + 0x684] */ r_edi = R32((u32)(r_ebx+0x684u));
    /* 004207d8: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004207db: jge 0x4207f9 */ if ((fS==fO)) goto L_004207f9;
L_004207dd:; BB(0x004207dd);
    /* 004207dd: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4207e2u); f_00420a44();
    /* 004207e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004207e4: jne 0x4207ed */ if (!fZ) goto L_004207ed;
L_004207e6:; BB(0x004207e6);
    /* 004207e6: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 004207eb: jmp 0x420816 */ goto L_00420816;
L_004207ed:; BB(0x004207ed);
    /* 004207ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004207f0: jne 0x420816 */ if (!fZ) goto L_00420816;
L_004207f2:; BB(0x004207f2);
    /* 004207f2: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 004207f7: jmp 0x420816 */ goto L_00420816;
L_004207f9:; BB(0x004207f9);
    /* 004207f9: add edi, -0x32 */ {  u32 a = r_edi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004207fc: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x420801u); f_00420a44();
    /* 00420801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420803: jne 0x42080c */ if (!fZ) goto L_0042080c;
L_00420805:; BB(0x00420805);
    /* 00420805: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0042080a: jmp 0x420816 */ goto L_00420816;
L_0042080c:; BB(0x0042080c);
    /* 0042080c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042080f: jne 0x420816 */ if (!fZ) goto L_00420816;
L_00420811:; BB(0x00420811);
    /* 00420811: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00420816:; BB(0x00420816);
    /* 00420816: mov eax, dword ptr [ebx + 0x684] */ r_eax = R32((u32)(r_ebx+0x684u));
L_0042081c:; BB(0x0042081c);
    /* 0042081c: mov ecx, dword ptr [edx + edi*4] */ r_ecx = R32((u32)(r_edx+r_edi*4));
    /* 0042081f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420822: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420825: jne 0x4208e6 */ if (!fZ) goto L_004208e6;
L_0042082b:; BB(0x0042082b);
    /* 0042082b: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 00420835: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420837: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00420839: jmp 0x42081c */ goto L_0042081c;
L_0042083b:; BB(0x0042083b);
    /* 0042083b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042083d: call 0x42093c */ r_esp -= 4; W32(r_esp, 0x420842u); f_0042093c();
    /* 00420842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00420844: je 0x420849 */ if (fZ) goto L_00420849;
L_00420846:; BB(0x00420846);
    /* 00420846: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420847: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00420848: ret  */ FN_RET(0x004207c4); r_esp += 4; return;
L_00420849:; BB(0x00420849);
    /* 00420849: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42084eu); f_00420a44();
    /* 0042084e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420850: jne 0x420867 */ if (!fZ) goto L_00420867;
L_00420852:; BB(0x00420852);
    /* 00420852: mov eax, dword ptr [ebx + 0x684] */ r_eax = R32((u32)(r_ebx+0x684u));
    /* 00420858: mov edi, dword ptr [eax*4 + 0x9a3cd0] */ r_edi = R32((u32)(r_eax*4+0x9a3cd0u));
    /* 0042085f: mov dword ptr [ebx + 0x684], edi */ W32((u32)(r_ebx+0x684u), r_edi);
    /* 00420865: jmp 0x420887 */ goto L_00420887;
L_00420867:; BB(0x00420867);
    /* 00420867: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042086a: jne 0x420881 */ if (!fZ) goto L_00420881;
L_0042086c:; BB(0x0042086c);
    /* 0042086c: mov eax, dword ptr [ebx + 0x684] */ r_eax = R32((u32)(r_ebx+0x684u));
    /* 00420872: mov edi, dword ptr [eax*4 + 0x9a3d50] */ r_edi = R32((u32)(r_eax*4+0x9a3d50u));
    /* 00420879: mov dword ptr [ebx + 0x684], edi */ W32((u32)(r_ebx+0x684u), r_edi);
    /* 0042087f: jmp 0x420887 */ goto L_00420887;
L_00420881:; BB(0x00420881);
    /* 00420881: mov edi, dword ptr [ebx + 0x684] */ r_edi = R32((u32)(r_ebx+0x684u));
L_00420887:; BB(0x00420887);
    /* 00420887: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042088a: jge 0x4208a8 */ if ((fS==fO)) goto L_004208a8;
L_0042088c:; BB(0x0042088c);
    /* 0042088c: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x420891u); f_00420a44();
    /* 00420891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420893: jne 0x42089c */ if (!fZ) goto L_0042089c;
L_00420895:; BB(0x00420895);
    /* 00420895: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0042089a: jmp 0x4208c5 */ goto L_004208c5;
L_0042089c:; BB(0x0042089c);
    /* 0042089c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042089f: jne 0x4208c5 */ if (!fZ) goto L_004208c5;
L_004208a1:; BB(0x004208a1);
    /* 004208a1: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 004208a6: jmp 0x4208c5 */ goto L_004208c5;
L_004208a8:; BB(0x004208a8);
    /* 004208a8: add edi, -0x32 */ {  u32 a = r_edi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004208ab: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4208b0u); f_00420a44();
    /* 004208b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208b2: jne 0x4208bb */ if (!fZ) goto L_004208bb;
L_004208b4:; BB(0x004208b4);
    /* 004208b4: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 004208b9: jmp 0x4208c5 */ goto L_004208c5;
L_004208bb:; BB(0x004208bb);
    /* 004208bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208be: jne 0x4208c5 */ if (!fZ) goto L_004208c5;
L_004208c0:; BB(0x004208c0);
    /* 004208c0: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_004208c5:; BB(0x004208c5);
    /* 004208c5: mov eax, dword ptr [ebx + 0x684] */ r_eax = R32((u32)(r_ebx+0x684u));
L_004208cb:; BB(0x004208cb);
    /* 004208cb: mov ecx, dword ptr [edx + edi*4] */ r_ecx = R32((u32)(r_edx+r_edi*4));
    /* 004208ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004208d1: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208d4: jne 0x420912 */ if (!fZ) goto L_00420912;
L_004208d6:; BB(0x004208d6);
    /* 004208d6: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 004208e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004208e2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004208e4: jmp 0x4208cb */ goto L_004208cb;
L_004208e6:; BB(0x004208e6);
    /* 004208e6: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004208e9: je 0x4208fc */ if (fZ) goto L_004208fc;
L_004208eb:; BB(0x004208eb);
    /* 004208eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004208ec: mov dword ptr [ebx + 0x684], eax */ W32((u32)(r_ebx+0x684u), r_eax);
    /* 004208f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004208f4: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4208f9u); f_0041a808();
    /* 004208f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004208fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004208fb: ret  */ FN_RET(0x004207c4); r_esp += 4; return;
L_004208fc:; BB(0x004208fc);
    /* 004208fc: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 00420906: mov eax, 0x32 */ r_eax = 0x32u;
    /* 0042090b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0042090d: jmp 0x42081c */ goto L_0042081c;
L_00420912:; BB(0x00420912);
    /* 00420912: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420915: je 0x420928 */ if (fZ) goto L_00420928;
L_00420917:; BB(0x00420917);
    /* 00420917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420918: mov dword ptr [ebx + 0x684], eax */ W32((u32)(r_ebx+0x684u), r_eax);
    /* 0042091e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00420920: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x420925u); f_0041a808();
    /* 00420925: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420926: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00420927: ret  */ FN_RET(0x004207c4); r_esp += 4; return;
L_00420928:; BB(0x00420928);
    /* 00420928: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 00420932: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00420937: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00420939: jmp 0x4208cb */ goto L_004208cb;
}

void f_0042093c(void) /* sub_42093C */
{
    FN_ENTER(0x0042093c);
    /* 0042093c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042093d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420940: mov esi, ecx */ r_esi = r_ecx;
    /* 00420942: movsx eax, word ptr [esi + 0x68a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x68au));
    /* 00420949: cmp ax, word ptr [esi + 0x334] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esi+0x334u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00420950: jge 0x420959 */ if ((fS==fO)) goto L_00420959;
L_00420952:; BB(0x00420952);
    /* 00420952: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420954: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420957: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420958: ret  */ FN_RET(0x0042093c); r_esp += 4; return;
L_00420959:; BB(0x00420959);
    /* 00420959: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042095b: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 00420962: mov ecx, esi */ r_ecx = r_esi;
    /* 00420964: call 0x425af4 */ r_esp -= 4; W32(r_esp, 0x420969u); f_00425af4();
    /* 00420969: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 0042096f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420971: jne 0x4209db */ if (!fZ) goto L_004209db;
L_00420973:; BB(0x00420973);
    /* 00420973: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00420975: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00420977: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00420979: mov ecx, esi */ r_ecx = r_esi;
    /* 0042097b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x420981u); call_ind(t); }
    /* 00420981: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00420985: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0042098a: mov edx, 0xd */ r_edx = 0xdu;
    /* 0042098f: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 00420994: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00420999: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0042099f: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004209a4: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004209a9: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004209ad: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004209b4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004209b8: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004209be: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004209c4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004209c8: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 004209cc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4209d1u); f_008003e0();
    /* 004209d1: mov eax, 1 */ r_eax = 0x1u;
    /* 004209d6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004209d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004209da: ret  */ FN_RET(0x0042093c); r_esp += 4; return;
L_004209db:; BB(0x004209db);
    /* 004209db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004209dd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004209df: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004209e1: mov ecx, esi */ r_ecx = r_esi;
    /* 004209e3: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4209e9u); call_ind(t); }
    /* 004209e9: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004209ed: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004209f1: mov edx, 0xb */ r_edx = 0xbu;
    /* 004209f6: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004209fb: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00420a00: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 00420a06: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00420a0b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00420a10: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00420a13: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 00420a1a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00420a1e: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 00420a24: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 00420a2a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00420a2e: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00420a32: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x420a37u); f_008003e0();
    /* 00420a37: mov eax, 1 */ r_eax = 0x1u;
    /* 00420a3c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420a3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420a40: ret  */ FN_RET(0x0042093c); r_esp += 4; return;
}

void f_00420a44(void) /* sub_420A44 */
{
    FN_ENTER(0x00420a44);
    /* 00420a44: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x420a49u); f_00520e6c();
    /* 00420a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00420a4b: je 0x420a53 */ if (fZ) goto L_00420a53;
L_00420a4d:; BB(0x00420a4d);
    /* 00420a4d: mov eax, 1 */ r_eax = 0x1u;
    /* 00420a52: ret  */ FN_RET(0x00420a44); r_esp += 4; return;
L_00420a53:; BB(0x00420a53);
    /* 00420a53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00420a55: ret  */ FN_RET(0x00420a44); r_esp += 4; return;
}

void f_00420a58(void) /* sub_420A58 */
{
    FN_ENTER(0x00420a58);
    /* 00420a58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00420a59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00420a5a: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420a5d: mov esi, ecx */ r_esi = r_ecx;
    /* 00420a5f: mov eax, dword ptr [0x9a3f00] */ r_eax = R32((u32)(0x9a3f00u));
    /* 00420a64: mov edx, dword ptr [0x9a3f04] */ r_edx = R32((u32)(0x9a3f04u));
    /* 00420a6a: mov dword ptr [esp + 0x1c], 0x41000000 */ W32((u32)(r_esp+0x1cu), 0x41000000u);
    /* 00420a72: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00420a76: mov eax, dword ptr [0x9a3f0c] */ r_eax = R32((u32)(0x9a3f0cu));
    /* 00420a7b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00420a7f: mov edx, dword ptr [esi + 0x690] */ r_edx = R32((u32)(r_esi+0x690u));
    /* 00420a85: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00420a89: mov eax, dword ptr [0x9a3f10] */ r_eax = R32((u32)(0x9a3f10u));
    /* 00420a8e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00420a92: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00420a95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420a97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00420a99: jle 0x420aab */ if ((fZ||fS!=fO)) goto L_00420aab;
L_00420a9b:; BB(0x00420a9b);
    /* 00420a9b: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00420a9d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00420aa0: mov dword ptr [ebx + eax*4], ecx */ W32((u32)(r_ebx+r_eax*4), r_ecx);
    /* 00420aa3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420aa6: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420aa9: jl 0x420a9b */ if ((fS!=fO)) goto L_00420a9b;
L_00420aab:; BB(0x00420aab);
    /* 00420aab: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00420ab2: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00420ab5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x420abau); f_0082dcbc();
    /* 00420aba: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00420abe: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00420ac1: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x420ac6u); f_0082ddd8();
    /* 00420ac6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00420aca: fld dword ptr [0x8fbf48] */ FPUSH(R_F32((u32)(0x8fbf48u)));
    /* 00420ad0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420ad4: fld dword ptr [0x8fbcbc] */ FPUSH(R_F32((u32)(0x8fbcbcu)));
    /* 00420ada: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420ade: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 00420ae4: fld dword ptr [0x8fbcb4] */ FPUSH(R_F32((u32)(0x8fbcb4u)));
    /* 00420aea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00420aec: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00420aee: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00420af0: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00420af3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420af5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00420af7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420af9: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00420afc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420afe: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00420b02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420b04: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00420b08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420b0a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00420b0c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00420b0e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00420b10: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00420b12: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420b14: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420b18: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00420b1a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420b1e: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420b26: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420b2a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00420b2c: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00420b2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420b30: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x420b35u); f_0050b7a4();
    /* 00420b35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420b38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420b3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420b3b: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420b42: mov ecx, esi */ r_ecx = r_esi;
    /* 00420b44: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420b49u); f_00520c70();
    /* 00420b49: fld dword ptr [0x8fbcb0] */ FPUSH(R_F32((u32)(0x8fbcb0u)));
    /* 00420b4f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00420b52:; BB(0x00420b52);
    /* 00420b52: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420b55: fcomp dword ptr [0x8fbcac] */ fx_compare(ST(0), R_F32((u32)(0x8fbcacu))); FPOP();
    /* 00420b5b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00420b5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00420b5e: jbe 0x420c5a */ if ((fC||fZ)) goto L_00420c5a;
L_00420b64:; BB(0x00420b64);
    /* 00420b64: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420b68: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420b6b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420b6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420b71: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00420b73: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420b75: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00420b79: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420b7b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420b7d: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00420b81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420b83: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420b87: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420b8b: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420b93: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x420b98u); f_00520e6c();
    /* 00420b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420b9a: je 0x420ba3 */ if (fZ) goto L_00420ba3;
L_00420b9c:; BB(0x00420b9c);
    /* 00420b9c: mov eax, 1 */ r_eax = 0x1u;
    /* 00420ba1: jmp 0x420ba5 */ goto L_00420ba5;
L_00420ba3:; BB(0x00420ba3);
    /* 00420ba3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00420ba5:; BB(0x00420ba5);
    /* 00420ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420ba7: jne 0x420bc2 */ if (!fZ) goto L_00420bc2;
L_00420ba9:; BB(0x00420ba9);
    /* 00420ba9: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420bad: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00420bb1: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420bb7: mov ecx, esi */ r_ecx = r_esi;
    /* 00420bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420bba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420bbb: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x420bc0u); f_0051fdf8();
    /* 00420bc0: jmp 0x420c14 */ goto L_00420c14;
L_00420bc2:; BB(0x00420bc2);
    /* 00420bc2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420bc5: jne 0x420c14 */ if (!fZ) goto L_00420c14;
L_00420bc7:; BB(0x00420bc7);
    /* 00420bc7: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00420bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420bcc: mov ebx, dword ptr [esi + 0x690] */ r_ebx = R32((u32)(r_esi+0x690u));
    /* 00420bd2: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420bd8: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x420bddu); f_006ac1a4();
    /* 00420bdd: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00420be1: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 00420be7: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 00420bed: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00420bf0: mov eax, dword ptr [esi + 0x77c] */ r_eax = R32((u32)(r_esi+0x77cu));
    /* 00420bf6: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00420bfc: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 00420c03: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00420c07: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420c0d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00420c0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00420c10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420c11: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x420c14u); call_ind(t); }
L_00420c14:; BB(0x00420c14);
    /* 00420c14: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420c17: fsub dword ptr [0x8fbca8] */ ST(0) = ST(0) - R_F32((u32)(0x8fbca8u));
    /* 00420c1d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00420c20: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x420c25u); f_0082d7b0();
    /* 00420c25: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00420c29: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x420c2eu); f_0082d838();
    /* 00420c2e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420c33: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420c38: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420c3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00420c3f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x420c44u); f_0082fa0c();
    /* 00420c44: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420c4a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x420c4fu); f_0082e1e8();
    /* 00420c4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00420c50: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x420c55u); f_0082da80();
    /* 00420c55: jmp 0x420b52 */ goto L_00420b52;
L_00420c5a:; BB(0x00420c5a);
    /* 00420c5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420c5d: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420c64: mov ecx, esi */ r_ecx = r_esi;
    /* 00420c66: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420c6bu); f_00520c70();
    /* 00420c6b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420c6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420c6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420c70: ret  */ FN_RET(0x00420a58); r_esp += 4; return;
}

void f_00420c74(void) /* sub_420C74 */
{
    FN_ENTER(0x00420c74);
    /* 00420c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00420c75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00420c76: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420c79: mov esi, ecx */ r_esi = r_ecx;
    /* 00420c7b: mov eax, dword ptr [0x9a3f00] */ r_eax = R32((u32)(0x9a3f00u));
    /* 00420c80: mov edx, dword ptr [0x9a3f04] */ r_edx = R32((u32)(0x9a3f04u));
    /* 00420c86: mov dword ptr [esp + 0x1c], 0x41000000 */ W32((u32)(r_esp+0x1cu), 0x41000000u);
    /* 00420c8e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00420c92: mov eax, dword ptr [0x9a3f0c] */ r_eax = R32((u32)(0x9a3f0cu));
    /* 00420c97: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00420c9b: mov edx, dword ptr [esi + 0x690] */ r_edx = R32((u32)(r_esi+0x690u));
    /* 00420ca1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00420ca5: mov eax, dword ptr [0x9a3f10] */ r_eax = R32((u32)(0x9a3f10u));
    /* 00420caa: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00420cae: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00420cb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420cb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00420cb5: jle 0x420cc7 */ if ((fZ||fS!=fO)) goto L_00420cc7;
L_00420cb7:; BB(0x00420cb7);
    /* 00420cb7: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00420cb9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00420cbc: mov dword ptr [ebx + eax*4], ecx */ W32((u32)(r_ebx+r_eax*4), r_ecx);
    /* 00420cbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420cc2: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420cc5: jl 0x420cb7 */ if ((fS!=fO)) goto L_00420cb7;
L_00420cc7:; BB(0x00420cc7);
    /* 00420cc7: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00420cce: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00420cd1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x420cd6u); f_0082dcbc();
    /* 00420cd6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00420cda: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00420cdd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x420ce2u); f_0082ddd8();
    /* 00420ce2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00420ce6: fld dword ptr [0x8fbf48] */ FPUSH(R_F32((u32)(0x8fbf48u)));
    /* 00420cec: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420cf0: fld dword ptr [0x8fbc98] */ FPUSH(R_F32((u32)(0x8fbc98u)));
    /* 00420cf6: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420cfa: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 00420d00: fld dword ptr [0x8fbc90] */ FPUSH(R_F32((u32)(0x8fbc90u)));
    /* 00420d06: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00420d08: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00420d0a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00420d0c: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00420d0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d11: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00420d13: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d15: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00420d18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d1a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00420d1e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d20: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00420d24: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d26: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00420d28: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00420d2a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00420d2c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00420d2e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d30: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420d34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00420d36: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420d3a: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420d42: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420d46: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00420d48: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00420d4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420d4c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x420d51u); f_0050b7a4();
    /* 00420d51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420d54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420d56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420d57: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420d5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420d5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00420d60: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420d65u); f_00520c70();
    /* 00420d65: fld dword ptr [0x8fbc8c] */ FPUSH(R_F32((u32)(0x8fbc8cu)));
    /* 00420d6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00420d6e:; BB(0x00420d6e);
    /* 00420d6e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420d71: fcomp dword ptr [0x8fbc88] */ fx_compare(ST(0), R_F32((u32)(0x8fbc88u))); FPOP();
    /* 00420d77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00420d79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00420d7a: jbe 0x420e76 */ if ((fC||fZ)) goto L_00420e76;
L_00420d80:; BB(0x00420d80);
    /* 00420d80: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420d84: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420d87: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420d8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d8d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00420d8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d91: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00420d95: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d97: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420d99: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00420d9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d9f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420da3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420da7: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420daf: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x420db4u); f_00520e6c();
    /* 00420db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420db6: je 0x420dbf */ if (fZ) goto L_00420dbf;
L_00420db8:; BB(0x00420db8);
    /* 00420db8: mov eax, 1 */ r_eax = 0x1u;
    /* 00420dbd: jmp 0x420dc1 */ goto L_00420dc1;
L_00420dbf:; BB(0x00420dbf);
    /* 00420dbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00420dc1:; BB(0x00420dc1);
    /* 00420dc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420dc3: jne 0x420dde */ if (!fZ) goto L_00420dde;
L_00420dc5:; BB(0x00420dc5);
    /* 00420dc5: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420dc9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00420dcd: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420dd3: mov ecx, esi */ r_ecx = r_esi;
    /* 00420dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420dd7: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x420ddcu); f_0051fdf8();
    /* 00420ddc: jmp 0x420e30 */ goto L_00420e30;
L_00420dde:; BB(0x00420dde);
    /* 00420dde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420de1: jne 0x420e30 */ if (!fZ) goto L_00420e30;
L_00420de3:; BB(0x00420de3);
    /* 00420de3: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00420de7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420de8: mov ebx, dword ptr [esi + 0x690] */ r_ebx = R32((u32)(r_esi+0x690u));
    /* 00420dee: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420df4: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x420df9u); f_006ac1a4();
    /* 00420df9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00420dfd: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 00420e03: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 00420e09: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00420e0c: mov eax, dword ptr [esi + 0x77c] */ r_eax = R32((u32)(r_esi+0x77cu));
    /* 00420e12: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00420e18: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 00420e1f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00420e23: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420e29: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00420e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00420e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420e2d: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x420e30u); call_ind(t); }
L_00420e30:; BB(0x00420e30);
    /* 00420e30: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420e33: fsub dword ptr [0x8fbc84] */ ST(0) = ST(0) - R_F32((u32)(0x8fbc84u));
    /* 00420e39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00420e3c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x420e41u); f_0082d7b0();
    /* 00420e41: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00420e45: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x420e4au); f_0082d838();
    /* 00420e4a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e4f: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e54: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00420e5b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x420e60u); f_0082fa0c();
    /* 00420e60: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420e66: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x420e6bu); f_0082e1e8();
    /* 00420e6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00420e6c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x420e71u); f_0082da80();
    /* 00420e71: jmp 0x420d6e */ goto L_00420d6e;
L_00420e76:; BB(0x00420e76);
    /* 00420e76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e79: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e80: mov ecx, esi */ r_ecx = r_esi;
    /* 00420e82: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420e87u); f_00520c70();
    /* 00420e87: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420e8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420e8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420e8c: ret  */ FN_RET(0x00420c74); r_esp += 4; return;
}

void f_00420d20(void)
{
    FN_ENTER(0x00420d20);
    /* 00420d20: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00420d24: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d26: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00420d28: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00420d2a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00420d2c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00420d2e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d30: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420d34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00420d36: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420d3a: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420d42: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420d46: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00420d48: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00420d4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420d4c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x420d51u); f_0050b7a4();
    /* 00420d51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420d54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420d56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420d57: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420d5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420d5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00420d60: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420d65u); f_00520c70();
    /* 00420d65: fld dword ptr [0x8fbc8c] */ FPUSH(R_F32((u32)(0x8fbc8cu)));
    /* 00420d6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00420d6e:; BB(0x00420d6e);
    /* 00420d6e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420d71: fcomp dword ptr [0x8fbc88] */ fx_compare(ST(0), R_F32((u32)(0x8fbc88u))); FPOP();
    /* 00420d77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00420d79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00420d7a: jbe 0x420e76 */ if ((fC||fZ)) goto L_00420e76;
L_00420d80:; BB(0x00420d80);
    /* 00420d80: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00420d84: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420d87: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00420d8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d8d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00420d8f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d91: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00420d95: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00420d97: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420d99: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00420d9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00420d9f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00420da3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00420da7: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00420daf: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x420db4u); f_00520e6c();
    /* 00420db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420db6: je 0x420dbf */ if (fZ) goto L_00420dbf;
L_00420db8:; BB(0x00420db8);
    /* 00420db8: mov eax, 1 */ r_eax = 0x1u;
    /* 00420dbd: jmp 0x420dc1 */ goto L_00420dc1;
L_00420dbf:; BB(0x00420dbf);
    /* 00420dbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00420dc1:; BB(0x00420dc1);
    /* 00420dc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420dc3: jne 0x420dde */ if (!fZ) goto L_00420dde;
L_00420dc5:; BB(0x00420dc5);
    /* 00420dc5: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00420dc9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00420dcd: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420dd3: mov ecx, esi */ r_ecx = r_esi;
    /* 00420dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420dd7: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x420ddcu); f_0051fdf8();
    /* 00420ddc: jmp 0x420e30 */ goto L_00420e30;
L_00420dde:; BB(0x00420dde);
    /* 00420dde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420de1: jne 0x420e30 */ if (!fZ) goto L_00420e30;
L_00420de3:; BB(0x00420de3);
    /* 00420de3: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00420de7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420de8: mov ebx, dword ptr [esi + 0x690] */ r_ebx = R32((u32)(r_esi+0x690u));
    /* 00420dee: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420df4: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x420df9u); f_006ac1a4();
    /* 00420df9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00420dfd: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 00420e03: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 00420e09: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00420e0c: mov eax, dword ptr [esi + 0x77c] */ r_eax = R32((u32)(r_esi+0x77cu));
    /* 00420e12: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00420e18: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 00420e1f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00420e23: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 00420e29: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00420e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00420e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420e2d: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x420e30u); call_ind(t); }
L_00420e30:; BB(0x00420e30);
    /* 00420e30: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00420e33: fsub dword ptr [0x8fbc84] */ ST(0) = ST(0) - R_F32((u32)(0x8fbc84u));
    /* 00420e39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00420e3c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x420e41u); f_0082d7b0();
    /* 00420e41: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00420e45: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x420e4au); f_0082d838();
    /* 00420e4a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e4f: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e54: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00420e59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00420e5b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x420e60u); f_0082fa0c();
    /* 00420e60: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420e66: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x420e6bu); f_0082e1e8();
    /* 00420e6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00420e6c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x420e71u); f_0082da80();
    /* 00420e71: jmp 0x420d6e */ goto L_00420d6e;
L_00420e76:; BB(0x00420e76);
    /* 00420e76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e79: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e80: mov ecx, esi */ r_ecx = r_esi;
    /* 00420e82: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420e87u); f_00520c70();
    /* 00420e87: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420e8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00420e8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420e8c: ret  */ FN_RET(0x00420d20); r_esp += 4; return;
}

void f_00420e90(void) /* sub_420E90 */
{
    FN_ENTER(0x00420e90);
    /* 00420e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00420e91: mov edi, ecx */ r_edi = r_ecx;
    /* 00420e93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420e95: mov ecx, edi */ r_ecx = r_edi;
    /* 00420e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e98: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420e9f: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420ea4u); f_00520c70();
    /* 00420ea4: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x420ea9u); f_00420a44();
    /* 00420ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420eab: jne 0x420ec1 */ if (!fZ) goto L_00420ec1;
L_00420ead:; BB(0x00420ead);
    /* 00420ead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00420eaf: push 0x9a3f00 */ { u32 v = 0x9a3f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00420eb4: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00420eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420eb8: mov ecx, edi */ r_ecx = r_edi;
    /* 00420eba: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x420ebfu); f_0051fdf8();
    /* 00420ebf: jmp 0x420ed2 */ goto L_00420ed2;
L_00420ec1:; BB(0x00420ec1);
    /* 00420ec1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420ec4: jne 0x420ed2 */ if (!fZ) goto L_00420ed2;
L_00420ec6:; BB(0x00420ec6);
    /* 00420ec6: push 0x9a3f00 */ { u32 v = 0x9a3f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00420ecb: mov ecx, edi */ r_ecx = r_edi;
    /* 00420ecd: call 0x41ece4 */ r_esp -= 4; W32(r_esp, 0x420ed2u); f_0041ece4();
L_00420ed2:; BB(0x00420ed2);
    /* 00420ed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420ed5: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 00420edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420edc: mov ecx, edi */ r_ecx = r_edi;
    /* 00420ede: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x420ee3u); f_00520c70();
    /* 00420ee3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00420ee4: ret  */ FN_RET(0x00420e90); r_esp += 4; return;
}

void f_00420ee8(void) /* sub_420EE8 */
{
    FN_ENTER(0x00420ee8);
    /* 00420ee8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00420ee9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420eea: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420eed: mov esi, ecx */ r_esi = r_ecx;
    /* 00420eef: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00420ef3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00420ef6: ja 0x42137c */ if ((!fC&&!fZ)) goto L_0042137c;
L_00420efc:; BB(0x00420efc);
    /* 00420efc: mov eax, dword ptr [eax*4 + 0x8fb604] */ r_eax = R32((u32)(r_eax*4+0x8fb604u));
    /* 00420f03: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x00420ee8); r_esp += 8; return;
}

void f_00420f05(void)
{
    FN_ENTER(0x00420f05);
    /* 00420f05: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00420f0b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00420f0d: je 0x42137c */ if (fZ) goto L_0042137c;
L_00420f13:; BB(0x00420f13);
    /* 00420f13: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00420f1a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420f1d: je 0x421060 */ if (fZ) goto L_00421060;
L_00420f23:; BB(0x00420f23);
    /* 00420f23: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420f26: jne 0x420f8e */ if (!fZ) goto L_00420f8e;
L_00420f28:; BB(0x00420f28);
    /* 00420f28: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00420f2a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00420f2c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00420f2e: mov ecx, esi */ r_ecx = r_esi;
    /* 00420f30: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x420f36u); call_ind(t); }
    /* 00420f36: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00420f3a: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 00420f40: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 00420f45: mov edx, 0xd */ r_edx = 0xdu;
    /* 00420f4a: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 00420f4f: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00420f54: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 00420f5b: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 00420f60: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 00420f65: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00420f69: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00420f6d: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 00420f73: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 00420f79: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00420f7d: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00420f81: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x420f86u); f_008003e0();
    /* 00420f86: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420f89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420f8b: ret 4 */ FN_RET(0x00420f05); r_esp += 8; return;
L_00420f8e:; BB(0x00420f8e);
    /* 00420f8e: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420f91: jne 0x420ff7 */ if (!fZ) goto L_00420ff7;
L_00420f93:; BB(0x00420f93);
    /* 00420f93: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00420f95: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00420f97: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00420f99: mov ecx, esi */ r_ecx = r_esi;
    /* 00420f9b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x420fa1u); call_ind(t); }
    /* 00420fa1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00420fa5: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 00420fab: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00420faf: mov edx, 0x15 */ r_edx = 0x15u;
    /* 00420fb4: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00420fb9: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00420fbe: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 00420fc5: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00420fca: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 00420fcf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00420fd3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00420fd6: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 00420fdc: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 00420fe2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00420fe6: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00420fea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x420fefu); f_008003e0();
    /* 00420fef: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420ff3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00420ff4: ret 4 */ FN_RET(0x00420f05); r_esp += 8; return;
L_00420ff7:; BB(0x00420ff7);
    /* 00420ff7: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 00420ffd: cmp ebp, 0x32 */ {  u32 a = r_ebp; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421000: jge 0x42101e */ if ((fS==fO)) goto L_0042101e;
L_00421002:; BB(0x00421002);
    /* 00421002: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x421007u); f_00420a44();
    /* 00421007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421009: jne 0x421012 */ if (!fZ) goto L_00421012;
L_0042100b:; BB(0x0042100b);
    /* 0042100b: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00421010: jmp 0x42103b */ goto L_0042103b;
L_00421012:; BB(0x00421012);
    /* 00421012: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421015: jne 0x42103b */ if (!fZ) goto L_0042103b;
L_00421017:; BB(0x00421017);
    /* 00421017: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0042101c: jmp 0x42103b */ goto L_0042103b;
L_0042101e:; BB(0x0042101e);
    /* 0042101e: add ebp, -0x32 */ {  u32 a = r_ebp; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00421021: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x421026u); f_00420a44();
    /* 00421026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421028: jne 0x421031 */ if (!fZ) goto L_00421031;
L_0042102a:; BB(0x0042102a);
    /* 0042102a: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0042102f: jmp 0x42103b */ goto L_0042103b;
L_00421031:; BB(0x00421031);
    /* 00421031: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421034: jne 0x42103b */ if (!fZ) goto L_0042103b;
L_00421036:; BB(0x00421036);
    /* 00421036: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0042103b:; BB(0x0042103b);
    /* 0042103b: mov ecx, dword ptr [esi + 0x684] */ r_ecx = R32((u32)(r_esi+0x684u));
L_00421041:; BB(0x00421041);
    /* 00421041: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00421044: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00421047: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042104a: jne 0x421384 */ if (!fZ) goto L_00421384;
L_00421050:; BB(0x00421050);
    /* 00421050: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 0042105a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042105c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0042105e: jmp 0x421041 */ goto L_00421041;
L_00421060:; BB(0x00421060);
    /* 00421060: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00421062: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00421064: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00421066: mov ecx, esi */ r_ecx = r_esi;
    /* 00421068: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42106eu); call_ind(t); }
    /* 0042106e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00421072: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 00421078: mov byte ptr [esp + 0x28], 0x12 */ W8((u32)(r_esp+0x28u), 0x12u);
    /* 0042107d: mov edx, 9 */ r_edx = 0x9u;
    /* 00421082: mov byte ptr [esp + 0x29], 5 */ W8((u32)(r_esp+0x29u), 0x5u);
    /* 00421087: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0042108c: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 00421093: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 00421098: mov word ptr [esp + 0x2e], bp */ W16((u32)(r_esp+0x2eu), (u16)r_ebp);
    /* 0042109d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004210a1: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004210a5: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004210ab: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004210b1: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004210b5: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004210b9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4210beu); f_008003e0();
    /* 004210be: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004210c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004210c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004210c3: ret 4 */ FN_RET(0x00420f05); r_esp += 8; return;
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x00420f05); r_esp += 8; return;
L_00421384:; BB(0x00421384);
    /* 00421384: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421387: je 0x42139f */ if (fZ) goto L_0042139f;
L_00421389:; BB(0x00421389);
    /* 00421389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042138a: mov dword ptr [esi + 0x684], ecx */ W32((u32)(r_esi+0x684u), r_ecx);
    /* 00421390: mov ecx, esi */ r_ecx = r_esi;
    /* 00421392: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x421397u); f_0041a808();
    /* 00421397: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042139a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042139b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042139c: ret 4 */ FN_RET(0x00420f05); r_esp += 8; return;
L_0042139f:; BB(0x0042139f);
    /* 0042139f: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 004213a9: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004213ae: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004213b0: jmp 0x421041 */ goto L_00421041;
}

