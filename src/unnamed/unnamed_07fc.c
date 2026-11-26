#include "protos.h"

void f_007fcefc(void)
{
    FN_ENTER(0x007fcefc);
    /* 007fcefc: mov edx, ecx */ r_edx = r_ecx;
    /* 007fcefe: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007fcf02: mov edx, dword ptr [edx + 0x1e0bc] */ r_edx = R32((u32)(r_edx+0x1e0bcu));
    /* 007fcf08: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007fcf0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007fcf0d: je 0x7fcf1f */ if (fZ) goto L_007fcf1f;
L_007fcf0f:; BB(0x007fcf0f);
    /* 007fcf0f: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 007fcf12: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007fcf15: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 007fcf18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf1a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7fcf1cu); call_ind(t); }
    /* 007fcf1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007fcf1f:; BB(0x007fcf1f);
    /* 007fcf1f: ret 4 */ FN_RET(0x007fcefc); r_esp += 8; return;
}

void f_007fcf24(void) /* sub_7FCF24 */
{
    FN_ENTER(0x007fcf24);
    /* 007fcf24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf25: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007fcf29: mov ecx, dword ptr [ecx + 0x1e0b4] */ r_ecx = R32((u32)(r_ecx+0x1e0b4u));
    /* 007fcf2f: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 007fcf32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007fcf34: je 0x7fcf4f */ if (fZ) goto L_007fcf4f;
L_007fcf36:; BB(0x007fcf36);
    /* 007fcf36: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 007fcf39: mov eax, ebx */ r_eax = r_ebx;
    /* 007fcf3b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007fcf3e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007fcf41: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007fcf44: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 007fcf47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf4a: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x7fcf4cu); call_ind(t); }
    /* 007fcf4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007fcf4f:; BB(0x007fcf4f);
    /* 007fcf4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007fcf50: ret 4 */ FN_RET(0x007fcf24); r_esp += 8; return;
}

void f_007fcf54(void) /* sub_7FCF54 */
{
    FN_ENTER(0x007fcf54);
    /* 007fcf54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf55: mov ebp, esp */ r_ebp = r_esp;
    /* 007fcf57: sub esp, 0x420 */ {  u32 a = r_esp; u32 b = 0x420u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007fcf5d: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 007fcf60: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 007fcf63: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 007fcf66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007fcf69: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007fcf6a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007fcf72: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7fcf78u); call_ind(t); }
    /* 007fcf78: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007fcf79: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007fcf7a: jmp 0x80019b */ goto L_0080019b;
L_0080019b:; BB(0x0080019b);
    /* 0080019b: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0080019c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0080019f: lea edi, [ebp - 0x420] */ r_edi = (u32)(r_ebp+0xfffffbe0u);
    /* 008001a5: mov ecx, 0x410 */ r_ecx = 0x410u;
    /* 008001aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008001ab: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008001ae: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008001b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008001b1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008001b4: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008001b6: movzx eax, byte ptr [ebp - 0x41d] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffbe3u));
    /* 008001bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008001c0: jne 0x8001db */ if (!fZ) goto L_008001db;
L_008001c2:; BB(0x008001c2);
    /* 008001c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008001c5: mov edx, dword ptr [eax + 0x1e090] */ r_edx = R32((u32)(r_eax+0x1e090u));
    /* 008001cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008001cd: je 0x8001f2 */ if (fZ) goto L_008001f2;
L_008001cf:; BB(0x008001cf);
    /* 008001cf: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 008001d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008001d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8001d8u); call_ind(t); }
    /* 008001d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008001d9: jmp 0x8001f2 */ goto L_008001f2;
L_008001db:; BB(0x008001db);
    /* 008001db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008001de: mov edx, dword ptr [eax + 0x1e08c] */ r_edx = R32((u32)(r_eax+0x1e08cu));
    /* 008001e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008001e6: je 0x8001f2 */ if (fZ) goto L_008001f2;
L_008001e8:; BB(0x008001e8);
    /* 008001e8: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 008001ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008001ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8001f1u); call_ind(t); }
    /* 008001f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008001f2:; BB(0x008001f2);
    /* 008001f2: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 008001f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008001f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008001f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008001f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008001fb: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x800201u); call_ind(t); }
    /* 00800201: jmp 0x800221 */ goto L_00800221;
L_00800221:; BB(0x00800221);
    /* 00800221: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00800222: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00800225: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00800228: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080022b: mov esp, ebp */ r_esp = r_ebp;
    /* 0080022d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080022e: ret 4 */ FN_RET(0x007fcf54); r_esp += 8; return;
}

