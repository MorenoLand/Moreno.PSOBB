#include "protos.h"

void f_005e3004(void)
{
    FN_ENTER(0x005e3004);
    /* 005e3004: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e300a: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e300f: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e3015: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e3004); r_esp += 4; return;
}

void f_005e3017(void)
{
    FN_ENTER(0x005e3017);
    /* 005e3017: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e301d: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e3022: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e3028: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e3017); r_esp += 4; return;
}

void f_005e302a(void)
{
    FN_ENTER(0x005e302a);
    /* 005e302a: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e3030: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e3033: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e3039: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e302a); r_esp += 4; return;
}

void f_005e303b(void)
{
    FN_ENTER(0x005e303b);
    /* 005e303b: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e3041: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e3044: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e304a: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e303b); r_esp += 4; return;
}

void f_005e304c(void)
{
    FN_ENTER(0x005e304c);
    /* 005e304c: movsx eax, word ptr [ecx + 0x1b2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1b2u));
    /* 005e3053: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e3056: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e3059: fdiv dword ptr [0x92d4ac] */ ST(0) = ST(0) / R_F32((u32)(0x92d4acu));
    /* 005e305f: fstp dword ptr [ecx + 0x1a0] */ W_F32((u32)(r_ecx+0x1a0u), ST(0)); FPOP();
    /* 005e3065: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e304c); r_esp += 4; return;
}

void f_005e3067(void)
{
    FN_ENTER(0x005e3067);
    /* 005e3067: movzx eax, word ptr [ecx + 0x1b2] */ r_eax = (u32)R16((u32)(r_ecx+0x1b2u));
    /* 005e306e: mov word ptr [ecx + 0x1b4], ax */ W16((u32)(r_ecx+0x1b4u), (u16)r_eax);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e3067); r_esp += 4; return;
}

void f_005e3090(void) /* sub_5E3090 */
{
    FN_ENTER(0x005e3090);
    /* 005e3090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3092: mov esi, ecx */ r_esi = r_ecx;
    /* 005e3094: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005e3098: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e309a: mov ecx, esi */ r_ecx = r_esi;
    /* 005e309c: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x5e309fu); call_ind(t); }
    /* 005e309f: add eax, -9 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e30a2: mov byte ptr [edi + 4], al */ W8((u32)(r_edi+0x4u), (u8)r_eax);
    /* 005e30a5: movsx eax, word ptr [esi + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1dcu));
    /* 005e30ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e30ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005e30af: call 0x5d24c4 */ r_esp -= 4; W32(r_esp, 0x5e30b4u); f_005d24c4();
    /* 005e30b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e30b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e30b6: ret 4 */ FN_RET(0x005e3090); r_esp += 8; return;
}

void f_005e30bc(void) /* sub_5E30BC */
{
    FN_ENTER(0x005e30bc);
    /* 005e30bc: mov dword ptr [0xa8dc0c], 0x3f800000 */ W32((u32)(0xa8dc0cu), 0x3f800000u);
    /* 005e30c6: mov dword ptr [0xa8dc10], 0x41000000 */ W32((u32)(0xa8dc10u), 0x41000000u);
    /* 005e30d0: mov dword ptr [0xa8dc14], 0x3fc00000 */ W32((u32)(0xa8dc14u), 0x3fc00000u);
    /* 005e30da: ret  */ FN_RET(0x005e30bc); r_esp += 4; return;
}

void f_005e30dc(void) /* sub_5E30DC */
{
    FN_ENTER(0x005e30dc);
    /* 005e30dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e30dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e30df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e30e1: call 0x5e3100 */ r_esp -= 4; W32(r_esp, 0x5e30e6u); f_005e3100();
    /* 005e30e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e30ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e30ec: jne 0x5e30f2 */ if (!fZ) goto L_005e30f2;
L_005e30ee:; BB(0x005e30ee);
    /* 005e30ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e30ef: ret 4 */ FN_RET(0x005e30dc); r_esp += 8; return;
L_005e30f2:; BB(0x005e30f2);
    /* 005e30f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e30f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e30f8u); f_005c2f74();
    /* 005e30f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e30f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e30fa: ret 4 */ FN_RET(0x005e30dc); r_esp += 8; return;
}

void f_005e3100(void) /* sub_5E3100 */
{
    FN_ENTER(0x005e3100);
    /* 005e3100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3101: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3105: push 0x8db7ca */ { u32 v = 0x8db7cau; r_esp -= 4; W32(r_esp, v); }
    /* 005e310a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3111: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3118: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e311b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e311e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e3121: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e3124: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e3127: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e312a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e312d: mov dword ptr [eax], 0xb0fb60 */ W32((u32)(r_eax), 0xb0fb60u);
    /* 005e3133: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e3136: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3139: mov dword ptr [ecx], 0xb0fa20 */ W32((u32)(r_ecx), 0xb0fa20u);
    /* 005e313f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3146: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e314bu); f_005d1654();
    /* 005e314b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e314e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e3155: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3158: ret  */ FN_RET(0x005e3100); r_esp += 4; return;
}

void f_005e31ac(void) /* sub_5E31AC */
{
    FN_ENTER(0x005e31ac);
    /* 005e31ac: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e31b2: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005e31b9: mov word ptr [ecx + 0x1e4], dx */ W16((u32)(r_ecx+0x1e4u), (u16)r_edx);
    /* 005e31c0: call 0x5e28f4 */ r_esp -= 4; W32(r_esp, 0x5e31c5u); f_005e28f4();
    /* 005e31c5: ret  */ FN_RET(0x005e31ac); r_esp += 4; return;
}

