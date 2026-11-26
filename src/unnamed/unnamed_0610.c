#include "protos.h"

void f_00610000(void)
{
    FN_ENTER(0x00610000);
    /* 00610000: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00610002: add byte ptr [ecx + 0x29c8a], cl */ { u32 ad = (u32)(r_ecx+0x29c8au);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610008: add byte ptr [ebx - 0x7d7623b3], cl */ { u32 ad = (u32)(r_ebx+0x8289dc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061000e: mov al, byte ptr [0x8b000002] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8b000002u))) & 0xffu);
    /* 00610013: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610014: fmul qword ptr [ebx + 0x29882] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x29882u));
    /* 0061001a: add byte ptr [ecx - 0x7d74bbbe], cl */ { u32 ad = (u32)(r_ecx+0x828b4442u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00610020: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00610021: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00610023: add byte ptr [ecx - 0x7d74b7be], cl */ { u32 ad = (u32)(r_ecx+0x828b4842u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610029: mov al, byte ptr [0x89000002] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x89000002u))) & 0xffu);
    /* 0061002e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061002f: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610030: mov eax, dword ptr [0xa8e9b0] */ r_eax = R32((u32)(0xa8e9b0u));
    /* 00610035: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00610037: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0061003a: mov eax, dword ptr [0xa8e9ac] */ r_eax = R32((u32)(0xa8e9acu));
    /* 0061003f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610042: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610047u); f_00606bc8();
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610000); r_esp += 12; return;
}

void f_00610020(void)
{
    FN_ENTER(0x00610020);
    /* 00610020: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00610021: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00610023: add byte ptr [ecx - 0x7d74b7be], cl */ { u32 ad = (u32)(r_ecx+0x828b4842u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610029: mov al, byte ptr [0x89000002] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x89000002u))) & 0xffu);
    /* 0061002e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061002f: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610030: mov eax, dword ptr [0xa8e9b0] */ r_eax = R32((u32)(0xa8e9b0u));
    /* 00610035: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00610037: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0061003a: mov eax, dword ptr [0xa8e9ac] */ r_eax = R32((u32)(0xa8e9acu));
    /* 0061003f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610042: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610047u); f_00606bc8();
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610020); r_esp += 12; return;
}

void f_00610029(void)
{
    FN_ENTER(0x00610029);
    /* 00610029: mov al, byte ptr [0x89000002] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x89000002u))) & 0xffu);
    /* 0061002e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061002f: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610030: mov eax, dword ptr [0xa8e9b0] */ r_eax = R32((u32)(0xa8e9b0u));
    /* 00610035: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00610037: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0061003a: mov eax, dword ptr [0xa8e9ac] */ r_eax = R32((u32)(0xa8e9acu));
    /* 0061003f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610042: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610047u); f_00606bc8();
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610029); r_esp += 12; return;
}

void f_00610043(void)
{
    FN_ENTER(0x00610043);
    /* 00610043: sub dword ptr [ebx - 1], 0xdc458bff */ { u32 ad = (u32)(r_ebx+0xffffffffu);  u32 a = R32(ad); u32 b = 0xdc458bffu; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610043); r_esp += 12; return;
}

void f_00610044(void)
{
    FN_ENTER(0x00610044);
    /* 00610044: imul edi, edi, -1 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0xffffffffu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610044); r_esp += 12; return;
}

void f_00610045(void)
{
    FN_ENTER(0x00610045);
}

void f_00610047(void)
{
    FN_ENTER(0x00610047);
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610047); r_esp += 12; return;
}

void f_00610048(void)
{
    FN_ENTER(0x00610048);
    /* 00610048: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00610049: fmul qword ptr [ebx + 0x758be07d] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x758be07du));
    /* 0061004f: in al, 0x8b */ UNSUP(0x0061004f, "in al, 0x8b");
    /* 00610051: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610052: call 0x65554de2 */ r_esp -= 4; W32(r_esp, 0x610057u); f_65554de2();
    /* 00610057: mov dword ptr [0], ecx */ W32((u32)(0x0u), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610048); r_esp += 12; return;
}

void f_0061004d(void)
{
    FN_ENTER(0x0061004d);
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x0061004d); r_esp += 12; return;
}

