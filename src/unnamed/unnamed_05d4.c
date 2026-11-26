#include "protos.h"

void f_005d4108(void) /* sub_5D4108 */
{
    FN_ENTER(0x005d4108);
    /* 005d4108: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4109: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d410c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005d4110: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4112: je 0x5d4198 */ if (fZ) goto L_005d4198;
L_005d4118:; BB(0x005d4118);
    /* 005d4118: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d411a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d411d: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 005d4120: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005d4123: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005d4127: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 005d412a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005d412e: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 005d4131: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005d4135: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005d4138: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005d413c: mov byte ptr [edx + 0xd], al */ W8((u32)(r_edx+0xdu), (u8)r_eax);
    /* 005d413f: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005d4144: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4149: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d414d: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 005d4152: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4157: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d415b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d4160: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4165: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d4169: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 005d416e: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4173: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d4177: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 005d417c: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 005d4180: movzx eax, byte ptr [esp + 0x11] */ r_eax = (u32)R8((u32)(r_esp+0x11u));
    /* 005d4185: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005d4188: movzx eax, byte ptr [esp + 0x12] */ r_eax = (u32)R8((u32)(r_esp+0x12u));
    /* 005d418d: mov byte ptr [edx + 0xc], al */ W8((u32)(r_edx+0xcu), (u8)r_eax);
    /* 005d4190: movzx eax, byte ptr [esp + 0x13] */ r_eax = (u32)R8((u32)(r_esp+0x13u));
    /* 005d4195: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
L_005d4198:; BB(0x005d4198);
    /* 005d4198: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d419b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d419c: ret 4 */ FN_RET(0x005d4108); r_esp += 8; return;
}

void f_005d41a0(void) /* sub_5D41A0 */
{
    FN_ENTER(0x005d41a0);
    /* 005d41a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d41a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d41a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d41a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d41a4: sub esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d41aa: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d41ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d41ae: mov esi, dword ptr [esp + 0x8a4] */ r_esi = R32((u32)(r_esp+0x8a4u));
    /* 005d41b5: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d41bau); f_005d2890();
    /* 005d41ba: mov edi, eax */ r_edi = r_eax;
    /* 005d41bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d41be: je 0x5d475d */ if (fZ) goto L_005d475d;
L_005d41c4:; BB(0x005d41c4);
    /* 005d41c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d41c6: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d41cc:; BB(0x005d41cc);
    /* 005d41cc: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d41d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d41d5: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d41db:; BB(0x005d41db);
    /* 005d41db: movsx ebp, word ptr [edi + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 005d41df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d41e1: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d41e6u); f_005d2880();
    /* 005d41e6: movzx edx, word ptr [edi + 0xe] */ r_edx = (u32)R16((u32)(r_edi+0xeu));
    /* 005d41ea: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d41ec: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d41ef: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d41f2: ja 0x5d42fc */ if ((!fC&&!fZ)) goto L_005d42fc;
L_005d41f8:; BB(0x005d41f8);
    /* 005d41f8: mov edx, dword ptr [ebp*4 + 0x92c1cc] */ r_edx = R32((u32)(r_ebp*4+0x92c1ccu));
    /* 005d41ff: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d41a0); r_esp += 24; return;
L_005d475d:; BB(0x005d475d);
    /* 005d475d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d475f: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d4761:; BB(0x005d4761);
    /* 005d4761: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d476a: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d476c:; BB(0x005d476c);
    /* 005d476c: jmp 0x5d42fc */ goto L_005d42fc;
}

