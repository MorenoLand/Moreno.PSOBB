#include "protos.h"

void f_00858009(void) /* _wcslen */
{
    FN_ENTER(0x00858009);
    /* 00858009: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0085800d:; BB(0x0085800d);
    /* 0085800d: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00858010: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00858011: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00858012: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00858015: jne 0x85800d */ if (!fZ) goto L_0085800d;
L_00858017:; BB(0x00858017);
    /* 00858017: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085801b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; } }
    /* 0085801d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085801e: ret  */ FN_RET(0x00858009); r_esp += 4; return;
}

void f_0085805d(void) /* __validdrive */
{
    FN_ENTER(0x0085805d);
    /* 0085805d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085805e: mov ebp, esp */ r_ebp = r_esp;
    /* 00858060: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858065: je 0x85808b */ if (fZ) goto L_0085808b;
L_00858067:; BB(0x00858067);
    /* 00858067: add al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00858069: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 0085806c: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0085806f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858070: mov byte ptr [ebp + 9], 0x3a */ W8((u32)(r_ebp+0x9u), 0x3au);
    /* 00858074: mov byte ptr [ebp + 0xa], 0x5c */ W8((u32)(r_ebp+0xau), 0x5cu);
    /* 00858078: mov byte ptr [ebp + 0xb], 0 */ W8((u32)(r_ebp+0xbu), 0x0u);
    /* 0085807c: call dword ptr [0x8f81cc] */ { u32 t = R32((u32)(0x8f81ccu)); r_esp -= 4; W32(r_esp, 0x858082u); call_ind(t); }
    /* 00858082: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858084: je 0x858090 */ if (fZ) goto L_00858090;
L_00858086:; BB(0x00858086);
    /* 00858086: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858089: je 0x858090 */ if (fZ) goto L_00858090;
L_0085808b:; BB(0x0085808b);
    /* 0085808b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085808d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085808e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085808f: ret  */ FN_RET(0x0085805d); r_esp += 4; return;
L_00858090:; BB(0x00858090);
    /* 00858090: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00858093: ret  */ FN_RET(0x0085805d); r_esp += 4; return;
}

void f_0085817f(void) /* __getcwd */
{
    FN_ENTER(0x0085817f);
    /* 0085817f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00858181: push 0x997e20 */ { u32 v = 0x997e20u; r_esp -= 4; W32(r_esp, v); }
    /* 00858186: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85818bu); f_0085e5ac();
    /* 0085818b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0085818d: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x858192u); f_0085e57a();
    /* 00858192: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858193: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00858197: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085819a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085819d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085819f: call 0x858094 */ r_esp -= 4; W32(r_esp, 0x8581a4u); f_00858094();
    /* 008581a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008581a7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008581aa: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008581ae: call 0x8581bc */ r_esp -= 4; W32(r_esp, 0x8581b3u); f_008581bc();
    /* 008581b3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008581b6: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8581bbu); f_0085e5e7();
    /* 008581bb: ret  */ FN_RET(0x0085817f); r_esp += 4; return;
}

void f_008581bc(void)
{
    FN_ENTER(0x008581bc);
    /* 008581bc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008581be: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8581c3u); f_0085e4c5();
    /* 008581c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008581c4: ret  */ FN_RET(0x008581bc); r_esp += 4; return;
}

