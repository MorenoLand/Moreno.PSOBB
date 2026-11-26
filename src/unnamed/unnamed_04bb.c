#include "protos.h"

void f_004bb02c(void) /* sub_4BB02C */
{
    FN_ENTER(0x004bb02c);
    /* 004bb02c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb02d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bb02f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb031: call 0x4bb050 */ r_esp -= 4; W32(r_esp, 0x4bb036u); f_004bb050();
    /* 004bb036: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bb03a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb03c: jne 0x4bb042 */ if (!fZ) goto L_004bb042;
L_004bb03e:; BB(0x004bb03e);
    /* 004bb03e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb03f: ret 4 */ FN_RET(0x004bb02c); r_esp += 8; return;
L_004bb042:; BB(0x004bb042);
    /* 004bb042: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb043: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bb048u); f_005c2f74();
    /* 004bb048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bb049: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb04a: ret 4 */ FN_RET(0x004bb02c); r_esp += 8; return;
}

void f_004bb050(void) /* sub_4BB050 */
{
    FN_ENTER(0x004bb050);
    /* 004bb050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb051: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb055: push 0x8d0f80 */ { u32 v = 0x8d0f80u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb068: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb06b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb06e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bb071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bb074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bb077: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bb07a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb07d: mov dword ptr [ecx], 0xafb120 */ W32((u32)(r_ecx), 0xafb120u);
    /* 004bb083: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bb08a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4bb08fu); f_008171e8();
    /* 004bb08f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb099: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb09b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb09c: ret  */ FN_RET(0x004bb050); r_esp += 4; return;
}

void f_004bb0a0(void) /* sub_4BB0A0 */
{
    FN_ENTER(0x004bb0a0);
    /* 004bb0a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bb0a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb0a5: call 0x4bb0c4 */ r_esp -= 4; W32(r_esp, 0x4bb0aau); f_004bb0c4();
    /* 004bb0aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bb0ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb0b0: jne 0x4bb0b6 */ if (!fZ) goto L_004bb0b6;
L_004bb0b2:; BB(0x004bb0b2);
    /* 004bb0b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb0b3: ret 4 */ FN_RET(0x004bb0a0); r_esp += 8; return;
L_004bb0b6:; BB(0x004bb0b6);
    /* 004bb0b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bb0bcu); f_005c2f74();
    /* 004bb0bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bb0bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb0be: ret 4 */ FN_RET(0x004bb0a0); r_esp += 8; return;
}

void f_004bb0c4(void) /* sub_4BB0C4 */
{
    FN_ENTER(0x004bb0c4);
    /* 004bb0c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb0c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0c9: push 0x8d0f9c */ { u32 v = 0x8d0f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb0d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb0d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb0dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb0df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb0e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bb0e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bb0e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bb0eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bb0ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb0f1: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 004bb0f7: mov dword ptr [ecx], 0xafb140 */ W32((u32)(r_ecx), 0xafb140u);
    /* 004bb0fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb0ff: je 0x4bb11b */ if (fZ) goto L_004bb11b;
L_004bb101:; BB(0x004bb101);
    /* 004bb101: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb104: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bb108: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb10d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bb111: mov dword ptr [ecx + 0xf4], 0 */ W32((u32)(r_ecx+0xf4u), 0x0u);
L_004bb11b:; BB(0x004bb11b);
    /* 004bb11b: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 004bb121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb123: je 0x4bb13f */ if (fZ) goto L_004bb13f;
L_004bb125:; BB(0x004bb125);
    /* 004bb125: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb128: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bb12c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb131: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bb135: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
L_004bb13f:; BB(0x004bb13f);
    /* 004bb13f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bb146: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x4bb14bu); f_005219f0();
    /* 004bb14b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb14e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb155: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb158: ret  */ FN_RET(0x004bb0c4); r_esp += 4; return;
}

void f_004bb15c(void) /* sub_4BB15C */
{
    FN_ENTER(0x004bb15c);
    /* 004bb15c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb15d: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb15f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb161: push 0x8d0fb8 */ { u32 v = 0x8d0fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb166: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb16c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb16d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb174: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb177: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb17a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004bb17d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004bb180: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004bb183: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004bb186: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bb189: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004bb18c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004bb18f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004bb192: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004bb195: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004bb198: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004bb19b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bb1a0u); f_008193cc();
    /* 004bb1a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bb1a7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb1aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bb1ad: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004bb1b0: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004bb1b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bb1b6: mov dword ptr [eax], 0xafb120 */ W32((u32)(r_eax), 0xafb120u);
    /* 004bb1bc: mov edx, dword ptr [0x9abcd4] */ r_edx = R32((u32)(0x9abcd4u));
    /* 004bb1c2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004bb1c5: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 004bb1c8: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004bb1ca: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004bb1cd: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004bb1d0: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 004bb1d3: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 004bb1d6: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004bb1d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bb1db: mov ecx, dword ptr [ecx*8 + 0x907268] */ r_ecx = R32((u32)(r_ecx*8+0x907268u));
    /* 004bb1e2: lea ebx, [eax + 0x20] */ r_ebx = (u32)(r_eax+0x20u);
    /* 004bb1e5: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bb1e8: mov edx, ecx */ r_edx = r_ecx;
    /* 004bb1ea: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004bb1ed: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bb1ef: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004bb1f1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004bb1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb1f6: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4bb1fbu); f_00782b64();
    /* 004bb1fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb1fe: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb201: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004bb204: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bb207: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb20a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004bb20d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb20f: mov ecx, dword ptr [edx*8 + 0x907260] */ r_ecx = R32((u32)(r_edx*8+0x907260u));
    /* 004bb216: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004bb21d: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 004bb220: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb223: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb22a: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb22c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb22d: ret 0x10 */ FN_RET(0x004bb15c); r_esp += 20; return;
}

void f_004bb230(void) /* sub_4BB230 */
{
    FN_ENTER(0x004bb230);
    /* 004bb230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb231: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb235: push 0x8d0fe0 */ { u32 v = 0x8d0fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb241: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb248: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb24b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb24e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004bb251: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004bb254: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004bb257: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004bb25a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004bb25d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bb260: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004bb263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb265: jle 0x4bb27e */ if ((fZ||fS!=fO)) goto L_004bb27e;
L_004bb267:; BB(0x004bb267);
    /* 004bb267: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bb26a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb26d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bb270: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb273: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb27a: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb27c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb27d: ret  */ FN_RET(0x004bb230); r_esp += 4; return;
L_004bb27e:; BB(0x004bb27e);
    /* 004bb27e: call 0x4b9968 */ r_esp -= 4; W32(r_esp, 0x4bb283u); f_004b9968();
    /* 004bb283: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004bb286: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb288: je 0x4bb2fd */ if (fZ) goto L_004bb2fd;
L_004bb28a:; BB(0x004bb28a);
    /* 004bb28a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004bb291: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb296: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4bb29bu); f_005caba4();
    /* 004bb29b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bb29c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004bb29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb2a1: je 0x4bb2f6 */ if (fZ) goto L_004bb2f6;
L_004bb2a3:; BB(0x004bb2a3);
    /* 004bb2a3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004bb2aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bb2b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bb2b4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bb2b7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004bb2ba: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 004bb2bd: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb2c0: lea edi, [ecx + 0x20] */ r_edi = (u32)(r_ecx+0x20u);
    /* 004bb2c3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004bb2c6: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004bb2c9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004bb2cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004bb2cf: fld dword ptr [edx*8 + 0x90726c] */ FPUSH(R_F32((u32)(r_edx*8+0x90726cu)));
    /* 004bb2d6: fmul dword ptr [0x90725c] */ ST(0) = ST(0) * R_F32((u32)(0x90725cu));
    /* 004bb2dc: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004bb2e0: mov ecx, eax */ r_ecx = r_eax;
    /* 004bb2e2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004bb2e6: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004bb2ea: call 0x4bb368 */ r_esp -= 4; W32(r_esp, 0x4bb2efu); f_004bb368();
    /* 004bb2ef: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004bb2f6:; BB(0x004bb2f6);
    /* 004bb2f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004bb2fd:; BB(0x004bb2fd);
    /* 004bb2fd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004bb300: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004bb303: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bb305: mov esi, dword ptr [eax*8 + 0x907264] */ r_esi = R32((u32)(r_eax*8+0x907264u));
    /* 004bb30c: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004bb30f: lea ebx, [edi + 0x20] */ r_ebx = (u32)(r_edi+0x20u);
    /* 004bb312: mov esi, dword ptr [eax*8 + 0x907260] */ r_esi = R32((u32)(r_eax*8+0x907260u));
    /* 004bb319: mov eax, dword ptr [eax*8 + 0x907268] */ r_eax = R32((u32)(r_eax*8+0x907268u));
    /* 004bb320: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004bb321: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x004bb321, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004bb321, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004bb323: lea ecx, [edi + 0x28] */ r_ecx = (u32)(r_edi+0x28u);
    /* 004bb326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb328: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb329: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4bb32eu); f_00782b64();
    /* 004bb32e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb331: mov edx, edi */ r_edx = r_edi;
    /* 004bb333: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004bb336: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb339: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004bb33c: jne 0x4bb267 */ if (!fZ) goto L_004bb267;
L_004bb342:; BB(0x004bb342);
    /* 004bb342: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bb345: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb348: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bb34b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bb34f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb354: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bb358: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb35b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb362: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb365: ret  */ FN_RET(0x004bb230); r_esp += 4; return;
}

void f_004bb368(void) /* sub_4BB368 */
{
    FN_ENTER(0x004bb368);
    /* 004bb368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb369: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb36b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb36d: push 0x8d0ffc */ { u32 v = 0x8d0ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb380: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb386: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004bb389: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004bb38c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004bb38f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004bb392: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bb395: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004bb398: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bb39b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004bb39e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004bb3a1: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004bb3a4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004bb3a7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004bb3aa: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x4bb3afu); f_00521bbc();
    /* 004bb3af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bb3b6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb3b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bb3bc: mov dword ptr [eax], 0xafb140 */ W32((u32)(r_eax), 0xafb140u);
    /* 004bb3c2: mov edx, dword ptr [0x9abcd8] */ r_edx = R32((u32)(0x9abcd8u));
    /* 004bb3c8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3ca: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb3cf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004bb3d2: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 004bb3d4: mov dword ptr [eax + 0xc4], ebx */ W32((u32)(r_eax+0xc4u), r_ebx);
    /* 004bb3da: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 004bb3dd: mov dword ptr [eax + 0xc8], esi */ W32((u32)(r_eax+0xc8u), r_esi);
    /* 004bb3e3: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 004bb3e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bb3e9: mov dword ptr [eax + 0xcc], edi */ W32((u32)(r_eax+0xccu), r_edi);
    /* 004bb3ef: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 004bb3f2: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004bb3f5: mov dword ptr [eax + 0x40], edi */ W32((u32)(r_eax+0x40u), r_edi);
    /* 004bb3f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004bb3fa: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 004bb400: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004bb403: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004bb409: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004bb40c: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 004bb412: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 004bb418: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb41b: mov dword ptr [eax + 0xc], 0x40400000 */ W32((u32)(r_eax+0xcu), 0x40400000u);
    /* 004bb422: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bb425: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 004bb42f: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 004bb435: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bb437: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 004bb43d: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
    /* 004bb447: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 004bb44d: mov dword ptr [edx + 0xd8], 0 */ W32((u32)(r_edx+0xd8u), 0x0u);
    /* 004bb457: mov dword ptr [edx + 0xdc], 0x3f800000 */ W32((u32)(r_edx+0xdcu), 0x3f800000u);
    /* 004bb461: mov dword ptr [edx + 0xe0], 0x3f800000 */ W32((u32)(r_edx+0xe0u), 0x3f800000u);
    /* 004bb46b: mov dword ptr [edx + 0xe4], 0x3f800000 */ W32((u32)(r_edx+0xe4u), 0x3f800000u);
    /* 004bb475: mov dword ptr [edx + 0xf0], 0 */ W32((u32)(r_edx+0xf0u), 0x0u);
    /* 004bb47f: add edx, 0xc4 */ {  u32 a = r_edx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004bb485: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb486: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4bb48bu); f_0050981c();
    /* 004bb48b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb48e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb490: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb495: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 004bb49b: add edx, 0xc4 */ {  u32 a = r_edx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004bb4a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4a2: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4bb4a7u); f_0050981c();
    /* 004bb4a7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb4aa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bb4ad: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004bb4b0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bb4b3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb4b6: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004bb4bc: mov eax, edx */ r_eax = r_edx;
    /* 004bb4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb4c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb4cb: ret 0x14 */ FN_RET(0x004bb368); r_esp += 24; return;
}

void f_004bb4d0(void) /* sub_4BB4D0 */
{
    FN_ENTER(0x004bb4d0);
    /* 004bb4d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb4d2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb4d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bb4d7: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 004bb4dd: fcom dword ptr [0x90724c] */ fx_compare(ST(0), R_F32((u32)(0x90724cu))); 
    /* 004bb4e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bb4e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bb4e6: jbe 0x4bb551 */ if ((fC||fZ)) goto L_004bb551;
L_004bb4e8:; BB(0x004bb4e8);
    /* 004bb4e8: fld dword ptr [0x907248] */ FPUSH(R_F32((u32)(0x907248u)));
    /* 004bb4ee: fadd dword ptr [ebx + 0xf0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xf0u));
    /* 004bb4f4: fld dword ptr [0x907244] */ FPUSH(R_F32((u32)(0x907244u)));
    /* 004bb4fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bb4fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bb4fe: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004bb504: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bb505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb507: ja 0x4bb50b */ if ((!fC&&!fZ)) goto L_004bb50b;
L_004bb509:; BB(0x004bb509);
    /* 004bb509: fst st(2) */ ST(2) = ST(0);
L_004bb50b:; BB(0x004bb50b);
    /* 004bb50b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bb50d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb50f: fst dword ptr [ebx + 0xf0] */ W_F32((u32)(r_ebx+0xf0u), ST(0));
    /* 004bb515: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004bb517: fld dword ptr [ebx + 0xb8] */ FPUSH(R_F32((u32)(r_ebx+0xb8u)));
    /* 004bb51d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bb51f: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 004bb525: fld dword ptr [0x907240] */ FPUSH(R_F32((u32)(0x907240u)));
    /* 004bb52b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004bb52d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bb52f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb531: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 004bb537: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb539: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 004bb53f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb541: fst dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0));
    /* 004bb547: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb549: fst dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0));
    /* 004bb54f: jmp 0x4bb596 */ goto L_004bb596;
L_004bb551:; BB(0x004bb551);
    /* 004bb551: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bb553: mov eax, 0x4195999a */ r_eax = 0x4195999au;
    /* 004bb558: fld dword ptr [ebx + 0xb8] */ FPUSH(R_F32((u32)(r_ebx+0xb8u)));
    /* 004bb55e: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 004bb564: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004bb56a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb56c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004bb56e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bb570: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 004bb576: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bb578: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bb57a: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 004bb580: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb582: fst dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0));
    /* 004bb588: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb58a: fst dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0));
    /* 004bb590: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
L_004bb596:; BB(0x004bb596);
    /* 004bb596: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bb598: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004bb59b: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004bb59e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bb5a0: mov esi, eax */ r_esi = r_eax;
L_004bb5a2:; BB(0x004bb5a2);
    /* 004bb5a2: mov ecx, dword ptr [ebx + esi*4 + 0xf4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0xf4u));
    /* 004bb5a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bb5ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb5ae: je 0x4bb5bc */ if (fZ) goto L_004bb5bc;
L_004bb5b0:; BB(0x004bb5b0);
    /* 004bb5b0: lea edx, [ebx + 0xc4] */ r_edx = (u32)(r_ebx+0xc4u);
    /* 004bb5b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5b7: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4bb5bcu); f_00508db8();
L_004bb5bc:; BB(0x004bb5bc);
    /* 004bb5bc: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bb5bf: jl 0x4bb5a2 */ if ((fS!=fO)) goto L_004bb5a2;
L_004bb5c1:; BB(0x004bb5c1);
    /* 004bb5c1: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 004bb5c7: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bb5ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb5cc: jne 0x4bb604 */ if (!fZ) goto L_004bb604;
L_004bb5ce:; BB(0x004bb5ce);
    /* 004bb5ce: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 004bb5d1: lea eax, [ebx + 0xd0] */ r_eax = (u32)(r_ebx+0xd0u);
    /* 004bb5d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb5da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb5db: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x4bb5e0u); f_007b4c58();
    /* 004bb5e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb5e2: je 0x4bb5f5 */ if (fZ) goto L_004bb5f5;
L_004bb5e4:; BB(0x004bb5e4);
    /* 004bb5e4: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004bb5ea: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb5ed: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 004bb5f3: jmp 0x4bb604 */ goto L_004bb604;
L_004bb5f5:; BB(0x004bb5f5);
    /* 004bb5f5: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004bb5fb: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004bb5fe: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
L_004bb604:; BB(0x004bb604);
    /* 004bb604: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004bb607: fcom dword ptr [0x906bbc] */ fx_compare(ST(0), R_F32((u32)(0x906bbcu))); 
    /* 004bb60d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bb60f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bb610: ja 0x4bb65d */ if ((!fC&&!fZ)) goto L_004bb65d;
L_004bb612:; BB(0x004bb612);
    /* 004bb612: fcomp dword ptr [0x906bc0] */ fx_compare(ST(0), R_F32((u32)(0x906bc0u))); FPOP();
    /* 004bb618: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bb61a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bb61b: jb 0x4bb65f */ if (fC) goto L_004bb65f;
L_004bb61d:; BB(0x004bb61d);
    /* 004bb61d: mov eax, dword ptr [0x907238] */ r_eax = R32((u32)(0x907238u));
    /* 004bb622: mov dword ptr [esp + 4], 0x40400000 */ W32((u32)(r_esp+0x4u), 0x40400000u);
    /* 004bb62a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bb62d: call 0x4b98c4 */ r_esp -= 4; W32(r_esp, 0x4bb632u); f_004b98c4();
    /* 004bb632: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004bb634: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004bb638: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bb63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb63c: push 0x9abcdc */ { u32 v = 0x9abcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb641: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb643: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x4bb646u); call_ind(t); }
    /* 004bb646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb648: je 0x4bb65f */ if (fZ) goto L_004bb65f;
L_004bb64a:; BB(0x004bb64a);
    /* 004bb64a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004bb64e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb653: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004bb657: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb65a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb65b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bb65c: ret  */ FN_RET(0x004bb4d0); r_esp += 4; return;
L_004bb65d:; BB(0x004bb65d);
    /* 004bb65d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004bb65f:; BB(0x004bb65f);
    /* 004bb65f: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 004bb665: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bb668: mov dword ptr [ebx + 0xe8], eax */ W32((u32)(r_ebx+0xe8u), r_eax);
    /* 004bb66e: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bb671: jl 0x4bb686 */ if ((fS!=fO)) goto L_004bb686;
L_004bb673:; BB(0x004bb673);
    /* 004bb673: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004bb677: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb67c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004bb680: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb683: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb684: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bb685: ret  */ FN_RET(0x004bb4d0); r_esp += 4; return;
L_004bb686:; BB(0x004bb686);
    /* 004bb686: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bb689: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb68a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bb68b: ret  */ FN_RET(0x004bb4d0); r_esp += 4; return;
}

void f_004bb68c(void) /* sub_4BB68C */
{
    FN_ENTER(0x004bb68c);
    /* 004bb68c: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 004bb692: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb694: je 0x4bb6b2 */ if (fZ) goto L_004bb6b2;
L_004bb696:; BB(0x004bb696);
    /* 004bb696: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 004bb699: lea eax, [ecx + 0xd0] */ r_eax = (u32)(r_ecx+0xd0u);
    /* 004bb69f: add ecx, 0xdc */ {  u32 a = r_ecx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bb6a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6aa: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x4bb6afu); f_00520d18();
    /* 004bb6af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004bb6b2:; BB(0x004bb6b2);
    /* 004bb6b2: ret  */ FN_RET(0x004bb68c); r_esp += 4; return;
}

void f_004bb6e0(void) /* sub_4BB6E0 */
{
    FN_ENTER(0x004bb6e0);
    /* 004bb6e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bb6e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb6e5: call 0x4bb704 */ r_esp -= 4; W32(r_esp, 0x4bb6eau); f_004bb704();
    /* 004bb6ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bb6ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb6f0: jne 0x4bb6f6 */ if (!fZ) goto L_004bb6f6;
L_004bb6f2:; BB(0x004bb6f2);
    /* 004bb6f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb6f3: ret 4 */ FN_RET(0x004bb6e0); r_esp += 8; return;
L_004bb6f6:; BB(0x004bb6f6);
    /* 004bb6f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb6f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bb6fcu); f_005c2f74();
    /* 004bb6fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bb6fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb6fe: ret 4 */ FN_RET(0x004bb6e0); r_esp += 8; return;
}

void f_004bb704(void) /* sub_4BB704 */
{
    FN_ENTER(0x004bb704);
    /* 004bb704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb705: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb709: push 0x8d1018 */ { u32 v = 0x8d1018u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb70e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb71c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb71f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb722: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bb725: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bb728: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bb72b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bb72e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb731: mov dword ptr [ecx], 0xafb240 */ W32((u32)(r_ecx), 0xafb240u);
    /* 004bb737: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bb73e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4bb743u); f_008171e8();
    /* 004bb743: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb746: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb74d: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb74f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb750: ret  */ FN_RET(0x004bb704); r_esp += 4; return;
}

void f_004bb754(void) /* sub_4BB754 */
{
    FN_ENTER(0x004bb754);
    /* 004bb754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb755: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bb757: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bb759: call 0x4bb778 */ r_esp -= 4; W32(r_esp, 0x4bb75eu); f_004bb778();
    /* 004bb75e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bb762: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bb764: jne 0x4bb76a */ if (!fZ) goto L_004bb76a;
L_004bb766:; BB(0x004bb766);
    /* 004bb766: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb767: ret 4 */ FN_RET(0x004bb754); r_esp += 8; return;
L_004bb76a:; BB(0x004bb76a);
    /* 004bb76a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bb76b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bb770u); f_005c2f74();
    /* 004bb770: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bb771: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bb772: ret 4 */ FN_RET(0x004bb754); r_esp += 8; return;
}

void f_004bb778(void) /* sub_4BB778 */
{
    FN_ENTER(0x004bb778);
    /* 004bb778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb779: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb77b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb77d: push 0x8d1034 */ { u32 v = 0x8d1034u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb790: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb796: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bb799: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bb79c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bb79f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bb7a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb7a5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004bb7a8: mov dword ptr [ecx], 0xafb250 */ W32((u32)(r_ecx), 0xafb250u);
    /* 004bb7ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bb7b0: je 0x4bb7c9 */ if (fZ) goto L_004bb7c9;
L_004bb7b2:; BB(0x004bb7b2);
    /* 004bb7b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bb7b5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bb7b9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bb7be: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bb7c2: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_004bb7c9:; BB(0x004bb7c9);
    /* 004bb7c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004bb7d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4bb7d5u); f_008171e8();
    /* 004bb7d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bb7d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bb7df: mov esp, ebp */ r_esp = r_ebp;
    /* 004bb7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bb7e2: ret  */ FN_RET(0x004bb778); r_esp += 4; return;
}

void f_004bb7e4(void) /* sub_4BB7E4 */
{
    FN_ENTER(0x004bb7e4);
    /* 004bb7e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7e5: mov ebp, esp */ r_ebp = r_esp;
    /* 004bb7e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7e9: push 0x8d1050 */ { u32 v = 0x8d1050u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bb7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bb7f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bb7fc: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bb7ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bb802: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004bb805: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004bb808: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004bb80b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004bb80e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bb811: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004bb814: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004bb817: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004bb81a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004bb81d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4bb822u); f_008193cc();
    /* 004bb822: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bb829: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004bb82c: mov dword ptr [edx], 0xafb240 */ W32((u32)(r_edx), 0xafb240u);
    /* 004bb832: mov eax, dword ptr [0x9abce4] */ r_eax = R32((u32)(0x9abce4u));
    /* 004bb837: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb839: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004bb83c: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4bb841u); f_004b9970();
    /* 004bb841: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004bb844: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004bb846: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004bb849: call 0x4b9980 */ r_esp -= 4; W32(r_esp, 0x4bb84eu); f_004b9980();
    /* 004bb84e: mov edx, eax */ r_edx = r_eax;
    /* 004bb850: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bb853: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004bb856: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004bb859: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004bb85c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bb85f: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 004bb865: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004bb868: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004bb86a: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 004bb86d: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 004bb870: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 004bb873: mov esi, dword ptr [0xa47b40] */ r_esi = R32((u32)(0xa47b40u));
    /* 004bb879: mov dword ptr [eax + 0x50], esi */ W32((u32)(r_eax+0x50u), r_esi);
    /* 004bb87c: mov edi, dword ptr [0xa47b44] */ r_edi = R32((u32)(0xa47b44u));
    /* 004bb882: mov dword ptr [eax + 0x54], edi */ W32((u32)(r_eax+0x54u), r_edi);
    /* 004bb885: mov edx, dword ptr [0xa47b48] */ r_edx = R32((u32)(0xa47b48u));
    /* 004bb88b: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 004bb88e: mov edx, dword ptr [0xa47f44] */ r_edx = R32((u32)(0xa47f44u));
    /* 004bb894: mov dword ptr [eax + 0xf8], edx */ W32((u32)(r_eax+0xf8u), r_edx);
    /* 004bb89a: mov edx, dword ptr [0xa47b4c] */ r_edx = R32((u32)(0xa47b4cu));
    /* 004bb8a0: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 004bb8a3: mov edx, dword ptr [0xa47b50] */ r_edx = R32((u32)(0xa47b50u));
    /* 004bb8a9: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 004bb8ac: mov edx, dword ptr [0xa47b54] */ r_edx = R32((u32)(0xa47b54u));
    /* 004bb8b2: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 004bb8b5: mov edx, dword ptr [0xa47f48] */ r_edx = R32((u32)(0xa47f48u));
    /* 004bb8bb: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 004bb8c1: mov edx, dword ptr [0xa47b58] */ r_edx = R32((u32)(0xa47b58u));
    /* 004bb8c7: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004bb8ca: mov edx, dword ptr [0xa47b5c] */ r_edx = R32((u32)(0xa47b5cu));
    /* 004bb8d0: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004bb8d3: mov edx, dword ptr [0xa47b60] */ r_edx = R32((u32)(0xa47b60u));
    /* 004bb8d9: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 004bb8dc: mov edx, dword ptr [0xa47f4c] */ r_edx = R32((u32)(0xa47f4cu));
    /* 004bb8e2: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 004bb8e8: mov edx, dword ptr [0xa47b64] */ r_edx = R32((u32)(0xa47b64u));
    /* 004bb8ee: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 004bb8f1: mov edx, dword ptr [0xa47b68] */ r_edx = R32((u32)(0xa47b68u));
    /* 004bb8f7: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 004bb8fa: mov edx, dword ptr [0xa47b6c] */ r_edx = R32((u32)(0xa47b6cu));
    /* 004bb900: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 004bb903: mov edx, dword ptr [0xa47f50] */ r_edx = R32((u32)(0xa47f50u));
    /* 004bb909: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004bb90f: mov edx, dword ptr [0xa47b70] */ r_edx = R32((u32)(0xa47b70u));
    /* 004bb915: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 004bb91b: mov edx, dword ptr [0xa47b74] */ r_edx = R32((u32)(0xa47b74u));
    /* 004bb921: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 004bb927: mov edx, dword ptr [0xa47b78] */ r_edx = R32((u32)(0xa47b78u));
    /* 004bb92d: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 004bb933: mov edx, dword ptr [0xa47f54] */ r_edx = R32((u32)(0xa47f54u));
    /* 004bb939: mov dword ptr [eax + 0x108], edx */ W32((u32)(r_eax+0x108u), r_edx);
    /* 004bb93f: mov edx, dword ptr [0xa47b7c] */ r_edx = R32((u32)(0xa47b7cu));
    /* 004bb945: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 004bb94b: mov edx, dword ptr [0xa47b80] */ r_edx = R32((u32)(0xa47b80u));
    /* 004bb951: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 004bb957: mov edx, dword ptr [0xa47b84] */ r_edx = R32((u32)(0xa47b84u));
    /* 004bb95d: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 004bb963: mov edx, dword ptr [0xa47f58] */ r_edx = R32((u32)(0xa47f58u));
    /* 004bb969: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
    /* 004bb96f: mov edx, dword ptr [0xa47b88] */ r_edx = R32((u32)(0xa47b88u));
    /* 004bb975: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 004bb97b: mov edx, dword ptr [0xa47b8c] */ r_edx = R32((u32)(0xa47b8cu));
    /* 004bb981: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 004bb987: mov edx, dword ptr [0xa47b90] */ r_edx = R32((u32)(0xa47b90u));
    /* 004bb98d: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 004bb993: mov edx, dword ptr [0xa47f5c] */ r_edx = R32((u32)(0xa47f5cu));
    /* 004bb999: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
    /* 004bb99f: mov edx, dword ptr [0xa47b94] */ r_edx = R32((u32)(0xa47b94u));
    /* 004bb9a5: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 004bb9ab: mov edx, dword ptr [0xa47b98] */ r_edx = R32((u32)(0xa47b98u));
    /* 004bb9b1: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 004bb9b7: mov edx, dword ptr [0xa47b9c] */ r_edx = R32((u32)(0xa47b9cu));
    /* 004bb9bd: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 004bb9c3: mov edx, dword ptr [0xa47f60] */ r_edx = R32((u32)(0xa47f60u));
    /* 004bb9c9: mov dword ptr [eax + 0x114], edx */ W32((u32)(r_eax+0x114u), r_edx);
    /* 004bb9cf: mov edx, dword ptr [0xa47ba0] */ r_edx = R32((u32)(0xa47ba0u));
    /* 004bb9d5: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 004bb9db: mov edx, dword ptr [0xa47ba4] */ r_edx = R32((u32)(0xa47ba4u));
    /* 004bb9e1: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 004bb9e7: mov edx, dword ptr [0xa47ba8] */ r_edx = R32((u32)(0xa47ba8u));
    /* 004bb9ed: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 004bb9f3: mov edx, dword ptr [0xa47f64] */ r_edx = R32((u32)(0xa47f64u));
    /* 004bb9f9: mov dword ptr [eax + 0x118], edx */ W32((u32)(r_eax+0x118u), r_edx);
    /* 004bb9ff: mov edx, dword ptr [0xa47bac] */ r_edx = R32((u32)(0xa47bacu));
    /* 004bba05: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004bba0b: mov edx, dword ptr [0xa47bb0] */ r_edx = R32((u32)(0xa47bb0u));
    /* 004bba11: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 004bba17: mov edx, dword ptr [0xa47bb4] */ r_edx = R32((u32)(0xa47bb4u));
    /* 004bba1d: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 004bba23: mov edx, dword ptr [0xa47f68] */ r_edx = R32((u32)(0xa47f68u));
    /* 004bba29: mov dword ptr [eax + 0x11c], edx */ W32((u32)(r_eax+0x11cu), r_edx);
    /* 004bba2f: mov edx, dword ptr [0xa47bb8] */ r_edx = R32((u32)(0xa47bb8u));
    /* 004bba35: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 004bba3b: mov edx, dword ptr [0xa47bbc] */ r_edx = R32((u32)(0xa47bbcu));
    /* 004bba41: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 004bba47: mov edx, dword ptr [0xa47bc0] */ r_edx = R32((u32)(0xa47bc0u));
    /* 004bba4d: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 004bba53: mov edx, dword ptr [0xa47f6c] */ r_edx = R32((u32)(0xa47f6cu));
    /* 004bba59: mov dword ptr [eax + 0x120], edx */ W32((u32)(r_eax+0x120u), r_edx);
    /* 004bba5f: mov edx, dword ptr [0xa47bc4] */ r_edx = R32((u32)(0xa47bc4u));
    /* 004bba65: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 004bba6b: mov edx, dword ptr [0xa47bc8] */ r_edx = R32((u32)(0xa47bc8u));
    /* 004bba71: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004bba77: mov edx, dword ptr [0xa47bcc] */ r_edx = R32((u32)(0xa47bccu));
    /* 004bba7d: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 004bba83: mov edx, dword ptr [0xa47f70] */ r_edx = R32((u32)(0xa47f70u));
    /* 004bba89: mov dword ptr [eax + 0x124], edx */ W32((u32)(r_eax+0x124u), r_edx);
    /* 004bba8f: mov edx, dword ptr [0xa47bd0] */ r_edx = R32((u32)(0xa47bd0u));
    /* 004bba95: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 004bba9b: mov edx, dword ptr [0xa47bd4] */ r_edx = R32((u32)(0xa47bd4u));
    /* 004bbaa1: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 004bbaa7: mov edx, dword ptr [0xa47bd8] */ r_edx = R32((u32)(0xa47bd8u));
    /* 004bbaad: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 004bbab3: mov edx, dword ptr [0xa47f74] */ r_edx = R32((u32)(0xa47f74u));
    /* 004bbab9: mov dword ptr [eax + 0x128], edx */ W32((u32)(r_eax+0x128u), r_edx);
    /* 004bbabf: mov edx, dword ptr [0xa47bdc] */ r_edx = R32((u32)(0xa47bdcu));
    /* 004bbac5: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004bbacb: mov edx, dword ptr [0xa47be0] */ r_edx = R32((u32)(0xa47be0u));
    /* 004bbad1: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 004bbad7: mov edx, dword ptr [0xa47be4] */ r_edx = R32((u32)(0xa47be4u));
    /* 004bbadd: mov dword ptr [eax + 0xf4], edx */ W32((u32)(r_eax+0xf4u), r_edx);
    /* 004bbae3: mov edx, dword ptr [0xa47f78] */ r_edx = R32((u32)(0xa47f78u));
    /* 004bbae9: mov dword ptr [eax + 0x12c], edx */ W32((u32)(r_eax+0x12cu), r_edx);
    /* 004bbaef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bbaf4u); f_008587a5();
    /* 004bbaf4: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004bbaf7: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004bbafa: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004bbafd: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004bbb00: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004bbb03: fdiv dword ptr [0x907418] */ ST(0) = ST(0) / R_F32((u32)(0x907418u));
    /* 004bbb09: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bbb0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bbb0e: mov dword ptr [ebx + 0x138], 0x3f4ccccd */ W32((u32)(r_ebx+0x138u), 0x3f4ccccdu);
    /* 004bbb18: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004bbb1b: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004bbb1e: mov dword ptr [ebx + 0x144], 0x5ef */ W32((u32)(r_ebx+0x144u), 0x5efu);
    /* 004bbb28: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004bbb2b: fadd dword ptr [ecx*4 + 0x9072d8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9072d8u));
    /* 004bbb32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbb34: fstp dword ptr [ebx + 0x134] */ W_F32((u32)(r_ebx+0x134u), ST(0)); FPOP();
    /* 004bbb3a: mov dword ptr [ebx + 0x13c], eax */ W32((u32)(r_ebx+0x13cu), r_eax);
    /* 004bbb40: mov dword ptr [ebx + 0x140], eax */ W32((u32)(r_ebx+0x140u), r_eax);
    /* 004bbb46: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4bbb4bu); f_008587a5();
    /* 004bbb4b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bbb4e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bbb51: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bbb54: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004bbb57: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004bbb5a: fdiv dword ptr [0x907418] */ ST(0) = ST(0) / R_F32((u32)(0x907418u));
    /* 004bbb60: fmul dword ptr [0x907414] */ ST(0) = ST(0) * R_F32((u32)(0x907414u));
    /* 004bbb66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bbb68: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 004bbb6b: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 004bbb6f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bbb74: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004bbb77: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004bbb7a: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bbb7d: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004bbb80: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004bbb83: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004bbb86: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 004bbb8c: mov dword ptr [eax + 0x164], ecx */ W32((u32)(r_eax+0x164u), r_ecx);
    /* 004bbb92: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004bbb95: mov dword ptr [eax + 0x158], 0 */ W32((u32)(r_eax+0x158u), 0x0u);
    /* 004bbb9f: mov dword ptr [eax + 0x15c], 0 */ W32((u32)(r_eax+0x15cu), 0x0u);
    /* 004bbba9: mov dword ptr [eax + 0x168], 0x78 */ W32((u32)(r_eax+0x168u), 0x78u);
    /* 004bbbb3: mov dword ptr [eax + 0x14c], 0 */ W32((u32)(r_eax+0x14cu), 0x0u);
    /* 004bbbbd: mov dword ptr [eax + 0x150], 0 */ W32((u32)(r_eax+0x150u), 0x0u);
    /* 004bbbc7: mov dword ptr [eax + 0x154], 0 */ W32((u32)(r_eax+0x154u), 0x0u);
    /* 004bbbd1: mov dword ptr [eax + 0x24], 0x3f800000 */ W32((u32)(r_eax+0x24u), 0x3f800000u);
    /* 004bbbd8: mov dword ptr [eax + 0x28], 0x3f800000 */ W32((u32)(r_eax+0x28u), 0x3f800000u);
    /* 004bbbdf: mov dword ptr [eax + 0x2c], 0x3f800000 */ W32((u32)(r_eax+0x2cu), 0x3f800000u);
    /* 004bbbe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bbbe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bbbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 004bbbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bbbf3: ret 0xc */ FN_RET(0x004bb7e4); r_esp += 16; return;
}

void f_004bbbf8(void) /* sub_4BBBF8 */
{
    FN_ENTER(0x004bbbf8);
    /* 004bbbf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbf9: mov ebx, esp */ r_ebx = r_esp;
    /* 004bbbfb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004bbbfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bbbff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc00: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bbc03: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004bbc05: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bbc07: call 0x4bcca8 */ r_esp -= 4; W32(r_esp, 0x4bbc0cu); f_004bcca8();
    /* 004bbc0c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004bbc0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc11: je 0x4bcc02 */ if (fZ) goto L_004bcc02;
L_004bbc17:; BB(0x004bbc17);
    /* 004bbc17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc1a: je 0x4bcbd8 */ if (fZ) goto L_004bcbd8;
L_004bbc20:; BB(0x004bbc20);
    /* 004bbc20: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc23: je 0x4bcba9 */ if (fZ) goto L_004bcba9;
L_004bbc29:; BB(0x004bbc29);
    /* 004bbc29: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc2c: je 0x4bbca1 */ if (fZ) goto L_004bbca1;
L_004bbc2e:; BB(0x004bbc2e);
    /* 004bbc2e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc31: jne 0x4bbc62 */ if (!fZ) goto L_004bbc62;
L_004bbc33:; BB(0x004bbc33);
    /* 004bbc33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bbc35: call 0x4bcd58 */ r_esp -= 4; W32(r_esp, 0x4bbc3au); f_004bcd58();
    /* 004bbc3a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc3f: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 004bbc42: push dword ptr [eax*4 + 0x9073bc] */ { u32 v = R32((u32)(r_eax*4+0x9073bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bbc49: push dword ptr [ebp + 0x13c] */ { u32 v = R32((u32)(r_ebp+0x13cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bbc4f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bbc54u); f_007a8c74();
    /* 004bbc54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbc57: mov dword ptr [ebp + 0x13c], eax */ W32((u32)(r_ebp+0x13cu), r_eax);
    /* 004bbc5d: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bbc62:; BB(0x004bbc62);
    /* 004bbc62: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc65: jne 0x4bcac1 */ if (!fZ) goto L_004bcac1;
L_004bbc6b:; BB(0x004bbc6b);
    /* 004bbc6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bbc6d: call 0x4bcd58 */ r_esp -= 4; W32(r_esp, 0x4bbc72u); f_004bcd58();
    /* 004bbc72: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbc79: push dword ptr [ebp + 0x140] */ { u32 v = R32((u32)(r_ebp+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bbc7f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bbc84u); f_007a8c74();
    /* 004bbc84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbc87: mov dword ptr [ebp + 0x140], eax */ W32((u32)(r_ebp+0x140u), r_eax);
    /* 004bbc8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbc8f: jne 0x4bcac1 */ if (!fZ) goto L_004bcac1;
L_004bbc95:; BB(0x004bbc95);
    /* 004bbc95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bbc97: call 0x4bcd1c */ r_esp -= 4; W32(r_esp, 0x4bbc9cu); f_004bcd1c();
    /* 004bbc9c: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bbca1:; BB(0x004bbca1);
    /* 004bbca1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004bbca8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004bbcb0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004bbcb8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4bbcbdu); f_0082d7b0();
    /* 004bbcbd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bbcbf: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4bbcc4u); f_00830cd8();
    /* 004bbcc4: mov edx, dword ptr [ebp + 0x130] */ r_edx = R32((u32)(r_ebp+0x130u));
    /* 004bbcca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004bbccc: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4bbcd1u); f_00831308();
    /* 004bbcd1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bbcd4: lea esi, [ebp + 0x40] */ r_esi = (u32)(r_ebp+0x40u);
    /* 004bbcd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbcd9: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4bbcdeu); f_00835c3c();
    /* 004bbcde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbce1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4bbce6u); f_0082da80();
    /* 004bbce6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004bbce9: mov eax, dword ptr [ebp + 0x14c] */ r_eax = R32((u32)(r_ebp+0x14cu));
    /* 004bbcef: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004bbcf2: mov eax, dword ptr [ebp + 0x150] */ r_eax = R32((u32)(r_ebp+0x150u));
    /* 004bbcf8: mov edx, esi */ r_edx = r_esi;
    /* 004bbcfa: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004bbcfe: mov eax, dword ptr [ebp + 0x154] */ r_eax = R32((u32)(r_ebp+0x154u));
    /* 004bbd04: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004bbd08: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4bbd0du); f_0082f9c4();
    /* 004bbd0d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004bbd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bbd11: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4bbd16u); f_007828e4();
    /* 004bbd16: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004bbd1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbd1d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004bbd20: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004bbd24: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004bbd26: fmul qword ptr [0x9072d0] */ ST(0) = ST(0) * R_F64((u32)(0x9072d0u));
    /* 004bbd2c: fdiv qword ptr [0x9072c8] */ ST(0) = ST(0) / R_F64((u32)(0x9072c8u));
    /* 004bbd32: mov edx, dword ptr [ebp + 0x14c] */ r_edx = R32((u32)(r_ebp+0x14cu));
    /* 004bbd38: mov esi, dword ptr [ebp + 0x150] */ r_esi = R32((u32)(r_ebp+0x150u));
    /* 004bbd3e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bbd42: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bbd47: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bbd4c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bbd50: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bbd54: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bbd58: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bbd5c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004bbd60: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bbd65: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004bbd69: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004bbd6d: mov dword ptr [ebp + 0x13c], eax */ W32((u32)(r_ebp+0x13cu), r_eax);
    /* 004bbd73: mov eax, dword ptr [ebp + 0x154] */ r_eax = R32((u32)(r_ebp+0x154u));
    /* 004bbd79: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004bbd7d: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004bbd80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbd82: je 0x4bcad1 */ if (fZ) goto L_004bcad1;
L_004bbd88:; BB(0x004bbd88);
    /* 004bbd88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbd8b: je 0x4bc437 */ if (fZ) goto L_004bc437;
L_004bbd91:; BB(0x004bbd91);
    /* 004bbd91: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbd94: jne 0x4bbdd2 */ if (!fZ) goto L_004bbdd2;
L_004bbd96:; BB(0x004bbd96);
    /* 004bbd96: mov eax, dword ptr [ebp + 0x164] */ r_eax = R32((u32)(r_ebp+0x164u));
    /* 004bbd9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004bbd9f: cmp eax, dword ptr [ebp + 0x168] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x168u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bbda5: jle 0x4bbdc7 */ if ((fZ||fS!=fO)) goto L_004bbdc7;
L_004bbda7:; BB(0x004bbda7);
    /* 004bbda7: mov dword ptr [ebp + 0x164], 0 */ W32((u32)(r_ebp+0x164u), 0x0u);
    /* 004bbdb1: mov dword ptr [ebp + 0x160], 0x3f800000 */ W32((u32)(r_ebp+0x160u), 0x3f800000u);
    /* 004bbdbb: mov dword ptr [ebp + 0x38], 3 */ W32((u32)(r_ebp+0x38u), 0x3u);
    /* 004bbdc2: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bbdc7:; BB(0x004bbdc7);
    /* 004bbdc7: mov dword ptr [ebp + 0x164], eax */ W32((u32)(r_ebp+0x164u), r_eax);
    /* 004bbdcd: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bbdd2:; BB(0x004bbdd2);
    /* 004bbdd2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bbdd5: jne 0x4bcac1 */ if (!fZ) goto L_004bcac1;
L_004bbddb:; BB(0x004bbddb);
    /* 004bbddb: fld dword ptr [ebp + 0x158] */ FPUSH(R_F32((u32)(r_ebp+0x158u)));
    /* 004bbde1: fsub dword ptr [0x9073b8] */ ST(0) = ST(0) - R_F32((u32)(0x9073b8u));
    /* 004bbde7: fcom dword ptr [0x9073b4] */ fx_compare(ST(0), R_F32((u32)(0x9073b4u))); 
    /* 004bbded: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bbdef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bbdf0: jb 0x4bbdfa */ if (fC) goto L_004bbdfa;
L_004bbdf2:; BB(0x004bbdf2);
    /* 004bbdf2: fst dword ptr [ebp + 0x158] */ W_F32((u32)(r_ebp+0x158u), ST(0));
    /* 004bbdf8: jmp 0x4bbe1b */ goto L_004bbe1b;
L_004bbdfa:; BB(0x004bbdfa);
    /* 004bbdfa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bbdfc: mov eax, 0x41a00000 */ r_eax = 0x41a00000u;
    /* 004bbe01: mov dword ptr [ebp + 0x38], 2 */ W32((u32)(r_ebp+0x38u), 0x2u);
    /* 004bbe08: mov dword ptr [ebp + 0x158], eax */ W32((u32)(r_ebp+0x158u), r_eax);
    /* 004bbe0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bbe10: call 0x4bcd30 */ r_esp -= 4; W32(r_esp, 0x4bbe15u); f_004bcd30();
    /* 004bbe15: fld dword ptr [ebp + 0x158] */ FPUSH(R_F32((u32)(r_ebp+0x158u)));
L_004bbe1b:; BB(0x004bbe1b);
    /* 004bbe1b: fld dword ptr [0x907400] */ FPUSH(R_F32((u32)(0x907400u)));
    /* 004bbe21: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004bbe25: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bbe27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bbe29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bbe2a: ja 0x4bbe3c */ if ((!fC&&!fZ)) goto L_004bbe3c;
L_004bbe2c:; BB(0x004bbe2c);
    /* 004bbe2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bbe2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bbe30: mov dword ptr [ebp + 0x15c], 0x3f800000 */ W32((u32)(r_ebp+0x15cu), 0x3f800000u);
    /* 004bbe3a: jmp 0x4bbe44 */ goto L_004bbe44;
L_004bbe3c:; BB(0x004bbe3c);
    /* 004bbe3c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004bbe3e: fstp dword ptr [ebp + 0x15c] */ W_F32((u32)(r_ebp+0x15cu), ST(0)); FPOP();
L_004bbe44:; BB(0x004bbe44);
    /* 004bbe44: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bbe4b: push dword ptr [ebp + 0x140] */ { u32 v = R32((u32)(r_ebp+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bbe51: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bbe56u); f_007a8c74();
    /* 004bbe56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bbe59: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004bbe5d: fmul dword ptr [0x9073f8] */ ST(0) = ST(0) * R_F32((u32)(0x9073f8u));
    /* 004bbe63: fld dword ptr [0x90741c] */ FPUSH(R_F32((u32)(0x90741cu)));
    /* 004bbe69: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 004bbe6c: fld dword ptr [ebp + 0x158] */ FPUSH(R_F32((u32)(r_ebp+0x158u)));
    /* 004bbe72: fld dword ptr [0x9073f4] */ FPUSH(R_F32((u32)(0x9073f4u)));
    /* 004bbe78: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bbe7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbe80: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004bbe82: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbe84: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bbe86: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 004bbe88: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bbe8a: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 004bbe8c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbe8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbe90: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbe96: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 004bbe99: fld dword ptr [0x9073fc] */ FPUSH(R_F32((u32)(0x9073fcu)));
    /* 004bbe9f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbea1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbea3: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbea5: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004bbea9: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004bbead: mov dword ptr [ebp + 0x140], eax */ W32((u32)(r_ebp+0x140u), r_eax);
    /* 004bbeb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbeb5: fchs  */ ST(0) = -ST(0);
    /* 004bbeb7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004bbeb9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bbebb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004bbebd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 004bbebf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbec1: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 004bbec3: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbec9: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004bbecc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbece: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbed4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbed6: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbed8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbeda: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bbedd: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbedf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bbee1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbee3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbee5: fld dword ptr [0x9073f0] */ FPUSH(R_F32((u32)(0x9073f0u)));
    /* 004bbeeb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbeed: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbef3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbef5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbef7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbef9: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 004bbefc: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbefe: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbf00: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbf02: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf08: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 004bbf0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf10: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbf12: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bbf14: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbf16: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbf18: fld dword ptr [0x9073ec] */ FPUSH(R_F32((u32)(0x9073ecu)));
    /* 004bbf1e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf20: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf28: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbf2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf2c: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 004bbf32: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbf34: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbf36: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbf38: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf3e: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 004bbf44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf46: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbf48: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bbf4a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbf4c: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbf4e: fld dword ptr [0x9073e8] */ FPUSH(R_F32((u32)(0x9073e8u)));
    /* 004bbf54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf56: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf5e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbf60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf62: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 004bbf68: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbf6a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbf6c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbf6e: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf74: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 004bbf7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf7c: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbf7e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bbf80: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbf82: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbf84: fld dword ptr [0x9073e4] */ FPUSH(R_F32((u32)(0x9073e4u)));
    /* 004bbf8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf8c: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbf92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf94: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbf96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbf98: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 004bbf9e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbfa0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbfa2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbfa4: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbfaa: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 004bbfb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbfb2: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbfb4: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bbfb6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbfb8: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbfba: fld dword ptr [0x9073e0] */ FPUSH(R_F32((u32)(0x9073e0u)));
    /* 004bbfc0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbfc2: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbfc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbfca: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bbfcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbfce: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 004bbfd4: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbfd6: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bbfd8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bbfda: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbfe0: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004bbfe6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbfe8: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bbfea: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bbfec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bbfee: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bbff0: fld dword ptr [0x9073dc] */ FPUSH(R_F32((u32)(0x9073dcu)));
    /* 004bbff6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bbff8: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bbffe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc000: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc002: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc004: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 004bc00a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc00c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc00e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc010: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc016: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 004bc01c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc01e: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc020: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc022: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc024: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc026: fld dword ptr [0x9073d8] */ FPUSH(R_F32((u32)(0x9073d8u)));
    /* 004bc02c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc02e: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc034: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc036: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc038: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bc03a: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc03c: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 004bc042: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc044: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc046: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc04c: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004bc052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc054: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004bc056: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc058: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc05a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc05c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc05e: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 004bc060: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc062: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc064: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc066: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc068: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004bc06a: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc070: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 004bc076: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc07c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc07e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc080: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bc086: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc088: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 004bc08e: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc094: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bc09a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc09c: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 004bc0a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc0a4: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004bc0a8: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004bc0ac: mov dword ptr [ebp + 0x68], 0 */ W32((u32)(r_ebp+0x68u), 0x0u);
    /* 004bc0b3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004bc0b5: mov eax, 3 */ r_eax = 0x3u;
    /* 004bc0ba: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 004bc0c1: lea edx, [ebp + 0x74] */ r_edx = (u32)(r_ebp+0x74u);
    /* 004bc0c4: mov edi, edx */ r_edi = r_edx;
    /* 004bc0c6: mov dword ptr [ebp + 0x70], 0 */ W32((u32)(r_ebp+0x70u), 0x0u);
    /* 004bc0cd: mov ebp, eax */ r_ebp = r_eax;
L_004bc0cf:; BB(0x004bc0cf);
    /* 004bc0cf: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004bc0d3: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004bc0d7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 004bc0d9: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 004bc0dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc0de: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 004bc0e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc0e4: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 004bc0e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc0ea: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 004bc0ec: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc0ee: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 004bc0f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc0f4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004bc0f6: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 004bc0fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc0fc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004bc0fe: fmul qword ptr [0x9072d0] */ ST(0) = ST(0) * R_F64((u32)(0x9072d0u));
    /* 004bc104: fdiv qword ptr [0x9072c8] */ ST(0) = ST(0) / R_F64((u32)(0x9072c8u));
    /* 004bc10a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 004bc10e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc112: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc117: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc11c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc120: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc124: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc128: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc12c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004bc130: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004bc132: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bc134: mov dword ptr [ecx + ebp*4 + 0xf4], esi */ W32((u32)(r_ecx+r_ebp*4+0xf4u), r_esi);
    /* 004bc13b: mov esi, eax */ r_esi = r_eax;
    /* 004bc13d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bc13e: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004bc142: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bc144: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004bc148: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bc14a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc14c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004bc14f: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4bc154u); f_0082dc9c();
    /* 004bc154: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 004bc156: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 004bc15d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004bc160: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 004bc167: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bc16a: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bc16d: jle 0x4bc0cf */ if ((fZ||fS!=fO)) goto L_004bc0cf;
L_004bc173:; BB(0x004bc173);
    /* 004bc173: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004bc177: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004bc17b: fld dword ptr [0x9073fc] */ FPUSH(R_F32((u32)(0x9073fcu)));
    /* 004bc181: mov edx, dword ptr [ebp + 0x120] */ r_edx = R32((u32)(r_ebp+0x120u));
    /* 004bc187: fld dword ptr [ebp + 0x15c] */ FPUSH(R_F32((u32)(r_ebp+0x15cu)));
    /* 004bc18d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bc18f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bc191: mov dword ptr [ebp + 0x124], edx */ W32((u32)(r_ebp+0x124u), r_edx);
    /* 004bc197: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bc198: jae 0x4bcc95 */ if (!fC) goto L_004bcc95;
L_004bc19e:; BB(0x004bc19e);
    /* 004bc19e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004bc1a0: fld dword ptr [0xa47b58] */ FPUSH(R_F32((u32)(0xa47b58u)));
    /* 004bc1a6: fld dword ptr [ebp + 0x160] */ FPUSH(R_F32((u32)(r_ebp+0x160u)));
    /* 004bc1ac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bc1ae: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc1b0: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 004bc1b3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bc1b5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc1b7: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 004bc1ba: fld dword ptr [ebp + 0x80] */ FPUSH(R_F32((u32)(r_ebp+0x80u)));
    /* 004bc1c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc1c2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc1c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc1c6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc1c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bc1ca: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 004bc1cd: fld dword ptr [0xa47b64] */ FPUSH(R_F32((u32)(0xa47b64u)));
    /* 004bc1d3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc1d5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc1d7: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bc1da: fld dword ptr [0xa47b70] */ FPUSH(R_F32((u32)(0xa47b70u)));
    /* 004bc1e0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc1e2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc1e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc1e6: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 004bc1ec: fld dword ptr [ebp + 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0x8cu)));
    /* 004bc1f2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc1f4: fld dword ptr [0xa47b7c] */ FPUSH(R_F32((u32)(0xa47b7cu)));
    /* 004bc1fa: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc1fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc1fe: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 004bc204: fld dword ptr [ebp + 0x98] */ FPUSH(R_F32((u32)(r_ebp+0x98u)));
    /* 004bc20a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc20c: fld dword ptr [0xa47b88] */ FPUSH(R_F32((u32)(0xa47b88u)));
    /* 004bc212: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc214: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc216: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 004bc21c: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 004bc222: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc224: fld dword ptr [0xa47b94] */ FPUSH(R_F32((u32)(0xa47b94u)));
    /* 004bc22a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc22c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc22e: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 004bc234: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 004bc23a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc23c: fld dword ptr [0xa47ba0] */ FPUSH(R_F32((u32)(0xa47ba0u)));
    /* 004bc242: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc244: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc246: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004bc24c: fld dword ptr [ebp + 0xbc] */ FPUSH(R_F32((u32)(r_ebp+0xbcu)));
    /* 004bc252: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc254: fld dword ptr [0xa47bac] */ FPUSH(R_F32((u32)(0xa47bacu)));
    /* 004bc25a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc25c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc25e: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 004bc264: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004bc26a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc26c: fld dword ptr [0xa47bb8] */ FPUSH(R_F32((u32)(0xa47bb8u)));
    /* 004bc272: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc274: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc276: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004bc27c: fld dword ptr [ebp + 0xd4] */ FPUSH(R_F32((u32)(r_ebp+0xd4u)));
    /* 004bc282: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc284: fld dword ptr [0xa47bc4] */ FPUSH(R_F32((u32)(0xa47bc4u)));
    /* 004bc28a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004bc28c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc28e: fild dword ptr [ebp + 0x100] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x100u)));
    /* 004bc294: fld dword ptr [0x9073d4] */ FPUSH(R_F32((u32)(0x9073d4u)));
    /* 004bc29a: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc29c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc29e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc2a0: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 004bc2a6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc2a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc2aa: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc2ae: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc2b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc2b8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc2bc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc2c0: fistp dword ptr [ebp + 0x100] */ W32((u32)(r_ebp+0x100u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc2c6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc2ca: fild dword ptr [ebp + 0x104] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x104u)));
    /* 004bc2d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc2d2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc2d6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc2db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc2e0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc2e4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc2e8: fistp dword ptr [ebp + 0x104] */ W32((u32)(r_ebp+0x104u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc2ee: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc2f2: fild dword ptr [ebp + 0x108] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x108u)));
    /* 004bc2f8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc2fa: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc2fe: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc303: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc308: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc30c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc310: fistp dword ptr [ebp + 0x108] */ W32((u32)(r_ebp+0x108u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc316: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc31a: fild dword ptr [ebp + 0x10c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10cu)));
    /* 004bc320: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc322: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc326: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc32b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc330: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc334: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc338: fistp dword ptr [ebp + 0x10c] */ W32((u32)(r_ebp+0x10cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc33e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc342: fild dword ptr [ebp + 0x110] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x110u)));
    /* 004bc348: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc34a: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc34e: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc353: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc358: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc35c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc360: fistp dword ptr [ebp + 0x110] */ W32((u32)(r_ebp+0x110u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc366: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc36a: fild dword ptr [ebp + 0x114] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x114u)));
    /* 004bc370: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc372: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc376: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc37b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc380: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc384: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc388: fistp dword ptr [ebp + 0x114] */ W32((u32)(r_ebp+0x114u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc38e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc392: fild dword ptr [ebp + 0x118] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x118u)));
    /* 004bc398: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc39a: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc39e: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc3a3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc3a8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc3ac: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc3b0: fistp dword ptr [ebp + 0x118] */ W32((u32)(r_ebp+0x118u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc3b6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc3ba: fild dword ptr [ebp + 0x11c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x11cu)));
    /* 004bc3c0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc3c2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc3c6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc3cb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc3d0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc3d4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc3d8: fistp dword ptr [ebp + 0x11c] */ W32((u32)(r_ebp+0x11cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc3de: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc3e2: fild dword ptr [ebp + 0x120] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x120u)));
    /* 004bc3e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc3ea: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc3ee: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc3f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc3f8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc3fc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc400: fistp dword ptr [ebp + 0x120] */ W32((u32)(r_ebp+0x120u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc406: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc40a: fild dword ptr [ebp + 0x124] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x124u)));
    /* 004bc410: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc412: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc416: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc41b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc420: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc424: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc428: fistp dword ptr [ebp + 0x124] */ W32((u32)(r_ebp+0x124u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc42e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc432: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bc437:; BB(0x004bc437);
    /* 004bc437: fld dword ptr [0x9073b0] */ FPUSH(R_F32((u32)(0x9073b0u)));
    /* 004bc43d: fadd dword ptr [ebp + 0x158] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x158u));
    /* 004bc443: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 004bc447: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bc449: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bc44a: ja 0x4bc454 */ if ((!fC&&!fZ)) goto L_004bc454;
L_004bc44c:; BB(0x004bc44c);
    /* 004bc44c: fst dword ptr [ebp + 0x158] */ W_F32((u32)(r_ebp+0x158u), ST(0));
    /* 004bc452: jmp 0x4bc4a2 */ goto L_004bc4a2;
L_004bc454:; BB(0x004bc454);
    /* 004bc454: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bc456: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004bc45a: fstp dword ptr [ebp + 0x158] */ W_F32((u32)(r_ebp+0x158u), ST(0)); FPOP();
    /* 004bc460: mov dword ptr [ebp + 0x164], 0 */ W32((u32)(r_ebp+0x164u), 0x0u);
    /* 004bc46a: mov dword ptr [ebp + 0x38], 2 */ W32((u32)(r_ebp+0x38u), 0x2u);
    /* 004bc471: call 0x4b9968 */ r_esp -= 4; W32(r_esp, 0x4bc476u); f_004b9968();
    /* 004bc476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bc478: je 0x4bc486 */ if (fZ) goto L_004bc486;
L_004bc47a:; BB(0x004bc47a);
    /* 004bc47a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004bc47e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc47f: mov ecx, eax */ r_ecx = r_eax;
    /* 004bc481: call 0x4b95c8 */ r_esp -= 4; W32(r_esp, 0x4bc486u); f_004b95c8();
L_004bc486:; BB(0x004bc486);
    /* 004bc486: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004bc48a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004bc48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc48d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bc48e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bc48f: push 0x3f0 */ { u32 v = 0x3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc494: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4bc499u); f_00814298();
    /* 004bc499: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc49c: fld dword ptr [ebp + 0x158] */ FPUSH(R_F32((u32)(r_ebp+0x158u)));
L_004bc4a2:; BB(0x004bc4a2);
    /* 004bc4a2: fld dword ptr [0x907400] */ FPUSH(R_F32((u32)(0x907400u)));
    /* 004bc4a8: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004bc4ac: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bc4ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bc4b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bc4b1: ja 0x4bc4c3 */ if ((!fC&&!fZ)) goto L_004bc4c3;
L_004bc4b3:; BB(0x004bc4b3);
    /* 004bc4b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bc4b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bc4b7: mov dword ptr [ebp + 0x15c], 0x3f800000 */ W32((u32)(r_ebp+0x15cu), 0x3f800000u);
    /* 004bc4c1: jmp 0x4bc4cb */ goto L_004bc4cb;
L_004bc4c3:; BB(0x004bc4c3);
    /* 004bc4c3: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004bc4c5: fstp dword ptr [ebp + 0x15c] */ W_F32((u32)(r_ebp+0x15cu), ST(0)); FPOP();
L_004bc4cb:; BB(0x004bc4cb);
    /* 004bc4cb: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004bc4d0: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 004bc4d3: push dword ptr [eax*4 + 0x9073a0] */ { u32 v = R32((u32)(r_eax*4+0x9073a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bc4da: push dword ptr [ebp + 0x140] */ { u32 v = R32((u32)(r_ebp+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bc4e0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bc4e5u); f_007a8c74();
    /* 004bc4e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bc4e8: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004bc4ec: fmul dword ptr [0x9073f8] */ ST(0) = ST(0) * R_F32((u32)(0x9073f8u));
    /* 004bc4f2: fld dword ptr [0x90741c] */ FPUSH(R_F32((u32)(0x90741cu)));
    /* 004bc4f8: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 004bc4fb: fld dword ptr [ebp + 0x158] */ FPUSH(R_F32((u32)(r_ebp+0x158u)));
    /* 004bc501: fld dword ptr [0x9073f4] */ FPUSH(R_F32((u32)(0x9073f4u)));
    /* 004bc507: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bc50d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc50f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004bc511: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc513: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc515: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 004bc517: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bc519: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 004bc51b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc51d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc51f: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc525: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 004bc528: fld dword ptr [0x9073fc] */ FPUSH(R_F32((u32)(0x9073fcu)));
    /* 004bc52e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc530: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc532: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc534: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004bc538: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004bc53c: mov dword ptr [ebp + 0x140], eax */ W32((u32)(r_ebp+0x140u), r_eax);
    /* 004bc542: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc544: fchs  */ ST(0) = -ST(0);
    /* 004bc546: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004bc548: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc54a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004bc54c: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 004bc54e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc550: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 004bc552: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc558: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004bc55b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc55d: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc563: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc565: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc567: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc569: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bc56c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc56e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc570: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc572: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc574: fld dword ptr [0x9073f0] */ FPUSH(R_F32((u32)(0x9073f0u)));
    /* 004bc57a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc57c: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc582: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc584: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc586: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc588: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 004bc58b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc58d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc58f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc591: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc597: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 004bc59d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc59f: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc5a1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc5a3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc5a5: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc5a7: fld dword ptr [0x9073ec] */ FPUSH(R_F32((u32)(0x9073ecu)));
    /* 004bc5ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5af: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc5b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5b7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc5b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5bb: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 004bc5c1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc5c3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc5c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc5c7: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc5cd: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 004bc5d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5d5: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc5d7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc5d9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc5db: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc5dd: fld dword ptr [0x9073e8] */ FPUSH(R_F32((u32)(0x9073e8u)));
    /* 004bc5e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5e5: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc5eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5ed: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc5ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc5f1: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 004bc5f7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc5f9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc5fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc5fd: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc603: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 004bc609: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc60b: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc60d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc60f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc611: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc613: fld dword ptr [0x9073e4] */ FPUSH(R_F32((u32)(0x9073e4u)));
    /* 004bc619: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc61b: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc621: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc623: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc625: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc627: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 004bc62d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc62f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc631: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc633: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc639: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 004bc63f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc641: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc643: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc645: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc647: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc649: fld dword ptr [0x9073e0] */ FPUSH(R_F32((u32)(0x9073e0u)));
    /* 004bc64f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc651: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc657: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc659: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc65b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc65d: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 004bc663: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc665: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc667: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc669: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc66f: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004bc675: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc677: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc679: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc67b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc67d: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc67f: fld dword ptr [0x9073dc] */ FPUSH(R_F32((u32)(0x9073dcu)));
    /* 004bc685: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc687: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc68d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc68f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc691: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc693: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 004bc699: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc69b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc69d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc69f: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc6a5: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 004bc6ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6ad: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004bc6af: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc6b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc6b3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004bc6b5: fld dword ptr [0x9073d8] */ FPUSH(R_F32((u32)(0x9073d8u)));
    /* 004bc6bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6bd: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc6c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6c5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc6c7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bc6c9: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc6cb: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 004bc6d1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc6d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc6d5: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc6db: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004bc6e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6e3: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004bc6e5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004bc6e7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc6e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bc6eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc6ed: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 004bc6ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6f1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc6f3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc6f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc6f7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004bc6f9: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc6ff: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 004bc705: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc70b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc70d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc70f: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bc715: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc717: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 004bc71d: fmul dword ptr [0xa47f10] */ ST(0) = ST(0) * R_F32((u32)(0xa47f10u));
    /* 004bc723: fld dword ptr [0x907404] */ FPUSH(R_F32((u32)(0x907404u)));
    /* 004bc729: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc72b: fstp dword ptr [ebp + 0xd8] */ W_F32((u32)(r_ebp+0xd8u), ST(0)); FPOP();
    /* 004bc731: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc733: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004bc737: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004bc73b: mov dword ptr [ebp + 0x68], 0 */ W32((u32)(r_ebp+0x68u), 0x0u);
    /* 004bc742: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004bc744: mov eax, 3 */ r_eax = 0x3u;
    /* 004bc749: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 004bc750: lea edx, [ebp + 0x74] */ r_edx = (u32)(r_ebp+0x74u);
    /* 004bc753: mov edi, edx */ r_edi = r_edx;
    /* 004bc755: mov dword ptr [ebp + 0x70], 0 */ W32((u32)(r_ebp+0x70u), 0x0u);
    /* 004bc75c: mov ebp, eax */ r_ebp = r_eax;
L_004bc75e:; BB(0x004bc75e);
    /* 004bc75e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004bc762: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004bc766: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 004bc768: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 004bc76b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc76d: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 004bc771: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc773: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 004bc777: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc779: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 004bc77b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc77d: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 004bc781: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bc783: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004bc785: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 004bc789: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc78b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004bc78d: fmul qword ptr [0x9072d0] */ ST(0) = ST(0) * R_F64((u32)(0x9072d0u));
    /* 004bc793: fdiv qword ptr [0x9072c8] */ ST(0) = ST(0) / R_F64((u32)(0x9072c8u));
    /* 004bc799: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 004bc79d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc7a1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc7a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc7ab: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc7af: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc7b3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc7b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc7bb: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004bc7bf: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004bc7c1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bc7c3: mov dword ptr [ecx + ebp*4 + 0xf4], esi */ W32((u32)(r_ecx+r_ebp*4+0xf4u), r_esi);
    /* 004bc7ca: mov esi, eax */ r_esi = r_eax;
    /* 004bc7cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bc7cd: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004bc7d1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bc7d3: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004bc7d7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004bc7d9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc7db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004bc7de: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4bc7e3u); f_0082dc9c();
    /* 004bc7e3: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 004bc7e5: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 004bc7ec: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004bc7ef: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 004bc7f6: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bc7f9: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004bc7fc: jle 0x4bc75e */ if ((fZ||fS!=fO)) goto L_004bc75e;
L_004bc802:; BB(0x004bc802);
    /* 004bc802: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004bc806: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004bc80a: fld dword ptr [0x9073fc] */ FPUSH(R_F32((u32)(0x9073fcu)));
    /* 004bc810: mov edx, dword ptr [ebp + 0x120] */ r_edx = R32((u32)(r_ebp+0x120u));
    /* 004bc816: fld dword ptr [ebp + 0x15c] */ FPUSH(R_F32((u32)(r_ebp+0x15cu)));
    /* 004bc81c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004bc81e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bc820: mov dword ptr [ebp + 0x124], edx */ W32((u32)(r_ebp+0x124u), r_edx);
    /* 004bc826: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bc827: jae 0x4bcc9e */ if (!fC) goto L_004bcc9e;
L_004bc82d:; BB(0x004bc82d);
    /* 004bc82d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004bc82f: fld dword ptr [0xa47b58] */ FPUSH(R_F32((u32)(0xa47b58u)));
    /* 004bc835: fld dword ptr [ebp + 0x160] */ FPUSH(R_F32((u32)(r_ebp+0x160u)));
    /* 004bc83b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bc83d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bc83f: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 004bc842: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bc844: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc846: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 004bc849: fld dword ptr [ebp + 0x80] */ FPUSH(R_F32((u32)(r_ebp+0x80u)));
    /* 004bc84f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc851: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc853: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc855: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004bc857: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bc859: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 004bc85c: fld dword ptr [0xa47b64] */ FPUSH(R_F32((u32)(0xa47b64u)));
    /* 004bc862: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc864: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc866: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bc869: fld dword ptr [0xa47b70] */ FPUSH(R_F32((u32)(0xa47b70u)));
    /* 004bc86f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc871: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc873: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc875: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 004bc87b: fld dword ptr [ebp + 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0x8cu)));
    /* 004bc881: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc883: fld dword ptr [0xa47b7c] */ FPUSH(R_F32((u32)(0xa47b7cu)));
    /* 004bc889: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc88b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc88d: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 004bc893: fld dword ptr [ebp + 0x98] */ FPUSH(R_F32((u32)(r_ebp+0x98u)));
    /* 004bc899: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc89b: fld dword ptr [0xa47b88] */ FPUSH(R_F32((u32)(0xa47b88u)));
    /* 004bc8a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8a3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc8a5: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 004bc8ab: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 004bc8b1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8b3: fld dword ptr [0xa47b94] */ FPUSH(R_F32((u32)(0xa47b94u)));
    /* 004bc8b9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc8bd: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 004bc8c3: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 004bc8c9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8cb: fld dword ptr [0xa47ba0] */ FPUSH(R_F32((u32)(0xa47ba0u)));
    /* 004bc8d1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8d3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc8d5: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004bc8db: fld dword ptr [ebp + 0xbc] */ FPUSH(R_F32((u32)(r_ebp+0xbcu)));
    /* 004bc8e1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8e3: fld dword ptr [0xa47bac] */ FPUSH(R_F32((u32)(0xa47bacu)));
    /* 004bc8e9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8eb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc8ed: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 004bc8f3: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004bc8f9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc8fb: fld dword ptr [0xa47bb8] */ FPUSH(R_F32((u32)(0xa47bb8u)));
    /* 004bc901: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc903: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc905: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004bc90b: fld dword ptr [ebp + 0xd4] */ FPUSH(R_F32((u32)(r_ebp+0xd4u)));
    /* 004bc911: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc913: fld dword ptr [0xa47bc4] */ FPUSH(R_F32((u32)(0xa47bc4u)));
    /* 004bc919: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004bc91b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bc91d: fild dword ptr [ebp + 0x100] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x100u)));
    /* 004bc923: fld dword ptr [0x9073d4] */ FPUSH(R_F32((u32)(0x9073d4u)));
    /* 004bc929: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004bc92b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bc92d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc92f: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 004bc935: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004bc937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bc939: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc93d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc942: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc947: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc94b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc94f: fistp dword ptr [ebp + 0x100] */ W32((u32)(r_ebp+0x100u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc955: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc959: fild dword ptr [ebp + 0x104] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x104u)));
    /* 004bc95f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc961: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc965: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc96a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc96f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc973: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc977: fistp dword ptr [ebp + 0x104] */ W32((u32)(r_ebp+0x104u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc97d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc981: fild dword ptr [ebp + 0x108] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x108u)));
    /* 004bc987: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc989: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc98d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc992: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc997: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc99b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc99f: fistp dword ptr [ebp + 0x108] */ W32((u32)(r_ebp+0x108u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc9a5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc9a9: fild dword ptr [ebp + 0x10c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10cu)));
    /* 004bc9af: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc9b1: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc9b5: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc9ba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc9bf: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc9c3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc9c7: fistp dword ptr [ebp + 0x10c] */ W32((u32)(r_ebp+0x10cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc9cd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc9d1: fild dword ptr [ebp + 0x110] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x110u)));
    /* 004bc9d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bc9d9: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bc9dd: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bc9e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bc9e7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bc9eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bc9ef: fistp dword ptr [ebp + 0x110] */ W32((u32)(r_ebp+0x110u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bc9f5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bc9f9: fild dword ptr [ebp + 0x114] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x114u)));
    /* 004bc9ff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bca01: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bca05: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bca0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bca0f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bca13: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bca17: fistp dword ptr [ebp + 0x114] */ W32((u32)(r_ebp+0x114u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bca1d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bca21: fild dword ptr [ebp + 0x118] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x118u)));
    /* 004bca27: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bca29: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bca2d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bca32: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bca37: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bca3b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bca3f: fistp dword ptr [ebp + 0x118] */ W32((u32)(r_ebp+0x118u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bca45: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bca49: fild dword ptr [ebp + 0x11c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x11cu)));
    /* 004bca4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bca51: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bca55: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bca5a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bca5f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bca63: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bca67: fistp dword ptr [ebp + 0x11c] */ W32((u32)(r_ebp+0x11cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bca6d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bca71: fild dword ptr [ebp + 0x120] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x120u)));
    /* 004bca77: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bca79: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bca7d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bca82: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bca87: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bca8b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bca8f: fistp dword ptr [ebp + 0x120] */ W32((u32)(r_ebp+0x120u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bca95: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bca99: fild dword ptr [ebp + 0x124] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x124u)));
    /* 004bca9f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bcaa1: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bcaa5: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bcaaa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bcaaf: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bcab3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bcab7: fistp dword ptr [ebp + 0x124] */ W32((u32)(r_ebp+0x124u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bcabd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
L_004bcac1:; BB(0x004bcac1);
    /* 004bcac1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bcac3: call 0x4bcda0 */ r_esp -= 4; W32(r_esp, 0x4bcac8u); f_004bcda0();
    /* 004bcac8: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bcacb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bcacc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bcacd: mov esp, ebx */ r_esp = r_ebx;
    /* 004bcacf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bcad0: ret  */ FN_RET(0x004bbbf8); r_esp += 4; return;
L_004bcad1:; BB(0x004bcad1);
    /* 004bcad1: fld dword ptr [0x9073d0] */ FPUSH(R_F32((u32)(0x9073d0u)));
    /* 004bcad7: fadd dword ptr [ebp + 0x160] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x160u));
    /* 004bcadd: fcom dword ptr [0x9073cc] */ fx_compare(ST(0), R_F32((u32)(0x9073ccu))); 
    /* 004bcae3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bcae5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bcae6: ja 0x4bcb0e */ if ((!fC&&!fZ)) goto L_004bcb0e;
L_004bcae8:; BB(0x004bcae8);
    /* 004bcae8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcaea: fld dword ptr [0x9073cc] */ FPUSH(R_F32((u32)(0x9073ccu)));
    /* 004bcaf0: mov dword ptr [ebp + 0x164], 0 */ W32((u32)(r_ebp+0x164u), 0x0u);
    /* 004bcafa: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 004bcaff: mov dword ptr [ebp + 0x38], 1 */ W32((u32)(r_ebp+0x38u), 0x1u);
    /* 004bcb06: mov dword ptr [ebp + 0x160], eax */ W32((u32)(r_ebp+0x160u), r_eax);
    /* 004bcb0c: jmp 0x4bcb14 */ goto L_004bcb14;
L_004bcb0e:; BB(0x004bcb0e);
    /* 004bcb0e: fst dword ptr [ebp + 0x160] */ W_F32((u32)(r_ebp+0x160u), ST(0));
L_004bcb14:; BB(0x004bcb14);
    /* 004bcb14: fld dword ptr [0xa47b58] */ FPUSH(R_F32((u32)(0xa47b58u)));
    /* 004bcb1a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb1c: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 004bcb1f: fld dword ptr [0xa47b64] */ FPUSH(R_F32((u32)(0xa47b64u)));
    /* 004bcb25: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb27: fstp dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0)); FPOP();
    /* 004bcb2a: fld dword ptr [0xa47b70] */ FPUSH(R_F32((u32)(0xa47b70u)));
    /* 004bcb30: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb32: fstp dword ptr [ebp + 0x80] */ W_F32((u32)(r_ebp+0x80u), ST(0)); FPOP();
    /* 004bcb38: fld dword ptr [0xa47b7c] */ FPUSH(R_F32((u32)(0xa47b7cu)));
    /* 004bcb3e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb40: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 004bcb46: fld dword ptr [0xa47b88] */ FPUSH(R_F32((u32)(0xa47b88u)));
    /* 004bcb4c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb4e: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 004bcb54: fld dword ptr [0xa47b94] */ FPUSH(R_F32((u32)(0xa47b94u)));
    /* 004bcb5a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb5c: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 004bcb62: fld dword ptr [0xa47ba0] */ FPUSH(R_F32((u32)(0xa47ba0u)));
    /* 004bcb68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb6a: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 004bcb70: fld dword ptr [0xa47bac] */ FPUSH(R_F32((u32)(0xa47bacu)));
    /* 004bcb76: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb78: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
    /* 004bcb7e: fld dword ptr [0xa47bb8] */ FPUSH(R_F32((u32)(0xa47bb8u)));
    /* 004bcb84: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bcb86: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004bcb8c: fld dword ptr [0xa47bc4] */ FPUSH(R_F32((u32)(0xa47bc4u)));
    /* 004bcb92: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bcb94: mov dword ptr [ebp + 0x100], 0x4000 */ W32((u32)(r_ebp+0x100u), 0x4000u);
    /* 004bcb9e: fstp dword ptr [ebp + 0xd4] */ W_F32((u32)(r_ebp+0xd4u), ST(0)); FPOP();
    /* 004bcba4: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcba9:; BB(0x004bcba9);
    /* 004bcba9: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbb0: push dword ptr [ebp + 0x13c] */ { u32 v = R32((u32)(r_ebp+0x13cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004bcbb6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bcbbbu); f_007a8c74();
    /* 004bcbbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbbe: mov dword ptr [ebp + 0x13c], eax */ W32((u32)(r_ebp+0x13cu), r_eax);
    /* 004bcbc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bcbc6: jne 0x4bcac1 */ if (!fZ) goto L_004bcac1;
L_004bcbcc:; BB(0x004bcbcc);
    /* 004bcbcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bcbce: call 0x4bcd44 */ r_esp -= 4; W32(r_esp, 0x4bcbd3u); f_004bcd44();
    /* 004bcbd3: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcbd8:; BB(0x004bcbd8);
    /* 004bcbd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bcbda: call 0x4bcd58 */ r_esp -= 4; W32(r_esp, 0x4bcbdfu); f_004bcd58();
    /* 004bcbdf: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbe4: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 004bcbe9: push dword ptr [ebp + 0x140] */ { u32 v = R32((u32)(r_ebp+0x140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004bcbef: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4bcbf4u); f_007a8c74();
    /* 004bcbf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bcbf7: mov dword ptr [ebp + 0x140], eax */ W32((u32)(r_ebp+0x140u), r_eax);
    /* 004bcbfd: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcc02:; BB(0x004bcc02);
    /* 004bcc02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004bcc04: call 0x4bcd58 */ r_esp -= 4; W32(r_esp, 0x4bcc09u); f_004bcd58();
    /* 004bcc09: mov ecx, dword ptr [ebp + 0x148] */ r_ecx = R32((u32)(r_ebp+0x148u));
    /* 004bcc0f: add ecx, dword ptr [ebp + 0x144] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x144u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004bcc15: mov dword ptr [ebp + 0x148], ecx */ W32((u32)(r_ebp+0x148u), r_ecx);
    /* 004bcc1b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4bcc20u); f_0082dcbc();
    /* 004bcc20: fld dword ptr [0xa47f14] */ FPUSH(R_F32((u32)(0xa47f14u)));
    /* 004bcc26: fld dword ptr [0x9073fc] */ FPUSH(R_F32((u32)(0x9073fcu)));
    /* 004bcc2c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bcc2e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bcc32: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bcc37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bcc3c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bcc40: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bcc44: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bcc48: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bcc4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004bcc4e: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004bcc52: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bcc54: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004bcc58: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004bcc5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bcc62: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004bcc66: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004bcc6a: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004bcc6e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004bcc72: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 004bcc75: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004bcc77: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004bcc7b: jne 0x4bcc8a */ if (!fZ) goto L_004bcc8a;
L_004bcc7d:; BB(0x004bcc7d);
    /* 004bcc7d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004bcc7f: mov dword ptr [ebp + 0x13c], edx */ W32((u32)(r_ebp+0x13cu), r_edx);
    /* 004bcc85: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcc8a:; BB(0x004bcc8a);
    /* 004bcc8a: mov dword ptr [ebp + 0x13c], edx */ W32((u32)(r_ebp+0x13cu), r_edx);
    /* 004bcc90: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcc95:; BB(0x004bcc95);
    /* 004bcc95: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004bcc97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcc99: jmp 0x4bcac1 */ goto L_004bcac1;
L_004bcc9e:; BB(0x004bcc9e);
    /* 004bcc9e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004bcca0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bcca2: jmp 0x4bcac1 */ goto L_004bcac1;
}

