#include "protos.h"

void f_0089e016(void) /* sub_89E016 */
{
    FN_ENTER(0x0089e016);
    /* 0089e016: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e017: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e019: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e01b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e01f: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e021: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e026u); f_0089a735();
    /* 0089e026: mov dword ptr [esi], 0x99bb98 */ W32((u32)(r_esi), 0x99bb98u);
    /* 0089e02c: mov eax, esi */ r_eax = r_esi;
    /* 0089e02e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e02f: ret 4 */ FN_RET(0x0089e016); r_esp += 8; return;
}

void f_0089e032(void) /* sub_89E032 */
{
    FN_ENTER(0x0089e032);
    /* 0089e032: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e033: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e035: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e037: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e03b: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e03d: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e042u); f_0089a735();
    /* 0089e042: mov dword ptr [esi], 0x99bba8 */ W32((u32)(r_esi), 0x99bba8u);
    /* 0089e048: mov eax, esi */ r_eax = r_esi;
    /* 0089e04a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e04b: ret 4 */ FN_RET(0x0089e032); r_esp += 8; return;
}

void f_0089e04e(void) /* sub_89E04E */
{
    FN_ENTER(0x0089e04e);
    /* 0089e04e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e04f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e051: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e053: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e057: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e059: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e05eu); f_0089a735();
    /* 0089e05e: mov dword ptr [esi], 0x99bbb8 */ W32((u32)(r_esi), 0x99bbb8u);
    /* 0089e064: mov eax, esi */ r_eax = r_esi;
    /* 0089e066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e067: ret 4 */ FN_RET(0x0089e04e); r_esp += 8; return;
}

void f_0089e06a(void) /* sub_89E06A */
{
    FN_ENTER(0x0089e06a);
    /* 0089e06a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e06b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e06d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e06f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e073: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e075: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e07au); f_0089a735();
    /* 0089e07a: mov dword ptr [esi], 0x99bbc8 */ W32((u32)(r_esi), 0x99bbc8u);
    /* 0089e080: mov eax, esi */ r_eax = r_esi;
    /* 0089e082: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e083: ret 4 */ FN_RET(0x0089e06a); r_esp += 8; return;
}

void f_0089e086(void) /* sub_89E086 */
{
    FN_ENTER(0x0089e086);
    /* 0089e086: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e087: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e089: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e08b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e08f: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e091: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e096u); f_0089a735();
    /* 0089e096: mov dword ptr [esi], 0x99bbd8 */ W32((u32)(r_esi), 0x99bbd8u);
    /* 0089e09c: mov eax, esi */ r_eax = r_esi;
    /* 0089e09e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e09f: ret 4 */ FN_RET(0x0089e086); r_esp += 8; return;
}

void f_0089e0a2(void) /* sub_89E0A2 */
{
    FN_ENTER(0x0089e0a2);
    /* 0089e0a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0a3: mov ebp, esp */ r_ebp = r_esp;
    /* 0089e0a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0a6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089e0a8: cmp dword ptr [ebx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ebx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e0af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0b0: je 0x89e0bd */ if (fZ) goto L_0089e0bd;
L_0089e0b2:; BB(0x0089e0b2);
    /* 0089e0b2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e0b5: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89e0bau); f_00899f81();
    /* 0089e0ba: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089e0bd:; BB(0x0089e0bd);
    /* 0089e0bd: mov ecx, dword ptr [ebx + 0x1088] */ r_ecx = R32((u32)(r_ebx+0x1088u));
    /* 0089e0c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089e0c6: add eax, dword ptr [ebx + 0x1034] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1034u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089e0cc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089e0cf: add esi, dword ptr [ebx + 0x1040] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1040u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e0d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089e0d7: cmp ecx, dword ptr [ebx + 0x1058] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e0dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089e0df: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0089e0e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0e5: call 0x89dd45 */ r_esp -= 4; W32(r_esp, 0x89e0eau); f_0089dd45();
    /* 0089e0ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e0ec: jl 0x89e129 */ if ((fS!=fO)) goto L_0089e129;
L_0089e0ee:; BB(0x0089e0ee);
    /* 0089e0ee: mov ecx, dword ptr [ebx + 0x1058] */ r_ecx = R32((u32)(r_ebx+0x1058u));
    /* 0089e0f4: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0089e0f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e0f8: mov edi, dword ptr [ebx + 0x1030] */ r_edi = R32((u32)(r_ebx+0x1030u));
    /* 0089e0fe: sub edi, dword ptr [ebx + 0x1070] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1070u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0089e104: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089e107: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089e10a: add edi, dword ptr [ebx + 0x106c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x106cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089e110: mov eax, ecx */ r_eax = r_ecx;
    /* 0089e112: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089e115: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089e117: mov ecx, eax */ r_ecx = r_eax;
    /* 0089e119: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e11c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089e11e: mov dword ptr [ebx + 0x108c], 1 */ W32((u32)(r_ebx+0x108cu), 0x1u);
    /* 0089e128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089e129:; BB(0x0089e129);
    /* 0089e129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e12a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089e12b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089e12c: ret 0xc */ FN_RET(0x0089e0a2); r_esp += 16; return;
}

void f_0089e12f(void) /* sub_89E12F */
{
    FN_ENTER(0x0089e12f);
    /* 0089e12f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e130: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e132: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e134: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e138: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e13a: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e13fu); f_0089a735();
    /* 0089e13f: mov dword ptr [esi], 0x99bbe8 */ W32((u32)(r_esi), 0x99bbe8u);
    /* 0089e145: mov eax, esi */ r_eax = r_esi;
    /* 0089e147: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e148: ret 4 */ FN_RET(0x0089e12f); r_esp += 8; return;
}