void f_008581d3(void) /* _isalpha */
{
    FN_ENTER(0x008581d3);
    /* 008581d3: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8581d8u); f_0085c583();
    /* 008581d8: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 008581db: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008581e1: je 0x8581e8 */ if (fZ) goto L_008581e8;
L_008581e3:; BB(0x008581e3);
    /* 008581e3: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x8581e8u); f_0085daca();
L_008581e8:; BB(0x008581e8);
    /* 008581e8: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008581ec: jle 0x858201 */ if ((fZ||fS!=fO)) goto L_00858201;
L_008581ee:; BB(0x008581ee);
    /* 008581ee: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 008581f3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008581f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008581f8: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x8581fdu); f_0085e5f8();
    /* 008581fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858200: ret  */ FN_RET(0x008581d3); r_esp += 4; return;
L_00858201:; BB(0x00858201);
    /* 00858201: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00858204: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00858208: movzx eax, word ptr [eax + ecx*2] */ r_eax = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 0085820c: and eax, 0x103 */ {  u32 a = r_eax; u32 b = 0x103u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858211: ret  */ FN_RET(0x008581d3); r_esp += 4; return;
}

void f_00858212(void) /* _isupper */
{
    FN_ENTER(0x00858212);
    /* 00858212: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858217u); f_0085c583();
    /* 00858217: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0085821a: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858220: je 0x858227 */ if (fZ) goto L_00858227;
L_00858222:; BB(0x00858222);
    /* 00858222: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x858227u); f_0085daca();
L_00858227:; BB(0x00858227);
    /* 00858227: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085822b: jle 0x85823d */ if ((fZ||fS!=fO)) goto L_0085823d;
L_0085822d:; BB(0x0085822d);
    /* 0085822d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085822f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858234: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x858239u); f_0085e5f8();
    /* 00858239: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085823c: ret  */ FN_RET(0x00858212); r_esp += 4; return;
L_0085823d:; BB(0x0085823d);
    /* 0085823d: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00858240: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00858244: movzx eax, byte ptr [eax + ecx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ecx*2));
    /* 00858248: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085824b: ret  */ FN_RET(0x00858212); r_esp += 4; return;
}

void f_0085824c(void) /* _islower */
{
    FN_ENTER(0x0085824c);
    /* 0085824c: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858251u); f_0085c583();
    /* 00858251: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858254: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085825a: je 0x858261 */ if (fZ) goto L_00858261;
L_0085825c:; BB(0x0085825c);
    /* 0085825c: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x858261u); f_0085daca();
L_00858261:; BB(0x00858261);
    /* 00858261: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858265: jle 0x858277 */ if ((fZ||fS!=fO)) goto L_00858277;
L_00858267:; BB(0x00858267);
    /* 00858267: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00858269: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085826d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085826e: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x858273u); f_0085e5f8();
    /* 00858273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858276: ret  */ FN_RET(0x0085824c); r_esp += 4; return;
L_00858277:; BB(0x00858277);
    /* 00858277: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0085827a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085827e: movzx eax, byte ptr [eax + ecx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ecx*2));
    /* 00858282: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858285: ret  */ FN_RET(0x0085824c); r_esp += 4; return;
}

void f_00858286(void) /* _isdigit */
{
    FN_ENTER(0x00858286);
    /* 00858286: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85828bu); f_0085c583();
    /* 0085828b: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0085828e: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858294: je 0x85829b */ if (fZ) goto L_0085829b;
L_00858296:; BB(0x00858296);
    /* 00858296: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85829bu); f_0085daca();
L_0085829b:; BB(0x0085829b);
    /* 0085829b: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085829f: jle 0x8582b1 */ if ((fZ||fS!=fO)) goto L_008582b1;
L_008582a1:; BB(0x008582a1);
    /* 008582a1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008582a3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008582a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008582a8: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x8582adu); f_0085e5f8();
    /* 008582ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008582b0: ret  */ FN_RET(0x00858286); r_esp += 4; return;
L_008582b1:; BB(0x008582b1);
    /* 008582b1: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 008582b4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008582b8: movzx eax, byte ptr [eax + ecx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ecx*2));
    /* 008582bc: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008582bf: ret  */ FN_RET(0x00858286); r_esp += 4; return;
}

void f_008582c0(void) /* _isxdigit */
{
    FN_ENTER(0x008582c0);
    /* 008582c0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8582c5u); f_0085c583();
    /* 008582c5: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 008582c8: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008582ce: je 0x8582d5 */ if (fZ) goto L_008582d5;
L_008582d0:; BB(0x008582d0);
    /* 008582d0: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x8582d5u); f_0085daca();
L_008582d5:; BB(0x008582d5);
    /* 008582d5: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008582d9: jle 0x8582ee */ if ((fZ||fS!=fO)) goto L_008582ee;
L_008582db:; BB(0x008582db);
    /* 008582db: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008582e0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008582e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008582e5: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x8582eau); f_0085e5f8();
    /* 008582ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008582ed: ret  */ FN_RET(0x008582c0); r_esp += 4; return;
L_008582ee:; BB(0x008582ee);
    /* 008582ee: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 008582f1: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008582f5: movzx eax, byte ptr [eax + ecx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ecx*2));
    /* 008582f9: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008582fe: ret  */ FN_RET(0x008582c0); r_esp += 4; return;
}

void f_008582ff(void) /* _isspace */
{
    FN_ENTER(0x008582ff);
    /* 008582ff: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858304u); f_0085c583();
    /* 00858304: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858307: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085830d: je 0x858314 */ if (fZ) goto L_00858314;
L_0085830f:; BB(0x0085830f);
    /* 0085830f: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x858314u); f_0085daca();
L_00858314:; BB(0x00858314);
    /* 00858314: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858318: jle 0x85832a */ if ((fZ||fS!=fO)) goto L_0085832a;
L_0085831a:; BB(0x0085831a);
    /* 0085831a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085831c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858321: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x858326u); f_0085e5f8();
    /* 00858326: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858329: ret  */ FN_RET(0x008582ff); r_esp += 4; return;
L_0085832a:; BB(0x0085832a);
    /* 0085832a: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0085832d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00858331: movzx eax, byte ptr [eax + ecx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ecx*2));
    /* 00858335: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858338: ret  */ FN_RET(0x008582ff); r_esp += 4; return;
}

void f_00858339(void) /* _isalnum */
{
    FN_ENTER(0x00858339);
    /* 00858339: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85833eu); f_0085c583();
    /* 0085833e: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858341: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858347: je 0x85834e */ if (fZ) goto L_0085834e;
L_00858349:; BB(0x00858349);
    /* 00858349: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85834eu); f_0085daca();
L_0085834e:; BB(0x0085834e);
    /* 0085834e: cmp dword ptr [eax + 0x28], 1 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858352: jle 0x858367 */ if ((fZ||fS!=fO)) goto L_00858367;
L_00858354:; BB(0x00858354);
    /* 00858354: push 0x107 */ { u32 v = 0x107u; r_esp -= 4; W32(r_esp, v); }
    /* 00858359: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085835d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085835e: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x858363u); f_0085e5f8();
    /* 00858363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858366: ret  */ FN_RET(0x00858339); r_esp += 4; return;
L_00858367:; BB(0x00858367);
    /* 00858367: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0085836a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085836e: movzx eax, word ptr [eax + ecx*2] */ r_eax = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 00858372: and eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858377: ret  */ FN_RET(0x00858339); r_esp += 4; return;
}

void f_00858378(void) /* __purecall */
{
    FN_ENTER(0x00858378);
    /* 00858378: mov eax, dword ptr [0xae7a08] */ r_eax = R32((u32)(0xae7a08u));
    /* 0085837d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085837f: je 0x858383 */ if (fZ) goto L_00858383;
L_00858381:; BB(0x00858381);
    /* 00858381: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x858383u); call_ind(t); }
L_00858383:; BB(0x00858383);
    /* 00858383: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00858385: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85838au); f_0085aaf3();
    /* 0085838a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085838b: ret  */ FN_RET(0x00858378); r_esp += 4; return;
}

void f_0085838c(void) /* _wcstok */
{
    FN_ENTER(0x0085838c);
    /* 0085838c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085838d: mov ebp, esp */ r_ebp = r_esp;
    /* 0085838f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858391: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858392: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858393: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858398u); f_0085c583();
    /* 00858398: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085839b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085839d: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085839f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008583a2: jne 0x8583a7 */ if (!fZ) goto L_008583a7;
L_008583a4:; BB(0x008583a4);
    /* 008583a4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
L_008583a7:; BB(0x008583a7);
    /* 008583a7: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008583aa: cmp dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583ad: je 0x8583dd */ if (fZ) goto L_008583dd;
L_008583af:; BB(0x008583af);
    /* 008583af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008583b2: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
L_008583b5:; BB(0x008583b5);
    /* 008583b5: cmp ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583b8: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008583bb: je 0x8583ce */ if (fZ) goto L_008583ce;
L_008583bd:; BB(0x008583bd);
    /* 008583bd: mov edi, eax */ r_edi = r_eax;
L_008583bf:; BB(0x008583bf);
    /* 008583bf: cmp di, dx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583c2: je 0x8583ce */ if (fZ) goto L_008583ce;
L_008583c4:; BB(0x008583c4);
    /* 008583c4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008583c5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008583c6: mov di, word ptr [esi] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008583c9: cmp di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583cc: jne 0x8583bf */ if (!fZ) goto L_008583bf;
L_008583ce:; BB(0x008583ce);
    /* 008583ce: cmp word ptr [esi], bx */ {  u32 a = R16((u32)(r_esi)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583d1: je 0x8583dd */ if (fZ) goto L_008583dd;
L_008583d3:; BB(0x008583d3);
    /* 008583d3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008583d4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008583d5: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008583d8: cmp dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583db: jne 0x8583b5 */ if (!fZ) goto L_008583b5;
L_008583dd:; BB(0x008583dd);
    /* 008583dd: cmp word ptr [ecx], bx */ {  u32 a = R16((u32)(r_ecx)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583e0: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008583e3: je 0x85841a */ if (fZ) goto L_0085841a;
L_008583e5:; BB(0x008583e5);
    /* 008583e5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008583e8: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
L_008583eb:; BB(0x008583eb);
    /* 008583eb: cmp ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583ee: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008583f1: je 0x858407 */ if (fZ) goto L_00858407;
L_008583f3:; BB(0x008583f3);
    /* 008583f3: mov di, word ptr [ecx] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008583f6: mov edx, eax */ r_edx = r_eax;
L_008583f8:; BB(0x008583f8);
    /* 008583f8: cmp dx, di */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008583fb: je 0x858407 */ if (fZ) goto L_00858407;
L_008583fd:; BB(0x008583fd);
    /* 008583fd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008583fe: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008583ff: mov dx, word ptr [esi] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 00858402: cmp dx, bx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00858405: jne 0x8583f8 */ if (!fZ) goto L_008583f8;
L_00858407:; BB(0x00858407);
    /* 00858407: cmp word ptr [esi], bx */ {  u32 a = R16((u32)(r_esi)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085840a: jne 0x858415 */ if (!fZ) goto L_00858415;
L_0085840c:; BB(0x0085840c);
    /* 0085840c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085840d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085840e: cmp word ptr [ecx], bx */ {  u32 a = R16((u32)(r_ecx)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00858411: jne 0x8583eb */ if (!fZ) goto L_008583eb;
L_00858413:; BB(0x00858413);
    /* 00858413: jmp 0x85841a */ goto L_0085841a;
L_00858415:; BB(0x00858415);
    /* 00858415: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 00858418: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858419: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0085841a:; BB(0x0085841a);
    /* 0085841a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085841d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00858420: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858423: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00858425: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00858427: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858428: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0085842a: and eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085842d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085842e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085842f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858430: ret  */ FN_RET(0x0085838c); r_esp += 4; return;
}

void f_00858431(void) /* _swscanf */
{
    FN_ENTER(0x00858431);
    /* 00858431: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858432: mov ebp, esp */ r_ebp = r_esp;
    /* 00858434: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00858437: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085843a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085843b: mov dword ptr [ebp - 0x14], 0x49 */ W32((u32)(r_ebp+0xffffffecu), 0x49u);
    /* 00858442: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00858445: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00858448: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x85844du); f_00858009();
    /* 0085844d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085844f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00858452: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 00858455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858456: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858459: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0085845c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085845d: call 0x85e6cf */ r_esp -= 4; W32(r_esp, 0x858462u); f_0085e6cf();
    /* 00858462: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858465: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858466: ret  */ FN_RET(0x00858431); r_esp += 4; return;
}

void f_00858618(void) /* _wcstombs */
{
    FN_ENTER(0x00858618);
    /* 00858618: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85861du); f_0085c583();
    /* 0085861d: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858620: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858626: je 0x85862d */ if (fZ) goto L_0085862d;
L_00858628:; BB(0x00858628);
    /* 00858628: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85862du); f_0085daca();
L_0085862d:; BB(0x0085862d);
    /* 0085862d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858631: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858635: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085863a: call 0x858467 */ r_esp -= 4; W32(r_esp, 0x85863fu); f_00858467();
    /* 0085863f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858642: ret  */ FN_RET(0x00858618); r_esp += 4; return;
}

void f_00858643(void) /* _wcsncmp */
{
    FN_ENTER(0x00858643);
    /* 00858643: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858644: mov ebp, esp */ r_ebp = r_esp;
    /* 00858646: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085864a: jne 0x858650 */ if (!fZ) goto L_00858650;
L_0085864c:; BB(0x0085864c);
    /* 0085864c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085864e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085864f: ret  */ FN_RET(0x00858643); r_esp += 4; return;
L_00858650:; BB(0x00858650);
    /* 00858650: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00858653: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_00858656:; BB(0x00858656);
    /* 00858656: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00858659: je 0x85866e */ if (fZ) goto L_0085866e;
L_0085865b:; BB(0x0085865b);
    /* 0085865b: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0085865e: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00858661: je 0x85866e */ if (fZ) goto L_0085866e;
L_00858663:; BB(0x00858663);
    /* 00858663: cmp ax, word ptr [edx] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00858666: jne 0x85866e */ if (!fZ) goto L_0085866e;
L_00858668:; BB(0x00858668);
    /* 00858668: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858669: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085866a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085866b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085866c: jmp 0x858656 */ goto L_00858656;
L_0085866e:; BB(0x0085866e);
    /* 0085866e: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 00858671: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 00858674: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00858677: ret  */ FN_RET(0x00858643); r_esp += 4; return;
}

void f_008586a7(void)
{
    FN_ENTER(0x008586a7);
    /* 008586a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008586aa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008586ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008586b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008586b2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008586b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008586b8: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008586be: je 0x8586d0 */ if (fZ) goto L_008586d0;
L_008586c0:; BB(0x008586c0);
    /* 008586c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 008586c7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008586ca: ret  */ FN_RET(0x008586a7); r_esp += 4; return;
L_008586d0:; BB(0x008586d0);
    /* 008586d0: call 0x85c859 */ r_esp -= 4; W32(r_esp, 0x8586d5u); f_0085c859();
    /* 008586d5: int3  */ UNSUP(0x008586d5, "int3");
}

void f_008586cb(void)
{
    FN_ENTER(0x008586cb);
    goto L_008586cb;
L_0085869b:; BB(0x0085869b);
    /* 0085869b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085869f: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8586a4u); f_0085e5e7();
    /* 008586a4: ret 0x10 */ FN_RET(0x008586cb); r_esp += 20; return;
L_008586cb:; BB(0x008586cb);
    /* 008586cb: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008586ce: jmp 0x85869b */ goto L_0085869b;
}

void f_0085871e(void)
{
    FN_ENTER(0x0085871e);
    /* 0085871e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858722: jne 0x858735 */ if (!fZ) goto L_00858735;
L_00858724:; BB(0x00858724);
    /* 00858724: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858727: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085872a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085872d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858730: call 0x858678 */ r_esp -= 4; W32(r_esp, 0x858735u); f_00858678();
L_00858735:; BB(0x00858735);
    /* 00858735: ret  */ FN_RET(0x0085871e); r_esp += 4; return;
}

void f_00858780(void)
{
    FN_ENTER(0x00858780);
    /* 00858780: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858784: jne 0x858797 */ if (!fZ) goto L_00858797;
L_00858786:; BB(0x00858786);
    /* 00858786: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858789: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085878c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085878f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858792: call 0x858678 */ r_esp -= 4; W32(r_esp, 0x858797u); f_00858678();
L_00858797:; BB(0x00858797);
    /* 00858797: ret  */ FN_RET(0x00858780); r_esp += 4; return;
}

void f_00858798(void) /* _srand */
{
    FN_ENTER(0x00858798);
    /* 00858798: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85879du); f_0085c583();
    /* 0085879d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008587a1: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008587a4: ret  */ FN_RET(0x00858798); r_esp += 4; return;
}

void f_008587a5(void) /* _rand */
{
    FN_ENTER(0x008587a5);
    /* 008587a5: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8587aau); f_0085c583();
    /* 008587aa: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 008587ad: imul ecx, ecx, 0x343fd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x343fdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008587b3: add ecx, 0x269ec3 */ {  u32 a = r_ecx; u32 b = 0x269ec3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008587b9: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008587bc: mov eax, ecx */ r_eax = r_ecx;
    /* 008587be: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008587c1: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008587c6: ret  */ FN_RET(0x008587a5); r_esp += 4; return;
}

void f_008587c7(void) /* _calloc */
{
    FN_ENTER(0x008587c7);
    /* 008587c7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008587c9: push 0x997e60 */ { u32 v = 0x997e60u; r_esp -= 4; W32(r_esp, v); }
    /* 008587ce: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8587d3u); f_0085e5ac();
    /* 008587d3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008587d6: imul esi, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008587da: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008587dd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008587df: jne 0x8587e2 */ if (!fZ) goto L_008587e2;
L_008587e1:; BB(0x008587e1);
    /* 008587e1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008587e2:; BB(0x008587e2);
    /* 008587e2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008587e4: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008587e7: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008587ea: ja 0x858851 */ if ((!fC&&!fZ)) goto L_00858851;
L_008587ec:; BB(0x008587ec);
    /* 008587ec: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008587f3: jne 0x85883c */ if (!fZ) goto L_0085883c;
L_008587f5:; BB(0x008587f5);
    /* 008587f5: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008587f8: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008587fb: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 008587fe: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00858801: cmp ebx, dword ptr [0xaf0b8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0b8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00858807: ja 0x85883c */ if ((!fC&&!fZ)) goto L_0085883c;
L_00858809:; BB(0x00858809);
    /* 00858809: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085880b: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x858810u); f_0085e57a();
    /* 00858810: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858811: and dword ptr [ebp - 4], edi */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00858814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858815: call 0x85fe07 */ r_esp -= 4; W32(r_esp, 0x85881au); f_0085fe07();
    /* 0085881a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085881b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085881e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00858822: call 0x858871 */ r_esp -= 4; W32(r_esp, 0x858827u); f_00858871();
    /* 00858827: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085882a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085882c: je 0x858840 */ if (fZ) goto L_00858840;
L_0085882e:; BB(0x0085882e);
    /* 0085882e: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858831: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00858833: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858834: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x858839u); f_0085f580();
    /* 00858839: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085883c:; BB(0x0085883c);
    /* 0085883c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085883e: jne 0x85887a */ if (!fZ) goto L_0085887a;
L_00858840:; BB(0x00858840);
    /* 00858840: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858841: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00858843: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858849: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x85884fu); call_ind(t); }
    /* 0085884f: mov edi, eax */ r_edi = r_eax;
L_00858851:; BB(0x00858851);
    /* 00858851: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858853: jne 0x85887a */ if (!fZ) goto L_0085887a;
L_00858855:; BB(0x00858855);
    /* 00858855: cmp dword ptr [0xae7bfc], edi */ {  u32 a = R32((u32)(0xae7bfcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085885b: je 0x85887a */ if (fZ) goto L_0085887a;
L_0085885d:; BB(0x0085885d);
    /* 0085885d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085885e: call 0x85f4f4 */ r_esp -= 4; W32(r_esp, 0x858863u); f_0085f4f4();
    /* 00858863: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858866: jne 0x8587e2 */ if (!fZ) goto L_008587e2;
L_0085886c:; BB(0x0085886c);
    /* 0085886c: jmp 0x85887c */ goto L_0085887c;
L_0085887a:; BB(0x0085887a);
    /* 0085887a: mov eax, edi */ r_eax = r_edi;
L_0085887c:; BB(0x0085887c);
    /* 0085887c: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x858881u); f_0085e5e7();
    /* 00858881: ret  */ FN_RET(0x008587c7); r_esp += 4; return;
}

void f_0085886e(void)
{
    FN_ENTER(0x0085886e);
    /* 0085886e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00858871: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00858873: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x858878u); f_0085e4c5();
    /* 00858878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858879: ret  */ FN_RET(0x0085886e); r_esp += 4; return;
}

void f_00858871(void)
{
    FN_ENTER(0x00858871);
    /* 00858871: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00858873: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x858878u); f_0085e4c5();
    /* 00858878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858879: ret  */ FN_RET(0x00858871); r_esp += 4; return;
}

void f_00858882(void) /* _free */
{
    FN_ENTER(0x00858882);
    /* 00858882: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00858884: push 0x997e70 */ { u32 v = 0x997e70u; r_esp -= 4; W32(r_esp, v); }
    /* 00858889: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85888eu); f_0085e5ac();
    /* 0085888e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00858891: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858893: je 0x8588ed */ if (fZ) goto L_008588ed;
L_00858895:; BB(0x00858895);
    /* 00858895: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085889c: jne 0x8588de */ if (!fZ) goto L_008588de;
L_0085889e:; BB(0x0085889e);
    /* 0085889e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008588a0: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x8588a5u); f_0085e57a();
    /* 008588a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008588a6: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008588aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008588ab: call 0x85f628 */ r_esp -= 4; W32(r_esp, 0x8588b0u); f_0085f628();
    /* 008588b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008588b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008588b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008588b6: je 0x8588c1 */ if (fZ) goto L_008588c1;
L_008588b8:; BB(0x008588b8);
    /* 008588b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008588b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008588ba: call 0x85f653 */ r_esp -= 4; W32(r_esp, 0x8588bfu); f_0085f653();
    /* 008588bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008588c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008588c1:; BB(0x008588c1);
    /* 008588c1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008588c5: call 0x8588d5 */ r_esp -= 4; W32(r_esp, 0x8588cau); f_008588d5();
    /* 008588ca: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008588ce: jne 0x8588ed */ if (!fZ) goto L_008588ed;
L_008588d0:; BB(0x008588d0);
    /* 008588d0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008588d3: jmp 0x8588df */ goto L_008588df;
L_008588de:; BB(0x008588de);
    /* 008588de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008588df:; BB(0x008588df);
    /* 008588df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008588e1: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008588e7: call dword ptr [0x8f81dc] */ { u32 t = R32((u32)(0x8f81dcu)); r_esp -= 4; W32(r_esp, 0x8588edu); call_ind(t); }
L_008588ed:; BB(0x008588ed);
    /* 008588ed: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8588f2u); f_0085e5e7();
    /* 008588f2: ret  */ FN_RET(0x00858882); r_esp += 4; return;
}

void f_008588d5(void)
{
    FN_ENTER(0x008588d5);
    /* 008588d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008588d7: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8588dcu); f_0085e4c5();
    /* 008588dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008588dd: ret  */ FN_RET(0x008588d5); r_esp += 4; return;
}

void f_00858900(void) /* _strncpy */
{
    FN_ENTER(0x00858900);
    /* 00858900: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00858904: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858905: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858907: je 0x85899f */ if (fZ) goto L_0085899f;
L_0085890d:; BB(0x0085890d);
    /* 0085890d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085890e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085890f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00858911: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00858915: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085891b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0085891f: jne 0x85892c */ if (!fZ) goto L_0085892c;
L_00858921:; BB(0x00858921);
    /* 00858921: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00858924: jne 0x8589af */ if (!fZ) goto L_008589af;
L_0085892a:; BB(0x0085892a);
    /* 0085892a: jmp 0x858953 */ goto L_00858953;
L_0085892c:; BB(0x0085892c);
    /* 0085892c: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085892e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858931: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858933: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858936: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858939: je 0x858966 */ if (fZ) goto L_00858966;
L_0085893b:; BB(0x0085893b);
    /* 0085893b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085893d: je 0x85896e */ if (fZ) goto L_0085896e;
L_0085893f:; BB(0x0085893f);
    /* 0085893f: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858945: jne 0x85892c */ if (!fZ) goto L_0085892c;
L_00858947:; BB(0x00858947);
    /* 00858947: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00858949: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 0085894c: jne 0x8589af */ if (!fZ) goto L_008589af;
L_0085894e:; BB(0x0085894e);
    /* 0085894e: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858951: je 0x858966 */ if (fZ) goto L_00858966;
L_00858953:; BB(0x00858953);
    /* 00858953: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858955: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858958: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0085895a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085895d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085895f: je 0x858998 */ if (fZ) goto L_00858998;
L_00858961:; BB(0x00858961);
    /* 00858961: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858964: jne 0x858953 */ if (!fZ) goto L_00858953;
L_00858966:; BB(0x00858966);
    /* 00858966: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0085896a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085896b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085896c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085896d: ret  */ FN_RET(0x00858900); r_esp += 4; return;
L_0085896e:; BB(0x0085896e);
    /* 0085896e: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858974: je 0x85898c */ if (fZ) goto L_0085898c;
L_00858976:; BB(0x00858976);
    /* 00858976: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858978: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085897b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085897e: je 0x858a1c */ if (fZ) goto L_00858a1c;
L_00858984:; BB(0x00858984);
    /* 00858984: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085898a: jne 0x858976 */ if (!fZ) goto L_00858976;
L_0085898c:; BB(0x0085898c);
    /* 0085898c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0085898e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00858991: jne 0x858a07 */ if (!fZ) goto L_00858a07;
L_00858993:; BB(0x00858993);
    /* 00858993: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858995: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00858998:; BB(0x00858998);
    /* 00858998: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085899b: jne 0x858993 */ if (!fZ) goto L_00858993;
L_0085899d:; BB(0x0085899d);
    /* 0085899d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085899e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085899f:; BB(0x0085899f);
    /* 0085899f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008589a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008589a4: ret  */ FN_RET(0x00858900); r_esp += 4; return;
L_008589a5:; BB(0x008589a5);
    /* 008589a5: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008589a7: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008589aa: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008589ad: je 0x85894e */ if (fZ) goto L_0085894e;
L_008589af:; BB(0x008589af);
    /* 008589af: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 008589b4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008589b6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008589b8: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008589bb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008589bd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008589bf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008589c2: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008589c7: je 0x8589a5 */ if (fZ) goto L_008589a5;
L_008589c9:; BB(0x008589c9);
    /* 008589c9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008589cb: je 0x8589f9 */ if (fZ) goto L_008589f9;
L_008589cd:; BB(0x008589cd);
    /* 008589cd: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008589cf: je 0x8589ef */ if (fZ) goto L_008589ef;
L_008589d1:; BB(0x008589d1);
    /* 008589d1: test edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008589d7: je 0x8589e5 */ if (fZ) goto L_008589e5;
L_008589d9:; BB(0x008589d9);
    /* 008589d9: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008589df: jne 0x8589a5 */ if (!fZ) goto L_008589a5;
L_008589e1:; BB(0x008589e1);
    /* 008589e1: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008589e3: jmp 0x8589fd */ goto L_008589fd;
L_008589e5:; BB(0x008589e5);
    /* 008589e5: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008589eb: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008589ed: jmp 0x8589fd */ goto L_008589fd;
L_008589ef:; BB(0x008589ef);
    /* 008589ef: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008589f5: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008589f7: jmp 0x8589fd */ goto L_008589fd;
L_008589f9:; BB(0x008589f9);
    /* 008589f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008589fb: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
L_008589fd:; BB(0x008589fd);
    /* 008589fd: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858a00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858a02: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00858a05: je 0x858a13 */ if (fZ) goto L_00858a13;
L_00858a07:; BB(0x00858a07);
    /* 00858a07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00858a09:; BB(0x00858a09);
    /* 00858a09: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00858a0b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858a0e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00858a11: jne 0x858a09 */ if (!fZ) goto L_00858a09;
L_00858a13:; BB(0x00858a13);
    /* 00858a13: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858a16: jne 0x858993 */ if (!fZ) goto L_00858993;
L_00858a1c:; BB(0x00858a1c);
    /* 00858a1c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00858a20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00858a21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858a22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858a23: ret  */ FN_RET(0x00858900); r_esp += 4; return;
}

void f_00858aed(void) /* _toupper */
{
    FN_ENTER(0x00858aed);
    /* 00858aed: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858af2u); f_0085c583();
    /* 00858af2: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858af5: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858afb: je 0x858b02 */ if (fZ) goto L_00858b02;
L_00858afd:; BB(0x00858afd);
    /* 00858afd: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x858b02u); f_0085daca();
L_00858b02:; BB(0x00858b02);
    /* 00858b02: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858b07: call 0x858a24 */ r_esp -= 4; W32(r_esp, 0x858b0cu); f_00858a24();
    /* 00858b0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858b0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858b0e: ret  */ FN_RET(0x00858aed); r_esp += 4; return;
}

void f_00858b0f(void) /* _wcsncat */
{
    FN_ENTER(0x00858b0f);
    /* 00858b0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858b10: mov ebp, esp */ r_ebp = r_esp;
    /* 00858b12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00858b15: mov eax, ecx */ r_eax = r_ecx;
L_00858b17:; BB(0x00858b17);
    /* 00858b17: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00858b1a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b1b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b1c: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00858b1f: jne 0x858b17 */ if (!fZ) goto L_00858b17;
L_00858b21:; BB(0x00858b21);
    /* 00858b21: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b22: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b23: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858b27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858b28: je 0x858b45 */ if (fZ) goto L_00858b45;
L_00858b2a:; BB(0x00858b2a);
    /* 00858b2a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
L_00858b2d:; BB(0x00858b2d);
    /* 00858b2d: mov dx, word ptr [esi] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 00858b30: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00858b33: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00858b36: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b37: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858b38: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858b39: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858b3a: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858b3d: je 0x858b49 */ if (fZ) goto L_00858b49;
L_00858b3f:; BB(0x00858b3f);
    /* 00858b3f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858b43: jne 0x858b2d */ if (!fZ) goto L_00858b2d;
L_00858b45:; BB(0x00858b45);
    /* 00858b45: and word ptr [ecx], 0 */ { u32 ad = (u32)(r_ecx);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00858b49:; BB(0x00858b49);
    /* 00858b49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00858b4b: ret  */ FN_RET(0x00858b0f); r_esp += 4; return;
}

void f_00858b80(void)
{
    FN_ENTER(0x00858b80);
    /* 00858b80: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00858b81: or al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00858b83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00858b85: call 0x8604bf */ r_esp -= 4; W32(r_esp, 0x858b8au); f_008604bf();
    /* 00858b8a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00858b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858b8f: jne 0x858b95 */ if (!fZ) goto L_00858b95;
L_00858b91:; BB(0x00858b91);
    /* 00858b91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858b93: jmp 0x858b98 */ goto L_00858b98;
L_00858b95:; BB(0x00858b95);
    /* 00858b95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00858b98:; BB(0x00858b98);
    /* 00858b98: movzx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00858b9c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00858b9f: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858ba1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858ba2: ret  */ FN_RET(0x00858b80); r_esp += 4; return;
}

void f_00858ba3(void) /* _iswctype */
{
    FN_ENTER(0x00858ba3);
    /* 00858ba3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858ba4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00858ba8: cmp si, 0x100 */ {  u32 a = (u16)r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00858bad: jae 0x858bc5 */ if (!fC) goto L_00858bc5;
L_00858baf:; BB(0x00858baf);
    /* 00858baf: mov ecx, dword ptr [0xa23fa4] */ r_ecx = R32((u32)(0xa23fa4u));
    /* 00858bb5: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 00858bb8: movzx eax, word ptr [ecx + eax*2] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2));
    /* 00858bbc: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 00858bc1: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858bc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858bc4: ret  */ FN_RET(0x00858ba3); r_esp += 4; return;
L_00858bc5:; BB(0x00858bc5);
    /* 00858bc5: cmp si, 0xffff */ {  u32 a = (u16)r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00858bca: jne 0x858bd0 */ if (!fZ) goto L_00858bd0;
L_00858bcc:; BB(0x00858bcc);
    /* 00858bcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858bce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858bcf: ret  */ FN_RET(0x00858ba3); r_esp += 4; return;
L_00858bd0:; BB(0x00858bd0);
    /* 00858bd0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x858bd5u); f_0085c583();
    /* 00858bd5: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00858bd8: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858bde: je 0x858be5 */ if (fZ) goto L_00858be5;
L_00858be0:; BB(0x00858be0);
    /* 00858be0: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x858be5u); f_0085daca();
L_00858be5:; BB(0x00858be5);
    /* 00858be5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858be9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858beb: call 0x858b4c */ r_esp -= 4; W32(r_esp, 0x858bf0u); f_00858b4c();
    /* 00858bf0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00858bf3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858bf4: ret  */ FN_RET(0x00858ba3); r_esp += 4; return;
}

void f_00858bf5(void) /* _sprintf */
{
    FN_ENTER(0x00858bf5);
    /* 00858bf5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858bf6: mov ebp, esp */ r_ebp = r_esp;
    /* 00858bf8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00858bfb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858bfc: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00858bff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858c00: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 00858c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858c04: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00858c07: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00858c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858c0b: mov dword ptr [ebp - 0x1c], 0x7fffffff */ W32((u32)(r_ebp+0xffffffe4u), 0x7fffffffu);
    /* 00858c12: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 00858c19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00858c1c: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00858c1f: call 0x860772 */ r_esp -= 4; W32(r_esp, 0x858c24u); f_00860772();
    /* 00858c24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00858c27: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858c29: mov edi, eax */ r_edi = r_eax;
    /* 00858c2b: je 0x858c47 */ if (fZ) goto L_00858c47;
L_00858c2d:; BB(0x00858c2d);
    /* 00858c2d: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858c30: js 0x858c3a */ if (fS) goto L_00858c3a;
L_00858c32:; BB(0x00858c32);
    /* 00858c32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00858c35: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00858c38: jmp 0x858c47 */ goto L_00858c47;
L_00858c3a:; BB(0x00858c3a);
    /* 00858c3a: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00858c3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858c3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00858c40: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x858c45u); f_0085cd86();
    /* 00858c45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858c46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00858c47:; BB(0x00858c47);
    /* 00858c47: mov eax, edi */ r_eax = r_edi;
    /* 00858c49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858c4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858c4b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858c4c: ret  */ FN_RET(0x00858bf5); r_esp += 4; return;
}

void f_00858c4d(void) /* _wcscmp */
{
    FN_ENTER(0x00858c4d);
    /* 00858c4d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00858c51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858c52: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00858c56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858c57: jmp 0x858c62 */ goto L_00858c62;
L_00858c59:; BB(0x00858c59);
    /* 00858c59: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00858c5c: je 0x858c6f */ if (fZ) goto L_00858c6f;
L_00858c5e:; BB(0x00858c5e);
    /* 00858c5e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00858c5f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00858c60: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858c61: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00858c62:; BB(0x00858c62);
    /* 00858c62: mov cx, word ptr [esi] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 00858c65: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00858c68: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
    /* 00858c6b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00858c6d: je 0x858c59 */ if (fZ) goto L_00858c59;
L_00858c6f:; BB(0x00858c6f);
    /* 00858c6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858c71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858c73: jge 0x858c79 */ if ((fS==fO)) goto L_00858c79;
L_00858c75:; BB(0x00858c75);
    /* 00858c75: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858c78: ret  */ FN_RET(0x00858c4d); r_esp += 4; return;
L_00858c79:; BB(0x00858c79);
    /* 00858c79: jle 0x858c7e */ if ((fZ||fS!=fO)) goto L_00858c7e;
L_00858c7b:; BB(0x00858c7b);
    /* 00858c7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00858c7d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00858c7e:; BB(0x00858c7e);
    /* 00858c7e: ret  */ FN_RET(0x00858c4d); r_esp += 4; return;
}