void f_005d41c0(void)
{
    FN_ENTER(0x005d41c0);
    /* 005d41c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d41c1: add eax, 0xf6850000 */ {  u32 a = r_eax; u32 b = 0xf6850000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d41c6: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d41cc:; BB(0x005d41cc);
    /* 005d41cc: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d41d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d41d5: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d41db:; BB(0x005d41db);
    /* 005d41db: movsx ebp, word ptr [edi + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 005d41df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d41e1: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d41e6u); f_005d2880();
    /* 005d41e6: movzx edx, word ptr [edi + 0xe] */ r_edx = (u32)R16((u32)(r_edi+0xeu));
    /* 005d41ea: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d41ec: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d41ef: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d41f2: ja 0x5d42fc */ if ((!fC&&!fZ)) goto L_005d42fc;
L_005d41f8:; BB(0x005d41f8);
    /* 005d41f8: mov edx, dword ptr [ebp*4 + 0x92c1cc] */ r_edx = R32((u32)(r_ebp*4+0x92c1ccu));
    /* 005d41ff: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d41c0); r_esp += 24; return;
}

void f_005d4201(void)
{
    FN_ENTER(0x005d4201);
    /* 005d4201: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4208: mov ebp, dword ptr [esp + 0x8a0] */ r_ebp = R32((u32)(r_esp+0x8a0u));
    /* 005d420f: mov edi, dword ptr [esp + 0x8a0] */ r_edi = R32((u32)(r_esp+0x8a0u));
    /* 005d4216: add word ptr [edx + 2], ax */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d421a: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4221: add word ptr [ebp + 4], ax */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4225: add word ptr [edi + 6], ax */ { u32 ad = (u32)(r_edi+0x6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4229: add word ptr [edx + 8], ax */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d422d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4234: add word ptr [edx + 0xa], ax */ { u32 ad = (u32)(r_edx+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4238: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d4201); r_esp += 24; return;
}

void f_005d423d(void)
{
    FN_ENTER(0x005d423d);
    /* 005d423d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4244: add word ptr [edx + 0xa], ax */ { u32 ad = (u32)(r_edx+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4248: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d423d); r_esp += 24; return;
}

void f_005d424d(void)
{
    FN_ENTER(0x005d424d);
    /* 005d424d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4254: add word ptr [edx + 8], ax */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4258: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d424d); r_esp += 24; return;
}

void f_005d425d(void)
{
    FN_ENTER(0x005d425d);
    /* 005d425d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4264: add word ptr [edx + 6], ax */ { u32 ad = (u32)(r_edx+0x6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4268: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d425d); r_esp += 24; return;
}

void f_005d426d(void)
{
    FN_ENTER(0x005d426d);
    /* 005d426d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4274: add word ptr [edx + 4], ax */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4278: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d426d); r_esp += 24; return;
}

void f_005d427d(void)
{
    FN_ENTER(0x005d427d);
    /* 005d427d: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4284: add word ptr [edx + 2], ax */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4288: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d427d); r_esp += 24; return;
}

void f_005d428a(void)
{
    FN_ENTER(0x005d428a);
    /* 005d428a: add word ptr [esi], ax */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d428d: add word ptr [esi + 2], ax */ { u32 ad = (u32)(r_esi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4291: add word ptr [esi + 0xa], ax */ { u32 ad = (u32)(r_esi+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4295: add word ptr [esi + 4], ax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4299: add word ptr [esi + 8], ax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d429d: add word ptr [esi + 0xc], ax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42a1: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d428a); r_esp += 24; return;
}

void f_005d42a3(void)
{
    FN_ENTER(0x005d42a3);
    /* 005d42a3: add word ptr [esi + 0xc], ax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42a7: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42a3); r_esp += 24; return;
}

void f_005d42a9(void)
{
    FN_ENTER(0x005d42a9);
    /* 005d42a9: add word ptr [esi + 8], ax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42ad: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42a9); r_esp += 24; return;
}

void f_005d42af(void)
{
    FN_ENTER(0x005d42af);
    /* 005d42af: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d42b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d42b8: je 0x5d42fc */ if (fZ) goto L_005d42fc;
L_005d42ba:; BB(0x005d42ba);
    /* 005d42ba: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d42c1: add word ptr [edx + 2], ax */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42c5: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42af); r_esp += 24; return;
}

void f_005d42c7(void)
{
    FN_ENTER(0x005d42c7);
    /* 005d42c7: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d42ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d42d0: je 0x5d42fc */ if (fZ) goto L_005d42fc;
L_005d42d2:; BB(0x005d42d2);
    /* 005d42d2: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d42d9: add word ptr [edx], ax */ { u32 ad = (u32)(r_edx);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42dc: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42c7); r_esp += 24; return;
}

void f_005d42de(void)
{
    FN_ENTER(0x005d42de);
    /* 005d42de: add word ptr [esi + 4], ax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42e2: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42de); r_esp += 24; return;
}

void f_005d42e4(void)
{
    FN_ENTER(0x005d42e4);
    /* 005d42e4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005d42e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d42e9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d42eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d42ed: add word ptr [esi + 0xa], dx */ { u32 ad = (u32)(r_esi+0xau);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42f1: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42e4); r_esp += 24; return;
}

void f_005d42f3(void)
{
    FN_ENTER(0x005d42f3);
    /* 005d42f3: add word ptr [esi + 2], ax */ { u32 ad = (u32)(r_esi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42f7: jmp 0x5d42fc */ goto L_005d42fc;
L_005d42fc:; BB(0x005d42fc);
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42f3); r_esp += 24; return;
}

void f_005d42f9(void)
{
    FN_ENTER(0x005d42f9);
    /* 005d42f9: add word ptr [esi], ax */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d42fc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005d4300: lea eax, [edx - 0x4a] */ r_eax = (u32)(r_edx+0xffffffb6u);
    /* 005d4303: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4306: ja 0x5d4711 */ if ((!fC&&!fZ)) goto L_005d4711;
L_005d430c:; BB(0x005d430c);
    /* 005d430c: mov eax, dword ptr [edx*4 + 0x92c058] */ r_eax = R32((u32)(r_edx*4+0x92c058u));
    /* 005d4313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d42f9); r_esp += 24; return;
}

void f_005d4315(void)
{
    FN_ENTER(0x005d4315);
    /* 005d4315: mov eax, dword ptr [esp + 0x898] */ r_eax = R32((u32)(r_esp+0x898u));
    /* 005d431c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d431e: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d4324:; BB(0x005d4324);
    /* 005d4324: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 005d4328: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d432a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d432c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005d4330: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005d4334: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005d4338: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005d433c: mov dword ptr [esp + 0x60], 0xffffffff */ W32((u32)(r_esp+0x60u), 0xffffffffu);
    /* 005d4344: mov byte ptr [esp + 0x38], al */ W8((u32)(r_esp+0x38u), (u8)r_eax);
    /* 005d4348: mov byte ptr [esp + 0x39], al */ W8((u32)(r_esp+0x39u), (u8)r_eax);
    /* 005d434c: mov byte ptr [esp + 0x3a], al */ W8((u32)(r_esp+0x3au), (u8)r_eax);
    /* 005d4350: mov byte ptr [esp + 0x3b], al */ W8((u32)(r_esp+0x3bu), (u8)r_eax);
    /* 005d4354: mov word ptr [esp + 0x3c], ax */ W16((u32)(r_esp+0x3cu), (u16)r_eax);
    /* 005d4359: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 005d435d: mov word ptr [esp + 0x64], ax */ W16((u32)(r_esp+0x64u), (u16)r_eax);
    /* 005d4362: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4363: mov ecx, dword ptr [esp + 0x89c] */ r_ecx = R32((u32)(r_esp+0x89cu));
    /* 005d436a: push dword ptr [ecx + 0xeb4] */ { u32 v = R32((u32)(r_ecx+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d4370: call 0x797790 */ r_esp -= 4; W32(r_esp, 0x5d4375u); f_00797790();
    /* 005d4375: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4378: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d437c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d437e: jne 0x5d439c */ if (!fZ) goto L_005d439c;
L_005d4380:; BB(0x005d4380);
    /* 005d4380: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005d4384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4386: jne 0x5d439c */ if (!fZ) goto L_005d439c;
L_005d4388:; BB(0x005d4388);
    /* 005d4388: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005d438c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d438e: jne 0x5d439c */ if (!fZ) goto L_005d439c;
L_005d4390:; BB(0x005d4390);
    /* 005d4390: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005d4394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4396: jne 0x5d439c */ if (!fZ) goto L_005d439c;
L_005d4398:; BB(0x005d4398);
    /* 005d4398: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d439a: jmp 0x5d43a1 */ goto L_005d43a1;
L_005d439c:; BB(0x005d439c);
    /* 005d439c: mov eax, 1 */ r_eax = 0x1u;
L_005d43a1:; BB(0x005d43a1);
    /* 005d43a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d43a3: je 0x5d43aa */ if (fZ) goto L_005d43aa;
L_005d43a5:; BB(0x005d43a5);
    /* 005d43a5: movzx ebx, byte ptr [esp + 0x39] */ r_ebx = (u32)R8((u32)(r_esp+0x39u));
L_005d43aa:; BB(0x005d43aa);
    /* 005d43aa: mov ecx, dword ptr [esp + 0x898] */ r_ecx = R32((u32)(r_esp+0x898u));
    /* 005d43b1: mov edx, 0x64 */ r_edx = 0x64u;
    /* 005d43b6: cmp ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d43b9: jle 0x5d43bd */ if ((fZ||fS!=fO)) goto L_005d43bd;
L_005d43bb:; BB(0x005d43bb);
    /* 005d43bb: mov ebx, edx */ r_ebx = r_edx;
L_005d43bd:; BB(0x005d43bd);
    /* 005d43bd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005d43c0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d43c3: fmul dword ptr [0x92c444] */ ST(0) = ST(0) * R_F32((u32)(0x92c444u));
    /* 005d43c9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d43cd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d43d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d43d7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d43db: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d43df: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d43e3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d43e7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005d43eb: add word ptr [esi], ax */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d43ee: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005d43f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d43f3: call 0x781eb8 */ r_esp -= 4; W32(r_esp, 0x5d43f8u); f_00781eb8();
    /* 005d43f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d43f9: mov edx, 0x69 */ r_edx = 0x69u;
    /* 005d43fe: cmp eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4401: mov ecx, 0 */ r_ecx = 0x0u;
    /* 005d4406: jle 0x5d440a */ if ((fZ||fS!=fO)) goto L_005d440a;
L_005d4408:; BB(0x005d4408);
    /* 005d4408: mov eax, edx */ r_eax = r_edx;
L_005d440a:; BB(0x005d440a);
    /* 005d440a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d440c: jge 0x5d4410 */ if ((fS==fO)) goto L_005d4410;
L_005d440e:; BB(0x005d440e);
    /* 005d440e: mov eax, ecx */ r_eax = r_ecx;
L_005d4410:; BB(0x005d4410);
    /* 005d4410: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d4414: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d4418: fmul dword ptr [0x92c444] */ ST(0) = ST(0) * R_F32((u32)(0x92c444u));
    /* 005d441e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d4422: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d4427: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d442c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d4430: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d4434: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d4438: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d443c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005d4440: add word ptr [esi + 8], ax */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4444: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d444a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d444b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d444c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d444d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d444e: ret 0x14 */ FN_RET(0x005d4315); r_esp += 24; return;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d4315); r_esp += 24; return;
}

void f_005d4451(void)
{
    FN_ENTER(0x005d4451);
    /* 005d4451: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5d4456u); f_0077bab4();
    /* 005d4456: mov ecx, eax */ r_ecx = r_eax;
    /* 005d4458: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d445d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d445f: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d4462: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d4465: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d4467: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d446a: je 0x5d471e */ if (fZ) goto L_005d471e;
L_005d4470:; BB(0x005d4470);
    /* 005d4470: mov eax, dword ptr [esp + 0x898] */ r_eax = R32((u32)(r_esp+0x898u));
    /* 005d4477: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d4479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d447b: je 0x5d449f */ if (fZ) goto L_005d449f;
L_005d447d:; BB(0x005d447d);
    /* 005d447d: mov eax, dword ptr [esp + 0x898] */ r_eax = R32((u32)(r_esp+0x898u));
    /* 005d4484: movzx edx, byte ptr [eax + 0x388] */ r_edx = (u32)R8((u32)(r_eax+0x388u));
    /* 005d448b: lea ebx, [edx + edx + 0xa] */ r_ebx = (u32)(r_edx+r_edx+0xau);
    /* 005d448f: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x5d4494u); f_00688b8c();
    /* 005d4494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4496: je 0x5d449f */ if (fZ) goto L_005d449f;
L_005d4498:; BB(0x005d4498);
    /* 005d4498: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005d449b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d449d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005d449f:; BB(0x005d449f);
    /* 005d449f: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d44a6: mov ecx, dword ptr [esp + 0x8a0] */ r_ecx = R32((u32)(r_esp+0x8a0u));
    /* 005d44ad: add word ptr [esi + 0xc], bx */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d44b1: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005d44b5: mov ebx, dword ptr [esp + 0x8a0] */ r_ebx = R32((u32)(r_esp+0x8a0u));
    /* 005d44bc: mov esi, dword ptr [esp + 0x8a0] */ r_esi = R32((u32)(r_esp+0x8a0u));
    /* 005d44c3: movzx ebp, word ptr [ebx + 0xa] */ r_ebp = (u32)R16((u32)(r_ebx+0xau));
    /* 005d44c7: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d44ca: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005d44ce: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d44d1: mov word ptr [esi + 0xa], bp */ W16((u32)(r_esi+0xau), (u16)r_ebp);
    /* 005d44d5: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d44db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d44dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d44dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d44de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d44df: ret 0x14 */ FN_RET(0x005d4451); r_esp += 24; return;
L_005d471e:; BB(0x005d471e);
    /* 005d471e: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4725: mov ebx, dword ptr [esp + 0x8a0] */ r_ebx = R32((u32)(r_esp+0x8a0u));
    /* 005d472c: mov ebp, dword ptr [esp + 0x8a0] */ r_ebp = R32((u32)(r_esp+0x8a0u));
    /* 005d4733: mov edi, dword ptr [esp + 0x8a0] */ r_edi = R32((u32)(r_esp+0x8a0u));
    /* 005d473a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d473c: mov word ptr [esi + 0xc], ax */ W16((u32)(r_esi+0xcu), (u16)r_eax);
    /* 005d4740: movzx ecx, word ptr [edx + 8] */ r_ecx = (u32)R16((u32)(r_edx+0x8u));
    /* 005d4744: movzx esi, word ptr [ebp + 0xa] */ r_esi = (u32)R16((u32)(r_ebp+0xau));
    /* 005d4748: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 005d474c: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 005d4750: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4756: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4758: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4759: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d475a: ret 0x14 */ FN_RET(0x005d4451); r_esp += 24; return;
}

void f_005d44e2(void)
{
    FN_ENTER(0x005d44e2);
    /* 005d44e2: mov eax, dword ptr [esp + 0x8a8] */ r_eax = R32((u32)(r_esp+0x8a8u));
    /* 005d44e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d44eb: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d44f1:; BB(0x005d44f1);
    /* 005d44f1: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d44f8: mov eax, 1 */ r_eax = 0x1u;
    /* 005d44fd: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d4501: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4507: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4508: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4509: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d450a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d450b: ret 0x14 */ FN_RET(0x005d44e2); r_esp += 24; return;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d44e2); r_esp += 24; return;
}

void f_005d450e(void)
{
    FN_ENTER(0x005d450e);
    /* 005d450e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 005d4512: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 005d4516: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 005d451a: movzx ebx, word ptr [esi + 0xc] */ r_ebx = (u32)R16((u32)(r_esi+0xcu));
    /* 005d451e: movzx ebp, word ptr [esi + 0xa] */ r_ebp = (u32)R16((u32)(r_esi+0xau));
    /* 005d4522: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4525: add word ptr [esi], 0xa */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0xau; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4529: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 005d452d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4530: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4537: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 005d453b: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4542: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4545: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 005d4549: add ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d454c: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 005d4550: add ebp, 0xc8 */ {  u32 a = r_ebp; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d4556: mov word ptr [esi + 0xa], bp */ W16((u32)(r_esi+0xau), (u16)r_ebp);
    /* 005d455a: mov esi, dword ptr [esp + 0x8a0] */ r_esi = R32((u32)(r_esp+0x8a0u));
    /* 005d4561: movzx edi, word ptr [esi + 2] */ r_edi = (u32)R16((u32)(r_esi+0x2u));
    /* 005d4565: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d4568: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 005d456c: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4573: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d4577: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d457a: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d457e: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4585: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d458c: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005d4590: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4593: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d4597: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d459e: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d45a5: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 005d45a9: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d45ac: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d45b0: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d45b7: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d45be: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d45c2: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d45c5: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d45c9: jmp 0x5d4711 */ goto L_005d4711;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d450e); r_esp += 24; return;
}

void f_005d45ce(void)
{
    FN_ENTER(0x005d45ce);
    /* 005d45ce: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 005d45d2: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 005d45d6: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 005d45da: movzx ebx, word ptr [esi + 0xc] */ r_ebx = (u32)R16((u32)(r_esi+0xcu));
    /* 005d45de: movzx ebp, word ptr [esi + 0xa] */ r_ebp = (u32)R16((u32)(r_esi+0xau));
    /* 005d45e2: add eax, -0x1e */ {  u32 a = r_eax; u32 b = 0xffffffe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d45e5: add word ptr [esi], -0x1e */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0xffe2u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d45e9: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 005d45ed: add edx, -0x1e */ {  u32 a = r_edx; u32 b = 0xffffffe2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d45f0: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d45f7: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 005d45fb: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4602: add ecx, -0x1e */ {  u32 a = r_ecx; u32 b = 0xffffffe2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4605: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 005d4609: add ebx, -0x1e */ {  u32 a = r_ebx; u32 b = 0xffffffe2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d460c: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 005d4610: add ebp, -0x64 */ {  u32 a = r_ebp; u32 b = 0xffffff9cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d4613: mov word ptr [esi + 0xa], bp */ W16((u32)(r_esi+0xau), (u16)r_ebp);
    /* 005d4617: mov esi, dword ptr [esp + 0x8a0] */ r_esi = R32((u32)(r_esp+0x8a0u));
    /* 005d461e: movzx edi, word ptr [esi + 2] */ r_edi = (u32)R16((u32)(r_esi+0x2u));
    /* 005d4622: add edi, -0xa */ {  u32 a = r_edi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d4625: mov word ptr [eax + 2], di */ W16((u32)(r_eax+0x2u), (u16)r_edi);
    /* 005d4629: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4630: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d4634: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4637: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d463b: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4642: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4649: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005d464d: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4650: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d4654: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d465b: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d4662: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 005d4666: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4669: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d466d: mov eax, dword ptr [esp + 0x8a0] */ r_eax = R32((u32)(r_esp+0x8a0u));
    /* 005d4674: mov edx, dword ptr [esp + 0x8a0] */ r_edx = R32((u32)(r_esp+0x8a0u));
    /* 005d467b: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d467f: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4682: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d4686: jmp 0x5d4711 */ goto L_005d4711;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d45ce); r_esp += 24; return;
}

void f_005d468b(void)
{
    FN_ENTER(0x005d468b);
    /* 005d468b: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d4692: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 005d4696: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4699: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 005d469d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d469f: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d46a1:; BB(0x005d46a1);
    /* 005d46a1: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d46a8: mov eax, 0x46 */ r_eax = 0x46u;
    /* 005d46ad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d46b1: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d46b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d46b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d46b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d46ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d46bb: ret 0x14 */ FN_RET(0x005d468b); r_esp += 24; return;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d468b); r_esp += 24; return;
}

void f_005d46be(void)
{
    FN_ENTER(0x005d46be);
    /* 005d46be: mov eax, dword ptr [esp + 0x8a8] */ r_eax = R32((u32)(r_esp+0x8a8u));
    /* 005d46c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d46c7: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d46c9:; BB(0x005d46c9);
    /* 005d46c9: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d46d0: mov ebx, dword ptr [esp + 0x8a8] */ r_ebx = R32((u32)(r_esp+0x8a8u));
    /* 005d46d7: mov eax, 0x96 */ r_eax = 0x96u;
    /* 005d46dc: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d46e0: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 005d46e5: mov word ptr [ebx + 6], cx */ W16((u32)(r_ebx+0x6u), (u16)r_ecx);
    /* 005d46e9: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d46ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d46f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d46f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d46f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d46f3: ret 0x14 */ FN_RET(0x005d46be); r_esp += 24; return;
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d46be); r_esp += 24; return;
}

void f_005d46f6(void)
{
    FN_ENTER(0x005d46f6);
    /* 005d46f6: mov eax, dword ptr [esp + 0x8a8] */ r_eax = R32((u32)(r_esp+0x8a8u));
    /* 005d46fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d46ff: je 0x5d4711 */ if (fZ) goto L_005d4711;
L_005d4701:; BB(0x005d4701);
    /* 005d4701: mov edx, dword ptr [esp + 0x8a8] */ r_edx = R32((u32)(r_esp+0x8a8u));
    /* 005d4708: mov eax, 0x96 */ r_eax = 0x96u;
    /* 005d470d: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
L_005d4711:; BB(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d46f6); r_esp += 24; return;
}

void f_005d4711(void)
{
    FN_ENTER(0x005d4711);
    /* 005d4711: add esp, 0x884 */ {  u32 a = r_esp; u32 b = 0x884u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d471a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d471b: ret 0x14 */ FN_RET(0x005d4711); r_esp += 24; return;
}

void f_005d4774(void) /* sub_5D4774 */
{
    FN_ENTER(0x005d4774);
    /* 005d4774: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d4775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d4776: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4777: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d477a: mov edi, ecx */ r_edi = r_ecx;
    /* 005d477c: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005d4780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4781: mov ecx, edi */ r_ecx = r_edi;
    /* 005d4783: call 0x5d3584 */ r_esp -= 4; W32(r_esp, 0x5d4788u); f_005d3584();
    /* 005d4788: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005d478c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d478d: mov ecx, edi */ r_ecx = r_edi;
    /* 005d478f: call 0x5d3f70 */ r_esp -= 4; W32(r_esp, 0x5d4794u); f_005d3f70();
    /* 005d4794: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005d4798: mov ecx, edi */ r_ecx = r_edi;
    /* 005d479a: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d479fu); f_005d2890();
    /* 005d479f: mov esi, eax */ r_esi = r_eax;
    /* 005d47a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47a3: je 0x5d4836 */ if (fZ) goto L_005d4836;
L_005d47a9:; BB(0x005d47a9);
    /* 005d47a9: mov ecx, edi */ r_ecx = r_edi;
    /* 005d47ab: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d47b0u); f_005d2880();
    /* 005d47b0: mov ebp, eax */ r_ebp = r_eax;
    /* 005d47b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005d47b4: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5d47b9u); f_005d2888();
    /* 005d47b9: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005d47bd: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 005d47c1: movsx edx, word ptr [esi + 0xe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 005d47c5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d47c8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d47cb: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 005d47cf: mov ecx, eax */ r_ecx = r_eax;
    /* 005d47d1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d47d3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d47d7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d47dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d47e1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d47e5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d47e9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d47ed: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d47f1: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005d47f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47f7: je 0x5d4836 */ if (fZ) goto L_005d4836;
L_005d47f9:; BB(0x005d47f9);
    /* 005d47f9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d47fb: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d47ff: add word ptr [edx], cx */ { u32 ad = (u32)(r_edx);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4802: movzx ecx, word ptr [esi + 0xc] */ r_ecx = (u32)R16((u32)(r_esi+0xcu));
    /* 005d4806: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4808: movsx ebp, cx */ r_ebp = (u32)(i32)(i16)(u16)r_ecx;
    /* 005d480b: add dword ptr [edx + 0x1c], ebp */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005d480e: movsx edi, byte ptr [esi + 0x15] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esi+0x15u));
    /* 005d4812: add word ptr [edx + 2], di */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4816: movsx ecx, byte ptr [esi + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x17u));
    /* 005d481a: add word ptr [edx + 4], cx */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d481e: movsx ecx, byte ptr [esi + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x16u));
    /* 005d4822: add word ptr [edx + 6], cx */ { u32 ad = (u32)(r_edx+0x6u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4826: movsx ecx, byte ptr [esi + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x19u));
    /* 005d482a: add word ptr [edx + 8], cx */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d482e: movsx eax, byte ptr [esi + 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x18u));
    /* 005d4832: add word ptr [edx + 0xa], ax */ { u32 ad = (u32)(r_edx+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_005d4836:; BB(0x005d4836);
    /* 005d4836: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d483a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d483b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d483c: ret 0x14 */ FN_RET(0x005d4774); r_esp += 24; return;
}

void f_005d4840(void) /* sub_5D4840 */
{
    FN_ENTER(0x005d4840);
    /* 005d4840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d4841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d4842: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4843: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4846: mov edi, ecx */ r_edi = r_ecx;
    /* 005d4848: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005d484c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d484d: mov ecx, edi */ r_ecx = r_edi;
    /* 005d484f: call 0x5d3584 */ r_esp -= 4; W32(r_esp, 0x5d4854u); f_005d3584();
    /* 005d4854: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005d4858: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4859: mov ecx, edi */ r_ecx = r_edi;
    /* 005d485b: call 0x5d3f70 */ r_esp -= 4; W32(r_esp, 0x5d4860u); f_005d3f70();
    /* 005d4860: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005d4864: mov ecx, edi */ r_ecx = r_edi;
    /* 005d4866: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d486bu); f_005d2890();
    /* 005d486b: mov esi, eax */ r_esi = r_eax;
    /* 005d486d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d486f: je 0x5d4902 */ if (fZ) goto L_005d4902;
L_005d4875:; BB(0x005d4875);
    /* 005d4875: mov ecx, edi */ r_ecx = r_edi;
    /* 005d4877: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d487cu); f_005d2880();
    /* 005d487c: mov ebp, eax */ r_ebp = r_eax;
    /* 005d487e: mov ecx, edi */ r_ecx = r_edi;
    /* 005d4880: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5d4885u); f_005d2888();
    /* 005d4885: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005d4889: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 005d488d: movsx ecx, word ptr [esi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 005d4891: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005d4894: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d4897: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 005d489b: mov edx, eax */ r_edx = r_eax;
    /* 005d489d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d489f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d48a3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d48a8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d48ad: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d48b1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d48b5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d48b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d48bd: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005d48c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d48c3: je 0x5d4902 */ if (fZ) goto L_005d4902;
L_005d48c5:; BB(0x005d48c5);
    /* 005d48c5: movzx edi, word ptr [esi + 0xe] */ r_edi = (u32)R16((u32)(r_esi+0xeu));
    /* 005d48c9: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d48cb: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005d48cf: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d48d1: movsx ecx, bp */ r_ecx = (u32)(i32)(i16)(u16)r_ebp;
    /* 005d48d4: add word ptr [edx], di */ { u32 ad = (u32)(r_edx);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d48d7: add dword ptr [edx + 0x1c], ecx */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005d48da: movsx ebp, byte ptr [esi + 0x15] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+0x15u));
    /* 005d48de: add word ptr [edx + 2], bp */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d48e2: movsx ecx, byte ptr [esi + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x17u));
    /* 005d48e6: add word ptr [edx + 4], cx */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d48ea: movsx ecx, byte ptr [esi + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x16u));
    /* 005d48ee: add word ptr [edx + 6], cx */ { u32 ad = (u32)(r_edx+0x6u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d48f2: movsx ecx, byte ptr [esi + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x19u));
    /* 005d48f6: add word ptr [edx + 8], cx */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d48fa: movsx eax, byte ptr [esi + 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x18u));
    /* 005d48fe: add word ptr [edx + 0xa], ax */ { u32 ad = (u32)(r_edx+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_005d4902:; BB(0x005d4902);
    /* 005d4902: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4907: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4908: ret 0x14 */ FN_RET(0x005d4840); r_esp += 24; return;
}

void f_005d490c(void) /* sub_5D490C */
{
    FN_ENTER(0x005d490c);
    /* 005d490c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d490d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d490e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d490f: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005d4913: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005d4917: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005d491a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d491c: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 005d4920: je 0x5d492b */ if (fZ) goto L_005d492b;
L_005d4922:; BB(0x005d4922);
    /* 005d4922: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4925: jne 0x5d4af4 */ if (!fZ) goto L_005d4af4;
L_005d492b:; BB(0x005d492b);
    /* 005d492b: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d492f: movzx ecx, byte ptr [ecx + 2] */ r_ecx = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d4933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4935: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4936: call 0x5e5518 */ r_esp -= 4; W32(r_esp, 0x5d493bu); f_005e5518();
    /* 005d493b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d493e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d4940: je 0x5d4af4 */ if (fZ) goto L_005d4af4;
L_005d4946:; BB(0x005d4946);
    /* 005d4946: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d4948: je 0x5d4af4 */ if (fZ) goto L_005d4af4;
L_005d494e:; BB(0x005d494e);
    /* 005d494e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d4950: je 0x5d4af4 */ if (fZ) goto L_005d4af4;
L_005d4956:; BB(0x005d4956);
    /* 005d4956: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d4958: je 0x5d4af4 */ if (fZ) goto L_005d4af4;
L_005d495e:; BB(0x005d495e);
    /* 005d495e: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 005d4961: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 005d4964: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4967: ja 0x5d4af4 */ if ((!fC&&!fZ)) goto L_005d4af4;
L_005d496d:; BB(0x005d496d);
    /* 005d496d: mov edx, dword ptr [ecx*4 + 0x92c21c] */ r_edx = R32((u32)(r_ecx*4+0x92c21cu));
    /* 005d4974: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d490c); r_esp += 24; return;
}

void f_005d4976(void)
{
    FN_ENTER(0x005d4976);
    /* 005d4976: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d497a: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 005d497d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d497f: movzx ecx, word ptr [ebx + 2] */ r_ecx = (u32)R16((u32)(r_ebx+0x2u));
    /* 005d4983: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 005d4986: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d498a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d498c: mov word ptr [ebx + 2], cx */ W16((u32)(r_ebx+0x2u), (u16)r_ecx);
    /* 005d4990: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4994: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005d4997: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4999: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d499b: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 005d499f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d49a1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d49a3: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 005d49a7: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49ab: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 005d49ae: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005d49b1: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d49b3: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 005d49b6: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 005d49ba: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d49bc: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 005d49bf: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49c3: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005d49c5: add word ptr [edi + 2], si */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_esi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d49c9: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49cd: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d49cf: add word ptr [edi + 0xc], ax */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d49d3: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4976); r_esp += 24; return;
}

void f_005d49d8(void)
{
    FN_ENTER(0x005d49d8);
    /* 005d49d8: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49dc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d49de: add word ptr [edi + 0xc], ax */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d49e2: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d49d8); r_esp += 24; return;
}

void f_005d49e7(void)
{
    FN_ENTER(0x005d49e7);
    /* 005d49e7: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49eb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d49ed: add word ptr [edi + 6], ax */ { u32 ad = (u32)(r_edi+0x6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d49f1: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d49e7); r_esp += 24; return;
}

void f_005d49f6(void)
{
    FN_ENTER(0x005d49f6);
    /* 005d49f6: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d49fa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d49fc: add word ptr [edi + 2], ax */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4a00: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d49f6); r_esp += 24; return;
}

void f_005d4a05(void)
{
    FN_ENTER(0x005d4a05);
    /* 005d4a05: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 005d4a09: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005d4a0c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4a0e: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 005d4a11: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4a05); r_esp += 24; return;
}

void f_005d4a16(void)
{
    FN_ENTER(0x005d4a16);
    /* 005d4a16: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a1a: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 005d4a1d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4a1f: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 005d4a22: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4a16); r_esp += 24; return;
}

void f_005d4a27(void)
{
    FN_ENTER(0x005d4a27);
    /* 005d4a27: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a2b: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 005d4a2f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005d4a32: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4a34: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4a36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4a38: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4a3a: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 005d4a3e: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4a27); r_esp += 24; return;
}

void f_005d4a43(void)
{
    FN_ENTER(0x005d4a43);
    /* 005d4a43: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a47: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 005d4a4a: movzx esi, word ptr [ebx + 2] */ r_esi = (u32)R16((u32)(r_ebx+0x2u));
    /* 005d4a4e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4a50: mov word ptr [ebx], cx */ W16((u32)(r_ebx), (u16)r_ecx);
    /* 005d4a53: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a57: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d4a59: mov word ptr [ebx + 2], si */ W16((u32)(r_ebx+0x2u), (u16)r_esi);
    /* 005d4a5d: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4a43); r_esp += 24; return;
}

void f_005d4a62(void)
{
    FN_ENTER(0x005d4a62);
    /* 005d4a62: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a66: add word ptr [ebx], dx */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4a69: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a6d: add word ptr [ebx + 2], cx */ { u32 ad = (u32)(r_ebx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4a71: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a75: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005d4a78: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4a7a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4a7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4a7e: add word ptr [ebx + 4], cx */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_ecx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4a82: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a86: add word ptr [esi], bx */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4a89: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 005d4a8d: add dword ptr [esi + 0x1c], edx */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005d4a90: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a94: add word ptr [edi + 2], si */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_esi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4a98: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4a9c: add word ptr [edi + 0xc], ax */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4aa0: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4a62); r_esp += 24; return;
}

void f_005d4aa2(void)
{
    FN_ENTER(0x005d4aa2);
    /* 005d4aa2: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4aa6: add word ptr [edi + 0xc], ax */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4aaa: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4aa2); r_esp += 24; return;
}

void f_005d4aac(void)
{
    FN_ENTER(0x005d4aac);
    /* 005d4aac: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4ab0: add word ptr [edi + 6], ax */ { u32 ad = (u32)(r_edi+0x6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4ab4: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4aac); r_esp += 24; return;
}

void f_005d4ab6(void)
{
    FN_ENTER(0x005d4ab6);
    /* 005d4ab6: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4aba: add word ptr [edi + 2], ax */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4abe: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4ab6); r_esp += 24; return;
}

void f_005d4ac0(void)
{
    FN_ENTER(0x005d4ac0);
    /* 005d4ac0: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 005d4ac4: add dword ptr [esi + 0x1c], eax */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4ac7: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4ac0); r_esp += 24; return;
}

void f_005d4ac9(void)
{
    FN_ENTER(0x005d4ac9);
    /* 005d4ac9: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4acd: add word ptr [esi], ax */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4ad0: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4ac9); r_esp += 24; return;
}

void f_005d4ad2(void)
{
    FN_ENTER(0x005d4ad2);
    /* 005d4ad2: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4ad6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005d4ad9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4adb: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4add: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4adf: add word ptr [ebx + 4], dx */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4ae3: jmp 0x5d4af4 */ goto L_005d4af4;
L_005d4af4:; BB(0x005d4af4);
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4ad2); r_esp += 24; return;
}

void f_005d4ae5(void)
{
    FN_ENTER(0x005d4ae5);
    /* 005d4ae5: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4ae9: add word ptr [ebx], dx */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4aec: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4af0: add word ptr [ebx + 2], ax */ { u32 ad = (u32)(r_ebx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 005d4af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4af5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d4af6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4af7: ret 0x14 */ FN_RET(0x005d4ae5); r_esp += 24; return;
}

void f_005d4afc(void) /* sub_5D4AFC */
{
    FN_ENTER(0x005d4afc);
    /* 005d4afc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4afd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4b00: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d4b02: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d4b06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b09: je 0x5d4c20 */ if (fZ) goto L_005d4c20;
L_005d4b0f:; BB(0x005d4b0f);
    /* 005d4b0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d4b11:; BB(0x005d4b11);
    /* 005d4b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b13: je 0x5d4c19 */ if (fZ) goto L_005d4c19;
L_005d4b19:; BB(0x005d4b19);
    /* 005d4b19: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d4b1d: cmp eax, 0x53 */ {  u32 a = r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4b20: jl 0x5d4c19 */ if ((fS!=fO)) goto L_005d4c19;
L_005d4b26:; BB(0x005d4b26);
    /* 005d4b26: cmp eax, 0x82 */ {  u32 a = r_eax; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4b2b: jg 0x5d4c19 */ if ((!fZ&&fS==fO)) goto L_005d4c19;
L_005d4b31:; BB(0x005d4b31);
    /* 005d4b31: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005d4b35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b36: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005d4b3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b3b: call 0x5e26dc */ r_esp -= 4; W32(r_esp, 0x5d4b40u); f_005e26dc();
    /* 005d4b40: mov ecx, eax */ r_ecx = r_eax;
    /* 005d4b42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4b45: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005d4b49: add eax, -0x53 */ {  u32 a = r_eax; u32 b = 0xffffffadu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b4c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d4b4d: mov ebp, 0x32 */ r_ebp = 0x32u;
    /* 005d4b52: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 005d4b57: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 005d4b5c: mov word ptr [esp + 0xc], bp */ W16((u32)(r_esp+0xcu), (u16)r_ebp);
    /* 005d4b61: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b63: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b65: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b68: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b6a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d4b6c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d4b6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d4b71: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 005d4b75: mov edx, 0x19 */ r_edx = 0x19u;
    /* 005d4b7a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d4b7f: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 005d4b84: mov edx, 0x64 */ r_edx = 0x64u;
    /* 005d4b89: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 005d4b8e: mov edx, 0xa */ r_edx = 0xau;
    /* 005d4b93: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 005d4b98: movzx edx, word ptr [esp + eax*2] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2));
    /* 005d4b9c: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d4b9f: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 005d4ba2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d4ba5: ja 0x5d4c19 */ if ((!fC&&!fZ)) goto L_005d4c19;
L_005d4ba7:; BB(0x005d4ba7);
    /* 005d4ba7: mov eax, dword ptr [eax*4 + 0x92c260] */ r_eax = R32((u32)(r_eax*4+0x92c260u));
    /* 005d4bae: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4afc); r_esp += 24; return;
L_005d4c20:; BB(0x005d4c20);
    /* 005d4c20: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d4c24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c27: jne 0x5d4b0f */ if (!fZ) goto L_005d4b0f;
L_005d4c2d:; BB(0x005d4c2d);
    /* 005d4c2d: mov eax, 1 */ r_eax = 0x1u;
    /* 005d4c32: jmp 0x5d4b11 */ goto L_005d4b11;
}

void f_005d4bb0(void)
{
    FN_ENTER(0x005d4bb0);
    /* 005d4bb0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4bb4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005d4bb8: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 005d4bbc: add word ptr [eax + 2], dx */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bc0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4bc4: add word ptr [ecx + 4], dx */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bc8: add word ptr [ebp + 6], dx */ { u32 ad = (u32)(r_ebp+0x6u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bcc: add word ptr [eax + 0xa], dx */ { u32 ad = (u32)(r_eax+0xau);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bd0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4bd4: add word ptr [eax + 8], dx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bd8: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4bb0); r_esp += 24; return;
}

void f_005d4bda(void)
{
    FN_ENTER(0x005d4bda);
    /* 005d4bda: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005d4bde: add word ptr [eax + 2], dx */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4be2: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4bda); r_esp += 24; return;
}

void f_005d4be4(void)
{
    FN_ENTER(0x005d4be4);
    /* 005d4be4: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005d4be8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005d4bec: add word ptr [eax], dx */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bef: add word ptr [ecx + 2], dx */ { u32 ad = (u32)(r_ecx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bf3: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4be4); r_esp += 24; return;
}

void f_005d4bf5(void)
{
    FN_ENTER(0x005d4bf5);
    /* 005d4bf5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005d4bf9: add word ptr [eax + 4], dx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4bfd: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4bf5); r_esp += 24; return;
}

void f_005d4bff(void)
{
    FN_ENTER(0x005d4bff);
    /* 005d4bff: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005d4c03: add word ptr [eax + 0xc], dx */ { u32 ad = (u32)(r_eax+0xcu);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4c07: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4bff); r_esp += 24; return;
}

void f_005d4c09(void)
{
    FN_ENTER(0x005d4c09);
    /* 005d4c09: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4c0d: add word ptr [eax], dx */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4c10: jmp 0x5d4c19 */ goto L_005d4c19;
L_005d4c19:; BB(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4c09); r_esp += 24; return;
}

void f_005d4c12(void)
{
    FN_ENTER(0x005d4c12);
    /* 005d4c12: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4c16: add dword ptr [eax + 0x1c], edx */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4c12); r_esp += 24; return;
}

void f_005d4c19(void)
{
    FN_ENTER(0x005d4c19);
    /* 005d4c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c1d: ret 0x14 */ FN_RET(0x005d4c19); r_esp += 24; return;
}

void f_005d4c38(void) /* sub_5D4C38 */
{
    FN_ENTER(0x005d4c38);
    /* 005d4c38: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4c3b: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d4c3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c40: je 0x5d4db7 */ if (fZ) goto L_005d4db7;
L_005d4c46:; BB(0x005d4c46);
    /* 005d4c46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c49: jne 0x5d4dd5 */ if (!fZ) goto L_005d4dd5;
L_005d4c4f:; BB(0x005d4c4f);
    /* 005d4c4f: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d4c53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c56: je 0x5d4d97 */ if (fZ) goto L_005d4d97;
L_005d4c5c:; BB(0x005d4c5c);
    /* 005d4c5c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c5f: jne 0x5d4c84 */ if (!fZ) goto L_005d4c84;
L_005d4c61:; BB(0x005d4c61);
    /* 005d4c61: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4c65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c66: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 005d4c6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c6b: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c70: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4c74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c75: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c7a: call 0x5d4e14 */ r_esp -= 4; W32(r_esp, 0x5d4c7fu); f_005d4e14();
    /* 005d4c7f: jmp 0x5d4dd5 */ goto L_005d4dd5;
L_005d4c84:; BB(0x005d4c84);
    /* 005d4c84: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c87: jne 0x5d4dd5 */ if (!fZ) goto L_005d4dd5;
L_005d4c8d:; BB(0x005d4c8d);
    /* 005d4c8d: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d4c91: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4c94: jne 0x5d4dd5 */ if (!fZ) goto L_005d4dd5;
L_005d4c9a:; BB(0x005d4c9a);
    /* 005d4c9a: mov eax, 0x92c280 */ r_eax = 0x92c280u;
    /* 005d4c9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4ca1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d4ca4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005d4ca8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d4cab: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005d4caf: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005d4cb3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005d4cb6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005d4cba: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005d4cbd: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005d4cc1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005d4cc4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005d4cc8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005d4ccb: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005d4ccf: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d4cd2: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005d4cd6: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005d4cd9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005d4cdd: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005d4ce0: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005d4ce4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005d4ce7: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005d4ceb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005d4cee: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005d4cf2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005d4cf5: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005d4cf9: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005d4cfc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005d4d00: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005d4d03: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005d4d07: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005d4d0a: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 005d4d0e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005d4d11: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 005d4d15: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005d4d18: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 005d4d1c: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 005d4d1f: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005d4d23: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005d4d26: movzx eax, byte ptr [eax + 0x50] */ r_eax = (u32)R8((u32)(r_eax+0x50u));
    /* 005d4d2a: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 005d4d2e: mov byte ptr [esp + 0x58], al */ W8((u32)(r_esp+0x58u), (u8)r_eax);
    /* 005d4d32: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 005d4d36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d38: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d4d3e: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d4d43u); f_0069792c();
    /* 005d4d43: mov ecx, eax */ r_ecx = r_eax;
    /* 005d4d45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d47: je 0x5d4dd5 */ if (fZ) goto L_005d4dd5;
L_005d4d4d:; BB(0x005d4d4d);
    /* 005d4d4d: movzx edx, byte ptr [ecx + 0xf2] */ r_edx = (u32)R8((u32)(r_ecx+0xf2u));
    /* 005d4d54: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005d4d58: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005d4d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d4d5d:; BB(0x005d4d5d);
    /* 005d4d5d: movzx ebx, byte ptr [esp + eax + 8] */ r_ebx = (u32)R8((u32)(r_esp+r_eax+0x8u));
    /* 005d4d62: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4d65: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d67: jne 0x5d4d89 */ if (!fZ) goto L_005d4d89;
L_005d4d69:; BB(0x005d4d69);
    /* 005d4d69: movzx ebx, byte ptr [esp + eax + 6] */ r_ebx = (u32)R8((u32)(r_esp+r_eax+0x6u));
    /* 005d4d6e: movzx esi, byte ptr [ecx + 0xf3] */ r_esi = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005d4d75: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d77: jne 0x5d4d89 */ if (!fZ) goto L_005d4d89;
L_005d4d79:; BB(0x005d4d79);
    /* 005d4d79: movzx ebx, byte ptr [esp + eax + 7] */ r_ebx = (u32)R8((u32)(r_esp+r_eax+0x7u));
    /* 005d4d7e: movzx esi, byte ptr [ecx + 0xf4] */ r_esi = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005d4d85: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4d87: je 0x5d4ddb */ if (fZ) goto L_005d4ddb;
L_005d4d89:; BB(0x005d4d89);
    /* 005d4d89: cmp eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005d4d8c: jb 0x5d4d5d */ if (fC) goto L_005d4d5d;
L_005d4d8e:; BB(0x005d4d8e);
    /* 005d4d8e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005d4d92: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005d4d95: jmp 0x5d4dd5 */ goto L_005d4dd5;
L_005d4d97:; BB(0x005d4d97);
    /* 005d4d97: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4d9c: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 005d4da0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4da1: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4da5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4da6: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4daa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dab: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4db0: call 0x5d53ac */ r_esp -= 4; W32(r_esp, 0x5d4db5u); f_005d53ac();
    /* 005d4db5: jmp 0x5d4dd5 */ goto L_005d4dd5;
L_005d4db7:; BB(0x005d4db7);
    /* 005d4db7: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dbc: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 005d4dc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dc1: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dc6: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dcb: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 005d4dcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4dd0: call 0x5d583c */ r_esp -= 4; W32(r_esp, 0x5d4dd5u); f_005d583c();
L_005d4dd5:; BB(0x005d4dd5);
    /* 005d4dd5: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4dd8: ret 0x14 */ FN_RET(0x005d4c38); r_esp += 24; return;
L_005d4ddb:; BB(0x005d4ddb);
    /* 005d4ddb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005d4ddf: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005d4de2: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 005d4de6: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 005d4dea: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d4dee: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4df4: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005d4df8: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d4dfc: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 005d4e00: add word ptr [eax], 0x3c */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4e04: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005d4e08: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005d4e0b: add eax, -0x14 */ {  u32 a = r_eax; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4e0e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d4e11: jmp 0x5d4dd5 */ goto L_005d4dd5;
}

void f_005d4e14(void) /* sub_5D4E14 */
{
    FN_ENTER(0x005d4e14);
    /* 005d4e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4e15: sub esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4e1b: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d4e1f: cmp eax, 0x2a */ {  u32 a = r_eax; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e22: je 0x5d52ad */ if (fZ) goto L_005d52ad;
L_005d4e28:; BB(0x005d4e28);
    /* 005d4e28: cmp eax, 0x85 */ {  u32 a = r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e2d: je 0x5d5166 */ if (fZ) goto L_005d5166;
L_005d4e33:; BB(0x005d4e33);
    /* 005d4e33: cmp eax, 0x86 */ {  u32 a = r_eax; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e38: je 0x5d513d */ if (fZ) goto L_005d513d;
L_005d4e3e:; BB(0x005d4e3e);
    /* 005d4e3e: cmp eax, 0x87 */ {  u32 a = r_eax; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e43: je 0x5d50fa */ if (fZ) goto L_005d50fa;
L_005d4e49:; BB(0x005d4e49);
    /* 005d4e49: cmp eax, 0x8d */ {  u32 a = r_eax; u32 b = 0x8du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e4e: je 0x5d50d1 */ if (fZ) goto L_005d50d1;
L_005d4e54:; BB(0x005d4e54);
    /* 005d4e54: cmp eax, 0x9b */ {  u32 a = r_eax; u32 b = 0x9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e59: je 0x5d5026 */ if (fZ) goto L_005d5026;
L_005d4e5f:; BB(0x005d4e5f);
    /* 005d4e5f: cmp eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e64: je 0x5d5001 */ if (fZ) goto L_005d5001;
L_005d4e6a:; BB(0x005d4e6a);
    /* 005d4e6a: cmp eax, 0x95 */ {  u32 a = r_eax; u32 b = 0x95u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e6f: jne 0x5d4f54 */ if (!fZ) goto L_005d4f54;
L_005d4e75:; BB(0x005d4e75);
    /* 005d4e75: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d4e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4e7e: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d4e84:; BB(0x005d4e84);
    /* 005d4e84: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005d4e88: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005d4e8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4e8c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d4e90: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005d4e94: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005d4e98: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005d4e9c: mov dword ptr [esp + 0x58], 0xffffffff */ W32((u32)(r_esp+0x58u), 0xffffffffu);
    /* 005d4ea4: mov byte ptr [esp + 0x30], al */ W8((u32)(r_esp+0x30u), (u8)r_eax);
    /* 005d4ea8: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 005d4eac: mov byte ptr [esp + 0x32], al */ W8((u32)(r_esp+0x32u), (u8)r_eax);
    /* 005d4eb0: mov byte ptr [esp + 0x33], al */ W8((u32)(r_esp+0x33u), (u8)r_eax);
    /* 005d4eb4: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 005d4eb9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 005d4ebd: mov word ptr [esp + 0x5c], ax */ W16((u32)(r_esp+0x5cu), (u16)r_eax);
    /* 005d4ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ec3: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d4eca: push dword ptr [ecx + 0xeb4] */ { u32 v = R32((u32)(r_ecx+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d4ed0: call 0x797790 */ r_esp -= 4; W32(r_esp, 0x5d4ed5u); f_00797790();
    /* 005d4ed5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4ed8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d4edc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ede: jne 0x5d4efc */ if (!fZ) goto L_005d4efc;
L_005d4ee0:; BB(0x005d4ee0);
    /* 005d4ee0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005d4ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ee6: jne 0x5d4efc */ if (!fZ) goto L_005d4efc;
L_005d4ee8:; BB(0x005d4ee8);
    /* 005d4ee8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d4eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4eee: jne 0x5d4efc */ if (!fZ) goto L_005d4efc;
L_005d4ef0:; BB(0x005d4ef0);
    /* 005d4ef0: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005d4ef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ef6: jne 0x5d4efc */ if (!fZ) goto L_005d4efc;
L_005d4ef8:; BB(0x005d4ef8);
    /* 005d4ef8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4efa: jmp 0x5d4f01 */ goto L_005d4f01;
L_005d4efc:; BB(0x005d4efc);
    /* 005d4efc: mov eax, 1 */ r_eax = 0x1u;
L_005d4f01:; BB(0x005d4f01);
    /* 005d4f01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f03: je 0x5d4f0a */ if (fZ) goto L_005d4f0a;
L_005d4f05:; BB(0x005d4f05);
    /* 005d4f05: movzx ebp, byte ptr [esp + 0x31] */ r_ebp = (u32)R8((u32)(r_esp+0x31u));
L_005d4f0a:; BB(0x005d4f0a);
    /* 005d4f0a: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d4f11: mov edx, 0x64 */ r_edx = 0x64u;
    /* 005d4f16: cmp ebp, 0x64 */ {  u32 a = r_ebp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4f19: jle 0x5d4f1d */ if ((fZ||fS!=fO)) goto L_005d4f1d;
L_005d4f1b:; BB(0x005d4f1b);
    /* 005d4f1b: mov ebp, edx */ r_ebp = r_edx;
L_005d4f1d:; BB(0x005d4f1d);
    /* 005d4f1d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005d4f20: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d4f23: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005d4f25: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d4f29: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d4f2e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d4f33: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d4f37: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d4f3b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d4f3f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d4f43: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005d4f47: add word ptr [ecx], ax */ { u32 ad = (u32)(r_ecx);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4f4a: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4f51: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d4f54:; BB(0x005d4f54);
    /* 005d4f54: cmp eax, 0x93 */ {  u32 a = r_eax; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f59: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d4f5f:; BB(0x005d4f5f);
    /* 005d4f5f: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5d4f64u); f_0077bab4();
    /* 005d4f64: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005d4f66: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d4f69: je 0x5d4fde */ if (fZ) goto L_005d4fde;
L_005d4f6b:; BB(0x005d4f6b);
    /* 005d4f6b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f6e: jne 0x5d4f93 */ if (!fZ) goto L_005d4f93;
L_005d4f70:; BB(0x005d4f70);
    /* 005d4f70: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d4f77: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d4f7e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d4f82: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4f85: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d4f89: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4f90: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d4f93:; BB(0x005d4f93);
    /* 005d4f93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4f96: jne 0x5d4fbb */ if (!fZ) goto L_005d4fbb;
L_005d4f98:; BB(0x005d4f98);
    /* 005d4f98: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d4f9f: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d4fa6: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 005d4faa: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4fad: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 005d4fb1: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4fb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4fb8: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d4fbb:; BB(0x005d4fbb);
    /* 005d4fbb: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d4fc2: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d4fc9: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 005d4fcd: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4fd0: mov word ptr [ecx + 0xa], dx */ W16((u32)(r_ecx+0xau), (u16)r_edx);
    /* 005d4fd4: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4fda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4fdb: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d4fde:; BB(0x005d4fde);
    /* 005d4fde: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d4fe5: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d4fec: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d4ff0: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4ff3: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005d4ff7: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4ffd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4ffe: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d5001:; BB(0x005d5001);
    /* 005d5001: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d5008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d500a: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d500c:; BB(0x005d500c);
    /* 005d500c: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d5013: mov eax, 5 */ r_eax = 0x5u;
    /* 005d5018: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
L_005d501c:; BB(0x005d501c);
    /* 005d501c: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5022: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5023: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d5026:; BB(0x005d5026);
    /* 005d5026: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d502d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d502f: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5035: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d503au); f_0069792c();
    /* 005d503a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d503c: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d503e:; BB(0x005d503e);
    /* 005d503e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d5045: cmp eax, 0x56 */ {  u32 a = r_eax; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5048: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d504a:; BB(0x005d504a);
    /* 005d504a: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d5051: mov ecx, dword ptr [esp + 0x88c] */ r_ecx = R32((u32)(r_esp+0x88cu));
    /* 005d5058: mov ebp, dword ptr [esp + 0x88c] */ r_ebp = R32((u32)(r_esp+0x88cu));
    /* 005d505f: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d5063: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 005d5067: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d506a: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005d506e: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d5075: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5078: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d507c: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d5083: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d508a: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005d508e: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5091: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d5095: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d509c: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d50a3: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 005d50a7: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d50aa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d50ae: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d50b5: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d50bc: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d50c0: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d50c3: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 005d50c7: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d50cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d50ce: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d50d1:; BB(0x005d50d1);
    /* 005d50d1: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d50d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d50da: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d50e0:; BB(0x005d50e0);
    /* 005d50e0: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d50e7: mov eax, 3 */ r_eax = 0x3u;
    /* 005d50ec: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 005d50f0: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d50f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d50f7: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d50fa:; BB(0x005d50fa);
    /* 005d50fa: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d5101: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5103: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5109: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d510eu); f_0069792c();
    /* 005d510e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5110: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d5116:; BB(0x005d5116);
    /* 005d5116: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d511d: cmp eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5122: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d5128:; BB(0x005d5128);
    /* 005d5128: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d512f: add word ptr [eax], 0x32 */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x32u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d5133: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d513a: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d513d:; BB(0x005d513d);
    /* 005d513d: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d5144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5146: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d514c:; BB(0x005d514c);
    /* 005d514c: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d5153: mov eax, 0xf */ r_eax = 0xfu;
    /* 005d5158: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 005d515c: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5163: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d5166:; BB(0x005d5166);
    /* 005d5166: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d516d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d516f: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d5175: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d517au); f_0069792c();
    /* 005d517a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d517c: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d5182:; BB(0x005d5182);
    /* 005d5182: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d5189: cmp edx, 0x65 */ {  u32 a = r_edx; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d518c: je 0x5d5238 */ if (fZ) goto L_005d5238;
L_005d5192:; BB(0x005d5192);
    /* 005d5192: cmp edx, 0x6a */ {  u32 a = r_edx; u32 b = 0x6au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5195: jl 0x5d51a5 */ if ((fS!=fO)) goto L_005d51a5;
L_005d5197:; BB(0x005d5197);
    /* 005d5197: cmp edx, 0x6c */ {  u32 a = r_edx; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d519a: jle 0x5d5238 */ if ((fZ||fS!=fO)) goto L_005d5238;
L_005d51a0:; BB(0x005d51a0);
    /* 005d51a0: jmp 0x5d501c */ goto L_005d501c;
L_005d51a5:; BB(0x005d51a5);
    /* 005d51a5: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d51a8: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d51ae:; BB(0x005d51ae);
    /* 005d51ae: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d51b5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d51b8: je 0x5d51fb */ if (fZ) goto L_005d51fb;
L_005d51ba:; BB(0x005d51ba);
    /* 005d51ba: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d51bd: jl 0x5d501c */ if ((fS!=fO)) goto L_005d501c;
L_005d51c3:; BB(0x005d51c3);
    /* 005d51c3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d51c6: jle 0x5d5287 */ if ((fZ||fS!=fO)) goto L_005d5287;
L_005d51cc:; BB(0x005d51cc);
    /* 005d51cc: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d51cf: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d51d5:; BB(0x005d51d5);
    /* 005d51d5: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d51dc: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d51e3: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d51e7: add edx, 0xfffffed4 */ {  u32 a = r_edx; u32 b = 0xfffffed4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d51ed: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d51f1: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d51f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d51f8: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d51fb:; BB(0x005d51fb);
    /* 005d51fb: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d5202: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5209: mov ebp, dword ptr [esp + 0x88c] */ r_ebp = R32((u32)(r_esp+0x88cu));
    /* 005d5210: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5214: add edx, 0xffffff38 */ {  u32 a = r_edx; u32 b = 0xffffff38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d521a: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d521e: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d5225: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005d5228: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d522b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d522e: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5235: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d5238:; BB(0x005d5238);
    /* 005d5238: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d523f: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5246: mov ebp, dword ptr [esp + 0x894] */ r_ebp = R32((u32)(r_esp+0x894u));
    /* 005d524d: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5251: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5257: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d525b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d525d: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d5263:; BB(0x005d5263);
    /* 005d5263: fld dword ptr [0x92c440] */ FPUSH(R_F32((u32)(0x92c440u)));
    /* 005d5269: mov eax, dword ptr [esp + 0x894] */ r_eax = R32((u32)(r_esp+0x894u));
    /* 005d5270: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005d5273: mov edx, dword ptr [esp + 0x894] */ r_edx = R32((u32)(r_esp+0x894u));
    /* 005d527a: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005d527d: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d5283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5284: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d5287:; BB(0x005d5287);
    /* 005d5287: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d528e: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5295: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5299: add edx, 0xffffff38 */ {  u32 a = r_edx; u32 b = 0xffffff38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d529f: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d52a3: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d52a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d52aa: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
L_005d52ad:; BB(0x005d52ad);
    /* 005d52ad: mov eax, dword ptr [esp + 0x884] */ r_eax = R32((u32)(r_esp+0x884u));
    /* 005d52b4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d52b6: lea ebp, [eax + 0xdf8] */ r_ebp = (u32)(r_eax+0xdf8u);
    /* 005d52bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d52be: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d52c3u); f_0069792c();
    /* 005d52c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d52c5: je 0x5d5354 */ if (fZ) goto L_005d5354;
L_005d52cb:; BB(0x005d52cb);
    /* 005d52cb: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d52d2: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d52d5: jne 0x5d5354 */ if (!fZ) goto L_005d5354;
L_005d52d7:; BB(0x005d52d7);
    /* 005d52d7: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d52de: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005d52e2: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d52e9: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d52ec: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005d52f0: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d52f7: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d52fe: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5302: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5305: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 005d5309: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d5310: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d5317: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005d531b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d531e: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 005d5322: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d5329: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d5330: movzx eax, word ptr [eax + 8] */ r_eax = (u32)R16((u32)(r_eax+0x8u));
    /* 005d5334: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5337: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d533b: mov eax, dword ptr [esp + 0x88c] */ r_eax = R32((u32)(r_esp+0x88cu));
    /* 005d5342: mov edx, dword ptr [esp + 0x88c] */ r_edx = R32((u32)(r_esp+0x88cu));
    /* 005d5349: movzx eax, word ptr [eax + 0xa] */ r_eax = (u32)R16((u32)(r_eax+0xau));
    /* 005d534d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5350: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
L_005d5354:; BB(0x005d5354);
    /* 005d5354: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5356: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d5358: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d535du); f_0069792c();
    /* 005d535d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d535f: je 0x5d501c */ if (fZ) goto L_005d501c;
L_005d5365:; BB(0x005d5365);
    /* 005d5365: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d536c: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d536f: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d5375:; BB(0x005d5375);
    /* 005d5375: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d537c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d537f: jne 0x5d501c */ if (!fZ) goto L_005d501c;
L_005d5385:; BB(0x005d5385);
    /* 005d5385: mov eax, dword ptr [esp + 0x888] */ r_eax = R32((u32)(r_esp+0x888u));
    /* 005d538c: mov ecx, dword ptr [esp + 0x888] */ r_ecx = R32((u32)(r_esp+0x888u));
    /* 005d5393: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005d5397: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d539d: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 005d53a1: add esp, 0x87c */ {  u32 a = r_esp; u32 b = 0x87cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d53a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d53a8: ret 0x14 */ FN_RET(0x005d4e14); r_esp += 24; return;
}