void f_0061004e(void)
{
    FN_ENTER(0x0061004e);
    goto L_0061004e;
L_00610034:; BB(0x00610034);
    /* 00610034: add byte ptr [ebx + 0x34418900], cl */ { u32 ad = (u32)(r_ebx+0x34418900u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061003a: mov eax, dword ptr [0xa8e9ac] */ r_eax = R32((u32)(0xa8e9acu));
    /* 0061003f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610042: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610047u); f_00606bc8();
    /* 00610047: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061004a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061004d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_0061004e:; BB(0x0061004e);
    /* 0061004e: jne 0x610034 */ if (!fZ) goto L_00610034;
L_00610050:; BB(0x00610050);
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x0061004e); r_esp += 12; return;
}

void f_00610050(void)
{
    FN_ENTER(0x00610050);
    /* 00610050: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610050); r_esp += 12; return;
}

void f_00610056(void)
{
    FN_ENTER(0x00610056);
    /* 00610056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061005d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061005f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610060: ret 8 */ FN_RET(0x00610056); r_esp += 12; return;
}

void f_00610060(void)
{
    FN_ENTER(0x00610060);
    /* 00610060: ret 8 */ FN_RET(0x00610060); r_esp += 12; return;
}

void f_00610062(void)
{
    FN_ENTER(0x00610062);
    /* 00610062: add byte ptr [eax - 0x6d043b98], dl */ { u32 ad = (u32)(r_eax+0x92fbc468u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610068: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061006a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061006b: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0061006c: cli  */ UNSUP(0x0061006c, "cli ");
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_00610064(void) /* sub_610064 */
{
    FN_ENTER(0x00610064);
    /* 00610064: push 0x92fbc4 */ { u32 v = 0x92fbc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00610069: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x61006eu); f_005b938c();
    /* 0061006e: push 0x92fbd8 */ { u32 v = 0x92fbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00610073: mov dword ptr [0xa8e9b0], eax */ W32((u32)(0xa8e9b0u), r_eax);
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x00610064); r_esp += 4; return;
}

void f_00610065(void)
{
    FN_ENTER(0x00610065);
}

void f_00610067(void)
{
    FN_ENTER(0x00610067);
    /* 00610067: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 00610068: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061006a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061006b: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0061006c: cli  */ UNSUP(0x0061006c, "cli ");
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_00610068(void)
{
    FN_ENTER(0x00610068);
    /* 00610068: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061006a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061006b: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0061006c: cli  */ UNSUP(0x0061006c, "cli ");
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_0061006a(void)
{
    FN_ENTER(0x0061006a);
    /* 0061006a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061006b: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0061006c: cli  */ UNSUP(0x0061006c, "cli ");
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_0061006c(void)
{
    FN_ENTER(0x0061006c);
    /* 0061006c: cli  */ UNSUP(0x0061006c, "cli ");
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_0061006d(void)
{
    FN_ENTER(0x0061006d);
    /* 0061006d: jmp ptr [eax - 0x28] */ { u32 t = R32((u32)(r_eax+0xffffffd8u)); jmp_ind(t); return; }
}

void f_0061006e(void)
{
    FN_ENTER(0x0061006e);
    /* 0061006e: push 0x92fbd8 */ { u32 v = 0x92fbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00610073: mov dword ptr [0xa8e9b0], eax */ W32((u32)(0xa8e9b0u), r_eax);
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x0061006e); r_esp += 4; return;
}

void f_0061006f(void)
{
    FN_ENTER(0x0061006f);
    /* 0061006f: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00610071: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 00610072: add byte ptr [ebx + 0xa8e9b0], ah */ { u32 ad = (u32)(r_ebx+0xa8e9b0u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x0061006f); r_esp += 4; return;
}

void f_00610070(void)
{
    FN_ENTER(0x00610070);
    /* 00610070: sti  */ UNSUP(0x00610070, "sti ");
    /* 00610071: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 00610072: add byte ptr [ebx + 0xa8e9b0], ah */ { u32 ad = (u32)(r_ebx+0xa8e9b0u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x00610070); r_esp += 4; return;
}

void f_00610072(void)
{
    FN_ENTER(0x00610072);
    /* 00610072: add byte ptr [ebx + 0xa8e9b0], ah */ { u32 ad = (u32)(r_ebx+0xa8e9b0u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x00610072); r_esp += 4; return;
}

void f_00610074(void)
{
    FN_ENTER(0x00610074);
    /* 00610074: mov al, 0xe9 */ r_eax = (r_eax & 0xffffff00u) | ((0xe9u) & 0xffu);
    /* 00610076: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00610078: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61007du); f_008009dc();
    /* 0061007d: mov dword ptr [0xa8e9ac], eax */ W32((u32)(0xa8e9acu), r_eax);
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x00610074); r_esp += 4; return;
}

void f_00610077(void)
{
    FN_ENTER(0x00610077);
    /* 00610077: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00610079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061007a: or dword ptr [edi], ebx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0061007c: add byte ptr [ebx + 0xa8e9ac], ah */ { u32 ad = (u32)(r_ebx+0xa8e9acu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00610082: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00610085: ret  */ FN_RET(0x00610077); r_esp += 4; return;
}

void f_00610088(void) /* sub_610088 */
{
    FN_ENTER(0x00610088);
    /* 00610088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610089: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061008b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061008d: call 0x6100ac */ r_esp -= 4; W32(r_esp, 0x610092u); f_006100ac();
    /* 00610092: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00610096: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610098: jne 0x61009e */ if (!fZ) goto L_0061009e;
L_0061009a:; BB(0x0061009a);
    /* 0061009a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061009b: ret 4 */ FN_RET(0x00610088); r_esp += 8; return;
L_0061009e:; BB(0x0061009e);
    /* 0061009e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061009f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6100a4u); f_005c2f74();
    /* 006100a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006100a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006100a6: ret 4 */ FN_RET(0x00610088); r_esp += 8; return;
}

void f_006100ac(void) /* sub_6100AC */
{
    FN_ENTER(0x006100ac);
    /* 006100ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006100ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006100af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006100b1: push 0x8e09ac */ { u32 v = 0x8e09acu; r_esp -= 4; W32(r_esp, v); }
    /* 006100b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006100bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006100bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006100c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006100c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006100ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006100cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006100d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006100d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006100d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006100d9: mov dword ptr [ecx], 0xb23c40 */ W32((u32)(r_ecx), 0xb23c40u);
    /* 006100df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006100e6: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x6100ebu); f_00608fc0();
    /* 006100eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006100ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006100f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006100f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006100f8: ret  */ FN_RET(0x006100ac); r_esp += 4; return;
}

void f_006100e7(void)
{
    FN_ENTER(0x006100e7);
    /* 006100e7: aad 0x8e */ UNSUP(0x006100e7, "aad 0x8e");
    UNSUP(0x006100e9, "falls out of decoded code");
}

void f_006100ea(void)
{
    FN_ENTER(0x006100ea);
    /* 006100ea: dec dword ptr [ebx - 0x769b0bb3] */ { u32 ad = (u32)(r_ebx+0x8964f44du); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006100f0: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006100f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006100f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006100f8: ret  */ FN_RET(0x006100ea); r_esp += 4; return;
}

void f_006100fc(void) /* sub_6100FC */
{
    FN_ENTER(0x006100fc);
    /* 006100fc: mov ecx, dword ptr [0xa8e9b8] */ r_ecx = R32((u32)(0xa8e9b8u));
    /* 00610102: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610104: je 0x610121 */ if (fZ) goto L_00610121;
L_00610106:; BB(0x00610106);
    /* 00610106: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x61010bu); f_00829de0();
    /* 0061010b: push dword ptr [0xa8e9b8] */ { u32 v = R32((u32)(0xa8e9b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610111: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x610116u); f_0082e960();
    /* 00610116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610117: mov dword ptr [0xa8e9b8], 0 */ W32((u32)(0xa8e9b8u), 0x0u);
L_00610121:; BB(0x00610121);
    /* 00610121: mov eax, dword ptr [0xa8e9bc] */ r_eax = R32((u32)(0xa8e9bcu));
    /* 00610126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610128: je 0x61013b */ if (fZ) goto L_0061013b;
L_0061012a:; BB(0x0061012a);
    /* 0061012a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061012b: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x610130u); f_005b9bac();
    /* 00610130: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610131: mov dword ptr [0xa8e9bc], 0 */ W32((u32)(0xa8e9bcu), 0x0u);
L_0061013b:; BB(0x0061013b);
    /* 0061013b: ret  */ FN_RET(0x006100fc); r_esp += 4; return;
}

void f_0061013c(void)
{
    FN_ENTER(0x0061013c);
    /* 0061013c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061013d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061013f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610141: push 0x8e09ee */ { u32 v = 0x8e09eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00610146: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061014c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061014d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610154: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610157: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061015a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061015d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610160: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610163: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00610165: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0061016c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610171u); f_005caba4();
    /* 00610171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610172: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00610175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610177: je 0x6101ff */ if (fZ) goto L_006101ff;
L_0061017d:; BB(0x0061017d);
    /* 0061017d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00610184: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061018b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610191: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610194: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x610199u); f_00787a4c();
    /* 00610199: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061019c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006101a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006101a6:; BB(0x006101a6);
    /* 006101a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006101ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006101b4: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006101b9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6101beu); f_005caba4();
    /* 006101be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006101bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006101c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006101c4: je 0x6101fb */ if (fZ) goto L_006101fb;
L_006101c6:; BB(0x006101c6);
    /* 006101c6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006101cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006101d4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006101d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006101da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006101dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006101de: call 0x610208 */ r_esp -= 4; W32(r_esp, 0x6101e3u); f_00610208();
    /* 006101e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006101e6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006101ed:; BB(0x006101ed);
    /* 006101ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006101f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006101f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006101f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006101fa: ret  */ FN_RET(0x0061013c); r_esp += 4; return;
L_006101fb:; BB(0x006101fb);
    /* 006101fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006101fd: jmp 0x6101ed */ goto L_006101ed;
L_006101ff:; BB(0x006101ff);
    /* 006101ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610201: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610204: jmp 0x6101a6 */ goto L_006101a6;
}

void f_00610208(void) /* sub_610208 */
{
    FN_ENTER(0x00610208);
    /* 00610208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610209: mov ebp, esp */ r_ebp = r_esp;
    /* 0061020b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061020d: push 0x8e0a08 */ { u32 v = 0x8e0a08u; r_esp -= 4; W32(r_esp, v); }
    /* 00610212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610226: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610229: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061022c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061022f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00610232: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610235: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00610238: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061023b: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x610240u); f_00609010();
    /* 00610240: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610247: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061024a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061024d: mov dword ptr [ecx], 0xb23c40 */ W32((u32)(r_ecx), 0xb23c40u);
    /* 00610253: mov eax, dword ptr [0x9c4704] */ r_eax = R32((u32)(0x9c4704u));
    /* 00610258: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610259: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061025c: call dword ptr [0xb23d8c] */ { u32 t = R32((u32)(0xb23d8cu)); r_esp -= 4; W32(r_esp, 0x610262u); call_ind(t); }
    /* 00610262: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610265: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00610268: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0061026b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0061026e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00610274: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0061027a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061027d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00610283: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00610289: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0061028f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00610295: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0061029b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006102a1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006102a4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 006102aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006102ad: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006102b3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006102b6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 006102bc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006102bf: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 006102c5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006102c8: mov eax, dword ptr [0xa8e9bc] */ r_eax = R32((u32)(0xa8e9bcu));
    /* 006102cd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006102cf: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 006102d2: mov eax, dword ptr [0xa8e9b8] */ r_eax = R32((u32)(0xa8e9b8u));
    /* 006102d7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006102da: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x6102dfu); f_00606bc8();
    /* 006102df: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006102e2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006102e5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006102e8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006102eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006102ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006102f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006102f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006102f8: ret 8 */ FN_RET(0x00610208); r_esp += 12; return;
}

void f_006102fc(void) /* sub_6102FC */
{
    FN_ENTER(0x006102fc);
    /* 006102fc: push 0x92fbe8 */ { u32 v = 0x92fbe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00610301: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x610306u); f_005b938c();
    /* 00610306: push 0x92fbfc */ { u32 v = 0x92fbfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061030b: mov dword ptr [0xa8e9bc], eax */ W32((u32)(0xa8e9bcu), r_eax);
    /* 00610310: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x610315u); f_008009dc();
    /* 00610315: mov dword ptr [0xa8e9b8], eax */ W32((u32)(0xa8e9b8u), r_eax);
    /* 0061031a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061031d: ret  */ FN_RET(0x006102fc); r_esp += 4; return;
}

void f_00610320(void) /* sub_610320 */
{
    FN_ENTER(0x00610320);
    /* 00610320: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610321: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00610323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00610325: call 0x610344 */ r_esp -= 4; W32(r_esp, 0x61032au); f_00610344();
    /* 0061032a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061032e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610330: jne 0x610336 */ if (!fZ) goto L_00610336;
L_00610332:; BB(0x00610332);
    /* 00610332: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610333: ret 4 */ FN_RET(0x00610320); r_esp += 8; return;
L_00610336:; BB(0x00610336);
    /* 00610336: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610337: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61033cu); f_005c2f74();
    /* 0061033c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061033d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061033e: ret 4 */ FN_RET(0x00610320); r_esp += 8; return;
}

void f_00610344(void) /* sub_610344 */
{
    FN_ENTER(0x00610344);
    /* 00610344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610345: mov ebp, esp */ r_ebp = r_esp;
    /* 00610347: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610349: push 0x8e0a24 */ { u32 v = 0x8e0a24u; r_esp -= 4; W32(r_esp, v); }
    /* 0061034e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610355: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061035c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061035f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610362: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610365: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610368: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061036b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061036e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610371: mov dword ptr [ecx], 0xb23e80 */ W32((u32)(r_ecx), 0xb23e80u);
    /* 00610377: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061037e: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x610383u); f_00608fc0();
    /* 00610383: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610386: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061038d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061038f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610390: ret  */ FN_RET(0x00610344); r_esp += 4; return;
}

void f_00610394(void) /* sub_610394 */
{
    FN_ENTER(0x00610394);
    /* 00610394: mov ecx, dword ptr [0xa8e9c4] */ r_ecx = R32((u32)(0xa8e9c4u));
    /* 0061039a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061039c: je 0x6103b1 */ if (fZ) goto L_006103b1;
L_0061039e:; BB(0x0061039e);
    /* 0061039e: je 0x6103a7 */ if (fZ) goto L_006103a7;
L_006103a0:; BB(0x006103a0);
    /* 006103a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006103a2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6103a7u); f_004066a8();
L_006103a7:; BB(0x006103a7);
    /* 006103a7: mov dword ptr [0xa8e9c4], 0 */ W32((u32)(0xa8e9c4u), 0x0u);
L_006103b1:; BB(0x006103b1);
    /* 006103b1: ret  */ FN_RET(0x00610394); r_esp += 4; return;
}

void f_006103b4(void)
{
    FN_ENTER(0x006103b4);
    /* 006103b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006103b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006103b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006103b9: push 0x8e0a66 */ { u32 v = 0x8e0a66u; r_esp -= 4; W32(r_esp, v); }
    /* 006103be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006103c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006103c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006103cc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006103cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006103d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006103d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006103d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006103db: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006103dd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006103e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6103e9u); f_005caba4();
    /* 006103e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006103ea: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006103ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006103ef: je 0x610477 */ if (fZ) goto L_00610477;
L_006103f5:; BB(0x006103f5);
    /* 006103f5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006103fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610403: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610409: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061040c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x610411u); f_00787a4c();
    /* 00610411: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610414: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0061041b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0061041e:; BB(0x0061041e);
    /* 0061041e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610425: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0061042c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610431: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610436u); f_005caba4();
    /* 00610436: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610437: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061043a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061043c: je 0x610473 */ if (fZ) goto L_00610473;
L_0061043e:; BB(0x0061043e);
    /* 0061043e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610445: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061044c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061044f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610452: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610456: call 0x610480 */ r_esp -= 4; W32(r_esp, 0x61045bu); f_00610480();
    /* 0061045b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061045e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610465:; BB(0x00610465);
    /* 00610465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061046f: mov esp, ebp */ r_esp = r_ebp;
    /* 00610471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610472: ret  */ FN_RET(0x006103b4); r_esp += 4; return;
L_00610473:; BB(0x00610473);
    /* 00610473: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610475: jmp 0x610465 */ goto L_00610465;
L_00610477:; BB(0x00610477);
    /* 00610477: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610479: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061047c: jmp 0x61041e */ goto L_0061041e;
}

void f_00610480(void) /* sub_610480 */
{
    FN_ENTER(0x00610480);
    /* 00610480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610481: mov ebp, esp */ r_ebp = r_esp;
    /* 00610483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610485: push 0x8e0a80 */ { u32 v = 0x8e0a80u; r_esp -= 4; W32(r_esp, v); }
    /* 0061048a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610498: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061049b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061049e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006104a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006104a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006104a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006104aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006104ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006104b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006104b3: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x6104b8u); f_00609010();
    /* 006104b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006104bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006104c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006104c5: mov dword ptr [ecx], 0xb23e80 */ W32((u32)(r_ecx), 0xb23e80u);
    /* 006104cb: mov eax, dword ptr [0x9c4720] */ r_eax = R32((u32)(0x9c4720u));
    /* 006104d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006104d1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006104d4: call dword ptr [0xb23fcc] */ { u32 t = R32((u32)(0xb23fccu)); r_esp -= 4; W32(r_esp, 0x6104dau); call_ind(t); }
    /* 006104da: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006104dd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006104e0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006104e3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006104e6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006104ec: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006104f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006104f5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006104fb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00610501: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00610507: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0061050d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00610513: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00610519: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061051c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00610522: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610525: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0061052b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0061052e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00610534: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00610537: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0061053d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00610540: mov edx, dword ptr [0xa8e9c4] */ r_edx = R32((u32)(0xa8e9c4u));
    /* 00610546: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0061054c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061054f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00610552: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610558: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061055b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0061055e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610563u); f_00606bc8();
    /* 00610563: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610566: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610569: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061056c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061056f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610572: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610579: mov esp, ebp */ r_esp = r_ebp;
    /* 0061057b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061057c: ret 8 */ FN_RET(0x00610480); r_esp += 12; return;
}

void f_00610580(void) /* sub_610580 */
{
    FN_ENTER(0x00610580);
    /* 00610580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610581: mov ebp, esp */ r_ebp = r_esp;
    /* 00610583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610585: push 0x8e0aa8 */ { u32 v = 0x8e0aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061058a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610598: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061059b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061059e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006105a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006105a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006105a7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006105ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006105b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6105b8u); f_008581c5();
    /* 006105b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006105b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006105bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006105be: je 0x6105ff */ if (fZ) goto L_006105ff;
L_006105c0:; BB(0x006105c0);
    /* 006105c0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006105c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006105ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006105d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006105d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006105d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006105d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006105d6: push 0x9c4710 */ { u32 v = 0x9c4710u; r_esp -= 4; W32(r_esp, v); }
    /* 006105db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006105dd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6105e2u); f_005b7a84();
    /* 006105e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006105e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006105ec:; BB(0x006105ec);
    /* 006105ec: mov dword ptr [0xa8e9c4], eax */ W32((u32)(0xa8e9c4u), r_eax);
    /* 006105f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006105f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006105fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006105fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006105fe: ret  */ FN_RET(0x00610580); r_esp += 4; return;
L_006105ff:; BB(0x006105ff);
    /* 006105ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610601: jmp 0x6105ec */ goto L_006105ec;
}

void f_00610604(void) /* sub_610604 */
{
    FN_ENTER(0x00610604);
    /* 00610604: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610605: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00610607: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00610609: call 0x610628 */ r_esp -= 4; W32(r_esp, 0x61060eu); f_00610628();
    /* 0061060e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00610612: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610614: jne 0x61061a */ if (!fZ) goto L_0061061a;
L_00610616:; BB(0x00610616);
    /* 00610616: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610617: ret 4 */ FN_RET(0x00610604); r_esp += 8; return;
L_0061061a:; BB(0x0061061a);
    /* 0061061a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061061b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x610620u); f_005c2f74();
    /* 00610620: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610621: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610622: ret 4 */ FN_RET(0x00610604); r_esp += 8; return;
}

void f_00610628(void) /* sub_610628 */
{
    FN_ENTER(0x00610628);
    /* 00610628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610629: mov ebp, esp */ r_ebp = r_esp;
    /* 0061062b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061062d: push 0x8e0ac4 */ { u32 v = 0x8e0ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 00610632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610640: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610646: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610649: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061064c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061064f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00610652: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610655: mov dword ptr [ecx], 0xb240c0 */ W32((u32)(r_ecx), 0xb240c0u);
    /* 0061065b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610662: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x610667u); f_00608fc0();
    /* 00610667: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061066a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610671: mov esp, ebp */ r_esp = r_ebp;
    /* 00610673: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610674: ret  */ FN_RET(0x00610628); r_esp += 4; return;
}

void f_00610678(void) /* sub_610678 */
{
    FN_ENTER(0x00610678);
    /* 00610678: mov ecx, dword ptr [0xa8e9dc] */ r_ecx = R32((u32)(0xa8e9dcu));
    /* 0061067e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610680: je 0x610695 */ if (fZ) goto L_00610695;
L_00610682:; BB(0x00610682);
    /* 00610682: je 0x61068b */ if (fZ) goto L_0061068b;
L_00610684:; BB(0x00610684);
    /* 00610684: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610686: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61068bu); f_004066a8();
L_0061068b:; BB(0x0061068b);
    /* 0061068b: mov dword ptr [0xa8e9dc], 0 */ W32((u32)(0xa8e9dcu), 0x0u);
L_00610695:; BB(0x00610695);
    /* 00610695: ret  */ FN_RET(0x00610678); r_esp += 4; return;
}

void f_00610698(void)
{
    FN_ENTER(0x00610698);
    /* 00610698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610699: mov ebp, esp */ r_ebp = r_esp;
    /* 0061069b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061069d: push 0x8e0b06 */ { u32 v = 0x8e0b06u; r_esp -= 4; W32(r_esp, v); }
    /* 006106a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006106a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006106a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006106b0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006106b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006106b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006106b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006106bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006106bf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006106c1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006106c8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6106cdu); f_005caba4();
    /* 006106cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006106ce: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006106d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006106d3: je 0x61075b */ if (fZ) goto L_0061075b;
L_006106d9:; BB(0x006106d9);
    /* 006106d9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006106e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006106e7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 006106ed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006106f0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6106f5u); f_00787a4c();
    /* 006106f5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006106f8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006106ff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00610702:; BB(0x00610702);
    /* 00610702: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610709: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00610710: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610715: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61071au); f_005caba4();
    /* 0061071a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061071b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061071e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610720: je 0x610757 */ if (fZ) goto L_00610757;
L_00610722:; BB(0x00610722);
    /* 00610722: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610729: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00610730: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610733: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610736: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061073a: call 0x610764 */ r_esp -= 4; W32(r_esp, 0x61073fu); f_00610764();
    /* 0061073f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610742: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610749:; BB(0x00610749);
    /* 00610749: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061074c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610753: mov esp, ebp */ r_esp = r_ebp;
    /* 00610755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610756: ret  */ FN_RET(0x00610698); r_esp += 4; return;
L_00610757:; BB(0x00610757);
    /* 00610757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610759: jmp 0x610749 */ goto L_00610749;
L_0061075b:; BB(0x0061075b);
    /* 0061075b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061075d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610760: jmp 0x610702 */ goto L_00610702;
}

void f_00610764(void) /* sub_610764 */
{
    FN_ENTER(0x00610764);
    /* 00610764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610765: mov ebp, esp */ r_ebp = r_esp;
    /* 00610767: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610769: push 0x8e0b20 */ { u32 v = 0x8e0b20u; r_esp -= 4; W32(r_esp, v); }
    /* 0061076e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610775: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061077c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061077f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610782: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610785: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610788: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061078b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061078e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610791: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00610794: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610797: call 0x609010 */ r_esp -= 4; W32(r_esp, 0x61079cu); f_00609010();
    /* 0061079c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006107a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006107a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006107a9: mov dword ptr [ecx], 0xb240c0 */ W32((u32)(r_ecx), 0xb240c0u);
    /* 006107af: mov eax, dword ptr [0x9c4758] */ r_eax = R32((u32)(0x9c4758u));
    /* 006107b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006107b5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006107b8: call dword ptr [0xb2420c] */ { u32 t = R32((u32)(0xb2420cu)); r_esp -= 4; W32(r_esp, 0x6107beu); call_ind(t); }
    /* 006107be: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006107c1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006107c4: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006107c7: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006107ca: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006107d0: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006107d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006107d9: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006107df: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 006107e5: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 006107eb: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 006107f1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 006107f7: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 006107fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610800: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00610806: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610809: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0061080f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00610812: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00610818: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0061081b: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00610821: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00610824: mov edx, dword ptr [0xa8e9dc] */ r_edx = R32((u32)(0xa8e9dcu));
    /* 0061082a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610830: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00610833: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00610836: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0061083c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061083f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610842: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610847u); f_00606bc8();
    /* 00610847: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061084a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061084d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610850: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610853: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610856: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061085d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061085f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610860: ret 8 */ FN_RET(0x00610764); r_esp += 12; return;
}

void f_00610864(void) /* sub_610864 */
{
    FN_ENTER(0x00610864);
    /* 00610864: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610865: mov ebp, esp */ r_ebp = r_esp;
    /* 00610867: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610869: push 0x8e0b48 */ { u32 v = 0x8e0b48u; r_esp -= 4; W32(r_esp, v); }
    /* 0061086e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610875: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061087c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061087f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610882: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610885: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610888: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061088b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00610890: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00610897: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61089cu); f_008581c5();
    /* 0061089c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061089d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006108a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006108a2: je 0x6108e3 */ if (fZ) goto L_006108e3;
L_006108a4:; BB(0x006108a4);
    /* 006108a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006108ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006108b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006108b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006108b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006108b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006108b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006108ba: push 0x9c4748 */ { u32 v = 0x9c4748u; r_esp -= 4; W32(r_esp, v); }
    /* 006108bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006108c1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6108c6u); f_005b7a84();
    /* 006108c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006108c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006108d0:; BB(0x006108d0);
    /* 006108d0: mov dword ptr [0xa8e9dc], eax */ W32((u32)(0xa8e9dcu), r_eax);
    /* 006108d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006108d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006108df: mov esp, ebp */ r_esp = r_ebp;
    /* 006108e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006108e2: ret  */ FN_RET(0x00610864); r_esp += 4; return;
L_006108e3:; BB(0x006108e3);
    /* 006108e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006108e5: jmp 0x6108d0 */ goto L_006108d0;
}

void f_006108e8(void) /* sub_6108E8 */
{
    FN_ENTER(0x006108e8);
    /* 006108e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006108e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006108eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006108ed: call 0x61090c */ r_esp -= 4; W32(r_esp, 0x6108f2u); f_0061090c();
    /* 006108f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006108f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006108f8: jne 0x6108fe */ if (!fZ) goto L_006108fe;
L_006108fa:; BB(0x006108fa);
    /* 006108fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006108fb: ret 4 */ FN_RET(0x006108e8); r_esp += 8; return;
L_006108fe:; BB(0x006108fe);
    /* 006108fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006108ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x610904u); f_005c2f74();
    /* 00610904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610905: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610906: ret 4 */ FN_RET(0x006108e8); r_esp += 8; return;
}

void f_0061090c(void) /* sub_61090C */
{
    FN_ENTER(0x0061090c);
    /* 0061090c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061090d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061090f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610911: push 0x8e0b64 */ { u32 v = 0x8e0b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00610916: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061091c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061091d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610924: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610927: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061092a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061092d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610930: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00610933: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00610936: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610939: mov dword ptr [ecx], 0xb24300 */ W32((u32)(r_ecx), 0xb24300u);
    /* 0061093f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610946: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x61094bu); f_0060c7e4();
    /* 0061094b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061094e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610955: mov esp, ebp */ r_esp = r_ebp;
    /* 00610957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610958: ret  */ FN_RET(0x0061090c); r_esp += 4; return;
}

void f_0061095c(void) /* sub_61095C */
{
    FN_ENTER(0x0061095c);
    /* 0061095c: mov ecx, dword ptr [0xa8e9e8] */ r_ecx = R32((u32)(0xa8e9e8u));
    /* 00610962: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610964: je 0x610979 */ if (fZ) goto L_00610979;
L_00610966:; BB(0x00610966);
    /* 00610966: je 0x61096f */ if (fZ) goto L_0061096f;
L_00610968:; BB(0x00610968);
    /* 00610968: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061096a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61096fu); f_004066a8();
L_0061096f:; BB(0x0061096f);
    /* 0061096f: mov dword ptr [0xa8e9e8], 0 */ W32((u32)(0xa8e9e8u), 0x0u);
L_00610979:; BB(0x00610979);
    /* 00610979: ret  */ FN_RET(0x0061095c); r_esp += 4; return;
}

void f_0061097c(void)
{
    FN_ENTER(0x0061097c);
    /* 0061097c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061097d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061097f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610981: push 0x8e0ba6 */ { u32 v = 0x8e0ba6u; r_esp -= 4; W32(r_esp, v); }
    /* 00610986: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061098c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061098d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610994: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610997: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061099a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061099d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006109a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006109a3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006109a5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006109ac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6109b1u); f_005caba4();
    /* 006109b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006109b2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006109b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006109b7: je 0x610a3f */ if (fZ) goto L_00610a3f;
L_006109bd:; BB(0x006109bd);
    /* 006109bd: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006109c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006109cb: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 006109d1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006109d4: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x6109d9u); f_00787a4c();
    /* 006109d9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006109dc: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006109e3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006109e6:; BB(0x006109e6);
    /* 006109e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006109ed: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006109f4: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006109f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6109feu); f_005caba4();
    /* 006109fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006109ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00610a02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610a04: je 0x610a3b */ if (fZ) goto L_00610a3b;
L_00610a06:; BB(0x00610a06);
    /* 00610a06: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610a0d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00610a14: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610a17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610a1a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610a1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610a1e: call 0x610a48 */ r_esp -= 4; W32(r_esp, 0x610a23u); f_00610a48();
    /* 00610a23: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610a26: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610a2d:; BB(0x00610a2d);
    /* 00610a2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610a30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610a37: mov esp, ebp */ r_esp = r_ebp;
    /* 00610a39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610a3a: ret  */ FN_RET(0x0061097c); r_esp += 4; return;
L_00610a3b:; BB(0x00610a3b);
    /* 00610a3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610a3d: jmp 0x610a2d */ goto L_00610a2d;
L_00610a3f:; BB(0x00610a3f);
    /* 00610a3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610a41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610a44: jmp 0x6109e6 */ goto L_006109e6;
}

void f_00610a48(void) /* sub_610A48 */
{
    FN_ENTER(0x00610a48);
    /* 00610a48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610a49: mov ebp, esp */ r_ebp = r_esp;
    /* 00610a4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610a4d: push 0x8e0bc0 */ { u32 v = 0x8e0bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610a52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610a59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610a60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610a63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610a66: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610a69: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610a6c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610a6f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00610a72: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610a75: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00610a78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610a7b: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x610a80u); f_0060c858();
    /* 00610a80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610a87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610a8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610a8d: mov dword ptr [ecx], 0xb24300 */ W32((u32)(r_ecx), 0xb24300u);
    /* 00610a93: mov eax, dword ptr [0x9c4774] */ r_eax = R32((u32)(0x9c4774u));
    /* 00610a98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610a99: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00610a9c: call dword ptr [0xb2444c] */ { u32 t = R32((u32)(0xb2444cu)); r_esp -= 4; W32(r_esp, 0x610aa2u); call_ind(t); }
    /* 00610aa2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610aa5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00610aa8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00610aab: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00610aae: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00610ab4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00610aba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610abd: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00610ac3: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00610ac9: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00610acf: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00610ad5: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00610adb: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00610ae1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610ae4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00610aea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610aed: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00610af3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00610af6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00610afc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00610aff: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00610b05: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00610b08: mov edx, dword ptr [0xa8e9e8] */ r_edx = R32((u32)(0xa8e9e8u));
    /* 00610b0e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610b14: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00610b17: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00610b1a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610b20: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00610b23: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610b26: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610b2bu); f_00606bc8();
    /* 00610b2b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610b2e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610b31: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610b34: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610b37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610b3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610b41: mov esp, ebp */ r_esp = r_ebp;
    /* 00610b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610b44: ret 8 */ FN_RET(0x00610a48); r_esp += 12; return;
}

void f_00610b48(void) /* sub_610B48 */
{
    FN_ENTER(0x00610b48);
    /* 00610b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610b49: mov ebp, esp */ r_ebp = r_esp;
    /* 00610b4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610b4d: push 0x8e0be8 */ { u32 v = 0x8e0be8u; r_esp -= 4; W32(r_esp, v); }
    /* 00610b52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610b59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610b60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610b63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610b66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610b69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610b6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00610b6f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00610b74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00610b7b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x610b80u); f_008581c5();
    /* 00610b80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610b81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00610b84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610b86: je 0x610bc7 */ if (fZ) goto L_00610bc7;
L_00610b88:; BB(0x00610b88);
    /* 00610b88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00610b8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610b96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610b99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610b9e: push 0x9c4764 */ { u32 v = 0x9c4764u; r_esp -= 4; W32(r_esp, v); }
    /* 00610ba3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610ba5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x610baau); f_005b7a84();
    /* 00610baa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610bad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00610bb4:; BB(0x00610bb4);
    /* 00610bb4: mov dword ptr [0xa8e9e8], eax */ W32((u32)(0xa8e9e8u), r_eax);
    /* 00610bb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610bbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610bc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00610bc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610bc6: ret  */ FN_RET(0x00610b48); r_esp += 4; return;
L_00610bc7:; BB(0x00610bc7);
    /* 00610bc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610bc9: jmp 0x610bb4 */ goto L_00610bb4;
}

void f_00610bcc(void) /* sub_610BCC */
{
    FN_ENTER(0x00610bcc);
    /* 00610bcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610bcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00610bcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00610bd1: call 0x610bf0 */ r_esp -= 4; W32(r_esp, 0x610bd6u); f_00610bf0();
    /* 00610bd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00610bda: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610bdc: jne 0x610be2 */ if (!fZ) goto L_00610be2;
L_00610bde:; BB(0x00610bde);
    /* 00610bde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610bdf: ret 4 */ FN_RET(0x00610bcc); r_esp += 8; return;
L_00610be2:; BB(0x00610be2);
    /* 00610be2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610be3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x610be8u); f_005c2f74();
    /* 00610be8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610be9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610bea: ret 4 */ FN_RET(0x00610bcc); r_esp += 8; return;
}

void f_00610bf0(void) /* sub_610BF0 */
{
    FN_ENTER(0x00610bf0);
    /* 00610bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00610bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610bf5: push 0x8e0c04 */ { u32 v = 0x8e0c04u; r_esp -= 4; W32(r_esp, v); }
    /* 00610bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610c01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610c08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610c0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610c0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610c11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610c14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00610c17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00610c1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610c1d: mov dword ptr [ecx], 0xb24540 */ W32((u32)(r_ecx), 0xb24540u);
    /* 00610c23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610c2a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x610c2fu); f_0060c7e4();
    /* 00610c2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610c32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610c39: mov esp, ebp */ r_esp = r_ebp;
    /* 00610c3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610c3c: ret  */ FN_RET(0x00610bf0); r_esp += 4; return;
}

void f_00610c40(void) /* sub_610C40 */
{
    FN_ENTER(0x00610c40);
    /* 00610c40: mov ecx, dword ptr [0xa8e9f4] */ r_ecx = R32((u32)(0xa8e9f4u));
    /* 00610c46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610c48: je 0x610c5d */ if (fZ) goto L_00610c5d;
L_00610c4a:; BB(0x00610c4a);
    /* 00610c4a: je 0x610c53 */ if (fZ) goto L_00610c53;
L_00610c4c:; BB(0x00610c4c);
    /* 00610c4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610c4e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x610c53u); f_004066a8();
L_00610c53:; BB(0x00610c53);
    /* 00610c53: mov dword ptr [0xa8e9f4], 0 */ W32((u32)(0xa8e9f4u), 0x0u);
L_00610c5d:; BB(0x00610c5d);
    /* 00610c5d: ret  */ FN_RET(0x00610c40); r_esp += 4; return;
}

void f_00610c60(void)
{
    FN_ENTER(0x00610c60);
    /* 00610c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00610c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610c65: push 0x8e0c46 */ { u32 v = 0x8e0c46u; r_esp -= 4; W32(r_esp, v); }
    /* 00610c6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610c71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610c78: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610c7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610c7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610c81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610c84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610c87: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00610c89: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610c90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610c95u); f_005caba4();
    /* 00610c95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610c96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00610c99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610c9b: je 0x610d23 */ if (fZ) goto L_00610d23;
L_00610ca1:; BB(0x00610ca1);
    /* 00610ca1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00610ca8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610caf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610cb5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610cb8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x610cbdu); f_00787a4c();
    /* 00610cbd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610cc0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610cc7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00610cca:; BB(0x00610cca);
    /* 00610cca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610cd1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00610cd8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610cdd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610ce2u); f_005caba4();
    /* 00610ce2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610ce3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00610ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610ce8: je 0x610d1f */ if (fZ) goto L_00610d1f;
L_00610cea:; BB(0x00610cea);
    /* 00610cea: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610cf1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00610cf8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610cfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610cfe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610d02: call 0x610d2c */ r_esp -= 4; W32(r_esp, 0x610d07u); f_00610d2c();
    /* 00610d07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610d0a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610d11:; BB(0x00610d11);
    /* 00610d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610d14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00610d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610d1e: ret  */ FN_RET(0x00610c60); r_esp += 4; return;
L_00610d1f:; BB(0x00610d1f);
    /* 00610d1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610d21: jmp 0x610d11 */ goto L_00610d11;
L_00610d23:; BB(0x00610d23);
    /* 00610d23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610d25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610d28: jmp 0x610cca */ goto L_00610cca;
}

void f_00610d2c(void) /* sub_610D2C */
{
    FN_ENTER(0x00610d2c);
    /* 00610d2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610d2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00610d2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610d31: push 0x8e0c60 */ { u32 v = 0x8e0c60u; r_esp -= 4; W32(r_esp, v); }
    /* 00610d36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610d3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610d44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610d47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610d4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610d4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610d50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610d53: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00610d56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610d59: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00610d5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610d5f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x610d64u); f_0060c858();
    /* 00610d64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610d6b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610d6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610d71: mov dword ptr [ecx], 0xb24540 */ W32((u32)(r_ecx), 0xb24540u);
    /* 00610d77: mov eax, dword ptr [0x9c4790] */ r_eax = R32((u32)(0x9c4790u));
    /* 00610d7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610d7d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00610d80: call dword ptr [0xb2468c] */ { u32 t = R32((u32)(0xb2468cu)); r_esp -= 4; W32(r_esp, 0x610d86u); call_ind(t); }
    /* 00610d86: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610d89: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00610d8c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00610d8f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00610d92: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00610d98: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00610d9e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610da1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00610da7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00610dad: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00610db3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00610db9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00610dbf: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00610dc5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610dc8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00610dce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610dd1: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00610dd7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00610dda: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00610de0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00610de3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00610de9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00610dec: mov edx, dword ptr [0xa8e9f4] */ r_edx = R32((u32)(0xa8e9f4u));
    /* 00610df2: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610df8: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00610dfb: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00610dfe: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00610e04: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00610e07: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00610e0a: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x610e0fu); f_00606bc8();
    /* 00610e0f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610e12: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610e15: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610e18: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610e1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610e1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00610e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610e28: ret 8 */ FN_RET(0x00610d2c); r_esp += 12; return;
}

void f_00610e2c(void) /* sub_610E2C */
{
    FN_ENTER(0x00610e2c);
    /* 00610e2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610e2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00610e2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610e31: push 0x8e0c88 */ { u32 v = 0x8e0c88u; r_esp -= 4; W32(r_esp, v); }
    /* 00610e36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610e44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610e47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610e4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610e4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610e50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00610e53: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00610e58: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00610e5f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x610e64u); f_008581c5();
    /* 00610e64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610e65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00610e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610e6a: je 0x610eab */ if (fZ) goto L_00610eab;
L_00610e6c:; BB(0x00610e6c);
    /* 00610e6c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00610e73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610e7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610e7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00610e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e82: push 0x9c4780 */ { u32 v = 0x9c4780u; r_esp -= 4; W32(r_esp, v); }
    /* 00610e87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610e89: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x610e8eu); f_005b7a84();
    /* 00610e8e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610e91: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00610e98:; BB(0x00610e98);
    /* 00610e98: mov dword ptr [0xa8e9f4], eax */ W32((u32)(0xa8e9f4u), r_eax);
    /* 00610e9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610ea0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610ea7: mov esp, ebp */ r_esp = r_ebp;
    /* 00610ea9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610eaa: ret  */ FN_RET(0x00610e2c); r_esp += 4; return;
L_00610eab:; BB(0x00610eab);
    /* 00610eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610ead: jmp 0x610e98 */ goto L_00610e98;
}

void f_00610eb0(void) /* sub_610EB0 */
{
    FN_ENTER(0x00610eb0);
    /* 00610eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610eb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00610eb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00610eb5: call 0x610ed4 */ r_esp -= 4; W32(r_esp, 0x610ebau); f_00610ed4();
    /* 00610eba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00610ebe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610ec0: jne 0x610ec6 */ if (!fZ) goto L_00610ec6;
L_00610ec2:; BB(0x00610ec2);
    /* 00610ec2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610ec3: ret 4 */ FN_RET(0x00610eb0); r_esp += 8; return;
L_00610ec6:; BB(0x00610ec6);
    /* 00610ec6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00610ec7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x610eccu); f_005c2f74();
    /* 00610ecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610ecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00610ece: ret 4 */ FN_RET(0x00610eb0); r_esp += 8; return;
}

void f_00610ed4(void) /* sub_610ED4 */
{
    FN_ENTER(0x00610ed4);
    /* 00610ed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610ed5: mov ebp, esp */ r_ebp = r_esp;
    /* 00610ed7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610ed9: push 0x8e0ca4 */ { u32 v = 0x8e0ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 00610ede: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610ee5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610eec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610eef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610ef2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00610ef5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00610ef8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00610efb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00610efe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610f01: mov dword ptr [ecx], 0xb24780 */ W32((u32)(r_ecx), 0xb24780u);
    /* 00610f07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610f0e: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x610f13u); f_0060c7e4();
    /* 00610f13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610f1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00610f1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610f20: ret  */ FN_RET(0x00610ed4); r_esp += 4; return;
}

void f_00610f12(void)
{
    FN_ENTER(0x00610f12);
    /* 00610f12: dec dword ptr [ebx - 0x769b0bb3] */ { u32 ad = (u32)(r_ebx+0x8964f44du); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00610f18: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610f1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00610f1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610f20: ret  */ FN_RET(0x00610f12); r_esp += 4; return;
}

void f_00610f24(void) /* sub_610F24 */
{
    FN_ENTER(0x00610f24);
    /* 00610f24: mov ecx, dword ptr [0xa8ea00] */ r_ecx = R32((u32)(0xa8ea00u));
    /* 00610f2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00610f2c: je 0x610f41 */ if (fZ) goto L_00610f41;
L_00610f2e:; BB(0x00610f2e);
    /* 00610f2e: je 0x610f37 */ if (fZ) goto L_00610f37;
L_00610f30:; BB(0x00610f30);
    /* 00610f30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610f32: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x610f37u); f_004066a8();
L_00610f37:; BB(0x00610f37);
    /* 00610f37: mov dword ptr [0xa8ea00], 0 */ W32((u32)(0xa8ea00u), 0x0u);
L_00610f41:; BB(0x00610f41);
    /* 00610f41: ret  */ FN_RET(0x00610f24); r_esp += 4; return;
}

void f_00610f44(void)
{
    FN_ENTER(0x00610f44);
    /* 00610f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610f45: mov ebp, esp */ r_ebp = r_esp;
    /* 00610f47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610f49: push 0x8e0ce6 */ { u32 v = 0x8e0ce6u; r_esp -= 4; W32(r_esp, v); }
    /* 00610f4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610f55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610f5c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610f5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610f62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610f65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610f68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610f6b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00610f6d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610f74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610f79u); f_005caba4();
    /* 00610f79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610f7a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00610f7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f7f: je 0x611007 */ if (fZ) goto L_00611007;
L_00610f85:; BB(0x00610f85);
    /* 00610f85: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00610f8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610f93: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610f99: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610f9c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x610fa1u); f_00787a4c();
    /* 00610fa1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610fa4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610fab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00610fae:; BB(0x00610fae);
    /* 00610fae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610fb5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00610fbc: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610fc1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610fc6u); f_005caba4();
    /* 00610fc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610fc7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00610fca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610fcc: je 0x611003 */ if (fZ) goto L_00611003;
L_00610fce:; BB(0x00610fce);
    /* 00610fce: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610fd5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00610fdc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610fdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610fe2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610fe6: call 0x611010 */ r_esp -= 4; W32(r_esp, 0x610febu); f_00611010();
    /* 00610feb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610fee: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610ff5:; BB(0x00610ff5);
    /* 00610ff5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610ff8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610fff: mov esp, ebp */ r_esp = r_ebp;
    /* 00611001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611002: ret  */ FN_RET(0x00610f44); r_esp += 4; return;
L_00611003:; BB(0x00611003);
    /* 00611003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611005: jmp 0x610ff5 */ goto L_00610ff5;
L_00611007:; BB(0x00611007);
    /* 00611007: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611009: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061100c: jmp 0x610fae */ goto L_00610fae;
}

void f_00610f4c(void)
{
    FN_ENTER(0x00610f4c);
    /* 00610f4c: mov es, word ptr [eax] */ UNSUP(0x00610f4c, "mov es, word ptr [eax]");
    /* 00610f4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610f55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00610f5c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610f5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00610f62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00610f65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00610f68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00610f6b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00610f6d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610f74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610f79u); f_005caba4();
    /* 00610f79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610f7a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00610f7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f7f: je 0x611007 */ if (fZ) goto L_00611007;
L_00610f85:; BB(0x00610f85);
    /* 00610f85: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00610f8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610f93: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610f99: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610f9c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x610fa1u); f_00787a4c();
    /* 00610fa1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610fa4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00610fab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00610fae:; BB(0x00610fae);
    /* 00610fae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610fb5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00610fbc: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610fc1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x610fc6u); f_005caba4();
    /* 00610fc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610fc7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00610fca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610fcc: je 0x611003 */ if (fZ) goto L_00611003;
L_00610fce:; BB(0x00610fce);
    /* 00610fce: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00610fd5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00610fdc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00610fdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610fe2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610fe6: call 0x611010 */ r_esp -= 4; W32(r_esp, 0x610febu); f_00611010();
    /* 00610feb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610fee: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00610ff5:; BB(0x00610ff5);
    /* 00610ff5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610ff8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610fff: mov esp, ebp */ r_esp = r_ebp;
    /* 00611001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611002: ret  */ FN_RET(0x00610f4c); r_esp += 4; return;
L_00611003:; BB(0x00611003);
    /* 00611003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00611005: jmp 0x610ff5 */ goto L_00610ff5;
L_00611007:; BB(0x00611007);
    /* 00611007: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611009: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061100c: jmp 0x610fae */ goto L_00610fae;
}

