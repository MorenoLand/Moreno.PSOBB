#include "protos.h"

void f_00740000(void)
{
    FN_ENTER(0x00740000);
    goto L_00740000;
L_0073ffdf:; BB(0x0073ffdf);
    /* 0073ffdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ffe2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ffe5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ffec: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ffee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ffef: ret  */ FN_RET(0x00740000); r_esp += 4; return;
L_00740000:; BB(0x00740000);
    /* 00740000: or bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00740002: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 00740003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740005: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00740008: jmp 0x73ffdf */ goto L_0073ffdf;
}

void f_0074000c(void) /* sub_74000C */
{
    FN_ENTER(0x0074000c);
    /* 0074000c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074000d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074000e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00740010: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740012: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x740017u); f_007108f4();
    /* 00740017: mov ebp, eax */ r_ebp = r_eax;
    /* 00740019: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074001a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074001c: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x740021u); f_00710f80();
    /* 00740021: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740022: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00740025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740028: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74002du); f_0072a648();
    /* 0074002d: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00740034: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074003a: jne 0x740044 */ if (!fZ) goto L_00740044;
L_0074003c:; BB(0x0074003c);
    /* 0074003c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074003d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074003f: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x740044u); f_0073746c();
L_00740044:; BB(0x00740044);
    /* 00740044: mov edx, dword ptr [ebx + 0x94] */ r_edx = R32((u32)(r_ebx+0x94u));
    /* 0074004a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074004c: jle 0x74005f */ if ((fZ||fS!=fO)) goto L_0074005f;
L_0074004e:; BB(0x0074004e);
    /* 0074004e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074004f: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00740056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740059: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074005a: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x74005fu); f_007367d0();
L_0074005f:; BB(0x0074005f);
    /* 0074005f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x0074000c); r_esp += 4; return;
}

void f_00740020(void)
{
    FN_ENTER(0x00740020);
    /* 00740020: call dword ptr [ebp - 0x73] */ { u32 t = R32((u32)(r_ebp+0xffffff8du)); r_esp -= 4; W32(r_esp, 0x740023u); call_ind(t); }
    /* 00740023: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740024: and al, 0x52 */ {  u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00740026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740028: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74002du); f_0072a648();
    /* 0074002d: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00740034: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074003a: jne 0x740044 */ if (!fZ) goto L_00740044;
L_0074003c:; BB(0x0074003c);
    /* 0074003c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074003d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074003f: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x740044u); f_0073746c();
L_00740044:; BB(0x00740044);
    /* 00740044: mov edx, dword ptr [ebx + 0x94] */ r_edx = R32((u32)(r_ebx+0x94u));
    /* 0074004a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074004c: jle 0x74005f */ if ((fZ||fS!=fO)) goto L_0074005f;
L_0074004e:; BB(0x0074004e);
    /* 0074004e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074004f: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00740056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740059: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074005a: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x74005fu); f_007367d0();
L_0074005f:; BB(0x0074005f);
    /* 0074005f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740020); r_esp += 4; return;
}

void f_00740034(void)
{
    FN_ENTER(0x00740034);
    /* 00740034: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074003a: jne 0x740044 */ if (!fZ) goto L_00740044;
L_0074003c:; BB(0x0074003c);
    /* 0074003c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074003d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074003f: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x740044u); f_0073746c();
L_00740044:; BB(0x00740044);
    /* 00740044: mov edx, dword ptr [ebx + 0x94] */ r_edx = R32((u32)(r_ebx+0x94u));
    /* 0074004a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074004c: jle 0x74005f */ if ((fZ||fS!=fO)) goto L_0074005f;
L_0074004e:; BB(0x0074004e);
    /* 0074004e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074004f: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00740056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740059: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074005a: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x74005fu); f_007367d0();
L_0074005f:; BB(0x0074005f);
    /* 0074005f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740034); r_esp += 4; return;
}

void f_00740053(void)
{
    FN_ENTER(0x00740053);
    /* 00740053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00740055: add byte ptr [eax - 0x75], dl */ { u32 ad = (u32)(r_eax+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00740058: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00740059: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074005a: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x74005fu); f_007367d0();
    /* 0074005f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740053); r_esp += 4; return;
}

void f_00740054(void)
{
    FN_ENTER(0x00740054);
    /* 00740054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00740056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740059: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074005a: call 0x7367d0 */ r_esp -= 4; W32(r_esp, 0x74005fu); f_007367d0();
    /* 0074005f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740054); r_esp += 4; return;
}

void f_00740061(void)
{
    FN_ENTER(0x00740061);
    /* 00740061: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00740062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740061); r_esp += 4; return;
}

void f_00740063(void)
{
    FN_ENTER(0x00740063);
    /* 00740063: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00740064: je 0x74006c */ if (fZ) goto L_0074006c;
L_00740066:; BB(0x00740066);
    /* 00740066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740067: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74006cu); f_00761390();
L_0074006c:; BB(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740063); r_esp += 4; return;
}

void f_00740069(void)
{
    FN_ENTER(0x00740069);
    /* 00740069: adc eax, dword ptr [edx] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0074006b: add byte ptr [ebx - 0x3f7a9bbd], cl */ { u32 ad = (u32)(r_ebx+0xc0856443u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740069); r_esp += 4; return;
}

void f_0074006b(void)
{
    FN_ENTER(0x0074006b);
    /* 0074006b: add byte ptr [ebx - 0x3f7a9bbd], cl */ { u32 ad = (u32)(r_ebx+0xc0856443u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x0074006b); r_esp += 4; return;
}

void f_0074006c(void)
{
    FN_ENTER(0x0074006c);
    /* 0074006c: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x0074006c); r_esp += 4; return;
}

void f_0074006e(void)
{
    FN_ENTER(0x0074006e);
    /* 0074006e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x0074006e); r_esp += 4; return;
}

void f_0074006f(void)
{
    FN_ENTER(0x0074006f);
    /* 0074006f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740071: je 0x74007f */ if (fZ) goto L_0074007f;
L_00740073:; BB(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
L_0074007f:; BB(0x0074007f);
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x0074006f); r_esp += 4; return;
}

void f_00740070(void)
{
    FN_ENTER(0x00740070);
    /* 00740070: sal byte ptr [esp + ecx - 0x7d], 0xc3 */ { u32 ad = (u32)(r_esp+r_ecx+0xffffff83u); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fC = (c <= 8) ? ((a >> (8 - c)) & 1) : 0; fO = ((r >> 7) & 1) ^ fC; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00740075: jo 0x7400ca */ if (fO) goto L_007400ca;
L_00740077:; BB(0x00740077);
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740070); r_esp += 4; return;
L_007400ca:; BB(0x007400ca);
    /* 007400ca: ret 4 */ FN_RET(0x00740070); r_esp += 8; return;
}

void f_00740072(void)
{
    FN_ENTER(0x00740072);
    /* 00740072: or al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740074: ret  */ FN_RET(0x00740072); r_esp += 4; return;
}

void f_00740073(void)
{
    FN_ENTER(0x00740073);
    /* 00740073: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740073); r_esp += 4; return;
}

void f_00740075(void)
{
    FN_ENTER(0x00740075);
    /* 00740075: jo 0x7400ca */ if (fO) goto L_007400ca;
L_00740077:; BB(0x00740077);
    /* 00740077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740078: mov ecx, eax */ r_ecx = r_eax;
    /* 0074007a: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74007fu); f_0073f694();
    /* 0074007f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740081: ret  */ FN_RET(0x00740075); r_esp += 4; return;
L_007400ca:; BB(0x007400ca);
    /* 007400ca: ret 4 */ FN_RET(0x00740075); r_esp += 8; return;
}

void f_00740084(void) /* sub_740084 */
{
    FN_ENTER(0x00740084);
    /* 00740084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00740085: mov esi, ecx */ r_esi = r_ecx;
    /* 00740087: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0074008e: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00740095: jl 0x74009b */ if ((fS!=fO)) goto L_0074009b;
L_00740097:; BB(0x00740097);
    /* 00740097: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00740098: ret 0xc */ FN_RET(0x00740084); r_esp += 16; return;
L_0074009b:; BB(0x0074009b);
    /* 0074009b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074009f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007400a3: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007400a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007400a9: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007400ac: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 007400af: call 0x72c470 */ r_esp -= 4; W32(r_esp, 0x7400b4u); f_0072c470();
    /* 007400b4: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007400bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007400bd: ret 0xc */ FN_RET(0x00740084); r_esp += 16; return;
}

void f_007400c0(void) /* sub_7400C0 */
{
    FN_ENTER(0x007400c0);
    /* 007400c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007400c4: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 007400ca: ret 4 */ FN_RET(0x007400c0); r_esp += 8; return;
}

void f_007400d0(void) /* sub_7400D0 */
{
    FN_ENTER(0x007400d0);
    /* 007400d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007400d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007400d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007400d5: mov eax, dword ptr [0x9f3424] */ r_eax = R32((u32)(0x9f3424u));
    /* 007400da: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007400de: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007400e1: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x7400e6u); f_00737ae4();
    /* 007400e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007400e8: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x7400edu); f_00737b8c();
    /* 007400ed: push 0x47185800 */ { u32 v = 0x47185800u; r_esp -= 4; W32(r_esp, v); }
    /* 007400f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007400f4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7400f9u); f_00712624();
    /* 007400f9: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 007400fe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00740101: jle 0x740114 */ if ((fZ||fS!=fO)) goto L_00740114;
L_00740103:; BB(0x00740103);
    /* 00740103: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00740108: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074010a: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074010f: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x740114u); f_0070f5a4();
L_00740114:; BB(0x00740114);
    /* 00740114: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 0074011e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074011f: ret 4 */ FN_RET(0x007400d0); r_esp += 8; return;
}

void f_00740124(void) /* sub_740124 */
{
    FN_ENTER(0x00740124);
    /* 00740124: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740125: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00740127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740129: call 0x740148 */ r_esp -= 4; W32(r_esp, 0x74012eu); f_00740148();
    /* 0074012e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00740132: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740134: jne 0x74013a */ if (!fZ) goto L_0074013a;
L_00740136:; BB(0x00740136);
    /* 00740136: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740137: ret 4 */ FN_RET(0x00740124); r_esp += 8; return;
L_0074013a:; BB(0x0074013a);
    /* 0074013a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074013b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x740140u); f_005c2f74();
    /* 00740140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00740142: ret 4 */ FN_RET(0x00740124); r_esp += 8; return;
}

void f_00740148(void) /* sub_740148 */
{
    FN_ENTER(0x00740148);
    /* 00740148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740149: mov ebp, esp */ r_ebp = r_esp;
    /* 0074014b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074014d: push 0x8f21d8 */ { u32 v = 0x8f21d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00740152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00740158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00740160: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00740163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00740166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00740169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074016c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074016f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00740172: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00740179: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074017c: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0074017f: mov dword ptr [eax], 0xb41568 */ W32((u32)(r_eax), 0xb41568u);
    /* 00740185: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740187: je 0x740198 */ if (fZ) goto L_00740198;
L_00740189:; BB(0x00740189);
    /* 00740189: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74018eu); f_007127b0();
    /* 0074018e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740191: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_00740198:; BB(0x00740198);
    /* 00740198: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0074019b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074019d: je 0x7401ae */ if (fZ) goto L_007401ae;
L_0074019f:; BB(0x0074019f);
    /* 0074019f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7401a4u); f_007127b0();
    /* 007401a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007401a7: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007401ae:; BB(0x007401ae);
    /* 007401ae: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007401b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007401b3: je 0x7401bf */ if (fZ) goto L_007401bf;
L_007401b5:; BB(0x007401b5);
    /* 007401b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007401b7: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x7401bcu); f_00728a10();
    /* 007401bc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007401bf:; BB(0x007401bf);
    /* 007401bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007401c6: mov ecx, eax */ r_ecx = r_eax;
    /* 007401c8: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7401cdu); f_00710c28();
    /* 007401cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007401d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007401d7: mov esp, ebp */ r_esp = r_ebp;
    /* 007401d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007401da: ret  */ FN_RET(0x00740148); r_esp += 4; return;
}

void f_007401dc(void) /* sub_7401DC */
{
    FN_ENTER(0x007401dc);
    /* 007401dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007401dd: mov ebp, esp */ r_ebp = r_esp;
    /* 007401df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007401e1: push 0x8f220e */ { u32 v = 0x8f220eu; r_esp -= 4; W32(r_esp, v); }
    /* 007401e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007401ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007401ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007401f4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007401f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007401fa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007401fd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00740200: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00740203: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00740206: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740209: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0074020c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074020f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00740212: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00740215: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00740217: push 0x9f35bc */ { u32 v = 0x9f35bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074021c: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x740221u); f_00710d30();
    /* 00740221: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00740228: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074022b: mov dword ptr [edx], 0xb41568 */ W32((u32)(r_edx), 0xb41568u);
    /* 00740231: mov eax, dword ptr [0x9f35b8] */ r_eax = R32((u32)(0x9f35b8u));
    /* 00740236: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0074023d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0074023f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00740242: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x740247u); f_008581c5();
    /* 00740247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740248: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0074024b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074024d: je 0x7402be */ if (fZ) goto L_007402be;
L_0074024f:; BB(0x0074024f);
    /* 0074024f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00740256: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0074025d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0074025f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x740264u); f_0079317c();
    /* 00740264: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740265: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740268: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074026b: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0074026f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740271: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x740276u); f_00761320();
    /* 00740276: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00740279: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00740280:; BB(0x00740280);
    /* 00740280: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740283: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00740286: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074028d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740290: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00740293: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740294: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00740296: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00740299: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074029a: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0074029d: mov dword ptr [ecx + 0x6c], ebx */ W32((u32)(r_ecx+0x6cu), r_ebx);
    /* 007402a0: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 007402a3: call 0x7402c4 */ r_esp -= 4; W32(r_esp, 0x7402a8u); f_007402c4();
    /* 007402a8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007402ab: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007402ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007402b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007402b8: mov esp, ebp */ r_esp = r_ebp;
    /* 007402ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007402bb: ret 0xc */ FN_RET(0x007401dc); r_esp += 16; return;
L_007402be:; BB(0x007402be);
    /* 007402be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007402c0: jmp 0x740280 */ goto L_00740280;
}

void f_007402c4(void) /* sub_7402C4 */
{
    FN_ENTER(0x007402c4);
    /* 007402c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007402c5: mov ebp, esp */ r_ebp = r_esp;
    /* 007402c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007402c9: push 0x8f2234 */ { u32 v = 0x8f2234u; r_esp -= 4; W32(r_esp, v); }
    /* 007402ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007402d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007402d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007402dc: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007402df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007402e2: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 007402e5: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 007402e8: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 007402eb: mov edi, dword ptr [ecx + 0x28] */ r_edi = R32((u32)(r_ecx+0x28u));
    /* 007402ee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007402f1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007402f3: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 007402f6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 007402f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007402fb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007402fe: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00740303: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00740306: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00740309: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0074030c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0074030f: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00740312: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00740315: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 00740318: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0074031b: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0074031e: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 00740321: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00740324: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x740329u); f_0079317c();
    /* 00740329: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074032a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074032d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074032f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740330: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x740335u); f_0072db60();
    /* 00740335: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740338: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 0074033b: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0074033e: movsx ecx, word ptr [ecx + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 00740342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00740343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740345: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740348: call 0x7377cc */ r_esp -= 4; W32(r_esp, 0x74034du); f_007377cc();
    /* 0074034d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740350: movzx eax, byte ptr [ebp - 0x54] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffacu));
    /* 00740354: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740357: je 0x74037c */ if (fZ) goto L_0074037c;
L_00740359:; BB(0x00740359);
    /* 00740359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074035a: call 0x72b39c */ r_esp -= 4; W32(r_esp, 0x74035fu); f_0072b39c();
    /* 0074035f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740360: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00740364: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074036a: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 0074036e: mov ecx, esi */ r_ecx = r_esi;
    /* 00740370: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740373: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00740375: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x74037au); f_0072e7e4();
    /* 0074037a: jmp 0x740389 */ goto L_00740389;
L_0074037c:; BB(0x0074037c);
    /* 0074037c: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00740380: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00740385: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
L_00740389:; BB(0x00740389);
    /* 00740389: movzx eax, byte ptr [ebp - 0x58] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa8u));
    /* 0074038d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074038e: call 0x72b39c */ r_esp -= 4; W32(r_esp, 0x740393u); f_0072b39c();
    /* 00740393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740394: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740397: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00740399: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074039c: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7403a1u); f_0072e7e4();
    /* 007403a1: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 007403a6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7403abu); f_0079317c();
    /* 007403ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007403ac: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007403af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007403b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007403b2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7403b7u); f_0072db60();
    /* 007403b7: lea eax, [ebx + 0xde] */ r_eax = (u32)(r_ebx+0xdeu);
    /* 007403bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007403be: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7403c3u); f_0079317c();
    /* 007403c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007403c4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007403c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007403c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007403ca: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7403cfu); f_0072db60();
    /* 007403cf: movzx eax, byte ptr [ebx + 0x972e0b] */ r_eax = (u32)R8((u32)(r_ebx+0x972e0bu));
    /* 007403d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007403d7: call 0x72b39c */ r_esp -= 4; W32(r_esp, 0x7403dcu); f_0072b39c();
    /* 007403dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007403dd: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007403e0: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 007403e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007403e5: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7403eau); f_0072e7e4();
    /* 007403ea: mov dword ptr [ebp - 0x50], 0x43590000 */ W32((u32)(r_ebp+0xffffffb0u), 0x43590000u);
    /* 007403f1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 007403f3: mov dword ptr [ebp - 0x4c], 0x43be0000 */ W32((u32)(r_ebp+0xffffffb4u), 0x43be0000u);
    /* 007403fa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7403ffu); f_0079317c();
    /* 007403ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740400: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00740403: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00740405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740406: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x74040bu); f_0072db60();
    /* 0074040b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074040e: je 0x7405ae */ if (fZ) goto L_007405ae;
L_00740414:; BB(0x00740414);
    /* 00740414: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740417: jne 0x7404e6 */ if (!fZ) goto L_007404e6;
L_0074041d:; BB(0x0074041d);
    /* 0074041d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00740420: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 00740427: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740428: lea ebx, [eax + 4] */ r_ebx = (u32)(r_eax+0x4u);
    /* 0074042b: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00740430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740431: call 0x707170 */ r_esp -= 4; W32(r_esp, 0x740436u); f_00707170();
    /* 00740436: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740439: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074043b: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00740440: mov ecx, edi */ r_ecx = r_edi;
    /* 00740442: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x740447u); f_0072db60();
    /* 00740447: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0074044c: mov ecx, edi */ r_ecx = r_edi;
    /* 0074044e: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x740453u); f_0072ddf4();
    /* 00740453: fld dword ptr [0x972e20] */ FPUSH(R_F32((u32)(0x972e20u)));
    /* 00740459: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 0074045c: fld dword ptr [0x972e1c] */ FPUSH(R_F32((u32)(0x972e1cu)));
    /* 00740462: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 00740465: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00740469: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074046e: fld dword ptr [0x972e2c] */ FPUSH(R_F32((u32)(0x972e2cu)));
    /* 00740474: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00740478: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0074047a: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 0074047d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0074047f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00740481: fsubr dword ptr [ebp - 0x50] */ ST(0) = R_F32((u32)(r_ebp+0xffffffb0u)) - ST(0);
    /* 00740484: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00740486: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00740489: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074048a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074048d: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x740492u); f_0083a248();
    /* 00740492: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00740495: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00740498: fmul dword ptr [0x972e2c] */ ST(0) = ST(0) * R_F32((u32)(0x972e2cu));
    /* 0074049e: fsubr dword ptr [ebp - 0x4c] */ ST(0) = R_F32((u32)(r_ebp+0xffffffb4u)) - ST(0);
    /* 007404a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007404a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007404a5: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x7404aau); f_0083a248();
    /* 007404aa: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 007404ad: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 007404b0: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 007404b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007404b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007404b5: call 0x73c9cc */ r_esp -= 4; W32(r_esp, 0x7404bau); f_0073c9cc();
    /* 007404ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007404bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007404c0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007404c2: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 007404c5: mov ecx, eax */ r_ecx = r_eax;
    /* 007404c7: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007404cc: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x7404d1u); f_0073cadc();
    /* 007404d1: push 0x47438c00 */ { u32 v = 0x47438c00u; r_esp -= 4; W32(r_esp, v); }
    /* 007404d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007404d9: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007404dc: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7404e1u); f_00712624();
    /* 007404e1: jmp 0x740663 */ goto L_00740663;
L_007404e6:; BB(0x007404e6);
    /* 007404e6: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007404e9: jne 0x740663 */ if (!fZ) goto L_00740663;
L_007404ef:; BB(0x007404ef);
    /* 007404ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007404f2: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 007404f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007404f6: call 0x77d8c0 */ r_esp -= 4; W32(r_esp, 0x7404fbu); f_0077d8c0();
    /* 007404fb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007404fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740501: mov ecx, eax */ r_ecx = r_eax;
    /* 00740503: call 0x77d910 */ r_esp -= 4; W32(r_esp, 0x740508u); f_0077d910();
    /* 00740508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074050a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074050b: mov ecx, edi */ r_ecx = r_edi;
    /* 0074050d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x740512u); f_0072db60();
    /* 00740512: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00740515: fsub dword ptr [0x972e14] */ ST(0) = ST(0) - R_F32((u32)(0x972e14u));
    /* 0074051b: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0074051e: fsub dword ptr [0x972e10] */ ST(0) = ST(0) - R_F32((u32)(0x972e10u));
    /* 00740524: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00740526: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00740529: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 0074052c: mov dword ptr [ebp - 0x48], 0x434b0000 */ W32((u32)(r_ebp+0xffffffb8u), 0x434b0000u);
    /* 00740533: mov dword ptr [ebp - 0x44], 0x429c0000 */ W32((u32)(r_ebp+0xffffffbcu), 0x429c0000u);
    /* 0074053a: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0074053c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00740543: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x740548u); f_005caba4();
    /* 00740548: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074054b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074054e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00740551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740553: je 0x74067c */ if (fZ) goto L_0074067c;
L_00740559:; BB(0x00740559);
    /* 00740559: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00740560: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00740567: mov ecx, eax */ r_ecx = r_eax;
    /* 00740569: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0074056c: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0074056f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740571: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x740576u); f_00714468();
    /* 00740576: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0074057d:; BB(0x0074057d);
    /* 0074057d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740580: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740583: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00740586: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074058d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00740590: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740594: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x740599u); f_00714584();
    /* 00740599: push 0x47438c00 */ { u32 v = 0x47438c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0074059e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007405a1: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007405a4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7405a9u); f_00712624();
    /* 007405a9: jmp 0x740663 */ goto L_00740663;
L_007405ae:; BB(0x007405ae);
    /* 007405ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007405b1: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 007405b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007405b5: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x7405bau); f_0083ddc4();
    /* 007405ba: mov ebx, eax */ r_ebx = r_eax;
    /* 007405bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007405bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007405c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007405c2: mov ecx, edi */ r_ecx = r_edi;
    /* 007405c4: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7405c9u); f_0072db60();
    /* 007405c9: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 007405ce: mov ecx, edi */ r_ecx = r_edi;
    /* 007405d0: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7405d5u); f_0072ddf4();
    /* 007405d5: fld dword ptr [0x972e20] */ FPUSH(R_F32((u32)(0x972e20u)));
    /* 007405db: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 007405de: fld dword ptr [0x972e1c] */ FPUSH(R_F32((u32)(0x972e1cu)));
    /* 007405e4: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 007405e7: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007405eb: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007405f1: fld dword ptr [0x972e2c] */ FPUSH(R_F32((u32)(0x972e2cu)));
    /* 007405f7: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 007405fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007405fd: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 00740600: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00740602: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00740604: fsubr dword ptr [ebp - 0x50] */ ST(0) = R_F32((u32)(r_ebp+0xffffffb0u)) - ST(0);
    /* 00740607: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00740609: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 0074060c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074060d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00740610: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x740615u); f_0083a248();
    /* 00740615: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00740618: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0074061b: fmul dword ptr [0x972e2c] */ ST(0) = ST(0) * R_F32((u32)(0x972e2cu));
    /* 00740621: fsubr dword ptr [ebp - 0x4c] */ ST(0) = R_F32((u32)(r_ebp+0xffffffb4u)) - ST(0);
    /* 00740624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00740625: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00740628: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x74062du); f_0083a248();
    /* 0074062d: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 00740630: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00740633: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00740636: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740637: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00740638: call 0x73c9cc */ r_esp -= 4; W32(r_esp, 0x74063du); f_0073c9cc();
    /* 0074063d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740640: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740643: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 00740648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00740649: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0074064c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074064e: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x740653u); f_0073cadc();
    /* 00740653: push 0x47438c00 */ { u32 v = 0x47438c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00740658: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074065b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0074065e: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x740663u); f_00712624();
L_00740663:; BB(0x00740663);
    /* 00740663: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00740666: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00740669: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074066c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074066f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740676: mov esp, ebp */ r_esp = r_ebp;
    /* 00740678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740679: ret 8 */ FN_RET(0x007402c4); r_esp += 12; return;
L_0074067c:; BB(0x0074067c);
    /* 0074067c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074067e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00740681: jmp 0x74057d */ goto L_0074057d;
}

void f_00740688(void) /* sub_740688 */
{
    FN_ENTER(0x00740688);
    /* 00740688: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00740689: mov esi, ecx */ r_esi = r_ecx;
    /* 0074068b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0074068e: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x740693u); f_00761388();
    /* 00740693: mov ecx, esi */ r_ecx = r_esi;
    /* 00740695: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x74069au); f_00710db4();
    /* 0074069a: mov ecx, esi */ r_ecx = r_esi;
    /* 0074069c: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x7406a1u); f_00710ee4();
    /* 007406a1: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 007406a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007406a5: mov ecx, esi */ r_ecx = r_esi;
    /* 007406a7: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7406acu); f_0072a5ec();
    /* 007406ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007406ad: ret  */ FN_RET(0x00740688); r_esp += 4; return;
}

void f_007406b0(void) /* sub_7406B0 */
{
    FN_ENTER(0x007406b0);
    /* 007406b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007406b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007406b2: mov esi, ecx */ r_esi = r_ecx;
    /* 007406b4: mov ecx, esi */ r_ecx = r_esi;
    /* 007406b6: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7406bbu); f_00712644();
    /* 007406bb: mov edi, eax */ r_edi = r_eax;
    /* 007406bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007406be: mov ecx, esi */ r_ecx = r_esi;
    /* 007406c0: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7406c5u); f_00710f80();
    /* 007406c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007406c6: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 007406c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007406ca: mov ecx, esi */ r_ecx = r_esi;
    /* 007406cc: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7406d1u); f_0072a648();
    /* 007406d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007406d2: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007406d5: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x7406dau); f_00761390();
    /* 007406da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007406db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007406dc: ret  */ FN_RET(0x007406b0); r_esp += 4; return;
}

void f_007406e0(void) /* sub_7406E0 */
{
    FN_ENTER(0x007406e0);
    /* 007406e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007406e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007406e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007406e5: call 0x740704 */ r_esp -= 4; W32(r_esp, 0x7406eau); f_00740704();
    /* 007406ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007406ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007406f0: jne 0x7406f6 */ if (!fZ) goto L_007406f6;
L_007406f2:; BB(0x007406f2);
    /* 007406f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007406f3: ret 4 */ FN_RET(0x007406e0); r_esp += 8; return;
L_007406f6:; BB(0x007406f6);
    /* 007406f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007406f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7406fcu); f_005c2f74();
    /* 007406fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007406fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007406fe: ret 4 */ FN_RET(0x007406e0); r_esp += 8; return;
}

void f_00740704(void) /* sub_740704 */
{
    FN_ENTER(0x00740704);
    /* 00740704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740705: mov ebp, esp */ r_ebp = r_esp;
    /* 00740707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00740709: push 0x8f2250 */ { u32 v = 0x8f2250u; r_esp -= 4; W32(r_esp, v); }
    /* 0074070e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00740714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074071c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074071f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00740722: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00740725: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00740728: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074072b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074072e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00740735: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740738: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074073b: mov dword ptr [eax], 0xb415f0 */ W32((u32)(r_eax), 0xb415f0u);
    /* 00740741: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x740746u); f_0068d5a8();
    /* 00740746: mov ebx, eax */ r_ebx = r_eax;
    /* 00740748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074074b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074074d: je 0x74076f */ if (fZ) goto L_0074076f;
L_0074074f:; BB(0x0074074f);
    /* 0074074f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740752: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740755: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x74075au); f_00716ba0();
    /* 0074075a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074075b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074075d: jne 0x74076f */ if (!fZ) goto L_0074076f;
L_0074075f:; BB(0x0074075f);
    /* 0074075f: call 0x7190c4 */ r_esp -= 4; W32(r_esp, 0x740764u); f_007190c4();
    /* 00740764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740766: jne 0x74076f */ if (!fZ) goto L_0074076f;
L_00740768:; BB(0x00740768);
    /* 00740768: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074076a: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x74076fu); f_00693728();
L_0074076f:; BB(0x0074076f);
    /* 0074076f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740772: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740775: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x74077au); f_00718048();
    /* 0074077a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074077b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00740781: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740783: je 0x740792 */ if (fZ) goto L_00740792;
L_00740785:; BB(0x00740785);
    /* 00740785: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00740789: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074078e: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_00740792:; BB(0x00740792);
    /* 00740792: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740795: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00740798: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074079a: je 0x7407ab */ if (fZ) goto L_007407ab;
L_0074079c:; BB(0x0074079c);
    /* 0074079c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7407a1u); f_007127b0();
    /* 007407a1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007407a4: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_007407ab:; BB(0x007407ab);
    /* 007407ab: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007407ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007407b0: je 0x7407c1 */ if (fZ) goto L_007407c1;
L_007407b2:; BB(0x007407b2);
    /* 007407b2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7407b7u); f_007127b0();
    /* 007407b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007407ba: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_007407c1:; BB(0x007407c1);
    /* 007407c1: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007407c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007407c6: je 0x7407d7 */ if (fZ) goto L_007407d7;
L_007407c8:; BB(0x007407c8);
    /* 007407c8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7407cdu); f_007127b0();
    /* 007407cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007407d0: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_007407d7:; BB(0x007407d7);
    /* 007407d7: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007407da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007407dc: je 0x7407ed */ if (fZ) goto L_007407ed;
L_007407de:; BB(0x007407de);
    /* 007407de: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7407e3u); f_007127b0();
    /* 007407e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007407e6: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_007407ed:; BB(0x007407ed);
    /* 007407ed: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007407f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007407f2: je 0x740803 */ if (fZ) goto L_00740803;
L_007407f4:; BB(0x007407f4);
    /* 007407f4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7407f9u); f_007127b0();
    /* 007407f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007407fc: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_00740803:; BB(0x00740803);
    /* 00740803: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00740805: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x74080au); f_00791748();
    /* 0074080a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074080b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074080e: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00740811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740813: je 0x740827 */ if (fZ) goto L_00740827;
L_00740815:; BB(0x00740815);
    /* 00740815: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074081b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074081d: je 0x740827 */ if (fZ) goto L_00740827;
L_0074081f:; BB(0x0074081f);
    /* 0074081f: call 0x7f29c0 */ r_esp -= 4; W32(r_esp, 0x740824u); f_007f29c0();
    /* 00740824: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00740827:; BB(0x00740827);
    /* 00740827: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074082e: mov ecx, edx */ r_ecx = r_edx;
    /* 00740830: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x740835u); f_008171e8();
    /* 00740835: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740838: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074083b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740842: mov esp, ebp */ r_esp = r_ebp;
    /* 00740844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740845: ret  */ FN_RET(0x00740704); r_esp += 4; return;
}

void f_00740848(void) /* sub_740848 */
{
    FN_ENTER(0x00740848);
    /* 00740848: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074084a: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00740850: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740854(void) /* sub_740854 */
{
    FN_ENTER(0x00740854);
    /* 00740854: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740856: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0074085c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740860(void) /* sub_740860 */
{
    FN_ENTER(0x00740860);
    /* 00740860: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740862: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 00740868: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0074086c(void) /* sub_74086C */
{
    FN_ENTER(0x0074086c);
    /* 0074086c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074086e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00740874: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740878(void) /* sub_740878 */
{
    FN_ENTER(0x00740878);
    /* 00740878: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074087a: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00740880: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740884(void) /* sub_740884 */
{
    FN_ENTER(0x00740884);
    /* 00740884: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740886: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 0074088c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740890(void) /* sub_740890 */
{
    FN_ENTER(0x00740890);
    /* 00740890: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740892: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00740898: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0074089c(void) /* sub_74089C */
{
    FN_ENTER(0x0074089c);
    /* 0074089c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074089e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 007408a4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408a8(void) /* sub_7408A8 */
{
    FN_ENTER(0x007408a8);
    /* 007408a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408aa: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 007408b0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408b4(void) /* sub_7408B4 */
{
    FN_ENTER(0x007408b4);
    /* 007408b4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408b6: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 007408bc: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408c0(void) /* sub_7408C0 */
{
    FN_ENTER(0x007408c0);
    /* 007408c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408c2: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 007408c8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408cc(void) /* sub_7408CC */
{
    FN_ENTER(0x007408cc);
    /* 007408cc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408ce: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 007408d4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408d8(void) /* sub_7408D8 */
{
    FN_ENTER(0x007408d8);
    /* 007408d8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408da: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 007408e0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408e4(void) /* sub_7408E4 */
{
    FN_ENTER(0x007408e4);
    /* 007408e4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408e6: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 007408ec: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408f0(void) /* sub_7408F0 */
{
    FN_ENTER(0x007408f0);
    /* 007408f0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408f2: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 007408f8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007408fc(void) /* sub_7408FC */
{
    FN_ENTER(0x007408fc);
    /* 007408fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007408fe: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 00740904: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740908(void) /* sub_740908 */
{
    FN_ENTER(0x00740908);
    /* 00740908: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074090a: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 00740910: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740914(void) /* sub_740914 */
{
    FN_ENTER(0x00740914);
    /* 00740914: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740916: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0074091c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740920(void) /* sub_740920 */
{
    FN_ENTER(0x00740920);
    /* 00740920: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740922: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00740928: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0074092c(void) /* sub_74092C */
{
    FN_ENTER(0x0074092c);
    /* 0074092c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074092e: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 00740934: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740938(void) /* sub_740938 */
{
    FN_ENTER(0x00740938);
    /* 00740938: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074093a: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 00740940: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740944(void) /* sub_740944 */
{
    FN_ENTER(0x00740944);
    /* 00740944: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740946: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 0074094c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740950(void) /* sub_740950 */
{
    FN_ENTER(0x00740950);
    /* 00740950: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740952: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00740958: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0074095c(void) /* sub_74095C */
{
    FN_ENTER(0x0074095c);
    /* 0074095c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074095e: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 00740964: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740968(void) /* sub_740968 */
{
    FN_ENTER(0x00740968);
    /* 00740968: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074096a: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 00740970: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740974(void) /* sub_740974 */
{
    FN_ENTER(0x00740974);
    /* 00740974: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740976: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 0074097c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740980(void) /* sub_740980 */
{
    FN_ENTER(0x00740980);
    /* 00740980: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740982: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 00740988: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_0074098c(void) /* sub_74098C */
{
    FN_ENTER(0x0074098c);
    /* 0074098c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074098e: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00740994: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740998(void) /* sub_740998 */
{
    FN_ENTER(0x00740998);
    /* 00740998: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074099a: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 007409a0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409a4(void) /* sub_7409A4 */
{
    FN_ENTER(0x007409a4);
    /* 007409a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409a6: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007409a9: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409ac(void) /* sub_7409AC */
{
    FN_ENTER(0x007409ac);
    /* 007409ac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409ae: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 007409b1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409b4(void) /* sub_7409B4 */
{
    FN_ENTER(0x007409b4);
    /* 007409b4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409b6: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 007409b9: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409bc(void) /* sub_7409BC */
{
    FN_ENTER(0x007409bc);
    /* 007409bc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409be: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 007409c1: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409c4(void) /* sub_7409C4 */
{
    FN_ENTER(0x007409c4);
    /* 007409c4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409c6: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 007409c9: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409cc(void) /* sub_7409CC */
{
    FN_ENTER(0x007409cc);
    /* 007409cc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409ce: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007409d4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409d8(void) /* sub_7409D8 */
{
    FN_ENTER(0x007409d8);
    /* 007409d8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409da: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 007409dd: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409e0(void) /* sub_7409E0 */
{
    FN_ENTER(0x007409e0);
    /* 007409e0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409e2: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 007409e5: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409e8(void) /* sub_7409E8 */
{
    FN_ENTER(0x007409e8);
    /* 007409e8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409ea: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 007409ed: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409f0(void) /* sub_7409F0 */
{
    FN_ENTER(0x007409f0);
    /* 007409f0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409f2: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 007409f8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_007409fc(void) /* sub_7409FC */
{
    FN_ENTER(0x007409fc);
    /* 007409fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007409fe: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00740a04: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a08(void) /* sub_740A08 */
{
    FN_ENTER(0x00740a08);
    /* 00740a08: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a0a: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00740a10: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a14(void) /* sub_740A14 */
{
    FN_ENTER(0x00740a14);
    /* 00740a14: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a16: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00740a1c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a20(void) /* sub_740A20 */
{
    FN_ENTER(0x00740a20);
    /* 00740a20: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a22: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00740a28: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a2c(void) /* sub_740A2C */
{
    FN_ENTER(0x00740a2c);
    /* 00740a2c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a2e: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00740a34: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a38(void) /* sub_740A38 */
{
    FN_ENTER(0x00740a38);
    /* 00740a38: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a3a: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00740a40: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a44(void) /* sub_740A44 */
{
    FN_ENTER(0x00740a44);
    /* 00740a44: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a46: mov edx, dword ptr [eax + 0xa0] */ r_edx = R32((u32)(r_eax+0xa0u));
    /* 00740a4c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a50(void) /* sub_740A50 */
{
    FN_ENTER(0x00740a50);
    /* 00740a50: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a52: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00740a58: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a5c(void) /* sub_740A5C */
{
    FN_ENTER(0x00740a5c);
    /* 00740a5c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00740a5e: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 00740a64: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
}

void f_00740a68(void) /* sub_740A68 */
{
    FN_ENTER(0x00740a68);
    /* 00740a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740a69: mov ebp, esp */ r_ebp = r_esp;
    /* 00740a6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00740a6d: push 0x8f226c */ { u32 v = 0x8f226cu; r_esp -= 4; W32(r_esp, v); }
    /* 00740a72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00740a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740a79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00740a80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00740a83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00740a86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00740a89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00740a8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00740a8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00740a92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740a95: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00740a98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00740a9b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x740aa0u); f_008193cc();
    /* 00740aa0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00740aa7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740aaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740aad: mov dword ptr [edx], 0xb415f0 */ W32((u32)(r_edx), 0xb415f0u);
    /* 00740ab3: mov eax, dword ptr [0x9f3760] */ r_eax = R32((u32)(0x9f3760u));
    /* 00740ab8: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 00740abf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00740ac2: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00740ac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00740ac6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x740acbu); f_0068d5a8();
    /* 00740acb: mov ebx, eax */ r_ebx = r_eax;
    /* 00740acd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740ad0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740ad2: je 0x740c10 */ if (fZ) goto L_00740c10;
L_00740ad8:; BB(0x00740ad8);
    /* 00740ad8: mov edx, ebx */ r_edx = r_ebx;
    /* 00740ada: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00740ae0: je 0x740bec */ if (fZ) goto L_00740bec;
L_00740ae6:; BB(0x00740ae6);
    /* 00740ae6: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x740aebu); f_0080a640();
    /* 00740aeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740aed: je 0x740afc */ if (fZ) goto L_00740afc;
L_00740aef:; BB(0x00740aef);
    /* 00740aef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740af2: mov byte ptr [ecx + 0x1c], 0xff */ W8((u32)(r_ecx+0x1cu), 0xffu);
    /* 00740af6: mov byte ptr [ecx + 0x1d], 0xc */ W8((u32)(r_ecx+0x1du), 0xcu);
    /* 00740afa: jmp 0x740b36 */ goto L_00740b36;
L_00740afc:; BB(0x00740afc);
    /* 00740afc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740aff: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740b02: call 0x7be270 */ r_esp -= 4; W32(r_esp, 0x740b07u); f_007be270();
    /* 00740b07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740b08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740b0b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00740b0e: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 00740b11: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740b14: je 0x740bb6 */ if (fZ) goto L_00740bb6;
L_00740b1a:; BB(0x00740b1a);
    /* 00740b1a: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 00740b20: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740b23: je 0x740b2e */ if (fZ) goto L_00740b2e;
L_00740b25:; BB(0x00740b25);
    /* 00740b25: movsx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1cu));
    /* 00740b29: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740b2c: je 0x740b9b */ if (fZ) goto L_00740b9b;
L_00740b2e:; BB(0x00740b2e);
    /* 00740b2e: call 0x742070 */ r_esp -= 4; W32(r_esp, 0x740b33u); f_00742070();
    /* 00740b33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00740b36:; BB(0x00740b36);
    /* 00740b36: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740b39: mov dword ptr [ecx + 0x44], 0xffffffff */ W32((u32)(r_ecx+0x44u), 0xffffffffu);
    /* 00740b40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00740b42: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 00740b46: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00740b49: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00740b4c: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00740b4f: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00740b52: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00740b55: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00740b58: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x740b5du); f_00718078();
    /* 00740b5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740b5e: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00740b64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740b66: je 0x740b76 */ if (fZ) goto L_00740b76;
L_00740b68:; BB(0x00740b68);
    /* 00740b68: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00740b6c: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00740b72: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
L_00740b76:; BB(0x00740b76);
    /* 00740b76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740b78: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x740b7du); f_006936ec();
    /* 00740b7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00740b7f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x740b84u); f_00791748();
    /* 00740b84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00740b85: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740b88: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00740b8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740b8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740b95: mov esp, ebp */ r_esp = r_ebp;
    /* 00740b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740b98: ret 8 */ FN_RET(0x00740a68); r_esp += 12; return;
L_00740b9b:; BB(0x00740b9b);
    /* 00740b9b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00740b9e: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00740ba1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00740ba4: jl 0x740bae */ if ((fS!=fO)) goto L_00740bae;
L_00740ba6:; BB(0x00740ba6);
    /* 00740ba6: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00740ba9: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 00740bac: jmp 0x740b2e */ goto L_00740b2e;
L_00740bae:; BB(0x00740bae);
    /* 00740bae: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00740bb1: jmp 0x740b2e */ goto L_00740b2e;
L_00740bb6:; BB(0x00740bb6);
    /* 00740bb6: call 0x742034 */ r_esp -= 4; W32(r_esp, 0x740bbbu); f_00742034();
    /* 00740bbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740bbd: jne 0x740be4 */ if (!fZ) goto L_00740be4;
L_00740bbf:; BB(0x00740bbf);
    /* 00740bbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740bc2: movsx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1cu));
    /* 00740bc6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00740bc9: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00740bcc: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00740bcf: jl 0x740bdc */ if ((fS!=fO)) goto L_00740bdc;
L_00740bd1:; BB(0x00740bd1);
    /* 00740bd1: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00740bd4: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 00740bd7: jmp 0x740b1a */ goto L_00740b1a;
L_00740bdc:; BB(0x00740bdc);
    /* 00740bdc: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00740bdf: jmp 0x740b1a */ goto L_00740b1a;
L_00740be4:; BB(0x00740be4);
    /* 00740be4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740be7: jmp 0x740b1a */ goto L_00740b1a;
L_00740bec:; BB(0x00740bec);
    /* 00740bec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740bef: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00740bf2: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00740bf6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740bfc: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00740c00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740c03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740c0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00740c0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740c0d: ret 8 */ FN_RET(0x00740a68); r_esp += 12; return;
L_00740c10:; BB(0x00740c10);
    /* 00740c10: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740c13: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00740c16: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00740c1a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740c20: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00740c24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740c27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740c2e: mov esp, ebp */ r_esp = r_ebp;
    /* 00740c30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740c31: ret 8 */ FN_RET(0x00740a68); r_esp += 12; return;
}

void f_00740c34(void) /* sub_740C34 */
{
    FN_ENTER(0x00740c34);
    /* 00740c34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00740c35: mov ebp, esp */ r_ebp = r_esp;
    /* 00740c37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00740c39: push 0x8f2294 */ { u32 v = 0x8f2294u; r_esp -= 4; W32(r_esp, v); }
    /* 00740c3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00740c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740c45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00740c4c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00740c4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00740c52: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00740c55: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00740c58: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00740c5b: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740c5e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00740c61: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x740c66u); f_00719140();
    /* 00740c66: mov esi, eax */ r_esi = r_eax;
    /* 00740c68: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740c6b: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740c6e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x740c73u); f_0068d5a8();
    /* 00740c73: mov edi, eax */ r_edi = r_eax;
    /* 00740c75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740c78: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740c7b: movsx edx, word ptr [edx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 00740c7f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00740c82: jle 0x740caa */ if ((fZ||fS!=fO)) goto L_00740caa;
L_00740c84:; BB(0x00740c84);
    /* 00740c84: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740c8a: lea edx, [esi + esi*4] */ r_edx = (u32)(r_esi+r_esi*4);
    /* 00740c8d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00740c8f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00740c91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00740c93: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00740c9a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x740c9fu); f_007c1160();
    /* 00740c9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740ca1: jne 0x740cc1 */ if (!fZ) goto L_00740cc1;
L_00740ca3:; BB(0x00740ca3);
    /* 00740ca3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740ca6: movsx edx, word ptr [edx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
L_00740caa:; BB(0x00740caa);
    /* 00740caa: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00740cad: jle 0x740ce5 */ if ((fZ||fS!=fO)) goto L_00740ce5;
L_00740caf:; BB(0x00740caf);
    /* 00740caf: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x740cb4u); f_00791b48();
    /* 00740cb4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00740cb6: mov ecx, eax */ r_ecx = r_eax;
    /* 00740cb8: call 0x78fdfc */ r_esp -= 4; W32(r_esp, 0x740cbdu); f_0078fdfc();
    /* 00740cbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740cbf: je 0x740ce5 */ if (fZ) goto L_00740ce5;
L_00740cc1:; BB(0x00740cc1);
    /* 00740cc1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740cc4: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740cc7: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740cca: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740cce: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740cd3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740cd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740cda: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740ce1: mov esp, ebp */ r_esp = r_ebp;
    /* 00740ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740ce4: ret  */ FN_RET(0x00740c34); r_esp += 4; return;
L_00740ce5:; BB(0x00740ce5);
    /* 00740ce5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740ce7: je 0x740cc1 */ if (fZ) goto L_00740cc1;
L_00740ce9:; BB(0x00740ce9);
    /* 00740ce9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740cec: call 0x7419d4 */ r_esp -= 4; W32(r_esp, 0x740cf1u); f_007419d4();
    /* 00740cf1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740cf4: movzx edx, byte ptr [edx + 0x1d] */ r_edx = (u32)R8((u32)(r_edx+0x1du));
    /* 00740cf8: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00740cfb: ja 0x7415a0 */ if ((!fC&&!fZ)) goto L_007415a0;
L_00740d01:; BB(0x00740d01);
    /* 00740d01: mov edx, dword ptr [edx*4 + 0x972f00] */ r_edx = R32((u32)(r_edx*4+0x972f00u));
    /* 00740d08: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740c34); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740d0a(void)
{
    FN_ENTER(0x00740d0a);
    /* 00740d0a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d0d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740d11: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00740d16: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740d1a: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740d0a); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740d1f(void)
{
    FN_ENTER(0x00740d1f);
    /* 00740d1f: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00740d25: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 00740d28: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740d2a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740d2c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740d2e: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00740d30: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 00740d37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740d38: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x740d3du); f_007c1160();
    /* 00740d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740d3f: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00740d45:; BB(0x00740d45);
    /* 00740d45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00740d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740d4a: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00740d4f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x740d54u); f_00814298();
    /* 00740d54: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00740d57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d5a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740d5d: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740d60: mov byte ptr [eax + 0x1d], 0xc */ W8((u32)(r_eax+0x1du), 0xcu);
    /* 00740d64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740d67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00740d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740d71: ret  */ FN_RET(0x00740d1f); r_esp += 4; return;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740d1f); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740d72(void)
{
    FN_ENTER(0x00740d72);
    /* 00740d72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d75: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00740d78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740d7a: je 0x7415d3 */ if (fZ) goto L_007415d3;
L_00740d80:; BB(0x00740d80);
    /* 00740d80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d83: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00740d86: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x740d8bu); f_0073600c();
    /* 00740d8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d8e: mov byte ptr [eax + 0x1d], 0xf */ W8((u32)(r_eax+0x1du), 0xfu);
    /* 00740d92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d95: call 0x741e08 */ r_esp -= 4; W32(r_esp, 0x740d9au); f_00741e08();
    /* 00740d9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d9d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00740da0: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00740da7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740da9: je 0x740dc9 */ if (fZ) goto L_00740dc9;
L_00740dab:; BB(0x00740dab);
    /* 00740dab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740dae: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740db1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740db4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740db7: mov byte ptr [eax + 0x1d], 0xc */ W8((u32)(r_eax+0x1du), 0xcu);
    /* 00740dbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740dbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740dc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00740dc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740dc8: ret  */ FN_RET(0x00740d72); r_esp += 4; return;
L_00740dc9:; BB(0x00740dc9);
    /* 00740dc9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740dcb: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00740dd1:; BB(0x00740dd1);
    /* 00740dd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740dd4: mov byte ptr [eax + 0x1d], 0x10 */ W8((u32)(r_eax+0x1du), 0x10u);
    /* 00740dd8: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740d72); r_esp += 4; return;
L_007415d3:; BB(0x007415d3);
    /* 007415d3: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 007415d8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7415ddu); f_0073ec50();
    /* 007415dd: mov edi, eax */ r_edi = r_eax;
    /* 007415df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007415e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415e5: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007415e8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7415edu); f_007365f4();
    /* 007415ed: mov ebx, eax */ r_ebx = r_eax;
    /* 007415ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415f2: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007415f5: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007415f8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007415fa: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 007415fd: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007415ff: push dword ptr [ecx + 0x972ea8] */ { u32 v = R32((u32)(r_ecx+0x972ea8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741605: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741606: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x74160bu); f_007354fc();
    /* 0074160b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0074160e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741611: mov edx, eax */ r_edx = r_eax;
    /* 00741613: movzx edi, word ptr [edx + 0x84] */ r_edi = (u32)R16((u32)(r_edx+0x84u));
    /* 0074161a: or edi, 0xffff0100 */ {  u32 a = r_edi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00741620: mov word ptr [edx + 0x84], di */ W16((u32)(r_edx+0x84u), (u16)r_edi);
    /* 00741627: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00741629: mov ecx, dword ptr [esi + ebx*8 + 0x972ea8] */ r_ecx = R32((u32)(r_esi+r_ebx*8+0x972ea8u));
    /* 00741630: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00741632: jle 0x741669 */ if ((fZ||fS!=fO)) goto L_00741669;
L_00741634:; BB(0x00741634);
    /* 00741634: mov edx, edi */ r_edx = r_edi;
    /* 00741636: add edx, dword ptr [esi + ebx*8 + 0x972ea0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*8+0x972ea0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074163d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074163e: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00741640: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x741645u); f_00792fe8();
    /* 00741645: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741648: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074164b: mov edx, edi */ r_edx = r_edi;
    /* 0074164d: add edx, dword ptr [esi + ebx*8 + 0x972ea4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*8+0x972ea4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00741654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741655: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00741657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741658: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74165du); f_00735c90();
    /* 0074165d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00741660: cmp edi, dword ptr [esi + ebx*8 + 0x972ea8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+r_ebx*8+0x972ea8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741667: jl 0x741634 */ if ((fS!=fO)) goto L_00741634;
L_00741669:; BB(0x00741669);
    /* 00741669: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074166e: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741673: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741676: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x74167bu); f_007361d0();
    /* 0074167b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074167e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x741683u); f_00736458();
    /* 00741683: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00741686: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741689: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00741690: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00741695: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074169c: mov dword ptr [edx + 0x5c], 0x1000000 */ W32((u32)(r_edx+0x5cu), 0x1000000u);
    /* 007416a3: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 007416a6: jmp 0x740d80 */ goto L_00740d80;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740d92(void)
{
    FN_ENTER(0x00740d92);
    /* 00740d92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d95: call 0x741e08 */ r_esp -= 4; W32(r_esp, 0x740d9au); f_00741e08();
    /* 00740d9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740d9d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00740da0: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00740da7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740da9: je 0x740dc9 */ if (fZ) goto L_00740dc9;
L_00740dab:; BB(0x00740dab);
    /* 00740dab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740dae: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740db1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740db4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740db7: mov byte ptr [eax + 0x1d], 0xc */ W8((u32)(r_eax+0x1du), 0xcu);
    /* 00740dbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740dbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740dc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00740dc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740dc8: ret  */ FN_RET(0x00740d92); r_esp += 4; return;
L_00740dc9:; BB(0x00740dc9);
    /* 00740dc9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740dcb: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00740dd1:; BB(0x00740dd1);
    /* 00740dd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740dd4: mov byte ptr [eax + 0x1d], 0x10 */ W8((u32)(r_eax+0x1du), 0x10u);
    /* 00740dd8: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740d92); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740ddd(void)
{
    FN_ENTER(0x00740ddd);
    /* 00740ddd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740de0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00740de3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740de5: je 0x740df6 */ if (fZ) goto L_00740df6;
L_00740de7:; BB(0x00740de7);
    /* 00740de7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x740decu); f_007127b0();
    /* 00740dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740def: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00740df6:; BB(0x00740df6);
    /* 00740df6: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 00740df9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740dfb: je 0x7416c0 */ if (fZ) goto L_007416c0;
L_00740e01:; BB(0x00740e01);
    /* 00740e01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e04: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00740e07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740e09: je 0x740e16 */ if (fZ) goto L_00740e16;
L_00740e0b:; BB(0x00740e0b);
    /* 00740e0b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00740e0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740e10: je 0x7416ab */ if (fZ) goto L_007416ab;
L_00740e16:; BB(0x00740e16);
    /* 00740e16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00740e18: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x740e1du); f_0073605c();
    /* 00740e1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e20: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00740e23: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00740e2a: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00740e30: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00740e37: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00740e3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740e3c: je 0x740e45 */ if (fZ) goto L_00740e45;
L_00740e3e:; BB(0x00740e3e);
    /* 00740e3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00740e40: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x740e45u); f_00760acc();
L_00740e45:; BB(0x00740e45);
    /* 00740e45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e48: mov byte ptr [eax + 0x1d], 0xd */ W8((u32)(r_eax+0x1du), 0xdu);
    /* 00740e4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e4f: call 0x741e08 */ r_esp -= 4; W32(r_esp, 0x740e54u); f_00741e08();
    /* 00740e54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e57: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00740e5a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00740e61: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740e63: je 0x740e8c */ if (fZ) goto L_00740e8c;
L_00740e65:; BB(0x00740e65);
    /* 00740e65: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e68: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740e6b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740e6e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740e71: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740e75: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740e7a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740e7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740e81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740e88: mov esp, ebp */ r_esp = r_ebp;
    /* 00740e8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740e8b: ret  */ FN_RET(0x00740ddd); r_esp += 4; return;
L_00740e8c:; BB(0x00740e8c);
    /* 00740e8c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740e8e: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00740e94:; BB(0x00740e94);
    /* 00740e94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e97: mov byte ptr [eax + 0x1d], 0xe */ W8((u32)(r_eax+0x1du), 0xeu);
    /* 00740e9b: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740ddd); r_esp += 4; return;
L_007416ab:; BB(0x007416ab);
    /* 007416ab: mov ecx, eax */ r_ecx = r_eax;
    /* 007416ad: call 0x741d70 */ r_esp -= 4; W32(r_esp, 0x7416b2u); f_00741d70();
    /* 007416b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007416b5: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 007416b8: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007416bb: jmp 0x740e16 */ goto L_00740e16;
L_007416c0:; BB(0x007416c0);
    /* 007416c0: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 007416c5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7416cau); f_0073ec50();
    /* 007416ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007416cd: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007416d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007416d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007416d3: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x7416d8u); f_007354fc();
    /* 007416d8: mov ebx, eax */ r_ebx = r_eax;
    /* 007416da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007416dd: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 007416e4: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007416ea: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 007416f1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007416f3:; BB(0x007416f3);
    /* 007416f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007416f4: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 007416f6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7416fbu); f_00792fe8();
    /* 007416fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007416fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007416ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00741701: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741704: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x741709u); f_00735c90();
    /* 00741709: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074170c: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074170f: jl 0x7416f3 */ if ((fS!=fO)) goto L_007416f3;
L_00741711:; BB(0x00741711);
    /* 00741711: push 0x43250000 */ { u32 v = 0x43250000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741716: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741718: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074171d: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x741722u); f_007361d0();
    /* 00741722: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00741724: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x741729u); f_00736458();
    /* 00741729: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0074172c: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00741733: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
    /* 0074173a: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00741740: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00741747: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0074174a: jmp 0x740e01 */ goto L_00740e01;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740e4c(void)
{
    FN_ENTER(0x00740e4c);
    /* 00740e4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e4f: call 0x741e08 */ r_esp -= 4; W32(r_esp, 0x740e54u); f_00741e08();
    /* 00740e54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e57: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00740e5a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00740e61: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740e63: je 0x740e8c */ if (fZ) goto L_00740e8c;
L_00740e65:; BB(0x00740e65);
    /* 00740e65: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e68: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740e6b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740e6e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00740e71: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740e75: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740e7a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740e7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740e81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740e88: mov esp, ebp */ r_esp = r_ebp;
    /* 00740e8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740e8b: ret  */ FN_RET(0x00740e4c); r_esp += 4; return;
L_00740e8c:; BB(0x00740e8c);
    /* 00740e8c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00740e8e: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_00740e94:; BB(0x00740e94);
    /* 00740e94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740e97: mov byte ptr [eax + 0x1d], 0xe */ W8((u32)(r_eax+0x1du), 0xeu);
    /* 00740e9b: jmp 0x7415a0 */ goto L_007415a0;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740e4c); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740ea0(void)
{
    FN_ENTER(0x00740ea0);
    /* 00740ea0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740ea3: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00740ea6: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x740eabu); f_007365f4();
    /* 00740eab: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00740eae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740eaf: mov ecx, edi */ r_ecx = r_edi;
    /* 00740eb1: call 0x69a4dc */ r_esp -= 4; W32(r_esp, 0x740eb6u); f_0069a4dc();
    /* 00740eb6: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00740ebc: lea esi, [esi + esi*4] */ r_esi = (u32)(r_esi+r_esi*4);
    /* 00740ebf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740ec1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740ec3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00740ec5: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00740ec7: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 00740ece: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740ecf: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x740ed4u); f_007c1160();
    /* 00740ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740ed6: je 0x740f0e */ if (fZ) goto L_00740f0e;
L_00740ed8:; BB(0x00740ed8);
    /* 00740ed8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00740eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740edd: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00740ee2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x740ee7u); f_00814298();
    /* 00740ee7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740eea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740eed: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740ef0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740ef3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740ef7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740efc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740f00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740f03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740f0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00740f0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740f0d: ret  */ FN_RET(0x00740ea0); r_esp += 4; return;
L_00740f0e:; BB(0x00740f0e);
    /* 00740f0e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f11: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00740f14: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x740f19u); f_007365f4();
    /* 00740f19: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00740f1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740f1d: mov ecx, edi */ r_ecx = r_edi;
    /* 00740f1f: call 0x69a2cc */ r_esp -= 4; W32(r_esp, 0x740f24u); f_0069a2cc();
    /* 00740f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740f26: je 0x740f4c */ if (fZ) goto L_00740f4c;
L_00740f28:; BB(0x00740f28);
    /* 00740f28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f2b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00740f2e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00740f31: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00740f35: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00740f3a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00740f3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00740f41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00740f48: mov esp, ebp */ r_esp = r_ebp;
    /* 00740f4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00740f4b: ret  */ FN_RET(0x00740ea0); r_esp += 4; return;
L_00740f4c:; BB(0x00740f4c);
    /* 00740f4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f4f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00740f52: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x740f57u); f_007365f4();
    /* 00740f57: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00740f5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f5d: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00740f61: call 0x75e608 */ r_esp -= 4; W32(r_esp, 0x740f66u); f_0075e608();
    /* 00740f66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740f69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740f6b: jne 0x7415a0 */ if (!fZ) goto L_007415a0;
L_00740f71:; BB(0x00740f71);
    /* 00740f71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f74: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740f77: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 00740f7a: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x740f7fu); f_006c1bd4();
    /* 00740f7f: mov esi, eax */ r_esi = r_eax;
    /* 00740f81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740f84: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 00740f8b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00740f8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00740f90: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x740f95u); f_00736578();
    /* 00740f95: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00740f97:; BB(0x00740f97);
    /* 00740f97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740f9a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00740f9b: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00740f9e: movsx eax, word ptr [esi + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x291cu));
    /* 00740fa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00740fa7: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x740facu); f_0075e7e0();
    /* 00740fac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00740faf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00740fb2: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00740fb5: jl 0x740f97 */ if ((fS!=fO)) goto L_00740f97;
L_00740fb7:; BB(0x00740fb7);
    /* 00740fb7: jmp 0x74174f */ goto L_0074174f;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740ea0); r_esp += 4; return;
L_0074174f:; BB(0x0074174f);
    /* 0074174f: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741754: mov ecx, edi */ r_ecx = r_edi;
    /* 00741756: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074175b: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x741760u); f_007361d0();
    /* 00741760: mov ecx, edi */ r_ecx = r_edi;
    /* 00741762: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x741767u); f_00736458();
    /* 00741767: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074176a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074176b: mov ecx, edi */ r_ecx = r_edi;
    /* 0074176d: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x741772u); f_00736510();
    /* 00741772: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00741775: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741778: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074177b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074177e: mov byte ptr [eax + 0x1d], 9 */ W8((u32)(r_eax+0x1du), 0x9u);
    /* 00741782: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741785: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074178c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074178e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074178f: ret  */ FN_RET(0x00740ea0); r_esp += 4; return;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740fbc(void)
{
    FN_ENTER(0x00740fbc);
    /* 00740fbc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740fbf: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 00740fc2: lea edx, [edx + 0x28] */ r_edx = (u32)(r_edx+0x28u);
    /* 00740fc5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00740fc8: jmp 0x74100a */ goto L_0074100a;
L_0074100a:; BB(0x0074100a);
    /* 0074100a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074100d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00741010: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x741015u); f_007365f4();
    /* 00741015: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00741018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741019: mov ecx, edi */ r_ecx = r_edi;
    /* 0074101b: call 0x69a4dc */ r_esp -= 4; W32(r_esp, 0x741020u); f_0069a4dc();
    /* 00741020: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741023: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741026: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102b: call 0x75e790 */ r_esp -= 4; W32(r_esp, 0x741030u); f_0075e790();
    /* 00741030: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741035: jne 0x741127 */ if (!fZ) goto L_00741127;
L_0074103b:; BB(0x0074103b);
    /* 0074103b: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00741041: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00741044: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741046: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741048: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074104a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00741051: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741056u); f_007c1160();
    /* 00741056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741058: jne 0x7410a6 */ if (!fZ) goto L_007410a6;
L_0074105a:; BB(0x0074105a);
    /* 0074105a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074105d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00741060: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00741067: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741069: je 0x741092 */ if (fZ) goto L_00741092;
L_0074106b:; BB(0x0074106b);
    /* 0074106b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074106e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741071: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741074: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00741077: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074107b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741080: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741084: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741087: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074108e: mov esp, ebp */ r_esp = r_ebp;
    /* 00741090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741091: ret  */ FN_RET(0x00740fbc); r_esp += 4; return;
L_00741092:; BB(0x00741092);
    /* 00741092: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741094: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_0074109a:; BB(0x0074109a);
    /* 0074109a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074109d: mov byte ptr [eax + 0x1d], 0xb */ W8((u32)(r_eax+0x1du), 0xbu);
    /* 007410a1: jmp 0x7415a0 */ goto L_007415a0;
L_007410a6:; BB(0x007410a6);
    /* 007410a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007410a9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007410ac: movsx edx, word ptr [ecx + 0x8e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 007410b3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007410b6: je 0x7417b8 */ if (fZ) goto L_007417b8;
L_007410bc:; BB(0x007410bc);
    /* 007410bc: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 007410c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007410c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007410c8: call 0x741d28 */ r_esp -= 4; W32(r_esp, 0x7410cdu); f_00741d28();
    /* 007410cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410d0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007410d3: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 007410d8: mov word ptr [eax + 0x8e], di */ W16((u32)(r_eax+0x8eu), (u16)r_edi);
    /* 007410df: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007410e2: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007410e5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7410eau); f_006c1bd4();
    /* 007410ea: mov esi, eax */ r_esi = r_eax;
    /* 007410ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007410ef: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 007410f6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007410f9: mov ecx, edi */ r_ecx = r_edi;
    /* 007410fb: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x741100u); f_00736578();
    /* 00741100: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00741102:; BB(0x00741102);
    /* 00741102: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741105: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741106: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741109: movsx eax, word ptr [esi + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x291cu));
    /* 00741111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741112: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741117u); f_0075e7e0();
    /* 00741117: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074111a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074111d: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741120: jl 0x741102 */ if ((fS!=fO)) goto L_00741102;
L_00741122:; BB(0x00741122);
    /* 00741122: jmp 0x741790 */ goto L_00741790;
L_00741127:; BB(0x00741127);
    /* 00741127: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074112a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074112d: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00741130: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x741135u); f_006c1bd4();
    /* 00741135: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00741138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074113b: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 00741142: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00741145: mov ecx, edi */ r_ecx = r_edi;
    /* 00741147: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x74114cu); f_00736578();
    /* 0074114c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0074114e:; BB(0x0074114e);
    /* 0074114e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741151: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741152: movsx eax, word ptr [edx + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*2+0x291cu));
    /* 0074115a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074115d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741161: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741166u); f_0075e7e0();
    /* 00741166: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741169: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074116c: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074116f: jl 0x74114e */ if ((fS!=fO)) goto L_0074114e;
L_00741171:; BB(0x00741171);
    /* 00741171: jmp 0x7417cb */ goto L_007417cb;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740fbc); r_esp += 4; return;
L_00741790:; BB(0x00741790);
    /* 00741790: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741795: mov ecx, edi */ r_ecx = r_edi;
    /* 00741797: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074179c: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417a1u); f_007361d0();
    /* 007417a1: mov ecx, edi */ r_ecx = r_edi;
    /* 007417a3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417a8u); f_00736458();
    /* 007417a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007417ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007417ae: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417b3u); f_00736510();
    /* 007417b3: jmp 0x74105a */ goto L_0074105a;
L_007417b8:; BB(0x007417b8);
    /* 007417b8: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 007417bf: mov word ptr [ecx + 0x8e], ax */ W16((u32)(r_ecx+0x8eu), (u16)r_eax);
    /* 007417c6: jmp 0x74105a */ goto L_0074105a;
L_007417cb:; BB(0x007417cb);
    /* 007417cb: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d0: mov ecx, edi */ r_ecx = r_edi;
    /* 007417d2: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d7: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417dcu); f_007361d0();
    /* 007417dc: mov ecx, edi */ r_ecx = r_edi;
    /* 007417de: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417e3u); f_00736458();
    /* 007417e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007417e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007417e9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417eeu); f_00736510();
    /* 007417ee: jmp 0x74103b */ goto L_0074103b;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

void f_00740fca(void)
{
    FN_ENTER(0x00740fca);
    /* 00740fca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00740fcd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00740fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740fd2: je 0x7417f3 */ if (fZ) goto L_007417f3;
L_00740fd8:; BB(0x00740fd8);
    /* 00740fd8: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 00740fdb: lea edx, [edx + 0x28] */ r_edx = (u32)(r_edx+0x28u);
    /* 00740fde: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00740fe1:; BB(0x00740fe1);
    /* 00740fe1: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00740fe8: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00740fee: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00740ff1: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00740ff8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00740ffa: je 0x741003 */ if (fZ) goto L_00741003;
L_00740ffc:; BB(0x00740ffc);
    /* 00740ffc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00740ffe: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x741003u); f_00760acc();
L_00741003:; BB(0x00741003);
    /* 00741003: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741006: mov byte ptr [edx + 0x1d], 0xa */ W8((u32)(r_edx+0x1du), 0xau);
    /* 0074100a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074100d: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00741010: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x741015u); f_007365f4();
    /* 00741015: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00741018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00741019: mov ecx, edi */ r_ecx = r_edi;
    /* 0074101b: call 0x69a4dc */ r_esp -= 4; W32(r_esp, 0x741020u); f_0069a4dc();
    /* 00741020: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741023: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741026: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074102b: call 0x75e790 */ r_esp -= 4; W32(r_esp, 0x741030u); f_0075e790();
    /* 00741030: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741035: jne 0x741127 */ if (!fZ) goto L_00741127;
L_0074103b:; BB(0x0074103b);
    /* 0074103b: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00741041: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00741044: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741046: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00741048: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074104a: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00741051: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x741056u); f_007c1160();
    /* 00741056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00741058: jne 0x7410a6 */ if (!fZ) goto L_007410a6;
L_0074105a:; BB(0x0074105a);
    /* 0074105a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074105d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00741060: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00741067: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741069: je 0x741092 */ if (fZ) goto L_00741092;
L_0074106b:; BB(0x0074106b);
    /* 0074106b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074106e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00741071: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00741074: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00741077: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074107b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00741080: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00741084: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00741087: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074108e: mov esp, ebp */ r_esp = r_ebp;
    /* 00741090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00741091: ret  */ FN_RET(0x00740fca); r_esp += 4; return;
L_00741092:; BB(0x00741092);
    /* 00741092: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00741094: je 0x7415a0 */ if (fZ) goto L_007415a0;
L_0074109a:; BB(0x0074109a);
    /* 0074109a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074109d: mov byte ptr [eax + 0x1d], 0xb */ W8((u32)(r_eax+0x1du), 0xbu);
    /* 007410a1: jmp 0x7415a0 */ goto L_007415a0;
L_007410a6:; BB(0x007410a6);
    /* 007410a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007410a9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007410ac: movsx edx, word ptr [ecx + 0x8e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 007410b3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007410b6: je 0x7417b8 */ if (fZ) goto L_007417b8;
L_007410bc:; BB(0x007410bc);
    /* 007410bc: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 007410c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007410c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007410c8: call 0x741d28 */ r_esp -= 4; W32(r_esp, 0x7410cdu); f_00741d28();
    /* 007410cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007410d0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007410d3: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 007410d8: mov word ptr [eax + 0x8e], di */ W16((u32)(r_eax+0x8eu), (u16)r_edi);
    /* 007410df: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007410e2: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007410e5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7410eau); f_006c1bd4();
    /* 007410ea: mov esi, eax */ r_esi = r_eax;
    /* 007410ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007410ef: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 007410f6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007410f9: mov ecx, edi */ r_ecx = r_edi;
    /* 007410fb: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x741100u); f_00736578();
    /* 00741100: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00741102:; BB(0x00741102);
    /* 00741102: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741105: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741106: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741109: movsx eax, word ptr [esi + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x291cu));
    /* 00741111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741112: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741117u); f_0075e7e0();
    /* 00741117: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074111a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074111d: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00741120: jl 0x741102 */ if ((fS!=fO)) goto L_00741102;
L_00741122:; BB(0x00741122);
    /* 00741122: jmp 0x741790 */ goto L_00741790;
L_00741127:; BB(0x00741127);
    /* 00741127: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074112a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074112d: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00741130: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x741135u); f_006c1bd4();
    /* 00741135: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00741138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074113b: movsx edx, word ptr [edi + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8cu));
    /* 00741142: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00741145: mov ecx, edi */ r_ecx = r_edi;
    /* 00741147: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x74114cu); f_00736578();
    /* 0074114c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0074114e:; BB(0x0074114e);
    /* 0074114e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00741151: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00741152: movsx eax, word ptr [edx + ebx*2 + 0x291c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*2+0x291cu));
    /* 0074115a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074115d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00741160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741161: call 0x75e7e0 */ r_esp -= 4; W32(r_esp, 0x741166u); f_0075e7e0();
    /* 00741166: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741169: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074116c: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074116f: jl 0x74114e */ if ((fS!=fO)) goto L_0074114e;
L_00741171:; BB(0x00741171);
    /* 00741171: jmp 0x7417cb */ goto L_007417cb;
L_007415a0:; BB(0x007415a0);
    /* 007415a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007415a3: movsx eax, word ptr [eax + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007415a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007415aa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007415ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007415af: jl 0x7419c0 */ if ((fS!=fO)) goto L_007419c0;
L_007415b5:; BB(0x007415b5);
    /* 007415b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007415b8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_007415bc:; BB(0x007415bc);
    /* 007415bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007415bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007415c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007415c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007415c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007415cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007415d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007415d2: ret  */ FN_RET(0x00740fca); r_esp += 4; return;
L_00741790:; BB(0x00741790);
    /* 00741790: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00741795: mov ecx, edi */ r_ecx = r_edi;
    /* 00741797: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074179c: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417a1u); f_007361d0();
    /* 007417a1: mov ecx, edi */ r_ecx = r_edi;
    /* 007417a3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417a8u); f_00736458();
    /* 007417a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007417ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007417ae: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417b3u); f_00736510();
    /* 007417b3: jmp 0x74105a */ goto L_0074105a;
L_007417b8:; BB(0x007417b8);
    /* 007417b8: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 007417bf: mov word ptr [ecx + 0x8e], ax */ W16((u32)(r_ecx+0x8eu), (u16)r_eax);
    /* 007417c6: jmp 0x74105a */ goto L_0074105a;
L_007417cb:; BB(0x007417cb);
    /* 007417cb: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d0: mov ecx, edi */ r_ecx = r_edi;
    /* 007417d2: push 0x439a0000 */ { u32 v = 0x439a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007417d7: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7417dcu); f_007361d0();
    /* 007417dc: mov ecx, edi */ r_ecx = r_edi;
    /* 007417de: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7417e3u); f_00736458();
    /* 007417e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007417e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007417e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007417e9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7417eeu); f_00736510();
    /* 007417ee: jmp 0x74103b */ goto L_0074103b;
L_007417f3:; BB(0x007417f3);
    /* 007417f3: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007417f6: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 007417f9: lea eax, [edx + 0x28] */ r_eax = (u32)(r_edx+0x28u);
    /* 007417fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007417ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741800: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00741801: call 0x75e854 */ r_esp -= 4; W32(r_esp, 0x741806u); f_0075e854();
    /* 00741806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00741808: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74180du); f_0073ec50();
    /* 0074180d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00741810: push 0x972f48 */ { u32 v = 0x972f48u; r_esp -= 4; W32(r_esp, v); }
    /* 00741815: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00741819: call 0x741c88 */ r_esp -= 4; W32(r_esp, 0x74181eu); f_00741c88();
    /* 0074181e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00741821: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00741824: jmp 0x740fe1 */ goto L_00740fe1;
L_007419c0:; BB(0x007419c0);
    /* 007419c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007419c3: mov eax, 2 */ r_eax = 0x2u;
    /* 007419c8: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007419cc: jmp 0x7415bc */ goto L_007415bc;
}