void f_005e31c8(void) /* sub_5E31C8 */
{
    FN_ENTER(0x005e31c8);
    /* 005e31c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e31c9: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e31cc: mov esi, ecx */ r_esi = r_ecx;
    /* 005e31ce: mov ecx, esi */ r_ecx = r_esi;
    /* 005e31d0: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5e31d5u); f_005c37bc();
    /* 005e31d5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e31d8: cmp eax, 0x4e20 */ {  u32 a = r_eax; u32 b = 0x4e20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e31dd: jl 0x5e31fa */ if ((fS!=fO)) goto L_005e31fa;
L_005e31df:; BB(0x005e31df);
    /* 005e31df: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 005e31e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e31e6: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005e31eb: mov byte ptr [esp + 2], 0x50 */ W8((u32)(r_esp+0x2u), 0x50u);
    /* 005e31f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e31f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e31f2: call 0x5c4600 */ r_esp -= 4; W32(r_esp, 0x5e31f7u); f_005c4600();
    /* 005e31f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e31fa:; BB(0x005e31fa);
    /* 005e31fa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e31fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e31fe: ret  */ FN_RET(0x005e31c8); r_esp += 4; return;
}

void f_005e3200(void) /* sub_5E3200 */
{
    FN_ENTER(0x005e3200);
    /* 005e3200: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3201: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e3203: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3207: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e320b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e320d: call 0x5e2e4c */ r_esp -= 4; W32(r_esp, 0x5e3212u); f_005e2e4c();
    /* 005e3212: mov dword ptr [ebx], 0xb0fb60 */ W32((u32)(r_ebx), 0xb0fb60u);
    /* 005e3218: mov edx, dword ptr [0x9c282c] */ r_edx = R32((u32)(0x9c282cu));
    /* 005e321e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005e3221: mov eax, ebx */ r_eax = r_ebx;
    /* 005e3223: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3224: ret 8 */ FN_RET(0x005e3200); r_esp += 12; return;
}

void f_005e3228(void) /* sub_5E3228 */
{
    FN_ENTER(0x005e3228);
    /* 005e3228: mov dword ptr [0xa8dc1c], 0x3f800000 */ W32((u32)(0xa8dc1cu), 0x3f800000u);
    /* 005e3232: mov dword ptr [0xa8dc20], 0x41000000 */ W32((u32)(0xa8dc20u), 0x41000000u);
    /* 005e323c: mov dword ptr [0xa8dc24], 0x3fc00000 */ W32((u32)(0xa8dc24u), 0x3fc00000u);
    /* 005e3246: ret  */ FN_RET(0x005e3228); r_esp += 4; return;
}

void f_005e3248(void) /* sub_5E3248 */
{
    FN_ENTER(0x005e3248);
    /* 005e3248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3249: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e324b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e324d: call 0x5e326c */ r_esp -= 4; W32(r_esp, 0x5e3252u); f_005e326c();
    /* 005e3252: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e3256: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3258: jne 0x5e325e */ if (!fZ) goto L_005e325e;
L_005e325a:; BB(0x005e325a);
    /* 005e325a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e325b: ret 4 */ FN_RET(0x005e3248); r_esp += 8; return;
L_005e325e:; BB(0x005e325e);
    /* 005e325e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e325f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e3264u); f_005c2f74();
    /* 005e3264: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3265: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3266: ret 4 */ FN_RET(0x005e3248); r_esp += 8; return;
}

void f_005e326c(void) /* sub_5E326C */
{
    FN_ENTER(0x005e326c);
    /* 005e326c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e326d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e326f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3271: push 0x8db80e */ { u32 v = 0x8db80eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e327c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e327d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3284: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e328a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e328d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e3290: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e3293: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e3296: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3299: mov dword ptr [eax], 0xb0fc80 */ W32((u32)(r_eax), 0xb0fc80u);
    /* 005e329f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e32a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e32a5: mov dword ptr [ecx], 0xb0fa20 */ W32((u32)(r_ecx), 0xb0fa20u);
    /* 005e32ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e32b2: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e32b7u); f_005d1654();
    /* 005e32b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e32ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e32c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e32c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e32c4: ret  */ FN_RET(0x005e326c); r_esp += 4; return;
}

void f_005e32c8(void) /* sub_5E32C8 */
{
    FN_ENTER(0x005e32c8);
    /* 005e32c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e32c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e32cb: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005e32d1: movsx eax, word ptr [ebx + 0x1e4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1e4u));
    /* 005e32d8: cmp ax, word ptr [edx + 0x11a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x11au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005e32df: jge 0x5e330a */ if ((fS==fO)) goto L_005e330a;
L_005e32e1:; BB(0x005e32e1);
    /* 005e32e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e32e3: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5e32e8u); f_005c37bc();
    /* 005e32e8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e32eb: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e32ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e32ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e32f1: call 0x5c37a0 */ r_esp -= 4; W32(r_esp, 0x5e32f6u); f_005c37a0();
    /* 005e32f6: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005e32fc: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005e3303: mov word ptr [ebx + 0x1e4], dx */ W16((u32)(r_ebx+0x1e4u), (u16)r_edx);
L_005e330a:; BB(0x005e330a);
    /* 005e330a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e330c: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5e3311u); f_005c37bc();
    /* 005e3311: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e3314: cmp eax, 0x4e20 */ {  u32 a = r_eax; u32 b = 0x4e20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3319: jl 0x5e3333 */ if ((fS!=fO)) goto L_005e3333;
L_005e331b:; BB(0x005e331b);
    /* 005e331b: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 005e3321: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3326: jne 0x5e3333 */ if (!fZ) goto L_005e3333;
L_005e3328:; BB(0x005e3328);
    /* 005e3328: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e332d: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
L_005e3333:; BB(0x005e3333);
    /* 005e3333: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e3335: call 0x5e2c34 */ r_esp -= 4; W32(r_esp, 0x5e333au); f_005e2c34();
    /* 005e333a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e333b: ret  */ FN_RET(0x005e32c8); r_esp += 4; return;
}

void f_005e333c(void) /* sub_5E333C */
{
    FN_ENTER(0x005e333c);
    /* 005e333c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e333d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3340: mov esi, ecx */ r_esi = r_ecx;
    /* 005e3342: mov ecx, esi */ r_ecx = r_esi;
    /* 005e3344: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5e3349u); f_005c37bc();
    /* 005e3349: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e334c: cmp eax, 0x4e20 */ {  u32 a = r_eax; u32 b = 0x4e20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3351: jl 0x5e336e */ if ((fS!=fO)) goto L_005e336e;
L_005e3353:; BB(0x005e3353);
    /* 005e3353: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 005e3357: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e335a: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005e335f: mov byte ptr [esp + 2], 0x4e */ W8((u32)(r_esp+0x2u), 0x4eu);
    /* 005e3364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3366: call 0x5c4600 */ r_esp -= 4; W32(r_esp, 0x5e336bu); f_005c4600();
    /* 005e336b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e336e:; BB(0x005e336e);
    /* 005e336e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3371: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3372: ret  */ FN_RET(0x005e333c); r_esp += 4; return;
}

void f_005e3374(void) /* sub_5E3374 */
{
    FN_ENTER(0x005e3374);
    /* 005e3374: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3375: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e3377: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e337b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e337f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e3381: call 0x5e2e4c */ r_esp -= 4; W32(r_esp, 0x5e3386u); f_005e2e4c();
    /* 005e3386: mov dword ptr [ebx], 0xb0fc80 */ W32((u32)(r_ebx), 0xb0fc80u);
    /* 005e338c: mov edx, dword ptr [0x9c2830] */ r_edx = R32((u32)(0x9c2830u));
    /* 005e3392: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005e3395: mov eax, ebx */ r_eax = r_ebx;
    /* 005e3397: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3398: ret 8 */ FN_RET(0x005e3374); r_esp += 12; return;
}

void f_005e339c(void) /* sub_5E339C */
{
    FN_ENTER(0x005e339c);
    /* 005e339c: mov dword ptr [0xa8dc2c], 0x3f800000 */ W32((u32)(0xa8dc2cu), 0x3f800000u);
    /* 005e33a6: mov dword ptr [0xa8dc30], 0x41000000 */ W32((u32)(0xa8dc30u), 0x41000000u);
    /* 005e33b0: mov dword ptr [0xa8dc34], 0x3fc00000 */ W32((u32)(0xa8dc34u), 0x3fc00000u);
    /* 005e33ba: ret  */ FN_RET(0x005e339c); r_esp += 4; return;
}

void f_005e33bc(void) /* sub_5E33BC */
{
    FN_ENTER(0x005e33bc);
    /* 005e33bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e33bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e33bf: mov ebx, eax */ r_ebx = r_eax;
L_005e33c1:; BB(0x005e33c1);
    /* 005e33c1: mov ecx, dword ptr [ebx + 0xa8dc48] */ r_ecx = R32((u32)(r_ebx+0xa8dc48u));
    /* 005e33c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33c9: je 0x5e33d1 */ if (fZ) goto L_005e33d1;
L_005e33cb:; BB(0x005e33cb);
    /* 005e33cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e33cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e33cf: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x5e33d1u); call_ind(t); }
L_005e33d1:; BB(0x005e33d1);
    /* 005e33d1: mov dword ptr [ebx + 0xa8dc48], 0 */ W32((u32)(r_ebx+0xa8dc48u), 0x0u);
    /* 005e33db: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e33de: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e33e1: jl 0x5e33c1 */ if ((fS!=fO)) goto L_005e33c1;
L_005e33e3:; BB(0x005e33e3);
    /* 005e33e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e33e4: ret  */ FN_RET(0x005e33bc); r_esp += 4; return;
}

void f_005e33e8(void) /* sub_5E33E8 */
{
    FN_ENTER(0x005e33e8);
    /* 005e33e8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e33ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e33ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e33f3u); f_0068d5a8();
    /* 005e33f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e33f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e33f6: je 0x5e3401 */ if (fZ) goto L_005e3401;
L_005e33f8:; BB(0x005e33f8);
    /* 005e33f8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005e33fb: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e33fe: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_005e3401:; BB(0x005e3401);
    /* 005e3401: ret  */ FN_RET(0x005e33e8); r_esp += 4; return;
}

void f_005e3404(void) /* sub_5E3404 */
{
    FN_ENTER(0x005e3404);
    /* 005e3404: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e340a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e340fu); f_0068d5a8();
    /* 005e340f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3412: je 0x5e3428 */ if (fZ) goto L_005e3428;
L_005e3414:; BB(0x005e3414);
    /* 005e3414: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e341b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3421: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e3428:; BB(0x005e3428);
    /* 005e3428: ret  */ FN_RET(0x005e3404); r_esp += 4; return;
}

void f_005e342c(void) /* sub_5E342C */
{
    FN_ENTER(0x005e342c);
    /* 005e342c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3432: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e3437u); f_0068d5a8();
    /* 005e3437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3438: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e343a: je 0x5e3450 */ if (fZ) goto L_005e3450;
L_005e343c:; BB(0x005e343c);
    /* 005e343c: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e3443: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3449: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e3450:; BB(0x005e3450);
    /* 005e3450: ret  */ FN_RET(0x005e342c); r_esp += 4; return;
}

void f_005e3454(void) /* sub_5E3454 */
{
    FN_ENTER(0x005e3454);
    /* 005e3454: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e345a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e345fu); f_0068d5a8();
    /* 005e345f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3462: je 0x5e3478 */ if (fZ) goto L_005e3478;
L_005e3464:; BB(0x005e3464);
    /* 005e3464: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e346b: or edx, 0xffff0004 */ {  u32 a = r_edx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3471: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e3478:; BB(0x005e3478);
    /* 005e3478: ret  */ FN_RET(0x005e3454); r_esp += 4; return;
}

void f_005e347c(void) /* sub_5E347C */
{
    FN_ENTER(0x005e347c);
    /* 005e347c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3482: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e3487u); f_0068d5a8();
    /* 005e3487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e348a: je 0x5e34a0 */ if (fZ) goto L_005e34a0;
L_005e348c:; BB(0x005e348c);
    /* 005e348c: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e3493: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3499: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e34a0:; BB(0x005e34a0);
    /* 005e34a0: ret  */ FN_RET(0x005e347c); r_esp += 4; return;
}

void f_005e34a4(void) /* sub_5E34A4 */
{
    FN_ENTER(0x005e34a4);
    /* 005e34a4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e34a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34aa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e34afu); f_0068d5a8();
    /* 005e34af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e34b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e34b2: je 0x5e34c8 */ if (fZ) goto L_005e34c8;
L_005e34b4:; BB(0x005e34b4);
    /* 005e34b4: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e34bb: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e34c1: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e34c8:; BB(0x005e34c8);
    /* 005e34c8: ret  */ FN_RET(0x005e34a4); r_esp += 4; return;
}

void f_005e34cc(void) /* sub_5E34CC */
{
    FN_ENTER(0x005e34cc);
    /* 005e34cc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e34d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34d2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e34d7u); f_0068d5a8();
    /* 005e34d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e34d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e34da: je 0x5e34f0 */ if (fZ) goto L_005e34f0;
L_005e34dc:; BB(0x005e34dc);
    /* 005e34dc: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e34e3: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e34e9: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e34f0:; BB(0x005e34f0);
    /* 005e34f0: ret  */ FN_RET(0x005e34cc); r_esp += 4; return;
}

void f_005e34f4(void) /* sub_5E34F4 */
{
    FN_ENTER(0x005e34f4);
    /* 005e34f4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e34f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e34ffu); f_0068d5a8();
    /* 005e34ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3500: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3502: je 0x5e350d */ if (fZ) goto L_005e350d;
L_005e3504:; BB(0x005e3504);
    /* 005e3504: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005e3507: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e350a: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_005e350d:; BB(0x005e350d);
    /* 005e350d: ret  */ FN_RET(0x005e34f4); r_esp += 4; return;
}

void f_005e3510(void) /* sub_5E3510 */
{
    FN_ENTER(0x005e3510);
    /* 005e3510: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3516: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e351bu); f_0068d5a8();
    /* 005e351b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e351c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e351e: je 0x5e3534 */ if (fZ) goto L_005e3534;
L_005e3520:; BB(0x005e3520);
    /* 005e3520: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e3527: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e352d: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e3534:; BB(0x005e3534);
    /* 005e3534: ret  */ FN_RET(0x005e3510); r_esp += 4; return;
}

void f_005e3538(void) /* sub_5E3538 */
{
    FN_ENTER(0x005e3538);
    /* 005e3538: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e353d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e353e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e3543u); f_0068d5a8();
    /* 005e3543: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3546: je 0x5e355c */ if (fZ) goto L_005e355c;
L_005e3548:; BB(0x005e3548);
    /* 005e3548: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e354f: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3555: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e355c:; BB(0x005e355c);
    /* 005e355c: ret  */ FN_RET(0x005e3538); r_esp += 4; return;
}

void f_005e3560(void) /* sub_5E3560 */
{
    FN_ENTER(0x005e3560);
    /* 005e3560: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3566: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e356bu); f_0068d5a8();
    /* 005e356b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e356c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e356e: je 0x5e3584 */ if (fZ) goto L_005e3584;
L_005e3570:; BB(0x005e3570);
    /* 005e3570: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e3577: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e357d: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e3584:; BB(0x005e3584);
    /* 005e3584: ret  */ FN_RET(0x005e3560); r_esp += 4; return;
}

void f_005e3588(void) /* sub_5E3588 */
{
    FN_ENTER(0x005e3588);
    /* 005e3588: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e358d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e358e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e3593u); f_0068d5a8();
    /* 005e3593: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3596: je 0x5e35ac */ if (fZ) goto L_005e35ac;
L_005e3598:; BB(0x005e3598);
    /* 005e3598: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e359f: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e35a5: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e35ac:; BB(0x005e35ac);
    /* 005e35ac: ret  */ FN_RET(0x005e3588); r_esp += 4; return;
}

void f_005e35b0(void) /* sub_5E35B0 */
{
    FN_ENTER(0x005e35b0);
    /* 005e35b0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e35b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e35b6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e35bbu); f_0068d5a8();
    /* 005e35bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e35bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e35be: je 0x5e35d4 */ if (fZ) goto L_005e35d4;
L_005e35c0:; BB(0x005e35c0);
    /* 005e35c0: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e35c7: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e35cd: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e35d4:; BB(0x005e35d4);
    /* 005e35d4: ret  */ FN_RET(0x005e35b0); r_esp += 4; return;
}

void f_005e35d8(void) /* sub_5E35D8 */
{
    FN_ENTER(0x005e35d8);
    /* 005e35d8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e35dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e35de: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e35e3u); f_0068d5a8();
    /* 005e35e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e35e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e35e6: je 0x5e35fc */ if (fZ) goto L_005e35fc;
L_005e35e8:; BB(0x005e35e8);
    /* 005e35e8: movzx edx, word ptr [eax + 0x11c] */ r_edx = (u32)R16((u32)(r_eax+0x11cu));
    /* 005e35ef: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e35f5: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
L_005e35fc:; BB(0x005e35fc);
    /* 005e35fc: ret  */ FN_RET(0x005e35d8); r_esp += 4; return;
}

void f_005e3600(void) /* sub_5E3600 */
{
    FN_ENTER(0x005e3600);
    /* 005e3600: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3605: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3608: jge 0x5e3628 */ if ((fS==fO)) goto L_005e3628;
L_005e360a:; BB(0x005e360a);
    /* 005e360a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e360e: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3611: jae 0x5e3628 */ if (!fC) goto L_005e3628;
L_005e3613:; BB(0x005e3613);
    /* 005e3613: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e3617: mov ecx, dword ptr [edx*4 + 0xa8dc48] */ r_ecx = R32((u32)(r_edx*4+0xa8dc48u));
    /* 005e361e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3620: je 0x5e3628 */ if (fZ) goto L_005e3628;
L_005e3622:; BB(0x005e3622);
    /* 005e3622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3623: call 0x5d8180 */ r_esp -= 4; W32(r_esp, 0x5e3628u); f_005d8180();
L_005e3628:; BB(0x005e3628);
    /* 005e3628: ret  */ FN_RET(0x005e3600); r_esp += 4; return;
}

void f_005e362c(void) /* sub_5E362C */
{
    FN_ENTER(0x005e362c);
    /* 005e362c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3631: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3634: jge 0x5e3654 */ if ((fS==fO)) goto L_005e3654;
L_005e3636:; BB(0x005e3636);
    /* 005e3636: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e363a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e363d: jae 0x5e3654 */ if (!fC) goto L_005e3654;
L_005e363f:; BB(0x005e363f);
    /* 005e363f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e3643: mov ecx, dword ptr [edx*4 + 0xa8dc48] */ r_ecx = R32((u32)(r_edx*4+0xa8dc48u));
    /* 005e364a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e364c: je 0x5e3654 */ if (fZ) goto L_005e3654;
L_005e364e:; BB(0x005e364e);
    /* 005e364e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e364f: call 0x5d81b4 */ r_esp -= 4; W32(r_esp, 0x5e3654u); f_005d81b4();
L_005e3654:; BB(0x005e3654);
    /* 005e3654: ret  */ FN_RET(0x005e362c); r_esp += 4; return;
}

void f_005e3658(void) /* sub_5E3658 */
{
    FN_ENTER(0x005e3658);
    /* 005e3658: mov dword ptr [0xa8dc3c], 0x3f800000 */ W32((u32)(0xa8dc3cu), 0x3f800000u);
    /* 005e3662: mov dword ptr [0xa8dc40], 0x41000000 */ W32((u32)(0xa8dc40u), 0x41000000u);
    /* 005e366c: mov dword ptr [0xa8dc44], 0x3fc00000 */ W32((u32)(0xa8dc44u), 0x3fc00000u);
    /* 005e3676: ret  */ FN_RET(0x005e3658); r_esp += 4; return;
}

void f_005e3678(void) /* sub_5E3678 */
{
    FN_ENTER(0x005e3678);
    /* 005e3678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3679: mov ebp, esp */ r_ebp = r_esp;
    /* 005e367b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e367d: push 0x8db8d6 */ { u32 v = 0x8db8d6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3690: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e3696: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e3699: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e369c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e369f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e36a1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e36a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e36adu); f_005caba4();
    /* 005e36ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e36ae: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e36b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e36b3: je 0x5e3912 */ if (fZ) goto L_005e3912;
L_005e36b9:; BB(0x005e36b9);
    /* 005e36b9: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005e36c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e36c7: push 0x5e34f4 */ { u32 v = 0x5e34f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e36cc: push 0x5e33e8 */ { u32 v = 0x5e33e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e36d1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e36d4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e36d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e36d8: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e36ddu); f_005d80d4();
    /* 005e36dd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e36e0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005e36e7:; BB(0x005e36e7);
    /* 005e36e7: mov dword ptr [0xa8dc48], eax */ W32((u32)(0xa8dc48u), r_eax);
    /* 005e36ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e36f3: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e36fa: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e36fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e3701u); f_005caba4();
    /* 005e3701: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3702: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e3705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3707: je 0x5e390b */ if (fZ) goto L_005e390b;
L_005e370d:; BB(0x005e370d);
    /* 005e370d: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005e3714: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e371b: push 0x5e3510 */ { u32 v = 0x5e3510u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3720: push 0x5e3404 */ { u32 v = 0x5e3404u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3725: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3728: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e372a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e372c: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e3731u); f_005d80d4();
    /* 005e3731: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3734: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005e373b:; BB(0x005e373b);
    /* 005e373b: mov dword ptr [0xa8dc4c], eax */ W32((u32)(0xa8dc4cu), r_eax);
    /* 005e3740: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3747: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005e374e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3750: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e3755u); f_005caba4();
    /* 005e3755: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3756: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e3759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e375b: je 0x5e3904 */ if (fZ) goto L_005e3904;
L_005e3761:; BB(0x005e3761);
    /* 005e3761: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005e3768: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e376f: push 0x5e3538 */ { u32 v = 0x5e3538u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3774: push 0x5e342c */ { u32 v = 0x5e342cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3779: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e377c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e377e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3780: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e3785u); f_005d80d4();
    /* 005e3785: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3788: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005e378f:; BB(0x005e378f);
    /* 005e378f: mov dword ptr [0xa8dc50], eax */ W32((u32)(0xa8dc50u), r_eax);
    /* 005e3794: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e379b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e37a2: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e37a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e37a9u); f_005caba4();
    /* 005e37a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e37aa: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e37ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e37af: je 0x5e38fd */ if (fZ) goto L_005e38fd;
L_005e37b5:; BB(0x005e37b5);
    /* 005e37b5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e37bc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e37c3: push 0x5e3560 */ { u32 v = 0x5e3560u; r_esp -= 4; W32(r_esp, v); }
    /* 005e37c8: push 0x5e3454 */ { u32 v = 0x5e3454u; r_esp -= 4; W32(r_esp, v); }
    /* 005e37cd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e37d0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e37d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e37d4: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e37d9u); f_005d80d4();
    /* 005e37d9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e37dc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e37e3:; BB(0x005e37e3);
    /* 005e37e3: mov dword ptr [0xa8dc54], eax */ W32((u32)(0xa8dc54u), r_eax);
    /* 005e37e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e37ef: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005e37f6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e37f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e37fdu); f_005caba4();
    /* 005e37fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e37fe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e3801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3803: je 0x5e38f6 */ if (fZ) goto L_005e38f6;
L_005e3809:; BB(0x005e3809);
    /* 005e3809: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e3810: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005e3817: push 0x5e3588 */ { u32 v = 0x5e3588u; r_esp -= 4; W32(r_esp, v); }
    /* 005e381c: push 0x5e347c */ { u32 v = 0x5e347cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3821: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3824: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3828: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e382du); f_005d80d4();
    /* 005e382d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3830: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e3837:; BB(0x005e3837);
    /* 005e3837: mov dword ptr [0xa8dc58], eax */ W32((u32)(0xa8dc58u), r_eax);
    /* 005e383c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3843: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e384a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e384c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e3851u); f_005caba4();
    /* 005e3851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3852: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e3855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3857: je 0x5e38f2 */ if (fZ) goto L_005e38f2;
L_005e385d:; BB(0x005e385d);
    /* 005e385d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e3864: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005e386b: push 0x5e35b0 */ { u32 v = 0x5e35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3870: push 0x5e34a4 */ { u32 v = 0x5e34a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3875: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3878: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e387a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e387c: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e3881u); f_005d80d4();
    /* 005e3881: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e3884: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e388b:; BB(0x005e388b);
    /* 005e388b: mov dword ptr [0xa8dc5c], eax */ W32((u32)(0xa8dc5cu), r_eax);
    /* 005e3890: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3897: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005e389e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e38a0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e38a5u); f_005caba4();
    /* 005e38a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e38a6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e38a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e38ab: je 0x5e38ee */ if (fZ) goto L_005e38ee;
L_005e38ad:; BB(0x005e38ad);
    /* 005e38ad: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 005e38b4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005e38bb: push 0x5e35d8 */ { u32 v = 0x5e35d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38c0: push 0x5e34cc */ { u32 v = 0x5e34ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e38c5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e38c8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e38ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38cc: call 0x5d80d4 */ r_esp -= 4; W32(r_esp, 0x5e38d1u); f_005d80d4();
    /* 005e38d1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e38d4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005e38db:; BB(0x005e38db);
    /* 005e38db: mov dword ptr [0xa8dc60], eax */ W32((u32)(0xa8dc60u), r_eax);
    /* 005e38e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e38e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e38ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005e38ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e38ed: ret  */ FN_RET(0x005e3678); r_esp += 4; return;
L_005e38ee:; BB(0x005e38ee);
    /* 005e38ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e38f0: jmp 0x5e38db */ goto L_005e38db;
L_005e38f2:; BB(0x005e38f2);
    /* 005e38f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e38f4: jmp 0x5e388b */ goto L_005e388b;
L_005e38f6:; BB(0x005e38f6);
    /* 005e38f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e38f8: jmp 0x5e3837 */ goto L_005e3837;
L_005e38fd:; BB(0x005e38fd);
    /* 005e38fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e38ff: jmp 0x5e37e3 */ goto L_005e37e3;
L_005e3904:; BB(0x005e3904);
    /* 005e3904: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e3906: jmp 0x5e378f */ goto L_005e378f;
L_005e390b:; BB(0x005e390b);
    /* 005e390b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e390d: jmp 0x5e373b */ goto L_005e373b;
L_005e3912:; BB(0x005e3912);
    /* 005e3912: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e3914: jmp 0x5e36e7 */ goto L_005e36e7;
}

void f_005e391c(void) /* sub_5E391C */
{
    FN_ENTER(0x005e391c);
    /* 005e391c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e391d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e391f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3921: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e3926u); f_008581c5();
    /* 005e3926: mov dword ptr [0xa8dc6c], eax */ W32((u32)(0xa8dc6cu), r_eax);
    /* 005e392b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e392d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e3932u); f_008581c5();
    /* 005e3932: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3935: mov dword ptr [0xa8dc70], eax */ W32((u32)(0xa8dc70u), r_eax);
    /* 005e393a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e393c: je 0x5e3a6a */ if (fZ) goto L_005e3a6a;
L_005e3942:; BB(0x005e3942);
    /* 005e3942: mov edx, dword ptr [0xa8dc6c] */ r_edx = R32((u32)(0xa8dc6cu));
    /* 005e3948: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e394a: je 0x5e3a6a */ if (fZ) goto L_005e3a6a;
L_005e3950:; BB(0x005e3950);
    /* 005e3950: mov dword ptr [eax], 0x10000 */ W32((u32)(r_eax), 0x10000u);
    /* 005e3956: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e395b: mov dword ptr [eax], 0x10010000 */ W32((u32)(r_eax), 0x10010000u);
    /* 005e3961: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005e3967: mov dword ptr [edx + 4], 0x210000 */ W32((u32)(r_edx+0x4u), 0x210000u);
    /* 005e396e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3973: mov dword ptr [eax + 4], 0x10210000 */ W32((u32)(r_eax+0x4u), 0x10210000u);
    /* 005e397a: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e397f: mov dword ptr [eax + 8], 0x410000 */ W32((u32)(r_eax+0x8u), 0x410000u);
    /* 005e3986: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e398b: mov dword ptr [eax + 8], 0x10410000 */ W32((u32)(r_eax+0x8u), 0x10410000u);
    /* 005e3992: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3997: mov dword ptr [eax + 0xc], 0x610000 */ W32((u32)(r_eax+0xcu), 0x610000u);
    /* 005e399e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e39a3: mov dword ptr [eax + 0xc], 0x10610000 */ W32((u32)(r_eax+0xcu), 0x10610000u);
    /* 005e39aa: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e39af: mov dword ptr [eax + 0x10], 0x810000 */ W32((u32)(r_eax+0x10u), 0x810000u);
    /* 005e39b6: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e39bb: mov dword ptr [eax + 0x10], 0x10810000 */ W32((u32)(r_eax+0x10u), 0x10810000u);
    /* 005e39c2: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e39c7: mov dword ptr [eax + 0x14], 0xa10000 */ W32((u32)(r_eax+0x14u), 0xa10000u);
    /* 005e39ce: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e39d3: mov dword ptr [eax + 0x14], 0x10a10000 */ W32((u32)(r_eax+0x14u), 0x10a10000u);
    /* 005e39da: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e39df: mov dword ptr [eax + 0x18], 0xc10000 */ W32((u32)(r_eax+0x18u), 0xc10000u);
    /* 005e39e6: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e39eb: mov dword ptr [eax + 0x18], 0x10c10000 */ W32((u32)(r_eax+0x18u), 0x10c10000u);
    /* 005e39f2: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e39f7: mov dword ptr [eax + 0x1c], 0xe10000 */ W32((u32)(r_eax+0x1cu), 0xe10000u);
    /* 005e39fe: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a03: mov dword ptr [eax + 0x1c], 0x10e10000 */ W32((u32)(r_eax+0x1cu), 0x10e10000u);
    /* 005e3a0a: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a0f: mov dword ptr [eax + 0x20], 0x1010000 */ W32((u32)(r_eax+0x20u), 0x1010000u);
    /* 005e3a16: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a1b: mov dword ptr [eax + 0x20], 0x11010000 */ W32((u32)(r_eax+0x20u), 0x11010000u);
    /* 005e3a22: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a27: mov dword ptr [eax + 0x24], 0x1210000 */ W32((u32)(r_eax+0x24u), 0x1210000u);
    /* 005e3a2e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a33: mov dword ptr [eax + 0x24], 0x11210000 */ W32((u32)(r_eax+0x24u), 0x11210000u);
    /* 005e3a3a: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a3f: mov dword ptr [eax + 0x28], 0x1410000 */ W32((u32)(r_eax+0x28u), 0x1410000u);
    /* 005e3a46: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a4b: mov dword ptr [eax + 0x28], 0x11410000 */ W32((u32)(r_eax+0x28u), 0x11410000u);
    /* 005e3a52: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a57: mov dword ptr [eax + 0x2c], 0x1610000 */ W32((u32)(r_eax+0x2cu), 0x1610000u);
    /* 005e3a5e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a63: mov dword ptr [eax + 0x2c], 0x11610000 */ W32((u32)(r_eax+0x2cu), 0x11610000u);
L_005e3a6a:; BB(0x005e3a6a);
    /* 005e3a6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3a6c: mov dword ptr [0xa8dc68], edx */ W32((u32)(0xa8dc68u), r_edx);
    /* 005e3a72: mov eax, ebx */ r_eax = r_ebx;
    /* 005e3a74: mov dword ptr [0xa8dc64], edx */ W32((u32)(0xa8dc64u), r_edx);
    /* 005e3a7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3a7b: ret  */ FN_RET(0x005e391c); r_esp += 4; return;
}

void f_005e3a20(void)
{
    FN_ENTER(0x005e3a20);
    /* 005e3a20: add dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005e3a22: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a27: mov dword ptr [eax + 0x24], 0x1210000 */ W32((u32)(r_eax+0x24u), 0x1210000u);
    /* 005e3a2e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a33: mov dword ptr [eax + 0x24], 0x11210000 */ W32((u32)(r_eax+0x24u), 0x11210000u);
    /* 005e3a3a: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a3f: mov dword ptr [eax + 0x28], 0x1410000 */ W32((u32)(r_eax+0x28u), 0x1410000u);
    /* 005e3a46: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a4b: mov dword ptr [eax + 0x28], 0x11410000 */ W32((u32)(r_eax+0x28u), 0x11410000u);
    /* 005e3a52: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3a57: mov dword ptr [eax + 0x2c], 0x1610000 */ W32((u32)(r_eax+0x2cu), 0x1610000u);
    /* 005e3a5e: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3a63: mov dword ptr [eax + 0x2c], 0x11610000 */ W32((u32)(r_eax+0x2cu), 0x11610000u);
    /* 005e3a6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3a6c: mov dword ptr [0xa8dc68], edx */ W32((u32)(0xa8dc68u), r_edx);
    /* 005e3a72: mov eax, ebx */ r_eax = r_ebx;
    /* 005e3a74: mov dword ptr [0xa8dc64], edx */ W32((u32)(0xa8dc64u), r_edx);
    /* 005e3a7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3a7b: ret  */ FN_RET(0x005e3a20); r_esp += 4; return;
}

void f_005e3a7c(void) /* sub_5E3A7C */
{
    FN_ENTER(0x005e3a7c);
    /* 005e3a7c: push dword ptr [0xa8dc70] */ { u32 v = R32((u32)(0xa8dc70u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3a82: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e3a87u); f_00857e98();
    /* 005e3a87: push dword ptr [0xa8dc6c] */ { u32 v = R32((u32)(0xa8dc6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3a8d: mov dword ptr [0xa8dc70], 0 */ W32((u32)(0xa8dc70u), 0x0u);
    /* 005e3a97: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e3a9cu); f_00857e98();
    /* 005e3a9c: mov dword ptr [0xa8dc6c], 0 */ W32((u32)(0xa8dc6cu), 0x0u);
    /* 005e3aa6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3aa9: ret  */ FN_RET(0x005e3a7c); r_esp += 4; return;
}

void f_005e3aac(void) /* sub_5E3AAC */
{
    FN_ENTER(0x005e3aac);
    /* 005e3aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3aad: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5e3ab2u); f_0080a640();
    /* 005e3ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3ab4: je 0x5e3acc */ if (fZ) goto L_005e3acc;
L_005e3ab6:; BB(0x005e3ab6);
    /* 005e3ab6: mov ecx, dword ptr [0xa8dc6c] */ r_ecx = R32((u32)(0xa8dc6cu));
    /* 005e3abc: movzx ebp, word ptr [esp + 8] */ r_ebp = (u32)R16((u32)(r_esp+0x8u));
    /* 005e3ac1: mov eax, dword ptr [ecx + ebp*4] */ r_eax = R32((u32)(r_ecx+r_ebp*4));
    /* 005e3ac4: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 005e3ac7: mov dword ptr [ecx + ebp*4], edx */ W32((u32)(r_ecx+r_ebp*4), r_edx);
    /* 005e3aca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3acb: ret  */ FN_RET(0x005e3aac); r_esp += 4; return;
L_005e3acc:; BB(0x005e3acc);
    /* 005e3acc: mov ecx, dword ptr [0xa8dc70] */ r_ecx = R32((u32)(0xa8dc70u));
    /* 005e3ad2: movzx ebp, word ptr [esp + 8] */ r_ebp = (u32)R16((u32)(r_esp+0x8u));
    /* 005e3ad7: mov eax, dword ptr [ecx + ebp*4] */ r_eax = R32((u32)(r_ecx+r_ebp*4));
    /* 005e3ada: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 005e3add: mov dword ptr [ecx + ebp*4], edx */ W32((u32)(r_ecx+r_ebp*4), r_edx);
    /* 005e3ae0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3ae1: ret  */ FN_RET(0x005e3aac); r_esp += 4; return;
}

void f_005e3ae4(void) /* sub_5E3AE4 */
{
    FN_ENTER(0x005e3ae4);
    /* 005e3ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ae5: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3ae8: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 005e3aec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e3aee: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e3af3: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005e3afb: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 005e3aff: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 005e3b03: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005e3b0b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005e3b10: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005e3b15: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005e3b1a: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 005e3b1e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5e3b23u); f_005d6a3c();
    /* 005e3b23: movzx edx, word ptr [esp + 0x30] */ r_edx = (u32)R16((u32)(r_esp+0x30u));
    /* 005e3b28: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 005e3b2c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005e3b30: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 005e3b34: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005e3b38: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005e3b3c: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 005e3b41: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005e3b46: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e3b49: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005e3b4d: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005e3b50: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e3b54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3b57: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005e3b5b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e3b5e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005e3b62: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e3b65: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e3b69: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e3b6c: call 0x5e3b84 */ r_esp -= 4; W32(r_esp, 0x5e3b71u); f_005e3b84();
    /* 005e3b71: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005e3b75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b76: call 0x5c7fcc */ r_esp -= 4; W32(r_esp, 0x5e3b7bu); f_005c7fcc();
    /* 005e3b7b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3b7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3b7f: ret  */ FN_RET(0x005e3ae4); r_esp += 4; return;
}

void f_005e3b80(void) /* sub_5E3B80 */
{
    FN_ENTER(0x005e3b80);
    /* 005e3b80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e3b84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b85: mov esi, eax */ r_esi = r_eax;
    /* 005e3b87: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5e3b8cu); f_0080a640();
    /* 005e3b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3b8e: jne 0x5e3bb9 */ if (!fZ) goto L_005e3bb9;
L_005e3b90:; BB(0x005e3b90);
    /* 005e3b90: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3b96: jle 0x5e3bb9 */ if ((fZ||fS!=fO)) goto L_005e3bb9;
L_005e3b98:; BB(0x005e3b98);
    /* 005e3b98: cmp esi, 0x2010000 */ {  u32 a = r_esi; u32 b = 0x2010000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3b9e: jge 0x5e3bb9 */ if ((fS==fO)) goto L_005e3bb9;
L_005e3ba0:; BB(0x005e3ba0);
    /* 005e3ba0: mov edx, esi */ r_edx = r_esi;
    /* 005e3ba2: sar edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005e3ba5: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 005e3ba8: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005e3bae: cmp esi, dword ptr [edx + ecx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3bb1: jl 0x5e3bb9 */ if ((fS!=fO)) goto L_005e3bb9;
L_005e3bb3:; BB(0x005e3bb3);
    /* 005e3bb3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3bb6: mov dword ptr [edx + ecx*4], esi */ W32((u32)(r_edx+r_ecx*4), r_esi);
L_005e3bb9:; BB(0x005e3bb9);
    /* 005e3bb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3bba: ret  */ FN_RET(0x005e3b80); r_esp += 4; return;
}

void f_005e3b84(void) /* sub_5E3B84 */
{
    FN_ENTER(0x005e3b84);
    /* 005e3b84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b85: mov esi, eax */ r_esi = r_eax;
    /* 005e3b87: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5e3b8cu); f_0080a640();
    /* 005e3b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3b8e: jne 0x5e3bb9 */ if (!fZ) goto L_005e3bb9;
L_005e3b90:; BB(0x005e3b90);
    /* 005e3b90: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3b96: jle 0x5e3bb9 */ if ((fZ||fS!=fO)) goto L_005e3bb9;
L_005e3b98:; BB(0x005e3b98);
    /* 005e3b98: cmp esi, 0x2010000 */ {  u32 a = r_esi; u32 b = 0x2010000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3b9e: jge 0x5e3bb9 */ if ((fS==fO)) goto L_005e3bb9;
L_005e3ba0:; BB(0x005e3ba0);
    /* 005e3ba0: mov edx, esi */ r_edx = r_esi;
    /* 005e3ba2: sar edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005e3ba5: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 005e3ba8: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005e3bae: cmp esi, dword ptr [edx + ecx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e3bb1: jl 0x5e3bb9 */ if ((fS!=fO)) goto L_005e3bb9;
L_005e3bb3:; BB(0x005e3bb3);
    /* 005e3bb3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3bb6: mov dword ptr [edx + ecx*4], esi */ W32((u32)(r_edx+r_ecx*4), r_esi);
L_005e3bb9:; BB(0x005e3bb9);
    /* 005e3bb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3bba: ret  */ FN_RET(0x005e3b84); r_esp += 4; return;
}

void f_005e3bbc(void) /* sub_5E3BBC */
{
    FN_ENTER(0x005e3bbc);
    /* 005e3bbc: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 005e3bc1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bc6: call 0x5c82c8 */ r_esp -= 4; W32(r_esp, 0x5e3bcbu); f_005c82c8();
    /* 005e3bcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3bce: ret  */ FN_RET(0x005e3bbc); r_esp += 4; return;
}

void f_005e3bd0(void) /* sub_5E3BD0 */
{
    FN_ENTER(0x005e3bd0);
    /* 005e3bd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bd4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005e3bd8: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 005e3bdb: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005e3bde: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5e3be3u); f_0061cdb0();
    /* 005e3be3: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005e3be7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3be9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3beb: lea esi, [ebx + 0x14] */ r_esi = (u32)(r_ebx+0x14u);
    /* 005e3bee: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3bf1: jne 0x5e3bfe */ if (!fZ) goto L_005e3bfe;
L_005e3bf3:; BB(0x005e3bf3);
    /* 005e3bf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bf5: mov ecx, esi */ r_ecx = r_esi;
    /* 005e3bf7: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5e3bfcu); f_00779df0();
    /* 005e3bfc: jmp 0x5e3c07 */ goto L_005e3c07;
L_005e3bfe:; BB(0x005e3bfe);
    /* 005e3bfe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c00: mov ecx, esi */ r_ecx = r_esi;
    /* 005e3c02: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5e3c07u); f_00779df0();
L_005e3c07:; BB(0x005e3c07);
    /* 005e3c07: mov ecx, esi */ r_ecx = r_esi;
    /* 005e3c09: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5e3c0eu); f_0061cdb0();
    /* 005e3c0e: movsx eax, byte ptr [ebx + 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x5u));
    /* 005e3c12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3c15: je 0x5e3c4b */ if (fZ) goto L_005e3c4b;
L_005e3c17:; BB(0x005e3c17);
    /* 005e3c17: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 005e3c1d: movsx ecx, word ptr [ebx + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 005e3c21: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 005e3c25: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3c2b: jg 0x5e3c3b */ if ((!fZ&&fS==fO)) goto L_005e3c3b;
L_005e3c2d:; BB(0x005e3c2d);
    /* 005e3c2d: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 005e3c31: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005e3c36: mov word ptr [edx + ecx*4 + 2], ax */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_eax);
L_005e3c3b:; BB(0x005e3c3b);
    /* 005e3c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c3e: call 0x5c9998 */ r_esp -= 4; W32(r_esp, 0x5e3c43u); f_005c9998();
    /* 005e3c43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3c46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3c48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e3c49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e3c4a: ret  */ FN_RET(0x005e3bd0); r_esp += 4; return;
L_005e3c4b:; BB(0x005e3c4b);
    /* 005e3c4b: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 005e3c51: movsx eax, word ptr [ebx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 005e3c55: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e3c58: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3c5a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005e3c5d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e3c5f: mov ecx, dword ptr [edx + edi] */ r_ecx = R32((u32)(r_edx+r_edi));
    /* 005e3c62: mov ebx, dword ptr [edx + edi + 4] */ r_ebx = R32((u32)(r_edx+r_edi+0x4u));
    /* 005e3c66: or ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005e3c6c: mov esi, dword ptr [edx + edi + 8] */ r_esi = R32((u32)(r_edx+r_edi+0x8u));
    /* 005e3c70: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3c75: jg 0x5e3c3b */ if ((!fZ&&fS==fO)) goto L_005e3c3b;
L_005e3c77:; BB(0x005e3c77);
    /* 005e3c77: mov dword ptr [edx + edi], ecx */ W32((u32)(r_edx+r_edi), r_ecx);
    /* 005e3c7a: mov dword ptr [edx + edi + 4], ebx */ W32((u32)(r_edx+r_edi+0x4u), r_ebx);
    /* 005e3c7e: mov dword ptr [edx + edi + 8], esi */ W32((u32)(r_edx+r_edi+0x8u), r_esi);
    /* 005e3c82: jmp 0x5e3c3b */ goto L_005e3c3b;
}

void f_005e3c84(void)
{
    FN_ENTER(0x005e3c84);
    /* 005e3c84: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e3c88: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3c8b: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3c8e: call 0x5c82c8 */ r_esp -= 4; W32(r_esp, 0x5e3c93u); f_005c82c8();
    /* 005e3c93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e3c96: ret  */ FN_RET(0x005e3c84); r_esp += 4; return;
}

void f_005e3c98(void) /* sub_5E3C98 */
{
    FN_ENTER(0x005e3c98);
    /* 005e3c98: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005e3c9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3ca0: je 0x5e3dcf */ if (fZ) goto L_005e3dcf;
L_005e3ca6:; BB(0x005e3ca6);
    /* 005e3ca6: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3cad: je 0x5e3dcf */ if (fZ) goto L_005e3dcf;
L_005e3cb3:; BB(0x005e3cb3);
    /* 005e3cb3: mov dword ptr [edx], 0x10000 */ W32((u32)(r_edx), 0x10000u);
    /* 005e3cb9: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3cbe: mov dword ptr [eax], 0x10010000 */ W32((u32)(r_eax), 0x10010000u);
    /* 005e3cc4: mov edx, dword ptr [0xa8dc70] */ r_edx = R32((u32)(0xa8dc70u));
    /* 005e3cca: mov dword ptr [edx + 4], 0x210000 */ W32((u32)(r_edx+0x4u), 0x210000u);
    /* 005e3cd1: mov ecx, dword ptr [0xa8dc6c] */ r_ecx = R32((u32)(0xa8dc6cu));
    /* 005e3cd7: mov dword ptr [ecx + 4], 0x10210000 */ W32((u32)(r_ecx+0x4u), 0x10210000u);
    /* 005e3cde: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3ce3: mov dword ptr [eax + 8], 0x410000 */ W32((u32)(r_eax+0x8u), 0x410000u);
    /* 005e3cea: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3cef: mov dword ptr [eax + 8], 0x10410000 */ W32((u32)(r_eax+0x8u), 0x10410000u);
    /* 005e3cf6: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3cfb: mov dword ptr [eax + 0xc], 0x610000 */ W32((u32)(r_eax+0xcu), 0x610000u);
    /* 005e3d02: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d07: mov dword ptr [eax + 0xc], 0x10610000 */ W32((u32)(r_eax+0xcu), 0x10610000u);
    /* 005e3d0e: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d13: mov dword ptr [eax + 0x10], 0x810000 */ W32((u32)(r_eax+0x10u), 0x810000u);
    /* 005e3d1a: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d1f: mov dword ptr [eax + 0x10], 0x10810000 */ W32((u32)(r_eax+0x10u), 0x10810000u);
    /* 005e3d26: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d2b: mov dword ptr [eax + 0x14], 0xa10000 */ W32((u32)(r_eax+0x14u), 0xa10000u);
    /* 005e3d32: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d37: mov dword ptr [eax + 0x14], 0x10a10000 */ W32((u32)(r_eax+0x14u), 0x10a10000u);
    /* 005e3d3e: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d43: mov dword ptr [eax + 0x18], 0xc10000 */ W32((u32)(r_eax+0x18u), 0xc10000u);
    /* 005e3d4a: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d4f: mov dword ptr [eax + 0x18], 0x10c10000 */ W32((u32)(r_eax+0x18u), 0x10c10000u);
    /* 005e3d56: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d5b: mov dword ptr [eax + 0x1c], 0xe10000 */ W32((u32)(r_eax+0x1cu), 0xe10000u);
    /* 005e3d62: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d67: mov dword ptr [eax + 0x1c], 0x10e10000 */ W32((u32)(r_eax+0x1cu), 0x10e10000u);
    /* 005e3d6e: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d73: mov dword ptr [eax + 0x20], 0x1010000 */ W32((u32)(r_eax+0x20u), 0x1010000u);
    /* 005e3d7a: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d7f: mov dword ptr [eax + 0x20], 0x11010000 */ W32((u32)(r_eax+0x20u), 0x11010000u);
    /* 005e3d86: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3d8b: mov dword ptr [eax + 0x24], 0x1210000 */ W32((u32)(r_eax+0x24u), 0x1210000u);
    /* 005e3d92: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3d97: mov dword ptr [eax + 0x24], 0x11210000 */ W32((u32)(r_eax+0x24u), 0x11210000u);
    /* 005e3d9e: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3da3: mov dword ptr [eax + 0x28], 0x1410000 */ W32((u32)(r_eax+0x28u), 0x1410000u);
    /* 005e3daa: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3daf: mov dword ptr [eax + 0x28], 0x11410000 */ W32((u32)(r_eax+0x28u), 0x11410000u);
    /* 005e3db6: mov eax, dword ptr [0xa8dc70] */ r_eax = R32((u32)(0xa8dc70u));
    /* 005e3dbb: mov dword ptr [eax + 0x2c], 0x1610000 */ W32((u32)(r_eax+0x2cu), 0x1610000u);
    /* 005e3dc2: mov eax, dword ptr [0xa8dc6c] */ r_eax = R32((u32)(0xa8dc6cu));
    /* 005e3dc7: mov dword ptr [eax + 0x2c], 0x11610000 */ W32((u32)(r_eax+0x2cu), 0x11610000u);
    /* 005e3dce: ret  */ FN_RET(0x005e3c98); r_esp += 4; return;
L_005e3dcf:; BB(0x005e3dcf);
    /* 005e3dcf: ret  */ FN_RET(0x005e3c98); r_esp += 4; return;
}

void f_005e3dd0(void) /* sub_5E3DD0 */
{
    FN_ENTER(0x005e3dd0);
    /* 005e3dd0: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5e3dd5u); f_007a61a4();
    /* 005e3dd5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3dd8: je 0x5e3dfa */ if (fZ) goto L_005e3dfa;
L_005e3dda:; BB(0x005e3dda);
    /* 005e3dda: mov eax, dword ptr [0xa8dc64] */ r_eax = R32((u32)(0xa8dc64u));
    /* 005e3ddf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3de2: je 0x5e3def */ if (fZ) goto L_005e3def;
L_005e3de4:; BB(0x005e3de4);
    /* 005e3de4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3de9: or eax, 0x6010000 */ {  u32 a = r_eax; u32 b = 0x6010000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3dee: ret  */ FN_RET(0x005e3dd0); r_esp += 4; return;
L_005e3def:; BB(0x005e3def);
    /* 005e3def: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3df4: or eax, 0x6020000 */ {  u32 a = r_eax; u32 b = 0x6020000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3df9: ret  */ FN_RET(0x005e3dd0); r_esp += 4; return;
L_005e3dfa:; BB(0x005e3dfa);
    /* 005e3dfa: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 005e3dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e01: je 0x5e3e0e */ if (fZ) goto L_005e3e0e;
L_005e3e03:; BB(0x005e3e03);
    /* 005e3e03: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3e08: or eax, 0x6030000 */ {  u32 a = r_eax; u32 b = 0x6030000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3e0d: ret  */ FN_RET(0x005e3dd0); r_esp += 4; return;
L_005e3e0e:; BB(0x005e3e0e);
    /* 005e3e0e: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e3e13: or eax, 0x6010000 */ {  u32 a = r_eax; u32 b = 0x6010000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3e18: ret  */ FN_RET(0x005e3dd0); r_esp += 4; return;
}

void f_005e3e1c(void) /* sub_5E3E1C */
{
    FN_ENTER(0x005e3e1c);
    /* 005e3e1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e3e1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e3e21: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5e3e26u); f_005e3e40();
    /* 005e3e26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e3e2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3e2c: jne 0x5e3e32 */ if (!fZ) goto L_005e3e32;
L_005e3e2e:; BB(0x005e3e2e);
    /* 005e3e2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3e2f: ret 4 */ FN_RET(0x005e3e1c); r_esp += 8; return;
L_005e3e32:; BB(0x005e3e32);
    /* 005e3e32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e3e38u); f_005c2f74();
    /* 005e3e38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3e39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e3e3a: ret 4 */ FN_RET(0x005e3e1c); r_esp += 8; return;
}

void f_005e3e40(void) /* sub_5E3E40 */
{
    FN_ENTER(0x005e3e40);
    /* 005e3e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e45: push 0x8db8f0 */ { u32 v = 0x8db8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3e58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e3e5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e3e61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e3e64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e3e67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e3e6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3e6d: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005e3e70: mov dword ptr [ecx], 0xb0ff58 */ W32((u32)(r_ecx), 0xb0ff58u);
    /* 005e3e76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3e78: je 0x5e3e91 */ if (fZ) goto L_005e3e91;
L_005e3e7a:; BB(0x005e3e7a);
    /* 005e3e7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3e7d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005e3e81: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e3e86: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005e3e8a: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_005e3e91:; BB(0x005e3e91);
    /* 005e3e91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3e98: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e3e9du); f_008171e8();
    /* 005e3e9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3ea0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e3ea7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3ea9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3eaa: ret  */ FN_RET(0x005e3e40); r_esp += 4; return;
}

void f_005e3eac(void) /* sub_5E3EAC */
{
    FN_ENTER(0x005e3eac);
    /* 005e3eac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ead: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3eaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3eb1: push 0x8db90c */ { u32 v = 0x8db90cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3eb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ebd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3ec4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3ec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e3eca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e3ecd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e3ed0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e3ed3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e3ed6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e3ed9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3ee0: mov eax, ecx */ r_eax = r_ecx;
    /* 005e3ee2: mov dword ptr [eax], 0xb0ff6c */ W32((u32)(r_eax), 0xb0ff6cu);
    /* 005e3ee8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005e3eea:; BB(0x005e3eea);
    /* 005e3eea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3eed: push dword ptr [eax + ebx*4 + 0x58] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e3ef1: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e3ef6u); f_005cdcc0();
    /* 005e3ef6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3ef7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e3efa: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e3efd: jl 0x5e3eea */ if ((fS!=fO)) goto L_005e3eea;
L_005e3eff:; BB(0x005e3eff);
    /* 005e3eff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3f06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3f09: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5e3f0eu); f_005e3e40();
    /* 005e3f0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3f11: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3f13: jne 0x5e3f2e */ if (!fZ) goto L_005e3f2e;
L_005e3f15:; BB(0x005e3f15);
    /* 005e3f15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e3f18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e3f1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e3f1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3f21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e3f28: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3f2b: ret 4 */ FN_RET(0x005e3eac); r_esp += 8; return;
L_005e3f2e:; BB(0x005e3f2e);
    /* 005e3f2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f32: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e3f37u); f_005c2f74();
    /* 005e3f37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3f38: jmp 0x5e3f15 */ goto L_005e3f15;
}

void f_005e3f3c(void) /* sub_5E3F3C */
{
    FN_ENTER(0x005e3f3c);
    /* 005e3f3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3f3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f41: push 0x8db940 */ { u32 v = 0x8db940u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3f54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3f57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e3f5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e3f5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e3f60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e3f63: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e3f66: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e3f69: mov eax, ecx */ r_eax = r_ecx;
    /* 005e3f6b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e3f6e: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005e3f74: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3f7b: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5e3f80u); f_005e3e40();
    /* 005e3f80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3f83: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3f85: jne 0x5e3f97 */ if (!fZ) goto L_005e3f97;
L_005e3f87:; BB(0x005e3f87);
    /* 005e3f87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3f8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e3f91: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3f94: ret 4 */ FN_RET(0x005e3f3c); r_esp += 8; return;
L_005e3f97:; BB(0x005e3f97);
    /* 005e3f97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e3f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3f9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e3fa0u); f_005c2f74();
    /* 005e3fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e3fa1: jmp 0x5e3f87 */ goto L_005e3f87;
}

void f_005e3fa4(void) /* sub_5E3FA4 */
{
    FN_ENTER(0x005e3fa4);
    /* 005e3fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fa5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3fa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fa9: push 0x8db974 */ { u32 v = 0x8db974u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e3fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3fb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e3fbc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3fbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e3fc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e3fc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e3fc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e3fcb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e3fce: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e3fd1: mov eax, ecx */ r_eax = r_ecx;
    /* 005e3fd3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e3fd6: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005e3fdc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e3fe3: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5e3fe8u); f_005e3e40();
    /* 005e3fe8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e3feb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e3fed: jne 0x5e3fff */ if (!fZ) goto L_005e3fff;
L_005e3fef:; BB(0x005e3fef);
    /* 005e3fef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3ff2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e3ff9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3ffc: ret 4 */ FN_RET(0x005e3fa4); r_esp += 8; return;
L_005e3fff:; BB(0x005e3fff);
    /* 005e3fff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4003: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e4008u); f_005c2f74();
    /* 005e4008: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4009: jmp 0x5e3fef */ goto L_005e3fef;
}