void f_0089e14b(void) /* sub_89E14B */
{
    FN_ENTER(0x0089e14b);
    /* 0089e14b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0089e14f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e150: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089e152: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0089e156: add ecx, dword ptr [ebx + 0x1040] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x1040u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089e15c: add eax, dword ptr [ebx + 0x1034] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1034u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089e162: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089e166: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089e168: call 0x89dd45 */ r_esp -= 4; W32(r_esp, 0x89e16du); f_0089dd45();
    /* 0089e16d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e16f: jl 0x89e1b6 */ if ((fS!=fO)) goto L_0089e1b6;
L_0089e171:; BB(0x0089e171);
    /* 0089e171: mov ecx, dword ptr [ebx + 0x1058] */ r_ecx = R32((u32)(r_ebx+0x1058u));
    /* 0089e177: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e178: mov esi, dword ptr [ebx + 0x1030] */ r_esi = R32((u32)(r_ebx+0x1030u));
    /* 0089e17e: sub esi, dword ptr [ebx + 0x1070] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1070u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0089e184: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089e187: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089e18a: add esi, dword ptr [ebx + 0x106c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x106cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e190: mov eax, ecx */ r_eax = r_ecx;
    /* 0089e192: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e193: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0089e197: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089e19a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089e19c: mov ecx, eax */ r_ecx = r_eax;
    /* 0089e19e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089e1a1: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0089e1a3: cmp dword ptr [ebx + 0x10], 0 */ {  u32 a = R32((u32)(r_ebx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089e1a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089e1a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e1a9: je 0x89e1b6 */ if (fZ) goto L_0089e1b6;
L_0089e1ab:; BB(0x0089e1ab);
    /* 0089e1ab: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e1af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089e1b1: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89e1b6u); f_0089aae4();
L_0089e1b6:; BB(0x0089e1b6);
    /* 0089e1b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089e1b7: ret 0xc */ FN_RET(0x0089e14b); r_esp += 16; return;
}

void f_0089e1ba(void) /* sub_89E1BA */
{
    FN_ENTER(0x0089e1ba);
    /* 0089e1ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1bd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1bf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e1c3: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e1c5: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e1cau); f_0089a735();
    /* 0089e1ca: mov dword ptr [esi], 0x99bbf8 */ W32((u32)(r_esi), 0x99bbf8u);
    /* 0089e1d0: mov eax, esi */ r_eax = r_esi;
    /* 0089e1d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e1d3: ret 4 */ FN_RET(0x0089e1ba); r_esp += 8; return;
}

void f_0089e1d6(void) /* sub_89E1D6 */
{
    FN_ENTER(0x0089e1d6);
    /* 0089e1d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1d9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0089e1dd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e1df: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e1e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e1e4: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e1e6: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e1ebu); f_0089a735();
    /* 0089e1eb: mov dword ptr [esi], 0x99ba80 */ W32((u32)(r_esi), 0x99ba80u);
    /* 0089e1f1: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0089e1f4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089e1f5: je 0x89e20e */ if (fZ) goto L_0089e20e;
L_0089e1f7:; BB(0x0089e1f7);
    /* 0089e1f7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089e1f8: je 0x89e206 */ if (fZ) goto L_0089e206;
L_0089e1fa:; BB(0x0089e1fa);
    /* 0089e1fa: mov dword ptr [esi + 0x1078], 3 */ W32((u32)(r_esi+0x1078u), 0x3u);
    /* 0089e204: jmp 0x89e215 */ goto L_0089e215;
L_0089e206:; BB(0x0089e206);
    /* 0089e206: mov dword ptr [esi + 0x1078], ebx */ W32((u32)(r_esi+0x1078u), r_ebx);
    /* 0089e20c: jmp 0x89e215 */ goto L_0089e215;
L_0089e20e:; BB(0x0089e20e);
    /* 0089e20e: and dword ptr [esi + 0x1078], 0 */ { u32 ad = (u32)(r_esi+0x1078u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089e215:; BB(0x0089e215);
    /* 0089e215: mov edi, dword ptr [edi + 0x1c] */ r_edi = R32((u32)(r_edi+0x1cu));
    /* 0089e218: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0089e219: je 0x89e232 */ if (fZ) goto L_0089e232;
L_0089e21b:; BB(0x0089e21b);
    /* 0089e21b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0089e21c: je 0x89e22a */ if (fZ) goto L_0089e22a;
L_0089e21e:; BB(0x0089e21e);
    /* 0089e21e: mov dword ptr [esi + 0x107c], 3 */ W32((u32)(r_esi+0x107cu), 0x3u);
    /* 0089e228: jmp 0x89e239 */ goto L_0089e239;
L_0089e22a:; BB(0x0089e22a);
    /* 0089e22a: mov dword ptr [esi + 0x107c], ebx */ W32((u32)(r_esi+0x107cu), r_ebx);
    /* 0089e230: jmp 0x89e239 */ goto L_0089e239;
L_0089e232:; BB(0x0089e232);
    /* 0089e232: and dword ptr [esi + 0x107c], 0 */ { u32 ad = (u32)(r_esi+0x107cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089e239:; BB(0x0089e239);
    /* 0089e239: cmp dword ptr [esi + 0x1078], 3 */ {  u32 a = R32((u32)(r_esi+0x1078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e240: jne 0x89e24f */ if (!fZ) goto L_0089e24f;
L_0089e242:; BB(0x0089e242);
    /* 0089e242: cmp dword ptr [esi + 0x107c], 3 */ {  u32 a = R32((u32)(r_esi+0x107cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e249: jne 0x89e24f */ if (!fZ) goto L_0089e24f;
L_0089e24b:; BB(0x0089e24b);
    /* 0089e24b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089e24d: jmp 0x89e251 */ goto L_0089e251;
L_0089e24f:; BB(0x0089e24f);
    /* 0089e24f: mov eax, ebx */ r_eax = r_ebx;
L_0089e251:; BB(0x0089e251);
    /* 0089e251: mov dword ptr [esi + 0x1074], eax */ W32((u32)(r_esi+0x1074u), r_eax);
    /* 0089e257: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089e25a: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e25f: je 0x89e305 */ if (fZ) goto L_0089e305;
L_0089e265:; BB(0x0089e265);
    /* 0089e265: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e26a: je 0x89e2e5 */ if (fZ) goto L_0089e2e5;
L_0089e26c:; BB(0x0089e26c);
    /* 0089e26c: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e271: je 0x89e2c5 */ if (fZ) goto L_0089e2c5;
L_0089e273:; BB(0x0089e273);
    /* 0089e273: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e278: je 0x89e2a5 */ if (fZ) goto L_0089e2a5;
L_0089e27a:; BB(0x0089e27a);
    /* 0089e27a: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e27f: jne 0x89e323 */ if (!fZ) goto L_0089e323;
L_0089e285:; BB(0x0089e285);
    /* 0089e285: mov dword ptr [esi + 0x1080], 0x10 */ W32((u32)(r_esi+0x1080u), 0x10u);
    /* 0089e28f: mov dword ptr [esi + 0x1088], 0x8a7a9e */ W32((u32)(r_esi+0x1088u), 0x8a7a9eu);
    /* 0089e299: mov dword ptr [esi + 0x1084], 0x8a7836 */ W32((u32)(r_esi+0x1084u), 0x8a7836u);
    /* 0089e2a3: jmp 0x89e323 */ goto L_0089e323;
L_0089e2a5:; BB(0x0089e2a5);
    /* 0089e2a5: mov dword ptr [esi + 0x1080], 0x10 */ W32((u32)(r_esi+0x1080u), 0x10u);
    /* 0089e2af: mov dword ptr [esi + 0x1088], 0x8a7f6a */ W32((u32)(r_esi+0x1088u), 0x8a7f6au);
    /* 0089e2b9: mov dword ptr [esi + 0x1084], 0x8a7f13 */ W32((u32)(r_esi+0x1084u), 0x8a7f13u);
    /* 0089e2c3: jmp 0x89e323 */ goto L_0089e323;
L_0089e2c5:; BB(0x0089e2c5);
    /* 0089e2c5: mov dword ptr [esi + 0x1080], 0x10 */ W32((u32)(r_esi+0x1080u), 0x10u);
    /* 0089e2cf: mov dword ptr [esi + 0x1088], 0x8a798a */ W32((u32)(r_esi+0x1088u), 0x8a798au);
    /* 0089e2d9: mov dword ptr [esi + 0x1084], 0x8a77b3 */ W32((u32)(r_esi+0x1084u), 0x8a77b3u);
    /* 0089e2e3: jmp 0x89e323 */ goto L_0089e323;
L_0089e2e5:; BB(0x0089e2e5);
    /* 0089e2e5: mov dword ptr [esi + 0x1080], 0x10 */ W32((u32)(r_esi+0x1080u), 0x10u);
    /* 0089e2ef: mov dword ptr [esi + 0x1088], 0x8a7f36 */ W32((u32)(r_esi+0x1088u), 0x8a7f36u);
    /* 0089e2f9: mov dword ptr [esi + 0x1084], 0x8a7ef0 */ W32((u32)(r_esi+0x1084u), 0x8a7ef0u);
    /* 0089e303: jmp 0x89e323 */ goto L_0089e323;
L_0089e305:; BB(0x0089e305);
    /* 0089e305: mov dword ptr [esi + 0x1080], 8 */ W32((u32)(r_esi+0x1080u), 0x8u);
    /* 0089e30f: mov dword ptr [esi + 0x1088], 0x8a7972 */ W32((u32)(r_esi+0x1088u), 0x8a7972u);
    /* 0089e319: mov dword ptr [esi + 0x1084], 0x8a7675 */ W32((u32)(r_esi+0x1084u), 0x8a7675u);
L_0089e323:; BB(0x0089e323);
    /* 0089e323: mov eax, dword ptr [esi + 0x1040] */ r_eax = R32((u32)(r_esi+0x1040u));
    /* 0089e329: mov edi, dword ptr [esi + 0x1030] */ r_edi = R32((u32)(r_esi+0x1030u));
    /* 0089e32f: mov ecx, dword ptr [esi + 0x103c] */ r_ecx = R32((u32)(r_esi+0x103cu));
    /* 0089e335: mov ebx, dword ptr [esi + 0x1034] */ r_ebx = R32((u32)(r_esi+0x1034u));
    /* 0089e33b: or dword ptr [esi + 0x10b0], 0xffffffff */ { u32 ad = (u32)(r_esi+0x10b0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e342: or dword ptr [esi + 0x10b4], 0xffffffff */ { u32 ad = (u32)(r_esi+0x10b4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e349: mov dword ptr [esi + 0x109c], eax */ W32((u32)(r_esi+0x109cu), r_eax);
    /* 0089e34f: mov eax, dword ptr [esi + 0x1038] */ r_eax = R32((u32)(r_esi+0x1038u));
    /* 0089e355: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0089e357: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0089e358: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089e35b: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089e35d: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089e35f: mov dword ptr [esi + 0x1094], eax */ W32((u32)(r_esi+0x1094u), r_eax);
    /* 0089e365: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e367: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089e36a: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089e36c: mov edx, dword ptr [esi + 0x1044] */ r_edx = R32((u32)(r_esi+0x1044u));
    /* 0089e372: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089e374: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0089e377: mov dword ptr [esi + 0x1098], ecx */ W32((u32)(r_esi+0x1098u), r_ecx);
    /* 0089e37d: mov dword ptr [esi + 0x10a4], eax */ W32((u32)(r_esi+0x10a4u), r_eax);
    /* 0089e383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089e385: mov dword ptr [esi + 0x10a0], edx */ W32((u32)(r_esi+0x10a0u), r_edx);
    /* 0089e38b: sub edx, dword ptr [esi + 0x1040] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x1040u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089e391: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0089e393: mov dword ptr [esi + 0x108c], edi */ W32((u32)(r_esi+0x108cu), r_edi);
    /* 0089e399: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0089e39c: mov dword ptr [esi + 0x10b8], eax */ W32((u32)(r_esi+0x10b8u), r_eax);
    /* 0089e3a2: mov dword ptr [esi + 0x10bc], eax */ W32((u32)(r_esi+0x10bcu), r_eax);
    /* 0089e3a8: mov dword ptr [esi + 0x10c0], eax */ W32((u32)(r_esi+0x10c0u), r_eax);
    /* 0089e3ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089e3af: mov dword ptr [esi + 0x1090], ebx */ W32((u32)(r_esi+0x1090u), r_ebx);
    /* 0089e3b5: mov dword ptr [esi + 0x10a8], ecx */ W32((u32)(r_esi+0x10a8u), r_ecx);
    /* 0089e3bb: mov dword ptr [esi + 0x10ac], edx */ W32((u32)(r_esi+0x10acu), r_edx);
    /* 0089e3c1: mov eax, esi */ r_eax = r_esi;
    /* 0089e3c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e3c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089e3c5: ret 4 */ FN_RET(0x0089e1d6); r_esp += 8; return;
}

void f_0089e3c8(void) /* sub_89E3C8 */
{
    FN_ENTER(0x0089e3c8);
    /* 0089e3c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3cb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3cd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e3d1: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e3d3: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e3d8u); f_0089a735();
    /* 0089e3d8: mov dword ptr [esi], 0x99bc08 */ W32((u32)(r_esi), 0x99bc08u);
    /* 0089e3de: mov eax, esi */ r_eax = r_esi;
    /* 0089e3e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e3e1: ret 4 */ FN_RET(0x0089e3c8); r_esp += 8; return;
}

void f_0089e3e4(void) /* sub_89E3E4 */
{
    FN_ENTER(0x0089e3e4);
    /* 0089e3e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3e7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e3e9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e3ed: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e3ef: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e3f4u); f_0089a735();
    /* 0089e3f4: mov dword ptr [esi], 0x99bc18 */ W32((u32)(r_esi), 0x99bc18u);
    /* 0089e3fa: mov eax, esi */ r_eax = r_esi;
    /* 0089e3fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e3fd: ret 4 */ FN_RET(0x0089e3e4); r_esp += 8; return;
}

void f_0089e400(void) /* sub_89E400 */
{
    FN_ENTER(0x0089e400);
    /* 0089e400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e401: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e403: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e405: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e409: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e40b: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e410u); f_0089a735();
    /* 0089e410: mov dword ptr [esi], 0x99bc28 */ W32((u32)(r_esi), 0x99bc28u);
    /* 0089e416: mov eax, esi */ r_eax = r_esi;
    /* 0089e418: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e419: ret 4 */ FN_RET(0x0089e400); r_esp += 8; return;
}

void f_0089e41c(void) /* sub_89E41C */
{
    FN_ENTER(0x0089e41c);
    /* 0089e41c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e41d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e41f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e421: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e425: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e427: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e42cu); f_0089a735();
    /* 0089e42c: mov dword ptr [esi], 0x99bc38 */ W32((u32)(r_esi), 0x99bc38u);
    /* 0089e432: mov eax, esi */ r_eax = r_esi;
    /* 0089e434: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e435: ret 4 */ FN_RET(0x0089e41c); r_esp += 8; return;
}

void f_0089e454(void) /* sub_89E454 */
{
    FN_ENTER(0x0089e454);
    /* 0089e454: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e455: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e457: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e459: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e45d: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e45f: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e464u); f_0089a735();
    /* 0089e464: mov dword ptr [esi], 0x99bc48 */ W32((u32)(r_esi), 0x99bc48u);
    /* 0089e46a: mov eax, esi */ r_eax = r_esi;
    /* 0089e46c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e46d: ret 4 */ FN_RET(0x0089e454); r_esp += 8; return;
}

void f_0089e470(void) /* sub_89E470 */
{
    FN_ENTER(0x0089e470);
    /* 0089e470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089e471: mov ebp, esp */ r_ebp = r_esp;
    /* 0089e473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089e476: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089e479: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0089e47c: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089e481: je 0x89e492 */ if (fZ) goto L_0089e492;
L_0089e483:; BB(0x0089e483);
    /* 0089e483: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089e488: je 0x89e492 */ if (fZ) goto L_0089e492;
L_0089e48a:; BB(0x0089e48a);
    /* 0089e48a: fld dword ptr [0x99ba90] */ FPUSH(R_F32((u32)(0x99ba90u)));
    /* 0089e490: jmp 0x89e498 */ goto L_0089e498;
L_0089e492:; BB(0x0089e492);
    /* 0089e492: fld dword ptr [0x99ba9c] */ FPUSH(R_F32((u32)(0x99ba9cu)));
L_0089e498:; BB(0x0089e498);
    /* 0089e498: fstp dword ptr [ecx + 0x106c] */ W_F32((u32)(r_ecx+0x106cu), ST(0)); FPOP();
    /* 0089e49e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e4a1: fld1  */ FPUSH(1.0);
    /* 0089e4a3: fdiv dword ptr [eax + 0x106c] */ ST(0) = ST(0) / R_F32((u32)(r_eax+0x106cu));
    /* 0089e4a9: fstp dword ptr [eax + 0x1070] */ W_F32((u32)(r_eax+0x1070u), ST(0)); FPOP();
    /* 0089e4af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e4b2: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0089e4b5: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089e4bb: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e4c1: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089e4c4: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089e4c7: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e4ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089e4cd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089e4d0: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e4d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e4d6: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 0089e4dc: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0089e4df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e4e2: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0089e4e5: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 0089e4eb: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e4f1: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089e4f4: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e4f7: fistp dword ptr [ebp - 8] */ W32((u32)(r_ebp+0xfffffff8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e4fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089e4fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089e500: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e503: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e506: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 0089e50c: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0089e50f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e512: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0089e515: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089e51b: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e521: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089e524: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e527: fistp dword ptr [ebp - 8] */ W32((u32)(r_ebp+0xfffffff8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e52a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089e52d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089e530: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e533: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e536: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 0089e53c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0089e53f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e542: fld dword ptr [eax + 0x106c] */ FPUSH(R_F32((u32)(r_eax+0x106cu)));
    /* 0089e548: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 0089e54b: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e551: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089e554: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e557: fistp dword ptr [ebp - 8] */ W32((u32)(r_ebp+0xfffffff8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e55a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089e55d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089e560: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0089e563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089e566: fmul dword ptr [eax + 0x1070] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1070u));
    /* 0089e56c: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0089e56f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089e570: ret  */ FN_RET(0x0089e470); r_esp += 4; return;
}

void f_0089e571(void) /* sub_89E571 */
{
    FN_ENTER(0x0089e571);
    /* 0089e571: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e572: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e574: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e576: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e57a: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e57c: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e581u); f_0089a735();
    /* 0089e581: mov dword ptr [esi], 0x99bc58 */ W32((u32)(r_esi), 0x99bc58u);
    /* 0089e587: mov eax, esi */ r_eax = r_esi;
    /* 0089e589: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e58a: ret 4 */ FN_RET(0x0089e571); r_esp += 8; return;
}

void f_0089e58d(void) /* sub_89E58D */
{
    FN_ENTER(0x0089e58d);
    /* 0089e58d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e58e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e590: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e592: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e596: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e598: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e59du); f_0089a735();
    /* 0089e59d: mov dword ptr [esi], 0x99bc68 */ W32((u32)(r_esi), 0x99bc68u);
    /* 0089e5a3: mov eax, esi */ r_eax = r_esi;
    /* 0089e5a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e5a6: ret 4 */ FN_RET(0x0089e58d); r_esp += 8; return;
}

void f_0089e5a9(void) /* sub_89E5A9 */
{
    FN_ENTER(0x0089e5a9);
    /* 0089e5a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5ac: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5ae: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e5b2: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e5b4: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e5b9u); f_0089a735();
    /* 0089e5b9: mov dword ptr [esi], 0x99bc78 */ W32((u32)(r_esi), 0x99bc78u);
    /* 0089e5bf: mov eax, esi */ r_eax = r_esi;
    /* 0089e5c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e5c2: ret 4 */ FN_RET(0x0089e5a9); r_esp += 8; return;
}

void f_0089e5c5(void) /* sub_89E5C5 */
{
    FN_ENTER(0x0089e5c5);
    /* 0089e5c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5c6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5c8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5ca: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e5ce: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e5d0: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e5d5u); f_0089a735();
    /* 0089e5d5: mov dword ptr [esi], 0x99bc88 */ W32((u32)(r_esi), 0x99bc88u);
    /* 0089e5db: mov eax, esi */ r_eax = r_esi;
    /* 0089e5dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e5de: ret 4 */ FN_RET(0x0089e5c5); r_esp += 8; return;
}

void f_0089e5e1(void) /* sub_89E5E1 */
{
    FN_ENTER(0x0089e5e1);
    /* 0089e5e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5e6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e5ea: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e5ec: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e5f1u); f_0089a735();
    /* 0089e5f1: mov dword ptr [esi], 0x99bc98 */ W32((u32)(r_esi), 0x99bc98u);
    /* 0089e5f7: mov eax, esi */ r_eax = r_esi;
    /* 0089e5f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e5fa: ret 4 */ FN_RET(0x0089e5e1); r_esp += 8; return;
}

void f_0089e5fd(void) /* sub_89E5FD */
{
    FN_ENTER(0x0089e5fd);
    /* 0089e5fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e5fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e600: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e602: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e606: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e608: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e60du); f_0089a735();
    /* 0089e60d: mov dword ptr [esi], 0x99bca8 */ W32((u32)(r_esi), 0x99bca8u);
    /* 0089e613: mov eax, esi */ r_eax = r_esi;
    /* 0089e615: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e616: ret 4 */ FN_RET(0x0089e5fd); r_esp += 8; return;
}

void f_0089e61e(void) /* sub_89E61E */
{
    FN_ENTER(0x0089e61e);
    /* 0089e61e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e61f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e621: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e623: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e627: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e629: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e62eu); f_0089a735();
    /* 0089e62e: mov dword ptr [esi], 0x99bcb8 */ W32((u32)(r_esi), 0x99bcb8u);
    /* 0089e634: mov eax, esi */ r_eax = r_esi;
    /* 0089e636: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e637: ret 4 */ FN_RET(0x0089e61e); r_esp += 8; return;
}

void f_0089e63a(void) /* sub_89E63A */
{
    FN_ENTER(0x0089e63a);
    /* 0089e63a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e63b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e63d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e63f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e643: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e645: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e64au); f_0089a735();
    /* 0089e64a: mov dword ptr [esi], 0x99bcc8 */ W32((u32)(r_esi), 0x99bcc8u);
    /* 0089e650: mov eax, esi */ r_eax = r_esi;
    /* 0089e652: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e653: ret 4 */ FN_RET(0x0089e63a); r_esp += 8; return;
}

void f_0089e656(void) /* sub_89E656 */
{
    FN_ENTER(0x0089e656);
    /* 0089e656: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e657: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e659: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e65b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e65f: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e661: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e666u); f_0089a735();
    /* 0089e666: mov dword ptr [esi], 0x99bcd8 */ W32((u32)(r_esi), 0x99bcd8u);
    /* 0089e66c: mov eax, esi */ r_eax = r_esi;
    /* 0089e66e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e66f: ret 4 */ FN_RET(0x0089e656); r_esp += 8; return;
}

void f_0089e672(void) /* sub_89E672 */
{
    FN_ENTER(0x0089e672);
    /* 0089e672: mov eax, 0x8cb771 */ r_eax = 0x8cb771u;
    /* 0089e677: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89e67cu); f_008cb064();
    /* 0089e67c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089e67f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0089e682: mov eax, dword ptr [ecx + 0x1034] */ r_eax = R32((u32)(r_ecx+0x1034u));
    /* 0089e688: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e68b: mov eax, dword ptr [ecx + 0x1040] */ r_eax = R32((u32)(r_ecx+0x1040u));
    /* 0089e691: add dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e694: cmp dword ptr [ecx + 0x10b8], 0 */ {  u32 a = R32((u32)(r_ecx+0x10b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e69b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e69c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e69d: jne 0x89e6eb */ if (!fZ) goto L_0089e6eb;
L_0089e69f:; BB(0x0089e69f);
    /* 0089e69f: mov esi, dword ptr [ecx + 0x10a4] */ r_esi = R32((u32)(r_ecx+0x10a4u));
    /* 0089e6a5: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089e6a8: mov eax, esi */ r_eax = r_esi;
    /* 0089e6aa: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089e6ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6ae: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89e6b3u); f_008581c5();
    /* 0089e6b3: mov edi, eax */ r_edi = r_eax;
    /* 0089e6b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089e6b6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0089e6b9: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e6bd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e6bf: je 0x89e6d1 */ if (fZ) goto L_0089e6d1;
L_0089e6c1:; BB(0x0089e6c1);
    /* 0089e6c1: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6c7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6ca: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89e6cfu); f_0088fd17();
    /* 0089e6cf: jmp 0x89e6d3 */ goto L_0089e6d3;
L_0089e6d1:; BB(0x0089e6d1);
    /* 0089e6d1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0089e6d3:; BB(0x0089e6d3);
    /* 0089e6d3: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e6d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e6d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e6dc: mov dword ptr [eax + 0x10b8], edi */ W32((u32)(r_eax+0x10b8u), r_edi);
    /* 0089e6e2: je 0x89e90b */ if (fZ) goto L_0089e90b;
L_0089e6e8:; BB(0x0089e6e8);
    /* 0089e6e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
L_0089e6eb:; BB(0x0089e6eb);
    /* 0089e6eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0089e6ee: lea eax, [ecx + 0x10b0] */ r_eax = (u32)(r_ecx+0x10b0u);
    /* 0089e6f4: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0089e6f7: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e6f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e6fa: jne 0x89e707 */ if (!fZ) goto L_0089e707;
L_0089e6fc:; BB(0x0089e6fc);
    /* 0089e6fc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089e6ff: cmp esi, dword ptr [ecx + 0x10b4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x10b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089e705: je 0x89e77a */ if (fZ) goto L_0089e77a;
L_0089e707:; BB(0x0089e707);
    /* 0089e707: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0089e709: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e70c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0089e70f: mov dword ptr [eax + 0x10b4], ecx */ W32((u32)(r_eax+0x10b4u), r_ecx);
    /* 0089e715: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e718: mov edi, dword ptr [ecx + 0x108c] */ r_edi = R32((u32)(r_ecx+0x108cu));
    /* 0089e71e: mov esi, dword ptr [ecx + 0x10b0] */ r_esi = R32((u32)(r_ecx+0x10b0u));
    /* 0089e724: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089e727: imul esi, dword ptr [ecx + 0x1050] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ecx+0x1050u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089e72e: mov ebx, dword ptr [ecx + 0x10b8] */ r_ebx = R32((u32)(r_ecx+0x10b8u));
    /* 0089e734: mov eax, edi */ r_eax = r_edi;
    /* 0089e736: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0089e739: imul eax, dword ptr [ecx + 0x1080] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x1080u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089e740: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e742: mov eax, dword ptr [ecx + 0x10b4] */ r_eax = R32((u32)(r_ecx+0x10b4u));
    /* 0089e748: imul eax, dword ptr [ecx + 0x1054] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x1054u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089e74f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e751: add esi, dword ptr [ecx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e754: jmp 0x89e772 */ goto L_0089e772;
L_0089e756:; BB(0x0089e756);
    /* 0089e756: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e757: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089e758: call dword ptr [ecx + 0x1084] */ { u32 t = R32((u32)(r_ecx+0x1084u)); r_esp -= 4; W32(r_esp, 0x89e75eu); call_ind(t); }
    /* 0089e75e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089e75f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089e760: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e763: add esi, dword ptr [ecx + 0x1080] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1080u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e769: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e76f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0089e772:; BB(0x0089e772);
    /* 0089e772: cmp edi, dword ptr [ecx + 0x1094] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1094u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089e778: jb 0x89e756 */ if (fC) goto L_0089e756;
L_0089e77a:; BB(0x0089e77a);
    /* 0089e77a: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0089e77d: mov eax, dword ptr [ecx + 0x1030] */ r_eax = R32((u32)(r_ecx+0x1030u));
    /* 0089e783: sub ebx, dword ptr [ecx + 0x1090] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1090u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e789: sub eax, dword ptr [ecx + 0x108c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x108cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089e78f: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089e795: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089e798: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0089e79a:; BB(0x0089e79a);
    /* 0089e79a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089e79c: jae 0x89e7c9 */ if (!fC) goto L_0089e7c9;
L_0089e79e:; BB(0x0089e79e);
    /* 0089e79e: mov esi, eax */ r_esi = r_eax;
    /* 0089e7a0: and esi, 0xfffffffc */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089e7a3: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0089e7a5: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089e7a8: mov edi, eax */ r_edi = r_eax;
    /* 0089e7aa: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089e7ad: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0089e7af: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089e7b2: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089e7b5: add esi, dword ptr [ecx + 0x10b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x10b8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089e7bb: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e7bc: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e7bd: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e7be: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e7bf: add dword ptr [ebp + 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089e7c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e7c6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089e7c7: jmp 0x89e79a */ goto L_0089e79a;
L_0089e7c9:; BB(0x0089e7c9);
    /* 0089e7c9: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089e7cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089e7ce: je 0x89e90b */ if (fZ) goto L_0089e90b;
L_0089e7d4:; BB(0x0089e7d4);
    /* 0089e7d4: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089e7da: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0089e7dd: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089e7e0: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89e7e5u); f_0089a712();
    /* 0089e7e5: jmp 0x89e8f7 */ goto L_0089e8f7;
L_0089e7ea:; BB(0x0089e7ea);
    /* 0089e7ea: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089e7ed: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089e7ef: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089e7f5: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e7fb: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089e7fe: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089e801: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e804: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089e807: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089e80a: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0089e80d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089e810: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 0089e816: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0089e819: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089e81c: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 0089e822: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e828: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089e82b: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089e82e: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e831: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089e834: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089e837: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0089e83a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089e83d: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 0089e843: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0089e846: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089e849: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089e84f: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e855: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089e858: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089e85b: fistp dword ptr [ebp - 0x20] */ W32((u32)(r_ebp+0xffffffe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e85e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0089e861: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089e864: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0089e867: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e86a: fmul dword ptr [0x99bac8] */ ST(0) = ST(0) * R_F32((u32)(0x99bac8u));
    /* 0089e870: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0089e873: fld dword ptr [eax + 0x106c] */ FPUSH(R_F32((u32)(r_eax+0x106cu)));
    /* 0089e879: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089e87c: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 0089e87f: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089e885: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089e888: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089e88b: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089e88e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089e891: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089e894: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089e897: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0089e89a: fmul dword ptr [ecx + 0x1070] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x1070u));
    /* 0089e8a0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0089e8a3: fcomp dword ptr [ecx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x1cu))); FPOP();
    /* 0089e8a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089e8a8: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089e8ab: jp 0x89e8f1 */ if (fP) goto L_0089e8f1;
L_0089e8ad:; BB(0x0089e8ad);
    /* 0089e8ad: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0089e8b0: fcomp dword ptr [ecx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x20u))); FPOP();
    /* 0089e8b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089e8b5: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089e8b8: jp 0x89e8f1 */ if (fP) goto L_0089e8f1;
L_0089e8ba:; BB(0x0089e8ba);
    /* 0089e8ba: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0089e8bd: fcomp dword ptr [ecx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x24u))); FPOP();
    /* 0089e8c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089e8c2: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089e8c5: jp 0x89e8f1 */ if (fP) goto L_0089e8f1;
L_0089e8c7:; BB(0x0089e8c7);
    /* 0089e8c7: fcomp dword ptr [ecx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x28u))); FPOP();
    /* 0089e8ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089e8cc: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089e8cf: jp 0x89e8f3 */ if (fP) goto L_0089e8f3;
L_0089e8d1:; BB(0x0089e8d1);
    /* 0089e8d1: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089e8d4: fldz  */ FPUSH(0.0);
    /* 0089e8d6: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 0089e8d9: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 0089e8dc: fldz  */ FPUSH(0.0);
    /* 0089e8de: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0089e8e1: fldz  */ FPUSH(0.0);
    /* 0089e8e3: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 0089e8e6: fldz  */ FPUSH(0.0);
    /* 0089e8e8: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0089e8eb: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e8ec: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e8ed: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e8ee: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089e8ef: jmp 0x89e8f3 */ goto L_0089e8f3;
L_0089e8f1:; BB(0x0089e8f1);
    /* 0089e8f1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089e8f3:; BB(0x0089e8f3);
    /* 0089e8f3: add dword ptr [ebp + 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0089e8f7:; BB(0x0089e8f7);
    /* 0089e8f7: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089e8fa: jb 0x89e7ea */ if (fC) goto L_0089e7ea;
L_0089e900:; BB(0x0089e900);
    /* 0089e900: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089e905: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089e908: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
L_0089e90b:; BB(0x0089e90b);
    /* 0089e90b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089e90e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089e90f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e910: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089e917: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089e918: ret 0xc */ FN_RET(0x0089e672); r_esp += 16; return;
}

void f_0089e900(void)
{
    FN_ENTER(0x0089e900);
    /* 0089e900: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089e905: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089e908: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089e90b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089e90e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089e90f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e910: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089e917: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089e918: ret 0xc */ FN_RET(0x0089e900); r_esp += 16; return;
}

void f_0089e91b(void) /* sub_89E91B */
{
    FN_ENTER(0x0089e91b);
    /* 0089e91b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e91c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e91e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e920: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e924: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e926: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e92bu); f_0089a735();
    /* 0089e92b: mov dword ptr [esi], 0x99bce8 */ W32((u32)(r_esi), 0x99bce8u);
    /* 0089e931: mov eax, esi */ r_eax = r_esi;
    /* 0089e933: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e934: ret 4 */ FN_RET(0x0089e91b); r_esp += 8; return;
}

void f_0089e937(void) /* sub_89E937 */
{
    FN_ENTER(0x0089e937);
    /* 0089e937: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e938: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e93a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e93c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e940: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e942: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e947u); f_0089a735();
    /* 0089e947: mov dword ptr [esi], 0x99bcf8 */ W32((u32)(r_esi), 0x99bcf8u);
    /* 0089e94d: mov eax, esi */ r_eax = r_esi;
    /* 0089e94f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e950: ret 4 */ FN_RET(0x0089e937); r_esp += 8; return;
}

void f_0089e953(void) /* sub_89E953 */
{
    FN_ENTER(0x0089e953);
    /* 0089e953: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e954: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e956: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0089e958: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e95c: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e95e: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89e963u); f_0089a735();
    /* 0089e963: mov dword ptr [esi], 0x99bd08 */ W32((u32)(r_esi), 0x99bd08u);
    /* 0089e969: mov eax, esi */ r_eax = r_esi;
    /* 0089e96b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e96c: ret 4 */ FN_RET(0x0089e953); r_esp += 8; return;
}

void f_0089e96f(void) /* sub_89E96F */
{
    FN_ENTER(0x0089e96f);
    /* 0089e96f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e970: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e974: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e976: call 0x89e1d6 */ r_esp -= 4; W32(r_esp, 0x89e97bu); f_0089e1d6();
    /* 0089e97b: mov dword ptr [esi], 0x99bd18 */ W32((u32)(r_esi), 0x99bd18u);
    /* 0089e981: mov eax, esi */ r_eax = r_esi;
    /* 0089e983: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e984: ret 4 */ FN_RET(0x0089e96f); r_esp += 8; return;
}

void f_0089e9a3(void) /* sub_89E9A3 */
{
    FN_ENTER(0x0089e9a3);
    /* 0089e9a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e9a4: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e9a8: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e9aa: call 0x89e1d6 */ r_esp -= 4; W32(r_esp, 0x89e9afu); f_0089e1d6();
    /* 0089e9af: mov dword ptr [esi], 0x99bd28 */ W32((u32)(r_esi), 0x99bd28u);
    /* 0089e9b5: mov eax, esi */ r_eax = r_esi;
    /* 0089e9b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e9b8: ret 4 */ FN_RET(0x0089e9a3); r_esp += 8; return;
}

void f_0089e9c0(void) /* sub_89E9C0 */
{
    FN_ENTER(0x0089e9c0);
    /* 0089e9c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e9c1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e9c5: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e9c7: call 0x89e1d6 */ r_esp -= 4; W32(r_esp, 0x89e9ccu); f_0089e1d6();
    /* 0089e9cc: mov dword ptr [esi], 0x99bd38 */ W32((u32)(r_esi), 0x99bd38u);
    /* 0089e9d2: mov eax, esi */ r_eax = r_esi;
    /* 0089e9d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e9d5: ret 4 */ FN_RET(0x0089e9c0); r_esp += 8; return;
}

void f_0089e9d8(void) /* sub_89E9D8 */
{
    FN_ENTER(0x0089e9d8);
    /* 0089e9d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e9d9: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e9dd: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e9df: call 0x89e1d6 */ r_esp -= 4; W32(r_esp, 0x89e9e4u); f_0089e1d6();
    /* 0089e9e4: mov dword ptr [esi], 0x99bd48 */ W32((u32)(r_esi), 0x99bd48u);
    /* 0089e9ea: mov eax, esi */ r_eax = r_esi;
    /* 0089e9ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e9ed: ret 4 */ FN_RET(0x0089e9d8); r_esp += 8; return;
}

void f_0089e9f0(void) /* sub_89E9F0 */
{
    FN_ENTER(0x0089e9f0);
    /* 0089e9f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e9f1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089e9f5: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e9f7: call 0x89e1d6 */ r_esp -= 4; W32(r_esp, 0x89e9fcu); f_0089e1d6();
    /* 0089e9fc: mov dword ptr [esi], 0x99bd58 */ W32((u32)(r_esi), 0x99bd58u);
    /* 0089ea02: mov eax, esi */ r_eax = r_esi;
    /* 0089ea04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ea05: ret 4 */ FN_RET(0x0089e9f0); r_esp += 8; return;
}

void f_0089ea51(void) /* sub_89EA51 */
{
    FN_ENTER(0x0089ea51);
    /* 0089ea51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea52: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ea56: mov esi, ecx */ r_esi = r_ecx;
    /* 0089ea58: call 0x89d9b9 */ r_esp -= 4; W32(r_esp, 0x89ea5du); f_0089d9b9();
    /* 0089ea5d: mov dword ptr [esi], 0x99bd68 */ W32((u32)(r_esi), 0x99bd68u);
    /* 0089ea63: mov eax, esi */ r_eax = r_esi;
    /* 0089ea65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ea66: ret 4 */ FN_RET(0x0089ea51); r_esp += 8; return;
}

void f_0089ea69(void) /* sub_89EA69 */
{
    FN_ENTER(0x0089ea69);
    /* 0089ea69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea6a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ea6e: mov esi, ecx */ r_esi = r_ecx;
    /* 0089ea70: call 0x89d9b9 */ r_esp -= 4; W32(r_esp, 0x89ea75u); f_0089d9b9();
    /* 0089ea75: mov dword ptr [esi], 0x99bd78 */ W32((u32)(r_esi), 0x99bd78u);
    /* 0089ea7b: mov eax, esi */ r_eax = r_esi;
    /* 0089ea7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ea7e: ret 4 */ FN_RET(0x0089ea69); r_esp += 8; return;
}

