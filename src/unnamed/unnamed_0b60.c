#include "protos.h"

void f_00b60000(void) /* start */
{
    FN_ENTER(0x00b60000);
    /* 00b60000: call 0xb5f7d0 */ r_esp -= 4; W32(r_esp, 0xb60005u); f_00b5f7d0();
    /* 00b60005: jmp 0xb60073 */ goto L_00b60073;
L_00b60073:; BB(0x00b60073);
    /* 00b60073: call 0xb60078 */ r_esp -= 4; W32(r_esp, 0xb60078u); f_00b60078();
    /* 00b60078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00b60079: sub ebp, 0x4be14d */ {  u32 a = r_ebp; u32 b = 0x4be14du; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00b6007f: lea eax, [ebp + 0x4be0f2] */ r_eax = (u32)(r_ebp+0x4be0f2u);
    /* 00b60085: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b6008b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00b6008d: mov dword ptr [ecx + 1], eax */ W32((u32)(r_ecx+0x1u), r_eax);
    /* 00b60090: lea eax, [ebp + 0x4be136] */ r_eax = (u32)(r_ebp+0x4be136u);
    /* 00b60096: lea ecx, [ebp + 0x4be0fa] */ r_ecx = (u32)(r_ebp+0x4be0fau);
    /* 00b6009c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b6009e: mov eax, 0x145e */ r_eax = 0x145eu;
    /* 00b600a3: lea ecx, [ebp + 0x4be0ff] */ r_ecx = (u32)(r_ebp+0x4be0ffu);
    /* 00b600a9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b600ab: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b600b1: lea eax, [ebp + 0x4bf394] */ r_eax = (u32)(r_ebp+0x4bf394u);
    /* 00b600b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b9: call 0xb60034 */ r_esp -= 4; W32(r_esp, 0xb600beu); f_00b60034();
    /* 00b600be: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00b600bf: bnd jmp 0xb600c3 */ ;
    /* 00b600c2: imul ebp, dword ptr [esi], 0xeb0f01eb */ { i64 t = (i64)(i32)R32((u32)(r_esi)) * (i64)(i32)0xeb0f01ebu; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00b600c8: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00b600ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cc: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00b600d0: bnd jmp 0xb600d4 */ ;
    /* 00b600d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00b600d7: jmp 0xb600dc */ goto L_00b600dc;
L_00b600dc:; BB(0x00b600dc);
    /* 00b600dc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00b600e0: bnd jmp 0xb600e4 */ ;
    /* 00b600e3: ud2  */ UNSUP(0x00b600e3, "ud2");
    /* 00b600e5: stc  */ fC = 1;
    /* 00b600e6: jmp 0xb600eb */ goto L_00b600eb;
L_00b600eb:; BB(0x00b600eb);
    /* 00b600eb: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00b600f1: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00b600f3: call dword ptr [edi + 0x3f] */ { u32 t = R32((u32)(r_edi+0x3fu)); r_esp -= 4; W32(r_esp, 0xb600f6u); call_ind(t); }
    UNSUP(0x00b600f6, "call does not return");
}

void f_00b60005(void)
{
    FN_ENTER(0x00b60005);
    /* 00b60005: jmp 0xb60073 */ goto L_00b60073;
L_00b60073:; BB(0x00b60073);
    /* 00b60073: call 0xb60078 */ r_esp -= 4; W32(r_esp, 0xb60078u); f_00b60078();
    /* 00b60078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00b60079: sub ebp, 0x4be14d */ {  u32 a = r_ebp; u32 b = 0x4be14du; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00b6007f: lea eax, [ebp + 0x4be0f2] */ r_eax = (u32)(r_ebp+0x4be0f2u);
    /* 00b60085: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b6008b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00b6008d: mov dword ptr [ecx + 1], eax */ W32((u32)(r_ecx+0x1u), r_eax);
    /* 00b60090: lea eax, [ebp + 0x4be136] */ r_eax = (u32)(r_ebp+0x4be136u);
    /* 00b60096: lea ecx, [ebp + 0x4be0fa] */ r_ecx = (u32)(r_ebp+0x4be0fau);
    /* 00b6009c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b6009e: mov eax, 0x145e */ r_eax = 0x145eu;
    /* 00b600a3: lea ecx, [ebp + 0x4be0ff] */ r_ecx = (u32)(r_ebp+0x4be0ffu);
    /* 00b600a9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b600ab: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b600b1: lea eax, [ebp + 0x4bf394] */ r_eax = (u32)(r_ebp+0x4bf394u);
    /* 00b600b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b9: call 0xb60034 */ r_esp -= 4; W32(r_esp, 0xb600beu); f_00b60034();
    /* 00b600be: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00b600bf: bnd jmp 0xb600c3 */ ;
    /* 00b600c2: imul ebp, dword ptr [esi], 0xeb0f01eb */ { i64 t = (i64)(i32)R32((u32)(r_esi)) * (i64)(i32)0xeb0f01ebu; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00b600c8: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00b600ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cc: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00b600d0: bnd jmp 0xb600d4 */ ;
    /* 00b600d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00b600d7: jmp 0xb600dc */ goto L_00b600dc;
L_00b600dc:; BB(0x00b600dc);
    /* 00b600dc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00b600e0: bnd jmp 0xb600e4 */ ;
    /* 00b600e3: ud2  */ UNSUP(0x00b600e3, "ud2");
    /* 00b600e5: stc  */ fC = 1;
    /* 00b600e6: jmp 0xb600eb */ goto L_00b600eb;
L_00b600eb:; BB(0x00b600eb);
    /* 00b600eb: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00b600f1: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00b600f3: call dword ptr [edi + 0x3f] */ { u32 t = R32((u32)(r_edi+0x3fu)); r_esp -= 4; W32(r_esp, 0xb600f6u); call_ind(t); }
    UNSUP(0x00b600f6, "call does not return");
}

void f_00b60034(void) /* sub_B60034 */
{
    FN_ENTER(0x00b60034);
    /* 00b60034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00b60035: mov ebp, esp */ r_ebp = r_esp;
    /* 00b60037: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00b60038: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00b60039: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00b6003c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00b6003f: jmp 0xb60052 */ goto L_00b60052;
L_00b60041:; BB(0x00b60041);
    /* 00b60041: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00b60044: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00b60046: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00b60049: mov edx, eax */ r_edx = r_eax;
    /* 00b6004b: mov eax, esi */ r_eax = r_esi;
    /* 00b6004d: call 0xb6005e */ r_esp -= 4; W32(r_esp, 0xb60052u); f_00b6005e();
L_00b60052:; BB(0x00b60052);
    /* 00b60052: cmp word ptr [ebx], 0 */ {  u32 a = R16((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00b60056: jne 0xb60041 */ if (!fZ) goto L_00b60041;
L_00b60058:; BB(0x00b60058);
    /* 00b60058: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00b60059: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00b6005a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00b6005b: ret 8 */ FN_RET(0x00b60034); r_esp += 12; return;
}

void f_00b6005e(void) /* sub_B6005E */
{
    FN_ENTER(0x00b6005e);
    /* 00b6005e: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00b60060: ret  */ FN_RET(0x00b6005e); r_esp += 4; return;
}

void f_00b60078(void)
{
    FN_ENTER(0x00b60078);
    /* 00b60078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00b60079: sub ebp, 0x4be14d */ {  u32 a = r_ebp; u32 b = 0x4be14du; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00b6007f: lea eax, [ebp + 0x4be0f2] */ r_eax = (u32)(r_ebp+0x4be0f2u);
    /* 00b60085: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b6008b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00b6008d: mov dword ptr [ecx + 1], eax */ W32((u32)(r_ecx+0x1u), r_eax);
    /* 00b60090: lea eax, [ebp + 0x4be136] */ r_eax = (u32)(r_ebp+0x4be136u);
    /* 00b60096: lea ecx, [ebp + 0x4be0fa] */ r_ecx = (u32)(r_ebp+0x4be0fau);
    /* 00b6009c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b6009e: mov eax, 0x145e */ r_eax = 0x145eu;
    /* 00b600a3: lea ecx, [ebp + 0x4be0ff] */ r_ecx = (u32)(r_ebp+0x4be0ffu);
    /* 00b600a9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00b600ab: lea ecx, [ebp + 0x4be194] */ r_ecx = (u32)(r_ebp+0x4be194u);
    /* 00b600b1: lea eax, [ebp + 0x4bf394] */ r_eax = (u32)(r_ebp+0x4bf394u);
    /* 00b600b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00b600b9: call 0xb60034 */ r_esp -= 4; W32(r_esp, 0xb600beu); f_00b60034();
    /* 00b600be: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00b600bf: bnd jmp 0xb600c3 */ ;
    /* 00b600c2: imul ebp, dword ptr [esi], 0xeb0f01eb */ { i64 t = (i64)(i32)R32((u32)(r_esi)) * (i64)(i32)0xeb0f01ebu; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00b600c8: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00b600ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00b600cc: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00b600d0: bnd jmp 0xb600d4 */ ;
    /* 00b600d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00b600d7: jmp 0xb600dc */ goto L_00b600dc;
L_00b600dc:; BB(0x00b600dc);
    /* 00b600dc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00b600e0: bnd jmp 0xb600e4 */ ;
    /* 00b600e3: ud2  */ UNSUP(0x00b600e3, "ud2");
    /* 00b600e5: stc  */ fC = 1;
    /* 00b600e6: jmp 0xb600eb */ goto L_00b600eb;
L_00b600eb:; BB(0x00b600eb);
    /* 00b600eb: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00b600f1: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00b600f3: call dword ptr [edi + 0x3f] */ { u32 t = R32((u32)(r_edi+0x3fu)); r_esp -= 4; W32(r_esp, 0xb600f6u); call_ind(t); }
    UNSUP(0x00b600f6, "call does not return");
}

